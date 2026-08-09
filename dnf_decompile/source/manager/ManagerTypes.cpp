#include "ManagerTypes.h"
#include "ManagerApp.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/resource.h>
#include <signal.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/times.h>

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

int getErrno();

// ============================================================
// 全局对象池（原版 .bss 地址：0x82b5808 / 0x82b581c / 0x82b5830 /
// 0x82b5844 / 0x82b58f8 / 0x82c0b8c；计数见全局初始化反汇编）
// ============================================================
template<class T> void* MemPool<T>::headOfFreeList_;

template<class T>
MemPool<T>::MemPool() {}

template<class T>
MemPool<T>::MemPool(unsigned int count) : m_size((int)sizeof(T)), m_count((int)count) {}

template<class T>
MemPool<T>::~MemPool()
{
    for (std::vector<void*>::iterator it = m_blocks.begin(); it != m_blocks.end(); ++it)
        ::operator delete(*it);
}

template<class T>
void* MemPool<T>::alloc()
{
    void* result;
    if (m_size == (int)sizeof(T))
    {
        void* head = headOfFreeList_;
        if (head == 0)
        {
            void* block = ::operator new((unsigned int)m_size * (unsigned int)m_count);
            for (unsigned int i = 0; i < (unsigned int)m_count - 1; i++)
            {
                *(void**)((char*)block + i * m_size + m_size - 4) =
                    (void*)((i + 1) * m_size + (unsigned int)block);
            }
            *(void**)((char*)block + ((unsigned int)m_count - 1) * m_size + m_size - 4) = 0;
            headOfFreeList_ = (void*)((char*)block + m_size);
            head = block;
            m_blocks.push_back(block);
            CMyFileLog log("alloc", 0x7d);
            log("./log/Mempool", "class size(%d) cnt(%d)", m_size,
                m_count * (int)m_blocks.size());
        }
        else
        {
            headOfFreeList_ = *(void**)((char*)head + m_size - 4);
        }
        result = head;
    }
    else
    {
        result = ::operator new(sizeof(T));
    }
    return result;
}

template<class T>
void MemPool<T>::free(void* ptr, unsigned int size)
{
    if (ptr != 0)
    {
        if ((unsigned int)m_size == size)
        {
            *(void**)((char*)ptr + m_size - 4) = headOfFreeList_;
            headOfFreeList_ = ptr;
        }
        else
        {
            ::operator delete(ptr);
        }
    }
}

template<class T>
void MemPool<T>::free(void* ptr)
{
    if (ptr != 0)
    {
        *(void**)((char*)ptr + m_size - 4) = headOfFreeList_;
        headOfFreeList_ = ptr;
    }
}

MemPool<CUdpRecvBuffer> g_udpRecvPool(10000);
MemPool<CTcpRecvBuffer> g_tcpRecvPool(1000);
MemPool<CTcpSendBuffer> g_tcpSendPool(1000);
MemPool<CPacketBuffer> g_packetBufferPool(1000);
MemPool<CPeer> g_peerPool(1000);
MemPool<CDNFProhibitUser> g_prohibitUserPool(10000);

template class MemPool<CUdpRecvBuffer>;
template class MemPool<CTcpRecvBuffer>;
template class MemPool<CTcpSendBuffer>;
template class MemPool<CPacketBuffer>;
template class MemPool<CPeer>;
template class MemPool<CDNFProhibitUser>;

void* CUdpRecvBuffer::operator new(unsigned int size) { return g_udpRecvPool.alloc(); }
void CUdpRecvBuffer::operator delete(void* ptr) { g_udpRecvPool.free(ptr); }
void CUdpRecvBuffer::operator delete(void* ptr, unsigned int size) { g_udpRecvPool.free(ptr, size); }

void* CTcpRecvBuffer::operator new(unsigned int size) { return g_tcpRecvPool.alloc(); }
void CTcpRecvBuffer::operator delete(void* ptr) { g_tcpRecvPool.free(ptr); }
void CTcpRecvBuffer::operator delete(void* ptr, unsigned int size) { g_tcpRecvPool.free(ptr, size); }

void* CTcpSendBuffer::operator new(unsigned int size) { return g_tcpSendPool.alloc(); }
void CTcpSendBuffer::operator delete(void* ptr) { g_tcpSendPool.free(ptr); }
void CTcpSendBuffer::operator delete(void* ptr, unsigned int size) { g_tcpSendPool.free(ptr, size); }

void* CPacketBuffer::operator new(unsigned int size) { return g_packetBufferPool.alloc(); }
void CPacketBuffer::operator delete(void* ptr) { g_packetBufferPool.free(ptr); }
void CPacketBuffer::operator delete(void* ptr, unsigned int size) { g_packetBufferPool.free(ptr, size); }

void* CPeer::operator new(unsigned int size) { return g_peerPool.alloc(); }
void CPeer::operator delete(void* ptr) { g_peerPool.free(ptr); }
void CPeer::operator delete(void* ptr, unsigned int size) { g_peerPool.free(ptr, size); }

void* CDNFProhibitUser::operator new(unsigned int size) { return g_prohibitUserPool.alloc(); }
void CDNFProhibitUser::operator delete(void* ptr) { g_prohibitUserPool.free(ptr); }
void CDNFProhibitUser::operator delete(void* ptr, unsigned int size) { g_prohibitUserPool.free(ptr, size); }

// ============================================================
// IQueue / CSwapQueue
// ============================================================
template<class T>
IQueue<T>& IQueue<T>::Get()
{
    static IQueue instance;
    return instance;
}

template<class T>
char IQueue<T>::SwitchQueue()
{
    if (m_recv->empty())
        return 0;
    T* tmp = m_recv;
    m_recv = m_parse;
    m_parse = tmp;
    return 1;
}

template<class T, int N>
void CSwapQueue<T, N>::SwapQ()
{
    int t = m_recvIdx;
    m_recvIdx = m_parseIdx;
    m_parseIdx = t;
}

template class IQueue<TcpRecvQueue>;
template class IQueue<UdpRecvQueue>;
template class CSwapQueue<TcpRecvQueue, 2>;
template class CSwapQueue<UdpRecvQueue, 2>;

// ============================================================
// CSystemTime / CSystemTimeHandler
// ============================================================
CSystemTime::CSystemTime()
{
    gettimeofday(&m_tv, 0);
    m_field10 = m_tv.tv_sec;
    m_field4 = m_tv.tv_usec / 1000000;
}

static CSystemTimeHandler g_systemTimeHandler;

CSystemTimeHandler* CSystemTimeHandlerInstance()
{
    return &g_systemTimeHandler;
}

// ============================================================
// CDnFTimer / CUnixTimer
// ============================================================
CDnFTimer::CDnFTimer() {}

CUnixTimer::CUnixTimer() {}

double CUnixTimer::GetNowTime()
{
    struct timeval tv;
    gettimeofday(&tv, 0);
    return tv.tv_sec + tv.tv_usec / 1000000.0;
}

double CUnixTimer::GetTimeInterval()
{
    return GetNowTime() - m_lastTime;
}

void CUnixTimer::SetLastTime()
{
    m_lastTime = GetNowTime();
}

// ============================================================
// CFrameCountHandler / CUdpHandler（占位，本批仅 C1/D1）
// ============================================================
CFrameCountHandler::CFrameCountHandler() {}
CFrameCountHandler::~CFrameCountHandler() {}

void CFrameCountHandler::SaveProcess()
{
    m_field28++;
    if (m_field28 != 0)
    {
        CMyFileLog log("SaveProcess", 0xa8);
        log("./log/frame", "FPS(%02d) / DFC(%02d)\n", m_field18, m_field4);
        m_field28 = 0;
    }
}

void CFrameCountHandler::SaveProcess(int n)
{
    m_field28++;
    if (m_field28 != 0)
    {
        CMyFileLog log("SaveProcess", 0xb8);
        log("./log/frame", "Thread(%2d) / FPS(%02d) / DFC(%02d)", n, m_field18, m_field4);
        m_field28 = 0;
    }
}

void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int a, unsigned short b)
{
    if (!a)
        throw CDNFException("CFrameCountHandler::InitFrameCountInfo() Exception Break!");
    m_app = app;
    memset(this, 0, 0x28);
    m_field4 = a;
    m_field8 = 100 / a;
}

void* CFrameCountHandler::GetFrameCountInfo()
{
    struct tms tms;
    m_field24 = 0;
    if (!m_field0[0])
    {
        m_field0[0] = 1;
        m_field14 = 0;
        m_fieldC = times(&tms);
        if (m_fieldC == (unsigned int)-1)
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        return this;
    }
    m_field10 = times(&tms);
    if (m_field10 == -1)
        throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
    if (m_fieldC > (unsigned int)m_field10)
        m_fieldC = m_field10;
    unsigned int diff = m_field10 - m_fieldC;
    unsigned int frame = diff / m_field8;
    if (m_field14 < frame)
    {
        m_field14++;
        m_field24 = 1;
    }
    if (diff > 0x63)
    {
        m_field18 = m_field14;
        m_field24 = 2;
        m_field14 = 0;
        m_fieldC = m_field10 - diff + 0x64;
        m_field20 = 0;
        m_field25++;
        if (m_field25 > 0x3b)
        {
            m_field24 = 3;
            m_field25 = 0;
            m_field26++;
            if (m_field26 > 0x3b)
            {
                m_field24 = 4;
                m_field26 = 0;
            }
        }
    }
    return this;
}

CUdpHandler::CUdpHandler() {}
CUdpHandler::~CUdpHandler() {}

int CUdpHandler::InitServerSocket(int port)
{
    m_sock = socket(AF_INET, SOCK_DGRAM, 0x11);
    if (m_sock == -1)
    {
        printf("Could not create a UDP socket : %d\n", getErrno());
        return -1;
    }
    struct sockaddr_in addr;
    memset(&addr, 0, 0x10);
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(0);
    addr.sin_port = htons(port);
    if (::bind(m_sock, (struct sockaddr*)&addr, 0x10) != 0)
    {
        int e = getErrno();
        if (e == 0x62)
            printf("Port %d for receiving UDP is in use\n", port);
        else if (e == 0x63)
            puts("Cannot assign requested address");
        else if (e != 0)
            printf("Could not bind UDP receive port. Error= %d , strerror = %s\n",
                   e, strerror(e));
        m_sock = -1;
    }
    int bufsize = 0xf4240;
    setsockopt(m_clientSock, SOL_SOCKET, SO_RCVBUF, &bufsize, 4);
    CMyFileLog log("InitServerSocket", 0x6e);
    log("./log/Udp", "Opened port %d with fd %d, recv buf size %d\n", port, m_sock, bufsize);
    return m_sock;
}

int CUdpHandler::InitClientSocket()
{
    m_clientSock = socket(AF_INET, SOCK_DGRAM, 0x11);
    if (m_clientSock == -1)
    {
        printf("udp client socket error : %d", getErrno());
        return -1;
    }
    CMyFileLog log("CUdpHandler::InitClientSocket", 0x8f);
    log("./log/UdpClient", "udp client socket = %d", m_clientSock);
    return m_clientSock;
}

int CUdpHandler::SendToServer(char* buf, int len, unsigned short port, const char* ip) const
{
    if (m_clientSock == -1)
        return 0;
    int n;
    if (port == 0 && ip == 0)
    {
        n = send(m_clientSock, buf, len, 0);
    }
    else
    {
        struct sockaddr_in addr;
        memset(&addr, 0, 0x10);
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = inet_addr(ip);
        n = sendto(m_clientSock, buf, len, 0, (struct sockaddr*)&addr, 0x10);
    }
    if (n == -1)
    {
        int e = getErrno();
        if (e == 0x61)
        {
            CMyFileLog log("SendToServer", 0x1b8);
            log("./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", e);
        }
        else if (e >= 0x6f && e <= 0x71)
        {
            CMyFileLog log("SendToServer", 0x1b2);
            log("./log/UdpErr", "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", e);
        }
        else
        {
            CMyFileLog log("SendToServer", 0x1be);
            log("./log/UdpErr", "err = %d , strerror = %s in send\n", e, strerror(e));
        }
        return 0;
    }
    if (n == 0)
    {
        CMyFileLog log("SendToServer", 0x1c7);
        log("./log/UdpErr", "no data sent in send\n");
        return 0;
    }
    if (n != len)
    {
        CMyFileLog log("SendToServer", 0x1ce);
        log("./log/UdpErr", "Only %d out of %d bytes sent\n", n, len);
        return 0;
    }
    return 1;
}

int CUdpHandler::SendToClient(char* buf, int len, unsigned short port, const char* ip,
                              unsigned int addr) const
{
    if (!ip && !addr)
        return 0;
    if (ip)
        addr = inet_addr(ip);
    if (m_sock == -1)
        return 0;
    int n;
    if (port == 0 && addr == 0)
    {
        n = send(m_sock, buf, len, 0);
    }
    else
    {
        struct sockaddr_in to;
        memset(&to, 0, 0x10);
        to.sin_family = AF_INET;
        to.sin_port = htons(port);
        to.sin_addr.s_addr = ntohl(addr);
        n = sendto(m_sock, buf, len, 0, (struct sockaddr*)&to, 0x10);
    }
    if (n == -1)
    {
        int e = getErrno();
        if (e == 0x61)
        {
            puts("err EAFNOSUPPORT in send");
            CMyFileLog log("SendToClient", 0x119);
            log("./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", e);
        }
        else if (e >= 0x6f && e <= 0x71)
        {
            printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", e);
            CMyFileLog log("SendToClient", 0x113);
            log("./log/UdpErr", "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", e);
        }
        else
        {
            printf("err = %d , strerror = %s in send\n", e, strerror(e));
            CMyFileLog log("SendToClient", 0x11f);
            log("./log/UdpErr", "err = %d , strerror = %s in send\n", e, strerror(e));
        }
        return 0;
    }
    if (n == 0)
    {
        puts("no data sent in send");
        CMyFileLog log("SendToClient", 0x128);
        log("./log/UdpErr", "no data sent in send\n");
        return 0;
    }
    if (n != len)
    {
        printf("Only %s out of %d bytes sent\n", (const char*)n, len);
        CMyFileLog log("SendToClient", 0x133);
        log("./log/UdpErr", "Only %d out of %d bytes sent\n", n, len);
        return 0;
    }
    return 1;
}

char CUdpHandler::RecvFromClient(char* buf, int* size, unsigned int* addr,
                                 unsigned short* port) const
{
    if (m_sock == -1)
        return 0;
    struct sockaddr_in from;
    socklen_t len = 0x10;
    *size = recvfrom(m_sock, buf, *size, 0, (struct sockaddr*)&from, &len);
    if (*size == -1)
    {
        int e = getErrno();
        if (e == 0x58)
        {
            puts("Error fd not a socket");
            CMyFileLog log("RecvFromClient", 0xaf);
            log("./log/UdpErr", "Error fd not a socket\n");
        }
        else if (e == 0x68)
        {
            puts("Error connection reset - host not reachable");
            CMyFileLog log("RecvFromClient", 0xb6);
            log("./log/UdpErr", "Error connection reset - host not reachable\n");
        }
        else
        {
            printf("Hm! Time out Or Socket Error = %d\n", e);
        }
        return 0;
    }
    if (*size <= 0)
    {
        printf("Socket closed? Recv size = %d\n", *size);
        CMyFileLog log("RecvFromClient", 0xc6);
        log("./log/UdpErr", "Socket closed? Recv size = %d\n", *size);
        return 0;
    }
    *port = ntohs(from.sin_port);
    *addr = ntohl(from.sin_addr.s_addr);
    if (*(unsigned short*)buf == 0x4c8 || *(unsigned short*)buf == 0x4c9 ||
        *(unsigned short*)buf == 0x44f || *(unsigned short*)buf == 0x450)
    {
        CMyFileLog log("RecvFromClient", 0xd1);
        log("./log/Udp", "PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",
            *(unsigned short*)buf, inet_ntoa(from.sin_addr), *port, *size);
        buf[*size] = 0;
        return 1;
    }
    return 0;
}

char CUdpHandler::RecvFromServer(char* buf, int* size, unsigned int* addr,
                                 unsigned short* port) const
{
    if (m_clientSock == -1)
        return 0;
    struct sockaddr_in from;
    socklen_t len = 0x10;
    *size = recvfrom(m_clientSock, buf, *size, 0, (struct sockaddr*)&from, &len);
    if (*size == -1)
    {
        int e = getErrno();
        if (e == 0x58)
        {
            puts("Error fd not a socket");
            CMyFileLog log("RecvFromServer", 0x156);
            log("./log/UdpErr", "Error fd not a socket\n");
        }
        else if (e == 0x68)
        {
            puts("Error connection reset - host not reachable");
            CMyFileLog log("RecvFromServer", 0x15d);
            log("./log/UdpErr", "Error connection reset - host not reachable\n");
        }
        else
        {
            printf("Hm! Time out Or Socket Error = %d\n", e);
        }
        return 0;
    }
    if (*size <= 0)
    {
        printf("Socket closed? Recv size = %d\n", *size);
        CMyFileLog log("RecvFromServer", 0x16d);
        log("./log/UdpErr", "Socket closed? Recv size = %d\n", *size);
        return 0;
    }
    *port = ntohs(from.sin_port);
    *addr = ntohl(from.sin_addr.s_addr);
    if (*(unsigned short*)buf == 0x4c8 || *(unsigned short*)buf == 0x4c9 ||
        *(unsigned short*)buf == 0x44f || *(unsigned short*)buf == 0x450)
    {
        CMyFileLog log("RecvFromServer", 0x178);
        log("./log/Udp", "PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",
            *(unsigned short*)buf, inet_ntoa(from.sin_addr), *port, *size);
        buf[*size] = 0;
        return 1;
    }
    return 0;
}

// ============================================================
// CUserManager
// ============================================================
CUserManager::CUserManager()
{
    m_app = 0;
}

CUserManager::~CUserManager()
{
    for (std::map<unsigned int, CDNFProhibitUser*>::const_iterator it = m_prohibitUsers.begin();
         it != m_prohibitUsers.end(); ++it)
    {
        CDNFProhibitUser* pu = it->second;
        if (pu)
        {
            delete pu;
        }
    }
    m_prohibitUsers.clear();
}

void CUserManager::Init(CApplication* app)
{
    m_app = app;
}

char CUserManager::InsertProhibitUser(unsigned int dbid, CDNFProhibitUser* pu)
{
    if (!pu)
        return 0;
    return m_prohibitUsers.insert(std::make_pair(dbid, pu)).second;
}

CDNFProhibitUser* CUserManager::FindProhibitUser(unsigned int dbid) const
{
    std::map<unsigned int, CDNFProhibitUser*>::const_iterator it = m_prohibitUsers.find(dbid);
    if (it == m_prohibitUsers.end())
        return 0;
    return it->second;
}

char CUserManager::DeleteProhibitUser(unsigned int dbid)
{
    if (m_prohibitUsers.empty())
        return 0;
    CDNFProhibitUser* pu = FindProhibitUser(dbid);
    if (pu && m_prohibitUsers.erase(dbid) == 1)
    {
        delete pu;
        return 1;
    }
    return 0;
}

void CUserManager::ProcessByMinute()
{
    if (m_prohibitUsers.empty())
        return;
    for (std::map<unsigned int, CDNFProhibitUser*>::iterator it = m_prohibitUsers.begin();
         it != m_prohibitUsers.end();)
    {
        CDNFProhibitUser* pu = it->second;
        if (pu && pu->IsTimeOutWaitMonitor())
        {
            CMyFileLog log("ProcessByMinute", 0x43);
            log("./log/ProhibitUser",
                "[PROHIBIT CONNECT USER TIME_OUT] Prohibit User DB ID : %d. Remain time(%d)\n",
                pu->GetDBID(), pu->GetProhibitRemainTime());
            delete pu;
            m_prohibitUsers.erase(it++);
        }
        else
        {
            ++it;
        }
    }
}

// ============================================================
// CDNFProhibitUser
// ============================================================
CDNFProhibitUser::CDNFProhibitUser()
{
    m_dbid = 0xffffffff;
    m_remainTime = 0;
    m_retPacketCnt = 0;
    m_ip = 0;
    m_port = 0;
    m_connectFlag = 0;
}

CDNFProhibitUser::~CDNFProhibitUser()
{
    m_remainTime = 0;
    m_dbid = 0xffffffff;
    m_retPacketCnt = 0;
    m_ip = 0;
    m_port = 0;
    m_connectFlag = 0;
}

void CDNFProhibitUser::SetIpPort(unsigned int ip, unsigned short port)
{
    m_ip = ip;
    m_port = port;
}

void CDNFProhibitUser::GetIpPort(unsigned int& ip, unsigned short& port)
{
    ip = m_ip;
    port = m_port;
}

void CDNFProhibitUser::SetMonitorWaitTime(unsigned int dbid, short time)
{
    m_remainTime = time;
    m_dbid = dbid;
}

void CDNFProhibitUser::SetProhibitUserInfo(char flag)
{
    if (flag)
        m_connectFlag = flag;
}

// ============================================================
// CMonitorServer
// ============================================================
CMonitorServer::CMonitorServer()
{
    m_index = 0xff;
    m_name = "";
    m_port = 0;
    m_connected = 0;
    m_heartBeat = 0x14;
    m_fieldC = 0;
    m_udpHandler = 0;
}

CMonitorServer::~CMonitorServer() {}

char CMonitorServer::IsValidMonitorServer()
{
    return m_index != 0xff;
}

void CMonitorServer::SendToServer(char* buf, int len)
{
    if (m_udpHandler)
        m_udpHandler->SendToServer(buf, len, m_port, m_name.c_str());
}

void CMonitorServer::Init(std::string& name, unsigned short port, unsigned char flag)
{
    m_name = name;
    m_port = port;
    m_udpHandler = new CUdpHandler;
    m_udpHandler->InitClientSocket();
    m_index = flag;
}

// ============================================================
// CTcpServer
// ============================================================
CTcpServer::CTcpServer()
{
    m_index = 0;
    m_socket = 0;
    m_net = 0;
    m_heartbeat = 0;
}

CTcpServer::~CTcpServer()
{
    m_socket = 0;
    m_net = 0;
    m_index = 0;
    m_heartbeat = 0;
}

void CTcpServer::Init(unsigned int sock, CTcpNetSystem* net)
{
    m_socket = (void*)sock;
    m_net = net;
}

char CTcpServer::IsValidServer()
{
    return m_socket != 0 && m_net != 0;
}

char CTcpServer::IsHeartbeatTimeOver()
{
    time_t now;
    time(&now);
    if (m_heartbeat && now - m_heartbeat > 0x3b)
        return 1;
    return 0;
}

void CTcpServer::SendToServer(char* buf)
{
    m_net->PushTcpSendPacketQ(buf);
}

// ============================================================
// CTcpNetSystem
// ============================================================
CTcpNetSystem::CTcpNetSystem()
{
    m_tcpHandler = 0;
    m_field4 = 0;
    m_acceptThread = 0;
    m_serverPort = 0;
}

CTcpNetSystem::~CTcpNetSystem() {}

void CTcpNetSystem::Init(unsigned short port)
{
    m_serverPort = port;
    m_tcpHandler = new CTcpHandler;
    m_acceptThread = new CTcpAcceptThread;
    m_acceptThread->attach(this);
    if (!m_acceptThread->begin())
        throw 1;
    m_field4 = new CTcpNetworkThread;
    ((CTcpNetworkThread*)m_field4)->attach(this);
    if (!((CTcpNetworkThread*)m_field4)->begin())
        throw 1;
}

int CTcpNetSystem::OpenTcpService(int& serverCount, const char* ip, unsigned short port)
{
    CPeer* peer = CreatePeer();
    TCPSocket* sock = peer->GetTcpSocket();
    if (!sock->open())
    {
        puts("Tcp Open Socket Err");
        CMyFileLog log("OpenTcpService", 0x118);
        log("./log/TcpConnect", "Tcp Open Socket Err");
        DeletePeer(peer);
        return 0;
    }
    if (!sock->connect(ip, port))
    {
        puts("Tcp Connect Err");
        CMyFileLog log("OpenTcpService", 0x123);
        log("./log/TcpConnect", "Tcp Connect Err(ip:%s, port:%d)", ip, port);
        DeletePeer(peer);
        return 0;
    }
    sock->setOptNonBlock();
    peer->InitPeer(m_recvSwapQueue.GetRecvQ(), Get_TcpRecvQLock(), Get_TcpRecvBLock());
    peer->ConnSig();
    SetEpollConnectedPeer(peer);
    serverCount = sock->getHandle();
    return 1;
}

int CTcpNetSystem::WaitForEvent()
{
    return m_tcpHandler->WaitForEvent();
}

void CTcpNetSystem::PushTcpSendPacketQ(char* buf)
{
    CGuard<CMutex> guard(&m_mutexE8);
    CTcpSendBuffer* p = (CTcpSendBuffer*)buf;
    m_sendQueue.push(p);
    int n = m_sendQueue.size();
    if (n > 0xa)
    {
        CMyFileLog log("PushTcpSendPacketQ", 0x91);
        log("./log/TcpSend", "SEND PUSH(cnt:%d,id:%d,size:%d,ip:%d)", n,
            (unsigned short)buf[0], (unsigned short)((unsigned short*)buf)[1],
            ((char*)buf)[6]);
    }
}

void CTcpNetSystem::CleanTcpSendPacketQ()
{
    while (!m_sendQueue.empty())
    {
        CTcpSendBuffer* p = m_sendQueue.front();
        m_sendQueue.pop();
        delete p;
    }
}

void CTcpNetSystem::CleanPeers()
{
    for (std::map<unsigned int, CPeer*>::iterator it = m_peerMap.begin();
         it != m_peerMap.end(); ++it)
    {
        CGuard<CMutex> guard(&m_mutex78);
        CPeer* peer = it->second;
        if (peer)
            delete peer;
    }
}

void CTcpNetSystem::DeletePeer(CPeer* peer)
{
    int fd = peer->GetTcpSocket()->getHandle();
    std::map<unsigned int, CPeer*>::iterator it = m_peerMap.find(fd);
    if (it != m_peerMap.end())
        m_peerMap.erase(it);
    CGuard<CMutex> guard(&m_mutex78);
    delete peer;
}
CPeer* CTcpNetSystem::GetPeer(unsigned int idx) { return 0; }
CPeer* CTcpNetSystem::CreatePeer()
{
    CGuard<CMutex> guard(&m_mutex78);
    return new CPeer;
}
void CTcpNetSystem::InsertAcceptedPeer(CPeer* peer)
{
    CGuard<CMutex> guard(&m_mutex60);
    m_peerQueue.push(peer);
}
void CTcpNetSystem::SetEpollConnectedPeer(CPeer* peer)
{
    CGuard<CMutex> guard(&m_mutex78);
    int fd = peer->GetTcpSocket()->getHandle();
    int ret = m_tcpHandler->SetPeer(peer, fd, 0);
    if (ret != 0)
    {
        printf("Epoll SetPeer fail(fd:%d, error:%d, %s)", fd, ret, strerror(ret));
        return;
    }
    m_peerMap[fd] = peer;
}
void CTcpNetSystem::SetEpollAcceptedPeers()
{
    CGuard<CMutex> guard(&m_mutex60);
    while (!m_peerQueue.empty())
    {
        CPeer* peer = m_peerQueue.front();
        int ret = m_tcpHandler->SetPeer(peer, peer->GetTcpSocket()->getHandle(), false);
        if (ret != 0)
        {
            printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",
                   peer->GetTcpSocket()->getHandle(), ret, strerror(ret));
        }
        int fd = peer->GetTcpSocket()->getHandle();
        m_peerMap.insert(std::make_pair(fd, peer));
        m_peerQueue.pop();
    }
}
void CTcpNetSystem::SendPacket()
{
    CGuard<CMutex> guard(&m_mutexE8);
    if (m_sendQueue.empty())
        return;
    CTcpSendBuffer* buf = m_sendQueue.front();
    if (!buf)
        return;
    int port = *(int*)((char*)buf + 6);
    std::map<unsigned int, CPeer*>::iterator it = m_peerMap.find(port);
    if (it == m_peerMap.end())
    {
        CMyFileLog log("CTcpNetSystem::SendPacket", 0xba);
        log("./log/TcpSend", "SEND FAIL(port:%d,id:%d,size:%d)",
            port, *(unsigned short*)((char*)buf),
            *(unsigned short*)((char*)buf + 2));
        PopDeleteTcpSendPacketQ(buf);
        return;
    }
    CPeer* peer = it->second;
    if (!peer)
    {
        CMyFileLog log("CTcpNetSystem::SendPacket", 0xba);
        log("./log/TcpSend", "SEND FAIL(port:%d,id:%d,size:%d)",
            port, *(unsigned short*)((char*)buf),
            *(unsigned short*)((char*)buf + 2));
        PopDeleteTcpSendPacketQ(buf);
        return;
    }
    if (peer->GetTcpSocket()->getHandle() == port)
    {
        CMyFileLog log("CTcpNetSystem::SendPacket", 0xc3);
        log("./log/TcpSend", "SEND FAIL(peer:%p, id:%d, size:%d, port:%d)",
            peer, *(unsigned short*)((char*)buf),
            *(unsigned short*)((char*)buf + 2), port);
        PopDeleteTcpSendPacketQ(buf);
        return;
    }
    int ret = peer->send_packet((char*)buf, *(unsigned short*)((char*)buf + 2));
    if (ret > 0)
    {
        PopDeleteTcpSendPacketQ(buf);
    }
    else
    {
        CMyFileLog log("CTcpNetSystem::SendPacket", 0xd5);
        log("./log/TcpSend", "SEND QUEUE(%d, id:%d, size:%d, port:%d)",
            (int)m_sendQueue.size(), *(unsigned short*)((char*)buf),
            *(unsigned short*)((char*)buf + 2), port);
    }
}
void CTcpNetSystem::PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf)
{
    {
        CGuard<CMutex> guard(&m_mutexE8);
        m_sendQueue.pop();
    }
    {
        CGuard<CMutex> guard(&m_mutex100);
        delete buf;
    }
}
CTcpSendBuffer* CTcpNetSystem::Acquire_TcpSendBuffer() { return new CTcpSendBuffer; }

// ============================================================
// CProtocol / EpollHandler / CTcpHandler
// ============================================================
EpollHandler::EpollHandler()
{
    Init();
}

EpollHandler::~EpollHandler()
{
    Destroy();
}

int EpollHandler::Init()
{
    m_epollFd = epoll_create(0x3e8);
    if (m_epollFd < 0)
    {
        puts("epoll create error");
        return 0;
    }
    m_events = (void*)new char[0x2ee0];
    if (!m_events)
    {
        printf("epoll events alloc error\n");
        return 0;
    }
    return 1;
}

void EpollHandler::Destroy()
{
    if (m_events)
    {
        delete[] (char*)m_events;
        m_events = 0;
    }
}

int EpollHandler::WaitForEvent()
{
    return epoll_wait(m_epollFd, (struct epoll_event*)m_events, 0x3e8, 0x64);
}

void* EpollHandler::GetEventPtr(int idx)
{
    return ((struct epoll_event*)m_events)[idx].data.ptr;
}

char EpollHandler::IsSetInEvent(int idx)
{
    return ((struct epoll_event*)m_events)[idx].events & 0x1;
}

char EpollHandler::IsSetOutEvent(int idx)
{
    return ((struct epoll_event*)m_events)[idx].events & 0x4;
}

char EpollHandler::IsSetErrEvent(int idx)
{
    return ((struct epoll_event*)m_events)[idx].events & 0x18;
}

int EpollHandler::SetEpoll(void* peer, int fd, bool flag)
{
    m_eventType = flag ? 0x8000001d : 0x1d;
    m_peer = peer;
    CGuard<CMutex> guard(&m_mutex);
    int ret = epoll_ctl(m_epollFd, 0x1, fd, (struct epoll_event*)&m_eventType);
    return ret < 0 ? errno : 0;
}

int EpollHandler::ResetEpoll(int fd)
{
    memset(&m_eventType, 0, 0xc);
    m_eventType = 0x1;
    CGuard<CMutex> guard(&m_mutex);
    int ret = epoll_ctl(m_epollFd, 0x2, fd, (struct epoll_event*)&m_eventType);
    return ret < 0 ? errno : 0;
}

int EpollHandler::SetPeer(void* peer, int fd, bool flag)
{
    return SetEpoll(peer, fd, flag);
}

CTcpHandler::CTcpHandler()
{
    m_epoll = new EpollHandler;
}

CTcpHandler::~CTcpHandler()
{
    if (m_epoll)
    {
        delete m_epoll;
        m_epoll = 0;
    }
}

int CTcpHandler::WaitForEvent()
{
    return m_epoll ? m_epoll->WaitForEvent() : 0;
}

int CTcpHandler::ResetEpoll(int flag)
{
    return m_epoll ? m_epoll->ResetEpoll(flag) : -1;
}

int CTcpHandler::SetPeer(void* peer, int fd, bool flag)
{
    return m_epoll ? m_epoll->SetPeer(peer, fd, flag) : -1;
}

void* CTcpHandler::GetEventPtr(int idx)
{
    return m_epoll ? m_epoll->GetEventPtr(idx) : 0;
}

char CTcpHandler::IsSetInEvent(int idx)
{
    return m_epoll ? m_epoll->IsSetInEvent(idx) : 0;
}

char CTcpHandler::IsSetOutEvent(int idx)
{
    return m_epoll ? m_epoll->IsSetOutEvent(idx) : 0;
}

char CTcpHandler::IsSetErrEvent(int idx)
{
    return m_epoll ? m_epoll->IsSetErrEvent(idx) : 0;
}

// ============================================================
// TCPSocket / CPeer
// ============================================================
TCPSocket::TCPSocket()
{
    m_fd = -1;
    memset(&m_addr, 0, 4);
    memset(&m_data4, 0, 0x10);
    m_port = 0;
}

TCPSocket::~TCPSocket()
{
    close();
}

char TCPSocket::open()
{
    m_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (m_fd == -1)
    {
        printf("socket error %d", errno);
        return 0;
    }
    return 1;
}

void TCPSocket::close()
{
    if (m_fd != -1)
    {
        ::close(m_fd);
        m_fd = -1;
        memset(&m_addr, 0, 4);
        m_port = 0;
    }
}

int TCPSocket::shutdown(int how)
{
    if (m_fd == -1)
        return -1;
    return ::shutdown(m_fd, how);
}

int TCPSocket::send(char* buf, int len)
{
    if (!buf || len <= 0)
    {
        printf("buf error or size-%d error", len);
        return -1;
    }
    int n = write(m_fd, buf, len);
    if (n <= 0)
    {
        int e = errno;
        if (e == 0xb || e == 0x4 || e == 0xb)
        {
            printf("tcp send fail='%d', error ='%s'", n, strerror(e));
            return -1;
        }
        if (e != 0)
        {
            printf("tcp send retry='%d', error ='%s'", n, strerror(e));
            return 0;
        }
        printf("send error no 0");
        printf("tcp send retry='%d', error ='%s'", n, strerror(e));
        return 0;
    }
    printf("tcp send='%d', error ='%s'", n, strerror(errno));
    return n;
}

int TCPSocket::recv(char* buf, int len)
{
    if (!buf || len <= 0)
    {
        printf("In recv : recv buffer is null");
        return -1;
    }
    int n = read(m_fd, buf, len);
    if (n < 0)
    {
        int e = errno;
        if (e == 0xb || e == 0x4 || e == 0xb)
        {
            if (n != 0)
                return n;
            printf("tcp recv : FIN recv, %s", strerror(e));
            return -1;
        }
        if (e != 0)
            return n;
        return 0;
    }
    printf("tcp recv ='%d'", n);
    return n;
}

char TCPSocket::setOptResizeRecvBuf(int size)
{
    if (size <= 0)
        return 0;
    int ret = setsockopt(m_fd, SOL_SOCKET, SO_RCVBUF, &size, 4);
    if (ret < 0)
        return 0;
    return 1;
}

char TCPSocket::connect(const char* ip, unsigned short port)
{
    struct sockaddr_in addr;
    memset(&addr, 0, 0x10);
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(ip);
    addr.sin_port = htons(port);
    int len = 0x10;
    if (::connect(m_fd, (struct sockaddr*)&addr, len) < 0)
    {
        printf("CONNECTION FAIL IP =%s, PORT =%d, reason =%s",
               ip, port, strerror(errno));
        return 0;
    }
    memcpy((char*)this + 0x14, (char*)&addr + 4, 4);
    m_port = *(unsigned short*)((char*)&addr + 2);
    return 1;
}

char TCPSocket::setOptNonBlock()
{
    int flags = fcntl(m_fd, F_GETFL, 0);
    flags |= O_NONBLOCK;
    if (fcntl(m_fd, F_SETFL, flags) < 0)
        return 0;
    return 1;
}

char TCPSocket::setOptReuseAdrs(bool flag)
{
    int opt = flag ? 1 : 0;
    if (setsockopt(m_fd, SOL_SOCKET, SO_REUSEADDR, &opt, 4) < 0)
        return 0;
    return 1;
}

char TCPSocket::setOptLinger(bool flag)
{
    struct linger linger;
    linger.l_onoff = flag ? 1 : 0;
    linger.l_linger = 0;
    if (setsockopt(m_fd, SOL_SOCKET, SO_LINGER, &linger, 8) < 0)
        return 0;
    return 1;
}

char TCPSocket::setOptResizeSendBuf(int size)
{
    if (size <= 0)
        return 0;
    if (setsockopt(m_fd, SOL_SOCKET, SO_SNDBUF, &size, 4) < 0)
        return 0;
    return 1;
}

char* TCPSocket::getPeerIP()
{
    static char ip[0x20];
    sprintf(ip, "%d.%d.%d.%d",
            (unsigned char)((char*)&m_addr)[0],
            (unsigned char)((char*)&m_addr)[1],
            (unsigned char)((char*)&m_addr)[2],
            (unsigned char)((char*)&m_addr)[3]);
    return ip;
}

char TCPSocket::pollWriteEvent() const
{
    fd_set writefds;
    FD_ZERO(&writefds);
    FD_SET(m_fd, &writefds);
    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int ret = select(2, 0, &writefds, 0, &tv);
    if (ret < 0)
    {
        printf("pollWriteEvent(%s)", strerror(errno));
        return 0;
    }
    return FD_ISSET(m_fd, &writefds) ? 1 : 0;
}

char TCPSocket::pollErrorEvent() const
{
    fd_set exceptfds;
    FD_ZERO(&exceptfds);
    FD_SET(m_fd, &exceptfds);
    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int ret = select(2, 0, 0, &exceptfds, &tv);
    if (ret < 0)
    {
        printf("pollErrorEvent(%s)", strerror(errno));
        return 0;
    }
    return FD_ISSET(m_fd, &exceptfds) ? 1 : 0;
}

int TCPSocket::pollReadWriteErrEvent() const
{
    fd_set readfds, writefds, exceptfds;
    FD_ZERO(&readfds);
    FD_ZERO(&writefds);
    FD_ZERO(&exceptfds);
    FD_SET(m_fd, &readfds);
    FD_SET(m_fd, &writefds);
    FD_SET(m_fd, &exceptfds);
    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int ret = select(2, &readfds, &writefds, &exceptfds, &tv);
    if (ret < 0)
    {
        printf("pollReadWriteErrEvent(%s)", strerror(errno));
        return ret;
    }
    int result = 0;
    if (FD_ISSET(m_fd, &readfds))
        result = 1;
    else if (FD_ISSET(m_fd, &writefds))
        result = 2;
    else if (FD_ISSET(m_fd, &exceptfds))
        result = 3;
    return result;
}

char TCPSocket::bind(unsigned short port, bool flag)
{
    setOptReuseAdrs(true);
    struct sockaddr_in addr;
    memset(&addr, 0, 0x10);
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = 0;
    if (::bind(m_fd, (struct sockaddr*)&addr, 0x10) < 0)
    {
        close();
        return 0;
    }
    if (flag)
        setOptNonBlock();
    printf("succeeded in binding TCP socket port #%d\n", port);
    return 1;
}

char TCPSocket::listen(int backlog)
{
    if (::listen(m_fd, backlog) < 0)
    {
        close();
        return 0;
    }
    return 1;
}

char TCPSocket::pollReadEvent() const
{
    fd_set readfds;
    FD_ZERO(&readfds);
    FD_SET(m_fd, &readfds);
    struct timeval tv;
    tv.tv_sec = 5;
    tv.tv_usec = 0;
    int ret = select(m_fd + 1, &readfds, 0, 0, &tv);
    if (ret < 0)
    {
        printf("pollReadEvent(%s)", strerror(errno));
        return 0;
    }
    return FD_ISSET(m_fd, &readfds) ? 1 : 0;
}

char TCPSocket::accept(TCPSocket& sock)
{
    socklen_t len = 0x10;
    sock.m_fd = ::accept(m_fd, (struct sockaddr*)((char*)&sock + 4), &len);
    if (sock.m_fd == 0)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", sock.m_fd);
            fclose(f);
        }
    }
    if (sock.m_fd < 0)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", sock.m_fd);
            fclose(f);
        }
    }
    if (sock.m_fd == -1)
        return 0;
    memcpy((char*)&sock + 0x14, (char*)&sock + 8, 4);
    sock.m_port = *(unsigned short*)((char*)&sock + 6);
    sock.setOptNonBlock();
    return 1;
}

CPeer::CPeer()
{
    memset(&m_sendBuf, 0, 0x1c);
}

CPeer::~CPeer()
{
    m_sendBuf = (char*)this + 0x1c;
    m_sendLen = 0;
    m_recvLen = 0;
    m_recvBuf = (char*)this + 0x183c;
    m_remainSendLen = 0;
}

int CPeer::recv_packet()
{
    if (getHandle() < 0)
        return 0;
    errno = 0;
    int remaining = ((char*)this + 0x1c + 0x1800) - m_sendBuf;
    if (remaining == 0)
    {
        m_sendBuf = (char*)this + 0x1c;
        m_recvLen = 0;
        remaining = 0x1800;
    }
    int n = read(getHandle(), m_sendBuf, remaining);
    if (n < 0)
    {
        if (errno == EAGAIN || errno == EINTR)
            return 0;
        if (errno != 0)
        {
            printf("RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",
                   getHandle(), errno, strerror(errno));
            return -1;
        }
        return 0;
    }
    if (n == 0)
    {
        CMyFileLog log("recv_packet", 0xa4);
        log("./log/TcpRecv", "Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",
            errno, strerror(errno), remaining, n);
        return -1;
    }
    return n;
}

int CPeer::send_packet()
{
    if (m_remainSendLen == 0)
        return 1;
    int ret = write(getHandle(), (char*)this + 0x183c, m_remainSendLen);
    if (ret <= 0)
    {
        if (errno == EAGAIN || errno == EINTR)
            return 1;
        if (errno != 0)
        {
            printf("SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",
                   getHandle(), errno, strerror(errno));
            return 1;
        }
        return ret;
    }
    if (m_remainSendLen <= ret)
    {
        if (m_remainSendLen < ret)
        {
            printf("offset error[Remain_Data: %d Send:%d]", m_remainSendLen, ret);
            return -1;
        }
        m_recvBuf = (char*)this + 0x183c;
        m_remainSendLen = 0;
        return ret;
    }
    m_recvBuf = (char*)this + 0x183c + ret;
    m_remainSendLen -= ret;
    if (m_remainSendLen > 0x96000)
    {
        CMyFileLog log("send_packet", 0x17e);
        log("./log/TcpErr", "m_remain_sendlen < MAX_PACKET_SIZE_UDP :  m_remain_sendlen:%d]",
            m_remainSendLen);
        m_recvBuf = (char*)this + 0x183c;
        m_remainSendLen = 0;
        return 1;
    }
    memmove((char*)this + 0x183c, m_recvBuf, m_remainSendLen);
    m_recvBuf = (char*)this + 0x183c + m_remainSendLen;
    return ret;
}

int CPeer::send_packet(char* buf, int len)
{
    if (getHandle() < 0)
        return -1;
    if (len <= 0)
    {
        printf("!!!Send Packet[(%d,%d) Size(%d) Error\n", buf[0], buf[1], len);
        return -1;
    }
    errno = 0;
    m_remainSendLen += len;
    if (m_remainSendLen > 0x96000)
    {
        CMyFileLog log("send_packet", 0x133);
        log("./log/TcpErr", "!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",
            buf[1], m_remainSendLen, len);
        m_recvBuf = (char*)this + 0x183c;
        m_remainSendLen = 0;
        return -1;
    }
    if (m_recvBuf < (char*)this + 0x183c ||
        m_recvBuf >= (char*)this + 0x183c + 0x96000)
    {
        CMyFileLog log("send_packet", 0x13b);
        log("./log/TcpErr", "!!!Send Packet Buffer critical error P_TYPE[%d] Size:Remain[%d] Last[%d]",
            buf[1], m_remainSendLen, len);
        m_recvBuf = (char*)this + 0x183c;
        m_remainSendLen = 0;
        return -1;
    }
    memcpy(m_recvBuf, buf, len);
    m_recvBuf += len;
    return send_packet();
}
void CPeer::InitPeer(TcpRecvQueue* recvQ, CMutex* qLock, CMutex* bLock)
{
    m_recvQ = recvQ;
    m_sendQLock = qLock;
    m_sendBLock = bLock;
    m_sendBuf = (char*)this + 0x1c;
    m_sendLen = 0;
    m_recvLen = 0;
    m_recvBuf = (char*)this + 0x183c;
    m_remainSendLen = 0;
}
int CPeer::parsing(int len)
{
    int parsinglength = m_recvLen + len;
    if (parsinglength <= 9)
    {
        m_recvLen += len;
        m_sendBuf += len;
        CMyFileLog log("parsing", 0xbb);
        log("./log/TcpRecv", "(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",
            (char*)this + 0x1c, m_sendBuf, m_recvLen, len);
        return 1;
    }
    for (;;)
    {
        if (m_recvLen != 0)
            m_sendBuf -= m_recvLen;
        PacketHeader hdr(0, 0);
        memcpy(&hdr, m_sendBuf, 10);
        int size = hdr.packetSize;
        if (size <= 9 || size > 0x1800)
        {
            CMyFileLog log("parsing", 0xd0);
            log("./log/TcpRecv",
                "Recv Size[%d], Parsing Packet Size[%d] is Too Large, offset:%x, buf:%x, alreadyRead:%d",
                len, size, m_sendBuf, (char*)this + 0x1c, m_sendLen);
            m_sendBuf = (char*)this + 0x1c;
            m_recvLen = 0;
            return 0;
        }
        if (parsinglength < size)
        {
            CMyFileLog log("parsing", 0x100);
            log("./log/TcpRecv",
                "need more data (packetsize > (unsigned int)parsinglength): body=%d !!",
                parsinglength);
            break;
        }
        CTcpRecvBuffer* buf;
        {
            CGuard<CMutex> guard(m_sendBLock);
            buf = new CTcpRecvBuffer;
        }
        memcpy(buf, m_sendBuf, size);
        *(int*)((char*)buf + 6) = getHandle();
        {
            CGuard<CMutex> guard(m_sendQLock);
            m_recvQ->push(buf);
        }
        parsinglength -= size;
        m_sendBuf += size;
        m_recvLen = 0;
        if (parsinglength == 0)
        {
            m_sendBuf = (char*)this + 0x1c;
            break;
        }
        if (parsinglength <= 9)
        {
            CMyFileLog log("parsing", 0xf8);
            log("./log/TcpRecv",
                "need more data (parsinglength < HEADER_SIZE): body=%d !!",
                parsinglength);
            break;
        }
    }
    if (parsinglength > 0)
    {
        if (parsinglength > 0x1800)
        {
            CMyFileLog log("parsing", 0x10e);
            log("./log/TcpRecv",
                "[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d",
                parsinglength);
            return 0;
        }
        memmove((char*)this + 0x1c, m_sendBuf, parsinglength);
        m_recvLen = parsinglength;
        m_sendBuf = (char*)this + 0x1c + parsinglength;
    }
    return 1;
}
void CPeer::ConnSig()
{
    Packet_InnerPakcet_Login pkt;
    int fd = getHandle();
    CTcpRecvBuffer* buf;
    {
        CGuard<CMutex> guard(m_sendBLock);
        buf = new CTcpRecvBuffer;
    }
    memcpy(buf, &pkt, pkt.packetSize);
    {
        CGuard<CMutex> guard(m_sendQLock);
        m_recvQ->push(buf);
    }
}
void CPeer::DisConnSig()
{
    Packet_InnerPakcet_Logout pkt;
    int fd = getHandle();
    CTcpRecvBuffer* buf;
    {
        CGuard<CMutex> guard(m_sendBLock);
        buf = new CTcpRecvBuffer;
    }
    memcpy(buf, &pkt, pkt.packetSize);
    {
        CGuard<CMutex> guard(m_sendQLock);
        m_recvQ->push(buf);
    }
}
char CPeer::RecvPacket()
{
    int ret = recv_packet();
    if (ret > 0)
    {
        if (!parsing(ret))
        {
            CMyFileLog log("RecvPacket", 0x4d);
            log("./log/TcpRecv", "CPeer::Recv (false == parsing( size:%d ) )\n", ret);
            printf("CPeer::Recv (false == parsing( size:%d ) )\n", ret);
            return 1;
        }
        return 1;
    }
    if (ret < 0)
    {
        CMyFileLog log("RecvPacket", 0x59);
        log("./log/TcpRecv",
            "Maybe Peer is disconnect!(%d), socket no(%d), addr(%s), port(%d)",
            ret, getHandle(), getPeerAdrs(), getPeerPort());
        printf("CPeer::Recv (size(%d) < 0)\n", ret);
        return 0;
    }
    CMyFileLog log("RecvPacket", 0x63);
    log("./log/TcpRecv", "Maybe Peer is disconnect!(size == 0)");
    puts("CPeer::Recv (size == 0)");
    return 1;
}

// ============================================================
// CThreadInterface
// ============================================================
CThreadInterface::CThreadInterface()
{
    m_thread = 0;
    m_stop = 0;
}

CThreadInterface::~CThreadInterface() {}

static void* thread_proxy(void* param)
{
    return ((CThreadInterface*)param)->dispatch_proxy(param);
}

char CThreadInterface::begin()
{
    int ret = pthread_create(&m_thread, 0, thread_proxy, this);
    if (ret < 0)
    {
        puts("[ThreadInterface::begin] Can't begin thread");
        return 0;
    }
    return 1;
}

void* CThreadInterface::dispatch_proxy(void* param)
{
    return dispatch(param);
}

void CThreadInterface::join()
{
    pthread_join(m_thread, 0);
}

// ============================================================
// 线程类
// ============================================================
CTcpAcceptThread::CTcpAcceptThread() {}
CTcpAcceptThread::~CTcpAcceptThread() {}

void CTcpAcceptThread::attach(CTcpNetSystem* net)
{
    if (!net)
        return;
    m_net = net;
    m_recvQLock = net->Get_TcpRecvQLock();
    m_recvBLock = net->Get_TcpRecvBLock();
    m_port = net->Get_TcpServerPort();
}

void* CTcpAcceptThread::dispatch(void* param)
{
    if (!m_sock.open())
    {
        printf("Tcp Accept Socket Open Err");
        return 0;
    }
    if (!m_sock.bind(m_port, true))
    {
        printf("Tcp Accept Socket Bind Err");
        return 0;
    }
    if (!m_sock.listen(5))
    {
        printf("Tcp Accept Socket Listen Err");
        return 0;
    }
    m_stop = 1;
    DNFFLib::Sleep_Ext(5, 0);
    try
    {
        while (m_stop)
        {
            if (!m_sock.pollReadEvent())
                continue;
            CPeer* peer = m_net->CreatePeer();
            if (!peer->GetTcpSocket()->accept(m_sock))
                printf("Accept GameServer Fail(Port : %d)\n",
                       peer->GetTcpSocket()->getHandle());
            printf("Accept GameServer(Port : %d)\n",
                   peer->GetTcpSocket()->getHandle());
            peer->InitPeer(m_net->Get_TcpSwapQPacket()->GetRecvQ(),
                           m_net->Get_TcpRecvQLock(), m_net->Get_TcpRecvBLock());
            peer->ConnSig();
            m_net->InsertAcceptedPeer(peer);
        }
    }
    catch (CDNFException& e)
    {
        printf("CTcpNetworkThread::dispatch() Except Break : %s\n", e.what());
        throw CDNFException("CTcpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CTcpNetworkThread::dispatch() Except Break");
        throw CDNFException("CTcpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    return 0;
}

CTcpNetworkThread::CTcpNetworkThread() {}
CTcpNetworkThread::~CTcpNetworkThread() {}

void CTcpNetworkThread::attach(CTcpNetSystem* net)
{
    if (!net)
        return;
    m_net = net;
    m_recvQ = net->Get_TcpSwapQPacket()->GetRecvQ();
    m_handler = net->Get_TcpHandler();
    m_recvQLock = net->Get_TcpRecvQLock();
    m_recvBLock = net->Get_TcpRecvBLock();
    m_sendQ = net->Get_TcpSendQPacket();
    m_sendQLock = net->Get_TcpSendQLock();
    m_sendBLock = net->Get_TcpSendBLock();
}

void* CTcpNetworkThread::dispatch(void* param)
{
    m_runningFlag = 1;
    DNFFLib::Sleep_Ext(5, 0);
    try
    {
        while (1)
        {
            if (!m_runningFlag)
            {
                CMyFileLog log("dispatch", 0xae);
                log("./log/TcpRecv", "RecvThread Terminate");
                break;
            }
            errno = 0;
            DNFFLib::Sleep_Ext(5, 0);
            if (!m_net)
                break;
            m_net->SetEpollAcceptedPeers();
            m_net->SendPacket();
            int nEvent = m_net->WaitForEvent();
            if (nEvent == 0)
                continue;
            if (nEvent < 0)
            {
                if (errno == 0x4)
                    continue;
                if (errno != 0)
                    break;
            }
            for (int i = 0; i < nEvent; i++)
            {
                CPeer* peer = (CPeer*)m_handler->GetEventPtr(i);
                if (peer && m_handler->IsSetInEvent(i))
                {
                    if (!peer->RecvPacket())
                    {
                        peer->DisConnSig();
                        m_net->DeletePeer(peer);
                        peer = 0;
                    }
                }
                if (peer && peer->get_remain_sendlen() != 0 &&
                    m_handler->IsSetOutEvent(i) && peer->get_remain_sendlen() <= 0x1800)
                {
                    peer->send_packet();
                }
                m_handler->IsSetErrEvent(i);
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CTcpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CTcpNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    return 0;
}

CUdpNetworkThread::CUdpNetworkThread() {}
CUdpNetworkThread::~CUdpNetworkThread() {}

void CUdpNetworkThread::attach(CApplication* app)
{
    if (!app)
        return;
    m_udpQueue = app->Get_UdpPacketRecvQ();
    m_udpHandler = app->Get_UdpHandler();
    m_udpQLock = app->Get_UdpQLock();
    m_udpBLock = app->Get_UdpBLock();
}

void* CUdpNetworkThread::dispatch(void* param)
{
    if (!m_udpQueue || !m_udpHandler || !m_udpQLock)
        throw CDNFException("NetworkThread is Not Ready!\n");
    DNFFLib::Sleep_Ext(5, 0);
    puts("Network Thread Start!");
    m_stop = 1;
    int sock = ((CUdpHandler*)m_udpHandler)->GetServerSocket();
    int flags = fcntl(sock, F_GETFL, 0);
    flags |= O_NONBLOCK;
    if (fcntl(sock, F_SETFL, flags) < 0)
        puts("fcntl error!");
    while (1)
    {
        fd_set readfds;
        FD_ZERO(&readfds);
        FD_SET(sock, &readfds);
        struct timeval tv;
        tv.tv_sec = 1;
        tv.tv_usec = 0;
        if (select(sock + 1, &readfds, 0, 0, &tv) < 0)
            continue;
        if (!FD_ISSET(sock, &readfds))
            continue;
        CUdpRecvBuffer* buf;
        {
            CGuard<CMutex> guard(m_udpBLock);
            buf = new CUdpRecvBuffer;
        }
        int size = 0x1800;
        unsigned int addr = 0;
        unsigned short port = 0;
        if (!((CUdpHandler*)m_udpHandler)->RecvFromClient((char*)buf, &size, &addr, &port))
        {
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            continue;
        }
        // 原版入队前校验包头的 size 字段（buf+2）与实际收包长度一致，且不超 0x17ff
        unsigned short code = *(unsigned short*)((char*)buf + 2);
        if (code != (unsigned short)size)
        {
            CMyFileLog log("dispatch", 0xb5);
            log("./log/recvErr",
                "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                *(unsigned short*)buf, size, code);
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            continue;
        }
        if (code > 0x17ff)
        {
            CMyFileLog log("dispatch", 0xc0);
            log("./log/recvErr",
                "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                *(unsigned short*)buf, size, code);
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            continue;
        }
        {
            CGuard<CMutex> guard(m_udpQLock);
            m_udpQueue->push(buf);
        }
    }
    return 0;
}

// ============================================================
// CDBHandle / CMySql / CDBManager
// ============================================================
CDBHandle::CDBHandle() {}
CDBHandle::~CDBHandle() {}

CMySql::CMySql()
{
    m_mysql = 0;
    m_result = 0;
    m_lengths = 0;
}

CMySql::~CMySql()
{
    close();
}

void CMySql::close()
{
    if (m_mysql)
    {
        mysql_close(m_mysql);
        m_mysql = 0;
    }
}

char CMySql::init_db_handle()
{
    if (m_mysql)
        return 0;
    m_mysql = mysql_init(0);
    if (!m_mysql)
        return 0;
    return 1;
}

int CMySql::exec_query()
{
    clear_result_set();
    int ret = mysql_real_query(m_mysql, m_query, m_queryLen);
    if (ret != 0)
    {
        m_lastErrno = mysql_errno(m_mysql);
        if (m_lastErrno == 0x7d5 || m_lastErrno == 0x7dd)
        {
            int pingRet = mysql_ping(m_mysql);
            if (pingRet != 0)
            {
                CMyFileLog log("exec_query", 0xa3);
                log("./log/MysqlErr.log", "DB reconnection fail. %d\n", pingRet);
            }
            return 2;
        }
        if (m_lastErrno != 0x426)
        {
            CMyFileLog log("exec_query", 0xaa);
            log("./log/MysqlErr.log", "DB error occured (%d) Query('%s')\n", m_lastErrno, m_query);
            if (m_lastErrno == 0x7d6)
            {
                CMyFileLog log("exec_query", 0xac);
                log("./log/MysqlErr.log",
                    "CMySql::open() Function Error!\tCheck Connection First, Must Be Not Connected!\n");
            }
        }
        return 1;
    }
    return 0;
}

int CMySql::exec(unsigned int q)
{
    int ret = 0;
    for (int i = 0; i <= 4; i++)
    {
        ret = exec_query();
        if (ret == 1)
        {
            CQueryCounterInstance()->SetResponseTime(q);
            return 0;
        }
        if (ret == 0)
            break;
    }
    CQueryCounterInstance()->SetResponseTime(q);
    if (ret == 0)
    {
        m_result = mysql_store_result(m_mysql);
        if (m_result)
        {
            m_nRows = mysql_num_rows(m_result);
            m_nFields = mysql_num_fields(m_result);
        }
        else
        {
            m_nRows = 0;
            m_nFields = 0;
        }
        return 1;
    }
    CMyFileLog log("exec", 0xed);
    log("./log/MysqlErr.log", "Database query error. The last query('%s') has been lost.", m_query);
    return 0;
}

int CMySql::fetch()
{
    if (!m_result)
        return 0;
    m_row = mysql_fetch_row(m_result);
    if (!m_row)
        return 0;
    m_lengths = mysql_fetch_lengths(m_result);
    return 1;
}

void CMySql::clear_result_set()
{
    if (m_result)
        mysql_free_result(m_result);
    m_result = 0;
    m_row = 0;
}

int CMySql::set_query(unsigned int q, char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsprintf(m_query, fmt, ap);
    va_end(ap);
    int len = strlen(m_query);
    if (len > 0xfff)
        return 0;
    m_queryLen = len;
    CQueryCounterInstance()->IncreQureyCount(q);
    return 1;
}

int CMySql::get_int(int col, int& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = atoi(m_row[col]);
    return 1;
}

int CMySql::get_uint(int col, unsigned int& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (unsigned int)atoi(m_row[col]);
    return 1;
}

int CMySql::get_short(int col, short& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (short)atoi(m_row[col]);
    return 1;
}

int CMySql::get_short(int col, int& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (short)atoi(m_row[col]);
    return 1;
}

int CMySql::get_ushort(int col, unsigned short& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (unsigned short)atoi(m_row[col]);
    return 1;
}

int CMySql::get_ushort(int col, int& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (unsigned short)atoi(m_row[col]);
    return 1;
}

int CMySql::get_byte(int col, char& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (char)atoi(m_row[col]);
    return 1;
}

int CMySql::get_byte(int col, int& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (char)atoi(m_row[col]);
    return 1;
}

int CMySql::get_ubyte(int col, unsigned char& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (unsigned char)atoi(m_row[col]);
    return 1;
}

int CMySql::get_ubyte(int col, int& v)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    v = (unsigned char)atoi(m_row[col]);
    return 1;
}

int CMySql::get_str(int col, char* buf, int len)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    if (len <= 0)
        return 0;
    strncpy(buf, m_row[col], len);
    buf[len - 1] = 0;
    return 1;
}

int CMySql::get_binary(int col, void* buf, int len)
{
    if (!m_row)
        return 0;
    if (!is_valid_col(col))
        return 0;
    if (len <= 0)
        return 0;
    int copyLen = m_lengths[col] < (unsigned int)len ? m_lengths[col] : len;
    memcpy(buf, m_row[col], copyLen);
    return 1;
}

char* CMySql::blob_to_str(int col, void* buf, int len)
{
    if (col < 0 || col > 9)
        return 0;
    if (buf == 0 && len > 0xfff)
        return 0;
    char* base = (char*)this + 0x1010 + col * 0x1001;
    base[0xd] = 0;
    if (len > 0)
    {
        char* dst = base + 0xd;
        dst += mysql_real_escape_string(m_mysql, dst, (const char*)buf, len);
        *dst = 0;
    }
    return base + 0xd;
}

char CMySql::set_compress_option()
{
    if (mysql_options(m_mysql, MYSQL_OPT_COMPRESS, 0) != 0)
        return 0;
    return 1;
}

char CMySql::set_read_default_grp_option()
{
    if (mysql_options(m_mysql, MYSQL_READ_DEFAULT_GROUP, "UseSQL") != 0)
        return 0;
    return 1;
}

char CMySql::open(const char* host, const char* user, const char* pass, const char* db)
{
    if (!host || !user || !pass || !db)
        return 0;
    // 原版实际传参顺序（host, pass, db, user）
    if (!mysql_real_connect(m_mysql, host, pass, db, user, 0xcea, 0, 0))
    {
        printf("Can't connect db : ( dbname : %s, ip : %s, id : %s, pwd : %s )\n",
               user, host, pass, db);
        CMyFileLog log("open", 0x6b);
        log("./log/DBErr", "Can't connect db : ( dbname : %s, ip : %s, id : %s, pwd : %s )\n",
            user, host, pass, db);
        return 0;
    }
    return 1;
}

char CMySql::is_valid_col(int col)
{
    if (col < 0)
        return 0;
    if (m_nFields > col)
        return 1;
    return 0;
}

CDBManager::CDBManager()
{
    m_app = 0;
    m_handles[1] = 0;
    m_handles[2] = 0;
    m_handles[4] = 0;
}

CDBHandle* CDBManager::GetDBHandle(ENUM_DB_HANDLE_IDX idx)
{
    return m_handles[idx];
}

CDBManager::~CDBManager()
{
    Close();
    for (int i = 0; i <= 0x10; i++)
    {
        if (m_handles[i])
        {
            delete m_handles[i];
            m_handles[i] = 0;
        }
    }
}

void CDBManager::Open(ENUM_DB_HANDLE_IDX idx, const char* host, const char* user,
                      const char* pass, const char* db)
{
    ((CMySql*)m_handles[idx])->open(host, user, pass, db);
}

void CDBManager::Close()
{
    for (int i = 0; i <= 0x10; i++)
    {
        if (m_handles[i])
            m_handles[i]->close();
    }
}

char CDBManager::UpdateQueryCount(unsigned int idx, int count, int time)
{
    CDBHandle* h = m_handles[4];
    if (count <= 0)
        return 0;
    h->set_query(0x4e2c,
                 "inSert into log_query_stat(occ_time,q_id,total,response_time) values(now(),%d,%d,%d)",
                 idx, count, time);
    if (!h->exec(0x4e2c))
        return 0;
    return 1;
}

char CDBManager::SelectTest()
{
    int i = 0;
    int j = 0;
    CDBHandle* h = m_handles[2];
    if (!h->set_query(0x4e21,
                      "seLect m_id, charac_no from charac_info where m_id = 1001024"))
    {
        puts("select login_status, m_channel_no from login_account");
        return 0;
    }
    if (!h->exec(0x4e21))
        return 0;
    if (!h->fetch())
        return 0;
    if (!h->get_uint(0, (unsigned int&)j))
        return 0;
    if (!h->get_uint(1, (unsigned int&)i))
        return 0;
    return 1;
}

void CDBManager::Init(ENUM_DB_KIND kind, CApplication* app)
{
    m_app = app;
    if (kind == 1)
    {
        for (int i = 0; i <= 0x10; i++)
        {
            m_handles[i] = new (std::nothrow) CMySql;
            if (!m_handles[i])
                throw CDNFException("CDBManager::Init() new CMySql fail!");
            if (!m_handles[i]->init())
                throw CDNFException("CDBManager::Init() mysql init fail!");
        }
    }
}

// ============================================================
// CSignal 家族
// ============================================================
CSignal::CSignal()
{
    m_app = 0;
}

CSignal::~CSignal() {}

CTerminateSig::CTerminateSig() {}
CTerminateSig::~CTerminateSig() {}

void CTerminateSig::handle(int sig)
{
    puts("CTerminateSig");
    if (m_app)
        m_app->App_Stop();
}

CSystemFailSig::CSystemFailSig() {}
CSystemFailSig::~CSystemFailSig() {}

CSegmentationFaultSig::CSegmentationFaultSig() {}
CSegmentationFaultSig::~CSegmentationFaultSig() {}

CFloatingPointExceptSig::CFloatingPointExceptSig() {}
CFloatingPointExceptSig::~CFloatingPointExceptSig() {}

CUser1Sig::CUser1Sig() {}
CUser1Sig::~CUser1Sig() {}

void CUser1Sig::handle(int sig)
{
    CMyFileLog log("CUser1Sig", 0x13);
    log("USER1", "SIGUSR1");
    if (m_app)
        m_app->SendTestPacket_2();
}

CUser2Sig::CUser2Sig() {}
CUser2Sig::~CUser2Sig() {}

void CUser2Sig::handle(int sig)
{
    CMyFileLog log("CUser2Sig", 0x20);
    log("USER2", "SIGUSR2");
    if (m_app)
        m_app->TranslateSignal();
}

void CSystemFailSig::handle(int sig)
{
    puts("Recv SIGSYS signal");
    puts("Recv SIGSYS signal --> make Dump Core file.");
    if (m_app)
        m_app->App_Stop();
    dump_core_file();
    exit(-1);
}

void CSegmentationFaultSig::handle(int sig)
{
    puts("Recv SIGSEGV signal --> make Dump Core file.");
    if (m_app)
        m_app->App_Stop();
    dump_core_file();
}

void CFloatingPointExceptSig::handle(int sig)
{
    puts("Recv SIGFPE signal --> make Dump Core file.");
    if (m_app)
        m_app->App_Stop();
    dump_core_file();
}

void CSignal::dump_core_file()
{
    CPacketTracerInstance()->AbsoluteWriteLog();
    struct rlimit rl;
    getrlimit(RLIMIT_CORE, &rl);
    rl.rlim_cur = -1;
    setrlimit(RLIMIT_CORE, &rl);
    abort();
}

// ============================================================
// CSignalTranslator（本批 C1/D1/getSignal；init/regist 下一批）
// ============================================================
CSignalTranslator::CSignalTranslator() {}
CSignalTranslator::~CSignalTranslator() {}

static CSignalTranslator g_signalTranslator;

CSignalTranslator* CSignalTranslatorInstance()
{
    return &g_signalTranslator;
}

char CSignalTranslator::regist_signal(int sig, void (*handler)(int))
{
    struct sigaction act;
    act.sa_handler = handler;
    sigemptyset(&act.sa_mask);
    int flags = 0;
    if (sig == 0xe)
        flags |= 0x20000000;
    else
        flags |= 0x10000000;
    act.sa_flags = flags;
    struct sigaction old;
    if (sigaction(sig, &act, &old) < 0)
    {
        printf("%d signal regist fail\n", sig);
        return 0;
    }
    return 1;
}

void CSignalTranslator::init_signal()
{
    if (!regist_signal(0xf, signal_handler))
        throw CDNFException("regist_signal():SIGTERM");
    if (!regist_signal(0xa, signal_handler))
        throw CDNFException("regist_signal():SIGUSR1");
    if (!regist_signal(0xc, signal_handler))
        throw CDNFException("regist_signal():SIGUSR2");
    if (!regist_signal(0x2, (void (*)(int))1))
        throw CDNFException("regist_signal():SIGINT");
    if (!regist_signal(0xb, signal_handler))
        throw CDNFException("regist_signal():SIGSEGV");
    if (!regist_signal(0x8, signal_handler))
        throw CDNFException("regist_signal():SIGFPE");
    if (!regist_signal(0xd, (void (*)(int))1))
        throw CDNFException("regist_signal():SIGPIPE");
    if (!regist_signal(0x4, signal_handler))
        throw CDNFException("regist_signal():SIGILL");
    if (!regist_signal(0x7, signal_handler))
        throw CDNFException("regist_signal():SIGBUS");
    if (!regist_signal(0x10, signal_handler))
        throw CDNFException("regist_signal():SIGSTKFLT");
    if (!regist_signal(0x17, signal_handler))
        throw CDNFException("regist_signal():SIGURG");
    if (!regist_signal(0x18, signal_handler))
        throw CDNFException("regist_signal():SIGXCPU");
    if (!regist_signal(0x19, signal_handler))
        throw CDNFException("regist_signal():SIGXFSZ");
    if (!regist_signal(0x1f, signal_handler))
        throw CDNFException("regist_signal():SIGSYS");
}

void CSignalTranslator::init_handler(CApplication* app)
{
    m_signals[15] = new CTerminateSig;
    m_signals[15]->attachApp(app);
    for (int i = 0; i <= 0x19; i++)
        m_signals[i] = m_signals[15];
    m_signals[6] = new CSegmentationFaultSig;
    m_signals[6]->attachApp(app);
    m_signals[11] = m_signals[6];
    m_signals[8] = m_signals[6];
    m_signals[2] = m_signals[6];
    m_signals[10] = new CUser1Sig;
    m_signals[10]->attachApp(app);
    m_signals[12] = new CUser2Sig;
    m_signals[12]->attachApp(app);
    m_signals[4] = new CSystemFailSig;
    m_signals[4]->attachApp(app);
    m_signals[7] = m_signals[4];
    m_signals[23] = m_signals[4];
    m_signals[16] = m_signals[4];
}

void CSignalTranslator::clear()
{
    if (m_signals[4])
    {
        delete m_signals[4];
        m_signals[4] = 0;
    }
    if (m_signals[10])
    {
        delete m_signals[10];
        m_signals[10] = 0;
    }
    if (m_signals[12])
    {
        delete m_signals[12];
        m_signals[12] = 0;
    }
    if (m_signals[6])
    {
        delete m_signals[6];
        m_signals[6] = 0;
    }
    if (m_signals[15])
    {
        delete m_signals[15];
        m_signals[15] = 0;
    }
}

void CSignalTranslator::init(CApplication* app)
{
    try
    {
        init_signal();
        init_handler(app);
    }
    catch (CDNFException& e)
    {
        printf("CSignalTranslator Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CSignalTranslator Exception Break");
        throw;
    }
}

void signal_handler(int sig)
{
    CSignalTranslator* t = CSignalTranslatorInstance();
    CSignal* s = t->getSignal(sig);
    s->handle(sig);
}

// ============================================================
// CPacketTranslater（静态 handler）
// ============================================================
CApplication* CPacketTranslater::m_pclApp;

void CPacketTranslater::attach(CApplication* app)
{
    m_pclApp = app;
}

void CPacketTranslater::OnHeartBeat(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    CServerHandler* handler = m_pclApp->m_serverHandler;
    if (!handler)
        return;
    unsigned char idx = ((char*)header)[0xa];
    if (idx > 0x64)
        throw CDNFException(
            "CPacketTranslater::OnHeartBeat() \xc3\xa4\xb3\xce \xc0\xce\xb5\xa6\xbd\xba \xbf\xc0\xb7\xf9\n");
    handler->ResetHeartBeat(idx);
    if (!handler->IsConnectedMonitorServer(idx))
    {
        handler->SetConnectFlag(idx, 1);
        Packet_Monitor_Manager_Connect_OK pkt;
        handler->SendToTcpServer(&pkt, idx);
        printf("First Heart Beat Arrived From %d Group Monitor!\n", idx);
        CMyFileLog log("OnHeartBeat", 0x43);
        log("./log/Monitor", "First Heart Beat Arrived From %d Group Monitor!", idx);
    }
}

void CPacketTranslater::OnEventStart(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnEventStart : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnEventStart", 0x70);
        log("./log/Web",
            "CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), eventParam2(%d)\n",
            *(int*)((char*)header + 0xa),
            *(unsigned short*)((char*)header + 0xe),
            *(unsigned short*)((char*)header + 0x10));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd\n");
        throw;
    }
}

void CPacketTranslater::OnEventEnd(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnEventEnd : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnEventEnd", 0x92);
        log("./log/Web", "CPacketTranslater::OnEventEnd() eventCode(%d)\n",
            *(int*)((char*)header + 0xa));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventEnd() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventEnd() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd\n");
        throw;
    }
}

void CPacketTranslater::OnCommonPacket(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnCommonPacket : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnCommonPacket", 0xb5);
        log("./log/Web", "CPacketTranslater::OnCommonPacket() packet_id(%d)\n", header->packetId);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventEnd() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventEnd() Exception Break\n");
        throw;
    }
}

void CPacketTranslater::OnInnerPacketLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            CMyFileLog log("OnInnerPacketLogin", 0x1f0);
            log("./log/Except", "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
            return;
        }
        CMyFileLog log("OnInnerPacketLogin", 0x1f6);
        log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogin (sock:%d)",
            *(int*)((char*)header + 6));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnInnerPacketLogin", 0x1fa);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnInnerPacketLogin", 0x1ff);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break\n");
    }
}

void CPacketTranslater::OnInnerPacketLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            CMyFileLog log("OnInnerPacketLogout", 0x20a);
            log("./log/Except", "CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
            return;
        }
        int port = *(int*)((char*)header + 6);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        CTcpServer* server = handler->GetTcpServer((unsigned int)port);
        if (!server)
        {
            CMyFileLog log("OnInnerPacketLogout", 0x215);
            log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",
                port);
            return;
        }
        unsigned char idx = server->GetServerIndex();
        handler = m_pclApp->Get_ServerHandler();
        if (!handler->DeleteTcpServer(idx))
        {
            CMyFileLog log("OnInnerPacketLogout", 0x21d);
            log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer fail(sock:%d)",
                port);
            return;
        }
        CMyFileLog log("OnInnerPacketLogout", 0x221);
        log("./log/TcpServer",
            "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)",
            idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnInnerPacketLogout", 0x225);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnInnerPacketLogout", 0x22a);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break\n");
    }
}

void CPacketTranslater::OnTcpServerLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        int port = *(int*)((char*)header + 6);
        unsigned char idx = ((char*)header)[0xa];
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler->GetTcpServer(idx))
        {
            CMyFileLog log("OnTcpServerLogin", 0x239);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogin Duplicate Server Instance(TYPE:%d, sock:%d)",
                idx, port);
            return;
        }
        handler = m_pclApp->Get_ServerHandler();
        if (!handler->CreateTcpServer(idx, port))
        {
            CMyFileLog log("OnTcpServerLogin", 0x242);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogin CreateTcpServer fail(TYPE:%d, sock:%d)\n",
                idx, port);
            return;
        }
        printf("CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)", idx, port);
        CMyFileLog log("OnTcpServerLogin", 0x250);
        log("./log/TcpServer", "CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)", idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnTcpServerLogin", 0x254);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnTcpServerLogin", 0x259);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogin Exception Break\n");
    }
}

void CPacketTranslater::OnTcpServerLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        unsigned char idx = ((char*)header)[0xa];
        int port = *(int*)((char*)header + 6);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (!handler->GetTcpServer(idx))
        {
            CMyFileLog log("OnTcpServerLogout", 0x269);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogout Invalid Server Instance(TYPE:%d, sock:%d)",
                idx, port);
            return;
        }
        if (!handler->DeleteTcpServer(idx))
        {
            CMyFileLog log("OnTcpServerLogout", 0x26f);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogout DeleteTcpServer fail(TYPE:%d, sock:%d)",
                idx, port);
            return;
        }
        printf("CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)", idx, port);
        CMyFileLog log("OnTcpServerLogout", 0x273);
        log("./log/TcpServer", "CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)", idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnTcpServerLogout", 0x277);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogout Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnTcpServerLogout", 0x27c);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogout Exception Break\n");
    }
}

void CPacketTranslater::OnTcpServerHeartbeat(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        unsigned char idx = ((char*)header)[0xa];
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        CTcpServer* server = handler->GetTcpServer(idx);
        if (!server)
        {
            CMyFileLog log("OnTcpServerHeartbeat", 0x28d);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerHeartbeat Invalid Server Instance(TYPE:%d, sock:%d)",
                idx, *(int*)((char*)header + 6));
            return;
        }
        server->NotifyHeartbeat();
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnTcpServerHeartbeat", 0x299);
        log("./log/Except", "CPacketTranslater::OnTcpServerHeartbeat Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnTcpServerHeartbeat", 0x29e);
        log("./log/Except", "CPacketTranslater::OnTcpServerHeartbeat Exception Break\n");
    }
}

void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_Web_Notice_InGame_Advertisement pkt;
        m_pclApp->m_serverHandler->SendAllTcpServer(&pkt);
        CMyFileLog log("OnWebNoticeInGameAD", 0x2ae);
        log("./log/Web", "OnWebNoticeInGameAD() packet_id(%d)\n", header->packetId);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnWebNoticeInGameAD", 0x2b2);
        log("./log/Except", "CPacketTranslater::OnWebNoticeInGameAD Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnWebNoticeInGameAD", 0x2b7);
        log("./log/Except", "CPacketTranslater::OnWebNoticeInGameAD Exception Break\n");
    }
}

void CPacketTranslater::OnWebNoticeBroadcast(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnWebNoticeBroadcast : 0 == m_pclApp");
        int len = ((char*)header)[0x10a];
        CMyFileLog log("OnWebNoticeBroadcast", 0x1b2);
        log("./log/test", "%d, %s, %d, %s\n",
            ((char*)header)[0xa], (char*)header + 0xb, len, (char*)header + 0x10b);
        if (m_pclApp && m_pclApp->m_serverHandler)
        {
            std::vector<std::string> parts;
            std::string s((char*)header + 0xb, len);
            parse_string(parts, s, ',');
            for (std::vector<std::string>::iterator it = parts.begin();
                 it != parts.end(); ++it)
            {
                std::string tok = *it;
                int ch = atoi(tok.c_str());
                if (ch <= 0x64)
                {
                    Packet_Web_Notice_Single pkt;
                    ((char*)&pkt)[0xa] = len;
                    memset((char*)&pkt + 0xb, 0, 0xff);
                    strncpy((char*)&pkt + 0xb, (char*)header + 0x10b, len);
                    m_pclApp->m_serverHandler->SendToTcpServer((char*)&pkt, 0x10a, ch);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnWebNoticeBroadcast", 0x1e0);
        log("./log/Except", "CPacketTranslater::OnWebNoticeBroadcast() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnWebNoticeBroadcast", 0x1e5);
        log("./log/Except", "CPacketTranslater::OnWebNoticeBroadcast() Exception Break\n");
    }
}

void CPacketTranslater::OnWebNoticeProhibitConnectUser(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(
                "CPacketTranslater::OnWebNoticeProhibitConnectUser : 0 == m_pclApp");
        int m_id = *(int*)((char*)header + 0xa);
        int ip = *(int*)((char*)header + 6);
        int port = *(unsigned short*)((char*)header + 4);
        char flag = ((char*)header)[0xe];
        short time = *(short*)((char*)header + 0xf);
        {
            CMyFileLog log("OnWebNoticeProhibitConnectUser", 0xdb);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnWebNoticeProhibitConnectUser m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n",
                m_id, flag, time, ip, port);
        }
        CUserManager* um = &m_pclApp->m_userManager;
        if (flag && um->DeleteProhibitUser(m_id))
        {
            CMyFileLog log("OnWebNoticeProhibitConnectUser", 0xe6);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnWebNoticeProhibitConnectUser Delete Err  m_id : %d, flag( %d ), time( %d ), ip( %d ), port( %d )\n",
                m_id, flag, time, ip, port);
            m_pclApp->m_serverHandler->SendAllTcpServer(header);
            return;
        }
        CDNFProhibitUser* pu = um->FindProhibitUser(m_id);
        if (!pu)
        {
            pu = new CDNFProhibitUser;
            pu->SetMonitorWaitTime(m_id, 2);
            pu->SetIpPort(ip, port);
            um->InsertProhibitUser(m_id, pu);
            m_pclApp->m_serverHandler->SendAllTcpServer(header);
            return;
        }
        ((char*)header)[0x11] = 2;
        {
            CMyFileLog log("OnWebNoticeProhibitConnectUser", 0x113);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnWebNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n",
                m_id, ip, port, ((char*)header)[0x11], ((char*)header)[0xe]);
        }
        if (!((CUdpHandler*)m_pclApp->Get_UdpHandler())
                 ->SendToClient((char*)header, 0x13, port, 0, ip))
            throw CDNFException(strerror(errno));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnWebNoticeProhibitConnectUser", 0x11b);
        log("./log/Except",
            "CPacketTranslater::OnWebNoticeProhibitConnectUser() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnWebNoticeProhibitConnectUser", 0x120);
        log("./log/Except",
            "CPacketTranslater::OnWebNoticeProhibitConnectUser() Exception Break\n");
    }
}

void CPacketTranslater::OnMonitorNoticeProhibitConnectUser(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser : 0 == m_pclApp");
        CUserManager* um = &m_pclApp->m_userManager;
        int key = *(int*)((char*)header + 0xa);
        char flag = ((char*)header)[0xe];
        short time = *(short*)((char*)header + 0xf);
        CDNFProhibitUser* pu = um->FindProhibitUser(key);
        if (!pu)
        {
            CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x138);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Time Out, m_id : %d, flag( %d ), time( %d )\n",
                key, flag, time);
            return;
        }
        unsigned int uip;
        unsigned short uport;
        pu->GetIpPort(uip, uport);
        if (uip == 0 && uport == 0)
            return;
        if (flag == 2)
        {
            *(unsigned short*)((char*)header) = 0x4c8;
            ((char*)header)[0x11] = 2;
            *(unsigned short*)((char*)header + 2) = 0x12;
            CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x14a);
            log("./log/ProhibitUser",
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d), m_bProhibitConnect(%d)\n",
                key, uip, uport, ((char*)header)[0x11], ((char*)header)[0xe]);
            if (!((CUdpHandler*)m_pclApp->Get_UdpHandler())
                     ->SendToClient((char*)header, 0x12, uport, 0, uip))
                throw CDNFException(strerror(errno));
            return;
        }
        pu->IncreMonitorRetPacket();
        pu->SetProhibitUserInfo(((char*)header)[0x11]);
        CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x157);
        log("./log/ProhibitUser",
            "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Check IP Port, m_id : %d, server group(%d), cnt(%d), m_bIsConnect(%d)",
            key, ((char*)header)[0x12], pu->GetMonitorRetPacketCnt(), ((char*)header)[0x11]);
        if (pu->GetMonitorRetPacketCnt() >= m_pclApp->m_serverHandler->GetAlivedMonitorServer())
        {
            Packet_Web_Prohibit_User_Connect pkt;
            ((char*)&pkt)[0xe] = 0x7f;
            *(unsigned short*)((char*)&pkt + 0xf) = 0;
            ((char*)&pkt)[0x11] = pu->GetConnectFlag();
            CMyFileLog log2("OnMonitorNoticeProhibitConnectUser", 0x165);
            log2("./log/ProhibitUser",
                "CPacketTranslater::OnMonitorNoticeProhibitConnectUser SendToClient, m_id : %d, ip( %d ), port( %d ), m_bIsConnect(%d)\n",
                key, uip, uport, pu->GetConnectFlag());
            if (!((CUdpHandler*)m_pclApp->Get_UdpHandler())
                     ->SendToClient((char*)&pkt, 0x12, uport, 0, uip))
                throw CDNFException(strerror(errno));
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x180);
        log("./log/Except",
            "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnMonitorNoticeProhibitConnectUser", 0x185);
        log("./log/Except",
            "CPacketTranslater::OnMonitorNoticeProhibitConnectUser Exception Break\n");
    }
}

// ============================================================
// CTableBase / CAppInit / CAppConfig / CServerConfig
// ============================================================
CTableBase::CTableBase() {}
CTableBase::~CTableBase() {}

int CTableBase::Load_Txt_Table_Data(const char* fileName, int idx)
{
    FILE* f = fopen(fileName, "r");
    if (!f)
        return -1;
    char buf[0x400];
    int count = 0;
    while (!feof(f) && fgets(buf, 0x400, f))
    {
        if (buf[0] == '#')
            continue;
        if (count >= idx)
            return -2;
        if (!Parse_Table(buf, count))
            return -1;
        count++;
    }
    return count;
}

CAppInit::CAppInit() {}
CAppInit::~CAppInit() {}

CAppStartInit::CAppStartInit() {}
CAppStartInit::~CAppStartInit() {}

int CAppStartInit::Save_pid(const std::string& path)
{
    std::string full = std::string("./pid/") + path + std::string(".pid");
    int fd = open(full.c_str(), 0x42, 0x1a4);
    if (fd < 0)
        return 0;
    char buf[0x400];
    memset(buf, 0, 0x400);
    sprintf(buf, "%ld\n", (long)getpid());
    int n = write(fd, buf, strlen(buf));
    if (n < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    if (strcmp(argv[2], "start") == 0)
    {
        int pid = fork();
        if (pid < 0)
            return -1;
        if (pid > 0)
            exit(0);
        setsid();
        chdir("./");
        umask(0);
    }
    if (!Save_pid(std::string(argv[1])))
        return -1;
    return 0;
}

void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    app->m_appConfig->Check_FileName(std::string(argv[1]));
    app->m_serverConfig = new CServerConfig;
    app->m_killUsrConfig = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) != 0)
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
}

CAppStopInit::CAppStopInit() {}
CAppStopInit::~CAppStopInit() {}

void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, Manager had stoped this program.");
    app->Clear();
    if (app->Send_Term_Signal(std::string(argv[1])))
        throw CDNFException("By CAppStopInit::Init(), this app had stoped!");
    throw CDNFException("By CAppStopInit::Init(), this app had stoped!_1");
}

CAppConfig::CAppConfig() {}
CAppConfig::~CAppConfig() {}

int CAppConfig::Load_Txt_Table_Data(const char* fileName, int idx) { return 0; }
int CAppConfig::Load_Table(const std::string& fileName)
{
    std::string path = std::string("./cfg/") + fileName + std::string(".cfg");
    int n = Load_Txt_Table_Data(path.c_str(), 0x13);
    if (n > 0 && n <= 0x12)
        return 1;
    CMyFileLog log("Load_Table", 0x4e);
    log("./log/TableError.log", "App Config Table - ReturnCode = %d\n", n);
    throw CDNFException("CAppConfig::Load_Setup_Table() Exception Break!");
}
int CAppConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[2];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 2) == 2 && size <= 0x12)
    {
        switch (size)
        {
        case 0:
            m_frameCount = (char)atoi(fields[0]);
            break;
        case 1:
            m_serverUdpPort = atoi(fields[0]);
            break;
        case 2:
            m_serverTcpPort = atoi(fields[0]);
            break;
        default:
            return 0;
        }
        return 1;
    }
    return 0;
}
int CAppConfig::Check_FileName(const std::string& fileName)
{
    std::string cfg = std::string("./cfg/") + fileName + std::string(".cfg");
    if (access(cfg.c_str(), 0) != 0)
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    std::string pid = std::string("./pid/") + fileName + std::string(".pid");
    if (access(pid.c_str(), 0) != 0)
        throw CDNFException(
            "CAppConfig::Set_FileName() There is already pid file! Exception Break! Check ./pid/*.pid files");
    return 1;
}

CServerConfig::CServerConfig() {}
CServerConfig::~CServerConfig() {}

int CServerConfig::Load_Txt_Table_Data(const char* fileName, int idx) { return 0; }
int CServerConfig::Load_Table(const std::string& fileName)
{
    int n = Load_Txt_Table_Data(fileName.c_str(), 0x65);
    if (n > 0 && n <= 0x64)
        return 1;
    CMyFileLog log("Load_Table", 0x38);
    log("./log/TableError.log", "Server Config Table - ReturnCode = %d\n", n);
    throw CDNFException("CServerConfig::Load_Setup_Table() Exception Break!");
}
int CServerConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[4];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 4) == 4 && size <= 0x64)
    {
        ST_ServerInfo* info = &m_servers[size];
        info->m_index = (char)atoi(fields[0]);
        info->m_type = (char)atoi(fields[1]);
        info->m_name = fields[2];
        info->m_port = (unsigned short)atoi(fields[3]);
        return 1;
    }
    return 0;
}

CKillUSRConfig::CKillUSRConfig() {}
CKillUSRConfig::~CKillUSRConfig() {}
int CKillUSRConfig::Load_Table(const std::string& fileName)
{
    int n = Load_Txt_Table_Data(fileName.c_str(), 0x64);
    if (n > 0 && n <= 0x64)
        return 1;
    CMyFileLog log("CKillUSRConfig::Load_Table", 0x5b);
    log("./log/Config", "CKillUSRConfig Load_Table() fail(%d)", n);
    throw CDNFException("CKillUSRConfig::Load_Table() fail!");
}
int CKillUSRConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[4];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 4) == 4)
    {
        ST_KillUSRConfig* kc = new (std::nothrow) ST_KillUSRConfig;
        if (!kc)
            return 0;
        kc->m_type = atoi(fields[0]);
        kc->m_field4 = atoi(fields[1]);
        kc->m_field8 = atoi(fields[2]);
        kc->m_fieldC = atoi(fields[3]);
        m_list.push_back(kc);
        return 1;
    }
    return 0;
}
void CKillUSRConfig::Clear_Table()
{
    if (m_list.empty())
        return;
    for (std::vector<ST_KillUSRConfig*>::iterator it = m_list.begin();
         it != m_list.end(); ++it)
    {
        delete *it;
        *it = 0;
    }
    m_list.clear();
}

// ============================================================
// ST_ServerInfo / CVersionMgr / CSourceVersionMgr
// ============================================================
ST_ServerInfo::ST_ServerInfo()
{
    m_index = 0;
    m_type = 0xff;
    m_name = "";
    m_port = 0;
}

ST_ServerInfo::~ST_ServerInfo() {}

CVersionMgr::CVersionMgr(int a, int b, int c, int d)
{
    m_versions[0] = a;
    m_versions[1] = b;
    m_versions[2] = c;
    m_versions[3] = d;
}

CSourceVersionMgr::SourceVersion::SourceVersion(const SourceVersion& other)
{
    m_name = other.m_name;
    m_version = other.m_version;
}

CSourceVersionMgr::SourceVersion& CSourceVersionMgr::SourceVersion::operator=(const SourceVersion& other)
{
    m_name = other.m_name;
    m_version = other.m_version;
    return *this;
}

CSourceVersionMgr::SourceVersion::~SourceVersion() {}

CSourceVersionMgr::CSourceVersionMgr() {}
CSourceVersionMgr::~CSourceVersionMgr() {}

// ============================================================
// CQueryCounter
// ============================================================
CQueryCounter::CQueryCounter()
{
    m_interval = 0x1e;
    m_timer = new CUnixTimer;
    ResetQueryCount();
}

CQueryCounter::~CQueryCounter()
{
    delete m_timer;
}

void CQueryCounter::ResetQueryCount()
{
    m_interval = 0x1e;
    memset(&m_counts, 0, 0x504);
    memset((char*)&m_counts + 0x504, 0, 0xa08);
}

void CQueryCounter::WriteFileLog()
{
    char buf[0x400] = {0};
    for (int i = 1; i <= 0x140; i++)
        sprintf(buf, "%s\t%d(%d)", buf, i, m_counts[i]);
    CMyFileLog log("WriteFileLog", 0x56);
    log("./log/QueryCount", "%s", buf);
}

void CQueryCounter::WriteDBLog(CDBManager& db)
{
    m_interval--;
    if (m_interval > 0)
        return;
    for (int q = 0x4e21; q <= 0x4f60; q++)
    {
        int idx = q - 0x4e20;
        int time = (int)(m_responseTimes[idx] * 1000.0);
        if (!db.UpdateQueryCount(q, m_counts[idx], time))
        {
            CMyFileLog log("WriteDBLog", 0x63);
            log("./log/QueryCount", "Count DB Insert Fail! id(%d), count(%d), time(%d)", q, m_counts[idx], time);
        }
        else
        {
            CMyFileLog log("WriteDBLog", 0x66);
            log("./log/QueryCount", "Count DB Insert Success! id(%d), count(%d), time(%d)", q, m_counts[idx], time);
            m_counts[idx] = 0;
            m_responseTimes[idx] = 0.0;
        }
    }
    m_interval = 0x1e;
}

void CQueryCounter::IncreQureyCount(unsigned int idx)
{
    if (idx > 0x4f60)
        return;
    int i = idx - 0x4e20;
    m_counts[i]++;
    m_timer->SetLastTime();
    CMyFileLog log("IncreQureyCount", 0x42);
    log("./log/QueryCount", "IncreQureyCount() type(%d) , Count(%d)!", i, m_counts[i]);
}

void CQueryCounter::SetResponseTime(unsigned int ms)
{
    if (ms > 0x4f60)
        return;
    int i = ms - 0x4e20;
    m_responseTimes[i] = m_timer->GetTimeInterval() + m_responseTimes[i];
}

static CQueryCounter g_queryCounter;
CQueryCounter* CQueryCounterInstance() { return &g_queryCounter; }

// ============================================================
// CPacketTracer / CPacketDecoder
// ============================================================
CPacketTracer::CPacketTracer()
{
    m_field0 = 0;
    m_log = "";
}

CPacketTracer::~CPacketTracer() {}

void CPacketTracer::AbsoluteWriteLog()
{
    CMyFileLog log("AbsoluteWriteLog", 0x2e);
    log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_log.c_str());
    ResetLog();
}

void CPacketTracer::WriteLog()
{
    if (m_field0 % 30 == 0)
    {
        CMyFileLog log("WriteLog", 0x26);
        log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_log.c_str());
        ResetLog();
    }
}

void CPacketTracer::AddLog(int type, int len)
{
    char buf[0x20] = {0};
    sprintf(buf, "(%d/%d)", type, len);
    m_log += buf;
    m_field0++;
}

static CPacketTracer g_packetTracer;
CPacketTracer* CPacketTracerInstance() { return &g_packetTracer; }

CPacketDecoder::CPacketDecoder()
{
    m_udpQueue = 0;
    m_udpQLock = 0;
    m_udpBLock = 0;
    void (**table)(PacketHeader*) = (void (**)(PacketHeader*))((char*)this + 0x18);
    for (int i = 0x3e8; i <= 0x27ff; i++)
        table[i] = 0;
    table[0x3ec] = CPacketTranslater::OnHeartBeat;
    table[0x44f] = CPacketTranslater::OnCommonPacket;
    table[0x450] = CPacketTranslater::OnCommonPacket;
    table[0x4c1] = CPacketTranslater::OnCommonPacket;
    table[0x4c8] = CPacketTranslater::OnWebNoticeProhibitConnectUser;
    table[0x4c9] = CPacketTranslater::OnMonitorNoticeProhibitConnectUser;
    table[0x9d3] = CPacketTranslater::OnCommonPacket;
    table[0x9df] = CPacketTranslater::OnWebNoticeBroadcast;
    table[0xa8c] = CPacketTranslater::OnCommonPacket;
    table[0xfa0] = CPacketTranslater::OnInnerPacketLogin;
    table[0xfa1] = CPacketTranslater::OnInnerPacketLogout;
    table[0x106b] = CPacketTranslater::OnTcpServerLogin;
    table[0x106c] = CPacketTranslater::OnTcpServerLogout;
    table[0x106d] = CPacketTranslater::OnTcpServerHeartbeat;
    table[0x27e2] = CPacketTranslater::OnWebNoticeInGameAD;
}

CPacketDecoder::~CPacketDecoder()
{
    m_udpQueue = 0;
    m_udpQLock = 0;
}

static CPacketDecoder g_packetDecoder;
CPacketDecoder* CPacketDecoderInstance() { return &g_packetDecoder; }

// ============================================================
// CServerHandler（本批最小实现）
// ============================================================
CServerHandler::CServerHandler() {}
CServerHandler::~CServerHandler() {}

void CServerHandler::SendToMonitorServer(char* buf, int len, unsigned char idx)
{
    ((CMonitorServer*)this + idx)->SendToServer(buf, len);
}

// ============================================================
// 杂项
// ============================================================
int getErrno()
{
    return *__errno_location();
}

int parse_string(std::vector<std::string>& v, std::string& s, char c)
{
    int len = s.size();
    int pos = 0;
    std::string tok;
    while (pos < len)
    {
        int found = s.find(c, pos);
        if (found == (int)std::string::npos)
        {
            tok = s.substr(pos, len - pos);
            if (!tok.empty())
                v.push_back(tok);
            break;
        }
        tok = s.substr(pos, found - pos);
        if (!tok.empty())
            v.push_back(tok);
        pos = found + 1;
    }
    return 1;
}

CDNFException::CDNFException(const std::string& msg) : m_msg(msg) {}
CDNFException::~CDNFException() throw() {}

// 强制发出原版存在的 libstdc++ 分配器弱符号
template class std::allocator<std::string>;
template class std::allocator<ST_KillUSRConfig*>;

const char* CDNFException::what() const throw()
{
    CMyFileLog log("what", 0x1a);
    log("./log/Except", "%s", m_msg.c_str());
    return m_msg.c_str();
}

unsigned long long TIME_to_ulonglong_date(void* t)
{
    unsigned int* p = (unsigned int*)t;
    return (unsigned long long)(p[0] * 10000 + p[1] * 100 + p[2]);
}

unsigned long long TIME_to_ulonglong_time(void* t)
{
    unsigned int* p = (unsigned int*)t;
    return (unsigned long long)(p[3] * 10000 + p[4] * 100 + p[5]);
}

unsigned long long TIME_to_ulonglong(void* t)
{
    return 0;
}

unsigned long long TIME_to_ulonglong_datetime(void* t)
{
    return 0;
}

// ============================================================
// 出库化 getter（原版为独立符号）
// ============================================================

unsigned int CDNFProhibitUser::GetDBID() { return m_dbid; }
unsigned short CDNFProhibitUser::GetProhibitRemainTime() { return m_remainTime; }
unsigned char CDNFProhibitUser::GetMonitorRetPacketCnt() { return m_retPacketCnt; }
char CDNFProhibitUser::GetConnectFlag() { return m_connectFlag; }
void CDNFProhibitUser::IncreMonitorRetPacket() { m_retPacketCnt++; }

void CMonitorServer::ResetHeartBeat() { m_heartBeat = 0x14; m_fieldC = 0; }
char CMonitorServer::IsConnected() { return m_connected; }
void CMonitorServer::SetConnFlag(bool flag) { m_connected = flag; }
void CMonitorServer::OnDisconnect() { m_connected = 0; ResetHeartBeat(); }

void CTcpServer::SetServerIndex(unsigned char idx) { m_index = idx; }
unsigned char CTcpServer::GetServerIndex() { return m_index; }
void* CTcpServer::GetSocket() { return m_socket; }
void CTcpServer::NotifyHeartbeat() { time(&m_heartbeat); }

unsigned short CTcpNetSystem::Get_TcpServerPort() { return m_serverPort; }
CTcpHandler* CTcpNetSystem::Get_TcpHandler() { return m_tcpHandler; }
CSwapQueue<TcpRecvQueue, 2>* CTcpNetSystem::Get_TcpSwapQPacket() { return &m_recvSwapQueue; }
void* CTcpNetSystem::Get_TcpRecvQPacket() { return &m_recvSwapQueue; }
CMutex* CTcpNetSystem::Get_TcpRecvQLock() { return &m_mutex90; }
CMutex* CTcpNetSystem::Get_TcpRecvBLock() { return &m_mutexA8; }
CMutex* CTcpNetSystem::Get_TcpSendQLock() { return &m_mutexE8; }
CMutex* CTcpNetSystem::Get_TcpSendBLock() { return &m_mutex100; }
CTcpSendQueue* CTcpNetSystem::Get_TcpSendQPacket() { return &m_sendQueue; }

int EpollHandler::GetEpollFD() { return m_epollFd; }
void* EpollHandler::GetEpollEvents() { return m_events; }

int TCPSocket::getHandle() const { return m_fd; }
char* TCPSocket::getPeerAdrs() { return (char*)&m_addr; }
unsigned short TCPSocket::getPeerPort() { return m_port; }

TCPSocket* CPeer::GetTcpSocket() { return this; }
int CPeer::get_remain_sendlen() { return m_remainSendLen; }

void CThreadInterface::stop() { m_stop = 0; }
void CUdpNetworkThread::SetUDPQueue(UdpRecvQueue* q) { m_udpQueue = q; }
void CSignal::attachApp(CApplication* app) { m_app = app; }
CSignal* CSignalTranslator::getSignal(int idx) const { return m_signals[idx]; }
int CUdpHandler::GetServerSocket() { return m_sock; }

unsigned int CUdpHandler::InetAddr(const char* ip) const
{
    return inet_addr(ip);
}

int CAppConfig::Get_ServerUdpPort() { return m_serverUdpPort; }
int CAppConfig::Get_ServerTcpPort() { return m_serverTcpPort; }
unsigned char CAppConfig::Get_FrameCountValue() { return m_frameCount; }
void* CServerConfig::GetServerInfo() { return &m_servers; }
void* CKillUSRConfig::GetInfo() const { return (void*)&m_list; }

void CPacketTracer::ResetLog() { m_log.clear(); }
void CPacketDecoder::Process() { UdpProcess(); TcpProcess(); }
void CPacketDecoder::SetTCPQueue(TcpRecvQueue* q) { m_tcpQueue = q; }
void CPacketDecoder::SetUdpQueue(UdpRecvQueue* q) { m_udpQueue = q; }

void CPacketDecoder::Attach(CApplication* app)
{
    if (!app)
        return;
    m_udpQueue = app->Get_UdpPacketParseQ();
    m_tcpQueue = app->Get_TcpNetSystem()->Get_TcpSwapQPacket()->GetParseQ();
    m_udpQLock = app->Get_UdpQLock();
    m_udpBLock = app->Get_UdpBLock();
    m_tcpRecvQLock = app->Get_TcpNetSystem()->Get_TcpRecvQLock();
    m_tcpRecvBLock = app->Get_TcpNetSystem()->Get_TcpRecvBLock();
}

void CPacketDecoder::TcpProcess()
{
    if (!m_tcpQueue)
        return;
    if (!m_tcpRecvQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    while (!m_tcpQueue->empty())
    {
        CTcpRecvBuffer* buf = m_tcpQueue->front();
        m_tcpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        if (m_tcpQueue->size() > 0xa)
        {
            CMyFileLog log("TcpProcess", 0xe7);
            log("./log/TcpRecv", "cnt(%)id(%d)size(%d)ip(%d)",
                (int)m_tcpQueue->size(), p->packetId, p->packetSize,
                ((char*)buf)[6]);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_tcpRecvBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException("CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_tcpRecvBLock);
            delete buf;
        }
    }
}

void CPacketDecoder::UdpProcess()
{
    if (!m_udpQueue)
        return;
    if (!m_udpQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    while (!m_udpQueue->empty())
    {
        CUdpRecvBuffer* buf = m_udpQueue->front();
        m_udpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        if (m_udpQueue->size() > 0x64)
        {
            CMyFileLog log("UdpProcess", 0x91);
            log("./log/UdpRecv", "cnt(%d)id(%d)size(%d)",
                (int)m_udpQueue->size(), p->packetId, p->packetSize);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException("CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_udpBLock);
            delete buf;
        }
    }
}

char CPacketDecoder::MsgDecode(PacketHeader* header)
{
    if (!header)
        return 0;
    unsigned short id = header->packetId;
    if (id > 0x27ff || id <= 0x3e7)
    {
        printf("Unknown Packet(%d)", id);
        CMyFileLog log("MsgDecode", 0x6c);
        log("./log/PacketDecode", "Unknown Packet(%d)", id);
        return 0;
    }
    void (**handler)(PacketHeader*) = (void (**)(PacketHeader*))((char*)this + 0x18 + id * 4);
    if (!*handler)
        return 0;
    (*handler)(header);
    return 1;
}

int CMySql::get_n_rows() { return m_nRows; }
int CMySql::get_n_fields() { return m_nFields; }
char CMySql::ping() { return mysql_ping(m_mysql); }
char CMySql::init()
{
    if (!init_db_handle())
        return 0;
    if (!set_compress_option())
        return 0;
    if (!set_read_default_grp_option())
        return 0;
    memset(m_query, 0, 0x1001);
    m_queryLen = 0;
    m_nRows = 0;
    m_nFields = 0;
    return 1;
}

void CServerHandler::Attach(CApplication* app)
{
    if (app)
        m_app = app;
}

void CServerHandler::SetMonitorServerIpPort(unsigned char idx, unsigned int ip, unsigned short port) {}

void CServerHandler::Load(ST_ServerInfo* infos)
{
    for (int i = 0; i <= 0x64; i++)
    {
        if (infos[i].m_type == 3)
        {
            unsigned char idx = infos[i].m_index;
            if (idx > 0x64)
                throw CDNFException("CServerHandler::Load() Server Table Exception Break!");
            m_monitorServers[idx].Init(infos[i].m_name, infos[i].m_port, idx);
        }
    }
}

CTcpServer* CServerHandler::GetTcpServer(unsigned int idx)
{
    for (std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if ((unsigned int)server->GetSocket() == idx)
            return server;
    }
    return 0;
}

CTcpServer* CServerHandler::GetTcpServer(unsigned char idx)
{
    std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.find(idx);
    if (it != m_tcpServers.end())
        return it->second;
    return 0;
}

CMonitorServer* CServerHandler::GetMonitorServer(int idx)
{
    if (idx <= 0x64 && m_monitorServers[idx].IsValidMonitorServer())
        return &m_monitorServers[idx];
    CMyFileLog log("CServerHandler::GetMonitorServer", 0xc7);
    log("./log/ServerHandler", "GetMonitorServer(%d) fail", idx);
    return 0;
}

void CServerHandler::Process()
{
    CMonitorServer* p = m_monitorServers;
    for (int i = 0x65; i != 0; i--, p++)
    {
        if (!p->IsValidMonitorServer())
            continue;
        if (p->IsConnected() && p->IsHeartBeatTimeOver())
        {
            p->OnDisconnect();
            CMyFileLog log("CServerHandler::Process", 0x55);
            log("./log/ServerHandler", "MonitorServer(%d) disconnect", 0x66 - i);
        }
    }
}

char CServerHandler::CreateTcpServer(unsigned char idx, unsigned int port)
{
    CTcpServer* server = new CTcpServer;
    server->Init(port, m_app->Get_TcpNetSystem());
    server->SetServerIndex(idx);
    m_tcpServers[idx] = server;
    return 1;
}

char CServerHandler::DeleteTcpServer(unsigned char idx)
{
    std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.find(idx);
    if (it != m_tcpServers.end())
    {
        CTcpServer* server = it->second;
        if (server)
            delete server;
        m_tcpServers.erase(it);
        return 1;
    }
    return 0;
}

void CServerHandler::CheckTcpServerHeartbeat()
{
    for (std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end();)
    {
        CTcpServer* server = it->second;
        if (server && server->IsHeartbeatTimeOver())
        {
            CPeer* peer = m_app->Get_TcpNetSystem()->GetPeer((unsigned int)server->GetSocket());
            if (peer)
            {
                m_app->Get_TcpNetSystem()->DeletePeer(peer);
            }
            delete server;
            m_tcpServers.erase(it++);
        }
        else
        {
            ++it;
        }
    }
}

void CServerHandler::SendAllTcpServer(PacketHeader* header)
{
    for (std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server->IsValidServer())
        {
            char* buf = (char*)server->makePacketHeader(header->packetId, header->packetSize);
            memcpy(buf + 0xa, (char*)header + 0xa, header->packetSize - 0xa);
            server->SendToServer(buf);
        }
    }
}

void CServerHandler::SetConnectFlag(unsigned char idx, bool flag)
{
    if (idx <= 0x64 && m_monitorServers[idx].IsValidMonitorServer())
    {
        m_monitorServers[idx].SetConnFlag(flag);
        return;
    }
    CMyFileLog log("CServerHandler::SetConnectFlag", 0xa7);
    log("./log/ServerHandler", "SetConnectFlag(%d) fail", idx);
}

int CServerHandler::GetAlivedMonitorServer()
{
    if (m_tcpServers.empty())
        return 0;
    int count = 0;
    for (std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server->IsValidServer())
            count++;
    }
    return count;
}

char CServerHandler::IsConnectedMonitorServer(unsigned char idx)
{
    if (idx <= 0x64 && m_monitorServers[idx].IsValidMonitorServer())
        return m_monitorServers[idx].IsConnected();
    CMyFileLog log("CServerHandler::IsConnectedMonitorServer", 0x91);
    log("./log/ServerHandler", "IsConnectedMonitorServer(%d) fail", idx);
    return 0;
}

void CServerHandler::ResetHeartBeat(unsigned char idx)
{
    if (idx <= 0x64 && m_monitorServers[idx].IsValidMonitorServer())
    {
        m_monitorServers[idx].ResetHeartBeat();
        return;
    }
    CMyFileLog log("CServerHandler::ResetHeartBeat", 0x70);
    log("./log/ServerHandler", "ResetHeartBeat(%d) fail", idx);
}

void CServerHandler::SendToTcpServer(PacketHeader* header, unsigned char idx)
{
    CTcpServer* server = GetTcpServer(idx);
    if (!server)
        return;
    char* buf = (char*)server->makePacketHeader(header->packetId, header->packetSize);
    memcpy(buf + 0xa, (char*)header + 0xa, header->packetSize - 0xa);
    server->SendToServer(buf);
}

void CServerHandler::SendToTcpServer(char* buf, int len, unsigned char idx)
{
    CTcpServer* server = GetTcpServer(idx);
    if (!server)
        return;
    server->SendToServer(buf);
}

void CServerHandler::SendAllToMonitorServer(char* buf, int len)
{
    CMonitorServer* p = m_monitorServers;
    for (int i = 0x65; i != 0; i--, p++)
    {
        if (p->IsValidMonitorServer() && p->IsConnected())
            p->SendToServer(buf, len);
    }
}

char CDNFProhibitUser::IsTimeOutWaitMonitor()
{
    m_remainTime--;
    if (m_remainTime <= 0)
        return 1;
    return 0;
}

ST_KillUSRConfig::ST_KillUSRConfig()
{
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
}

void CSourceVersionMgr::InsertSourceVersion(char* name, int version)
{
    m_versions.push_back(SourceVersion(name, version));
}

CSourceVersionMgr::SourceVersion::SourceVersion(char* name, int version)
{
    m_name = name;
    m_version = version;
}

char CMonitorServer::IsHeartBeatTimeOver()
{
    m_heartBeat--;
    if (m_heartBeat == 0)
    {
        m_fieldC++;
        if (m_fieldC > 0x14)
            return 1;
        m_heartBeat = 0x14;
    }
    return 0;
}

unsigned short CTcpServer::makePacketHeader(unsigned short type, unsigned short size)
{
    if (!m_net)
        return 0;
    CTcpSendBuffer* buf = m_net->Acquire_TcpSendBuffer();
    char* p = (char*)buf;
    *(unsigned short*)p = type;
    *(unsigned short*)(p + 2) = size;
    *(int*)(p + 6) = (int)m_socket;
    return (unsigned short)(unsigned int)buf;
}

void CommonTime::SetCurTime()
{
    time_t t;
    time(&t);
    struct tm* tm = localtime(&t);
    m_year = tm->tm_year - 0x64;
    m_mon = tm->tm_mon + 1;
    m_mday = tm->tm_mday;
    m_hour = tm->tm_hour;
    m_min = tm->tm_min;
    m_sec = tm->tm_sec;
}

// ---- nothrow new/delete（原版来自 libstdc++ 弱符号）----
void* operator new(std::size_t size, const std::nothrow_t&) throw()
{
    void* p = 0;
    try
    {
        p = ::operator new(size);
    }
    catch (...)
    {
    }
    return p;
}

void operator delete(void* ptr, const std::nothrow_t&) throw()
{
    if (ptr)
        free(ptr);
}
