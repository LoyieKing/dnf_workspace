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

#define PACKET_HEADER_INIT(id, sz) new ((void*)this) PacketHeader(id, sz)

Packet_Goldcard_Event_Statistic_STD::Packet_Goldcard_Event_Statistic_STD()
    : PacketHeader(0x1f47, 0x385)
{
    memset(m_items, 0, 0x37b);
}

Packet_TowerOfDespair_Statistic_STD::Packet_TowerOfDespair_Statistic_STD()
    : PacketHeader(0x271d, 0x33a), m_countA(0), m_countB(0)
{
}

Packet_DBMW_Reason_Crash_Down_Query::Packet_DBMW_Reason_Crash_Down_Query()
    : PacketHeader(0xc49, 0x10a)
{
}

Packet_DBMW_Dungeon_Statistic_Party::Packet_DBMW_Dungeon_Statistic_Party()
    : PacketHeader(0xc36, 0x177e)
{
}

Packet_DBMW_Dungeon_Statistic_Party_Job::Packet_DBMW_Dungeon_Statistic_Party_Job()
    : PacketHeader(0xc38, 0x17c9)
{
}

Packet_DBMW_Dungeon_Statistic_Party_Charac::Packet_DBMW_Dungeon_Statistic_Party_Charac()
    : PacketHeader(0xc3a, 0x1759)
{
}

Packet_DBMW_Packet_Overflow_Statistic::Packet_DBMW_Packet_Overflow_Statistic()
    : PacketHeader(0xc44, 0x11)
{
}

Packet_Avater_Disjoint_Statistic_DB::Packet_Avater_Disjoint_Statistic_DB()
    : PacketHeader(0x17a3, 0x14e)
{
}

Packet_Emblem_Create_Statistic_DB::Packet_Emblem_Create_Statistic_DB()
    : PacketHeader(0x17a5, 0x26)
{
}

Packet_Randombox_statistic_DB::Packet_Randombox_statistic_DB()
    : PacketHeader(0x17b7, 0x32)
{
}

Packet_Server_Match_data_DBMW::Packet_Server_Match_data_DBMW()
    : PacketHeader(0x1b68, 0x13)
{
    m_fieldA = 0;
    m_fieldB = 0;
    m_fieldC = 0;
}

Packet_DBMW_DeathTower_Statistic_Value::Packet_DBMW_DeathTower_Statistic_Value()
    : PacketHeader(0xc3c, 0x17e7)
{
}

Packet_DBMW_Query_String::Packet_DBMW_Query_String()
    : PacketHeader(0x1037, 0x100f)
{
}

Packet_DBMW_Fatigue_Battery_Money_Statistic::Packet_DBMW_Fatigue_Battery_Money_Statistic()
    : PacketHeader(0xc4a, 0x332)
{
    memset((char*)this + 10, 0, 0x328);
}

Packet_DBMW_HellParty_Statistic_Item::Packet_DBMW_HellParty_Statistic_Item()
    : PacketHeader(0xc32, 0x17ae)
{
}

Packet_DBMW_User_Ting_TimeCheck_Write_Query::Packet_DBMW_User_Ting_TimeCheck_Write_Query()
    : PacketHeader(0xc46, 0x17fe)
{
}

Packet_DBMW_DeathTower_Statistic_Playdata_Job::Packet_DBMW_DeathTower_Statistic_Playdata_Job()
    : PacketHeader(0xc3e, 0x17ee)
{
}

Packet_DBMW_DeathTower_Statistic_Playdata_Party::Packet_DBMW_DeathTower_Statistic_Playdata_Party()
    : PacketHeader(0xc40, 0x17f6)
{
}

Packet_Secret_Shop_Statistic::Packet_Secret_Shop_Statistic()
    : PacketHeader(0x1b69, 0xfb2), m_count(0)
{
}

Packet_DBMW_Loading_Time_Report::Packet_DBMW_Loading_Time_Report()
    : PacketHeader(0xfb1, 0x37)
{
}

Packet_DBMW_Assert_Manager_Info_Write_Query::Packet_DBMW_Assert_Manager_Info_Write_Query()
    : PacketHeader(0xc42, 0x1244)
{
}

Packet_DBMW_Ting_User_TimeCheck_Write_Query::Packet_DBMW_Ting_User_TimeCheck_Write_Query()
    : PacketHeader(0xc47, 0x17fe)
{
}

Packet_DBMW_Powerwar_Loading_Time_Report::Packet_DBMW_Powerwar_Loading_Time_Report()
    : PacketHeader(0xfb2, 0x170e)
{
}

Packet_DBMW_Powerwar_Lag_Report::Packet_DBMW_Powerwar_Lag_Report()
    : PacketHeader(0xfb3, 0x170e)
{
}

PacketInsertUpdate::PacketInsertUpdate()
    : PacketHeader(0x2721, 0x1018)
{
    m_handleIdx = 0;
    m_updateQueryId = 0;
    m_insertQueryId = 0;
    int i = 0;
    for (i = 0; i <= 0x800; i++)
    {
        m_updateSql[i] = 0;
    }
    for (i = 0; i <= 0x800; i++)
    {
        m_insertSql[i] = 0;
    }
}

Packet_DBMW_TechnicalReport_Common_Query::Packet_DBMW_TechnicalReport_Common_Query()
    : PacketHeader(0x17c5, 0x40a)
{
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
    : PacketHeader(0xfaa, 0x33)
{
    m_fieldA = 0;
    m_values[0] = 0;
    m_values[1] = 0;
    m_values[2] = 0;
    m_values[3] = 0;
    m_values[4] = 0;
    m_values[5] = 0;
    m_values[6] = 0;
    m_values[7] = 0;
    m_values[8] = 0;
    m_values[9] = 0;
}

Packet_DBMW_Save_Client_Spec_Statistic::Packet_DBMW_Save_Client_Spec_Statistic()
    : PacketHeader(0x9cf, 0x17e7), m_fieldA(0), m_fieldB(0)
{
}

Packet_DBMW_Save_Error_Line_Statistic::Packet_DBMW_Save_Error_Line_Statistic()
    : PacketHeader(0x9d1, 0x17f6)
{
}

Packet_DBMW_Cube_Statistic::Packet_DBMW_Cube_Statistic()
    : PacketHeader(0xc34, 0x17ec)
{
    m_count = 0;
    memset(m_rest, 0, sizeof(m_rest));
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
    : PacketHeader(0x27fd, 0x35)
{
    m_fieldA = 0;
    m_fieldB = 0xff;
    m_fieldC = 0;
    m_fieldD = 0;
    memset(m_restE, 0, sizeof(m_restE));
    memset(m_restF, 0, sizeof(m_restF));
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
    m_queue = 0;
    m_lock = 0;
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
            DNF_LOG_SCOPE_LINE(0xca, "./log/Decoder",
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
    DNF_LOG_SCOPE_LINE(0xea,"./log/Decoder",
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
    if (m_count == (int)((unsigned int)m_count / 0x1e) * 0x1e)
    {
        register const char* trace = m_log.c_str();
        CMyFileLog log("WriteLog", 0x2a);
        log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", trace);
        ResetLog();
    }
}

void CPacketTracer::AbsoluteWriteLog()
{
    register const char* trace = m_log.c_str();
    CMyFileLog log("AbsoluteWriteLog", 0x32);
    log("./log/packet_trace", "[TRACE_PACKET] Packet Code : %s\n", trace);
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
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnClientSpecStatistic : 0 == m_pclApp")
        char* pb = (char*)pkt;
        CHWSpecResearcher* hw = m_pclApp->Get_HWspecResearch();
        for (int i = 0; i < (int)(unsigned char)pb[0xb]; i++)
        {
            hw->WriteSpecStatics(pb[10], *(HWSpec*)(pb + i * 0xc + 0x12));
        }
        if (pb[10] == 1)
        {
            hw->WriteErrorLineStatics(*(unsigned short*)(pb + 0x10), *(int*)(pb + 0xc));
        }

    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnClientSpecStatistic", 254);
        log("./log/Except", "CPacketTranslater::OnClientSpecStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnClientSpecStatistic", 259);
        log("./log/Except", "CPacketTranslater::OnClientSpecStatistic() Exception Break\n");
    }
}


static char chk_ting[8];

void CPacketTranslater::OnFrameLagStatisticsAdd(PacketHeader* pkt)
{
    try
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
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFrameLagStatisticsAdd", 340);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsAdd() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFrameLagStatisticsAdd", 345);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsAdd() Exception Break\n");
    }
}


void CPacketTranslater::OnMoneyLog(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnMoneyLog() : 0 == m_pclApp")
        MoneyLogPacket* pck = (MoneyLogPacket*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddMoneyLog(pck, m_pclApp->Get_ServerHandler());
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnMoneyLog", 1447);
        log("./log/Except", "CPacketTranslater::OnMoneyLog() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnMoneyLog", 1452);
        log("./log/Except", "CPacketTranslater::OnMoneyLog() Exception Break");
    }
}




void CPacketTranslater::OnStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnStatistic() : 0 == m_pclApp")
        StatisticsPacket* pck = (StatisticsPacket*)pkt;
        statistc_proxy::addStatisticProxy(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnStatistic", 1400);
        log("./log/Except", "CPacketTranslater::OnStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnStatistic", 1405);
        log("./log/Except", "CPacketTranslater::OnStatistic() Exception Break");
    }
}

void CPacketTranslater::OnP2PStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnP2PStatistic() : 0 == m_pclApp")
        Packet_P2P_Statistics* pck = (Packet_P2P_Statistics*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddP2PStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnP2PStatistic", 1515);
        log("./log/Except", "CPacketTranslater::OnP2PStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnP2PStatistic", 1518);
        log("./log/Except", "CPacketTranslater::OnP2PStatistic() Exception Break");
    }
}




void CPacketTranslater::OnCubeStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnCubeStatistic() : 0 == m_pclApp")
        Packet_Cube_Statistic* pck = (Packet_Cube_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        ((CCubeStatistic*)sm->getCubeStatisticObject())->addStatisticData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnCubeStatistic", 1017);
        log("./log/Except", "CPacketTranslater::OnCubeStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnCubeStatistic", 1022);
        log("./log/Except", "CPacketTranslater::OnCubeStatistic() Exception Break");
    }
}




void CPacketTranslater::OnStatisticGmCmd(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnStatisticGmCmd() : 0 == m_pclApp")
        PacketHeader* pck = (PacketHeader*)pkt;
        statistc_proxy::sendDBStatisticProxy();
        statistc_proxy::resetStatisticProxy();
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnStatisticGmCmd", 1422);
        log("./log/Except", "CPacketTranslater::OnStatisticGmCmd() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnStatisticGmCmd", 1427);
        log("./log/Except", "CPacketTranslater::OnStatisticGmCmd() Exception Break");
    }
}




void CPacketTranslater::OnValueStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnValueStatistic() : 0 == m_pclApp")
        Packet_Value_Statistic* pck = (Packet_Value_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddValueStatistics(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnValueStatistic", 1198);
        log("./log/Except", "CPacketTranslater::OnValueStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnValueStatistic", 1203);
        log("./log/Except", "CPacketTranslater::OnValueStatistic() Exception Break");
    }
}




void CPacketTranslater::OnServerMatchData(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnServerMatchData() : 0 == m_pclApp")
        Packet_Server_Match_data* pck = (Packet_Server_Match_data*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddServerMatchData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnServerMatchData", 1255);
        log("./log/Except", "CPacketTranslater::OnServerMatchData() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnServerMatchData", 1260);
        log("./log/Except", "CPacketTranslater::OnServerMatchData() Exception Break");
    }
}




void CPacketTranslater::OnLagStatisticsAdd(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnLagStatisticsAdd : 0 == m_pclApp")
        Packet_Stat_Lag_Statistics* pck = (Packet_Stat_Lag_Statistics*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddLagStatistics(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnLagStatisticsAdd", 1166);
        log("./log/Except", "CPacketTranlater::OnLagStatisticsAdd() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnLagStatisticsAdd", 1171);
        log("./log/Except", "CPacketTranlater::OnLagStatisticsAdd() Exception Break");
    }
}




void CPacketTranslater::OnPvpPingStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnPvpPingStatistic() : 0 == m_pclApp")
        Packet_Pvp_Ping_Statistic* pck = (Packet_Pvp_Ping_Statistic*)pkt;
        UdpCharacteristic* uc = m_pclApp->Get_UdpCharacteristic();
        uc->PushPvpPingData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnPvpPingStatistic", 538);
        log("./log/Except", "CPacketTranslater::OnPvpPingStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnPvpPingStatistic", 544);
        log("./log/Except", "CPacketTranslater::OnPvpPingStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnPartyPingStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnPartyPingStatistic() : 0 == m_pclApp")
        Packet_Party_Ping_Statistic* pck = (Packet_Party_Ping_Statistic*)pkt;
        UdpCharacteristic* uc = m_pclApp->Get_UdpCharacteristic();
        uc->PushPartyPingData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnPartyPingStatistic", 508);
        log("./log/Except", "CPacketTranslater::OnPartyPingStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnPartyPingStatistic", 514);
        log("./log/Except", "CPacketTranslater::OnPartyPingStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnFairPvpPingStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnFairPvpPingStatistic() : 0 == m_pclApp")
        Packet_Fair_Pvp_Ping_Statistic* pck = (Packet_Fair_Pvp_Ping_Statistic*)pkt;
        UdpCharacteristic* uc = m_pclApp->Get_UdpCharacteristic();
        uc->PushFairPvpPingData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFairPvpPingStatistic", 569);
        log("./log/Except", "CPacketTranslater::OnFairPvpPingStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFairPvpPingStatistic", 575);
        log("./log/Except", "CPacketTranslater::OnFairPvpPingStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnPartyResultStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnPartyResultStatistic() : 0 == m_pclApp")
        Packet_Party_Result_Statistic* pck = (Packet_Party_Result_Statistic*)pkt;
        UdpCharacteristic* uc = m_pclApp->Get_UdpCharacteristic();
        uc->PushPartyResultData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnPartyResultStatistic", 478);
        log("./log/Except", "CPacketTranslater::OnPartyResultStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnPartyResultStatistic", 484);
        log("./log/Except", "CPacketTranslater::OnPartyResultStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnAbnormalExitStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnAbnormalExitStatistic() : 0 == m_pclApp")
        Packet_Abnormal_Exit_Statistic* pck = (Packet_Abnormal_Exit_Statistic*)pkt;
        UdpCharacteristic* uc = m_pclApp->Get_UdpCharacteristic();
        uc->PushAbnormalExitData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnAbnormalExitStatistic", 600);
        log("./log/Except", "CPacketTranslater::OnAbnormalExitStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnAbnormalExitStatistic", 606);
        log("./log/Except", "CPacketTranslater::OnAbnormalExitStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnUserTingTimeCheck(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnUserTingTimeCheck() : 0 == m_pclApp")
        Packet_User_Ting_TimeCheck_Statistic_Add* pck = (Packet_User_Ting_TimeCheck_Statistic_Add*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteUserTingTImeCheckStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnUserTingTimeCheck", 868);
        log("./log/Except", "CPacketTranslater::OnUserTingTimeCheck() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnUserTingTimeCheck", 873);
        log("./log/Except", "CPacketTranslater::OnUserTingTimeCheck() Exception Break\n");
    }
}




void CPacketTranslater::OnUserCountStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnUserCountStatistic() : 0 == m_pclApp")
        Packet_User_Count_Statistic* pck = (Packet_User_Count_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddUserCountStatistics(m_pclApp->Get_ServerHandler(), pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnUserCountStatistic", 1116);
        log("./log/Except", "CPacketTranslater::OnUserCountStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnUserCountStatistic", 1121);
        log("./log/Except", "CPacketTranslater::OnUserCountStatistic() Exception Break");
    }
}




void CPacketTranslater::OnRandomboxStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnRandomboxStatistic : 0 == m_pclApp")
        Packet_Randombox_statistic* pck = (Packet_Randombox_statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddRandomboxStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnRandomboxStatistic", 1142);
        log("./log/Except", "CPacketTranslater::OnRandomboxStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnRandomboxStatistic", 1147);
        log("./log/Except", "CPacketTranslater::OnRandomboxStatistic() Exception Break");
    }
}




void CPacketTranslater::OnReasonCrashDownData(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnReasonCrashDownData : 0 == m_pclApp")
        Packet_Reason_Crash_Down_Info* pck = (Packet_Reason_Crash_Down_Info*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddReasonCrashDownData(pck, m_pclApp->m_serverHandler);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnReasonCrashDownData", 1040);
        log("./log/Except", "CPacketTranslater::OnReasonCrashDownData() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnReasonCrashDownData", 1045);
        log("./log/Except", "CPacketTranslater::OnReasonCrashDownData() Exception Break");
    }
}




void CPacketTranslater::OnUpdateDisjointAvatarStatic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnUpdateDisjointAvatarStatic : 0 == m_pclApp")
        Packet_Avater_Disjoint_Statistic* pck = (Packet_Avater_Disjoint_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddDisjointAvatarInfo(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnUpdateDisjointAvatarStatic", 1065);
        log("./log/Except", "CPacketTranslater::OnUpdateDisjointAvatarStatic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnUpdateDisjointAvatarStatic", 1070);
        log("./log/Except", "CPacketTranslater::OnUpdateDisjointAvatarStatic() Exception Break");
    }
}




void CPacketTranslater::OnUpdateCreateEmblemStatic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnUpdateCreateEmblemStatic : 0 == m_pclApp")
        Packet_Emblem_Create_Statistic* pck = (Packet_Emblem_Create_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddCreateEmblemInfo(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnUpdateCreateEmblemStatic", 1091);
        log("./log/Except", "CPacketTranslater::OnUpdateDisjointAvatarStatic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnUpdateCreateEmblemStatic", 1096);
        log("./log/Except", "CPacketTranslater::OnUpdateDisjointAvatarStatic() Exception Break");
    }
}




void CPacketTranslater::OnSecretShopStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnSecretShopStatistic() : 0 == m_pclApp")
        Packet_Secret_Shop_Statistic* pck = (Packet_Secret_Shop_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddSecretShopStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnSecretShopStatistic", 1279);
        log("./log/Except", "CPacketTranslater::OnSecretShopStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnSecretShopStatistic", 1284);
        log("./log/Except", "CPacketTranslater::OnSecretShopStatistic() Exception Break");
    }
}




void CPacketTranslater::OnCirculationStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnCirculationStatistic() : 0 == m_pclApp")
        Packet_Circulation_Statistic* pck = (Packet_Circulation_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddCirculationStatistics(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnCirculationStatistic", 1230);
        log("./log/Except", "CPacketTranslater::OnCirculationStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnCirculationStatistic", 1235);
        log("./log/Except", "CPacketTranslater::OnCirculationStatistic() Exception Break");
    }
}




void CPacketTranslater::OnBloodDungeonStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnBloodDungeonStatistic() : 0 == m_pclApp")
        Packet_Blood_dungeon_statistic* pck = (Packet_Blood_dungeon_statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddBloodDungeonStatistics(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnBloodDungeonStatistic", 994);
        log("./log/Except", "CPacketTranslater::OnBloodDungeonStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnBloodDungeonStatistic", 999);
        log("./log/Except", "CPacketTranslater::OnBloodDungeonStatistic() Exception Break");
    }
}




void CPacketTranslater::OnDungeonStatisticParty(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDungeonStatisticParty() : 0 == m_pclApp")
        Packet_Dungeon_Statistic_Party* pck = (Packet_Dungeon_Statistic_Party*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDungeonPartyStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnDungeonStatisticParty", 631);
        log("./log/Except", "CPacketTranslater::OnDungeonStatisticParty() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnDungeonStatisticParty", 637);
        log("./log/Except", "CPacketTranslater::OnDungeonStatisticParty() Exception Break\n");
    }
}




void CPacketTranslater::OnDungeonStatisticPartyJob(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDungeonStatisticPartyJob() : 0 == m_pclApp")
        Packet_Dungeon_Statistic_Party_Job* pck = (Packet_Dungeon_Statistic_Party_Job*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDungeonPartyJobStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnDungeonStatisticPartyJob", 663);
        log("./log/Except", "CPacketTranslater::OnDungeonStatisticPartyJob() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnDungeonStatisticPartyJob", 669);
        log("./log/Except", "CPacketTranslater::OnDungeonStatisticPartyJob() Exception Break\n");
    }
}




void CPacketTranslater::OnDungeonStatisticPartyCharac(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDungeonStatisticPartyCharac() : 0 == m_pclApp")
        Packet_Dungeon_Statistic_Party_Charac* pck = (Packet_Dungeon_Statistic_Party_Charac*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDungeonPartyCharacStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnDungeonStatisticPartyCharac", 695);
        log("./log/Except", "CPacketTranslater::OnDungeonStatisticPartyCharac() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnDungeonStatisticPartyCharac", 701);
        log("./log/Except", "CPacketTranslater::OnDungeonStatisticPartyCharac() Exception Break\n");
    }
}




void CPacketTranslater::OnDeathTowerStatisticValue(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticValue() : 0 == m_pclApp")
        Packet_DeathTower_Statistic_Value* pck = (Packet_DeathTower_Statistic_Value*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDeathTowerValueStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnDeathTowerStatisticValue", 728);
        log("./log/Except", "CPacketTranslater::OnDeathTowerStatisticValue() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnDeathTowerStatisticValue", 734);
        log("./log/Except", "CPacketTranslater::OnDeathTowerStatisticValue() Exception Break\n");
    }
}




void CPacketTranslater::OnDeathTowerStatisticPlayDataJob(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp")
        Packet_DeathTower_Statistic_Playdata_Job* pck = (Packet_DeathTower_Statistic_Playdata_Job*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDeathTowerPlayDataJobStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnDeathTowerStatisticPlayDataJob", 760);
        log("./log/Except", "CPacketTranslater::OnDeathTowerStatisticPlayDataJob() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnDeathTowerStatisticPlayDataJob", 766);
        log("./log/Except", "CPacketTranslater::OnDeathTowerStatisticPlayDataJob() Exception Break\n");
    }
}




void CPacketTranslater::OnDeathTowerStatisticPlayDataParty(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp")
        Packet_DeathTower_Statistic_Playdata_Party* pck = (Packet_DeathTower_Statistic_Playdata_Party*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDeathTowerPlayDataPartyStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnDeathTowerStatisticPlayDataParty", 792);
        log("./log/Except", "CPacketTranslater::OnDeathTowerStatisticPlayDataParty() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnDeathTowerStatisticPlayDataParty", 798);
        log("./log/Except", "CPacketTranslater::OnDeathTowerStatisticPlayDataParty() Exception Break\n");
    }
}




void CPacketTranslater::OnPacketOverflowStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnPacketOverflowStatistic() : 0 == m_pclApp")
        Packet_Overflow_Statistic_Add* pck = (Packet_Overflow_Statistic_Add*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WritePacketOverflowStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnPacketOverflowStatistic", 822);
        log("./log/Except", "CPacketTranslater::OnPacketOverflowStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnPacketOverflowStatistic", 827);
        log("./log/Except", "CPacketTranslater::OnPacketOverflowStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnAssertManagerStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnAssertManagerStatistic() : 0 == m_pclApp")
        Packet_Assert_Manager_Info* pck = (Packet_Assert_Manager_Info*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteAssertManagerStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnAssertManagerStatistic", 845);
        log("./log/Except", "CPacketTranslater::OnAssertManagerStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnAssertManagerStatistic", 850);
        log("./log/Except", "CPacketTranslater::OnAssertManagerStatistic() Exception Break\n");
    }
}




void CPacketTranslater::OnHellPartyStatisticItem(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnHellPartyStatisticItem() : 0 == m_pclApp")
        Packet_HellParty_Statistic_Item* pck = (Packet_HellParty_Statistic_Item*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteHellPartyStatisticItem(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnHellPartyStatisticItem", 896);
        log("./log/Except", "CPacketTranslater::OnHellPartyStatisticItem() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnHellPartyStatisticItem", 902);
        log("./log/Except", "CPacketTranslater::OnHellPartyStatisticItem() Exception Break\n");
    }
}




void CPacketTranslater::OnLoadingTimeReportStatistics(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnLoadingTimeReportStatistics() : 0 == m_pclApp")
        Packet_Loading_Time_Report_Statistics* pck = (Packet_Loading_Time_Report_Statistics*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddLoadingTimeReportStatistics(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnLoadingTimeReportStatistics", 923);
        log("./log/Except", "CPacketTranslater::OnLoadingTimeReportStatistics() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnLoadingTimeReportStatistics", 928);
        log("./log/Except", "CPacketTranslater::OnLoadingTimeReportStatistics() Exception Break");
    }
}




void CPacketTranslater::OnFatigueBatteryMoneyStatistics(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnLoadingTimeReportStatistics() : 0 == m_pclApp")
        Packet_Fatigue_Battery_Money_Statistic* pck = (Packet_Fatigue_Battery_Money_Statistic*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddFatigueBatteryStatistics(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFatigueBatteryMoneyStatistics", 946);
        log("./log/Except", "CPacketTranslater::OnFatigueBatteryMoneyStatistics() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFatigueBatteryMoneyStatistics", 951);
        log("./log/Except", "CPacketTranslater::OnFatigueBatteryMoneyStatistics() Exception Break");
    }
}




void CPacketTranslater::OnGoldCardEventStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnGoldCardEventStatistic() : 0 == m_pclApp")
        Packet_Goldcard_Event_Statistic_GTS* pck = (Packet_Goldcard_Event_Statistic_GTS*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddGoldcardEventStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnGoldCardEventStatistic", 1327);
        log("./log/Except", "CPacketTranslater::OnGoldCardEventStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnGoldCardEventStatistic", 1332);
        log("./log/Except", "CPacketTranslater::OnGoldCardEventStatistic() Exception Break");
    }
}




void CPacketTranslater::OnTowerOfDespairStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnTowerOfDespairStatistic() : 0 == m_pclApp")
        Packet_TowerOfDespair_Statistic_GTS* pck = (Packet_TowerOfDespair_Statistic_GTS*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddTowerOfDespairStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnTowerOfDespairStatistic", 1351);
        log("./log/Except", "CPacketTranslater::OnTowerOfDespairStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnTowerOfDespairStatistic", 1356);
        log("./log/Except", "CPacketTranslater::OnTowerOfDespairStatistic() Exception Break");
    }
}




void CPacketTranslater::OnFrameLagStatisticsResultLoadSpec(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsResultLoadSpec() : 0 == m_pclApp")
        Packet_Frame_Lag_Statistic_Result_Load_Spec* pck = (Packet_Frame_Lag_Statistic_Result_Load_Spec*)pkt;
        FrameLagCollector* flc = m_pclApp->Get_FrameLagCollector();
        flc->PushMonitoringSpecData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFrameLagStatisticsResultLoadSpec", 370);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsResultLoadSpec() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFrameLagStatisticsResultLoadSpec", 375);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsResultLoadSpec() Exception Break\n");
    }
}




void CPacketTranslater::OnFrameLagStatisticsResultReloadSpec(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsResultReloadSpec() : 0 == m_pclApp")
        Packet_Frame_Lag_Statistic_Result_Reload_Spec* pck = (Packet_Frame_Lag_Statistic_Result_Reload_Spec*)pkt;
        FrameLagCollector* flc = m_pclApp->Get_FrameLagCollector();
        flc->PushMonitoringSpecData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFrameLagStatisticsResultReloadSpec", 396);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsResultReloadSpec() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFrameLagStatisticsResultReloadSpec", 401);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsResultReloadSpec() Exception Break\n");
    }
}




void CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify() : 0 == m_pclApp")
        Packet_Frame_Lag_Spec_Delete_Notify* pck = (Packet_Frame_Lag_Spec_Delete_Notify*)pkt;
        FrameLagCollector* flc = m_pclApp->Get_FrameLagCollector();
        flc->PopMonitoringSpecData(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFrameLagStatisticsSpecDeleteNotify", 450);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFrameLagStatisticsSpecDeleteNotify", 455);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify() Exception Break\n");
    }
}




void CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck() : 0 == m_pclApp")
        Packet_Frame_Lag_Collect_Interval_Check* pck = (Packet_Frame_Lag_Collect_Interval_Check*)pkt;
        FrameLagCollector* flc = m_pclApp->Get_FrameLagCollector();
        flc->CollectIntervalCheck(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFrameLagStatisticsCollectIntervalCheck", 422);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFrameLagStatisticsCollectIntervalCheck", 427);
        log("./log/Except", "CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck() Exception Break\n");
    }
}




void CPacketTranslater::OnFileStatistic(PacketHeader* pkt)
{
    try
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
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnFileStatistic", 1541);
        log("./log/Except", "CPacketTranslater::OnFileStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnFileStatistic", 1546);
        log("./log/Except", "CPacketTranslater::OnFileStatistic() Exception Break");
    }
}


void CPacketTranslater::OnHolePunchingSuccessRateStatistic(PacketHeader* pkt)
{
    try
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
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnHolePunchingSuccessRateStatistic", 1574);
        log("./log/Except", "OnHolePunchingSuccessRateStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnHolePunchingSuccessRateStatistic", 1579);
        log("./log/Except", "OnHolePunchingSuccessRateStatistic() Exception Break");
    }
}
