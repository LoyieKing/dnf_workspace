//
// Created by Loyie King on 2024/3/17.
//

#pragma once

#include "Epoll.h"
namespace network_engine {

// <CNetworkSession, CEpoll> — 与原始二进制一致：第二参数为模板模板参数。
// 原始 mangled 名为 CSessionProxy<CNetworkSession, socket_event::CEpoll>（CEpoll 无实参），
// 重建原为具体类型 CEpoll<Session>，导致全部方法名不匹配。
template<class Session, template<class> class Epoll>
class CSessionProxy : Epoll<Session> {
public:
    void CreateEvents(int size);
    bool TryConnect(char const* ip, int port);
    void TryDisconnect(Session* networkSession);
    bool TryListen(const char* ip, int port);
    void WaitForSessionEvent(int timeout);
    ~CSessionProxy();
};

}  // namespace network_engine
