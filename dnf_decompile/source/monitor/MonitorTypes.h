#ifndef MONITOR_TYPES_H_
#define MONITOR_TYPES_H_

#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>

#include "PacketHeader.h"

class CApplication;
struct stServerInfo;
class CTcpRecvBuffer;
class CUdpRecvBuffer;
class CServerHandler;
class CTcpNetSystem;
class CMemberConfig;
class CMemberExpTbl;

// ---- 基础管理器（monitor 专属，实现逐步补齐）----
class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    ~CInnerMsgHandler();
    char m_data[1];
};

class CUdpHandler
{
public:
    CUdpHandler();
    virtual ~CUdpHandler();
    int InitServerSocket(int port);
    char m_data[4];
};

class CPeriodicMessageMgr
{
public:
    CPeriodicMessageMgr();
    virtual ~CPeriodicMessageMgr();
    char m_data[0x204];
};

class LimitNpcBuyItemManager
{
public:
    LimitNpcBuyItemManager();
    virtual ~LimitNpcBuyItemManager();
    char m_data[0x14];
};

class CLoginLogoutStatistics
{
public:
    CLoginLogoutStatistics(CApplication& app);
    virtual ~CLoginLogoutStatistics();
    char m_data[0xb8];
};

class CIPCounter
{
public:
    CIPCounter();
    virtual ~CIPCounter();
    void Init(CServerHandler* handler);
    char m_data[0x14];
};

class CItemLimitEditionMgr
{
public:
    CItemLimitEditionMgr();
    virtual ~CItemLimitEditionMgr();
    char m_data[0x18];
};

class CMemoryCashManager
{
public:
    CMemoryCashManager();
    virtual ~CMemoryCashManager();
    void Init(CApplication* app);
    char m_data[0x4c];
};

class CServerHandler
{
public:
    CServerHandler();
    virtual ~CServerHandler();
    void Attach(CApplication* app);
    void Load(std::multimap<unsigned int, stServerInfo*>* map);
    void* GetTcpManagerServer();
    void* GetTcpDBServer();
    void SendToDB(PacketHeader* pkt);
    char m_data[0x64];
};

class CTowerRank
{
public:
    CTowerRank();
    virtual ~CTowerRank();
    void processReloadRanking(CServerHandler* handler, bool flag, unsigned int tick);
    char m_data[0x5c];
};

// ---- CThreadInterface：0xc ----
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    virtual void stop();
    virtual void join();
    virtual void dispatch(void* param) = 0;
    bool begin();
    static void* dispatch_proxy(void* temp);
    void* m_thread;   // +4
    bool m_running;   // +8
};

// ---- CFrameCountHandler：0x30 ----
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    ~CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int frameCount, unsigned short tick);
    char m_data[0x30];
};

// ---- CUdpNetworkThread：0x1c ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    void dispatch(void* param);
    CApplication* m_app;   // +0xc
    void* m_queue;         // +0x10
    void* m_lock;          // +0x14
    void* m_bLock;         // +0x18
};

// ---- CSwapQueue<T,N>：0x58 ----
template<class T, int N>
class CSwapQueue
{
public:
    CSwapQueue();
    ~CSwapQueue();
    void Push(T* item);
    void Pop();
    void Init();
    T* GetRecvQ();
    T* GetParseQ();
    void SwapQ();
    char m_data[0x58];
};

// ---- IQueue<T>：0x30 ----
template<class T>
class IQueue
{
public:
    IQueue();
    ~IQueue();
    static IQueue<T>* Get();
    void InitQueue(T* recv, T* parse);
    bool SwitchQueue();
    T* GetParseQueue();
    char m_data[0x30];
};

// ---- CTcpNetSystem：0x160 ----
class CTcpNetSystem
{
public:
    CTcpNetSystem();
    ~CTcpNetSystem();
    void Init(unsigned short port);
    bool OpenTcpService(int& sockRef, const char* ip, unsigned short port);
    CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>*
        Get_TcpSwapQPacket();
    char m_data[0x160];
};

// ---- CTcpManagerServer / CTcpDBServer（网络服务封装）----
class CTcpManagerServer
{
public:
    CTcpManagerServer();
    ~CTcpManagerServer();
    void Init(CTcpNetSystem* net);
    void SetIP(std::string ip);
    void SetPort(unsigned short port);
    int* GetSockRef();
    int GetSock();
};

class CTcpDBServer
{
public:
    CTcpDBServer();
    ~CTcpDBServer();
    void Init(CTcpNetSystem* net);
    void SetIP(std::string ip);
    void SetPort(unsigned short port);
    int* GetSockRef();
    int GetSock();
};

// ---- CUserManager：0x7c ----
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    char m_data[0x7c];
};

// ---- CMemberManager：0x30 ----
class CMemberManager
{
public:
    CMemberManager();
    ~CMemberManager();
    void Init(CApplication* app, CUserManager* userMgr, CMemberConfig* memberConfig,
              CMemberExpTbl* memberExpTbl);
    char m_data[0x30];
};

// ---- CMemberConfig / CMemberExpTbl（表类）----
class CMemberConfig
{
public:
    CMemberConfig();
    virtual ~CMemberConfig();
    virtual void Load_Table(const std::string& path);
    char m_data[0x80];
};

class CMemberExpTbl
{
public:
    CMemberExpTbl();
    virtual ~CMemberExpTbl();
    virtual void Load_Table(const std::string& path);
    char m_data[0x80];
};

// ---- CPacketTranslater / CPacketDecoder / CSignalTranslator ----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
};

class CPacketDecoder
{
public:
    void Attach(CApplication* app);
};

CPacketDecoder* CPacketDecoderInstance();
void* CSignalTranslatorInstance();

class CSignalTranslator
{
public:
    static void clear(void* self);
};

// ---- 任务 / 事件 ----
class CTaskScheduler
{
public:
    class CTask
    {
    public:
        virtual ~CTask();
    };
    CTaskScheduler();
    virtual ~CTaskScheduler();
    void AddTask(CTask* task);
    char m_data[0xc];
};

class CTask_ChristmasEvent : public CTaskScheduler::CTask
{
public:
    CTask_ChristmasEvent(unsigned int tick, unsigned int flag);
    ~CTask_ChristmasEvent();
    static long long getEventEndTime();
    static unsigned int MakeEventStartTick(int flag);
    char m_data[0xc];
};

class TowerOfDespairReloadAPC_Task : public CTaskScheduler::CTask
{
public:
    TowerOfDespairReloadAPC_Task(unsigned int a, unsigned int b);
    ~TowerOfDespairReloadAPC_Task();
    char m_data[0xc];
};

class CEventActionManager
{
public:
    CEventActionManager();
    virtual ~CEventActionManager();
    char m_data[0x294];
};

class COnTimeEventManager
{
public:
    COnTimeEventManager();
    virtual ~COnTimeEventManager();
    void AttachApp(CApplication* app);
    char m_data[0x40];
};

class CollectItms
{
public:
    CollectItms();
    ~CollectItms();
    char m_data[0x10];
};

namespace init_accusation
{
class CInitAccusationListMgr
{
public:
    CInitAccusationListMgr(CApplication& app);
    ~CInitAccusationListMgr();
    void setSchedule(bool const& flag);
    char m_data[4];
};
}

// ---- monitor 专属 Packet（Load 中局部构造）----
class Packet_Item_Limit_Edition_Load_Data_Req : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Load_Data_Req();
    unsigned char m_fieldA;   // +10
    unsigned int m_fieldB;    // +11
    unsigned int m_fieldC;    // +15
};

class Packet_Load_Periodic_Message : public PacketHeader
{
public:
    Packet_Load_Periodic_Message();
};

class LimitNpcBuyItemRequestInfo : public PacketHeader
{
public:
    LimitNpcBuyItemRequestInfo();
};

// ---- CSwapQueue / IQueue 模板桩（后续从 guild 复用完整实现）----
template<class T, int N>
CSwapQueue<T, N>::CSwapQueue() {}
template<class T, int N>
CSwapQueue<T, N>::~CSwapQueue() {}
template<class T, int N>
void CSwapQueue<T, N>::Push(T* item) {}
template<class T, int N>
void CSwapQueue<T, N>::Pop() {}
template<class T, int N>
void CSwapQueue<T, N>::Init() {}
template<class T, int N>
T* CSwapQueue<T, N>::GetRecvQ() { return 0; }
template<class T, int N>
T* CSwapQueue<T, N>::GetParseQ() { return 0; }
template<class T, int N>
void CSwapQueue<T, N>::SwapQ() {}

template<class T>
IQueue<T>::IQueue() {}
template<class T>
IQueue<T>::~IQueue() {}
template<class T>
IQueue<T>* IQueue<T>::Get() { return 0; }
template<class T>
void IQueue<T>::InitQueue(T* recv, T* parse) {}
template<class T>
bool IQueue<T>::SwitchQueue() { return false; }
template<class T>
T* IQueue<T>::GetParseQueue() { return 0; }

class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
};

class CAppStartInit : public CAppInit
{
public:
    CAppStartInit();
    virtual ~CAppStartInit();
};

class CAppStopInit : public CAppInit
{
public:
    CAppStopInit();
    virtual ~CAppStopInit();
};

class CDNFException
{
public:
    CDNFException(const std::string& msg);
    virtual ~CDNFException() throw();
    virtual const char* what() const throw();
private:
    std::string m_msg;
};

namespace WongWork
{
class CGMAccounts
{
public:
    CGMAccounts();
    virtual ~CGMAccounts();
    char m_data[4];
};
}

#endif  // MONITOR_TYPES_H_
