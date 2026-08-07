//
// Created by Loyie King on 2024/3/16.
//
#pragma once

#include <sys/epoll.h>

#include "ReverseEngineerLib.h"
#include "AbstractSocket.h"
#include "NetworkSession.h"

namespace socket_event {

template<class Session>
class CEpoll {
    epoll_event *epollEvents;  // offset 4
    int epfd;                  // offset 8
    int eventCount;            // offset 0xc

public:
    // 原始反编译：构造仅清零 epollEvents/epfd（eventCount 保持未初始化）
    CEpoll() : epollEvents(NULL), epfd(0) {}
    int CreateEvents(int size);
    bool RegisterSession(Session *session, int triggerSessionEventType);
    bool UnregisterSession(Session *session);
    int WaitForEvent(int timeout);
    virtual ~CEpoll();
};

}  // namespace socket_event
