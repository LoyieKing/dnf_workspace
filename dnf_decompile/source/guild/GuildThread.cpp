// df_guild_r — 线程框架
#include <stdio.h>
#include <string.h>

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
    return pthread_create(&m_thread, 0, 0, this);
}

void CThreadInterface::end()
{
    m_running = false;
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

void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int frameCount)
{
    m_field4 = (int)frameCount;
}

CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    return this;
}

void CFrameCountHandler::SaveProcess()
{
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
            CUdpRecvBuffer* buf = (CUdpRecvBuffer*)CUdpRecvBuffer::operator new(0x1804);
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
                                    CMyFileLog log("dispatch", 0xb2);
                                    log("./log/recv", "cnt(%d)\n",
                                        ((std::queue<CUdpRecvBuffer*>*)m_queue)->size());
                                }
                            }
                        }
                        else
                        {
                            CMyFileLog log("dispatch", 0x8d);
                            log("./log/recvErr",
                                "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                            CUdpRecvBuffer::operator delete(buf, 0x1804);
                        }
                    }
                    else
                    {
                        CMyFileLog log("dispatch", 0x81);
                        log("./log/recvErr",
                            "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                        CUdpRecvBuffer::operator delete(buf, 0x1804);
                    }
                }
                else
                {
                    CMyFileLog log("dispatch", 0x76);
                    log("./log/recvErr",
                        "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                        *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                    CUdpRecvBuffer::operator delete(buf, 0x1804);
                }
            }
            else
            {
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
}

CTcpNetworkThread::~CTcpNetworkThread()
{
    m_net = 0;
}

void CTcpNetworkThread::attach(CTcpNetSystem* net)
{
    m_net = net;
}

void CTcpNetworkThread::dispatch(void* param)
{
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
    memset(m_data, 0, sizeof(m_data));
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
    memset(m_data, 0, sizeof(m_data));
}

template<class T, int N>
T* CSwapQueue<T, N>::GetRecvQ()
{
    return (T*)(m_data + 0);
}

template<class T, int N>
T* CSwapQueue<T, N>::GetParseQ()
{
    return (T*)(m_data + 0x2c);
}

template<class T, int N>
void CSwapQueue<T, N>::SwapQ()
{
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
void IQueue<T>::SwitchQueue()
{
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
