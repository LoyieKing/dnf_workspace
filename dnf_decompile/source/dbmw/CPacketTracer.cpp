#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
#include "ManagerApp.h"
#include "PacketNameTables.h"

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

CPacketTracer::CPacketTracer()
{
    m_field0 = 0;
    m_log = "";
}

CPacketTracer::~CPacketTracer() {}

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

void CPacketTracer::AbsoluteWriteLog()
{
    CMyFileLog log("AbsoluteWriteLog", 0x2e);
    log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_log.c_str());
    ResetLog();
}

static CPacketTracer g_packetTracer;
CPacketTracer* CPacketTracerInstance() { return &g_packetTracer; }

void CPacketTracer::ResetLog() { m_log.clear(); }

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
