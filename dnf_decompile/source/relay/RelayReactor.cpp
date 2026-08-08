// df_relay_r — EpollReactor/TReactor（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "RelayReactor.h"

namespace RelayServiceApp
{

typedef TReactor<EpollReactor<TCPUser, TCPSocket, TCPSocket>, TCPUser, TCPSocket, TCPSocket>
    RelayTReactor;

Reactor::Reactor()
{
}

Reactor::~Reactor()
{
}

void Reactor::unregistHandle(TCPUser* user)
{
    ((RelayTReactor*)this)->unregistHandle(user);
}

} // namespace RelayServiceApp

using namespace RelayServiceApp;

template <class TSession, class TSendSocket, class TRecvSocket>
unsigned int EpollReactor<TSession, TSendSocket, TRecvSocket>::getNativeEventFilter(
    unsigned int event_filter)
{
    unsigned int t = (event_filter & 1) != 0;
    if ((event_filter & 4) != 0)
    {
        t = t | 0x18;
    }
    return t;
}

template <class TSession, class TSendSocket, class TRecvSocket>
bool EpollReactor<TSession, TSendSocket, TRecvSocket>::registHandle(TSession* s,
                                                                    unsigned int event_filter)
{
    epoll_event ev;
    memset(&ev, 0, sizeof(epoll_event));
    ev.events = getNativeEventFilter(event_filter);
    ev.data.ptr = s;
    int r = epoll_ctl(epoll_fd_, EPOLL_CTL_ADD, s->getHandle(), &ev);
    return r > -1;
}

template <class TSession, class TSendSocket, class TRecvSocket>
bool EpollReactor<TSession, TSendSocket, TRecvSocket>::unregistHandle(TSession* s)
{
    if (s == 0)
    {
        return false;
    }
    if (epoll_fd_ == -1)
    {
        return false;
    }
    if (s->getHandle() == -1)
    {
        return false;
    }
    epoll_event ev;
    memset(&ev, 0, sizeof(epoll_event));
    int r = epoll_ctl(epoll_fd_, EPOLL_CTL_DEL, s->getHandle(), &ev);
    if (r < 0)
    {
        return false;
    }
    m_lock.lock();
    typename std::set<TSession*>::iterator it = m_users.find(s);
    if (it != m_users.end())
    {
        m_users.erase(it);
    }
    m_lock.unlock();
    return true;
}

template <class TSession, class TSendSocket, class TRecvSocket>
bool EpollReactor<TSession, TSendSocket, TRecvSocket>::handleEvents(
    unsigned int milisec, TSendSocket listenSocket, unsigned int maxEvents)
{
    epoll_event ev;
    memset(&ev, 0, sizeof(epoll_event));
    ev.events = 1;
    ev.data.ptr = (void*)listenSocket.getHandle();
    epoll_ctl(epoll_fd_, EPOLL_CTL_ADD, listenSocket.getHandle(), &ev);
    while (true)
    {
        TSystem<LinuxSystem>::usleep(1);
        int n = epoll_wait(epoll_fd_, events_, max_client_, milisec);
        getManager()->setTick();
        getManager()->makeLog();
        while (true)
        {
            TCPSocket* sock = getManager()->m_userPools.createTCPSocket();
            if (sock == 0)
            {
                WriteLog("[CRITICAL] Reactor.inl: createTCPSocket() Error");
                break;
            }
            if (!listenSocket.accept(*sock))
            {
                WriteLog("Reactor.inl: listenSocket.accept() Error");
                getManager()->m_userPools.destroyTCPSocket(sock);
                break;
            }
            if (getManager()->m_users.getUserCount() >= getManager()->m_users.getMaxUserCount())
            {
                sock->close();
                getManager()->m_userPools.destroyTCPSocket(sock);
                break;
            }
            TCPUser* user = getManager()->m_userPools.createTCPUser();
            if (user == 0)
            {
                WriteLog("Reactor.inl: createTCPUser() Error");
                sock->close();
                getManager()->m_userPools.destroyTCPSocket(sock);
                break;
            }
            getManager()->m_users.increaseUserCount();
            sock->setOptNonBlock();
            user->setManager(getManager());
            user->setSocket(sock);
            user->startupAfterSetSocket();
            user->setLastAccessTime();
            user->onAccept();
            ev.events = getNativeEventFilter(1);
            ev.data.ptr = user;
            epoll_ctl(epoll_fd_, EPOLL_CTL_ADD, user->getHandle(), &ev);
            m_lock.lock();
            m_users.insert(user);
            m_lock.unlock();
            WriteLog("[CRITICAL] Reactor.inl: abnormal connection");
        }
        for (int i = 0; i < n; i++)
        {
            if (events_[i].data.ptr == (void*)listenSocket.getHandle())
            {
                continue;
            }
            TCPUser* user = (TCPUser*)events_[i].data.ptr;
            if ((events_[i].events & 8) == 0)
            {
                if ((events_[i].events & 0x10) == 0)
                {
                    if ((events_[i].events & 1) != 0)
                    {
                        user->onRead();
                    }
                    if (user->isDisconnected())
                    {
                        user->onClose();
                        continue;
                    }
                    if (user->isToWrite())
                    {
                        user->onWrite();
                    }
                    if (user->isDisconnected() || user->isAboutToDisconnect())
                    {
                        user->onClose();
                        continue;
                    }
                }
                else
                {
                    user->onClose();
                }
            }
            else
            {
                user->onClose();
            }
        }
        m_lock.lock();
        typename std::set<TSession*>::const_iterator it = m_users.begin();
        while (it != m_users.end())
        {
            TSession* user = *it;
            if (user->isAboutToDisconnect() || user->isIdle())
            {
                user->onClose();
            }
            it++;
        }
        m_lock.unlock();
    }
    return true;
}

// 显式实例化（全局作用域）
template class EpollReactor<RelayServiceApp::TCPUser, TCPSocket, TCPSocket>;
template class TReactor<EpollReactor<RelayServiceApp::TCPUser, TCPSocket, TCPSocket>,
                        RelayServiceApp::TCPUser, TCPSocket, TCPSocket>;
