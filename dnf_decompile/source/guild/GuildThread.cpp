// df_guild_r — 线程框架
#include <stdio.h>
#include <string.h>

#include "GuildThread.h"
#include "GuildApp.h"
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

CNetworkThread::CNetworkThread()
{
    m_queue = 0;
    m_udp = 0;
    m_lock = 0;
    m_bLock = 0;
}

CNetworkThread::~CNetworkThread()
{
    m_queue = 0;
    m_udp = 0;
    m_lock = 0;
}

void CNetworkThread::attach(CApplication* app)
{
    if (app != 0)
    {
        m_queue = app->Get_UdpPacketRecvQ();
        m_udp = app->Get_UdpHandler();
        m_lock = app->Get_UdpQLock();
        m_bLock = app->Get_UdpBLock();
    }
}

void CNetworkThread::Run()
{
}

CUdpNetworkThread::CUdpNetworkThread()
{
    m_app = 0;
}

CUdpNetworkThread::~CUdpNetworkThread()
{
}

void CUdpNetworkThread::attach(CApplication* app)
{
    m_app = app;
}

void CUdpNetworkThread::Run()
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
