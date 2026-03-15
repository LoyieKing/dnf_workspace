//
// Created by loyieking on 24-3-23.
//
#include "SessionProxy.h"

#include <sys/epoll.h>

#include "NetworkSession.h"

namespace network_engine {

template<class Session, class Epoll>
void CSessionProxy<Session, Epoll>::CreateEvents(int size) {
    Epoll::CreateEvents(size);
}

template<class Session, class Epoll>
bool CSessionProxy<Session, Epoll>::TryConnect(char const* ip, int port) {
    CNetworkSession* session = CNetworkSession::Connect(ip, port);
    if (session == NULL) {
        return false;
    }
    bool registered = Epoll::RegisterSession(session, /*0x14*/ EPOLLHUP | EPOLLOUT);
    if (!registered) {
        return false;
    }
    session->AddTriggerSessionEventType(/*0x10*/ 0x10);
    return true;
}

template<class Session, class Epoll>
void CSessionProxy<Session, Epoll>::TryDisconnect(Session* networkSession) {
    Epoll::UnregisterSession(networkSession);
    networkSession->Disconnect();
}

template<class Session, class Epoll>
bool CSessionProxy<Session, Epoll>::TryListen(const char* ip, int port) {
    CNetworkSession* session = CNetworkSession::CreateListenSocket(port, ip);
    if (session == NULL) {
        return false;
    }
    return Epoll::RegisterSession(session, /*0x8*/ EPOLLERR);
}

template<class Session, class Epoll>
void CSessionProxy<Session, Epoll>::WaitForSessionEvent(int timeout) {
    Epoll::WaitForEvent(timeout);
}

template<class Session, class Epoll>
CSessionProxy<Session, Epoll>::~CSessionProxy() {}

}  // namespace network_engine
