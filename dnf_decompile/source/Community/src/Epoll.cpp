//
// Created by Loyie King on 2024/3/16.
//

#include "Epoll.h"

#include <sys/epoll.h>

#include <cerrno>
#include <cstring>

#include "ArchiveLog.h"
#include "NetworkSession.h"

namespace socket_event {

template<class What>
inline int CEpoll<What>::CreateEvents(int size) {
    this->epfd = epoll_create(size);
    if (this->epfd < 0) {
        ArchiveLog("[Epoll::init] Can\'t init epoll create\n");
        return 0;
    } else {
        // pvVar3 = operator.new[](param_1 * 0xc);
        this->epollEvents = new epoll_event[size];
        if (this->epollEvents == NULL) {
            ArchiveLog("[Epoll::init] Can\'t alloc event memory\n");
            return 0;
        } else {
            this->eventCount = size;
            return 1;
        }
    }
}

template<class Session>
bool CEpoll<Session>::RegisterSession(Session *session, int triggerSessionEventType) {
    (session)->SetTriggerSessionEventType(triggerSessionEventType);
    epoll_event event;
    event.events = EPOLLIN | EPOLLOUT | EPOLLERR | EPOLLHUP;
    event.data.ptr = session;
    // 原始：call epoll_ctl 后 shr eax,0x1f + test al,al + je（调用结果直接入条件 < 0）
    // GetSocket() 结果直接作为实参（mov [esp+8],eax，不溢栈）
    if (epoll_ctl(this->epfd, EPOLL_CTL_ADD /*1*/, (session)->GetSocket(), &event) < 0) {
        return 0;
    }
    return 1;
}

template<class Session>
bool CEpoll<Session>::UnregisterSession(Session *session) {
    epoll_event event;
    memset(&event, 0, sizeof(event));
    // 原始：call epoll_ctl 后 shr eax,0x1f + test al,al + je（调用结果直接入条件 < 0）
    if (epoll_ctl(this->epfd, EPOLL_CTL_DEL /*2*/, (session)->GetSocket(), &event) < 0) {
        return 0;
    }
    return 1;
}

template<class Session>
int CEpoll<Session>::WaitForEvent(int timeout) {
    int count = epoll_wait(this->epfd, this->epollEvents, this->eventCount, timeout);
    if (count < 0 && errno != EINTR /*4*/ && errno != 0) {
        return 0;
    }
    // 原始：succeed 在循环外初始化（mov BYTE [ebp-0x1d],1），循环体内再显式赋值
    bool succeed = true;
    for (int i = 0; i < count; i++) {
        Session *session = (Session *)this->epollEvents[i].data.ptr;
        // 原始：newSession 先初始化 0（mov DWORD [ebp-0x14],0）再 succeed=true
        Session *newSession = NULL;
        succeed = true;
        if (this->epollEvents[i].events & EPOLLIN) {
            // 原始：(type & 8) != 0 分支在前（OnAccept），== 0 为 else（OnRecv）
            if (((session)->GetTriggerSessionEventType() & 8) != 0) {
                newSession = session->OnAccept();
                if (newSession != NULL) {
                    RegisterSession(newSession, 7);
                }
            } else {
                if ((session)->GetTriggerSessionEventType() & 1) {
                    succeed = session->OnRecv();
                }
            }
        }
        if (this->epollEvents[i].events & EPOLLOUT) {
            // 原始：(type & 0x10) != 0 分支在前（OnConnect），== 0 为 else（OnSend）
            if (((session)->GetTriggerSessionEventType() & 0x10) != 0) {
                succeed = (session)->OnConnect();
                if (succeed) {
                    (session)->SetTriggerSessionEventType(7);
                }
            } else {
                if ((session)->GetTriggerSessionEventType() & 2) {
                    int size = (session)->OnSend();
                    if (size < 0) {
                        succeed = false;
                    }
                }
            }
        }
        if (this->epollEvents[i].events & (EPOLLERR | EPOLLHUP)) {
            succeed = (char)(session)->OnError();
        }
        if (!succeed) {
            UnregisterSession(session);
            (session)->Disconnect();
        }
    }
    return 1;
}

template<class Session>
CEpoll<Session>::~CEpoll() {
    if(this->epollEvents != NULL) {
        delete[] this->epollEvents;
    }
    this->epollEvents = NULL;
}

template class CEpoll<CNetworkSession>;

}  // namespace socket_event
