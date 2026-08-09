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

CPacketTracer::CPacketTracer()
{
    m_field0 = 0;
    m_log = "";
    m_timer = 0;
    m_processCount = 0;
    m_timer = new CUnixTimer;
    ResetPacketProcessLog();
}

CPacketTracer::~CPacketTracer()
{
    delete m_timer;
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

void CPacketTracer::AbsoluteWriteLog()
{
    CMyFileLog log("AbsoluteWriteLog", 0x2e);
    log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_log.c_str());
    ResetLog();
}

static CPacketTracer g_packetTracer;
CPacketTracer* CPacketTracerInstance() { return &g_packetTracer; }

void CPacketTracer::ResetLog() { m_log.clear(); }

void CPacketTracer::StartPacketProcessLog(unsigned int id)
{
    m_timer->SetLastTime();
    std::map<unsigned int, stPacketProcess>::iterator it =
        m_processMap.find(id);
    if (it == m_processMap.end())
    {
        stPacketProcess p;
        p.m_accTime = 0.0;
        p.m_count = 0;
        m_processMap.insert(std::make_pair(id, p));
    }
}

void CPacketTracer::EndPacketProcessLog(unsigned int id)
{
    std::map<unsigned int, stPacketProcess>::iterator it =
        m_processMap.find(id);
    if (it != m_processMap.end())
    {
        it->second.m_count += 1;
        it->second.m_accTime += 1000.0 * m_timer->GetTimeInterval();
    }
}

void CPacketTracer::WritePacketProcessLog()
{
    m_processCount -= 1;
    if (m_processCount < 1)
    {
        for (std::map<unsigned int, stPacketProcess>::iterator it =
                 m_processMap.begin();
             it != m_processMap.end(); ++it)
        {
            if (it->second.m_count != 0)
            {
                CMyFileLog log("WritePacketProcessLog", 0x6f);
                log("./log/PacketProcess",
                    "id(%d), acc count(%d), acc time(%.4f ms), average time(%4.4f ms)",
                    it->first, it->second.m_count, it->second.m_accTime,
                    it->second.m_accTime / (double)it->second.m_count);
            }
        }
        ResetPacketProcessLog();
    }
}

void CPacketTracer::ResetPacketProcessLog()
{
    m_processMap.clear();
    m_processCount = 0x1e;
}

// 强制发出原版存在的 map<unsigned int, stPacketProcess> 分配器弱符号
template class std::allocator<std::_Rb_tree_node<std::pair<const unsigned int, stPacketProcess> > >;

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

void CPacketDecoder::Process() { UdpProcess(); TcpProcess(); }
void CPacketDecoder::SetTCPQueue(TcpRecvQueue* q) { m_tcpQueue = q; }
void CPacketDecoder::SetUdpQueue(UdpRecvQueue* q) { m_udpQueue = q; }
