#ifndef STATICS_STATISTIC_H_
#define STATICS_STATISTIC_H_

#include <set>
#include <map>
#include <list>
#include <algorithm>
#include <string>
#include <vector>

#include "StaticsData.h"

class MoneyLogPacket;
class Packet_P2P_Statistics;
class Packet_Stat_Lag_Statistics;
class Packet_Server_Match_data;
class Packet_Value_Statistic;
class Packet_Emblem_Create_Statistic;
class Packet_Stat_Compatibility_Index;
class Packet_Avater_Disjoint_Statistic;
class Packet_Randombox_statistic;
class Packet_Reason_Crash_Down_Info;
class Packet_Secret_Shop_Statistic;
class Packet_User_Count_Statistic;
class Packet_Circulation_Statistic;
class Packet_Blood_dungeon_statistic;
class Packet_Goldcard_Event_Statistic_GTS;
class Packet_TowerOfDespair_Statistic_GTS;
class Packet_Dungeon_Statistic_Party;
class Packet_Fatigue_Battery_Money_Statistic;
class Packet_Assert_Manager_Info;
class Packet_HellParty_Statistic_Item;
class Packet_Overflow_Statistic_Add;
class Packet_DeathTower_Statistic_Value;
class Packet_Dungeon_Statistic_Party_Job;
class Packet_Loading_Time_Report_Statistics;
class Packet_Dungeon_Statistic_Party_Charac;
class Packet_DeathTower_Statistic_Playdata_Job;
class Packet_DeathTower_Statistic_Playdata_Party;
class Packet_User_Ting_TimeCheck_Statistic_Add;
class Packet_Cube_Statistic;
class Packet_Frame_Lag_Statistic_Add;
class Packet_Frame_Lag_Collect_Interval_Check;
class Packet_Frame_Lag_Spec_Delete_Notify;
class Packet_Frame_Lag_Statistic_Result_Load_Spec;
class Packet_Frame_Lag_Statistic_Result_Reload_Spec;
class Packet_Pvp_Ping_Statistic;
class Packet_Party_Ping_Statistic;
class Packet_Fair_Pvp_Ping_Statistic;
class Packet_Party_Result_Statistic;
class Packet_Abnormal_Exit_Statistic;
class Packet_Udp_Characteristic;
class FrameLagStruct;

class CServerHandler;
class CApplication;

// ---- CCubeStatistic：0x18 ----
class CCubeStatistic
{
public:
    CCubeStatistic();
    ~CCubeStatistic();
    void addStatisticData(Packet_Cube_Statistic* pkt);
    void sendStatisticData(CServerHandler* handler);
    void printStatisticData();
    void resetStatisticData();
    std::map<STCubeStatisticKey, int> m_data;
};

// ---- WongWork::CGMAccounts ----
namespace WongWork
{
class CGMAccounts
{
public:
    struct stGMInfo_t
    {
        bool operator==(const stGMInfo_t& other) const;
        unsigned int m_field0;
        unsigned char m_field1;
    };
    void LoadGmList(unsigned int group, int index);
    void clearGmList();
    void AppendGM_Sys(unsigned int id, char flag);
    void loadGMAccounts(const char* path);
    int isGM(unsigned int id);
    void appendGM(unsigned int id, unsigned int value);
    void removeGM(unsigned int id, unsigned int value);
    stGMInfo_t getGMInfo(unsigned int id) const;
    std::list<stGMInfo_t> m_list;
};
}

// ---- CScheduler：0x8 ----
class CScheduler
{
public:
    CScheduler();
    ~CScheduler();
    void SetSpecialHour(int hour);
    void SetSpecialDayHour(int day, int hour);
    int IsOnTimeSpecialHour(int hour, int min);
    int IsOnTimeSpecialDayHour(int day, int hour, int min);
    char m_day;      // +0
    char m_min;      // +1
    char m_hour;     // +2
    char m_sec;      // +3
    unsigned short m_week;  // +4
    char m_flag1;    // +6
    char m_flag2;    // +7
};

bool CheckDailyScheduleTimeOver(int hour, long t);
int CheckDayHourScheduleTimeOver(int day, int hour, long t);

// ---- CHWSpecResearcher：0x6C ----
class CHWSpecResearcher
{
public:
    CHWSpecResearcher();
    ~CHWSpecResearcher();
    void DBSaveProcess(CServerHandler* handler);
    void ResetErrorSpec();
    void SendDBMWHWSpec(CServerHandler* handler, unsigned char param);
    void WriteSpecStatics(unsigned char param, const HWSpec& spec);
    void SendDBMWErrorLine(CServerHandler* handler);
    void WriteErrorLineStatics(unsigned short param, int value);
    void ResetSpec();
    std::map<STSpecStatic, unsigned int> m_spec[3];      // +0x0/0x18/0x30
    char m_field48;                                      // +0x48
    int m_field4c;                                       // +0x4c
    std::map<STErrorStatic, unsigned int> m_errorSpec;   // +0x50
    char m_field68;                                      // +0x68
};

// ---- FrameLagCollector：0x1E8 ----
class FrameLagCollector
{
public:
    class UsedMemoryStruct
    {
    public:
        void init();
        void SetUsedMemory(char idx, short value);
        int m_counts[6];   // +0
        int m_sums[6];     // +0x18
    };
    class DirectxVersionStruct
    {
    public:
        void init();
        void add_cnt(unsigned int version);
        int m_data[8];     // +0（0x20）
    };
    class FrameLagDataStruct
    {
    public:
        FrameLagDataStruct();
        void init();
        char m_data[0x24c];  // +0（实际大小 0x24c，map 节点 0x25c）
    };
    class MonitoringSpecCase
    {
    public:
        char m_data[0x28];  // +0（实际大小 0x28，map 节点 0x34）
    };

    FrameLagCollector();
    ~FrameLagCollector();
    void ReLoadSpec(CServerHandler* handler);
    void RenewToday();
    void SaveUsedMemory(CServerHandler* handler);
    int SaveDailyBadSpec(CServerHandler* handler);
    int SaveFrameLagData(CServerHandler* handler);
    int GetCollectInterval();
    int PushOneFrameLagData(Packet_Frame_Lag_Statistic_Add* pkt);
    int CollectIntervalCheck(Packet_Frame_Lag_Collect_Interval_Check* pkt);
    int PopMonitoringSpecData(Packet_Frame_Lag_Spec_Delete_Notify* pkt);
    int PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Load_Spec* pkt);
    int PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Reload_Spec* pkt);
    int is_valid_statistic_packet(Packet_Frame_Lag_Statistic_Add* pkt);
    int SaveCollectedDirectxVersion(CServerHandler* handler);
    bool Init();
    void LoadSpec(CServerHandler* handler);
    void accFrameLagStruct(FrameLagDataStruct& data, FrameLagStruct* pkt);

    int m_field0;                       // +0
    int m_field4;                       // +4
    int m_field8;                       // +8
    int m_fieldc;                       // +0xc
    int m_field10;                      // +0x10
    int m_field14;                      // +0x14
    char m_field18;                     // +0x18
    char m_field19;                     // +0x19
    std::map<int, char> m_map1c;        // +0x1c
    std::map<int, char> m_map34;        // +0x34
    int m_field4c;                      // +0x4c
    int m_field50;                      // +0x50
    std::map<int, MonitoringSpecCase> m_monitor;  // +0x54
    int m_field6c;                      // +0x6c
    std::map<int, FrameLagDataStruct> m_data;     // +0x70
    int m_collectInterval;              // +0x88
    int m_field8c;                      // +0x8c
    int m_field90;                      // +0x90
    int m_field94;                      // +0x94
    int m_today;                        // +0x98
    int m_field9c;                      // +0x9c
    int m_renewCnt;                     // +0xa0
    DirectxVersionStruct m_directx;     // +0xa4
    UsedMemoryStruct m_memory[6];       // +0xc4
    int m_field1e4;                     // +0x1e4
};

// ---- UdpCharacteristic：0x2C ----
class UdpCharacteristic
{
public:
    UdpCharacteristic();
    ~UdpCharacteristic();
    void PushPvpPingData(Packet_Pvp_Ping_Statistic* pkt);
    void PushPartyPingData(Packet_Party_Ping_Statistic* pkt);
    void PushFairPvpPingData(Packet_Fair_Pvp_Ping_Statistic* pkt);
    void PushPartyResultData(Packet_Party_Result_Statistic* pkt);
    void PushAbnormalExitData(Packet_Abnormal_Exit_Statistic* pkt);
    void InitUdpCharacteristicData();
    void SaveUdpCharacteristicData(CServerHandler* handler, int interval);
    char m_data[0x2c];
};

// ---- StatisticManager（布局见 ctor 反编译）----
class StatisticManager
{
public:
    StatisticManager();
    ~StatisticManager();
    void DBSaveProcess(CServerHandler* handler);
    void* getCubeStatisticObject();
    void ResetPartyMap();
    void ResetPartyJobMap();
    void ResetPartyCharacMap();
    void ResetBloodDungeon();
    void ResetP2PStatistic();
    void ResetFatigueBattery();
    void ResetValueStatistic();
    void ResetServerMatchData();
    void ResetTowerOfDespair();
    void ResetAssertManagerMap();
    void ResetCreateEmblemInfo();
    void ResetPacketOverflowMap();
    void ResetDeathTowerValueMap();
    void ResetRandomboxStatistic();
    void ResetSecretShopStatistic();
    void ResetCirculationStatistic();
    void ResetTingUserTimeCheckMap();
    void ResetUserTIngTimeCheckMap();
    void ResetGoldcardEventStatistic();
    void ResetReasonCrashDownInfoMap();
    void ResetDisjointAvatarInfoTotal();
    void ResetDeathTowerPlayDataJobMap();
    void ResetDeathTowerPlayDataPartyMap();
    void ResetHellPartyStatisticItemMap();
    void SendDBPartyStatistic(CServerHandler* handler);
    void SendDBPartyJobStatistic(CServerHandler* handler);
    void SendDBPartyCharacStatistic(CServerHandler* handler);
    void SendDBValueStatistic(CServerHandler* handler);
    void SendDBCirculationStatistic(CServerHandler* handler);
    void SendDBSecretShopStatistic(CServerHandler* handler);
    void SendDBGoldcardEventStatistic(CServerHandler* handler);
    void SendDBTowerOfDespairStatistic(CServerHandler* handler);
    void SendDBDisjointAvatarInfoTotal(CServerHandler* handler);
    void SendDBP2PStatistic(CServerHandler* handler);
    void SendDBFatigueBattery(CServerHandler* handler);
    void SendDBBloodDungeonStatistic(CServerHandler* handler);
    void SendDBHellPartyStatisticItem(CServerHandler* handler);
    void SendDBPacketOverflowStatistic(CServerHandler* handler);
    void SendDBDeathTowerValueStatistic(CServerHandler* handler);
    void SendDBDeathTowerPlayDataJobStatistic(CServerHandler* handler);
    void SendDBDeathTowerPlayDataPartyStatistic(CServerHandler* handler);
    void SendDBAssertManagerStatistic(CServerHandler* handler);
    void SendDBCreateEmblemInfo(CServerHandler* handler);
    void SendDBLoadingTimeReport(CServerHandler* handler);
    void SendDBRandomboxStatistic(CServerHandler* handler);
    void SendDBUserTingTimeCheckStatistic(CServerHandler* handler);
    void SendDBPowerwarLagReport(CServerHandler* handler);
    void SendDBTingUserTimeCheck(CServerHandler* handler);
    void SendDBPowerwarLoadingTimeReport(CServerHandler* handler);
    void SendDBServerMatchData(CServerHandler* handler);
    void SendDBLagStatistics(CServerHandler* handler, char* data);
    void AddMoneyLog(MoneyLogPacket* pkt, CServerHandler* handler);
    void AddP2PStatistic(Packet_P2P_Statistics* pkt);
    void AddLagStatistics(Packet_Stat_Lag_Statistics* pkt);
    void AddServerMatchData(Packet_Server_Match_data* pkt);
    void AddValueStatistics(Packet_Value_Statistic* pkt);
    void AddCreateEmblemInfo(Packet_Emblem_Create_Statistic* pkt);
    void AddCompatibilityIndex(Packet_Stat_Compatibility_Index* pkt, CServerHandler* handler);
    void AddDisjointAvatarInfo(Packet_Avater_Disjoint_Statistic* pkt);
    void AddRandomboxStatistic(Packet_Randombox_statistic* pkt);
    void AddReasonCrashDownData(Packet_Reason_Crash_Down_Info* pkt, CServerHandler* handler);
    void AddSecretShopStatistic(Packet_Secret_Shop_Statistic* pkt);
    void AddUserCountStatistics(CServerHandler* handler, Packet_User_Count_Statistic* pkt);
    void AddCirculationStatistics(Packet_Circulation_Statistic* pkt);
    void AddBloodDungeonStatistics(Packet_Blood_dungeon_statistic* pkt);
    void AddGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_GTS* pkt);
    void AddTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_GTS* pkt);
    void WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party* pkt);
    void AddFatigueBatteryStatistics(Packet_Fatigue_Battery_Money_Statistic* pkt);
    void WriteAssertManagerStatistic(Packet_Assert_Manager_Info* pkt);
    void WriteHellPartyStatisticItem(Packet_HellParty_Statistic_Item* pkt);
    void WritePacketOverflowStatistic(Packet_Overflow_Statistic_Add* pkt);
    void WriteDeathTowerValueStatistic(Packet_DeathTower_Statistic_Value* pkt);
    void WriteDungeonPartyJobStatistic(Packet_Dungeon_Statistic_Party_Job* pkt);
    void AddLoadingTimeReportStatistics(Packet_Loading_Time_Report_Statistics* pkt);
    void WriteUserTingTImeCheckStatistic(Packet_User_Ting_TimeCheck_Statistic_Add* pkt);
    void WriteDungeonPartyCharacStatistic(Packet_Dungeon_Statistic_Party_Charac* pkt);
    void WriteDeathTowerPlayDataJobStatistic(Packet_DeathTower_Statistic_Playdata_Job* pkt);
    void WriteDeathTowerPlayDataPartyStatistic(Packet_DeathTower_Statistic_Playdata_Party* pkt);
    void avgPing(int& a, int& b, short& c);
    void maxPing(short& a, short& b);
    void minPing(short& a, short& b);
    void sumPing(int& a, short& b, int& c);
    void AMDecrypt(void* data, unsigned int len);
    std::set<unsigned int> m_serverList;   // +0
    CCubeStatistic m_cube;                 // +0x18
    char m_flag;                           // +0x30
    unsigned int m_field34;                // +0x34
    std::map<STPartyStatisticKey, PartyStatistic> m_party;          // +0x38
    std::map<STPartyJobStatisticKey, PartyJobStatistic> m_partyJob; // +0x50
    std::map<STPartyCharacKey, PartyCharacStatistic> m_partyCharac; // +0x68
    std::map<STDeathTowerValueStatisticKey, ValueStatistic> m_deathTowerValue; // +0x80
    std::map<STDeathTowerPlayDataJobStatisticKey, PlayDataJobStatistic>
        m_deathTowerJob;                   // +0x98
    std::map<STDeathTowerPlayDataPartyStatisticKey, PlayDataPartyStatistic>
        m_deathTowerParty;                 // +0xb0
    std::map<STPacketOverflowKey, int> m_packetOverflow;   // +0xc8
    std::map<STAssertManagerKey, int> m_assertManager;     // +0xe0
    std::map<STUserTingTimeCheckKey, int> m_userTing;      // +0xf8
    std::map<unsigned int, int> m_field110;                // +0x110
    std::map<STHellPartyStatisticItemKey, HellPartyItenmData> m_hellParty; // +0x128
    LoadingTimeReport m_loading;           // +0x140
    std::map<STPowerwarFightLoadingKey, STPowerwarFightLoadingData> m_pwLoading; // +0x188
    std::map<STPowerwarFightLagKey, STPowerwarFightLagData> m_pwLag;  // +0x1a0
    std::map<unsigned char, STFatigueBattery> m_fatigue;   // +0x1b8
    std::map<unsigned int, STBloodDungeonStatistic> m_blood;  // +0x1d0
    stDisjointAvatarInfoTotal m_disjoint;  // +0x1e8
    stCreateEmblemStatistic m_createEmblem; // +0x32c
    char m_randombox[0x28];                // +0x348
    STModuleLagStatistics m_modules[8];    // +0x370
    std::map<unsigned short, STDungeonLagStatistics> m_dungeonLag;  // +0x3f0
    std::map<int, ValueStatisticData> m_value;       // +0x408
    std::map<int, CirculationStatisticData> m_circ;  // +0x420
    char m_serverMatch[0xc];               // +0x438
    std::map<int, SECRET_SHOP_STATISTIC_DATA> m_secretShop[3];  // +0x444
    GoldCardEventStatistic m_goldcard[0x63];         // +0x48c
    TowerOfDespairStatistic_Value m_tower[101];      // +0x807
    stP2PStatistics m_p2p;                           // +0xb30
    std::map<STReasonCrashDownKey, unsigned int> m_reasonCrash;  // +0xb78
};

#endif // STATICS_STATISTIC_H_
