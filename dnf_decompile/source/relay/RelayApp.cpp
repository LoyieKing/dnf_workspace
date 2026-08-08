// df_relay_r — RelayServiceApp 框架类（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <string.h>
#include <errno.h>
#include <sys/epoll.h>

#include "RelayApp.h"
#include "RelayReactor.h"

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
    m_tcpHandlerRelay = 0;
    m_udpHandler = 0;
    m_tcpHandler = 0;
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
{
    m_currentUserCount = 0;
    m_currentMaxUserCount = 0;
    m_maxUserCount = 0;
    m_maxDispatchTime = 0;
    m_totalDispatchTime = 0;
    m_dispatchCount = 0;
}

Users::~Users()
{
}

void Users::setMaxUserCount(int n)
{
    m_maxUserCount = n;
}

int Users::getMaxUserCount()
{
    return m_maxUserCount;
}

TCPUser* Users::getTCPUser(unsigned int acc_id)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock3);
    __gnu_cxx::hash_map<unsigned int, TCPUser*>::iterator it = m_tcpUsers.find(acc_id);
    if (it == m_tcpUsers.end())
    {
        return 0;
    }
    return it->second;
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
    return it->second;
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

// ---- UserPools ----

UserPools::UserPools()
{
}

UserPools::~UserPools()
{
}

TCPSocket* UserPools::createTCPSocket()
{
    return m_tcpSocketPool.alloc();
}

void UserPools::destroyTCPSocket(TCPSocket* sock)
{
    m_tcpSocketPool.free(sock);
}

TCPUser* UserPools::createTCPUser()
{
    return m_tcpUserPool.alloc();
}

void UserPools::destroyTCPUser(TCPUser* user)
{
    TCPSocket* sock = user->getSocket();
    if (sock != 0)
    {
        sock->close();
        destroyTCPSocket(sock);
    }
    user->setSocket(0);
    user->setACCID(0);
    m_tcpUserPool.free(user);
}

UDPUser* UserPools::createUDPUser()
{
    return m_udpUserPool.alloc();
}

void UserPools::destroyUDPUser(UDPUser* user)
{
    m_udpUserPool.free(user);
}

// ---- TCPUser ----

TCPUser::TCPUser()
{
    m_accId = 0;
    m_kind = 4;
    m_isDisconnected = false;
    m_isAboutToDisconnect = false;
    m_lastAccessTime = 0;
    m_sock = 0;
}

TCPUser::~TCPUser()
{
}

unsigned int TCPUser::getACCID()
{
    return m_accId;
}

void TCPUser::setACCID(unsigned int acc_id)
{
    m_accId = acc_id;
}

int TCPUser::getHandle()
{
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
    if (m_lastAccessTime != 0)
    {
        if (30000 < now - m_lastAccessTime)
        {
            return true;
        }
        if ((m_accId == 0) && (5000 < now - m_lastAccessTime))
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

// ---- TCPHandler / UDPHandler ----

TCPHandler::TCPHandler()
{
}

TCPHandler::~TCPHandler()
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

UDPHandler::~UDPHandler()
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
}

UDPHandlerS2S::UDPHandlerS2S()
{
}

UDPHandlerS2S::~UDPHandlerS2S()
{
}

void UDPHandlerS2S::dispatch(char* buf, int size, int flag)
{
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
    unsigned short port = (unsigned short)m_port;
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
    unsigned short port = (unsigned short)m_port;
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
            if (listenSocket.accept(*sock))
            {
                if (getManager()->m_users.getUserCount() < getManager()->m_users.getMaxUserCount())
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
                else
                {
                    notifyCannotLoginByMaxUserCount(*sock);
                    sock->close();
                    getManager()->m_userPools.destroyTCPSocket(sock);
                }
            }
            else
            {
                getManager()->m_userPools.destroyTCPSocket(sock);
            }
        }
    }
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
    m_tick = 0;
    m_tickLog = 0;
    m_tickLogOld = 0;
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
        m_threads.m_udpThread = new UDPThread;
        m_threads.m_udpThread->setManager(this);
        m_threads.m_udpThread->setPort(m_portInfo.getUDPS2SPort());
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
        m_threads.m_udpThread->setHandler(m_handlers.m_udpHandler);
    }
    m_threads.m_tcpThread->begin();
    if (G_ScriptData()->mFlag)
    {
        m_threads.m_udpThread->begin();
    }
}

void RelayService::shutdown()
{
    if (G_ScriptData()->mFlag && m_threads.m_udpThread != 0)
    {
        m_threads.m_udpThread->waitForTerminated(100);
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
            delete m_handlers.m_udpHandler;
        }
        m_handlers.m_udpHandler = 0;
        if (m_threads.m_udpThread != 0)
        {
            delete m_threads.m_udpThread;
        }
        m_threads.m_udpThread = 0;
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
    if (G_ScriptData()->mFlag && m_threads.m_udpThread->getUDPSocket() != 0)
    {
        m_threads.m_udpThread->getUDPSocket()->pushMonitorAuthPacket(acc_id);
    }
}

long long RelayService::getTick()
{
    return m_tickLog;
}

long long RelayService::getTickLog()
{
    if (m_tickLogOld == 0)
    {
        m_tickLogOld = getTick();
    }
    return m_tickLogOld;
}

void RelayService::setTick()
{
    m_tickLog = get_ms_tick();
}

void RelayService::setTickLog()
{
    m_tickLogOld = m_tickLog;
}

void RelayService::makeLog()
{
}

void RelayService::postDisconnectEvent2TCPUser(unsigned int acc_id)
{
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
        m_threads.m_udpThread->getUDPSocket()->delDisconnectUser(acc_id);
    }
    m_reactor.unregistHandle(user);
    m_userPools.destroyTCPUser(user);
    m_users.decreaseUserCount();
}

void RelayService::relayToTCP(PacketHeader* pkt)
{
    pkt->m_type = 3;
    TCPUser* user = m_users.getTCPUser(pkt->m_accId);
    if (user != 0)
    {
        user->send(pkt);
    }
}

// ---- 日志创建/销毁（TGlobalInstance 相关，后续补齐实现）----

void createFileLogInfo()
{
}

void createFileLogWarn()
{
}

void createFileLogError()
{
}

void createFileLogCri()
{
}

void createLogInfo()
{
}

void createLogCri()
{
}

void createLogWarn()
{
}

void createLogError()
{
}

void destroyFileLogInfo()
{
}

void destroyFileLogWarn()
{
}

void destroyFileLogError()
{
}

void destroyFileLogCri()
{
}

void destroyLogInfo()
{
}

void destroyLogCri()
{
}

void destroyLogWarn()
{
}

void destroyLogError()
{
}

} // namespace RelayServiceApp

// ---- App（LinuxService 纯虚实现，主体后续补齐）----

App::App()
    : LinuxService()
{
}

App::~App()
{
}

void App::readConfig()
{
}

void App::prepareRun()
{
}

void App::run()
{
}

void App::finishRun()
{
}

void App::stop()
{
}

void App::onStop()
{
}

void App::onPause()
{
}

void App::onContinue()
{
}
