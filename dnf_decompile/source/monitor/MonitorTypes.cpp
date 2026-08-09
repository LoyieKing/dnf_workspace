#include "MonitorTypes.h"

#include "DNFFileLog.h"
#include "MonitorApp.h"
#include "MonitorTable.h"
#include "Thread.h"
#include "DNFFunctionLib.h"
#include "Packet_Monitor_Member_Secede.h"
#include "Packet_GM_Request_Mid.h"
#include "Packet_PvPChannelInfo.h"
#include "Packet_PvPChannelUserCount.h"
#include "Packet_Item_Limit_Edition_Sell_Start.h"
#include "Packet_DBMW_Change_Char_Name.h"
#include "Packet_Monitor_Reply_Charac_Info.h"

#include <fcntl.h>
#include <cerrno>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <signal.h>
#include <sys/select.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/epoll.h>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <unistd.h>

#define REG_HANDLER(id, fn) m_handlers[id] = (void*)CPacketTranslater::fn

int getErrno()
{
    return *__errno_location();
}

template<class T>
void* MemPool<T>::headOfFreeList_;

template<class T>
MemPool<T>::MemPool() {}
template<class T>
MemPool<T>::MemPool(unsigned int count) : m_size((int)sizeof(T)), m_count((int)count) {}
template<class T>
MemPool<T>::~MemPool() {}

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
            DNF_LOG_SCOPE_LINE(0x7d, "./log/Mempool", "class size(%d) cnt(%d)", m_size,
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
        ::operator delete(ptr);
    }
}

template class MemPool<CUdpRecvBuffer>;
template class MemPool<CTcpRecvBuffer>;
template class MemPool<CTcpSendBuffer>;
template class MemPool<CPacketBuffer>;
template class MemPool<CUser>;
template class MemPool<CMember>;
template class MemPool<CCashObject>;
template class MemPool<CBuddy>;
template class MemPool<CBlackUser>;
template class MemPool<CPeer>;
template class MemPool<CDNFProhibitUser>;

void* CUdpRecvBuffer::operator new(unsigned int size)
{
    return ::operator new(size);
}
void CUdpRecvBuffer::operator delete(void* ptr)
{
    ::operator delete(ptr);
}

void* CTcpRecvBuffer::operator new(unsigned int size)
{
    return ::operator new(size);
}
void CTcpRecvBuffer::operator delete(void* ptr)
{
    ::operator delete(ptr);
}

void* CTcpSendBuffer::operator new(unsigned int size)
{
    return ::operator new(size);
}
void CTcpSendBuffer::operator delete(void* ptr)
{
    ::operator delete(ptr);
}

void* CPacketBuffer::operator new(unsigned int size)
{
    return ::operator new(size);
}
void CPacketBuffer::operator delete(void* ptr)
{
    ::operator delete(ptr);
}

void* CBlackUser::operator new(unsigned int size) { return ::operator new(size); }
void CBlackUser::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void* CCashObject::operator new(unsigned int size) { return ::operator new(size); }
void CCashObject::operator delete(void* p) { ::operator delete(p); }
void CCashObject::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CUdpRecvBuffer::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CTcpRecvBuffer::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CTcpSendBuffer::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CPacketBuffer::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CPeer::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CDNFProhibitUser::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CUser::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CBuddy::operator delete(void* p, unsigned int size) { ::operator delete(p); }
void CMember::operator delete(void* p) { ::operator delete(p); }
void CMember::operator delete(void* p, unsigned int size) { ::operator delete(p); }

char CAppLoadChecker::CheckTcpRecvQ(int size)
{
    if (checkTcpRecvLoad(size))
    {
        setTcpRecvQueue(size);
        return 1;
    }
    return 0;
}
char CAppLoadChecker::CheckUdpRecvQ(int size)
{
    if (checkUdpRecvLoad(size))
    {
        setUdpRecvQueue(size);
        return 1;
    }
    return 0;
}
char CAppLoadChecker::CheckTcpSendQ(int size)
{
    if (checkTcpSendLoad(size))
    {
        setTcpSendQueue(size);
        return 1;
    }
    return 0;
}
void CAppLoadChecker::setTcpRecvQueue(int size) { m_tcpRecvLast = size; }
void CAppLoadChecker::setUdpRecvQueue(int size) { m_udpRecvLast = size; }
void CAppLoadChecker::setTcpSendQueue(int size) { m_tcpSendLast = size; }
void CAppLoadChecker::RequestDB(CServerHandler* serverHandler, int flag, int size)
{
    Packet_Server_Queue_Load_Statistic pkt;
    pkt.m_fieldA = 0xc9;
    pkt.m_fieldB = (unsigned char)flag;
    pkt.m_fieldC = (unsigned short)size;
    serverHandler->SendToDB(&pkt);
}
CAppLoadChecker::CAppLoadChecker()
{
    m_tcpRecvLast = 0;
    m_udpRecvLast = 0;
    m_tcpSendLast = 0;
    m_tcpRecvLevel = 0;
    m_udpRecvLevel = 0;
    m_tcpSendLevel = 0;
}
CAppLoadChecker* CAppLoadCheckerInstance() { return 0; }
int CAppLoadChecker::checkTcpRecvLoad(int size)
{
    char level = m_tcpRecvLevel;
    if (level < 1 && 0x32 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 1;
        return 1;
    }
    if (level < 2 && 100 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 2;
        return 1;
    }
    if (level < 3 && 200 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 3;
        return 1;
    }
    if (level < 4 && 500 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 4;
        return 1;
    }
    if (level < 5 && 1000 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 5;
        return 1;
    }
    if (level < 6 && 5000 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 6;
        return 1;
    }
    if (level == 6 && 5000 < size - m_tcpRecvLast)
    {
        return 1;
    }
    if (level < 0 || m_tcpRecvLast - size < 0x33)
    {
        if (level < -1 || m_tcpRecvLast - size < 0x65)
        {
            if (level < -2 || m_tcpRecvLast - size < 0xc9)
            {
                if (level < -3 || m_tcpRecvLast - size < 0x1f5)
                {
                    if (level < -4 || m_tcpRecvLast - size < 0x3e9)
                    {
                        if (level < -5 || m_tcpRecvLast - size < 0x1389)
                        {
                            if (level == 0xfa && 5000 < m_tcpRecvLast - size)
                            {
                                return 1;
                            }
                            return 0;
                        }
                        m_tcpRecvLevel = 0xfa;
                        return 1;
                    }
                    m_tcpRecvLevel = 0xfb;
                    return 1;
                }
                m_tcpRecvLevel = 0xfc;
                return 1;
            }
            m_tcpRecvLevel = 0xfd;
            return 1;
        }
        m_tcpRecvLevel = 0xfe;
        return 1;
    }
    m_tcpRecvLevel = 0xff;
    return 1;
}
int CAppLoadChecker::checkUdpRecvLoad(int size)
{
    char level = m_udpRecvLevel;
    if (level < 1 && 0x32 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 1;
        return 1;
    }
    if (level < 2 && 100 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 2;
        return 1;
    }
    if (level < 3 && 200 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 3;
        return 1;
    }
    if (level < 4 && 500 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 4;
        return 1;
    }
    if (level < 5 && 1000 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 5;
        return 1;
    }
    if (level < 6 && 5000 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 6;
        return 1;
    }
    if (level == 6 && 5000 < size - m_udpRecvLast)
    {
        return 1;
    }
    if (level < 0 || m_udpRecvLast - size < 0x33)
    {
        if (level < -1 || m_udpRecvLast - size < 0x65)
        {
            if (level < -2 || m_udpRecvLast - size < 0xc9)
            {
                if (level < -3 || m_udpRecvLast - size < 0x1f5)
                {
                    if (level < -4 || m_udpRecvLast - size < 0x3e9)
                    {
                        if (level < -5 || m_udpRecvLast - size < 0x1389)
                        {
                            if (level == 0xfa && 5000 < m_udpRecvLast - size)
                            {
                                return 1;
                            }
                            return 0;
                        }
                        m_udpRecvLevel = 0xfa;
                        return 1;
                    }
                    m_udpRecvLevel = 0xfb;
                    return 1;
                }
                m_udpRecvLevel = 0xfc;
                return 1;
            }
            m_udpRecvLevel = 0xfd;
            return 1;
        }
        m_udpRecvLevel = 0xfe;
        return 1;
    }
    m_udpRecvLevel = 0xff;
    return 1;
}
int CAppLoadChecker::checkTcpSendLoad(int size)
{
    char level = m_tcpSendLevel;
    if (level < 1 && 0x32 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 1;
        return 1;
    }
    if (level < 2 && 100 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 2;
        return 1;
    }
    if (level < 3 && 200 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 3;
        return 1;
    }
    if (level < 4 && 500 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 4;
        return 1;
    }
    if (level < 5 && 1000 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 5;
        return 1;
    }
    if (level < 6 && 5000 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 6;
        return 1;
    }
    if (level == 6 && 5000 < size - m_tcpSendLast)
    {
        return 1;
    }
    if (level < 0 || m_tcpSendLast - size < 0x33)
    {
        if (level < -1 || m_tcpSendLast - size < 0x65)
        {
            if (level < -2 || m_tcpSendLast - size < 0xc9)
            {
                if (level < -3 || m_tcpSendLast - size < 0x1f5)
                {
                    if (level < -4 || m_tcpSendLast - size < 0x3e9)
                    {
                        if (level < -5 || m_tcpSendLast - size < 0x1389)
                        {
                            if (level == 0xfa && 5000 < m_tcpSendLast - size)
                            {
                                return 1;
                            }
                            return 0;
                        }
                        m_tcpSendLevel = 0xfa;
                        return 1;
                    }
                    m_tcpSendLevel = 0xfb;
                    return 1;
                }
                m_tcpSendLevel = 0xfc;
                return 1;
            }
            m_tcpSendLevel = 0xfd;
            return 1;
        }
        m_tcpSendLevel = 0xfe;
        return 1;
    }
    m_tcpSendLevel = 0xff;
    return 1;
}

template<int A, int B>
CPacketCounter<A, B>::CPacketCounter(char* dir, char* name) {}
template<int A, int B>
CPacketCounter<A, B>::~CPacketCounter() {}
template<int A, int B>
void CPacketCounter<A, B>::Reset() {}
template<int A, int B>
void CPacketCounter<A, B>::IncrementPacketCount(int id) {}
template<int A, int B>
void CPacketCounter<A, B>::BeforeProcess() {}
template<int A, int B>
void CPacketCounter<A, B>::AfterProcess(int id) {}
template class CPacketCounter<1000, 10240>;

void CMemoryCashManager::Init(CApplication* app) {}

CInnerMsgHandler::CInnerMsgHandler() {}
CInnerMsgHandler::~CInnerMsgHandler() {}
void CInnerMsgHandler::SendStopNetworkThread() {}

CUdpHandler::CUdpHandler() {}
CUdpHandler::~CUdpHandler() {}
unsigned int CUdpHandler::InetAddr(const char* ip) const { return inet_addr(ip); }
int CUdpHandler::InitServerSocket(int port)
{
    int fd = socket(AF_INET, SOCK_DGRAM, 0x11);
    m_sock = fd;
    if (m_sock == -1)
    {
        printf("Could not create a UDP socket : %d\n", getErrno());
        return -1;
    }
    sockaddr_in addr;
    memset(&addr, 0, 0x10);
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(0);
    addr.sin_port = htons((unsigned short)port);
    int r = bind(m_sock, (sockaddr*)&addr, 0x10);
    if (r != 0)
    {
        int err = getErrno();
        if (err == 0x62)
        {
            printf("Port %d for receiving UDP is in use\n", port);
        }
        else if (err == 99)
        {
            puts("Cannot assign requested address");
        }
        else if (err != 0)
        {
            printf("Could not bind UDP receive port. Error= %d , strerror = %s\n", err,
                   strerror(err));
        }
        return -1;
    }
    return 0;
}
int CUdpHandler::InitClientSocket()
{
    int fd = socket(AF_INET, SOCK_DGRAM, 0x11);
    m_clientSock = fd;
    if (m_clientSock == -1)
    {
        printf("Could not create a UDP socket : %d\n", getErrno());
        return -1;
    }
    return 0;
}
char CUdpHandler::RecvFromClient(char* buf, int* size, unsigned int* addr,
                                 unsigned short* port) const
{
    if (m_sock == -1)
    {
        return 0;
    }
    socklen_t len = 0x10;
    sockaddr_in from;
    ssize_t n = recvfrom(m_sock, buf, *size, 0, (sockaddr*)&from, &len);
    *size = n;
    if (*size == -1)
    {
        int err = getErrno();
        if (err == 0x58)
        {
            puts("Error fd not a socket");
            DNF_LOG_SCOPE_AT("RecvFromClient", 0xaf, "./log/UdpErr", "Error fd not a socket\n");
        }
        else if (err == 0x68)
        {
            puts("Error connection reset - host not reachable");
            DNF_LOG_SCOPE_AT("RecvFromClient", 0xb6, "./log/UdpErr", "Error connection reset - host not reachable\n");
        }
        else
        {
            printf("Hm! Time out Or Socket Error = %d\n", err);
        }
        return 0;
    }
    if (*size < 1)
    {
        printf("Socket closed? Recv size = %d\n", *size);
        DNF_LOG_SCOPE_AT("RecvFromClient", 0xc6, "./log/UdpErr", "Socket closed? Recv size = %d\n", *size);
        return 0;
    }
    *port = ntohs(from.sin_port);
    *addr = ntohl(from.sin_addr.s_addr);
    char* ip = inet_ntoa(from.sin_addr);
    if (*(short*)buf == 0x4c8 || *(short*)buf == 0x4c9 || *(short*)buf == 0x44f ||
        *(short*)buf == 0x450)
    {
        DNF_LOG_SCOPE_AT("RecvFromClient", 0xd1,"./log/Udp", "PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",
            *(unsigned short*)buf, ip, *port, *size);
    }
    buf[*size] = '\0';
    return 1;
}
int CUdpHandler::SendToClient(char* buf, int len, unsigned short port, const char* ip,
                              unsigned int addr) const
{
    if (ip == 0 && addr == 0)
    {
        return 0;
    }
    if (ip != 0)
    {
        addr = inet_addr(ip);
    }
    if (m_sock == -1)
    {
        return 0;
    }
    int sent;
    if (port == 0)
    {
        if (addr == 0)
        {
            sent = send(m_sock, buf, len, 0);
        }
    }
    else
    {
        sockaddr_in to;
        memset(&to, 0, 0x10);
        to.sin_family = AF_INET;
        to.sin_port = htons(port);
        to.sin_addr.s_addr = ntohl(addr);
        sent = sendto(m_sock, buf, len, 0, (sockaddr*)&to, 0x10);
    }
    if (sent == -1)
    {
        int err = getErrno();
        if (err == 0x61)
        {
            puts("err EAFNOSUPPORT in send");
            DNF_LOG_SCOPE_AT("SendToClient", 0x119, "./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", err);
        }
        else if (err < 0x61 || 2 < (unsigned int)(err - 0x6f))
        {
            printf("err = %d , strerror = %s in send\n", err, strerror(err));
            DNF_LOG_SCOPE_AT("SendToClient", 0x11f, "./log/UdpErr", "err = %d , strerror = %s in send\n", err, strerror(err));
        }
        else
        {
            printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
            DNF_LOG_SCOPE_AT("SendToClient", 0x113,"./log/UdpErr",
                "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
        }
        return 0;
    }
    if (sent == len)
    {
        return 1;
    }
    printf("Only %d out of %d bytes sent\n", sent, len);
    DNF_LOG_SCOPE_AT("SendToClient", 0x133, "./log/UdpErr", "Only %d out of %d bytes sent\n", sent, len);
    return 0;
}
int CUdpHandler::SendToServer(char* buf, int len, unsigned short port, const char* ip) const
{
    if (m_clientSock == -1)
    {
        return 0;
    }
    int sent;
    if (port == 0)
    {
        if (ip == 0)
        {
            sent = send(m_clientSock, buf, len, 0);
        }
    }
    else
    {
        sockaddr_in to;
        memset(&to, 0, 0x10);
        to.sin_family = AF_INET;
        to.sin_port = htons(port);
        to.sin_addr.s_addr = inet_addr(ip);
        sent = sendto(m_clientSock, buf, len, 0, (sockaddr*)&to, 0x10);
    }
    if (sent == -1)
    {
        int err = getErrno();
        if (err == 0x61)
        {
            DNF_LOG_SCOPE_LINE(0x1b8, "./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", err);
        }
        else if (err < 0x61 || 2 < (unsigned int)(err - 0x6f))
        {
            printf("err = %d , strerror = %s in send\n", err, strerror(err));
            DNF_LOG_SCOPE_LINE(0x1be, "./log/UdpErr", "err = %d , strerror = %s in send\n", err, strerror(err));
        }
        else
        {
            printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
            DNF_LOG_SCOPE_LINE(0x1b2,"./log/UdpErr",
                "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
        }
        return 0;
    }
    if (sent == len)
    {
        return 1;
    }
    printf("Only %d out of %d bytes sent\n", sent, len);
    DNF_LOG_SCOPE_LINE(0x1d2, "./log/UdpErr", "Only %d out of %d bytes sent\n", sent, len);
    return 0;
}
char CUdpHandler::RecvFromServer(char* buf, int* size, unsigned int* addr,
                                 unsigned short* port) const
{
    if (m_clientSock == -1)
    {
        return 0;
    }
    socklen_t len = 0x10;
    sockaddr_in from;
    ssize_t n = recvfrom(m_clientSock, buf, *size, 0, (sockaddr*)&from, &len);
    *size = n;
    if (*size == -1)
    {
        int err = getErrno();
        if (err == 0x58)
        {
            puts("Error fd not a socket");
            DNF_LOG_SCOPE_AT("RecvFromServer", 0x1e1, "./log/UdpErr", "Error fd not a socket\n");
        }
        else if (err == 0x68)
        {
            puts("Error connection reset - host not reachable");
            DNF_LOG_SCOPE_AT("RecvFromServer", 0x1e8, "./log/UdpErr", "Error connection reset - host not reachable\n");
        }
        else
        {
            printf("Hm! Time out Or Socket Error = %d\n", err);
        }
        return 0;
    }
    if (*size < 1)
    {
        printf("Socket closed? Recv size = %d\n", *size);
        DNF_LOG_SCOPE_AT("RecvFromServer", 0x1f8, "./log/UdpErr", "Socket closed? Recv size = %d\n", *size);
        return 0;
    }
    *port = ntohs(from.sin_port);
    *addr = ntohl(from.sin_addr.s_addr);
    buf[*size] = '\0';
    return 1;
}

CUdpNetworkThread::CUdpNetworkThread() {}
CUdpNetworkThread::~CUdpNetworkThread() {}

CPeriodicMessageMgr::CPeriodicMessageMgr() {}
CPeriodicMessageMgr::~CPeriodicMessageMgr() {}
void CPeriodicMessageMgr::init()
{
    memset(m_msg, 0, 0x200);
    m_startHour = 0;
    m_endHour = 0;
}
void CPeriodicMessageMgr::OnProcess(CServerHandler* handler) {}
void CPeriodicMessageMgr::OnTimerSendData(CServerHandler* handler)
{
    if (m_msg[0] != 0)
    {
        Packet_Send_Periodic_Message pkt;
        size_t len = strlen(m_msg);
        strncpy((char*)&pkt + 0xa, m_msg, len);
        handler->SendAllTcpGameServer(&pkt);
    }
}
void CPeriodicMessageMgr::SetMessageData(char* msg, int startHour, int endHour)
{
    if (startHour < 0 || endHour < 0 || 0x17 < startHour || 0x17 < endHour)
    {
        DNF_LOG_SCOPE_LINE(0x18, "./log/PeriodicMessage", "SetData() Error : Invalid input time");
    }
    else if (*msg == 0)
    {
        memset(this, 0, 0x200);
        DNF_LOG_SCOPE_LINE(0x24, "./log/PeriodicMessage", "SetData() Error : No string");
    }
    else
    {
        strncpy(m_msg, msg, 0x1ff);
        m_startHour = startHour;
        m_endHour = endHour;
        DNF_LOG_SCOPE_LINE(0x32, "./log/PeriodicMessage", "TEST Periodic Message : Arrive Load Result");
    }
}

LimitNpcBuyItemManager::LimitNpcBuyItemManager() {}
LimitNpcBuyItemManager::~LimitNpcBuyItemManager() {}
int LimitNpcBuyItemManager::sellNpcLimitBuyItem(LimitNpcBuyItemInfo* info)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(info->m_itemId);
    if (it == m_items.end())
    {
        return 0x11;
    }
    NpcBuyLimitItem* item = &it->second;
    if (item->m_itemId == 0)
    {
        return 0x11;
    }
    if (item->m_sellCount < item->m_maxCount)
    {
        item->m_sellCount += info->m_count;
        unsigned int total = item->m_sellCount;
        DNF_LOG_SCOPE_LINE(0x23,"./log/NpcBuyLimitItem",
            "Sell-> characNo: %u, itemId: %u, buyCount: %u, maxCount: %u, totalSellCount: %u)",
            info->m_charNo, info->m_itemId, info->m_count, item->m_maxCount, total);
        return 0;
    }
    return 0x5f;
}
void LimitNpcBuyItemManager::undoNpcLimitBuyItem(LimitNpcBuyItemUpdate* info)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(info->m_itemId);
    if (it != m_items.end() && info->m_cancelCount <= it->second.m_sellCount)
    {
        it->second.m_sellCount -= info->m_cancelCount;
        DNF_LOG_SCOPE_LINE(0x34, "./log/NpcBuyLimitItem",
            "Undo-> characNo: %u, errorNo: %u, itemId: %u, cancelCount: %u, maxCount: %u, totalSellCount: %u)",
            info->m_charNo, info->m_errorNo, info->m_itemId, info->m_cancelCount,
            it->second.m_maxCount, it->second.m_sellCount);
    }
}
void LimitNpcBuyItemManager::registItem(NpcBuyLimitItem& item)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(item.m_itemId);
    if (it == m_items.end())
    {
        m_items.insert(std::make_pair(item.m_itemId, item));
    }
}
void LimitNpcBuyItemManager::registItemClear()
{
    m_items.clear();
}
void LimitNpcBuyItemManager::getNpcLimitBuyItemInfoAll(LimitNpcBuyItemInfoAll* out)
{
    for (std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.begin();
         it != m_items.end(); ++it)
    {
        if (it->first != 0)
        {
            if (out->m_count < 0)
            {
                return;
            }
            if (0x1d < out->m_count)
            {
                return;
            }
            *(unsigned int*)((char*)out + out->m_count * 0xc + 0x1a) = it->first;
            *(unsigned int*)((char*)out + out->m_count * 0xc + 0x1e) = it->second.m_maxCount;
            *(unsigned int*)((char*)out + out->m_count * 0xc + 0x22) = it->second.m_sellCount;
            out->m_count = out->m_count + 1;
        }
    }
}
void LimitNpcBuyItemManager::getNpcLimitBuyItemCount(unsigned int itemId,
                                                     LimitNpcBuyItemChangeInfo& out)
{
    std::map<unsigned int, NpcBuyLimitItem>::iterator it = m_items.find(itemId);
    if (it != m_items.end())
    {
        out.m_itemId = itemId;
        out.m_fieldE = (int)it->second.m_maxCount - (int)it->second.m_sellCount;
    }
}

CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication& app)
{
    m_app = &app;
    for (int i = 0; i < 7; i++)
    {
        new (&m_maps[i]) std::map<unsigned char, stLoginLogout>();
    }
    m_fieldac = 0;
    m_fieldb0 = 0;
}
CLoginLogoutStatistics::~CLoginLogoutStatistics()
{
    for (int i = 0; i < 7; i++)
    {
        m_maps[i].~map();
    }
}
void CLoginLogoutStatistics::ProcessByMinute() {}
void CLoginLogoutStatistics::LoginLogout(ENUM_LOGIN_LOGOUT type, unsigned char channel)
{
    std::map<unsigned char, stLoginLogout>::iterator it = m_maps[(int)type].find(channel);
    if (it == m_maps[(int)type].end())
    {
        for (int i = 0; i < 7; i++)
        {
            stLoginLogout st;
            st.m_field0 = 0;
            st.m_count = 0;
            st.m_field8 = 0;
            m_maps[i].insert(std::pair<const unsigned char, stLoginLogout>(channel, st));
        }
        LoginLogout(type, channel);
    }
    else
    {
        it->second.m_count = it->second.m_count + 1;
    }
}
void CLoginLogoutStatistics::CountNumOfLoginout(ENUM_LOGIN_LOGOUT type)
{
    if ((int)type == 0)
    {
        m_fieldb4 = m_fieldb4 + 1;
    }
    else if ((int)type == 6)
    {
        m_fieldb8 = m_fieldb8 + 1;
    }
}
void CLoginLogoutStatistics::CountNumOfOccupations(ENUM_LOGIN_LOGOUT type, int value)
{
    if ((int)type == 0)
    {
        m_fieldac = (unsigned int)value;
    }
    else if ((int)type == 4)
    {
        m_fieldb0 = (unsigned int)value;
    }
}

CIPCounter::CIPCounter() {}
CIPCounter::~CIPCounter() {}
void CIPCounter::Init(CServerHandler* handler) {}
void CIPCounter::Proc(unsigned int tick) {}
void CIPCounter::setLoadTerm(unsigned char term)
{
    unsigned int v = (unsigned int)term * 0x3c;
    if (0x2a30 < v)
    {
        v = 0x2a30;
    }
    *(unsigned int*)((char*)this + 0xc) = v;
    v = *(unsigned int*)((char*)this + 0xc);
    if (v < 0x708)
    {
        v = 0x708;
    }
    *(unsigned int*)((char*)this + 0xc) = v;
}
void CIPCounter::setMinIPCount(unsigned char count)
{
    if (200 < count)
    {
        count = 200;
    }
    *(unsigned char*)this = count;
}
void CIPCounter::setOption(unsigned char type, unsigned char opt)
{
    if (type == 0)
    {
        setLoadTerm(opt);
    }
    else if (type == 1)
    {
        setMinIPCount(opt);
    }
    else if (type == 2)
    {
        *(unsigned char*)((char*)this + 0x10) = 1;
        *(unsigned int*)((char*)this + 8) = 0;
        *(unsigned int*)((char*)this + 4) = 0;
    }
    else if (type == 3)
    {
        *(unsigned char*)((char*)this + 0x10) = 0;
    }
    else if (type == 4)
    {
        *(unsigned char*)((char*)this + 0x11) = 0;
    }
}

CItemLimitEditionMgr::CItemLimitEditionMgr() {}
CItemLimitEditionMgr::~CItemLimitEditionMgr() {}
void CItemLimitEditionMgr::makeItemLimitEditionUpdatePacket(
    Packet_Item_Limit_Edition_Update& pkt) const
{
    int idx = 0;
    for (std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.begin();
         it != m_items.end(); ++it)
    {
        CItemLimitEdition* item = it->second;
        *(unsigned int*)((char*)&pkt + idx * 9 + 0x12) = item->getIPGNO();
        *(unsigned int*)((char*)&pkt + idx * 9 + 0x16) = item->getSellNum();
        *(char*)((char*)&pkt + idx * 9 + 0x1a) = (char)item->isSellComplete();
        idx++;
    }
    *(int*)((char*)&pkt + 0xe) = idx;
}
void CItemLimitEditionMgr::makeItemLimitEditionSellStartPacket(
    Packet_Item_Limit_Edition_Sell_Start& pkt) const
{
    int idx = 0;
    for (std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.begin();
         it != m_items.end(); ++it)
    {
        it->second->makeItemInfo(*(stItemLimitEditionItemInfo_t*)((char*)&pkt + idx * 0x48 + 0xf));
        idx++;
    }
    *(int*)((char*)&pkt + 0xb) = idx;
}
void CItemLimitEditionMgr::registItem(const stItemLimitEditionItemInfo_t& info)
{
    bool error = false;
    std::map<unsigned int, CItemLimitEdition*>::iterator it = m_items.find(*(unsigned int*)&info);
    if (it == m_items.end() && 0x1b < m_items.size())
    {
        error = true;
    }
    if (!error)
    {
        CItemLimitEdition* item = new CItemLimitEdition(info);
        unsigned int ipgno = item->getIPGNO();
        std::map<unsigned int, CItemLimitEdition*>::iterator it2 = m_items.find(ipgno);
        if (it2 != m_items.end())
        {
            if (it2->second != 0)
            {
                delete it2->second;
            }
            m_items.erase(it2);
        }
        m_items.insert(std::pair<const unsigned int, CItemLimitEdition*>(item->getIPGNO(), item));
    }
}
void CItemLimitEditionMgr::removeItem(unsigned int ipgno)
{
    std::map<unsigned int, CItemLimitEdition*>::iterator it = m_items.find(ipgno);
    if (it != m_items.end())
    {
        CItemLimitEdition* item = it->second;
        if (item != 0)
        {
            delete item;
        }
        m_items.erase(it);
    }
}
bool CItemLimitEditionMgr::updateItem(unsigned int ipgno, unsigned int sellNum)
{
    std::map<unsigned int, CItemLimitEdition*>::iterator it = m_items.find(ipgno);
    if (it != m_items.end())
    {
        it->second->updateSellNum(sellNum);
        return true;
    }
    return false;
}
CItemLimitEdition* CItemLimitEditionMgr::getItemInfo(unsigned int ipgno) const
{
    std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.find(ipgno);
    if (it != m_items.end())
    {
        return it->second;
    }
    return 0;
}
char CItemLimitEditionMgr::isEmpty() const
{
    return (char)m_items.empty();
}
void CItemLimitEditionMgr::clear()
{
    for (std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.begin();
         it != m_items.end(); ++it)
    {
        if (it->second != 0)
        {
            delete it->second;
        }
    }
    m_items.clear();
}
void CItemLimitEditionMgr::processScheduledJob(CApplication* app, bool flag)
{
    time_t now;
    if (!m_items.empty() && (now = time(0), now - m_lastTime > 4 || flag))
    {
        m_lastTime = now;
        Packet_Item_Limit_Edition_Sell_end pkt;
        unsigned int expired[30];
        unsigned int count = 0;
        for (std::map<unsigned int, CItemLimitEdition*>::const_iterator it = m_items.begin();
             it != m_items.end(); ++it)
        {
            if (it->second->getSellEndTime() < (unsigned int)now)
            {
                expired[count] = it->second->getIPGNO();
                count++;
            }
        }
        if (count != 0)
        {
            CServerHandler* h = app->Get_ServerHandler();
            h->SendAllTcpGameServer(&pkt);
            for (unsigned int i = 0; i < count; i++)
            {
                std::map<unsigned int, CItemLimitEdition*>::iterator f = m_items.find(expired[i]);
                if (f != m_items.end())
                {
                    CItemLimitEdition* item = f->second;
                    if (item != 0)
                    {
                        delete item;
                    }
                    m_items.erase(f);
                }
            }
        }
        if (!m_items.empty())
        {
            Packet_Item_Limit_Edition_Update pkt2;
            pkt2.m_fieldA = (unsigned int)app->Get_ServerGroup();
            makeItemLimitEditionUpdatePacket(pkt2);
            CServerHandler* h = app->Get_ServerHandler();
            h->SendToDB(&pkt2);
            h = app->Get_ServerHandler();
            h->SendAllTcpGameServer(&pkt2);
        }
    }
}

CItemLimitEdition::~CItemLimitEdition() {}
CItemLimitEdition::CItemLimitEdition(const stItemLimitEditionItemInfo_t& info)
{
    memcpy(this, &info, 0x48);
    m_sellNum = *(unsigned int*)((char*)&info + 0x18);
}
unsigned int CItemLimitEdition::getSellEndTime() const { return m_sellEndTime; }
unsigned int CItemLimitEdition::getIPGNO() const { return m_ipgno; }
unsigned int CItemLimitEdition::getSellNum() const { return m_sellNum; }
char CItemLimitEdition::isSellComplete() const
{
    if (m_sellLimit == -1)
    {
        return 0;
    }
    return (char)(m_sellLimit <= (int)getSellNum());
}
void CItemLimitEdition::makeItemInfo(stItemLimitEditionItemInfo_t& info) const
{
    memcpy(&info, this, 0x48);
    *(unsigned int*)((char*)&info + 0x18) = getSellNum();
}
void CItemLimitEdition::updateSellNum(unsigned int num)
{
    m_sellNum = num;
}

CMemoryCashManager::CMemoryCashManager() {}
CMemoryCashManager::~CMemoryCashManager() {}
void CMemoryCashManager::ProcessLifeTimeOut() {}
void CMemoryCashManager::ProcessCashDataPrint() {}
char CMemoryCashManager::QueryCashMemoryMember(CUser* user)
{
    char ok = 0;
    if (!m_cashObjects.empty())
    {
        unsigned int dbid = user->GetDBID();
        std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
        if (it != m_cashObjects.end())
        {
            CCashObject* obj = it->second;
            if (obj->GetCharacNo() == user->GetUniqCharNo())
            {
                CMemberManager* mgr = m_app->Get_MemberManager();
                CMember* member = obj->GetMemberObject();
                if (member != 0)
                {
                    unsigned int* dbInfo = member->GetMemberDBInfoW();
                    std::string name;
                    if (QueryUpdatedCharacName(*dbInfo, name))
                    {
                        memset((char*)dbInfo + 5 * 4, 0, 0x1e);
                        strncpy((char*)dbInfo + 5 * 4, name.c_str(), 0x1d);
                    }
                    for (int i = 0; i < (int)*(unsigned char*)((char*)dbInfo + 0x27); i++)
                    {
                        unsigned int* sub =
                            (unsigned int*)((char*)dbInfo + i * 0x27 + 0x28);
                        if (*sub != 0)
                        {
                            if (QueryUpdatedCharacName(*sub, name))
                            {
                                memset((char*)sub + 5 * 4, 0, 0x1e);
                                strncpy((char*)sub + 5 * 4, name.c_str(), 0x1d);
                            }
                        }
                    }
                    ok = mgr->LoadMemberFromCash(user, member);
                    if (ok != 0)
                    {
                        incMemberCashHitCnt();
                    }
                    obj->ClearMemberObject();
                }
                else
                {
                    obj->DeleteMemberObject();
                    ok = 0;
                }
            }
        }
    }
    return ok;
}
int CMemoryCashManager::QueryCashMemoryBuddyInfo(CUser* user)
{
    if (!m_cashObjects.empty())
    {
        unsigned int dbid = user->GetDBID();
        std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
        if (it != m_cashObjects.end())
        {
            CCashObject* obj = it->second;
            if (obj->GetCharacNo() == user->GetUniqCharNo())
            {
                CBuddy* buddies[32];
                int count = obj->GetBuddysObject(buddies);
                for (int i = 0; i < count; i++)
                {
                    if (buddies[i] != 0)
                    {
                        std::string name;
                        unsigned int* info = buddies[i]->getBuddyDBInfo();
                        if (QueryUpdatedCharacName(*(unsigned int*)((char*)info + 0x22), name))
                        {
                            memset(info, 0, 0x1e);
                            strncpy((char*)info, name.c_str(), 0x1d);
                        }
                        user->AddBuddyFromCash(buddies[i]);
                        user->GetUniqCharNo();
                        unsigned int charNo = *(unsigned int*)((char*)info + 0x22);
                        m_app->Get_BuddyRegisterManager()->addBuddyRegister(charNo,
                                                                            user->GetUniqCharNo());
                    }
                }
                if (count != 0)
                {
                    m_app->Get_UserManager()->SendConnectedBuddysList(user);
                }
                user->SetBuddyDBFlag(4);
                incBuddyCashHitCnt();
                return 1;
            }
            obj->DeleteBuddys();
            return 0;
        }
    }
    return 0;
}
char CMemoryCashManager::QueryCashMemoryBlackList(CUser* user)
{
    unsigned int dbid = user->GetDBID();
    std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
    if (it != m_cashObjects.end())
    {
        CCashObject* obj = it->second;
        if (obj != 0)
        {
            std::map<unsigned int, CBlackUser*>* blackMap = obj->GetBlackUsersObject();
            for (std::map<unsigned int, CBlackUser*>::iterator bi = blackMap->begin();
                 bi != blackMap->end(); ++bi)
            {
                unsigned int key = bi->first;
                CBlackUser* bu = bi->second;
                if (bu != 0)
                {
                    std::string name;
                    if (QueryUpdatedCharacName(key, name))
                    {
                        char buf[30];
                        memset(buf, 0, 30);
                        strncpy(buf, name.c_str(), 0x1d);
                        bu->ChangeCharName(buf);
                    }
                }
            }
            user->RegisterToCashBlackList(*obj->GetBlackUsersObject());
            obj->ClearMapBlackUsers();
            user->SetBlackListDBFlag(4);
            incBlackListCashHitCnt();
            return 1;
        }
    }
    return 0;
}
char CMemoryCashManager::QueryUpdatedCharacName(unsigned int charNo, std::string& name)
{
    std::map<unsigned int, std::string>::iterator it = m_names.find(charNo);
    if (it != m_names.end())
    {
        name = it->second;
        return 1;
    }
    return 0;
}
void CMemoryCashManager::InsertUpdatedCharacName(unsigned int dbid, const std::string& name)
{
    std::map<unsigned int, std::string>::iterator it = m_names.find(dbid);
    if (it != m_names.end())
    {
        it->second = name;
    }
    else
    {
        m_names.insert(std::pair<const unsigned int, std::string>(dbid, name));
    }
}
void CMemoryCashManager::incMemberCashHitCnt() {}
void CMemoryCashManager::incBuddyCashHitCnt() {}
void CMemoryCashManager::incBlackListCashHitCnt() {}
void CMemoryCashManager::incBuddyCashCnt()
{
    m_buddyCashCnt = m_buddyCashCnt + 1;
}
void CMemoryCashManager::incMemberCashCnt()
{
    m_memberCashCnt = m_memberCashCnt + 1;
}
void CMemoryCashManager::incBlackListCashCnt()
{
    m_blackListCashCnt = m_blackListCashCnt + 1;
}
char CMemoryCashManager::IsRightObject(CUser* user, CMember* member, bool& flag1, bool& flag2,
                                       bool& flag3)
{
    flag1 = false;
    flag3 = false;
    flag2 = false;
    char ret = 0;
    std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(user->GetDBID());
    if (it == m_cashObjects.end())
    {
        if ((user->GetBuddyDBFlag() & 4) != 0)
        {
            flag1 = true;
            ret = 1;
        }
        if ((user->GetBlackListDBFlag() & 4) != 0)
        {
            flag3 = true;
            ret = 1;
        }
        if (user->GetMemberKey() != 0 && (user->GetMemberDBFlag() & 4) != 0)
        {
            if (member != 0 && member->IsAbleToRegisterMember() != 0)
            {
                flag2 = true;
                ret = 1;
            }
        }
        return ret;
    }
    return 0;
}
int CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser* user, CMember* member,
                                                           bool& flag1, bool& flag2)
{
    bool local = false;
    if (IsRightObject(user, member, flag1, flag2, local) == 0)
    {
        return 0;
    }
    CCashObject* obj = new CCashObject;
    if (flag1 || flag2)
    {
        obj->SetCharacNo(user->GetUniqCharNo());
    }
    if (flag2 && member != 0)
    {
        obj->SetMemberObject(member);
        incMemberCashCnt();
    }
    if (flag1)
    {
        CBuddy* buddies[0x20];
        int n = user->GetBuddys(buddies);
        obj->SetBuddysObject(buddies, n);
        incBuddyCashCnt();
    }
    std::pair<std::map<unsigned int, CCashObject*>::iterator, bool> r =
        m_cashObjects.insert(
            std::pair<const unsigned int, CCashObject*>(user->GetDBID(), obj));
    if (r.second)
    {
        return 1;
    }
    delete obj;
    return 0;
}
bool CMemoryCashManager::SetUserObject(CUser* user)
{
    std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(user->GetDBID());
    if (it != m_cashObjects.end())
    {
        CCashObject* obj = it->second;
        obj->SetBlackUsersObject(*user->GetMapBlackList());
        incBlackListCashCnt();
        obj->SetLifeTime(5);
    }
    return it != m_cashObjects.end();
}
void CMemoryCashManager::DeleteCashObjecct(unsigned int dbid)
{
    std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
    if (it != m_cashObjects.end())
    {
        if (it->second != 0)
        {
            delete it->second;
        }
        m_cashObjects.erase(it);
    }
}

CCashObject::CCashObject()
{
    m_lifeTime = 5;
    m_characNo = 0;
    m_memberObject = 0;
    memset(m_buddys, 0, sizeof(m_buddys));
    m_blackUsers.clear();
}
CCashObject::~CCashObject()
{
    m_lifeTime = -1;
    m_characNo = 0;
    m_memberObject = 0;
    memset(m_buddys, 0, sizeof(m_buddys));
    m_blackUsers.clear();
}
unsigned int CCashObject::GetCharacNo() { return m_characNo; }
CMember* CCashObject::GetMemberObject() { return m_memberObject; }
void CCashObject::SetCharacNo(unsigned int charNo) { m_characNo = charNo; }
void CCashObject::SetMemberObject(CMember* member) { m_memberObject = member; }
void CCashObject::SetBuddysObject(CBuddy** buddies, int count)
{
    if (0x20 < count)
    {
        count = 0x20;
    }
    for (int i = 0; i < count; i++)
    {
        m_buddys[i] = buddies[i];
    }
}
void CCashObject::SetBlackUsersObject(std::map<unsigned int, CBlackUser*>& map)
{
    if (!map.empty())
    {
        m_blackUsers.clear();
        for (std::map<unsigned int, CBlackUser*>::iterator it = map.begin();
             it != map.end(); ++it)
        {
            m_blackUsers.insert(std::make_pair(it->first, it->second));
        }
    }
}
void CCashObject::SetLifeTime(unsigned int lifeTime) { m_lifeTime = lifeTime; }
void CCashObject::ClearMemberObject() {}
void CCashObject::DeleteMemberObject() {}
int CCashObject::GetBuddysObject(CBuddy** buddies) { return 0; }
void CCashObject::DeleteBuddys() {}
void CCashObject::DeleteBlackUsers()
{
    if (!m_blackUsers.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackUsers.begin();
             it != m_blackUsers.end(); ++it)
        {
            if (it->second != 0)
            {
                CBlackUser::operator delete(it->second);
            }
        }
        m_blackUsers.clear();
    }
}
void CCashObject::ClearBuddys()
{
    for (int i = 0; i <= 0x1f; i++)
    {
        m_buddys[i] = 0;
    }
}
char CCashObject::IsLifeTimeOut()
{
    if (m_lifeTime == -1)
    {
        return 0;
    }
    m_lifeTime = m_lifeTime - 1;
    return (char)(m_lifeTime == 0);
}
std::map<unsigned int, CBlackUser*>* CCashObject::GetBlackUsersObject() { return 0; }
void CCashObject::ClearMapBlackUsers() {}

unsigned int* CBuddy::getBuddyDBInfo() { return (unsigned int*)this; }
void* CBuddy::operator new(unsigned int size) { return ::operator new(size); }
void CBuddy::operator delete(void* ptr) { ::operator delete(ptr); }
CBuddy::CBuddy(STBuddyDBInfo& info)
{
    memcpy(this, &info, 0x27);
}
CBuddy::~CBuddy() {}

CBuddyHandle::CBuddyHandle() {}
unsigned short CBuddyHandle::GetBuddyDBFlag() { return m_field1c; }
void CBuddyHandle::SetBuddyDBFlag(unsigned short flag) { m_field1c |= flag; }
CBuddyHandle::~CBuddyHandle() {}
int CBuddyHandle::addDB(CServerHandler* handler, char* name)
{
    bool invalid = true;
    if (m_prUser != 0 && m_prUser->GetUniqCharNo() != 0)
    {
        invalid = false;
    }
    if (invalid)
    {
        DNF_LOG_SCOPE_LINE(0x5a, "./log/buddy", "Buddy::addDB m_prUser is NULL");
        return 1;
    }
    if (name == 0)
    {
        return 1;
    }
    if (m_buddies.size() < 0x20)
    {
        if (m_buddies.find(name) == m_buddies.end())
        {
            if (strcmp(name, m_prUser->GetCharName()) == 0)
            {
                return 1;
            }
            if (strlen(name) < 0x1e)
            {
                Packet_DBMW_Add_Buddy pkt;
                pkt.m_uniqCharNo = m_prUser->GetUniqCharNo();
                memcpy(pkt.m_charName, name, 0x1d);
                handler->SendToDB(&pkt);
                return 0;
            }
            return -1;
        }
        return 0x12;
    }
    return 4;
}
int CBuddyHandle::delDB(CServerHandler* handler, char* name)
{
    bool invalid = true;
    if (m_prUser != 0 && m_prUser->GetUniqCharNo() != 0)
    {
        invalid = false;
    }
    if (invalid)
    {
        DNF_LOG_SCOPE_LINE(0xb7, "./log/buddy", "Buddy::addDB m_prUser is NULL");
        return 1;
    }
    if (name == 0)
    {
        return 1;
    }
    if (strlen(name) < 0x1e)
    {
        std::map<std::string, CBuddy*>::iterator it = m_buddies.find(name);
        if (it != m_buddies.end())
        {
            Packet_DBMW_Del_Buddy pkt;
            pkt.m_uniqCharNo = m_prUser->GetUniqCharNo();
            pkt.m_buddyCharNo =
                *(unsigned int*)((char*)it->second->getBuddyDBInfo() + 0x22);
            memcpy(pkt.m_charName, name, 0x1d);
            handler->SendToDB(&pkt);
            return 0;
        }
        return 0x12;
    }
    return -1;
}
void CBuddyHandle::setBuddyCharName(int charNo, const std::string& newName)
{
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        if (it->second != 0 &&
            charNo == *(int*)((char*)it->second->getBuddyDBInfo() + 0x22))
        {
            CBuddy* buddy = it->second;
            m_buddies.erase(it);
            m_buddies.insert(std::pair<const std::string, CBuddy*>(newName, buddy));
            break;
        }
    }
}
int CBuddyHandle::getBuddysCharNo(unsigned int* out)
{
    if (m_buddies.empty())
    {
        return 0;
    }
    int count = 0;
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        CBuddy* b = it->second;
        if (b != 0)
        {
            out[count] = *(unsigned int*)((char*)b->getBuddyDBInfo() + 0x22);
        }
        count++;
        if (0x20 < count)
        {
            DNF_LOG_SCOPE_LINE(0x135,"./log/buddy", "CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",
                count, 0x20);
            return 0x20;
        }
    }
    return count;
}
int CBuddyHandle::getBuddys(CBuddy** out)
{
    if (m_buddies.empty())
    {
        return 0;
    }
    int count = 0;
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        out[count] = it->second;
        count++;
        if (0x20 < count)
        {
            DNF_LOG_SCOPE_LINE(0x153,"./log/buddy", "CBuddyHandle::GetBuddysCharNo iCnt(%d) > MAX_BUDDY_COUNT(%d)",
                count, 0x20);
            return 0x20;
        }
    }
    return count;
}
int CBuddyHandle::del(std::string name)
{
    std::map<std::string, CBuddy*>::iterator it = m_buddies.find(name);
    if (it == m_buddies.end())
    {
        return 1;
    }
    if (it->second != 0)
    {
        delete it->second;
    }
    m_buddies.erase(it);
    return 0;
}
int CBuddyHandle::addFromCash(CBuddy* buddy)
{
    if (m_buddies.size() > 0x1f)
    {
        return 0;
    }
    m_buddies.insert(std::make_pair(std::string((char*)buddy->getBuddyDBInfo()), buddy));
    return 1;
}
int CBuddyHandle::insert(CBuddy* buddy)
{
    if (m_buddies.size() > 0x1f)
    {
        return 0;
    }
    m_buddies.insert(std::make_pair(std::string((char*)buddy->getBuddyDBInfo()), buddy));
    return 1;
}
CBuddy* CBuddyHandle::findBuddy(std::string name)
{
    if (m_buddies.empty())
    {
        return 0;
    }
    std::map<std::string, CBuddy*>::iterator it = m_buddies.find(name);
    if (it != m_buddies.end())
    {
        return it->second;
    }
    return 0;
}
CBuddy* CBuddyHandle::findBuddyByCharNo(unsigned int charNo)
{
    for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
         it != m_buddies.end(); ++it)
    {
        CBuddy* buddy = it->second;
        if (buddy != 0 &&
            *(unsigned int*)((char*)buddy->getBuddyDBInfo() + 0x22) == charNo)
        {
            return buddy;
        }
    }
    return 0;
}
void CBuddyHandle::printBuddys(char* out)
{
    if (m_prUser != 0 && !m_buddies.empty())
    {
        for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
             it != m_buddies.end(); ++it)
        {
            CBuddy* buddy = it->second;
            char* info = (char*)buddy->getBuddyDBInfo();
            DNF_LOG_SCOPE_LINE(0x16e,"./log/buddy",
                "[%s] name(%s) fname(%s) flevel(%d) fjob(%d) fgrowtype(%d) fcharNo(%d) "
                "fsex(%d)",
                out, m_prUser->GetCharName(), info, (int)*(short*)(info + 0x1e),
                (int)*(char*)(info + 0x20), (int)*(char*)(info + 0x21),
                *(int*)(info + 0x22), (int)*(char*)(info + 0x26));
        }
    }
}
int CBuddyHandle::add(std::string name, STBuddyDBInfo& info)
{
    if (m_buddies.size() < 0x20)
    {
        CBuddy* buddy = new CBuddy(info);
        std::pair<std::map<std::string, CBuddy*>::iterator, bool> r =
            m_buddies.insert(std::pair<const std::string, CBuddy*>(name, buddy));
        if (!r.second)
        {
            delete buddy;
            return 0;
        }
        return 1;
    }
    return 0;
}
void CBuddyHandle::reset(CUser* user, bool flag)
{
    m_prUser = user;
    m_field1c = 0;
    clear(flag);
}
void CBuddyHandle::clear(bool flag)
{
    if (!m_buddies.empty())
    {
        if (flag)
        {
            for (std::map<std::string, CBuddy*>::iterator it = m_buddies.begin();
                 it != m_buddies.end(); ++it)
            {
                if (it->second != 0)
                {
                    delete it->second;
                }
            }
        }
        m_buddies.clear();
    }
}
void CBlackUser::SetBlackUser(char* name, unsigned int time)
{
    memcpy(this, name, 0x1d);
    m_occurTime = time;
}
void CBlackUser::ChangeCharName(char* name)
{
    memset(this, 0, 0x1e);
    memcpy(this, name, 0x1d);
}
char* CBlackUser::GetName() { return (char*)this; }
unsigned int CBlackUser::GetOccurTime() { return m_occurTime; }
void CBlackUser::operator delete(void* p) { ::operator delete(p); }
CBlackUser::CBlackUser()
{
    m_occurTime = 0;
    memset(m_data, 0, 0x1e);
}

int GetNextSchedule(tm t, int wday, int hour, int min)
{
    int delta = wday - t.tm_wday;
    if (delta < 0)
    {
        delta = delta + 7;
    }
    else if (delta == 0)
    {
        if (hour < t.tm_hour)
        {
            delta = 7;
        }
        else if (t.tm_hour == hour && min <= t.tm_min)
        {
            delta = 7;
        }
    }
    t.tm_hour = hour;
    t.tm_min = min;
    t.tm_sec = 0;
    time_t tt = mktime(&t);
    return (int)tt + delta * 0x15180;
}
int GetPrevSchedule(tm t, int wday, int hour, int min)
{
    int delta = t.tm_wday - wday;
    if (delta < 0)
    {
        delta = delta + 7;
    }
    t.tm_hour = hour;
    t.tm_min = min;
    t.tm_sec = 0;
    time_t tt = mktime(&t);
    return (int)tt + delta * -0x15180;
}
bool CheckDailyScheduleTimeOver(int day, long t)
{
    time_t now;
    time(&now);
    tm* p = localtime(&now);
    int sec = p->tm_sec;
    int min = p->tm_min;
    int hour = p->tm_hour;
    tm target = *p;
    target.tm_hour = day;
    target.tm_min = 0;
    target.tm_sec = 0;
    int mday = target.tm_mday;
    int mon = target.tm_mon;
    int year = target.tm_year;
    int wday = target.tm_wday;
    int yday = target.tm_yday;
    int isdst = target.tm_isdst;
    long gmtoff = target.tm_gmtoff;
    const char* zone = target.tm_zone;
    time_t tt = mktime(&target);
    if (hour < day)
    {
        tt = tt - 0x15180;
    }
    return t < (long)tt;
}
bool CheckDayHourScheduleTimeOver(int day, int hour, long t)
{
    time_t now;
    time(&now);
    tm* p = localtime(&now);
    int sec = p->tm_sec;
    int min = p->tm_min;
    int curHour = p->tm_hour;
    tm target = *p;
    target.tm_hour = hour;
    target.tm_min = 0;
    target.tm_sec = 0;
    int mday = target.tm_mday;
    int mon = target.tm_mon;
    int year = target.tm_year;
    int wday = target.tm_wday;
    int yday = target.tm_yday;
    int isdst = target.tm_isdst;
    long gmtoff = target.tm_gmtoff;
    const char* zone = target.tm_zone;
    time_t tt = mktime(&target);
    if (curHour < hour)
    {
        tt = tt - 0x15180;
    }
    tt = (1 - day) * 0x15180 + tt;
    return t < (long)tt;
}
char CScheduler::IsOnTimeSpecialDayHour(int day, int hour, int min)
{
    if ((char)m_data[3] == day && (char)m_data[2] == hour && (char)m_data[1] == min)
    {
        return 1;
    }
    return 0;
}
CScheduler::CScheduler()
{
    m_data[0] = (char)0xff;
    m_data[1] = (char)0xff;
    m_data[2] = (char)0xff;
    m_data[3] = (char)0xff;
    m_ushort4 = (unsigned short)0xffff;
    m_data2[0] = (char)0xff;
    m_data2[1] = (char)0xff;
}
CScheduler::~CScheduler() {}
char CScheduler::IsOnTimeSpecialHour(int day, int hour)
{
    if ((char)m_data[2] == day && (char)m_data[1] == hour)
    {
        return 1;
    }
    return 0;
}
void CScheduler::SetSpecialHour(int hour)
{
    m_data[2] = (char)hour;
    m_data[1] = 0;
}
void CScheduler::SetSpecialDayHour(int day, int hour)
{
    m_data[2] = (char)hour;
    m_data[3] = (char)day;
    m_data[1] = 0;
}

CExchangeServer::CExchangeServer() { m_active = 0; }
CExchangeServer::~CExchangeServer() {}
CExchangeServer* GetInstanceExchangeServer()
{
    static CExchangeServer instance;
    return &instance;
}
unsigned int CExchangeServer::GetExchangeServerIp()
{
    return m_ip;
}
unsigned short CExchangeServer::GetExchangeServerPort()
{
    return m_port;
}
unsigned int CExchangeServer::GetExchangeServerChannelNo()
{
    return m_code;
}
void CExchangeServer::SetExchageServer(unsigned int ip, short port, int code, bool& result)
{
    time_t now = time(0);
    in_addr oldIp;
    oldIp.s_addr = *(unsigned int*)((char*)this + 8);
    result = false;
    if (m_active == 0)
    {
        DNF_LOG_SCOPE_LINE(0xe2c,"./log/ExchangeServer", "insert new(%s,%d,%d,%d)", inet_ntoa(*(in_addr*)&ip), port,
            code, now);
        m_ip = ip;
        m_port = port;
        m_code = code;
        m_time = now;
        m_active = 1;
    }
    else if (m_ip == ip && m_port == port && m_code == code)
    {
        if (now - m_time < 0x1f)
        {
            result = true;
        }
        m_time = now;
    }
    else if (0x1e < now - m_time)
    {
        DNF_LOG_SCOPE_LINE(0xe21,"./log/ExchangeServer",
            "timeout : new(%s,%d,%d,%d) old(%s,%d,%d,%d)", inet_ntoa(*(in_addr*)&ip), port,
            code, now, inet_ntoa(oldIp), m_port, m_code, (int)m_time);
        m_ip = ip;
        m_port = port;
        m_code = code;
        m_time = now;
    }
}

CServerHandler::CServerHandler() {}
CServerHandler::~CServerHandler() {}

void CServerHandler::Attach(CApplication* app) {}
unsigned char CServerHandler::GetServerGroupNo()
{
    return 0;
}
void CServerHandler::Process()
{
    int tick = m_field24++;
    if (m_managerServer != 0 && tick > 3)
    {
        unsigned char group = GetServerGroupNo();
        m_managerServer->SendHeartBeat(group & 0xff);
        m_field24 = 0;
    }
    for (std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.begin();
         it != m_gameServers.end(); it++)
    {
        CServerInterface* gs = it->second;
        if (gs->IsValidServer() && gs->IsConnected() && gs->IsHeartBeatTimeOver())
        {
            unsigned char channel = gs->GetChannelNo();
            if (channel < 0xbe)
            {
                m_app->OnGameServerDown((CGameServer*)gs);
            }
            gs->OnDisconnect();
        }
    }
    if (m_dbServer == 0 || !m_dbServer->IsValidServer())
    {
    }
    else
    {
        if (m_dbServer->IsConnected() && m_dbServer->IsHeartBeatTimeOver())
        {
            m_dbServer->OnDisconnect();
            DNF_LOG_SCOPE_LINE(0xdc, "./log/DBServerErr", "CServerHandler::Process() DB Server Down!\n");
        }
        if (m_tcpManagerServer.IsValidServer() != 1)
        {
            const char* ip = m_tcpManagerServer.GetIP();
            if (*ip == '\0' || m_tcpManagerServer.GetPort() == 0)
            {
            }
            else
            {
                CTcpNetSystem* net = m_app->Get_TcpNetSystem();
                net->OpenTcpService(*m_tcpManagerServer.GetSockRef(), ip,
                                    m_tcpManagerServer.GetPort());
                DNF_LOG_SCOPE_LINE(0x124,"./log/TcpServer", "try connect to DBMW(%s, %d)",
                    m_tcpManagerServer.GetIP(), m_tcpManagerServer.GetPort());
            }
        }
        if (9 < m_field64++)
        {
            m_tcpManagerServer.SendHeartbeat(GetServerGroupNo());
            m_field64 = 0;
        }
        if (m_tcpDbServer.IsValidServer() != 1)
        {
            const char* ip = m_tcpDbServer.GetIP();
            if (*ip == '\0' || m_tcpDbServer.GetPort() == 0)
            {
            }
            else
            {
                CTcpNetSystem* net = m_app->Get_TcpNetSystem();
                net->OpenTcpService(*m_tcpDbServer.GetSockRef(), ip, m_tcpDbServer.GetPort());
                DNF_LOG_SCOPE_LINE(0x13d,"./log/TcpServer", "try connect to DBMW(%s, %d)",
                    m_tcpDbServer.GetIP(), m_tcpDbServer.GetPort());
            }
        }
        if (9 < m_field50++)
        {
            m_tcpDbServer.SendHeartbeat();
            m_field50 = 0;
        }
    }
}
void CServerHandler::Load(std::multimap<unsigned int, stServerInfo*>* map)
{
    for (std::multimap<unsigned int, stServerInfo*>::iterator it = map->begin();
         it != map->end(); it++)
    {
        stServerInfo* si = it->second;
        if (si->m_field2 == 1)
        {
            if (si->m_field1 == 0xff)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break!");
            }
            RegistGameServer(si);
        }
        else if (si->m_field2 == 2)
        {
            if (si->m_field1 == 0xff || si->m_field1 != 0xc8)
            {
                throw CDNFException("CServerHandler::Load() DB Server Table Exception Break!");
            }
            if (m_dbServer != 0)
            {
                UnregistDBServer();
                DNF_LOG_SCOPE_LINE(0x5d, "./log/Config", "DB Config Reload.\n");
            }
            CDBServer* db = new CDBServer(si);
            db->Initialize();
            RegistDBServer(db);
        }
        else if (si->m_field2 == 4)
        {
            if (si->m_field1 == 0xff || si->m_field1 != 0xca)
            {
                throw CDNFException("CServerHandler::Load() Manager Server Table Exception Break!");
            }
            if (m_managerServer != 0)
            {
                UnregistManagerServer();
                DNF_LOG_SCOPE_LINE(0x6f, "./log/Config", "Manager Config Reload.\n");
            }
            CManagerServer* mgr = new CManagerServer(si);
            mgr->Initialize();
            RegistManagerServer(mgr);
        }
    }
}
bool CServerHandler::RegistGameServer(stServerInfo* info)
{
    unsigned int group = (unsigned int)info->m_field1;
    std::map<unsigned int, CGameServer*>::iterator found = m_gameServers.find(group);
    if (found == m_gameServers.end())
    {
        CGameServer* gs = new CGameServer(info);
        gs->Initialize();
        m_gameServers.insert(std::pair<const unsigned int, CGameServer*>(info->m_field1, gs));
    }
    return found == m_gameServers.end();
}
CGameServer* CServerHandler::GetGameServer(unsigned int id)
{
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(id);
    if (it != m_gameServers.end())
    {
        return it->second;
    }
    return 0;
}
void* CServerHandler::GetTcpGameServer(unsigned int id)
{
    std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.find(id);
    if (it != m_tcpGameServers.end())
    {
        return it->second;
    }
    return 0;
}
CTcpGameServer* CServerHandler::GetTcpGameServerByCh(unsigned char channel)
{
    for (std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.begin();
         it != m_tcpGameServers.end(); ++it)
    {
        CTcpGameServer* tcp = it->second;
        if (tcp != 0 && tcp->GetChannelNo() == channel)
        {
            return tcp;
        }
    }
    return 0;
}
void CServerHandler::queryReloadTowerRank(unsigned int channel)
{
    for (int i = 0; i <= 4; i++)
    {
        Packet_Request_Load_Tower_Full_Rank pkt;
        *(int*)((char*)&pkt + 0xa) = i;
        *(unsigned int*)((char*)&pkt + 0xe) = channel;
        SendToDB(&pkt);
    }
}
int CServerHandler::SendToManager(PacketHeader* pkt)
{
    if (m_managerServer == 0)
    {
        return 0;
    }
    return m_managerServer->SendToServer((char*)pkt,
                                         (unsigned int)*(unsigned short*)((char*)pkt + 2));
}
void CServerHandler::SendDBMWRequestIPCounter(unsigned char flag, unsigned char b)
{
    Packet_Request_IPCounterList pkt;
    *(char*)((char*)&pkt + 0xa) = (char)flag;
    *(char*)((char*)&pkt + 0xb) = (char)b;
    SendToDB(&pkt);
}
unsigned int CServerHandler::getfirstLinkedServer()
{
    if (m_gameServers.empty())
    {
        return 0;
    }
    return m_gameServers.begin()->first;
}
void CServerHandler::RegistDBServer(CDBServer* db) { m_dbServer = db; }
void CServerHandler::UnregistDBServer()
{
    if (m_dbServer != 0)
    {
        delete m_dbServer;
        m_dbServer = 0;
    }
}
void CServerHandler::RegistManagerServer(CManagerServer* mgr) { m_managerServer = mgr; }
CTcpGameServer* CServerHandler::CreateTcpGameServer(unsigned int id)
{
    CTcpGameServer* tcp = new CTcpGameServer;
    tcp->Init(id, m_app->Get_TcpNetSystem());
    std::pair<std::map<unsigned int, CTcpGameServer*>::iterator, bool> r =
        m_tcpGameServers.insert(std::make_pair(id, tcp));
    if (!r.second)
    {
        delete tcp;
        tcp = 0;
    }
    return tcp;
}
int CServerHandler::DeleteTcpGameServer(unsigned int id)
{
    std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.find(id);
    if (it == m_tcpGameServers.end())
    {
        return 0;
    }
    CTcpGameServer* tcp = it->second;
    if (tcp != 0)
    {
        delete tcp;
    }
    m_tcpGameServers.erase(it);
    DNF_LOG_SCOPE_LINE(0x35f, "./log/Tcp", "TcpGameServer Delete !");
    return 1;
}
int CServerHandler::UnregistGameServer(unsigned int channel)
{
    std::map<unsigned int, CGameServer*>::iterator it = m_gameServers.find(channel);
    if (it == m_gameServers.end())
    {
        return 0;
    }
    CGameServer* gs = it->second;
    if (gs != 0)
    {
        delete gs;
    }
    m_gameServers.erase(it);
    DNF_LOG_SCOPE_LINE(0x412, "./log/GameServer", "Game server unregist. Channel: %d", channel);
    return 1;
}
void CServerHandler::UnregistManagerServer()
{
    if (m_managerServer != 0)
    {
        delete m_managerServer;
        m_managerServer = 0;
    }
}
void CServerHandler::SendAllTcpGameServer(PacketHeader* pkt)
{
    for (std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.begin();
         it != m_tcpGameServers.end(); ++it)
    {
        CTcpGameServer* tcp = it->second;
        if (tcp->IsValidServer())
        {
            char* buf = tcp->makePacketHeader(*(unsigned short*)pkt,
                                              *(unsigned short*)((char*)pkt + 2));
            memcpy(buf + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
            tcp->SendToGameServer(buf);
        }
    }
}
int CServerHandler::SendAllTcpGameServer(PacketHeader* pkt, int channel)
{
    int count = 0;
    for (std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.begin();
         it != m_tcpGameServers.end(); ++it)
    {
        CTcpGameServer* tcp = it->second;
        if (tcp->IsValidServer() && tcp->GetChannelType() == channel)
        {
            char* buf = tcp->makePacketHeader(*(unsigned short*)pkt,
                                              *(unsigned short*)((char*)pkt + 2));
            memcpy(buf + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
            tcp->SendToGameServer(buf);
            count++;
        }
    }
    return count;
}
void CServerHandler::SendAllToGameServer(char* buf, int len) {}
void CServerHandler::SendToGameServer(unsigned char channel, PacketHeader* pkt)
{
    CGameServer* gs = GetGameServer((unsigned int)channel);
    if (gs != 0)
    {
        ((CServerInterface*)gs)->SendToServer((char*)pkt,
                                              *(unsigned short*)((char*)pkt + 2));
    }
}
void CServerHandler::SetManagerConnectFlag(bool flag)
{
    if (m_managerServer != 0)
    {
        ((CServerInterface*)m_managerServer)->SetConnFlag(flag);
    }
}
void CServerHandler::SetDBConnectFlag(bool flag)
{
    if (m_dbServer != 0)
    {
        ((CServerInterface*)m_dbServer)->SetConnFlag(flag);
    }
}
void CServerHandler::ResetDBHeartBeat()
{
    if (m_dbServer != 0)
    {
        ((CServerInterface*)m_dbServer)->ResetHeartBeat();
    }
}
char CServerHandler::IsConnectedDBServer()
{
    if (m_dbServer == 0)
    {
        return 0;
    }
    return ((CServerInterface*)m_dbServer)->IsConnected();
}
void CServerHandler::SendDBMWConnectionCheck()
{
    Packet_DBMW_Connection_Check pkt;
    pkt.m_channel = 0xc9;
    SendToDB(&pkt);
}
void CServerHandler::ResetHeartBeat(unsigned char channel)
{
    std::map<unsigned int, CGameServer*>::iterator it =
        m_gameServers.find((unsigned int)channel);
    if (it != m_gameServers.end() && it->second != 0 &&
        ((CServerInterface*)it->second)->IsValidServer() != 0)
    {
        ((CServerInterface*)it->second)->ResetHeartBeat();
    }
}
char CServerHandler::IsConnectedGameServer(unsigned char channel)
{
    std::map<unsigned int, CGameServer*>::iterator it =
        m_gameServers.find((unsigned int)channel);
    if (it == m_gameServers.end())
    {
        return 0;
    }
    return ((CServerInterface*)it->second)->IsConnected();
}
void CServerHandler::SetConnectFlag(unsigned char channel, bool flag)
{
    std::map<unsigned int, CGameServer*>::iterator it =
        m_gameServers.find((unsigned int)channel);
    if (it != m_gameServers.end())
    {
        ((CServerInterface*)it->second)->SetConnFlag(flag);
    }
}
void CServerHandler::SendDBMWRequestARSInfo(unsigned char flag)
{
    Packet_Web_Request_ARS_Info pkt;
    pkt.m_flag = flag;
    SendToDB(&pkt);
}
CTcpManagerServer* CServerHandler::GetTcpManagerServer() { return &m_tcpManagerServer; }
CTcpDBServer* CServerHandler::GetTcpDBServer() { return &m_tcpDbServer; }
void CServerHandler::SendToDB(PacketHeader* pkt) {}
CDBServer* CServerHandler::GetDBServer() { return m_dbServer; }
CManagerServer* CServerHandler::GetManagerServer() { return m_managerServer; }
void CServerHandler::SetGameServerIpPort(unsigned char a, unsigned int b, unsigned short c)
{
    char x = (char)a;
    unsigned short y = (unsigned short)c;
}
void CServerHandler::QueryMember(unsigned int key)
{
    Packet_DB_Query_Member pkt;
    pkt.m_fieldA = key;
    SendToDB(&pkt);
}
void CServerHandler::QueryMemberMember(unsigned int key)
{
    Packet_DB_Query_Member_Member pkt;
    pkt.m_fieldA = key;
    SendToDB(&pkt);
}
void CServerHandler::SendDBMWRequest_D_IPCounter(unsigned char flag)
{
    unsigned char x = flag;
    Packet_Request_IPCounterList pkt;
    pkt.m_fieldA = x;
    SendToDB(&pkt);
}

CServerInterface::CServerInterface()
{
    m_info = 0;
    m_field8[0] = 0;
    m_field8[1] = 0;
    m_field8[2] = 0;
    m_udpHandler = 0;
}
CServerInterface::CServerInterface(stServerInfo* info) {}
CServerInterface::~CServerInterface() {}
stServerInfo* CServerInterface::GetServerInfo() { return m_info; }
void* CServerInterface::GetUdpHandler() { return m_udpHandler; }
unsigned char CServerInterface::GetGroupNo() { return *(unsigned char*)((char*)m_info); }
void CServerInterface::SetServerInfo(stServerInfo* info) { m_info = info; }
bool CServerInterface::Initialize() { return true; }
bool CServerInterface::Destroy() { return true; }
char CServerInterface::IsValidServer() { return 1; }
char CServerInterface::IsConnected() { return 1; }
char CServerInterface::IsHeartBeatTimeOver() { return 0; }
unsigned char CServerInterface::GetChannelNo() { return 0; }
void CServerInterface::OnDisconnect() {}
void CServerInterface::SetConnFlag(bool flag)
{
    *(char*)((char*)this + 8) = (char)flag;
}
void CServerInterface::ResetHeartBeat()
{
    *(char*)((char*)this + 9) = 0x14;
    *(char*)((char*)this + 10) = 0;
}
int CServerInterface::SendToServer(char* buf, int len)
{
    if (*(int*)((char*)this + 0xc) == 0)
    {
        return 0;
    }
    return ((CUdpHandler*)*(int*)((char*)this + 0xc))
        ->SendToServer(buf, len, *(unsigned short*)(*(int*)((char*)this + 4) + 0x14),
                       (char*)(*(int*)((char*)this + 4) + 3));
}

CDBServer::CDBServer() {}
CDBServer::CDBServer(stServerInfo* info) : CServerInterface(info) {}
CDBServer::~CDBServer() {}
bool CDBServer::Initialize()
{
    if (!CServerInterface::Initialize())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool CDBServer::Destroy()
{
    if (!CServerInterface::Destroy())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
CManagerServer::CManagerServer() {}
CManagerServer::CManagerServer(stServerInfo* info) : CServerInterface(info) {}
CManagerServer::~CManagerServer() {}
bool CManagerServer::Initialize()
{
    if (!CServerInterface::Initialize())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool CManagerServer::Destroy()
{
    if (!CServerInterface::Destroy())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void CManagerServer::SendHeartBeat(int group) {}
CGameServer::CGameServer() { m_socket = 0; }
CGameServer::CGameServer(stServerInfo* info) : CServerInterface(info) {}
CGameServer::~CGameServer() {}
bool CGameServer::Initialize()
{
    if (!CServerInterface::Initialize())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool CGameServer::Destroy()
{
    if (!CServerInterface::Destroy())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
unsigned int CGameServer::GetSocket() { return m_socket; }
void CGameServer::SetSocket(unsigned int sock)
{
    m_socket = sock;
}

CTowerRank::CTowerRank() {}
CTowerRank::~CTowerRank() {}
void CTowerRank::processReloadRanking(CServerHandler* handler, bool flag, unsigned int tick) {}
stTowerRankElement_t::stTowerRankElement_t()
{
    m_job = 0;
    m_score = 0;
}
stTowerRankElement_t::stTowerRankElement_t(unsigned char job, unsigned short score)
{
    m_job = job;
    m_score = score;
}
void CTowerRank::registCharacRank(unsigned int floor, const char* name, unsigned int job,
                                  unsigned int score)
{
    std::multimap<std::string, stTowerRankElement_t>& mm = m_ranks[floor - 1];
    std::multimap<std::string, stTowerRankElement_t>::iterator lo = mm.lower_bound(name);
    std::multimap<std::string, stTowerRankElement_t>::iterator up = mm.upper_bound(name);
    do
    {
        if (lo == up)
        {
            goto INSERT;
        }
        if (lo->second.m_job == (unsigned char)job)
        {
            if (score <= (unsigned int)lo->second.m_score)
            {
                return;
            }
            mm.erase(lo);
            goto INSERT;
        }
        ++lo;
    } while (true);
INSERT:
    stTowerRankElement_t elem((unsigned char)job, (unsigned short)score);
    mm.insert(std::pair<const std::string, stTowerRankElement_t>(name, elem));
}
unsigned int CTowerRank::getRankData(unsigned int floor, const char* name, unsigned int maxCount,
                                     stTowerRankElement_t* out)
{
    unsigned int count = 0;
    std::multimap<std::string, stTowerRankElement_t>& mm = m_ranks[floor - 1];
    std::multimap<std::string, stTowerRankElement_t>::const_iterator lo = mm.lower_bound(name);
    std::multimap<std::string, stTowerRankElement_t>::const_iterator up = mm.upper_bound(name);
    while (lo != up)
    {
        out[count] = lo->second;
        count++;
        if (count == maxCount)
        {
            break;
        }
        ++lo;
    }
    return count;
}

CThreadInterface::CThreadInterface() {}
CThreadInterface::~CThreadInterface() {}
void CThreadInterface::stop() {}
void CThreadInterface::join() {}
bool CThreadInterface::begin() { return true; }
void* CThreadInterface::dispatch_proxy(void* temp) { return 0; }

CFrameCountHandler::CFrameCountHandler() {}
CFrameCountHandler::~CFrameCountHandler() {}
void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int frameCount,
                                            unsigned short tick)
{
    if (tick != 0)
    {
        m_app = app;
        memset(this, 0, 0x28);
        m_field4 = tick;
        m_field8 = 100 / tick;
        return;
    }
    throw CDNFException("CFrameCountHandler::InitFrameCountInfo() Exception Break!");
}
CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    tms tm = {};
    m_field24 = 0;
    if (m_field0 == 0)
    {
        m_field0 = 1;
        m_field14 = 0;
        m_fieldc = times(&tm);
        if (m_fieldc == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
    }
    else
    {
        m_field10 = times(&tm);
        if (m_field10 == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
        if ((unsigned int)m_field10 < (unsigned int)m_fieldc)
        {
            m_fieldc = m_field10;
        }
        if (m_field14 < (unsigned int)((int)m_field10 - (int)m_fieldc) / (unsigned int)m_field8)
        {
            m_field14++;
            m_field24 = 1;
            if (99 < (unsigned int)((int)m_field10 - (int)m_fieldc))
            {
                m_field18 = m_field14;
                m_field24 = 2;
                m_field14 = 0;
                m_fieldc = (m_field10 - (m_field10 - m_fieldc)) + 100;
                m_field20 = 0;
                m_field25++;
                if (59 < (unsigned char)m_field25)
                {
                    m_field24 = 3;
                    m_field25 = 0;
                    m_field26++;
                    if (59 < (unsigned char)m_field26)
                    {
                        m_field24 = 4;
                        m_field26 = 0;
                    }
                }
            }
        }
    }
    return this;
}
void CFrameCountHandler::SaveProcess()
{
    m_field28++;
    if (m_field28 != 0)
    {
        DNF_LOG_SCOPE_LINE(0xa8, "./log/frame", "FPS(%02d) / DFC(%02d)\n", m_field18, m_field4);
        m_field28 = 0;
    }
}
void CFrameCountHandler::SaveProcess(int threadNo)
{
    m_field28++;
    if (m_field28 != 0)
    {
        DNF_LOG_SCOPE_LINE(0xb8,"./log/frame", "Thread(%2d) / FPS(%02d) / DFC(%02d)", threadNo, m_field18,
            m_field4);
        m_field28 = 0;
    }
}
void CTowerRank::reset()
{
    for (int i = 0; i < 4; i++)
    {
        m_ranks[i].clear();
    }
}
void CTowerRank::registRank(unsigned int floor, unsigned int job, unsigned int score,
                            const stDeathTowerRecordMemberInfo_t* records)
{
    for (unsigned int i = 0; i < floor; i++)
    {
        registCharacRank(floor, records[i].m_name, job, score);
    }
}

CBuddyRegisterManager::CBuddyRegisterManager() {}
CBuddyRegisterManager::~CBuddyRegisterManager() {}
void CBuddyRegisterManager::addBuddyRegister(unsigned int key, unsigned int value)
{
    m_map.insert(std::pair<const unsigned int, unsigned int>(key, value));
}
int CBuddyRegisterManager::delBuddyRegister(unsigned int key, unsigned int value)
{
    std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
    std::multimap<unsigned int, unsigned int>::iterator end = m_map.upper_bound(key);
    for (; it != end; ++it)
    {
        if (it->second == value)
        {
            m_map.erase(it);
            return 1;
        }
    }
    return 0;
}
void CBuddyRegisterManager::delBuddyRegister(unsigned int key)
{
    std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
    std::multimap<unsigned int, unsigned int>::iterator end = m_map.upper_bound(key);
    while (it != end)
    {
        m_map.erase(it++);
    }
}
void CBuddyRegisterManager::findBuddyRegister(unsigned int key, std::vector<unsigned int>& out)
{
    std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
    std::multimap<unsigned int, unsigned int>::iterator end = m_map.upper_bound(key);
    for (; it != end; ++it)
    {
        out.push_back(it->second);
    }
}
void CBuddyRegisterManager::printBuddyRegister(char* name, unsigned int flag)
{
    unsigned int key = *(unsigned int*)name;
    for (std::multimap<unsigned int, unsigned int>::iterator it = m_map.lower_bound(key);
         it != m_map.upper_bound(key); ++it)
    {
        DNF_LOG_SCOPE_LINE(0x68, "./log/buddyRegister", "[%s] rcharNo(%d)", flag, it->second);
    }
}

void CUdpNetworkThread::attach(CApplication* app)
{
    if (app != 0)
    {
        m_recvQ = app->Get_UdpPacketRecvQ();
        m_udpHandler = app->Get_UdpHandler();
        m_qLock = app->Get_UdpQLock();
        m_bLock = app->Get_UdpBLock();
    }
}
void CUdpNetworkThread::SetUDPQueue(
    std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > >* q)
{
    m_recvQ = q;
}
void CUdpNetworkThread::dispatch(void* param)
{
    if (m_recvQ != 0 && m_udpHandler != 0 && m_qLock != 0)
    {
        try
        {
            DNFFLib::Sleep_Ext(5, 0);
            puts("Network Thread Start!");
            m_running = true;
            while (m_running)
            {
                CUdpRecvBuffer* buf;
                {
                    CGuard<CMutex> guard((CMutex*)m_bLock);
                    buf = new CUdpRecvBuffer;
                }
                int recvSize = 0x1800;
                unsigned short srcPort = 0;
                unsigned int fromAddr = 0;
                char ok = m_udpHandler->RecvFromClient((char*)buf, &recvSize, &fromAddr, &srcPort);
                unsigned int recvByte = (unsigned int)recvSize;
                if (ok == 1)
                {
                    CUdpRecvBuffer* pkt = buf;
                    if (*(unsigned short*)((char*)buf + 2) == recvSize)
                    {
                        if (*(unsigned short*)((char*)buf + 2) < 0x1800)
                        {
                            if (recvSize < 0x1801)
                            {
                                *(unsigned int*)((char*)buf + 6) = fromAddr;
                                *(unsigned short*)((char*)buf + 4) = srcPort;
                                {
                                    CGuard<CMutex> guard((CMutex*)m_qLock);
                                    ((std::queue<CUdpRecvBuffer*>*)m_recvQ)->push(pkt);
                                    unsigned int qsize =
                                        ((std::queue<CUdpRecvBuffer*>*)m_recvQ)->size();
                                }
                            }
                            else
                            {
                                unsigned short code = *(unsigned short*)buf;
                                unsigned short psize = *(unsigned short*)((char*)buf + 2);
                                DNF_LOG_SCOPE_LINE(0x85,"./log/recvErr",
                                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                    psize, recvByte, code);
                                {
                                    CGuard<CMutex> guard((CMutex*)m_bLock);
                                    delete buf;
                                }
                            }
                        }
                        else
                        {
                            unsigned short code = *(unsigned short*)buf;
                            unsigned short psize = *(unsigned short*)((char*)buf + 2);
                            DNF_LOG_SCOPE_LINE(0x79,"./log/recvErr",
                                "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                psize, recvByte, code);
                            {
                                CGuard<CMutex> guard((CMutex*)m_bLock);
                                delete buf;
                            }
                        }
                    }
                    else
                    {
                        unsigned short code = *(unsigned short*)buf;
                        unsigned short psize = *(unsigned short*)((char*)buf + 2);
                        DNF_LOG_SCOPE_LINE(0x6e,"./log/recvErr",
                            "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            psize, recvByte, code);
                        {
                            CGuard<CMutex> guard((CMutex*)m_bLock);
                            delete buf;
                        }
                    }
                }
                else
                {
                    {
                        CGuard<CMutex> guard((CMutex*)m_bLock);
                        delete buf;
                    }
                }
            }
            return;
        }
        catch (CDNFException& e)
        {
            printf("CUdpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
            throw CDNFException("CUdpNetworkThread::dispatch() Recv  Socket Exception Break!");
        }
        catch (...)
        {
            puts("CUdpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
            throw CDNFException("CUdpNetworkThread::dispatch() Recv  Socket Exception Break!");
        }
    }
    throw CDNFException("NetworkThread is Not Ready!\n");
}

CTcpNetworkThread::CTcpNetworkThread() {}
CTcpNetworkThread::~CTcpNetworkThread() {}
void CTcpNetworkThread::attach(CTcpNetSystem* net) {}
void CTcpNetworkThread::dispatch(void* param)
{
    CPeer* peer = 0;
    int eventCount = 0;
    m_runningFlag = 1;
    try
    {
        DNFFLib::Sleep_Ext(5, 0);
        while (true)
        {
            do
            {
                do
                {
                    if (m_runningFlag == 0)
                    {
                        DNF_LOG_SCOPE_LINE(0xae, "./log/TcpRecv", "RecvThread Terminate");
                        return;
                    }
                    errno = 0;
                    DNFFLib::Sleep_Ext(0, 5);
                } while (m_net == 0);
                m_net->SetEpollAcceptedPeers();
                m_net->SendPacket();
                eventCount = m_net->WaitForEvent();
            } while (eventCount == 0);
            if ((eventCount < 0 && errno != EINTR) && errno != 0)
            {
                break;
            }
            for (int i = 0; i < eventCount; i++)
            {
                peer = (CPeer*)((CTcpHandler*)m_handler)->GetEventPtr(i);
                if (peer != 0 && ((CTcpHandler*)m_handler)->IsSetInEvent(i))
                {
                    if (peer->recv_packet() < 1)
                    {
                        peer->DisConnSig();
                        m_net->DeletePeer(peer);
                        peer = 0;
                    }
                }
                if (peer != 0 && peer->get_remain_sendlen() != 0 &&
                    ((CTcpHandler*)m_handler)->IsSetOutEvent(i))
                {
                    if (peer->get_remain_sendlen() < 0x1801)
                    {
                        peer->send_packet();
                    }
                }
                ((CTcpHandler*)m_handler)->IsSetErrEvent(i);
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd!");
    }
    catch (...)
    {
        puts("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CTcpNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd!");
    }
}

CTcpAcceptThread::CTcpAcceptThread() {}
CTcpAcceptThread::~CTcpAcceptThread() {}
void CTcpAcceptThread::attach(CTcpNetSystem* net)
{
    if (net != 0)
    {
        m_net = net;
        m_recvQLock = net->Get_TcpRecvQLock();
        m_recvBLock = net->Get_TcpRecvBLock();
        m_port = net->Get_TcpServerPort();
    }
}
void CTcpAcceptThread::dispatch(void* param)
{
    try
    {
        if (m_sock.open())
        {
            if (m_sock.bind(m_port, true))
            {
                if (m_sock.listen(5))
                {
                    m_running = true;
                    DNFFLib::Sleep_Ext(5, 0);
                    while (m_running)
                    {
                        if (m_sock.pollReadEvent())
                        {
                            CPeer* peer = m_net->CreatePeer();
                            TCPSocket* sock = peer->GetTcpSocket();
                            if (m_sock.accept(*sock) != 1)
                            {
                                printf("Accept GameServer Fail(Port : %d)\n", sock->getHandle());
                            }
                            printf("Accept GameServer(Port : %d)\n", sock->getHandle());
                            CMutex* recvB = m_net->Get_TcpRecvBLock();
                            CMutex* recvQ = m_net->Get_TcpRecvQLock();
                            void* q = m_net->Get_TcpSwapQPacket()->GetRecvQ();
                            peer->InitPeer(
                                (std::queue<CTcpRecvBuffer*>*)q, recvQ, recvB);
                            peer->ConnSig();
                            m_net->InsertAcceptedPeer(peer);
                        }
                    }
                }
                else
                {
                    printf("Tcp Accept Socket Listen Err");
                }
            }
            else
            {
                printf("Tcp Accept Socket Bind Err");
            }
        }
        else
        {
            printf("Tcp Accept Socket Open Err");
        }
    }
    catch (CDNFException& e)
    {
        printf("CTcpAcceptThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CTcpAcceptThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd!");
    }
    catch (...)
    {
        puts("CTcpAcceptThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CTcpAcceptThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd!");
    }
}

void* CTcpHandler::GetEventPtr(int idx) { return 0; }
int CTcpHandler::SetPeer(void* peer, int fd, bool flag) { return 0; }
int CTcpHandler::WaitForEvent()
{
    if (m_epoll == 0)
    {
        return -1;
    }
    return ((EpollHandler*)m_epoll)->WaitForEvent();
}
int CTcpHandler::ResetEpoll(int flag)
{
    if (m_epoll == 0)
    {
        return -1;
    }
    return ((EpollHandler*)m_epoll)->ResetEpoll(flag);
}
CTcpHandler::CTcpHandler() : m_epoll(new EpollHandler) {}
CTcpHandler::~CTcpHandler() {}
EpollHandler::EpollHandler()
{
    Init();
}
EpollHandler::~EpollHandler()
{
    Destroy();
}
void EpollHandler::Destroy()
{
    if (m_events != 0)
    {
        ::operator delete(m_events);
    }
    m_events = 0;
}
int EpollHandler::Init()
{
    m_epollFd = epoll_create(1000);
    if (m_epollFd < 0)
    {
        puts("[Epoll::init] Can\'t init epoll create");
        return 0;
    }
    m_events = ::operator new(12000);
    if (m_events == 0)
    {
        printf("[Epoll::init] Can\'t alloc event memory");
        return 0;
    }
    return 1;
}
int EpollHandler::SetPeer(void* peer, int fd, bool flag)
{
    return SetEpoll(peer, fd, flag);
}
int EpollHandler::SetEpoll(void* peer, int fd, bool flag)
{
    m_eventType = flag ? 0x8000001d : 0x1d;
    m_peer = peer;
    CGuard<CMutex> guard(&m_mutex);
    int r = epoll_ctl(m_epollFd, 1, fd, (epoll_event*)((char*)this + 4));
    if (r < 0)
    {
        r = errno;
    }
    else
    {
        r = 0;
    }
    return r;
}
int EpollHandler::ResetEpoll(int fd)
{
    memset((char*)this + 4, 0, 0xc);
    *(int*)((char*)this + 4) = 1;
    CGuard<CMutex> guard(&m_mutex);
    int r = epoll_ctl(m_epollFd, 2, fd, (epoll_event*)((char*)this + 4));
    if (r < 0)
    {
        r = errno;
    }
    else
    {
        r = 0;
    }
    return r;
}
int EpollHandler::WaitForEvent()
{
    epoll_wait(GetEpollFD(), (epoll_event*)GetEpollEvents(), 1000, 100);
    return 0;
}
char EpollHandler::IsSetErrEvent(int idx)
{
    return (char)((*(unsigned int*)((char*)m_events + idx * 0xc) & 0x18) != 0);
}
char EpollHandler::IsSetInEvent(int idx)
{
    return (char)((*(unsigned int*)((char*)m_events + idx * 0xc) & 1) != 0);
}
char EpollHandler::IsSetOutEvent(int idx)
{
    return (char)((*(unsigned int*)((char*)m_events + idx * 0xc) & 4) != 0);
}
void* EpollHandler::GetEventPtr(int idx)
{
    return *(void**)((char*)m_events + idx * 0xc + 4);
}
char CTcpHandler::IsSetInEvent(int idx) { return 1; }
char CTcpHandler::IsSetOutEvent(int idx) { return 0; }
char CTcpHandler::IsSetErrEvent(int idx) { return 0; }

int CPeer::recv_packet()
{
    int fd = getHandle();
    if (fd < 0)
    {
        return 0;
    }
    errno = 0;
    int remaining = (int)((char*)this + 0x181c - m_buf);
    if (remaining == 0)
    {
        m_buf = (char*)this + 0x1c;
        m_remainLen = 0;
        remaining = 0x1800;
    }
    int n = read(fd, m_buf, (size_t)(unsigned int)remaining);
    if (n < 0)
    {
        if (errno == EAGAIN || errno == EINTR || errno == EAGAIN || errno == 0)
        {
            return 0;
        }
        printf("RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)", getHandle(), errno,
               strerror(errno));
        return -1;
    }
    if (n == 0)
    {
        DNF_LOG_SCOPE_LINE(0xa4,"./log/TcpRecv", "Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)", errno,
            strerror(errno), remaining, n);
        return -1;
    }
    return n;
}
void CPeer::DisConnSig() {}
unsigned int CPeer::get_remain_sendlen() { return 0; }
int CPeer::send_packet()
{
    int result = 0;
    if (m_sendRemain == 0)
    {
        result = 1;
    }
    else
    {
        size_t n = (size_t)m_sendRemain;
        result = write(getHandle(), m_sendBuf, n);
        if (result < 1)
        {
            if (errno == EAGAIN || errno == EINTR || errno == EAGAIN || errno == 0)
            {
                result = 1;
            }
            else
            {
                printf("SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)", getHandle(), errno,
                       strerror(errno));
                result = 1;
            }
        }
        else if (0 < result)
        {
            if (result < m_sendRemain)
            {
                m_sendPtr = (char*)this + result + 0x183c;
                m_sendRemain = m_sendRemain - result;
                if ((unsigned int)m_sendRemain < 0x96001)
                {
                    memmove(m_sendBuf, m_sendPtr, (size_t)m_sendRemain);
                    m_sendPtr = (char*)this + m_sendRemain + 0x183c;
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x17e,"./log/TcpErr",
                        "m_remain_sendlen < MAX_PACKET_SIZE_UDP :  m_remain_sendlen:%d]",
                        m_sendRemain);
                    m_sendPtr = (char*)this + 0x183c;
                    m_sendRemain = 0;
                    result = 1;
                }
            }
            else if (m_sendRemain < result)
            {
                printf("offset error[Remain_Data: %d Send:%d]", m_sendRemain, result);
                result = -1;
            }
            else
            {
                m_sendPtr = (char*)this + 0x183c;
                m_sendRemain = 0;
            }
        }
    }
    return result;
}
int CPeer::send_packet(char* buf, int len)
{
    if (getHandle() < 0)
    {
        return -1;
    }
    if (len < 1)
    {
        printf("!!!Send Packet[(%d,%d) Size(%d) Error\n", *buf, buf[1], len);
        return -1;
    }
    errno = 0;
    m_sendRemain = m_sendRemain + len;
    if ((unsigned int)m_sendRemain < 0x96001)
    {
        if (m_sendPtr < (char*)this + 0x183c || (char*)this + 0x9783c <= m_sendPtr)
        {
            DNF_LOG_SCOPE_LINE(0x13b,"./log/TcpErr",
                "!!!Send Packet Buffer critical error P_TYPE[%d] Size:Remain[%d] Last[%d]",
                (unsigned char)buf[1], m_sendRemain, len);
            m_sendPtr = (char*)this + 0x183c;
            m_sendRemain = 0;
            return -1;
        }
        memcpy(m_sendPtr, buf, len);
        m_sendPtr = m_sendPtr + len;
        return send_packet();
    }
    DNF_LOG_SCOPE_LINE(0x133,"./log/TcpErr", "!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",
        (unsigned char)buf[1], m_sendRemain, len);
    m_sendPtr = (char*)this + 0x183c;
    m_sendRemain = 0;
    return -1;
}
TCPSocket* CPeer::GetTcpSocket() { return 0; }
void CPeer::InitPeer(std::queue<CTcpRecvBuffer*>* recvQ, CMutex* recvQLock, CMutex* recvBLock)
{
    m_recvQ = recvQ;
    m_qLock = recvQLock;
    m_bLock = recvBLock;
    m_buf = (char*)this + 0x1c;
    m_alreadyRead = 0;
    m_remainLen = 0;
    m_sendPtr = (char*)this + 0x183c;
    m_sendRemain = 0;
}
int CPeer::RecvPacket()
{
    int n = recv_packet();
    if (n < 1)
    {
        if (n < 0)
        {
            DNF_LOG_SCOPE_LINE(0x59,"./log/TcpRecv",
                "Maybe Peer is disconnect!(%d), socket no(%d), addr(%s), port(%d)", n,
                GetTcpSocket()->getHandle(), GetTcpSocket()->getPeerAdrs(),
                (unsigned int)GetTcpSocket()->getPeerPort() & 0xffff);
            printf("CPeer::Recv (size(%d) < 0)\n", n);
            return 0;
        }
        DNF_LOG_SCOPE_LINE(99, "./log/TcpRecv", "Maybe Peer is disconnect!(size == 0)");
        puts("CPeer::Recv (size == 0)");
        return 1;
    }
    char ok = (char)parsing(n);
    if (ok == 1)
    {
        return 1;
    }
    DNF_LOG_SCOPE_LINE(0x4d, "./log/TcpRecv", "CPeer::Recv (false == parsing( size:%d ) )", n);
    printf("CPeer::Recv (false == parsing( size:%d ) )\n", n);
    return 1;
}
void CPeer::ConnSig() {}
int CPeer::parsing(int recvLen)
{
    PacketHeader header(0, 0);
    unsigned int totalLen = (unsigned int)(m_remainLen + recvLen);
    int headerSize = 10;
    if ((int)totalLen < 10)
    {
        m_remainLen = m_remainLen + recvLen;
        m_buf = m_buf + recvLen;
        DNF_LOG_SCOPE_LINE(0xbb,"./log/TcpRecv", "(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",
            m_buf, (char*)this + 0x1c, m_remainLen, recvLen);
    }
    else
    {
        do
        {
            if (m_remainLen != 0)
            {
                m_buf = m_buf - m_remainLen;
            }
            memcpy(&header, m_buf, 10);
            unsigned int pktSize = (unsigned int)*(unsigned short*)((char*)&header + 2);
            if (pktSize < 10 || 0x1800 < pktSize)
            {
                DNF_LOG_SCOPE_LINE(0xd0,"./log/TcpRecv",
                    "Recv Size[%d], Parsing Packet Size[%d] is Too Large, offset:%x, buf:%x, alreadyRead:%d",
                    recvLen, pktSize, m_buf, (char*)this + 0x1c, m_alreadyRead);
                m_buf = (char*)this + 0x1c;
                m_remainLen = 0;
                return 0;
            }
            if (totalLen < pktSize)
            {
                DNF_LOG_SCOPE_LINE(0x100,"./log/TcpRecv",
                    "need more data (packetsize > (unsigned int)parsinglength): body=%d !!",
                    totalLen);
                goto LAB_51773;
            }
            CTcpRecvBuffer* buf;
            {
                CGuard<CMutex> guard((CMutex*)m_bLock);
                buf = new CTcpRecvBuffer;
            }
            memcpy(buf, m_buf, pktSize);
            *(unsigned int*)((char*)buf + 6) = (unsigned int)getHandle();
            {
                CGuard<CMutex> guard((CMutex*)m_qLock);
                ((std::queue<CTcpRecvBuffer*>*)m_recvQ)->push(buf);
                int qsize = ((std::queue<CTcpRecvBuffer*>*)m_recvQ)->size();
            }
            totalLen = totalLen - pktSize;
            m_buf = m_buf + pktSize;
            m_remainLen = 0;
            if (totalLen == 0)
            {
                m_buf = (char*)this + 0x1c;
                goto LAB_51773;
            }
        } while (9 < (int)totalLen);
        {
            DNF_LOG_SCOPE_LINE(0xf8,"./log/TcpRecv", "need more data (parsinglength < HEADER_SIZE): body=%d !!",
                totalLen);
        }
LAB_51773:
        if (0 < (int)totalLen)
        {
            if (0x1800 < totalLen)
            {
                DNF_LOG_SCOPE_LINE(0x10e,"./log/TcpRecv",
                    "[PARSING LENGTH EXCEPTION] parsinglength > MAX_RECV_BUF , memmove : parsinglength = %d",
                    totalLen);
                return 0;
            }
            memmove((char*)this + 0x1c, m_buf, totalLen);
            m_remainLen = (int)totalLen;
            m_buf = (char*)this + 0x1c + totalLen;
        }
    }
    return 1;
}

CPeer::CPeer() {}
CPeer::~CPeer() {}
void* CPeer::operator new(unsigned int size) { return ::operator new(size); }
void CPeer::operator delete(void* p) { ::operator delete(p); }

TCPSocket::TCPSocket()
{
    m_fd = -1;
    memset((char*)this + 0x14, 0, 4);
    memset((char*)this + 4, 0, 0x10);
    *(unsigned short*)((char*)this + 0x18) = 0;
}
TCPSocket::~TCPSocket()
{
    close();
}
char TCPSocket::open()
{
    int fd = socket(2, 1, 0);
    m_fd = fd;
    if (m_fd == -1)
    {
        printf("Could not create a TDP socket : %d\n", errno);
    }
    return (char)(m_fd != -1);
}
char TCPSocket::connect(const char* ip, unsigned short port)
{
    sockaddr addr;
    memset(&addr, 0, 0x10);
    addr.sa_family = 2;
    *(unsigned int*)((char*)&addr + 4) = inet_addr(ip);
    *(unsigned short*)((char*)&addr + 2) = htons(port);
    int r = ::connect(m_fd, &addr, 0x10);
    if (r >= 0)
    {
        memcpy((char*)this + 0x14, (char*)&addr + 4, 4);
        *(unsigned short*)((char*)this + 0x18) = *(unsigned short*)((char*)&addr + 2);
    }
    else
    {
        printf("CONNECTION FAIL IP =%s, PORT =%d, reason =%s", ip, (unsigned int)port,
               strerror(errno));
    }
    return (char)(r >= 0);
}
char TCPSocket::setOptNonBlock()
{
    unsigned int flags = fcntl(m_fd, 3, 0);
    int r = fcntl(m_fd, 4, flags | 0x800);
    return (char)(r >= 0);
}
char TCPSocket::bind(unsigned short port, bool flag)
{
    setOptReuseAdrs(true);
    sockaddr addr;
    memset(&addr, 0, 0x10);
    addr.sa_family = 2;
    *(unsigned short*)((char*)&addr + 2) = htons(port);
    int r = ::bind(m_fd, &addr, 0x10);
    if (r < 0)
    {
        close();
        return 0;
    }
    if (flag)
    {
        setOptNonBlock();
    }
    printf("succeeded in binding TCP socket port #%d\n", (unsigned int)port);
    return 1;
}
char TCPSocket::listen(int backlog)
{
    int r = ::listen(m_fd, backlog);
    if (r < 0)
    {
        close();
    }
    return (char)(r >= 0);
}
char TCPSocket::pollReadEvent() const
{
    fd_set readfds;
    FD_ZERO(&readfds);
    FD_SET(m_fd, &readfds);
    timeval tv;
    tv.tv_sec = 5;
    tv.tv_usec = 0;
    int r = select(m_fd + 1, &readfds, 0, 0, &tv);
    if (r < 0)
    {
        printf("pollReadEvent(%s)", strerror(errno));
        return 0;
    }
    return (char)FD_ISSET(m_fd, &readfds);
}
char TCPSocket::pollWriteEvent() const
{
    fd_set writefds;
    FD_ZERO(&writefds);
    FD_SET(m_fd, &writefds);
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int r = select(2, 0, &writefds, 0, &tv);
    if (r < 0)
    {
        printf("pollWriteEvent(%s)", strerror(errno));
        return 0;
    }
    return (char)FD_ISSET(m_fd, &writefds);
}
char TCPSocket::pollErrorEvent() const
{
    fd_set errfds;
    FD_ZERO(&errfds);
    FD_SET(m_fd, &errfds);
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int r = select(2, 0, 0, &errfds, &tv);
    if (r < 0)
    {
        printf("pollErrorEvent(%s)", strerror(errno));
        return 0;
    }
    return (char)FD_ISSET(m_fd, &errfds);
}
int TCPSocket::pollReadWriteErrEvent() const
{
    fd_set readfds;
    fd_set writefds;
    fd_set errfds;
    FD_ZERO(&readfds);
    FD_ZERO(&writefds);
    FD_ZERO(&errfds);
    FD_SET(m_fd, &readfds);
    FD_SET(m_fd, &writefds);
    FD_SET(m_fd, &errfds);
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int result = 0;
    int flag = 0;
    result = select(2, &readfds, &writefds, &errfds, &tv);
    if (result < 0)
    {
        printf("pollReadWriteErrEvent(%s)", strerror(errno));
    }
    else if (!FD_ISSET(m_fd, &readfds))
    {
        if (!FD_ISSET(m_fd, &writefds))
        {
            result = flag;
            if (FD_ISSET(m_fd, &errfds))
            {
                flag = 3;
                result = flag;
            }
        }
        else
        {
            flag = 2;
            result = flag;
        }
    }
    else
    {
        flag = 1;
        result = flag;
    }
    return result;
}
char TCPSocket::accept(TCPSocket& sock)
{
    socklen_t len = 0x10;
    int fd = ::accept(m_fd, (sockaddr*)((char*)&sock + 4), &len);
    sock.m_fd = fd;
    if (sock.m_fd == 0)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f != 0)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", sock.m_fd);
            fclose(f);
        }
    }
    if (sock.m_fd < 0 || sock.m_fd == -1)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f != 0)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", sock.m_fd);
            fclose(f);
        }
        return 0;
    }
    memcpy((char*)&sock + 0x14, (char*)&sock + 8, 4);
    *(unsigned short*)((char*)&sock + 0x18) = *(unsigned short*)((char*)&sock + 6);
    sock.setOptNonBlock();
    return 1;
}
int TCPSocket::getHandle() const { return m_fd; }
int TCPSocket::send(char* buf, int len)
{
    if (buf == 0 || len < 1)
    {
        printf("buf error or size-%d error", len);
        return -1;
    }
    int n = write(m_fd, buf, len);
    if (n < 1)
    {
        if (errno != EAGAIN && errno != EINTR && errno != 0)
        {
            printf("tcp send fail=\'%d\', error =\'%s\'", n, strerror(errno));
            return -1;
        }
        printf("");
        printf("tcp send retry=\'%d\', error =\'%s\'", n, strerror(errno));
        return 0;
    }
    printf("1.tcp send=\'%d\', error =\'%s\'", n, strerror(errno));
    return n;
}
int TCPSocket::recv(char* buf, int len)
{
    if (buf == 0 || len < 1)
    {
        printf("In recv : recv buffer is null");
        return -1;
    }
    int n = read(m_fd, buf, len);
    if (n < 0)
    {
        if (errno == EAGAIN || errno == EINTR || errno == 0)
        {
            return 0;
        }
    }
    else if (n == 0)
    {
        printf("tcp recv : FIN recv, %s", strerror(errno));
        return -1;
    }
    printf("tcp recv =\'%d\'", n);
    return n;
}
void TCPSocket::close()
{
    if (m_fd != -1)
    {
        ::close(m_fd);
        m_fd = -1;
        memset((char*)this + 0x14, 0, 4);
        *(unsigned short*)((char*)this + 0x18) = 0;
    }
}
int TCPSocket::shutdown(int how) { return m_fd; }
char TCPSocket::setOptReuseAdrs(bool flag)
{
    unsigned int opt = (unsigned int)flag;
    int r = setsockopt(m_fd, 1, 2, &opt, 4);
    return (char)(r >= 0);
}
char TCPSocket::setOptLinger(bool flag)
{
    unsigned int opt[2];
    opt[0] = (unsigned int)flag;
    opt[1] = 0;
    int r = setsockopt(m_fd, 1, 0xd, opt, 8);
    return (char)(r >= 0);
}
char* TCPSocket::getPeerAdrs() { return (char*)this + 0x14; }
unsigned short TCPSocket::getPeerPort() { return *(unsigned short*)((char*)this + 0x18); }
char* TCPSocket::getPeerIP()
{
    static char ip[0x10];
    sprintf(ip, "%d.%d.%d.%d", (unsigned int)(unsigned char)*(char*)((char*)this + 0x14),
            (unsigned int)(unsigned char)*(char*)((char*)this + 0x15),
            (unsigned int)(unsigned char)*(char*)((char*)this + 0x16),
            (unsigned int)(unsigned char)*(char*)((char*)this + 0x17));
    return ip;
}
char TCPSocket::setOptResizeSendBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    int r = setsockopt(m_fd, 1, 7, &size, 4);
    return (char)(r >= 0);
}
char TCPSocket::setOptResizeRecvBuf(int size)
{
    if (size <= 0)
    {
        return 0;
    }
    int r = setsockopt(m_fd, 1, 8, &size, 4);
    return (char)(r >= 0);
}

CTcpNetSystem::CTcpNetSystem()
{
    m_handler = 0;
    m_networkThread = 0;
    m_acceptThread = 0;
}
CTcpNetSystem::~CTcpNetSystem()
{
    CleanPeers();
    if (m_handler != 0)
    {
        void* h = m_handler;
        if (h != 0)
        {
            void (**vt)(void*) = *(void(***)(void*))h;
            vt[0](h);
        }
        if (m_handler != 0)
        {
            void (**vt)(void*) = *(void(***)(void*))m_handler;
            vt[3](m_handler);
        }
        m_handler = 0;
    }
    if (m_networkThread != 0)
    {
        void* h = (void*)m_networkThread;
        if (h != 0)
        {
            void (**vt)(void*) = *(void(***)(void*))h;
            vt[0](h);
        }
        if (m_networkThread != 0)
        {
            void (**vt)(void*) = *(void(***)(void*))(void*)m_networkThread;
            vt[3]((void*)m_networkThread);
        }
        m_networkThread = 0;
    }
}
CTcpGameServer::CTcpGameServer() {}
CTcpGameServer::~CTcpGameServer() {}
char* CTcpGameServer::makePacketHeader(unsigned short id, unsigned short size)
{
    if (m_net == 0)
    {
        return 0;
    }
    char* buf = (char*)m_net->Acquire_TcpSendBuffer();
    *(unsigned short*)buf = id;
    *(unsigned short*)(buf + 2) = size;
    *(unsigned int*)(buf + 6) = (unsigned int)m_sock;
    return buf;
}
void CTcpGameServer::SendToGameServer(char* buf)
{
    if (m_net != 0)
    {
        m_net->PushTcpSendPacketQ(buf);
    }
}
void CTcpGameServer::SendToGameServer(PacketHeader* pkt)
{
    char* buf = makePacketHeader(*(unsigned short*)pkt, *(unsigned short*)((char*)pkt + 2));
    if (buf != 0)
    {
        memcpy(buf + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
        SendToGameServer(buf);
    }
}
void CTcpGameServer::SetChannelType(int type)
{
    m_channelType = type;
}
int CTcpGameServer::GetChannelType()
{
    return m_channelType;
}
void CTcpGameServer::Init(unsigned int sock, CTcpNetSystem* net)
{
    m_sock = sock;
    m_net = net;
}
void CTcpGameServer::SetChannelNo(unsigned char channel)
{
    m_channelNo = channel;
}
unsigned char CTcpGameServer::GetChannelNo()
{
    return m_channelNo;
}
char CTcpGameServer::IsValidServer()
{
    if (m_sock == 0 || m_net == 0)
    {
        return 0;
    }
    return 1;
}
void CTcpNetSystem::Init(unsigned short port)
{
    m_port = port;
    m_handler = new CTcpHandler;
    m_acceptThread = new CTcpAcceptThread;
    m_acceptThread->attach(this);
    if (!m_acceptThread->begin())
    {
        throw;
    }
    m_networkThread = new CTcpNetworkThread;
    m_networkThread->attach(this);
    if (!m_networkThread->begin())
    {
        throw;
    }
}
bool CTcpNetSystem::OpenTcpService(int& sockRef, const char* ip, unsigned short port)
{
    CPeer* peer = CreatePeer();
    TCPSocket* sock = peer->GetTcpSocket();
    if (sock->open())
    {
        if (sock->connect(ip, port))
        {
            sock->setOptNonBlock();
            CMutex* b = Get_TcpRecvBLock();
            CMutex* q = Get_TcpRecvQLock();
            void* recvQ = Get_TcpSwapQPacket()->GetRecvQ();
            peer->InitPeer((std::queue<CTcpRecvBuffer*>*)recvQ, q, b);
            peer->ConnSig();
            SetEpollConnectedPeer(peer);
            sockRef = sock->getHandle();
            return 1;
        }
        puts("tcpSock.connect Fail!");
        DNF_LOG_SCOPE_LINE(0x123, "./log/TcpServer", "tcpSock.connect(%s, %d) Fail!", ip, (unsigned int)port);
        DeletePeer(peer);
        return 0;
    }
    puts("tcpSock.open() Fail!");
    DNF_LOG_SCOPE_LINE(0x118, "./log/TcpServer", "tcpSock.open() Fail!");
    DeletePeer(peer);
    return 0;
}
void CTcpNetSystem::CleanPeers()
{
    for (std::map<unsigned int, CPeer*>::iterator it = m_peers.begin(); it != m_peers.end(); ++it)
    {
        {
            CGuard<CMutex> guard(&m_mutex78);
            if (it->second != 0)
            {
                delete it->second;
            }
        }
    }
    m_peers.clear();
}
void CTcpNetSystem::SetEpollAcceptedPeers()
{
    CGuard<CMutex> guard(&m_mutex60);
    while (!m_peerQ.empty())
    {
        CPeer* peer = m_peerQ.front();
        int result = m_handler->SetPeer(peer, peer->GetTcpSocket()->getHandle(), false);
        if (result != 0)
        {
            printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",
                   peer->GetTcpSocket()->getHandle(), result, strerror(result));
        }
        int fd = peer->GetTcpSocket()->getHandle();
        m_peers.insert(std::make_pair((unsigned int)fd, peer));
        m_peerQ.pop();
    }
}
int CTcpNetSystem::SendPacket()
{
    CTcpSendBuffer* buf = 0;
    bool empty;
    {
        CGuard<CMutex> guard(&m_mutexe8);
        empty = m_sendQ.empty();
        if (!empty)
        {
            buf = m_sendQ.front();
        }
    }
    if (empty || buf == 0)
    {
        return 0;
    }
    unsigned int fd = *(unsigned int*)((char*)buf + 6);
    std::map<unsigned int, CPeer*>::iterator it = m_peers.find(fd);
    if (it == m_peers.end())
    {
        unsigned short size = *(unsigned short*)((char*)buf + 2);
        unsigned short id = *(unsigned short*)buf;
        DNF_LOG_SCOPE_LINE(0xba,"./log/TcpSend", "SEND ERR:no peer(id:%d,size:%d,ip:%d)", (unsigned int)id,
            (unsigned int)size, fd);
        PopDeleteTcpSendPacketQ(buf);
        return 0;
    }
    CPeer* peer = it->second;
    bool invalid = true;
    if (peer != 0 && (int)fd == peer->GetTcpSocket()->getHandle())
    {
        invalid = false;
    }
    if (invalid)
    {
        unsigned short size = *(unsigned short*)((char*)buf + 2);
        unsigned short id = *(unsigned short*)buf;
        DNF_LOG_SCOPE_LINE(0xc3,"./log/TcpSend", "SEND ERR:invalid peer(%x)(id:%d)(size:%d)(ip:%d)", peer,
            (unsigned int)id, (unsigned int)size, fd);
        PopDeleteTcpSendPacketQ(buf);
        return 0;
    }
    int result = peer->send_packet((char*)buf, (unsigned int)*(unsigned short*)((char*)buf + 2));
    if (result < 1)
    {
        unsigned int cnt = (unsigned int)m_sendQ.size();
        unsigned short size = *(unsigned short*)((char*)buf + 2);
        unsigned short id = *(unsigned short*)buf;
        DNF_LOG_SCOPE_LINE(0xd5,"./log/TcpSend", "SEND(id:%d,size:%d,ip:%d, cnt:%d)", (unsigned int)id,
            (unsigned int)size, fd, cnt);
    }
    else
    {
        PopDeleteTcpSendPacketQ(buf);
    }
    return result;
}
int CTcpNetSystem::WaitForEvent()
{
    return m_handler->WaitForEvent();
}
void CTcpNetSystem::DeletePeer(CPeer* peer)
{
    int fd = peer->GetTcpSocket()->getHandle();
    std::map<unsigned int, CPeer*>::iterator it = m_peers.find((unsigned int)fd);
    if (it != m_peers.end())
    {
        m_peers.erase(it);
    }
    CGuard<CMutex> guard(&m_mutex78);
    if (peer != 0)
    {
        delete peer;
    }
}
CPeer* CTcpNetSystem::CreatePeer()
{
    CGuard<CMutex> guard(&m_mutex78);
    return new CPeer;
}
void CTcpNetSystem::InsertAcceptedPeer(CPeer* peer)
{
    CGuard<CMutex> guard(&m_mutex60);
    m_peerQ.push(peer);
}
CPeer* CTcpNetSystem::GetPeer(unsigned int id)
{
    std::map<unsigned int, CPeer*>::iterator it = m_peers.find(id);
    if (it != m_peers.end())
    {
        return it->second;
    }
    return 0;
}
void CTcpNetSystem::PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf)
{
    CGuard<CMutex> guard1(&m_mutexe8);
    m_sendQ.pop();
    CGuard<CMutex> guard2(&m_mutex100);
    delete buf;
}
void CTcpNetSystem::CleanTcpSendPacketQ()
{
    while (true)
    {
        CTcpSendBuffer* buf = 0;
        bool empty;
        {
            CGuard<CMutex> guard1(&m_mutexe8);
            empty = m_sendQ.empty();
            if (!empty)
            {
                buf = m_sendQ.front();
                m_sendQ.pop();
            }
        }
        if (empty)
        {
            break;
        }
        CGuard<CMutex> guard2(&m_mutex100);
        delete buf;
    }
    DNF_LOG_SCOPE_LINE(0x16b, "./log/TcpSend", "Clean Tcp Send Queue Complete !");
}
void CTcpNetSystem::SetEpollConnectedPeer(CPeer* peer)
{
    {
        CGuard<CMutex> guard(&m_mutex78);
        int rc = 0;
        int fd = peer->GetTcpSocket()->getHandle();
        rc = m_handler->SetPeer(peer, fd, false);
        if (rc != 0)
        {
            printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)",
                   peer->GetTcpSocket()->getHandle(), rc, strerror(rc));
        }
        int key = peer->GetTcpSocket()->getHandle();
        m_peers.insert(std::pair<const unsigned int, CPeer*>(key, peer));
    }
}
unsigned short CTcpNetSystem::Get_TcpServerPort() { return m_port; }
void* CTcpNetSystem::Acquire_TcpSendBuffer()
{
    CGuard<CMutex> guard(&m_mutex100);
    return new CTcpSendBuffer;
}
void CTcpNetSystem::PushTcpSendPacketQ(char* buf)
{
    CGuard<CMutex> guard(&m_mutexe8);
    CTcpSendBuffer* p = (CTcpSendBuffer*)buf;
    m_sendQ.push(p);
    int size = (int)m_sendQ.size();
    if (10 < size)
    {
        DNF_LOG_SCOPE_LINE(0x91,"./log/TcpSend", "SEND PUSH(cnt:%d,id:%d,size:%d,ip:%d)", size,
            (unsigned int)*(unsigned short*)buf,
            (unsigned int)*(unsigned short*)((char*)buf + 2),
            *(unsigned int*)((char*)buf + 6));
    }
}
CMutex* CTcpNetSystem::Get_TcpRecvBLock() { return &m_mutexa8; }
CMutex* CTcpNetSystem::Get_TcpRecvQLock() { return &m_mutex90; }
CTcpHandler* CTcpNetSystem::Get_TcpHandler() { return m_handler; }
CMutex* CTcpNetSystem::Get_TcpSendBLock() { return &m_mutex100; }
CMutex* CTcpNetSystem::Get_TcpSendQLock() { return &m_mutexe8; }
std::queue<CTcpSendBuffer*>* CTcpNetSystem::Get_TcpSendQPacket() { return &m_sendQ; }
CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>*
    CTcpNetSystem::Get_TcpSwapQPacket()
{
    return &m_recvSwapQ;
}

CTcpManagerServer::CTcpManagerServer() {}
CTcpManagerServer::~CTcpManagerServer() {}
void CTcpManagerServer::Clear()
{
    m_sock = -1;
    m_net = 0;
    m_port = 0;
    m_ip.clear();
}
void CTcpManagerServer::Init(CTcpNetSystem* net) {}
void CTcpManagerServer::SetIP(std::string ip) {}
void CTcpManagerServer::SetPort(unsigned short port) {}
int* CTcpManagerServer::GetSockRef() { return 0; }
int CTcpManagerServer::GetSock() { return m_sock; }
char CTcpManagerServer::IsValidServer() { return 1; }
const char* CTcpManagerServer::GetIP() { return m_ip.c_str(); }
unsigned short CTcpManagerServer::GetPort() { return m_port; }
void CTcpManagerServer::SendHeartbeat(unsigned char group)
{
    char* buf = makePacketHeader(0x106d, 0xb);
    if (buf != 0)
    {
        buf[10] = (char)group;
        SendToServer(buf);
    }
}
void CTcpManagerServer::SendLogin(unsigned char group)
{
    char* buf = makePacketHeader(0x106b, 0xb);
    if (buf != 0)
    {
        buf[10] = (char)group;
        SendToServer(buf);
    }
}
void CTcpManagerServer::SendLogout()
{
    char* buf = makePacketHeader(0x106c, 0xb);
    if (buf != 0)
    {
        buf[10] = 0xb;
        SendToServer(buf);
    }
}
void CTcpManagerServer::Connected(unsigned char group)
{
    SendLogin(group);
}
void CTcpManagerServer::DisConnected()
{
    m_sock = -1;
}
char* CTcpManagerServer::makePacketHeader(unsigned short id, unsigned short size)
{
    if (m_net == 0)
    {
        return 0;
    }
    char* buf = (char*)((CTcpNetSystem*)m_net)->Acquire_TcpSendBuffer();
    *(unsigned short*)buf = id;
    *(unsigned short*)(buf + 2) = size;
    *(unsigned int*)(buf + 6) = (unsigned int)m_sock;
    return buf;
}
void CTcpManagerServer::SendToServer(char* buf)
{
    ((CTcpNetSystem*)m_net)->PushTcpSendPacketQ(buf);
}
void CTcpManagerServer::SendTcpPacket(PacketHeader* pkt)
{
    char* buf = makePacketHeader(*(unsigned short*)pkt, *(unsigned short*)((char*)pkt + 2));
    if (buf != 0)
    {
        memcpy(buf + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
        SendToServer(buf);
    }
}

CTcpDBServer::CTcpDBServer() {}
CTcpDBServer::~CTcpDBServer() {}
void CTcpDBServer::Clear()
{
    m_sock = -1;
    m_net = 0;
    m_port = 0;
    m_ip.clear();
}
void CTcpDBServer::Init(CTcpNetSystem* net) {}
void CTcpDBServer::SetIP(std::string ip) {}
void CTcpDBServer::SetPort(unsigned short port) {}
int* CTcpDBServer::GetSockRef() { return 0; }
int CTcpDBServer::GetSock() { return m_sock; }
char CTcpDBServer::IsValidServer() { return 1; }
const char* CTcpDBServer::GetIP() { return m_ip.c_str(); }
unsigned short CTcpDBServer::GetPort() { return m_port; }
void CTcpDBServer::SendHeartbeat()
{
    char* buf = makePacketHeader(0x106a, 0xb);
    if (buf != 0)
    {
        buf[10] = 0xa;
        SendToServer(buf);
    }
}
void CTcpDBServer::SendLogin()
{
    char* buf = makePacketHeader(0x1068, 0xb);
    if (buf != 0)
    {
        buf[10] = 0xa;
        SendToServer(buf);
    }
}
void CTcpDBServer::SendLogout()
{
    char* buf = makePacketHeader(0x1069, 0xb);
    if (buf != 0)
    {
        buf[10] = 0xa;
        SendToServer(buf);
    }
}
void CTcpDBServer::Connected()
{
    SendLogin();
}
void CTcpDBServer::DisConnected()
{
    m_sock = -1;
}
char* CTcpDBServer::makePacketHeader(unsigned short id, unsigned short size)
{
    if (m_net == 0)
    {
        return 0;
    }
    char* buf = (char*)((CTcpNetSystem*)m_net)->Acquire_TcpSendBuffer();
    *(unsigned short*)buf = id;
    *(unsigned short*)(buf + 2) = size;
    *(unsigned int*)(buf + 6) = (unsigned int)m_sock;
    return buf;
}
void CTcpDBServer::SendToServer(char* buf)
{
    ((CTcpNetSystem*)m_net)->PushTcpSendPacketQ(buf);
}

CUserManager::CUserManager() {}
CUserManager::~CUserManager()
{
    for (std::map<unsigned int, CUser*>::iterator it = m_users.begin(); it != m_users.end();
         ++it)
    {
        if (it->second != 0)
        {
            delete it->second;
        }
    }
    m_users.clear();
    m_charNoUsers.clear();
    for (std::map<const unsigned int, CDNFProhibitUser*>::const_iterator it =
             m_prohibitUsers.begin();
         it != m_prohibitUsers.end(); ++it)
    {
        if (it->second != 0)
        {
            delete it->second;
        }
    }
    m_prohibitUsers.clear();
}
void CUserManager::Init(CApplication* app) {}
void CUserManager::MemberEnterProcess() {}
void CUserManager::ProcessByMinute() {}
CUser* CUserManager::FindUser_CharNo(unsigned int charNo) const
{
    if (!m_charNoUsers.empty())
    {
        std::map<const unsigned int, CUser*>::const_iterator it = m_charNoUsers.find(charNo);
        if (it != m_charNoUsers.end())
        {
            return it->second;
        }
    }
    return 0;
}
CUser* CUserManager::FindUser_CharName(std::string name) const
{
    if (!m_charNameUsers.empty())
    {
        std::map<const std::string, CUser*>::const_iterator it = m_charNameUsers.find(name);
        if (it != m_charNameUsers.end())
        {
            return it->second;
        }
    }
    return 0;
}
void CUserManager::ChangeBlackListCharName(unsigned int dbid, char* name)
{
    if (!m_users.empty())
    {
        for (std::map<unsigned int, CUser*>::const_iterator it = m_users.begin();
             it != m_users.end(); ++it)
        {
            it->second->ChangeCharNameToBlackList(dbid, name);
        }
    }
}
void CUserManager::ResetBlackList(unsigned int charNo)
{
    CUser* user = FindUser(charNo);
    if (user != 0)
    {
        user->ResetBlackList(1);
    }
}
void CUserManager::ResetBuddyList(unsigned int charNo)
{
    CUser* user = FindUser_CharNo(charNo);
    if (user != 0)
    {
        user->ResetBuddyList(true);
    }
}
void CUserManager::DeleteUsersOnGameServerDown(CGameServer* gameServer)
{
    if (!m_charNoUsers.empty())
    {
        for (std::map<const unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
             it != m_charNoUsers.end(); )
        {
            if (it->second != 0 && it->second->GetGameServer() == gameServer)
            {
                std::map<const unsigned int, CUser*>::iterator cur = it++;
                m_charNoUsers.erase(cur);
            }
            else
            {
                ++it;
            }
        }
    }
    if (!m_charNameUsers.empty())
    {
        for (std::map<const std::string, CUser*>::iterator it = m_charNameUsers.begin();
             it != m_charNameUsers.end(); )
        {
            if (it->second != 0 && it->second->GetGameServer() == gameServer)
            {
                std::map<const std::string, CUser*>::iterator cur = it++;
                m_charNameUsers.erase(cur);
            }
            else
            {
                ++it;
            }
        }
    }
    if (!m_users.empty())
    {
        for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
             it != m_users.end(); )
        {
            CUser* user = it->second;
            if (user != 0 && user->GetGameServer() == gameServer)
            {
                unsigned int key = user->GetUniqCharNo();
                if (key != 0)
                {
                    m_app->Call_DeleteMember(key, user);
                }
                user->GetDBID();
                m_app->Call_ResetBlackList(user->GetUniqCharNo());
                m_app->Call_ResetBuddyList(user->GetUniqCharNo());
                if (user != 0)
                {
                    delete user;
                }
                std::map<unsigned int, CUser*>::iterator cur = it++;
                m_users.erase(cur);
            }
            else
            {
                ++it;
            }
        }
    }
}
void CUserManager::DeleteUsersOnTcpGameServerDown(CTcpGameServer* tcpGameServer)
{
    if (!m_charNoUsers.empty())
    {
        for (std::map<const unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
             it != m_charNoUsers.end(); )
        {
            if (it->second != 0 && it->second->GetTcpGameServer() == (void*)tcpGameServer)
            {
                std::map<const unsigned int, CUser*>::iterator cur = it++;
                m_charNoUsers.erase(cur);
            }
            else
            {
                ++it;
            }
        }
    }
    if (!m_charNameUsers.empty())
    {
        for (std::map<const std::string, CUser*>::iterator it = m_charNameUsers.begin();
             it != m_charNameUsers.end(); )
        {
            if (it->second != 0 && it->second->GetTcpGameServer() == (void*)tcpGameServer)
            {
                std::map<const std::string, CUser*>::iterator cur = it++;
                m_charNameUsers.erase(cur);
            }
            else
            {
                ++it;
            }
        }
    }
    if (!m_users.empty())
    {
        for (std::map<const unsigned int, CUser*>::iterator it = m_users.begin();
             it != m_users.end(); )
        {
            CUser* user = it->second;
            if (user != 0 && user->GetTcpGameServer() == (void*)tcpGameServer)
            {
                unsigned int key = user->GetUniqCharNo();
                if (key != 0)
                {
                    m_app->Call_DeleteMember(key, user);
                }
                user->GetDBID();
                m_app->Call_ResetBlackList(user->GetUniqCharNo());
                m_app->Call_ResetBuddyList(user->GetUniqCharNo());
                if (user != 0)
                {
                    delete user;
                }
                std::map<const unsigned int, CUser*>::iterator cur = it++;
                m_users.erase(cur);
            }
            else
            {
                ++it;
            }
        }
    }
}
void CUserManager::SendConnectedBuddysList(CUser* user)
{
    if (user != 0)
    {
        Packet_Monitor_Reply_Buddy_List pkt;
        int idx = 0;
        CBuddy* buddies[32];
        int count = user->GetBuddys(buddies);
        *(char*)((char*)&pkt + 0xe) = (char)count;
        while (count != 0)
        {
            count--;
            CBuddy* buddy = buddies[idx];
            CUser* buddyUser = FindUser_CharNo(
                *(unsigned int*)((char*)buddy->getBuddyDBInfo() + 0x22));
            if (buddyUser != 0)
            {
                if (buddyUser->GetGameServer() != 0)
                {
                    *(char*)((char*)&pkt + 0xf + idx * 0x2a + 2) = 1;
                    *(char*)((char*)&pkt + 0xf + idx * 0x2a) =
                        ((CServerInterface*)buddyUser->GetGameServer())->GetChannelNo();
                    if (buddyUser->IsBlackUser(user->GetUniqCharNo()) != 0)
                    {
                        *(char*)((char*)&pkt + 0xf + idx * 0x2a + 1) = 1;
                    }
                }
            }
            memcpy((char*)&pkt + 0xf + idx * 0x2a + 3, buddy->getBuddyDBInfo(), 0x27);
            idx++;
        }
        if (idx != 0)
        {
            if (user->GetGameServer() == 0)
            {
                DNF_LOG_SCOPE_LINE(0x34b,"./log/Except",
                    "CPacketTranslater::OnCheckBuddyList : pclCheckUser->GetGameServer() == 0");
            }
            else
            {
                *(unsigned int*)((char*)&pkt + 0xa) = user->GetDBID();
                unsigned short size =
                    (unsigned short)((idx << 2) * 8 + idx * 10 + 0xf);
                ((CServerInterface*)user->GetGameServer())
                    ->SendToServer((char*)&pkt, (unsigned int)size);
            }
        }
    }
}
void CUserManager::GetSchoolCount(unsigned int school, unsigned int* out, unsigned char& idx)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(school);
    DNF_LOG_SCOPE_LINE(0x418, "./log/School", "GetSchoolCount(%u)", school);
    if (it != m_mapSchools.end())
    {
        int pos = 0;
        int n = 0;
        std::map<unsigned char, unsigned int>* inner = &it->second;
        for (std::map<unsigned char, unsigned int>::iterator c = inner->begin();
             c != inner->end() && n < (int)idx; ++c)
        {
            out[pos] = (unsigned int)c->first;
            pos++;
            out[pos] = c->second;
            pos++;
            CMyFileLog log2("GetSchoolCount", 0x423);
            log2("./log/School", "GetSchoolCount(%u) channelNo(%u) Count(%u)", school,
                 out[pos - 2], out[pos - 1]);
            n++;
        }
        idx = (unsigned char)n;
        CMyFileLog log3("GetSchoolCount", 0x426);
        log3("./log/School", "GetSchoolCount(%u) size(%d)", school, (unsigned int)idx);
    }
}
CDNFProhibitUser* CUserManager::FindProhibitUser(unsigned int dbid) const
{
    if (!m_prohibitUsers.empty())
    {
        std::map<const unsigned int, CDNFProhibitUser*>::const_iterator it =
            m_prohibitUsers.find(dbid);
        if (it != m_prohibitUsers.end())
        {
            return it->second;
        }
    }
    return 0;
}
int CUserManager::DeleteProhibitUser(unsigned int dbid, char channel)
{
    if (m_prohibitUsers.empty())
    {
        return 0;
    }
    CDNFProhibitUser* pu = FindProhibitUser(dbid);
    if (pu != 0)
    {
        char puCh = pu->GetChannelNo();
        if (puCh != -1 && puCh != channel)
        {
            DNF_LOG_SCOPE_LINE(0x2c7,"./log/User",
                "[PROHIBIT DELETE USER Err] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",
                NumberToString(dbid, 0), (int)puCh, (int)channel);
            return 0;
        }
        char fromWeb = pu->fromWeb();
        if (fromWeb != 0 && channel != -1)
        {
            DNF_LOG_SCOPE_LINE(0x2ce,"./log/User",
                "[PROHIBIT DELETE USER Err From Web] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",
                NumberToString(dbid, 0), (int)puCh, (int)channel);
            return 0;
        }
        if (m_prohibitUsers.erase(dbid) == 1)
        {
            if (pu != 0)
            {
                delete pu;
            }
            return 1;
        }
    }
    return 0;
}
CUser* CUserManager::FindUser(unsigned int dbid) const
{
    if (!m_users.empty())
    {
        std::map<const unsigned int, CUser*>::const_iterator it = m_users.find(dbid);
        if (it != m_users.end())
        {
            return it->second;
        }
    }
    return 0;
}
char CUserManager::InsertUser(unsigned int dbid, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_users.insert(std::pair<const unsigned int, CUser*>(dbid, user));
    return 1;
}
char CUserManager::InsertUser_CharNo(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_charNoUsers.insert(std::pair<const unsigned int, CUser*>(charNo, user));
    return 1;
}
char CUserManager::InsertUser_CharName(char* name, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_charNameUsers.insert(std::pair<const std::string, CUser*>(name, user));
    return 1;
}
CUser* CUserManager::CreateUser(unsigned int dbid, unsigned int charNo, char* charName,
                                int channel, CGameServer* server)
{
    CUser* user = new CUser;
    user->SetDBID(dbid);
    user->SetUniqCharNo(charNo);
    user->SetIdByChannel(channel);
    user->SetGameServer(server);
    if (InsertUser(dbid, user) != 1)
    {
        DNF_LOG_SCOPE_AT("CreateUser", 0x1a9,"./log/LoginErr",
            "uDBID(%s) uCharNo(%d) is already exist at m_mapUsers!", NumberToString(dbid, 0),
            charNo);
    }
    user->SetUserPosState(2);
    if (charNo != 0)
    {
        if (InsertUser_CharNo(charNo, user) != 1)
        {
            DNF_LOG_SCOPE_AT("CreateUser", 0x1b3,"./log/LoginErr",
                "uDBID(%s) uCharNo(%d) is already exist at m_mapCharNoUsers!",
                NumberToString(dbid, 0), charNo);
        }
        if (InsertUser_CharName(charName, user) != 1)
        {
            DNF_LOG_SCOPE_AT("CreateUser", 0x1b7,"./log/LoginErr",
                "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!",
                NumberToString(dbid, 0), charName);
        }
        user->SetUserPosState(3);
    }
    return user;
}
char CUserManager::InsertProhibitUser(unsigned int dbid, CDNFProhibitUser* pu)
{
    if (pu == 0)
    {
        return 0;
    }
    m_prohibitUsers.insert(std::pair<const unsigned int, CDNFProhibitUser*>(dbid, pu));
    return 1;
}
int CUserManager::DeleteUser(unsigned int dbid)
{
    if (m_users.empty())
    {
        return 0;
    }
    CUser* user = FindUser(dbid);
    if (user != 0)
    {
        if (user->GetGameServer() == 0)
        {
            return 0;
        }
        CDNFProhibitUser* pu = new CDNFProhibitUser;
        char ch = ((CServerInterface*)user->GetGameServer())->GetChannelNo();
        pu->SetUserConnectableTime(dbid, 10, ch, false);
        if (InsertProhibitUser(dbid, pu) != 1)
        {
            DNF_LOG_SCOPE_LINE(0x8b,"./log/ProhibitUser",
                "[INSERT_ERR_] CUserManager::DeleteUser() m_id : %s, time( %d ), Channel( %d )\n",
                NumberToString(dbid, 0), 10, (unsigned int)ch & 0xff);
            delete pu;
        }
        if (m_users.erase(dbid) == 1)
        {
            if (user != 0)
            {
                delete user;
            }
            return 1;
        }
    }
    return 0;
}
int CUserManager::DeleteUser(CUser* user)
{
    if (m_users.empty())
    {
        return 0;
    }
    if (user != 0)
    {
        if (user->GetGameServer() == 0)
        {
            return 0;
        }
        unsigned int dbid = user->GetDBID();
        CDNFProhibitUser* pu = new CDNFProhibitUser;
        char ch = ((CServerInterface*)user->GetGameServer())->GetChannelNo();
        pu->SetUserConnectableTime(dbid, 10, ch, false);
        if (InsertProhibitUser(dbid, pu) != 1)
        {
            DNF_LOG_SCOPE_LINE(0xc4,"./log/ProhibitUser",
                "[INSERT_ERR_] CUserManager::DeleteUser() m_id : %s, time( %d ), Channel( %d )\n",
                NumberToString(dbid, 0), 10, (unsigned int)ch & 0xff);
            delete pu;
        }
        if (m_users.erase(dbid) == 1)
        {
            if (user != 0)
            {
                delete user;
            }
            return 1;
        }
    }
    return 0;
}

CDNFProhibitUser::CDNFProhibitUser()
{
    *(unsigned int*)this = 0;
    *(unsigned short*)((char*)this + 4) = 0;
    *(char*)((char*)this + 6) = 0xff;
    *(char*)((char*)this + 7) = 0;
}
CDNFProhibitUser::~CDNFProhibitUser() {}
void* CDNFProhibitUser::operator new(unsigned int size) { return ::operator new(size); }
void CDNFProhibitUser::operator delete(void* p) { ::operator delete(p); }
unsigned int CDNFProhibitUser::GetDBID() { return *(unsigned int*)this; }
unsigned short CDNFProhibitUser::GetProhibitRemainTime()
{
    return *(unsigned short*)((char*)this + 4);
}
char CDNFProhibitUser::IsTimeOutConnectable()
{
    *(unsigned short*)((char*)this + 4) =
        (unsigned short)(*(unsigned short*)((char*)this + 4) - 1);
    if (*(unsigned short*)((char*)this + 4) <= 0)
    {
        return 1;
    }
    return 0;
}
char CDNFProhibitUser::GetChannelNo() { return *(char*)((char*)this + 6); }
char CDNFProhibitUser::fromWeb() { return 0; }
void CDNFProhibitUser::SetUserConnectableTime(unsigned int dbid, short time, char channel,
                                              bool flag)
{
    if (*(char*)((char*)this + 7) != 1)
    {
        *(short*)((char*)this + 4) = time;
        *(unsigned int*)this = dbid;
        *(char*)((char*)this + 6) = channel;
        *(char*)((char*)this + 7) = (char)flag;
    }
}
void CUserManager::AddSchoolNo(unsigned int schoolNo, unsigned char channel)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(schoolNo);
    if (it != m_mapSchools.end())
    {
        std::map<unsigned char, unsigned int>* inner = &it->second;
        std::map<unsigned char, unsigned int>::iterator c = inner->find(channel);
        if (c != inner->end())
        {
            c->second++;
            DNF_LOG_SCOPE_LINE(0x3f9,"./log/School",
                "3) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, inner->size(), m_mapSchools.size());
        }
        else
        {
            inner->insert(std::pair<unsigned char, unsigned int>(channel, 1));
            DNF_LOG_SCOPE_LINE(0x3f3, "./log/School",
                "2) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, inner->size(), m_mapSchools.size());
        }
    }
    else
    {
        std::map<unsigned char, unsigned int> newInner;
        newInner.insert(std::pair<unsigned char, unsigned int>(channel, 1));
        m_mapSchools.insert(
            std::pair<const unsigned int, std::map<unsigned char, unsigned int> >(schoolNo,
                                                                                 newInner));
        DNF_LOG_SCOPE_LINE(0x3ed, "./log/School",
            "1) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
            schoolNo, channel, newInner.size(), m_mapSchools.size());
    }
}
void CUserManager::DeleteBlackUserOnCharacDelete(unsigned int charNo)
{
    if (!m_users.empty())
    {
        for (std::map<const unsigned int, CUser*>::iterator it = m_users.begin();
             it != m_users.end(); ++it)
        {
            if (it->second != 0)
            {
                it->second->DeleteToBlackList(charNo);
            }
        }
    }
}
unsigned int CUserManager::GetSizeOfCharnoUsers()
{
    return (unsigned int)m_charNoUsers.size();
}
unsigned int CUserManager::Size()
{
    return (unsigned int)m_users.size();
}
int CUserManager::DeleteUser_CharNo(unsigned int charNo)
{
    if (m_charNoUsers.empty() || charNo == 0)
    {
        return 0;
    }
    if (m_charNoUsers.erase(charNo) == 1)
    {
        return 1;
    }
    DNF_LOG_SCOPE_LINE(0x1eb, "./log/User",
        "[EXCEPT]CUserManager::DeleteUser_CharNo() : Erase Fail!\tChar No : %d\tChar_No Map "
        "Count : %d\n",
        charNo, (unsigned int)m_charNoUsers.size());
    return 0;
}
int CUserManager::DeleteUser_CharName(std::string name)
{
    if (m_charNameUsers.empty() || name.empty())
    {
        return 0;
    }
    if (m_charNameUsers.erase(name) == 1)
    {
        return 1;
    }
    DNF_LOG_SCOPE_LINE(0x22c,"./log/Except",
        "[EXCEPT]CUserManager::DeleteUser_CharNo() : Erase Fail!\tChar Name : %s\tChar_No Map "
        "Count : %d\n",
        name.c_str(), (unsigned int)m_charNoUsers.size());
    return 0;
}

void CUserManager::DelSchoolNo(unsigned int schoolNo, unsigned char channel)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(schoolNo);
    if (it != m_mapSchools.end())
    {
        std::map<unsigned char, unsigned int>* inner = &it->second;
        std::map<unsigned char, unsigned int>::iterator c = inner->find(channel);
        if (c != inner->end())
        {
            c->second--;
            if (c->second == 0)
            {
                inner->erase(c);
                if (inner->size() == 0)
                {
                    m_mapSchools.erase(it);
                }
            }
            unsigned int outerSize = m_mapSchools.size();
            unsigned int innerSize = inner->size();
            DNF_LOG_SCOPE_LINE(0x40f,"./log/School",
                "DelSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, innerSize, outerSize);
        }
    }
}

CMemberManager::CMemberManager() {}
CMemberManager::~CMemberManager() {}
void CMemberManager::Init(CApplication* app, CUserManager* userMgr, CMemberConfig* memberConfig,
                          CMemberExpTbl* memberExpTbl)
{
    m_app = app;
    m_userMgr = userMgr;
    m_memberConfig = memberConfig;
    m_memberExpTbl = memberExpTbl;
}
void CMemberManager::MemberRegisterFlagProcess() {}
char CMemberManager::LoadMemberFromCash(CUser* user, CMember* member) { return 0; }
int CMemberManager::DeleteMember(unsigned int key, bool cash)
{
    if (m_members.empty())
    {
        return 0;
    }
    std::map<unsigned int, CMember*>::iterator it = m_members.find(key);
    if (it != m_members.end())
    {
        if (cash && it->second != 0)
        {
            delete it->second;
        }
        if (m_app != 0)
        {
            m_app->Call_ResetUserMemberInfo(key);
        }
        m_members.erase(it);
        return 1;
    }
    return 0;
}
void CMemberManager::MemberMemLogout(unsigned int key, CUser* user, bool cash)
{
    if (user != 0 && m_app != 0)
    {
        if (key == 0)
        {
            DNF_LOG_SCOPE_LINE(0x23b,"./log/MemberMember",
                "CMemberManager::MemberMemLogout()\tMemberKey == 0\tchar id(%d), Maybe after logout, this user connect at character screen, and logout again! check User.log!",
                user->GetUniqCharNo());
        }
        else
        {
            CMember* member = FindMember(key);
            if (member == 0)
            {
                DNF_LOG_SCOPE_LINE(0x241,"./log/Except",
                    "CMemberManager::MemberMemLogout()\t0 == pclMember\tMemberKey(%d)", key);
            }
            else
            {
                member->NoticeMemberLogin_Out(user, 0);
                char ok = (char)DeleteMember(key, cash);
                if (ok != 1)
                {
                    DNF_LOG_SCOPE_LINE(0x24b,"./log/MemberMember",
                        "<Delete Member Error> CMemberManager::MemberMemLogout\tdeleteOrCash(%d), Member Key(%d)",
                        (unsigned int)cash, key);
                }
            }
        }
        return;
    }
    throw CDNFException("CMemberManager::MemberMemLogout\t0 == pclUser || 0 == m_pclApp\n");
}
void CMemberManager::SendToDBMemberUpdateCharInfo(CServerHandler* handler, unsigned int key,
                                                  unsigned char flag)
{
    if (handler != 0)
    {
        Packet_Monitor_SAVE_Member_Update_Char_Info pkt;
        pkt.m_uniqCharNo = key;
        pkt.m_flag = flag;
        handler->SendToDB(&pkt);
    }
}
unsigned int CMemberManager::GetLowerMemberEnterLimit(unsigned int level)
{
    ST_MemberConfig* info = m_memberConfig->GetMemberInfo();
    if (level / 10 < 0xb)
    {
        return (unsigned int)info[level / 10].m_c;
    }
    return 0;
}
int CMemberManager::IsPossableMemberEnter(CUser* u1, CMember* m1, CUser* u2, CMember* m2,
                                          int mode)
{
    if (u2 == 0 || u1 == 0)
    {
        return 0x31;
    }
    if (u1->GetLevel() < 0x12)
    {
        return 0x2e;
    }
    if (m2 != 0)
    {
        if (m2->IsThereUpper())
        {
            return (mode == 2) ? 0x35 : 0x2b;
        }
        int upper = m2->GetUpperMember_CharId();
        if (upper == 0)
        {
            return 0x2d;
        }
        if (upper != -1 && 0 < upper)
        {
            return (mode == 2) ? 0x35 : 0x2b;
        }
    }
    if (m1 != 0)
    {
        unsigned int charNo = u2->GetUniqCharNo();
        if (m1->FindLowerMember(charNo))
        {
            return (mode == 2) ? 0x33 : 0x32;
        }
        unsigned int lowerCount = m1->GetLowerMemberCount();
        short level = u1->GetLevel();
        unsigned int limit = GetLowerMemberEnterLimit((unsigned int)level);
        if (limit <= lowerCount)
        {
            return (mode == 2) ? 0x2a : 0x34;
        }
    }
    return 0;
}
int CMemberManager::LoadMember(unsigned int key, STMemberDBInfo& info, unsigned int a,
                               unsigned int b, CServerHandler* handler)
{
    CMember* member = FindMember(key);
    if (member == 0)
    {
        DNF_LOG_SCOPE_AT("LoadMember", 0x26d,"./log/Except",
            "[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n", key);
        return 0;
    }
    CUser* user = FindMemberUser(key);
    if (user == 0)
    {
        DNF_LOG_SCOPE_AT("LoadMember", 0x273,"./log/Except",
            "[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n", key);
        return 0;
    }
    short level = user->GetLevel();
    member->LoadMember(info, level, a, b);
    if (!member->IsEmpty())
    {
        member->NoticeMemberLogin_Out(user, 1);
        return 1;
    }
    Packet_Monitor_Notice_Delete_Member_Id pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    user->SendToGameserver((char*)&pkt, 0x12);
    SendToDBMemberUpdateCharInfo(handler, key, 0);
    unsigned int charNo = user->GetUniqCharNo();
    DNF_LOG_SCOPE_AT("LoadMember", 0x285,"./log/Except",
        "CMemberManager::LoadMember, true == pclMember->IsEmpty()\tChar id(%d), Member Key(%d)",
        charNo, key);
    DeleteMember(user->GetUniqCharNo(), true);
    return 0;
}
CMember* CMemberManager::FindMember(unsigned int key)
{
    if (!m_members.empty())
    {
        std::map<unsigned int, CMember*>::iterator it = m_members.find(key);
        if (it != m_members.end())
        {
            return it->second;
        }
    }
    return 0;
}
CUser* CMemberManager::FindMemberUser(unsigned int key)
{
    if (m_userMgr == 0)
    {
        return 0;
    }
    return m_userMgr->FindUser_CharNo(key);
}
char CMemberManager::IsEmptyMember(unsigned int key)
{
    if (m_members.empty())
    {
        return 1;
    }
    std::map<unsigned int, CMember*>::iterator it = m_members.find(key);
    if (it != m_members.end() && it->second != 0)
    {
        return it->second->IsEmpty();
    }
    return 0;
}
CMemberExpTbl* CMemberManager::GetMemberExpTable()
{
    return m_memberExpTbl;
}
void CMemberManager::SaveMemberExp(CServerHandler* handler, unsigned int memberKey,
                                   unsigned int upperCharId, unsigned int exp)
{
    Packet_DB_Save_Member_Exp pkt;
    pkt.m_memberKey = memberKey;
    pkt.m_upperCharId = upperCharId;
    pkt.m_exp = exp;
    handler->SendToDB(&pkt);
}
unsigned char CMemberManager::IsMemberExpLevelUp(unsigned int exp)
{
    return m_memberExpTbl->IsMemberExpLevelUp(exp);
}
void CMemberManager::NoticeLevelUpToLowers(unsigned int upperCharId, unsigned int exp)
{
    CMember* upper = FindMember(upperCharId);
    if (upper != 0)
    {
        unsigned char level = (unsigned char)m_memberExpTbl->GetMemberExpLevel(exp);
        upper->NoticeLevelUpToLowers(level);
        unsigned char level2 = (unsigned char)m_memberExpTbl->GetMemberExpLevel(exp);
        DNF_LOG_SCOPE_LINE(0x180,"./log/MemberModify", "Member Level Up! Char Id(%d), Exp(%d), Level(%d)",
            upperCharId, exp, (unsigned int)level2);
    }
}
CMember* CMemberManager::CreateMemberQuery(unsigned int key, CUser* user, CServerHandler* handler)
{
    if (user == 0 || handler == 0)
    {
        return 0;
    }
    CMember* member = new CMember(key, this);
    member->QueryMember(handler);
    InsertMember(key, member);
    user->AttachMember(member);
    return member;
}
int CMemberManager::InsertMember(unsigned int key, CMember* member)
{
    if (member == 0)
    {
        DNF_LOG_SCOPE_LINE(0x87, "./log/Member", "[INSERT_ERR] Member Key : %d\tpclMember == 0", key);
        return 0;
    }
    else
    {
        std::pair<std::map<unsigned int, CMember*>::iterator, bool> r =
            m_members.insert(std::pair<const unsigned int, CMember*>(key, member));
        if (!r.second)
        {
            DNF_LOG_SCOPE_LINE(0x83, "./log/Member", "[INSERT_ERR] Member Key : %d\tAlready Member Exist", key);
        }
        return 1;
    }
}
void CMemberManager::SaveMemberOnConnect(CServerHandler* handler, CUser* u1, CUser* u2,
                                        unsigned char flag)
{
    if (handler != 0 && u1 != 0 && u2 != 0)
    {
        Packet_Monitor_SAVE_Member pkt;
        pkt.m_fieldA = flag;
        short l1 = u1->GetLevel();
        short l2 = u2->GetLevel();
        if (l2 < l1)
        {
            pkt.m_upperCharNo = u1->GetUniqCharNo();
            pkt.m_lowerCharNo = u2->GetUniqCharNo();
            pkt.m_type = 1;
        }
        else if (l2 > l1)
        {
            pkt.m_upperCharNo = u2->GetUniqCharNo();
            pkt.m_lowerCharNo = u1->GetUniqCharNo();
            pkt.m_type = 2;
        }
        else
        {
            return;
        }
        handler->SendToDB(&pkt);
    }
}
void CMemberManager::SaveMemberOnUnConnect(CServerHandler* handler, unsigned int a,
                                          unsigned int b, unsigned int c, unsigned char flag)
{
    if (handler != 0)
    {
        Packet_Monitor_SAVE_Member pkt;
        pkt.m_fieldA = flag;
        if (c == 1)
        {
            pkt.m_upperCharNo = b;
            pkt.m_lowerCharNo = a;
            pkt.m_type = 1;
        }
        else
        {
            pkt.m_type = 2;
            if (c != 2)
            {
                DNF_LOG_SCOPE_AT("SaveMemberOnUnConnect", 0x137,"./log/Member",
                    "CMemberManager::SaveMemberOnUnConnect , isSecederUpperOrLower == 0");
                return;
            }
            pkt.m_upperCharNo = a;
            pkt.m_lowerCharNo = b;
        }
        handler->SendToDB(&pkt);
    }
}
int CMemberManager::RegisterMember(CMember* member, short level, CUser* user, bool flag)
{
    if (member == 0 || user == 0)
    {
        return 0;
    }
    if (level < user->GetLevel())
    {
        if (member->InsertUpperMember(user->GetUniqCharNo(),
                                      (unsigned char)user->GetLevel(), user->GetCharName(),
                                      flag) != 1)
        {
            return 0;
        }
    }
    else if (level <= user->GetLevel())
    {
        return 0;
    }
    else
    {
        if (member->InsertLowerMember(user->GetUniqCharNo(),
                                      (unsigned char)user->GetLevel(), user->GetCharName(),
                                      flag) != 1)
        {
            return 0;
        }
    }
    return 1;
}
CMember* CMemberManager::CreateMemberInJoin(CUser* user)
{
    unsigned int charNo = user->GetUniqCharNo();
    CMember* member = new CMember(charNo, this);
    InsertMember(charNo, member);
    user->AttachMember(member);
    member->SetMemberDBFlag(2);
    member->SetMemberDBFlag(4);
    return member;
}
int CMemberManager::CheckMemberEnter(CUser* u1, CMember* m1, CUser* u2, CMember* m2)
{
    if (u1 == 0 || u2 == 0)
    {
        return 0x31;
    }
    if (u1->GetLevel() < u2->GetLevel())
    {
        return IsPossableMemberEnter(u2, m2, u1, m1, 2);
    }
    if (u2->GetLevel() < u1->GetLevel())
    {
        return IsPossableMemberEnter(u1, m1, u2, m2, 1);
    }
    return 0x2c;
}
char CMemberManager::CheckEmptyMember(CMember* member, CUser* user)
{
    bool empty = user != 0 && member != 0 && member->IsEmpty() != 0;
    if (empty)
    {
        Packet_Monitor_Notice_Delete_Member_Id pkt;
        pkt.m_idByChannel = user->GetIdByChannel();
        pkt.m_uniqCharNo = user->GetUniqCharNo();
        user->SendToGameserver((char*)&pkt, 0x12);
        unsigned int charNo = user->GetUniqCharNo();
        DeleteMember(charNo, true);
    }
    return empty ? 1 : 0;
}
char CMemberManager::IsAlreadyMemberMember(unsigned int key, unsigned int charNo)
{
    CMember* member = FindMember(key);
    if (member == 0)
    {
        return 0;
    }
    return member->IsAlreadyMemberMember(charNo);
}
void CMemberManager::GetMemberExpLevel(unsigned int level)
{
    CMemberExpTbl* tbl = *(CMemberExpTbl**)((char*)this + 0x24);
    if (tbl != 0)
    {
        tbl->GetMemberExpLevel(level);
    }
}
void CMemberManager::GetMemberExpNextLevelNeedExpLevel(unsigned int& exp,
                                                       unsigned int& expNext,
                                                       unsigned char& level)
{
    unsigned int lo[3];
    CMemberExpTbl* tbl = *(CMemberExpTbl**)((char*)this + 0x24);
    if (tbl != 0)
    {
        tbl->GetMemberExpLevel(exp, lo[0], expNext, level);
    }
    exp = exp - lo[0];
    expNext = expNext - lo[0];
}
int CMemberManager::MemerMemLogin(unsigned int key, CUser* user)
{
    if (user == 0 || m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n");
    }
    if (key == 0)
    {
        throw CDNFException("CMemberManager::MemerMemLogin() : uMemberKey == 0");
    }
    if (user->GetUniqCharNo() != key)
    {
        DNF_LOG_SCOPE_LINE(0x20c,"../log/Member",
            "CMemberManager::MemerMemLogin() : pclUser->GetUniqCharNo() != uMemberKey\tmember key(%d), char id(%d)",
            key, user->GetUniqCharNo());
    }
    CServerHandler* handler = m_app->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException("CMemberManager::MemerMemLogin() pclServerHandler == NULL\n");
    }
    int result = 0;
    if (FindMember(key) == 0)
    {
        result = (int)CreateMemberQuery(key, user, handler);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x21a,"../log/Member", "CMemberManager::MemerMemLogin() ( is already member error ) : %d",
            key);
    }
    return result;
}

bool compareTime(int const& a, int const& b)
{
    return a > b;
}

namespace village_attacked
{
int village_attacked_scheduler[18];
int MAX_SCHEDULER_COUNT;
int HUNTING_POINT_WEIGTH_CONST;
int HuntingPointMultiplier[0x12] = {0, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int REWARD_BUFF_TIME;
int REWARD_PENALTY_TIME;
int COUNTDOWN_FIRST_TIME;
int COUNTDOWN_SECOND_TIME;
int COUNTDOWN_THIRD_TIME;

int GetNextSchedule(tm t, int wday, int hour, int min)
{
    int days = wday - t.tm_wday;
    if (days < 0)
    {
        days += 7;
    }
    else if (days == 0)
    {
        if (hour < t.tm_hour)
        {
            days = 7;
        }
        else if (t.tm_hour == hour && min <= t.tm_min)
        {
            days = 7;
        }
    }
    t.tm_hour = hour;
    t.tm_min = min;
    t.tm_sec = 0;
    time_t r = mktime(&t);
    return (int)(r + days * 86400);
}

void SetRealConfig()
{
    village_attacked_scheduler[0] = 2;
    village_attacked_scheduler[1] = 0x15;
    village_attacked_scheduler[2] = 0x1e;
    village_attacked_scheduler[3] = 2;
    village_attacked_scheduler[4] = 0x16;
    village_attacked_scheduler[5] = 0x1e;
    village_attacked_scheduler[6] = 6;
    village_attacked_scheduler[7] = 0x15;
    village_attacked_scheduler[8] = 0x1e;
    village_attacked_scheduler[9] = 6;
    village_attacked_scheduler[10] = 0x16;
    village_attacked_scheduler[11] = 0x1e;
    village_attacked_scheduler[12] = -1;
    village_attacked_scheduler[13] = -1;
    village_attacked_scheduler[14] = -1;
    village_attacked_scheduler[15] = -1;
    village_attacked_scheduler[16] = -1;
    village_attacked_scheduler[17] = -1;
    MAX_SCHEDULER_COUNT = 2;
    HUNTING_POINT_WEIGTH_CONST = 4;
    REWARD_BUFF_TIME = 3600;
    REWARD_PENALTY_TIME = 600;
    COUNTDOWN_FIRST_TIME = 600;
    COUNTDOWN_SECOND_TIME = 300;
    COUNTDOWN_THIRD_TIME = 60;
}

void SetGMConfig(unsigned int a, unsigned int b, unsigned int c)
{
    if (a == 0)
    {
        a = 600;
    }
    else
    {
        a = a * 0x3c;
    }
    if (b == 0)
    {
        b = 600;
    }
    else
    {
        b = b * 0x3c;
    }
    if (c == 0)
    {
        c = 600;
    }
    else
    {
        c = c * 0x3c;
    }
    time_t now = time(0);
    time_t start = now + 0x3c;
    time_t end = start + a;
    tm t1;
    tm t2;
    localtime_r(&start, &t1);
    localtime_r(&end, &t2);
    village_attacked_scheduler[12] = t1.tm_wday;
    village_attacked_scheduler[13] = t1.tm_hour;
    village_attacked_scheduler[14] = t1.tm_min;
    village_attacked_scheduler[15] = t2.tm_wday;
    village_attacked_scheduler[16] = t2.tm_hour;
    village_attacked_scheduler[17] = t2.tm_min;
    MAX_SCHEDULER_COUNT = 1;
    HUNTING_POINT_WEIGTH_CONST = 1;
    REWARD_BUFF_TIME = b;
    REWARD_PENALTY_TIME = c;
    COUNTDOWN_FIRST_TIME = 30;
    COUNTDOWN_SECOND_TIME = 20;
    COUNTDOWN_THIRD_TIME = 10;
}

CVillageAttackedManager::CVillageAttackedManager(CApplication* app) {}
CVillageAttackedManager::~CVillageAttackedManager() {}
void CVillageAttackedManager::SendFirstRankerRewardJpn(CUser* user, int rank) {}
void CVillageAttackedManager::InsertTimer(int startTime, int endTime)
{
    m_field2c = startTime;
    m_field28 = endTime;
    CVillageAttackedCountdownFirst* t1 =
        new CVillageAttackedCountdownFirst(startTime - 600, 0, this);
    m_app->GetTaskScheduler()->AddTask(t1);
    CVillageAttackedCountdownSecond* t2 =
        new CVillageAttackedCountdownSecond(startTime - 300, 0, this);
    m_app->GetTaskScheduler()->AddTask(t2);
    CVillageAttackedCountdownThird* t3 =
        new CVillageAttackedCountdownThird(startTime - 60, 0, this);
    m_app->GetTaskScheduler()->AddTask(t3);
    CVillageAttackedStart* t4 = new CVillageAttackedStart(startTime, 0, this);
    m_app->GetTaskScheduler()->AddTask(t4);
    CVillageAttackedEnd* t5 = new CVillageAttackedEnd(endTime, 0, this);
    m_app->GetTaskScheduler()->AddTask(t5);
}
void CVillageAttackedManager::OnSchedule()
{
    time_t now = GetNowTime();
    tm* t = localtime(&now);
    int bestIdx = 0;
    int bestTime = village_attacked::GetNextSchedule(*t, village_attacked_scheduler[0],
                                                     village_attacked_scheduler[1],
                                                     village_attacked_scheduler[2]);
    for (int i = 1; i < MAX_SCHEDULER_COUNT; i++)
    {
        int s = village_attacked::GetNextSchedule(*t, village_attacked_scheduler[i * 6],
                                                  village_attacked_scheduler[i * 6 + 1],
                                                  village_attacked_scheduler[i * 6 + 2]);
        if (s < bestTime)
        {
            bestIdx = i;
            bestTime = s;
        }
    }
    int end = village_attacked::GetNextSchedule(*t, village_attacked_scheduler[bestIdx * 6 + 3],
                                                village_attacked_scheduler[bestIdx * 6 + 4],
                                                village_attacked_scheduler[bestIdx * 6 + 5]);
    InsertTimer(bestTime, end);
    tm* t2 = localtime((time_t*)&end);
    t2->tm_sec = 0;
    t2->tm_min = 0;
    t2->tm_hour = 6;
    t2->tm_mday = t2->tm_mday + 1;
    mktime(t2);
}
void CVillageAttackedManager::SetRewardCloseTime(ENUM_VILLAGE_ATTACKED_REWARD rewardType)
{
    if (rewardType == ENUM_VILLAGE_ATTACKED_REWARD_BUFF)
    {
        m_field34 = (int)GetNowTime() + REWARD_BUFF_TIME;
    }
    else if (rewardType == ENUM_VILLAGE_ATTACKED_REWARD_PENALTY)
    {
        m_field34 = (int)GetNowTime() + REWARD_PENALTY_TIME;
    }
    else
    {
        m_field34 = 0;
    }
}
void CVillageAttackedManager::RequestEventEnd(bool flag)
{
    if (flag)
    {
        m_field1c = m_field20;
    }
    else if ((unsigned int)m_field20 <= (unsigned int)m_field1c)
    {
        m_field1c = m_field1c - 1;
    }
    OnEndVillageAttacked();
}
int CVillageAttackedManager::GetMaxHuntingPoint()
{
    unsigned int group = (unsigned int)m_app->Get_ServerGroup() & 0xff;
    if (0 < group && group <= 0x11)
    {
        return m_app->Get_UserManager()->Size() * HuntingPointMultiplier[group];
    }
    if (group > 0x61)
    {
        return m_app->Get_UserManager()->Size() * HUNTING_POINT_WEIGTH_CONST;
    }
    DNF_LOG_SCOPE_AT("GetMaxHuntingPoint", 0xfe, "./log/village", "ServerGroup is over REAL_GROUP_MAX : %d", group);
    return 0;
}
void CVillageAttackedManager::OnStartVillageAttacked()
{
    m_state24 = 1;
    ClearDungeonCloseTime();
    Packet_VillageAttackedStart pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = (unsigned int)GetRemainTime();
    *(unsigned int*)((char*)&pkt + 0xe) = (unsigned int)m_field1c;
    *(unsigned int*)((char*)&pkt + 0x12) = (unsigned int)m_field20;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0x16);
}
void CVillageAttackedManager::OnCountdownVillageAttacked(int time)
{
    if (time == 600)
    {
        m_field20 = GetMaxHuntingPoint();
    }
    Packet_VillageAttackedCountdown pkt;
    *(int*)((char*)&pkt + 0xa) = time;
    m_app->Get_ServerHandler()->SendAllToGameServer(
        (char*)&pkt, (unsigned int)*(unsigned short*)((char*)&pkt + 2));
}
void CVillageAttackedManager::SendFirstRankerReward(unsigned int charNo)
{
    static const char kTitle[10] = {'\xc1', '\xd6', '\xb9', '\xce', ' ',
                                    '\xb4', '\xeb', '\xc7', '\xa5', '\0'};
    static const char kBody[0x8e] = {
        '\xbc', '\xd2', '\xb6', '\xf5', '\xc0', '\xbb', '\x20', '\xc0', '\xe1', '\xc0', '\xe7', '\xbf',
        '\xec', '\xbd', '\xc3', '\xb4', '\xc0', '\xb6', '\xf3', '\x20', '\xbc', '\xf6', '\xb0', '\xed',
        '\xc7', '\xcf', '\xbd', '\xc5', '\x20', '\xb8', '\xf0', '\xc7', '\xe8', '\xb0', '\xa1', '\xb4',
        '\xd4', '\xb2', '\xb2', '\x20', '\xc1', '\xd6', '\xb9', '\xce', '\xb5', '\xe9', '\xc0', '\xc7',
        '\x20', '\xc1', '\xa4', '\xbc', '\xba', '\xc0', '\xbb', '\x20', '\xb8', '\xf0', '\xbe', '\xc6',
        '\x20', '\xbc', '\xb1', '\xb9', '\xb0', '\xc0', '\xbb', '\x20', '\xb5', '\xe5', '\xb8', '\xb3',
        '\xb4', '\xcf', '\xb4', '\xd9', '\x2e', '\x20', '\xb0', '\xa8', '\xbb', '\xe7', '\xc7', '\xd5',
        '\xb4', '\xcf', '\xb4', '\xd9', '\x20', '\xb8', '\xf0', '\xc7', '\xe8', '\xb0', '\xa1', '\xb4',
        '\xd4', '\x2e', '\x28', '\xbc', '\xba', '\xc0', '\xe5', '\xc0', '\xc7', '\x20', '\xba', '\xf1',
        '\xbe', '\xe0', '\x20', '\xbb', '\xe7', '\xbf', '\xeb', '\xb1', '\xe2', '\xb0', '\xa3', '\xc0',
        '\xcc', '\x20', '\xc1', '\xf6', '\xb3', '\xaa', '\xb8', '\xe9', '\x20', '\xbb', '\xe7', '\xb6',
        '\xf3', '\xc1', '\xfd', '\xb4', '\xcf', '\xb4', '\xd9', '\x2e', '\x29', '\x00'};
    Packet_DB_InsertMail pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = charNo;
    *(unsigned int*)((char*)&pkt + 0xe) = 0x1dfe;
    *(unsigned int*)((char*)&pkt + 0x12) = 1;
    memcpy((char*)&pkt + 0x1a, kTitle, 10);
    memcpy((char*)&pkt + 0x2f, kBody, 0x8e);
    *(int*)((char*)&pkt + 0x12f) = 3;
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
void CVillageAttackedManager::SendMaxHuntingPoint()
{
    Packet_DBMW_Query_Msg pkt;
    pkt.m_fieldB = 6;
    pkt.m_fieldA = 0x4ee2;
    unsigned int hp = (unsigned int)m_field1c;
    unsigned int now = GetNowTime();
    unsigned int group = (unsigned int)m_app->Get_ServerGroup();
    char sql[0x1001];
    sprintf(sql,
            "inSert into village_attacked_server_point_rank(server_info, occ_date, hunting_point) values(%d,cast(from_unixtime(%d) as date),%u)",
            group & 0xff, now, hp);
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
void CVillageAttackedManager::Reset()
{
}
void CVillageAttackedManager::OnEndVillageAttacked()
{
    if (m_state24 == 1)
    {
        int now = (int)GetNowTime();
        if ((unsigned int)m_field1c < (unsigned int)m_field20)
        {
            m_field30 = 2;
            CVillageAttackedReward* task =
                new CVillageAttackedReward(REWARD_PENALTY_TIME + now, 0, this);
            m_app->GetTaskScheduler()->AddTask(task);
        }
        else
        {
            m_field30 = 1;
            CVillageAttackedReward* task =
                new CVillageAttackedReward(REWARD_BUFF_TIME + now, 0, this);
            m_app->GetTaskScheduler()->AddTask(task);
        }
        m_state24 = 0;
        SetRewardCloseTime((ENUM_VILLAGE_ATTACKED_REWARD)m_field30);
        SendVillageAttackedEnd();
        SendCharacRank();
        SendMaxHuntingPoint();
        Reset();
        OnSchedule();
    }
}
void CVillageAttackedManager::OnRewardVillageAttacked()
{
    Packet_VillageAttackedRewardServer pkt;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0xe);
    m_field30 = 0;
}
unsigned int CVillageAttackedManager::GetDungeonRemainTime()
{
    return 0;
}
void CVillageAttackedManager::SendVillageAttackedEnd()
{
    Packet_VillageAttackedEnd pkt;
    pkt.m_dungeonRemain = GetDungeonRemainTime();
    pkt.m_fieldE = (unsigned int)m_field1c;
    pkt.m_field12 = (unsigned int)m_field20;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0x16);
}
int CVillageAttackedManager::GetRemainTime()
{
    int end = m_field28;
    int now = (int)GetNowTime();
    return end - now;
}
void CVillageAttackedManager::OnUpdateVillageAttacked()
{
    Packet_VillageAttackedUpdate pkt;
    pkt.m_remainTime = (unsigned int)GetRemainTime();
    pkt.m_fieldE = (unsigned int)m_field1c;
    pkt.m_field12 = (unsigned int)m_field20;
    m_app->Get_ServerHandler()->SendAllToGameServer((char*)&pkt, 0x16);
}
void CVillageAttackedManager::SendVillageAttackedScore(CUser* user)
{
    Packet_VillageAttackedScore pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_remainTime = (unsigned int)GetRemainTime();
    pkt.m_field16 = (unsigned int)m_field1c;
    pkt.m_field1a = (unsigned int)m_field20;
    user->GetUniqCharNo();
    int* hp = GetHuntingPoint(user->GetUniqCharNo());
    int cur = 0;
    int max = 0;
    if (hp != 0)
    {
        cur = *hp;
        max = *hp + hp[1];
    }
    pkt.m_cur = cur;
    pkt.m_max = max;
    user->SendToGameserver((char*)&pkt, 0x26);
}
void CVillageAttackedManager::SendVillageAttackedReward(CUser* user, int rewardType)
{
    Packet_VillageAttackedReward pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_rewardType = rewardType;
    user->SendToGameserver((char*)&pkt, 0x1a);
}
void CVillageAttackedManager::OnCharacLogin(CUser* user)
{
    if (m_state24 != 0)
    {
        SendVillageAttackedScore(user);
    }
    if (m_field30 != 0 && m_field30 != 1)
    {
        SendVillageAttackedReward(user, m_field30);
    }
}
int* CVillageAttackedManager::GetHuntingPoint(unsigned int charNo)
{
    std::map<unsigned int, stHuntingPoint>::iterator it = m_huntingPoints.find(charNo);
    if (it != m_huntingPoints.end())
    {
        return (int*)&it->second;
    }
    return 0;
}
void CVillageAttackedManager::SendVillageAttackedRewardJpn(CUser* user, int count)
{
    Packet_VillageAttackedReward pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_rewardType = 5;
    pkt.m_count = count;
    user->SendToGameserver((char*)&pkt, 0x1a);
}
void CVillageAttackedManager::SendMinTime()
{
    Packet_DBMW_Query_Msg pkt;
    pkt.m_fieldB = 6;
    pkt.m_fieldA = 0x4ee3;
    unsigned int elapse = GetElapseTime();
    unsigned int now = GetNowTime();
    unsigned int group = (unsigned int)m_app->Get_ServerGroup();
    char sql[0x1001];
    sprintf(sql,
            "inSert into village_attacked_server_time_rank(server_info, occ_date, clear_time) values(%d,cast(from_unixtime(%d) as date),%u)",
            group & 0xff, now, elapse);
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
void CVillageAttackedManager::OnServerGroupRewardVillageAttacked()
{
    Packet_DB_VillageAttackedRank pkt;
    unsigned char group = m_app->Get_ServerGroup();
    time_t now = GetNowTime();
    tm* pt = localtime(&now);
    int times[18];
    for (int i = 0; i < MAX_SCHEDULER_COUNT; i++)
    {
        times[i] = GetPrevSchedule(*pt, village_attacked_scheduler[i * 6],
                                   village_attacked_scheduler[i * 6 + 1],
                                   village_attacked_scheduler[i * 6 + 2]);
    }
    std::sort(&times[0], &times[MAX_SCHEDULER_COUNT], compareTime);
    *(char*)((char*)&pkt + 0xa) = (char)group;
    *(int*)((char*)&pkt + 0xb) = times[0];
    *(int*)((char*)&pkt + 0xf) = times[0];
    *(int*)((char*)&pkt + 0x13) = times[1];
    *(int*)((char*)&pkt + 0x17) = times[1];
    m_app->Get_ServerHandler()->SendToDB(&pkt);
}
unsigned int CVillageAttackedManager::GetElapseTime()
{
    return 0;
}
void CVillageAttackedManager::ClearDungeonCloseTime()
{
    m_field34 = 0;
}
void CVillageAttackedManager::UpdateHuntingPoint(CUser** users, bool success, int* a,
                                                 unsigned int* charNos)
{
    if (m_state24 == 1)
    {
        for (int i = 0; i < 4; i++)
        {
            if (users[i] != 0)
            {
                int total = 0;
                int* hp = GetHuntingPoint(charNos[i]);
                if (hp == 0)
                {
                    stHuntingPoint p;
                    p.m_huntingPoint = 0;
                    p.m_field4 = 0;
                    if (success)
                    {
                        p.m_huntingPoint++;
                    }
                    else
                    {
                        p.m_field4++;
                    }
                    m_huntingPoints.insert(
                        std::pair<const unsigned int, stHuntingPoint>(charNos[i], p));
                }
                else
                {
                    if (success)
                    {
                        hp[0]++;
                    }
                    else
                    {
                        hp[1]++;
                    }
                    total = hp[0] + hp[1];
                }
                if (success)
                {
                    int* cur = GetHuntingPoint(charNos[i]);
                    SendVillageAttackedRewardJpn(users[i], *cur);
                    DNF_LOG_SCOPE_AT("UpdateHuntingPoint", 0x3ae,"./log/village", "Send Success Count [charac:%u][count:%d]",
                        charNos[i], *cur);
                }
            }
        }
        if (success)
        {
            m_field1c = m_field1c + 1;
        }
        if (m_field1c == m_field20)
        {
            SendMinTime();
        }
    }
}
void CVillageAttackedManager::SendCharacRank()
{
    unsigned char serverGroup = 0;
    if (!m_huntingPoints.empty())
    {
        std::priority_queue<stUserHuntingPoint> pq;
        for (std::map<unsigned int, stHuntingPoint>::iterator it = m_huntingPoints.begin();
             it != m_huntingPoints.end(); ++it)
        {
            stUserHuntingPoint p;
            p.m_huntingPoint = it->second.m_huntingPoint;
            p.m_characNo = it->second.m_field4;
            pq.push(p);
        }
        char sql[0x1001];
        memset(sql, 0, 0x1001);
        std::string query;
        serverGroup = m_app->Get_ServerGroup();
        unsigned int now = GetNowTime();
        if ((unsigned int)m_field20 <= (unsigned int)m_field1c)
        {
            int rank = 0;
            int count = 0;
            while (!pq.empty())
            {
                stUserHuntingPoint p = pq.top();
                CUser* user = m_app->Get_UserManager()->FindUser_CharNo(p.m_characNo);
                if (user == 0)
                {
                    pq.pop();
                    DNF_LOG_SCOPE_AT("SendCharacRank", 0x238, "./log/village", "User is null [charac_no:%u]", p.m_characNo);
                }
                else
                {
                    rank++;
                    SendFirstRankerRewardJpn(user, rank);
                    sprintf(sql, "(%d,cast(from_unixtime(%d) as date),%u,%u,%d)", serverGroup,
                            now, p.m_characNo, p.m_huntingPoint, rank);
                    if (query.length() != 0)
                    {
                        query += ",";
                    }
                    query += sql;
                    pq.pop();
                    if (2 < rank)
                    {
                        break;
                    }
                }
                count++;
            }
        }
        Packet_DBMW_Query_Msg pkt;
        pkt.m_fieldB = 6;
        pkt.m_fieldA = 0x4ee4;
        sprintf(sql,
                "inSert into village_attacked_charac_point_rank(server_info, occ_date, charac_no, hunting_point, rank) values%s",
                query.c_str());
        m_app->Get_ServerHandler()->SendToDB(&pkt);
    }
}

CVillageAttackedCountdownFirst::CVillageAttackedCountdownFirst(unsigned int time,
                                                               unsigned int flag,
                                                               CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedCountdownFirst::~CVillageAttackedCountdownFirst() {}
CVillageAttackedCountdownSecond::CVillageAttackedCountdownSecond(unsigned int time,
                                                                 unsigned int flag,
                                                                 CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedCountdownSecond::~CVillageAttackedCountdownSecond() {}
CVillageAttackedCountdownThird::CVillageAttackedCountdownThird(unsigned int time,
                                                               unsigned int flag,
                                                               CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedCountdownThird::~CVillageAttackedCountdownThird() {}
CVillageAttackedStart::CVillageAttackedStart(unsigned int time, unsigned int flag,
                                             CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedStart::~CVillageAttackedStart() {}
CVillageAttackedEnd::CVillageAttackedEnd(unsigned int time, unsigned int flag,
                                         CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedEnd::~CVillageAttackedEnd() {}
CVillageAttackedReward::CVillageAttackedReward(unsigned int time, unsigned int flag,
                                               CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedReward::~CVillageAttackedReward() {}
}

CUser::CUser()
{
    *(unsigned int*)((char*)this + 0x0) = 0;
    *(unsigned int*)((char*)this + 0x4) = 0;
    *(unsigned int*)((char*)this + 0x8) = 0;
    *(unsigned int*)((char*)this + 0xc) = 0;
    *(char*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0x14) = 0;
    *(unsigned short*)((char*)this + 0x18) = 0;
    *(char*)((char*)this + 0x1a) = 0;
    *(unsigned int*)((char*)this + 0x1c) = 0;
    *(unsigned int*)((char*)this + 0x20) = 0xffffffff;
    *(char*)((char*)this + 0x42) = 0xff;
    *(char*)((char*)this + 0x43) = 0xff;
    *(unsigned short*)((char*)this + 0x44) = 0xffff;
    *(char*)((char*)this + 0x46) = 1;
    m_field68 = 0;
    *(char*)((char*)this + 0xb0) = 0;
    *(unsigned int*)((char*)this + 0xb4) = 0;
    memset((char*)this + 0x24, 0, 0x1e);
    memset((char*)this + 0x47, 0, 7);
    m_channelCount = 0;
    m_channelInfoMap.clear();
}
CUser::~CUser()
{
    *(unsigned int*)((char*)this + 0x8) = 0;
    *(unsigned int*)((char*)this + 0xc) = 0;
    *(unsigned int*)((char*)this + 0x0) = 0;
    *(unsigned int*)((char*)this + 0x4) = 0;
    *(unsigned int*)((char*)this + 0x20) = 0xffffffff;
    *(char*)((char*)this + 0x42) = 0xff;
    *(char*)((char*)this + 0x43) = 0xff;
    *(unsigned short*)((char*)this + 0x44) = 0xffff;
    memset((char*)this + 0x24, 0, 0x1e);
    ResetMemberInfo();
    *(char*)((char*)this + 0x10) = 0;
    m_field68 = 0;
    *(char*)((char*)this + 0x46) = 1;
    m_channelCount = 0;
    m_channelInfoMap.clear();
}
void* CUser::operator new(unsigned int size) { return ::operator new(size); }
unsigned int CUser::GetUniqCharNo() { return *(unsigned int*)((char*)this + 4); }
void CUser::AttachMember(CMember* member) {}
void CUser::operator delete(void* p) { ::operator delete(p); }
void* CUser::GetGameServer() { return *(void**)((char*)this + 8); }
void* CUser::GetTcpGameServer() { return 0; }
unsigned int CUser::GetDBID() { return *(unsigned int*)((char*)this + 0); }
short CUser::GetLevel() { return *(short*)((char*)this + 0x44); }
char CUser::GetJob() { return *(char*)((char*)this + 0x42); }
char CUser::GetGrowthType() { return *(char*)((char*)this + 0x43); }
unsigned int CUser::GetIdByChannel() { return *(unsigned int*)((char*)this + 0x20); }
char* CUser::GetCharName() { return (char*)this + 0x24; }
char CUser::IsBlackUser(unsigned int key) { return 0; }
unsigned char CUser::GetUpperMemberExpLevel()
{
    if (*(int*)((char*)this + 0x14) != 0)
    {
        CMember* member = (CMember*)*(int*)((char*)this + 0x14);
        if (member->GetMemberKey() != 0 && (GetMemberDBFlag() & 4) != 0)
        {
            return (unsigned char)member->GetUpperMemberExpLevel();
        }
    }
    return 0;
}
void CUser::SendTcpGameserver(PacketHeader* pkt)
{
    if (*(int*)((char*)this + 0xc) != 0)
    {
        CTcpGameServer* tcp = (CTcpGameServer*)*(int*)((char*)this + 0xc);
        char* buf = tcp->makePacketHeader(*(unsigned short*)pkt,
                                          *(unsigned short*)((char*)pkt + 2));
        if (buf != 0)
        {
            memcpy(buf + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
            tcp->SendToGameServer(buf);
        }
    }
}
void CUser::SendToGameserver(char* buf, int len) {}
void CUser::ResetChannelUserCount(int count)
{
    m_channelCount = count;
    m_channelInfoMap.clear();
}
void CUser::SetChannelUserCount(int a, int b, int c, int d)
{
    m_channelInfoMap.insert(std::make_pair(a, ChannelInfo(b, c, d)));
}
char CUser::IsCompleteChannelUserCount()
{
    if (m_channelCount != 0 && (int)m_channelInfoMap.size() == m_channelCount)
    {
        return 1;
    }
    return 0;
}
void CUser::GetChannelUserCount(STPvPChannelInfo* out, unsigned char& count)
{
    int idx = 0;
    for (std::map<int, ChannelInfo>::iterator it = m_channelInfoMap.begin();
         it != m_channelInfoMap.end(); ++it)
    {
        if ((int)(unsigned char)count <= idx)
        {
            break;
        }
        out[idx].m_channel = it->first;
        out[idx].m_countA = it->second.m_a;
        out[idx].m_countB = it->second.m_b;
        out[idx].m_countC = it->second.m_c;
        idx++;
    }
    count = (unsigned char)idx;
}
void CUser::MemberEnterProcess()
{
    if (*(int*)((char*)this + 0x1c) != 0)
    {
        *(char*)((char*)this + 0x1a) = *(char*)((char*)this + 0x1a) - 1;
        if ((signed char)*(char*)((char*)this + 0x1a) <= 0)
        {
            *(int*)((char*)this + 0x1c) = 0;
            *(char*)((char*)this + 0x1a) = 0;
        }
    }
}
void CUser::SetBuddyCharName(int dbid, const std::string& name)
{
    m_buddyHandle.setBuddyCharName(dbid, name);
}
int CUser::ChangeCharNameToBlackList(unsigned int dbid, char* name)
{
    if (!m_blackList.empty())
    {
        std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.find(dbid);
        if (it != m_blackList.end())
        {
            it->second->ChangeCharName(name);
            return 1;
        }
    }
    return 0;
}
void CUser::AddBuddyFromCash(CBuddy* buddy) {}
void CUser::SetBuddyDBFlag(unsigned short flag)
{
    *(unsigned short*)((char*)this + 0x88) =
        (unsigned short)(*(unsigned short*)((char*)this + 0x88) | flag);
}
int CUser::AddBuddyDB(CServerHandler* handler, char* name)
{
    return ((CBuddyHandle*)((char*)this + 0x6c))->addDB(handler, name);
}
int CUser::DelBuddyDB(CServerHandler* handler, char* name)
{
    return ((CBuddyHandle*)((char*)this + 0x6c))->delDB(handler, name);
}
int CUser::AddBuddy(STBuddyDBInfo& info)
{
    std::string name((char*)&info);
    return ((CBuddyHandle*)((char*)this + 0x6c))->add(name, info);
}
char CUser::DelBuddy(char* name)
{
    std::string s(name);
    return (char)((CBuddyHandle*)((char*)this + 0x6c))->del(s);
}
void CUser::RegisterToCashBlackList(std::map<unsigned int, CBlackUser*>& map)
{
    if (!map.empty())
    {
        m_blackList.clear();
        for (std::map<unsigned int, CBlackUser*>::iterator it = map.begin();
             it != map.end(); ++it)
        {
            m_blackList.insert(std::make_pair(it->first, it->second));
        }
    }
}
void CUser::SetBlackListDBFlag(unsigned short flag) { m_field68 |= flag; }
void CUser::SetDBID(unsigned int dbid) {}
void CUser::SetUniqCharNo(unsigned int charNo) {}
void CUser::SetIdByChannel(int channel) {}
void CUser::SetGameServer(CGameServer* server) { m_gameServer = server; }
void CUser::PrintBuddys(char* out)
{
    m_buddyHandle.printBuddys(out);
}
void CUser::SetUserPosState(unsigned char state) {}
void CUser::SetUserChangableInfo(short level, char flag)
{
    *(short*)((char*)this + 0x44) = level;
    *(char*)((char*)this + 0x43) = flag;
}
void CUser::SetUserInfo_CharNo(char a, char b, short level, unsigned int charNo, char* name)
{
    *(char*)((char*)this + 0x42) = a;
    *(char*)((char*)this + 0x43) = b;
    *(short*)((char*)this + 0x44) = level;
    *(unsigned int*)((char*)this + 4) = charNo;
    memcpy((char*)this + 0x24, name, 0x1d);
    ((CBuddyHandle*)((char*)this + 0x6c))->reset(this, true);
}
void CUser::SetSex(unsigned char sex)
{
    *(char*)((char*)this + 0x46) = (char)sex;
}
void CUser::SetSsn(char* ssn)
{
    memcpy((char*)this + 0x47, ssn, 6);
}
void CUser::SetEvent_idx(unsigned int idx)
{
    *(unsigned int*)((char*)this + 0xb4) = idx;
}
void CUser::Event_idx_modify_state()
{
    *(char*)((char*)this + 0xb0) = 1;
}
void CUser::SetTcpGameServer(CTcpGameServer* server)
{
    *(CTcpGameServer**)((char*)this + 0xc) = server;
}
void CUser::QueryBuddyInfo(CServerHandler* handler)
{
    Packet_DBMW_Query_Buddy_Info pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = GetUniqCharNo();
    handler->SendToDB(&pkt);
}
void CUser::ResetMemberInfo()
{
    *(unsigned int*)((char*)this + 0x14) = 0;
    *(unsigned short*)((char*)this + 0x18) = 0;
    *(char*)((char*)this + 0x1a) = 0;
    *(unsigned int*)((char*)this + 0x1c) = 0;
}
void CUser::ResetCharInfo(bool flag)
{
    *(unsigned int*)((char*)this + 4) = 0;
    *(char*)((char*)this + 0x42) = 0xff;
    *(char*)((char*)this + 0x43) = 0xff;
    *(unsigned short*)((char*)this + 0x44) = 0xffff;
    memset((char*)this + 0x24, 0, 0x1e);
    ResetMemberInfo();
    ((CBuddyHandle*)((char*)this + 0x6c))->reset(0, flag);
}
void CUser::ResetBlackList(int flag)
{
    if (!m_blackList.empty())
    {
        if (flag != 0)
        {
            for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
                 it != m_blackList.end(); ++it)
            {
                if (it->second != 0)
                {
                    delete it->second;
                }
            }
        }
        m_blackList.clear();
    }
}
void CUser::ResetBuddyList(bool flag)
{
    m_buddyHandle.reset(0, flag);
}
int CUser::GetBuddysCharNo(unsigned int* out)
{
    return ((CBuddyHandle*)((char*)this + 0x6c))->getBuddysCharNo(out);
}
void CUser::GetBuddiesCharNo(std::vector<unsigned int>& out)
{
    unsigned int buf[32];
    memset(buf, 0, 0x80);
    int count = ((CBuddyHandle*)((char*)this + 0x6c))->getBuddysCharNo(buf);
    for (int i = 0; i < count; i++)
    {
        out.push_back(buf[i]);
    }
}
int CUser::GetBuddys(CBuddy** out)
{
    return ((CBuddyHandle*)((char*)this + 0x6c))->getBuddys(out);
}
void CUser::SendNoticeBuddyInOut(unsigned char channel, unsigned int charNo, char* name,
                                 unsigned char flag1, unsigned char flag2, char flag3)
{
    if (GetGameServer() != 0)
    {
        Packet_Monitor_Notice_Buddy_In_Out pkt;
        pkt.m_charNo = charNo;
        pkt.m_idByChannel = GetIdByChannel();
        pkt.m_channel = channel;
        pkt.m_field13 = flag1;
        pkt.m_field14 = flag2;
        memcpy(pkt.m_name, name, 0x1d);
        pkt.m_field33 = (unsigned char)flag3;
        ((CServerInterface*)GetGameServer())->SendToServer(
            (char*)&pkt, *(unsigned short*)((char*)&pkt + 2));
    }
}
unsigned short CUser::GetBuddyDBFlag()
{
    return *(unsigned short*)((char*)this + 0x88);
}
unsigned short CUser::GetBlackListDBFlag()
{
    return *(unsigned short*)((char*)this + 0x68);
}
std::map<unsigned int, CBlackUser*>* CUser::GetMapBlackList()
{
    return &m_blackList;
}
void CUser::GetBlackList(unsigned char& count, STBlackUserDBType* out)
{
    count = 0;
    if (!m_blackList.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
             it != m_blackList.end(); ++it)
        {
            memcpy((char*)out + (unsigned int)count * 0x28 + 4, it->second->GetName(), 0x1d);
            *(unsigned int*)((char*)out + (unsigned int)count * 0x28 + 0x24) =
                it->second->GetOccurTime();
            *(unsigned int*)((char*)out + (unsigned int)count * 0x28) = it->first;
            count++;
            if (9 < count)
            {
                return;
            }
        }
    }
}
void CUser::GetBlackList(unsigned char& count, unsigned int* out)
{
    count = 0;
    if (!m_blackList.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
             it != m_blackList.end(); ++it)
        {
            out[(unsigned int)count] = it->first;
            count++;
            if (9 < count)
            {
                return;
            }
        }
    }
}
unsigned int CUser::GetBlackListSize()
{
    return (unsigned int)m_blackList.size();
}
char CUser::RegisterToBlackList(unsigned int charNo, char* name)
{
    if (name == 0 || charNo == 0)
    {
        DNF_LOG_SCOPE_LINE(0x16e, "./log/BlackList", "Register Err(%d)(%s)", charNo, name);
        return 0;
    }
    CBlackUser* user = new CBlackUser;
    user->SetBlackUser(name, (unsigned int)time(0));
    std::pair<std::map<unsigned int, CBlackUser*>::iterator, bool> r =
        m_blackList.insert(std::pair<const unsigned int, CBlackUser*>(charNo, user));
    return r.second ? 1 : 0;
}
char CUser::RegisterToBlackList(unsigned int charNo, char* name, unsigned int time)
{
    CBlackUser* user = new CBlackUser;
    user->SetBlackUser(name, time);
    std::pair<std::map<unsigned int, CBlackUser*>::iterator, bool> r =
        m_blackList.insert(std::pair<const unsigned int, CBlackUser*>(charNo, user));
    return r.second ? 1 : 0;
}
int CUser::DeleteToBlackList(unsigned int charNo)
{
    if (!m_blackList.empty())
    {
        std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.find(charNo);
        if (it != m_blackList.end())
        {
            delete it->second;
            m_blackList.erase(it);
            return 1;
        }
    }
    return 0;
}
void CUser::SendBlackList()
{
    Packet_Monitor_Notice_Black_List pkt;
    pkt.m_dbid = *(unsigned int*)((char*)this + 0);
    pkt.m_idByChannel = *(unsigned int*)((char*)this + 0x20);
    unsigned char count = 0;
    GetBlackList(count, pkt.m_charNos);
    pkt.m_count = count;
    SendTcpGameserver(&pkt);
}
unsigned int CUser::GetMemberEnterCallerId()
{
    return *(unsigned int*)((char*)this + 0x1c);
}
char CUser::CheckPrevCallMemberEnter()
{
    if (*(char*)((char*)this + 0x1a) < 1)
    {
        return 0;
    }
    if (*(int*)((char*)this + 0x1c) == 0)
    {
        return 0;
    }
    return 1;
}
void CUser::ResetRequestMemberEnter()
{
    *(unsigned int*)((char*)this + 0x1c) = 0;
    *(char*)((char*)this + 0x1a) = 0;
}
char CUser::RecordCallMemberEnter(unsigned int callerId, unsigned short count)
{
    char old = *(char*)((char*)this + 0x1a);
    if (old == 0)
    {
        *(unsigned int*)((char*)this + 0x1c) = callerId;
        *(char*)((char*)this + 0x1a) = (char)count;
    }
    return old == 0;
}
unsigned int CUser::GetMemberDBFlag()
{
    if (*(int*)((char*)this + 0x14) == 0)
    {
        return 0;
    }
    return ((CMember*)*(int*)((char*)this + 0x14))->GetMemberDBFlag();
}
int CUser::GetConnLowerMemberCnt()
{
    if (*(int*)((char*)this + 0x14) == 0)
    {
        return 0;
    }
    CMember* member = (CMember*)*(int*)((char*)this + 0x14);
    if (member->GetMemberKey() == 0 || (GetMemberDBFlag() & 4) == 0)
    {
        return 0;
    }
    return member->GetConnLowerMemberCnt();
}
CMember* CUser::GetMember()
{
    return *(CMember**)((char*)this + 0x14);
}
void CUser::SetMemberRegisterFlag(bool flag)
{
    if (*(int*)((char*)this + 0x14) != 0)
    {
        ((CMember*)*(int*)((char*)this + 0x14))->SetMemberRegisterFlag(flag);
    }
}
char CUser::IsAbleToRegisterMember()
{
    if (*(int*)((char*)this + 0x14) == 0)
    {
        return 1;
    }
    return ((CMember*)*(int*)((char*)this + 0x14))->IsAbleToRegisterMember();
}
unsigned int CUser::GetMemberKey()
{
    if (*(int*)((char*)this + 0x14) == 0)
    {
        return 0;
    }
    return ((CMember*)*(int*)((char*)this + 0x14))->GetMemberKey();
}

void* CMember::operator new(unsigned int size) { return ::operator new(size); }
CMember::CMember(unsigned int key, CMemberManager* mgr)
{
    m_key = key;
    m_flag = 0;
    memset((char*)this + 6, 0, 0x1ae);
    m_memberManager = mgr;
    m_state1b8 = 1;
    m_registerTime = 0;
    m_dayHourTime = 0;
}
CMember::~CMember()
{
    m_key = 0;
    m_flag = 0;
    m_memberManager = 0;
    memset((char*)this + 6, 0, 0x1ae);
    m_registerTime = 0;
    m_dayHourTime = 0;
    m_state1b8 = 0;
}
void CMember::QueryMember(CServerHandler* handler) {}
unsigned int* CMember::GetMemberDBInfoW() { return 0; }
void CMember::NoticeMemberLogin_Out(CUser* user, char flag)
{
    bool invalid = (user == 0 || user->GetGameServer() == 0);
    if (!invalid && (m_flag & 4) != 0)
    {
        Packet_Monitor_Notice_Member_Member_Login_out pkt;
        CUser* member = m_memberManager->FindMemberUser(m_memberKey);
        if (member != 0)
        {
            member->GetUniqCharNo();
            if (user->IsBlackUser(0) != 1)
            {
                pkt.m_flag = flag;
                pkt.m_idByChannel = member->GetIdByChannel();
                pkt.m_uniqCharNo = member->GetUniqCharNo();
                pkt.m_channelNo =
                    ((CServerInterface*)user->GetGameServer())->GetChannelNo();
                pkt.m_type = 2;
                memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
                pkt.m_expLevel = 0;
                member->SendTcpGameserver(&pkt);
            }
            if (flag == 1)
            {
                member->GetUniqCharNo();
                if (user->IsBlackUser(0) != 1)
                {
                    pkt.m_flag = flag;
                    pkt.m_idByChannel = user->GetIdByChannel();
                    pkt.m_uniqCharNo = user->GetUniqCharNo();
                    pkt.m_channelNo =
                        (member->GetGameServer() != 0)
                            ? ((CServerInterface*)member->GetGameServer())->GetChannelNo()
                            : 0xff;
                    pkt.m_type = 1;
                    memcpy(pkt.m_charName, member->GetCharName(), 0x1d);
                    pkt.m_expLevel = user->GetUpperMemberExpLevel();
                    pkt.m_uniqCharNo2 = member->GetUniqCharNo();
                    user->SendTcpGameserver(&pkt);
                }
            }
        }
        unsigned int count = (unsigned int)m_count2d;
        if (count != 0)
        {
            for (unsigned int i = 0; i < count; i++)
            {
                CUser* m = m_memberManager->FindMemberUser(m_memberKey);
                if (m != 0)
                {
                    m->GetUniqCharNo();
                    if (user->IsBlackUser(0) != 1)
                    {
                        pkt.m_flag = flag;
                        pkt.m_idByChannel = m->GetIdByChannel();
                        pkt.m_uniqCharNo = m->GetUniqCharNo();
                        pkt.m_channelNo =
                            ((CServerInterface*)user->GetGameServer())->GetChannelNo();
                        pkt.m_type = 1;
                        memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
                        pkt.m_expLevel = m->GetUpperMemberExpLevel();
                        pkt.m_uniqCharNo2 = user->GetUniqCharNo();
                        m->SendTcpGameserver(&pkt);
                    }
                }
            }
        }
    }
}
char CMember::CheckDailyScheduleTimeOver(int day, long time)
{
    return (char)CheckDailyScheduleTimeOver(day, time);
}
char CMember::CheckDayHourScheduleTimeOver(int day, int hour, long time)
{
    return (char)CheckDayHourScheduleTimeOver(day, hour, time);
}
void CMember::SetMemberRegisterFlag(bool flag)
{
    m_state1b8 = flag ? 1 : 0;
}
char CMember::IsAbleToRegisterMember()
{
    return m_state1b8;
}
unsigned int CMember::GetMemberKey()
{
    return m_key;
}
void CMember::CheckMemberRegisterFlag()
{
    bool flag = CheckDailyScheduleTimeOver(6, m_registerTime);
    SetMemberRegisterFlag(flag);
    if (IsAbleToRegisterMember())
    {
        flag = CheckDayHourScheduleTimeOver(3, 6, m_dayHourTime);
        SetMemberRegisterFlag(flag);
    }
    if (!IsAbleToRegisterMember())
    {
        tm* t1 = localtime((time_t*)&m_registerTime);
        int sec1 = t1->tm_sec, min1 = t1->tm_min, hour1 = t1->tm_hour;
        int mday1 = t1->tm_mday, mon1 = t1->tm_mon, year1 = t1->tm_year;
        tm* t2 = localtime((time_t*)&m_dayHourTime);
        int sec2 = t2->tm_sec, min2 = t2->tm_min, hour2 = t2->tm_hour;
        int mday2 = t2->tm_mday, mon2 = t2->tm_mon, year2 = t2->tm_year;
        DNF_LOG_SCOPE_LINE(0x336,"./log/MemberModify",
            "MKey(%d)\tRF(0)\tRT(%04d.%02d.%02d %02d:%02d:%02d)\tDT(%04d.%02d.%02d %02d:%02d:%02d)",
            GetMemberKey(), year1 + 0x76c, mon1 + 1, mday1, hour1, min1, sec1, year2 + 0x76c,
            mon2 + 1, mday2, hour2, min2, sec2);
    }
}
char CMember::IsEmpty()
{
    return 0;
}
void CMember::NoticeChatMsgToMemberMembersHyperLink(char* msg, int len, unsigned char count,
                                                    const hyperlink_item_info* items, CUser* user)
{
    if (len < 0x100 && (m_flag & 4) != 0 && !IsEmpty())
    {
        Packet_Monitor_Member_Chat_ToUser_Hyper_Link pkt;
        memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
        pkt.m_msgLen = (unsigned char)len;
        memcpy(pkt.m_msg, msg, len);
        pkt.m_itemCount = count;
        for (int i = 0; i < (int)count; i++)
        {
            memcpy(pkt.m_items + i * 0x68, (char*)items + i * 0x68, 0x68);
        }
        unsigned short totalSize = (unsigned short)len + 0x16a;
        CUser* member = m_memberManager->FindMemberUser(m_memberKey);
        if (member != 0)
        {
            pkt.m_idByChannel = member->GetIdByChannel();
            pkt.m_uniqCharNo = member->GetUniqCharNo();
            member->SendToGameserver((char*)&pkt, totalSize);
        }
        pkt.m_idByChannel = user->GetIdByChannel();
        pkt.m_uniqCharNo = user->GetUniqCharNo();
        user->SendToGameserver((char*)&pkt, totalSize);
        unsigned int count2 = (unsigned int)m_count2d;
        if (count2 != 0)
        {
            for (unsigned int i = 0; i < count2; i++)
            {
                CUser* m = m_memberManager->FindMemberUser(m_memberKey);
                if (m != 0)
                {
                    pkt.m_idByChannel = m->GetIdByChannel();
                    pkt.m_uniqCharNo = m->GetUniqCharNo();
                    m->SendToGameserver((char*)&pkt, totalSize);
                }
            }
        }
    }
}
void CMember::NoticeChatMsgToMemberMembers(char* msg, int len, CUser* user)
{
    if (len < 0x100 && (m_flag & 4) != 0 && !IsEmpty())
    {
        Packet_Monitor_Member_Chat_ToUser pkt;
        memcpy(pkt.m_charName, user->GetCharName(), 0x1d);
        pkt.m_msgLen = (unsigned char)len;
        memcpy(pkt.m_msg, msg, len);
        unsigned short totalSize = (unsigned short)len + 0x31;
        CUser* member = m_memberManager->FindMemberUser(m_memberKey);
        if (member != 0)
        {
            pkt.m_idByChannel = member->GetIdByChannel();
            pkt.m_uniqCharNo = member->GetUniqCharNo();
            member->SendToGameserver((char*)&pkt, totalSize);
        }
        pkt.m_idByChannel = user->GetIdByChannel();
        pkt.m_uniqCharNo = user->GetUniqCharNo();
        user->SendToGameserver((char*)&pkt, totalSize);
        unsigned int count = (unsigned int)m_count2d;
        if (count != 0)
        {
            for (unsigned int i = 0; i < count; i++)
            {
                CUser* m = m_memberManager->FindMemberUser(m_memberKey);
                if (m != 0)
                {
                    pkt.m_idByChannel = m->GetIdByChannel();
                    pkt.m_uniqCharNo = m->GetUniqCharNo();
                    m->SendToGameserver((char*)&pkt, totalSize);
                }
            }
        }
    }
}
void CMember::LoadMember(STMemberDBInfo& info, short level, unsigned int a, unsigned int b)
{
}
int CMember::IsThereUpper() const { return *(int*)((char*)this + 6) != 0; }
int CMember::GetUpperMember_CharId() const
{
    if ((m_flag & 4) == 0)
    {
        return 0;
    }
    if (IsThereUpper() == 0)
    {
        return 0xffffffff;
    }
    return *(int*)((char*)this + 6);
}
int CMember::FindLowerMember(unsigned int charNo) const
{
    unsigned int count = (unsigned int)m_count2d;
    if (count != 0)
    {
        const char* p = (const char*)this + 0x2e;
        while (count != 0)
        {
            count--;
            if (*(unsigned int*)p == charNo)
            {
                return 1;
            }
            p += 0x27;
        }
    }
    return 0;
}
unsigned int CMember::GetLowerMemberCount() const
{
    return (unsigned int)*(unsigned char*)((char*)this + 0x2d);
}
unsigned int* CMember::GetLowerMember_Proxy() const
{
    return (unsigned int*)((char*)this + 0x2e);
}
int CMember::IncConnUpperMemberExp(unsigned int maxExp)
{
    *(int*)((char*)this + 0x29) = *(int*)((char*)this + 0x29) + 1;
    if (maxExp < *(unsigned int*)((char*)this + 0x29))
    {
        *(int*)((char*)this + 0x29) = *(int*)((char*)this + 0x29) - 1;
        return 0;
    }
    return *(int*)((char*)this + 0x29);
}
int CMember::IncConnLowerMemberExp(unsigned int uCharNo, unsigned int maxExp)
{
    for (int i = 0; i <= 9; i++)
    {
        unsigned int* proxy = (unsigned int*)((char*)this + i * 0x27 + 0x2e);
        if (*proxy == uCharNo)
        {
            *(int*)((char*)this + i * 0x27 + 0x51) =
                *(int*)((char*)this + i * 0x27 + 0x51) + 1;
            if (maxExp < *(unsigned int*)((char*)this + i * 0x27 + 0x51))
            {
                *(int*)((char*)this + i * 0x27 + 0x51) =
                    *(int*)((char*)this + i * 0x27 + 0x51) - 1;
            }
            return 0;
        }
    }
    return 0;
}
int CMember::IncConnLowerMemberExp(int index, unsigned int uCharNo, unsigned int maxExp)
{
    if (index < (int)(unsigned int)(unsigned char)*(char*)((char*)this + 0x2d))
    {
        unsigned int* proxy = (unsigned int*)((char*)this + index * 0x27 + 0x2e);
        if (*proxy == uCharNo)
        {
            *(int*)((char*)this + index * 0x27 + 0x51) =
                *(int*)((char*)this + index * 0x27 + 0x51) + 1;
            if (maxExp < *(unsigned int*)((char*)this + index * 0x27 + 0x51))
            {
                *(int*)((char*)this + index * 0x27 + 0x51) =
                    *(int*)((char*)this + index * 0x27 + 0x51) - 1;
                return 0;
            }
            return *(int*)((char*)this + index * 0x27 + 0x51);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x28c,"./log/Member2Except",
                "CMember::IncConnLowerMemberExp  ,  stMemberLowerProxy.m_uCharId(%d) != "
                "uCharNo(%d)",
                *proxy, uCharNo);
            return 0;
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x284,"./log/Member2Except",
            "CMember::IncConnLowerMemberExp  ,  index(%d) >= "
            "m_stMemberDBInfo.m_lowerCnt(%d)",
            index, (unsigned int)(unsigned char)*(char*)((char*)this + 0x2d));
        return 0;
    }
}
void CMember::NoticeLevelUpToLowers(unsigned int level)
{
    unsigned char lowerCnt = *(unsigned char*)((char*)this + 0x2d);
    if (lowerCnt != 0)
    {
        Packet_Monitor_Notice_MemberExp_LevelUp pkt;
        for (int i = 0; i < lowerCnt; i++)
        {
            unsigned int charId = *(unsigned int*)((char*)this + i * 0x27 + 0x2e);
            CUser* user = m_memberManager->FindMemberUser(charId);
            if (user != 0)
            {
                pkt.m_idByChannel = user->GetIdByChannel();
                pkt.m_uniqCharNo = user->GetUniqCharNo();
                pkt.m_level = level;
                user->SendToGameserver((char*)&pkt, 0x13);
            }
        }
    }
}
unsigned int* CMember::GetUpperMember_Proxy()
{
    return (unsigned int*)((char*)this + 6);
}
unsigned int* CMember::GetUpperMember_Proxy() const
{
    if ((*(unsigned short*)((char*)this + 4) & 4) && IsThereUpper())
    {
        return (unsigned int*)((char*)this + 6);
    }
    return 0;
}
void CMember::SetMemberDeleteTime(unsigned int t) { m_dayHourTime = t; }
void CMember::DebugPrintMemberMember(char* out) {}
void CMember::SetMemberRegisterTime(unsigned int t) { m_registerTime = t; }
void CMember::SetMemberDBFlag(unsigned short flag) { m_flag = (unsigned short)(m_flag | flag); }
unsigned short CMember::GetMemberDBFlag() { return m_flag; }
unsigned int CMember::GetUpperMemberExpLevel()
{
    if (m_memberManager != 0)
    {
        m_memberManager->GetMemberExpLevel(*(unsigned int*)((char*)this + 0x29));
    }
    return 0;
}
int CMember::GetConnLowerMemberCnt()
{
    int cnt = 0;
    if (m_count2d != 0)
    {
        for (int i = 0; i < (int)(unsigned int)m_count2d; i++)
        {
            if (m_memberManager->FindMemberUser(
                    *(unsigned int*)((char*)this + 0x2e + i * 0x27)) != 0)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int CMember::InsertUpperMember(unsigned int charNo, unsigned char level, const char* name,
                               bool flag)
{
    if (IsThereUpper() == 0)
    {
        *(unsigned char*)((char*)this + 0xa) = level;
        *(unsigned int*)((char*)this + 6) = charNo;
        memcpy((char*)this + 0xb, name, 0x1d);
        if (flag)
        {
            SetMemberRegisterTime((unsigned int)time(0));
        }
        return 1;
    }
    return 0;
}
int CMember::InsertLowerMember(unsigned int charNo, unsigned char level, const char* name,
                               bool flag)
{
    unsigned int n = (unsigned int)m_count2d;
    if (n + 1 < 0xb)
    {
        *(unsigned char*)((char*)this + n * 0x27 + 0x32) = level;
        *(unsigned int*)((char*)this + n * 0x27 + 0x2e) = charNo;
        memcpy((char*)this + n * 0x27 + 0x33, name, 0x1d);
        if (flag)
        {
            SetMemberRegisterTime((unsigned int)time(0));
        }
        m_count2d++;
        return 1;
    }
    return 0;
}
char CMember::IsAlreadyMemberMember(unsigned int charNo) const
{
    if (GetUpperMember_CharId() == (int)charNo)
    {
        return 1;
    }
    return FindLowerMember(charNo) != 0;
}
void CMember::DeleteUpperMember(unsigned int charNo, bool flag)
{
    memset((char*)this + 6, 0, 0x27);
    if (flag)
    {
        SetMemberDeleteTime(time(0));
    }
}
void CMember::DeleteLowerMember(unsigned int charNo, bool flag)
{
    unsigned int count = (unsigned int)m_count2d;
    if (count != 0)
    {
        char* p = (char*)this + 0x2e;
        unsigned char idx = 0;
        while (count != 0)
        {
            count--;
            if (*(unsigned int*)p == charNo)
            {
                memcpy(p, p + 0x27, (unsigned int)(~(unsigned char)idx) * 0x27 + 0x186);
                m_count2d--;
                if (flag)
                {
                    SetMemberDeleteTime(time(0));
                }
                break;
            }
            p += 0x27;
            idx++;
        }
    }
}
unsigned char* CMember::GetMemberDBInfo() const
{
    return (unsigned char*)((char*)this + 6);
}
int CMember::DeleteMemberByName(char* name, unsigned int& outKey)
{
    unsigned int* proxy = GetUpperMember_Proxy();
    if (proxy != 0 && strcmp((char*)proxy + 5, name) == 0)
    {
        outKey = *proxy;
        memset((char*)this + 6, 0, 0x27);
        SetMemberDeleteTime(time(0));
        return 1;
    }
    char* p = (char*)this + 0x2e;
    int idx = 0;
    unsigned int count = (unsigned int)m_count2d;
    if (count == 0)
    {
        return 0;
    }
    while (count != 0)
    {
        count--;
        if (strcmp(p + 5, name) == 0)
        {
            outKey = *(unsigned int*)p;
            memcpy(p, p + 0x27, (unsigned int)(~(unsigned char)idx) * 0x27 + 0x186);
            m_count2d--;
            SetMemberDeleteTime(time(0));
            return 2;
        }
        p += 0x27;
        idx++;
    }
    return 3;
}

CMemberConfig::CMemberConfig()
{
    for (int i = 0; i < 10; i++)
    {
        m_table[i].m_a = 0;
        m_table[i].m_b = 0;
        m_table[i].m_c = 0;
    }
}
CMemberConfig::~CMemberConfig() {}
void CMemberConfig::Load_Table(const std::string& path)
{
    int rc = Load_Txt_Table_Data(path.c_str(), 10);
    if (0 < rc && rc < 0xb)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0x36, "./log/TableError", "Member Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CMemberConfig::Load_Table() Exception Break!");
}
int CMemberConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tokens[3];
    if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 3) == 3 && idx < 10)
    {
        ST_MemberConfig* info = &m_table[idx];
        info->m_a = atoi(tokens[0]);
        info->m_b = atoi(tokens[1]);
        info->m_c = atoi(tokens[2]);
        return 1;
    }
    return 0;
}
ST_MemberConfig* CMemberConfig::GetMemberInfo()
{
    return m_table;
}

CMemberExpTbl::CMemberExpTbl()
{
    *(char*)((char*)this + 4) = 0;
    memset((char*)this + 8, 0, 0x2c);
}
CMemberExpTbl::~CMemberExpTbl() {}
void CMemberExpTbl::Load_Table(const std::string& path) {}
int CMemberExpTbl::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* token = 0;
    bool ok = false;
    int tmp = 0;
    if (DNFFLib::ExplodeString(line, "\t\"", &token, 1) == 1 && tmp == 0)
    {
        ok = true;
    }
    if (ok && idx < 0xb)
    {
        *(int*)((char*)this + idx * 4 + 8) = atoi(token);
        return 1;
    }
    return 0;
}
int CMemberExpTbl::GetMemberExpLevel(unsigned int exp)
{
    int local_c = (int)(unsigned char)*(char*)((char*)this + 4) - 1;
    int local_8 = 1;
    if (exp < *(unsigned int*)((char*)this + local_c * 4 + 8))
    {
        if (exp == 0)
        {
            local_8 = 1;
        }
        else
        {
            char* p = (char*)this + 8;
            while (true)
            {
                bool b = local_c != 0;
                local_c = local_c - 1;
                if (!b || !(exp <= *(unsigned int*)p || *(unsigned int*)(p + 4) < exp))
                {
                    break;
                }
                local_8 = local_8 + 1;
                p = p + 4;
            }
        }
    }
    else
    {
        local_8 = (int)(unsigned char)*(char*)((char*)this + 4) - 1;
    }
    return local_8;
}
unsigned int CMemberExpTbl::GetMaxMemberExp()
{
    return *(unsigned int*)((char*)this +
                            ((unsigned int)(unsigned char)*(char*)((char*)this + 4) - 1) * 4 +
                            8);
}
unsigned char CMemberExpTbl::IsMemberExpLevelUp(unsigned int exp)
{
    unsigned int count = (unsigned int)(unsigned char)*(char*)((char*)this + 4);
    if (exp == 1)
    {
        return 0;
    }
    if (exp < *(unsigned int*)((char*)this + (count - 1) * 4 + 8))
    {
        char* p = (char*)this + 0xc;
        while (count = count - 1, count != 0)
        {
            if (exp - 1 == *(unsigned int*)p)
            {
                return 1;
            }
            if (exp < *(unsigned int*)p)
            {
                break;
            }
            p = p + 4;
        }
        return 0;
    }
    return 1;
}
void CMemberExpTbl::GetMemberExpLevel(unsigned int exp, unsigned int& lo, unsigned int& hi,
                                      unsigned char& lv)
{
    char* p = (char*)this + 8;
    unsigned char count = *(unsigned char*)((char*)this + 4);
    unsigned char l = 1;
    if (exp == 0)
    {
        lo = *(unsigned int*)p;
        hi = *(unsigned int*)((char*)this + 0xc);
        lv = 1;
    }
    else
    {
        while (count != 0)
        {
            count--;
            if (*(unsigned int*)p < exp && exp <= *(unsigned int*)(p + 4))
            {
                lo = *(unsigned int*)p;
                hi = *(unsigned int*)(p + 4);
                lv = l;
                return;
            }
            l++;
            p += 4;
        }
    }
}

CApplication* CPacketTranslater::m_pclApp = 0;
void CPacketTranslater::attach(CApplication* app) { m_pclApp = app; }
void CPacketTranslater::SendRequestMemberEnterResult(CUser* user, unsigned char result,
                                                     const char* name)
{
    Packet_Monitor_Request_Member_Enter_To_Requester pkt;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_result = result;
    memcpy(pkt.m_name, name, 0x1d);
    user->SendTcpGameserver(&pkt);
}
void CPacketTranslater::SendNoticeMemberEnterPacketOk(CUser* user, CUser* other, unsigned char a,
                                                      unsigned char b, unsigned char c,
                                                      unsigned char d, unsigned char e)
{
    Packet_Monitor_Notice_Member_Enter_Ok pkt;
    pkt.m_fieldA = a;
    pkt.m_fieldB = b;
    pkt.m_fieldC = c;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_fieldD = d;
    memcpy(pkt.m_name, other->GetCharName(), 0x1d);
    pkt.m_fieldE = e;
    if (b == 1)
    {
        pkt.m_extraCharNo = other->GetUniqCharNo();
    }
    user->SendTcpGameserver(&pkt);
}
void CPacketTranslater::SendNoticeMemberEnterPacketReply(CUser* user, CUser* other,
                                                         unsigned char a, unsigned char b,
                                                         unsigned char c, unsigned char d,
                                                         unsigned char e)
{
    Packet_Monitor_Member_Enter_Reply_ToResponser pkt;
    if (a == 2)
    {
        pkt.m_fieldB = 3;
    }
    else
    {
        pkt.m_fieldB = b;
    }
    pkt.m_fieldA = a;
    pkt.m_fieldC = c;
    pkt.m_idByChannel = user->GetIdByChannel();
    pkt.m_uniqCharNo = user->GetUniqCharNo();
    pkt.m_fieldD = d;
    memcpy(pkt.m_name, other->GetCharName(), 0x1d);
    pkt.m_fieldE = e;
    if (b == 1)
    {
        pkt.m_extraCharNo = other->GetUniqCharNo();
    }
    user->SendTcpGameserver(&pkt);
}
void CPacketTranslater::SendRequestMemberDeleteResult(CUser* user, unsigned char result,
                                                      const char* name)
{
    Packet_Monitor_Member_Secede pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = user->GetIdByChannel();
    *(unsigned int*)((char*)&pkt + 0xe) = user->GetUniqCharNo();
    *(unsigned char*)((char*)&pkt + 0x12) = result;
    memcpy((char*)&pkt + 0x13, name, 0x1d);
    user->SendTcpGameserver(&pkt);
}
void CPacketTranslater::OnLogin(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            unsigned int channel =
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x12);
            CTcpGameServer* tcpGs =
                (CTcpGameServer*)m_pclApp->FindTcpGameServer(channel);
            if (tcpGs != 0)
            {
                CServerInterface* gs =
                    (CServerInterface*)m_pclApp->FindGameServer((int)channel);
                if (gs == 0)
                {
                    char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 0);
                    DNF_LOG_SCOPE_LINE(0x129,"./log/Channel", "Not Found M_ID(%s) Channel No(%d)", dbid,
                        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x12));
                }
                else
                {
                    CLoginLogoutStatistics* stats =
                        (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                    if (stats != 0)
                    {
                        stats->CountNumOfLoginout((ENUM_LOGIN_LOGOUT)0);
                    }
                    char* pktBuf = tcpGs->makePacketHeader(1000, 0x33);
                    char* outBuf = 0;
                    if (pktBuf != 0)
                    {
                        outBuf = pktBuf;
                        memcpy(pktBuf + 10, (char*)pkt + 0xa, 0x29);
                    }
                    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
                    CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xe));
                    if (user == 0)
                    {
                        if (userMgr->FindProhibitUser(
                                *(unsigned int*)((char*)pkt + 0xe)) == 0)
                        {
                            user = userMgr->CreateUser(
                                *(unsigned int*)((char*)pkt + 0xe), 0, "",
                                *(int*)((char*)pkt + 0xa), (CGameServer*)gs);
                            user->SetSex(*(unsigned char*)((char*)pkt + 0x23));
                            DNF_LOG_SCOPE_LINE(0x198,"./log/User", "OnLogin - SetSex : %d",
                                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x23));
                            user->SetSsn((char*)pkt + 0x2c);
                            user->SetTcpGameServer(tcpGs);
                            outBuf[0x23] = 1;
                            char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 0);
                            CMyFileLog log2("OnLogin", 0x1a5);
                            log2("./log/User",
                                 "Current user count : %d\tConnected User DB ID : %s\n",
                                 userMgr->Size(), dbid);
                            CLoginLogoutStatistics* stats2 =
                                (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                            if (stats2 != 0)
                            {
                                stats2->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)0,
                                                              (int)userMgr->Size());
                            }
                            CMemoryCashManager* cash =
                                (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                            if (cash->QueryCashMemoryBlackList(user) == 1)
                            {
                                user->SendBlackList();
                            }
                            else
                            {
                                RequestBlackListToDBMW(
                                    *(unsigned int*)((char*)pkt + 0xe));
                            }
                        }
                        else
                        {
                            if (pktBuf != 0)
                            {
                                outBuf[0x23] = 3;
                            }
                            unsigned int ch = gs->GetChannelNo();
                            char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 0);
                            DNF_LOG_SCOPE_LINE(400,"./log/User",
                                "PROHIBIT USER CONNECTED : m_ID(%s)\tChannel(%d)\n", dbid,
                                ch & 0xff);
                        }
                    }
                    else
                    {
                        CTcpGameServer* oldGs =
                            (CTcpGameServer*)user->GetTcpGameServer();
                        if (oldGs != 0)
                        {
                            char* oldBuf = oldGs->makePacketHeader(0x3ee, 0xe);
                            if (oldBuf != 0)
                            {
                                *(unsigned int*)(oldBuf + 10) =
                                    *(unsigned int*)((char*)pkt + 0xe);
                                oldGs->SendToGameServer(oldBuf);
                            }
                        }
                        unsigned int ch = gs->GetChannelNo();
                        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 1);
                        char* oldDbid = NumberToString(user->GetDBID(), 0);
                        DNF_LOG_SCOPE_LINE(0x17a,"./log/User",
                            "DOUBLE CONNECTED : Already User DB ID(%s)\tCurrent Connect User "
                            "DB ID(%s)\tChannel(%d)\n",
                            oldDbid, dbid, ch & 0xff);
                        if (pktBuf != 0)
                        {
                            outBuf[0x23] = 2;
                        }
                    }
                    if (pktBuf != 0)
                    {
                        outBuf[0x28] = 0;
                        outBuf[0x29] = 0;
                        outBuf[0x2a] = 0;
                        outBuf[0x2b] = 0;
                        outBuf[0x24] = 0;
                        outBuf[0x25] = 0;
                        outBuf[0x26] = 0;
                        outBuf[0x27] = 0;
                    }
                    exchange_server::CACHE_CHARACTER_TYPE cacheType;
                    if (exchange_server::GetInstanceCacheCharacterMgr()->GetCacheCharacter(
                            *(unsigned int*)((char*)pkt + 0xe), &cacheType) != 0 &&
                        pktBuf != 0)
                    {
                        *(unsigned int*)(outBuf + 0x28) =
                            (unsigned int)cacheType.m_field4;
                        *(unsigned int*)(outBuf + 0x24) =
                            (unsigned int)cacheType.m_field0;
                    }
                    if (tcpGs != 0 && outBuf != 0)
                    {
                        tcpGs->SendToGameServer(outBuf);
                    }
                }
            }
        }
        catch (CDNFException& e)
        {
            DNF_LOG_SCOPE_LINE(0x1ff, "%s", "CPacketTranslater::OnLogin() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            DNF_LOG_SCOPE_LINE(0x204, "%s", "CPacketTranslater::OnLogin() Exception Break");
        }
    }
}
void CPacketTranslater::OnLogout(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        return;
    }
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = m_pclApp->Get_MemberManager();
        CLoginLogoutStatistics* stats =
            (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
        if (stats != 0 && *(char*)((char*)pkt + 0x17) == 0)
        {
            stats->CountNumOfLoginout((ENUM_LOGIN_LOGOUT)6);
        }
        CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
            DNF_LOG_SCOPE_LINE(0x22d,"./log/User", "LOGOUT ERR : User DB ID(%s), F.O.C(%d), Ch(%d)", dbid,
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x17),
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
            return;
        }
        char* name = user->GetCharName();
        unsigned int memberKey = user->GetMemberKey();
        unsigned int charNo = user->GetUniqCharNo();
        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
        DNF_LOG_SCOPE_LINE(0x230,"./log/User",
            "LOGOUT : User DB ID(%s), Char No(%d), Member K(%d) , name(%s), F.O.C(%d), Ch(%d)",
            dbid, charNo, memberKey, name,
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x17),
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
        unsigned int memberKey2 = *(unsigned int*)((char*)pkt + 0x18);
        CMemoryCashManager* cash = (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
        CMember* member = memberMgr->FindMember(*(unsigned int*)((char*)pkt + 0xa));
        bool f1 = false;
        bool f2 = false;
        cash->InsertCashMemorySetCharacterObject(user, member, f1, f2);
        if (memberKey2 != 0)
        {
            memberMgr->MemberMemLogout(memberKey2, user, !f2);
        }
        if (user->GetUniqCharNo() != 0)
        {
            if (userMgr->DeleteUser_CharNo(user->GetUniqCharNo()) == 1)
            {
                user->GetUniqCharNo();
                m_pclApp->Remove_GM_id(user->GetUniqCharNo());
                unsigned int charNos[32];
                int n = user->GetBuddysCharNo(charNos);
                CBuddyRegisterManager* buddyReg =
                    (CBuddyRegisterManager*)((char*)m_pclApp + 0x300);
                for (int i = 0; i < n; i++)
                {
                    buddyReg->delBuddyRegister(charNos[i], user->GetUniqCharNo());
                }
                std::vector<unsigned int> vec;
                buddyReg->findBuddyRegister(user->GetUniqCharNo(), vec);
                for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end();
                     ++it)
                {
                    CUser* other = userMgr->FindUser_CharNo(*it);
                    if (other != 0)
                    {
                        other->SendNoticeBuddyInOut(
                            ((CServerInterface*)other->GetGameServer())->GetChannelNo(),
                            user->GetUniqCharNo(), user->GetCharName(),
                            (unsigned char)(user->IsBlackUser(*it) != 0), 0, 0);
                    }
                }
                exchange_server::CACHE_CHARACTER_TYPE cacheType;
                cacheType.m_field0 = *(int*)((char*)pkt + 0xf);
                cacheType.m_field4 = (int)(unsigned char)*(char*)((char*)pkt + 0xe);
                char* dbid2 = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
                CMyFileLog log2("OnLogout", 0x290);
                log2("./log/ExchangeServer", "CacheCharacter() (%s,%d,%d)\n", dbid2,
                     cacheType.m_field0, cacheType.m_field4);
                if (*(char*)((char*)pkt + 0x3a) != 0)
                {
                    exchange_server::GetInstanceCacheCharacterMgr()->CacheCharacter(
                        *(unsigned int*)((char*)pkt + 0xa), &cacheType);
                }
                CLoginLogoutStatistics* stats2 =
                    (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                if (stats2 != 0)
                {
                    stats2->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)4,
                                                  (int)userMgr->GetSizeOfCharnoUsers());
                }
            }
            userMgr->DeleteUser_CharName(user->GetCharName());
            user->ResetCharInfo(!f1);
        }
        if (*(char*)((char*)pkt + 0x17) != 0)
        {
            user->SetUserPosState(2);
            return;
        }
        CMemoryCashManager* cash2 = (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
        if (cash2->SetUserObject(user) == 1)
        {
            user->ResetBlackList(0);
        }
        else
        {
            user->ResetBlackList(1);
        }
        if (user->GetGameServer() != 0 &&
            ((CServerInterface*)user->GetGameServer())->GetChannelNo() ==
                (unsigned char)*(char*)((char*)pkt + 0xe))
        {
            if (userMgr->DeleteUser(user) != 1)
            {
                char* dbid3 = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
                CMyFileLog log3("OnLogout", 0x2c5);
                log3("./log/User",
                     "[NO USER] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",
                     dbid3, user->GetUniqCharNo(), user->GetCharName());
            }
        }
        else if (user->GetGameServer() != 0)
        {
            unsigned char alreadyCh =
                ((CServerInterface*)user->GetGameServer())->GetChannelNo();
            unsigned char logoutCh = (unsigned char)*(char*)((char*)pkt + 0xe);
            char* dbid4 = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
            CMyFileLog log4("OnLogout", 0x2cc);
            log4("./log/User",
                 "[LOGOUT SESSION MISMATCH] User DB ID : %s, Char No : %d , Already Ch(%d), "
                 "Logout Ch(%d)",
                 dbid4, user->GetUniqCharNo(), (unsigned int)alreadyCh,
                 (unsigned int)logoutCh);
        }
        CLoginLogoutStatistics* stats3 =
            (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
        if (stats3 != 0)
        {
            stats3->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)0, (int)userMgr->Size());
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x2eb, "%s", "CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnLogout() Exception Break");
        DNF_LOG_SCOPE_LINE(0x2f1, "%s", "CPacketTranslater::OnLogout() Exception Break");
    }
}
void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt)
{
    try
    {
        DNF_LOG_SCOPE_LINE(0x361,"./log/Reboot", "[GAME SERVER] Channel No : %d\n",
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnReplyUserInfo : m_pclApp == 0");
        }
        CGameServer* gs =
            (CGameServer*)m_pclApp->FindGameServer(
                (int)(unsigned char)*(char*)((char*)pkt + 0xb));
        if (gs == 0)
        {
            throw CDNFException("CPacketTranslater::OnReplyUserInfo : pclGameServer == 0");
        }
        CTcpGameServer* tcpGs =
            (CTcpGameServer*)m_pclApp->FindTcpGameServer(
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
        if (tcpGs != 0)
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            for (int i = 0;
                 i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa); i++)
            {
                char* entry = (char*)pkt + i * 0x4e + 0xc;
                if (*(int*)entry != 0)
                {
                    CUser* user = userMgr->FindUser(*(unsigned int*)entry);
                    if (user == 0)
                    {
                        user = userMgr->CreateUser(
                            *(unsigned int*)entry, *(unsigned int*)(entry + 4),
                            entry + 0x14, *(int*)(entry + 8), gs);
                        user->SetUserInfo_CharNo(
                            *(char*)(entry + 0x10), *(char*)(entry + 0x11),
                            *(short*)(entry + 0x12), *(unsigned int*)(entry + 4),
                            entry + 0x14);
                        user->SetSex(*(unsigned char*)(entry + 0x46));
                        user->SetSsn(entry + 0x47);
                        user->SetTcpGameServer(tcpGs);
                        CMemoryCashManager* cash =
                            (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                        if (cash->QueryCashMemoryBlackList(user) != 1)
                        {
                            RequestBlackListToDBMW(*(unsigned int*)entry);
                        }
                        if (*(int*)(entry + 0x32) != 0)
                        {
                            CMemoryCashManager* cash2 =
                                (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                            if (cash2->QueryCashMemoryMember(user) != 1)
                            {
                                ((CMemberManager*)((char*)m_pclApp + 0x2d0))
                                    ->MemerMemLogin(*(unsigned int*)(entry + 0x32), user);
                            }
                        }
                        CMemoryCashManager* cash3 =
                            (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                        if (cash3->QueryCashMemoryBuddyInfo(user) != 1)
                        {
                            user->QueryBuddyInfo(
                                (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0));
                        }
                    }
                    else
                    {
                        char* dbid = NumberToString(*(unsigned int*)entry, 0);
                        CMyFileLog log2("OnReplyUserInfo", 0x37a);
                        log2("./log/Except", "CPacketTranslater::OnReplyUserInfo() : %s\n", dbid);
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x3ac, "%s", "CPacketTranslater::OnReplyUserInfo() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnReplyUserInfo() Exception Break");
        DNF_LOG_SCOPE_LINE(0x3b2, "%s", "CPacketTranslater::OnReplyUserInfo() Exception Break");
    }
}
void CPacketTranslater::OnHeartBeat(PacketHeader* pkt)
{
    if (m_pclApp != 0 &&
        (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0) != 0)
    {
        try
        {
            CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
            unsigned char channel = *(unsigned char*)((char*)pkt + 0xa);
            if (channel == 0xc8)
            {
                handler->ResetDBHeartBeat();
                if (handler->IsConnectedDBServer() != 1)
                {
                    handler->SetDBConnectFlag(true);
                    handler->SendDBMWConnectionCheck();
                    DNF_LOG_SCOPE_LINE(0x318, "./log/DBHeartBeat", "DB Server Connection Complete!");
                }
            }
            else if (channel == 0 || 0xbe < channel)
            {
                DNF_LOG_SCOPE_LINE(0x341,"./log/Except", "[ERROR - HEART BEAT] Channel Index(%d) Over.",
                    (unsigned int)channel);
            }
            else
            {
                handler->ResetHeartBeat(channel);
                if (handler->IsConnectedGameServer(channel) != 1)
                {
                    handler->SetConnectFlag(channel, true);
                    Packet_Tcp_Server_Connect pkt2;
                    pkt2.m_channel = 0xc9;
                    CServerInterface* gs = handler->GetGameServer((unsigned int)channel);
                    if (gs == 0)
                    {
                        DNF_LOG_SCOPE_LINE(0x337,"./log/Except",
                            "CPacketTranslater::OnHeartBeat() => Channel Index : %d\n",
                            (unsigned int)channel);
                    }
                    else
                    {
                        gs->SendToServer((char*)&pkt2, 0xb);
                    }
                }
            }
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnHeartBeat() Exception Break : %s\n", e.what());
            DNF_LOG_SCOPE_LINE(0x348, "%s", "CPacketTranslater::OnHeartBeat() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            puts("CPacketTranslater::OnHeartBeat() Exception Break");
            DNF_LOG_SCOPE_LINE(0x34e, "%s", "CPacketTranslater::OnHeartBeat() Exception Break");
        }
    }
}
void CPacketTranslater::OnCharLogin(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
                DNF_LOG_SCOPE_LINE(0x457,"./log/User",
                    "[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : "
                    "%d\tname : %s\n",
                    dbid, *(unsigned int*)((char*)pkt + 0xf),
                    *(unsigned int*)((char*)pkt + 0x13),
                    (int)(char)*(char*)((char*)pkt + 0x17), (char*)pkt + 0x1f);
            }
            else
            {
                user->SetUserInfo_CharNo(
                    *(char*)((char*)pkt + 0x17), *(char*)((char*)pkt + 0x18),
                    *(short*)((char*)pkt + 0x19), *(unsigned int*)((char*)pkt + 0xf),
                    (char*)pkt + 0x1f);
                char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
                DNF_LOG_SCOPE_LINE(0x3cf,"./log/User",
                    "[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)"
                    "\tname(%s)\tCh No(%d)\treturn_user(%d)\n",
                    dbid, *(unsigned int*)((char*)pkt + 0xf),
                    *(unsigned int*)((char*)pkt + 0x13),
                    *(unsigned int*)((char*)pkt + 0x1b),
                    (int)(char)*(char*)((char*)pkt + 0x17), (char*)pkt + 0x1f,
                    (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe),
                    (int)(char)*(char*)((char*)pkt + 0x3e));
                user->SetUserPosState(3);
                CMemoryCashManager* cash =
                    (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                if (cash->QueryCashMemoryBuddyInfo(user) != 1)
                {
                    user->QueryBuddyInfo(
                        (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0));
                }
                std::vector<unsigned int> vec;
                ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                    ->findBuddyRegister(user->GetUniqCharNo(), vec);
                for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end();
                     ++it)
                {
                    CUser* other = userMgr->FindUser_CharNo(*it);
                    if (other != 0)
                    {
                        other->SendNoticeBuddyInOut(
                            ((CServerInterface*)user->GetGameServer())->GetChannelNo(),
                            user->GetUniqCharNo(), user->GetCharName(),
                            (unsigned char)(user->IsBlackUser(*it) != 0), 1,
                            *(char*)((char*)pkt + 0x3e));
                    }
                }
                if (*(int*)((char*)pkt + 0x1b) != 0)
                {
                    CMemoryCashManager* cash2 =
                        (CMemoryCashManager*)m_pclApp->Get_MemoryCashManager();
                    if (cash2->QueryCashMemoryMember(user) != 1)
                    {
                        ((CMemberManager*)((char*)m_pclApp + 0x2d0))
                            ->MemerMemLogin(*(unsigned int*)((char*)pkt + 0x1b), user);
                    }
                }
                if (userMgr->InsertUser_CharName((char*)pkt + 0x1f, user) != 1)
                {
                    char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
                    DNF_LOG_SCOPE_LINE(0x3fd,"./log/Except",
                        "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!", dbid,
                        (char*)pkt + 0x1f);
                }
                if (userMgr->InsertUser_CharNo(*(unsigned int*)((char*)pkt + 0xf), user) != 1)
                {
                    DNF_LOG_SCOPE_LINE(0x401,"./log/Except",
                        "uDBID(%d) uCharName(%s) is already exist at m_mapCharNoUsers!",
                        *(unsigned int*)((char*)pkt + 0xf), (char*)pkt + 0x1f);
                }
                user->GetDBID();
                ((CMemoryCashManager*)m_pclApp->Get_MemoryCashManager())
                    ->DeleteCashObjecct(user->GetDBID());
                CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
                stTowerRankElement_t elements[5];
                for (int i = 0; i < 5; i++)
                {
                    elements[i].m_job = 0;
                    elements[i].m_pad = 0;
                    elements[i].m_score = 0;
                }
                Packet_Request_Charac_Tower_Ranking rankPkt;
                *(unsigned int*)((char*)&rankPkt + 0xa) = user->GetIdByChannel();
                *(unsigned int*)((char*)&rankPkt + 0xe) =
                    *(unsigned int*)((char*)pkt + 0xf);
                char hasData = 0;
                for (int t = 0; t < 4; t++)
                {
                    unsigned int cnt =
                        tower->getRankData((unsigned int)(t + 1), user->GetCharName(), 5,
                                           elements);
                    for (unsigned int i = 0; i < cnt; i++)
                    {
                        *(unsigned int*)((char*)&rankPkt + 2 +
                                         ((unsigned int)(unsigned char)elements[i].m_job * 4 +
                                          (unsigned int)t + 4) *
                                             2) =
                            (unsigned int)elements[i].m_score;
                        hasData = 1;
                    }
                }
                if (hasData != 0)
                {
                    user->SendToGameserver(
                        (char*)&rankPkt, *(unsigned short*)((char*)&rankPkt + 2));
                }
                time_t now = time(0);
                tm* pt = localtime(&now);
                Packet_Send_Time_Sync_For_Login syncPkt;
                syncPkt.m_dbid = user->GetDBID();
                syncPkt.m_idByChannel = user->GetIdByChannel();
                syncPkt.m_hour = (unsigned short)pt->tm_hour;
                syncPkt.m_min = (unsigned short)pt->tm_min;
                user->SendTcpGameserver(&syncPkt);
                CLoginLogoutStatistics* stats =
                    (CLoginLogoutStatistics*)m_pclApp->GetLoginLogoutStatistics();
                if (stats != 0)
                {
                    stats->CountNumOfOccupations((ENUM_LOGIN_LOGOUT)4,
                                                 (int)userMgr->GetSizeOfCharnoUsers());
                }
            }
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnCharLogin() Exception Break : %s\n", e.what());
            DNF_LOG_SCOPE_LINE(0x463, "%s", "CPacketTranslater::OnCharLogin() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            puts("CPacketTranslater::OnCharLogin() Exception Break");
            DNF_LOG_SCOPE_LINE(0x469, "%s", "CPacketTranslater::OnCharLogin() Exception Break");
        }
    }
}
void CPacketTranslater::OnNoticeOtherChannelChatMsg(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeBuddyChatMsg : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    if (*(char*)((char*)pkt + 0x1b) != 0 &&
        (unsigned char)*(char*)((char*)pkt + 0x1b) < 0x1e)
    {
        CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x1c);
        *(unsigned int*)((char*)pkt + 0x17) =
            target != 0 ? target->GetUniqCharNo() : 0xffffffff;
    }
    if (*(unsigned int*)((char*)pkt + 0x13) == 0 ||
        *(unsigned int*)((char*)pkt + 0x17) == 0 ||
        *(char*)((char*)pkt + 0x3a) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xb46,"./log/Except",
            "CPacketTranslater::OnNoticeOtherChannelChatMsg, sender(%d), receiver(%d), "
            "msglen(%d)",
            *(unsigned int*)((char*)pkt + 0x13), *(unsigned int*)((char*)pkt + 0x17),
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3a));
        throw CDNFException(
            "CPacketTranslater::OnNoticeOtherChannelChatMsg : packet->m_uSenderCharID &&  "
            "packet->m_uRecverCharID && packet->m_msgLen");
    }
    Packet_Monitor_Other_Channel_Chat_ToUser reply;
    reply.m_senderCharId = *(unsigned int*)((char*)pkt + 0xa);
    CUser* sender = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0x13));
    if (sender == 0)
    {
        return;
    }
    CUser* receiver = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0x17));
    if (receiver == 0)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        reply.m_type = 1;
        *(unsigned short*)((char*)&reply + 2) = 0x37;
        sender->SendToGameserver((char*)&reply, 0x37);
        return;
    }
    bool blocked = false;
    if (receiver->IsBlackUser(sender->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (!blocked && sender->IsBlackUser(receiver->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (blocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 2;
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        *(unsigned short*)((char*)&reply + 2) = 0x37;
        sender->SendToGameserver((char*)&reply, 0x37);
        return;
    }
    if (m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 0)
    {
        m_pclApp->AddChattableUserWithGM(sender->GetUniqCharNo(), receiver->GetUniqCharNo());
    }
    bool gmBlocked = false;
    if (m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 0)
    {
        if (m_pclApp->isAbleUserChatWithGM(receiver->GetUniqCharNo(),
                                           sender->GetUniqCharNo()) != 1)
        {
            gmBlocked = true;
        }
    }
    if (gmBlocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 3;
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        *(unsigned short*)((char*)&reply + 2) = 0x37;
        sender->SendToGameserver((char*)&reply, 0x37);
    }
    else
    {
        memcpy(reply.m_name, sender->GetCharName(), 0x1d);
        reply.m_idByChannel = receiver->GetIdByChannel();
        reply.m_uniqCharNo = receiver->GetUniqCharNo();
        reply.m_msgLen = *(unsigned char*)((char*)pkt + 0x3a);
        memcpy(reply.m_msg, (char*)pkt + 0x3b,
               (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3a));
        *(unsigned short*)((char*)&reply + 2) =
            (unsigned short)((unsigned char)*(char*)((char*)pkt + 0x3a) + 0x37);
        receiver->SendToGameserver((char*)&reply,
                                   *(unsigned short*)((char*)&reply + 2));
    }
}
void CPacketTranslater::OnCeraUpdate(PacketHeader* pkt)
{
    CUser* user =
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
            *(unsigned int*)((char*)pkt + 0xa));
    if (user != 0)
    {
        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
        DNF_LOG_SCOPE_LINE(0x47f, "./log/User", "Cera Payed User , DB ID : %s\n", dbid);
        void* gs = user->GetGameServer();
        if (gs == 0)
        {
            CMyFileLog log2("OnCeraUpdate", 0x48a);
            log2("./log/Except", "CPacketTranslater::OnCeraUpdate : pUser->GetGameServer() == 0",
                 dbid);
        }
        else
        {
            ((CServerInterface*)gs)->SendToServer((char*)pkt, 0xe);
        }
    }
}
void CPacketTranslater::OnEventItemUpdate(PacketHeader* pkt)
{
    try
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        CServerInterface* gs = 0;
        if (user == 0)
        {
            for (int i = 0; i < 0xff; i++)
            {
                gs = (CServerInterface*)m_pclApp->FindGameServer(i);
                if (gs != 0 && gs->IsConnected() != 0)
                {
                    break;
                }
            }
            if (gs == 0)
            {
                char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
                DNF_LOG_SCOPE_LINE(0x4b0,"./log/User",
                    "Fail: Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: "
                    "%d][Stack: %d]\n",
                    dbid, *(unsigned int*)((char*)pkt + 0x12),
                    *(unsigned int*)((char*)pkt + 0xe),
                    *(unsigned int*)((char*)pkt + 0x16),
                    *(unsigned int*)((char*)pkt + 0x1a));
                return;
            }
        }
        else
        {
            gs = (CServerInterface*)user->GetGameServer();
        }
        unsigned char channel = gs->GetChannelNo();
        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
        DNF_LOG_SCOPE_LINE(0x4b7,"./log/User",
            "Event User DB ID : %s [EventType: %d][CharacNo: %d][ItemID: %d][Stack: "
            "%d][TableID: %d][Channel No: %d]\n",
            dbid, *(unsigned int*)((char*)pkt + 0x12),
            *(unsigned int*)((char*)pkt + 0xe), *(unsigned int*)((char*)pkt + 0x16),
            *(unsigned int*)((char*)pkt + 0x1a), *(unsigned int*)((char*)pkt + 0x1e),
            (unsigned int)channel);
        if (gs != 0)
        {
            gs->SendToServer((char*)pkt, 0x22);
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventItemUpdate() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x4dd, "%s", "CPacketTranslater::OnEventItemUpdate() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventItemUpdate() Exception Break");
        DNF_LOG_SCOPE_LINE(0x4e3, "%s", "CPacketTranslater::OnEventItemUpdate() Exception Break");
    }
}
void CPacketTranslater::OnReplyQueryMember(PacketHeader* pkt)
{
    if (*(char*)((char*)pkt + 0xa) == 1)
    {
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        if (handler != 0)
        {
            char ok = ((CMemberManager*)((char*)m_pclApp + 0x2d0))
                          ->LoadMember(*(unsigned int*)((char*)pkt + 0xb),
                                       *(STMemberDBInfo*)((char*)pkt + 0x17),
                                       *(unsigned int*)((char*)pkt + 0xf),
                                       *(unsigned int*)((char*)pkt + 0x13), handler);
            if (ok != 1)
            {
                DNF_LOG_SCOPE_LINE(0x4e5,"./log/MemberMember",
                    "CHECK MEMBER ID: CPacketTranslater::OnReplyQueryMember()\t"
                    "m_clMemberManager.LoadMember()\tmember id(%d)",
                    *(unsigned int*)((char*)pkt + 0xb));
            }
        }
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x4eb,"./log/Except",
            "[DB ERROR]CPacketTranslater::OnReplyQueryMember() packet->bSuccess : %d\n",
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa));
    }
}
void CPacketTranslater::OnRequestMemberEnter(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        return;
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
    CUser* requester = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xe));
    if (requester == 0)
    {
        return;
    }
    CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x12);
    if (target == 0)
    {
        SendRequestMemberEnterResult(requester, '1', (char*)pkt + 0x12);
        return;
    }
    if (memberMgr->IsAlreadyMemberMember(*(unsigned int*)((char*)pkt + 0xe),
                                         target->GetUniqCharNo()) != 0)
    {
        SendRequestMemberEnterResult(requester, '2', (char*)pkt + 0x12);
        DNF_LOG_SCOPE_LINE(0x599,"./log/MemberModify", "Err Already Member : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    if (requester->IsAbleToRegisterMember() != 1 || target->IsAbleToRegisterMember() != 1)
    {
        SendRequestMemberEnterResult(requester, '7', (char*)pkt + 0x12);
        DNF_LOG_SCOPE_LINE(0x5a2,"./log/MemberModify",
            "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",
            requester->GetUniqCharNo(), requester->IsAbleToRegisterMember(),
            target->GetUniqCharNo(), target->IsAbleToRegisterMember());
        return;
    }
    if (requester->IsBlackUser(target->GetUniqCharNo()) != 0)
    {
        SendRequestMemberEnterResult(requester, '6', (char*)pkt + 0x12);
        DNF_LOG_SCOPE_LINE(0x5a9,"./log/MemberModify", "Err Member Register Black : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
    if (gm != 0 && gm->isGM(target->GetDBID()) != 0)
    {
        SendRequestMemberEnterResult(requester, 'Z', (char*)pkt + 0x12);
        DNF_LOG_SCOPE_LINE(0x5b4,"./log/MemberModify", "Err Member Register GM : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    CMember* requesterMember = memberMgr->FindMember(requester->GetUniqCharNo());
    CMember* targetMember = memberMgr->FindMember(target->GetUniqCharNo());
    if (target->GetMemberEnterCallerId() != 0)
    {
        SendRequestMemberEnterResult(requester, ')', (char*)pkt + 0x12);
        return;
    }
    bool pending = false;
    if (requester->GetMemberEnterCallerId() != 0 &&
        requester->GetMemberEnterCallerId() == target->GetUniqCharNo())
    {
        pending = true;
    }
    if (pending)
    {
        SendRequestMemberEnterResult(requester, ')', (char*)pkt + 0x12);
    }
    else
    {
        int err = memberMgr->CheckMemberEnter(requester, requesterMember, target, targetMember);
        if (err == 0)
        {
            if (target->RecordCallMemberEnter(*(unsigned int*)((char*)pkt + 0xe), 1) == 1)
            {
                SendRequestMemberEnterResult(requester, 0, (char*)pkt + 0x12);
                Packet_Monitor_Request_Member_Enter_To_Responser rpkt;
                rpkt.m_idByChannel = target->GetIdByChannel();
                rpkt.m_uniqCharNo = target->GetUniqCharNo();
                rpkt.m_level = (unsigned short)requester->GetLevel();
                memcpy(rpkt.m_name, requester->GetCharName(), 0x1d);
                target->SendTcpGameserver(&rpkt);
            }
            else
            {
                SendRequestMemberEnterResult(requester, ')', (char*)pkt + 0x12);
            }
        }
        else
        {
            SendRequestMemberEnterResult(requester, (unsigned char)err, (char*)pkt + 0x12);
            DNF_LOG_SCOPE_LINE(0x5d0, "./log/MemberModify",
                "Err(%d) Member Register : requester(%d) responser(%d)", err,
                requester->GetUniqCharNo(), target->GetUniqCharNo());
        }
    }
}
void CPacketTranslater::OnMemberEnterReply(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        CUser* requester = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xe));
        if (requester != 0)
        {
            requester->GetMemberEnterCallerId();
            CUser* responser = userMgr->FindUser_CharNo(requester->GetMemberEnterCallerId());
            if (responser != 0)
            {
                if (responser->IsAbleToRegisterMember() != 1 ||
                    requester->IsAbleToRegisterMember() != 1)
                {
                    SendRequestMemberEnterResult(responser, '7', responser->GetCharName());
                    DNF_LOG_SCOPE_LINE(0x621,"./log/MemberModify",
                        "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",
                        responser->GetUniqCharNo(), responser->IsAbleToRegisterMember(),
                        requester->GetUniqCharNo(), requester->IsAbleToRegisterMember());
                }
                else if (requester->CheckPrevCallMemberEnter() == 1)
                {
                    unsigned char code = *(unsigned char*)((char*)pkt + 0x12);
                    if (code == 2)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 2, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 2, 0, 0, 0, 0);
                        DNF_LOG_SCOPE_LINE(0x63a,"./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else if (code == 3)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 3, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 3, 0, 0, 0, 0);
                        DNF_LOG_SCOPE_LINE(0x647,"./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else if (code == 4)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 4, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 4, 0, 0, 0, 0);
                        DNF_LOG_SCOPE_LINE(0x654,"./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else
                    {
                        CMember* responserMember =
                            memberMgr->FindMember(responser->GetUniqCharNo());
                        CMember* requesterMember =
                            memberMgr->FindMember(requester->GetUniqCharNo());
                        if (requester->GetMemberEnterCallerId() == 0)
                        {
                            SendRequestMemberEnterResult(requester, '0',
                                                         responser->GetCharName());
                            DNF_LOG_SCOPE_LINE(0x662,"./log/MemberModify",
                                "Err : %d not received request from %d",
                                requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        }
                        else
                        {
                            int err = memberMgr->CheckMemberEnter(
                                responser, responserMember, requester, requesterMember);
                            if (err == 0)
                            {
                                CServerHandler* handler =
                                    (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
                                if (handler != 0)
                                {
                                    if (responserMember == 0)
                                    {
                                        responserMember =
                                            memberMgr->CreateMemberInJoin(responser);
                                    }
                                    if (requesterMember == 0)
                                    {
                                        requesterMember =
                                            memberMgr->CreateMemberInJoin(requester);
                                    }
                                    short rl = responser->GetLevel();
                                    if (memberMgr->RegisterMember(responserMember, rl, requester,
                                                                  true) == 1)
                                    {
                                        short ql = requester->GetLevel();
                                        if (memberMgr->RegisterMember(requesterMember, ql,
                                                                      responser, true) == 1)
                                        {
                                            memberMgr->SendToDBMemberUpdateCharInfo(
                                                handler, responser->GetUniqCharNo(), 1);
                                            memberMgr->SendToDBMemberUpdateCharInfo(
                                                handler, requester->GetUniqCharNo(), 1);
                                            memberMgr->SaveMemberOnConnect(
                                                handler, responser, requester, 1);
                                            requester->ResetRequestMemberEnter();
                                            responser->SetMemberRegisterFlag(false);
                                            requester->SetMemberRegisterFlag(false);
                                            DNF_LOG_SCOPE_LINE(0x69b,"./log/MemberModify",
                                                "pclResponserUser Char id(%d)(%d) success and reset, pclRequestUser char id(%d)(%d)!",
                                                requester->GetUniqCharNo(),
                                                requester->IsAbleToRegisterMember(),
                                                responser->GetUniqCharNo(),
                                                responser->IsAbleToRegisterMember());
                                            short l1 = requester->GetLevel();
                                            short l2 = responser->GetLevel();
                                            if (l2 < l1)
                                            {
                                                unsigned char el =
                                                    requester->GetUpperMemberExpLevel();
                                                unsigned char lv =
                                                    (unsigned char)requester->GetLevel();
                                                SendNoticeMemberEnterPacketOk(
                                                    responser, requester, 1, 1, 1, lv, el);
                                                unsigned char lv2 =
                                                    (unsigned char)responser->GetLevel();
                                                SendNoticeMemberEnterPacketReply(
                                                    requester, responser, 1, 2, 0, lv2, 0);
                                            }
                                            else
                                            {
                                                short l3 = requester->GetLevel();
                                                short l4 = responser->GetLevel();
                                                if (l3 < l4)
                                                {
                                                    unsigned char lv3 =
                                                        (unsigned char)requester->GetLevel();
                                                    SendNoticeMemberEnterPacketOk(
                                                        responser, requester, 1, 2, 0, lv3, 0);
                                                    unsigned char el2 =
                                                        responser->GetUpperMemberExpLevel();
                                                    unsigned char lv4 =
                                                        (unsigned char)responser->GetLevel();
                                                    SendNoticeMemberEnterPacketReply(
                                                        requester, responser, 1, 1, 1, lv4, el2);
                                                }
                                            }
                                        }
                                        else
                                        {
                                            short l5 = requester->GetLevel();
                                            short l6 = responser->GetLevel();
                                            DNF_LOG_SCOPE_LINE(0x688,"./log/MemberModify",
                                                "CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Responser Char id(%d), Responser Member id(%d), Caller Level(%d), Responser Level(%d)!",
                                                requester->GetUniqCharNo(),
                                                requesterMember->GetMemberKey(), (int)l6,
                                                (int)l5);
                                        }
                                    }
                                    else
                                    {
                                        short l7 = requester->GetLevel();
                                        short l8 = responser->GetLevel();
                                        DNF_LOG_SCOPE_LINE(0x681,"./log/MemberModify",
                                            "CPacketTranslater::OnMemberEnterReply  :  RegisterMember return false , Caller Char id(%d), Caller Member id(%d), Caller Level(%d), Responser Level(%d)!",
                                            responser->GetUniqCharNo(),
                                            responser->GetMemberKey(), (int)l8, (int)l7);
                                    }
                                }
                            }
                            else
                            {
                                SendRequestMemberEnterResult(requester, (unsigned char)err,
                                                             responser->GetCharName());
                                DNF_LOG_SCOPE_LINE(0x66a,"./log/MemberModify", "Err(%d) : %d Fail And Reset %d", err,
                                    requester->GetUniqCharNo(), responser->GetUniqCharNo());
                                requester->ResetRequestMemberEnter();
                            }
                        }
                    }
                }
                else
                {
                    SendRequestMemberEnterResult(requester, '/', responser->GetCharName());
                    DNF_LOG_SCOPE_LINE(0x62e,"./log/MemberModify", "Char id(%d) Reset char id(%d)",
                        requester->GetUniqCharNo(), responser->GetUniqCharNo());
                    requester->ResetRequestMemberEnter();
                }
            }
        }
    }
}
void CPacketTranslater::OnMemberSecede(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        unsigned int secederCharNo = *(unsigned int*)((char*)pkt + 0xe);
        CUser* seceder = userMgr->FindUser_CharNo(secederCharNo);
        if (seceder != 0)
        {
            CMember* member = memberMgr->FindMember(secederCharNo);
            if (member == 0)
            {
                SendRequestMemberDeleteResult(seceder, '1', (char*)pkt + 0x13);
            }
            else
            {
                CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
                if (handler != 0)
                {
                    CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x13);
                    unsigned char result = 0;
                    unsigned int targetKey = 0;
                    if (target == 0)
                    {
                        result = (unsigned char)member->DeleteMemberByName((char*)pkt + 0x13,
                                                                          targetKey);
                        if (result == 3)
                        {
                            return;
                        }
                        if (memberMgr->CheckEmptyMember(member, seceder) != 0)
                        {
                            memberMgr->SendToDBMemberUpdateCharInfo(handler, secederCharNo, 0);
                        }
                        memberMgr->SaveMemberOnUnConnect(handler, secederCharNo, targetKey,
                                                         (unsigned int)result, 2);
                    }
                    else
                    {
                        targetKey = target->GetUniqCharNo();
                        CMember* targetMember = memberMgr->FindMember(targetKey);
                        if (targetKey == secederCharNo)
                        {
                            return;
                        }
                        result = 2;
                        if (member->GetUpperMember_CharId() == (int)targetKey)
                        {
                            member->DeleteUpperMember(targetKey, true);
                            if (targetMember != 0)
                            {
                                targetMember->DeleteLowerMember(secederCharNo, false);
                            }
                            result = 1;
                        }
                        else
                        {
                            member->DeleteLowerMember(targetKey, true);
                            if (targetMember != 0)
                            {
                                targetMember->DeleteUpperMember(secederCharNo, false);
                            }
                        }
                        memberMgr->SaveMemberOnConnect(handler, seceder, target, 2);
                        if (memberMgr->CheckEmptyMember(member, seceder) != 0)
                        {
                            memberMgr->SendToDBMemberUpdateCharInfo(handler, secederCharNo, 0);
                        }
                        if (memberMgr->CheckEmptyMember(targetMember, target) != 0)
                        {
                            memberMgr->SendToDBMemberUpdateCharInfo(handler, targetKey, 0);
                        }
                        Packet_Monitor_Member_Secede_To_Seceder spkt;
                        spkt.m_idByChannel = target->GetIdByChannel();
                        spkt.m_uniqCharNo = targetKey;
                        spkt.m_type = 2;
                        if (result == 1)
                        {
                            spkt.m_type = 1;
                        }
                        memcpy(spkt.m_name, seceder->GetCharName(), 0x1d);
                        target->SendTcpGameserver(&spkt);
                    }
                    SendRequestMemberDeleteResult(seceder, result, (char*)pkt + 0x13);
                    seceder->SetMemberRegisterFlag(false);
                }
            }
        }
    }
}
void CPacketTranslater::OnCallMemberList(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
            CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xe));
            if (user != 0)
            {
                user->GetUniqCharNo();
                CMember* member = memberMgr->FindMember(user->GetUniqCharNo());
                if (member != 0)
                {
                    Packet_Monitor_Call_Member_List_ToUser rpkt;
                    rpkt.m_idByChannel = user->GetIdByChannel();
                    rpkt.m_uniqCharNo = user->GetUniqCharNo();
                    unsigned char* db = member->GetMemberDBInfo();
                    CUser* upperUser = userMgr->FindUser_CharNo(*(unsigned int*)db);
                    if (upperUser == 0)
                    {
                        rpkt.m_upperChannel = 0xff;
                    }
                    else if (upperUser->GetGameServer() == 0)
                    {
                        rpkt.m_upperChannel = 0xff;
                    }
                    else
                    {
                        if (upperUser->IsBlackUser(user->GetUniqCharNo()) != 0)
                        {
                            rpkt.m_upperBlack = 1;
                        }
                        rpkt.m_upperChannel =
                            ((CServerInterface*)upperUser->GetGameServer())->GetChannelNo();
                    }
                    rpkt.m_upperLevel = *(unsigned char*)(db + 4);
                    memcpy(rpkt.m_upperName, db + 5, 0x1d);
                    rpkt.m_upperExp = *(unsigned int*)(db + 0x23);
                    unsigned int upperExp = rpkt.m_upperExp;
                    unsigned int upperExpNext = rpkt.m_upperExpNext;
                    unsigned char upperExpLevel = rpkt.m_upperExpLevel;
                    memberMgr->GetMemberExpNextLevelNeedExpLevel(
                        upperExp, upperExpNext, upperExpLevel);
                    rpkt.m_upperExp = upperExp;
                    rpkt.m_upperExpNext = upperExpNext;
                    rpkt.m_upperExpLevel = upperExpLevel;
                    rpkt.m_lowerCount = *(unsigned char*)(db + 0x27);
                    for (int i = 0; i < (int)(unsigned int)*(unsigned char*)(db + 0x27); i++)
                    {
                        char* entry = rpkt.m_lowers[i];
                        unsigned int lowerCharNo = *(unsigned int*)(db + i * 0x27 + 0x28);
                        CUser* lowerUser = userMgr->FindUser_CharNo(lowerCharNo);
                        if (lowerUser == 0)
                        {
                            entry[0] = 0xff;
                        }
                        else if (lowerUser->GetGameServer() == 0)
                        {
                            entry[0] = 0xff;
                        }
                        else
                        {
                            if (lowerUser->IsBlackUser(user->GetUniqCharNo()) != 0)
                            {
                                entry[0x20] = 1;
                            }
                            entry[0] =
                                ((CServerInterface*)lowerUser->GetGameServer())->GetChannelNo();
                        }
                        entry[1] = *(unsigned char*)(db + i * 0x27 + 0x2c);
                        memcpy(entry + 2, db + i * 0x27 + 0x2d, 0x1d);
                        *(unsigned int*)(entry + 0x22) =
                            *(unsigned int*)(db + i * 0x27 + 0x4b);
                        memberMgr->GetMemberExpNextLevelNeedExpLevel(
                            *(unsigned int*)(entry + 0x22), *(unsigned int*)(entry + 0x26),
                            *(unsigned char*)(entry + 0x21));
                    }
                    int size = (int)(unsigned int)*(unsigned char*)(db + 0x27) * 0x2a + 0x3d;
                    user->SendToGameserver((char*)&rpkt, size);
                }
            }
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnCallMemberList() Exception Break : %s\n", e.what());
            DNF_LOG_SCOPE_LINE(0x7cd, "./log/Except", "%s", e.what());
        }
        catch (...)
        {
            puts("CPacketTranslater::OnCallMemberList() Exception Break");
            DNF_LOG_SCOPE_LINE(0x7d3, "./log/Except", "CPacketTranslater::OnCallMemberList() Exception Break\n");
        }
    }
}
void CPacketTranslater::OnNoticeMemberChatMsg(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeMemberChatMsg : 0 == m_pclApp");
    }
    if (*(unsigned int*)((char*)pkt + 0xa) != 0 && *(char*)((char*)pkt + 0xe) != 0)
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            CMember* member =
                ((CMemberManager*)((char*)m_pclApp + 0x2d0))->FindMember(
                    *(unsigned int*)((char*)pkt + 0xa));
            if (member != 0)
            {
                member->NoticeChatMsgToMemberMembers(
                    (char*)pkt + 0xf, (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe),
                    user);
            }
        }
        return;
    }
    throw CDNFException(
        "CPacketTranslater::OnNoticeMemberChatMsg : packet->m_uMemberID && packet->m_msgLen");
}
void CPacketTranslater::OnPayTaxToUpper(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnPayTaxToUpper : 0 == m_pclApp");
        }
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMember* member = memberMgr->FindMember(*(unsigned int*)((char*)pkt + 0xa));
        if (member == 0)
        {
            DNF_LOG_SCOPE_LINE(0x842,"./log/Except",
                "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclMember == 0!\tchar id(%d)\t"
                "money(%d)\tfatigue(%d)",
                *(unsigned int*)((char*)pkt + 0xa), *(unsigned int*)((char*)pkt + 0xe),
                *(unsigned int*)((char*)pkt + 0x12));
        }
        else
        {
            unsigned int upperCharId = (unsigned int)member->GetUpperMember_CharId();
            CUser* upperUser = userMgr->FindUser_CharNo(upperCharId);
            if (upperUser == 0)
            {
                DNF_LOG_SCOPE_LINE(0x849,"./log/Member",
                    "CPacketTranslater::OnPayTaxToUpper : pclUpperUser == 0!, Maybe, upper "
                    "Member is not connect!\tupper char id(%d)",
                    upperCharId);
            }
            else
            {
                CUser* payUser = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
                if (payUser == 0)
                {
                    DNF_LOG_SCOPE_LINE(0x84f,"./log/Except",
                        "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclPayUser == 0!\tchar "
                        "id(%d)\tmoney(%d)\tfatigue(%d)",
                        *(unsigned int*)((char*)pkt + 0xa), *(unsigned int*)((char*)pkt + 0xe),
                        *(unsigned int*)((char*)pkt + 0x12));
                }
                else
                {
                    int lowerCnt = upperUser->GetConnLowerMemberCnt();
                    short level = upperUser->GetLevel();
                    unsigned int limit =
                        m_pclApp->Get_MemberManager()->GetLowerMemberEnterLimit(
                            (unsigned int)level);
                    unsigned char expLevel = payUser->GetUpperMemberExpLevel();
                    float rate = (float)(0.01 * (double)expLevel) +
                                 (float)(0.05 * ((double)lowerCnt / (double)limit));
                    int moneyTax =
                        (int)((double)*(unsigned int*)((char*)pkt + 0xe) * (double)rate);
                    int fatigueTax =
                        (int)((double)*(unsigned int*)((char*)pkt + 0x12) * (double)rate);
                    if (moneyTax != 0 || fatigueTax != 0)
                    {
                        Packet_Monitor_Member_Pay_Tax_ToUpper reply;
                        reply.m_idByChannel = upperUser->GetIdByChannel();
                        reply.m_uniqCharNo = upperUser->GetUniqCharNo();
                        reply.m_money = moneyTax;
                        reply.m_fatigue = fatigueTax;
                        memcpy(reply.m_name, payUser->GetCharName(), 0x1d);
                        upperUser->SendToGameserver((char*)&reply, 0x38);
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x880,"./log/Except", "CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnPayTaxToUpper() Exception Break");
        DNF_LOG_SCOPE_LINE(0x886,"./log/Except", "CPacketTranslater::OnPayTaxToUpper() Exception Break : %s\n",
            "CPacketTranslater::OnPayTaxToUpper() Exception Break\n");
    }
}
void CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnUpdateChangableCharInfo : 0 == m_pclApp");
    }
    CUser* user =
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
            *(unsigned int*)((char*)pkt + 0xa));
    if (user != 0)
    {
        user->SetUserChangableInfo(*(short*)((char*)pkt + 0xf), *(char*)((char*)pkt + 0x11));
    }
}
void CPacketTranslater::OnLogoutComplete(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnLogoutComplete : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    char ok = userMgr->DeleteProhibitUser(*(unsigned int*)((char*)pkt + 0xa),
                                          (char)*(char*)((char*)pkt + 0xe));
    if (ok == 1)
    {
        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
        DNF_LOG_SCOPE_LINE(0x8a5,"./log/User", "[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n", dbid,
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
    }
    else
    {
        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
        DNF_LOG_SCOPE_LINE(0x8a1,"./log/User",
            "[DELETE_ERR_] CPacketTranslater::OnLogoutComplete m_id : %s\tChannel No : %d\n",
            dbid, (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
    }
}
void CPacketTranslater::OnUserRepel(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnUserRepel : 0 == m_pclApp");
    }
    char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
    DNF_LOG_SCOPE_LINE(0x954,"./log/Web", "CPacketTranslater::OnUserRepel m_id(%s) , charNo(%d)\n", dbid,
        *(unsigned int*)((char*)pkt + 0xe));
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
    if (user != 0 &&
        (*(unsigned int*)((char*)pkt + 0xe) == 0 ||
         (user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xe))) != 0))
    {
        *(unsigned int*)((char*)pkt + 0xa) = user->GetIdByChannel();
        user->SendToGameserver((char*)pkt, 0x12);
    }
}
void CPacketTranslater::OnCharacterDelete(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnCharacterDelete : 0 == m_pclApp");
    }
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    if (handler != 0)
    {
        ((CUserManager*)((char*)m_pclApp + 0x10))
            ->DeleteBlackUserOnCharacDelete(*(unsigned int*)((char*)pkt + 0xa));
        Packet_DB_Member_Delete_As_Charac_Delete dbPkt;
        dbPkt.m_charNo = *(unsigned int*)((char*)pkt + 0xe);
        handler->SendToDB(&dbPkt);
    }
}
void CPacketTranslater::OnEventStart(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnEventStart : 0 == m_pclApp");
        }
        PacketHeader* rpkt = pkt;
        unsigned short p2 = *(unsigned short*)((char*)pkt + 0x10);
        unsigned short p1 = *(unsigned short*)((char*)pkt + 0xe);
        unsigned int code = *(unsigned int*)((char*)pkt + 0xa);
        DNF_LOG_SCOPE_LINE(0x9f4,"./log/Web",
            "CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), "
            "eventParam2(%d)\n",
            code, (unsigned int)p1, (unsigned int)p2);
        ((CEventActionManager*)*(int*)((char*)m_pclApp + 0x31c))
            ->OnStartAction((Packet_Monitor_Event_Start*)pkt);
        m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventStart() 예외 발생 : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0xa3b, "./log/Except", "CPacketTranslater::OnEventStart() 예외 발생 : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventStart() 예외 발생");
        DNF_LOG_SCOPE_LINE(0xa41, "./log/Except", "CPacketTranslater::OnEventStart() 예외 발생\n");
    }
}
void CPacketTranslater::OnEventEnd(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnEventEnd : 0 == m_pclApp");
        }
        PacketHeader* rpkt = pkt;
        unsigned int code = *(unsigned int*)((char*)pkt + 0xa);
        DNF_LOG_SCOPE_LINE(0xa66, "./log/Web", "CPacketTranslater::OnEventEnd() eventCode(%d)\n", code);
        ((CEventActionManager*)*(int*)((char*)m_pclApp + 0x31c))->OnEndAction(code);
        m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventEnd() 예외 발생 : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0xa73, "./log/Except", "CPacketTranslater::OnEventEnd() 예외 발생 : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventEnd() 예외 발생");
        DNF_LOG_SCOPE_LINE(0xa79, "./log/Except", "CPacketTranslater::OnEventEnd() 예외 발생\n");
    }
}
void CPacketTranslater::OnNotifyNewMail(PacketHeader* pkt)
{
    try
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            *(unsigned int*)((char*)pkt + 0xe) = user->GetIdByChannel();
            user->SendToGameserver((char*)pkt, 0x12);
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xb66, "%s", "%s", "OnNotifyNewMail");
    }
}
void CPacketTranslater::OnWebQueryUserState(PacketHeader* pkt)
{
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    int found = 0;
    if (userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa)) == 0)
    {
        *(char*)((char*)pkt + 0x12) = 0;
    }
    else
    {
        *(char*)((char*)pkt + 0x12) = 1;
    }
    const char* state = *(char*)((char*)pkt + 0x12) == 1 ? "true" : "false";
    char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
    DNF_LOG_SCOPE_LINE(0xb78, "./log/User", "WebQueryUserState Result[m_id: %s] : [%s] : %d\n", dbid, state);
    unsigned int addr = *(unsigned int*)((char*)pkt + 6);
    unsigned short port = *(unsigned short*)((char*)pkt + 4);
    if (m_pclApp->Get_UdpHandler()->SendToClient((char*)pkt, 0x13, port, (char*)0, addr) != 1)
    {
        throw CDNFException(strerror(errno));
    }
}
void CPacketTranslater::OnNoticeMessage(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeMessage : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0xf8e, "./log/GM_msg", "CPacketTranslater::OnNoticeMessage()%s\n", (char*)pkt + 0xb);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x10b);
}
void CPacketTranslater::OnRelayServerUserCheck(PacketHeader* pkt)
{
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    int found = 0;
    if (userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa)) == 0)
    {
        *(char*)((char*)pkt + 0xe) = 0;
    }
    else
    {
        *(char*)((char*)pkt + 0xe) = 1;
    }
    CServerInterface* gs =
        (CServerInterface*)m_pclApp->FindGameServer((int)*(unsigned int*)((char*)pkt + 0xa));
    if (gs == 0)
    {
        throw CDNFException(strerror(errno));
    }
    gs->SendToServer((char*)pkt, 0xf);
}
void CPacketTranslater::OnForbidChat(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnForbidChat : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0xfdd,"./log/GM_msg", "CPacketTranslater::OnForbidChat() %s for %d secs\n", (char*)pkt + 0x12,
        *(unsigned int*)((char*)pkt + 0xa));
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x30);
}
void CPacketTranslater::OnNoticeProhibitConnectUser(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnNoticeProhibitConnectUser : 0 == m_pclApp");
        }
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        unsigned int dbid = *(unsigned int*)((char*)pkt + 0xa);
        exchange_server::CACHE_CHARACTER_TYPE cacheType;
        if (exchange_server::GetInstanceCacheCharacterMgr()->GetCacheCharacter(dbid,
                                                                               &cacheType) != 0)
        {
            char* s = NumberToString(dbid, 0);
            DNF_LOG_SCOPE_LINE(0x8cc,"./log/ExchangeServer", "OnNoticeProhibitConnectUser() (%s,%d,%d)\n", s,
                cacheType.m_field0, cacheType.m_field4);
        }
        bool notPresent =
            userMgr->FindUser(dbid) == 0 && userMgr->FindProhibitUser(dbid) == 0;
        *(char*)((char*)pkt + 0x11) = notPresent ? 0 : 1;
        if (*(char*)((char*)pkt + 0xe) == 0)
        {
            CDNFProhibitUser* p = userMgr->FindProhibitUser(dbid);
            if (p == 0)
            {
                p = new CDNFProhibitUser;
                p->SetUserConnectableTime(dbid, *(short*)((char*)pkt + 0xf), -1, true);
                if (userMgr->InsertProhibitUser(dbid, p) != 1)
                {
                    char* s = NumberToString(dbid, 0);
                    DNF_LOG_SCOPE_LINE(0x922,"./log/ProhibitUser",
                        "[INSERT_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : "
                        "%s, flag( %d ), time( %d ) \n",
                        s, (int)(char)*(char*)((char*)pkt + 0xe),
                        (int)*(short*)((char*)pkt + 0xf));
                    delete p;
                }
                char* s = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x926,"./log/ProhibitUser",
                    "[INSERT_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser "
                    "m_id : %s, flag( %d ), time( %d ) \n",
                    s, (int)(char)*(char*)((char*)pkt + 0xe),
                    (int)*(short*)((char*)pkt + 0xf));
            }
            else
            {
                if (p->GetChannelNo() == -1)
                {
                    *(char*)((char*)pkt + 0xe) = 2;
                    *(unsigned short*)pkt = 0x4c9;
                    *(char*)((char*)pkt + 0x12) = (char)m_pclApp->Get_ServerGroup();
                    handler->GetTcpManagerServer()->SendTcpPacket(pkt);
                    char* s = NumberToString(dbid, 0);
                    DNF_LOG_SCOPE_LINE(0x90a,"./log/ProhibitUser",
                        "[ALREADY_INSERT] CPacketTranslater::OnNoticeProhibitConnectUser m_id "
                        ": %s, flag( %d ), time( %d ) \n",
                        s, (int)(char)*(char*)((char*)pkt + 0xe),
                        (int)*(short*)((char*)pkt + 0xf));
                    return;
                }
                char* s = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x90e,"./log/ProhibitUser",
                    "[ALREADY_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser "
                    "m_id : %s, flag( %d ), time( %d ) \n",
                    s, (int)(char)*(char*)((char*)pkt + 0xe),
                    (int)*(short*)((char*)pkt + 0xf));
            }
            *(unsigned short*)pkt = 0x4c9;
            *(char*)((char*)pkt + 0x12) = (char)m_pclApp->Get_ServerGroup();
            handler->GetTcpManagerServer()->SendTcpPacket(pkt);
        }
        else
        {
            if (userMgr->DeleteProhibitUser(dbid, -1) != 1)
            {
                char* s = NumberToString(dbid, 0);
                DNF_LOG_SCOPE_LINE(0x8ef,"./log/ProhibitUser",
                    "[DELETE_ERR] CPacketTranslater::OnNoticeProhibitConnectUser m_id : %s, "
                    "flag( %d ), time( %d ) \n",
                    s, (int)(char)*(char*)((char*)pkt + 0xe),
                    (int)*(short*)((char*)pkt + 0xf));
            }
            char* s = NumberToString(dbid, 0);
            DNF_LOG_SCOPE_LINE(0x8f2,"./log/ProhibitUser",
                "[DELETE_PROHIBIT_USER] CPacketTranslater::OnNoticeProhibitConnectUser m_id : "
                "%s, flag( %d ), time( %d ) \n",
                s, (int)(char)*(char*)((char*)pkt + 0xe),
                (int)*(short*)((char*)pkt + 0xf));
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x939,"%s", "CPacketTranslater::OnNoticeProhibitConnectUser() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x93e, "%s", "CPacketTranslater::OnNoticeProhibitConnectUser() Exception Break");
    }
}
void CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnMonitorManagerConnectOK : 0 == m_pclApp");
        }
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        handler->SetManagerConnectFlag(true);
        DNF_LOG_SCOPE_LINE(0xc19, "./log/Manager", "Manager Server Connect Success");
        puts("** Manager Server Connect Success **");
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xc1e,"%s", "CPacketTranslater::OnMonitorManagerConnectOK() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xc23, "%s", "CPacketTranslater::OnMonitorManagerConnectOK() Exception Break");
    }
}
void CPacketTranslater::OnMonitorMegaPhoneMsg(PacketHeader* pkt)
{
    *(char*)((char*)pkt + 0xa) = (char)m_pclApp->Get_ServerGroup();
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
}
void CPacketTranslater::OnRegisterGM_mid(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        m_pclApp->Add_GM_id(*(unsigned int*)((char*)pkt + 0xa));
    }
}
void CPacketTranslater::OnRegisterToBlackList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xc41, "./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp");
    }
    else
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        Packet_DBMW_Register_To_BlackList dbPkt;
        Packet_Register_To_BlackList_RESULT result;
        dbPkt.m_charNo = *(unsigned int*)((char*)pkt + 0xa);
        memcpy(dbPkt.m_name, (char*)pkt + 0xe, 0x1d);
        CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xc50, "./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == pclUser");
        }
        else if (strcmp(user->GetCharName(), (char*)pkt + 0xe) == 0)
        {
            result.m_result = 3;
            result.m_idByChannel = user->GetIdByChannel();
            result.m_charNo = 0xffffffff;
            memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
            user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
        }
        else
        {
            result.m_idByChannel = user->GetIdByChannel();
            memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
            if (user->GetBlackListSize() < 10)
            {
                CUser* target = userMgr->FindUser_CharName((char*)pkt + 0xe);
                if (target != 0)
                {
                    result.m_charNo = target->GetUniqCharNo();
                    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
                    if (gm != 0 && gm->isGM(target->GetDBID()) != 0)
                    {
                        result.m_result = 5;
                        user->SendToGameserver((char*)&result,
                                               *(unsigned short*)((char*)&result + 2));
                        return;
                    }
                    if (user->RegisterToBlackList(target->GetUniqCharNo(),
                                                  (char*)pkt + 0xe) != 1)
                    {
                        result.m_result = 2;
                        user->SendToGameserver((char*)&result,
                                               *(unsigned short*)((char*)&result + 2));
                        return;
                    }
                    dbPkt.m_charNo2 = target->GetUniqCharNo();
                    result.m_result = 1;
                    user->SendToGameserver((char*)&result,
                                           *(unsigned short*)((char*)&result + 2));
                }
                handler->SendToDB(&dbPkt);
            }
            else
            {
                result.m_result = 4;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
        }
    }
}
void CPacketTranslater::OnDeleteToBlackList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xca6, "./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp");
        return;
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    Packet_DMBW_Delete_To_BlackList dbPkt;
    Packet_Delete_To_BlackList_Result result;
    dbPkt.m_charNo = *(unsigned int*)((char*)pkt + 0xa);
    memcpy(dbPkt.m_name, (char*)pkt + 0xe, 0x1d);
    CUser* target = userMgr->FindUser_CharName((char*)pkt + 0xe);
    if (target != 0)
    {
        CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xcb6, "./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == pclUser");
            return;
        }
        result.m_idByChannel = user->GetIdByChannel();
        result.m_charNo = target->GetUniqCharNo();
        memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
        if (user->DeleteToBlackList(target->GetUniqCharNo()) != 1)
        {
            result.m_result = 2;
            user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            return;
        }
        dbPkt.m_charNo2 = target->GetUniqCharNo();
        result.m_result = 1;
        user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
    }
    handler->SendToDB(&dbPkt);
}
void CPacketTranslater::OnRequestBlackList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xce9, "./log/BlackList", "CPacketTranslater::OnRequestBlackList : 0 == m_pclApp");
    }
    else
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        Packet_Request_Result_BlackList reply;
        reply.m_idByChannel = *(unsigned int*)((char*)pkt + 0xe);
        CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xcf3, "./log/BlackList", "CPacketTranslater::OnRequestBlackList : 0 == pclUser");
        }
        else
        {
            unsigned char count = 0;
            user->GetBlackList(count, (unsigned int*)reply.m_blackList);
            reply.m_count = count;
            user->SendToGameserver((char*)&reply, *(unsigned short*)((char*)&reply + 2));
        }
    }
}
void CPacketTranslater::OnDBMWResisterToBlackList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xd18, "./log/BlackList", "CPacketTranslater::OnDBMWResisterToBlackList : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xd1f, "./log/BlackList", "CPacketTranslater::OnDBMWResisterToBlackList : 0 == pclUser");
        }
        else
        {
            Packet_Register_To_BlackList_RESULT result;
            result.m_idByChannel = user->GetIdByChannel();
            memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
            if (*(int*)((char*)pkt + 0x30) == 0x5a)
            {
                result.m_result = 5;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
            else if (*(int*)((char*)pkt + 0x2c) == -1)
            {
                result.m_result = 3;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
            else if (user->IsBlackUser(*(unsigned int*)((char*)pkt + 0x2c)) != 0)
            {
                result.m_result = 2;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
            else if (user->GetBlackListSize() < 10)
            {
                user->RegisterToBlackList(*(unsigned int*)((char*)pkt + 0x2c),
                                          (char*)pkt + 0xe);
                result.m_result = 1;
                result.m_charNo = *(unsigned int*)((char*)pkt + 0x2c);
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
            else
            {
                result.m_result = 4;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
        }
    }
}
void CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xd69, "./log/BlackList", "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xd70, "./log/BlackList", "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser");
        }
        else
        {
            Packet_Delete_To_BlackList_Result result;
            result.m_idByChannel = user->GetIdByChannel();
            memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
            if (*(int*)((char*)pkt + 0x2c) == -1)
            {
                result.m_result = 3;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
            else if (user->DeleteToBlackList(*(unsigned int*)((char*)pkt + 0x2c)) != 1)
            {
                result.m_result = 2;
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
            else
            {
                result.m_result = 1;
                result.m_charNo = *(unsigned int*)((char*)pkt + 0x2c);
                user->SendToGameserver((char*)&result, *(unsigned short*)((char*)&result + 2));
            }
        }
    }
}
void CPacketTranslater::RequestBlackListToDBMW(unsigned int charNo)
{
    Packet_DBMW_Request_BlackList pkt;
    pkt.m_charNo = charNo;
    pkt.m_flag = 0xc9;
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendToDB(&pkt);
}
void CPacketTranslater::SendColletItemsReward(unsigned int charNo, int itemId,
                                              const char* itemName, int nameLen,
                                              TimeGateRewardType::T type)
{
    CUser* user =
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(charNo);
    if (user != 0)
    {
        Packet_CollectItemsReward pkt;
        pkt.m_idByChannel = user->GetIdByChannel();
        pkt.m_charNo = (unsigned int)itemId;
        pkt.m_type = (unsigned char)type;
        pkt.m_nameLen = (unsigned char)nameLen;
        strncpy(pkt.m_name, itemName, (unsigned int)nameLen);
        user->SendTcpGameserver(&pkt);
        Packet_CollectItemsRewardBroadcast bpkt;
        bpkt.m_charNo = (unsigned int)itemId;
        bpkt.m_type = (unsigned char)type;
        bpkt.m_nameLen = (unsigned char)nameLen;
        strncpy(bpkt.m_name, itemName, (unsigned int)nameLen);
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        handler->SendAllTcpGameServer(&bpkt);
    }
}
void CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xdc3,"./log/BlackList",
            "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xdcb,"./log/BlackList",
                "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser");
        }
        else
        {
            for (int i = 0; *(int*)((char*)pkt + i * 0x28 + 0x32) != 0; i++)
            {
                if (user->IsBlackUser(*(unsigned int*)((char*)pkt + i * 0x28 + 0xe)) != 1)
                {
                    user->RegisterToBlackList(
                        *(unsigned int*)((char*)pkt + i * 0x28 + 0xe),
                        (char*)pkt + i * 0x28 + 0x12,
                        *(unsigned int*)((char*)pkt + i * 0x28 + 0x32));
                }
            }
            user->SetBlackListDBFlag(4);
            user->SendBlackList();
        }
    }
}
void CPacketTranslater::OnExchangeServerInfo(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0xe59,"./log/ExchangeServer",
                "CPacketTranslater::OnExchangeServerInfo : 0 == m_pclApp");
        }
        else
        {
            PacketHeader* reply = pkt;
            unsigned int channel = *(unsigned int*)((char*)pkt + 0xa);
            unsigned int ip = *(unsigned int*)((char*)pkt + 0x10);
            bool result = false;
            int code = *(int*)((char*)pkt + 0xa);
            short port = *(short*)((char*)pkt + 0xe);
            unsigned int ip2 = *(unsigned int*)((char*)pkt + 0x10);
            GetInstanceExchangeServer()->SetExchageServer(ip2, port, code, result);
            if (!result)
            {
                *(unsigned short*)((char*)reply + 0xe) =
                    GetInstanceExchangeServer()->GetExchangeServerPort();
                *(unsigned int*)((char*)reply + 0x10) =
                    GetInstanceExchangeServer()->GetExchangeServerIp();
                *(unsigned int*)((char*)reply + 0xa) =
                    GetInstanceExchangeServer()->GetExchangeServerChannelNo();
                m_pclApp->Get_ServerHandler()->SendToGameServer((unsigned char)channel, reply);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xe71,"./log/Except",
            "CPacketTranslater::OnExchangeServerInfo Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xe76, "./log/Except", "CPacketTranslater::OnExchangeServerInfo Exception Break\n");
    }
}
void CPacketTranslater::OnNoticeCharLiveOnTenMin(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
        CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            CMember* member = user->GetMember();
            CServerHandler* handler = *(CServerHandler**)((char*)m_pclApp + 0xa0);
            if (member != 0 && handler != 0)
            {
                if (memberMgr->FindMemberUser(
                        (unsigned int)member->GetUpperMember_CharId()) != 0)
                {
                    unsigned int maxExp =
                        memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                    unsigned int newExp =
                        (unsigned int)member->IncConnUpperMemberExp(maxExp);
                    if (newExp != 0)
                    {
                        unsigned int upperCharId =
                            (unsigned int)member->GetUpperMember_CharId();
                        CUser* upperUser = userMgr->FindUser_CharNo(upperCharId);
                        if (upperUser != 0)
                        {
                            CMember* upperMember = upperUser->GetMember();
                            if (upperMember != 0)
                            {
                                unsigned int max2 =
                                    memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                                unsigned int memberKey =
                                    (unsigned int)member->GetMemberKey();
                                upperMember->IncConnLowerMemberExp(memberKey, max2);
                            }
                        }
                        unsigned int upperId =
                            (unsigned int)member->GetUpperMember_CharId();
                        unsigned int key = (unsigned int)member->GetMemberKey();
                        memberMgr->SaveMemberExp(handler, key, upperId, newExp);
                        if (memberMgr->IsMemberExpLevelUp(newExp))
                        {
                            unsigned int u = (unsigned int)member->GetUpperMember_CharId();
                            memberMgr->NoticeLevelUpToLowers(u, newExp);
                        }
                    }
                }
                int idx = 0;
                unsigned int lowerCount = member->GetLowerMemberCount();
                unsigned int* proxy = member->GetLowerMember_Proxy();
                while (lowerCount != 0)
                {
                    lowerCount--;
                    CMember* lowerMember = memberMgr->FindMember(*proxy);
                    if (lowerMember != 0)
                    {
                        unsigned int maxE =
                            memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                        unsigned int lowerNew =
                            (unsigned int)lowerMember->IncConnUpperMemberExp(maxE);
                        if (lowerNew != 0)
                        {
                            unsigned int maxE2 =
                                memberMgr->GetMemberExpTable()->GetMaxMemberExp();
                            member->IncConnLowerMemberExp(idx, *proxy, maxE2);
                            unsigned int lowerUpperId =
                                (unsigned int)lowerMember->GetUpperMember_CharId();
                            unsigned int lowerKey =
                                (unsigned int)lowerMember->GetMemberKey();
                            memberMgr->SaveMemberExp(handler, lowerKey, lowerUpperId,
                                                     lowerNew);
                            if (memberMgr->IsMemberExpLevelUp(lowerNew))
                            {
                                unsigned int lu =
                                    (unsigned int)lowerMember->GetUpperMember_CharId();
                                memberMgr->NoticeLevelUpToLowers(lu, lowerNew);
                            }
                        }
                    }
                    idx++;
                    proxy = (unsigned int*)((char*)proxy + 0x27);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xf29,"./log/Except",
            "CPacketTranslater::OnNoticeCharLiveOn10Min Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xf2e,"./log/Except",
            "CPacketTranslater::OnNoticeCharLiveOn10Min Exception Break\n");
    }
}
void CPacketTranslater::OnWebNoticeSingle(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xf67, "./log/WebNotice", "CPacketTranslater::OnWebNoticeSingle : 0 == m_pclApp");
    }
    else
    {
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
        DNF_LOG_SCOPE_LINE(0xf6f,"./log/WebNotice", "OnWebNoticeSingle : (%s,%d)\n", (char*)pkt + 0xb,
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa));
    }
}
void CPacketTranslater::OnAddBuddy(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0xfff, "./log/buddy", "CPacketTranslater::OnAddBuddy : 0 == m_pclApp");
        }
        else
        {
            CUser* user =
                ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                    *(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x1012, "./log/buddy", "CPacketTranslater::OnAddBuddy\t pclUser is NULL");
            }
            else
            {
                CServerHandler* handler = m_pclApp->Get_ServerHandler();
                int r = user->AddBuddyDB(handler, (char*)pkt + 0x12);
                if (r != 0)
                {
                    Packet_Monitor_Add_Buddy_Reply reply;
                    reply.m_charNo = *(unsigned int*)((char*)pkt + 0xa);
                    reply.m_idByChannel = *(unsigned int*)((char*)pkt + 0xe);
                    reply.m_result = (unsigned char)r;
                    user->SendToGameserver((char*)&reply,
                                           *(unsigned short*)((char*)&reply + 2));
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1018, "%s", "CPacketTranslater::OnAddBuddy() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x101d, "%s", "CPacketTranslater::OnAddBuddy() Exception Break");
    }
}
void CPacketTranslater::OnAddBuddyDBReply(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1032, "./log/buddy", "CPacketTranslater::OnAddBuddyDBReply : 0 == m_pclApp");
        }
        else
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x105f, "./log/buddy", "CPacketTranslater::OnAddBuddyDBReply\tpclUser is NULL");
            }
            else
            {
                Packet_Monitor_Add_Buddy_Reply reply;
                reply.m_charNo = *(unsigned int*)((char*)pkt + 0xa);
                reply.m_idByChannel = user->GetIdByChannel();
                if (*(char*)((char*)pkt + 0x35) == 0)
                {
                    user->AddBuddy(*(STBuddyDBInfo*)((char*)pkt + 0xe));
                    memcpy(reply.m_name, (char*)pkt + 0xe, 0x27);
                    CUser* other =
                        userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0x30));
                    if (other == 0)
                    {
                        reply.m_channel = 0xff;
                    }
                    else if (other->GetGameServer() == 0)
                    {
                        reply.m_channel = 0xff;
                    }
                    else
                    {
                        reply.m_channel =
                            ((CServerInterface*)other->GetGameServer())->GetChannelNo();
                    }
                    reply.m_result = *(unsigned char*)((char*)pkt + 0x35);
                    user->GetUniqCharNo();
                    ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                        ->addBuddyRegister(*(unsigned int*)((char*)pkt + 0x30),
                                           user->GetUniqCharNo());
                }
                else
                {
                    reply.m_result = *(unsigned char*)((char*)pkt + 0x35);
                }
                user->SendToGameserver((char*)&reply,
                                       *(unsigned short*)((char*)&reply + 2));
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1065, "%s", "CPacketTranslater::OnAddBuddyDBReply() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x106a, "%s", "CPacketTranslater::OnAddBuddyDBReply() Exception Break");
    }
}
void CPacketTranslater::OnDelBuddy(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x107e, "./log/buddy", "CPacketTranslater::OnDelBuddy : 0 == m_pclApp");
        }
        else
        {
            CUser* user =
                ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                    *(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x1092, "./log/buddy", "CPacketTranslater::OnDelBuddy\t pclUser is NULL");
            }
            else
            {
                CServerHandler* handler = m_pclApp->Get_ServerHandler();
                int r = user->DelBuddyDB(handler, (char*)pkt + 0x12);
                if (r != 0)
                {
                    Packet_Monitor_Del_Buddy_Reply reply;
                    reply.m_charNo = *(unsigned int*)((char*)pkt + 0xa);
                    reply.m_idByChannel = *(unsigned int*)((char*)pkt + 0xe);
                    memcpy(reply.m_name, (char*)pkt + 0x12, 0x1d);
                    reply.m_result = (unsigned char)r;
                    user->SendToGameserver((char*)&reply,
                                           *(unsigned short*)((char*)&reply + 2));
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1098, "%s", "CPacketTranslater::OnDelBuddy() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x109d, "%s", "CPacketTranslater::OnDelBuddy() Exception Break");
    }
}
void CPacketTranslater::OnDelBuddyDBReply(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x10b1, "./log/buddy", "CPacketTranslater::OnDelBuddyDBReply : 0 == m_pclApp");
        }
        else
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x10cf, "./log/buddy", "CPacketTranslater::OnDelBuddyDBReply\tpclUser is NULL");
            }
            else
            {
                Packet_Monitor_Del_Buddy_Reply reply;
                reply.m_charNo = *(unsigned int*)((char*)pkt + 0xa);
                reply.m_idByChannel = user->GetIdByChannel();
                if (*(char*)((char*)pkt + 0x30) == 0)
                {
                    user->DelBuddy((char*)pkt + 0x12);
                    memcpy(reply.m_name, (char*)pkt + 0x12, 0x1d);
                    reply.m_result = *(unsigned char*)((char*)pkt + 0x30);
                    unsigned int uniq = user->GetUniqCharNo();
                    ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                        ->delBuddyRegister(*(unsigned int*)((char*)pkt + 0xe), uniq);
                }
                else
                {
                    reply.m_result = 3;
                }
                user->SendToGameserver((char*)&reply,
                                       *(unsigned short*)((char*)&reply + 2));
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x10d5, "%s", "CPacketTranslater::OnDelBuddyDBReply() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x10da, "%s", "CPacketTranslater::OnDelBuddyDBReply() Exception Break");
    }
}
void CPacketTranslater::OnQueryBuddyInfoDBReply(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x10f0, "./log/buddy", "CPacketTranslater::OnQueryBuddyInfoDBReply : 0 == m_pclApp");
        }
        else
        {
            CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
            if (0x20 < (unsigned char)*(char*)((char*)pkt + 0xe))
            {
                *(char*)((char*)pkt + 0xe) = 0x20;
            }
            CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
            if (user == 0)
            {
                DNF_LOG_SCOPE_LINE(0x1112,"./log/buddy",
                    "CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL");
            }
            else
            {
                for (int i = 0;
                     i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe); i++)
                {
                    user->AddBuddy(*(STBuddyDBInfo*)((char*)pkt + i * 0x27 + 0xf));
                    user->GetUniqCharNo();
                    ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                        ->addBuddyRegister(*(unsigned int*)((char*)pkt + i * 0x27 + 0x31),
                                           user->GetUniqCharNo());
                }
                if (*(char*)((char*)pkt + 0xe) != 0)
                {
                    userMgr->SendConnectedBuddysList(user);
                }
                user->SetBuddyDBFlag(4);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1118,"%s", "CPacketTranslater::OnQueryBuddyInfoDBReply() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x111d, "%s", "CPacketTranslater::OnQueryBuddyInfoDBReply() Exception Break");
    }
}
void CPacketTranslater::OnWebChangeUserHandicap(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1127, "./log/hack", "CPacketTranslater::OnWebChangeUserHandicap : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            Packet_Change_User_Handicap reply;
            reply.m_fieldA = *(unsigned int*)((char*)pkt + 0xa);
            reply.m_fieldE = *(unsigned int*)((char*)pkt + 0xe);
            reply.m_field12 = *(unsigned int*)((char*)pkt + 0x12);
            user->SendToGameserver((char*)&reply, *(unsigned short*)((char*)&reply + 2));
        }
    }
}
void CPacketTranslater::OnGMRequestMid(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x113c, "./log/Except", "CPacketTranslater::OnGMRequestMid : 0 == m_pclApp");
    }
    else
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            Packet_GM_Request_Mid reply;
            *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
            memcpy((char*)&reply + 0x16, (char*)pkt + 0x16, 0x1d);
            CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x16);
            if (target == 0)
            {
                *(unsigned int*)((char*)&reply + 0xe) = 0xffffffff;
            }
            else
            {
                *(unsigned int*)((char*)&reply + 0x12) = target->GetUniqCharNo();
                *(unsigned int*)((char*)&reply + 0xe) = target->GetDBID();
            }
            user->SendToGameserver((char*)&reply, *(unsigned short*)((char*)&reply + 2));
        }
    }
}
void CPacketTranslater::OnUserRepelByCharName(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            Packet_Monitor_User_Repel reply;
            CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x12);
            if (target != 0)
            {
                reply.m_idByChannel = target->GetIdByChannel();
                target->SendToGameserver((char*)&reply, 0x12);
            }
        }
        return;
    }
    throw CDNFException("CPacketTranslater::OnUserRepel : 0 == m_pclApp");
}
void CPacketTranslater::onReplyLoadTowerFullRank(PacketHeader* pkt)
{
    try
    {
        CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
        if (*(char*)((char*)pkt + 0xa) != 0)
        {
            tower->reset();
        }
        DNF_LOG_SCOPE_LINE(0x1172,"./log/DeathTower", "%d/%d\n", *(unsigned int*)((char*)pkt + 0xb),
            *(unsigned int*)((char*)pkt + 0xf));
        for (unsigned int i = 0; i < *(unsigned int*)((char*)pkt + 0xb); i++)
        {
            tower->registRank(
                (unsigned int)(unsigned char)*(char*)((char*)pkt + i * 0x65 + 0x1b),
                (unsigned int)*(unsigned short*)((char*)pkt + i * 0x65 + 0x17),
                (unsigned int)*(unsigned short*)((char*)pkt + i * 0x65 + 0x19),
                (const stDeathTowerRecordMemberInfo_t*)((char*)pkt + i * 0x65 + 0x1c));
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x117e,"%s", "CPacketTranslater::onReplyLoadTowerFullRank() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1183, "%s", "CPacketTranslater::onReplyLoadTowerFullRank() Exception Break");
    }
}
void CPacketTranslater::onRequestCharacTowerUpdateRank(PacketHeader* pkt)
{
    CUser* user =
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
            *(unsigned int*)((char*)pkt + 0xe));
    if (user != 0)
    {
        unsigned int a = *(unsigned int*)((char*)pkt + 0x16);
        unsigned int b = *(unsigned int*)((char*)pkt + 0xe);
        char* name = user->GetCharName();
        unsigned int c = *(unsigned int*)((char*)pkt + 0x12);
        CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
        tower->registCharacRank(c, name, b, a);
    }
}
void CPacketTranslater::onRequestReloadTowerRanker(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
    tower->processReloadRanking(handler, true, 5);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onWebReqReloadAutoPunishRule(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0xb);
}
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x11d2, "./log/Except", "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
        }
        else
        {
            CServerHandler* handler = m_pclApp->Get_ServerHandler();
            if (handler->GetTcpDBServer()->GetSock() == *(int*)((char*)pkt + 6))
            {
                handler = m_pclApp->Get_ServerHandler();
                handler->GetTcpDBServer()->Connected();
            }
            else
            {
                handler = m_pclApp->Get_ServerHandler();
                if (handler->GetTcpManagerServer()->GetSock() == *(int*)((char*)pkt + 6))
                {
                    unsigned char group = m_pclApp->Get_ServerGroup();
                    handler = m_pclApp->Get_ServerHandler();
                    handler->GetTcpManagerServer()->Connected(group);
                }
                else
                {
                    unsigned int sock = *(unsigned int*)((char*)pkt + 6);
                    handler = m_pclApp->Get_ServerHandler();
                    CTcpGameServer* tcp = handler->CreateTcpGameServer(sock);
                    if (tcp != 0)
                    {
                        char* buf = tcp->makePacketHeader(8000, 0xc);
                        if (buf != 0)
                        {
                            buf[10] = 0;
                            char* out = buf;
                            out[0xb] = (char)m_pclApp->Get_ServerGroup();
                            tcp->SendToGameServer(out);
                            char* out2 = tcp->makePacketHeader(0x3ea, 0xb);
                            char* out3 = 0;
                            if (out2 != 0)
                            {
                                out3 = out2;
                            }
                            out3[10] = -0x37;
                            tcp->SendToGameServer(out3);
                            void* net = m_pclApp->Get_TcpNetSystem();
                            DNF_LOG_SCOPE_LINE(0x123e, "./log/Tcp", "OnInnerPacketLogin : Network system (%x)", net);
                            char* out4 = tcp->makePacketHeader(0x1004, 0x7ef);
                            if (out4 != 0)
                            {
                                out4[10] = 1;
                                char* out5 = out4;
                                m_pclApp->getItemLimitEditionMgr()
                                    ->makeItemLimitEditionSellStartPacket(
                                        *(Packet_Item_Limit_Edition_Sell_Start*)out5);
                                tcp->SendToGameServer(out5);
                                tcp->makePacketHeader(0x1b6a, 0x12);
                            }
                        }
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x126d,"./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1272, "./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break\n");
    }
}
void CPacketTranslater::OnInnerPacketLogout(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1282, "./log/Except", "CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
        }
        else
        {
            CServerHandler* handler = m_pclApp->Get_ServerHandler();
            if (handler->GetTcpDBServer()->GetSock() == *(int*)((char*)pkt + 6))
            {
                handler = m_pclApp->Get_ServerHandler();
                handler->GetTcpDBServer()->DisConnected();
            }
            else
            {
                handler = m_pclApp->Get_ServerHandler();
                if (handler->GetTcpManagerServer()->GetSock() == *(int*)((char*)pkt + 6))
                {
                    handler = m_pclApp->Get_ServerHandler();
                    handler->GetTcpManagerServer()->DisConnected();
                }
                else
                {
                    CTcpGameServer* tcp = (CTcpGameServer*)m_pclApp->FindTcpGameServer(
                        *(unsigned int*)((char*)pkt + 6));
                    m_pclApp->OnTcpGameServerDown(tcp);
                    unsigned char channel = tcp->GetChannelNo();
                    if (channel != 0)
                    {
                        handler = m_pclApp->Get_ServerHandler();
                        handler->UnregistGameServer((unsigned int)channel);
                    }
                    handler = m_pclApp->Get_ServerHandler();
                    handler->DeleteTcpGameServer(*(unsigned int*)((char*)pkt + 6));
                    void* net = m_pclApp->Get_TcpNetSystem();
                    DNF_LOG_SCOPE_LINE(0x12af, "./log/Tcp", "OnInnerPacketLogout : Network system (%x)", net);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x12b3,"./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x12b8, "./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break\n");
    }
}
void CPacketTranslater::OnNoticeSlang(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeSlang : 0 == m_pclApp");
    }
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x3d);
}
void CPacketTranslater::onLoadCleanPadPoint(PacketHeader* pkt)
{
    DNF_LOG_SCOPE_LINE(0x12e0, "./log/Cleanpad", "CleanPad Point");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onLoadBlackIPMonitor(PacketHeader* pkt) {}
void CPacketTranslater::onLoadBlackIPMonitorPartLoad(PacketHeader* pkt)
{
    DNF_LOG_SCOPE_LINE(0x1307, "./log/BlackIP", "BlackIP Monitor Part Load");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onLoadBlackIPMonitorDeleteIP(PacketHeader* pkt)
{
    DNF_LOG_SCOPE_LINE(0x131a, "./log/BlackIP", "BlackIP Monitor Delete IP");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x19e);
}
void CPacketTranslater::OnChangeCharName(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x133d, "./log/Except", "CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
        }
        else
        {
            PacketHeader* rpkt = pkt;
            Packet_DBMW_Change_Char_Name pkt2;
            *(char*)((char*)&pkt2 + 0xa) = (char)m_pclApp->Get_ServerGroup();
            *(unsigned int*)((char*)&pkt2 + 0xb) = *(unsigned int*)((char*)pkt + 0xe);
            memcpy((char*)&pkt2 + 0xf, (char*)pkt + 0x16, 0x1d);
            m_pclApp->Get_ServerHandler()->SendToDB(&pkt2);
            unsigned int dbid = *(unsigned int*)((char*)pkt + 0xe);
            CUserManager* userMgr = m_pclApp->Get_UserManager();
            userMgr->ChangeBlackListCharName(dbid, (char*)pkt + 0x16);
            std::vector<unsigned int> vec;
            ((CBuddyRegisterManager*)((char*)m_pclApp + 0x300))
                ->findBuddyRegister(*(unsigned int*)((char*)pkt + 0xe), vec);
            for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end(); ++it)
            {
                CUser* user = userMgr->FindUser_CharNo(*it);
                if (user != 0)
                {
                    std::string name((char*)pkt + 0x16);
                    user->SetBuddyCharName(*(int*)((char*)pkt + 0xe), name);
                }
            }
            std::string name2((char*)pkt + 0x16);
            ((CMemoryCashManager*)m_pclApp->Get_MemoryCashManager())->InsertUpdatedCharacName(
                *(unsigned int*)((char*)pkt + 0xe), name2);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1363,"./log/Except", "CPacketTranslater::OnChangeCharName Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1368, "./log/Except", "CPacketTranslater::OnChangeCharName Exception Break\n");
    }
}
void CPacketTranslater::OnNotifyAuctionMail(PacketHeader* pkt)
{
    try
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            *(unsigned int*)((char*)pkt + 0xe) = user->GetIdByChannel();
            user->SendToGameserver((char*)pkt, 0x26);
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x137e, "%s", "%s", "OnNotifyAuctionMail");
    }
}
void CPacketTranslater::OnPvPChannelInfo(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            Packet_PvPChannelUserCount pkt2;
            *(unsigned int*)((char*)&pkt2 + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
            *(unsigned int*)((char*)&pkt2 + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
            *(unsigned int*)((char*)&pkt2 + 0x12) = *(unsigned int*)((char*)pkt + 0x12);
            m_pclApp->Get_ServerGroup();
            CServerHandler* handler = (CServerHandler*)((char*)m_pclApp + 0xa0);
            int count = handler->SendAllTcpGameServer(
                &pkt2, (int)(unsigned char)*(char*)((char*)pkt + 0x16));
            user->ResetChannelUserCount(count);
            if (count == 0 || *(int*)((char*)pkt + 0x12) == 0)
            {
                Packet_PvPChannelInfo reply;
                *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
                *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
                *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)((char*)pkt + 0x12);
                *(char*)((char*)&reply + 0x17) = 0;
                *(unsigned short*)((char*)&reply + 2) =
                    (unsigned short)((0 << 4) + 0x18);
                user->SendTcpGameserver(&reply);
            }
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x13aa, "./log/Except", "%s Exception Break\n", "OnPvPChannelInfo");
    }
}
void CPacketTranslater::OnPvPChannelUserCount(PacketHeader* pkt)
{
    try
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            user->SetChannelUserCount(*(int*)((char*)pkt + 0x16), *(int*)((char*)pkt + 0x1a),
                                      *(int*)((char*)pkt + 0x22), *(int*)((char*)pkt + 0x26));
            if (user->IsCompleteChannelUserCount())
            {
                Packet_PvPChannelInfo reply;
                *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
                *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
                *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)((char*)pkt + 0x12);
                unsigned char count = 0xff;
                user->GetChannelUserCount((STPvPChannelInfo*)((char*)&reply + 0x18), count);
                *(unsigned short*)((char*)&reply + 2) =
                    (unsigned short)((unsigned int)count * 0x10 + 0x18);
                user->SendTcpGameserver(&reply);
            }
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x13d3, "./log/Except", "%s Exception Break\n", "OnPvPChannelUserCount");
    }
}
void CPacketTranslater::OnChannelType(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        try
        {
            unsigned int channel = *(unsigned int*)((char*)pkt + 0xe);
            if (m_pclApp->FindGameServer((int)channel) == 0)
            {
                throw CDNFException("CPacketTranslater::OnChannelType : pclGameServer == 0");
            }
            CTcpGameServer* tcpGs =
                (CTcpGameServer*)m_pclApp->FindTcpGameServer(channel);
            if (tcpGs != 0)
            {
                tcpGs->SetChannelType(*(int*)((char*)pkt + 0xe));
            }
        }
        catch (CDNFException& e)
        {
            DNF_LOG_SCOPE_LINE(0x1b21, "%s", "CPacketTranslater::OnChannelType() Exception Break : %s\n", e.what());
        }
        catch (...)
        {
            DNF_LOG_SCOPE_LINE(0x1b26, "%s", "CPacketTranslater::OnChannelType() Exception Break");
        }
    }
}
void CPacketTranslater::OnServerMessageInfo(PacketHeader* pkt)
{
    DNF_LOG_SCOPE_LINE(0x1402, "./log/ServerEvent", "Packet_Monitor_Server_Message_Info");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x5f);
}
void CPacketTranslater::OnRequestReloadPowerWarRanker(PacketHeader* pkt)
{
    DNF_LOG_SCOPE_LINE(0x1418, "./log/ServerEvent", "Packet_Request_Reload_Power_War_Ranker");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onLoadPunishUserReq(PacketHeader* pkt)
{
    DNF_LOG_SCOPE_LINE(0x142d, "./log/Secu", "Punish User Request");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x4bd);
}
void CPacketTranslater::onIPCounterControl(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::onIPCounterControl : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0x1448,"./log/Secu", "IPCounterControl - type : %d, value : %d ",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
    CIPCounter* counter = (CIPCounter*)m_pclApp->getIPCounter();
    counter->setOption(*(unsigned char*)((char*)pkt + 0xa), *(unsigned char*)((char*)pkt + 0xb));
}
void CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        if (*(char*)((char*)pkt + 0xa) == 0)
        {
            unsigned int grp = *(unsigned int*)((char*)pkt + 0xb);
            if (grp != ((unsigned int)m_pclApp->Get_ServerGroup() & 0xff))
            {
                unsigned int g = *(unsigned int*)((char*)pkt + 0xb);
                DNF_LOG_SCOPE_LINE(0x146d, "./log/ItemLimitEdition", "(Ignore another server msg: %d)", g);
                return;
            }
        }
        else
        {
            *(unsigned int*)((char*)pkt + 0xb) =
                (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
        }
        m_pclApp->Get_ServerHandler()->SendToDB(pkt);
        DNF_LOG_SCOPE_LINE(0x1474,"./log/ItemLimitEdition",
            "(FullLoad: %d, ServerType:%d, LoadTargetNum: %d, IPGNO: "
            "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
            *(unsigned int*)((char*)pkt + 0xb), *(unsigned int*)((char*)pkt + 0xf),
            *(unsigned int*)((char*)pkt + 0x13), *(unsigned int*)((char*)pkt + 0x17),
            *(unsigned int*)((char*)pkt + 0x1b), *(unsigned int*)((char*)pkt + 0x1f),
            *(unsigned int*)((char*)pkt + 0x23), *(unsigned int*)((char*)pkt + 0x27),
            *(unsigned int*)((char*)pkt + 0x2b), *(unsigned int*)((char*)pkt + 0x2f),
            *(unsigned int*)((char*)pkt + 0x33), *(unsigned int*)((char*)pkt + 0x37),
            *(unsigned int*)((char*)pkt + 0x3b), *(unsigned int*)((char*)pkt + 0x3f),
            *(unsigned int*)((char*)pkt + 0x43), *(unsigned int*)((char*)pkt + 0x47),
            *(unsigned int*)((char*)pkt + 0x4b), *(unsigned int*)((char*)pkt + 0x4f),
            *(unsigned int*)((char*)pkt + 0x53), *(unsigned int*)((char*)pkt + 0x57),
            *(unsigned int*)((char*)pkt + 0x5b), *(unsigned int*)((char*)pkt + 0x5f),
            *(unsigned int*)((char*)pkt + 0x63), *(unsigned int*)((char*)pkt + 0x67),
            *(unsigned int*)((char*)pkt + 0x6b), *(unsigned int*)((char*)pkt + 0x6f));
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1494,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1499,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
void CPacketTranslater::onItemLimitEditionLoadDataRpy(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        if (*(int*)((char*)pkt + 0xb) != 0)
        {
            if (*(char*)((char*)pkt + 0xa) != 0)
            {
                m_pclApp->getItemLimitEditionMgr()->clear();
            }
            for (unsigned int i = 0; i < *(unsigned int*)((char*)pkt + 0xb); i++)
            {
                unsigned int ipgno = *(unsigned int*)((char*)pkt + i * 0x48 + 0xf);
                if (ipgno > 799999 && ipgno < 1000000)
                {
                    m_pclApp->getItemLimitEditionMgr()->registItem(
                        *(stItemLimitEditionItemInfo_t*)((char*)pkt + i * 0x48 + 0xf));
                }
            }
            DNF_LOG_SCOPE_LINE(0x14c2,"./log/ItemLimitEdition",
                "(FullLoad: %d, LoadTargetNum: %d, IPGNO: "
                "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
                *(unsigned int*)((char*)pkt + 0xb), *(unsigned int*)((char*)pkt + 0xf),
                *(unsigned int*)((char*)pkt + 0x57), *(unsigned int*)((char*)pkt + 0x9f),
                *(unsigned int*)((char*)pkt + 0xe7), *(unsigned int*)((char*)pkt + 0x12f),
                *(unsigned int*)((char*)pkt + 0x177), *(unsigned int*)((char*)pkt + 0x1bf),
                *(unsigned int*)((char*)pkt + 0x207), *(unsigned int*)((char*)pkt + 0x24f),
                *(unsigned int*)((char*)pkt + 0x297), *(unsigned int*)((char*)pkt + 0x2df),
                *(unsigned int*)((char*)pkt + 0x327), *(unsigned int*)((char*)pkt + 0x36f),
                *(unsigned int*)((char*)pkt + 0x3b7), *(unsigned int*)((char*)pkt + 0x3ff),
                *(unsigned int*)((char*)pkt + 0x447), *(unsigned int*)((char*)pkt + 0x48f),
                *(unsigned int*)((char*)pkt + 0x4d7), *(unsigned int*)((char*)pkt + 0x51f),
                *(unsigned int*)((char*)pkt + 0x567), *(unsigned int*)((char*)pkt + 0x5af),
                *(unsigned int*)((char*)pkt + 0x5f7), *(unsigned int*)((char*)pkt + 0x63f),
                *(unsigned int*)((char*)pkt + 0x687));
            if (m_pclApp->getItemLimitEditionMgr()->isEmpty() != 1)
            {
                Packet_Item_Limit_Edition_Sell_Start pkt2;
                *(char*)((char*)&pkt2 + 0xa) = *(char*)((char*)pkt + 0xa);
                if (*(char*)((char*)pkt + 0xa) == 0)
                {
                    for (unsigned int i = 0; i < *(unsigned int*)((char*)pkt + 0xb); i++)
                    {
                        CItemLimitEdition* item = m_pclApp->getItemLimitEditionMgr()
                                                      ->getItemInfo(
                                                          *(unsigned int*)((char*)pkt +
                                                                           i * 0x48 + 0xf));
                        if (item != 0)
                        {
                            item->makeItemInfo(
                                *(stItemLimitEditionItemInfo_t*)((char*)&pkt2 +
                                                                 i * 0x48 + 0xf));
                            *(int*)((char*)&pkt2 + 0xb) =
                                *(int*)((char*)&pkt2 + 0xb) + 1;
                        }
                    }
                }
                else
                {
                    m_pclApp->getItemLimitEditionMgr()
                        ->makeItemLimitEditionSellStartPacket(pkt2);
                }
                m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&pkt2);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x14f6,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x14fb,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
void CPacketTranslater::onItemLimitEditionSellEnd(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        unsigned int stype = *(unsigned int*)((char*)pkt + 0xa);
        if (stype == ((unsigned int)m_pclApp->Get_ServerGroup() & 0xff))
        {
            for (unsigned int i = 0; i < *(unsigned int*)((char*)pkt + 0xe); i++)
            {
                CItemLimitEdition* item = m_pclApp->getItemLimitEditionMgr()->getItemInfo(
                    *(unsigned int*)((char*)pkt + 0x12 + i * 4));
                if (item != 0)
                {
                    m_pclApp->getItemLimitEditionMgr()->removeItem(
                        *(unsigned int*)((char*)pkt + 0x12 + i * 4));
                }
            }
            DNF_LOG_SCOPE_LINE(0x1519,"./log/ItemLimitEdition",
                "(ServerType: %d, SellEndNum: %d, IPGNO: "
                "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                *(unsigned int*)((char*)pkt + 0xa), *(unsigned int*)((char*)pkt + 0xe),
                *(unsigned int*)((char*)pkt + 0x12), *(unsigned int*)((char*)pkt + 0x16),
                *(unsigned int*)((char*)pkt + 0x1a), *(unsigned int*)((char*)pkt + 0x1e),
                *(unsigned int*)((char*)pkt + 0x22), *(unsigned int*)((char*)pkt + 0x26),
                *(unsigned int*)((char*)pkt + 0x2a), *(unsigned int*)((char*)pkt + 0x2e),
                *(unsigned int*)((char*)pkt + 0x32), *(unsigned int*)((char*)pkt + 0x36),
                *(unsigned int*)((char*)pkt + 0x3a), *(unsigned int*)((char*)pkt + 0x3e),
                *(unsigned int*)((char*)pkt + 0x42), *(unsigned int*)((char*)pkt + 0x46),
                *(unsigned int*)((char*)pkt + 0x4a), *(unsigned int*)((char*)pkt + 0x4e),
                *(unsigned int*)((char*)pkt + 0x52), *(unsigned int*)((char*)pkt + 0x56),
                *(unsigned int*)((char*)pkt + 0x5a), *(unsigned int*)((char*)pkt + 0x5e),
                *(unsigned int*)((char*)pkt + 0x62), *(unsigned int*)((char*)pkt + 0x66),
                *(unsigned int*)((char*)pkt + 0x6a), *(unsigned int*)((char*)pkt + 0x6e));
            m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
        }
        else
        {
            unsigned int v = *(unsigned int*)((char*)pkt + 0xa);
            DNF_LOG_SCOPE_LINE(0x150a, "./log/ItemLimitEdition", "(Ignore another server msg: %d)", v);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x153a,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x153f,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
void CPacketTranslater::onItemLimitEditionBuyableRequest(PacketHeader* pkt)
{
    try
    {
        CTcpGameServer* tcp = (CTcpGameServer*)m_pclApp->FindTcpGameServer(
            *(unsigned int*)((char*)pkt + 6));
        if (tcp != 0)
        {
            time_t now = time(0);
            char* buf = tcp->makePacketHeader(0x100a, 0x1e1);
            if (buf != 0)
            {
                CItemLimitEdition* item = m_pclApp->getItemLimitEditionMgr()->getItemInfo(
                    *(unsigned int*)((char*)pkt + 0xe));
                bool expired = (item == 0 || item->getSellEndTime() < (unsigned int)now);
                if (expired)
                {
                    *(unsigned int*)(buf + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
                    buf[0x16] = 1;
                    tcp->SendToGameServer(buf);
                }
                else
                {
                    *(unsigned int*)(buf + 0xa) = *(unsigned int*)((char*)pkt + 0xa);
                    *(unsigned int*)(buf + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
                    if (item->isSellComplete() == 0)
                    {
                        unsigned int num = *(unsigned int*)((char*)pkt + 0xe);
                        m_pclApp->getItemLimitEditionMgr()->updateItem(
                            num, item->getSellNum() + 1);
                        buf[0x16] = 0;
                    }
                    else
                    {
                        buf[0x16] = 2;
                    }
                    *(unsigned int*)(buf + 0x12) = item->getSellNum();
                    memcpy(buf + 0x17, (char*)pkt + 0x12, 0x1ca);
                    tcp->SendToGameServer(buf);
                    if (item->isSellComplete())
                    {
                        m_pclApp->getItemLimitEditionMgr()->processScheduledJob(m_pclApp,
                                                                                true);
                    }
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1599,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x159e,"./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}
void CPacketTranslater::OnMonitorFindFactoryHubUser(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnMonitorFindFactoryHubUser : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    int targetCharNo = 0;
    if (*(char*)((char*)pkt + 0xe) != 0 &&
        (unsigned char)*(char*)((char*)pkt + 0xe) < 0x1e)
    {
        CUser* target = userMgr->FindUser_CharName((char*)pkt + 0xf);
        targetCharNo = target != 0 ? (int)target->GetUniqCharNo() : -1;
    }
    if (targetCharNo != 0)
    {
        CUser* userA = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
        if (userA != 0)
        {
            Packet_Notice_Find_Factory_Hub_User reply;
            CUser* userB = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
            if (userB == 0)
            {
                reply.m_idByChannel = userA->GetIdByChannel();
                reply.m_found = 0;
                reply.m_nameLen = *(unsigned char*)((char*)pkt + 0xe);
                strncpy(reply.m_name, (char*)pkt + 0xf,
                        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
                reply.m_field2e = *(unsigned short*)((char*)pkt + 0x2d);
                reply.m_field30 = *(unsigned int*)((char*)pkt + 0x2f);
                *(unsigned short*)((char*)&reply + 2) = 0x34;
                userA->SendToGameserver((char*)&reply, 0x34);
            }
            else
            {
                reply.m_idByChannel = userB->GetIdByChannel();
                reply.m_found = 1;
                reply.m_nameLen = 0;
                reply.m_field2e = *(unsigned short*)((char*)pkt + 0x2d);
                reply.m_field30 = *(unsigned int*)((char*)pkt + 0x2f);
                *(unsigned short*)((char*)&reply + 2) = 0x34;
                userB->SendToGameserver((char*)&reply, 0x34);
            }
        }
        return;
    }
    throw CDNFException("CPacketTranslater::OnMonitorFindFactoryHubUser");
}
void CPacketTranslater::OnSetCleanPadPoint(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnSetCleanPadPoint : 0 == m_pclApp");
        }
        int charNo = 0;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            charNo = -1;
        }
        else
        {
            charNo = (int)user->GetUniqCharNo();
        }
        if (charNo != 0)
        {
            CUser* target = ((CUserManager*)((char*)m_pclApp + 0x10))
                                ->FindUser_CharNo((unsigned int)charNo);
            if (target != 0)
            {
                Packet_Set_CleanPad_Point reply;
                reply.m_idByChannel = target->GetIdByChannel();
                reply.m_fieldE = *(unsigned short*)((char*)pkt + 0xe);
                *(unsigned short*)((char*)&reply + 2) = 0x10;
                target->SendToGameserver((char*)&reply, 0x10);
            }
            return;
        }
        throw CDNFException("CPacketTranslater::OnSetCleanPadPoint");
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1660, "%s", "CPacketTranslater::OnSetCleanPadPoint() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break");
        DNF_LOG_SCOPE_LINE(0x1666, "%s", "CPacketTranslater::OnSetCleanPadPoint() Exception Break");
    }
}
void CPacketTranslater::OnResponseIPCounterList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnResponseIPCounterList : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0x16c8,"./log/Secu", "[IP Counter] DataStats : %d, DataSize : %d ",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
}
void CPacketTranslater::OnResponseFullIPCounterList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnResponseFullIPCounterList : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0x16e8,"./log/Secu", "[D_IP Counter] DataStats : %d, DataSize : %d ",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
}
void CPacketTranslater::OnTakeScreenShot(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnTakeScreenShot : 0 == m_pclApp");
        }
        char buf[15];
        *(unsigned int*)buf = *(unsigned int*)pkt;
        *(unsigned int*)(buf + 4) = *(unsigned int*)((char*)pkt + 4);
        *(unsigned int*)(buf + 8) = *(unsigned int*)((char*)pkt + 8);
        *(unsigned short*)(buf + 0xc) = *(unsigned short*)((char*)pkt + 0xc);
        *(char*)(buf + 0xe) = *(char*)((char*)pkt + 0xe);
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        if (*(char*)((char*)pkt + 0xa) == 0)
        {
            handler->SendAllToGameServer(buf, *(unsigned short*)((char*)pkt + 2));
        }
        else
        {
            handler->SendToGameServer(*(unsigned char*)((char*)pkt + 0xa),
                                      (PacketHeader*)buf);
        }
        DNF_LOG_SCOPE_LINE(0x1710,"./log/ScreenShot", "Recv TakeScreenShot Command! channel(%d) time(%d)",
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
            *(unsigned int*)((char*)pkt + 0xb));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnTakeScreenShot() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1717, "%s", "CPacketTranslater::OnTakeScreenShot() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnTakeScreenShot() Exception Break");
        DNF_LOG_SCOPE_LINE(0x171d, "%s", "CPacketTranslater::OnTakeScreenShot() Exception Break");
    }
}
void CPacketTranslater::OnVillageMonsterFightResult(PacketHeader* pkt)
{
    unsigned int users[4] = {0, 0, 0, 0};
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    for (int i = 0; i < 4; i++)
    {
        unsigned int key = *(unsigned int*)((char*)pkt + (i + 4) * 4 + 10);
        if (key != 0)
        {
            users[i] = (unsigned int)userMgr->FindUser_CharNo(key);
        }
    }
}
void CPacketTranslater::OnVillageAttackedGMCommand(PacketHeader* pkt)
{
    try
    {
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
            *(unsigned int*)((char*)pkt + 0xe));
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1764,"%s", "CPacketTranslater::OnVillageAttackedGMCommand() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1769, "%s", "CPacketTranslater::OnVillageAttackedGMCommand() Exception Break\n");
    }
}
void CPacketTranslater::OnVillageAttackedRank(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorFullLevelBroadCast(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
    }
}
void CPacketTranslater::OnSetARSInfo(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnSetARSInfo : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0x183d, "./log/Secu", "[ARS_INFO] DBMW -> Monitor -> GameSvr");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x4bf);
}
void CPacketTranslater::OnWebRequestARSInfo(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnWebRequestARSInfo : 0 == m_pclApp");
    }
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    if (handler != 0)
    {
        DNF_LOG_SCOPE_LINE(0x181d, "./log/Secu", "[ARS_INFO] Web -> Monitor -> DBMW");
        handler->SendDBMWRequestARSInfo(*(unsigned char*)((char*)pkt + 0xa));
    }
}
void CPacketTranslater::OnCheckOverlappedAccusation(PacketHeader* pkt)
{
    CTcpGameServer* tcpGs =
        (CTcpGameServer*)m_pclApp->FindTcpGameServer(
            *(unsigned int*)((char*)pkt + 0xa));
    if (tcpGs != 0)
    {
        int type = *(int*)((char*)pkt + 0x12);
        std::string name2((char*)pkt + 0x40);
        std::string name1((char*)pkt + 0x22);
        *(char*)((char*)pkt + 0x15e) = (char)m_pclApp->AddAccusationCharac(
            name1, name2, type, *(char*)((char*)pkt + 0x15e));
        char* buf = tcpGs->makePacketHeader(0x1b66, 0x15f);
        if (buf != 0)
        {
            memcpy(buf, pkt, 0x15f);
            tcpGs->SendToGameServer(buf);
        }
    }
}
void CPacketTranslater::OnGameServerRegist(PacketHeader* pkt)
{
    stServerInfo* info = new stServerInfo;
    *(char*)((char*)info + 0) = *(char*)((char*)pkt + 0xb);
    *(char*)((char*)info + 1) = *(char*)((char*)pkt + 0xc);
    *(char*)((char*)info + 2) = *(char*)((char*)pkt + 0xa);
    *(unsigned short*)((char*)info + 0x14) = *(unsigned short*)((char*)pkt + 0x1d);
    strncpy((char*)info + 3, (char*)pkt + 0xd, 0x10);
    unsigned int sock = *(unsigned int*)((char*)pkt + 6);
    CTcpGameServer* tcp =
        (CTcpGameServer*)m_pclApp->Get_ServerHandler()->GetTcpGameServer(sock);
    if (tcp != 0)
    {
        DNF_LOG_SCOPE_LINE(0x190c,"./log/GameServer", "Get Packet - OnGameServerRegist from Channel:%d",
            (unsigned int)(unsigned char)*(char*)((char*)info + 1));
        if (tcp->GetChannelNo() == 0)
        {
            char* buf = tcp->makePacketHeader(0x1f42, 0xc);
            char* out = 0;
            if (buf != 0)
            {
                out = buf;
            }
            if (m_pclApp->Get_ServerHandler()->RegistGameServer(info) == 1)
            {
                tcp->SetChannelNo((unsigned char)*(char*)((char*)pkt + 0xc));
                CGameServer* gs =
                    m_pclApp->Get_ServerHandler()->GetGameServer(sock);
                gs->SetSocket(*(unsigned int*)((char*)pkt + 6));
                out[0xb] = 0;
                CMyFileLog log2("OnGameServerRegist", 0x1930);
                log2("./log/GameServer", "Game server regist success. Channel: %d",
                     (unsigned int)(unsigned char)*(char*)((char*)info + 1));
            }
            else
            {
                out[0xb] = 1;
                CMyFileLog log2("OnGameServerRegist", 0x1923);
                log2("./log/GameServer",
                     "Game server regist failed. Channel: %d is already exist.",
                     (unsigned int)(unsigned char)*(char*)((char*)info + 1));
            }
            out[0xa] = 0;
            tcp->SendToGameServer(out);
        }
        char* seed = tcp->makePacketHeader(0x27f8, 0xe);
        if (seed != 0)
        {
            *(unsigned int*)(seed + 10) = m_pclApp->getMiniCraneSeed();
            tcp->SendToGameServer(seed);
        }
    }
}
void CPacketTranslater::OnNoCache(PacketHeader* pkt)
{
    if (*(int*)((char*)pkt + 0xa) == 0)
    {
        exchange_server::GetInstanceCacheCharacterMgr()->Reset();
    }
    else
    {
        exchange_server::CACHE_CHARACTER_TYPE type;
        if (exchange_server::GetInstanceCacheCharacterMgr()->GetCacheCharacter(
                *(unsigned int*)((char*)pkt + 0xa), &type) != 0)
        {
            char* s = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
            DNF_LOG_SCOPE_LINE(0x1970,"./log/ExchangeServer", "OnNoCache() (%s,%d,%d)\n", s, type.m_field0,
                type.m_field4);
        }
    }
}
void CPacketTranslater::OnDisableUserOneToOneChat_GM(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        unsigned int channel = *(unsigned int*)((char*)pkt + 0xa);
        if (m_pclApp->isGM_regFromChannel(channel) != 0)
        {
            CUser* target =
                ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharName((char*)pkt + 0x12);
            if (target != 0)
            {
                m_pclApp->DisableChatUserWithGM(channel, target->GetUniqCharNo());
            }
        }
    }
}
void CPacketTranslater::OnFindCharacName_useUID(PacketHeader* pkt)
{
    CTcpGameServer* tcpGs =
        (CTcpGameServer*)m_pclApp->FindTcpGameServer(
            *(unsigned int*)((char*)pkt + 0xe));
    if (tcpGs != 0)
    {
        char* buf = tcpGs->makePacketHeader(0x1f45, 0x34);
        *(unsigned int*)(buf + 10) = *(unsigned int*)((char*)pkt + 10);
        *(unsigned int*)(buf + 0xe) = *(unsigned int*)((char*)pkt + 0xe);
        buf[0x12] = 0;
        buf[0x13] = 0;
        buf[0x14] = 0;
        buf[0x15] = 0;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            char* name = user->GetCharName();
            unsigned int len = (unsigned int)strlen(name);
            *(unsigned int*)(buf + 0x12) = len;
            if (0x1d < *(unsigned int*)(buf + 0x12))
            {
                buf[0x12] = 0;
                buf[0x13] = 0;
                buf[0x14] = 0;
                buf[0x15] = 0;
            }
            if (*(int*)(buf + 0x12) != 0)
            {
                strncpy(buf + 0x16, user->GetCharName(),
                        *(unsigned int*)(buf + 0x12));
            }
        }
        tcpGs->SendToGameServer(buf);
    }
}
void CPacketTranslater::OnRenew_GM_List(PacketHeader* pkt)
{
    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
    if (gm != 0 && pkt != 0)
    {
        if (*(char*)((char*)pkt + 0xa) == 0)
        {
            gm->clearGmList();
        }
        for (int i = 0; i < (int)(char)*(char*)((char*)pkt + 0xb); i++)
        {
            gm->AppendGM_Sys(*(unsigned int*)((char*)pkt + i * 4 + 0xc),
                             *(char*)((char*)pkt + i + 0x5c));
        }
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        handler->SendToDB(pkt);
    }
}
void CPacketTranslater::OnLoadPeriodicMessage(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendToDB(pkt);
    DNF_LOG_SCOPE_LINE(0x19e0, "./log/PeriodicMessage", "Web Request is Arrived and Send Request DBMW");
}
void CPacketTranslater::OnResultLoadPeriodicMessage(PacketHeader* pkt)
{
    try
    {
        unsigned int endHour = *(unsigned int*)((char*)pkt + 0x20e);
        unsigned int startHour = *(unsigned int*)((char*)pkt + 0x20a);
        DNF_LOG_SCOPE_LINE(0x19f7,"./log/PeriodicMessage",
            "DB Load Message : Message(%s), start_hour(%d), end_hour(%d)", (char*)pkt + 0xa,
            startHour, endHour);
        ((CPeriodicMessageMgr*)m_pclApp->GetPeriodicMessageManager())
            ->SetMessageData((char*)pkt + 0xa, (int)startHour, (int)endHour);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a02,"%s", "CPacketTranslater::OnResultLoadPeriodicMessage() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a07, "%s", "CPacketTranslater::OnResultLoadPeriodicMessage() Exception Break");
    }
}
void CPacketTranslater::OnRegisterEventIdx(PacketHeader* pkt)
{
    unsigned int idx = *(unsigned int*)((char*)pkt + 0xa);
    DNF_LOG_SCOPE_LINE(0x1a15,"./log/OnTimeEvent", "OnRegisterEventIdx:result =%d, Eventidx =%d",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe), idx);
    if (*(char*)((char*)pkt + 0xe) != 0)
    {
        ((COnTimeEventManager*)*(void**)((char*)m_pclApp + 800))->SetEventIdx(idx);
    }
}
void CPacketTranslater::OnRegisterEventUserIdx(PacketHeader* pkt)
{
    try
    {
        unsigned short errType = *(unsigned short*)((char*)pkt + 0x12);
        unsigned int idx = *(unsigned int*)((char*)pkt + 0xe);
        unsigned int id = *(unsigned int*)((char*)pkt + 0xa);
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1a35,"./log/OnTimeEvent",
                "OnRegisterEventUserIdx:id = %u , idx = %u, errortype = %d", id, idx,
                (unsigned int)errType);
        }
        else
        {
            unsigned int curIdx =
                ((COnTimeEventManager*)*(void**)((char*)m_pclApp + 800))->GetEvent_Idx();
            DNF_LOG_SCOPE_LINE(0x1a30,"./log/OnTimeEvent",
                "OnRegisterEventUserIdx:id = %u , rcv_idx = %u, cur_idx = %d, errortype = %d",
                id, idx, curIdx, (unsigned int)errType);
        }
        if (*(short*)((char*)pkt + 0x12) == 0 || *(short*)((char*)pkt + 0x12) == 3)
        {
            CUser* user = m_pclApp->Get_UserManager()->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
            if (user != 0)
            {
                user->SetEvent_idx(idx);
                if (*(short*)((char*)pkt + 0x12) == 3)
                {
                    user->Event_idx_modify_state();
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a4a,"%s", "CPacketTranslater::OnRegisterEventUserIdx() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a4f, "%s", "CPacketTranslater::OnRegisterEventUserIdx() Exception Break");
    }
}
void CPacketTranslater::OnRegisterEventItem(PacketHeader* pkt)
{
    try
    {
        PacketHeader* rpkt = pkt;
        unsigned int errortype = (unsigned int)*(unsigned short*)((char*)pkt + 0x12);
        unsigned int cnt = *(unsigned int*)((char*)pkt + 0xe);
        unsigned int idx = *(unsigned int*)((char*)pkt + 0xa);
        DNF_LOG_SCOPE_LINE(0x1a5a,"./log/OnTimeEvent", "OnRegisterEventItem:idx = %u , cnt = %u, errortype = %d",
            idx, cnt, errortype);
        if (*(short*)((char*)pkt + 0x12) == 0)
        {
            if (*(int*)((char*)pkt + 0xa) == 0 || *(int*)((char*)pkt + 0xe) == 0)
            {
                CMyFileLog log2("OnRegisterEventItem", 0x1a66);
                log2("./log/OnTimeEvent", "wrong item data", idx, cnt, errortype);
            }
            else if (m_pclApp != 0)
            {
                COnTimeEventManager* mgr =
                    *(COnTimeEventManager**)((char*)m_pclApp + 0x320);
                mgr->SetEventItem(*(unsigned int*)((char*)pkt + 0xa),
                                  *(unsigned int*)((char*)pkt + 0xe));
                mgr->StartEvent();
            }
        }
        else
        {
            CMyFileLog log3("OnRegisterEventItem", 0x1a60);
            log3("./log/OnTimeEvent", "db error not item", idx, cnt, errortype);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a73,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a78,"./log/Except",
            "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n");
    }
}
void CPacketTranslater::OnResultRegisterEventIdx(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp != 0)
        {
            COnTimeEventManager* mgr =
                (COnTimeEventManager*)*(void**)((char*)m_pclApp + 800);
            unsigned int curIdx = mgr->GetEvent_Idx();
            unsigned int newIdx = *(unsigned int*)((char*)pkt + 0xa);
            DNF_LOG_SCOPE_LINE(0x1a85,"./log/OnTimeEvent",
                "OnResultRegisterEventIdx:event_idx(%d) , cur_idx(%d)", newIdx, curIdx);
            if (mgr->GetEvent_Idx() < newIdx)
            {
                mgr->SetEventIdx(newIdx);
            }
            mgr->SendContinueTimeToGS();
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a92,"%s", "CPacketTranslater::OnResultRegisterEventIdx() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a97, "%s", "CPacketTranslater::OnResultRegisterEventIdx() Exception Break");
    }
}
void CPacketTranslater::OnGameMonitorGMVillageAttacked(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnGameMonitorGMVillageAttacked : 0 == m_pclApp");
    }
    if (*(char*)((char*)pkt + 0xa) == 0)
    {
        village_attacked::SetRealConfig();
    }
    else
    {
        village_attacked::SetGMConfig(*(unsigned int*)((char*)pkt + 0xb),
                                      *(unsigned int*)((char*)pkt + 0xf),
                                      *(unsigned int*)((char*)pkt + 0x13));
    }
}
void CPacketTranslater::OnMonitorPunishCancel(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnMonitorPunishCancel : 0 == m_pclApp");
        }
        int charNo = 0;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            charNo = -1;
        }
        else
        {
            charNo = (int)user->GetUniqCharNo();
        }
        if (charNo != 0)
        {
            CUser* target = ((CUserManager*)((char*)m_pclApp + 0x10))
                                ->FindUser_CharNo((unsigned int)charNo);
            if (target != 0)
            {
                Packet_Punish_Cancel reply;
                reply.m_idByChannel = target->GetIdByChannel();
                reply.m_fieldE = *(unsigned short*)((char*)pkt + 0xe);
                reply.m_field10 = *(unsigned short*)((char*)pkt + 0x10);
                *(unsigned short*)((char*)&reply + 2) = 0x12;
                target->SendToGameserver((char*)&reply, 0x12);
            }
            return;
        }
        throw CDNFException("CPacketTranslater::OnMonitorPunishCancel");
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnMonitorPunishCancel() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1bf5,"%s", "CPacketTranslater::OnMonitorPunishCancel() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnMonitorPunishCancel() Exception Break");
        DNF_LOG_SCOPE_LINE(0x1bfb, "%s", "CPacketTranslater::OnMonitorPunishCancel() Exception Break\n");
    }
}
void CPacketTranslater::OnBroadcastMsg(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1c0c, "./log/WebNotice", "CPacketTranslater::OnBroadcastMsg : 0 == m_pclApp");
        }
        else
        {
            CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
            handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
            DNF_LOG_SCOPE_LINE(0x1c14,"./log/WebNotice", "OnBroadcastMsg : (%s,%d)\n", (char*)pkt + 0xf,
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1c18, "%s", "CPacketTranslater::OnBroadcastMsg Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1c1d, "%s", "CPacketTranslater::OnBroadcastMsg Exception Break");
    }
}
void CPacketTranslater::OnMonitorSecuServiceConnWeb(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnMonitorSecuServiceConnWeb : 0 == m_pclApp");
        }
        int charNo = 0;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user == 0)
        {
            charNo = -1;
        }
        else
        {
            charNo = (int)user->GetUniqCharNo();
        }
        if (charNo != 0)
        {
            CUser* target = ((CUserManager*)((char*)m_pclApp + 0x10))
                                ->FindUser_CharNo((unsigned int)charNo);
            if (target != 0)
            {
                Packet_SecuService_Connect_Web reply;
                memcpy(&reply, pkt, 0x15);
                *(unsigned int*)((char*)&reply + 0xa) = target->GetIdByChannel();
                target->SendToGameserver((char*)&reply,
                                         *(unsigned short*)((char*)&reply + 2));
            }
            return;
        }
        throw CDNFException("CPacketTranslater::OnMonitorSecuServiceConnWeb");
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n",
               e.what());
        DNF_LOG_SCOPE_LINE(0x1c4f,"%s", "CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break");
        DNF_LOG_SCOPE_LINE(0x1c55, "%s", "CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break\n");
    }
}
void CPacketTranslater::OnResetTODAPCInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeMemberChatMsgHyperLink(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeMemberChatMsgHyperLink : 0 == m_pclApp");
    }
    if (*(unsigned int*)((char*)pkt + 0xa) != 0 && *(char*)((char*)pkt + 0x147) != 0)
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                *(unsigned int*)((char*)pkt + 0xa));
        if (user != 0)
        {
            CMember* member =
                ((CMemberManager*)((char*)m_pclApp + 0x2d0))->FindMember(
                    *(unsigned int*)((char*)pkt + 0xa));
            if (member != 0)
            {
                member->NoticeChatMsgToMemberMembersHyperLink(
                    (char*)pkt + 0x148,
                    (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x147),
                    *(unsigned char*)((char*)pkt + 0xe),
                    (hyperlink_item_info*)((char*)pkt + 0xf), user);
            }
        }
        return;
    }
    throw CDNFException(
        "CPacketTranslater::OnNoticeMemberChatMsgHyperLink : packet->m_uMemberID && "
        "packet->m_msgLen");
}
void CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : 0 == m_pclApp");
    }
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    if (*(char*)((char*)pkt + 0x1b) != 0 &&
        (unsigned char)*(char*)((char*)pkt + 0x1b) < 0x1e)
    {
        CUser* target = userMgr->FindUser_CharName((char*)pkt + 0x1c);
        *(unsigned int*)((char*)pkt + 0x17) =
            target != 0 ? target->GetUniqCharNo() : 0xffffffff;
    }
    if (*(unsigned int*)((char*)pkt + 0x13) == 0 ||
        *(unsigned int*)((char*)pkt + 0x17) == 0 ||
        *(char*)((char*)pkt + 0x173) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d71,"./log/Except",
            "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink, sender(%d), "
            "receiver(%d), msglen(%d)",
            *(unsigned int*)((char*)pkt + 0x13), *(unsigned int*)((char*)pkt + 0x17),
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x173));
        throw CDNFException(
            "CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink : packet->m_uSenderCharID "
            "&&  packet->m_uRecverCharID && packet->m_msgLen");
    }
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link reply;
    reply.m_senderCharId = *(unsigned int*)((char*)pkt + 0xa);
    CUser* sender = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0x13));
    if (sender == 0)
    {
        return;
    }
    CUser* receiver = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0x17));
    if (receiver == 0)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        reply.m_type = 1;
        reply.m_itemCount = *(unsigned char*)((char*)pkt + 0x3a);
        for (int i = 0; i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3a); i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        *(unsigned short*)((char*)&reply + 2) = 0x170;
        sender->SendToGameserver((char*)&reply, 0x170);
        return;
    }
    bool blocked = false;
    if (receiver->IsBlackUser(sender->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (!blocked && sender->IsBlackUser(receiver->GetUniqCharNo()) != 0 &&
        m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 1)
    {
        blocked = true;
    }
    if (blocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 2;
        reply.m_itemCount = *(unsigned char*)((char*)pkt + 0x3a);
        for (int i = 0; i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3a); i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        *(unsigned short*)((char*)&reply + 2) = 0x170;
        sender->SendToGameserver((char*)&reply, 0x170);
        return;
    }
    if (m_pclApp->isGM_regFromChannel(sender->GetUniqCharNo()) != 0)
    {
        m_pclApp->AddChattableUserWithGM(sender->GetUniqCharNo(), receiver->GetUniqCharNo());
    }
    bool gmBlocked = false;
    if (m_pclApp->isGM_regFromChannel(receiver->GetUniqCharNo()) != 0)
    {
        if (m_pclApp->isAbleUserChatWithGM(receiver->GetUniqCharNo(),
                                           sender->GetUniqCharNo()) != 1)
        {
            gmBlocked = true;
        }
    }
    if (gmBlocked)
    {
        reply.m_idByChannel = sender->GetIdByChannel();
        reply.m_uniqCharNo = sender->GetUniqCharNo();
        reply.m_type = 3;
        reply.m_itemCount = *(unsigned char*)((char*)pkt + 0x3a);
        for (int i = 0; i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3a); i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        memcpy(reply.m_name, (char*)pkt + 0x1c, 0x1d);
        *(unsigned short*)((char*)&reply + 2) = 0x170;
        sender->SendToGameserver((char*)&reply, 0x170);
    }
    else
    {
        memcpy(reply.m_name, sender->GetCharName(), 0x1d);
        reply.m_idByChannel = receiver->GetIdByChannel();
        reply.m_uniqCharNo = receiver->GetUniqCharNo();
        reply.m_itemCount = *(unsigned char*)((char*)pkt + 0x3a);
        for (int i = 0; i < (int)(unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3a); i++)
        {
            memcpy((char*)reply.m_items + i * 0x68, (char*)pkt + i * 0x68 + 0x3b, 0x68);
        }
        reply.m_msgLen = *(unsigned char*)((char*)pkt + 0x173);
        memcpy(reply.m_msg, (char*)pkt + 0x174,
               (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x173));
        *(unsigned short*)((char*)&reply + 2) =
            (unsigned short)((unsigned char)*(char*)((char*)pkt + 0x173) + 0x170);
        receiver->SendToGameserver((char*)&reply, *(unsigned short*)((char*)&reply + 2));
    }
}
void CPacketTranslater::OnMonitorMegaPhoneMsgHyperLink(PacketHeader* pkt)
{
    *(char*)((char*)pkt + 0xa) = (char)m_pclApp->Get_ServerGroup();
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
}
void CPacketTranslater::onSocialEventRewardItemRequest(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::onSocialEventRewardItemRequest");
    }
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendToDB(pkt);
}
void CPacketTranslater::onSocialEventRewardItemResponse(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemResponse");
        }
        PacketHeader* rpkt = pkt;
        LimitNpcBuyItemManager* mgr = m_pclApp->getLimitNpcBuyItemManager();
        mgr->registItemClear();
        unsigned int i = 0;
        while (i < *(unsigned int*)((char*)pkt + 0xa) && i < 0x1e)
        {
            NpcBuyLimitItem* item = (NpcBuyLimitItem*)((char*)pkt + i * 0xc + 0xe);
            mgr = m_pclApp->getLimitNpcBuyItemManager();
            mgr->registItem(*item);
            unsigned int c = *(unsigned int*)((char*)pkt + i * 0xc + 0x16);
            unsigned int b = *(unsigned int*)((char*)pkt + i * 0xc + 0x12);
            unsigned int a = *(unsigned int*)((char*)pkt + i * 0xc + 0xe);
            DNF_LOG_SCOPE_LINE(0x1dd0,"./log/NpcBuyLimitItem", "Load-> itemId: %d, maxCount: %d, sellCount: %d)",
                a, b, c);
            i++;
        }
        m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1dd8, "./log/Except",
            "CPacketTranslater::onSocialEventRewardItemResponse Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1ddd,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemResponse Exception Break\n");
    }
}
void CPacketTranslater::onSocialEventRewardItemInfo(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemInfo");
        }
        PacketHeader* rpkt = pkt;
        CUser* user =
            m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)((char*)pkt + 0xe));
        if (user == 0)
        {
            unsigned int cn = *(unsigned int*)((char*)pkt + 0x12);
            char* s = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 0);
            DNF_LOG_SCOPE_LINE(0x1dee,"./log/Except",
                "CPacketTranslater::onSocialEventRewardItemInfo(), buyUser(%s), "
                "characNo(%u)",
                s, cn);
            throw CDNFException(
                "CPacketTranslater::onSocialEventRewardItemInfo : Not Exist User characNo");
        }
        int result = m_pclApp->getLimitNpcBuyItemManager()->sellNpcLimitBuyItem(
            (LimitNpcBuyItemInfo*)pkt);
        if (result < 1)
        {
            user->SendTcpGameserver(pkt);
        }
        else
        {
            *(unsigned int*)((char*)pkt + 0x1a) = 0;
            *(int*)((char*)pkt + 0x22) = result;
            user->SendTcpGameserver(pkt);
            unsigned int buyCount = *(unsigned int*)((char*)pkt + 0x1a);
            unsigned int itemId = *(unsigned int*)((char*)pkt + 0x16);
            unsigned int errorNo = *(unsigned int*)((char*)pkt + 0x22);
            unsigned int charNo = *(unsigned int*)((char*)pkt + 0x12);
            DNF_LOG_SCOPE_LINE(0x1dfc,"./log/NpcBuyLimitItem",
                "don\'t sell-> characNo: %u, errorNo: %u, itemId: %u, buyCount: %u)",
                charNo, errorNo, itemId, buyCount);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e06, "./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e0b,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfo() Exception Break\n");
    }
}
void CPacketTranslater::onSocialEventRewardItemInfoAll(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemInfoAll");
        }
        PacketHeader* rpkt = pkt;
        CUser* user =
            m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)((char*)pkt + 0xe));
        if (user == 0)
        {
            unsigned int cn = *(unsigned int*)((char*)pkt + 0x12);
            char* s = NumberToString(*(unsigned int*)((char*)pkt + 0xe), 0);
            DNF_LOG_SCOPE_LINE(0x1e1c,"./log/Except",
                "CPacketTranslater::onSocialEventRewardItemInfoAll(), buyUser(%s), "
                "characNo(%u)",
                s, cn);
            throw CDNFException(
                "CPacketTranslater::onSocialEventRewardItemInfoAll : Not Exist User");
        }
        m_pclApp->getLimitNpcBuyItemManager()->getNpcLimitBuyItemInfoAll(
            (LimitNpcBuyItemInfoAll*)pkt);
        user->SendTcpGameserver(pkt);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e28,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfoAll() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e2d,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemInfoAll() Exception Break\n");
    }
}
void CPacketTranslater::onSocialEventRewardItemUpdate(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onSocialEventRewardItemUpdate");
        }
        PacketHeader* rpkt = pkt;
        LimitNpcBuyItemChangeInfo change;
        if (*(int*)((char*)pkt + 0x16) == 0)
        {
            unsigned int itemId = *(unsigned int*)((char*)pkt + 0xa);
            LimitNpcBuyItemManager* mgr = m_pclApp->getLimitNpcBuyItemManager();
            mgr->getNpcLimitBuyItemCount(itemId, change);
            m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&change);
            m_pclApp->Get_ServerHandler()->SendToDB(pkt);
            unsigned int buyCount = *(unsigned int*)((char*)pkt + 0x12);
            unsigned int itemId2 = *(unsigned int*)((char*)pkt + 0xa);
            unsigned int charNo = *(unsigned int*)((char*)pkt + 0xe);
            DNF_LOG_SCOPE_LINE(0x1e46,"./log/NpcBuyLimitItem",
                "DB Update-> characNo: %u, itemId: %u, buyCount: %u)", charNo, itemId2,
                buyCount);
        }
        else
        {
            m_pclApp->getLimitNpcBuyItemManager()->undoNpcLimitBuyItem(
                (LimitNpcBuyItemUpdate*)pkt);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1e4b, "./log/Except",
            "CPacketTranslater::onSocialEventRewardItemUpdate Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1e50,"./log/Except",
            "CPacketTranslater::onSocialEventRewardItemUpdate Exception Break\n");
    }
}
void CPacketTranslater::onRequestCharacInfoByCharacName(PacketHeader* pkt)
{
    CUser* requester = 0;
    CUser* target = 0;
    if (m_pclApp != 0)
    {
        CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
        PacketHeader* rpkt = pkt;
        try
        {
            requester = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0x1f));
            if (requester != 0)
            {
                Packet_Monitor_Reply_Charac_Info reply;
                *(unsigned int*)((char*)&reply + 0xa) = 0;
                *(unsigned int*)((char*)&reply + 0xe) = requester->GetIdByChannel();
                strncpy((char*)&reply + 0x17, (char*)pkt + 0xa, 0x1d);
                std::string sname((char*)pkt + 0xa);
                target = userMgr->FindUser_CharName(sname);
                bool notfound = (target == 0);
                if (notfound)
                {
                    *(char*)((char*)&reply + 0x16) = 0;
                }
                else
                {
                    CServerInterface* gs = (CServerInterface*)target->GetGameServer();
                    *(char*)((char*)&reply + 0x16) = gs->GetChannelNo();
                    *(unsigned int*)((char*)&reply + 0x12) = target->GetIdByChannel();
                    *(unsigned short*)((char*)&reply + 0x35) = target->GetLevel();
                    *(char*)((char*)&reply + 0x37) = target->GetJob();
                    *(char*)((char*)&reply + 0x38) = target->GetGrowthType();
                }
                requester->SendToGameserver((char*)&reply, 0x39);
            }
        }
        catch (CDNFException& e)
        {
            printf(
                "CPacketTranslater::onRequestCharacInfoByCharacName() Exception Break : %s\n",
                e.what());
            DNF_LOG_SCOPE_LINE(0x1e82,"./log/Except",
                "CPacketTranslater::onRequestCharacInfoByCharacName() Exception Break : %s\n",
                e.what());
        }
    }
}
void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("m_pclApp == 0");
    }
    Packet_Web_Notice_InGame_Advertisement reply;
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(&reply);
    DNF_LOG_SCOPE_LINE(0x1f84,"./log/Web", "OnWebNoticeInGameAD() packet_id(%d)\n",
        (unsigned int)*(unsigned short*)pkt);
}
void CPacketTranslater::onCollectItems(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::onCollectItems");
        }
        char* c = (char*)m_pclApp->getCollectItems();
        unsigned int cur = *(unsigned int*)(c + 4);
        if (cur < *(unsigned int*)c)
        {
            if (*(int*)(c + 4) == 0)
            {
                SendColletItemsReward(*(unsigned int*)((char*)pkt + 0xe),
                                      *(unsigned int*)((char*)pkt + 0xa), (char*)pkt + 0x1b,
                                      (int)(unsigned char)*(char*)((char*)pkt + 0x1a),
                                      TimeGateRewardType::TYPE_0);
            }
            else
            {
                int cur2 = *(int*)(c + 4);
                int add = *(int*)((char*)pkt + 0x12);
                if ((unsigned int)(cur2 + add) < *(unsigned int*)c)
                {
                    int cur3 = *(int*)(c + 4);
                    unsigned int rem = *(unsigned int*)(c + 4);
                    if ((cur3 - rem % 0x14) + 0x14 <=
                        (unsigned int)(*(int*)(c + 4) + *(int*)((char*)pkt + 0x12)))
                    {
                        SendColletItemsReward(*(unsigned int*)((char*)pkt + 0xe),
                                              *(unsigned int*)((char*)pkt + 0xa),
                                              (char*)pkt + 0x1b,
                                              (int)(unsigned char)*(char*)((char*)pkt + 0x1a),
                                              TimeGateRewardType::TYPE_1);
                    }
                }
                else
                {
                    SendColletItemsReward(*(unsigned int*)((char*)pkt + 0xe),
                                          *(unsigned int*)((char*)pkt + 0xa),
                                          (char*)pkt + 0x1b,
                                          (int)(unsigned char)*(char*)((char*)pkt + 0x1a),
                                          TimeGateRewardType::TYPE_2);
                    char* c2 = (char*)m_pclApp->getCollectItems();
                    *(long*)(c2 + 8) = (long)time(0);
                }
            }
            char* c3 = (char*)m_pclApp->getCollectItems();
            *(int*)(c3 + 4) = *(int*)(c3 + 4) + *(int*)((char*)pkt + 0x12);
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1fcb, "%s", "CPacketTranslater::onCollectItems() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1fd0, "%s", "CPacketTranslater::onCollectItems() Exception Break");
    }
}
void CPacketTranslater::onCollectItemsResult(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::onCollectItemsResult");
    }
    char* c = (char*)m_pclApp->getCollectItems();
    *(unsigned int*)(c + 4) = *(unsigned int*)((char*)pkt + 0xe);
    *(unsigned int*)c = *(unsigned int*)((char*)pkt + 0xa);
    *(unsigned int*)(c + 8) = *(unsigned int*)((char*)pkt + 0x12);
    *(char*)(c + 0xc) = 0;
}
void CPacketTranslater::onCollectItemsGm(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::onCollectItemsGm");
    }
    *(char*)((char*)pkt + 0xa) = (char)m_pclApp->Get_ServerGroup();
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendToDB(pkt);
}
void CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnPcRoomPlayTimeReward");
    }
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendToDB(pkt);
}
void CPacketTranslater::OnWebEmergencyPatchMessage(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnWebEmergencyPatchMessage");
        }
        PacketHeader* rpkt = pkt;
        for (int i = 0; i < 0x32; i++)
        {
            if (*(char*)((char*)pkt + 10 + i) != 0)
            {
                unsigned char ch = *(unsigned char*)((char*)pkt + 10 + i);
                CTcpGameServer* tcp =
                    m_pclApp->Get_ServerHandler()->GetTcpGameServerByCh(ch);
                if (tcp != 0)
                {
                    char* buf = tcp->makePacketHeader(0x27f2, 0x10a);
                    if (buf != 0)
                    {
                        *(char*)(buf + 10) = *(char*)((char*)pkt + 0x3c);
                        char* out = buf;
                        memset(buf + 0xb, 0, 0xff);
                        memcpy(out + 0xb, (char*)pkt + 0x3d,
                               (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x3c));
                        tcp->SendToGameServer(out);
                    }
                }
            }
        }
        unsigned short pid = *(unsigned short*)pkt;
        DNF_LOG_SCOPE_LINE(0x204a,"./log/Web", "CPacketTranslater::OnWebEmergencyPatchMessage packet_id(%d)",
            (unsigned int)pid);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x204e,"./log/Except",
            "CPacketTranslater::OnWebEmergencyPatchMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x2053, "./log/Except", "CPacketTranslater::OnWebEmergencyPatchMessage Exception Break\n");
    }
}
void CPacketTranslater::OnUpdateMiniCraneSeed(PacketHeader* pkt)
{
    try
    {
        m_pclApp->SetMiniCraneRandomSeed();
        *(unsigned int*)((char*)pkt + 0xa) = (unsigned int)m_pclApp->getMiniCraneSeed();
        if (pkt == 0)
        {
            throw CDNFException("CPacketTranslater::OnUpdateMiniCraneSeed, packet is null");
        }
        if (m_pclApp != 0 && *(int*)((char*)m_pclApp + 0xa0) != 0)
        {
            CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
            handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
            return;
        }
        throw CDNFException("CPacketTranslater::OnUpdateMiniCraneSeed, m_pclApp == 0");
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1b82,"%s", "CPacketTranslater::OnUpdateMiniCraneSeed() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1b87, "%s", "CPacketTranslater::OnUpdateMiniCraneSeed() Exception Break");
    }
}
void CPacketTranslater::onStartGameEventFromServer(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x22e2, "./log/AradOnly", "[Server Event] m_pclApp is null.");
        throw 0x22e3;
    }
    if (pkt == 0)
    {
        DNF_LOG_SCOPE_LINE(0x22e9, "./log/AradOnly", "[Server Event] Packet_StartGameEventFromServer is null.");
        throw 0x22ea;
    }
    Packet_Monitor_Event_Start epkt;
    epkt.m_fieldA = *(unsigned int*)((char*)pkt + 0xa);
    epkt.m_fieldB = *(unsigned short*)((char*)pkt + 0x16);
    epkt.m_fieldC = *(unsigned short*)((char*)pkt + 0x18);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(&epkt);
    DNF_LOG_SCOPE_LINE(0x22f2,"./log/AradOnly", "[Server Event] start event. (event:%d, param:%d,%d)",
        *(unsigned int*)((char*)pkt + 0xa), *(unsigned short*)((char*)pkt + 0x16),
        *(unsigned short*)((char*)pkt + 0x18));
}
void CPacketTranslater::onEndGameEventFromServer(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x2304, "./log/AradOnly", "[Server Event] m_pclApp is null.");
        throw 0x2305;
    }
    if (pkt == 0)
    {
        DNF_LOG_SCOPE_LINE(0x230b, "./log/AradOnly", "[Server Event] Packet_StopGameEventFromServer is null.");
        throw 0x230c;
    }
    Packet_Monitor_Event_End epkt;
    epkt.m_fieldA = *(unsigned int*)((char*)pkt + 0xa);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(&epkt);
    DNF_LOG_SCOPE_LINE(0x2312,"./log/AradOnly", "[Server Event] end event. (event:%d)",
        *(unsigned int*)((char*)pkt + 0xa));
}
void CPacketTranslater::onReloadCountryCode(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(pkt);
    DNF_LOG_SCOPE_LINE(0x2344, "./log/Web", "CPacketTranslater::onReloadCountryCode()\n");
}
void CPacketTranslater::onReloadSecurityRestrictPolicy(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(pkt);
    DNF_LOG_SCOPE_LINE(0x2359, "./log/Web", "CPacketTranslater::onReloadSecurityRestrictPolicy()\n");
}
CPacketDecoder::CPacketDecoder()
{
    int i;
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this + 0x18) = 0;
    for (i = 1000; i < 0x2800; i++)
    {
        m_handlers[i] = 0;
    }
    REG_HANDLER(1000, OnLogin);  // Packet_Monitor_UDP_Login
    REG_HANDLER(1001, OnLogout);  // Packet_Monitor_UDP_Logout
    REG_HANDLER(1002, OnReplyUserInfo);  // Packet_Monitor_UDP_Reply_UserInfo
    REG_HANDLER(1004, OnHeartBeat);  // Packet_Monitor_UDP_HeartBeat
    REG_HANDLER(1007, OnCharLogin);  // Packet_Monitor_Char_Info
    REG_HANDLER(1011, OnNoticeOtherChannelChatMsg);  // Packet_Monitor_Other_Channel_Chat
    REG_HANDLER(1100, OnCeraUpdate);
    REG_HANDLER(1101, OnEventItemUpdate);
    REG_HANDLER(1203, OnReplyQueryMember);
    REG_HANDLER(1207, OnRequestMemberEnter);  // Packet_Monitor_Request_Member_Enter
    REG_HANDLER(1209, OnMemberEnterReply);  // Packet_Monitor_Member_Enter_Reply
    REG_HANDLER(1211, OnMemberSecede);  // Packet_Monitor_Member_Secede
    REG_HANDLER(1214, OnCallMemberList);  // Packet_Monitor_Call_Member_List
    REG_HANDLER(1215, OnNoticeMemberChatMsg);  // Packet_Monitor_Member_Chat
    REG_HANDLER(1216, OnPayTaxToUpper);  // Packet_Monitor_Member_Pay_Tax
    REG_HANDLER(1013, OnUpdateChangableCharInfo);  // Packet_Monitor_Char_Changable_Info
    REG_HANDLER(1012, OnLogoutComplete);  // Packet_Monitor_UDP_Logout_Complete
    REG_HANDLER(1217, OnUserRepel);
    REG_HANDLER(1218, OnCharacterDelete);  // Packet_Monitor_Charac_Delete
    REG_HANDLER(1103, OnEventStart);  // Packet_Monitor_Event_Start
    REG_HANDLER(1104, OnEventEnd);  // Packet_Monitor_Event_End
    REG_HANDLER(1300, OnNotifyNewMail);  // Packet_Monitor_Notify_New_Mail
    REG_HANDLER(2000, OnWebQueryUserState);
    REG_HANDLER(2524, OnNoticeMessage);  // Packet_Monitor_Notice_Message
    REG_HANDLER(2500, OnRelayServerUserCheck);
    REG_HANDLER(2525, OnForbidChat);  // Packet_Forbid_Chat_By_Monitor
    REG_HANDLER(1224, OnNoticeProhibitConnectUser);
    REG_HANDLER(1400, OnMonitorManagerConnectOK);
    REG_HANDLER(1350, OnMonitorMegaPhoneMsg);  // Packet_Monitor_MegaPhone
    REG_HANDLER(1500, OnRegisterToBlackList);  // Packet_Register_To_BlackList
    REG_HANDLER(1501, OnDeleteToBlackList);  // Packet_Delete_To_BlackList
    REG_HANDLER(1504, OnRequestBlackList);  // Packet_Request_BlackList
    REG_HANDLER(1502, OnDBMWResisterToBlackList);
    REG_HANDLER(1503, OnDBMWDeleteToBlackList);
    REG_HANDLER(1505, OnDBMWResponseBlackListOnLogin);
    REG_HANDLER(2526, OnExchangeServerInfo);  // Packet_Exchange_Server_Info
    REG_HANDLER(1600, OnNoticeCharLiveOnTenMin);  // Packet_Monitor_Notice_Charac_Live_On_Ten_Min
    REG_HANDLER(2528, OnWebNoticeSingle);
    REG_HANDLER(1650, OnAddBuddy);  // Packet_Monitor_Add_Buddy
    REG_HANDLER(1651, OnAddBuddyDBReply);
    REG_HANDLER(1652, OnDelBuddy);  // Packet_Monitor_Del_Buddy
    REG_HANDLER(1653, OnDelBuddyDBReply);
    REG_HANDLER(1654, OnQueryBuddyInfoDBReply);
    REG_HANDLER(1014, OnWebChangeUserHandicap);
    REG_HANDLER(1900, OnGMRequestMid);  // Packet_GM_Request_Mid
    REG_HANDLER(1232, OnUserRepelByCharName);  // Packet_Monitor_User_Repel_ByCharName
    REG_HANDLER(1229, onReplyLoadTowerFullRank);
    REG_HANDLER(1230, onRequestCharacTowerUpdateRank);  // Packet_Request_Charac_Tower_Update_Ranking
    REG_HANDLER(1231, onRequestReloadTowerRanker);
    REG_HANDLER(2900, onWebReqReloadAutoPunishRule);
    REG_HANDLER(4000, OnInnerPacketLogin);
    REG_HANDLER(4001, OnInnerPacketLogout);
    REG_HANDLER(2700, OnNoticeSlang);
    REG_HANDLER(2901, onLoadCleanPadPoint);
    REG_HANDLER(2902, onLoadBlackIPMonitor);
    REG_HANDLER(2903, onLoadBlackIPMonitorPartLoad);
    REG_HANDLER(2904, onLoadBlackIPMonitorDeleteIP);
    REG_HANDLER(1105, OnChangeCharName);  // Packet_Change_Char_Name
    REG_HANDLER(3100, OnNotifyAuctionMail);
    REG_HANDLER(4002, OnPvPChannelInfo);  // Packet_PvPChannelInfo
    REG_HANDLER(4003, OnPvPChannelUserCount);  // Packet_PvPChannelUserCount
    REG_HANDLER(4004, OnChannelType);  // Packet_ChannelType
    REG_HANDLER(4014, OnServerMessageInfo);  // Packet_Monitor_Server_Message_Info
    REG_HANDLER(1770, OnRequestReloadPowerWarRanker);
    REG_HANDLER(2910, onLoadPunishUserReq);
    REG_HANDLER(2911, onIPCounterControl);
    REG_HANDLER(4103, onItemLimitEditionLoadDataReq);
    REG_HANDLER(4104, onItemLimitEditionLoadDataRpy);
    REG_HANDLER(4101, onItemLimitEditionSellEnd);
    REG_HANDLER(4105, onItemLimitEditionBuyableRequest);  // Packet_Item_Limit_Edition_Buyable_Query
    REG_HANDLER(4110, OnMonitorFindFactoryHubUser);  // Packet_Monitor_Find_Factory_Hub_User
    REG_HANDLER(2912, OnSetCleanPadPoint);
    REG_HANDLER(4153, OnResponseIPCounterList);
    REG_HANDLER(4154, OnResponseFullIPCounterList);
    REG_HANDLER(2515, OnTakeScreenShot);
    REG_HANDLER(6002, OnVillageMonsterFightResult);  // Packet_VillageMonsterFightResult
    REG_HANDLER(6009, OnVillageAttackedGMCommand);  // Packet_VillageAttackedGMCommand
    REG_HANDLER(6011, OnVillageAttackedRank);
    REG_HANDLER(6014, OnMonitorFullLevelBroadCast);  // Packet_Monitor_Max_Level_BroadCast
    REG_HANDLER(2913, OnSetARSInfo);
    REG_HANDLER(2914, OnWebRequestARSInfo);
    REG_HANDLER(7014, OnCheckOverlappedAccusation);
    REG_HANDLER(8001, OnGameServerRegist);  // Packet_Game_Server_Regist
    REG_HANDLER(7021, OnNoCache);  // Packet_No_Cache
    REG_HANDLER(8003, OnDisableUserOneToOneChat_GM);  // Packet_Disable_User_OneToOneChat_Police
    REG_HANDLER(8004, OnRegisterGM_mid);  // Packet_Register_GM_MID
    REG_HANDLER(8005, OnFindCharacName_useUID);
    REG_HANDLER(8013, OnRenew_GM_List);  // Packet_Sync_GM_List
    REG_HANDLER(8008, OnLoadPeriodicMessage);
    REG_HANDLER(8009, OnResultLoadPeriodicMessage);
    REG_HANDLER(9025, OnRegisterEventIdx);
    REG_HANDLER(9027, OnRegisterEventUserIdx);
    REG_HANDLER(9030, OnRegisterEventItem);
    REG_HANDLER(9032, OnResultRegisterEventIdx);
    REG_HANDLER(9034, OnGameMonitorGMVillageAttacked);  // Packet_Game_Monitor_GM_Village_Attacked
    REG_HANDLER(2916, OnMonitorPunishCancel);
    REG_HANDLER(10001, OnBroadcastMsg);  // Packet_Broadcast_Msg
    REG_HANDLER(2917, OnMonitorSecuServiceConnWeb);
    REG_HANDLER(10002, OnResetTODAPCInfo);  // Packet_TOD_DoRandomSelect
    REG_HANDLER(10010, OnNoticeMemberChatMsgHyperLink);  // Packet_Monitor_Member_Chat_Hyper_Link
    REG_HANDLER(10009, OnNoticeOtherChannelChatMsgHyperLink);  // Packet_Monitor_Other_Channel_Chat_Hyper_Link
    REG_HANDLER(10011, OnMonitorMegaPhoneMsgHyperLink);  // Packet_Monitor_MegaPhone_Hyper_Link
    REG_HANDLER(10200, onSocialEventRewardItemRequest);
    REG_HANDLER(10204, onSocialEventRewardItemResponse);
    REG_HANDLER(10201, onSocialEventRewardItemInfo);
    REG_HANDLER(10202, onSocialEventRewardItemInfoAll);
    REG_HANDLER(10205, onSocialEventRewardItemUpdate);
    REG_HANDLER(10206, onRequestCharacInfoByCharacName);  // Packet_Monitor_Request_Charac_Info
    REG_HANDLER(10210, OnWebNoticeInGameAD);
    REG_HANDLER(10214, onCollectItems);  // Packet_CollectItems
    REG_HANDLER(10215, onCollectItemsResult);
    REG_HANDLER(10219, onCollectItemsGm);  // Packet_CollectItemsGm
    REG_HANDLER(10220, OnPcRoomPlayTimeReward);  // Packet_PcRoomPlayTimeReward
    REG_HANDLER(10225, OnWebEmergencyPatchMessage);
    REG_HANDLER(10232, OnUpdateMiniCraneSeed);  // Packet_MiniCraneSeed
    REG_HANDLER(10235, onStartGameEventFromServer);
    REG_HANDLER(10236, onEndGameEventFromServer);
    REG_HANDLER(10238, onReloadCountryCode);
    REG_HANDLER(10239, onReloadSecurityRestrictPolicy);
}

CPacketDecoder::~CPacketDecoder() {}

void CPacketDecoder::Attach(CApplication* app) {}
void CPacketDecoder::Process() {}
void CPacketDecoder::TcpProcess()
{
    if (*(void**)((char*)this + 0xc) != 0 && *(void**)((char*)this + 0x10) != 0)
    {
        CTcpRecvBuffer* buf = 0;
        while (true)
        {
            do
            {
                if (((std::queue<CTcpRecvBuffer*>*) * (void**)((char*)this + 0xc))->empty())
                {
                    return;
                }
                buf = ((std::queue<CTcpRecvBuffer*>*) * (void**)((char*)this + 0xc))->front();
                ((std::queue<CTcpRecvBuffer*>*) * (void**)((char*)this + 0xc))->pop();
            } while (buf == 0);
            CTcpRecvBuffer* pkt = buf;
            int qsize = ((std::queue<CTcpRecvBuffer*>*) * (void**)((char*)this + 0xc))->size();
            CAppLoadChecker* checker = CAppLoadCheckerInstance();
            if (checker->CheckTcpRecvQ(qsize))
            {
                checker->RequestDB((CServerHandler*)*(void**)((char*)this + 0x18), 1, qsize);
            }
            if (MsgDecode((PacketHeader*)buf) != 1)
            {
                break;
            }
            {
                CGuard<CMutex> guard((CMutex*) * (void**)((char*)this + 0x14));
                delete buf;
            }
        }
        {
            CGuard<CMutex> guard((CMutex*) * (void**)((char*)this + 0x14));
            delete buf;
        }
        printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n", buf,
               *(unsigned short*)buf);
        throw CDNFException(
            "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
    }
    throw CDNFException("CPacketDecoder is Not Ready!\n");
}
void CPacketDecoder::UdpProcess()
{
    if (*(void**)this != 0 && *(void**)((char*)this + 4) != 0)
    {
        CUdpRecvBuffer* buf = 0;
        while (true)
        {
            do
            {
                if (((std::queue<CUdpRecvBuffer*>*) * (void**)this)->empty())
                {
                    return;
                }
                buf = ((std::queue<CUdpRecvBuffer*>*) * (void**)this)->front();
                ((std::queue<CUdpRecvBuffer*>*) * (void**)this)->pop();
            } while (buf == 0);
            CUdpRecvBuffer* pkt = buf;
            int qsize = ((std::queue<CUdpRecvBuffer*>*) * (void**)this)->size();
            CAppLoadChecker* checker = CAppLoadCheckerInstance();
            if (checker->CheckUdpRecvQ(qsize))
            {
                checker->RequestDB((CServerHandler*)*(void**)((char*)this + 0x18), 2, qsize);
            }
            if (MsgDecode((PacketHeader*)pkt) != 1)
            {
                break;
            }
            {
                CGuard<CMutex> guard((CMutex*) * (void**)((char*)this + 8));
                delete buf;
            }
        }
        {
            CGuard<CMutex> guard((CMutex*) * (void**)((char*)this + 8));
            delete buf;
        }
        printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n", buf,
               *(unsigned short*)buf);
        throw CDNFException(
            "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
    }
    throw CDNFException("CPacketDecoder is Not Ready!\n");
}
char CPacketDecoder::MsgDecode(PacketHeader* pkt)
{
    if (pkt == 0)
    {
        return 0;
    }
    unsigned short id = *(unsigned short*)pkt;
    if (id < 0x2800 && 999 < id)
    {
        static CPacketCounter<1000, 10240> packet_counter(0, "PacketDispatcher");
        packet_counter.IncrementPacketCount(id);
        void* handler = m_handlers[id];
        if (handler == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1db,"./log/Decoder",
                "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.<0 == m_decodProcFunc>\n",
                id);
            return 0;
        }
        packet_counter.BeforeProcess();
        ((void(*)(PacketHeader*))handler)(pkt);
        packet_counter.AfterProcess(id);
        return 1;
    }
    printf("Undefined Packet Err : Game Message with identifier %d has arrived.\n", id);
    DNF_LOG_SCOPE_LINE(0x1fa,"./log/Decoder",
        "Undefined Packet Err: CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
        id);
    return 0;
}

CPacketDecoder* CPacketDecoderInstance() { return 0; }
CSignalTranslator* CSignalTranslatorInstance() { return 0; }
CSignalTranslator::CSignalTranslator() {}
CSignalTranslator::~CSignalTranslator() {}
void CSignalTranslator::init(CApplication* app)
{
    try
    {
        init_signal();
        init_handler(app);
    }
    catch (CDNFException& e)
    {
        printf("CSignalTranslator::init() Exception : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CSignalTranslator::init() Exception");
        throw;
    }
}
void CSignalTranslator::init_signal()
{
    if (!regist_signal(0xf, signal_handler))
        throw CDNFException("regist_signal():SIGTERM");
    if (!regist_signal(10, signal_handler))
        throw CDNFException("regist_signal():SIGUSR1");
    if (!regist_signal(0xc, signal_handler))
        throw CDNFException("regist_signal():SIGUSR2");
    if (!regist_signal(2, (void (*)(int))1))
        throw CDNFException("regist_signal():SIGINT");
    if (!regist_signal(0xb, signal_handler))
        throw CDNFException("regist_signal():SIGSEGV");
    if (!regist_signal(8, signal_handler))
        throw CDNFException("regist_signal():SIGFPE");
    if (!regist_signal(0xd, (void (*)(int))1))
        throw CDNFException("regist_signal():SIGPIPE");
    if (!regist_signal(4, signal_handler))
        throw CDNFException("regist_signal():SIGILL");
    if (!regist_signal(7, signal_handler))
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
    void** table = (void**)this;
    CTerminateSig* term = new CTerminateSig;
    table[0xf] = term;
    term->attachApp(app);
    for (int i = 0; i < 0x1a; i++)
    {
        table[i] = term;
    }
    CSegmentationFaultSig* segv = new CSegmentationFaultSig;
    table[0x6] = segv;
    segv->attachApp(app);
    table[0xb] = segv;
    table[0x8] = segv;
    table[0x2] = segv;
    CUser1Sig* u1 = new CUser1Sig;
    table[0xa] = u1;
    u1->attachApp(app);
    CUser2Sig* u2 = new CUser2Sig;
    table[0xc] = u2;
    u2->attachApp(app);
    CSystemFailSig* fail = new CSystemFailSig;
    table[0x4] = fail;
    fail->attachApp(app);
    table[0x7] = fail;
    table[0x17] = fail;
    table[0x10] = fail;
    table[0x18] = fail;
    table[0x19] = fail;
    table[0x1f] = fail;
}
bool CSignalTranslator::regist_signal(int sig, void (*handler)(int))
{
    struct sigaction sa;
    struct sigaction old;
    sigset_t mask;
    sa.sa_handler = handler;
    sigemptyset(&mask);
    int flags = (sig == 0xe) ? 0x20000000 : 0x10000000;
    int r = sigaction(sig, &sa, &old);
    if (r < 0)
    {
        printf("regist signal error %d\n", sig);
    }
    return r >= 0;
}
void* CSignalTranslator::getSignal(int sig) const
{
    return *(void**)((char*)this + sig * 4);
}
void CSignalTranslator::clear()
{
    void** table = (void**)this;
    if (table[0x4] != 0)
    {
        (*(void(**)(void*))(*(void**)table[0x4] + 8))(table[0x4]);
        table[0x4] = 0;
    }
    if (table[0xa] != 0)
    {
        (*(void(**)(void*))(*(void**)table[0xa] + 8))(table[0xa]);
        table[0xa] = 0;
    }
    if (table[0xc] != 0)
    {
        (*(void(**)(void*))(*(void**)table[0xc] + 8))(table[0xc]);
        table[0xc] = 0;
    }
    if (table[0x6] != 0)
    {
        (*(void(**)(void*))(*(void**)table[0x6] + 8))(table[0x6]);
        table[0x6] = 0;
    }
    if (table[0xf] != 0)
    {
        (*(void(**)(void*))(*(void**)table[0xf] + 8))(table[0xf]);
        table[0xf] = 0;
    }
}

void signal_handler(int sig)
{
    CSignalTranslator* st = CSignalTranslatorInstance();
    void* sigObj = st->getSignal(sig);
    void (**fn)(void*, int) = *(void(***)(void*, int))sigObj;
    fn[0](sigObj, sig);
}

void CSignal::attachApp(CApplication* app)
{
    m_app = app;
}
void CSignal::handle(int sig) {}

CTerminateSig::CTerminateSig() {}
CTerminateSig::~CTerminateSig() {}
void CTerminateSig::handle(int sig)
{
    puts("Recv SIGTERM signal");
    if (m_app != 0)
    {
        m_app->App_Stop();
    }
}

CSegmentationFaultSig::CSegmentationFaultSig() {}
CSegmentationFaultSig::~CSegmentationFaultSig() {}
void CSegmentationFaultSig::handle(int sig) {}

CUser1Sig::CUser1Sig() {}
CUser1Sig::~CUser1Sig() {}
void CUser1Sig::handle(int sig) {}

CUser2Sig::CUser2Sig() {}
CUser2Sig::~CUser2Sig() {}
void CUser2Sig::handle(int sig) {}

CSystemFailSig::CSystemFailSig() {}
CSystemFailSig::~CSystemFailSig() {}
void CSystemFailSig::handle(int sig)
{
    puts("Recv SIGSYS signal");
    puts("Recv SIGSYS signal --> make Dump Core file.");
    if (m_app != 0)
    {
        m_app->App_Stop();
    }
    CSignal::dump_core_file();
    exit(-1);
}

CTaskScheduler::CTask::~CTask() {}
CTaskScheduler::CTask::CTask(unsigned int tick, unsigned int flag)
{
    m_tick = tick;
    m_flag = flag;
    m_taskID = 0;
}
CTaskScheduler::CTaskScheduler() {}
CTaskScheduler::~CTaskScheduler() {}
int CTaskScheduler::AddTask(CTask* task)
{
    CTaskProxy proxy(task);
    m_queue.push(proxy);
    return 1;
}
void CTaskScheduler::ProcessTask(unsigned int tick)
{
    if (!m_queue.empty())
    {
        CTaskProxy proxy = m_queue.top();
        if (proxy.GetDeliveryTime() <= tick)
        {
            m_queue.pop();
            printf("m_queTask pop size(%d)\n", (unsigned int)m_queue.size());
            proxy.DoExcute();
            proxy.Destroy();
        }
    }
}

unsigned int get_rand_int(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return rand();
    }
    int r = rand();
    if (n < r)
    {
        r = rand();
        return (unsigned int)r % (unsigned int)n;
    }
    int a = r * 0x41c64e6d + 0x3039;
    int b = a * 0x41c64e6d + 0x3039;
    int c = b * 0x41c64e6d + 0x3039;
    unsigned int u = ((((int)(((unsigned int)(a >> 31) >> 16) + a) >> 16) & 0x7ff) << 10 ^
                      (((int)(((unsigned int)(b >> 31) >> 16) + b) >> 16) & 0x3ff)) << 10 ^
                     ((int)(((unsigned int)(c >> 31) >> 16) + c) >> 16) & 0x3ff;
    if ((unsigned int)n < u)
    {
        u = u % (unsigned int)n;
    }
    return u;
}

int CTask_ChristmasEvent::DecideEventTime()
{
    int hours[25] = {
        0, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
        23, 24, 1, 2, 3, 4, 5
    };
    unsigned int weight[25] = {
        0, 1449, 2898, 4348, 7246, 10145, 13043, 17391, 23188, 28985,
        34782, 42029, 49275, 56521, 63768, 69565, 75362, 81159, 85507,
        89855, 92753, 95652, 97101, 98550, 100000
    };
    unsigned int r = get_rand_int(100000);
    int i = 1;
    while (i <= 24)
    {
        if (r < (unsigned int)weight[i] && (unsigned int)weight[i - 1] < r)
        {
            break;
        }
        i++;
    }
    return hours[i];
}

unsigned int CTask_ChristmasEvent::getEventStartTime() { return 0x47698650; }
long long CTask_ChristmasEvent::getEventEndTime() { return 0x47726c70; }

unsigned int CTask_ChristmasEvent::MakeEventStartTick(int param_1)
{
    int eventHour = DecideEventTime();
    time_t now = time(0);
    tm* pt = localtime(&now);
    int sec = pt->tm_sec;
    int min = pt->tm_min;
    int hour = pt->tm_hour;
    int mday = pt->tm_mday;
    int mon = pt->tm_mon;
    int year = pt->tm_year;
    int wday = pt->tm_wday;
    int yday = pt->tm_yday;
    int isdst = pt->tm_isdst;
    long gmtoff = pt->tm_gmtoff;
    char* zone = (char*)pt->tm_zone;

    if (now < (time_t)getEventStartTime())
    {
        tm t;
        t.tm_mday = mday;
        t.tm_mon = mon;
        t.tm_year = year;
        t.tm_wday = wday;
        t.tm_yday = yday;
        t.tm_isdst = isdst;
        t.tm_gmtoff = gmtoff;
        t.tm_zone = zone;
        t.tm_hour = 0;
        t.tm_min = 0;
        t.tm_sec = 0;
        time_t midnight = mktime(&t);
        param_1 = (int)(((time_t)getEventStartTime() - midnight) / 86400);
    }
    if (param_1 == 0 && eventHour < hour + 1)
    {
        int n = 0;
        while (n < 3 && (eventHour = DecideEventTime(), eventHour < hour + 1))
        {
            n++;
        }
        if (n == 3)
        {
            eventHour = (hour + eventHour + 1) % 25;
        }
    }
    tm t2;
    t2.tm_mon = mon;
    t2.tm_year = year;
    t2.tm_wday = wday;
    t2.tm_yday = yday;
    t2.tm_isdst = isdst;
    t2.tm_gmtoff = gmtoff;
    t2.tm_zone = zone;
    t2.tm_mday = mday + param_1;
    t2.tm_hour = eventHour - 1;
    t2.tm_min = 0;
    t2.tm_sec = 0;
    time_t result = mktime(&t2);
    char* s = ctime(&result);
    DNF_LOG_SCOPE_LINE(0x96, "./log/GameServer", "Next X_Mas Event Time! (%s)", s);
    return (unsigned int)result;
}

void CTask_ChristmasEvent::_DoExecute()
{
    Packet_Monitor_ServerEvent_Start pkt;
    *(int*)((char*)&pkt + 0xa) = 1;
    *(unsigned short*)((char*)&pkt + 0xe) = 0x14;
    *(unsigned short*)((char*)&pkt + 0x12) = 0xe10;
    ((CApplication*)CApplicationInstance())->Get_ServerHandler()->SendAllToGameServer(
        (char*)&pkt, 0x12);
    unsigned int t = MakeEventStartTick(1);
    if (getEventEndTime() < (long long)t)
    {
        DNF_LOG_SCOPE_LINE(0xc3, "./log/GameServer", "End X_Mas Event!");
    }
    else
    {
        CTask_ChristmasEvent* task = new CTask_ChristmasEvent(t, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
        DNF_LOG_SCOPE_LINE(200, "./log/GameServer", "Start X_Mas Event!");
    }
}

CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int tick, unsigned int flag) {}
CTask_ChristmasEvent::~CTask_ChristmasEvent() {}
TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(unsigned int a, unsigned int b) {}
TowerOfDespairReloadAPC_Task::~TowerOfDespairReloadAPC_Task() {}
bool TowerOfDespairReloadAPC_Task::returnUpdateMessageFromGameServer_flag = false;
bool TowerOfDespairReloadAPC_Task::isReturnedMessage()
{
    return returnUpdateMessageFromGameServer_flag;
}
void TowerOfDespairReloadAPC_Task::returnUpdateMessageFromGameServer()
{
    returnUpdateMessageFromGameServer_flag = true;
}
void TowerOfDespairReloadAPC_Task::SendRequest_DoRandomSelectUserAPC()
{
    DNF_LOG_SCOPE_LINE(0x37, "./log/GameServer", "TOD : order to RandomSelect main GameServer\n");
    if (!isReturnedMessage())
    {
        Packet_TOD_DoRandomSelect pkt;
        CApplication* app = (CApplication*)CApplicationInstance();
        CServerHandler* handler = app->Get_ServerHandler();
        unsigned int first = handler->getfirstLinkedServer();
        CMyFileLog log2("SendRequest_DoRandomSelectUserAPC", 0x40);
        log2("./log/GameServer", "TOD : main GameServerChannel %u\n", first);
        handler->SendToGameServer((unsigned char)first, &pkt);
    }
}
TowerOfDespairWaitGameServerResponse_Task::TowerOfDespairWaitGameServerResponse_Task(
    unsigned int a, unsigned int b)
{
}
TowerOfDespairWaitGameServerResponse_Task::~TowerOfDespairWaitGameServerResponse_Task() {}
void TowerOfDespairWaitGameServerResponse_Task::_DoExecute()
{
    DNF_LOG_SCOPE_LINE(0x46, "./log/GameServer", "TOD : Waiting main GameServer Response...");
    if (TowerOfDespairReloadAPC_Task::isReturnedMessage() != 1)
    {
        TowerOfDespairReloadAPC_Task::SendRequest_DoRandomSelectUserAPC();
        unsigned int t = (unsigned int)time(0);
        TowerOfDespairWaitGameServerResponse_Task* task =
            new TowerOfDespairWaitGameServerResponse_Task(t + 0x3c, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
    }
}

CBaseEventAction::CBaseEventAction() : m_eventId(0) {}
CBaseEventAction::~CBaseEventAction() {}
void CBaseEventAction::onStartAction(EventParam& param) {}
void CBaseEventAction::onEndAction() {}
void CBaseEventAction::SetEventID(int id)
{
    m_eventId = id;
}
void CBaseEventAction::sendEventAckUpdate(int flag)
{
    Packet_Manager_Event_Trigger_Ack pkt;
    pkt.m_eventId = (unsigned int)m_eventId;
    pkt.m_flag = (unsigned int)flag;
    CApplication* app = (CApplication*)CApplicationInstance();
    CServerHandler* handler = app->Get_ServerHandler();
    pkt.m_group = (unsigned int)handler->GetServerGroupNo() & 0xff;
    handler->SendToDB(&pkt);
}
void CBaseEventAction::OnStartEvent(EventParam& param)
{
    sendEventAckUpdate(2);
    onStartAction(param);
}
void CBaseEventAction::OnEndEvent()
{
    sendEventAckUpdate(4);
    onEndAction();
}
CNullEventAction::CNullEventAction() {}
CNullEventAction::~CNullEventAction() {}
void CNullEventAction::onStartAction(EventParam& param)
{
    puts("Test Event Action : On Start Null Event Action");
}
void CNullEventAction::onEndAction()
{
    puts("Test Event Action : On End Null Event Action");
}
COnTimeEventAction::COnTimeEventAction() {}
COnTimeEventAction::~COnTimeEventAction() {}
void COnTimeEventAction::onStartAction(EventParam& param)
{
    DNF_LOG_SCOPE_LINE(0xa7,"./log/OnTimeEvent", "Test Event Action : On Start On Time Event Action %d,%d",
        (unsigned int)param.m_a, (unsigned int)param.m_b);
    CApplication* app = (CApplication*)CApplicationInstance();
    COnTimeEventManager* mgr = app->GetOnTimeEventManager();
    if (mgr != 0)
    {
        mgr->GetCurEventItemByDBMW((unsigned int)param.m_a, (unsigned int)param.m_b);
    }
}
void COnTimeEventAction::onEndAction()
{
    DNF_LOG_SCOPE_LINE(0xc2, "./log/OnTimeEvent", "Test Event Action : On End On Time Event Action");
    CApplication* app = (CApplication*)CApplicationInstance();
    COnTimeEventManager* mgr = app->GetOnTimeEventManager();
    if (mgr != 0)
    {
        mgr->EndEvent();
    }
}
CEventActionManager::CEventActionManager()
{
    init();
}
CEventActionManager::~CEventActionManager()
{
    destroy();
}
void CEventActionManager::init()
{
    for (int i = 0; i < 0xa6; i++)
    {
        CNullEventAction* a = new CNullEventAction;
        a->SetEventID(i);
        m_actions[i] = a;
    }
    COnTimeEventAction* ot = new COnTimeEventAction;
    ot->SetEventID(0x33);
    m_actions[0x33] = ot;
    momiji_event::EventAction* ma = new momiji_event::EventAction;
    m_actions[0x9b] = ma;
}
void CEventActionManager::destroy()
{
    for (int i = 0; i < 0xa6; i++)
    {
        if (m_actions[i] != 0)
        {
            delete m_actions[i];
        }
    }
}
void CEventActionManager::OnStartAction(Packet_Monitor_Event_Start* pkt)
{
    unsigned int code = *(unsigned int*)((char*)pkt + 0xa);
    if (code < 0xa6)
    {
        EventParam param = *(EventParam*)((char*)pkt + 0xe);
        m_actions[code]->OnStartEvent(param);
        *(unsigned int*)((char*)pkt + 0xe) = *(unsigned int*)&param;
    }
}
void CEventActionManager::OnEndAction(unsigned int code)
{
    if (code < 0xa6)
    {
        m_actions[code]->OnEndEvent();
    }
}
CBaseEventAction* CEventActionManager::GetEventAction(int code)
{
    if (code < 0 || 0xa5 < code)
    {
        return 0;
    }
    return m_actions[code];
}

COnTimeEventManager::COnTimeEventManager()
{
    m_app = 0;
    m_field30 = 0;
    m_field34 = 0;
    m_field40 = 0;
    Clear();
}
COnTimeEventManager::~COnTimeEventManager() {}
void COnTimeEventManager::AttachApp(CApplication* app)
{
    m_app = app;
    m_field38 = 0;
    m_field3c = 0;
    unsigned int t = (unsigned int)time(0);
    COnTimeEventIdxLoad* task = new COnTimeEventIdxLoad(t + 10, 0, this);
    app->GetTaskScheduler()->AddTask(task);
}
bool COnTimeEventManager::IsCurState(ENUM_ONTIME_EVENT_STATE state)
{
    return (char)(m_state2c == state);
}
void COnTimeEventManager::ChangeState(ENUM_ONTIME_EVENT_STATE state)
{
    if (-1 < (int)state && (int)state < 4)
    {
        m_state2c = (int)state;
    }
}
void COnTimeEventManager::SetEventIdx(unsigned int idx)
{
    m_field30 = (int)idx;
    m_field34 = 1;
}
void COnTimeEventManager::SendContinueTimeToGS()
{
    if (m_app != 0)
    {
        Packet_MTG_OntimeEvent_RewardStart pkt;
        pkt.m_eventIdx = (unsigned int)m_field30;
        pkt.m_fieldE = m_field38;
        pkt.m_field12 = m_field3c;
        pkt.m_field16 = m_field28 * 0x3c;
        m_app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    }
}
void COnTimeEventManager::UpdateEventIdx()
{
    m_field30 = m_field30 + 1;
    SendEventIdxToDBMW();
}
unsigned int COnTimeEventManager::GetEvent_Idx() { return (unsigned int)m_field30; }
void COnTimeEventManager::Clear()
{
    m_rewardList.Clear();
    m_field1c = 0;
    m_field20 = 0;
    m_field24 = 0;
    m_field28 = 0;
    m_state2c = 2;
}
int CRewardUserList::Insert(unsigned int key)
{
    if (isExist(key) == 1)
    {
        return -1;
    }
    m_map.insert(std::make_pair(key, 0));
    return 1;
}
char CRewardUserList::isExist(unsigned int key)
{
    return (char)(m_map.find(key) != m_map.end());
}
void CRewardUserList::Clear()
{
    m_map.clear();
}
void COnTimeEventManager::SetEventItem(unsigned int idx, unsigned int cnt)
{
    m_field38 = idx;
    m_field3c = cnt;
}
void COnTimeEventManager::StartEvent()
{
    StartEvent((unsigned int)m_field24, (unsigned int)m_field28);
}
void COnTimeEventManager::StartEvent(unsigned int a, unsigned int b)
{
    if (b < a)
    {
        unsigned int t = (unsigned int)time(0);
        m_field24 = (int)a;
        m_field28 = (int)b;
        m_field1c = (int)t;
        ChangeState(ONTIME_EVENT_STATE_START);
        COnTimeEventRewardStartTrigger* task =
            new COnTimeEventRewardStartTrigger(t, 0, this);
        m_app->GetTaskScheduler()->AddTask(task);
    }
}
void COnTimeEventManager::EndEvent()
{
    if (IsCurState(ONTIME_EVENT_STATE_NONE))
    {
        Packet_MTG_OntimeEvent_RewardEnd pkt;
        m_app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    }
    Clear();
}
void COnTimeEventManager::GetCurEventItemByDBMW(unsigned int a, unsigned int b)
{
    m_field24 = (int)a;
    m_field28 = (int)b;
    Packet_Req_Ontime_Event_Item pkt;
    if (m_app != 0)
    {
        CServerHandler* handler = m_app->Get_ServerHandler();
        CTcpDBServer* db = handler->GetTcpDBServer();
        if (db != 0)
        {
            char* buf = db->makePacketHeader(0x2345, 10);
            db->SendToServer(buf);
        }
    }
}
void COnTimeEventManager::SendEventIdxToDBMW()
{
    if (m_app != 0)
    {
        CServerHandler* handler = m_app->Get_ServerHandler();
        CTcpDBServer* db = handler->GetTcpDBServer();
        if (db != 0)
        {
            char* buf = db->makePacketHeader(0x2347, 0x16);
            *(unsigned int*)(buf + 0x12) = (unsigned int)m_field30;
            *(unsigned int*)(buf + 10) = m_field38;
            *(unsigned int*)(buf + 0xe) = m_field3c;
            db->SendToServer(buf);
        }
    }
}
int COnTimeEventManager::GetCurIdxByDBMW()
{
    if (m_field34 == 0)
    {
        if (m_app == 0)
        {
            return -1;
        }
        Packet_Req_Ontime_Event_Idx pkt;
        m_app->Get_ServerHandler()->SendToDB(&pkt);
        DNF_LOG_SCOPE_LINE(0x164, "./log/OnTimeEvent", "Get_ServerHandler()->SendToDB(packet);");
        unsigned int t = (unsigned int)time(0);
        COnTimeEventIdxLoad* task = new COnTimeEventIdxLoad(t + 10, 0, this);
        m_app->GetTaskScheduler()->AddTask(task);
        return 1;
    }
    return 0;
}
void COnTimeEventManager::OnRewardStart()
{
    time_t now = time(0);
    DNF_LOG_SCOPE_LINE(0x82, "./log/OnTimeEvent", "On Time Event : On Reward Start Trigger On(%d)", now);
    if (IsCurState(ONTIME_EVENT_STATE_REWARD))
    {
        puts("On Time Event : Event Off Trigger");
        Clear();
    }
    else if (!IsCurState(ONTIME_EVENT_STATE_NONE))
    {
        ChangeState(ONTIME_EVENT_STATE_NONE);
        UpdateEventIdx();
        int t = (int)time(0);
        m_field20 = t;
        COnTimeEventRewardEndTrigger* task =
            new COnTimeEventRewardEndTrigger((unsigned int)(m_field28 * 0x3c + t), 0, this);
        m_app->GetTaskScheduler()->AddTask(task);
        unsigned int idx = GetEvent_Idx();
        CMyFileLog log2("OnRewardStart", 0xa7);
        log2("./log/OnTimeEvent",
             "On Time Event : On Reward Start Trigger Process Success curidx(%d)", idx);
    }
}
void COnTimeEventManager::OnRewardEnd()
{
}

COnTimeEventRewardEndTrigger::COnTimeEventRewardEndTrigger(unsigned int time,
                                                           unsigned int flag,
                                                           COnTimeEventManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
COnTimeEventRewardEndTrigger::~COnTimeEventRewardEndTrigger() {}
COnTimeEventRewardStartTrigger::COnTimeEventRewardStartTrigger(unsigned int time,
                                                               unsigned int flag,
                                                               COnTimeEventManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
COnTimeEventRewardStartTrigger::~COnTimeEventRewardStartTrigger() {}
COnTimeEventIdxLoad::COnTimeEventIdxLoad(unsigned int time, unsigned int flag,
                                         COnTimeEventManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
COnTimeEventIdxLoad::~COnTimeEventIdxLoad() {}

CollectItms::CollectItms() {}
CollectItms::~CollectItms() {}

namespace init_accusation
{
CInitAccusationListMgr::CInitAccusationListMgr(CApplication& app) {}
CInitAccusationListMgr::~CInitAccusationListMgr() {}
void CInitAccusationListMgr::setSchedule(bool const& flag) {}
}

namespace momiji_event
{
StartEffectTask::StartEffectTask(unsigned int time, unsigned int flag)
    : CTaskScheduler::CTask(time, flag)
{
    EventManager::Get()->SetStartEffectTask(this);
}
StartEffectTask::~StartEffectTask() {}
void StartEffectTask::_DoExecute()
{
    if (m_flag != 0)
    {
        time_t now = time(0);
        EventManager* em = EventManager::Get();
        unsigned int end = (unsigned int)now + em->GetDurationTime();
        EndEffectTask* task = new EndEffectTask(end, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
        tm* t = localtime((time_t*)&end);
        DNF_LOG_SCOPE_AT("_DoExecute", 0xb0,"./log/AradOnly", "[Momiji] start event. next endEffect %02dh:%02dm:%02ds",
            t->tm_hour, t->tm_min, t->tm_sec);
        em->sendApplyEffect(end);
    }
    EventManager* em = EventManager::Get();
    em->SetStartEffectTask(0);
}
EndEffectTask::EndEffectTask(unsigned int time, unsigned int flag)
    : CTaskScheduler::CTask(time, flag)
{
    *(char*)((char*)this + 0x10) = 1;
    EventManager::Get()->SetEndEffectTask(this);
}
EndEffectTask::~EndEffectTask() {}
void EndEffectTask::_DoExecute()
{
    if (*(char*)((char*)this + 0x10) != 0)
    {
        time_t now = time(0);
        EventManager* em = EventManager::Get();
        unsigned int next = (unsigned int)now +
                            (em->GetIntervalTime() - em->GetDurationTime());
        StartEffectTask* task = new StartEffectTask(next, 0);
        ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
        tm* t = localtime((time_t*)&next);
        DNF_LOG_SCOPE_AT("_DoExecute", 200,"./log/AradOnly", "[Momiji] start event. next startEffect %02dh:%02dm:%02ds",
            t->tm_hour, t->tm_min, t->tm_sec);
        EventManager::Get()->sendDeleteEffect();
    }
    EventManager::Get()->SetEndEffectTask(0);
}
EventManager::EventManager() {}
EventManager::~EventManager() {}
EventManager* EventManager::Get()
{
    static EventManager obj;
    return &obj;
}
unsigned int EventManager::GetDurationTime()
{
    return m_duration;
}
unsigned int EventManager::GetIntervalTime()
{
    return m_interval;
}
void EventManager::SetStartEffectTask(StartEffectTask* task)
{
    m_startTask = task;
}
void EventManager::SetEndEffectTask(EndEffectTask* task)
{
    m_endTask = task;
}
void EventManager::sendApplyEffect(unsigned int time)
{
    CApplication* app = (CApplication*)CApplicationInstance();
    unsigned int group = (unsigned int)app->Get_ServerGroup();
    Packet_Arad_ApplyEffect pkt(group & 0xff, 2, time);
    app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    DNF_LOG_SCOPE_AT("sendApplyEffect", 0x97, "./log/AradOnly", "[Momiji] apply effect. (code:%u)", 2);
}
void EventManager::StartEvent(unsigned char startHour, unsigned char interval,
                              unsigned char duration)
{
    if (duration < interval)
    {
        if (startHour < 0x18)
        {
            m_interval = (unsigned int)interval * 0x3c;
            m_duration = (unsigned int)duration * 0x3c;
            m_startHour = startHour;
            time_t now = time(0);
            tm* t = localtime(&now);
            t->tm_hour = startHour;
            t->tm_min = 0;
            t->tm_sec = 0;
            time_t first = mktime(t);
            while ((int)first <= (int)now)
            {
                first = (unsigned int)interval * 0x3c + first;
            }
            StartEffectTask* task = new StartEffectTask((unsigned int)first, 0);
            ((CApplication*)CApplicationInstance())->GetTaskScheduler()->AddTask(task);
            tm* t2 = localtime((time_t*)&first);
            DNF_LOG_SCOPE_AT("StartEvent", 0x6e,"./log/AradOnly", "[Momiji] start event. first time %02dh:%02dm:%02ds",
                t2->tm_hour, t2->tm_min, t2->tm_sec);
        }
        else
        {
            DNF_LOG_SCOPE_AT("StartEvent", 0x51, "./log/AradOnly", "[Momiji] (startTime(%d) >= 24)", (unsigned int)startHour);
        }
    }
    else
    {
        DNF_LOG_SCOPE_AT("StartEvent", 0x4b,"./log/AradOnly", "[Momiji] (durationTime(%d) >= intervalTime(%d))",
            (unsigned int)duration, (unsigned int)interval);
    }
}
void EventManager::sendDeleteEffect()
{
    CApplication* app = (CApplication*)CApplicationInstance();
    unsigned int group = (unsigned int)app->Get_ServerGroup();
    Packet_Arad_DeleteEffect pkt((int)(group & 0xff), 2);
    app->Get_ServerHandler()->SendAllTcpGameServer(&pkt);
    DNF_LOG_SCOPE_AT("sendDeleteEffect", 0x9e, "./log/AradOnly", "[Momiji] delete effect. (code:%u)", 2);
}
void EventManager::EndEvent()
{
    sendDeleteEffect();
    if (m_startTask != 0)
    {
        *(char*)((char*)m_startTask + 0x10) = 0;
    }
    if (m_endTask != 0)
    {
        *(char*)((char*)m_endTask + 0x10) = 0;
    }
    m_interval = 0;
    m_duration = 0;
    m_startHour = 0;
    m_startTask = 0;
    m_endTask = 0;
}
EventAction::EventAction() {}
void EventAction::onStartAction(EventParam& param)
{
    if (isRunning() != 1)
    {
        m_running = 1;
        DNF_LOG_SCOPE_AT("onStartAction", 0x17,"./log/AradOnly", "[Momiji] onStartAction(%d,%d,%d)",
            (unsigned int)(unsigned char)*(char*)((char*)&param + 0),
            (unsigned int)(unsigned char)*(char*)((char*)&param + 1),
            (unsigned int)(unsigned char)*(char*)((char*)&param + 2));
        EventManager* em = EventManager::Get();
        em->StartEvent(*(unsigned char*)((char*)&param + 0),
                       *(unsigned char*)((char*)&param + 1),
                       *(unsigned char*)((char*)&param + 2));
    }
}
void EventAction::onEndAction()
{
    if (isRunning() != 0)
    {
        m_running = 0;
        EventManager* em = EventManager::Get();
        em->EndEvent();
        DNF_LOG_SCOPE_AT("onEndAction", 0x26, "./log/AradOnly", "[Momiji] end event.");
    }
}
}

Packet_Item_Limit_Edition_Load_Data_Req::Packet_Item_Limit_Edition_Load_Data_Req()
    : PacketHeader(0x1007, 0x83)
{
    m_fieldA = 0;
    m_fieldC = 0;
}

Packet_Item_Limit_Edition_Sell_end::Packet_Item_Limit_Edition_Sell_end()
    : PacketHeader(0x1005, 0x82)
{
    m_fieldB = 0;
    m_fieldA = 0;
}

Packet_Item_Limit_Edition_Update::Packet_Item_Limit_Edition_Update()
    : PacketHeader(0x1006, 0x10e)
{
    m_fieldA = 0;
    m_fieldB = 0;
}

Packet_Monitor_Event_Start::Packet_Monitor_Event_Start() : PacketHeader(0x44f, 0x12) {}
Packet_Monitor_Event_End::Packet_Monitor_Event_End() : PacketHeader(0x450, 0xe) {}
Packet_Monitor_Take_Screen_Shot::Packet_Monitor_Take_Screen_Shot()
    : PacketHeader(0x9d3, 0xf)
{
    m_fieldA = 0;
    m_fieldB = 0;
}

Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg() : PacketHeader(0x177d, 0x1013)
{
    m_fieldA = 0;
    m_fieldB = 0;
    memset(m_data, 0, 0x1001);
}

Packet_VillageAttackedRewardServer::Packet_VillageAttackedRewardServer()
    : PacketHeader(0x177a, 0xe)
{
    m_fieldA = 0;
}

Packet_VillageAttackedEnd::Packet_VillageAttackedEnd() : PacketHeader(0x1774, 0x16)
{
    m_dungeonRemain = 0;
    m_fieldE = 0;
    m_field12 = 0;
}

Packet_VillageAttackedUpdate::Packet_VillageAttackedUpdate() : PacketHeader(0x1777, 0x16)
{
    m_remainTime = 0;
    m_fieldE = 0;
    m_field12 = 0;
}

Packet_VillageAttackedScore::Packet_VillageAttackedScore() : PacketHeader(0x1778, 0x26)
{
    m_idByChannel = 0;
    m_uniqCharNo = 0;
    m_remainTime = 0;
    m_field16 = 0;
    m_field1a = 0;
    m_cur = 0;
    m_max = 0;
}

Packet_VillageAttackedReward::Packet_VillageAttackedReward() : PacketHeader(0x1775, 0x1a)
{
    m_idByChannel = 0;
    m_uniqCharNo = 0;
    m_rewardType = 0;
    m_count = 0;
}

Packet_DBMW_Add_Buddy::Packet_DBMW_Add_Buddy() : PacketHeader(0x673, 0x2c)
{
    memset(m_charName, 0, 0x1e);
}

Packet_DBMW_Del_Buddy::Packet_DBMW_Del_Buddy() : PacketHeader(0x675, 0x30)
{
}

Packet_Monitor_Notice_Member_Member_Login_out::
    Packet_Monitor_Notice_Member_Member_Login_out()
    : PacketHeader(0x4b6, 0x38)
{
    m_flag = 0;
    m_idByChannel = 0xffffffff;
    m_uniqCharNo = 0;
    m_channelNo = 0xff;
    m_type = 2;
}

Packet_Monitor_Member_Chat_ToUser_Hyper_Link::
    Packet_Monitor_Member_Chat_ToUser_Hyper_Link()
    : PacketHeader(0x271a, 0x26a)
{
    m_idByChannel = 0xffffffff;
    m_uniqCharNo = 0;
    m_itemCount = 0;
    m_msgLen = 0;
    memset(m_charName, 0, 0x1e);
    memset(m_msg, 0, 0x100);
    memset(m_items, 0, 0x138);
}

Packet_Monitor_Member_Chat_ToUser::Packet_Monitor_Member_Chat_ToUser()
    : PacketHeader(0x4bf, 0x131)
{
    m_idByChannel = 0xffffffff;
    m_uniqCharNo = 0;
    m_msgLen = 0;
    memset(m_charName, 0, 0x1e);
    memset(m_msg, 0, 0x100);
}

Packet_Monitor_Notice_Delete_Member_Id::Packet_Monitor_Notice_Delete_Member_Id()
    : PacketHeader(0x4bd, 0x12)
{
}

Packet_Monitor_SAVE_Member_Update_Char_Info::
    Packet_Monitor_SAVE_Member_Update_Char_Info()
    : PacketHeader(0x4b5, 0xf)
{
}

Packet_Monitor_SAVE_Member::Packet_Monitor_SAVE_Member() : PacketHeader(0x4b4, 0x14)
{
    m_fieldA = 0;
    m_upperCharNo = 0;
    m_lowerCharNo = 0;
    m_type = 0;
}

Packet_Monitor_Request_Member_Enter_To_Requester::
    Packet_Monitor_Request_Member_Enter_To_Requester()
    : PacketHeader(0x4b7, 0x31)
{
    memset(m_name, 0, 0x1e);
}

Packet_Monitor_Request_Member_Enter_To_Responser::
    Packet_Monitor_Request_Member_Enter_To_Responser()
    : PacketHeader(0x4b8, 0x32)
{
}

Packet_Monitor_Member_Enter_Reply_ToResponser::
    Packet_Monitor_Member_Enter_Reply_ToResponser()
    : PacketHeader(0x4b9, 0x39)
{
    m_extraCharNo = 0;
    memset(m_name, 0, 0x1e);
}

Packet_Monitor_Notice_Member_Enter_Ok::Packet_Monitor_Notice_Member_Enter_Ok()
    : PacketHeader(0x4ba, 0x39)
{
    m_extraCharNo = 0;
    memset(m_name, 0, 0x1e);
}

Packet_Monitor_Member_Secede_To_Seceder::Packet_Monitor_Member_Secede_To_Seceder()
    : PacketHeader(0x4bc, 0x31)
{
    memset(m_name, 0, 0x1e);
}

Packet_Monitor_Member_Pay_Tax_ToUpper::Packet_Monitor_Member_Pay_Tax_ToUpper()
    : PacketHeader(0x4c0, 0x38)
{
    memset(m_name, 0, 0x1e);
}

Packet_Notice_Find_Factory_Hub_User::Packet_Notice_Find_Factory_Hub_User()
    : PacketHeader(0x100f, 0x34)
{
    m_idByChannel = 0;
    m_nameLen = 0;
    m_found = 0;
    m_field2e = 0;
    m_field30 = 0;
    memset(m_name, 0, 0x1e);
}

Packet_DBMW_Register_To_BlackList::Packet_DBMW_Register_To_BlackList()
    : PacketHeader(0x5de, 0x34)
{
    m_charNo2 = 0xffffffff;
    memset(m_name, 0, 0x1e);
}

Packet_Register_To_BlackList_RESULT::Packet_Register_To_BlackList_RESULT()
    : PacketHeader(0x5dc, 0x31)
{
    memset(m_name, 0, 0x1e);
}

Packet_DMBW_Delete_To_BlackList::Packet_DMBW_Delete_To_BlackList()
    : PacketHeader(0x5df, 0x30)
{
    m_charNo2 = 0xffffffff;
    memset(m_name, 0, 0x1e);
}

Packet_Delete_To_BlackList_Result::Packet_Delete_To_BlackList_Result()
    : PacketHeader(0x5dd, 0x31)
{
    memset(m_name, 0, 0x1e);
}

Packet_Request_Result_BlackList::Packet_Request_Result_BlackList()
    : PacketHeader(0x5e0, 0x19f)
{
    memset(m_blackList, 0, 400);
}

Packet_Web_Notice_InGame_Advertisement::Packet_Web_Notice_InGame_Advertisement()
    : PacketHeader(0x27e2, 10)
{
}

Packet_Monitor_Notice_Buddy_In_Out::Packet_Monitor_Notice_Buddy_In_Out()
    : PacketHeader(0x3ef, 0x34)
{
    m_charNo = 0;
    m_idByChannel = 0xffffffff;
    m_channel = 0xff;
    m_field33 = 0;
    memset(m_name, 0, 0x1e);
}

Packet_DBMW_Request_BlackList::Packet_DBMW_Request_BlackList()
    : PacketHeader(0x5e1, 0xf)
{
}

Packet_DB_Member_Delete_As_Charac_Delete::Packet_DB_Member_Delete_As_Charac_Delete()
    : PacketHeader(0x4c3, 0xe)
{
}

Packet_DBMW_Query_Buddy_Info::Packet_DBMW_Query_Buddy_Info()
    : PacketHeader(0x676, 0xe)
{
}

Packet_Request_Charac_Tower_Ranking::Packet_Request_Charac_Tower_Ranking()
    : PacketHeader(0x4cb, 0x62)
{
    memset(m_data, 0, 0x50);
}

Packet_Send_Time_Sync_For_Login::Packet_Send_Time_Sync_For_Login()
    : PacketHeader(0x1f4c, 0x16)
{
    m_hour = 0;
    m_min = 0;
}

Packet_Tcp_Server_Connect::Packet_Tcp_Server_Connect() : PacketHeader(0x3f8, 0xb) {}

Packet_Monitor_Add_Buddy_Reply::Packet_Monitor_Add_Buddy_Reply()
    : PacketHeader(0x672, 0x3b)
{
    memset(m_name, 0, 0x27);
}

Packet_Monitor_Del_Buddy_Reply::Packet_Monitor_Del_Buddy_Reply()
    : PacketHeader(0x674, 0x31)
{
    memset(m_name, 0, 0x1e);
}

Packet_DBMW_Connection_Check::Packet_DBMW_Connection_Check()
    : PacketHeader(0x413, 0xb)
{
}

Packet_Monitor_Notice_Black_List::Packet_Monitor_Notice_Black_List()
    : PacketHeader(0x5e2, 0x3b)
{
    memset(m_charNos, 0xff, 0x28);
}

Packet_CollectItemsReward::Packet_CollectItemsReward() : PacketHeader(0x27e8, 0x32)
{
    m_idByChannel = 0;
    m_charNo = 0;
}

Packet_CollectItemsRewardBroadcast::Packet_CollectItemsRewardBroadcast()
    : PacketHeader(0x27e9, 0x32)
{
    m_charNo = 0;
}

Packet_MTG_OntimeEvent_RewardStart::Packet_MTG_OntimeEvent_RewardStart()
    : PacketHeader(0x17c0, 0x1a)
{
    m_eventIdx = 0;
}
Packet_MTG_OntimeEvent_RewardEnd::Packet_MTG_OntimeEvent_RewardEnd()
    : PacketHeader(0x17c2, 0xa)
{
}
Packet_Arad_DeleteEffect::Packet_Arad_DeleteEffect(int group, int code)
    : PacketHeader(0x27fa, 0x12)
{
    *(int*)((char*)this + 0xa) = group;
    *(int*)((char*)this + 0xe) = code;
}
LimitNpcBuyItemChangeInfo::LimitNpcBuyItemChangeInfo() : PacketHeader(0x27db, 0x12)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
}
void CommonTime::SetCurTime()
{
    time_t t;
    time(&t);
    tm* p = localtime(&t);
    m_field0 = (unsigned char)((char)p->tm_year + -100);
    m_field1 = (unsigned char)((char)p->tm_mon + 1);
    m_field2 = (unsigned char)((char)p->tm_mday);
    m_field3 = (unsigned char)((char)p->tm_hour);
    m_field4 = (unsigned char)((char)p->tm_min);
    m_field5 = (unsigned char)((char)p->tm_wday);
}
CSystemTime::CSystemTime()
{
    gettimeofday((timeval*)((char*)this + 8), 0);
    *(unsigned int*)((char*)this + 0x10) = *(unsigned int*)((char*)this + 8);
    *(int*)((char*)this + 4) = *(int*)((char*)this + 0xc) / 1000;
}
CSystemTimeHandler::CSystemTimeHandler() {}
CSystemTimeHandler* CSystemTimeHandlerInstance()
{
    static CSystemTimeHandler instance;
    return &instance;
}
CSourceVersionMgr::CSourceVersionMgr()
{
    InsertSourceVersion((char*)".svn/all-wcprops", 0x19daa);
    InsertSourceVersion((char*)"../ServerCommon/.svn/all-wcprops", 0x19daa);
}
CSourceVersionMgr::SourceVersion::SourceVersion(char* path, int version)
{
    m_path = path;
    m_version = version;
}
CSourceVersionMgr::SourceVersion::~SourceVersion() {}
void CSourceVersionMgr::InsertSourceVersion(char* path, int version)
{
    SourceVersion sv(path, version);
    m_versions.push_back(sv);
}
STMemberDBInfo::STMemberDBInfo()
{
    new ((char*)this + 0) ST_MemberProxy();
    *(char*)((char*)this + 0x27) = 0;
    for (int i = 0; i < 9; i++)
    {
        new ((char*)this + 0x28 + i * 0x27) ST_MemberProxy();
    }
}
STMemberListInfo::STMemberListInfo()
{
    m_count = 0;
}
CPacketTracer::CPacketTracer() : m_count(0), m_str("") {}
CPacketTracer* CPacketTracerInstance()
{
    static CPacketTracer instance;
    return &instance;
}
void CPacketTracer::AddLog(int a, int b)
{
    time_t t;
    time(&t);
    tm* p = localtime(&t);
    char buf[32];
    memset(buf, 0, 0x20);
    sprintf(buf, "(%02d:%02d:%02d/%d/%d)", p->tm_hour, p->tm_min, p->tm_sec, b, a);
    m_str += buf;
    m_count = m_count + 1;
}
void CPacketTracer::WriteLog()
{
    if (m_count == (m_count / 0x1e) * 0x1e)
    {
        DNF_LOG_SCOPE_LINE(0x2e, "./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_str.c_str());
        ResetLog();
    }
}
void CPacketTracer::AbsoluteWriteLog()
{
    DNF_LOG_SCOPE_LINE(0x36, "./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_str.c_str());
    ResetLog();
}
void CPacketTracer::ResetLog()
{
    m_str.clear();
    m_count = 0;
}
Packet_DB_InsertMail::Packet_DB_InsertMail() : PacketHeader(0x177c, 0x133)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned int*)((char*)this + 0x16) = 0;
    *(unsigned int*)((char*)this + 0x12f) = 0;
    for (int i = 0; i <= 0x14; i++)
    {
        *(char*)((char*)this + 0x1a + i) = 0;
    }
    for (int i = 0; i <= 0xff; i++)
    {
        *(char*)((char*)this + 0x2f + i) = 0;
    }
}
Packet_DBMW_Statistic_Login_Logout::Packet_DBMW_Statistic_Login_Logout()
    : PacketHeader(0x17b8, 0x618)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    for (int i = 0xfe; i != -1; i--)
    {
        new ((char*)this + 0xe + i * 6) stLoginLogoutVariable();
    }
    memset((char*)this + 0xe, 0, 0x5fa);
    *(unsigned int*)((char*)this + 0x608) = 0;
    *(unsigned int*)((char*)this + 0x60c) = 0;
    *(unsigned int*)((char*)this + 0x610) = 0;
    *(unsigned int*)((char*)this + 0x614) = 0;
}

Packet_Monitor_Call_Member_List_ToUser::Packet_Monitor_Call_Member_List_ToUser()
    : PacketHeader(0x4be, 0x1e1)
{
    memset((char*)this + 0x12, 0, 0x1cf);
}

Packet_Punish_Cancel::Packet_Punish_Cancel() : PacketHeader(0xb64, 0x12)
{
    m_idByChannel = 0;
    m_fieldE = 0;
    m_field10 = 0;
}

Packet_Set_CleanPad_Point::Packet_Set_CleanPad_Point() : PacketHeader(0xb60, 0x10)
{
    m_idByChannel = 0;
    m_fieldE = 0;
}

Packet_SecuService_Connect_Web::Packet_SecuService_Connect_Web()
    : PacketHeader(0xb65, 0x15)
{
    m_idByChannel = 0;
    m_fieldE = 0;
    m_fieldF = 0;
    memset(m_data, 0, 5);
}

Packet_Monitor_User_Repel::Packet_Monitor_User_Repel() : PacketHeader(0x4c1, 0x12) {}

Packet_Monitor_Other_Channel_Chat_ToUser::Packet_Monitor_Other_Channel_Chat_ToUser()
    : PacketHeader(0x3f3, 0x137)
{
    m_fieldE = 0;
    m_idByChannel = 0xffffffff;
    m_uniqCharNo = 0;
    m_type = 0;
    m_msgLen = 0;
    memset(m_name, 0, 0x1e);
    memset(m_msg, 0, 0x100);
}

Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link::
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link()
    : PacketHeader(0x2719, 0x270)
{
    m_fieldE = 0;
    m_idByChannel = 0xffffffff;
    m_uniqCharNo = 0;
    m_type = 0;
    m_itemCount = 0;
    m_msgLen = 0;
    memset(m_name, 0, 0x1e);
    memset(m_items, 0, 0x138);
    memset(m_msg, 0, 0x100);
}

Packet_Change_User_Handicap::Packet_Change_User_Handicap() : PacketHeader(0x3f7, 0x16) {}

Packet_Web_Request_ARS_Info::Packet_Web_Request_ARS_Info() : PacketHeader(0xb62, 0xb) {}

Packet_Arad_ApplyEffect::Packet_Arad_ApplyEffect(int group, int code, unsigned int time)
    : PacketHeader(0x27f9, 0x16)
{
    m_group = group;
    m_code = code;
    m_time = time;
}

unsigned int GetNowTime()
{
    return (unsigned int)time(0);
}

Packet_Load_Periodic_Message::Packet_Load_Periodic_Message() : PacketHeader(0x1f48, 10) {}
LimitNpcBuyItemRequestInfo::LimitNpcBuyItemRequestInfo() : PacketHeader(0x27d8, 10) {}

namespace np_server_xml
{
CServerXml::CServerXml() {}
CServerXml::~CServerXml() {}
void CServerXml::StrLoading()
{
    StrLoading(std::string("server_str.xml"));
}
void CServerXml::StrLoading(std::string path)
{
    InitString();
    m_str54 = path;
    m_doc.Clear();
    char ok = (char)m_doc.LoadFile(m_str54, (TiXmlEncoding)0);
    if (ok == 1)
    {
        TiXmlNode* root = m_doc.FirstChild("xml");
        if (root == 0)
        {
            puts("[CServerXml] <xml> Tag Error");
        }
        else
        {
            CharsetInit(root);
            EventLoad(root);
            ProcessLoad(root);
        }
    }
    else
    {
        printf("[CServerXml] Load Fail File : %s\n", "server_str.xml");
    }
}
void CServerXml::InitString()
{
    m_charset = 0;
    memset((char*)this, 0, 5);
    m_map58.clear();
    m_map70.clear();
    m_map88.clear();
    m_mapa0.clear();
}
void CServerXml::CharsetInit(TiXmlNode* node)
{
    TiXmlNode* option = node->FirstChild("option");
    if (option == 0)
    {
        puts("[CServerXml] <option> Tag Error");
        exit(-1);
    }
    TiXmlNode* charset = option->FirstChild("charset");
    if (charset == 0)
    {
        puts("[CServerXml] <charset> Tag Error");
        exit(-1);
    }
    TiXmlElement* element = charset->ToElement();
    const char* type = element->Attribute("type");
    if (type == 0)
    {
        puts("[CServerXml] <type> Tag Error");
        exit(-1);
    }
    if (strcmp(type, "kor") == 0)
    {
        m_charset = 0;
    }
    else if (strcmp(type, "chn") == 0)
    {
        m_charset = 1;
    }
    else if (strcmp(type, "jpn") == 0)
    {
        m_charset = 2;
    }
    else if (strcmp(type, "usa") == 0)
    {
        m_charset = 3;
    }
    else if (strcmp(type, "twn") == 0)
    {
        m_charset = 4;
    }
    else
    {
        puts("[CServerXml] <type> Tag Error");
        exit(-1);
    }
    strcpy((char*)this, type);
}
void CServerXml::EventLoad(TiXmlNode* node)
{
    TiXmlNode* eventStr = node->FirstChild("event_str");
    if (eventStr == 0)
    {
        puts("[CServerXml] <event_str> Tag Skip!!");
        return;
    }
    TiXmlNode* event = eventStr->FirstChild("event");
    if (event == 0)
    {
        puts("[CServerXml] <event> Tag Error");
        exit(-1);
    }
    for (; event != 0; event = event->NextSibling())
    {
        int id = 0;
        TiXmlElement* element = event->ToElement();
        element->Attribute("id", &id);
        RGBALoad(id, event);
        TiXmlNode* sub = event->FirstChild((const char*)this);
        if (sub == 0)
        {
            printf("%s Tag Error\n", (const char*)this);
            exit(-1);
        }
        TiXmlElement* subElement = sub->ToElement();
        const char* startMsg = subElement->Attribute("start_msg");
        StrPunish(id, startMsg, (np_server_xml::_eStringType)1);
        TiXmlElement* subElement2 = sub->ToElement();
        const char* endMsg = subElement2->Attribute("end_msg");
        StrPunish(id, endMsg, (np_server_xml::_eStringType)2);
    }
}
void CServerXml::StrPunish(int idx, const char* str, _eStringType type)
{
    if (str != 0)
    {
        std::string s(str);
        if (type == STRING_TYPE_1)
        {
            m_map70.insert(std::pair<const int, std::string>(idx, s));
        }
        else if (type == STRING_TYPE_2)
        {
            m_map88.insert(std::pair<const int, std::string>(idx, s));
        }
        else if (type == STRING_TYPE_0)
        {
            m_map58.insert(std::pair<const int, std::string>(idx, s));
        }
    }
}
std::string CServerXml::GetServerString(int idx, bool* ok) const
{
    std::string s("");
    std::map<int, std::string>::const_iterator it = m_map58.find(idx);
    if (it == m_map58.end())
    {
        if (ok != 0)
        {
            *ok = 0;
        }
        return s;
    }
    if (ok != 0)
    {
        *ok = 1;
    }
    return it->second;
}
unsigned int CServerXml::GetEventRGBA(int idx) const
{
    return 0;
}
std::string CServerXml::GetEventString(int idx, _eStringType type, bool* ok) const
{
    return "";
}
void CServerXml::RGBALoad(int idx, TiXmlNode* node)
{
    TiXmlNode* colorNode = node->FirstChild("color");
    if (colorNode == 0)
    {
        printf("%s Tag Error\n", (char*)this);
        exit(-1);
    }
    unsigned int rgba = 0;
    TiXmlElement* e = colorNode->ToElement();
    rgba = (unsigned int)(unsigned char)atoi(e->Attribute("red"));
    e = colorNode->ToElement();
    rgba |= (unsigned int)(unsigned char)atoi(e->Attribute("green")) << 8;
    e = colorNode->ToElement();
    rgba |= (unsigned int)(unsigned char)atoi(e->Attribute("blue")) << 16;
    e = colorNode->ToElement();
    rgba |= (unsigned int)(unsigned char)atoi(e->Attribute("alpha")) << 24;
    m_mapa0.insert(std::pair<const int, int>(idx, (int)rgba));
}
void CServerXml::ProcessLoad(TiXmlNode* node)
{
    TiXmlNode* str = node->FirstChild("str");
    if (str == 0)
    {
        puts("[CServerXml] <str> Tag Skip!!");
    }
    else
    {
        TiXmlNode* s = str->FirstChild("string");
        if (s == 0)
        {
            puts("[CServerXml] <string> Tag Error");
            exit(-1);
        }
        for (; s != 0; s = s->NextSibling())
        {
            int id = 0;
            TiXmlElement* e = s->ToElement();
            e->Attribute("id", &id);
            TiXmlNode* text = s->FirstChild("text");
            if (text == 0)
            {
                printf("%s Tag Error\n", (char*)this);
                return;
            }
            TiXmlElement* te = text->ToElement();
            const char* t = te->Attribute("text");
            StrPunish(id, t, STRING_TYPE_0);
        }
    }
}
}

np_server_xml::CServerXml g_ServerString_;

CAppInit::CAppInit() {}
CAppInit::~CAppInit() {}
void CAppInit::Init(CApplication* app, int argc, char** argv) {}

CAppStartInit::CAppStartInit() {}
CAppStartInit::~CAppStartInit() {}
void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    {
        std::string cfgName(argv[1]);
        app->m_appConfig->Check_FileName(cfgName);
    }
    app->m_memberConfig = new CMemberConfig;
    app->m_memberExpTbl = new CMemberExpTbl;
    app->m_serverHandler = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) == -1)
    {
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
    }
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    const char* mode = argv[2];
    if (strcmp(mode, "start") == 0)
    {
        pid_t pid = fork();
        if (pid < 0)
        {
            return -1;
        }
        if (pid != 0)
        {
            exit(0);
        }
        setsid();
        chdir("./");
        umask(0);
    }
    {
        std::string pidFile(argv[1]);
        char ok = Save_pid(pidFile);
        return ok == 1 ? 0 : -1;
    }
}

char CAppStartInit::Save_pid(const std::string& file)
{
    std::string path = "./pid/" + file;
    int fd = ::open(path.c_str(), 0x42, 0x1a4);
    if (fd < 0)
    {
        return 0;
    }
    char buf[0x400];
    memset(buf, 0, 0x400);
    pid_t pid = getpid();
    sprintf(buf, "%ld\n", (long)pid);
    ssize_t n = strlen(buf);
    ssize_t wr = write(fd, buf, n);
    if (wr < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}

CAppStopInit::CAppStopInit() {}
CAppStopInit::~CAppStopInit() {}
void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, \xb0\xfc\xb8\xae\xc0\xda\xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1 \xb5\xc7\xbe\xfa\xbd\xc0\xb4\xd9.");
    app->Clear();
    {
        std::string pidFile(argv[1]);
        char ok = app->Send_Term_Signal(pidFile);
        if (ok != 1)
        {
            throw CDNFException(
                "CAppStopInit::Init() \xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xbd\xc0\xb4\xd9!");
        }
    }
    throw CDNFException(
        "CAppStopInit::Init() \xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xbd\xc0\xb4\xd9!");
}

CKillUSRConfig::CKillUSRConfig() {}
CKillUSRConfig::~CKillUSRConfig() {}
void CKillUSRConfig::Load_Table(const std::string& path) {}
int CKillUSRConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tokens[4];
    if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 4) == 4)
    {
        ST_KillUSRConfig* cfg = new (std::nothrow) ST_KillUSRConfig;
        if (cfg != 0)
        {
            cfg->m_type = atoi(tokens[0]);
            cfg->m_val = atoi(tokens[1]);
            cfg->m_b = atoi(tokens[2]);
            cfg->m_c = atoi(tokens[3]);
            m_vec.push_back(cfg);
            return 1;
        }
    }
    return 0;
}
void CKillUSRConfig::Clear_Table()
{
    if (!m_vec.empty())
    {
        for (std::vector<ST_KillUSRConfig*>::iterator it = m_vec.begin();
             it != m_vec.end(); ++it)
        {
            if (*it != 0)
            {
                ::operator delete(*it);
                *it = 0;
            }
        }
        m_vec.clear();
    }
}
std::vector<ST_KillUSRConfig*>* CKillUSRConfig::GetInfo() const
{
    return const_cast<std::vector<ST_KillUSRConfig*>*>(&m_vec);
}

CDNFException::CDNFException(const std::string& msg) : m_msg(msg) {}
CDNFException::~CDNFException() throw() {}
const char* CDNFException::what() const throw() { return m_msg.c_str(); }

namespace WongWork
{
CGMAccounts::CGMAccounts() {}
CGMAccounts::~CGMAccounts() {}
bool CGMAccounts::isGM(unsigned int dbid)
{
    for (std::list<stGMInfo_t>::iterator it = m_list.begin(); it != m_list.end(); ++it)
    {
        if (it->m_dbid == dbid)
        {
            return true;
        }
    }
    return false;
}
CGMAccounts::stGMInfo_t CGMAccounts::getGMInfo(unsigned int dbid) const
{
    stGMInfo_t out;
    out.m_dbid = 0;
    out.m_field4 = 3;
    for (std::list<stGMInfo_t>::const_iterator it = m_list.begin(); it != m_list.end(); ++it)
    {
        if (it->m_dbid == dbid)
        {
            out = *it;
            break;
        }
    }
    return out;
}
void CGMAccounts::clearGmList()
{
    m_list.clear();
}
void CGMAccounts::AppendGM_Sys(unsigned int dbid, char level)
{
    for (std::list<stGMInfo_t>::iterator it = m_list.begin(); it != m_list.end(); ++it)
    {
        if (it->m_dbid == dbid)
        {
            return;
        }
    }
    stGMInfo_t info;
    info.m_dbid = dbid;
    info.m_field4 = (unsigned int)level;
    m_list.push_back(info);
}
}

namespace exchange_server
{
CCacheCharacterMgr* g_instance = 0;

CCacheCharacterMgr::CCacheCharacterMgr()
{
}
CCacheCharacterMgr::~CCacheCharacterMgr() {}
int CCacheCharacterMgr::CacheCharacter(unsigned int dbid, CACHE_CHARACTER_TYPE* type)
{
    type->m_field8 = (long)time(0);
    std::pair<std::map<unsigned int, CACHE_CHARACTER_TYPE>::iterator, bool> r =
        m_cache.insert(std::pair<const unsigned int, CACHE_CHARACTER_TYPE>(dbid, *type));
    if (!r.second)
    {
        r.first->second = *type;
    }
    else
    {
        if (m_cache.size() > 49999)
        {
            CollectGarbage();
        }
        else
        {
            CCacheCharacterTime t;
            t.m_time = (int)type->m_field8;
            t.m_charNo = (int)dbid;
            m_timeQueue.push(t);
        }
    }
    return 1;
}
char CCacheCharacterMgr::GetCacheCharacter(unsigned int dbid, CACHE_CHARACTER_TYPE* out)
{
    std::map<unsigned int, CACHE_CHARACTER_TYPE>::iterator it = m_cache.find(dbid);
    if (it == m_cache.end())
    {
        return 0;
    }
    *out = it->second;
    return 1;
}
char CCacheCharacterMgr::CollectGarbage()
{
    char result = 0;
    CCacheCharacterTime t;
    time_t now = time(0);
    while (!m_timeQueue.empty())
    {
        CCacheCharacterTime top = m_timeQueue.top();
        if ((long long)now - top.m_time < 0x1e)
        {
            break;
        }
        std::map<unsigned int, CACHE_CHARACTER_TYPE>::iterator it =
            m_cache.find((unsigned int)top.m_charNo);
        if (it != m_cache.end() && 0x1d < now - *(int*)((char*)&it->second + 0xc))
        {
            m_cache.erase(it);
            result = 1;
        }
        m_timeQueue.pop();
    }
    return result;
}
void CCacheCharacterMgr::Reset()
{
    m_cache.clear();
    while (!m_timeQueue.empty())
    {
        m_timeQueue.pop();
    }
}
CCacheCharacterMgr* GetInstanceCacheCharacterMgr()
{
    if (g_instance == 0)
    {
        g_instance = new CCacheCharacterMgr;
    }
    return g_instance;
}
}

// ================= 小件收口（Wave 1-4 追加）=================

STBlackUserDBType::STBlackUserDBType()
{
    m_dbid = 0;
    m_field24 = 0;
    memset(m_name, 0, 0x1e);
}

stLoginLogout::stLoginLogout() { m_field0 = 0; }

ST_MemberConfig::ST_MemberConfig()
{
    m_a = 0;
    m_b = 0;
    m_c = 0;
}

ST_KillUSRConfig::ST_KillUSRConfig()
{
    m_type = 0;
    m_val = 0;
    m_b = 0;
    m_c = 0;
}

void ST_MemberProxy::Reset()
{
    m_field0 = 0;
    m_flag4 = 0;
    memset(m_name, 0, 0x1e);
    m_field23 = 0;
}

namespace village_attacked
{
stHuntingPoint::stHuntingPoint()
{
    m_huntingPoint = 0;
    m_field4 = 0;
}
}

void CMemoryCashManager::resetCashCnt()
{
    m_cashCnt34 = 0x1e;
    m_buddyCashCnt = 0;
    m_memberCashCnt = 0;
    m_blackListCashCnt = 0;
    m_field44 = 0;
    m_field48 = 0;
    m_field4c = 0;
}

void CUserManager::ResetMemberInfo(unsigned int charNo)
{
    CUser* user = FindUser_CharNo(charNo);
    if (user != 0)
    {
        user->ResetMemberInfo();
    }
}

Packet_CollectItemsUpdate::Packet_CollectItemsUpdate() : PacketHeader(0x27ea, 0x14)
{
    m_fieldA = 0;
    m_fieldE = 0;
    m_fieldF = 0;
    m_field13 = 0;
}

Packet_CollectItemsResult::Packet_CollectItemsResult() : PacketHeader(0x27e7, 0x16)
{
    m_fieldA = 0;
    m_fieldE = 0;
    m_field12 = 0;
}

Packet_Server_Queue_Load_Statistic::Packet_Server_Queue_Load_Statistic()
    : PacketHeader(0x9d2, 0xe)
{
    m_fieldA = 0;
    m_fieldB = 0;
    m_fieldC = 0;
}

Packet_InnerPakcet_Login::Packet_InnerPakcet_Login() : PacketHeader(0xfa0, 0xa) {}
Packet_InnerPakcet_Logout::Packet_InnerPakcet_Logout() : PacketHeader(0xfa1, 0xa) {}

Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat() : PacketHeader(0x3ec, 0xb)
{
    m_fieldA = 0xff;
}

Packet_MiniCraneSeed::Packet_MiniCraneSeed() : PacketHeader(0x27f8, 0xe)
{
    m_fieldA = 0;
}

Packet_DB_Query_Member::Packet_DB_Query_Member() : PacketHeader(0x4b2, 0xe)
{
    m_fieldA = 0;
}

Packet_DB_Query_Member_Member::Packet_DB_Query_Member_Member() : PacketHeader(0x4b0, 0xe)
{
    m_fieldA = 0;
}

Packet_Send_Time_Sync::Packet_Send_Time_Sync() : PacketHeader(0x1f4b, 0xe)
{
    m_fieldA = 0;
    m_fieldC = 0;
}

void COnTimeEventRewardStartTrigger::_DoExecute()
{
    m_mgr->OnRewardStart();
}

void COnTimeEventIdxLoad::_DoExecute()
{
    m_mgr->GetCurIdxByDBMW();
}

void COnTimeEventRewardEndTrigger::_DoExecute()
{
    m_mgr->OnRewardEnd();
}

void COnTimeEventManager::EventRewardOff()
{
    if (!IsCurState(ONTIME_EVENT_STATE_REWARD))
    {
        ChangeState(ONTIME_EVENT_STATE_START);
    }
}

namespace init_accusation
{
CApplication* CInitAccusationListMgr::getApp() const
{
    return *(CApplication**)this;
}

CInitAccusationList::CInitAccusationList(unsigned int time, unsigned int flag,
                                         CInitAccusationListMgr* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CInitAccusationList::~CInitAccusationList() {}
void CInitAccusationList::_DoExecute()
{
    m_mgr->getApp()->ClearAccusationList();
    bool flag = true;
    m_mgr->setSchedule(flag);
}
}

namespace momiji_event
{
void EventManager::Init()
{
    m_interval = 0;
    m_duration = 0;
    m_startHour = 0;
    m_startTask = 0;
    m_endTask = 0;
}
}

namespace village_attacked
{
void CVillageAttackedManager::RequestEventStart(int time)
{
    int t = (int)GetNowTime();
    t += 10;
    InsertTimer(t + 10, t + time);
}
void CVillageAttackedManager::RequestEventPenaltyEnd()
{
    OnRewardVillageAttacked();
}
void CVillageAttackedManager::SendRequestRevengeDungeon(char* pkt)
{
    char* p = pkt;
    *(unsigned int*)(p + 0xa) = m_field30;
    *(unsigned int*)(p + 0xe) = GetDungeonRemainTime();
}
void CVillageAttackedManager::ProcessByMinute()
{
    if (m_state24 != 0)
    {
        OnUpdateVillageAttacked();
    }
}

void CVillageAttackedCountdownFirst::_DoExecute()
{
    m_mgr->OnCountdownVillageAttacked(0x258);
}

void CVillageAttackedCountdownSecond::_DoExecute()
{
    m_mgr->OnCountdownVillageAttacked(0x12c);
}

void CVillageAttackedCountdownThird::_DoExecute()
{
    m_mgr->OnCountdownVillageAttacked(0x3c);
}

void CVillageAttackedStart::_DoExecute()
{
    m_mgr->OnStartVillageAttacked();
}

void CVillageAttackedEnd::_DoExecute()
{
    m_mgr->OnEndVillageAttacked();
}

void CVillageAttackedReward::_DoExecute()
{
    m_mgr->OnRewardVillageAttacked();
}

CVillageAttackedServerGroupReward::CVillageAttackedServerGroupReward(
    unsigned int time, unsigned int flag, CVillageAttackedManager* mgr)
    : CTask(time, flag)
{
    m_mgr = mgr;
}
CVillageAttackedServerGroupReward::~CVillageAttackedServerGroupReward() {}
void CVillageAttackedServerGroupReward::_DoExecute()
{
    m_mgr->OnServerGroupRewardVillageAttacked();
}
}

int CMemberManager::IsThereUpperMember(unsigned int charNo)
{
    CMember* member = FindMember(charNo);
    if (member != 0)
    {
        return member->GetUpperMember_CharId();
    }
    return -2;
}

int CTaskScheduler::RemoveTask(unsigned int taskID)
{
    return 1;
}
int CTaskScheduler::RemoveTask(CTask* task)
{
    RemoveTask(task->GetTaskID());
    return 1;
}

CVersionMgr::CVersionMgr(int a, int b, int c, int d)
{
    m_a = a;
    m_b = b;
    m_c = c;
    m_d = d;
}
CVersionMgr g_versionMgr(0, 0, 0, 0);

namespace WongWork
{
char CGMAccounts::loadGMAccounts(const char* path) { return 1; }
char CGMAccounts::appendGM(unsigned int a, unsigned int b)
{
    stGMInfo_t info;
    return 0;
}
char CGMAccounts::removeGM(unsigned int a, unsigned int b)
{
    stGMInfo_t info[3];
    return 0;
}
void CGMAccounts::LoadGmList(unsigned int dbid, int level)
{
    stGMInfo_t info;
    info.m_dbid = dbid;
    info.m_field4 = (unsigned int)level;
    m_list.push_back(info);
}
bool CGMAccounts::stGMInfo_t::operator==(const stGMInfo_t& other) const
{
    return m_dbid == other.m_dbid;
}
}

CSignal::~CSignal() {}
void CSignal::dump_core_file()
{
    CPacketTracerInstance()->AbsoluteWriteLog();
    struct rlimit rl;
    int ret = getrlimit(RLIMIT_CORE, &rl);
    rl.rlim_cur = (rlim_t)-1;
    ret = setrlimit(RLIMIT_CORE, &rl);
    abort();
}
CFloatingPointExceptSig::~CFloatingPointExceptSig() {}
void CFloatingPointExceptSig::handle(int sig)
{
    puts("Recv SIGFPE signal --> make Dump Core file.");
    if (m_app != 0)
    {
        m_app->App_Stop();
    }
    dump_core_file();
}

void CPacketDecoder::SetUdpQueue(
    std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > >* q)
{
    *(std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > >**)
        ((char*)this + 0) = q;
}
void CPacketDecoder::SetTCPQueue(
    std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >* q)
{
    *(std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >**)
        ((char*)this + 0xc) = q;
}

void TowerOfDespairReloadAPC_Task::_DoExecute()
{
    char buf[0x40];
}
