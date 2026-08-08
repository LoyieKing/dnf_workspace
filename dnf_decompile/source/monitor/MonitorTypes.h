#ifndef MONITOR_TYPES_H_
#define MONITOR_TYPES_H_

#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

#include "PacketHeader.h"
#include "tinyxml.h"
#include "Thread.h"

class CApplication;
struct stServerInfo;
class CTcpRecvBuffer;
class CUdpRecvBuffer;
class CTcpSendBuffer;
class CPeer;
class CServerHandler;
class CTcpNetSystem;
class CMemberConfig;
class CMemberExpTbl;
class CTcpManagerServer;
class CTcpDBServer;
class CGameServer;
class CDBServer;
class CManagerServer;
class Packet_Item_Limit_Edition_Update;

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
    ~CUdpHandler();
    int InitServerSocket(int port);
    int InitClientSocket();
    char RecvFromClient(char* buf, int* size, unsigned int* addr, unsigned short* port) const;
    int m_sock;         // +0
    int m_clientSock;   // +4
};

// ---- CUdpRecvBuffer：0x1804 ----
class CUdpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    char m_data[0x1804];
};

// ---- CTcpRecvBuffer：0x1804 ----
class CTcpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    char m_data[0x1804];
};

// ---- CAppLoadChecker（最小）----
class CAppLoadChecker
{
public:
    char CheckTcpRecvQ(int size);
    char CheckUdpRecvQ(int size);
    void RequestDB(void* serverHandler, int flag, int size);
};

CAppLoadChecker* CAppLoadCheckerInstance();

// ---- CPacketCounter<1000,10240>：统计计数器 ----
template<int A, int B>
class CPacketCounter
{
public:
    CPacketCounter(char* dir, char* name);
    ~CPacketCounter();
    void Reset();
    void IncrementPacketCount(int id);
    void BeforeProcess();
    void AfterProcess(int id);
    char m_data[0x1d648];
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
    void makeItemLimitEditionUpdatePacket(Packet_Item_Limit_Edition_Update& pkt) const;
    std::map<unsigned int, class CItemLimitEdition*> m_items;  // +0
    time_t m_lastTime;                     // +0x18
};

class CItemLimitEdition
{
public:
    ~CItemLimitEdition();
    unsigned int getSellEndTime() const;
    unsigned int getIPGNO() const;
    unsigned int getSellNum() const;
    char isSellComplete() const;
    char m_data[0x1c];
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
    void SendAllTcpGameServer(PacketHeader* pkt);
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

// ---- TCPSocket（最小声明）----
class TCPSocket
{
public:
    char open();
    char bind(unsigned short port, bool flag);
    char listen(int backlog);
    char pollReadEvent();
    char accept(TCPSocket* sock);
    int getHandle() const;
    char m_data[0x1c];
};

// ---- CTcpNetworkThread：0x30 ----
class CTcpNetworkThread : public CThreadInterface
{
public:
    CTcpNetworkThread();
    ~CTcpNetworkThread();
    void attach(CTcpNetSystem* net);
    void dispatch(void* param);
    CTcpNetSystem* m_net;       // +0xc
    void* m_recvQ;              // +0x10
    void* m_handler;            // +0x14
    void* m_recvQLock;          // +0x18
    void* m_recvBLock;          // +0x1c
    void* m_sendQ;              // +0x20
    void* m_sendQLock;          // +0x24
    void* m_sendBLock;          // +0x28
    char m_runningFlag;         // +0x2c
    char m_pad[3];              // +0x2d
};

// ---- CTcpAcceptThread：0x38 ----
class CTcpAcceptThread : public CThreadInterface
{
public:
    CTcpAcceptThread();
    ~CTcpAcceptThread();
    void attach(CTcpNetSystem* net);
    void dispatch(void* param);
    CTcpNetSystem* m_net;       // +0xc
    void* m_recvQLock;          // +0x10
    void* m_recvBLock;          // +0x14
    TCPSocket m_sock;           // +0x18
    unsigned short m_port;      // +0x34
    char m_pad[2];              // +0x36
};

// ---- CTcpHandler / CPeer（最小声明）----
class CTcpHandler
{
public:
    void* GetEventPtr(int idx);
    char IsSetInEvent(int idx);
    char IsSetOutEvent(int idx);
    char IsSetErrEvent(int idx);
};

class CPeer : public TCPSocket
{
public:
    TCPSocket* GetTcpSocket();
    char RecvPacket();
    void DisConnSig();
    unsigned int get_remain_sendlen();
    void send_packet();
    void InitPeer(void* recvQ, void* recvQLock, void* recvBLock);
    void ConnSig();
    int parsing(int recvLen);
    char m_data[0x1800];   // +0x1c..+0x181b
    char* m_buf;           // +0x181c
    int m_remainLen;       // +0x1820
    int m_alreadyRead;     // +0x1824
    void* m_recvQ;         // +0x1828
    void* m_bLock;         // +0x182c
    void* m_qLock;         // +0x1830
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
    void CleanPeers();
    void SetEpollAcceptedPeers();
    void SendPacket();
    int WaitForEvent();
    CPeer* CreatePeer();
    void DeletePeer(CPeer* peer);
    void InsertAcceptedPeer(CPeer* peer);
    unsigned short Get_TcpServerPort();
    CMutex* Get_TcpRecvBLock();
    CMutex* Get_TcpRecvQLock();
    CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>*
        Get_TcpSwapQPacket();
    void* m_handler;    // +0
    void* m_field4;     // +4
    CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>
        m_recvSwapQ;    // +8
    CMutex m_mutex60;   // +0x60
    CMutex m_mutex78;   // +0x78
    CMutex m_mutex90;   // +0x90
    CMutex m_mutexa8;   // +0xa8
    std::queue<CTcpSendBuffer*> m_sendQ;  // +0xc0
    CMutex m_mutexe8;   // +0xe8
    CMutex m_mutex100;  // +0x100
    void* m_acceptThread;  // +0x118
    std::queue<CPeer*> m_peerQ;           // +0x11c
    std::map<unsigned int, CPeer*> m_peers;  // +0x144
    unsigned short m_port;                // +0x15c
    char m_pad15e[2];                     // +0x15e
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
    void AddSchoolNo(unsigned int schoolNo, unsigned char channel);
    std::map<unsigned int, std::map<unsigned char, unsigned int> > m_mapSchools;  // +0
    char m_data[0x60];              // +0x18
    CApplication* m_app;            // +0x78
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
    virtual void Load_Table(const std::string& path);
    void Clear_Table();
    std::vector<struct ST_KillUSRConfig*>* GetInfo();
    std::vector<struct ST_KillUSRConfig*> m_vec;  // +4
};

struct ST_KillUSRConfig
{
    int m_type;   // +0
    int m_val;    // +4
    int m_b;      // +8
    int m_c;      // +0xc
};

// ---- CPacketTranslater / CPacketDecoder / CSignalTranslator ----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
    static void OnAddBuddy(PacketHeader* pkt);
    static void OnAddBuddyDBReply(PacketHeader* pkt);
    static void OnBroadcastMsg(PacketHeader* pkt);
    static void OnCallMemberList(PacketHeader* pkt);
    static void OnCeraUpdate(PacketHeader* pkt);
    static void OnChangeCharName(PacketHeader* pkt);
    static void OnChannelType(PacketHeader* pkt);
    static void OnCharLogin(PacketHeader* pkt);
    static void OnCharacterDelete(PacketHeader* pkt);
    static void OnCheckOverlappedAccusation(PacketHeader* pkt);
    static void OnDBMWDeleteToBlackList(PacketHeader* pkt);
    static void OnDBMWResisterToBlackList(PacketHeader* pkt);
    static void OnDBMWResponseBlackListOnLogin(PacketHeader* pkt);
    static void OnDelBuddy(PacketHeader* pkt);
    static void OnDelBuddyDBReply(PacketHeader* pkt);
    static void OnDeleteToBlackList(PacketHeader* pkt);
    static void OnDisableUserOneToOneChat_GM(PacketHeader* pkt);
    static void OnEventEnd(PacketHeader* pkt);
    static void OnEventItemUpdate(PacketHeader* pkt);
    static void OnEventStart(PacketHeader* pkt);
    static void OnExchangeServerInfo(PacketHeader* pkt);
    static void OnFindCharacName_useUID(PacketHeader* pkt);
    static void OnForbidChat(PacketHeader* pkt);
    static void OnGMRequestMid(PacketHeader* pkt);
    static void OnGameMonitorGMVillageAttacked(PacketHeader* pkt);
    static void OnGameServerRegist(PacketHeader* pkt);
    static void OnHeartBeat(PacketHeader* pkt);
    static void OnInnerPacketLogin(PacketHeader* pkt);
    static void OnInnerPacketLogout(PacketHeader* pkt);
    static void OnLoadPeriodicMessage(PacketHeader* pkt);
    static void OnLogin(PacketHeader* pkt);
    static void OnLogout(PacketHeader* pkt);
    static void OnLogoutComplete(PacketHeader* pkt);
    static void OnMemberEnterReply(PacketHeader* pkt);
    static void OnMemberSecede(PacketHeader* pkt);
    static void OnMonitorFindFactoryHubUser(PacketHeader* pkt);
    static void OnMonitorFullLevelBroadCast(PacketHeader* pkt);
    static void OnMonitorManagerConnectOK(PacketHeader* pkt);
    static void OnMonitorMegaPhoneMsg(PacketHeader* pkt);
    static void OnMonitorMegaPhoneMsgHyperLink(PacketHeader* pkt);
    static void OnMonitorPunishCancel(PacketHeader* pkt);
    static void OnMonitorSecuServiceConnWeb(PacketHeader* pkt);
    static void OnNoCache(PacketHeader* pkt);
    static void OnNoticeCharLiveOnTenMin(PacketHeader* pkt);
    static void OnNoticeMemberChatMsg(PacketHeader* pkt);
    static void OnNoticeMemberChatMsgHyperLink(PacketHeader* pkt);
    static void OnNoticeMessage(PacketHeader* pkt);
    static void OnNoticeOtherChannelChatMsg(PacketHeader* pkt);
    static void OnNoticeOtherChannelChatMsgHyperLink(PacketHeader* pkt);
    static void OnNoticeProhibitConnectUser(PacketHeader* pkt);
    static void OnNoticeSlang(PacketHeader* pkt);
    static void OnNotifyAuctionMail(PacketHeader* pkt);
    static void OnNotifyNewMail(PacketHeader* pkt);
    static void OnPayTaxToUpper(PacketHeader* pkt);
    static void OnPcRoomPlayTimeReward(PacketHeader* pkt);
    static void OnPvPChannelInfo(PacketHeader* pkt);
    static void OnPvPChannelUserCount(PacketHeader* pkt);
    static void OnQueryBuddyInfoDBReply(PacketHeader* pkt);
    static void OnRegisterEventIdx(PacketHeader* pkt);
    static void OnRegisterEventItem(PacketHeader* pkt);
    static void OnRegisterEventUserIdx(PacketHeader* pkt);
    static void OnRegisterGM_mid(PacketHeader* pkt);
    static void OnRegisterToBlackList(PacketHeader* pkt);
    static void OnRelayServerUserCheck(PacketHeader* pkt);
    static void OnRenew_GM_List(PacketHeader* pkt);
    static void OnReplyQueryMember(PacketHeader* pkt);
    static void OnReplyUserInfo(PacketHeader* pkt);
    static void OnRequestBlackList(PacketHeader* pkt);
    static void OnRequestMemberEnter(PacketHeader* pkt);
    static void OnRequestReloadPowerWarRanker(PacketHeader* pkt);
    static void OnResetTODAPCInfo(PacketHeader* pkt);
    static void OnResponseFullIPCounterList(PacketHeader* pkt);
    static void OnResponseIPCounterList(PacketHeader* pkt);
    static void OnResultLoadPeriodicMessage(PacketHeader* pkt);
    static void OnResultRegisterEventIdx(PacketHeader* pkt);
    static void OnServerMessageInfo(PacketHeader* pkt);
    static void OnSetARSInfo(PacketHeader* pkt);
    static void OnSetCleanPadPoint(PacketHeader* pkt);
    static void OnTakeScreenShot(PacketHeader* pkt);
    static void OnUpdateChangableCharInfo(PacketHeader* pkt);
    static void OnUpdateMiniCraneSeed(PacketHeader* pkt);
    static void OnUserRepel(PacketHeader* pkt);
    static void OnUserRepelByCharName(PacketHeader* pkt);
    static void OnVillageAttackedGMCommand(PacketHeader* pkt);
    static void OnVillageAttackedRank(PacketHeader* pkt);
    static void OnVillageMonsterFightResult(PacketHeader* pkt);
    static void OnWebChangeUserHandicap(PacketHeader* pkt);
    static void OnWebEmergencyPatchMessage(PacketHeader* pkt);
    static void OnWebNoticeInGameAD(PacketHeader* pkt);
    static void OnWebNoticeSingle(PacketHeader* pkt);
    static void OnWebQueryUserState(PacketHeader* pkt);
    static void OnWebRequestARSInfo(PacketHeader* pkt);
    static void onCollectItems(PacketHeader* pkt);
    static void onCollectItemsGm(PacketHeader* pkt);
    static void onCollectItemsResult(PacketHeader* pkt);
    static void onEndGameEventFromServer(PacketHeader* pkt);
    static void onIPCounterControl(PacketHeader* pkt);
    static void onItemLimitEditionBuyableRequest(PacketHeader* pkt);
    static void onItemLimitEditionLoadDataReq(PacketHeader* pkt);
    static void onItemLimitEditionLoadDataRpy(PacketHeader* pkt);
    static void onItemLimitEditionSellEnd(PacketHeader* pkt);
    static void onLoadBlackIPMonitor(PacketHeader* pkt);
    static void onLoadBlackIPMonitorDeleteIP(PacketHeader* pkt);
    static void onLoadBlackIPMonitorPartLoad(PacketHeader* pkt);
    static void onLoadCleanPadPoint(PacketHeader* pkt);
    static void onLoadPunishUserReq(PacketHeader* pkt);
    static void onReloadCountryCode(PacketHeader* pkt);
    static void onReloadSecurityRestrictPolicy(PacketHeader* pkt);
    static void onReplyLoadTowerFullRank(PacketHeader* pkt);
    static void onRequestCharacInfoByCharacName(PacketHeader* pkt);
    static void onRequestCharacTowerUpdateRank(PacketHeader* pkt);
    static void onRequestReloadTowerRanker(PacketHeader* pkt);
    static void onSocialEventRewardItemInfo(PacketHeader* pkt);
    static void onSocialEventRewardItemInfoAll(PacketHeader* pkt);
    static void onSocialEventRewardItemRequest(PacketHeader* pkt);
    static void onSocialEventRewardItemResponse(PacketHeader* pkt);
    static void onSocialEventRewardItemUpdate(PacketHeader* pkt);
    static void onStartGameEventFromServer(PacketHeader* pkt);
    static void onWebReqReloadAutoPunishRule(PacketHeader* pkt);};

class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Attach(CApplication* app);
    void Process();
    void TcpProcess();
    void UdpProcess();
    char MsgDecode(PacketHeader* pkt);
    char m_header[0x1c];                    // +0（recvQ@0xc/parseQ@0x10/bLock@0x14/handler@0x18）
    void* m_handlers[(0xa020 - 0x1c) / 4];  // +0x1c
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
    void init_signal();
    void init_handler(CApplication* app);
    bool regist_signal(int sig, void (*handler)(int));
    void* getSignal(int sig) const;
    void clear();
    char m_data[0x68];
};

void signal_handler(int sig);

// ---- CSignal 族：vptr[0]=handle, vptr[2]=D0 ----
class CSignal
{
public:
    virtual void handle(int sig);
    void attachApp(CApplication* app);
    static void dump_core_file();
    CApplication* m_app;  // +4
};

class CTerminateSig : public CSignal
{
public:
    CTerminateSig();
    ~CTerminateSig();
    void handle(int sig);
};

class CSegmentationFaultSig : public CSignal
{
public:
    CSegmentationFaultSig();
    ~CSegmentationFaultSig();
    void handle(int sig);
};

class CUser1Sig : public CSignal
{
public:
    CUser1Sig();
    ~CUser1Sig();
    void handle(int sig);
};

class CUser2Sig : public CSignal
{
public:
    CUser2Sig();
    ~CUser2Sig();
    void handle(int sig);
};

class CSystemFailSig : public CSignal
{
public:
    CSystemFailSig();
    ~CSystemFailSig();
    void handle(int sig);
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

class Packet_Item_Limit_Edition_Sell_end : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Sell_end();
    unsigned int m_fieldA;    // +10
    unsigned int m_fieldB;    // +14
};

class Packet_Item_Limit_Edition_Update : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Update();
    unsigned int m_fieldA;    // +10
    unsigned int m_fieldB;    // +14
    char m_data[0x100];       // +18
};

class Packet_Monitor_Event_Start : public PacketHeader
{
public:
    Packet_Monitor_Event_Start();
    unsigned int m_fieldA;    // +10
    unsigned short m_fieldB;  // +14
    unsigned short m_fieldC;  // +16
};

class Packet_Monitor_Event_End : public PacketHeader
{
public:
    Packet_Monitor_Event_End();
    unsigned int m_fieldA;    // +10
};

class Packet_Monitor_Take_Screen_Shot : public PacketHeader
{
public:
    Packet_Monitor_Take_Screen_Shot();
    unsigned char m_fieldA;   // +10
    unsigned int m_fieldB;    // +11
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
int getErrno();

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
