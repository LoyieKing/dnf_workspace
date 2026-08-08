#ifndef RELAY_REACTOR_H_
#define RELAY_REACTOR_H_

#include <set>
#include <sys/epoll.h>
#include <unistd.h>

#include "RelayApp.h"
#include "RelayException.h"
#include "RelayThread.h"

// EpollReactor：TManager@0 / set<TSession*>@4 / epoll_fd_@0x1c / max_client_@0x20 /
//              events_@0x24 / lock@0x28，总 0x40
template <class TSession, class TSendSocket, class TRecvSocket>
class EpollReactor : public TManager<RelayServiceApp::RelayService>
{
public:
    EpollReactor()
    {
        epoll_fd_ = -1;
        max_client_ = 0;
        events_ = 0;
    }
    ~EpollReactor()
    {
        shutdown();
    }
    bool init(int max_client)
    {
        max_client_ = max_client;
        return true;
    }
    void startup()
    {
        if (max_client_ < 1)
        {
            throw Exception(-1,
                "[EpollReactor< TSession >::Init] Invalid parameter : max_client(%d)\n",
                max_client_);
        }
        epoll_fd_ = epoll_create(max_client_);
        if (epoll_fd_ == -1)
        {
            printf("[EpollReactor< TSession >::Init] Can't create epoll device : max_client(%d)\n",
                   max_client_);
        }
        events_ = new epoll_event[max_client_];
        if (events_ == 0)
        {
            printf("[EpollReactor< TSession >::Init] Can't allocate epoll repository : max_client(%d)\n",
                   max_client_);
        }
    }
    void shutdown()
    {
        if (epoll_fd_ != -1)
        {
            close(epoll_fd_);
            epoll_fd_ = -1;
            if (events_ != 0)
            {
                delete[] events_;
            }
        }
    }
    bool handleEvents(unsigned int milisec, TSendSocket listenSocket, unsigned int maxEvents);
    bool registHandle(TSession* s, unsigned int event_filter);
    bool unregistHandle(TSession* s);
    unsigned int getNativeEventFilter(unsigned int event_filter);
    void setManagerToEpoll(RelayServiceApp::RelayService* service)
    {
        setManager(service);
    }

private:
    std::set<TSession*> m_users;
    int epoll_fd_;
    int max_client_;
    epoll_event* events_;
    TThreadLock<ThreadLock_linux> m_lock;
};

// TReactor：包装 EpollReactor（0x40）
template <class TEpollReactor, class TSession, class TSendSocket, class TRecvSocket>
class TReactor
{
public:
    TReactor()
    {
    }
    ~TReactor()
    {
    }
    bool init(int max_client)
    {
        return m_epoll.init(max_client);
    }
    void startup()
    {
        m_epoll.startup();
    }
    void shutdown()
    {
        m_epoll.shutdown();
    }
    void setManagerToEpoll(RelayServiceApp::RelayService* service)
    {
        m_epoll.setManagerToEpoll(service);
    }
    bool handleEvents(unsigned int milisec, TSendSocket listenSocket, unsigned int maxEvents)
    {
        return m_epoll.handleEvents(milisec, listenSocket, maxEvents);
    }
    bool registHandle(TSession* s, unsigned int event_filter)
    {
        return m_epoll.registHandle(s, event_filter);
    }
    bool unregistHandle(TSession* s)
    {
        return m_epoll.unregistHandle(s);
    }

private:
    TEpollReactor m_epoll;
};

#endif // RELAY_REACTOR_H_
