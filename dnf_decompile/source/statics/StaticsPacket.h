#ifndef STATICS_PACKET_H_
#define STATICS_PACKET_H_

#include <queue>
#include <string>

#include "PacketHeader.h"
#include "Thread.h"

class CApplication;
class CUdpRecvBuffer;

// ---- statics 专用 DB 统计包 ----
struct GoldCardEventStatistic;
struct TowerOfDespairStatistic_Value;

class Packet_Goldcard_Event_Statistic_STD
{
public:
    Packet_Goldcard_Event_Statistic_STD();
    char m_data[0x385];
};

class Packet_TowerOfDespair_Statistic_STD
{
public:
    Packet_TowerOfDespair_Statistic_STD();
    char m_data[0x33a];
};

class Packet_DBMW_Reason_Crash_Down_Query
{
public:
    Packet_DBMW_Reason_Crash_Down_Query();
    char m_data[0x10a];
};

class Packet_DBMW_Dungeon_Statistic_Party
{
public:
    Packet_DBMW_Dungeon_Statistic_Party();
    char m_data[0x177e];
};

class Packet_DBMW_Dungeon_Statistic_Party_Job
{
public:
    Packet_DBMW_Dungeon_Statistic_Party_Job();
    char m_data[0x17c9];
};

class Packet_DBMW_Dungeon_Statistic_Party_Charac
{
public:
    Packet_DBMW_Dungeon_Statistic_Party_Charac();
    char m_data[0x1759];
};

class Packet_DBMW_Packet_Overflow_Statistic
{
public:
    Packet_DBMW_Packet_Overflow_Statistic();
    char m_data[0x11];
};

class Packet_Avater_Disjoint_Statistic_DB
{
public:
    Packet_Avater_Disjoint_Statistic_DB();
    char m_data[0x14e];
};

class Packet_Emblem_Create_Statistic_DB
{
public:
    Packet_Emblem_Create_Statistic_DB();
    char m_data[0x26];
};

class Packet_Randombox_statistic_DB
{
public:
    Packet_Randombox_statistic_DB();
    char m_data[0x32];
};

class Packet_Server_Match_data_DBMW
{
public:
    Packet_Server_Match_data_DBMW();
    char m_data[0x13];
};

class Packet_DBMW_DeathTower_Statistic_Value
{
public:
    Packet_DBMW_DeathTower_Statistic_Value();
    char m_data[0x17e7];
};

class Packet_DBMW_Query_String
{
public:
    Packet_DBMW_Query_String();
    char m_data[0x100f];
};

class Packet_DBMW_Fatigue_Battery_Money_Statistic
{
public:
    Packet_DBMW_Fatigue_Battery_Money_Statistic();
    char m_data[0x332];
};

class Packet_DBMW_HellParty_Statistic_Item
{
public:
    Packet_DBMW_HellParty_Statistic_Item();
    char m_data[0x17ae];
};

class Packet_DBMW_User_Ting_TimeCheck_Write_Query
{
public:
    Packet_DBMW_User_Ting_TimeCheck_Write_Query();
    char m_data[0x17fe];
};

class Packet_DBMW_DeathTower_Statistic_Playdata_Job
{
public:
    Packet_DBMW_DeathTower_Statistic_Playdata_Job();
    char m_data[0x17ee];
};

class Packet_DBMW_DeathTower_Statistic_Playdata_Party
{
public:
    Packet_DBMW_DeathTower_Statistic_Playdata_Party();
    char m_data[0x17f6];
};

class Packet_Secret_Shop_Statistic
{
public:
    Packet_Secret_Shop_Statistic();
    char m_data[0xfb2];
};

// ---- CInnerMsgHandler：空类 ----
class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    ~CInnerMsgHandler();
};

// ---- CPacketCounter<Lo,Hi>：包计数（MsgDecode 静态实例）----
template<int Lo, int Hi>
class CPacketCounter
{
public:
    CPacketCounter(char* name, char* title);
    ~CPacketCounter();
    void IncrementPacketCount(int id);
    void BeforeProcess();
    void AfterProcess(int id);
    void Reset();
};

// ---- CPacketDecoder：queue@0 / lock@4 / poolLock@8 / handlers@0xc（0x2800 项）----
class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Attach(CApplication* app);
    int MsgDecode(PacketHeader* pkt);
    void Process();
    void* m_queue;                 // +0
    void* m_lock;                  // +4
    void* m_poolLock;              // +8
    void* m_handlers[0x2800];      // +0xc
};

CPacketDecoder* CPacketDecoderInstance();

// ---- CPacketTracer：count@0 + string@4 ----
class CPacketTracer
{
public:
    CPacketTracer();
    ~CPacketTracer();
    void AddLog(int p1, int p2);
    void ResetLog();
    void WriteLog();
    void AbsoluteWriteLog();
    int m_count;
    std::string m_log;
};

CPacketTracer* CPacketTracerInstance();

// ---- CPacketTranslater：静态 m_pclApp + 49 个处理函数 ----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
    static void OnEventEnd(PacketHeader* pkt);
    static void OnMoneyLog(PacketHeader* pkt);
    static void OnHeartBeat(PacketHeader* pkt);
    static void OnStatistic(PacketHeader* pkt);
    static void OnEventStart(PacketHeader* pkt);
    static void OnP2PStatistic(PacketHeader* pkt);
    static void OnCubeStatistic(PacketHeader* pkt);
    static void OnFileStatistic(PacketHeader* pkt);
    static void OnStatisticGmCmd(PacketHeader* pkt);
    static void OnValueStatistic(PacketHeader* pkt);
    static void OnServerMatchData(PacketHeader* pkt);
    static void OnLagStatisticsAdd(PacketHeader* pkt);
    static void OnPvpPingStatistic(PacketHeader* pkt);
    static void OnUserTingTimeCheck(PacketHeader* pkt);
    static void OnCompatibilityIndex(PacketHeader* pkt);
    static void OnPartyPingStatistic(PacketHeader* pkt);
    static void OnRandomboxStatistic(PacketHeader* pkt);
    static void OnUserCountStatistic(PacketHeader* pkt);
    static void OnClientSpecStatistic(PacketHeader* pkt);
    static void OnReasonCrashDownData(PacketHeader* pkt);
    static void OnSecretShopStatistic(PacketHeader* pkt);
    static void OnCirculationStatistic(PacketHeader* pkt);
    static void OnFairPvpPingStatistic(PacketHeader* pkt);
    static void OnPartyResultStatistic(PacketHeader* pkt);
    static void OnAbnormalExitStatistic(PacketHeader* pkt);
    static void OnBloodDungeonStatistic(PacketHeader* pkt);
    static void OnDungeonStatisticParty(PacketHeader* pkt);
    static void OnFrameLagStatisticsAdd(PacketHeader* pkt);
    static void OnAssertManagerStatistic(PacketHeader* pkt);
    static void OnGoldCardEventStatistic(PacketHeader* pkt);
    static void OnHellPartyStatisticItem(PacketHeader* pkt);
    static void OnMonitorManagerConnectOK(PacketHeader* pkt);
    static void OnPacketOverflowStatistic(PacketHeader* pkt);
    static void OnTowerOfDespairStatistic(PacketHeader* pkt);
    static void OnDeathTowerStatisticValue(PacketHeader* pkt);
    static void OnDungeonStatisticPartyJob(PacketHeader* pkt);
    static void OnUpdateCreateEmblemStatic(PacketHeader* pkt);
    static void OnUpdateDisjointAvatarStatic(PacketHeader* pkt);
    static void OnDungeonStatisticPartyCharac(PacketHeader* pkt);
    static void OnLoadingTimeReportStatistics(PacketHeader* pkt);
    static void OnFatigueBatteryMoneyStatistics(PacketHeader* pkt);
    static void OnDeathTowerStatisticPlayDataJob(PacketHeader* pkt);
    static void OnDeathTowerStatisticPlayDataParty(PacketHeader* pkt);
    static void OnFrameLagStatisticsResultLoadSpec(PacketHeader* pkt);
    static void OnHolePunchingSuccessRateStatistic(PacketHeader* pkt);
    static void OnFrameLagStatisticsResultReloadSpec(PacketHeader* pkt);
    static void OnFrameLagStatisticsSpecDeleteNotify(PacketHeader* pkt);
    static void OnFrameLagStatisticsCollectIntervalCheck(PacketHeader* pkt);
    static CApplication* m_pclApp;
};

#endif // STATICS_PACKET_H_
