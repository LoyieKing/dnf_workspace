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
    int socket = (session)->GetSocket();
    return epoll_ctl(this->epfd, EPOLL_CTL_ADD /*1*/, socket, &event) > -1;
}

template<class Session>
bool CEpoll<Session>::UnregisterSession(Session *session) {
    epoll_event event;
    memset(&event, 0, sizeof(event));
    int socket = (session)->GetSocket();
    return epoll_ctl(this->epfd, EPOLL_CTL_DEL /*2*/, socket, &event) > -1;
}

template<class Session>
int CEpoll<Session>::WaitForEvent(int timeout) {
    int count = epoll_wait(this->epfd, this->epollEvents, this->eventCount, timeout);
    if (count < 0 && errno != EINTR /*4*/ && errno != 0) {
        return 0;
    }
    for (int i = 0; i < count; i++) {
        Session *session = (Session *)this->epollEvents[i].data.ptr;
        bool succeed = true;
        if (this->epollEvents[i].events & EPOLLIN) {
            if (((session)->GetTriggerSessionEventType() & 8) == 0) {
                if ((session)->GetTriggerSessionEventType() & 1) {
                    succeed = session->OnRecv();
                }
            } else {
                Session *newSession = session->OnAccept();
                if (newSession != NULL) {
                    RegisterSession(newSession, 7);
                }
            }
        }
        if (this->epollEvents[i].events & EPOLLOUT) {
            if (((session)->GetTriggerSessionEventType() & 0x10) == 0) {
                if ((session)->GetTriggerSessionEventType() & 2) {
                    int size = (session)->OnSend();
                    if (size < 0) {
                        succeed = false;
                    }
                } else {
                    succeed = (session)->OnConnect();
                    if (succeed) {
                        (session)->SetTriggerSessionEventType(7);
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
}

template<class Session>
CEpoll<Session>::~CEpoll() {
    if(this->epollEvents != NULL) {
        delete[] this->epollEvents;
    }
    this->epollEvents = NULL;
}

}  // namespace socket_event