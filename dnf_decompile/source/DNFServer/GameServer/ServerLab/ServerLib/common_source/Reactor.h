#ifndef NSL_REACTOR_H_
#define NSL_REACTOR_H_

#include <map>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/epoll.h>
#include <new>

#include "Exception.h"
#include "Script.h"
#include "TraceLog.h"
#include "DataPool.h"
#include "TCPUser.h"
#include "TCPSocket.h"

namespace nsl {

template <class T>
class EpollReactor
{
public:
    EpollReactor()
    {
        epoll_fd_ = -1;
        max_client_ = 0;
        events_ = NULL;
    }
    ~EpollReactor()
    {
        shutdown();
    }
    bool init(int max_client)
    {
        this->max_client_ = max_client;
        printf("Epoll init::%d\n", max_client);
        return true;
    }
    void startup()
    {
        if (this->max_client_ < 1)
        {
            throw Exception(-1, "[EpollReactor< TSession >::Init] Invalid parameter : max_client(%d)\n", this->max_client_);
        }
        this->epoll_fd_ = epoll_create(this->max_client_);
        if (this->epoll_fd_ == -1)
        {
            printf("[EpollReactor< TSession >::Init] Can't create epoll device : max_client(%d)\n", this->max_client_);
        }
        this->events_ = new epoll_event[this->max_client_];
        if (this->events_ == NULL)
        {
            printf("[EpollReactor< TSession >::Init] Can't allocate epoll repository : max_client(%d)\n", this->max_client_);
        }
    }
    void shutdown()
    {
        if (this->epoll_fd_ != -1)
        {
            close(this->epoll_fd_);
            this->epoll_fd_ = -1;
            if (this->events_ != NULL)
            {
                operator delete[](this->events_);
            }
        }
    }
    bool handleEvents(unsigned int milisec, DataPool* pPool);
    bool registListenHandle(T* ServerSession)
    {
        epoll_event ev;
        memset(&ev, 0, sizeof(epoll_event));
        ev.events = EPOLLIN;
        ev.data.fd = ServerSession->getHandle();
        this->m_ServerSession = ServerSession;
        int iResult = epoll_ctl(this->epoll_fd_, EPOLL_CTL_ADD, ServerSession->getHandle(), &ev);
        if (iResult < 0)
        {
            printf("In %s : epoll_ctl error\n", "registListenHandle");
        }
        return iResult > -1;
    }
    bool registHandle(T* s, unsigned int event_filter)
    {
        epoll_event ev;
        memset(&ev, 0, sizeof(epoll_event));
        ev.events = getNativeEventFilter(event_filter);
        ev.data.ptr = s;
        if ((s->getHandle() == -1) || (this->epoll_fd_ == -1))
        {
            printf("regist handle fail1!!-%x\n", s->getHandle());
            exit(1);
        }
        int iResult = epoll_ctl(this->epoll_fd_, EPOLL_CTL_ADD, s->getHandle(), &ev);
        if (iResult < 0)
        {
            puts("regist handle fail2!!");
        }
        return iResult > -1;
    }
    bool unregistHandle(T* s)
    {
        if ((s->getHandle() == -1) || (this->epoll_fd_ == -1))
        {
            return false;
        }
        epoll_event ev;
        memset(&ev, 0, sizeof(epoll_event));
        int iResult = epoll_ctl(this->epoll_fd_, EPOLL_CTL_DEL, s->getHandle(), &ev);
        if (iResult < 0)
        {
            return false;
        }
        return true;
    }
    unsigned int getNativeEventFilter(unsigned int event_filter)
    {
        unsigned int t = (event_filter & 1) != 0;
        if ((event_filter & 4) != 0)
        {
            t = t | 0x18;
        }
        return t;
    }
    void addConnectedUser(unsigned int id, T* connectedUser, bool isServerUser);
    void delConnectedUser(unsigned int id, T* connectedUser);
    void GetConnectedUsersIter(typename std::map<unsigned int, T*>::iterator& s,
                               typename std::map<unsigned int, T*>::iterator& e, bool isServerUser);
    int GetServerUserCount()
    {
        return (int)mServerUsers.size();
    }

    std::map<unsigned int, T*> mClientUsers;
    std::map<unsigned int, T*> mServerUsers;
    T* m_ServerSession;
    int epoll_fd_;
    int max_client_;
    epoll_event* events_;
};

class Reactor
{
public:
    Reactor()
    {
        puts("Start Reactor~");
    }
    ~Reactor()
    {
    }
    EpollReactor<TCPUser>* getReactor()
    {
        return &reactor_;
    }

    EpollReactor<TCPUser> reactor_;
};

typedef EpollReactor<TCPUser> TCPReactor;

template <class T>
bool EpollReactor<T>::handleEvents(unsigned int milisec, DataPool* pPool)
{
    int n_event = epoll_wait(this->epoll_fd_, this->events_, this->max_client_, milisec);
    if (n_event < 0)
    {
        return false;
    }
    for (int i = 0; i < n_event; i++)
    {
        if ((G_Script()->findIntValue(0, 4) == 0x5209) || (this->m_ServerSession == NULL)
            || (this->events_[i].data.ptr != (void*)this->m_ServerSession->getHandle()))
        {
            TCPUser* s = *(TCPUser**)&this->events_[i].data;
            unsigned int session_id = s->getUserId();
            if ((this->events_[i].events & 8) == 0)
            {
                if ((this->events_[i].events & 0x10) == 0)
                {
                    if ((this->events_[i].events & 1) != 0)
                    {
                        s->onRead();
                        if (s->isDisconnected())
                        {
                            continue;
                        }
                    }
                    if (s->isAboutToDisconnect())
                    {
                        if (s->onPassiveClose("../basic_header/Reactor.inl", 0x11e))
                        {
                            delConnectedUser(session_id, s);
                        }
                    }
                }
                else
                {
                    if (s->onPassiveClose("../basic_header/Reactor.inl", 0x103))
                    {
                        delConnectedUser(session_id, s);
                    }
                }
            }
            else
            {
                if (s->onPassiveClose("../basic_header/Reactor.inl", 0xf5))
                {
                    delConnectedUser(session_id, s);
                }
            }
        }
        else
        {
            TCPUser* newSession = pPool->createTCPUser();
            newSession->setNeedReconnect(false);
            newSession->setLastAccessTime();
            TCPSocket* pSock = pPool->createTCPSocket();
            newSession->setSocket(pSock);
            if (this->m_ServerSession->getSocket()->accept(*newSession->getSocket()))
            {
                newSession->setRecvDataType(TCPUser::RECV_DATA_NORMAL);
                newSession->setSendDataType(TCPUser::SEND_DATA_NORMAL);
                unsigned int count = pPool->GetTcpUserCount();
                if ((int)count < G_Script()->findIntValue(0, 2) + 2)
                {
                    registHandle(newSession, 5);
                    addConnectedUser(newSession->getUserId(), newSession, false);
                }
                else
                {
                    newSession->onPassiveClose("../basic_header/Reactor.inl", 0xe6);
                }
            }
            else
            {
                pPool->destroyTCPUser(newSession);
            }
        }
    }
    return true;
}

template <class T>
void EpollReactor<T>::addConnectedUser(unsigned int id, T* connectedUser, bool isServerUser)
{
    const char* pcVar4 = isServerUser ? "true" : "false";
    G_TraceLog()->sysLog(1, "addConnectedUser(%d), isServer:%s", id, pcVar4);
    if (isServerUser)
    {
        mServerUsers[id] = connectedUser;
    }
    else
    {
        mClientUsers[id] = connectedUser;
    }
}

template <class T>
void EpollReactor<T>::delConnectedUser(unsigned int id, T* connectedUser)
{
    typename std::map<unsigned int, T*>::iterator iter = mClientUsers.find(id);
    if ((iter != mClientUsers.end()) && (iter->second == connectedUser)
        && (mClientUsers.erase(id) != 0))
    {
        G_TraceLog()->sysLog(1, "delConnectedUser(%d), isServer:false", id);
        return;
    }
    iter = mServerUsers.find(id);
    if ((iter != mServerUsers.end()) && (iter->second == connectedUser)
        && (mServerUsers.erase(id) != 0))
    {
        G_TraceLog()->sysLog(1, "delConnectedUser(%d), isServer:true", id);
        return;
    }
    G_TraceLog()->sysLog(1, "delConnectedUser(%d), error", id);
}

template <class T>
void EpollReactor<T>::GetConnectedUsersIter(typename std::map<unsigned int, T*>::iterator& s,
                                            typename std::map<unsigned int, T*>::iterator& e,
                                            bool isServerUser)
{
    if (isServerUser)
    {
        s = mServerUsers.begin();
        e = mServerUsers.end();
    }
    else
    {
        s = mClientUsers.begin();
        e = mClientUsers.end();
    }
}

} // namespace nsl

#endif // NSL_REACTOR_H_
