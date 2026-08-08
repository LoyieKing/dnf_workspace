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
    m_udpHandlerRelay = 0;
    m_udpHandlerS2S = 0;
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
