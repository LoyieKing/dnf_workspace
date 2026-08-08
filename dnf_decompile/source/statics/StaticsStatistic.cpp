// df_statics_r — 统计类（骨架，待按反编译逐方法补全）
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "StaticsStatistic.h"
#include "DNFFileLog.h"
#include "PacketHeader.h"
#include "StaticsPacket.h"
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
STUB_STAT(SendDBValueStatistic, (CServerHandler*))
STUB_STAT(SendDBCirculationStatistic, (CServerHandler*))
STUB_STAT(SendDBSecretShopStatistic, (CServerHandler*))
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
STUB_STAT(AddLagStatistics, (Packet_Stat_Lag_Statistics*))
STUB_STAT(WriteAssertManagerStatistic, (Packet_Assert_Manager_Info*))
STUB_STAT(AddLoadingTimeReportStatistics, (Packet_Loading_Time_Report_Statistics*))

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

void StatisticManager::DBSaveProcess(CServerHandler* handler)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    int min = pt->tm_min;
    int hour = pt->tm_hour;
    int mday = pt->tm_mday;
    int mon = pt->tm_mon;
    int year = pt->tm_year;
    printf("---Time : %d, %d ----\n", hour, min);
    char ts[20];
    snprintf(ts, 0x13, "%d-%d-%d %d:%d:0", year + 0x76c, mon + 1, mday, hour, min);
    SendDBP2PStatistic(handler);
    ResetP2PStatistic();
    if (hour == 5 && min == 0)
    {
        SendDBHellPartyStatisticItem(handler);
        ResetHellPartyStatisticItemMap();
    }
    if (hour == 5 && min == 0)
    {
        SendDBFatigueBattery(handler);
        ResetFatigueBattery();
    }
    if (hour == 5 && min == 0)
    {
        SendDBDisjointAvatarInfoTotal(handler);
        ResetDisjointAvatarInfoTotal();
    }
    if (hour == 5 && min == 0)
    {
        SendDBCreateEmblemInfo(handler);
        ResetCreateEmblemInfo();
    }
    if (hour == 5 && min == 0)
    {
        SendDBRandomboxStatistic(handler);
        ResetRandomboxStatistic();
    }
    SendDBTingUserTimeCheck(handler);
    ResetTingUserTimeCheckMap();
    SendDBPowerwarLoadingTimeReport(handler);
    SendDBPowerwarLagReport(handler);
    if (min % 10 == 0)
    {
        SendDBServerMatchData(handler);
        ResetServerMatchData();
    }
    if (min == 0 || min == 0x1e)
    {
        snprintf(ts, 0x13, "%d-%d-%d %d:%d:0", year + 0x76c, mon + 1, mday, hour, min);
        SendDBPacketOverflowStatistic(handler);
        ResetPacketOverflowMap();
        SendDBAssertManagerStatistic(handler);
        ResetAssertManagerMap();
        SendDBUserTingTimeCheckStatistic(handler);
        ResetUserTIngTimeCheckMap();
        SendDBLagStatistics(handler, ts);
        statistc_proxy::sendDBStatisticProxy();
        statistc_proxy::resetStatisticProxy();
    }
    if (hour % 3 == 0 && min == 0)
    {
        SendDBLoadingTimeReport(handler);
    }
    if (hour == 5)
    {
        if (min == 10)
        {
            SendDBPartyStatistic(handler);
            ResetPartyMap();
        }
        if (min == 0xf)
        {
            SendDBPartyJobStatistic(handler);
            ResetPartyJobMap();
        }
        if (min == 0x14)
        {
            SendDBPartyCharacStatistic(handler);
            ResetPartyCharacMap();
        }
        if (min == 0x19)
        {
            SendDBDeathTowerValueStatistic(handler);
            ResetDeathTowerValueMap();
        }
        if (min == 0x1e)
        {
            SendDBDeathTowerPlayDataJobStatistic(handler);
            ResetDeathTowerPlayDataJobMap();
        }
        if (min == 0x23)
        {
            SendDBDeathTowerPlayDataPartyStatistic(handler);
            ResetDeathTowerPlayDataPartyMap();
        }
        if (min == 0x28)
        {
            SendDBBloodDungeonStatistic(handler);
            ResetBloodDungeon();
        }
        if (min == 0x2d)
        {
            SendDBValueStatistic(handler);
            ResetValueStatistic();
        }
        if (min == 0x32)
        {
            SendDBCirculationStatistic(handler);
            ResetCirculationStatistic();
        }
    }
    if (hour == 6 && min == 0)
    {
        SendDBSecretShopStatistic(handler);
        ResetSecretShopStatistic();
    }
    if (hour == 6 && min == 0)
    {
        SendDBTowerOfDespairStatistic(handler);
        ResetTowerOfDespair();
    }
    if (hour == 5 && min == 0)
    {
        SendDBGoldcardEventStatistic(handler);
        ResetGoldcardEventStatistic();
    }
    if (hour == 6)
    {
        CCubeStatistic* cube = (CCubeStatistic*)getCubeStatisticObject();
        cube->sendStatisticData(handler);
        cube = (CCubeStatistic*)getCubeStatisticObject();
        cube->resetStatisticData();
    }
}

void StatisticManager::WritePacketOverflowStatistic(Packet_Overflow_Statistic_Add* pkt)
{
    STPacketOverflowKey key;
    key.m_field0 = *(char*)((char*)pkt + 10);
    key.m_field2 = *(unsigned short*)((char*)pkt + 0xb);
    std::map<STPacketOverflowKey, int>::iterator it = m_packetOverflow.find(key);
    bool isNew = (m_packetOverflow.empty() || it == m_packetOverflow.end());
    if (isNew)
    {
        m_packetOverflow.insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}

void StatisticManager::WriteDungeonPartyStatistic(Packet_Dungeon_Statistic_Party* pkt)
{
    STPartyStatisticKey key;
    key.m_field0 = 0;
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xc);
    key.m_field8 = *(char*)((char*)pkt + 0x10);
    key.m_field9 = *(char*)((char*)pkt + 0x11);
    key.m_fielda = *(char*)((char*)pkt + 0x12);
    key.m_fieldb = *(char*)((char*)pkt + 0x13);
    key.m_fieldc = *(char*)((char*)pkt + 0x14);
    key.m_fieldd = *(char*)((char*)pkt + 0x15);
    PartyStatistic value;
    value.m_data[0] = *(int*)((char*)pkt + 0x16);
    value.m_data[1] = *(int*)((char*)pkt + 0x1a);
    value.m_data[2] = *(int*)((char*)pkt + 0x1e);
    value.m_data[3] = *(int*)((char*)pkt + 0x22);
    value.m_data[4] = *(int*)((char*)pkt + 0x26);
    value.m_data[5] = *(int*)((char*)pkt + 0x2a);
    value.m_data[6] = *(int*)((char*)pkt + 0x2e);
    value.m_data[7] = *(int*)((char*)pkt + 0x32);
    value.m_data[8] = *(int*)((char*)pkt + 0x36);
    value.m_data[9] = *(int*)((char*)pkt + 0x3a);
    value.m_data[10] = 0;
    value.m_data[11] = (int)*(short*)((char*)pkt + 0x3e);
    std::map<STPartyStatisticKey, PartyStatistic>::iterator it = m_party.find(key);
    bool isNew = (m_party.empty() || it == m_party.end());
    if (isNew)
    {
        m_party.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::AddP2PStatistic(Packet_P2P_Statistics* pkt)
{
    *(int*)((char*)&m_p2p + 0) += *(int*)((char*)pkt + 10);
    *(int*)((char*)&m_p2p + 4) += *(int*)((char*)pkt + 0xe);
    *(char*)((char*)&m_p2p + 8) = *(char*)((char*)pkt + 0x12);
    minPing(*(short*)((char*)&m_p2p + 0xa), *(short*)((char*)pkt + 0x13));
    maxPing(*(short*)((char*)&m_p2p + 0xc), *(short*)((char*)pkt + 0x15));
    sumPing(*(int*)((char*)&m_p2p + 0x10), *(short*)((char*)pkt + 0x17),
            *(int*)((char*)&m_p2p + 0x14));
    *(int*)((char*)&m_p2p + 0x18) += *(int*)((char*)pkt + 0x19);
    *(int*)((char*)&m_p2p + 0x1c) += *(int*)((char*)pkt + 0x1d);
    *(int*)((char*)&m_p2p + 0x20) += *(int*)((char*)pkt + 0x21);
    *(int*)((char*)&m_p2p + 0x24) += *(int*)((char*)pkt + 0x25);
    minPing(*(short*)((char*)&m_p2p + 0x28), *(short*)((char*)pkt + 0x29));
    maxPing(*(short*)((char*)&m_p2p + 0x2a), *(short*)((char*)pkt + 0x2b));
    sumPing(*(int*)((char*)&m_p2p + 0x30), *(short*)((char*)pkt + 0x2d),
            *(int*)((char*)&m_p2p + 0x34));
    *(int*)((char*)&m_p2p + 0x38) += *(int*)((char*)pkt + 0x2f);
    *(int*)((char*)&m_p2p + 0x3c) += *(int*)((char*)pkt + 0x33);
    *(int*)((char*)&m_p2p + 0x40) += *(int*)((char*)pkt + 0x37);
    *(int*)((char*)&m_p2p + 0x44) += *(int*)((char*)pkt + 0x3b);
}

void StatisticManager::WriteDeathTowerValueStatistic(Packet_DeathTower_Statistic_Value* pkt)
{
    STDeathTowerValueStatisticKey key;
    key.m_field0 = *(char*)((char*)pkt + 10);
    key.m_field2 = *(unsigned short*)((char*)pkt + 0xb);
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xd);
    ValueStatistic value;
    value.m_data[0] = *(int*)((char*)pkt + 0x11);
    std::map<STDeathTowerValueStatisticKey, ValueStatistic>::iterator it =
        m_deathTowerValue.find(key);
    bool isNew = (m_deathTowerValue.empty() || it == m_deathTowerValue.end());
    if (isNew)
    {
        m_deathTowerValue.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::AddFatigueBatteryStatistics(Packet_Fatigue_Battery_Money_Statistic* pkt)
{
    STFatigueBattery value;
    value.m_field0 = *(int*)((char*)pkt + 0xb);
    value.m_field4 = (unsigned int)*(unsigned short*)((char*)pkt + 0xf);
    std::map<unsigned char, STFatigueBattery>::iterator it = m_fatigue.find(*(char*)((char*)pkt + 10));
    if (it == m_fatigue.end())
    {
        m_fatigue.insert(std::make_pair(*(char*)((char*)pkt + 10), value));
    }
    else
    {
        it->second.m_field0 += *(int*)((char*)pkt + 0xb);
        it->second.m_field4 += (unsigned int)*(unsigned short*)((char*)pkt + 0xf);
    }
}

void StatisticManager::AddGoldcardEventStatistic(Packet_Goldcard_Event_Statistic_GTS* pkt)
{
    unsigned int idx = (unsigned int)(unsigned char)*(char*)((char*)pkt + 10);
    if (idx < 100)
    {
        *(int*)((char*)this + idx * 9 + 0x48d) += *(int*)((char*)pkt + 0xb);
        *(int*)((char*)this + idx * 9 + 0x491) += *(int*)((char*)pkt + 0xf);
    }
}

void StatisticManager::AddTowerOfDespairStatistic(Packet_TowerOfDespair_Statistic_GTS* pkt)
{
    if (pkt != 0 && 0 < *(int*)((char*)pkt + 0xe) && *(int*)((char*)pkt + 0xe) < 0x65)
    {
        if (*(char*)((char*)pkt + 0x12) == 0)
        {
            *(int*)((char*)this + (*(int*)((char*)pkt + 0xe) + 0x100) * 8 + 7) += 1;
        }
        else
        {
            *(int*)((char*)this + (*(int*)((char*)pkt + 0xe) + 0x100) * 8 + 0xb) += 1;
            m_serverList.insert(*(int*)((char*)pkt + 0xe));
        }
    }
}

void StatisticManager::SendDBGoldcardEventStatistic(CServerHandler* handler)
{
    Packet_Goldcard_Event_Statistic_STD pkt;
    memcpy((char*)&pkt + 10, (char*)this + 0x48c, 0x37b);
    handler->SendToDB((PacketHeader*)&pkt);
}

void StatisticManager::SendDBTowerOfDespairStatistic(CServerHandler* handler)
{
    Packet_TowerOfDespair_Statistic_STD pkt;
    unsigned int group = handler->GetServerGroupNo();
    group = group & 0xff;
    memcpy((char*)&pkt + 0x12, (char*)this + 0x807, 0x328);
    unsigned int size = m_serverList.size();
    handler->SendToDB((PacketHeader*)&pkt);
    CMyFileLog log("SendDBTowerOfDespairStatistic", 0x837);
    log("./log/statistic", "TOD Send to DB");
}

void StatisticManager::WriteDungeonPartyJobStatistic(Packet_Dungeon_Statistic_Party_Job* pkt)
{
    STPartyJobStatisticKey key;
    key.m_field0 = 0;
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xc);
    key.m_field8 = *(char*)((char*)pkt + 0x10);
    key.m_field9 = *(char*)((char*)pkt + 0x11);
    key.m_fielda = *(char*)((char*)pkt + 0x12);
    key.m_fieldb = *(char*)((char*)pkt + 0x13);
    key.m_fieldc = *(char*)((char*)pkt + 0x14);
    key.m_fieldd = *(char*)((char*)pkt + 0x15);
    key.m_field10 = *(unsigned int*)((char*)pkt + 0x16);
    key.m_field14 = *(char*)((char*)pkt + 0x1a);
    PartyJobStatistic value;
    value.m_data[1] = *(int*)((char*)pkt + 0x1b);
    std::map<STPartyJobStatisticKey, PartyJobStatistic>::iterator it = m_partyJob.find(key);
    bool isNew = (m_partyJob.empty() || it == m_partyJob.end());
    if (isNew)
    {
        m_partyJob.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::WriteDungeonPartyCharacStatistic(Packet_Dungeon_Statistic_Party_Charac* pkt)
{
    STPartyCharacKey key;
    key.m_field0 = 0;
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xc);
    key.m_field8 = *(char*)((char*)pkt + 0x10);
    key.m_field9 = *(char*)((char*)pkt + 0x11);
    key.m_fielda = *(char*)((char*)pkt + 0x12);
    key.m_fieldc = *(unsigned int*)((char*)pkt + 0x13);
    key.m_field10 = *(char*)((char*)pkt + 0x17);
    key.m_field11 = *(char*)((char*)pkt + 0x18);
    PartyCharacStatistic value;
    value.m_data[0] = *(int*)((char*)pkt + 0x19);
    value.m_data[1] = *(int*)((char*)pkt + 0x1d);
    value.m_data[2] = *(int*)((char*)pkt + 0x21);
    value.m_data[3] = *(int*)((char*)pkt + 0x25);
    value.m_data[4] = *(int*)((char*)pkt + 0x29);
    value.m_data[5] = *(int*)((char*)pkt + 0x2d);
    value.m_data[6] = *(int*)((char*)pkt + 0x31);
    value.m_data[7] = *(int*)((char*)pkt + 0x35);
    value.m_data[8] = *(int*)((char*)pkt + 0x39);
    value.m_data[9] = *(int*)((char*)pkt + 0x3d);
    value.m_data[10] = (int)*(short*)((char*)pkt + 0x41);
    value.m_data[12] = *(int*)((char*)pkt + 0x43);
    std::map<STPartyCharacKey, PartyCharacStatistic>::iterator it = m_partyCharac.find(key);
    bool isNew = (m_partyCharac.empty() || it == m_partyCharac.end());
    if (isNew)
    {
        m_partyCharac.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::AddValueStatistics(Packet_Value_Statistic* pkt)
{
    std::map<int, ValueStatisticData>::iterator it = m_value.find(*(int*)((char*)pkt + 10));
    if (it == m_value.end())
    {
        ValueStatisticData v;
        for (int i = 0; i < 0x1e; i++)
        {
            v.m_data[i] = *(int*)((char*)pkt + i * 4 + 0xe);
        }
        m_value.insert(std::make_pair(*(int*)((char*)pkt + 10), v));
    }
    else
    {
        for (int i = 0; i < 0x1e; i++)
        {
            it->second.m_data[i] += *(int*)((char*)pkt + i * 4 + 0xe);
        }
    }
}

void StatisticManager::AddCirculationStatistics(Packet_Circulation_Statistic* pkt)
{
    std::map<int, CirculationStatisticData>::iterator it = m_circ.find(*(int*)((char*)pkt + 10));
    if (it == m_circ.end())
    {
        CirculationStatisticData v;
        for (int i = 0; i < 0x30; i++)
        {
            v.m_data[i] = *(int*)((char*)pkt + i * 4 + 0xe);
        }
        m_circ.insert(std::make_pair(*(int*)((char*)pkt + 10), v));
    }
    else
    {
        for (int i = 0; i < 0x30; i++)
        {
            it->second.m_data[i] += *(int*)((char*)pkt + i * 4 + 0xe);
        }
    }
}

void StatisticManager::AddSecretShopStatistic(Packet_Secret_Shop_Statistic* pkt)
{
    if (*(int*)((char*)pkt + 10) != 0 && *(int*)((char*)pkt + 0xe) < 3)
    {
        int shopIdx = *(int*)((char*)pkt + 0xe);
        for (int i = 0; i < *(int*)((char*)pkt + 10); i++)
        {
            std::map<int, SECRET_SHOP_STATISTIC_DATA>::iterator it =
                m_secretShop[shopIdx].find(*(int*)((char*)pkt + i * 0x14 + 0x12));
            if (it == m_secretShop[shopIdx].end())
            {
                m_secretShop[shopIdx].insert(std::make_pair(
                    *(int*)((char*)pkt + i * 0x14 + 0x12),
                    *(SECRET_SHOP_STATISTIC_DATA*)((char*)pkt + i * 0x14 + 0x12)));
            }
            else
            {
                it->second.m_data[3] += *(int*)((char*)pkt + i * 0x14 + 0x1e);
                it->second.m_data[1] += *(int*)((char*)pkt + i * 0x14 + 0x16);
                it->second.m_data[2] += *(int*)((char*)pkt + i * 0x14 + 0x1a);
                it->second.m_data[4] += *(int*)((char*)pkt + i * 0x14 + 0x22);
            }
        }
    }
}

void StatisticManager::WriteDeathTowerPlayDataJobStatistic(
    Packet_DeathTower_Statistic_Playdata_Job* pkt)
{
    STDeathTowerPlayDataJobStatisticKey key;
    key.m_field0 = *(char*)((char*)pkt + 10);
    key.m_field2 = *(unsigned short*)((char*)pkt + 0xb);
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xd);
    key.m_field8 = *(char*)((char*)pkt + 0x11);
    PlayDataJobStatistic value;
    value.m_data[0] = *(int*)((char*)pkt + 0x12);
    std::map<STDeathTowerPlayDataJobStatisticKey, PlayDataJobStatistic>::iterator it =
        m_deathTowerJob.find(key);
    bool isNew = (m_deathTowerJob.empty() || it == m_deathTowerJob.end());
    if (isNew)
    {
        m_deathTowerJob.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::WriteDeathTowerPlayDataPartyStatistic(
    Packet_DeathTower_Statistic_Playdata_Party* pkt)
{
    STDeathTowerPlayDataPartyStatisticKey key;
    key.m_field0 = *(char*)((char*)pkt + 10);
    key.m_field1 = *(char*)((char*)pkt + 0xb);
    PlayDataPartyStatistic value;
    value.m_data[0] = *(int*)((char*)pkt + 0xc);
    std::map<STDeathTowerPlayDataPartyStatisticKey, PlayDataPartyStatistic>::iterator it =
        m_deathTowerParty.find(key);
    bool isNew = (m_deathTowerParty.empty() || it == m_deathTowerParty.end());
    if (isNew)
    {
        m_deathTowerParty.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::WriteUserTingTImeCheckStatistic(
    Packet_User_Ting_TimeCheck_Statistic_Add* pkt)
{
    STUserTingTimeCheckKey key;
    key.m_field0 = *(int*)((char*)pkt + 10) / 0x3c;
    if (0x59f < (int)key.m_field0)
    {
        CMyFileLog log("WriteUserTingTImeCheckStatistic", 0x2fd);
        log("./log/Statistic", "[User Ting Wrong] %d Sec", *(unsigned int*)((char*)pkt + 10));
        return;
    }
    std::map<STUserTingTimeCheckKey, int>::iterator it = m_userTing.find(key);
    bool isNew = (m_userTing.empty() || it == m_userTing.end());
    if (isNew)
    {
        m_userTing.insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
    if ((int)key.m_field0 < 0xb && 0 < (int)key.m_field0)
    {
        if (m_field110.size() <= 1000)
        {
            std::map<unsigned int, int>::iterator it2 = m_field110.find(key.m_field0);
            bool isNew2 = (m_field110.empty() || it2 == m_field110.end());
            if (isNew2)
            {
                m_field110.insert(std::make_pair(key.m_field0, 1));
            }
            else
            {
                it2->second += 1;
            }
        }
    }
}

void StatisticManager::WriteHellPartyStatisticItem(Packet_HellParty_Statistic_Item* pkt)
{
    STHellPartyStatisticItemKey key;
    key.m_field0 = *(char*)((char*)pkt + 10);
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xb);
    key.m_field8 = *(char*)((char*)pkt + 0xf);
    key.m_field9 = *(char*)((char*)pkt + 0x10);
    key.m_fielda = *(char*)((char*)pkt + 0x11);
    HellPartyItenmData value;
    memcpy(value.m_data, (char*)pkt + 0x12, 0x18);
    std::map<STHellPartyStatisticItemKey, HellPartyItenmData>::iterator it =
        m_hellParty.find(key);
    bool isNew = (m_hellParty.empty() || it == m_hellParty.end());
    if (isNew)
    {
        m_hellParty.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void StatisticManager::AddBloodDungeonStatistics(Packet_Blood_dungeon_statistic* pkt)
{
    std::map<unsigned int, STBloodDungeonStatistic>::iterator it =
        m_blood.find(*(unsigned int*)((char*)pkt + 10));
    if (it == m_blood.end())
    {
        m_blood.insert(std::make_pair(*(unsigned int*)((char*)pkt + 10),
                                      *(STBloodDungeonStatistic*)((char*)pkt + 0xe)));
    }
    else
    {
        it->second.m_field0 += (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x12);
        it->second.m_field4 += (unsigned int)(unsigned char)*(char*)((char*)pkt + 0x13);
    }
}

void StatisticManager::AddReasonCrashDownData(Packet_Reason_Crash_Down_Info* pkt,
                                              CServerHandler* handler)
{
    Packet_DBMW_Reason_Crash_Down_Query query;
    char sql[256];
    memset(sql, 0, 0x100);
    snprintf(sql, 0xff,
             "inSert into log_client_ting_stat (occ_time,channel_no,reason,cnt) values (from_unixtime(%d),%d,%d,%d)",
             *(unsigned int*)((char*)pkt + 10), *(unsigned int*)((char*)pkt + 0xe),
             *(unsigned int*)((char*)pkt + 0x12), *(unsigned int*)((char*)pkt + 0x16));
    handler->SendToDB((PacketHeader*)&query);
    CMyFileLog log("AddReasonCrashDownData", 0x5b8);
    log("./log/ReasonCrashDown", "%s", sql);
}

void StatisticManager::SendDBPartyStatistic(CServerHandler* handler)
{
    Packet_DBMW_Dungeon_Statistic_Party pkt;
    int idx = 0;
    if (!m_party.empty())
    {
        for (std::map<STPartyStatisticKey, PartyStatistic>::iterator it = m_party.begin();
             it != m_party.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x3c;
            *(unsigned short*)(slot + 0) = it->first.m_field0;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            slot[9] = it->first.m_field9;
            slot[10] = it->first.m_fielda;
            slot[11] = it->first.m_fieldb;
            slot[12] = it->first.m_fieldc;
            slot[13] = it->first.m_fieldd;
            for (int k = 0; k < 11; k++)
            {
                *(int*)(slot + 0xe + k * 4) = it->second.m_data[k];
            }
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBPartyStatistic", 0x183);
                log("./log/statistic", "Party DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBPartyStatistic", 0x18d);
            log("./log/statistic", "Party DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBPartyJobStatistic(CServerHandler* handler)
{
    Packet_DBMW_Dungeon_Statistic_Party_Job pkt;
    int idx = 0;
    if (!m_partyJob.empty())
    {
        for (std::map<STPartyJobStatisticKey, PartyJobStatistic>::iterator it = m_partyJob.begin();
             it != m_partyJob.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x19;
            *(unsigned short*)(slot + 0) = it->first.m_field0;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            slot[9] = it->first.m_field9;
            slot[10] = it->first.m_fielda;
            slot[11] = it->first.m_fieldb;
            slot[12] = it->first.m_fieldc;
            slot[13] = it->first.m_fieldd;
            *(unsigned int*)(slot + 0x10) = it->first.m_field10;
            slot[0x14] = it->first.m_field14;
            *(int*)(slot + 0x15) = it->second.m_data[1];
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBPartyJobStatistic", 0x19a);
                log("./log/statistic", "PartyJob DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBPartyJobStatistic", 0x1a4);
            log("./log/statistic", "PartyJob DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBPartyCharacStatistic(CServerHandler* handler)
{
    Packet_DBMW_Dungeon_Statistic_Party_Charac pkt;
    int idx = 0;
    if (!m_partyCharac.empty())
    {
        for (std::map<STPartyCharacKey, PartyCharacStatistic>::iterator it = m_partyCharac.begin();
             it != m_partyCharac.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x38;
            *(unsigned short*)(slot + 0) = it->first.m_field0;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            slot[9] = it->first.m_field9;
            slot[10] = it->first.m_fielda;
            *(unsigned int*)(slot + 0xc) = it->first.m_fieldc;
            slot[0x10] = it->first.m_field10;
            slot[0x11] = it->first.m_field11;
            for (int k = 0; k < 12; k++)
            {
                *(int*)(slot + 0x12 + k * 4) = it->second.m_data[k];
            }
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBPartyCharacStatistic", 0x1b1);
                log("./log/statistic", "PartyCharac DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBPartyCharacStatistic", 0x1bb);
            log("./log/statistic", "PartyCharac DB Sent %d", idx);
        }
    }
}
