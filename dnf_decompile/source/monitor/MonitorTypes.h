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
#include "MonitorTable.h"
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
class Packet_Item_Limit_Edition_Sell_Start;
class Packet_Monitor_Event_Start;
class CMemberConfig;
class CMemberExpTbl;
class CMemberManager;
class CMember;
class CUser;
struct hyperlink_item_info;
struct STBuddyDBInfo;
class CTcpManagerServer;
class CTcpDBServer;
class CGameServer;
class CDBServer;
class CManagerServer;
class CTcpGameServer;
class Packet_Item_Limit_Edition_Update;
class EpollHandler;

struct TimeGateRewardType
{
    enum T
    {
        TYPE_0 = 0,
        TYPE_1 = 1,
        TYPE_2 = 2
    };
};

// ---- 基础管理器（monitor 专属，实现逐步补齐）----
class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    ~CInnerMsgHandler();
    void SendStopNetworkThread();
    char m_data[1];
};

class CUdpHandler
{
public:
    CUdpHandler();
    ~CUdpHandler();
    unsigned int InetAddr(const char* ip) const;
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
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

// ---- CTcpRecvBuffer：0x1804 ----
class CTcpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

class CTcpSendBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

class CPacketBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

class CTcpGameServer
{
public:
    CTcpGameServer();
    ~CTcpGameServer();
    char* makePacketHeader(unsigned short id, unsigned short size);
    void SendToGameServer(char* buf);
    void SendToGameServer(PacketHeader* pkt);
    void SetChannelType(int type);
    int GetChannelType();
    void Init(unsigned int sock, class CTcpNetSystem* net);
    void SetChannelNo(unsigned char channel);
    unsigned char GetChannelNo();
    char IsValidServer();
    int m_sock;           // +0
    CTcpNetSystem* m_net;  // +4
    int m_channelType;     // +8
    unsigned char m_channelNo;  // +0xc
    char m_data[0xf];      // +0xd
};

// ---- CAppLoadChecker（最小）----
class CAppLoadChecker
{
public:
    CAppLoadChecker();
    char CheckTcpRecvQ(int size);
    char CheckUdpRecvQ(int size);
    char CheckTcpSendQ(int size);
    int checkTcpRecvLoad(int size);
    int checkUdpRecvLoad(int size);
    int checkTcpSendLoad(int size);
    void setTcpRecvQueue(int size);
    void setUdpRecvQueue(int size);
    void setTcpSendQueue(int size);
    void RequestDB(CServerHandler* serverHandler, int flag, int size);
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
    int m_totalCount;             // +0
    int m_startTime;              // +4
    unsigned int m_packetCount[0x2418];  // +8
    int m_packetTime[0x2418];     // +0x9068
    char m_packetFlag[0x2418];    // +0x120c8
    int m_packetTotal[0x2418];    // +0x144e0
    char m_path[0x100];           // +0x1d540
    char m_flagInit;              // +0x1d640
    char m_flag2;                 // +0x1d641
    char m_pad[6];                // +0x1d642
};

class CPeriodicMessageMgr
{
public:
    CPeriodicMessageMgr();
    ~CPeriodicMessageMgr();
    void OnProcess(CServerHandler* handler);
    void OnTimerSendData(CServerHandler* handler);
    void SetMessageData(char* msg, int startHour, int endHour);
    void init();
    char m_msg[0x200];       // +0
    int m_startHour;         // +0x200
    int m_endHour;           // +0x204
};

struct NpcBuyLimitItem
{
    unsigned int m_itemId;     // +0
    unsigned int m_maxCount;   // +4
    unsigned int m_sellCount;  // +8
};

struct LimitNpcBuyItemInfo
{
    char m_data[0x12];
    unsigned int m_charNo;   // +0x12
    unsigned int m_itemId;   // +0x16
    unsigned int m_count;    // +0x1a
};

struct LimitNpcBuyItemUpdate
{
    char m_data[0xa];
    unsigned int m_itemId;      // +0xa
    unsigned int m_charNo;      // +0xe
    unsigned int m_cancelCount; // +0x12
    unsigned int m_errorNo;     // +0x16
};

struct LimitNpcBuyItemInfoAll
{
    char m_data[0x16];
    int m_count;        // +0x16
    char m_data2[0x1c8];
};

class LimitNpcBuyItemChangeInfo : public PacketHeader
{
public:
    LimitNpcBuyItemChangeInfo();
    unsigned int m_itemId;  // +10
    int m_fieldE;           // +14
};

class LimitNpcBuyItemManager
{
public:
    LimitNpcBuyItemManager();
    ~LimitNpcBuyItemManager();
    int sellNpcLimitBuyItem(LimitNpcBuyItemInfo* info);
    void undoNpcLimitBuyItem(LimitNpcBuyItemUpdate* info);
    void registItem(NpcBuyLimitItem& item);
    void registItemClear();
    void getNpcLimitBuyItemInfoAll(LimitNpcBuyItemInfoAll* out);
    void getNpcLimitBuyItemCount(unsigned int itemId, LimitNpcBuyItemChangeInfo& out);
    std::map<unsigned int, NpcBuyLimitItem> m_items;  // +0
};

enum ENUM_LOGIN_LOGOUT
{
    LOGIN_LOGOUT_0 = 0
};

class CLoginLogoutStatistics
{
public:
    CLoginLogoutStatistics(CApplication& app);
    ~CLoginLogoutStatistics();
    void ProcessByMinute();
    void LoginLogout(ENUM_LOGIN_LOGOUT type, unsigned char channel);
    void CountNumOfLoginout(ENUM_LOGIN_LOGOUT type);
    void CountNumOfOccupations(ENUM_LOGIN_LOGOUT type, int value);
    CApplication* m_app;                                     // +0
    std::map<unsigned char, struct stLoginLogout> m_maps[7]; // +4
    unsigned int m_fieldac;                                  // +0xac
    unsigned int m_fieldb0;                                  // +0xb0
    int m_fieldb4;                                           // +0xb4
    int m_fieldb8;                                           // +0xb8
};

struct stLoginLogout
{
    stLoginLogout();
    int m_field0;   // +0
    int m_count;    // +4
    int m_field8;   // +8
};

class CIPCounter
{
public:
    CIPCounter();
    ~CIPCounter();
    void Init(CServerHandler* handler);
    void Proc(unsigned int tick);
    void setOption(unsigned char type, unsigned char opt);
    void setLoadTerm(unsigned char term);
    void setMinIPCount(unsigned char count);
    char m_option;                 // +0
    char m_pad1[3];                // +1
    unsigned int m_count;          // +4
    unsigned int m_min;            // +8
    unsigned int m_term;           // +0xc
    char m_field10;                // +0x10
    char m_field11;                // +0x11
    char m_pad2[2];                // +0x12
    CServerHandler* m_handler;     // +0x14
};

class CItemLimitEditionMgr
{
public:
    CItemLimitEditionMgr();
    ~CItemLimitEditionMgr();
    void processScheduledJob(CApplication* app, bool flag);
    void makeItemLimitEditionUpdatePacket(Packet_Item_Limit_Edition_Update& pkt) const;
    void makeItemLimitEditionSellStartPacket(
        Packet_Item_Limit_Edition_Sell_Start& pkt) const;
    void registItem(const struct stItemLimitEditionItemInfo_t& info);
    void removeItem(unsigned int ipgno);
    bool updateItem(unsigned int ipgno, unsigned int sellNum);
    class CItemLimitEdition* getItemInfo(unsigned int ipgno) const;
    char isEmpty() const;
    void clear();
    std::map<unsigned int, class CItemLimitEdition*> m_items;  // +0
    time_t m_lastTime;                     // +0x18
};

class CItemLimitEdition
{
public:
    CItemLimitEdition(const struct stItemLimitEditionItemInfo_t& info);
    ~CItemLimitEdition();
    unsigned int getSellEndTime() const;
    unsigned int getIPGNO() const;
    unsigned int getSellNum() const;
    char isSellComplete() const;
    void makeItemInfo(struct stItemLimitEditionItemInfo_t& info) const;
    void updateSellNum(unsigned int num);
    unsigned int m_ipgno;     // +0
    char m_data[0x18];        // +4
    int m_sellLimit;          // +0x1c
    char m_data2[0x8];        // +0x20
    unsigned int m_sellEndTime;  // +0x28
    char m_data3[0x1c];       // +0x2c
    unsigned int m_sellNum;   // +0x48
};

struct stItemLimitEditionItemInfo_t
{
    char m_data[0x4c];
};

class CMemoryCashManager
{
public:
    CMemoryCashManager();
    ~CMemoryCashManager();
    void Init(CApplication* app);
    void ProcessLifeTimeOut();
    void ProcessCashDataPrint();
    void incBuddyCashCnt();
    void incMemberCashCnt();
    void incBlackListCashCnt();
    char QueryCashMemoryMember(CUser* user);
    int QueryCashMemoryBuddyInfo(CUser* user);
    char QueryCashMemoryBlackList(CUser* user);
    char QueryUpdatedCharacName(unsigned int charNo, std::string& name);
    void InsertUpdatedCharacName(unsigned int dbid, const std::string& name);
    void DeleteCashObjecct(unsigned int dbid);
    char IsRightObject(CUser* user, CMember* member, bool& flag1, bool& flag2, bool& flag3);
    int InsertCashMemorySetCharacterObject(CUser* user, CMember* member, bool& flag1,
                                           bool& flag2);
    bool SetUserObject(CUser* user);
    void incMemberCashHitCnt();
    void incBuddyCashHitCnt();
    void incBlackListCashHitCnt();
    void resetCashCnt();
    std::map<unsigned int, std::string> m_names;        // +0
    std::map<unsigned int, class CCashObject*> m_cashObjects;  // +0x18
    CApplication* m_app;                                // +0x30
    unsigned char m_cashCnt34;                          // +0x34
    char m_pad35[3];                                    // +0x35
    int m_buddyCashCnt;                                 // +0x38
    int m_memberCashCnt;                                // +0x3c
    int m_blackListCashCnt;                             // +0x40
    int m_field44;                                      // +0x44
    int m_field48;                                      // +0x48
    int m_field4c;                                      // +0x4c
};

class CCashObject
{
public:
    CCashObject();
    ~CCashObject();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    void SetCharacNo(unsigned int charNo);
    void SetMemberObject(class CMember* member);
    void SetBuddysObject(class CBuddy** buddies, int count);
    void SetBlackUsersObject(std::map<unsigned int, class CBlackUser*>& map);
    void SetLifeTime(unsigned int lifeTime);
    unsigned int GetCharacNo();
    class CMember* GetMemberObject();
    void ClearMemberObject();
    void DeleteMemberObject();
    int GetBuddysObject(class CBuddy** buddies);
    void DeleteBuddys();
    void DeleteBlackUsers();
    void ClearBuddys();
    char IsLifeTimeOut();
    std::map<unsigned int, class CBlackUser*>* GetBlackUsersObject();
    void ClearMapBlackUsers();
    int m_lifeTime;                 // +0
    unsigned int m_characNo;        // +4
    CMember* m_memberObject;        // +8
    CBuddy* m_buddys[0x20];         // +0xc
    std::map<unsigned int, class CBlackUser*> m_blackUsers;  // +0x8c
};

class CBuddy
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    CBuddy(STBuddyDBInfo& info);
    ~CBuddy();
    unsigned int* getBuddyDBInfo();
    char m_data[0x2c];
};

// ---- CBuddyHandle：0x20 ----
class CBuddyHandle
{
public:
    CBuddyHandle();
    ~CBuddyHandle();
    int addDB(CServerHandler* handler, char* name);
    int delDB(CServerHandler* handler, char* name);
    int del(std::string name);
    int addFromCash(class CBuddy* buddy);
    int insert(class CBuddy* buddy);
    class CBuddy* findBuddy(std::string name);
    class CBuddy* findBuddyByCharNo(unsigned int charNo);
    void printBuddys(char* out);
    void setBuddyCharName(int charNo, const std::string& newName);
    int add(std::string name, STBuddyDBInfo& info);
    int getBuddysCharNo(unsigned int* out);
    int getBuddys(class CBuddy** out);
    void reset(CUser* user, bool flag);
    void clear(bool flag);
    unsigned short GetBuddyDBFlag();
    void SetBuddyDBFlag(unsigned short flag);
    std::map<std::string, CBuddy*> m_buddies;  // +0
    CUser* m_prUser;                           // +0x18
    unsigned short m_field1c;                  // +0x1c
};

class CBlackUser
{
public:
    CBlackUser();
    void SetBlackUser(char* name, unsigned int time);
    void ChangeCharName(char* name);
    char* GetName();
    unsigned int GetOccurTime();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x20];           // +0
    unsigned int m_occurTime;    // +0x20
};

// ---- CExchangeServer：0x14 ----
class CExchangeServer
{
public:
    CExchangeServer();
    ~CExchangeServer();
    void SetExchageServer(unsigned int ip, short port, int code, bool& result);
    unsigned int GetExchangeServerIp();
    unsigned short GetExchangeServerPort();
    unsigned int GetExchangeServerChannelNo();
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
    void Clear();
    void Init(CTcpNetSystem* net);
    void SetIP(std::string ip);
    void SetPort(unsigned short port);
    int* GetSockRef();
    int GetSock();
    char IsValidServer();
    const char* GetIP();
    unsigned short GetPort();
    void SendHeartbeat(unsigned char group);
    void SendLogin(unsigned char group);
    void SendLogout();
    void Connected(unsigned char group);
    void DisConnected();
    char* makePacketHeader(unsigned short id, unsigned short size);
    void SendToServer(char* buf);
    void SendTcpPacket(PacketHeader* pkt);
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
    void Clear();
    void Init(CTcpNetSystem* net);
    void SetIP(std::string ip);
    void SetPort(unsigned short port);
    int* GetSockRef();
    int GetSock();
    char IsValidServer();
    const char* GetIP();
    unsigned short GetPort();
    void SendHeartbeat();
    void SendLogin();
    void SendLogout();
    void Connected();
    void DisConnected();
    char* makePacketHeader(unsigned short id, unsigned short size);
    void SendToServer(char* buf);
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
    CServerInterface();
    CServerInterface(stServerInfo* info);
    ~CServerInterface();
    virtual bool Initialize();
    virtual bool Destroy();
    stServerInfo* GetServerInfo();
    void* GetUdpHandler();
    unsigned char GetGroupNo();
    void SetServerInfo(stServerInfo* info);
    bool IsValidServer();
    char IsConnected();
    char IsHeartBeatTimeOver();
    unsigned char GetChannelNo();
    void OnDisconnect();
    void SetConnFlag(bool flag);
    void ResetHeartBeat();
    int SendToServer(char* buf, int len);
    stServerInfo* m_info;  // +4
    char m_field8[4];      // +8
    void* m_udpHandler;    // +0xc
};

class CDBServer : public CServerInterface
{
public:
    CDBServer();
    CDBServer(stServerInfo* info);
    ~CDBServer();
    bool Initialize();
    bool Destroy();
};

class CGameServer : public CServerInterface
{
public:
    CGameServer();
    CGameServer(stServerInfo* info);
    ~CGameServer();
    bool Initialize();
    bool Destroy();
    void SetSocket(unsigned int sock);
    unsigned int GetSocket();
    unsigned int m_socket;  // +0x10
};

class CManagerServer : public CServerInterface
{
public:
    CManagerServer();
    CManagerServer(stServerInfo* info);
    ~CManagerServer();
    bool Initialize();
    bool Destroy();
    void SendHeartBeat(int group);
};

class CServerHandler
{
public:
    CServerHandler();
    ~CServerHandler();
    void Attach(CApplication* app);
    void Process();
    unsigned char GetServerGroupNo();
    void Load(std::multimap<unsigned int, stServerInfo*>* map);
    bool RegistGameServer(stServerInfo* info);
    CGameServer* GetGameServer(unsigned int id);
    void* GetTcpGameServer(unsigned int id);
    void RegistDBServer(CDBServer* db);
    void UnregistDBServer();
    void RegistManagerServer(CManagerServer* mgr);
    void UnregistManagerServer();
    void SetManagerConnectFlag(bool flag);
    void SetDBConnectFlag(bool flag);
    void ResetDBHeartBeat();
    char IsConnectedDBServer();
    void SendDBMWConnectionCheck();
    void ResetHeartBeat(unsigned char channel);
    char IsConnectedGameServer(unsigned char channel);
    void SetConnectFlag(unsigned char channel, bool flag);
    void SendAllTcpGameServer(PacketHeader* pkt);
    int SendAllTcpGameServer(PacketHeader* pkt, int channel);
    void SendAllToGameServer(char* buf, int len);
    void SendToGameServer(unsigned char channel, PacketHeader* pkt);
    void queryReloadTowerRank(unsigned int channel);
    int SendToManager(PacketHeader* pkt);
    void SendDBMWRequestIPCounter(unsigned char flag, unsigned char b);
    unsigned int getfirstLinkedServer();
    CTcpGameServer* GetTcpGameServerByCh(unsigned char channel);
    CTcpGameServer* CreateTcpGameServer(unsigned int id);
    int DeleteTcpGameServer(unsigned int id);
    int UnregistGameServer(unsigned int channel);
    void SendDBMWRequestARSInfo(unsigned char flag);
    CTcpManagerServer* GetTcpManagerServer();
    CTcpDBServer* GetTcpDBServer();
    void SendToDB(PacketHeader* pkt);
    CDBServer* GetDBServer();
    CManagerServer* GetManagerServer();
    void SetGameServerIpPort(unsigned char a, unsigned int b, unsigned short c);
    void QueryMember(unsigned int key);
    void QueryMemberMember(unsigned int key);
    void SendDBMWRequest_D_IPCounter(unsigned char flag);
    std::map<unsigned int, CGameServer*> m_gameServers;  // +0
    CDBServer* m_dbServer;                          // +0x18
    CManagerServer* m_managerServer;                // +0x1c
    CApplication* m_app;                            // +0x20
    int m_field24;                                  // +0x24
    std::map<unsigned int, class CTcpGameServer*> m_tcpGameServers; // +0x28
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

struct stDeathTowerRecordMemberInfo_t
{
    char m_name[0x17];
};

class CTowerRank
{
public:
    CTowerRank();
    ~CTowerRank();
    void processReloadRanking(CServerHandler* handler, bool flag, unsigned int tick);
    void registCharacRank(unsigned int floor, const char* name, unsigned int job,
                          unsigned int score);
    void reset();
    void registRank(unsigned int floor, unsigned int job, unsigned int score,
                    const stDeathTowerRecordMemberInfo_t* records);
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
    void SaveProcess(int threadNo);
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
    void addBuddyRegister(unsigned int key, unsigned int value);
    int delBuddyRegister(unsigned int key, unsigned int value);
    void delBuddyRegister(unsigned int key);
    void findBuddyRegister(unsigned int key, std::vector<unsigned int>& out);
    void printBuddyRegister(char* name, unsigned int flag);
    std::multimap<unsigned int, unsigned int> m_map;  // +0
};

// ---- CUdpNetworkThread：0x1c ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    void SetUDPQueue(std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*,
                     std::allocator<CUdpRecvBuffer*> > >* q);
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
    TCPSocket();
    ~TCPSocket();
    char open();
    char connect(const char* ip, unsigned short port);
    char setOptNonBlock();
    char bind(unsigned short port, bool flag);
    char listen(int backlog);
    char pollReadEvent() const;
    char pollWriteEvent() const;
    char pollErrorEvent() const;
    int pollReadWriteErrEvent() const;
    char accept(TCPSocket& sock);
    int getHandle() const;
    int send(char* buf, int len);
    int recv(char* buf, int len);
    void close();
    int shutdown(int how);
    char* getPeerIP();
    char setOptResizeSendBuf(int size);
    char setOptResizeRecvBuf(int size);
    char setOptReuseAdrs(bool flag);
    char setOptLinger(bool flag);
    char* getPeerAdrs();
    unsigned short getPeerPort();
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
    CTcpHandler();
    ~CTcpHandler();
    int WaitForEvent();
    int ResetEpoll(int flag);
    int SetPeer(void* peer, int fd, bool flag);
    void* GetEventPtr(int idx);
    char IsSetInEvent(int idx);
    char IsSetOutEvent(int idx);
    char IsSetErrEvent(int idx);
    EpollHandler* m_epoll;  // +0
};

class CProtocol
{
public:
    CProtocol() {}
    virtual ~CProtocol() {}
    virtual int Init() = 0;                                    // +0x08
    virtual int SetEpoll(void* peer, int fd, bool flag) = 0;   // +0x0c
    virtual int ResetEpoll(int fd) = 0;                        // +0x10
    virtual void Destroy() = 0;                                // +0x14
    virtual int WaitForEvent() = 0;                            // +0x18
    virtual char IsSetErrEvent(int idx) = 0;                   // +0x1c
    virtual char IsSetOutEvent(int idx) = 0;                   // +0x20
    virtual char IsSetInEvent(int idx) = 0;                    // +0x24
    virtual void* GetEventPtr(int idx) = 0;                    // +0x28
};

class EpollHandler : public CProtocol
{
public:
    EpollHandler();
    virtual ~EpollHandler();
    virtual int Init();
    virtual int SetEpoll(void* peer, int fd, bool flag);
    virtual int ResetEpoll(int fd);
    virtual void Destroy();
    virtual int WaitForEvent();
    virtual char IsSetErrEvent(int idx);
    virtual char IsSetOutEvent(int idx);
    virtual char IsSetInEvent(int idx);
    virtual void* GetEventPtr(int idx);
    int GetEpollFD() { return m_epollFd; }
    void* GetEpollEvents() { return m_events; }
    int m_eventType;  // +4
    void* m_peer;     // +8
    void* m_events;   // +0x10
    int m_epollFd;    // +0x14
    CMutex m_mutex;   // +0x18
};

class CPeer : public TCPSocket
{
public:
    CPeer();
    ~CPeer();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    TCPSocket* GetTcpSocket();
    int recv_packet();
    int RecvPacket();
    void DisConnSig();
    unsigned int get_remain_sendlen();
    int send_packet();
    int send_packet(char* buf, int len);
    void InitPeer(std::queue<CTcpRecvBuffer*>* recvQ, CMutex* recvQLock, CMutex* recvBLock);
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
    int m_recvIdx;   // +0
    int m_parseIdx;  // +4
    T m_queues[N];   // +8
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
    T* m_recv;   // +0
    T* m_parse;  // +4
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
    void SetEpollConnectedPeer(CPeer* peer);
    void SetEpollAcceptedPeers();
    int SendPacket();
    int WaitForEvent();
    CPeer* CreatePeer();
    void DeletePeer(CPeer* peer);
    void InsertAcceptedPeer(CPeer* peer);
    CPeer* GetPeer(unsigned int id);
    void PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf);
    void CleanTcpSendPacketQ();
    unsigned short Get_TcpServerPort();
    void* Acquire_TcpSendBuffer();
    void PushTcpSendPacketQ(char* buf);
    CMutex* Get_TcpRecvBLock();
    CMutex* Get_TcpRecvQLock();
    CTcpHandler* Get_TcpHandler();
    CMutex* Get_TcpSendBLock();
    CMutex* Get_TcpSendQLock();
    std::queue<CTcpSendBuffer*>* Get_TcpSendQPacket();
    CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>*
        Get_TcpSwapQPacket();
    CTcpHandler* m_handler;  // +0
    CTcpNetworkThread* m_networkThread;  // +4
    CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>
        m_recvSwapQ;    // +8
    CMutex m_mutex60;   // +0x60
    CMutex m_mutex78;   // +0x78
    CMutex m_mutex90;   // +0x90
    CMutex m_mutexa8;   // +0xa8
    std::queue<CTcpSendBuffer*> m_sendQ;  // +0xc0
    CMutex m_mutexe8;   // +0xe8
    CMutex m_mutex100;  // +0x100
    CTcpAcceptThread* m_acceptThread;    // +0x118
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
    void DelSchoolNo(unsigned int schoolNo, unsigned char channel);
    CUser* FindUser_CharNo(unsigned int charNo) const;
    void DeleteUsersOnGameServerDown(CGameServer* gameServer);
    void DeleteUsersOnTcpGameServerDown(CTcpGameServer* tcpGameServer);
    void SendConnectedBuddysList(CUser* user);
    void GetSchoolCount(unsigned int school, unsigned int* out, unsigned char& idx);
    CUser* FindUser_CharName(std::string name) const;
    void ChangeBlackListCharName(unsigned int dbid, char* name);
    int DeleteProhibitUser(unsigned int dbid, char channel);
    void DeleteBlackUserOnCharacDelete(unsigned int charNo);
    void ResetBlackList(unsigned int charNo);
    void ResetBuddyList(unsigned int charNo);
    unsigned int GetSizeOfCharnoUsers();
    unsigned int Size();
    int DeleteUser_CharNo(unsigned int charNo);
    int DeleteUser_CharName(std::string name);
    CUser* CreateUser(unsigned int dbid, unsigned int charNo, char* charName, int channel,
                      CGameServer* server);
    char InsertUser(unsigned int dbid, CUser* user);
    char InsertUser_CharNo(unsigned int charNo, CUser* user);
    char InsertUser_CharName(char* name, CUser* user);
    class CDNFProhibitUser* FindProhibitUser(unsigned int dbid) const;
    CUser* FindUser(unsigned int dbid) const;
    char InsertProhibitUser(unsigned int dbid, class CDNFProhibitUser* pu);
    void ResetMemberInfo(unsigned int charNo);
    int DeleteUser(unsigned int dbid);
    int DeleteUser(CUser* user);
    std::map<const unsigned int, std::map<unsigned char, unsigned int> > m_mapSchools;  // +0
    std::map<unsigned int, CUser*> m_users;             // +0x18
    std::map<const unsigned int, CUser*> m_charNoUsers; // +0x30
    std::map<const std::string, CUser*> m_charNameUsers; // +0x48
    std::map<const unsigned int, class CDNFProhibitUser*> m_prohibitUsers;  // +0x60
    CApplication* m_app;            // +0x78
};

class CDNFProhibitUser
{
public:
    CDNFProhibitUser();
    ~CDNFProhibitUser();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char GetChannelNo();
    char fromWeb();
    unsigned int GetDBID();
    unsigned short GetProhibitRemainTime();
    bool IsTimeOutConnectable();
    void SetUserConnectableTime(unsigned int dbid, short time, char channel, bool flag);
    unsigned int m_dbid;        // +0
    unsigned short m_remain;    // +4
    char m_channel;             // +6
    char m_flag;                // +7
    char m_data[4];             // +8
};

// ---- CUser / CMember（最小声明）----
class CUser
{
public:
    CUser();
    ~CUser();
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    unsigned int GetUniqCharNo();
    void* GetGameServer();
    void* GetTcpGameServer();
    unsigned int GetDBID();
    short GetLevel();
    char GetJob();
    char GetGrowthType();
    unsigned int GetIdByChannel();
    char* GetCharName();
    char IsBlackUser(unsigned int key);
    unsigned char GetUpperMemberExpLevel();
    int GetConnLowerMemberCnt();
    class CMember* GetMember();
    void SendTcpGameserver(PacketHeader* pkt);
    void SendToGameserver(char* buf, int len);
    void SetBuddyCharName(int dbid, const std::string& name);
    int ChangeCharNameToBlackList(unsigned int dbid, char* name);
    void AttachMember(class CMember* member);
    void AddBuddyFromCash(class CBuddy* buddy);
    void SetBuddyDBFlag(unsigned short flag);
    int AddBuddyDB(class CServerHandler* handler, char* name);
    int DelBuddyDB(class CServerHandler* handler, char* name);
    int AddBuddy(struct STBuddyDBInfo& info);
    char DelBuddy(char* name);
    void RegisterToCashBlackList(std::map<unsigned int, class CBlackUser*>& map);
    void SetBlackListDBFlag(unsigned short flag);
    void SetDBID(unsigned int dbid);
    void SetUniqCharNo(unsigned int charNo);
    void SetIdByChannel(int channel);
    void SetGameServer(CGameServer* server);
    void SetTcpGameServer(class CTcpGameServer* server);
    void SetUserInfo_CharNo(char a, char b, short level, unsigned int charNo, char* name);
    void SetSex(unsigned char sex);
    void SetSsn(char* ssn);
    void SetEvent_idx(unsigned int idx);
    void Event_idx_modify_state();
    void QueryBuddyInfo(class CServerHandler* handler);
    void SetUserPosState(unsigned char state);
    void SetUserChangableInfo(short level, char flag);
    void ResetChannelUserCount(int count);
    void SetChannelUserCount(int a, int b, int c, int d);
    char IsCompleteChannelUserCount();
    void GetChannelUserCount(struct STPvPChannelInfo* out, unsigned char& count);
    void MemberEnterProcess();
    void ResetCharInfo(bool flag);
    void ResetMemberInfo();
    void ResetBlackList(int flag);
    void ResetBuddyList(bool flag);
    void PrintBuddys(char* out);
    int GetBuddysCharNo(unsigned int* out);
    void GetBuddiesCharNo(std::vector<unsigned int>& out);
    int GetBuddys(class CBuddy** out);
    void SendNoticeBuddyInOut(unsigned char channel, unsigned int charNo, char* name,
                              unsigned char flag1, unsigned char flag2, char flag3);
    unsigned short GetBuddyDBFlag();
    unsigned short GetBlackListDBFlag();
    std::map<unsigned int, class CBlackUser*>* GetMapBlackList();
    void GetBlackList(unsigned char& count, struct STBlackUserDBType* out);
    void GetBlackList(unsigned char& count, unsigned int* out);
    unsigned int GetBlackListSize();
    char RegisterToBlackList(unsigned int charNo, char* name);
    char RegisterToBlackList(unsigned int charNo, char* name, unsigned int time);
    int DeleteToBlackList(unsigned int charNo);
    void SendBlackList();
    unsigned int GetMemberEnterCallerId();
    char CheckPrevCallMemberEnter();
    void ResetRequestMemberEnter();
    char RecordCallMemberEnter(unsigned int callerId, unsigned short count);
    unsigned int GetMemberDBFlag();
    void SetMemberRegisterFlag(bool flag);
    char IsAbleToRegisterMember();
    unsigned int GetMemberKey();
    char m_data[8];                                     // +0
    CGameServer* m_gameServer;                          // +8
    char m_dataC[0x44];                                 // +0xc
    std::map<unsigned int, class CBlackUser*> m_blackList;  // +0x50
    unsigned short m_field68;                           // +0x68
    class CBuddyHandle m_buddyHandle;                   // +0x6c
    int m_channelCount;                                 // +0x8c
    struct ChannelInfo
    {
        ChannelInfo() {}
        ChannelInfo(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {}
        int m_a;  // +0
        int m_b;  // +4
        int m_c;  // +8
    };
    std::map<int, ChannelInfo> m_channelInfoMap;        // +0x90
    char m_data2[0x14];                                 // +0xa8
};

struct STBlackUserDBType
{
    STBlackUserDBType();
    unsigned int m_dbid;       // +0
    char m_name[0x1e];         // +4
    unsigned short m_field22;  // +0x22
    unsigned int m_field24;    // +0x24
} __attribute__((packed));

struct STPvPChannelInfo
{
    int m_channel;  // +0
    int m_countA;   // +4
    int m_countB;   // +8
    int m_countC;   // +0xc
};

struct ST_MemberProxy
{
    ST_MemberProxy()
    {
        m_field0 = 0;
        m_flag4 = 0;
        m_field23 = 0;
        memset(m_name, 0, 0x1e);
    }
    void Reset();
    unsigned int m_field0;    // +0
    unsigned char m_flag4;    // +4
    char m_name[0x1e];        // +5
    unsigned int m_field23;   // +0x23
} __attribute__((packed));

struct STMemberDBInfo
{
    STMemberDBInfo();
    ST_MemberProxy m_member;    // +0
    unsigned char m_count27;    // +0x27
    ST_MemberProxy m_lowers[10];// +0x28
};

struct ST_MemberInfo
{
    ST_MemberInfo()
    {
        *(char*)((char*)this + 0) = 0;
        *(char*)((char*)this + 1) = 0;
        *(char*)((char*)this + 0x20) = 0;
        *(char*)((char*)this + 0x21) = 0;
        *(unsigned int*)((char*)this + 0x22) = 0;
        *(unsigned int*)((char*)this + 0x26) = 0;
        memset((char*)this + 2, 0, 0x1e);
    }
};

struct STMemberListInfo
{
    STMemberListInfo();
    ST_MemberInfo m_info;       // +0
    unsigned char m_count;      // +0x2a
    ST_MemberInfo m_members[9]; // +0x2b
};

struct STBuddyDBInfo
{
    char m_data[0x2c];
};

class CMember
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    CMember(unsigned int key, CMemberManager* mgr);
    ~CMember();
    void QueryMember(CServerHandler* handler);
    unsigned int* GetMemberDBInfoW();
    void NoticeMemberLogin_Out(CUser* user, char flag);
    void CheckMemberRegisterFlag();
    void NoticeChatMsgToMemberMembersHyperLink(char* msg, int len, unsigned char count,
                                               const hyperlink_item_info* items, CUser* user);
    void NoticeChatMsgToMemberMembers(char* msg, int len, CUser* user);
    int IsThereUpper() const;
    int GetUpperMember_CharId() const;
    int FindLowerMember(unsigned int charNo) const;
    unsigned int GetLowerMemberCount() const;
    unsigned int* GetLowerMember_Proxy() const;
    int IncConnUpperMemberExp(unsigned int maxExp);
    int IncConnLowerMemberExp(unsigned int uCharNo, unsigned int maxExp);
    int IncConnLowerMemberExp(int index, unsigned int uCharNo, unsigned int maxExp);
    void NoticeLevelUpToLowers(unsigned int level);
    void LoadMember(STMemberDBInfo& info, short level, unsigned int a, unsigned int b);
    int DeleteMemberByName(char* name, unsigned int& outKey);
    unsigned int* GetUpperMember_Proxy();
    unsigned int* GetUpperMember_Proxy() const;
    void SetMemberDeleteTime(unsigned int t);
    void DebugPrintMemberMember(char* out);
    char IsEmpty();
    char CheckDailyScheduleTimeOver(int day, long time);
    char CheckDayHourScheduleTimeOver(int day, int hour, long time);
    void SetMemberRegisterFlag(bool flag);
    char IsAbleToRegisterMember();
    unsigned int GetMemberKey();
    unsigned int GetUpperMemberExpLevel();
    int GetConnLowerMemberCnt();
    unsigned short GetMemberDBFlag();
    void SetMemberDBFlag(unsigned short flag);
    void SetMemberRegisterTime(unsigned int t);
    int InsertUpperMember(unsigned int charNo, unsigned char level, const char* name,
                          bool flag);
    int InsertLowerMember(unsigned int charNo, unsigned char level, const char* name,
                          bool flag);
    char IsAlreadyMemberMember(unsigned int charNo) const;
    void DeleteUpperMember(unsigned int charNo, bool flag);
    void DeleteLowerMember(unsigned int charNo, bool flag);
    unsigned char* GetMemberDBInfo() const;
    unsigned int m_key;              // +0
    unsigned short m_flag;          // +4
    STMemberDBInfo m_dbInfo;        // +6
    CMemberManager* m_memberManager;// +0x1b4
    char m_state1b8;                // +0x1b8
    char m_pad1b9[3];               // +0x1b9
    unsigned int m_registerTime;    // +0x1bc
    unsigned int m_dayHourTime;     // +0x1c0
    char m_pad1c4[4];               // +0x1c4
};

// ---- CMemberManager：0x30 ----
class CScheduler
{
public:
    CScheduler();
    ~CScheduler();
    char IsOnTimeSpecialDayHour(int day, int hour, int min);
    char IsOnTimeSpecialHour(int day, int hour);
    void SetSpecialHour(int hour);
    void SetSpecialDayHour(int day, int hour);
    char m_data[4];             // +0..3
    unsigned short m_ushort4;   // +4
    char m_data2[2];            // +6..7
};

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
    int InsertMember(unsigned int key, CMember* member);
    int MemerMemLogin(unsigned int key, CUser* user);
    char LoadMemberFromCash(CUser* user, CMember* member);
    void MemberMemLogout(unsigned int key, CUser* user, bool cash);
    int DeleteMember(unsigned int key, bool cash);
    int IsPossableMemberEnter(CUser* u1, CMember* m1, CUser* u2, CMember* m2, int mode);
    unsigned int GetLowerMemberEnterLimit(unsigned int level);
    int IsThereUpperMember(unsigned int charNo);
    int LoadMember(unsigned int key, STMemberDBInfo& info, unsigned int a, unsigned int b,
                   CServerHandler* handler);
    void SendToDBMemberUpdateCharInfo(CServerHandler* handler, unsigned int key,
                                      unsigned char flag);
    void SaveMemberOnConnect(CServerHandler* handler, CUser* u1, CUser* u2, unsigned char flag);
    void SaveMemberOnUnConnect(CServerHandler* handler, unsigned int a, unsigned int b,
                               unsigned int c, unsigned char flag);
    int RegisterMember(CMember* member, short level, CUser* user, bool flag);
    CMember* CreateMemberInJoin(CUser* user);
    int CheckMemberEnter(CUser* u1, CMember* m1, CUser* u2, CMember* m2);
    char CheckEmptyMember(CMember* member, CUser* user);
    char IsAlreadyMemberMember(unsigned int key, unsigned int charNo);
    char IsEmptyMember(unsigned int key);
    void GetMemberExpLevel(unsigned int level);
    void GetMemberExpNextLevelNeedExpLevel(unsigned int& exp, unsigned int& expNext,
                                           unsigned char& level);
    CMemberExpTbl* GetMemberExpTable();
    void SaveMemberExp(CServerHandler* handler, unsigned int memberKey,
                       unsigned int upperCharId, unsigned int exp);
    unsigned char IsMemberExpLevelUp(unsigned int exp);
    void NoticeLevelUpToLowers(unsigned int upperCharId, unsigned int exp);
    CApplication* m_app;                         // +0
    CUserManager* m_userMgr;                     // +4
    std::map<unsigned int, CMember*> m_members;  // +8
    CMemberConfig* m_memberConfig;               // +0x20
    CMemberExpTbl* m_memberExpTbl;               // +0x24
    CScheduler m_scheduler;                      // +0x28
};

// ---- CMemberConfig / CMemberExpTbl（表类）----
struct ST_MemberConfig
{
    ST_MemberConfig();
    int m_a;  // +0
    int m_b;  // +4
    int m_c;  // +8
};

class CMemberConfig : public CTableBase
{
public:
    CMemberConfig();
    virtual ~CMemberConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    ST_MemberConfig* GetMemberInfo();
    ST_MemberConfig m_table[10];  // +4
};

class CMemberExpTbl : public CTableBase
{
public:
    CMemberExpTbl();
    virtual ~CMemberExpTbl();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    int GetMemberExpLevel(unsigned int exp);
    void GetMemberExpLevel(unsigned int exp, unsigned int& lo, unsigned int& hi,
                           unsigned char& lv);
    unsigned int GetMaxMemberExp();
    unsigned char IsMemberExpLevelUp(unsigned int exp);
    char m_data[0x30];
};

// ---- CKillUSRConfig：0x10 ----
class CKillUSRConfig : public CTableBase
{
public:
    CKillUSRConfig();
    virtual ~CKillUSRConfig();
    virtual void Load_Table(const std::string& path);
    virtual int Parse_Table(char* line, int idx);
    void Clear_Table();
    std::vector<struct ST_KillUSRConfig*>* GetInfo() const;
    std::vector<struct ST_KillUSRConfig*> m_vec;  // +4
};

struct ST_KillUSRConfig
{
    ST_KillUSRConfig();
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
    static void onWebReqReloadAutoPunishRule(PacketHeader* pkt);
    static void RequestBlackListToDBMW(unsigned int charNo);
    static void SendColletItemsReward(unsigned int charNo, int itemId, const char* itemName,
                                      int nameLen, TimeGateRewardType::T type);
    static void SendRequestMemberEnterResult(CUser* user, unsigned char result,
                                             const char* name);
    static void SendNoticeMemberEnterPacketOk(CUser* user, CUser* other, unsigned char a,
                                             unsigned char b, unsigned char c, unsigned char d,
                                             unsigned char e);
    static void SendNoticeMemberEnterPacketReply(CUser* user, CUser* other, unsigned char a,
                                                 unsigned char b, unsigned char c, unsigned char d,
                                                 unsigned char e);
    static void SendRequestMemberDeleteResult(CUser* user, unsigned char result,
                                              const char* name);
    static CApplication* m_pclApp;
};

class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Attach(CApplication* app);
    void Process();
    void TcpProcess();
    void UdpProcess();
    void SetUdpQueue(std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*,
                    std::allocator<CUdpRecvBuffer*> > >* q);
    void SetTCPQueue(std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*,
                    std::allocator<CTcpRecvBuffer*> > >* q);
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
    virtual ~CSignal();
    virtual void handle(int sig);
    void attachApp(CApplication* app);
    void dump_core_file();
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

class CFloatingPointExceptSig : public CSignal
{
public:
    ~CFloatingPointExceptSig();
    void handle(int sig);
};

// ---- 任务 / 事件 ----
class CTaskScheduler
{
public:
    class CTask
    {
    public:
        CTask() {}
        CTask(unsigned int tick, unsigned int flag);
        virtual ~CTask();
        virtual void _DoExecute() {}
        unsigned int GetDeliveryTime() { return m_tick; }
        unsigned int GetTaskID() { return m_taskID; }
        unsigned int m_tick;         // +4
        unsigned int m_flag;         // +8
        unsigned int m_taskID;       // +0xc
    };
    class CTaskProxy
    {
    public:
        CTaskProxy() : m_task(0) {}
        CTaskProxy(CTask* task) : m_task(task) {}
        CTaskProxy(const CTaskProxy& o) : m_task(o.m_task) {}
        CTaskProxy& operator=(const CTaskProxy& o)
        {
            m_task = o.m_task;
            return *this;
        }
        unsigned int GetDeliveryTime() const
        {
            return m_task ? m_task->GetDeliveryTime() : 0;
        }
        bool operator<(const CTaskProxy& other) const
        {
            return other.GetDeliveryTime() < GetDeliveryTime();
        }
        void DoExcute() { m_task->_DoExecute(); }
        void Destroy() { delete m_task; }
        CTask* m_task;  // +0
    };
    CTaskScheduler();
    ~CTaskScheduler();
    int AddTask(CTask* task);
    void ProcessTask(unsigned int tick);
    int RemoveTask(unsigned int taskID);
    int RemoveTask(CTask* task);
    std::priority_queue<CTaskProxy> m_queue;  // +0
};

class CTask_ChristmasEvent : public CTaskScheduler::CTask
{
public:
    CTask_ChristmasEvent(unsigned int tick, unsigned int flag);
    ~CTask_ChristmasEvent();
    void _DoExecute();
    static int DecideEventTime();
    static unsigned int getEventStartTime();
    static long long getEventEndTime();
    static unsigned int MakeEventStartTick(int flag);
};

class TowerOfDespairReloadAPC_Task : public CTaskScheduler::CTask
{
public:
    TowerOfDespairReloadAPC_Task(unsigned int a, unsigned int b);
    ~TowerOfDespairReloadAPC_Task();
    void _DoExecute();
    static bool isReturnedMessage();
    static void returnUpdateMessageFromGameServer();
    static void SendRequest_DoRandomSelectUserAPC();
    static bool returnUpdateMessageFromGameServer_flag;
};

class TowerOfDespairWaitGameServerResponse_Task : public CTaskScheduler::CTask
{
public:
    TowerOfDespairWaitGameServerResponse_Task(unsigned int a, unsigned int b);
    ~TowerOfDespairWaitGameServerResponse_Task();
    void _DoExecute();
};

// ---- 事件动作层次（CEventActionManager 非多态，动作对象各自带 vtable）----
struct EventParam
{
    unsigned short m_a;  // +0
    unsigned short m_b;  // +2
};

class CBaseEventAction
{
public:
    CBaseEventAction();
    virtual ~CBaseEventAction();
    virtual void onStartAction(EventParam& param);
    virtual void onEndAction();
    void SetEventID(int id);
    void sendEventAckUpdate(int flag);
    void OnStartEvent(EventParam& param);
    void OnEndEvent();
    int m_eventId;  // +4
};

class CNullEventAction : public CBaseEventAction
{
public:
    CNullEventAction();
    virtual ~CNullEventAction();
    virtual void onStartAction(EventParam& param);
    virtual void onEndAction();
};

class COnTimeEventAction : public CBaseEventAction
{
public:
    COnTimeEventAction();
    virtual ~COnTimeEventAction();
    virtual void onStartAction(EventParam& param);
    virtual void onEndAction();
};

class CEventActionManager
{
public:
    CEventActionManager();
    ~CEventActionManager();
    void init();
    void destroy();
    void OnStartAction(Packet_Monitor_Event_Start* pkt);
    void OnEndAction(unsigned int code);
    CBaseEventAction* GetEventAction(int code);
    CBaseEventAction* m_actions[0xa6];  // +0
};

class COnTimeEventManager;

class CRewardUserList
{
public:
    CRewardUserList() {}
    ~CRewardUserList() {}
    int Insert(unsigned int key);
    char isExist(unsigned int key);
    void Clear();
    std::map<unsigned int, int> m_map;  // +0
};

enum ENUM_ONTIME_EVENT_STATE
{
    ONTIME_EVENT_STATE_NONE = 0,
    ONTIME_EVENT_STATE_START = 1,
    ONTIME_EVENT_STATE_REWARD = 2,
    ONTIME_EVENT_STATE_END = 3
};

class COnTimeEventRewardStartTrigger : public CTaskScheduler::CTask
{
public:
    COnTimeEventRewardStartTrigger(unsigned int time, unsigned int flag, COnTimeEventManager* mgr);
    ~COnTimeEventRewardStartTrigger();
    void _DoExecute();
    COnTimeEventManager* m_mgr;  // +0x10
};

class COnTimeEventIdxLoad : public CTaskScheduler::CTask
{
public:
    COnTimeEventIdxLoad(unsigned int time, unsigned int flag, COnTimeEventManager* mgr);
    ~COnTimeEventIdxLoad();
    void _DoExecute();
    COnTimeEventManager* m_mgr;  // +0x10
};

class COnTimeEventRewardEndTrigger : public CTaskScheduler::CTask
{
public:
    COnTimeEventRewardEndTrigger(unsigned int time, unsigned int flag, COnTimeEventManager* mgr);
    ~COnTimeEventRewardEndTrigger();
    void _DoExecute();
    COnTimeEventManager* m_mgr;  // +0x10
};

class COnTimeEventManager
{
public:
    COnTimeEventManager();
    ~COnTimeEventManager();
    void AttachApp(CApplication* app);
    void OnRewardStart();
    void OnRewardEnd();
    bool IsCurState(ENUM_ONTIME_EVENT_STATE state);
    void ChangeState(ENUM_ONTIME_EVENT_STATE state);
    void SetEventIdx(unsigned int idx);
    void SendContinueTimeToGS();
    void UpdateEventIdx();
    void SendEventIdxToDBMW();
    unsigned int GetEvent_Idx();
    void SetEventItem(unsigned int idx, unsigned int cnt);
    void StartEvent();
    void StartEvent(unsigned int a, unsigned int b);
    void EndEvent();
    void GetCurEventItemByDBMW(unsigned int a, unsigned int b);
    int GetCurIdxByDBMW();
    void EventRewardOff();
    void Clear();
    CApplication* m_app;       // +0
    CRewardUserList m_rewardList;  // +4
    int m_field1c;             // +0x1c
    int m_field20;             // +0x20
    int m_field24;             // +0x24
    int m_field28;             // +0x28
    int m_state2c;             // +0x2c
    int m_field30;             // +0x30
    unsigned char m_field34;   // +0x34
    char m_pad[3];             // +0x35
    unsigned int m_field38;    // +0x38
    unsigned int m_field3c;    // +0x3c
    int m_field40;             // +0x40
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
    CApplication* getApp() const;
    char m_data[4];
};

class CInitAccusationList : public CTaskScheduler::CTask
{
public:
    CInitAccusationList(unsigned int time, unsigned int flag, CInitAccusationListMgr* mgr);
    ~CInitAccusationList();
    void _DoExecute();
    CInitAccusationListMgr* m_mgr;  // +0x10
};
}

// ---- momiji_event：红叶事件 ----
namespace momiji_event
{
class StartEffectTask : public CTaskScheduler::CTask
{
public:
    StartEffectTask(unsigned int time, unsigned int flag);
    ~StartEffectTask();
    void _DoExecute();
    unsigned char m_flag;   // +0x10
    char m_pad[3];          // +0x11
};

class EndEffectTask : public CTaskScheduler::CTask
{
public:
    EndEffectTask(unsigned int time, unsigned int flag);
    ~EndEffectTask();
    void _DoExecute();
    unsigned char m_flag;   // +0x10
    char m_pad[3];          // +0x11
};

class EventManager
{
public:
    EventManager();
    ~EventManager();
    static EventManager* Get();
    void Init();
    void StartEvent(unsigned char startHour, unsigned char interval, unsigned char duration);
    void EndEvent();
    void sendDeleteEffect();
    unsigned int GetDurationTime();
    unsigned int GetIntervalTime();
    void SetStartEffectTask(StartEffectTask* task);
    void SetEndEffectTask(EndEffectTask* task);
    void sendApplyEffect(unsigned int time);
    unsigned char m_startHour;   // +0
    char m_pad1[3];              // +1
    unsigned int m_interval;     // +4
    unsigned int m_duration;     // +8
    StartEffectTask* m_startTask;  // +0xc
    EndEffectTask* m_endTask;      // +0x10
};

class EventAction : public CBaseEventAction
{
public:
    EventAction();
    virtual ~EventAction() {}
    virtual void onStartAction(EventParam& param);
    virtual void onEndAction();
    char isRunning() { return m_running; }
    char m_running;  // +8
    char m_pad[3];   // +9
};
}

// ---- village_attacked：村庄攻防 ----
// 原版 stUserHuntingPoint 位于全局作用域（mangled 无 namespace），
// stHuntingPoint 等其余类型在 village_attacked 内。
struct stUserHuntingPoint
{
    unsigned int m_huntingPoint;  // +0
    unsigned int m_characNo;      // +4
    bool operator<(const stUserHuntingPoint& other) const
    {
        return m_huntingPoint < other.m_huntingPoint;
    }
};

int GetNextSchedule(tm t, int wday, int hour, int min);
int GetPrevSchedule(tm t, int wday, int hour, int min);
bool CheckDailyScheduleTimeOver(int day, long time);
bool CheckDayHourScheduleTimeOver(int day, int hour, long time);
bool compareTime(int const& a, int const& b);

enum ENUM_VILLAGE_ATTACKED_REWARD
{
    ENUM_VILLAGE_ATTACKED_REWARD_NONE = 0,
    ENUM_VILLAGE_ATTACKED_REWARD_BUFF = 1,
    ENUM_VILLAGE_ATTACKED_REWARD_PENALTY = 2
};

namespace village_attacked
{
int GetNextSchedule(tm t, int wday, int hour, int min);
void SetRealConfig();
void SetGMConfig(unsigned int a, unsigned int b, unsigned int c);

class CVillageAttackedCountdownFirst;
class CVillageAttackedCountdownSecond;
class CVillageAttackedCountdownThird;
class CVillageAttackedStart;
class CVillageAttackedEnd;

struct stHuntingPoint
{
    stHuntingPoint();
    unsigned int m_huntingPoint;  // +0
    unsigned int m_field4;        // +4
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
    void OnEndVillageAttacked();
    void OnRewardVillageAttacked();
    void SendVillageAttackedEnd();
    void OnUpdateVillageAttacked();
    void OnCharacLogin(CUser* user);
    void SendVillageAttackedScore(CUser* user);
    void SendVillageAttackedReward(CUser* user, int rewardType);
    int* GetHuntingPoint(unsigned int charNo);
    void UpdateHuntingPoint(CUser** users, bool success, int* a, unsigned int* charNos);
    void SendVillageAttackedRewardJpn(CUser* user, int count);
    void SendMinTime();
    unsigned int GetElapseTime();
    void ClearDungeonCloseTime();
    int GetRemainTime();
    unsigned int GetDungeonRemainTime();
    int GetMaxHuntingPoint();
    void OnStartVillageAttacked();
    void OnCountdownVillageAttacked(int time);
    void SetRewardCloseTime(ENUM_VILLAGE_ATTACKED_REWARD rewardType);
    void RequestEventEnd(bool flag);
    void SendFirstRankerReward(unsigned int charNo);
    void SendMaxHuntingPoint();
    void OnServerGroupRewardVillageAttacked();
    void RequestEventStart(int time);
    void RequestEventPenaltyEnd();
    void SendRequestRevengeDungeon(char* pkt);
    void ProcessByMinute();
    void Reset();
    CApplication* m_app;                       // +0
    std::map<unsigned int, stHuntingPoint> m_huntingPoints;  // +4
    int m_field1c;                             // +0x1c
    int m_field20;                             // +0x20
    unsigned char m_state24;                   // +0x24
    char m_pad25[3];                           // +0x25
    int m_field28;                             // +0x28
    int m_field2c;                             // +0x2c
    int m_field30;                             // +0x30
    int m_field34;                             // +0x34
};

class CVillageAttackedCountdownFirst : public CTaskScheduler::CTask
{
public:
    CVillageAttackedCountdownFirst(unsigned int time, unsigned int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedCountdownFirst();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};

class CVillageAttackedCountdownSecond : public CTaskScheduler::CTask
{
public:
    CVillageAttackedCountdownSecond(unsigned int time, unsigned int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedCountdownSecond();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};

class CVillageAttackedCountdownThird : public CTaskScheduler::CTask
{
public:
    CVillageAttackedCountdownThird(unsigned int time, unsigned int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedCountdownThird();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};

class CVillageAttackedStart : public CTaskScheduler::CTask
{
public:
    CVillageAttackedStart(unsigned int time, unsigned int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedStart();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};

class CVillageAttackedEnd : public CTaskScheduler::CTask
{
public:
    CVillageAttackedEnd(unsigned int time, unsigned int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedEnd();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};

class CVillageAttackedReward : public CTaskScheduler::CTask
{
public:
    CVillageAttackedReward(unsigned int time, unsigned int flag, CVillageAttackedManager* mgr);
    ~CVillageAttackedReward();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};

class CVillageAttackedServerGroupReward : public CTaskScheduler::CTask
{
public:
    CVillageAttackedServerGroupReward(unsigned int time, unsigned int flag,
                                      CVillageAttackedManager* mgr);
    ~CVillageAttackedServerGroupReward();
    void _DoExecute();
    CVillageAttackedManager* m_mgr;  // +0x10
};
}

extern int village_attacked_scheduler[18];
extern int MAX_SCHEDULER_COUNT;
extern int HUNTING_POINT_WEIGTH_CONST;
extern int REWARD_BUFF_TIME;
extern int REWARD_PENALTY_TIME;
extern int COUNTDOWN_FIRST_TIME;
extern int COUNTDOWN_SECOND_TIME;
extern int COUNTDOWN_THIRD_TIME;

unsigned int GetNowTime();

// ---- monitor 专属 Packet（Load 中局部构造）----
class Packet_Item_Limit_Edition_Load_Data_Req : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Load_Data_Req();
    unsigned char m_fieldA;   // +10
    unsigned int m_fieldB;    // +11
    unsigned int m_fieldC;    // +15
} __attribute__((packed));

class Packet_Item_Limit_Edition_Sell_end : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Sell_end();
    unsigned int m_fieldA;    // +10
    unsigned int m_fieldB;    // +14
} __attribute__((packed));

class Packet_Item_Limit_Edition_Update : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Update();
    unsigned int m_fieldA;    // +10
    unsigned int m_fieldB;    // +14
    char m_data[0x100];       // +18
} __attribute__((packed));

class Packet_Monitor_Event_Start : public PacketHeader
{
public:
    Packet_Monitor_Event_Start();
    unsigned int m_fieldA;    // +10
    unsigned short m_fieldB;  // +14
    unsigned short m_fieldC;  // +16
} __attribute__((packed));

class Packet_Monitor_Event_End : public PacketHeader
{
public:
    Packet_Monitor_Event_End();
    unsigned int m_fieldA;    // +10
} __attribute__((packed));

class Packet_Monitor_Take_Screen_Shot : public PacketHeader
{
public:
    Packet_Monitor_Take_Screen_Shot();
    unsigned char m_fieldA;   // +10
    unsigned int m_fieldB;    // +11
} __attribute__((packed));

class Packet_DBMW_Query_Msg : public PacketHeader
{
public:
    Packet_DBMW_Query_Msg();
    unsigned int m_fieldA;    // +0xa
    unsigned int m_fieldB;    // +0xe
    char m_data[0x1001];      // +0x12
} __attribute__((packed));

class Packet_VillageAttackedRewardServer : public PacketHeader
{
public:
    Packet_VillageAttackedRewardServer();
    unsigned int m_fieldA;    // +10
} __attribute__((packed));

class Packet_VillageAttackedEnd : public PacketHeader
{
public:
    Packet_VillageAttackedEnd();
    unsigned int m_dungeonRemain;  // +10
    unsigned int m_fieldE;         // +14
    unsigned int m_field12;        // +18
} __attribute__((packed));

class Packet_VillageAttackedUpdate : public PacketHeader
{
public:
    Packet_VillageAttackedUpdate();
    unsigned int m_remainTime;  // +10
    unsigned int m_fieldE;      // +14
    unsigned int m_field12;     // +18
} __attribute__((packed));

class Packet_VillageAttackedScore : public PacketHeader
{
public:
    Packet_VillageAttackedScore();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    unsigned int m_remainTime;   // +18
    unsigned int m_field16;      // +22
    unsigned int m_field1a;      // +26
    int m_cur;                   // +30
    int m_max;                   // +34
} __attribute__((packed));

class Packet_VillageAttackedReward : public PacketHeader
{
public:
    Packet_VillageAttackedReward();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    int m_rewardType;            // +18
    int m_count;                 // +22
} __attribute__((packed));

class Packet_DBMW_Add_Buddy : public PacketHeader
{
public:
    Packet_DBMW_Add_Buddy();
    unsigned int m_uniqCharNo;  // +10
    char m_charName[0x1e];      // +14
} __attribute__((packed));

class Packet_DBMW_Del_Buddy : public PacketHeader
{
public:
    Packet_DBMW_Del_Buddy();
    unsigned int m_uniqCharNo;  // +10
    unsigned int m_buddyCharNo; // +14
    char m_charName[0x1e];      // +18
} __attribute__((packed));

class Packet_Monitor_Notice_Member_Member_Login_out : public PacketHeader
{
public:
    Packet_Monitor_Notice_Member_Member_Login_out();
    unsigned char m_flag;           // +10
    unsigned int m_idByChannel;     // +11
    unsigned int m_uniqCharNo;      // +15
    unsigned char m_channelNo;      // +19
    unsigned char m_type;           // +20
    char m_charName[0x1e];          // +21
    unsigned char m_expLevel;       // +51
    unsigned int m_uniqCharNo2;     // +52
} __attribute__((packed));

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
} __attribute__((packed));

class Packet_Monitor_Member_Chat_ToUser : public PacketHeader
{
public:
    Packet_Monitor_Member_Chat_ToUser();
    unsigned int m_idByChannel;   // +10
    unsigned int m_uniqCharNo;    // +14
    char m_charName[0x1e];        // +18
    unsigned char m_msgLen;       // +48
    char m_msg[0x100];            // +49
} __attribute__((packed));

class Packet_Monitor_Notice_Delete_Member_Id : public PacketHeader
{
public:
    Packet_Monitor_Notice_Delete_Member_Id();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
} __attribute__((packed));

class Packet_Monitor_SAVE_Member_Update_Char_Info : public PacketHeader
{
public:
    Packet_Monitor_SAVE_Member_Update_Char_Info();
    unsigned int m_uniqCharNo;   // +10
    unsigned char m_flag;        // +14
} __attribute__((packed));

class Packet_Monitor_SAVE_Member : public PacketHeader
{
public:
    Packet_Monitor_SAVE_Member();
    unsigned char m_fieldA;      // +10
    unsigned int m_upperCharNo;  // +11
    unsigned int m_lowerCharNo;  // +15
    unsigned char m_type;        // +19
} __attribute__((packed));

class Packet_Monitor_Request_Member_Enter_To_Requester : public PacketHeader
{
public:
    Packet_Monitor_Request_Member_Enter_To_Requester();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    unsigned char m_result;      // +18
    char m_name[0x1e];           // +19
} __attribute__((packed));

class Packet_Monitor_Request_Member_Enter_To_Responser : public PacketHeader
{
public:
    Packet_Monitor_Request_Member_Enter_To_Responser();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    unsigned short m_level;      // +18
    char m_name[0x1e];           // +20
} __attribute__((packed));

class Packet_Monitor_Member_Enter_Reply_ToResponser : public PacketHeader
{
public:
    Packet_Monitor_Member_Enter_Reply_ToResponser();
    unsigned char m_fieldA;      // +10
    unsigned char m_fieldB;      // +11
    unsigned char m_fieldC;      // +12
    unsigned int m_idByChannel;  // +13
    unsigned int m_uniqCharNo;   // +17
    unsigned char m_fieldD;      // +21
    char m_name[0x1e];           // +22
    unsigned char m_fieldE;      // +52
    unsigned int m_extraCharNo;  // +53
} __attribute__((packed));

class Packet_Monitor_Notice_Member_Enter_Ok : public PacketHeader
{
public:
    Packet_Monitor_Notice_Member_Enter_Ok();
    unsigned char m_fieldA;      // +10
    unsigned char m_fieldB;      // +11
    unsigned char m_fieldC;      // +12
    unsigned int m_idByChannel;  // +13
    unsigned int m_uniqCharNo;   // +17
    unsigned char m_fieldD;      // +21
    char m_name[0x1e];           // +22
    unsigned char m_fieldE;      // +52
    unsigned int m_extraCharNo;  // +53
} __attribute__((packed));

class Packet_Monitor_Member_Secede_To_Seceder : public PacketHeader
{
public:
    Packet_Monitor_Member_Secede_To_Seceder();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    unsigned char m_type;        // +18
    char m_name[0x1e];           // +19
} __attribute__((packed));

class Packet_Monitor_Member_Pay_Tax_ToUpper : public PacketHeader
{
public:
    Packet_Monitor_Member_Pay_Tax_ToUpper();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    int m_money;                 // +18
    int m_fatigue;               // +22
    char m_name[0x1e];           // +26
} __attribute__((packed));

class Packet_Notice_Find_Factory_Hub_User : public PacketHeader
{
public:
    Packet_Notice_Find_Factory_Hub_User();
    unsigned int m_idByChannel;  // +10
    unsigned char m_nameLen;     // +14
    char m_name[0x1e];           // +15
    unsigned char m_found;       // +45
    unsigned short m_field2e;    // +46
    unsigned int m_field30;      // +48
} __attribute__((packed));

class Packet_DBMW_Register_To_BlackList : public PacketHeader
{
public:
    Packet_DBMW_Register_To_BlackList();
    unsigned int m_charNo;       // +10
    char m_name[0x1e];           // +14
    unsigned int m_charNo2;      // +44
} __attribute__((packed));

class Packet_Register_To_BlackList_RESULT : public PacketHeader
{
public:
    Packet_Register_To_BlackList_RESULT();
    unsigned int m_idByChannel;  // +10
    char m_name[0x1e];           // +14
    unsigned int m_charNo;       // +44
    unsigned char m_result;      // +48
} __attribute__((packed));

class Packet_DMBW_Delete_To_BlackList : public PacketHeader
{
public:
    Packet_DMBW_Delete_To_BlackList();
    unsigned int m_charNo;       // +10
    char m_name[0x1e];           // +14
    unsigned int m_charNo2;      // +44
} __attribute__((packed));

class Packet_Delete_To_BlackList_Result : public PacketHeader
{
public:
    Packet_Delete_To_BlackList_Result();
    unsigned int m_idByChannel;  // +10
    char m_name[0x1e];           // +14
    unsigned int m_charNo;       // +44
    unsigned char m_result;      // +48
} __attribute__((packed));

class Packet_Request_Result_BlackList : public PacketHeader
{
public:
    Packet_Request_Result_BlackList();
    unsigned int m_idByChannel;  // +10
    unsigned char m_count;       // +14
    STBlackUserDBType m_blackList[10];  // +15
} __attribute__((packed));

class Packet_Web_Notice_InGame_Advertisement : public PacketHeader
{
public:
    Packet_Web_Notice_InGame_Advertisement();
} __attribute__((packed));

class Packet_CollectItemsUpdate : public PacketHeader
{
public:
    Packet_CollectItemsUpdate();
    unsigned int m_fieldA;   // +10
    unsigned char m_fieldE;  // +14
    unsigned int m_fieldF;   // +15
    unsigned char m_field13; // +19
} __attribute__((packed));

class Packet_CollectItemsResult : public PacketHeader
{
public:
    Packet_CollectItemsResult();
    unsigned int m_fieldA;   // +10
    unsigned int m_fieldE;   // +14
    unsigned int m_field12;  // +18
} __attribute__((packed));

class Packet_Server_Queue_Load_Statistic : public PacketHeader
{
public:
    Packet_Server_Queue_Load_Statistic();
    unsigned char m_fieldA;  // +10
    unsigned char m_fieldB;  // +11
    unsigned short m_fieldC; // +12
} __attribute__((packed));

class Packet_InnerPakcet_Login : public PacketHeader
{
public:
    Packet_InnerPakcet_Login();
} __attribute__((packed));

class Packet_InnerPakcet_Logout : public PacketHeader
{
public:
    Packet_InnerPakcet_Logout();
} __attribute__((packed));

class Packet_Monitor_UDP_HeartBeat : public PacketHeader
{
public:
    Packet_Monitor_UDP_HeartBeat();
    unsigned char m_fieldA;  // +10
} __attribute__((packed));

class Packet_MiniCraneSeed : public PacketHeader
{
public:
    Packet_MiniCraneSeed();
    unsigned int m_fieldA;   // +10
} __attribute__((packed));

class Packet_DB_Query_Member : public PacketHeader
{
public:
    Packet_DB_Query_Member();
    unsigned int m_fieldA;   // +10
} __attribute__((packed));

class Packet_DB_Query_Member_Member : public PacketHeader
{
public:
    Packet_DB_Query_Member_Member();
    unsigned int m_fieldA;   // +10
} __attribute__((packed));

class Packet_Send_Time_Sync : public PacketHeader
{
public:
    Packet_Send_Time_Sync();
    unsigned short m_fieldA; // +10
    unsigned short m_fieldC; // +12
} __attribute__((packed));

class Packet_Monitor_Notice_Buddy_In_Out : public PacketHeader
{
public:
    Packet_Monitor_Notice_Buddy_In_Out();
    unsigned int m_charNo;       // +10
    unsigned int m_idByChannel;  // +14
    unsigned char m_channel;     // +18
    unsigned char m_field13;     // +19
    unsigned char m_field14;     // +20
    char m_name[0x1e];           // +21
    unsigned char m_field33;     // +51
} __attribute__((packed));

class Packet_DBMW_Request_BlackList : public PacketHeader
{
public:
    Packet_DBMW_Request_BlackList();
    unsigned int m_charNo;  // +10
    unsigned char m_flag;   // +11
} __attribute__((packed));

class Packet_DB_Member_Delete_As_Charac_Delete : public PacketHeader
{
public:
    Packet_DB_Member_Delete_As_Charac_Delete();
    unsigned int m_charNo;  // +10
} __attribute__((packed));

class Packet_DBMW_Query_Buddy_Info : public PacketHeader
{
public:
    Packet_DBMW_Query_Buddy_Info();
    unsigned int m_uniqCharNo;  // +10
} __attribute__((packed));

class Packet_Request_Charac_Tower_Ranking : public PacketHeader
{
public:
    Packet_Request_Charac_Tower_Ranking();
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    char m_data[0x50];           // +18
} __attribute__((packed));

class Packet_Send_Time_Sync_For_Login : public PacketHeader
{
public:
    Packet_Send_Time_Sync_For_Login();
    unsigned int m_dbid;         // +10
    unsigned int m_idByChannel;  // +14
    unsigned short m_hour;       // +18
    unsigned short m_min;        // +20
} __attribute__((packed));

class Packet_Tcp_Server_Connect : public PacketHeader
{
public:
    Packet_Tcp_Server_Connect();
    unsigned char m_channel;  // +10
} __attribute__((packed));

class Packet_Monitor_Add_Buddy_Reply : public PacketHeader
{
public:
    Packet_Monitor_Add_Buddy_Reply();
    unsigned int m_charNo;      // +10
    unsigned int m_idByChannel; // +14
    char m_name[0x27];          // +18
    unsigned char m_channel;    // +57
    unsigned char m_result;     // +58
} __attribute__((packed));

class Packet_Monitor_Del_Buddy_Reply : public PacketHeader
{
public:
    Packet_Monitor_Del_Buddy_Reply();
    unsigned int m_charNo;      // +10
    unsigned int m_idByChannel; // +14
    char m_name[0x1e];          // +18
    unsigned char m_result;     // +48
} __attribute__((packed));

class Packet_DBMW_Connection_Check : public PacketHeader
{
public:
    Packet_DBMW_Connection_Check();
    unsigned char m_channel;  // +10
} __attribute__((packed));

class Packet_Monitor_Notice_Black_List : public PacketHeader
{
public:
    Packet_Monitor_Notice_Black_List();
    unsigned int m_dbid;         // +10
    unsigned int m_idByChannel;  // +14
    unsigned char m_count;       // +18
    unsigned int m_charNos[10];  // +19
} __attribute__((packed));

class Packet_CollectItemsReward : public PacketHeader
{
public:
    Packet_CollectItemsReward();
    unsigned int m_idByChannel;  // +10
    unsigned int m_charNo;       // +14
    unsigned char m_type;        // +18
    unsigned char m_nameLen;     // +19
    char m_name[0x1d];           // +20
} __attribute__((packed));

class Packet_CollectItemsRewardBroadcast : public PacketHeader
{
public:
    Packet_CollectItemsRewardBroadcast();
    unsigned int m_fieldA;       // +10
    unsigned int m_charNo;       // +14
    unsigned char m_type;        // +18
    unsigned char m_nameLen;     // +19
    char m_name[0x1e];           // +20
} __attribute__((packed));

class Packet_MTG_OntimeEvent_RewardStart : public PacketHeader
{
public:
    Packet_MTG_OntimeEvent_RewardStart();
    unsigned int m_eventIdx;   // +10
    unsigned int m_fieldE;     // +14
    unsigned int m_field12;    // +18
    int m_field16;             // +22
} __attribute__((packed));

class Packet_Manager_Event_Trigger_Ack : public PacketHeader
{
public:
    Packet_Manager_Event_Trigger_Ack() : PacketHeader(0x1b6b, 0x16)
    {
        *(unsigned int*)((char*)this + 0xa) = 0;
        *(unsigned int*)((char*)this + 0xe) = 0;
        *(unsigned int*)((char*)this + 0x12) = 0;
    }
    unsigned int m_eventId;  // +10
    unsigned int m_flag;     // +14
    unsigned int m_group;    // +18
} __attribute__((packed));

class Packet_Req_Ontime_Event_Item : public PacketHeader
{
public:
    Packet_Req_Ontime_Event_Item() : PacketHeader(0x2345, 0xa) {}
} __attribute__((packed));

class Packet_Req_Ontime_Event_Idx : public PacketHeader
{
public:
    Packet_Req_Ontime_Event_Idx() : PacketHeader(0x2346, 0xa) {}
} __attribute__((packed));

class Packet_MTG_OntimeEvent_RewardEnd : public PacketHeader
{
public:
    Packet_MTG_OntimeEvent_RewardEnd();
} __attribute__((packed));

class Packet_Send_Periodic_Message : public PacketHeader
{
public:
    Packet_Send_Periodic_Message() : PacketHeader(0x1f4a, 0x20a)
    {
        memset((char*)this + 0xa, 0, 0x200);
    }
} __attribute__((packed));

class Packet_DB_Save_Member_Exp : public PacketHeader
{
public:
    Packet_DB_Save_Member_Exp() : PacketHeader(0x641, 0x16)
    {
        *(unsigned int*)((char*)this + 0xa) = 0;
        *(unsigned int*)((char*)this + 0xe) = 0;
        *(unsigned int*)((char*)this + 0x12) = 0;
    }
    unsigned int m_memberKey;    // +10
    unsigned int m_upperCharId;  // +14
    unsigned int m_exp;          // +18
} __attribute__((packed));

class Packet_Monitor_Notice_MemberExp_LevelUp : public PacketHeader
{
public:
    Packet_Monitor_Notice_MemberExp_LevelUp() : PacketHeader(0x642, 0x13)
    {
        *(unsigned int*)((char*)this + 0xa) = 0;
        *(unsigned int*)((char*)this + 0xe) = 0;
        *(char*)((char*)this + 0x12) = 0;
    }
    unsigned int m_idByChannel;  // +10
    unsigned int m_uniqCharNo;   // +14
    unsigned char m_level;       // +18
} __attribute__((packed));

class BuddyList
{
public:
    BuddyList()
    {
        *(char*)((char*)this + 0) = 0xff;
        *(char*)((char*)this + 1) = 0;
        *(char*)((char*)this + 2) = 0;
        memset((char*)this + 3, 0, 0x27);
    }
    char m_data[0x2a];
} __attribute__((packed));

class Packet_Monitor_Reply_Buddy_List : public PacketHeader
{
public:
    Packet_Monitor_Reply_Buddy_List() : PacketHeader(0x3f2, 0x54f), m_fieldA(0), m_fieldE(0) {}
    unsigned int m_fieldA;       // +0xa
    unsigned char m_fieldE;      // +0xe
    BuddyList m_buddies[32];     // +0xf
} __attribute__((packed));

class Packet_DB_InsertMail : public PacketHeader
{
public:
    Packet_DB_InsertMail();
} __attribute__((packed));

class Packet_VillageAttackedStart : public PacketHeader
{
public:
    Packet_VillageAttackedStart() : PacketHeader(0x1773, 0x16)
    {
        *(int*)((char*)this + 0xa) = 0;
        *(int*)((char*)this + 0xe) = 0;
        *(int*)((char*)this + 0x12) = 0;
    }
} __attribute__((packed));

class Packet_VillageAttackedCountdown : public PacketHeader
{
public:
    Packet_VillageAttackedCountdown() : PacketHeader(0x1776, 0xe)
    {
        *(int*)((char*)this + 0xa) = 0;
    }
} __attribute__((packed));

class Packet_DB_VillageAttackedRank : public PacketHeader
{
public:
    Packet_DB_VillageAttackedRank() : PacketHeader(0x177b, 0x1b) {}
} __attribute__((packed));

class Packet_Request_Load_Tower_Full_Rank : public PacketHeader
{
public:
    Packet_Request_Load_Tower_Full_Rank() : PacketHeader(0x4cc, 0x12)
    {
        *(int*)((char*)this + 0xa) = 0;
        *(int*)((char*)this + 0xe) = 0;
    }
} __attribute__((packed));

class Packet_Request_IPCounterList : public PacketHeader
{
public:
    Packet_Request_IPCounterList() : PacketHeader(0x1038, 0xc)
    {
        m_fieldA = 5;
        m_fieldB = 0;
    }
    unsigned char m_fieldA;  // +0xa
    unsigned char m_fieldB;  // +0xb
} __attribute__((packed));

class Packet_Monitor_ServerEvent_Start : public PacketHeader
{
public:
    Packet_Monitor_ServerEvent_Start() : PacketHeader(0x44e, 0x12)
    {
        *(int*)((char*)this + 0xa) = 0;
        *(unsigned short*)((char*)this + 0xe) = 0;
        *(unsigned short*)((char*)this + 0x12) = 0;
    }
} __attribute__((packed));

class Packet_TOD_DoRandomSelect : public PacketHeader
{
public:
    Packet_TOD_DoRandomSelect() : PacketHeader(0x2712, 0xa) {}
} __attribute__((packed));

struct stLoginLogoutVariable
{
    stLoginLogoutVariable()
    {
        m_b0 = 0;
        m_b1 = 0;
        m_i2 = 0;
    }
    char m_b0;  // +0
    char m_b1;  // +1
    int m_i2;   // +2
} __attribute__((packed));
class Packet_DBMW_Statistic_Login_Logout : public PacketHeader
{
public:
    Packet_DBMW_Statistic_Login_Logout();
    unsigned int m_fieldA;      // +0xa
    stLoginLogoutVariable m_entries[255]; // +0xe
    unsigned int m_field608;    // +0x608
    unsigned int m_field60c;    // +0x60c
    unsigned int m_field610;    // +0x610
    unsigned int m_field614;    // +0x614
} __attribute__((packed));


class CommonTime
{
public:
    void SetCurTime();
    unsigned char m_field0;  // +0
    unsigned char m_field1;  // +1
    unsigned char m_field2;  // +2
    unsigned char m_field3;  // +3
    unsigned char m_field4;  // +4
    unsigned char m_field5;  // +5
};

class CSystemTime
{
public:
    CSystemTime();
    ~CSystemTime() {}
    char m_data[0x14];
};

class CSystemTimeHandler : public CSystemTime
{
public:
    CSystemTimeHandler();
    ~CSystemTimeHandler() {}
};

CSystemTimeHandler* CSystemTimeHandlerInstance();

class CPacketTracer
{
public:
    CPacketTracer();
    ~CPacketTracer() {}
    void AddLog(int a, int b);
    void WriteLog();
    void AbsoluteWriteLog();
    void ResetLog();
    int m_count;         // +0
    std::string m_str;   // +4
};

CPacketTracer* CPacketTracerInstance();

class CSourceVersionMgr
{
public:
    class SourceVersion
    {
    public:
        SourceVersion(char* path, int version);
        ~SourceVersion();
        std::string m_path;  // +0
        int m_version;       // +4
    };
    CSourceVersionMgr();
    ~CSourceVersionMgr() {}
    void InsertSourceVersion(char* path, int version);
    std::vector<SourceVersion> m_versions;  // +0
};

// ---- CVersionMgr：0x10 ----
class CVersionMgr
{
public:
    CVersionMgr(int a, int b, int c, int d);
    int m_a;  // +0
    int m_b;  // +4
    int m_c;  // +8
    int m_d;  // +0xc
};

class Packet_Arad_DeleteEffect : public PacketHeader
{
public:
    Packet_Arad_DeleteEffect(int group, int code);
} __attribute__((packed));

class Packet_Monitor_Call_Member_List_ToUser : public PacketHeader
{
public:
    Packet_Monitor_Call_Member_List_ToUser();
    unsigned int m_idByChannel;     // +10
    unsigned int m_uniqCharNo;      // +14
    unsigned char m_upperChannel;   // +18
    unsigned char m_upperLevel;     // +19
    char m_upperName[0x1e];         // +20
    unsigned char m_upperBlack;     // +50
    unsigned char m_upperExpLevel;  // +51
    unsigned int m_upperExp;        // +52
    unsigned int m_upperExpNext;    // +56
    unsigned char m_lowerCount;     // +60
    char m_lowers[10][0x2a];        // +61
} __attribute__((packed));

class Packet_Punish_Cancel : public PacketHeader
{
public:
    Packet_Punish_Cancel();
    unsigned int m_idByChannel;  // +10
    unsigned short m_fieldE;     // +14
    unsigned short m_field10;    // +16
} __attribute__((packed));

class Packet_Set_CleanPad_Point : public PacketHeader
{
public:
    Packet_Set_CleanPad_Point();
    unsigned int m_idByChannel;  // +10
    unsigned short m_fieldE;     // +14
} __attribute__((packed));

class Packet_SecuService_Connect_Web : public PacketHeader
{
public:
    Packet_SecuService_Connect_Web();
    unsigned int m_idByChannel;  // +10
    unsigned char m_fieldE;      // +14
    unsigned char m_fieldF;      // +15
    char m_data[5];              // +16
} __attribute__((packed));

class Packet_Monitor_User_Repel : public PacketHeader
{
public:
    Packet_Monitor_User_Repel();
    unsigned int m_idByChannel;  // +10
} __attribute__((packed));

class Packet_Monitor_Other_Channel_Chat_ToUser : public PacketHeader
{
public:
    Packet_Monitor_Other_Channel_Chat_ToUser();
    unsigned int m_senderCharId;  // +10
    unsigned char m_fieldE;       // +14
    unsigned int m_idByChannel;   // +15
    unsigned int m_uniqCharNo;    // +19
    char m_name[0x1e];            // +23
    unsigned char m_type;         // +53
    unsigned char m_msgLen;       // +54
    char m_msg[0x100];            // +55
} __attribute__((packed));

class Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link : public PacketHeader
{
public:
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link();
    unsigned int m_senderCharId;  // +10
    unsigned char m_fieldE;       // +14
    unsigned int m_idByChannel;   // +15
    unsigned int m_uniqCharNo;    // +19
    char m_name[0x1e];            // +23
    unsigned char m_type;         // +53
    unsigned char m_itemCount;    // +54
    char m_items[3][0x68];        // +55
    unsigned char m_msgLen;       // +367
    char m_msg[0x100];            // +368
} __attribute__((packed));

class Packet_Change_User_Handicap : public PacketHeader
{
public:
    Packet_Change_User_Handicap();
    unsigned int m_fieldA;  // +10
    unsigned int m_fieldE;  // +14
    unsigned int m_field12; // +18
} __attribute__((packed));

class Packet_Web_Request_ARS_Info : public PacketHeader
{
public:
    Packet_Web_Request_ARS_Info();
    unsigned char m_flag;  // +10
} __attribute__((packed));

class Packet_Arad_ApplyEffect : public PacketHeader
{
public:
    Packet_Arad_ApplyEffect(int group, int code, unsigned int time);
    int m_group;   // +10
    int m_code;    // +14
    unsigned int m_time;  // +18
} __attribute__((packed));

class Packet_Load_Periodic_Message : public PacketHeader
{
public:
    Packet_Load_Periodic_Message();
} __attribute__((packed));

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
    MemPool(unsigned int count);
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
    void StrLoading();
    void StrLoading(std::string path);
    void InitString();
    void CharsetInit(TiXmlNode* node);
    void EventLoad(TiXmlNode* node);
    void StrPunish(int idx, const char* str, _eStringType type);
    std::string GetServerString(int idx, bool* ok) const;
    unsigned int GetEventRGBA(int idx) const;
    std::string GetEventString(int idx, _eStringType type, bool* ok) const;
    void RGBALoad(int idx, TiXmlNode* node);
    void ProcessLoad(TiXmlNode* node);
    char m_field0[8];                       // +0
    TiXmlDocument m_doc;                    // +8
    int m_charset;                          // +0x50
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
CSwapQueue<T, N>::CSwapQueue()
{
    Init();
}
template<class T, int N>
CSwapQueue<T, N>::~CSwapQueue() {}
template<class T, int N>
void CSwapQueue<T, N>::Push(T* item)
{
    GetRecvQ()->push(item);
}
template<class T, int N>
void CSwapQueue<T, N>::Pop()
{
    GetRecvQ()->pop();
}
template<class T, int N>
void CSwapQueue<T, N>::Init()
{
    m_recvIdx = 0;
    m_parseIdx = 1;
}
template<class T, int N>
T* CSwapQueue<T, N>::GetRecvQ()
{
    return &m_queues[m_recvIdx];
}
template<class T, int N>
T* CSwapQueue<T, N>::GetParseQ()
{
    return &m_queues[m_parseIdx];
}
template<class T, int N>
void CSwapQueue<T, N>::SwapQ()
{
    int t = m_recvIdx;
    m_recvIdx = m_parseIdx;
    m_parseIdx = t;
}

template<class T>
IQueue<T>::IQueue() {}
template<class T>
IQueue<T>::~IQueue() {}
template<class T>
IQueue<T>* IQueue<T>::Get()
{
    static IQueue<T> instance;
    return &instance;
}
template<class T>
void IQueue<T>::InitQueue(T* recv, T* parse)
{
    *(T**)((char*)this + 0) = recv;
    *(T**)((char*)this + 4) = parse;
}
template<class T>
bool IQueue<T>::SwitchQueue()
{
    if (m_recv->empty())
    {
        return false;
    }
    T* t = m_recv;
    m_recv = m_parse;
    m_parse = t;
    return true;
}
template<class T>
T* IQueue<T>::GetParseQueue() { return m_parse; }

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
    ~CGMAccounts();
    bool isGM(unsigned int dbid);
    void clearGmList();
    void AppendGM_Sys(unsigned int dbid, char level);
    char loadGMAccounts(const char* path);
    char appendGM(unsigned int a, unsigned int b);
    char removeGM(unsigned int a, unsigned int b);
    void LoadGmList(unsigned int dbid, int level);
    struct stGMInfo_t
    {
        bool operator==(const stGMInfo_t& other) const;
        unsigned int m_dbid;
        unsigned int m_field4;
    };
    stGMInfo_t getGMInfo(unsigned int dbid) const;
    std::list<stGMInfo_t> m_list;  // +0
};
}

namespace exchange_server
{
struct CACHE_CHARACTER_TYPE
{
    int m_field0;   // +0
    int m_field4;   // +4
    long m_field8;  // +8
};

struct CCacheCharacterTime
{
    CCacheCharacterTime() : m_time(0), m_charNo(0) {}
    int m_time;    // +0
    int m_charNo;  // +4
    bool operator<(const CCacheCharacterTime& other) const
    {
        return m_time >= other.m_time;
    }
};

class CCacheCharacterMgr
{
public:
    CCacheCharacterMgr();
    ~CCacheCharacterMgr();
    int CacheCharacter(unsigned int dbid, CACHE_CHARACTER_TYPE* type);
    bool GetCacheCharacter(unsigned int dbid, CACHE_CHARACTER_TYPE* out);
    char CollectGarbage();
    void Reset();
    std::map<unsigned int, CACHE_CHARACTER_TYPE> m_cache;  // +0
    std::priority_queue<CCacheCharacterTime> m_timeQueue;  // +0x18
};

CCacheCharacterMgr* GetInstanceCacheCharacterMgr();
}

#endif  // MONITOR_TYPES_H_
