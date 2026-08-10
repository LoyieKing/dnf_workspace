#ifndef STATICS_PACKET_H_
#define STATICS_PACKET_H_

#include <queue>
#include <string>

#include "PacketHeader.h"
#include "StaticsData.h"
#include "Thread.h"

class CApplication;
class CUdpRecvBuffer;

// ---- statics 专用 DB 统计包 ----

#pragma pack(push, 1)

class Packet_Goldcard_Event_Statistic_STD : public PacketHeader
{
public:
    Packet_Goldcard_Event_Statistic_STD();
    GoldCardEventStatistic m_items[99];  // +0xa（99 * 0x9）
} __attribute__((packed));

class Packet_TowerOfDespair_Statistic_STD : public PacketHeader
{
public:
    Packet_TowerOfDespair_Statistic_STD();
    int m_countA;                                   // +0xa
    int m_countB;                                   // +0xe
    TowerOfDespairStatistic_Value m_items[101];     // +0x12（101 * 0x8）
} __attribute__((packed));

class Packet_DBMW_Reason_Crash_Down_Query : public PacketHeader
{
public:
    Packet_DBMW_Reason_Crash_Down_Query();
    char m_data[0x100];
} __attribute__((packed));

class Packet_DBMW_Dungeon_Statistic_Party : public PacketHeader
{
public:
    Packet_DBMW_Dungeon_Statistic_Party();
    char m_data[0x1774];
} __attribute__((packed));

class Packet_DBMW_Dungeon_Statistic_Party_Job : public PacketHeader
{
public:
    Packet_DBMW_Dungeon_Statistic_Party_Job();
    char m_data[0x17bf];
} __attribute__((packed));

class Packet_DBMW_Dungeon_Statistic_Party_Charac : public PacketHeader
{
public:
    Packet_DBMW_Dungeon_Statistic_Party_Charac();
    char m_data[0x174f];
} __attribute__((packed));

class Packet_DBMW_Packet_Overflow_Statistic : public PacketHeader
{
public:
    Packet_DBMW_Packet_Overflow_Statistic();
    char m_data[0x7];
} __attribute__((packed));

class Packet_Avater_Disjoint_Statistic_DB : public PacketHeader
{
public:
    Packet_Avater_Disjoint_Statistic_DB();
    stDisjointAvatarInfoTotal m_info;  // +0xa（0x144）
} __attribute__((packed));

class Packet_Emblem_Create_Statistic_DB : public PacketHeader
{
public:
    Packet_Emblem_Create_Statistic_DB();
    char m_data[0x1c];
} __attribute__((packed));

class Packet_Randombox_statistic_DB : public PacketHeader
{
public:
    Packet_Randombox_statistic_DB();
    char m_data[0x28];
} __attribute__((packed));

class Packet_Server_Match_data_DBMW : public PacketHeader
{
public:
    Packet_Server_Match_data_DBMW();
    char m_fieldA;   // +0xa
    int m_fieldB;    // +0xb
    int m_fieldC;    // +0xf
} __attribute__((packed));

class Packet_DBMW_DeathTower_Statistic_Value : public PacketHeader
{
public:
    Packet_DBMW_DeathTower_Statistic_Value();
    char m_data[0x17dd];
} __attribute__((packed));

class Packet_DBMW_Query_String : public PacketHeader
{
public:
    Packet_DBMW_Query_String();
    char m_data[0x1005];
} __attribute__((packed));

class Packet_DBMW_Fatigue_Battery_Money_Statistic : public PacketHeader
{
public:
    Packet_DBMW_Fatigue_Battery_Money_Statistic();
    char m_data[0x328];
} __attribute__((packed));

class Packet_DBMW_HellParty_Statistic_Item : public PacketHeader
{
public:
    Packet_DBMW_HellParty_Statistic_Item();
    char m_data[0x17a4];
} __attribute__((packed));

class Packet_DBMW_User_Ting_TimeCheck_Write_Query : public PacketHeader
{
public:
    Packet_DBMW_User_Ting_TimeCheck_Write_Query();
    char m_data[0x17f4];
} __attribute__((packed));

class Packet_DBMW_DeathTower_Statistic_Playdata_Job : public PacketHeader
{
public:
    Packet_DBMW_DeathTower_Statistic_Playdata_Job();
    char m_data[0x17e4];
} __attribute__((packed));

class Packet_DBMW_DeathTower_Statistic_Playdata_Party : public PacketHeader
{
public:
    Packet_DBMW_DeathTower_Statistic_Playdata_Party();
    char m_data[0x17ec];
} __attribute__((packed));

class Packet_Secret_Shop_Statistic : public PacketHeader
{
public:
    Packet_Secret_Shop_Statistic();
    int m_count;                              // +0xa
    int m_shopIdx;                            // +0xe
    SECRET_SHOP_STATISTIC_DATA m_items[200];  // +0x12（200 * 0x14）
} __attribute__((packed));

class Packet_DBMW_Loading_Time_Report : public PacketHeader
{
public:
    Packet_DBMW_Loading_Time_Report();
    char m_data[0x2d];
} __attribute__((packed));

class Packet_DBMW_Assert_Manager_Info_Write_Query : public PacketHeader
{
public:
    Packet_DBMW_Assert_Manager_Info_Write_Query();
    char m_data[0x123a];
} __attribute__((packed));

class Packet_DBMW_Ting_User_TimeCheck_Write_Query : public PacketHeader
{
public:
    Packet_DBMW_Ting_User_TimeCheck_Write_Query();
    char m_data[0x17f4];
} __attribute__((packed));

class Packet_DBMW_Powerwar_Loading_Time_Report : public PacketHeader
{
public:
    Packet_DBMW_Powerwar_Loading_Time_Report();
    char m_data[0x1704];
} __attribute__((packed));

class Packet_DBMW_Powerwar_Lag_Report : public PacketHeader
{
public:
    Packet_DBMW_Powerwar_Lag_Report();
    char m_data[0x1704];
} __attribute__((packed));

class PacketInsertUpdate : public PacketHeader
{
public:
    PacketInsertUpdate();
    int m_handleIdx;          // +0xa
    int m_updateQueryId;      // +0xe
    int m_insertQueryId;      // +0x12
    char m_updateSql[0x801];  // +0x16
    char m_insertSql[0x801];  // +0x817
} __attribute__((packed));

class Packet_DBMW_TechnicalReport_Common_Query : public PacketHeader
{
public:
    Packet_DBMW_TechnicalReport_Common_Query();
    char m_data[0x400];
} __attribute__((packed));

// ---- FrameLag 专用包（0xc26-0xc30 族）----
class Packet_Frame_Lag_Statistic_Load_Spec : public PacketHeader
{
public:
    Packet_Frame_Lag_Statistic_Load_Spec();
};

class Packet_Frame_Lag_Statistic_Reload_Spec : public PacketHeader
{
public:
    Packet_Frame_Lag_Statistic_Reload_Spec();
};

class Packet_Frame_Lag_Statistic_Write_Lag_Index : public PacketHeader
{
public:
    Packet_Frame_Lag_Statistic_Write_Lag_Index();
    char m_data[0x171];  // +0xa（packetSize 0x17b）
};

class Packet_Frame_Lag_Statistic_Write_Query : public PacketHeader
{
public:
    Packet_Frame_Lag_Statistic_Write_Query();
    char m_data[0x400];  // +0xa（packetSize 0x40a）
};

class Packet_Frame_Lag_Used_Memory_Write_Query : public PacketHeader
{
public:
    Packet_Frame_Lag_Used_Memory_Write_Query();
    char m_data[0x400];  // +0xa（packetSize 0x40a）
};

class Packet_Udp_Characteristic : public PacketHeader
{
public:
    Packet_Udp_Characteristic();
    char m_fieldA;    // +0xa
    int m_values[10]; // +0xb
} __attribute__((packed));

class Packet_DBMW_Save_Client_Spec_Statistic : public PacketHeader
{
public:
    Packet_DBMW_Save_Client_Spec_Statistic();
    char m_fieldA;                // +0xa
    int m_fieldB;                 // +0xb
    STSpecCount m_items[436];     // +0xf（436 * 0xe）
} __attribute__((packed));

class Packet_DBMW_Save_Error_Line_Statistic : public PacketHeader
{
public:
    Packet_DBMW_Save_Error_Line_Statistic();
    int m_count;              // +0xa
    STErrorCount m_items[612];  // +0xe（612 * 0xa）
} __attribute__((packed));

class Packet_DBMW_Cube_Statistic : public PacketHeader
{
public:
    Packet_DBMW_Cube_Statistic();
    int m_count;             // +0xa
    char m_rest[0x17de];     // +0xe
} __attribute__((packed));

class Packet_GameServer2Statisctics2DBServer : public PacketHeader
{
public:
    Packet_GameServer2Statisctics2DBServer();
    unsigned short m_fieldA;  // +0xa
    char m_fieldB;            // +0xc
    int m_fieldC;             // +0xd
    int m_fieldD;             // +0x11
    char m_restE[0x10];       // +0x15
    char m_restF[0x10];       // +0x25
} __attribute__((packed));

#include "Packet_P2P_Statistics.h"

#pragma pack(pop)

// ---- CInnerMsgHandler：空类 ----
class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    ~CInnerMsgHandler();
    void SendStopNetworkThread();
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
