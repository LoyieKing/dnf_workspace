#include "MonitorTypes.h"

#include "DNFFileLog.h"
#include "MonitorApp.h"
#include "MonitorTable.h"
#include "Thread.h"
#include "DNFFunctionLib.h"

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

CLoginLogoutStatistics::CLoginLogoutStatistics(CApplication& app) {}
CLoginLogoutStatistics::~CLoginLogoutStatistics() {}
void CLoginLogoutStatistics::ProcessByMinute() {}

CIPCounter::CIPCounter() {}
CIPCounter::~CIPCounter() {}
void CIPCounter::Init(CServerHandler* handler) {}
void CIPCounter::Proc(unsigned int tick) {}

CItemLimitEditionMgr::CItemLimitEditionMgr() {}
CItemLimitEditionMgr::~CItemLimitEditionMgr() {}
void CItemLimitEditionMgr::makeItemLimitEditionUpdatePacket(
    Packet_Item_Limit_Edition_Update& pkt) const
{
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
void CBlackUser::ChangeCharName(char* name) {}

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

char TCPSocket::open() { return 0; }
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
    m_field4 = 0;
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
    if (m_field4 != 0)
    {
        void* h = m_field4;
        if (h != 0)
        {
            void (**vt)(void*) = *(void(***)(void*))h;
            vt[0](h);
        }
        if (m_field4 != 0)
        {
            void (**vt)(void*) = *(void(***)(void*))m_field4;
            vt[3](m_field4);
        }
        m_field4 = 0;
    }
}
void CTcpNetSystem::Init(unsigned short port) {}
bool CTcpNetSystem::OpenTcpService(int& sockRef, const char* ip, unsigned short port) { return false; }
void CTcpNetSystem::CleanPeers() {}
void CTcpNetSystem::SetEpollAcceptedPeers() {}
void CTcpNetSystem::SendPacket() {}
int CTcpNetSystem::WaitForEvent() { return 0; }
void CTcpNetSystem::DeletePeer(CPeer* peer) {}
CPeer* CTcpNetSystem::CreatePeer() { return 0; }
void CTcpNetSystem::InsertAcceptedPeer(CPeer* peer) {}
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
    return 0;
}
void CUserManager::DeleteUsersOnGameServerDown(CGameServer* gameServer)
{
    if (!m_charNoUsers.empty())
    {
        for (std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.begin();
             it != m_charNoUsers.end(); )
        {
            if (it->second != 0 && it->second->GetGameServer() == gameServer)
            {
                std::map<unsigned int, CUser*>::iterator cur = it++;
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
        for (std::map<std::string, CUser*>::iterator it = m_charNameUsers.begin();
             it != m_charNameUsers.end(); )
        {
            if (it->second != 0 && it->second->GetGameServer() == gameServer)
            {
                std::map<std::string, CUser*>::iterator cur = it++;
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
}
void CUserManager::SendConnectedBuddysList(CUser* user)
{
}
void CUserManager::GetSchoolCount(unsigned int school, unsigned int* out, unsigned char& idx)
{
    CMyFileLog log("GetSchoolCount", 0x418);
    log("./log/School", "GetSchoolCount(%u)", school);
    std::map<unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
        m_mapSchools.find(school);
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
                 out[pos - 1], out[pos]);
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
        std::map<unsigned int, CDNFProhibitUser*>::const_iterator it =
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
        std::map<unsigned int, CUser*>::const_iterator it = m_users.find(dbid);
        if (it != m_users.end())
        {
            return it->second;
        }
    }
    return 0;
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
    std::map<unsigned int, std::map<unsigned char, unsigned int> >::iterator it =
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
            std::pair<unsigned int, std::map<unsigned char, unsigned int> >(schoolNo, newInner));
        CMyFileLog log("AddSchoolNo", 0x3ed);
        log("./log/School",
            "1) AddSchoolNo(%d, %d), mapSchoolChannel.size(%u), m_mapSchools.size(%u)",
            schoolNo, channel, newInner.size(), m_mapSchools.size());
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
void CMemberManager::InsertMember(unsigned int key, CMember* member)
{
    if (member == 0)
    {
        CMyFileLog log("InsertMember", 0x87);
        log("./log/Member", "InsertMember() : m_pclMember == NULL\n");
    }
    else
    {
        m_members.insert(std::pair<const unsigned int, CMember*>(key, member));
    }
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
            p.m_characNo = it->second.m_characNo;
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
}

CUser::CUser() {}
CUser::~CUser() {}
unsigned int CUser::GetUniqCharNo() { return 0; }
void CUser::AttachMember(CMember* member) {}
void CUser::operator delete(void* p) { ::operator delete(p); }
void* CUser::GetGameServer() { return 0; }
unsigned int CUser::GetDBID() { return 0; }
unsigned int CUser::GetIdByChannel() { return 0; }
char* CUser::GetCharName() { return 0; }
char CUser::IsBlackUser(unsigned int key) { return 0; }
unsigned char CUser::GetUpperMemberExpLevel() { return 0; }
void CUser::SendTcpGameserver(PacketHeader* pkt) {}
void CUser::SendToGameserver(char* buf, int len) {}
void CUser::AddBuddyFromCash(CBuddy* buddy) {}
void CUser::SetBuddyDBFlag(unsigned int flag) {}
void CUser::RegisterToCashBlackList(std::map<unsigned int, CBlackUser*>* map) {}
void CUser::SetBlackListDBFlag(unsigned int flag) {}

void* CMember::operator new(unsigned int size) { return ::operator new(size); }
CMember::CMember(unsigned int key, CMemberManager* mgr) {}
CMember::~CMember() {}
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
}
char CMember::IsAbleToRegisterMember()
{
    return 0;
}
unsigned int CMember::GetMemberKey()
{
    return m_memberKey;
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

CMemberConfig::CMemberConfig() {}
CMemberConfig::~CMemberConfig() {}
void CMemberConfig::Load_Table(const std::string& path) {}

CMemberExpTbl::CMemberExpTbl() {}
CMemberExpTbl::~CMemberExpTbl() {}
void CMemberExpTbl::Load_Table(const std::string& path) {}

void CPacketTranslater::attach(CApplication* app) {}
void CPacketTranslater::OnLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnLogout(PacketHeader* pkt) {}
void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnHeartBeat(PacketHeader* pkt) {}
void CPacketTranslater::OnCharLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeOtherChannelChatMsg(PacketHeader* pkt) {}
void CPacketTranslater::OnCeraUpdate(PacketHeader* pkt) {}
void CPacketTranslater::OnEventItemUpdate(PacketHeader* pkt) {}
void CPacketTranslater::OnReplyQueryMember(PacketHeader* pkt) {}
void CPacketTranslater::OnRequestMemberEnter(PacketHeader* pkt) {}
void CPacketTranslater::OnMemberEnterReply(PacketHeader* pkt) {}
void CPacketTranslater::OnMemberSecede(PacketHeader* pkt) {}
void CPacketTranslater::OnCallMemberList(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeMemberChatMsg(PacketHeader* pkt) {}
void CPacketTranslater::OnPayTaxToUpper(PacketHeader* pkt) {}
void CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnLogoutComplete(PacketHeader* pkt) {}
void CPacketTranslater::OnUserRepel(PacketHeader* pkt) {}
void CPacketTranslater::OnCharacterDelete(PacketHeader* pkt) {}
void CPacketTranslater::OnEventStart(PacketHeader* pkt) {}
void CPacketTranslater::OnEventEnd(PacketHeader* pkt) {}
void CPacketTranslater::OnNotifyNewMail(PacketHeader* pkt) {}
void CPacketTranslater::OnWebQueryUserState(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeMessage(PacketHeader* pkt) {}
void CPacketTranslater::OnRelayServerUserCheck(PacketHeader* pkt) {}
void CPacketTranslater::OnForbidChat(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeProhibitConnectUser(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorMegaPhoneMsg(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDeleteToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnRequestBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDBMWResisterToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader* pkt) {}
void CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnExchangeServerInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeCharLiveOnTenMin(PacketHeader* pkt) {}
void CPacketTranslater::OnWebNoticeSingle(PacketHeader* pkt) {}
void CPacketTranslater::OnAddBuddy(PacketHeader* pkt) {}
void CPacketTranslater::OnAddBuddyDBReply(PacketHeader* pkt) {}
void CPacketTranslater::OnDelBuddy(PacketHeader* pkt) {}
void CPacketTranslater::OnDelBuddyDBReply(PacketHeader* pkt) {}
void CPacketTranslater::OnQueryBuddyInfoDBReply(PacketHeader* pkt) {}
void CPacketTranslater::OnWebChangeUserHandicap(PacketHeader* pkt) {}
void CPacketTranslater::OnGMRequestMid(PacketHeader* pkt) {}
void CPacketTranslater::OnUserRepelByCharName(PacketHeader* pkt) {}
void CPacketTranslater::onReplyLoadTowerFullRank(PacketHeader* pkt) {}
void CPacketTranslater::onRequestCharacTowerUpdateRank(PacketHeader* pkt) {}
void CPacketTranslater::onRequestReloadTowerRanker(PacketHeader* pkt) {}
void CPacketTranslater::onWebReqReloadAutoPunishRule(PacketHeader* pkt) {}
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* pkt) {}
void CPacketTranslater::OnInnerPacketLogout(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeSlang(PacketHeader* pkt) {}
void CPacketTranslater::onLoadCleanPadPoint(PacketHeader* pkt) {}
void CPacketTranslater::onLoadBlackIPMonitor(PacketHeader* pkt) {}
void CPacketTranslater::onLoadBlackIPMonitorPartLoad(PacketHeader* pkt) {}
void CPacketTranslater::onLoadBlackIPMonitorDeleteIP(PacketHeader* pkt) {}
void CPacketTranslater::OnChangeCharName(PacketHeader* pkt) {}
void CPacketTranslater::OnNotifyAuctionMail(PacketHeader* pkt) {}
void CPacketTranslater::OnPvPChannelInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnPvPChannelUserCount(PacketHeader* pkt) {}
void CPacketTranslater::OnChannelType(PacketHeader* pkt) {}
void CPacketTranslater::OnServerMessageInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnRequestReloadPowerWarRanker(PacketHeader* pkt) {}
void CPacketTranslater::onLoadPunishUserReq(PacketHeader* pkt) {}
void CPacketTranslater::onIPCounterControl(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionLoadDataRpy(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionSellEnd(PacketHeader* pkt) {}
void CPacketTranslater::onItemLimitEditionBuyableRequest(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorFindFactoryHubUser(PacketHeader* pkt) {}
void CPacketTranslater::OnSetCleanPadPoint(PacketHeader* pkt) {}
void CPacketTranslater::OnResponseIPCounterList(PacketHeader* pkt) {}
void CPacketTranslater::OnResponseFullIPCounterList(PacketHeader* pkt) {}
void CPacketTranslater::OnTakeScreenShot(PacketHeader* pkt) {}
void CPacketTranslater::OnVillageMonsterFightResult(PacketHeader* pkt) {}
void CPacketTranslater::OnVillageAttackedGMCommand(PacketHeader* pkt) {}
void CPacketTranslater::OnVillageAttackedRank(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorFullLevelBroadCast(PacketHeader* pkt) {}
void CPacketTranslater::OnSetARSInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnWebRequestARSInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnCheckOverlappedAccusation(PacketHeader* pkt) {}
void CPacketTranslater::OnGameServerRegist(PacketHeader* pkt) {}
void CPacketTranslater::OnNoCache(PacketHeader* pkt) {}
void CPacketTranslater::OnDisableUserOneToOneChat_GM(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterGM_mid(PacketHeader* pkt) {}
void CPacketTranslater::OnFindCharacName_useUID(PacketHeader* pkt) {}
void CPacketTranslater::OnRenew_GM_List(PacketHeader* pkt) {}
void CPacketTranslater::OnLoadPeriodicMessage(PacketHeader* pkt) {}
void CPacketTranslater::OnResultLoadPeriodicMessage(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterEventIdx(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterEventUserIdx(PacketHeader* pkt) {}
void CPacketTranslater::OnRegisterEventItem(PacketHeader* pkt) {}
void CPacketTranslater::OnResultRegisterEventIdx(PacketHeader* pkt) {}
void CPacketTranslater::OnGameMonitorGMVillageAttacked(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorPunishCancel(PacketHeader* pkt) {}
void CPacketTranslater::OnBroadcastMsg(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorSecuServiceConnWeb(PacketHeader* pkt) {}
void CPacketTranslater::OnResetTODAPCInfo(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeMemberChatMsgHyperLink(PacketHeader* pkt) {}
void CPacketTranslater::OnNoticeOtherChannelChatMsgHyperLink(PacketHeader* pkt) {}
void CPacketTranslater::OnMonitorMegaPhoneMsgHyperLink(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemRequest(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemResponse(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemInfo(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemInfoAll(PacketHeader* pkt) {}
void CPacketTranslater::onSocialEventRewardItemUpdate(PacketHeader* pkt) {}
void CPacketTranslater::onRequestCharacInfoByCharacName(PacketHeader* pkt) {}
void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* pkt) {}
void CPacketTranslater::onCollectItems(PacketHeader* pkt) {}
void CPacketTranslater::onCollectItemsResult(PacketHeader* pkt) {}
void CPacketTranslater::onCollectItemsGm(PacketHeader* pkt) {}
void CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader* pkt) {}
void CPacketTranslater::OnWebEmergencyPatchMessage(PacketHeader* pkt) {}
void CPacketTranslater::OnUpdateMiniCraneSeed(PacketHeader* pkt) {}
void CPacketTranslater::onStartGameEventFromServer(PacketHeader* pkt) {}
void CPacketTranslater::onEndGameEventFromServer(PacketHeader* pkt) {}
void CPacketTranslater::onReloadCountryCode(PacketHeader* pkt) {}
void CPacketTranslater::onReloadSecurityRestrictPolicy(PacketHeader* pkt) {}
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
EventManager::EventManager() {}
EventManager::~EventManager() {}
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

Packet_DBMW_Add_Buddy::Packet_DBMW_Add_Buddy() : PacketHeader(0x673, 0x2c)
{
    memset(m_charName, 0, 0x1e);
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
}
