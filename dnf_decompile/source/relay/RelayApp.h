#ifndef RELAY_APP_H_
#define RELAY_APP_H_

#include <deque>
#include <map>
#include <queue>
#include <vector>
#include <ext/hash_map>

#include "RelayBuffer.h"
#include "RelayPool.h"
#include "RelayService.h"
#include "RelaySocket.h"
#include "RelayThread.h"

namespace RelayServiceApp
{

class RelayService;
class TCPUser;
class UDPUser;
class TCPThread;
class UDPThread;
class TCPAcceptThread;
class TCPHandler;
class TCPHandlerRelay;
class UDPHandler;
class UDPHandlerRelay;
class UDPHandlerS2S;

// PacketHeader：type@0(short) / size@2(ushort) / ...（头部 0xc 字节）
struct PacketHeader
{
    short m_type;
    unsigned short m_size;
    unsigned int m_accId;
    unsigned int m_reserved;
};

// ---- TManager<T>：pManager_@0 ----
template <class T>
class TManager
{
public:
    TManager()
    {
        pManager_ = 0;
    }
    void setManager(T* p)
    {
        pManager_ = p;
    }
    T* getManager()
    {
        return pManager_;
    }
    const T* getManager() const
    {
        return pManager_;
    }

private:
    T* pManager_;
};

// ---- UserState（基类，空）----
class UserState
{
public:
    UserState()
    {
    }
    ~UserState()
    {
    }
};

class UDPUserStates : public UserState
{
public:
    UDPUserStates()
    {
    }
};

class TCPUserStates : public UserState
{
public:
    TCPUserStates()
    {
    }
};

// ---- User：UserState@0 + 2 int ----
class User
{
public:
    User();
    ~User();
    UserState states_;
    int m_acc_id;
    int m_user_id;
};

class UDPUser : public UDPUserStates
{
public:
    UDPUser();
    ~UDPUser();
};

// ---- PortInfo：mTCPPort@0 / mUDPPort@4 / mUDPS2SPort@8 / vector<int>@0xc（0x18）----
class PortInfo
{
public:
    PortInfo();
    ~PortInfo();
    int getTCPPort() const
    {
        return mTCPPort;
    }
    void setTCPPort(int port)
    {
        mTCPPort = port;
    }
    void setUDPPort(int port)
    {
        mUDPPort = port;
    }
    void setUDPS2SPort(int port)
    {
        mUDPS2SPort = port;
    }
    int getUDPS2SPort() const
    {
        return mUDPS2SPort;
    }

private:
    int mTCPPort;
    int mUDPPort;
    int mUDPS2SPort;
    std::vector<int> m_ports;
};

// ---- Handlers：3 个 handler 指针（0x18）----
class Handlers
{
public:
    Handlers();
    TCPHandlerRelay* getTCPHandlerRelay()
    {
        return (TCPHandlerRelay*)m_tcpHandlerRelay;
    }
    TCPHandler* m_tcpHandler;       // +0
    UDPHandler* m_udpHandler;       // +4（实际放 UDPHandlerS2S）
    TCPHandler* m_tcpHandlerRelay;  // +8（实际放 TCPHandlerRelay）
};

// ---- Threads：TCPThread*@0 / UDPThread*@4 / UDPThread*@8 / vector<UDPThread*>@0xc ----
class Threads
{
public:
    Threads();
    ~Threads();
    TCPThread* m_tcpThread;
    UDPThread* m_udpThread;
    UDPThread* m_udpS2SThread;
    std::vector<UDPThread*> m_udpThreads;
};

// ---- Users：锁 + map + 2 个 hash_map（0xb8）----
class Users
{
public:
    Users();
    ~Users();
    void setMaxUserCount(int n);
    int getMaxUserCount();
    TCPUser* getTCPUser(unsigned int acc_id);
    void setTCPUser(unsigned int acc_id, TCPUser* user);
    UDPUser* getUDPUser(unsigned int acc_id);
    void setUDPUser(unsigned int acc_id, UDPUser* user);
    void delUser(unsigned int acc_id);
    void increaseUserCount();
    void decreaseUserCount();
    void clearCurrentMaxUserCount();
    void setDispatchTime(int t);
    void clearDispatchTime();

    int m_currentUserCount;                             // +0
    int m_currentMaxUserCount;                          // +4
    int m_maxUserCount;                                 // +8
    TThreadLock<ThreadLock_linux> m_lock1;              // +0xc
    int m_maxDispatchTime;                              // +0x24
    int m_totalDispatchTime;                            // +0x28
    int m_dispatchCount;                                // +0x2c
    std::map<TCPUser*, int> m_userMap;                  // +0x30
    TThreadLock<ThreadLock_linux> m_lock2;              // +0x48
    __gnu_cxx::hash_map<unsigned int, TCPUser*> m_tcpUsers;  // +0x60
    TThreadLock<ThreadLock_linux> m_lock3;              // +0x74
    __gnu_cxx::hash_map<unsigned int, UDPUser*> m_udpUsers;  // +0x8c
    TThreadLock<ThreadLock_linux> m_lock4;              // +0xa0
};

// ---- UserPools：3 个 0x30 对象池（0x90）----
class UserPools
{
public:
    UserPools();
    ~UserPools();
    TCPSocket* createTCPSocket();
    void destroyTCPSocket(TCPSocket* sock);
    TCPUser* createTCPUser();
    void destroyTCPUser(TCPUser* user);
    UDPUser* createUDPUser();
    void destroyUDPUser(UDPUser* user);

    TMemoryPoolStatic<TCPSocket, std::queue<TCPSocket*, std::deque<TCPSocket*, std::allocator<TCPSocket*> > > > m_tcpSocketPool;   // +0
    TMemoryPoolStatic<TCPUser, std::queue<TCPUser*, std::deque<TCPUser*, std::allocator<TCPUser*> > > > m_tcpUserPool;             // +0x30
    TMemoryPoolStatic<UDPUser, std::queue<UDPUser*, std::deque<UDPUser*, std::allocator<UDPUser*> > > > m_udpUserPool;             // +0x60
};

// ---- Reactor：包装 TReactor<EpollReactor<TCPUser,TCPSocket,TCPSocket>,...> ----
class Reactor
{
public:
    Reactor();
    ~Reactor();
    void* getReactor()
    {
        return this;
    }
    void unregistHandle(TCPUser* user);

private:
    char m_impl[0x40];  // TReactor<EpollReactor<...>> 占位（0x184..0x1c4）
};

// ---- TCPUser：TManager@0 / states@4 / accId@8 / kind@0xc / flags@0x10,0x11 /
//      lastAccessTime@0x14 / sock@0x1c / 双缓冲@0x20/0x1902c，总 0x32038 ----
class TCPUser : public TManager<RelayService>
{
public:
    TCPUser();
    ~TCPUser();
    unsigned int getACCID();
    void setACCID(unsigned int acc_id);
    int getHandle();
    TCPSocket* getSocket();
    void setSocket(TCPSocket* sock);
    bool isAboutToDisconnect() const;
    bool isDisconnected() const;
    bool isIdle() const;
    bool isToWrite() const;
    void setLastAccessTime();
    void onRead();
    void onRead_();
    void onWrite();
    void onError();
    void onClose();
    void onAccept();
    void shutdown();
    void startupAfterSetSocket();
    void onPacketParse();
    int postSendPacket(char* buf);
    int send(PacketHeader* buf);
    void postDisconnected(int flag);
    void notifyCannotLoginByMaxUserCount();

    TCPUserStates m_states;                          // +4
    unsigned int m_accId;                            // +8
    int m_kind;                                      // +0xc = 4
    bool m_isDisconnected;                           // +0x10（onClose 置位）
    bool m_isAboutToDisconnect;                      // +0x11（postDisconnected 置位）
    long long m_lastAccessTime;                      // +0x14
    TCPSocket* m_sock;                               // +0x1c
    TDoubleCircularQueueBuffer<51200u> m_recvQueue;  // +0x20
    TDoubleCircularQueueBuffer<51200u> m_sendQueue;  // +0x1902c
};

// ---- TCPHandler / TCPHandlerRelay（vptr@0 + TManager@4，8B）----
class TCPHandler : public TManager<RelayService>
{
public:
    TCPHandler();
    virtual ~TCPHandler();
    virtual void dispatch(TCPUser* user, char* buf, int size, int flag) = 0;
};

class TCPHandlerRelay : public TCPHandler
{
public:
    TCPHandlerRelay();
    ~TCPHandlerRelay();
    virtual void dispatch(TCPUser* user, char* buf, int size, int flag);
};

// ---- UDPHandler / UDPHandlerRelay / UDPHandlerS2S（vptr@0 + TManager@4，8B）----
class UDPHandler : public TManager<RelayService>
{
public:
    UDPHandler();
    virtual ~UDPHandler();
    virtual void dispatch(char* buf, int size, int flag) = 0;
};

class UDPHandlerRelay : public UDPHandler
{
public:
    UDPHandlerRelay();
    ~UDPHandlerRelay();
    virtual void dispatch(char* buf, int size, int flag);
};

class UDPHandlerS2S : public UDPHandler
{
public:
    UDPHandlerS2S();
    ~UDPHandlerS2S();
    virtual void dispatch(char* buf, int size, int flag);
};

// ---- TCPThread（Thread@0 + TManager@0x14 + port@0x18 + handler@0x1c，0x20）----
class TCPThread : public Thread, public TManager<RelayService>
{
public:
    TCPThread();
    ~TCPThread();
    virtual void loop(void* pParam);
    void setPort(int port)
    {
        m_port = port;
    }
    void setHandler(TCPHandler* handler)
    {
        m_handler = handler;
    }

private:
    int m_port;               // +0x18
    TCPHandler* m_handler;    // +0x1c
};

// ---- UDPThread（Thread@0 + TManager@0x14 + port@0x18 + handler@0x1c +
//      udpSocket@0x20 + tick@0x24，0x2c）----
class UDPThread : public Thread, public TManager<RelayService>
{
public:
    UDPThread();
    ~UDPThread();
    virtual void loop(void* pParam);
    void setPort(int port)
    {
        m_port = port;
    }
    void setHandler(UDPHandler* handler)
    {
        m_handler = handler;
    }
    UDPSocket* getUDPSocket()
    {
        return m_udpSocket;
    }
    void setUDPSocket(UDPSocket* sock)
    {
        m_udpSocket = sock;
    }
    void logError();

private:
    int m_port;               // +0x18
    UDPHandler* m_handler;    // +0x1c
    UDPSocket* m_udpSocket;   // +0x20
    long long m_tick;         // +0x24
};

// ---- TCPAcceptThread（Thread@0 + TManager@0x14 + queue@0x18 + lock@0x40 +
//      port@0x58，0x5c）----
class TCPAcceptThread : public Thread, public TManager<RelayService>
{
public:
    TCPAcceptThread();
    ~TCPAcceptThread();
    virtual void loop(void* pParam);
    void lockPushAcceptedUser(TCPUser* user);
    TCPUser* lockPopAcceptedUser();
    void notifyCannotCreateUser(TCPSocket& sock);
    void notifyCannotLoginByMaxUserCount(TCPSocket& sock);
    int getPort() const
    {
        return m_port;
    }

private:
    std::queue<TCPUser*> m_acceptedUsers;      // +0x18
    TThreadLock<ThreadLock_linux> m_lock;      // +0x40
    int m_port;                                // +0x58
};

// ---- RelayService（独立类，0x1d8）----
class RelayService
{
public:
    RelayService();
    ~RelayService();
    void startup();
    void shutdown();
    void setAuthenticated(unsigned int acc_id);
    long long getTick();
    long long getTickLog();
    void setTick();
    void setTickLog();
    void makeLog();
    void postDisconnectEvent2TCPUser(unsigned int acc_id);
    void disconnectEvent2TCPUser(TCPUser* user);
    void relayToTCP(PacketHeader* pkt);

    PortInfo m_portInfo;      // +0
    Handlers m_handlers;      // +0x18
    Users m_users;            // +0x24
    Threads m_threads;        // +0xdc
    UserPools m_userPools;    // +0xf4
    Reactor m_reactor;        // +0x184
    int m_tick;               // +0x1c4
    long long m_tickLog;      // +0x1c8
    long long m_tickLogOld;   // +0x1d0
};

void createFileLogInfo();
void createFileLogWarn();
void createFileLogError();
void createFileLogCri();
void createLogInfo();
void createLogCri();
void createLogWarn();
void createLogError();
void destroyFileLogInfo();
void destroyFileLogWarn();
void destroyFileLogError();
void destroyFileLogCri();
void destroyLogInfo();
void destroyLogCri();
void destroyLogWarn();
void destroyLogError();

} // namespace RelayServiceApp

// ---- App：继承 LinuxService（0x734，无自有成员，全局命名空间）----
class App : public LinuxService
{
public:
    App();
    ~App();
    virtual void readConfig();
    virtual void prepareRun();
    virtual void run();
    virtual void finishRun();
    virtual void stop();
    virtual void onStop();
    virtual void onPause();
    virtual void onContinue();
};

#endif // RELAY_APP_H_
