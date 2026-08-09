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

CNetworkThread::CNetworkThread()
{
    m_udpQueue = 0;
    m_udpHandler = 0;
    m_udpQLock = 0;
    m_udpBLock = 0;
}

CNetworkThread::~CNetworkThread()
{
    m_udpQueue = 0;
    m_udpHandler = 0;
    m_udpQLock = 0;
}

void CNetworkThread::attach(CApplication* app)
{
    if (!app)
        return;
    m_udpQueue = app->Get_UdpPacketRecvQ();
    m_udpHandler = app->Get_UdpHandler();
    m_udpQLock = app->Get_QLock();
    m_udpBLock = app->Get_BLock();
}

void* CNetworkThread::dispatch(void* param)
{
    if (!m_udpQueue || !m_udpHandler || !m_udpQLock)
        throw CDNFException("NetworkThread is Not Ready!\n");
    DNFFLib::Sleep_Ext(5, 0);
    puts("Network Thread Start!");
    m_stop = 1;
    try
    {
        while (m_stop)
        {
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
            unsigned short code = *(unsigned short*)((char*)buf + 2);
            if (code != (unsigned short)size)
            {
                CMyFileLog log("dispatch", 0x6c);
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
                CMyFileLog log("dispatch", 0x77);
                log("./log/recvErr",
                    "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                    *(unsigned short*)buf, size, code);
                {
                    CGuard<CMutex> guard(m_udpBLock);
                    delete buf;
                }
                continue;
            }
            if (size > 0x1800)
            {
                CMyFileLog log("dispatch", 0x83);
                log("./log/recvErr",
                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
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
    }
    catch (CDNFException& e)
    {
        printf("CNetworkThread::dispatch() Exception Break : %s\n", e.what());
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CNetworkThread::dispatch() Exception Break");
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    return 0;
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

void CUdpNetworkThread::attach(CApplication* app)
{
    if (!app)
        return;
    m_udpQueue = app->Get_UdpPacketRecvQ();
    m_udpHandler = app->Get_UdpHandler();
    m_udpQLock = app->Get_UdpQLock();
    m_udpBLock = app->Get_UdpBLock();
}

void CUdpNetworkThread::SetUDPQueue(UdpRecvQueue* q) { m_udpQueue = q; }
void CNetworkThread::SetUDPQueue(UdpRecvQueue* q) { m_udpQueue = q; }
