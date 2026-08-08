#ifndef MONITOR_TYPES_H_
#define MONITOR_TYPES_H_

#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>

#include "PacketHeader.h"
#include "tinyxml.h"

class CApplication;
struct stServerInfo;
class CTcpRecvBuffer;
class CUdpRecvBuffer;
class CServerHandler;
class CTcpNetSystem;
class CMemberConfig;
class CMemberExpTbl;
class CTcpManagerServer;
class CTcpDBServer;
class CGameServer;
class CDBServer;
class CManagerServer;

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
    char RecvFromClient(char* buf, int* size, unsigned int* addr, unsigned short* port) const;
    char m_data[4];
};

// ---- CUdpRecvBuffer：0x1804 ----
class CUdpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    char m_data[0x1804];
};

class CPeriodicMessageMgr
{
public:
    CPeriodicMessageMgr();
    virtual ~CPeriodicMessageMgr();
    void OnProcess(CServerHandler* handler);
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
    void ProcessByMinute();
    char m_data[0xb8];
};

class CIPCounter
{
public:
    CIPCounter();
    virtual ~CIPCounter();
    void Init(CServerHandler* handler);
    void Proc(unsigned int tick);
    char m_data[0x14];
};

class CItemLimitEditionMgr
{
public:
    CItemLimitEditionMgr();
    virtual ~CItemLimitEditionMgr();
    void processScheduledJob(CApplication* app, bool flag);
    char m_data[0x18];
};

class CMemoryCashManager
{
public:
    CMemoryCashManager();
    virtual ~CMemoryCashManager();
    void Init(CApplication* app);
    void ProcessLifeTimeOut();
    void ProcessCashDataPrint();
    char m_data[0x4c];
};

// ---- CTcpManagerServer / CTcpDBServer（网络服务封装，各 0x14）----
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
    char IsValidServer();
    const char* GetIP();
    unsigned short GetPort();
    void SendHeartbeat(unsigned char group);
    std::string m_ip;      // +0
    unsigned short m_port; // +4
    int m_sock;            // +8
    void* m_net;           // +0xc
    int m_field10;         // +0x10
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
    char IsValidServer();
    const char* GetIP();
    unsigned short GetPort();
    void SendHeartbeat();
    std::string m_ip;      // +0
    unsigned short m_port; // +4
    int m_sock;            // +8
    void* m_net;           // +0xc
    int m_field10;         // +0x10
};

// ---- CServerInterface：0x10（CDBServer/CManagerServer/CGameServer 基类）----
class CServerInterface
{
public:
    CServerInterface(stServerInfo* info);
    virtual ~CServerInterface();
    virtual bool Initialize();
    virtual bool Destroy();
    char IsValidServer();
    char IsConnected();
    char IsHeartBeatTimeOver();
    unsigned char GetChannelNo();
    void OnDisconnect();
    stServerInfo* m_info;  // +4
    char m_field8[8];      // +8
};

class CDBServer : public CServerInterface
{
public:
    CDBServer(stServerInfo* info);
    ~CDBServer();
};

class CGameServer : public CServerInterface
{
public:
    CGameServer(stServerInfo* info);
    ~CGameServer();
};

class CManagerServer : public CServerInterface
{
public:
    CManagerServer(stServerInfo* info);
    ~CManagerServer();
    void SendHeartBeat(int group);
};

class CServerHandler
{
public:
    CServerHandler();
    virtual ~CServerHandler();
    void Attach(CApplication* app);
    void Process();
    unsigned char GetServerGroupNo();
    void Load(std::multimap<unsigned int, stServerInfo*>* map);
    bool RegistGameServer(stServerInfo* info);
    void RegistDBServer(CDBServer* db);
    void UnregistDBServer();
    void RegistManagerServer(CManagerServer* mgr);
    void UnregistManagerServer();
    CTcpManagerServer* GetTcpManagerServer();
    CTcpDBServer* GetTcpDBServer();
    void SendToDB(PacketHeader* pkt);
    std::map<unsigned int, CGameServer*> m_gameServers;  // +0
    CDBServer* m_dbServer;                          // +0x18
    CManagerServer* m_managerServer;                // +0x1c
    CApplication* m_app;                            // +0x20
    int m_field24;                                  // +0x24
    std::map<unsigned int, void*> m_tcpGameServers; // +0x28
    CTcpDBServer m_tcpDbServer;                     // +0x40
    int m_field50;                                  // +0x50
    CTcpManagerServer m_tcpManagerServer;           // +0x54
    int m_field64;                                  // +0x64
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
    virtual void stop();
    virtual void join();
    virtual ~CThreadInterface();
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
    CFrameCountHandler* GetFrameCountInfo();
    void SaveProcess();
    unsigned char m_field0;    // +0
    char m_pad1[3];            // +1
    int m_field4;              // +4
    int m_field8;              // +8
    int m_fieldc;              // +0xc
    int m_field10;             // +0x10
    int m_field14;             // +0x14
    int m_field18;             // +0x18
    int m_field1c;             // +0x1c
    int m_field20;             // +0x20
    unsigned char m_field24;   // +0x24
    unsigned char m_field25;   // +0x25
    unsigned char m_field26;   // +0x26
    char m_pad27;              // +0x27
    unsigned char m_field28;   // +0x28
    char m_pad29[3];           // +0x29
    CApplication* m_app;       // +0x2c
};

// ---- CBuddyRegisterManager：0x18 ----
class CBuddyRegisterManager
{
public:
    CBuddyRegisterManager();
    ~CBuddyRegisterManager();
    char m_data[0x18];
};

// ---- CUdpNetworkThread：0x1c ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    void SetUDPQueue(void* q);
    void dispatch(void* param);
    void* m_recvQ;         // +0xc
    CUdpHandler* m_udpHandler;  // +0x10
    void* m_qLock;         // +0x14
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

// ---- CUserManager：0x7c ----
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    void MemberEnterProcess();
    void ProcessByMinute();
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
    void MemberRegisterFlagProcess();
    char m_data[0x30];
};

// ---- CMemberConfig / CMemberExpTbl（表类）----
class CMemberConfig
{
public:
    CMemberConfig();
    virtual ~CMemberConfig();
    virtual void Load_Table(const std::string& path);
    char m_data[0x78];
};

class CMemberExpTbl
{
public:
    CMemberExpTbl();
    virtual ~CMemberExpTbl();
    virtual void Load_Table(const std::string& path);
    char m_data[0x30];
};

// ---- CKillUSRConfig：0x10 ----
class CKillUSRConfig
{
public:
    CKillUSRConfig();
    virtual ~CKillUSRConfig();
    char m_data[0xc];
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
    void Process();
};

CPacketDecoder* CPacketDecoderInstance();
class CSignalTranslator;
CSignalTranslator* CSignalTranslatorInstance();

class CSignalTranslator
{
public:
    CSignalTranslator();
    ~CSignalTranslator();
    void init(CApplication* app);
    void clear();
    char m_data[0x20];
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
    void ProcessTask(unsigned int tick);
    char m_data[0xc];
};

class CTask_ChristmasEvent : public CTaskScheduler::CTask
{
public:
    CTask_ChristmasEvent(unsigned int tick, unsigned int flag);
    ~CTask_ChristmasEvent();
    static int DecideEventTime();
    static unsigned int getEventStartTime();
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

unsigned int get_rand_int(int n);

// ---- np_server_xml：CServerXml 0xb8 ----
namespace np_server_xml
{
class CServerXml
{
public:
    CServerXml();
    ~CServerXml();
    static void StrLoading();
    char m_field0[8];                       // +0
    TiXmlDocument m_doc;                    // +8
    std::string m_str54;                    // +0x54
    std::map<int, std::string> m_map58;     // +0x58
    std::map<int, std::string> m_map70;     // +0x70
    std::map<int, std::string> m_map88;     // +0x88
    std::map<int, int> m_mapa0;             // +0xa0
};
}

extern np_server_xml::CServerXml g_ServerString_;

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
    virtual void Init(CApplication* app, int argc, char** argv);
};

class CAppStartInit : public CAppInit
{
public:
    CAppStartInit();
    virtual ~CAppStartInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    int Init_Daemon(int argc, char** argv);
    char Save_pid(const std::string& file);
};

class CAppStopInit : public CAppInit
{
public:
    CAppStopInit();
    virtual ~CAppStopInit();
    virtual void Init(CApplication* app, int argc, char** argv);
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
