// df_coserver_r — CThreadInterface/CFrameCountHandler/CAppThread/CNetworkThread
#include <stdio.h>
#include <string.h>

#include "CoserverThread.h"
#include "CoserverApp.h"
#include "CoserverTable.h"
#include "DNFFunctionLib.h"

CThreadInterface::CThreadInterface()
{
    m_handle = 0;
    m_running = 0;
}

CThreadInterface::~CThreadInterface()
{
}

void CThreadInterface::stop()
{
    m_running = 0;
}

bool CThreadInterface::begin()
{
    int r = pthread_create(&m_handle, 0, dispatch_proxy, this);
    if (r <= -1)
    {
        puts("[ThreadInterface::begin] Can't begin thread");
    }
    return r > -1;
}

void* CThreadInterface::dispatch_proxy(void* temp)
{
    CThreadInterface* inst = (CThreadInterface*)temp;
    inst->dispatch(temp);
    return 0;
}

CFrameCountHandler::CFrameCountHandler()
{
    memset(m_data, 0, 0x28);
    m_app = 0;
}

void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int frameCount,
                                            unsigned short tick)
{
    if (tick != 0)
    {
        *(unsigned int*)((char*)this + 0x2c) = (unsigned int)app;
        memset(this, 0, 0x28);
        *(unsigned int*)((char*)this + 4) = tick;
        *(unsigned int*)((char*)this + 8) = 100 / tick;
        return;
    }
    throw CDNFException("CFrameCountHandler::InitFrameCountInfo() Exception Break!");
}

CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    return this;
}

void CFrameCountHandler::SaveProcess(int interval)
{
}

CAppThread::CAppThread()
{
    m_app = 0;
    m_queue = 0;
    m_lock = 0;
    m_reserved = 0;
    m_saveInterval = 0;
}

CAppThread::~CAppThread()
{
    m_queue = 0;
    m_lock = 0;
    m_reserved = 0;
    m_app = 0;
}

void CAppThread::stop()
{
    CThreadInterface::stop();
}

void CAppThread::attach(CApplication* app, int idx)
{
    m_app = app;
}

void CAppThread::dispatch(void* param)
{
    m_frame.InitFrameCountInfo(m_app, (unsigned int)m_app, 0x22);
    if (m_queue != 0 && m_lock != 0 && m_app != 0)
    {
        DNFFLib::Sleep_Ext(5, 0);
        puts("AppThread Thread Start!");
        m_running = 1;
        while (m_running != 0)
        {
            CFrameCountHandler* f = m_frame.GetFrameCountInfo();
            if (f->m_state != 0 && f->m_state > 1 && f->m_state == 3)
            {
                m_frame.SaveProcess(m_saveInterval);
            }
            CPacketDecoder* dec = CPacketDecoderInstance();
            dec->Process(m_queue, m_lock);
            DNFFLib::Sleep_Ext(0, 1);
        }
        return;
    }
    throw CDNFException("AppThread is Not Ready!\n");
}

CNetworkThread::CNetworkThread()
{
    m_app = 0;
    m_reserved2 = 0;
    memset(m_packets, 0, sizeof(m_packets));
    memset(m_locks, 0, sizeof(m_locks));
}

CNetworkThread::~CNetworkThread()
{
    memset(m_packets, 0, sizeof(m_packets));
    memset(m_locks, 0, sizeof(m_locks));
    m_app = 0;
}

void CNetworkThread::stop()
{
    CThreadInterface::stop();
}

void CNetworkThread::attach(CApplication* app, int idx)
{
    m_app = app;
}

void CNetworkThread::dispatch(void* param)
{
    if (param != (void*)-16 && m_app != 0 && param != (void*)-56)
    {
        DNFFLib::Sleep_Ext(5, 0);
        puts("Network Thread Start!");
        m_running = 1;
        while (m_running != 0)
        {
            // 网络包处理循环（后续按反编译补全）
        }
    }
}
