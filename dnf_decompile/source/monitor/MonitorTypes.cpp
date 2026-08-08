#include "MonitorTypes.h"

#include "DNFFileLog.h"
#include "MonitorApp.h"
#include "MonitorTable.h"
#include "Thread.h"
#include "DNFFunctionLib.h"
#include "Packet_Monitor_Member_Secede.h"
#include "Packet_GM_Request_Mid.h"

#include <fcntl.h>
#include <cerrno>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <signal.h>
#include <sys/select.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <unistd.h>

int getErrno()
{
    return *__errno_location();
}

template<class T>
void* MemPool<T>::headOfFreeList_;

template<class T>
MemPool<T>::MemPool() {}
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

char CAppLoadChecker::CheckTcpRecvQ(int size) { return 0; }
char CAppLoadChecker::CheckUdpRecvQ(int size) { return 0; }
void CAppLoadChecker::RequestDB(void* serverHandler, int flag, int size) {}
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

CUdpHandler::CUdpHandler() {}
CUdpHandler::~CUdpHandler() {}
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
            CMyFileLog log("RecvFromClient", 0xaf);
            log("./log/UdpErr", "Error fd not a socket\n");
        }
        else if (err == 0x68)
        {
            puts("Error connection reset - host not reachable");
            CMyFileLog log("RecvFromClient", 0xb6);
            log("./log/UdpErr", "Error connection reset - host not reachable\n");
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
        CMyFileLog log("RecvFromClient", 0xc6);
        log("./log/UdpErr", "Socket closed? Recv size = %d\n", *size);
        return 0;
    }
    *port = ntohs(from.sin_port);
    *addr = ntohl(from.sin_addr.s_addr);
    char* ip = inet_ntoa(from.sin_addr);
    if (*(short*)buf == 0x4c8 || *(short*)buf == 0x4c9 || *(short*)buf == 0x44f ||
        *(short*)buf == 0x450)
    {
        CMyFileLog log("RecvFromClient", 0xd1);
        log("./log/Udp", "PacketId(%d) Recv success! IP = %s, Port %d, Recv size = %d",
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
            CMyFileLog log("SendToClient", 0x119);
            log("./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", err);
        }
        else if (err < 0x61 || 2 < (unsigned int)(err - 0x6f))
        {
            printf("err = %d , strerror = %s in send\n", err, strerror(err));
            CMyFileLog log("SendToClient", 0x11f);
            log("./log/UdpErr", "err = %d , strerror = %s in send\n", err, strerror(err));
        }
        else
        {
            printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
            CMyFileLog log("SendToClient", 0x113);
            log("./log/UdpErr",
                "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
        }
        return 0;
    }
    if (sent == len)
    {
        return 1;
    }
    printf("Only %d out of %d bytes sent\n", sent, len);
    CMyFileLog log("SendToClient", 0x133);
    log("./log/UdpErr", "Only %d out of %d bytes sent\n", sent, len);
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
            CMyFileLog log("SendToServer", 0x1b8);
            log("./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", err);
        }
        else if (err < 0x61 || 2 < (unsigned int)(err - 0x6f))
        {
            printf("err = %d , strerror = %s in send\n", err, strerror(err));
            CMyFileLog log("SendToServer", 0x1be);
            log("./log/UdpErr", "err = %d , strerror = %s in send\n", err, strerror(err));
        }
        else
        {
            printf("Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
            CMyFileLog log("SendToServer", 0x1b2);
            log("./log/UdpErr",
                "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
        }
        return 0;
    }
    if (sent == len)
    {
        return 1;
    }
    printf("Only %d out of %d bytes sent\n", sent, len);
    CMyFileLog log("SendToServer", 0x1d2);
    log("./log/UdpErr", "Only %d out of %d bytes sent\n", sent, len);
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
            CMyFileLog log("RecvFromServer", 0x1e1);
            log("./log/UdpErr", "Error fd not a socket\n");
        }
        else if (err == 0x68)
        {
            puts("Error connection reset - host not reachable");
            CMyFileLog log("RecvFromServer", 0x1e8);
            log("./log/UdpErr", "Error connection reset - host not reachable\n");
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
        CMyFileLog log("RecvFromServer", 0x1f8);
        log("./log/UdpErr", "Socket closed? Recv size = %d\n", *size);
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
void CPeriodicMessageMgr::OnProcess(CServerHandler* handler) {}

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
    if (item->m_field0 == 0)
    {
        return 0x11;
    }
    if (item->m_sellCount < item->m_maxCount)
    {
        item->m_sellCount += info->m_count;
        unsigned int total = item->m_sellCount;
        CMyFileLog log("sellNpcLimitBuyItem", 0x23);
        log("./log/NpcBuyLimitItem",
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
        CMyFileLog log("undoNpcLimitBuyItem", 0x34);
        log("./log/NpcBuyLimitItem",
            "Undo-> characNo: %u, errorNo: %u, itemId: %u, cancelCount: %u, maxCount: %u, totalSellCount: %u)",
            info->m_charNo, info->m_errorNo, info->m_itemId, info->m_cancelCount,
            it->second.m_maxCount, it->second.m_sellCount);
    }
}

CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication& app) {}
CLoginLogoutStatistics::~CLoginLogoutStatistics() {}
void CLoginLogoutStatistics::ProcessByMinute() {}
void CLoginLogoutStatistics::LoginLogout(ENUM_LOGIN_LOGOUT type, unsigned char channel)
{
    std::map<unsigned char, stLoginLogout>::iterator it = m_map.find(channel);
    if (it == m_map.end())
    {
        for (int i = 0; i < 7; i++)
        {
            stLoginLogout st;
            st.m_field0 = 0;
            st.m_count = 0;
            st.m_field8 = 0;
            m_map.insert(std::pair<const unsigned char, stLoginLogout>(channel, st));
        }
        LoginLogout(type, channel);
    }
    else
    {
        it->second.m_count = it->second.m_count + 1;
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
    memcpy(this, &info, 0x4c);
}
unsigned int CItemLimitEdition::getSellEndTime() const { return 0; }
unsigned int CItemLimitEdition::getIPGNO() const { return 0; }
unsigned int CItemLimitEdition::getSellNum() const { return 0; }
char CItemLimitEdition::isSellComplete() const { return 0; }

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
                        m_app->Get_BuddyRegisterManager()->addBuddyRegister(charNo);
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
            user->RegisterToCashBlackList(obj->GetBlackUsersObject());
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
    return 0;
}
void CMemoryCashManager::incMemberCashHitCnt() {}
void CMemoryCashManager::incBuddyCashHitCnt() {}
void CMemoryCashManager::incBlackListCashHitCnt() {}

unsigned int CCashObject::GetCharacNo() { return 0; }
CMember* CCashObject::GetMemberObject() { return 0; }
void CCashObject::SetMemberObject(CMember* member) {}
void CCashObject::ClearMemberObject() {}
void CCashObject::DeleteMemberObject() {}
int CCashObject::GetBuddysObject(CBuddy** buddies) { return 0; }
void CCashObject::DeleteBuddys() {}
std::map<unsigned int, CBlackUser*>* CCashObject::GetBlackUsersObject() { return 0; }
void CCashObject::ClearMapBlackUsers() {}

unsigned int* CBuddy::getBuddyDBInfo() { return 0; }
void* CBuddy::operator new(unsigned int size) { return ::operator new(size); }
CBuddy::CBuddy(STBuddyDBInfo& info)
{
    memcpy(this, &info, 0x27);
}
CBuddy::~CBuddy() {}

CBuddyHandle::CBuddyHandle() {}
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
        CMyFileLog log("addDB", 0x5a);
        log("./log/buddy", "Buddy::addDB m_prUser is NULL");
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
        CMyFileLog log("delDB", 0xb7);
        log("./log/buddy", "Buddy::addDB m_prUser is NULL");
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
void CBlackUser::ChangeCharName(char* name) {}
char* CBlackUser::GetName() { return 0; }
unsigned int CBlackUser::GetOccurTime() { return 0; }

CExchangeServer::CExchangeServer() {}
CExchangeServer::~CExchangeServer() {}
void CExchangeServer::SetExchageServer(unsigned int ip, short port, int code, bool& result)
{
    time_t now = time(0);
    in_addr oldIp;
    oldIp.s_addr = *(unsigned int*)((char*)this + 8);
    result = false;
    if (m_active == 0)
    {
        CMyFileLog log("SetExchageServer", 0xe2c);
        log("./log/ExchangeServer", "insert new(%s,%d,%d,%d)", inet_ntoa(*(in_addr*)&ip), port,
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
        CMyFileLog log("SetExchageServer", 0xe21);
        log("./log/ExchangeServer",
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
            CMyFileLog log("Process", 0xdc);
            log("./log/DBServerErr", "CServerHandler::Process() DB Server Down!\n");
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
                CMyFileLog log("Process", 0x124);
                log("./log/TcpServer", "try connect to DBMW(%s, %d)",
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
                CMyFileLog log("Process", 0x13d);
                log("./log/TcpServer", "try connect to DBMW(%s, %d)",
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
                CMyFileLog log("Load", 0x5d);
                log("./log/Config", "DB Config Reload.\n");
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
                CMyFileLog log("Load", 0x6f);
                log("./log/Config", "Manager Config Reload.\n");
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
void CServerHandler::UnregistManagerServer()
{
    if (m_managerServer != 0)
    {
        delete m_managerServer;
        m_managerServer = 0;
    }
}
void CServerHandler::SendAllTcpGameServer(PacketHeader* pkt) {}
void CServerHandler::SendAllToGameServer(char* buf, int len) {}
void CServerHandler::SendDBMWRequestARSInfo(unsigned char flag)
{
    Packet_Web_Request_ARS_Info pkt;
    pkt.m_flag = flag;
    SendToDB(&pkt);
}
CTcpManagerServer* CServerHandler::GetTcpManagerServer() { return &m_tcpManagerServer; }
CTcpDBServer* CServerHandler::GetTcpDBServer() { return &m_tcpDbServer; }
void CServerHandler::SendToDB(PacketHeader* pkt) {}

CServerInterface::CServerInterface(stServerInfo* info) {}
CServerInterface::~CServerInterface() {}
bool CServerInterface::Initialize() { return true; }
bool CServerInterface::Destroy() { return true; }
char CServerInterface::IsValidServer() { return 1; }
char CServerInterface::IsConnected() { return 1; }
char CServerInterface::IsHeartBeatTimeOver() { return 0; }
unsigned char CServerInterface::GetChannelNo() { return 0; }
void CServerInterface::OnDisconnect() {}

CDBServer::CDBServer(stServerInfo* info) : CServerInterface(info) {}
CDBServer::~CDBServer() {}
CManagerServer::CManagerServer(stServerInfo* info) : CServerInterface(info) {}
CManagerServer::~CManagerServer() {}
void CManagerServer::SendHeartBeat(int group) {}
CGameServer::CGameServer(stServerInfo* info) : CServerInterface(info) {}
CGameServer::~CGameServer() {}

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
        CMyFileLog log("SaveProcess", 0xa8);
        log("./log/frame", "FPS(%02d) / DFC(%02d)\n", m_field18, m_field4);
        m_field28 = 0;
    }
}

CBuddyRegisterManager::CBuddyRegisterManager() {}
CBuddyRegisterManager::~CBuddyRegisterManager() {}
void CBuddyRegisterManager::addBuddyRegister(unsigned int charNo) {}

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
void CUdpNetworkThread::SetUDPQueue(void* q)
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
                                CMyFileLog log("dispatch", 0x85);
                                log("./log/recvErr",
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
                            CMyFileLog log("dispatch", 0x79);
                            log("./log/recvErr",
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
                        CMyFileLog log("dispatch", 0x6e);
                        log("./log/recvErr",
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
                        CMyFileLog log("dispatch", 0xae);
                        log("./log/TcpRecv", "RecvThread Terminate");
                        return;
                    }
                    errno = 0;
                    DNFFLib::Sleep_Ext(0, 5);
                } while (m_net == 0);
                m_net->SetEpollAcceptedPeers();
                m_net->SendPacket();
                eventCount = m_net->WaitForEvent();
            } while (eventCount == 0);
            if ((eventCount < 0 && errno != 4) && errno != 0)
            {
                break;
            }
            for (int i = 0; i < eventCount; i++)
            {
                peer = (CPeer*)((CTcpHandler*)m_handler)->GetEventPtr(i);
                if (peer != 0 && ((CTcpHandler*)m_handler)->IsSetInEvent(i))
                {
                    if (peer->RecvPacket() != 1)
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
                            if (m_sock.accept(sock) != 1)
                            {
                                printf("Accept GameServer Fail(Port : %d)\n", sock->getHandle());
                            }
                            printf("Accept GameServer(Port : %d)\n", sock->getHandle());
                            CMutex* recvB = m_net->Get_TcpRecvBLock();
                            CMutex* recvQ = m_net->Get_TcpRecvQLock();
                            void* q = m_net->Get_TcpSwapQPacket()->GetRecvQ();
                            peer->InitPeer(q, recvQ, recvB);
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
CTcpHandler::CTcpHandler() {}
CTcpHandler::~CTcpHandler() {}
char CTcpHandler::IsSetInEvent(int idx) { return 1; }
char CTcpHandler::IsSetOutEvent(int idx) { return 0; }
char CTcpHandler::IsSetErrEvent(int idx) { return 0; }

char CPeer::RecvPacket() { return 1; }
void CPeer::DisConnSig() {}
unsigned int CPeer::get_remain_sendlen() { return 0; }
int CPeer::send_packet()
{
    return 0;
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
            CMyFileLog log("send_packet", 0x13b);
            log("./log/TcpErr",
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
    CMyFileLog log("send_packet", 0x133);
    log("./log/TcpErr", "!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",
        (unsigned char)buf[1], m_sendRemain, len);
    m_sendPtr = (char*)this + 0x183c;
    m_sendRemain = 0;
    return -1;
}
TCPSocket* CPeer::GetTcpSocket() { return 0; }
void CPeer::InitPeer(void* recvQ, void* recvQLock, void* recvBLock) {}
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
        CMyFileLog log("parsing", 0xbb);
        log("./log/TcpRecv", "(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",
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
                CMyFileLog log("parsing", 0xd0);
                log("./log/TcpRecv",
                    "Recv Size[%d], Parsing Packet Size[%d] is Too Large, offset:%x, buf:%x, alreadyRead:%d",
                    recvLen, pktSize, m_buf, (char*)this + 0x1c, m_alreadyRead);
                m_buf = (char*)this + 0x1c;
                m_remainLen = 0;
                return 0;
            }
            if (totalLen < pktSize)
            {
                CMyFileLog log("parsing", 0x100);
                log("./log/TcpRecv",
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
            CMyFileLog log("parsing", 0xf8);
            log("./log/TcpRecv", "need more data (parsinglength < HEADER_SIZE): body=%d !!",
                totalLen);
        }
LAB_51773:
        if (0 < (int)totalLen)
        {
            if (0x1800 < totalLen)
            {
                CMyFileLog log("parsing", 0x10e);
                log("./log/TcpRecv",
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
void CPeer::operator delete(void* p) { ::operator delete(p); }

char TCPSocket::open() { return 0; }
char TCPSocket::connect(const char* ip, unsigned short port) { return 0; }
void TCPSocket::setOptNonBlock() {}
char TCPSocket::bind(unsigned short port, bool flag) { return 0; }
char TCPSocket::listen(int backlog) { return 0; }
char TCPSocket::pollReadEvent() { return 0; }
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
    result = select(m_fd + 1, &readfds, &writefds, &errfds, &tv);
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
char TCPSocket::accept(TCPSocket* sock) { return 0; }
int TCPSocket::getHandle() const { return 0; }

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
            peer->InitPeer(recvQ, q, b);
            peer->ConnSig();
            SetEpollConnectedPeer(peer);
            sockRef = sock->getHandle();
            return 1;
        }
        puts("tcpSock.connect Fail!");
        CMyFileLog log("OpenTcpService", 0x123);
        log("./log/TcpServer", "tcpSock.connect(%s, %d) Fail!", ip, (unsigned int)port);
        DeletePeer(peer);
        return 0;
    }
    puts("tcpSock.open() Fail!");
    CMyFileLog log("OpenTcpService", 0x118);
    log("./log/TcpServer", "tcpSock.open() Fail!");
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
void CTcpNetSystem::SetEpollAcceptedPeers() {}
void CTcpNetSystem::SendPacket() {}
int CTcpNetSystem::WaitForEvent() { return 0; }
void CTcpNetSystem::DeletePeer(CPeer* peer) {}
CPeer* CTcpNetSystem::CreatePeer() { return 0; }
void CTcpNetSystem::InsertAcceptedPeer(CPeer* peer) {}
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
CMutex* CTcpNetSystem::Get_TcpRecvBLock() { return 0; }
CMutex* CTcpNetSystem::Get_TcpRecvQLock() { return 0; }
CSwapQueue<std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > >, 2>*
    CTcpNetSystem::Get_TcpSwapQPacket()
{
    return 0;
}

CTcpManagerServer::CTcpManagerServer() {}
CTcpManagerServer::~CTcpManagerServer() {}
void CTcpManagerServer::Init(CTcpNetSystem* net) {}
void CTcpManagerServer::SetIP(std::string ip) {}
void CTcpManagerServer::SetPort(unsigned short port) {}
int* CTcpManagerServer::GetSockRef() { return 0; }
int CTcpManagerServer::GetSock() { return 0; }
char CTcpManagerServer::IsValidServer() { return 1; }
const char* CTcpManagerServer::GetIP() { return m_ip.c_str(); }
unsigned short CTcpManagerServer::GetPort() { return m_port; }
void CTcpManagerServer::SendHeartbeat(unsigned char group) {}

CTcpDBServer::CTcpDBServer() {}
CTcpDBServer::~CTcpDBServer() {}
void CTcpDBServer::Init(CTcpNetSystem* net) {}
void CTcpDBServer::SetIP(std::string ip) {}
void CTcpDBServer::SetPort(unsigned short port) {}
int* CTcpDBServer::GetSockRef() { return 0; }
int CTcpDBServer::GetSock() { return 0; }
char CTcpDBServer::IsValidServer() { return 1; }
const char* CTcpDBServer::GetIP() { return m_ip.c_str(); }
unsigned short CTcpDBServer::GetPort() { return m_port; }
void CTcpDBServer::SendHeartbeat() {}

CUserManager::CUserManager() {}
CUserManager::~CUserManager() {}
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
CUser* CUserManager::FindUser_CharName(const std::string& name) const
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
        for (std::map<const unsigned int, CUser*>::iterator it = m_users.begin();
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
}
void CUserManager::GetSchoolCount(unsigned int school, unsigned int* out, unsigned char& idx)
{
    std::map<const unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(school);
    CMyFileLog log("GetSchoolCount", 0x418);
    log("./log/School", "GetSchoolCount(%u)", school);
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
            CMyFileLog log("DeleteProhibitUser", 0x2c7);
            log("./log/User",
                "[PROHIBIT DELETE USER Err] Disconnected User DB ID : %s, first ch(%d)/complete ch(%d)",
                NumberToString(dbid, 0), (int)puCh, (int)channel);
            return 0;
        }
        char fromWeb = pu->fromWeb();
        if (fromWeb != 0 && channel != -1)
        {
            CMyFileLog log("DeleteProhibitUser", 0x2ce);
            log("./log/User",
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
        CMyFileLog log("CreateUser", 0x1a9);
        log("./log/LoginErr",
            "uDBID(%s) uCharNo(%d) is already exist at m_mapUsers!", NumberToString(dbid, 0),
            charNo);
    }
    user->SetUserPosState(2);
    if (charNo != 0)
    {
        if (InsertUser_CharNo(charNo, user) != 1)
        {
            CMyFileLog log("CreateUser", 0x1b3);
            log("./log/LoginErr",
                "uDBID(%s) uCharNo(%d) is already exist at m_mapCharNoUsers!",
                NumberToString(dbid, 0), charNo);
        }
        if (InsertUser_CharName(charName, user) != 1)
        {
            CMyFileLog log("CreateUser", 0x1b7);
            log("./log/LoginErr",
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
            CMyFileLog log("DeleteUser", 0x8b);
            log("./log/ProhibitUser",
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
            CMyFileLog log("DeleteUser", 0xc4);
            log("./log/ProhibitUser",
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

CDNFProhibitUser::CDNFProhibitUser() {}
CDNFProhibitUser::~CDNFProhibitUser() {}
void CDNFProhibitUser::operator delete(void* p) { ::operator delete(p); }
char CDNFProhibitUser::GetChannelNo() { return 0; }
char CDNFProhibitUser::fromWeb() { return 0; }
void CDNFProhibitUser::SetUserConnectableTime(unsigned int dbid, short time, char channel,
                                              bool flag)
{
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
            CMyFileLog log("AddSchoolNo", 0x3f9);
            log("./log/School",
                "3) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, inner->size(), m_mapSchools.size());
        }
        else
        {
            inner->insert(std::pair<unsigned char, unsigned int>(channel, 1));
            CMyFileLog log("AddSchoolNo", 0x3f3);
            log("./log/School",
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
        CMyFileLog log("AddSchoolNo", 0x3ed);
        log("./log/School",
            "1) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
            schoolNo, channel, newInner.size(), m_mapSchools.size());
    }
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
            CMyFileLog log("DelSchoolNo", 0x40f);
            log("./log/School",
                "DelSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
                schoolNo, channel, innerSize, outerSize);
        }
    }
}

CMemberManager::CMemberManager() {}
CMemberManager::~CMemberManager() {}
void CMemberManager::Init(CApplication* app, CUserManager* userMgr, CMemberConfig* memberConfig,
                          CMemberExpTbl* memberExpTbl) {}
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
            CMyFileLog log("MemberMemLogout", 0x23b);
            log("./log/MemberMember",
                "CMemberManager::MemberMemLogout()\tMemberKey == 0\tchar id(%d), Maybe after logout, this user connect at character screen, and logout again! check User.log!",
                user->GetUniqCharNo());
        }
        else
        {
            CMember* member = FindMember(key);
            if (member == 0)
            {
                CMyFileLog log("MemberMemLogout", 0x241);
                log("./log/Except",
                    "CMemberManager::MemberMemLogout()\t0 == pclMember\tMemberKey(%d)", key);
            }
            else
            {
                member->NoticeMemberLogin_Out(user, 0);
                char ok = (char)DeleteMember(key, cash);
                if (ok != 1)
                {
                    CMyFileLog log("MemberMemLogout", 0x24b);
                    log("./log/MemberMember",
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
unsigned int CMemberManager::GetLowerMemberEnterLimit(int level)
{
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
        unsigned int limit = GetLowerMemberEnterLimit((int)level);
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
        CMyFileLog log("LoadMember", 0x26d);
        log("./log/Except",
            "[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n", key);
        return 0;
    }
    CUser* user = FindMemberUser(key);
    if (user == 0)
    {
        CMyFileLog log("LoadMember", 0x273);
        log("./log/Except",
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
    CMyFileLog log("LoadMember", 0x285);
    log("./log/Except",
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
    return 0;
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
        CMyFileLog log("InsertMember", 0x87);
        log("./log/Member", "[INSERT_ERR] Member Key : %d\tpclMember == 0", key);
        return 0;
    }
    else
    {
        std::pair<std::map<unsigned int, CMember*>::iterator, bool> r =
            m_members.insert(std::pair<const unsigned int, CMember*>(key, member));
        if (!r.second)
        {
            CMyFileLog log("InsertMember", 0x83);
            log("./log/Member", "[INSERT_ERR] Member Key : %d\tAlready Member Exist", key);
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
                CMyFileLog log("SaveMemberOnUnConnect", 0x137);
                log("./log/Member",
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
        CMyFileLog log("MemerMemLogin", 0x20c);
        log("../log/Member",
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
        CMyFileLog log("MemerMemLogin", 0x21a);
        log("../log/Member", "CMemberManager::MemerMemLogin() ( is already member error ) : %d",
            key);
    }
    return result;
}

namespace village_attacked
{
int village_attacked_scheduler[18];
int MAX_SCHEDULER_COUNT;
int HUNTING_POINT_WEIGTH_CONST;
int REWARD_BUFF_TIME;
int REWARD_PENALTY_TIME;
int COUNTDOWN_FIRST_TIME;
int COUNTDOWN_SECOND_TIME;
int COUNTDOWN_THIRD_TIME;

int compareTime(int const& a, int const& b)
{
    return b < a;
}

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
    int bestTime = GetNextSchedule(*t, village_attacked_scheduler[0],
                                   village_attacked_scheduler[1],
                                   village_attacked_scheduler[2]);
    for (int i = 1; i < MAX_SCHEDULER_COUNT; i++)
    {
        int s = GetNextSchedule(*t, village_attacked_scheduler[i * 6],
                                village_attacked_scheduler[i * 6 + 1],
                                village_attacked_scheduler[i * 6 + 2]);
        if (s < bestTime)
        {
            bestIdx = i;
            bestTime = s;
        }
    }
    int end = GetNextSchedule(*t, village_attacked_scheduler[bestIdx * 6 + 3],
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
void CVillageAttackedManager::SetRewardCloseTime(int rewardType)
{
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
        SetRewardCloseTime(m_field30);
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
                    CMyFileLog log("UpdateHuntingPoint", 0x3ae);
                    log("./log/village", "Send Success Count [charac:%u][count:%d]",
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
                    CMyFileLog log("SendCharacRank", 0x238);
                    log("./log/village", "User is null [charac_no:%u]", p.m_characNo);
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

CVillageAttackedCountdownFirst::CVillageAttackedCountdownFirst(int time, int flag,
                                                               CVillageAttackedManager* mgr) {}
CVillageAttackedCountdownFirst::~CVillageAttackedCountdownFirst() {}
CVillageAttackedCountdownSecond::CVillageAttackedCountdownSecond(int time, int flag,
                                                                CVillageAttackedManager* mgr) {}
CVillageAttackedCountdownSecond::~CVillageAttackedCountdownSecond() {}
CVillageAttackedCountdownThird::CVillageAttackedCountdownThird(int time, int flag,
                                                              CVillageAttackedManager* mgr) {}
CVillageAttackedCountdownThird::~CVillageAttackedCountdownThird() {}
CVillageAttackedStart::CVillageAttackedStart(int time, int flag, CVillageAttackedManager* mgr) {}
CVillageAttackedStart::~CVillageAttackedStart() {}
CVillageAttackedEnd::CVillageAttackedEnd(int time, int flag, CVillageAttackedManager* mgr) {}
CVillageAttackedEnd::~CVillageAttackedEnd() {}
CVillageAttackedReward::CVillageAttackedReward(int time, int flag, CVillageAttackedManager* mgr) {}
CVillageAttackedReward::~CVillageAttackedReward() {}
}

CUser::CUser() {}
CUser::~CUser() {}
void* CUser::operator new(unsigned int size) { return ::operator new(size); }
unsigned int CUser::GetUniqCharNo() { return *(unsigned int*)((char*)this + 4); }
void CUser::AttachMember(CMember* member) {}
void CUser::operator delete(void* p) { ::operator delete(p); }
void* CUser::GetGameServer() { return *(void**)((char*)this + 8); }
void* CUser::GetTcpGameServer() { return 0; }
unsigned int CUser::GetDBID() { return *(unsigned int*)((char*)this + 0); }
short CUser::GetLevel() { return *(short*)((char*)this + 0x44); }
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
void CUser::SendTcpGameserver(PacketHeader* pkt) {}
void CUser::SendToGameserver(char* buf, int len) {}
void CUser::AddBuddyFromCash(CBuddy* buddy) {}
void CUser::SetBuddyDBFlag(unsigned int flag) {}
void CUser::RegisterToCashBlackList(std::map<unsigned int, CBlackUser*>* map) {}
void CUser::SetBlackListDBFlag(unsigned int flag) {}
void CUser::SetDBID(unsigned int dbid) {}
void CUser::SetUniqCharNo(unsigned int charNo) {}
void CUser::SetIdByChannel(int channel) {}
void CUser::SetGameServer(void* server) {}
void CUser::SetUserPosState(unsigned char state) {}
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
char CMember::CheckDailyScheduleTimeOver(int day, long long time)
{
    return 0;
}
char CMember::CheckDayHourScheduleTimeOver(int day, int hour, long long time)
{
    return 0;
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
        CMyFileLog log("CheckMemberRegisterFlag", 0x336);
        log("./log/MemberModify",
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
unsigned int CMember::GetLowerMemberCount() const { return 0; }
unsigned int* CMember::GetUpperMember_Proxy()
{
    return (unsigned int*)((char*)this + 6);
}
void CMember::SetMemberDeleteTime(time_t t) { m_dayHourTime = (unsigned int)t; }
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
int CMember::InsertUpperMember(unsigned int charNo, unsigned char level, char* name, bool flag)
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
int CMember::InsertLowerMember(unsigned int charNo, unsigned char level, char* name, bool flag)
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

CMemberConfig::CMemberConfig() {}
CMemberConfig::~CMemberConfig() {}
void CMemberConfig::Load_Table(const std::string& path) {}

CMemberExpTbl::CMemberExpTbl() {}
CMemberExpTbl::~CMemberExpTbl() {}
void CMemberExpTbl::Load_Table(const std::string& path) {}
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
void CPacketTranslater::OnLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnLogout(PacketHeader* pkt) {}
void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnHeartBeat(PacketHeader* pkt) {}
void CPacketTranslater::OnCharLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeOtherChannelChatMsg(PacketHeader* pkt) {}
void CPacketTranslater::OnCeraUpdate(PacketHeader* pkt) {}
void CPacketTranslater::OnEventItemUpdate(PacketHeader* pkt) {}
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
                CMyFileLog log("OnReplyQueryMember", 0x4e5);
                log("./log/MemberMember",
                    "CHECK MEMBER ID: CPacketTranslater::OnReplyQueryMember()\t"
                    "m_clMemberManager.LoadMember()\tmember id(%d)",
                    *(unsigned int*)((char*)pkt + 0xb));
            }
        }
    }
    else
    {
        CMyFileLog log("OnReplyQueryMember", 0x4eb);
        log("./log/Except",
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
        CMyFileLog log("OnRequestMemberEnter", 0x599);
        log("./log/MemberModify", "Err Already Member : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    if (requester->IsAbleToRegisterMember() != 1 || target->IsAbleToRegisterMember() != 1)
    {
        SendRequestMemberEnterResult(requester, '7', (char*)pkt + 0x12);
        CMyFileLog log("OnRequestMemberEnter", 0x5a2);
        log("./log/MemberModify",
            "Err Member Register Restrict : requester(%d:%d) responser(%d:%d)",
            requester->GetUniqCharNo(), requester->IsAbleToRegisterMember(),
            target->GetUniqCharNo(), target->IsAbleToRegisterMember());
        return;
    }
    if (requester->IsBlackUser(target->GetUniqCharNo()) != 0)
    {
        SendRequestMemberEnterResult(requester, '6', (char*)pkt + 0x12);
        CMyFileLog log("OnRequestMemberEnter", 0x5a9);
        log("./log/MemberModify", "Err Member Register Black : requester(%d) responser(%d)",
            requester->GetUniqCharNo(), target->GetUniqCharNo());
        return;
    }
    WongWork::CGMAccounts* gm = (WongWork::CGMAccounts*)m_pclApp->GetGMAccounts();
    if (gm != 0 && gm->isGM(target->GetDBID()) != 0)
    {
        SendRequestMemberEnterResult(requester, 'Z', (char*)pkt + 0x12);
        CMyFileLog log("OnRequestMemberEnter", 0x5b4);
        log("./log/MemberModify", "Err Member Register GM : requester(%d) responser(%d)",
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
            CMyFileLog log("OnRequestMemberEnter", 0x5d0);
            log("./log/MemberModify",
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
                    CMyFileLog log("OnMemberEnterReply", 0x621);
                    log("./log/MemberModify",
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
                        CMyFileLog log("OnMemberEnterReply", 0x63a);
                        log("./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else if (code == 3)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 3, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 3, 0, 0, 0, 0);
                        CMyFileLog log("OnMemberEnterReply", 0x647);
                        log("./log/MemberModify",
                            "Char id(%d) Reject And Reset char id(%d)",
                            requester->GetUniqCharNo(), responser->GetUniqCharNo());
                        requester->ResetRequestMemberEnter();
                    }
                    else if (code == 4)
                    {
                        SendNoticeMemberEnterPacketOk(responser, requester, 4, 0, 0, 0, 0);
                        SendNoticeMemberEnterPacketReply(requester, responser, 4, 0, 0, 0, 0);
                        CMyFileLog log("OnMemberEnterReply", 0x654);
                        log("./log/MemberModify",
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
                            CMyFileLog log("OnMemberEnterReply", 0x662);
                            log("./log/MemberModify",
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
                                            CMyFileLog log("OnMemberEnterReply", 0x69b);
                                            log("./log/MemberModify",
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
                                            CMyFileLog log("OnMemberEnterReply", 0x688);
                                            log("./log/MemberModify",
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
                                        CMyFileLog log("OnMemberEnterReply", 0x681);
                                        log("./log/MemberModify",
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
                                CMyFileLog log("OnMemberEnterReply", 0x66a);
                                log("./log/MemberModify", "Err(%d) : %d Fail And Reset %d", err,
                                    requester->GetUniqCharNo(), responser->GetUniqCharNo());
                                requester->ResetRequestMemberEnter();
                            }
                        }
                    }
                }
                else
                {
                    SendRequestMemberEnterResult(requester, '/', responser->GetCharName());
                    CMyFileLog log("OnMemberEnterReply", 0x62e);
                    log("./log/MemberModify", "Char id(%d) Reset char id(%d)",
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
                    memberMgr->GetMemberExpNextLevelNeedExpLevel(
                        rpkt.m_upperExp, rpkt.m_upperExpNext, rpkt.m_upperExpLevel);
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
            CMyFileLog log("OnCallMemberList", 0x7cd);
            log("./log/Except", "%s", e.what());
        }
        catch (...)
        {
            puts("CPacketTranslater::OnCallMemberList() Exception Break");
            CMyFileLog log("OnCallMemberList", 0x7d3);
            log("./log/Except", "CPacketTranslater::OnCallMemberList() Exception Break\n");
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
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnPayTaxToUpper : 0 == m_pclApp");
    }
    CMemberManager* memberMgr = (CMemberManager*)((char*)m_pclApp + 0x2d0);
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    CMember* member = memberMgr->FindMember(*(unsigned int*)((char*)pkt + 0xa));
    if (member == 0)
    {
        CMyFileLog log("OnPayTaxToUpper", 0x842);
        log("./log/Except",
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
            CMyFileLog log("OnPayTaxToUpper", 0x849);
            log("./log/Member",
                "CPacketTranslater::OnPayTaxToUpper : pclUpperUser == 0!, Maybe, upper Member "
                "is not connect!\tupper char id(%d)",
                upperCharId);
        }
        else
        {
            CUser* payUser = userMgr->FindUser_CharNo(*(unsigned int*)((char*)pkt + 0xa));
            if (payUser == 0)
            {
                CMyFileLog log("OnPayTaxToUpper", 0x84f);
                log("./log/Except",
                    "[MEMBER] CPacketTranslater::OnPayTaxToUpper : pclPayUser == 0!\tchar "
                    "id(%d)\tmoney(%d)\tfatigue(%d)",
                    *(unsigned int*)((char*)pkt + 0xa), *(unsigned int*)((char*)pkt + 0xe),
                    *(unsigned int*)((char*)pkt + 0x12));
            }
            else
            {
                int lowerCnt = upperUser->GetConnLowerMemberCnt();
                short level = upperUser->GetLevel();
                unsigned int limit = memberMgr->GetLowerMemberEnterLimit((int)level);
                unsigned char expLevel = payUser->GetUpperMemberExpLevel();
                float rate = (float)(0.01 * (double)expLevel) +
                             (float)(0.05 * ((double)lowerCnt / (double)limit));
                int moneyTax = (int)((double)*(unsigned int*)((char*)pkt + 0xe) * (double)rate);
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
void CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader* pkt) {}
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
        CMyFileLog log("OnLogoutComplete", 0x8a5);
        log("./log/User", "[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n", dbid,
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
    }
    else
    {
        char* dbid = NumberToString(*(unsigned int*)((char*)pkt + 0xa), 0);
        CMyFileLog log("OnLogoutComplete", 0x8a1);
        log("./log/User",
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
    CMyFileLog log("OnUserRepel", 0x954);
    log("./log/Web", "CPacketTranslater::OnUserRepel m_id(%s) , charNo(%d)\n", dbid,
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
void CPacketTranslater::OnCharacterDelete(PacketHeader* pkt) {}
void CPacketTranslater::OnEventStart(PacketHeader* pkt) {}
void CPacketTranslater::OnEventEnd(PacketHeader* pkt) {}
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
        CMyFileLog log("OnNotifyNewMail", 0xb66);
        log("%s", "%s", "OnNotifyNewMail");
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
    CMyFileLog log("OnWebQueryUserState", 0xb78);
    log("./log/User", "WebQueryUserState Result[m_id: %s] : [%s] : %d\n", dbid, state);
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
    CMyFileLog log("OnNoticeMessage", 0xf8e);
    log("./log/GM_msg", "CPacketTranslater::OnNoticeMessage()%s\n", (char*)pkt + 0xb);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x10b);
}
void CPacketTranslater::OnRelayServerUserCheck(PacketHeader* pkt) {}
void CPacketTranslater::OnForbidChat(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnForbidChat : 0 == m_pclApp");
    }
    CMyFileLog log("OnForbidChat", 0xfdd);
    log("./log/GM_msg", "CPacketTranslater::OnForbidChat() %s for %d secs\n", (char*)pkt + 0x12,
        *(unsigned int*)((char*)pkt + 0xa));
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x30);
}
void CPacketTranslater::OnNoticeProhibitConnectUser(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader* pkt) {}
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
void CPacketTranslater::OnRegisterToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDeleteToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnRequestBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDBMWResisterToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnExchangeServerInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeCharLiveOnTenMin(PacketHeader* pkt) {}
void CPacketTranslater::OnWebNoticeSingle(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnWebNoticeSingle", 0xf67);
        log("./log/WebNotice", "CPacketTranslater::OnWebNoticeSingle : 0 == m_pclApp");
    }
    else
    {
        CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
        handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
        CMyFileLog log("OnWebNoticeSingle", 0xf6f);
        log("./log/WebNotice", "OnWebNoticeSingle : (%s,%d)\n", (char*)pkt + 0xb,
            (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa));
    }
}
void CPacketTranslater::OnAddBuddy(PacketHeader* pkt) {}
void CPacketTranslater::OnAddBuddyDBReply(PacketHeader* pkt) {}
void CPacketTranslater::OnDelBuddy(PacketHeader* pkt) {}
void CPacketTranslater::OnDelBuddyDBReply(PacketHeader* pkt) {}
void CPacketTranslater::OnQueryBuddyInfoDBReply(PacketHeader* pkt) {}
void CPacketTranslater::OnWebChangeUserHandicap(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnWebChangeUserHandicap", 0x1127);
        log("./log/hack", "CPacketTranslater::OnWebChangeUserHandicap : 0 == m_pclApp");
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
        CMyFileLog log("OnGMRequestMid", 0x113c);
        log("./log/Except", "CPacketTranslater::OnGMRequestMid : 0 == m_pclApp");
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
void CPacketTranslater::onReplyLoadTowerFullRank(PacketHeader* pkt) {}
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
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnInnerPacketLogout(PacketHeader* pkt) {}
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
    CMyFileLog log("onLoadCleanPadPoint", 0x12e0);
    log("./log/Cleanpad", "CleanPad Point");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onLoadBlackIPMonitor(PacketHeader* pkt) {}
void CPacketTranslater::onLoadBlackIPMonitorPartLoad(PacketHeader* pkt)
{
    CMyFileLog log("onLoadBlackIPMonitorPartLoad", 0x1307);
    log("./log/BlackIP", "BlackIP Monitor Part Load");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onLoadBlackIPMonitorDeleteIP(PacketHeader* pkt)
{
    CMyFileLog log("onLoadBlackIPMonitorDeleteIP", 0x131a);
    log("./log/BlackIP", "BlackIP Monitor Delete IP");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x19e);
}
void CPacketTranslater::OnChangeCharName(PacketHeader* pkt) {}
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
        CMyFileLog log("OnNotifyAuctionMail", 0x137e);
        log("%s", "%s", "OnNotifyAuctionMail");
    }
}
void CPacketTranslater::OnPvPChannelInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnPvPChannelUserCount(PacketHeader* pkt) {}
void CPacketTranslater::OnChannelType(PacketHeader* pkt) {}
void CPacketTranslater::OnServerMessageInfo(PacketHeader* pkt)
{
    CMyFileLog log("OnServerMessageInfo", 0x1402);
    log("./log/ServerEvent", "Packet_Monitor_Server_Message_Info");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x5f);
}
void CPacketTranslater::OnRequestReloadPowerWarRanker(PacketHeader* pkt)
{
    CMyFileLog log("OnRequestReloadPowerWarRanker", 0x1418);
    log("./log/ServerEvent", "Packet_Request_Reload_Power_War_Ranker");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 10);
}
void CPacketTranslater::onLoadPunishUserReq(PacketHeader* pkt)
{
    CMyFileLog log("onLoadPunishUserReq", 0x142d);
    log("./log/Secu", "Punish User Request");
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, 0x4bd);
}
void CPacketTranslater::onIPCounterControl(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::onIPCounterControl : 0 == m_pclApp");
    }
    CMyFileLog log("onIPCounterControl", 0x1448);
    log("./log/Secu", "IPCounterControl - type : %d, value : %d ",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
    CIPCounter* counter = (CIPCounter*)m_pclApp->getIPCounter();
    counter->setOption(*(unsigned char*)((char*)pkt + 0xa), *(unsigned char*)((char*)pkt + 0xb));
}
void CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionLoadDataRpy(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionSellEnd(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionBuyableRequest(PacketHeader* pkt) {}
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
        CMyFileLog log("OnSetCleanPadPoint", 0x1660);
        log("%s", "CPacketTranslater::OnSetCleanPadPoint() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break");
        CMyFileLog log("OnSetCleanPadPoint", 0x1666);
        log("%s", "CPacketTranslater::OnSetCleanPadPoint() Exception Break");
    }
}
void CPacketTranslater::OnResponseIPCounterList(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnResponseIPCounterList : 0 == m_pclApp");
    }
    CMyFileLog log("OnResponseIPCounterList", 0x16c8);
    log("./log/Secu", "[IP Counter] DataStats : %d, DataSize : %d ",
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
    CMyFileLog log("OnResponseFullIPCounterList", 0x16e8);
    log("./log/Secu", "[D_IP Counter] DataStats : %d, DataSize : %d ",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xa),
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xb));
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
}
void CPacketTranslater::OnTakeScreenShot(PacketHeader* pkt) {}
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
        CMyFileLog log("OnVillageAttackedGMCommand", 0x1764);
        log("%s", "CPacketTranslater::OnVillageAttackedGMCommand() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnVillageAttackedGMCommand", 0x1769);
        log("%s", "CPacketTranslater::OnVillageAttackedGMCommand() Exception Break\n");
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
void CPacketTranslater::OnSetARSInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnWebRequestARSInfo(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnWebRequestARSInfo : 0 == m_pclApp");
    }
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    if (handler != 0)
    {
        CMyFileLog log("OnWebRequestARSInfo", 0x181d);
        log("./log/Secu", "[ARS_INFO] Web -> Monitor -> DBMW");
        handler->SendDBMWRequestARSInfo(*(unsigned char*)((char*)pkt + 0xa));
    }
}
void CPacketTranslater::OnCheckOverlappedAccusation(PacketHeader* pkt) {}
void CPacketTranslater::OnGameServerRegist(PacketHeader* pkt) {}
void CPacketTranslater::OnNoCache(PacketHeader* pkt) {}
void CPacketTranslater::OnDisableUserOneToOneChat_GM(PacketHeader* pkt) {}
void CPacketTranslater::OnFindCharacName_useUID(PacketHeader* pkt) {}
void CPacketTranslater::OnRenew_GM_List(PacketHeader* pkt) {}
void CPacketTranslater::OnLoadPeriodicMessage(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendToDB(pkt);
    CMyFileLog log("OnLoadPeriodicMessage", 0x19e0);
    log("./log/PeriodicMessage", "Web Request is Arrived and Send Request DBMW");
}
void CPacketTranslater::OnResultLoadPeriodicMessage(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterEventIdx(PacketHeader* pkt)
{
    unsigned int idx = *(unsigned int*)((char*)pkt + 0xa);
    CMyFileLog log("OnRegisterEventIdx", 0x1a15);
    log("./log/OnTimeEvent", "OnRegisterEventIdx:result =%d, Eventidx =%d",
        (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe), idx);
    if (*(char*)((char*)pkt + 0xe) != 0)
    {
        ((COnTimeEventManager*)*(void**)((char*)m_pclApp + 800))->SetEventIdx(idx);
    }
}
void CPacketTranslater::OnRegisterEventUserIdx(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterEventItem(PacketHeader* pkt) {}
void CPacketTranslater::OnResultRegisterEventIdx(PacketHeader* pkt) {}
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
        CMyFileLog log("OnMonitorPunishCancel", 0x1bf5);
        log("%s", "CPacketTranslater::OnMonitorPunishCancel() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnMonitorPunishCancel() Exception Break");
        CMyFileLog log("OnMonitorPunishCancel", 0x1bfb);
        log("%s", "CPacketTranslater::OnMonitorPunishCancel() Exception Break\n");
    }
}
void CPacketTranslater::OnBroadcastMsg(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            CMyFileLog log("OnBroadcastMsg", 0x1c0c);
            log("./log/WebNotice", "CPacketTranslater::OnBroadcastMsg : 0 == m_pclApp");
        }
        else
        {
            CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
            handler->SendAllToGameServer((char*)pkt, *(unsigned short*)((char*)pkt + 2));
            CMyFileLog log("OnBroadcastMsg", 0x1c14);
            log("./log/WebNotice", "OnBroadcastMsg : (%s,%d)\n", (char*)pkt + 0xf,
                (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe));
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnBroadcastMsg", 0x1c18);
        log("%s", "CPacketTranslater::OnBroadcastMsg Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnBroadcastMsg", 0x1c1d);
        log("%s", "CPacketTranslater::OnBroadcastMsg Exception Break");
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
        CMyFileLog log("OnMonitorSecuServiceConnWeb", 0x1c4f);
        log("%s", "CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break");
        CMyFileLog log("OnMonitorSecuServiceConnWeb", 0x1c55);
        log("%s", "CPacketTranslater::OnMonitorSecuServiceConnWeb() Exception Break\n");
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
void CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink(PacketHeader* pkt) {}
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
void CPacketTranslater::onSocialEventRewardItemResponse(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemInfo(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemInfoAll(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemUpdate(PacketHeader* pkt) {}
void CPacketTranslater::onRequestCharacInfoByCharacName(PacketHeader* pkt) {}
void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* pkt) {}
void CPacketTranslater::onCollectItems(PacketHeader* pkt) {}
void CPacketTranslater::onCollectItemsResult(PacketHeader* pkt) {}
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
void CPacketTranslater::OnWebEmergencyPatchMessage(PacketHeader* pkt) {}
void CPacketTranslater::OnUpdateMiniCraneSeed(PacketHeader* pkt) {}
void CPacketTranslater::onStartGameEventFromServer(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        CMyFileLog log("onStartGameEventFromServer", 0x22e2);
        log("./log/AradOnly", "[Server Event] m_pclApp is null.");
        throw 0x22e3;
    }
    if (pkt == 0)
    {
        CMyFileLog log("onStartGameEventFromServer", 0x22e9);
        log("./log/AradOnly", "[Server Event] Packet_StartGameEventFromServer is null.");
        throw 0x22ea;
    }
    Packet_Monitor_Event_Start epkt;
    epkt.m_fieldA = *(unsigned int*)((char*)pkt + 0xa);
    epkt.m_fieldB = *(unsigned short*)((char*)pkt + 0x16);
    epkt.m_fieldC = *(unsigned short*)((char*)pkt + 0x18);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(&epkt);
    CMyFileLog log("onStartGameEventFromServer", 0x22f2);
    log("./log/AradOnly", "[Server Event] start event. (event:%d, param:%d,%d)",
        *(unsigned int*)((char*)pkt + 0xa), *(unsigned short*)((char*)pkt + 0x16),
        *(unsigned short*)((char*)pkt + 0x18));
}
void CPacketTranslater::onEndGameEventFromServer(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        CMyFileLog log("onEndGameEventFromServer", 0x2304);
        log("./log/AradOnly", "[Server Event] m_pclApp is null.");
        throw 0x2305;
    }
    if (pkt == 0)
    {
        CMyFileLog log("onEndGameEventFromServer", 0x230b);
        log("./log/AradOnly", "[Server Event] Packet_StopGameEventFromServer is null.");
        throw 0x230c;
    }
    Packet_Monitor_Event_End epkt;
    epkt.m_fieldA = *(unsigned int*)((char*)pkt + 0xa);
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(&epkt);
    CMyFileLog log("onEndGameEventFromServer", 0x2312);
    log("./log/AradOnly", "[Server Event] end event. (event:%d)",
        *(unsigned int*)((char*)pkt + 0xa));
}
void CPacketTranslater::onReloadCountryCode(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(pkt);
    CMyFileLog log("onReloadCountryCode", 0x2344);
    log("./log/Web", "CPacketTranslater::onReloadCountryCode()\n");
}
void CPacketTranslater::onReloadSecurityRestrictPolicy(PacketHeader* pkt)
{
    CServerHandler* handler = (CServerHandler*)*(void**)((char*)m_pclApp + 0xa0);
    handler->SendAllTcpGameServer(pkt);
    CMyFileLog log("onReloadSecurityRestrictPolicy", 0x2359);
    log("./log/Web", "CPacketTranslater::onReloadSecurityRestrictPolicy()\n");
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
    m_handlers[1000] = (void*)CPacketTranslater::OnLogin;
    m_handlers[1001] = (void*)CPacketTranslater::OnLogout;
    m_handlers[1002] = (void*)CPacketTranslater::OnReplyUserInfo;
    m_handlers[1004] = (void*)CPacketTranslater::OnHeartBeat;
    m_handlers[1007] = (void*)CPacketTranslater::OnCharLogin;
    m_handlers[1011] = (void*)CPacketTranslater::OnNoticeOtherChannelChatMsg;
    m_handlers[1100] = (void*)CPacketTranslater::OnCeraUpdate;
    m_handlers[1101] = (void*)CPacketTranslater::OnEventItemUpdate;
    m_handlers[1203] = (void*)CPacketTranslater::OnReplyQueryMember;
    m_handlers[1207] = (void*)CPacketTranslater::OnRequestMemberEnter;
    m_handlers[1209] = (void*)CPacketTranslater::OnMemberEnterReply;
    m_handlers[1211] = (void*)CPacketTranslater::OnMemberSecede;
    m_handlers[1214] = (void*)CPacketTranslater::OnCallMemberList;
    m_handlers[1215] = (void*)CPacketTranslater::OnNoticeMemberChatMsg;
    m_handlers[1216] = (void*)CPacketTranslater::OnPayTaxToUpper;
    m_handlers[1013] = (void*)CPacketTranslater::OnUpdateChangableCharInfo;
    m_handlers[1012] = (void*)CPacketTranslater::OnLogoutComplete;
    m_handlers[1217] = (void*)CPacketTranslater::OnUserRepel;
    m_handlers[1218] = (void*)CPacketTranslater::OnCharacterDelete;
    m_handlers[1103] = (void*)CPacketTranslater::OnEventStart;
    m_handlers[1104] = (void*)CPacketTranslater::OnEventEnd;
    m_handlers[1300] = (void*)CPacketTranslater::OnNotifyNewMail;
    m_handlers[2000] = (void*)CPacketTranslater::OnWebQueryUserState;
    m_handlers[2524] = (void*)CPacketTranslater::OnNoticeMessage;
    m_handlers[2500] = (void*)CPacketTranslater::OnRelayServerUserCheck;
    m_handlers[2525] = (void*)CPacketTranslater::OnForbidChat;
    m_handlers[1224] = (void*)CPacketTranslater::OnNoticeProhibitConnectUser;
    m_handlers[1400] = (void*)CPacketTranslater::OnMonitorManagerConnectOK;
    m_handlers[1350] = (void*)CPacketTranslater::OnMonitorMegaPhoneMsg;
    m_handlers[1500] = (void*)CPacketTranslater::OnRegisterToBlackList;
    m_handlers[1501] = (void*)CPacketTranslater::OnDeleteToBlackList;
    m_handlers[1504] = (void*)CPacketTranslater::OnRequestBlackList;
    m_handlers[1502] = (void*)CPacketTranslater::OnDBMWResisterToBlackList;
    m_handlers[1503] = (void*)CPacketTranslater::OnDBMWDeleteToBlackList;
    m_handlers[1505] = (void*)CPacketTranslater::OnDBMWResponseBlackListOnLogin;
    m_handlers[2526] = (void*)CPacketTranslater::OnExchangeServerInfo;
    m_handlers[1600] = (void*)CPacketTranslater::OnNoticeCharLiveOnTenMin;
    m_handlers[2528] = (void*)CPacketTranslater::OnWebNoticeSingle;
    m_handlers[1650] = (void*)CPacketTranslater::OnAddBuddy;
    m_handlers[1651] = (void*)CPacketTranslater::OnAddBuddyDBReply;
    m_handlers[1652] = (void*)CPacketTranslater::OnDelBuddy;
    m_handlers[1653] = (void*)CPacketTranslater::OnDelBuddyDBReply;
    m_handlers[1654] = (void*)CPacketTranslater::OnQueryBuddyInfoDBReply;
    m_handlers[1014] = (void*)CPacketTranslater::OnWebChangeUserHandicap;
    m_handlers[1900] = (void*)CPacketTranslater::OnGMRequestMid;
    m_handlers[1232] = (void*)CPacketTranslater::OnUserRepelByCharName;
    m_handlers[1229] = (void*)CPacketTranslater::onReplyLoadTowerFullRank;
    m_handlers[1230] = (void*)CPacketTranslater::onRequestCharacTowerUpdateRank;
    m_handlers[1231] = (void*)CPacketTranslater::onRequestReloadTowerRanker;
    m_handlers[2900] = (void*)CPacketTranslater::onWebReqReloadAutoPunishRule;
    m_handlers[4000] = (void*)CPacketTranslater::OnInnerPacketLogin;
    m_handlers[4001] = (void*)CPacketTranslater::OnInnerPacketLogout;
    m_handlers[2700] = (void*)CPacketTranslater::OnNoticeSlang;
    m_handlers[2901] = (void*)CPacketTranslater::onLoadCleanPadPoint;
    m_handlers[2902] = (void*)CPacketTranslater::onLoadBlackIPMonitor;
    m_handlers[2903] = (void*)CPacketTranslater::onLoadBlackIPMonitorPartLoad;
    m_handlers[2904] = (void*)CPacketTranslater::onLoadBlackIPMonitorDeleteIP;
    m_handlers[1105] = (void*)CPacketTranslater::OnChangeCharName;
    m_handlers[3100] = (void*)CPacketTranslater::OnNotifyAuctionMail;
    m_handlers[4002] = (void*)CPacketTranslater::OnPvPChannelInfo;
    m_handlers[4003] = (void*)CPacketTranslater::OnPvPChannelUserCount;
    m_handlers[4004] = (void*)CPacketTranslater::OnChannelType;
    m_handlers[4014] = (void*)CPacketTranslater::OnServerMessageInfo;
    m_handlers[1770] = (void*)CPacketTranslater::OnRequestReloadPowerWarRanker;
    m_handlers[2910] = (void*)CPacketTranslater::onLoadPunishUserReq;
    m_handlers[2911] = (void*)CPacketTranslater::onIPCounterControl;
    m_handlers[4103] = (void*)CPacketTranslater::onItemLimitEditionLoadDataReq;
    m_handlers[4104] = (void*)CPacketTranslater::onItemLimitEditionLoadDataRpy;
    m_handlers[4101] = (void*)CPacketTranslater::onItemLimitEditionSellEnd;
    m_handlers[4105] = (void*)CPacketTranslater::onItemLimitEditionBuyableRequest;
    m_handlers[4110] = (void*)CPacketTranslater::OnMonitorFindFactoryHubUser;
    m_handlers[2912] = (void*)CPacketTranslater::OnSetCleanPadPoint;
    m_handlers[4153] = (void*)CPacketTranslater::OnResponseIPCounterList;
    m_handlers[4154] = (void*)CPacketTranslater::OnResponseFullIPCounterList;
    m_handlers[2515] = (void*)CPacketTranslater::OnTakeScreenShot;
    m_handlers[6002] = (void*)CPacketTranslater::OnVillageMonsterFightResult;
    m_handlers[6009] = (void*)CPacketTranslater::OnVillageAttackedGMCommand;
    m_handlers[6011] = (void*)CPacketTranslater::OnVillageAttackedRank;
    m_handlers[6014] = (void*)CPacketTranslater::OnMonitorFullLevelBroadCast;
    m_handlers[2913] = (void*)CPacketTranslater::OnSetARSInfo;
    m_handlers[2914] = (void*)CPacketTranslater::OnWebRequestARSInfo;
    m_handlers[7014] = (void*)CPacketTranslater::OnCheckOverlappedAccusation;
    m_handlers[8001] = (void*)CPacketTranslater::OnGameServerRegist;
    m_handlers[7021] = (void*)CPacketTranslater::OnNoCache;
    m_handlers[8003] = (void*)CPacketTranslater::OnDisableUserOneToOneChat_GM;
    m_handlers[8004] = (void*)CPacketTranslater::OnRegisterGM_mid;
    m_handlers[8005] = (void*)CPacketTranslater::OnFindCharacName_useUID;
    m_handlers[8013] = (void*)CPacketTranslater::OnRenew_GM_List;
    m_handlers[8008] = (void*)CPacketTranslater::OnLoadPeriodicMessage;
    m_handlers[8009] = (void*)CPacketTranslater::OnResultLoadPeriodicMessage;
    m_handlers[9025] = (void*)CPacketTranslater::OnRegisterEventIdx;
    m_handlers[9027] = (void*)CPacketTranslater::OnRegisterEventUserIdx;
    m_handlers[9030] = (void*)CPacketTranslater::OnRegisterEventItem;
    m_handlers[9032] = (void*)CPacketTranslater::OnResultRegisterEventIdx;
    m_handlers[9034] = (void*)CPacketTranslater::OnGameMonitorGMVillageAttacked;
    m_handlers[2916] = (void*)CPacketTranslater::OnMonitorPunishCancel;
    m_handlers[10001] = (void*)CPacketTranslater::OnBroadcastMsg;
    m_handlers[2917] = (void*)CPacketTranslater::OnMonitorSecuServiceConnWeb;
    m_handlers[10002] = (void*)CPacketTranslater::OnResetTODAPCInfo;
    m_handlers[10010] = (void*)CPacketTranslater::OnNoticeMemberChatMsgHyperLink;
    m_handlers[10009] = (void*)CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink;
    m_handlers[10011] = (void*)CPacketTranslater::OnMonitorMegaPhoneMsgHyperLink;
    m_handlers[10200] = (void*)CPacketTranslater::onSocialEventRewardItemRequest;
    m_handlers[10204] = (void*)CPacketTranslater::onSocialEventRewardItemResponse;
    m_handlers[10201] = (void*)CPacketTranslater::onSocialEventRewardItemInfo;
    m_handlers[10202] = (void*)CPacketTranslater::onSocialEventRewardItemInfoAll;
    m_handlers[10205] = (void*)CPacketTranslater::onSocialEventRewardItemUpdate;
    m_handlers[10206] = (void*)CPacketTranslater::onRequestCharacInfoByCharacName;
    m_handlers[10210] = (void*)CPacketTranslater::OnWebNoticeInGameAD;
    m_handlers[10214] = (void*)CPacketTranslater::onCollectItems;
    m_handlers[10215] = (void*)CPacketTranslater::onCollectItemsResult;
    m_handlers[10219] = (void*)CPacketTranslater::onCollectItemsGm;
    m_handlers[10220] = (void*)CPacketTranslater::OnPcRoomPlayTimeReward;
    m_handlers[10225] = (void*)CPacketTranslater::OnWebEmergencyPatchMessage;
    m_handlers[10232] = (void*)CPacketTranslater::OnUpdateMiniCraneSeed;
    m_handlers[10235] = (void*)CPacketTranslater::onStartGameEventFromServer;
    m_handlers[10236] = (void*)CPacketTranslater::onEndGameEventFromServer;
    m_handlers[10238] = (void*)CPacketTranslater::onReloadCountryCode;
    m_handlers[10239] = (void*)CPacketTranslater::onReloadSecurityRestrictPolicy;
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
                checker->RequestDB(*(void**)((char*)this + 0x18), 1, qsize);
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
                checker->RequestDB(*(void**)((char*)this + 0x18), 2, qsize);
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
            CMyFileLog log("MsgDecode", 0x1db);
            log("./log/Decoder",
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
    CMyFileLog log("MsgDecode", 0x1fa);
    log("./log/Decoder",
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
void CSignal::dump_core_file() {}

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
CTaskScheduler::CTaskScheduler() {}
CTaskScheduler::~CTaskScheduler() {}
void CTaskScheduler::AddTask(CTask* task) {}
void CTaskScheduler::ProcessTask(unsigned int tick) {}

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
    CMyFileLog log("MakeEventStartTick", 0x96);
    log("./log/GameServer", "Next X_Mas Event Time! (%s)", s);
    return (unsigned int)result;
}

CTask_ChristmasEvent::CTask_ChristmasEvent(unsigned int tick, unsigned int flag) {}
CTask_ChristmasEvent::~CTask_ChristmasEvent() {}
TowerOfDespairReloadAPC_Task::TowerOfDespairReloadAPC_Task(unsigned int a, unsigned int b) {}
TowerOfDespairReloadAPC_Task::~TowerOfDespairReloadAPC_Task() {}

CEventActionManager::CEventActionManager() {}
CEventActionManager::~CEventActionManager() {}

COnTimeEventManager::COnTimeEventManager() {}
COnTimeEventManager::~COnTimeEventManager() {}
void COnTimeEventManager::AttachApp(CApplication* app) {}
char COnTimeEventManager::IsCurState(int state) { return 0; }
void COnTimeEventManager::ChangeState(int state) {}
void COnTimeEventManager::SetEventIdx(unsigned int idx)
{
    m_field30 = (int)idx;
    m_field34 = 1;
}
void COnTimeEventManager::UpdateEventIdx() {}
unsigned int COnTimeEventManager::GetEvent_Idx() { return 0; }
void COnTimeEventManager::Clear() {}
void COnTimeEventManager::OnRewardStart()
{
    time_t now = time(0);
    CMyFileLog log("OnRewardStart", 0x82);
    log("./log/OnTimeEvent", "On Time Event : On Reward Start Trigger On(%d)", now);
    if (IsCurState(2))
    {
        puts("On Time Event : Event Off Trigger");
        Clear();
    }
    else if (!IsCurState(0))
    {
        ChangeState(0);
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

COnTimeEventRewardEndTrigger::COnTimeEventRewardEndTrigger(unsigned int time, int flag,
                                                           COnTimeEventManager* mgr) {}
COnTimeEventRewardEndTrigger::~COnTimeEventRewardEndTrigger() {}

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
StartEffectTask::StartEffectTask(unsigned int time, int flag) {}
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
        CMyFileLog log("_DoExecute", 0xb0);
        log("./log/AradOnly", "[Momiji] start event. next endEffect %02dh:%02dm:%02ds",
            t->tm_hour, t->tm_min, t->tm_sec);
        em->sendApplyEffect(end);
    }
    EventManager* em = EventManager::Get();
    em->SetStartEffectTask(0);
}
EndEffectTask::EndEffectTask(unsigned int time, int flag) {}
EndEffectTask::~EndEffectTask() {}
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
    CMyFileLog log("sendApplyEffect", 0x97);
    log("./log/AradOnly", "[Momiji] apply effect. (code:%u)", 2);
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
            CMyFileLog log("StartEvent", 0x6e);
            log("./log/AradOnly", "[Momiji] start event. first time %02dh:%02dm:%02ds",
                t2->tm_hour, t2->tm_min, t2->tm_sec);
        }
        else
        {
            CMyFileLog log("StartEvent", 0x51);
            log("./log/AradOnly", "[Momiji] (startTime(%d) >= 24)", (unsigned int)startHour);
        }
    }
    else
    {
        CMyFileLog log("StartEvent", 0x4b);
        log("./log/AradOnly", "[Momiji] (durationTime(%d) >= intervalTime(%d))",
            (unsigned int)duration, (unsigned int)interval);
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
void CServerXml::StrLoading() {}
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
std::vector<ST_KillUSRConfig*>* CKillUSRConfig::GetInfo()
{
    return &m_vec;
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
}
