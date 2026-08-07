//
// Created by loyieking on 24-3-23.
//
#include "SessionProxy.h"

#include <sys/epoll.h>

#include "DNFFunctionLib.h"
#include "CommonConstants.h"

#include "NetworkSession.h"

namespace network_engine {

template<class Session, template<class> class Epoll>
void CSessionProxy<Session, Epoll>::CreateEvents(int size) {
    Epoll<Session>::CreateEvents(size);
}

template<class Session, template<class> class Epoll>
bool CSessionProxy<Session, Epoll>::TryConnect(char const* ip, int port) {
    CNetworkSession* session = CNetworkSession::Connect(ip, port);
    if (session == NULL) {
        return false;
    }
    if (!Epoll<Session>::RegisterSession(session, /*0x14*/ EPOLLHUP | EPOLLOUT)) {
        return false;
    }
    session->AddTriggerSessionEventType(/*0x10*/ 0x10);
    return true;
}

template<class Session, template<class> class Epoll>
void CSessionProxy<Session, Epoll>::TryDisconnect(Session* networkSession) {
    Epoll<Session>::UnregisterSession(networkSession);
    networkSession->Disconnect();
}

template<class Session, template<class> class Epoll>
bool CSessionProxy<Session, Epoll>::TryListen(const char* ip, int port) {
    // 原始：先初始化 NULL（mov [ebp-0xc],0），赋值在条件内（cmp; sete al; test al,al; je）
    CNetworkSession* session = NULL;
    if ((session = CNetworkSession::CreateListenSocket(port, ip)) == NULL) {
        return 0;
    }
    return Epoll<Session>::RegisterSession(session, /*0x8*/ EPOLLERR);
}

template<class Session, template<class> class Epoll>
void CSessionProxy<Session, Epoll>::WaitForSessionEvent(int timeout) {
    Epoll<Session>::WaitForEvent(timeout);
}

template<class Session, template<class> class Epoll>
CSessionProxy<Session, Epoll>::~CSessionProxy() {}

template class CSessionProxy<CNetworkSession, socket_event::CEpoll>;

}  // namespace network_engine
