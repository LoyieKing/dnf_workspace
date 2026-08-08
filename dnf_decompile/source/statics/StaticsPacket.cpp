// df_statics_r — CPacketDecoder/CPacketTracer/CPacketTranslater/CInnerMsgHandler
#include <stdio.h>
#include <time.h>

#include "StaticsPacket.h"
#include "StaticsApp.h"
#include "StaticsServer.h"
#include "StaticsStatistic.h"
#include "StaticsUdp.h"
#include "DNFFileLog.h"
#include "StaticsProxy.h"

Packet_Goldcard_Event_Statistic_STD::Packet_Goldcard_Event_Statistic_STD()
{
    new ((void*)this) PacketHeader(0x1f47, 0x385);
    GoldCardEventStatistic* p = (GoldCardEventStatistic*)((char*)this + 10);
    for (int i = 0x62; i != -1; i--)
    {
        new ((void*)p) GoldCardEventStatistic;
        p = (GoldCardEventStatistic*)((char*)p + 9);
    }
    memset((char*)this + 10, 0, 0x37b);
}

Packet_TowerOfDespair_Statistic_STD::Packet_TowerOfDespair_Statistic_STD()
{
    new ((void*)this) PacketHeader(0x271d, 0x33a);
    *(unsigned int*)((char*)this + 10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    TowerOfDespairStatistic_Value* p = (TowerOfDespairStatistic_Value*)((char*)this + 0x12);
    for (int i = 100; i != -1; i--)
    {
        new ((void*)p) TowerOfDespairStatistic_Value;
        p = (TowerOfDespairStatistic_Value*)((char*)p + 8);
    }
}

Packet_DBMW_Reason_Crash_Down_Query::Packet_DBMW_Reason_Crash_Down_Query()
{
    new ((void*)this) PacketHeader(0xc49, 0x10a);
}

Packet_DBMW_Dungeon_Statistic_Party::Packet_DBMW_Dungeon_Statistic_Party()
{
    new ((void*)this) PacketHeader(0xc36, 0x177e);
}

Packet_DBMW_Dungeon_Statistic_Party_Job::Packet_DBMW_Dungeon_Statistic_Party_Job()
{
    new ((void*)this) PacketHeader(0xc38, 0x17c9);
}

Packet_DBMW_Dungeon_Statistic_Party_Charac::Packet_DBMW_Dungeon_Statistic_Party_Charac()
{
    new ((void*)this) PacketHeader(0xc3a, 0x1759);
}

Packet_DBMW_Packet_Overflow_Statistic::Packet_DBMW_Packet_Overflow_Statistic()
{
    new ((void*)this) PacketHeader(0xc44, 0x11);
}

Packet_Avater_Disjoint_Statistic_DB::Packet_Avater_Disjoint_Statistic_DB()
{
    new ((void*)this) PacketHeader(0x17a3, 0x14e);
    new ((void*)((char*)this + 0xa)) stDisjointAvatarInfoTotal;
}

Packet_Emblem_Create_Statistic_DB::Packet_Emblem_Create_Statistic_DB()
{
    new ((void*)this) PacketHeader(0x17a5, 0x26);
}

Packet_Randombox_statistic_DB::Packet_Randombox_statistic_DB()
{
    new ((void*)this) PacketHeader(0x17b7, 0x32);
}

Packet_Server_Match_data_DBMW::Packet_Server_Match_data_DBMW()
{
    new ((void*)this) PacketHeader(0x1b68, 0x13);
}

Packet_DBMW_DeathTower_Statistic_Value::Packet_DBMW_DeathTower_Statistic_Value()
{
    new ((void*)this) PacketHeader(0xc3c, 0x17e7);
}

Packet_DBMW_Query_String::Packet_DBMW_Query_String()
{
    new ((void*)this) PacketHeader(0x1037, 0x100f);
}

Packet_DBMW_Fatigue_Battery_Money_Statistic::Packet_DBMW_Fatigue_Battery_Money_Statistic()
{
    new ((void*)this) PacketHeader(0xc4a, 0x332);
    memset((char*)this + 10, 0, 0x328);
}

Packet_DBMW_HellParty_Statistic_Item::Packet_DBMW_HellParty_Statistic_Item()
{
    new ((void*)this) PacketHeader(0xc32, 0x17ae);
}

Packet_DBMW_User_Ting_TimeCheck_Write_Query::Packet_DBMW_User_Ting_TimeCheck_Write_Query()
{
    new ((void*)this) PacketHeader(0xc46, 0x17fe);
}

Packet_DBMW_DeathTower_Statistic_Playdata_Job::Packet_DBMW_DeathTower_Statistic_Playdata_Job()
{
    new ((void*)this) PacketHeader(0xc3e, 0x17ee);
}

Packet_DBMW_DeathTower_Statistic_Playdata_Party::Packet_DBMW_DeathTower_Statistic_Playdata_Party()
{
    new ((void*)this) PacketHeader(0xc40, 0x17f6);
}

Packet_Secret_Shop_Statistic::Packet_Secret_Shop_Statistic()
{
    new ((void*)this) PacketHeader(0x1b69, 0xfb2);
    *(unsigned int*)((char*)this + 10) = 0;
    SECRET_SHOP_STATISTIC_DATA* p = (SECRET_SHOP_STATISTIC_DATA*)((char*)this + 0x12);
    for (int i = 199; i != -1; i--)
    {
        new ((void*)p) SECRET_SHOP_STATISTIC_DATA;
        p = (SECRET_SHOP_STATISTIC_DATA*)((char*)p + 0x14);
    }
}

Packet_DBMW_Loading_Time_Report::Packet_DBMW_Loading_Time_Report()
{
    new ((void*)this) PacketHeader(0xfb1, 0x37);
}

Packet_DBMW_Assert_Manager_Info_Write_Query::Packet_DBMW_Assert_Manager_Info_Write_Query()
{
    new ((void*)this) PacketHeader(0xc42, 0x1244);
}

Packet_DBMW_Ting_User_TimeCheck_Write_Query::Packet_DBMW_Ting_User_TimeCheck_Write_Query()
{
    new ((void*)this) PacketHeader(0xc47, 0x17fe);
}

Packet_DBMW_Powerwar_Loading_Time_Report::Packet_DBMW_Powerwar_Loading_Time_Report()
{
    new ((void*)this) PacketHeader(0xfb2, 0x170e);
}

Packet_DBMW_Powerwar_Lag_Report::Packet_DBMW_Powerwar_Lag_Report()
{
    new ((void*)this) PacketHeader(0xfb3, 0x170e);
}

PacketInsertUpdate::PacketInsertUpdate()
{
    new ((void*)this) PacketHeader(0x2721, 0x1018);
}

Packet_DBMW_TechnicalReport_Common_Query::Packet_DBMW_TechnicalReport_Common_Query()
{
    new ((void*)this) PacketHeader(0x17c5, 0x40a);
}

Packet_Frame_Lag_Statistic_Load_Spec::Packet_Frame_Lag_Statistic_Load_Spec()
    : PacketHeader(0xc27, 0xb)
{
}

Packet_Frame_Lag_Statistic_Reload_Spec::Packet_Frame_Lag_Statistic_Reload_Spec()
    : PacketHeader(0xc29, 0xf)
{
}

Packet_Frame_Lag_Statistic_Write_Lag_Index::Packet_Frame_Lag_Statistic_Write_Lag_Index()
    : PacketHeader(0xc2b, 0x17b)
{
}

Packet_Frame_Lag_Statistic_Write_Query::Packet_Frame_Lag_Statistic_Write_Query()
    : PacketHeader(0xc2d, 0x40a)
{
}

Packet_Frame_Lag_Used_Memory_Write_Query::Packet_Frame_Lag_Used_Memory_Write_Query()
    : PacketHeader(0xc30, 0x40a)
{
}

Packet_Udp_Characteristic::Packet_Udp_Characteristic()
{
    new ((void*)this) PacketHeader(0xfaa, 0x33);
    *(char*)((char*)this + 10) = 0;
    *(int*)((char*)this + 0xb) = 0;
    *(int*)((char*)this + 0xf) = 0;
    *(int*)((char*)this + 0x13) = 0;
    *(int*)((char*)this + 0x17) = 0;
    *(int*)((char*)this + 0x1b) = 0;
    *(int*)((char*)this + 0x1f) = 0;
    *(int*)((char*)this + 0x23) = 0;
    *(int*)((char*)this + 0x27) = 0;
    *(int*)((char*)this + 0x2b) = 0;
    *(int*)((char*)this + 0x2f) = 0;
}

Packet_DBMW_Save_Client_Spec_Statistic::Packet_DBMW_Save_Client_Spec_Statistic()
{
    new ((void*)this) PacketHeader(0x9cf, 0x17e7);
    *(char*)((char*)this + 10) = 0;
    *(int*)((char*)this + 0xb) = 0;
    STSpecCount* p = (STSpecCount*)((char*)this + 0xf);
    for (int i = 0x1b3; i != -1; i--)
    {
        new ((void*)p) STSpecCount;
        p = (STSpecCount*)((char*)p + 0xe);
    }
}

Packet_DBMW_Save_Error_Line_Statistic::Packet_DBMW_Save_Error_Line_Statistic()
{
    new ((void*)this) PacketHeader(0x9d1, 0x17f6);
    STErrorCount* p = (STErrorCount*)((char*)this + 0xe);
    for (int i = 0x263; i != -1; i--)
    {
        new ((void*)p) STErrorCount;
        p = (STErrorCount*)((char*)p + 10);
    }
}

Packet_DBMW_Cube_Statistic::Packet_DBMW_Cube_Statistic()
{
    new ((void*)this) PacketHeader(0xc34, 0x17ec);
    *(int*)((char*)this + 10) = 0;
    memset((char*)this + 0xe, 0, 0x17de);
}

CInnerMsgHandler::CInnerMsgHandler()
{
}

CInnerMsgHandler::~CInnerMsgHandler()
{
}

void CInnerMsgHandler::SendStopNetworkThread()
{
}

Packet_GameServer2Statisctics2DBServer::Packet_GameServer2Statisctics2DBServer()
{
    new ((void*)this) PacketHeader(0x27fd, 0x35);
    *(unsigned short*)((char*)this + 10) = 0;
    *(char*)((char*)this + 0xc) = 0xff;
    *(int*)((char*)this + 0xd) = 0;
    *(int*)((char*)this + 0x11) = 0;
    memset((char*)this + 0x15, 0, 0x10);
    memset((char*)this + 0x25, 0, 0x10);
}

template<int Lo, int Hi>
CPacketCounter<Lo, Hi>::CPacketCounter(char* name, char* title)
{
    Reset();
    time_t t = time(0);
    *(time_t*)((char*)this + 4) = t;
    if (name == 0)
    {
        sprintf((char*)this + 0x1d540, "./log/%s", title);
    }
    else
    {
        sprintf((char*)this + 0x1d540, "./log/%s/%s", name, title);
    }
    *(unsigned char*)((char*)this + 0x1d640) = 1;
}

template<int Lo, int Hi>
CPacketCounter<Lo, Hi>::~CPacketCounter()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::IncrementPacketCount(int id)
{
    if (id < 0x2800 && 999 < id &&
        (*(unsigned char*)((char*)this + 0x1d640) == 1 ||
         *(unsigned int*)((char*)this + (id - 1000) * 4 + 8) < 0xb))
    {
        *(unsigned int*)((char*)this + (id - 1000) * 4 + 8) += 1;
    }
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::BeforeProcess()
{
    *(unsigned int*)((char*)this + 0x9068) = *(unsigned int*)this;
    if (*(int*)((char*)this + 0x9068) == -1)
    {
        *(unsigned int*)((char*)this + 0x9068) = 0;
    }
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::AfterProcess(int id)
{
    if (id < 0x2800 && 999 < id &&
        (*(unsigned char*)((char*)this + 0x1d640) == 1 ||
         *(unsigned int*)((char*)this + (id - 1000) * 4 + 8) < 0xb))
    {
        int diff = *(int*)this;
        if (diff != -1)
        {
            int start;
            if (*(unsigned char*)((char*)this + 0x1d640) == 0)
            {
                start = *(int*)((char*)this + (id + 0x2030) * 4 + 8);
                *(unsigned int*)((char*)this + (id - 1000) * 4 + 8) += 1;
                *(unsigned char*)((char*)this + id + 0x11ce0) = 0;
            }
            else
            {
                start = *(int*)((char*)this + 0x9068);
            }
            diff = diff - start;
            *(int*)((char*)this + (id + 0x4d50) * 4) += diff;
        }
    }
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::Reset()
{
    for (int i = 0; i < 0x2418; i++)
    {
        *(unsigned int*)((char*)this + i * 4 + 8) = 0;
        *(unsigned int*)((char*)this + (i + 0x5138) * 4) = 0;
        *(unsigned int*)((char*)this + (i + 0x2418) * 4 + 8) = 0;
        *(unsigned char*)((char*)this + i + 0x120c8) = 0;
    }
    *(unsigned int*)this = 0;
    *(unsigned char*)((char*)this + 0x1d641) = 0;
}

CPacketDecoder* CPacketDecoderInstance()
{
    static CPacketDecoder instance;
    return &instance;
}

CPacketDecoder::CPacketDecoder()
{
    m_queue = 0;
    m_lock = 0;
    m_poolLock = 0;
    for (int i = 1000; i < 0x2800; i++)
    {
        m_handlers[i] = 0;
    }
    m_handlers[0x3ec] = (void*)&CPacketTranslater::OnHeartBeat;
    m_handlers[0x44f] = (void*)&CPacketTranslater::OnEventStart;
    m_handlers[0x450] = (void*)&CPacketTranslater::OnEventEnd;
    m_handlers[0x578] = (void*)&CPacketTranslater::OnMonitorManagerConnectOK;
    m_handlers[0x9ce] = (void*)&CPacketTranslater::OnClientSpecStatistic;
    m_handlers[0xc26] = (void*)&CPacketTranslater::OnFrameLagStatisticsAdd;
    m_handlers[0xc28] = (void*)&CPacketTranslater::OnFrameLagStatisticsResultLoadSpec;
    m_handlers[0xc2a] = (void*)&CPacketTranslater::OnFrameLagStatisticsResultReloadSpec;
    m_handlers[0xc2e] = (void*)&CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify;
    m_handlers[0xc2f] = (void*)&CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck;
    m_handlers[0xc35] = (void*)&CPacketTranslater::OnDungeonStatisticParty;
    m_handlers[0xc37] = (void*)&CPacketTranslater::OnDungeonStatisticPartyJob;
    m_handlers[0xc39] = (void*)&CPacketTranslater::OnDungeonStatisticPartyCharac;
    m_handlers[0xc3b] = (void*)&CPacketTranslater::OnDeathTowerStatisticValue;
    m_handlers[0xc3d] = (void*)&CPacketTranslater::OnDeathTowerStatisticPlayDataJob;
    m_handlers[0xc3f] = (void*)&CPacketTranslater::OnDeathTowerStatisticPlayDataParty;
    m_handlers[0xc31] = (void*)&CPacketTranslater::OnHellPartyStatisticItem;
    m_handlers[0xc33] = (void*)&CPacketTranslater::OnCubeStatistic;
    m_handlers[0xc41] = (void*)&CPacketTranslater::OnAssertManagerStatistic;
    m_handlers[0xc43] = (void*)&CPacketTranslater::OnPacketOverflowStatistic;
    m_handlers[0xc45] = (void*)&CPacketTranslater::OnUserTingTimeCheck;
    m_handlers[0xc48] = (void*)&CPacketTranslater::OnReasonCrashDownData;
    m_handlers[0xc4a] = (void*)&CPacketTranslater::OnFatigueBatteryMoneyStatistics;
    m_handlers[0xfa6] = (void*)&CPacketTranslater::OnPartyResultStatistic;
    m_handlers[0xfa7] = (void*)&CPacketTranslater::OnPartyPingStatistic;
    m_handlers[0xfa8] = (void*)&CPacketTranslater::OnPvpPingStatistic;
    m_handlers[0xfa9] = (void*)&CPacketTranslater::OnAbnormalExitStatistic;
    m_handlers[0xfb0] = (void*)&CPacketTranslater::OnLoadingTimeReportStatistics;
    m_handlers[0x1036] = (void*)&CPacketTranslater::OnBloodDungeonStatistic;
    m_handlers[0x17a2] = (void*)&CPacketTranslater::OnUpdateDisjointAvatarStatic;
    m_handlers[0x17a4] = (void*)&CPacketTranslater::OnUpdateCreateEmblemStatic;
    m_handlers[0x17ad] = (void*)&CPacketTranslater::OnUserCountStatistic;
    m_handlers[0x17b6] = (void*)&CPacketTranslater::OnRandomboxStatistic;
    m_handlers[0x17b9] = (void*)&CPacketTranslater::OnLagStatisticsAdd;
    m_handlers[0x17ca] = (void*)&CPacketTranslater::OnValueStatistic;
    m_handlers[0x17cb] = (void*)&CPacketTranslater::OnCirculationStatistic;
    m_handlers[0x1b67] = (void*)&CPacketTranslater::OnServerMatchData;
    m_handlers[0x1b69] = (void*)&CPacketTranslater::OnSecretShopStatistic;
    m_handlers[0x1f46] = (void*)&CPacketTranslater::OnGoldCardEventStatistic;
    m_handlers[0x271c] = (void*)&CPacketTranslater::OnTowerOfDespairStatistic;
    m_handlers[0x2720] = (void*)&CPacketTranslater::OnStatistic;
    m_handlers[0x2722] = (void*)&CPacketTranslater::OnStatisticGmCmd;
    m_handlers[0x2723] = (void*)&CPacketTranslater::OnMoneyLog;
    m_handlers[0x27e0] = (void*)&CPacketTranslater::OnCompatibilityIndex;
    m_handlers[0x27e1] = (void*)&CPacketTranslater::OnP2PStatistic;
    m_handlers[0x27ed] = (void*)&CPacketTranslater::OnFairPvpPingStatistic;
    m_handlers[0x27f3] = (void*)&CPacketTranslater::OnFileStatistic;
    m_handlers[0x27fd] = (void*)&CPacketTranslater::OnHolePunchingSuccessRateStatistic;
}

CPacketDecoder::~CPacketDecoder()
{
}

void CPacketDecoder::Attach(CApplication* app)
{
    if (app != 0)
    {
        m_queue = app->Get_QPacket();
        m_lock = app->Get_QLock();
        m_poolLock = app->Get_BLock();
    }
}

int CPacketDecoder::MsgDecode(PacketHeader* pkt)
{
    static CPacketCounter<1000, 10240> packet_counter((char*)0, "PacketDispatcher");
    if (pkt == 0)
    {
        return 0;
    }
    if (*(unsigned short*)pkt < 0x2800 && 999 < *(unsigned short*)pkt)
    {
        packet_counter.IncrementPacketCount(*(unsigned short*)pkt);
        if (m_handlers[*(unsigned short*)pkt] == 0)
        {
            CMyFileLog log("MsgDecode", 0xca);
            log("./log/Decoder",
                "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
                *(unsigned short*)pkt);
            return 0;
        }
        packet_counter.BeforeProcess();
        ((void (*)(PacketHeader*))m_handlers[*(unsigned short*)pkt])(pkt);
        packet_counter.AfterProcess(*(unsigned short*)pkt);
        return 1;
    }
    printf("Game Message with identifier %d has arrived.\n", *(unsigned short*)pkt);
    CMyFileLog log("MsgDecode", 0xea);
    log("./log/Decoder",
        "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
        *(unsigned short*)pkt);
    return 0;
}

void CPacketDecoder::Process()
{
    if (m_queue != 0 && m_lock != 0)
    {
        PacketHeader* pkt = 0;
        {
            CGuard<CMutex> g((CMutex*)m_lock);
            std::queue<CUdpRecvBuffer*>* q = (std::queue<CUdpRecvBuffer*>*)m_queue;
            if (!q->empty())
            {
                pkt = (PacketHeader*)q->front();
                q->pop();
            }
        }
        if (pkt != 0)
        {
            if (MsgDecode(pkt) != 1)
            {
                {
                    CGuard<CMutex> g((CMutex*)m_poolLock);
                    CUdpRecvBuffer::operator delete(pkt);
                }
                throw CDNFException(
                    "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
            }
            {
                CGuard<CMutex> g((CMutex*)m_poolLock);
                CUdpRecvBuffer::operator delete(pkt);
            }
        }
        return;
    }
    throw CDNFException("CPacketDecoder is Not Ready!\n");
}

CPacketTracer* CPacketTracerInstance()
{
    static CPacketTracer instance;
    return &instance;
}

CPacketTracer::CPacketTracer()
{
    m_count = 0;
}

CPacketTracer::~CPacketTracer()
{
}

void CPacketTracer::AddLog(int p1, int p2)
{
    time_t t = time(0);
    tm* pt = localtime(&t);
    char buf[32];
    char* p = buf;
    for (unsigned int i = 0; i < 0x20; i += 4)
    {
        p[i] = '\0';
        p[i + 1] = '\0';
        p[i + 2] = '\0';
        p[i + 3] = '\0';
    }
    sprintf(buf, "(%02d:%02d:%02d/%d/%d)", pt->tm_hour, pt->tm_min, pt->tm_sec, p2, p1);
    m_log += buf;
    m_count++;
}

void CPacketTracer::ResetLog()
{
    m_log.clear();
}

void CPacketTracer::WriteLog()
{
    if (m_count == (m_count / 0x1e) * 0x1e)
    {
        CMyFileLog log("WriteLog", 0x2a);
        log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_log.c_str());
        ResetLog();
    }
}

void CPacketTracer::AbsoluteWriteLog()
{
    CMyFileLog log("AbsoluteWriteLog", 0x32);
    log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", m_log.c_str());
    ResetLog();
}

CApplication* CPacketTranslater::m_pclApp = 0;

void CPacketTranslater::attach(CApplication* app)
{
    m_pclApp = app;
}

// ---- CPacketTranslater 处理函数（按反编译 0805a418-0805ff04 实现）----
void CPacketTranslater::OnHeartBeat(PacketHeader* pkt)
{
}

void CPacketTranslater::OnEventStart(PacketHeader* pkt)
{
}

void CPacketTranslater::OnEventEnd(PacketHeader* pkt)
{
}

void CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader* pkt)
{
}

void CPacketTranslater::OnCompatibilityIndex(PacketHeader* pkt)
{
}

#define THROW_IF_NO_APP(msg) \
    if (m_pclApp == 0) \
    { \
        throw CDNFException(msg); \
    }

void CPacketTranslater::OnClientSpecStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnClientSpecStatistic : 0 == m_pclApp")
    CHWSpecResearcher* hw = m_pclApp->Get_HWspecResearch();
    char* pb = (char*)pkt;
    for (int i = 0; i < (int)(unsigned char)pb[0xb]; i++)
    {
        hw->WriteSpecStatics((unsigned char)pb[10], *(HWSpec*)(pb + i * 0xc + 0x12));
    }
    if (pb[10] == 1)
    {
        hw->WriteErrorLineStatics(*(unsigned short*)(pb + 0x10), *(int*)(pb + 0xc));
    }
}

static char chk_ting[8];

void CPacketTranslater::OnFrameLagStatisticsAdd(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsAdd() : 0 == m_pclApp")
    FrameLagCollector* flc = m_pclApp->Get_FrameLagCollector();
    char* pb = (char*)pkt;
    if (access("./SHOW_PACKET", 0) == 0)
    {
        CMyFileLog log1("OnFrameLagStatisticsAdd", 0x124);
        log1("./log/FrameLag.log", "packet->m_wSize\t\t: %hu", *(unsigned short*)(pb + 2));
        CMyFileLog log2("OnFrameLagStatisticsAdd", 0x125);
        log2("./log/FrameLag.log", "crashCount\t\t\t\t: %hhd", (int)(char)pb[0x1f]);
        CMyFileLog log3("OnFrameLagStatisticsAdd", 0x126);
        log3("./log/FrameLag.log", "cpuInfo.cpuClock       : %d", *(int*)(pb + 0x28));
        CMyFileLog log4("OnFrameLagStatisticsAdd", 0x127);
        log4("./log/FrameLag.log", "cpuInfo.numOfProcessor : %hhd", (int)(char)pb[0x38]);
        CMyFileLog log5("OnFrameLagStatisticsAdd", 0x128);
        log5("./log/FrameLag.log", "cpuInfo.cpuVendor      : %hhd", (int)(char)pb[0x3c]);
        CMyFileLog log6("OnFrameLagStatisticsAdd", 0x129);
        log6("./log/FrameLag.log", "videoCardVendorId      : %hu", (unsigned int)*(unsigned short*)(pb + 0x48));
        CMyFileLog log7("OnFrameLagStatisticsAdd", 0x12a);
        log7("./log/FrameLag.log", "videoCardDeviceId      : %hu", (unsigned int)*(unsigned short*)(pb + 0x50));
        CMyFileLog log8("OnFrameLagStatisticsAdd", 299);
        log8("./log/FrameLag.log", "availableTextureMemory : %hd", (int)*(short*)(pb + 0x58));
        CMyFileLog log9("OnFrameLagStatisticsAdd", 300);
        log9("./log/FrameLag.log", "ramMemory              : %hd", (int)*(short*)(pb + 0x60));
        CMyFileLog log10("OnFrameLagStatisticsAdd", 0x12d);
        log10("./log/FrameLag.log", "osVersion              : %hhd", (int)(char)pb[0x68]);
        CMyFileLog log11("OnFrameLagStatisticsAdd", 0x12e);
        log11("./log/FrameLag.log", "directxVersion         : %x", *(unsigned int*)(pb + 0x6c));
        CMyFileLog log12("OnFrameLagStatisticsAdd", 0x130);
        log12("./log/FrameLag.log", "crash\t\t\t\t\t: %hhd", (int)(char)pb[0x7c]);
        if (-1 < (char)pb[0x7c] && (char)pb[0x7c] < 8)
        {
            chk_ting[(char)pb[0x7c]]++;
        }
        unsigned int t5 = *(unsigned int*)(pb + 0x14c);
        unsigned int t4 = *(unsigned int*)(pb + 0x148);
        unsigned int t3 = *(unsigned int*)(pb + 0x144);
        unsigned int t2 = *(unsigned int*)(pb + 0x140);
        unsigned int t1 = *(unsigned int*)(pb + 0x13c);
        unsigned int t0 = *(unsigned int*)(pb + 0x138);
        for (int i = 0; i < 6; i++)
        {
            CMyFileLog log13("OnFrameLagStatisticsAdd", 0x138);
            log13("./log/FrameLag.log", "window_fps fps[%d]             : %hd", i,
                  (int)*(short*)(pb + i * 0x38 + 0x24));
            CMyFileLog log14("OnFrameLagStatisticsAdd", 0x139);
            log14("./log/FrameLag.log", "full_fps fps[%d]               : %hd", i,
                  (int)*(short*)(pb + i * 0x38 + 0x26));
            CMyFileLog log15("OnFrameLagStatisticsAdd", 0x13a);
            log15("./log/FrameLag.log", "full_window_fps fps[%d]        : %hd", i,
                  (int)*(short*)(pb + i * 0x38 + 0x28));
            CMyFileLog log16("OnFrameLagStatisticsAdd", 0x13b);
            log16("./log/FrameLag.log", "full_window_nosync_fps fps[%d] : %hd", i,
                  (int)*(short*)(pb + i * 0x38 + 0x2a));
            for (int j = 0; j < 6; j++)
            {
                CMyFileLog log17("OnFrameLagStatisticsAdd", 0x13e);
                log17("./log/FrameLag.log",
                      "m_frameLagArray[%d].framelag[%d].frame : %d", i, j,
                      *(int*)(pb + (i * 7 + j + 4) * 8 + 0xc));
                CMyFileLog log18("OnFrameLagStatisticsAdd", 0x13f);
                log18("./log/FrameLag.log",
                      "m_frameLagArray[%d].framelag[%d].time : %.3f", i, j,
                      (double)*(float*)(pb + (i * 7 + j + 4) * 8 + 0x10));
            }
        }
        CMyFileLog log19("OnFrameLagStatisticsAdd", 0x142);
        log19("./log/FrameLag.log", "TOTAL TING : %u, %u, %u, %u, %u, %u",
              t0, t1, t2, t3, t4, t5);
        unsigned int valid = flc->is_valid_statistic_packet((Packet_Frame_Lag_Statistic_Add*)pkt);
        CMyFileLog log20("OnFrameLagStatisticsAdd", 0x144);
        log20("./log/FrameLag.log", "packet validation : %d", valid & 0xff);
        CMyFileLog log21("OnFrameLagStatisticsAdd", 0x146);
        log21("./log/FrameLag.log", "\n");
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            chk_ting[i] = 0;
        }
    }
    flc->PushOneFrameLagData((Packet_Frame_Lag_Statistic_Add*)pkt);
}

void CPacketTranslater::OnMoneyLog(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnMoneyLog() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddMoneyLog(
        (MoneyLogPacket*)pkt, m_pclApp->Get_ServerHandler());
}

void CPacketTranslater::OnStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnStatistic() : 0 == m_pclApp")
    statistc_proxy::addStatisticProxy((StatisticsPacket*)pkt);
}

void CPacketTranslater::OnP2PStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnP2PStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddP2PStatistic((Packet_P2P_Statistics*)pkt);
}

void CPacketTranslater::OnCubeStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCubeStatistic() : 0 == m_pclApp")
    CCubeStatistic* cube = (CCubeStatistic*)m_pclApp->Get_StatisticManager()->getCubeStatisticObject();
    cube->addStatisticData((Packet_Cube_Statistic*)pkt);
}

void CPacketTranslater::OnStatisticGmCmd(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnStatisticGmCmd() : 0 == m_pclApp")
    statistc_proxy::sendDBStatisticProxy();
    statistc_proxy::resetStatisticProxy();
}

void CPacketTranslater::OnValueStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnValueStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddValueStatistics((Packet_Value_Statistic*)pkt);
}

void CPacketTranslater::OnServerMatchData(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnServerMatchData() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddServerMatchData((Packet_Server_Match_data*)pkt);
}

void CPacketTranslater::OnLagStatisticsAdd(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnLagStatisticsAdd : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddLagStatistics((Packet_Stat_Lag_Statistics*)pkt);
}

void CPacketTranslater::OnPvpPingStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnPvpPingStatistic() : 0 == m_pclApp")
    m_pclApp->Get_UdpCharacteristic()->PushPvpPingData((Packet_Pvp_Ping_Statistic*)pkt);
}

void CPacketTranslater::OnPartyPingStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnPartyPingStatistic() : 0 == m_pclApp")
    m_pclApp->Get_UdpCharacteristic()->PushPartyPingData((Packet_Party_Ping_Statistic*)pkt);
}

void CPacketTranslater::OnFairPvpPingStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnFairPvpPingStatistic() : 0 == m_pclApp")
    m_pclApp->Get_UdpCharacteristic()->PushFairPvpPingData((Packet_Fair_Pvp_Ping_Statistic*)pkt);
}

void CPacketTranslater::OnPartyResultStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnPartyResultStatistic() : 0 == m_pclApp")
    m_pclApp->Get_UdpCharacteristic()->PushPartyResultData((Packet_Party_Result_Statistic*)pkt);
}

void CPacketTranslater::OnAbnormalExitStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnAbnormalExitStatistic() : 0 == m_pclApp")
    m_pclApp->Get_UdpCharacteristic()->PushAbnormalExitData((Packet_Abnormal_Exit_Statistic*)pkt);
}

void CPacketTranslater::OnUserTingTimeCheck(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnUserTingTimeCheck() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteUserTingTImeCheckStatistic(
        (Packet_User_Ting_TimeCheck_Statistic_Add*)pkt);
}

void CPacketTranslater::OnUserCountStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnUserCountStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddUserCountStatistics(
        m_pclApp->Get_ServerHandler(), (Packet_User_Count_Statistic*)pkt);
}

void CPacketTranslater::OnRandomboxStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRandomboxStatistic : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddRandomboxStatistic((Packet_Randombox_statistic*)pkt);
}

void CPacketTranslater::OnReasonCrashDownData(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnReasonCrashDownData : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddReasonCrashDownData(
        (Packet_Reason_Crash_Down_Info*)pkt, m_pclApp->Get_ServerHandler());
}

void CPacketTranslater::OnUpdateDisjointAvatarStatic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnUpdateDisjointAvatarStatic : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddDisjointAvatarInfo(
        (Packet_Avater_Disjoint_Statistic*)pkt);
}

void CPacketTranslater::OnUpdateCreateEmblemStatic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnUpdateCreateEmblemStatic : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddCreateEmblemInfo(
        (Packet_Emblem_Create_Statistic*)pkt);
}

void CPacketTranslater::OnSecretShopStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnSecretShopStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddSecretShopStatistic((Packet_Secret_Shop_Statistic*)pkt);
}

void CPacketTranslater::OnCirculationStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCirculationStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddCirculationStatistics((Packet_Circulation_Statistic*)pkt);
}

void CPacketTranslater::OnBloodDungeonStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnBloodDungeonStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddBloodDungeonStatistics(
        (Packet_Blood_dungeon_statistic*)pkt);
}

void CPacketTranslater::OnDungeonStatisticParty(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDungeonStatisticParty() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteDungeonPartyStatistic(
        (Packet_Dungeon_Statistic_Party*)pkt);
}

void CPacketTranslater::OnDungeonStatisticPartyJob(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDungeonStatisticPartyJob() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteDungeonPartyJobStatistic(
        (Packet_Dungeon_Statistic_Party_Job*)pkt);
}

void CPacketTranslater::OnDungeonStatisticPartyCharac(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDungeonStatisticPartyCharac() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteDungeonPartyCharacStatistic(
        (Packet_Dungeon_Statistic_Party_Charac*)pkt);
}

void CPacketTranslater::OnDeathTowerStatisticValue(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticValue() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteDeathTowerValueStatistic(
        (Packet_DeathTower_Statistic_Value*)pkt);
}

void CPacketTranslater::OnDeathTowerStatisticPlayDataJob(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteDeathTowerPlayDataJobStatistic(
        (Packet_DeathTower_Statistic_Playdata_Job*)pkt);
}

void CPacketTranslater::OnDeathTowerStatisticPlayDataParty(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteDeathTowerPlayDataPartyStatistic(
        (Packet_DeathTower_Statistic_Playdata_Party*)pkt);
}

void CPacketTranslater::OnPacketOverflowStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnPacketOverflowStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WritePacketOverflowStatistic(
        (Packet_Overflow_Statistic_Add*)pkt);
}

void CPacketTranslater::OnAssertManagerStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnAssertManagerStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteAssertManagerStatistic(
        (Packet_Assert_Manager_Info*)pkt);
}

void CPacketTranslater::OnHellPartyStatisticItem(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnHellPartyStatisticItem() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->WriteHellPartyStatisticItem(
        (Packet_HellParty_Statistic_Item*)pkt);
}

void CPacketTranslater::OnLoadingTimeReportStatistics(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnLoadingTimeReportStatistics() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddLoadingTimeReportStatistics(
        (Packet_Loading_Time_Report_Statistics*)pkt);
}

void CPacketTranslater::OnFatigueBatteryMoneyStatistics(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnLoadingTimeReportStatistics() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddFatigueBatteryStatistics(
        (Packet_Fatigue_Battery_Money_Statistic*)pkt);
}

void CPacketTranslater::OnGoldCardEventStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnGoldCardEventStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddGoldcardEventStatistic(
        (Packet_Goldcard_Event_Statistic_GTS*)pkt);
}

void CPacketTranslater::OnTowerOfDespairStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnTowerOfDespairStatistic() : 0 == m_pclApp")
    m_pclApp->Get_StatisticManager()->AddTowerOfDespairStatistic(
        (Packet_TowerOfDespair_Statistic_GTS*)pkt);
}

void CPacketTranslater::OnFrameLagStatisticsResultLoadSpec(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsResultLoadSpec() : 0 == m_pclApp")
    m_pclApp->Get_FrameLagCollector()->PushMonitoringSpecData(
        (Packet_Frame_Lag_Statistic_Result_Load_Spec*)pkt);
}

void CPacketTranslater::OnFrameLagStatisticsResultReloadSpec(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsResultReloadSpec() : 0 == m_pclApp")
    m_pclApp->Get_FrameLagCollector()->PushMonitoringSpecData(
        (Packet_Frame_Lag_Statistic_Result_Reload_Spec*)pkt);
}

void CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify() : 0 == m_pclApp")
    m_pclApp->Get_FrameLagCollector()->PopMonitoringSpecData(
        (Packet_Frame_Lag_Spec_Delete_Notify*)pkt);
}

void CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck(PacketHeader* pkt)
{
    THROW_IF_NO_APP(
        "CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck() : 0 == m_pclApp")
    m_pclApp->Get_FrameLagCollector()->CollectIntervalCheck(
        (Packet_Frame_Lag_Collect_Interval_Check*)pkt);
}

void CPacketTranslater::OnFileStatistic(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    std::string path = "./log/";
    if (pb[10] == 0)
    {
        path.append("filestatics");
    }
    else
    {
        path.append(pb + 10);
    }
    CMyRawFileLog raw;
    raw(path.c_str(), pb + 0x10a);
}

void CPacketTranslater::OnHolePunchingSuccessRateStatistic(PacketHeader* pkt)
{
    THROW_IF_NO_APP("OnHolePunchingSuccessRateStatistic() : 0 == m_pclApp")
    char* pb = (char*)pkt;
    Packet_GameServer2Statisctics2DBServer out;
    *(unsigned short*)((char*)&out + 10) = *(unsigned short*)(pb + 10);
    *(char*)((char*)&out + 0xc) = pb[0xc];
    *(int*)((char*)&out + 0xd) = *(int*)(pb + 0xd);
    *(int*)((char*)&out + 0x11) = *(int*)(pb + 0x11);
    strncpy((char*)&out + 0x15, pb + 0x15, 0x10);
    strncpy((char*)&out + 0x25, pb + 0x25, 0x10);
    m_pclApp->Get_ServerHandler()->SendToDB((PacketHeader*)&out);
}
