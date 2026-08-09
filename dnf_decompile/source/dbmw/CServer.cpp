#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
#include "ManagerApp.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
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

// ---- CGameServer / CGuildServer / CMonitorServer / CStatisticsServer（dbmw 同构）----
#define IMPL_SERVER_CLASS(CLS) \
CLS::CLS() : m_type(0xff) { m_port = 0; m_padA = 0; m_flag = 0; m_udpHandler = 0; } \
CLS::~CLS() {} \
void CLS::OnDisconnect() { m_padA = 0; } \
void CLS::Init(unsigned char type, std::string& name, unsigned short port, \
               unsigned char flag) \
{ \
    m_type = type; \
    m_name = name; \
    m_port = port; \
    m_udpHandler = new CUdpHandler; \
    m_udpHandler->InitClientSocket(); \
    m_flag = flag; \
} \
void CLS::SendToServer(char* buf, int len) \
{ \
    if (m_udpHandler) \
        m_udpHandler->SendToServer(buf, len, m_port, m_name.c_str()); \
} \
char CLS::IsValidGameServer() \
{ \
    if (m_type != 0xff) \
        return 1; \
    return 0; \
}

IMPL_SERVER_CLASS(CGameServer)
IMPL_SERVER_CLASS(CGuildServer)
IMPL_SERVER_CLASS(CMonitorServer)
IMPL_SERVER_CLASS(CStatisticsServer)

#undef IMPL_SERVER_CLASS

void CGameServer::SendHeartBeat()
{
    if (m_udpHandler)
    {
        Packet_Monitor_UDP_HeartBeat pkt;
        pkt.m_fieldA = 0xc8;
        m_udpHandler->SendToServer((char*)&pkt, 0xb, m_port, m_name.c_str());
    }
}

#define IMPL_SENDHEARTBEAT(CLS) \
void CLS::SendHeartBeat() \
{ \
    if (m_udpHandler) \
    { \
        Packet_Monitor_UDP_HeartBeat pkt; \
        pkt.m_fieldA = 0xc8; \
        SendToServer((char*)&pkt, pkt.packetSize); \
    } \
}

IMPL_SENDHEARTBEAT(CGuildServer)
IMPL_SENDHEARTBEAT(CMonitorServer)
IMPL_SENDHEARTBEAT(CStatisticsServer)

#undef IMPL_SENDHEARTBEAT
