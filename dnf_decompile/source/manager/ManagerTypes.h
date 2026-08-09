#ifndef MANAGER_TYPES_H_
#define MANAGER_TYPES_H_

#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#include <sys/time.h>
#include <netinet/in.h>

#include <mysql.h>
#include <stdexcept>

#include "PacketHeader.h"
#include "Thread.h"

class CApplication;
class CUser;
class CServerHandler;
class CUdpRecvBuffer;
class CTcpRecvBuffer;
class CTcpSendBuffer;
class CPacketBuffer;
class CPeer;
class CTcpNetSystem;
class CUserManager;
class CUdpHandler;
class CUdpNetworkThread;
class CTcpNetworkThread;
class CTcpAcceptThread;
class CTcpHandler;
class EpollHandler;
class CDBHandle;
class CMySql;
class CDBManager;
class CQueryCounter;
class CMonitorServer;
class CTcpServer;
class CSignalTranslator;
class CSignal;
class CDnFTimer;
class CUnixTimer;
class CSystemTime;
class CSystemTimeHandler;
class CAppInit;
class CAppStartInit;
class CAppStopInit;
class CTableBase;
class CAppConfig;
class CServerConfig;
class CKillUSRConfig;
class CProtocol;
class CPacketDecoder;
class CPacketTracer;
class CSourceVersionMgr;
class CDNFProhibitUser;
struct ST_ServerInfo;

// ---- CDNFException：std::exception + std::string ----
class CDNFException : public std::exception
{
public:
    CDNFException(const std::string& msg);
    virtual ~CDNFException() throw();
    virtual const char* what() const throw();
private:
    std::string m_msg;  // +4
};

typedef std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > > UdpRecvQueue;
typedef std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > > TcpRecvQueue;
typedef std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*, std::allocator<CTcpSendBuffer*> > > CTcpSendQueue;

enum ENUM_DB_HANDLE_IDX { DB_HANDLE_0 = 0 };
enum ENUM_DB_KIND { DB_KIND_0 = 0 };

// ---- CUdpRecvBuffer / CTcpRecvBuffer / CTcpSendBuffer / CPacketBuffer：0x1804 ----
class CUdpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

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

// ---- MemPool<T>：对象池（manager：free(ptr) 无条件入空闲链表）----
template<class T>
class MemPool
{
public:
    MemPool();
    MemPool(unsigned int count);
    ~MemPool();
    void* alloc();
    void free(void* ptr);
    void free(void* ptr, unsigned int size);
    static void* headOfFreeList_;
    int m_size;                     // +0
    int m_count;                    // +4
    std::vector<void*> m_blocks;    // +8
};

// ---- IQueue<T>：双队列切换 ----
template<class T>
class IQueue
{
public:
    IQueue() {}
    ~IQueue() {}
    static IQueue& Get();
    char InitQueue(T* recv, T* parse) { m_recv = recv; m_parse = parse; return 1; }
    T* GetParseQueue() { return m_parse; }
    char SwitchQueue();
    T* m_recv;   // +0
    T* m_parse;  // +4
};

// ---- CFrameCountHandler ----
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    ~CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int a, unsigned short b);
    void SaveProcess();
    void SaveProcess(int n);
    void* GetFrameCountInfo();
    char m_field0[4];   // +0
    unsigned int m_field4;   // +4
    unsigned int m_field8;   // +8
    unsigned int m_fieldC;   // +0xc
    int m_field10;      // +0x10
    unsigned int m_field14;  // +0x14
    unsigned int m_field18;  // +0x18
    char m_pad1C[4];    // +0x1c
    unsigned int m_field20;  // +0x20
    unsigned char m_field24; // +0x24
    unsigned char m_field25; // +0x25
    unsigned char m_field26; // +0x26
    char m_pad27;       // +0x27
    unsigned char m_field28; // +0x28
    char m_pad29[3];    // +0x29
    CApplication* m_app;  // +0x2c
};

// ---- CUdpHandler：0x10 ----
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
    int GetServerSocket();
    int m_sock;         // +0
    int m_clientSock;   // +4
    char m_data8[8];    // +8
};

// ---- CSwapQueue<T,N>：0x58 ----
template<class T, int N>
class CSwapQueue
{
public:
    CSwapQueue() { Init(); }
    ~CSwapQueue() {}
    void Init() { m_recvIdx = 0; m_parseIdx = 1; }
    T* GetRecvQ() { return &m_queues[m_recvIdx]; }
    T* GetParseQ() { return &m_queues[m_parseIdx]; }
    void SwapQ();
    int m_recvIdx;   // +0
    int m_parseIdx;  // +4
    T m_queues[N];   // +8
};

// ---- CSystemTime：0x14 ----
class CSystemTime
{
public:
    CSystemTime();
    ~CSystemTime() {}
    int m_field4;       // +4
    struct timeval m_tv;  // +8
    int m_field10;      // +0x10
};

class CSystemTimeHandler : public CSystemTime
{
public:
    CSystemTimeHandler() {}
    ~CSystemTimeHandler() {}
};

CSystemTimeHandler* CSystemTimeHandlerInstance();

// ---- CDnFTimer：vtable@0（SetLastTime / GetTimeInterval 两个虚函数）----
class CDnFTimer
{
public:
    CDnFTimer();
    ~CDnFTimer() {}
    virtual void SetLastTime() {}
    virtual double GetTimeInterval() { return 0.0; }
};

// ---- CUnixTimer：+4 double ----
class CUnixTimer : public CDnFTimer
{
public:
    CUnixTimer();
    ~CUnixTimer() {}
    virtual void SetLastTime();
    virtual double GetTimeInterval();
    double GetNowTime();  // 非虚（原版无虚表槽）
    double m_lastTime;  // +4
};

// ---- CUserManager：0x1c ----
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    char InsertProhibitUser(unsigned int dbid, CDNFProhibitUser* pu);
    CDNFProhibitUser* FindProhibitUser(unsigned int dbid) const;
    char DeleteProhibitUser(unsigned int dbid);
    void ProcessByMinute();
    std::map<unsigned int, CDNFProhibitUser*> m_prohibitUsers;  // +0
    CApplication* m_app;  // +0x18
};

// ---- CDNFProhibitUser：0x14 ----
class CDNFProhibitUser
{
public:
    CDNFProhibitUser();
    ~CDNFProhibitUser();
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    unsigned int GetDBID();
    unsigned short GetProhibitRemainTime();
    unsigned char GetMonitorRetPacketCnt();
    char GetConnectFlag();
    void SetIpPort(unsigned int ip, unsigned short port);
    void GetIpPort(unsigned int& ip, unsigned short& port);
    void SetMonitorWaitTime(unsigned int dbid, short time);
    void SetProhibitUserInfo(char flag);
    void IncreMonitorRetPacket();
    char IsTimeOutWaitMonitor();
    unsigned int m_dbid;        // +0
    unsigned short m_remainTime;  // +4
    unsigned char m_retPacketCnt; // +6
    char m_pad7;                // +7
    unsigned int m_ip;          // +8
    unsigned short m_port;      // +0xc
    char m_connectFlag;         // +0xe
    char m_padF;                // +0xf
};

// ---- CMonitorServer：0x14 ----
class CMonitorServer
{
public:
    CMonitorServer();
    ~CMonitorServer();
    void ResetHeartBeat();
    char IsConnected();
    void SetConnFlag(bool flag);
    void OnDisconnect();
    char IsValidMonitorServer();
    char IsHeartBeatTimeOver();
    void Init(std::string& name, unsigned short port, unsigned char flag);
    void SendToServer(char* buf, int len);
    char m_index;       // +0
    char m_valid;       // +1
    char m_pad2[2];     // +2
    std::string m_name; // +4
    unsigned short m_port;  // +8
    char m_connected;   // +0xa
    char m_heartBeat;   // +0xb
    char m_fieldC;      // +0xc
    char m_padD[3];     // +0xd
    CUdpHandler* m_udpHandler;  // +0x10
};

// ---- CTcpServer：0x10 ----
class CTcpServer
{
public:
    CTcpServer();
    ~CTcpServer();
    void Init(unsigned int sock, CTcpNetSystem* net);
    void SetServerIndex(unsigned char idx);
    unsigned char GetServerIndex();
    void* GetSocket();
    char IsValidServer();
    void NotifyHeartbeat();
    char IsHeartbeatTimeOver();
    void SendToServer(char* buf);
    unsigned short makePacketHeader(unsigned short type, unsigned short size);
    char m_index;       // +0
    char m_pad1[3];
    void* m_socket;     // +4
    CTcpNetSystem* m_net;  // +8
    time_t m_heartbeat; // +0xc
};

// ---- CTcpNetSystem：0x160 ----
class CTcpNetSystem
{
public:
    CTcpNetSystem();
    ~CTcpNetSystem();
    void Init(unsigned short port);
    int OpenTcpService(int& serverCount, const char* ip, unsigned short port);
    int WaitForEvent();
    void SendPacket();
    void CleanPeers();
    void CleanTcpSendPacketQ();
    void DeletePeer(CPeer* peer);
    CPeer* GetPeer(unsigned int idx);
    CPeer* CreatePeer();
    void InsertAcceptedPeer(CPeer* peer);
    void SetEpollConnectedPeer(CPeer* peer);
    void SetEpollAcceptedPeers();
    void PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf);
    void PushTcpSendPacketQ(char* buf);
    CTcpSendBuffer* Acquire_TcpSendBuffer();
    unsigned short Get_TcpServerPort();
    CTcpHandler* Get_TcpHandler();
    CSwapQueue<TcpRecvQueue, 2>* Get_TcpSwapQPacket();
    void* Get_TcpRecvQPacket();
    CMutex* Get_TcpRecvQLock();
    CMutex* Get_TcpRecvBLock();
    CMutex* Get_TcpSendQLock();
    CMutex* Get_TcpSendBLock();
    CTcpSendQueue* Get_TcpSendQPacket();
    CTcpHandler* m_tcpHandler;      // +0
    void* m_field4;                 // +4
    CSwapQueue<TcpRecvQueue, 2> m_recvSwapQueue;  // +8
    CMutex m_mutex60;               // +0x60
    CMutex m_mutex78;               // +0x78
    CMutex m_mutex90;               // +0x90
    CMutex m_mutexA8;               // +0xa8
    CTcpSendQueue m_sendQueue;      // +0xc0
    CMutex m_mutexE8;               // +0xe8
    CMutex m_mutex100;              // +0x100
    CTcpAcceptThread* m_acceptThread;  // +0x118
    std::queue<CPeer*> m_peerQueue;    // +0x11c
    std::map<unsigned int, CPeer*> m_peerMap;  // +0x144
    unsigned short m_serverPort;    // +0x15c
    char m_pad[2];
};

// ---- CProtocol / EpollHandler / CTcpHandler ----
class CProtocol
{
public:
    CProtocol() {}
    virtual ~CProtocol() {}
    virtual int SetPeer(void* peer, int fd, bool flag) { return 0; }
    virtual void* GetEventPtr(int idx) { return 0; }
    virtual char IsSetInEvent(int idx) { return 0; }
    virtual int ResetEpoll(int fd) { return 0; }
    virtual char IsSetOutEvent(int idx) { return 0; }
    virtual int WaitForEvent() { return 0; }
    virtual char IsSetErrEvent(int idx) { return 0; }
};

class EpollHandler : public CProtocol
{
public:
    EpollHandler();
    virtual ~EpollHandler();
    virtual int ResetEpoll(int fd);
    virtual char IsSetOutEvent(int idx);
    virtual int WaitForEvent();
    virtual char IsSetErrEvent(int idx);
    virtual char IsSetInEvent(int idx);
    virtual void* GetEventPtr(int idx);
    virtual int SetPeer(void* peer, int fd, bool flag);
    int SetEpoll(void* peer, int fd, bool flag);
    int GetEpollFD();
    void* GetEpollEvents();
    void Destroy();
    int Init();
    int m_eventType;  // +4
    void* m_peer;     // +8
    char m_dataC[4];  // +0xc
    void* m_events;   // +0x10
    int m_epollFd;    // +0x14
    CMutex m_mutex;   // +0x18
};

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

// ---- TCPSocket：0x1c ----
class TCPSocket
{
public:
    TCPSocket();
    virtual ~TCPSocket();
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
    int m_fd;       // +0
    char m_data4[0x10];  // +4
    struct sockaddr_in m_addr;  // +0x14
    unsigned short m_port;  // +0x18
    char m_pad1A[2];
};

// ---- CPeer：TCPSocket + 0x181c ----
class CPeer : public TCPSocket
{
public:
    CPeer();
    ~CPeer();
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    TCPSocket* GetTcpSocket();
    int get_remain_sendlen();
    int recv_packet();
    int send_packet();
    int send_packet(char* buf, int len);
    void InitPeer(TcpRecvQueue* recvQ, CMutex* qLock, CMutex* bLock);
    int parsing(int len);
    void ConnSig();
    void DisConnSig();
    char RecvPacket();
    char* m_sendBuf;        // +0x181c
    int m_recvLen;          // +0x1820
    int m_sendLen;          // +0x1824
    TcpRecvQueue* m_recvQ;  // +0x1828
    CMutex* m_sendBLock;    // +0x182c
    CMutex* m_sendQLock;    // +0x1830
    int m_remainSendLen;    // +0x1834
    char* m_recvBuf;        // +0x1838
    char m_data183c[0x96004];  // +0x183c（sizeof(CPeer)=0x97840，与 MemPool 池大小一致）
};

// ---- CThreadInterface ----
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    virtual char begin();
    virtual void* dispatch_proxy(void* param);
    virtual void* dispatch(void* param) = 0;
    virtual void stop();
    virtual void join();
    pthread_t m_thread;  // +4
    char m_stop;         // +8
};

// ---- CTcpNetworkThread：0x30 ----
class CTcpNetworkThread : public CThreadInterface
{
public:
    CTcpNetworkThread();
    ~CTcpNetworkThread();
    void attach(CTcpNetSystem* net);
    void* dispatch(void* param);
    CTcpNetSystem* m_net;   // +0xc
    void* m_recvQ;          // +0x10
    CTcpHandler* m_handler; // +0x14
    CMutex* m_recvQLock;    // +0x18
    CMutex* m_recvBLock;    // +0x1c
    void* m_sendQ;          // +0x20
    CMutex* m_sendQLock;    // +0x24
    CMutex* m_sendBLock;    // +0x28
    char m_runningFlag;     // +0x2c
};

// ---- CTcpAcceptThread：0x38 ----
class CTcpAcceptThread : public CThreadInterface
{
public:
    CTcpAcceptThread();
    ~CTcpAcceptThread();
    void attach(CTcpNetSystem* net);
    void* dispatch(void* param);
    CTcpNetSystem* m_net;   // +0xc
    CMutex* m_recvQLock;    // +0x10
    CMutex* m_recvBLock;    // +0x14
    TCPSocket m_sock;       // +0x18
    unsigned short m_port;  // +0x34
};

// ---- CUdpNetworkThread：0x30 ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    void* dispatch(void* param);
    void SetUDPQueue(UdpRecvQueue* q);
    UdpRecvQueue* m_udpQueue;   // +0xc
    void* m_udpHandler;         // +0x10
    CMutex* m_udpQLock;         // +0x14
    CMutex* m_udpBLock;         // +0x18
};

// ---- CDBHandle / CMySql / CDBManager ----
class CDBHandle
{
public:
    CDBHandle();
    virtual ~CDBHandle();
    // 虚表顺序与原版完全一致（vptr+0x08 起）
    virtual char init() { return 0; }
    virtual char open(const char* host, const char* user, const char* pass, const char* db) { return 0; }
    virtual void close() {}
    virtual char ping() { return 0; }
    virtual int set_query(unsigned int q, char* fmt, ...) { return 0; }
    virtual int exec(unsigned int q) { return 0; }
    virtual int fetch() { return 0; }
    virtual char* blob_to_str(int col, void* buf, int len) { return 0; }
    virtual int get_str(int col, char* buf, int len) { return 0; }
    virtual int get_binary(int col, void* buf, int len) { return 0; }
    virtual int get_int(int col, int& v) { return 0; }
    virtual int get_uint(int col, unsigned int& v) { return 0; }
    virtual int get_short(int col, int& v) { return 0; }
    virtual int get_short(int col, short& v) { return 0; }
    virtual int get_ushort(int col, int& v) { return 0; }
    virtual int get_ushort(int col, unsigned short& v) { return 0; }
    virtual int get_byte(int col, int& v) { return 0; }
    virtual int get_byte(int col, char& v) { return 0; }
    virtual int get_ubyte(int col, int& v) { return 0; }
    virtual int get_ubyte(int col, unsigned char& v) { return 0; }
    virtual int get_n_fields() { return 0; }
    virtual int get_n_rows() { return 0; }
    virtual void clear_result_set() {}
    // 以下为原版非虚成员
    char init_db_handle();
    char set_compress_option();
    char set_read_default_grp_option();
    char is_valid_col(int col);
    int exec_query();
};

class CMySql : public CDBHandle
{
public:
    CMySql();
    virtual ~CMySql();
    virtual char init();
    char open(const char* host, const char* user, const char* pass, const char* db);
    void close();
    char init_db_handle();  // 非虚
    int exec_query();       // 非虚
    int set_query(unsigned int q, char* fmt, ...);
    int exec(unsigned int q);
    int fetch();
    void clear_result_set();
    char* blob_to_str(int col, void* buf, int len);
    int get_str(int col, char* buf, int len);
    int get_binary(int col, void* buf, int len);
    int get_int(int col, int& v);
    int get_uint(int col, unsigned int& v);
    int get_short(int col, int& v);
    int get_short(int col, short& v);
    int get_ushort(int col, int& v);
    int get_ushort(int col, unsigned short& v);
    int get_byte(int col, int& v);
    int get_byte(int col, char& v);
    int get_ubyte(int col, int& v);
    int get_ubyte(int col, unsigned char& v);
    int get_n_rows();   // 虚（虚表 vptr+0x5c）
    int get_n_fields(); // 虚（虚表 vptr+0x58）
    char is_valid_col(int col); // 非虚
    char set_compress_option(); // 非虚
    char set_read_default_grp_option(); // 非虚
    char ping();        // 虚（虚表 vptr+0x14）
    MYSQL* m_mysql;   // +4
    MYSQL_RES* m_result;  // +8
    MYSQL_ROW m_row;      // +0xc
    unsigned long* m_lengths;  // +0x10
    int m_nRows;      // +0x14
    int m_nFields;    // +0x18
    char m_query[0x1001];  // +0x1c（memset 0x1001 证实）
    char m_blob[10][0x1001];  // +0x101d（blob 索引按 0x1001 步长）
    unsigned int m_queryLen;  // +0xb028
    unsigned int m_lastErrno; // +0xb02c
};

class CDBManager
{
public:
    CDBManager();
    ~CDBManager();
    void Open(ENUM_DB_HANDLE_IDX idx, const char* host, const char* user, const char* pass, const char* db);
    void Init(ENUM_DB_KIND kind, CApplication* app);
    void Close();
    CDBHandle* GetDBHandle(ENUM_DB_HANDLE_IDX idx);
    char UpdateQueryCount(unsigned int idx, int count, int time);
    char SelectTest();
    CDBHandle* m_handles[0x10];  // +0
    CApplication* m_app;  // +0x44
};

// ---- CSignal ----
class CSignal
{
public:
    CSignal();
    virtual ~CSignal();
    virtual void handle(int sig) {}
    void attachApp(CApplication* app);
    void dump_core_file();
    CApplication* m_app;  // +4
};

class CTerminateSig : public CSignal
{
public:
    CTerminateSig();
    virtual ~CTerminateSig();
    virtual void handle(int sig);
};
class CSystemFailSig : public CSignal
{
public:
    CSystemFailSig();
    virtual ~CSystemFailSig();
    virtual void handle(int sig);
};
class CSegmentationFaultSig : public CSignal
{
public:
    CSegmentationFaultSig();
    virtual ~CSegmentationFaultSig();
    virtual void handle(int sig);
};
class CFloatingPointExceptSig : public CSignal
{
public:
    CFloatingPointExceptSig();
    virtual ~CFloatingPointExceptSig();
    virtual void handle(int sig);
};
class CUser1Sig : public CSignal
{
public:
    CUser1Sig();
    virtual ~CUser1Sig();
    virtual void handle(int sig);
};
class CUser2Sig : public CSignal
{
public:
    CUser2Sig();
    virtual ~CUser2Sig();
    virtual void handle(int sig);
};

// ---- CSignalTranslator ----
class CSignalTranslator
{
public:
    CSignalTranslator();
    ~CSignalTranslator();
    char regist_signal(int sig, void (*handler)(int));
    void clear();
    void init_signal();
    void init_handler(CApplication* app);
    void init(CApplication* app);
    CSignal* getSignal(int idx) const;
    CSignal* m_signals[0x1a];  // +0（0x68 字节）
};

CSignalTranslator* CSignalTranslatorInstance();
void signal_handler(int sig);

// ---- CTableBase / CAppInit / CAppConfig ----
// ---- ST_ServerInfo ----
struct ST_ServerInfo
{
    ST_ServerInfo();
    ~ST_ServerInfo();
    char m_index;      // +0
    char m_type;       // +1
    char m_pad2[2];
    std::string m_name;  // +4
    unsigned short m_port;  // +8
    char m_padA[2];
};

class CTableBase
{
public:
    CTableBase();
    virtual ~CTableBase();
    virtual int Load_Txt_Table_Data(const char* fileName, int idx);
    virtual int Parse_Table(char* data, int size) { return 0; }
};

class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
    virtual void Init(CApplication* app, int argc, char** argv) {}
};

class CAppStartInit : public CAppInit
{
public:
    CAppStartInit();
    virtual ~CAppStartInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    int Init_Daemon(int argc, char** argv);
    int Save_pid(const std::string& path);
};

class CAppStopInit : public CAppInit
{
public:
    CAppStopInit();
    virtual ~CAppStopInit();
    virtual void Init(CApplication* app, int argc, char** argv);
};

class CAppConfig : public CTableBase
{
public:
    CAppConfig();
    virtual ~CAppConfig();
    virtual int Load_Txt_Table_Data(const char* fileName, int idx);
    int Load_Table(const std::string& fileName);
    int Parse_Table(char* data, int size);
    int Check_FileName(const std::string& fileName);
    int Get_ServerUdpPort();
    int Get_ServerTcpPort();
    unsigned char Get_FrameCountValue();
    char m_frameCount;      // +4
    char m_pad5[3];
    int m_serverUdpPort;    // +8
    int m_serverTcpPort;    // +0xc
};

class CServerConfig : public CTableBase
{
public:
    CServerConfig();
    virtual ~CServerConfig();
    virtual int Load_Txt_Table_Data(const char* fileName, int idx);
    int Load_Table(const std::string& fileName);
    int Parse_Table(char* data, int size);
    void* GetServerInfo();
    ST_ServerInfo m_servers[0x64];  // +4（100 × 0xc = 0x4b0，至 0x4b4）
    char m_data[0x4c0 - 0x4b4];     // 至 0x4c0
};

// ---- ST_KillUSRConfig：0x10 ----
class ST_KillUSRConfig
{
public:
    ST_KillUSRConfig();
    int m_type;    // +0
    int m_field4;  // +4
    int m_field8;  // +8
    int m_fieldC;  // +0xc
};

class CKillUSRConfig : public CTableBase
{
public:
    CKillUSRConfig();
    virtual ~CKillUSRConfig();
    int Load_Table(const std::string& fileName);
    int Parse_Table(char* data, int size);
    void Clear_Table();
    void* GetInfo() const;
    std::vector<ST_KillUSRConfig*> m_list;  // +4（sizeof=0x10）
};

// ---- CVersionMgr ----
class CVersionMgr
{
public:
    CVersionMgr(int a, int b, int c, int d);
    int m_versions[4];  // +0
};

// ---- CSourceVersionMgr ----
class CSourceVersionMgr
{
public:
    class SourceVersion
    {
    public:
        SourceVersion(char* name, int version);
        SourceVersion(const SourceVersion& other);
        SourceVersion& operator=(const SourceVersion& other);
        ~SourceVersion();
        std::string m_name;  // +0
        int m_version;       // +4
    };
    CSourceVersionMgr();
    ~CSourceVersionMgr();
    void InsertSourceVersion(char* name, int version);
    std::vector<SourceVersion> m_versions;  // +0
};

// ---- CQueryCounter ----
class CQueryCounter
{
public:
    CQueryCounter();
    ~CQueryCounter();
    void IncreQureyCount(unsigned int idx);
    void ResetQueryCount();
    void SetResponseTime(unsigned int ms);
    void WriteFileLog();
    void WriteDBLog(CDBManager& db);
    unsigned int m_counts[0x141];  // +0（0x504 字节）
    double m_responseTimes[0x141]; // +0x504（0xa08 字节）
    int m_interval;  // +0xf0c
    CUnixTimer* m_timer;  // +0xf10
};

CQueryCounter* CQueryCounterInstance();

// ---- CPacketTracer ----
class CPacketTracer
{
public:
    CPacketTracer();
    ~CPacketTracer();
    void AddLog(int type, int len);
    void WriteLog();
    void AbsoluteWriteLog();
    void ResetLog();
    int m_field0;      // +0
    std::string m_log; // +4
};

CPacketTracer* CPacketTracerInstance();

// ---- CPacketDecoder ----
class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Process();
    void Attach(CApplication* app);
    void SetTCPQueue(TcpRecvQueue* q);
    void SetUdpQueue(UdpRecvQueue* q);
    void TcpProcess();
    void UdpProcess();
    char MsgDecode(PacketHeader* header);
    TcpRecvQueue* m_tcpQueue;  // +0
    CMutex* m_tcpRecvQLock;    // +4
    CMutex* m_tcpRecvBLock;    // +8
    UdpRecvQueue* m_udpQueue;  // +0xc
    CMutex* m_udpQLock;        // +0x10
    CMutex* m_udpBLock;        // +0x14
    char m_table[0xa018 - 0x18];  // +0x18（0x3e8..0x27ff 表项）
};

CPacketDecoder* CPacketDecoderInstance();

int parse_string(std::vector<std::string>& v, std::string& s, char c);

// ---- packet 类（统一使用 shared/packet/include 共享定义）----
#include "Packet_InnerPakcet_Login.h"
#include "Packet_InnerPakcet_Logout.h"
#include "Packet_Monitor_Event_Start.h"
#include "Packet_Monitor_Event_End.h"
#include "Packet_Monitor_Manager_Connect_OK.h"
#include "Packet_Web_Notice_Single.h"
#include "Packet_Web_Notice_InGame_Advertisement.h"
#include "Packet_Web_Prohibit_User_Connect.h"

class CommonTime
{
public:
    void SetCurTime();
    char m_year;   // +0
    char m_mon;    // +1
    char m_mday;   // +2
    char m_hour;   // +3
    char m_min;    // +4
    char m_sec;    // +5
};

// ---- CPacketTranslater（静态 handler + 全局 m_pclApp）----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
    static void OnInnerPacketLogin(PacketHeader* header);
    static void OnInnerPacketLogout(PacketHeader* header);
    static void OnEventStart(PacketHeader* header);
    static void OnEventEnd(PacketHeader* header);
    static void OnHeartBeat(PacketHeader* header);
    static void OnTcpServerLogin(PacketHeader* header);
    static void OnTcpServerLogout(PacketHeader* header);
    static void OnTcpServerHeartbeat(PacketHeader* header);
    static void OnCommonPacket(PacketHeader* header);
    static void OnWebNoticeInGameAD(PacketHeader* header);
    static void OnWebNoticeBroadcast(PacketHeader* header);
    static void OnWebNoticeProhibitConnectUser(PacketHeader* header);
    static void OnMonitorNoticeProhibitConnectUser(PacketHeader* header);
    static CApplication* m_pclApp;
};

// ---- CServerHandler（最小：+0x7e4 m_app）----
class CServerHandler
{
public:
    CServerHandler();
    virtual ~CServerHandler();
    void Attach(CApplication* app);
    void SetMonitorServerIpPort(unsigned char idx, unsigned int ip, unsigned short port);
    void SendToMonitorServer(char* buf, int len, unsigned char idx);
    void SendToTcpServer(PacketHeader* header, unsigned char idx);
    void SendToTcpServer(char* buf, int len, unsigned char idx);
    void SendAllTcpServer(PacketHeader* header);
    void SendAllToMonitorServer(char* buf, int len);
    char CreateTcpServer(unsigned char idx, unsigned int port);
    char DeleteTcpServer(unsigned char idx);
    void Process();
    void Load(ST_ServerInfo* info);
    CTcpServer* GetTcpServer(unsigned int idx);
    CTcpServer* GetTcpServer(unsigned char idx);
    CMonitorServer* GetMonitorServer(int idx);
    int GetAlivedMonitorServer();
    void ResetHeartBeat(unsigned char idx);
    char IsConnectedMonitorServer(unsigned char idx);
    void CheckTcpServerHeartbeat();
    void SetConnectFlag(unsigned char idx, bool flag);
    CMonitorServer m_monitorServers[0x65];  // +0（101 × 0x14 = 0x7e4）
    CApplication* m_app;  // +0x7e4
    std::map<unsigned int, CTcpServer*> m_tcpServers;  // +0x7e8
    char m_pad[4];        // +0x800（sizeof=0x804）
};

#endif  // MANAGER_TYPES_H_
