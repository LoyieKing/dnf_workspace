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
    int CreateEvents(int size);
    bool RegisterSession(Session *session, int triggerSessionEventType);
    bool UnregisterSession(Session *session);
    int WaitForEvent(int timeout);
    virtual ~CEpoll();
};

template class CEpoll<CNetworkSession>;

}  // namespace socket_event