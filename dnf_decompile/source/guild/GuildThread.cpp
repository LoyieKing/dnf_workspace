// df_guild_r — 线程框架
#include <stdio.h>
#include <string.h>
#include <sys/times.h>

#include "GuildThread.h"
#include "GuildApp.h"
#include "GuildTable.h"
#include "GuildUdp.h"
#include "GuildPacket.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CThreadInterface::CThreadInterface()
{
    m_thread = 0;
    m_running = false;
}

CThreadInterface::~CThreadInterface()
{
}

int CThreadInterface::begin()
{
    int r = pthread_create(&m_thread, 0, dispatch_proxy, this);
    if (r < 0)
    {
        puts("[ThreadInterface::begin] Can't begin thread");
    }
    return r >= 0;
}

void CThreadInterface::stop()
{
    m_running = false;
}

void CThreadInterface::join()
{
    pthread_join(m_thread, 0);
}

void* CThreadInterface::dispatch_proxy(void* temp)
{
    ((CThreadInterface*)temp)->dispatch(temp);
    return 0;
}

CFrameCountHandler::CFrameCountHandler()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    m_fieldc = 0;
    m_field10 = 0;
    m_field14 = 0;
    m_field18 = 0;
    m_field1c = 0;
    m_field20 = 0;
    m_field24 = 0;
    m_field28 = 0;
    m_field2c = 0;
}

CFrameCountHandler::~CFrameCountHandler()
{
}

void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int value,
                                            unsigned short frameCount)
{
    if (frameCount == 0)
    {
        throw CDNFException("CFrameCountHandler::InitFrameCountInfo() Exception Break!");
    }
    m_field2c = (int)value;
    memset(this, 0, 0x28);
    m_field4 = (int)frameCount;
    m_field8 = 100 / frameCount;
}

CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    struct tms t;
    clock_t c;
    *(unsigned char*)((char*)this + 0x24) = 0;
    if (*(unsigned char*)this == 0)
    {
        *(unsigned char*)this = 1;
        m_field14 = 0;
        c = times(&t);
        m_fieldc = (int)c;
        if (m_fieldc == -1)
        {
            throw CDNFException(
                "CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
    }
    else
    {
        c = times(&t);
        m_field10 = (int)c;
        if (m_field10 == -1)
        {
            throw CDNFException(
                "CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
        if ((unsigned int)m_fieldc > (unsigned int)m_field10)
        {
            m_fieldc = m_field10;
        }
        if ((unsigned int)m_field14 <
            (unsigned int)(m_field10 - m_fieldc) / (unsigned int)m_field8)
        {
            m_field14 = m_field14 + 1;
            *(unsigned char*)((char*)this + 0x24) = 1;
            if (99 < (unsigned int)(m_field10 - m_fieldc))
            {
                m_field18 = m_field14;
                *(unsigned char*)((char*)this + 0x24) = 2;
                m_field14 = 0;
                m_fieldc = m_field10 - (m_field10 - m_fieldc) + 100;
                m_field20 = 0;
                *(unsigned char*)((char*)this + 0x25) =
                    (unsigned char)(*(unsigned char*)((char*)this + 0x25) + 1);
                if (0x3b < *(unsigned char*)((char*)this + 0x25))
                {
                    *(unsigned char*)((char*)this + 0x24) = 3;
                    *(unsigned char*)((char*)this + 0x25) = 0;
                    *(unsigned char*)((char*)this + 0x26) =
                        (unsigned char)(*(unsigned char*)((char*)this + 0x26) + 1);
                    if (0x3b < *(unsigned char*)((char*)this + 0x26))
                    {
                        *(unsigned char*)((char*)this + 0x24) = 4;
                        *(unsigned char*)((char*)this + 0x26) = 0;
                    }
                }
            }
        }
    }
    return this;
}

void CFrameCountHandler::SaveProcess()
{
    m_field28 = (char)(m_field28 + 1);
    if (m_field28 != 0)
    {
        DNF_LOG_SCOPE_LINE(0xa8, "./log/frame", "FPS(%02d) / DFC(%02d)\n", m_field18, m_field4);
        m_field28 = 0;
    }
}

void CFrameCountHandler::SaveProcess(int interval)
{
    m_field28 = (char)(m_field28 + 1);
    if (m_field28 != 0)
    {
        DNF_LOG_SCOPE_LINE(0xb8, "./log/frame", "Thread(%2d) / FPS(%02d) / DFC(%02d)", interval, m_field18, m_field4);
        m_field28 = 0;
    }
}

CUdpNetworkThread::CUdpNetworkThread()
{
    m_app = 0;
    m_queue = 0;
    m_lock = 0;
    m_bLock = 0;
}

CUdpNetworkThread::~CUdpNetworkThread()
{
    m_app = 0;
    m_queue = 0;
    m_lock = 0;
}

void CUdpNetworkThread::attach(CApplication* app)
{
    if (app != 0)
    {
        m_app = app;
        m_queue = app->Get_UdpPacketRecvQ();
        m_lock = app->Get_UdpQLock();
        m_bLock = app->Get_UdpBLock();
    }
}

void CUdpNetworkThread::SetUDPQueue(std::queue<CUdpRecvBuffer*>* q)
{
    m_queue = q;
}

void CUdpNetworkThread::dispatch(void* param)
{
    if (m_queue != 0 && m_app != 0 && m_lock != 0)
    {
        DNFFLib::Sleep_Ext(5, 0);
        puts("Network Thread Start!");
        m_running = true;
        while (m_running)
        {
            CUdpRecvBuffer* buf;
            {
                CGuard<CMutex> g((CMutex*)m_bLock);
                buf = (CUdpRecvBuffer*)CUdpRecvBuffer::operator new(0x1804);
            }
            int len = 0x1800;
            unsigned short port = 0;
            unsigned int ip = 0;
            if (m_app->Get_UdpHandler()->RecvFromClient((char*)buf, &len, &ip, &port) == 1)
            {
                if (*(unsigned short*)((char*)buf + 2) == len)
                {
                    if (*(unsigned short*)((char*)buf + 2) < 0x1800)
                    {
                        if (len < 0x1801)
                        {
                            *(unsigned int*)((char*)buf + 6) = ip;
                            *(unsigned short*)((char*)buf + 4) = port;
                            {
                                CGuard<CMutex> g((CMutex*)m_lock);
                                ((std::queue<CUdpRecvBuffer*>*)m_queue)->push(buf);
                                unsigned int qsize =
                                    ((std::queue<CUdpRecvBuffer*>*)m_queue)->size();
                                if (100 < qsize)
                                {
                                    DNF_LOG_SCOPE_LINE(0xb2,"./log/recv", "cnt(%d)\n",
                                        ((std::queue<CUdpRecvBuffer*>*)m_queue)->size());
                                }
                            }
                        }
                        else
                        {
                            DNF_LOG_SCOPE_LINE(0x7d,"./log/recvErr",
                                "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                            CGuard<CMutex> g((CMutex*)m_bLock);
                            CUdpRecvBuffer::operator delete(buf, 0x1804);
                        }
                    }
                    else
                    {
                        DNF_LOG_SCOPE_LINE(0x71,"./log/recvErr",
                            "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                        CGuard<CMutex> g((CMutex*)m_bLock);
                        CUdpRecvBuffer::operator delete(buf, 0x1804);
                    }
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x66,"./log/recvErr",
                        "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                        *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf, 0x1804);
                }
            }
            else
            {
                CGuard<CMutex> g((CMutex*)m_bLock);
                CUdpRecvBuffer::operator delete(buf, 0x1804);
            }
        }
        return;
    }
    throw CDNFException("NetworkThread is Not Ready!\n");
}

CTcpNetworkThread::CTcpNetworkThread()
{
    m_net = 0;
    m_recvQ = 0;
    m_handler = 0;
    m_recvQLock = 0;
    m_recvBLock = 0;
    m_sendQ = 0;
    m_sendQLock = 0;
    m_sendBLock = 0;
    m_runningFlag = 0;
}

CTcpNetworkThread::~CTcpNetworkThread()
{
    m_net = 0;
    m_recvQ = 0;
    m_handler = 0;
    m_recvQLock = 0;
    m_sendQ = 0;
    m_sendQLock = 0;
    m_sendBLock = 0;
}

void CTcpNetworkThread::attach(CTcpNetSystem* net)
{
    if (net != 0)
    {
        m_net = net;
        m_recvQ =
            ((CSwapQueue<std::queue<CTcpRecvBuffer*>, 2>*)net->Get_TcpSwapQPacket())->GetRecvQ();
        m_handler = net->Get_TcpHandler();
        m_recvQLock = net->Get_TcpRecvQLock();
        m_recvBLock = net->Get_TcpRecvBLock();
        m_sendQ = net->Get_TcpSendQPacket();
        m_sendQLock = net->Get_TcpSendQLock();
        m_sendBLock = net->Get_TcpSendBLock();
    }
}

void CTcpNetworkThread::dispatch(void* param)
{
    CPeer* peer = 0;
    int eventCount = 0;
    m_runningFlag = 1;
    DNFFLib::Sleep_Ext(5, 0);
    try
    {
        while (m_runningFlag)
        {
            errno = 0;
            DNFFLib::Sleep_Ext(0, 5);
            if (m_net == 0)
            {
                continue;
            }
            m_net->SetEpollAcceptedPeers();
            m_net->SendPacket();
            eventCount = m_net->WaitForEvent();
            if (eventCount == 0)
            {
                continue;
            }
            if (eventCount < 0 && errno != EINTR && errno != 0)
            {
                break;
            }
            for (int i = 0; i < eventCount; i++)
            {
                CTcpHandler* handler = (CTcpHandler*)m_handler;
                CPeer* p = (CPeer*)handler->GetEventPtr(i);
                bool isIn = p != 0 && handler->IsSetInEvent(i);
                if (isIn && p->RecvPacket() != 1)
                {
                    p->DisConnSig();
                    m_net->DeletePeer(p);
                    p = 0;
                }
                bool isOut = p != 0 && p->get_remain_sendlen() != 0 &&
                             handler->IsSetOutEvent(i);
                if (isOut && p->get_remain_sendlen() < 0x1801)
                {
                    p->send_packet();
                }
                handler->IsSetErrEvent(i);
            }
        }
        DNF_LOG_SCOPE_LINE(0xae, "./log/TcpRecv", "RecvThread Terminate");
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
}

CTcpAcceptThread::CTcpAcceptThread()
{
    m_thread = 0;
    m_running = false;
    m_net = 0;
    m_recvQLock = 0;
    m_recvBLock = 0;
    new (m_sock) TCPSocket;
    m_port = 0;
}

CTcpAcceptThread::~CTcpAcceptThread()
{
    m_recvQLock = 0;
    m_net = 0;
    ((TCPSocket*)m_sock)->~TCPSocket();
}

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
    TCPSocket* sock = (TCPSocket*)m_sock;
    if (sock->open())
    {
        if (sock->bind(m_port, true))
        {
            if (sock->listen(5))
            {
                m_running = true;
                DNFFLib::Sleep_Ext(5, 0);
                while (m_running)
                {
                    if (sock->pollReadEvent())
                    {
                        CPeer* peer = m_net->CreatePeer();
                        TCPSocket* ps = peer->GetTcpSocket();
                        if (sock->accept(*ps) != 1)
                        {
                            printf("Accept GameServer Fail(Port : %d)\n", ps->getHandle());
                        }
                        printf("Accept GameServer(Port : %d)\n", ps->getHandle());
                        peer->InitPeer(
                            ((CSwapQueue<std::queue<CTcpRecvBuffer*>, 2>*)m_net->Get_TcpSwapQPacket())->GetRecvQ(),
                                       m_net->Get_TcpRecvQLock(), m_net->Get_TcpRecvBLock());
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

CSwapQueueBase::CSwapQueueBase()
{
    memset(m_data, 0, sizeof(m_data));
}

CSwapQueueBase::~CSwapQueueBase()
{
}

template<class T, int N>
CSwapQueue<T, N>::CSwapQueue()
{
    for (int i = 0; i < N; i++)
    {
        new (m_data + 8 + i * 0x28) T();
    }
    Init();
}

template<class T, int N>
CSwapQueue<T, N>::~CSwapQueue()
{
}

template<class T, int N>
void CSwapQueue<T, N>::Push(T* item)
{
}

template<class T, int N>
void CSwapQueue<T, N>::Pop()
{
}

template<class T, int N>
void CSwapQueue<T, N>::Init()
{
    *(unsigned int*)(m_data + 0) = 0;
    *(unsigned int*)(m_data + 4) = 1;
}

template<class T, int N>
T* CSwapQueue<T, N>::GetRecvQ()
{
    return (T*)(m_data + 8 + *(unsigned int*)(m_data + 0) * 0x28);
}

template<class T, int N>
T* CSwapQueue<T, N>::GetParseQ()
{
    return (T*)(m_data + 8 + *(unsigned int*)(m_data + 4) * 0x28);
}

template<class T, int N>
void CSwapQueue<T, N>::SwapQ()
{
    unsigned int tmp = *(unsigned int*)(m_data + 0);
    *(unsigned int*)(m_data + 0) = *(unsigned int*)(m_data + 4);
    *(unsigned int*)(m_data + 4) = tmp;
}

template<class T>
IQueue<T>::IQueue()
{
    memset(m_data, 0, sizeof(m_data));
}

template<class T>
IQueue<T>::~IQueue()
{
}

template<class T>
IQueue<T>* IQueue<T>::Get()
{
    static IQueue<T> instance;
    return &instance;
}

template<class T>
void IQueue<T>::InitQueue(T* recv, T* parse)
{
    *(T**)(m_data + 0) = recv;
    *(T**)(m_data + 4) = parse;
}

template<class T>
bool IQueue<T>::SwitchQueue()
{
    T* recv = *(T**)(m_data + 0);
    if (recv->empty())
    {
        return false;
    }
    T* parse = *(T**)(m_data + 4);
    *(T**)(m_data + 0) = parse;
    *(T**)(m_data + 4) = recv;
    return true;
}

template<class T>
T* IQueue<T>::GetParseQueue()
{
    return *(T**)(m_data + 4);
}

// 显式实例化
typedef std::queue<CTcpRecvBuffer*> TcpRecvQueue;
typedef std::queue<CUdpRecvBuffer*> UdpRecvQueue;
template class CSwapQueue<TcpRecvQueue, 2>;
template class CSwapQueue<UdpRecvQueue, 2>;
template class IQueue<TcpRecvQueue>;
