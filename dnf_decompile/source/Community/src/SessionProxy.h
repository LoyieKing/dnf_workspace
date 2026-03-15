//
// Created by Loyie King on 2024/3/17.
//

#pragma once

#include "Epoll.h"
namespace network_engine {

// <CNetworkSession, CEpoll>
template<class Session, class Epoll>
class CSessionProxy : Epoll {
public:
    void CreateEvents(int size);
    bool TryConnect(char const* ip, int port);
    void TryDisconnect(Session* networkSession);
    bool TryListen(const char* ip, int port);
    void WaitForSessionEvent(int timeout);
    ~CSessionProxy();
};

template class CSessionProxy<CNetworkSession, socket_event::CEpoll<CNetworkSession> >;

}  // namespace network_engine
