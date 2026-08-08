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
class CMemberManager;
class CUser;
struct hyperlink_item_info;
class CTcpManagerServer;
class CTcpDBServer;
class CGameServer;
class CDBServer;
class CManagerServer;
class CTcpGameServer;
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
    int SendToClient(char* buf, int len, unsigned short port, const char* ip,
                     unsigned int addr) const;
    int SendToServer(char* buf, int len, unsigned short port, const char* ip) const;
    char RecvFromServer(char* buf, int* size, unsigned int* addr, unsigned short* port) const;
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

class CTcpSendBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    char m_data[0x1804];
};

class CPacketBuffer
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
    int checkTcpRecvLoad(int size);
    int checkUdpRecvLoad(int size);
    int checkTcpSendLoad(int size);
    void RequestDB(void* serverHandler, int flag, int size);
    int m_tcpRecvLast;   // +0
    int m_udpRecvLast;   // +4
    int m_tcpSendLast;   // +8
    char m_tcpRecvLevel; // +0xc
    char m_udpRecvLevel; // +0xd
    char m_tcpSendLevel; // +0xe
    char m_pad[1];       // +0xf
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
    char QueryCashMemoryMember(CUser* user);
    int QueryCashMemoryBuddyInfo(CUser* user);
    char QueryCashMemoryBlackList(CUser* user);
    char QueryUpdatedCharacName(unsigned int charNo, std::string& name);
    void incMemberCashHitCnt();
    void incBuddyCashHitCnt();
    void incBlackListCashHitCnt();
    std::map<unsigned int, std::string> m_names;        // +0
    std::map<unsigned int, class CCashObject*> m_cashObjects;  // +0x18
    CApplication* m_app;                                // +0x30
    char m_data[0x1c];                                  // +0x34
};

class CCashObject
{
public:
    unsigned int GetCharacNo();
    class CMember* GetMemberObject();
    void SetMemberObject(class CMember* member);
    void ClearMemberObject();
    void DeleteMemberObject();
    int GetBuddysObject(class CBuddy** buddies);
    void DeleteBuddys();
    std::map<unsigned int, class CBlackUser*>* GetBlackUsersObject();
    void ClearMapBlackUsers();
    char m_data[0x20];
};

class CBuddy
{
public:
    unsigned int* getBuddyDBInfo();
    char m_data[0x40];
};

// ---- CBuddyHandle：0x20 ----
class CBuddyHandle
{
public:
    CBuddyHandle();
    ~CBuddyHandle();
    int addDB(CServerHandler* handler, char* name);
    int delDB(CServerHandler* handler, char* name);
    std::map<std::string, CBuddy*> m_buddies;  // +0
    CUser* m_prUser;                           // +0x18
    unsigned short m_field1c;                  // +0x1c
};

class CBlackUser
{
public:
    void ChangeCharName(char* name);
    char m_data[0x20];
};

// ---- CExchangeServer：0x14 ----
class CExchangeServer
{
public:
    CExchangeServer();
    ~CExchangeServer();
    void SetExchageServer(unsigned int ip, short port, int code, bool& result);
    char m_active;         // +0
    char m_pad1[3];        // +1
    long long m_time;      // +4
    unsigned int m_ip;     // +8
    short m_port;          // +0xc
    int m_code;            // +0x10
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

struct stTowerRankElement_t
{
    stTowerRankElement_t();
    stTowerRankElement_t(unsigned char job, unsigned short score);
    unsigned char m_job;    // +0
    char m_pad;
    unsigned short m_score; // +2
};

class CTowerRank
{
public:
    CTowerRank();
    ~CTowerRank();
    void processReloadRanking(CServerHandler* handler, bool flag, unsigned int tick);
    void registCharacRank(unsigned int floor, const char* name, unsigned int job,
                          unsigned int score);
    std::multimap<std::string, stTowerRankElement_t> m_ranks[4];  // 0x60
    unsigned int getRankData(unsigned int floor, const char* name, unsigned int maxCount,
                             stTowerRankElement_t* out);
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
    void addBuddyRegister(unsigned int charNo);
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
    int pollReadWriteErrEvent() const;
    char accept(TCPSocket* sock);
    int getHandle() const;
    int m_fd;             // +0
    char m_data[0x18];    // +4
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
    int send_packet();
    int send_packet(char* buf, int len);
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
    int m_sendRemain;      // +0x1834
    char* m_sendPtr;       // +0x1838
    char m_sendBuf[0x96000];  // +0x183c
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
    CUser* FindUser_CharNo(unsigned int charNo) const;
    void DeleteUsersOnGameServerDown(CGameServer* gameServer);
    void DeleteUsersOnTcpGameServerDown(CTcpGameServer* tcpGameServer);
    void SendConnectedBuddysList(CUser* user);
    void GetSchoolCount(unsigned int school, unsigned int* out, unsigned char& idx);
    int DeleteProhibitUser(unsigned int dbid, char channel);
    class CDNFProhibitUser* FindProhibitUser(unsigned int dbid) const;
    CUser* FindUser(unsigned int dbid) const;
    char InsertProhibitUser(unsigned int dbid, class CDNFProhibitUser* pu);
    int DeleteUser(unsigned int dbid);
    int DeleteUser(CUser* user);
    std::map<unsigned int, std::map<unsigned char, unsigned int> > m_mapSchools;  // +0
    std::map<unsigned int, CUser*> m_users;       // +0x18
    std::map<unsigned int, CUser*> m_charNoUsers; // +0x30
    std::map<std::string, CUser*> m_charNameUsers; // +0x48
    std::map<unsigned int, class CDNFProhibitUser*> m_prohibitUsers;  // +0x60
    CApplication* m_app;            // +0x78
};

class CDNFProhibitUser
{
public:
    CDNFProhibitUser();
    ~CDNFProhibitUser();
    static void operator delete(void* p);
    char GetChannelNo();
    char fromWeb();
    void SetUserConnectableTime(unsigned int dbid, short time, char channel, bool flag);
    char m_data[0x20];
};

// ---- CUser / CMember（最小声明）----
class CUser
{
public:
    CUser();
    ~CUser();
    static void operator delete(void* p);
    unsigned int GetUniqCharNo();
    void* GetGameServer();
    unsigned int GetDBID();
    short GetLevel();
    unsigned int GetIdByChannel();
    char* GetCharName();
    char IsBlackUser(unsigned int key);
    unsigned char GetUpperMemberExpLevel();
    void SendTcpGameserver(PacketHeader* pkt);
    void SendToGameserver(char* buf, int len);
    void AttachMember(class CMember* member);
    void AddBuddyFromCash(class CBuddy* buddy);
    void SetBuddyDBFlag(unsigned int flag);
    void RegisterToCashBlackList(std::map<unsigned int, class CBlackUser*>* map);
    void SetBlackListDBFlag(unsigned int flag);
    char m_data[0x400];
};

struct STMemberDBInfo
{
    unsigned int m_memberKey;  // +0
    char m_data[0x1ac];        // +4
};

class CMember
{
public:
    static void* operator new(unsigned int size);
    CMember(unsigned int key, CMemberManager* mgr);
    ~CMember();
    void QueryMember(CServerHandler* handler);
    unsigned int* GetMemberDBInfoW();
    void NoticeMemberLogin_Out(CUser* user, char flag);
    void CheckMemberRegisterFlag();
    void NoticeChatMsgToMemberMembersHyperLink(char* msg, int len, unsigned char count,
                                               const hyperlink_item_info* items, CUser* user);
    void NoticeChatMsgToMemberMembers(char* msg, int len, CUser* user);
    void LoadMember(STMemberDBInfo& info, short level, unsigned int a, unsigned int b);
    char IsEmpty();
    char CheckDailyScheduleTimeOver(int day, long long time);
    char CheckDayHourScheduleTimeOver(int day, int hour, long long time);
    void SetMemberRegisterFlag(bool flag);
    char IsAbleToRegisterMember();
    unsigned int GetMemberKey();
    unsigned short m_flag;          // +4
    unsigned int m_memberKey;       // +6
    char m_data[0x27];              // +0xa
    unsigned char m_count2d;        // +0x2d
    char m_data2[0x187];            // +0x2e
    CMemberManager* m_memberManager;// +0x1b4
    char m_state1b8;                // +0x1b8
    char m_pad1b9[3];               // +0x1b9
    long long m_registerTime;       // +0x1bc
    long long m_dayHourTime;        // +0x1c0
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
    CMember* FindMember(unsigned int key);
    CUser* FindMemberUser(unsigned int key);
    CMember* CreateMemberQuery(unsigned int key, CUser* user, CServerHandler* handler);
    void InsertMember(unsigned int key, CMember* member);
    int MemerMemLogin(unsigned int key, CUser* user);
    char LoadMemberFromCash(CUser* user, CMember* member);
    void MemberMemLogout(unsigned int key, CUser* user, bool cash);
    int DeleteMember(unsigned int key, bool cash);
    int LoadMember(unsigned int key, STMemberDBInfo& info, unsigned int a, unsigned int b,
                   CServerHandler* handler);
    void SendToDBMemberUpdateCharInfo(CServerHandler* handler, unsigned int key,
                                      unsigned char flag);
    CApplication* m_app;                     // +0
    int m_field4;                            // +4
    std::map<unsigned int, CMember*> m_members;  // +8
    char m_data[0x10];                       // +0x20
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

// ---- momiji_event：红叶事件 ----
namespace momiji_event
{
class StartEffectTask : public CTaskScheduler::CTask
{
public:
    StartEffectTask(unsigned int time, int flag);
    ~StartEffectTask();
    char m_data[0x10];
};

class EventManager
{
public:
    EventManager();
    ~EventManager();
    void StartEvent(unsigned char startHour, unsigned char interval, unsigned char duration);
    unsigned char m_startHour;   // +0
    char m_pad1[3];              // +1
    unsigned int m_interval;     // +4
    unsigned int m_duration;     // +8
};
}

// ---- village_attacked：村庄攻防 ----
namespace village_attacked
{
int GetNextSchedule(tm t, int wday, int hour, int min);
void SetRealConfig();

class CVillageAttackedCountdownFirst;
class CVillageAttackedCountdownSecond;
class CVillageAttackedCountdownThird;
class CVillageAttackedStart;
class CVillageAttackedEnd;

struct stUserHuntingPoint
{
    unsigned int m_huntingPoint;  // +0
    unsigned int m_characNo;      // +4
    bool operator<(const stUserHuntingPoint& other) const
    {
        return m_huntingPoint < other.m_huntingPoint;
    }
};

struct stHuntingPoint
{
    unsigned int m_huntingPoint;  // +0
    unsigned int m_characNo;      // +4
};

class CVillageAttackedManager
{
public:
    CVillageAttackedManager(CApplication* app);
    ~CVillageAttackedManager();
    void SendCharacRank();
    void SendFirstRankerRewardJpn(CUser* user, int rank);
    void OnSchedule();
    void InsertTimer(int startTime, int endTime);
    CApplication* m_app;                       // +0
    std::map<unsigned int, stHuntingPoint> m_huntingPoints;  // +4
    int m_field1c;                             // +0x1c
    int m_field20;                             // +0x20
    unsigned char m_state24;                   // +0x24
    char m_pad25[3];                           // +0x25
    int m_field28;                             // +0x28
    int m_field2c;                             // +0x2c
    char m_data2[4];                           // +0x30
};

class CVillageAttackedCountdownFirst : public CTaskScheduler::CTask
{
public:
    CVillageAttackedCountdownFirst(int time, int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedCountdownFirst();
    char m_data[0x10];
};

class CVillageAttackedCountdownSecond : public CTaskScheduler::CTask
{
public:
    CVillageAttackedCountdownSecond(int time, int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedCountdownSecond();
    char m_data[0x10];
};

class CVillageAttackedCountdownThird : public CTaskScheduler::CTask
{
public:
    CVillageAttackedCountdownThird(int time, int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedCountdownThird();
    char m_data[0x10];
};

class CVillageAttackedStart : public CTaskScheduler::CTask
{
public:
    CVillageAttackedStart(int time, int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedStart();
    char m_data[0x10];
};

class CVillageAttackedEnd : public CTaskScheduler::CTask
{
public:
    CVillageAttackedEnd(int time, int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedEnd();
    char m_data[0x10];
};
}

extern int village_attacked_scheduler[18];
extern int MAX_SCHEDULER_COUNT;

unsigned int GetNowTime();

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

class Packet_DBMW_Query_Msg : public PacketHeader
{
public:
    Packet_DBMW_Query_Msg();
    unsigned int m_fieldA;    // +10
    unsigned int m_fieldB;    // +14
    char m_data[0x1001];      // +18
};

class Packet_DBMW_Add_Buddy : public PacketHeader
{
public:
    Packet_DBMW_Add_Buddy();
    unsigned int m_uniqCharNo;  // +10
    char m_charName[0x1e];      // +14
};

class Packet_DBMW_Del_Buddy : public PacketHeader
{
public:
    Packet_DBMW_Del_Buddy();
    unsigned int m_uniqCharNo;  // +10
    unsigned int m_buddyCharNo; // +14
    char m_charName[0x1e];      // +18
};

class Packet_Monitor_Notice_Member_Member_Login_out : public PacketHeader
{
public:
    Packet_Monitor_Notice_Member_Member_Login_out();
    unsigned char m_flag;           // +10
    unsigned int m_idByChannel;     // +11
    unsigned int m_uniqCharNo;      // +15
    unsigned char m_channelNo;      // +19
    unsigned char m_type;           // +20
    char m_charName[0x1d];          // +21
    unsigned char m_expLevel;       // +50
    unsigned int m_uniqCharNo2;     // +54
};

struct hyperlink_item_info
{
    char m_data[0x68];
};

class Packet_Monitor_Member_Chat_ToUser_Hyper_Link : public PacketHeader
{
public:
    Packet_Monitor_Member_Chat_ToUser_Hyper_Link();
    unsigned int m_idByChannel;   // +10
    unsigned int m_uniqCharNo;    // +14
    char m_charName[0x1e];        // +18
    unsigned char m_itemCount;    // +48
    char m_items[0x138];          // +49
    unsigned char m_msgLen;       // +361
    char m_msg[0x100];            // +362
};

class Packet_Monitor_Member_Chat_ToUser : public PacketHeader
{
public:
    Packet_Monitor_Member_Chat_ToUser();
    unsigned int m_idByChannel;   // +10
    unsigned int m_uniqCharNo;    // +14
    char m_charName[0x1e];        // +18
    unsigned char m_msgLen;       // +48
    char m_msg[0x100];            // +49
};

class Packet_Monitor_Notice_Delete_Member_Id : public PacketHeader
{
public:
    Packet_Monitor_Notice_Delete_Member_Id();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
};

class Packet_Monitor_SAVE_Member_Update_Char_Info : public PacketHeader
{
public:
    Packet_Monitor_SAVE_Member_Update_Char_Info();
    unsigned int m_uniqCharNo;   // +10
    unsigned char m_flag;        // +14
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

// ---- MemPool<T>：对象池 ----
template<class T>
class MemPool
{
public:
    MemPool();
    ~MemPool();
    void* alloc();
    void free(void* ptr, unsigned int size);
    void free(void* ptr);
    static void* headOfFreeList_;
    int m_size;                     // +0
    int m_count;                    // +4
    std::vector<void*> m_blocks;    // +8
};

// ---- np_server_xml：CServerXml 0xb8 ----
namespace np_server_xml
{
enum _eStringType
{
    STRING_TYPE_0 = 0,
    STRING_TYPE_1 = 1,
    STRING_TYPE_2 = 2
};

class CServerXml
{
public:
    CServerXml();
    ~CServerXml();
    static void StrLoading();
    void StrPunish(int idx, const char* str, _eStringType type);
    std::string GetServerString(int idx, bool* ok) const;
    unsigned int GetEventRGBA(int idx) const;
    std::string GetEventString(int idx, _eStringType type, bool* ok) const;
    void RGBALoad(int idx, TiXmlNode* node);
    void ProcessLoad(TiXmlNode* node);
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
