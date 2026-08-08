// df_relay_r — RelayServiceApp 框架类（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <string.h>

#include "RelayApp.h"

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

// ---- Reactor ----

Reactor::Reactor()
{
}

Reactor::~Reactor()
{
}

// ---- Users ----

Users::Users()
{
    m_count1 = 0;
    m_count2 = 0;
    m_maxUserCount = 0;
    m_pad1[0] = 0;
    m_pad1[1] = 0;
    m_pad1[2] = 0;
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
    m_aboutToDisconnect = false;
    m_disconnected = false;
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
    return m_aboutToDisconnect;
}

bool TCPUser::isDisconnected() const
{
    return m_disconnected;
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
    m_disconnected = true;
}

void TCPUser::notifyCannotLoginByMaxUserCount()
{
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
