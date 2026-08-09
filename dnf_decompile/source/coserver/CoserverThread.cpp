// df_coserver_r — CThreadInterface/CFrameCountHandler/CAppThread/CNetworkThread
#include <stdio.h>
#include <queue>
#include <string.h>
#include <sys/times.h>

#include "CoserverThread.h"
#include "CoserverApp.h"
#include "CoserverPacket.h"
#include "CoserverTable.h"
#include "CoserverUser.h"
#include "CoserverUdp.h"
#include "DNFFileLog.h"
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

void CThreadInterface::join()
{
    pthread_join(m_handle, 0);
}

bool CThreadInterface::begin()
{
    int r = pthread_create(&m_handle, 0, dispatch_proxy, this);
    if (-1 >= r)
    {
        puts("[ThreadInterface::begin] Can't begin thread");
    }
    return -1 < r;
}

void* CThreadInterface::dispatch_proxy(void* temp)
{
    ((CThreadInterface*)temp)->dispatch(temp);
    return 0;
}

CFrameCountHandler::CFrameCountHandler()
{
    m_writeTick = 0;
    m_value = 0;
}

void CFrameCountHandler::InitFrameCountInfo(CApplication* app, unsigned int frameCount,
                                            unsigned short tick)
{
    if (frameCount != 0)
    {
        m_value = (unsigned int)app;
        memset(this, 0, 0x28);
        m_tick = frameCount;
        m_framePerTick = 100 / frameCount;
        return;
    }
    throw CDNFException("CFrameCountHandler::InitFrameCountInfo() Exception Break!");
}

CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    unsigned int l1 = 0;
    unsigned int l2 = 0;
    unsigned int l3 = 0;
    unsigned int l4 = 0;
    (void)l1;
    (void)l2;
    (void)l3;
    (void)l4;
    unsigned int now;
    struct tms t;
    m_state = 0;
    if (m_state0 == 0)
    {
        m_state0 = 1;
        m_frameCount = 0;
        now = times(&t);
        m_startTime = now;
        if ((int)m_startTime == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
    }
    else
    {
        now = times(&t);
        m_endTime = now;
        if ((int)m_endTime == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
        if (m_endTime < m_startTime)
        {
            m_startTime = m_endTime;
        }
        if (m_frameCount < (m_endTime - m_startTime) / m_framePerTick)
        {
            m_frameCount++;
            m_state = 1;
            if (99 < m_endTime - m_startTime)
            {
                m_fps = m_frameCount;
                m_state = 2;
                m_frameCount = 0;
                m_startTime = m_endTime - (m_endTime - m_startTime) + 100;
                *(unsigned int*)((char*)this + 0x20) = 0;
                m_counter1 = (char)(m_counter1 + 1);
                if (0x3b < (unsigned char)m_counter1)
                {
                    m_state = 3;
                    m_counter1 = 0;
                    m_counter2 = (char)(m_counter2 + 1);
                    if (0x3b < (unsigned char)m_counter2)
                    {
                        m_state = 4;
                        m_counter2 = 0;
                    }
                }
            }
        }
    }
    return this;
}

void CFrameCountHandler::SaveProcess()
{
    m_writeTick = (char)(m_writeTick + 1);
    if (m_writeTick != 0)
    {
        DNF_LOG_SCOPE_LINE(0xa8, "./log/frame", "FPS(%02d) / DFC(%02d)\n", m_fps, m_tick);
        m_writeTick = 0;
    }
}

void CFrameCountHandler::SaveProcess(int interval)
{
    m_writeTick = (char)(m_writeTick + 1);
    if (m_writeTick != 0)
    {
        DNF_LOG_SCOPE_LINE(0xb8, "./log/frame", "Thread(%2d) / FPS(%02d) / DFC(%02d)", interval, m_fps, m_tick);
        m_writeTick = 0;
    }
}

CAppThread::CAppThread()
{
    m_app = 0;
    m_queue = 0;
    m_lock = 0;
    m_reserved = 0;
}

CAppThread::~CAppThread()
{
    m_queue = 0;
    m_lock = 0;
    m_reserved = 0;
    m_app = 0;
}

void CAppThread::dispatch(void* param)
{
    try
    {
        m_frame.InitFrameCountInfo(m_app, 0x22, 1000);
        if (m_queue != 0 && m_lock != 0 && m_app != 0)
        {
            m_app->Get_UserManager();
            DNFFLib::Sleep_Ext(5, 0);
            puts("AppThread Thread Start!");
            m_running = 1;
            while (m_running != 0)
            {
                CFrameCountHandler* f = m_frame.GetFrameCountInfo();
                if (f->m_state != 0 && 1 < (unsigned char)f->m_state && f->m_state == 3)
                {
                    m_frame.SaveProcess(m_saveInterval);
                }
                CPacketDecoderInstance()->Process((std::queue<CUdpRecvBuffer*>*)m_queue,
                                                   (CMutex*)m_lock);
                DNFFLib::Sleep_Ext(0, 1);
            }
            return;
        }
        throw CDNFException("AppThread is Not Ready!\n");
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Process() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x63, "./log/process", "CAppThread::dispatch() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CApplication::Process() Exception Break");
        DNF_LOG_SCOPE_LINE(0x68, "./log/process", "CAppThread::dispatch() Exception Break\n");
    }
}

void CAppThread::attach(CApplication* app, int idx)
{
    if (app != 0)
    {
        m_app = app;
        m_queue = app->Get_QPacket() + idx;
        m_lock = app->Get_QLock() + idx;
        m_saveInterval = idx;
    }
}

CNetworkThread::CNetworkThread()
{
    m_udp = 0;
    m_bLock = 0;
    for (int i = 0; i < 10; i++)
    {
        m_queues[i] = 0;
        m_locks[i] = 0;
    }
}

CNetworkThread::~CNetworkThread()
{
    for (int i = 0; i < 10; i++)
    {
        m_queues[i] = 0;
        m_locks[i] = 0;
    }
    m_udp = 0;
}

void CNetworkThread::dispatch(void* param)
{
    try
    {
        if (m_queues != 0 && m_udp != 0 && m_locks != 0)
        {
            DNFFLib::Sleep_Ext(5, 0);
            puts("Network Thread Start!");
            m_running = 1;
            while (m_running != 0)
            {
                CUdpRecvBuffer* buf;
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    buf = (CUdpRecvBuffer*)CUdpRecvBuffer::operator new(0x204);
                }
                int len = 0x200;
                unsigned short port = 0;
                unsigned int ip = 0;
                if (((CUdpHandler*)m_udp)->RecvFromClient((char*)buf, &len, &ip, &port) == 1)
                {
                    if (*(unsigned short*)((char*)buf + 2) == len)
                    {
                        if (*(unsigned short*)((char*)buf + 2) < 0x200)
                        {
                            if (len < 0x201)
                            {
                                if (*(int*)((char*)buf + 6) == 0)
                                {
                                    printf("id(%d), m_id(%d)", *(unsigned short*)buf,
                                           *(int*)((char*)buf + 6));
                                }
                                unsigned int idx = *(unsigned int*)((char*)buf + 6) % 10;
                                {
                                    CGuard<CMutex> g((CMutex*)m_locks[idx]);
                                    ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->push(buf);
                                    unsigned int qsize =
                                        ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->size();
                                    if (100 < qsize)
                                    {
                                        DNF_LOG_SCOPE_LINE(0xa3,"./log/recv", "idx(%d) cnt(%d)", idx,
                                            ((std::queue<CUdpRecvBuffer*>*)m_queues[idx])->size());
                                    }
                                }
                            }
                            else
                            {
                                DNF_LOG_SCOPE_LINE(0x86,"./log/recvErr",
                                    "Recv Byte is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                    *(unsigned short*)((char*)buf + 2), len,
                                    *(unsigned short*)buf);
                                {
                                    CGuard<CMutex> g((CMutex*)m_bLock);
                                    CUdpRecvBuffer::operator delete(buf, (unsigned int)m_bLock);
                                }
                            }
                        }
                        else
                        {
                            DNF_LOG_SCOPE_LINE(0x7a,"./log/recvErr",
                                "Packet Size is Over! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                                *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                            {
                                CGuard<CMutex> g((CMutex*)m_bLock);
                                CUdpRecvBuffer::operator delete(buf, (unsigned int)m_bLock);
                            }
                        }
                    }
                    else
                    {
                        DNF_LOG_SCOPE_LINE(0x6f,"./log/recvErr",
                            "Packet Size is Incorrect! Packet Size( %d ), Recv Byte( %d ) Code( %d )\n",
                            *(unsigned short*)((char*)buf + 2), len, *(unsigned short*)buf);
                        {
                            CGuard<CMutex> g((CMutex*)m_bLock);
                            CUdpRecvBuffer::operator delete(buf, (unsigned int)m_bLock);
                        }
                    }
                }
                else
                {
                    CGuard<CMutex> g((CMutex*)m_bLock);
                    CUdpRecvBuffer::operator delete(buf, (unsigned int)m_bLock);
                }
            }
            return;
        }
        throw CDNFException("NetworkThread is Not Ready!\n");
    }
    catch (CDNFException& e)
    {
        printf("CNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
    catch (...)
    {
        puts("CNetworkThread::dispatch() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd");
        throw CDNFException("CNetworkThread::dispatch() Recv  Socket Exception Break!");
    }
}

void CNetworkThread::attach(CApplication* app, int idx)
{
    if (app != 0)
    {
        m_udp = app->Get_UdpHandler(idx);
        for (int i = 0; i < 10; i++)
        {
            m_queues[i] = app->Get_QPacket() + i;
            m_locks[i] = app->Get_QLock() + i;
        }
        m_bLock = app->Get_BLock();
    }
}
