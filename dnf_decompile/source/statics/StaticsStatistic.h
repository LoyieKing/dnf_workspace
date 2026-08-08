#ifndef STATICS_STATISTIC_H_
#define STATICS_STATISTIC_H_

#include <set>
#include <string>
#include <vector>

class CServerHandler;
class CApplication;

// ---- CHWSpecResearcher：0x6C ----
class CHWSpecResearcher
{
public:
    CHWSpecResearcher();
    ~CHWSpecResearcher();
    void DBSaveProcess(CServerHandler* handler);
    void ResetErrorSpec();
    void SendDBMWHWSpec(CServerHandler* handler, unsigned char param);
    void WriteSpecStatics(unsigned char param, const void* spec);
    void SendDBMWErrorLine(CServerHandler* handler);
    void WriteErrorLineStatics(unsigned short param, int value);
    void ResetSpec();
    char m_data[0x6c];
};

// ---- FrameLagCollector：0x1E8 ----
class FrameLagCollector
{
public:
    FrameLagCollector();
    ~FrameLagCollector();
    void ReLoadSpec(CServerHandler* handler);
    void RenewToday();
    void SaveUsedMemory(CServerHandler* handler);
    void SaveDailyBadSpec(CServerHandler* handler);
    void SaveFrameLagData(CServerHandler* handler);
    int GetCollectInterval();
    void PushOneFrameLagData(void* pkt);
    void CollectIntervalCheck(void* pkt);
    void PopMonitoringSpecData(void* pkt);
    void PushMonitoringSpecData(void* pkt);
    void is_valid_statistic_packet(void* pkt);
    void SaveCollectedDirectxVersion(CServerHandler* handler);
    void Init();
    void LoadSpec(CServerHandler* handler);
    char m_data[0x1e8];
};

// ---- UdpCharacteristic：0x2C ----
class UdpCharacteristic
{
public:
    UdpCharacteristic();
    ~UdpCharacteristic();
    void PushPvpPingData(void* pkt);
    void PushPartyPingData(void* pkt);
    void PushFairPvpPingData(void* pkt);
    void PushPartyResultData(void* pkt);
    void PushAbnormalExitData(void* pkt);
    void InitUdpCharacteristicData();
    void SaveUdpCharacteristicData(CServerHandler* handler, int interval);
    char m_data[0x2c];
};

// ---- StatisticManager ----
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
    char m_data[0xb90];
};

#endif // STATICS_STATISTIC_H_
