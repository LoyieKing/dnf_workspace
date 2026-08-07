#ifndef NSL_REACTOR_H_
#define NSL_REACTOR_H_

#include <map>
#include <sys/epoll.h>

namespace nsl {

class TCPUser;

template <class T>
class EpollReactor
{
public:
    EpollReactor();
    ~EpollReactor();
    int init(int size);
    void startup();
    void shutdown();
    void handleEvents(unsigned int timeout, bool bOnce);
    int registHandle(T* pUser, unsigned int events);
    int unregistHandle(T* pUser);
    unsigned int getNativeEventFilter(unsigned int events);

    std::map<unsigned int, T*> mClientUsers;
    std::map<int, T*> mServerUsers;
    T* m_ServerSession;
    int epoll_fd_;
    int max_client_;
    epoll_event* events_;
};

class Reactor
{
public:
    Reactor();
    EpollReactor<TCPUser>* getReactor();

    EpollReactor<TCPUser> reactor_;
};

} // namespace nsl

#endif // NSL_REACTOR_H_
