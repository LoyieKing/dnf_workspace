// df_statics_r — 统计类（骨架，待按反编译逐方法补全）
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "StaticsStatistic.h"
#include "DNFFileLog.h"
#include "PacketHeader.h"
#include "StaticsProxy.h"
#include "StaticsServer.h"

namespace global_function
{
void SendPacketToDbmw(char* data, int len)
{
}
}

namespace statistc_proxy
{
void (*StatisticProxy::sendPacketFunctionPointer)(char*, int) = 0;

Field::Field()
{
}

Field::~Field()
{
}

char* Field::getFieldName()
{
    return 0;
}

char* Field::getFieldValue()
{
    return 0;
}

char* Field::getUpdateValue()
{
    return 0;
}

void Field::updateDatabase(const char* table, const std::string& key, const std::string& cond)
{
}

void Field::MakeInsertQuery(char* out, const char* table, const std::string& key,
                            const std::string& cond)
{
}

void Field::MakeUpdateQuery(char* out, const char* table, const std::string& key,
                            const std::string& cond)
{
}

void Field::getUpdateCondition(const std::string& key, const std::string& cond)
{
}

void Field::add(const char* name, unsigned int value)
{
}

void Field::reset()
{
}

Table::Table()
{
}

Table::~Table()
{
}

void Table::resetValue()
{
}

void Table::updateDatabase(const char* table)
{
}

void Table::add(const char* name, unsigned int value, const char* key)
{
}

void Table::reset()
{
}

void Table::setKey(const char* key)
{
}

StatisticProxy::StatisticProxy()
{
}

StatisticProxy::~StatisticProxy()
{
}

void StatisticProxy::resetTable()
{
}

void StatisticProxy::registTable(const char* name, Table& table)
{
}

void StatisticProxy::updateDatabase()
{
}

void StatisticProxy::add(const char* table, unsigned int value, const char* key,
                         const char* cond)
{
}

void initialize()
{
}

void addStatisticProxy(void* packet)
{
}

void resetStatisticProxy()
{
}

void sendDBStatisticProxy()
{
}
}

statistc_proxy::StatisticProxy* getStatisticProxy()
{
    static statistc_proxy::StatisticProxy statisticProxy;
    return &statisticProxy;
}

CScheduler::CScheduler()
{
    m_day = 0xff;
    m_min = 0xff;
    m_hour = 0xff;
    m_sec = 0xff;
    m_week = 0xffff;
    m_flag1 = 0xff;
    m_flag2 = 0xff;
}

CScheduler::~CScheduler()
{
}

void CScheduler::SetSpecialHour(int hour)
{
    m_hour = (char)hour;
    m_min = 0;
}

void CScheduler::SetSpecialDayHour(int day, int hour)
{
    m_hour = (char)hour;
    m_day = (char)day;
    m_min = 0;
}

int CScheduler::IsOnTimeSpecialHour(int hour, int min)
{
    if ((char)m_hour == hour && (char)m_min == min)
    {
        return 1;
    }
    return 0;
}

int CScheduler::IsOnTimeSpecialDayHour(int day, int hour, int min)
{
    if ((char)m_day == day && (char)m_hour == hour && (char)m_min == min)
    {
        return 1;
    }
    return 0;
}

bool CheckDailyScheduleTimeOver(int hour, long t)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    tm local;
    local.tm_mday = pt->tm_mday;
    local.tm_mon = pt->tm_mon;
    local.tm_year = pt->tm_year;
    local.tm_wday = pt->tm_wday;
    local.tm_yday = pt->tm_yday;
    local.tm_isdst = pt->tm_isdst;
    local.tm_gmtoff = pt->tm_gmtoff;
    local.tm_zone = pt->tm_zone;
    local.tm_hour = hour;
    local.tm_min = 0;
    local.tm_sec = 0;
    long lt = mktime(&local);
    if (pt->tm_hour < hour)
    {
        lt -= 0x15180;
    }
    return t < lt;
}

int CheckDayHourScheduleTimeOver(int day, int hour, long t)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    tm local;
    local.tm_mday = pt->tm_mday;
    local.tm_mon = pt->tm_mon;
    local.tm_year = pt->tm_year;
    local.tm_wday = pt->tm_wday;
    local.tm_yday = pt->tm_yday;
    local.tm_isdst = pt->tm_isdst;
    local.tm_gmtoff = pt->tm_gmtoff;
    local.tm_zone = pt->tm_zone;
    local.tm_hour = hour;
    local.tm_min = 0;
    local.tm_sec = 0;
    long lt = mktime(&local);
    if (pt->tm_hour < hour)
    {
        lt -= 0x15180;
    }
    lt += (1 - day) * 0x15180;
    return t < lt;
}

bool SetNonBlock(int fd)
{
    unsigned int flags = fcntl(fd, 3, 0);
    int r = fcntl(fd, 4, flags | 0x800);
    return -1 < r;
}

unsigned int get_rand_int(int range)
{
    if (range < 0)
    {
        return 0;
    }
    if (range == 0)
    {
        return rand();
    }
    int r = rand();
    if (range < r)
    {
        r = rand();
        return (unsigned int)(r % range);
    }
    r = r * 0x41c64e6d + 0x3039;
    int r1 = r * 0x41c64e6d + 0x3039;
    int r2 = r1 * 0x41c64e6d + 0x3039;
    unsigned int v = ((((r >> 16) & 0x7ff) << 10) ^ ((r1 >> 16) & 0x3ff)) << 10 ^
                     ((r2 >> 16) & 0x3ff);
    if ((unsigned int)range < v)
    {
        v = v % (unsigned int)range;
    }
    return v;
}

CHWSpecResearcher::CHWSpecResearcher()
{
}

CHWSpecResearcher::~CHWSpecResearcher()
{
}

void CHWSpecResearcher::DBSaveProcess(CServerHandler* handler)
{
}

void CHWSpecResearcher::ResetErrorSpec()
{
}

void CHWSpecResearcher::SendDBMWHWSpec(CServerHandler* handler, unsigned char param)
{
}

void CHWSpecResearcher::WriteSpecStatics(unsigned char param, const void* spec)
{
}

void CHWSpecResearcher::SendDBMWErrorLine(CServerHandler* handler)
{
}

void CHWSpecResearcher::WriteErrorLineStatics(unsigned short param, int value)
{
}

void CHWSpecResearcher::ResetSpec()
{
}

FrameLagCollector::FrameLagCollector()
{
}

FrameLagCollector::~FrameLagCollector()
{
}

void FrameLagCollector::ReLoadSpec(CServerHandler* handler)
{
}

void FrameLagCollector::RenewToday()
{
}

void FrameLagCollector::SaveUsedMemory(CServerHandler* handler)
{
}

void FrameLagCollector::SaveDailyBadSpec(CServerHandler* handler)
{
}

void FrameLagCollector::SaveFrameLagData(CServerHandler* handler)
{
}

int FrameLagCollector::GetCollectInterval()
{
    return 0;
}

void FrameLagCollector::PushOneFrameLagData(void* pkt)
{
}

void FrameLagCollector::CollectIntervalCheck(void* pkt)
{
}

void FrameLagCollector::PopMonitoringSpecData(void* pkt)
{
}

void FrameLagCollector::PushMonitoringSpecData(void* pkt)
{
}

void FrameLagCollector::is_valid_statistic_packet(void* pkt)
{
}

void FrameLagCollector::SaveCollectedDirectxVersion(CServerHandler* handler)
{
}

void FrameLagCollector::Init()
{
}

void FrameLagCollector::LoadSpec(CServerHandler* handler)
{
}

UdpCharacteristic::UdpCharacteristic()
{
}

UdpCharacteristic::~UdpCharacteristic()
{
}

void UdpCharacteristic::PushPvpPingData(void* pkt)
{
}

void UdpCharacteristic::PushPartyPingData(void* pkt)
{
}

void UdpCharacteristic::PushFairPvpPingData(void* pkt)
{
}

void UdpCharacteristic::PushPartyResultData(void* pkt)
{
}

void UdpCharacteristic::PushAbnormalExitData(void* pkt)
{
}

void UdpCharacteristic::InitUdpCharacteristicData()
{
}

void UdpCharacteristic::SaveUdpCharacteristicData(CServerHandler* handler, int interval)
{
}

StatisticManager::StatisticManager()
{
}

StatisticManager::~StatisticManager()
{
}

void StatisticManager::DBSaveProcess(CServerHandler* handler)
{
}

#define STUB_STAT(name, args) void StatisticManager::name args {}

void StatisticManager::ResetPartyMap()
{
    m_party.clear();
}

void StatisticManager::ResetPartyJobMap()
{
    m_partyJob.clear();
}

void StatisticManager::ResetPartyCharacMap()
{
    m_partyCharac.clear();
}

void StatisticManager::ResetDeathTowerValueMap()
{
    m_deathTowerValue.clear();
}

void StatisticManager::ResetDeathTowerPlayDataJobMap()
{
    m_deathTowerJob.clear();
}

void StatisticManager::ResetDeathTowerPlayDataPartyMap()
{
    m_deathTowerParty.clear();
}

void StatisticManager::ResetPacketOverflowMap()
{
    m_packetOverflow.clear();
}

void StatisticManager::ResetHellPartyStatisticItemMap()
{
    m_hellParty.clear();
}

void StatisticManager::ResetAssertManagerMap()
{
    m_assertManager.clear();
}

void StatisticManager::ResetTingUserTimeCheckMap()
{
    m_userTing.clear();
}

void StatisticManager::ResetUserTIngTimeCheckMap()
{
    m_userTing.clear();
}

void StatisticManager::ResetFatigueBattery()
{
    m_fatigue.clear();
}

void StatisticManager::ResetBloodDungeon()
{
    m_blood.clear();
}

void StatisticManager::ResetReasonCrashDownInfoMap()
{
    m_reasonCrash.clear();
}

void StatisticManager::ResetRandomboxStatistic()
{
    for (int i = 0; i < 5; i++)
    {
        *(unsigned int*)((char*)this + (i + 0xd0) * 4 + 8) = 0;
        *(unsigned int*)((char*)this + (i + 0xd4) * 4 + 0xc) = 0;
    }
}

void StatisticManager::ResetValueStatistic()
{
    m_value.clear();
}

void StatisticManager::ResetCirculationStatistic()
{
    m_circ.clear();
}

void StatisticManager::ResetServerMatchData()
{
    *(unsigned int*)((char*)this + 0x438) = 0;
    *(unsigned int*)((char*)this + 0x43c) = 0;
    *(unsigned int*)((char*)this + 0x440) = 0;
}

void StatisticManager::ResetSecretShopStatistic()
{
    for (int i = 0; i < 3; i++)
    {
        m_secretShop[i].clear();
    }
}

void StatisticManager::ResetGoldcardEventStatistic()
{
    memset(m_goldcard, 0, 0x37b);
}

void StatisticManager::ResetTowerOfDespair()
{
    CMyFileLog log("ResetTowerOfDespair", 0x83c);
    log("./log/statistic", "TOD reset");
    memset(m_tower, 0, 0x328);
    m_serverList.clear();
}

void StatisticManager::ResetP2PStatistic()
{
    m_p2p.Init();
}

void StatisticManager::ResetCreateEmblemInfo()
{
    m_createEmblem.clear();
}

void StatisticManager::ResetDisjointAvatarInfoTotal()
{
    m_disjoint.clear();
}
STUB_STAT(SendDBPartyStatistic, (CServerHandler*))
STUB_STAT(SendDBPartyJobStatistic, (CServerHandler*))
STUB_STAT(SendDBPartyCharacStatistic, (CServerHandler*))
STUB_STAT(SendDBValueStatistic, (CServerHandler*))
STUB_STAT(SendDBCirculationStatistic, (CServerHandler*))
STUB_STAT(SendDBSecretShopStatistic, (CServerHandler*))
STUB_STAT(SendDBGoldcardEventStatistic, (CServerHandler*))
STUB_STAT(SendDBTowerOfDespairStatistic, (CServerHandler*))
STUB_STAT(SendDBDisjointAvatarInfoTotal, (CServerHandler*))
STUB_STAT(SendDBP2PStatistic, (CServerHandler*))
STUB_STAT(SendDBFatigueBattery, (CServerHandler*))
STUB_STAT(SendDBBloodDungeonStatistic, (CServerHandler*))
STUB_STAT(SendDBHellPartyStatisticItem, (CServerHandler*))
STUB_STAT(SendDBPacketOverflowStatistic, (CServerHandler*))
STUB_STAT(SendDBDeathTowerValueStatistic, (CServerHandler*))
STUB_STAT(SendDBDeathTowerPlayDataJobStatistic, (CServerHandler*))
STUB_STAT(SendDBDeathTowerPlayDataPartyStatistic, (CServerHandler*))
STUB_STAT(SendDBAssertManagerStatistic, (CServerHandler*))
STUB_STAT(SendDBCreateEmblemInfo, (CServerHandler*))
STUB_STAT(SendDBLoadingTimeReport, (CServerHandler*))
STUB_STAT(SendDBRandomboxStatistic, (CServerHandler*))
STUB_STAT(SendDBUserTingTimeCheckStatistic, (CServerHandler*))
STUB_STAT(SendDBPowerwarLagReport, (CServerHandler*))
STUB_STAT(SendDBTingUserTimeCheck, (CServerHandler*))
STUB_STAT(SendDBPowerwarLoadingTimeReport, (CServerHandler*))
STUB_STAT(SendDBServerMatchData, (CServerHandler*))
STUB_STAT(SendDBLagStatistics, (CServerHandler*, char*))
STUB_STAT(AddMoneyLog, (MoneyLogPacket*, CServerHandler*))
STUB_STAT(AddP2PStatistic, (Packet_P2P_Statistics*))
STUB_STAT(AddLagStatistics, (Packet_Stat_Lag_Statistics*))
STUB_STAT(AddValueStatistics, (Packet_Value_Statistic*))
STUB_STAT(AddReasonCrashDownData, (Packet_Reason_Crash_Down_Info*, CServerHandler*))
STUB_STAT(AddSecretShopStatistic, (Packet_Secret_Shop_Statistic*))
STUB_STAT(AddCirculationStatistics, (Packet_Circulation_Statistic*))
STUB_STAT(AddBloodDungeonStatistics, (Packet_Blood_dungeon_statistic*))
STUB_STAT(AddGoldcardEventStatistic, (Packet_Goldcard_Event_Statistic_GTS*))
STUB_STAT(AddTowerOfDespairStatistic, (Packet_TowerOfDespair_Statistic_GTS*))
STUB_STAT(WriteDungeonPartyStatistic, (Packet_Dungeon_Statistic_Party*))
STUB_STAT(AddFatigueBatteryStatistics, (Packet_Fatigue_Battery_Money_Statistic*))
STUB_STAT(WriteAssertManagerStatistic, (Packet_Assert_Manager_Info*))
STUB_STAT(WriteHellPartyStatisticItem, (Packet_HellParty_Statistic_Item*))
STUB_STAT(WritePacketOverflowStatistic, (Packet_Overflow_Statistic_Add*))
STUB_STAT(WriteDeathTowerValueStatistic, (Packet_DeathTower_Statistic_Value*))
STUB_STAT(WriteDungeonPartyJobStatistic, (Packet_Dungeon_Statistic_Party_Job*))
STUB_STAT(AddLoadingTimeReportStatistics, (Packet_Loading_Time_Report_Statistics*))
STUB_STAT(WriteUserTingTImeCheckStatistic, (Packet_User_Ting_TimeCheck_Statistic_Add*))
STUB_STAT(WriteDungeonPartyCharacStatistic, (Packet_Dungeon_Statistic_Party_Charac*))
STUB_STAT(WriteDeathTowerPlayDataJobStatistic, (Packet_DeathTower_Statistic_Playdata_Job*))
STUB_STAT(WriteDeathTowerPlayDataPartyStatistic, (Packet_DeathTower_Statistic_Playdata_Party*))

#undef STUB_STAT

CCubeStatistic::CCubeStatistic()
{
}

CCubeStatistic::~CCubeStatistic()
{
}

void CCubeStatistic::addStatisticData(Packet_Cube_Statistic* pkt)
{
}

void CCubeStatistic::sendStatisticData(CServerHandler* handler)
{
}

void CCubeStatistic::printStatisticData()
{
}

void CCubeStatistic::resetStatisticData()
{
}

namespace WongWork
{
bool CGMAccounts::stGMInfo_t::operator==(const stGMInfo_t& other) const
{
    return false;
}

void CGMAccounts::LoadGmList(unsigned int group, int index)
{
}

void CGMAccounts::clearGmList()
{
}

void CGMAccounts::AppendGM_Sys(unsigned int id, char flag)
{
}

void CGMAccounts::loadGMAccounts(const char* path)
{
}

int CGMAccounts::isGM(unsigned int id)
{
    return 0;
}

void CGMAccounts::appendGM(unsigned int id, unsigned int value)
{
}

void CGMAccounts::removeGM(unsigned int id, unsigned int value)
{
}

CGMAccounts::stGMInfo_t CGMAccounts::getGMInfo(unsigned int id) const
{
    stGMInfo_t r = {0, 0};
    return r;
}
}

void* StatisticManager::getCubeStatisticObject()
{
    return &m_cube;
}

void StatisticManager::AddServerMatchData(Packet_Server_Match_data* pkt)
{
    *(int*)((char*)this + 0x438) = (int)(char)*(char*)((char*)pkt + 10);
    *(int*)((char*)this + 0x43c) += (int)(char)*(char*)((char*)pkt + 0xb);
    *(int*)((char*)this + 0x440) += (int)(char)*(char*)((char*)pkt + 0xc);
}

void StatisticManager::AddCompatibilityIndex(Packet_Stat_Compatibility_Index* pkt,
                                             CServerHandler* handler)
{
    if (pkt != 0 && handler != 0)
    {
        handler->SendToDB((PacketHeader*)pkt);
    }
}

void StatisticManager::AddUserCountStatistics(CServerHandler* handler,
                                              Packet_User_Count_Statistic* pkt)
{
    handler->SendToDB((PacketHeader*)pkt);
}

void StatisticManager::AddCreateEmblemInfo(Packet_Emblem_Create_Statistic* pkt)
{
    for (int i = 0; i < *(int*)((char*)pkt + 10); i++)
    {
        for (int j = 0; j < *(int*)((char*)pkt + (i + 8) * 4 + 2); j++)
        {
            m_createEmblem.increaseCount(*(int*)((char*)pkt + i * 4 + 0xe));
        }
    }
}

void StatisticManager::AddDisjointAvatarInfo(Packet_Avater_Disjoint_Statistic* pkt)
{
    int count = *(int*)((char*)pkt + 10);
    if (-1 < count && count < 3)
    {
        for (int i = 0; i < count; i++)
        {
            m_disjoint.incCount(*(int*)((char*)pkt + i * 0xd + 0xe),
                                *(int*)((char*)pkt + i * 0xd + 0x12),
                                (int)(char)*(char*)((char*)pkt + i * 0xd + 0x16),
                                *(int*)((char*)pkt + i * 0xd + 0x17));
        }
    }
}

void StatisticManager::AddRandomboxStatistic(Packet_Randombox_statistic* pkt)
{
    if ((char)*(char*)((char*)pkt + 10) < 5 && -1 < (char)*(char*)((char*)pkt + 10))
    {
        if (*(char*)((char*)pkt + 0xb) == 0)
        {
            *(int*)((char*)this + ((char)*(char*)((char*)pkt + 10) + 0xd0) * 4 + 8) += 1;
        }
        else if (*(char*)((char*)pkt + 0xb) == 1)
        {
            *(int*)((char*)this + ((char)*(char*)((char*)pkt + 10) + 0xd4) * 4 + 0xc) += 1;
        }
    }
}

void StatisticManager::minPing(short& a, short& b)
{
    int bv = (int)b;
    printf("minPing(%d, %d)\n", (int)a, bv);
    if (-1 < b)
    {
        if (b < a)
        {
            a = b;
        }
        printf("minPing Res(%d)\n", (int)a, bv);
    }
}

void StatisticManager::maxPing(short& a, short& b)
{
    int bv = (int)b;
    printf("maxPing(%d, %d)\n", (int)a, bv);
    if (-1 < b)
    {
        if (a < b)
        {
            a = b;
        }
        printf("maxPing Res(%d)\n", (int)a, bv);
    }
}

void StatisticManager::avgPing(int& a, int& b, short& c)
{
    int bv = (int)c;
    int b2 = b;
    printf("avgPing(%d, %d, %d)\n", a, b2, bv);
    double avg;
    if (a == 0 || b == 0)
    {
        avg = 0.0;
    }
    else
    {
        avg = (double)a / (double)b;
    }
    c = (short)(int)(avg + 0.5);
    printf("avgPing Res(%d)\n", (int)c, b2, bv);
}

void StatisticManager::sumPing(int& a, short& b, int& c)
{
    printf("sumPing(%d, %d, %d)\n", a, (int)b, c);
    if (-1 < b)
    {
        if (a + (int)b < 0)
        {
            a = 0x7fffffff;
        }
        else
        {
            a = a + (int)b;
            if (-1 < c + 1)
            {
                c = c + 1;
            }
        }
        printf("sumPing Res(%d, %d, %d)\n", a, (int)b, c);
    }
}

void StatisticManager::AMDecrypt(void* data, unsigned int len)
{
    for (unsigned int i = 0; i < len; i++)
    {
        ((unsigned char*)data)[i] ^= 0x9d;
        ((unsigned char*)data)[i] = ((unsigned char*)data)[i] << 2 |
                                    ((unsigned char*)data)[i] >> 6;
    }
}
