// df_relay_r — RelayServiceApp 框架类（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <string.h>
#include <errno.h>
#include <sys/epoll.h>

#include "RelayApp.h"
#include "RelayLog.h"
#include "RelayReactor.h"
#include "RelayScript.h"

namespace RelayServiceApp
{

// ---- User ----

User::User()
{
    m_acc_id = 0;
    m_user_id = 0;
}

User::~User()
{
}

UDPUser::UDPUser()
{
}

UDPUser::~UDPUser()
{
}

// ---- PortInfo ----

PortInfo::PortInfo()
{
    mTCPPort = 0;
    mUDPPort = 0;
    mUDPS2SPort = 0;
}

PortInfo::~PortInfo()
{
}

// ---- Handlers ----

Handlers::Handlers()
{
    m_tcpHandler = 0;
    m_udpHandler = 0;
    m_tcpHandlerRelay = 0;
}

// ---- Threads ----

Threads::Threads()
{
    m_tcpThread = 0;
    m_udpThread = 0;
    m_udpS2SThread = 0;
}

Threads::~Threads()
{
}

// ---- Users ----

Users::Users()
    : m_currentUserCount(0), m_currentMaxUserCount(0), m_maxUserCount(0),
      m_maxDispatchTime(0), m_totalDispatchTime(0), m_dispatchCount(0)
{
}

Users::~Users()
{
}

void Users::setMaxUserCount(int n)
{
    m_maxUserCount = n;
}

TCPUser* Users::getTCPUser(unsigned int acc_id)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock3);
    __gnu_cxx::hash_map<unsigned int, TCPUser*>::iterator it = m_tcpUsers.find(acc_id);
    if (it == m_tcpUsers.end())
    {
        return 0;
    }
    TCPUser* user = (*it).second;
    return user;
}

void Users::setTCPUser(unsigned int acc_id, TCPUser* user)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock3);
    m_tcpUsers[acc_id] = user;
}

UDPUser* Users::getUDPUser(unsigned int acc_id)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock4);
    __gnu_cxx::hash_map<unsigned int, UDPUser*>::iterator it = m_udpUsers.find(acc_id);
    if (it == m_udpUsers.end())
    {
        return 0;
    }
    UDPUser* user = (*it).second;
    return user;
}

void Users::setUDPUser(unsigned int acc_id, UDPUser* user)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock4);
    m_udpUsers[acc_id] = user;
}

void Users::delUser(unsigned int acc_id)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock3);
    m_tcpUsers.erase(acc_id);
}

void Users::increaseUserCount()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock1);
    m_currentUserCount++;
    if (m_currentMaxUserCount < m_currentUserCount)
    {
        m_currentMaxUserCount = m_currentUserCount;
    }
}

void Users::decreaseUserCount()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock1);
    m_currentUserCount--;
    if (m_currentMaxUserCount < m_currentUserCount)
    {
        m_currentMaxUserCount = m_currentUserCount;
    }
}

void Users::clearCurrentMaxUserCount()
{
    m_currentMaxUserCount = 0;
}

void Users::setDispatchTime(int t)
{
    if (m_maxDispatchTime < t)
    {
        m_maxDispatchTime = t;
    }
    m_totalDispatchTime += t;
    m_dispatchCount++;
}

void Users::clearDispatchTime()
{
    m_dispatchCount = 0;
    m_totalDispatchTime = m_dispatchCount;
    m_maxDispatchTime = m_totalDispatchTime;
}

// ---- TCPUser ----

TCPUser::TCPUser()
    : m_accId(0), m_kind(4), m_isDisconnected(false),
      m_isAboutToDisconnect(false), m_lastAccessTime(0), m_sock(0)
{
}

TCPUser::~TCPUser()
{
}

void TCPUser::setACCID(unsigned int acc_id)
{
    m_accId = acc_id;
}

int TCPUser::getHandle()
{
    if (m_sock == 0)
    {
        return 0;
    }
    return m_sock->getHandle();
}

TCPSocket* TCPUser::getSocket()
{
    return m_sock;
}

void TCPUser::setSocket(TCPSocket* sock)
{
    m_sock = sock;
}

bool TCPUser::isAboutToDisconnect() const
{
    return m_isAboutToDisconnect;
}

bool TCPUser::isDisconnected() const
{
    return m_isDisconnected;
}

bool TCPUser::isIdle() const
{
    long long now = get_ms_tick();
    long long diff = now - m_lastAccessTime;
    if (m_lastAccessTime != 0)
    {
        if (30000 < diff)
        {
            return true;
        }
        if ((m_accId == 0) && (5000 < diff))
        {
            return true;
        }
    }
    return false;
}

bool TCPUser::isToWrite() const
{
    return 0 < m_sendQueue.getPushedLength();
}

void TCPUser::setLastAccessTime()
{
    m_lastAccessTime = get_ms_tick();
}

void TCPUser::postDisconnected(int flag)
{
    m_isAboutToDisconnect = true;
    m_kind = flag;
}

void TCPUser::notifyCannotLoginByMaxUserCount()
{
}

void TCPUser::onRead()
{
    if (m_sock == 0 || m_sock->getHandle() < 0)
    {
        postDisconnected(1);
        return;
    }
    if (!isAboutToDisconnect() && !isDisconnected())
    {
        onRead_();
    }
}

void TCPUser::onRead_()
{
    int avail = m_recvQueue.getAvailableSpace();
    char* p = m_recvQueue.peekPush();
    int r = m_sock->recv(p, avail);
    if (r < 1)
    {
        if (r < 0)
        {
            postDisconnected(1);
            return;
        }
    }
    else
    {
        if (m_recvQueue.pushIndex(r) < 0)
        {
            postDisconnected(1);
            return;
        }
    }
    onPacketParse();
}

void TCPUser::onWrite()
{
    if (m_sock != 0 && m_sock->getHandle() > -1)
    {
        if (!isAboutToDisconnect() && !isDisconnected())
        {
            while (!m_sendQueue.isEmpty())
            {
                if (!m_sendQueue.isPushGreaterThanPop())
                {
                    int len = m_sendQueue.getPopLengthToEnd();
                    if (0 < len)
                    {
                        char* p = m_sendQueue.peekPop();
                        int r = m_sock->send(p, len);
                        if (r < 1)
                        {
                            if (-1 < r)
                            {
                                return;
                            }
                            postDisconnected(0);
                            return;
                        }
                        m_sendQueue.pop(r);
                    }
                }
                else
                {
                    int len = m_sendQueue.getPushedLength();
                    if (0 < len)
                    {
                        char* p = m_sendQueue.peekPop();
                        int r = m_sock->send(p, len);
                        if (r < 1)
                        {
                            if (-1 < r)
                            {
                                return;
                            }
                            postDisconnected(0);
                            return;
                        }
                        m_sendQueue.pop(r);
                    }
                }
            }
        }
    }
}

void TCPUser::onError()
{
    onClose();
}

void TCPUser::onClose()
{
    if (!m_isDisconnected)
    {
        getManager()->disconnectEvent2TCPUser(this);
        if (m_sock != 0)
        {
            m_sock->close();
        }
        m_isDisconnected = true;
    }
}

void TCPUser::onAccept()
{
    m_recvQueue.clear();
    m_sendQueue.clear();
}

void TCPUser::shutdown()
{
    m_accId = 0;
    m_isDisconnected = false;
    m_isAboutToDisconnect = false;
    m_sock = 0;
}

void TCPUser::startupAfterSetSocket()
{
    m_accId = 0;
    m_isDisconnected = false;
    m_isAboutToDisconnect = false;
}

int TCPUser::postSendPacket(char* buf)
{
    return 0;
}

int TCPUser::send(PacketHeader* buf)
{
    if (m_sock == 0)
    {
        return -1;
    }
    if (m_sock->getHandle() < 0)
    {
        return -1;
    }
    if (isAboutToDisconnect() || isDisconnected())
    {
        return -2;
    }
    if (*(unsigned short*)((char*)buf + 2) == 0)
    {
        return -3;
    }
    if (m_sendQueue.getPushedLength() < 1)
    {
        int r = m_sock->send((char*)buf, *(unsigned short*)((char*)buf + 2));
        if (*(unsigned short*)((char*)buf + 2) != (unsigned int)r)
        {
            if (0xc7ff < (int)(m_sendQueue.getPushedLength() +
                               (*(unsigned short*)((char*)buf + 2) - r)))
            {
                return -4;
            }
            if (m_sendQueue.push((char*)buf + r, *(unsigned short*)((char*)buf + 2) - r) < 0)
            {
                return -5;
            }
        }
        return 0;
    }
    if ((int)(m_sendQueue.getPushedLength() + *(unsigned short*)((char*)buf + 2)) < 0xc800)
    {
        if (m_sendQueue.push((char*)buf, *(unsigned short*)((char*)buf + 2)) < 0)
        {
            return -5;
        }
        return 0;
    }
    return -4;
}

void TCPUser::onPacketParse()
{
    do
    {
        if (!m_recvQueue.isPopStraight(0xc))
        {
            if (m_recvQueue.getPushedLength() < 0xc)
            {
                return;
            }
            char header[0xc];
            if (!m_recvQueue.peekCopy(0xc, header))
            {
                postDisconnected(1);
                return;
            }
            unsigned short size = *(unsigned short*)(header + 2);
            if ((*(short*)header != 0) && (*(short*)header != 1))
            {
                postDisconnected(1);
                return;
            }
            if (size == 0)
            {
                postDisconnected(1);
                return;
            }
            if (m_recvQueue.getPushedLength() < size)
            {
                return;
            }
            char* buf = (char*)calloc(size, 1);
            if (buf == 0)
            {
                return;
            }
            if (!m_recvQueue.popCopy(size, buf))
            {
                free(buf);
                postDisconnected(1);
                return;
            }
            long long t1 = get_ms_tick();
            getManager()->m_handlers.getTCPHandlerRelay()->dispatch(this, buf, 0, size);
            if (*(short*)header == 0)
            {
                if (getACCID() == 0)
                {
                    free(buf);
                    postDisconnected(1);
                    return;
                }
            }
            long long t2 = get_ms_tick();
            getManager()->m_users.setDispatchTime((int)(t2 - t1));
            free(buf);
        }
        else
        {
            char* p = m_recvQueue.peekPop();
            unsigned short size = *(unsigned short*)(p + 2);
            if ((*(short*)p != 0) && (*(short*)p != 1))
            {
                postDisconnected(1);
                return;
            }
            if (size == 0)
            {
                postDisconnected(1);
                return;
            }
            if (!m_recvQueue.isPopStraight(size))
            {
                if (m_recvQueue.getPushedLength() < size)
                {
                    return;
                }
                char* buf = (char*)calloc(size, 1);
                if (buf == 0)
                {
                    return;
                }
                if (!m_recvQueue.popCopy(size, buf))
                {
                    free(buf);
                    return;
                }
                long long t1 = get_ms_tick();
                getManager()->m_handlers.getTCPHandlerRelay()->dispatch(this, buf, 0, size);
                if (*(short*)p == 0)
                {
                    if (getACCID() == 0)
                    {
                        free(buf);
                        postDisconnected(1);
                        return;
                    }
                }
                long long t2 = get_ms_tick();
                getManager()->m_users.setDispatchTime((int)(t2 - t1));
                free(buf);
            }
            else
            {
                long long t1 = get_ms_tick();
                getManager()->m_handlers.getTCPHandlerRelay()->dispatch(this, p, 0, size);
                if (*(short*)p == 0)
                {
                    if (getACCID() == 0)
                    {
                        postDisconnected(1);
                        return;
                    }
                }
                m_recvQueue.pop(size);
                long long t2 = get_ms_tick();
                getManager()->m_users.setDispatchTime((int)(t2 - t1));
            }
        }
        if (isAboutToDisconnect())
        {
            return;
        }
        if (m_recvQueue.isEmpty())
        {
            return;
        }
    } while (true);
}

// ---- TCPThread / UDPThread / TCPAcceptThread ----

TCPThread::TCPThread()
{
    m_port = 0;
    m_handler = 0;
}

TCPThread::~TCPThread()
{
}

void TCPThread::loop(void* pParam)
{
    unsigned short port = (unsigned short)getPort();
    printf("In %s : port='%d'\n", "TCPThread::loop", (unsigned int)port);
    TReactor<EpollReactor<TCPUser, TCPSocket, TCPSocket>, TCPUser, TCPSocket, TCPSocket> *reactor =
        (TReactor<EpollReactor<TCPUser, TCPSocket, TCPSocket>, TCPUser, TCPSocket, TCPSocket> *)
            getManager()->m_reactor.getReactor();
    reactor->init(G_ScriptData()->mRelayNum + 0x69);
    reactor->startup();
    reactor->setManagerToEpoll(getManager());
    TCPSocket listenSocket;
    if (!listenSocket.open())
    {
        printf("listenSocket.open : ERROR(%s)\n", strerror(*__errno_location()));
    }
    if (*(unsigned short*)((char*)G_ScriptData() + 0x1a) != 0)
    {
        puts("Set Relay Server for PVP Channel");
        listenSocket.setOptNagle(false);
    }
    if (!listenSocket.bind(port, false))
    {
        printf("listenSocket.bind : ERROR(%s)\n", strerror(*__errno_location()));
    }
    if (!listenSocket.listen(100))
    {
        printf("listenSocket.listen : ERROR(%s)\n", strerror(*__errno_location()));
    }
    reactor->handleEvents(2000, listenSocket, 7);
    reactor->shutdown();
    setTerminated();
}

UDPThread::UDPThread()
{
    m_port = 0;
    m_handler = 0;
    m_udpSocket = 0;
    m_tick = get_ms_tick();
}

UDPThread::~UDPThread()
{
}

void UDPThread::loop(void* pParam)
{
    int epoll_fd = -1;
    int max_events = 1;
    epoll_fd = epoll_create(1);
    if (epoll_fd == -1)
    {
        printf("In %s : Can't create epoll device", "UDPThread::loop");
    }
    UDPSocket udp;
    if (udp.open() == 1)
    {
        if (udp.bind((unsigned short)m_port, true) == 1)
        {
            if (udp.setOptNonBlock() == 1)
            {
                printf("succeeded in binding UDP socket port #%d\n", m_port);
                epoll_event ev;
                ev.events = 1;
                ev.data.ptr = (void*)udp.getHandle();
                if (epoll_ctl(epoll_fd, 1, udp.getHandle(), &ev) < 0)
                {
                    printf("In %s : epoll_ctl error\n", "UDPThread::loop");
                }
                setUDPSocket(&udp);
                char buf[0x1000];
                while (!isTerminating())
                {
                    int n = epoll_wait(epoll_fd, &ev, max_events, 100);
                    if (n != 0)
                    {
                        if (G_ScriptData()->mFlag)
                        {
                            long long now = get_ms_tick();
                            long long diff = now - m_tick;
                            if (500 < diff)
                            {
                                getUDPSocket()->popMonitorAuthPacket();
                                m_tick = now;
                            }
                        }
                        int r = udp.recv(buf, 0x1000);
                        if (r < 0)
                        {
                            printf("[ERROR] UDP Thread Recv Error(%s)", strerror(*__errno_location()));
                        }
                        else if (r != 0)
                        {
                            m_handler->dispatch(buf, r, 0);
                        }
                    }
                }
                setTerminated();
            }
            else
            {
                puts("failed to set Option Non Blocking");
            }
        }
        else
        {
            printf("failed to bind UDP socket port #%d\n", m_port);
        }
    }
    else
    {
        puts("failed to open UDP socket port");
    }
}

void UDPThread::logError()
{
    int err = errno;
}

TCPAcceptThread::TCPAcceptThread()
{
    m_port = 0;
}

TCPAcceptThread::~TCPAcceptThread()
{
}

void TCPAcceptThread::loop(void* pParam)
{
    unsigned short port = (unsigned short)getPort();
    printf("In %s \n", "TCPAcceptThread::loop");
    TCPSocket listenSocket;
    if (!listenSocket.open())
    {
        throw Exception("Fail to open socket");
    }
    if (!listenSocket.bind(port, false))
    {
        throw Exception("Fail to bind listen");
    }
    if (!listenSocket.listen(100))
    {
        throw Exception("Fail to Create AcceptThread.");
    }
    while (!isTerminating())
    {
        TSystem<LinuxSystem>::usleep(100);
        if (isStop())
        {
            break;
        }
        TCPSocket* sock = getManager()->m_userPools.createTCPSocket();
        if (sock != 0)
        {
            bool accepted = listenSocket.accept(*sock);
            if (!accepted)
            {
                getManager()->m_userPools.destroyTCPSocket(sock);
            }
            else
            {
                if (getManager()->m_users.getUserCount() >= getManager()->m_users.getMaxUserCount())
                {
                    notifyCannotLoginByMaxUserCount(*sock);
                    sock->close();
                    getManager()->m_userPools.destroyTCPSocket(sock);
                }
                else
                {
                    TCPUser* user = getManager()->m_userPools.createTCPUser();
                    if (user == 0)
                    {
                        notifyCannotCreateUser(*sock);
                        sock->close();
                        getManager()->m_userPools.destroyTCPSocket(sock);
                    }
                    else
                    {
                        user->setManager(getManager());
                        user->setSocket(sock);
                        user->startupAfterSetSocket();
                        lockPushAcceptedUser(user);
                    }
                }
            }
        }
    }
    isTerminating();
    listenSocket.close();
    setTerminated();
}

void TCPAcceptThread::lockPushAcceptedUser(TCPUser* user)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock);
    m_acceptedUsers.push(user);
}

TCPUser* TCPAcceptThread::lockPopAcceptedUser()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock);
    if (m_acceptedUsers.empty())
    {
        return 0;
    }
    TCPUser* user = m_acceptedUsers.front();
    m_acceptedUsers.pop();
    return user;
}

void TCPAcceptThread::notifyCannotCreateUser(TCPSocket& sock)
{
}

void TCPAcceptThread::notifyCannotLoginByMaxUserCount(TCPSocket& sock)
{
}

// ---- RelayService ----

RelayService::RelayService()
{
    m_mode = 0;
    m_tick = 0;
    m_tickLog = 0;
}

RelayService::~RelayService()
{
}

void RelayService::startup()
{
    createFileLogInfo();
    createFileLogWarn();
    createFileLogError();
    createFileLogCri();
    createLogInfo();
    createLogCri();
    createLogWarn();
    createLogError();
    m_userPools.m_tcpSocketPool.startup(G_ScriptData()->mRelayNum + 0x69);
    m_userPools.m_tcpUserPool.startup(G_ScriptData()->mRelayNum + 0x69);
    m_users.setMaxUserCount(G_ScriptData()->mRelayNum);
    m_threads.m_tcpThread = new TCPThread;
    m_threads.m_tcpThread->setManager(this);
    m_threads.m_tcpThread->setPort(m_portInfo.getTCPPort());
    if (G_ScriptData()->mFlag)
    {
        m_threads.m_udpS2SThread = new UDPThread;
        m_threads.m_udpS2SThread->setManager(this);
        m_threads.m_udpS2SThread->setPort(m_portInfo.getUDPS2SPort());
    }
    m_handlers.m_tcpHandlerRelay = new TCPHandlerRelay;
    m_handlers.m_tcpHandlerRelay->setManager(this);
    if (G_ScriptData()->mFlag)
    {
        m_handlers.m_udpHandler = new UDPHandlerS2S;
        m_handlers.m_udpHandler->setManager(this);
    }
    m_threads.m_tcpThread->setHandler(m_handlers.m_tcpHandlerRelay);
    if (G_ScriptData()->mFlag)
    {
        m_threads.m_udpS2SThread->setHandler(m_handlers.m_udpHandler);
    }
    m_threads.m_tcpThread->begin();
    if (G_ScriptData()->mFlag)
    {
        m_threads.m_udpS2SThread->begin();
    }
}

void RelayService::shutdown()
{
    if (G_ScriptData()->mFlag && m_threads.m_udpS2SThread != 0)
    {
        m_threads.m_udpS2SThread->waitForTerminated(100);
    }
    if (m_threads.m_tcpThread != 0)
    {
        m_threads.m_tcpThread->waitForTerminated(100);
    }
    if (m_handlers.m_tcpHandlerRelay != 0)
    {
        delete m_handlers.m_tcpHandlerRelay;
    }
    m_handlers.m_tcpHandlerRelay = 0;
    if (G_ScriptData()->mFlag)
    {
        if (m_handlers.m_udpHandler != 0)
        {
            operator delete(m_handlers.m_udpHandler);
        }
        m_handlers.m_udpHandler = 0;
        if (m_threads.m_udpS2SThread != 0)
        {
            delete m_threads.m_udpS2SThread;
        }
        m_threads.m_udpS2SThread = 0;
    }
    if (m_threads.m_tcpThread != 0)
    {
        delete m_threads.m_tcpThread;
    }
    m_threads.m_tcpThread = 0;
    m_userPools.m_tcpUserPool.shutdown();
    m_userPools.m_tcpSocketPool.shutdown();
    destroyFileLogInfo();
    destroyFileLogWarn();
    destroyFileLogError();
    destroyFileLogCri();
    destroyLogInfo();
    destroyLogCri();
    destroyLogWarn();
    destroyLogError();
}

void RelayService::setAuthenticated(unsigned int acc_id)
{
    if (!G_ScriptData()->mFlag)
    {
        return;
    }
    UDPSocket* udp = m_threads.m_udpS2SThread->getUDPSocket();
    if (udp != 0)
    {
        udp->pushMonitorAuthPacket(acc_id);
    }
    return;
}

void RelayService::setTick()
{
    m_tick = get_ms_tick();
}

long long RelayService::getTickLog()
{
    if (m_tickLog == 0)
    {
        m_tickLog = getTick();
    }
    return m_tickLog;
}

void RelayService::setTickLog()
{
    m_tickLog = m_tick;
}

void RelayService::makeLog()
{
    long long tick = getTick();
    long long diff = tick - getTickLog();
    if (getTickLog() != 0 && diff >= 0xea61)
    {
        setTickLog();
        time_t t = (time_t)(tick / 1000);
        tm* tm_now = localtime(&t);
        char filename[256] = {0};
        snprintf(filename, 0x100, "./log/Relay%4d%02d%02d_T%d.log",
                 tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                 m_portInfo.getTCPPort());
        FILE* f = fopen(filename, "a+");
        if (f != 0)
        {
            if (!G_ScriptData()->mFlag)
            {
                int count = m_users.getDispatchCout();
                double avg = m_users.getAverageDispatchTime();
                int max = m_users.getMaxDispatchTime();
                int cur;
                if (m_users.getCurrentMaxUserCount() == 0)
                {
                    cur = -m_users.getUserCount();
                }
                else
                {
                    cur = m_users.getCurrentMaxUserCount();
                }
                fprintf(f,
                    "%02d/%02d/%02d %02d:%02d:%02d Current User: %d Dispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",
                    tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                    tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, cur, max, avg, count);
            }
                else
                {
                    UDPSocket* udp = m_threads.m_udpS2SThread->getUDPSocket();
                if (udp == 0)
                {
                    int count = m_users.getDispatchCout();
                    double avg = m_users.getAverageDispatchTime();
                    int max = m_users.getMaxDispatchTime();
                    int cur;
                    if (m_users.getCurrentMaxUserCount() == 0)
                    {
                        cur = -m_users.getUserCount();
                    }
                    else
                    {
                        cur = m_users.getCurrentMaxUserCount();
                    }
                    fprintf(f,
                        "%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tError UDPS2SSocket!! Not Auth mode\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",
                        tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                        tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, cur, max, avg, count);
                }
                else
                {
                    int count = m_users.getDispatchCout();
                    double avg = m_users.getAverageDispatchTime();
                    int max = m_users.getMaxDispatchTime();
                    int qsize = udp->sizeMonitorAuthPacket();
                    int cur;
                    if (m_users.getCurrentMaxUserCount() == 0)
                    {
                        cur = -m_users.getUserCount();
                    }
                    else
                    {
                        cur = m_users.getCurrentMaxUserCount();
                    }
                    fprintf(f,
                        "%02d/%02d/%02d %02d:%02d:%02d Current User: %d\tAuth Packet Queue: %d\tDispatch Time: MAX = %d, AVG = %.2f, CNT = %d\n",
                        tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                        tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, cur, qsize, max, avg, count);
                }
            }
            fclose(f);
            m_users.clearCurrentMaxUserCount();
            m_users.clearDispatchTime();
        }
    }
    else
    {
        if (getTickLog() == 0)
        {
            setTickLog();
        }
    }
}

void RelayService::postDisconnectEvent2TCPUser(unsigned int acc_id, int flag)
{
    if (acc_id != 0)
    {
        TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_users.m_lock3);
        __gnu_cxx::hash_map<unsigned int, TCPUser*>::iterator it = m_users.m_tcpUsers.find(acc_id);
        if (it != m_users.m_tcpUsers.end())
        {
            (*it).second->postDisconnected(flag);
        }
    }
}

void RelayService::disconnectEvent2TCPUser(TCPUser* user)
{
    unsigned int acc_id = user->getACCID();
    if (acc_id != 0)
    {
        TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_users.m_lock3);
        m_users.m_tcpUsers.erase(acc_id);
    }
    if (G_ScriptData()->mFlag)
    {
        m_threads.m_udpS2SThread->getUDPSocket()->delDisconnectUser(acc_id);
    }
    RelayTReactor* reactor = (RelayTReactor*)m_reactor.getReactor();
    reactor->unregistHandle(user);
    m_userPools.destroyTCPUser(user);
    m_users.decreaseUserCount();
}

void RelayService::relayToTCP(PacketHeader* pkt)
{
    pkt->m_type = 3;
    TCPUser* user = m_users.getTCPUser(pkt->m_accId);
    if (user != 0)
    {
        int r = user->send(pkt);
    }
}

// ---- TCPHandler / UDPHandler ----

TCPHandler::TCPHandler()
{
}

TCPHandlerRelay::TCPHandlerRelay()
{
}

TCPHandlerRelay::~TCPHandlerRelay()
{
}

void TCPHandlerRelay::dispatch(TCPUser* user, char* buf, int size, int flag)
{
    if (*(short*)buf == 0)
    {
        if (user->getACCID() == 0)
        {
            unsigned int new_acc = *(unsigned int*)(buf + 4);
            if (new_acc == 0)
            {
                user->onClose();
            }
            else
            {
                TCPUser* old = getManager()->m_users.getTCPUser(new_acc);
                if (old != 0)
                {
                    old->onClose();
                }
                user->setACCID(new_acc);
                getManager()->m_users.setTCPUser(new_acc, user);
                getManager()->setAuthenticated(new_acc);
            }
        }
    }
    else if (*(short*)buf == 1)
    {
        if (user->getACCID() == 0)
        {
            user->onClose();
        }
        else
        {
            user->setLastAccessTime();
            getManager()->relayToTCP((PacketHeader*)buf);
        }
    }
}

UDPHandler::UDPHandler()
{
}

UDPHandlerRelay::UDPHandlerRelay()
{
}

UDPHandlerRelay::~UDPHandlerRelay()
{
}

void UDPHandlerRelay::dispatch(char* buf, int size, int flag)
{
    PacketHeader* pkt = (PacketHeader*)buf;
    if (*(unsigned short*)pkt == 0)
    {
        getManager()->relayToTCP(pkt);
    }
}

UDPHandlerS2S::UDPHandlerS2S()
{
}

void UDPHandlerS2S::dispatch(char* buf, int size, int flag)
{
    short type = *(short*)buf;
    if (type != 1)
    {
        if (type == 0x9c4)
        {
            if (*(char*)(buf + 0xe) == 0)
            {
                getManager()->postDisconnectEvent2TCPUser(*(unsigned int*)(buf + 0xa), 3);
            }
        }
        else if (type == 0)
        {
            getManager()->setAuthenticated(*(unsigned int*)(buf + 0xa));
        }
    }
}


// ---- 日志创建/销毁（TGlobalInstance 相关，后续补齐实现）----

void createFileLogInfo()
{
    g_FileLogInfo.create();
}

void createFileLogWarn()
{
    g_FileLogWarn.create();
}

void createFileLogError()
{
    g_FileLogError.create();
}

void createFileLogCri()
{
    g_FileLogCri.create();
}

void createLogInfo()
{
    g_LogInfo.create();
}

void createLogCri()
{
    g_LogCri.create();
}

void createLogWarn()
{
    g_LogWarn.create();
}

void createLogError()
{
    g_LogError.create();
}

void destroyFileLogInfo()
{
    g_FileLogInfo.destroy();
}

void destroyFileLogWarn()
{
    g_FileLogWarn.destroy();
}

void destroyFileLogError()
{
    g_FileLogError.destroy();
}

void destroyFileLogCri()
{
    g_FileLogCri.destroy();
}

void destroyLogInfo()
{
    g_LogInfo.destroy();
}

void destroyLogCri()
{
    g_LogCri.destroy();
}

void destroyLogWarn()
{
    g_LogWarn.destroy();
}

void destroyLogError()
{
    g_LogError.destroy();
}

} // namespace RelayServiceApp

RelayServiceApp::RelayService* g_pService = 0;

// ---- SocketSystemLinux（全局作用域，空实现）----
class SocketSystemLinux
{
public:
    static void startup();
    static void shutdown();
};

void SocketSystemLinux::startup()
{
}

void SocketSystemLinux::shutdown()
{
}

template <class TSystem_>
class TSocketSystem
{
public:
    static void startup()
    {
        TSystem_::startup();
    }
    static void shutdown()
    {
        TSystem_::shutdown();
    }
};

// ---- App（LinuxService 纯虚实现，主体后续补齐）----

App::App()
    : LinuxService()
{
}

App::~App()
{
}

void App::prepareRun()
{
    puts("Called prepareRun");
    TSocketSystem<SocketSystemLinux>::startup();
    g_pService = new RelayServiceApp::RelayService;
    g_pService->setMode(RelayServiceApp::RelayService::MODE_NONE);
    g_pService->m_portInfo.setTCPPort(G_ScriptData()->mPortTcp);
    g_pService->m_portInfo.setUDPPort(G_ScriptData()->mPortUdp);
    g_pService->m_portInfo.setUDPS2SPort(G_ScriptData()->mReservedB);
}

void App::run()
{
    puts("Called run");
    g_pService->startup();
    while (m_terminated != 1)
    {
        TSystem<LinuxSystem>::sleep(10000);
    }
}

void App::finishRun()
{
    puts("Called finishRun");
}

void App::stop()
{
    puts("Called stop");
}

void App::onStop()
{
    puts("Called onStop");
}

void App::onPause()
{
    puts("Called onPause");
}

void App::onContinue()
{
    puts("Called onContinue");
}

bool App::load_script()
{
    char path[0x100];
    snprintf(path, 0x100, "./cfg/%s.cfg", (char*)this + 0x404);
    printf("[!] Server environment(%s) script loading : %s\n", (char*)this + 0x404, path);
    char loaded = G_Script()->load(path);
    if (!loaded)
    {
        printf("Can't open script file : %s", (char*)this + 0x404);
        return false;
    }
    loaded = G_Script()->parse_channel_script();
    if (!loaded)
    {
        return false;
    }
    return true;
}

void App::readConfig()
{
    puts("Called readConfig");
    if (!load_script())
    {
        puts("ERROR readConfig()");
    }
    else
    {
        puts("OK readConfig()");
    }
}

int main(int argc, char** argv)
{
    if ((argc > 1) && (strcmp(argv[1], "version") == 0))
    {
        puts("Relay Server v2.5.6.9");
        return 0;
    }
    try
    {
        App* app = new App;
        app->processCommandLine(argc, argv);
        app->main();
        return 0;
    }
    catch (Exception& e)
    {
        if (e.getFunctionName() != 0)
        {
            printf("# %d %s at %d in %s\n", e.getErrorCode(), e.getErrorMsg(), e.getLine(),
                   e.getFunctionName());
        }
        else
        {
            printf("# %s\n", e.getErrorMsg());
        }
    }
}
