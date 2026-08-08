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
#include "DNFFunctionLib.h"

namespace global_function
{
void SendPacketToDbmw(char* data)
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
    for (int i = 0; i < 3; i++)
    {
        m_spec[i].clear();
    }
    m_field48 = 0;
    m_field4c = 0;
    m_errorSpec.clear();
    m_field68 = 0;
}

CHWSpecResearcher::~CHWSpecResearcher()
{
    ResetSpec();
    ResetErrorSpec();
}

void CHWSpecResearcher::DBSaveProcess(CServerHandler* handler)
{
    m_field48++;
    if (0x1d < (unsigned char)m_field48)
    {
        m_field48 = 0;
        for (int i = 0; i < 3; i++)
        {
            SendDBMWHWSpec(handler, (unsigned char)i);
        }
        ResetSpec();
    }
    m_field68++;
    if (0x2c < (unsigned char)m_field68)
    {
        m_field68 = 0xf;
        SendDBMWErrorLine(handler);
        m_field4c = 0;
        ResetErrorSpec();
    }
}

void CHWSpecResearcher::ResetErrorSpec()
{
    m_errorSpec.clear();
}

void CHWSpecResearcher::SendDBMWHWSpec(CServerHandler* handler, unsigned char param)
{
    Packet_DBMW_Save_Client_Spec_Statistic pkt;
    unsigned int count = 0;
    *(char*)((char*)&pkt + 10) = (char)param;
    if (!m_spec[param].empty())
    {
        for (std::map<STSpecStatic, unsigned int>::iterator it = m_spec[param].begin();
             it != m_spec[param].end(); ++it)
        {
            memcpy((char*)&pkt + 0xf + count * 0xe, &it->first, 0xc);
            *(short*)((char*)&pkt + 0xf + count * 0xe + 0xc) = (short)it->second;
            count++;
            if (0x1b3 < count)
            {
                *(int*)((char*)&pkt + 0xb) = 0x1b4;
                handler->SendToDB((PacketHeader*)&pkt);
                count = 0;
            }
        }
        if (count != 0)
        {
            *(int*)((char*)&pkt + 0xb) = count;
            *(short*)((char*)&pkt + 8) = (short)(count * 0xe + 0xf);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}

void CHWSpecResearcher::WriteSpecStatics(unsigned char param, const HWSpec& spec)
{
    if (2 < param)
    {
        CMyFileLog log("WriteSpecStatics", 0x27);
        log("./log/HWSpec.log", "CHWSpecResearcher::WriteSpecStatics Over db_type(%d)",
            (unsigned int)param);
        return;
    }
    STSpecStatic key(spec);
    std::map<STSpecStatic, unsigned int>::iterator it = m_spec[param].find(key);
    if (m_spec[param].empty() || it == m_spec[param].end())
    {
        m_spec[param].insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}

void CHWSpecResearcher::SendDBMWErrorLine(CServerHandler* handler)
{
    Packet_DBMW_Save_Error_Line_Statistic pkt;
    unsigned int count = 0;
    if (!m_errorSpec.empty())
    {
        for (std::map<STErrorStatic, unsigned int>::iterator it = m_errorSpec.begin();
             it != m_errorSpec.end(); ++it)
        {
            *(unsigned short*)((char*)&pkt + 0xe + count * 10) = it->first.m_field0;
            *(int*)((char*)&pkt + 0xe + count * 10 + 4) = it->first.m_field4;
            *(int*)((char*)&pkt + 0xe + count * 10 + 8) = (int)it->second;
            count++;
            if (0x263 < count)
            {
                *(int*)((char*)&pkt + 0xa) = 0x264;
                handler->SendToDB((PacketHeader*)&pkt);
                count = 0;
            }
        }
        if (count != 0)
        {
            *(int*)((char*)&pkt + 0xa) = count;
            *(short*)((char*)&pkt + 8) = (short)(((count << 2) + count) * 2 + 0xe);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}

void CHWSpecResearcher::WriteErrorLineStatics(unsigned short param, int value)
{
    STErrorStatic key(ErrorValue(param, (unsigned int)value));
    std::map<STErrorStatic, unsigned int>::iterator it = m_errorSpec.find(key);
    if (m_errorSpec.empty() || it == m_errorSpec.end())
    {
        m_errorSpec.insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}

void CHWSpecResearcher::ResetSpec()
{
    for (int i = 0; i < 3; i++)
    {
        m_spec[i].clear();
    }
}

FrameLagCollector::FrameLagCollector()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    m_fieldc = 0;
    m_field10 = 0;
    m_field14 = 0;
    m_field18 = 0;
    m_field19 = 0;
    m_field4c = 0;
    m_field50 = 0;
    m_field6c = 0;
    m_collectInterval = 0x1e;
    m_field8c = 0;
    m_field90 = 0;
    m_field94 = 0;
    m_map1c.clear();
    m_map34.clear();
    m_monitor.clear();
    m_data.clear();
    m_field1e4 = 0;
    Init();
    m_directx.init();
    m_renewCnt = 0;
    m_field9c = m_today;
    for (int i = 0; i < 6; i++)
    {
        m_memory[i].init();
    }
}

FrameLagCollector::~FrameLagCollector()
{
    m_data.clear();
    m_monitor.clear();
    m_map34.clear();
    m_map1c.clear();
}

void FrameLagCollector::ReLoadSpec(CServerHandler* handler)
{
    if (m_field4 == 2)
    {
        m_field14++;
        if (m_field14 == 5)
        {
            m_field14 = 0;
            m_field19++;
            if (m_field19 == 0x7f)
            {
                m_field19 = 1;
            }
            m_map34.clear();
            Packet_Frame_Lag_Statistic_Reload_Spec pkt;
            *(char*)((char*)&pkt + 10) = m_field19;
            *(int*)((char*)&pkt + 0xc) = m_field50;
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}

void FrameLagCollector::RenewToday()
{
    m_renewCnt++;
    if (9 < m_renewCnt)
    {
        m_renewCnt = 0;
        time_t now = time(0);
        tm* pt = localtime(&now);
        m_today = pt->tm_mday;
    }
}

void FrameLagCollector::SaveUsedMemory(CServerHandler* handler)
{
    m_field1e4++;
    if (m_collectInterval <= m_field1e4)
    {
        m_field1e4 = 0;
        Packet_Frame_Lag_Used_Memory_Write_Query pkt;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                int count = *(int*)((char*)&m_memory[i] + j * 4);
                int sum = *(int*)((char*)&m_memory[i] + (j + 4) * 4 + 8);
                if (count != 0)
                {
                    unsigned int avg = (unsigned int)sum / (unsigned int)count;
                    char sql[1024];
                    snprintf(sql, 0x400,
                             "inSert into used_memory (occ_time, minute_type, module, memory) values (now(),%d,%d,%d)",
                             i, j, avg);
                    strcpy((char*)&pkt + 10, sql);
                    handler->SendToDB((PacketHeader*)&pkt);
                }
            }
            m_memory[i].init();
        }
    }
}

int FrameLagCollector::SaveDailyBadSpec(CServerHandler* handler)
{
    return 0;
}

int FrameLagCollector::SaveFrameLagData(CServerHandler* handler)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    m_field10++;
    if (!(m_collectInterval <= m_field10))
    {
        return 0;
    }
    m_field10 = 0;
    if (m_field6c == 0)
    {
        return 0;
    }
    Packet_Frame_Lag_Statistic_Write_Lag_Index pkt;
    char* pb = (char*)&pkt;
    pb[10] = (char)handler->GetServerGroupNo();
    time_t now = time(0);
    *(time_t*)(pb + 0xb) = now;
    for (std::map<int, FrameLagDataStruct>::iterator it = m_data.begin();
         it != m_data.end(); ++it)
    {
        FrameLagDataStruct* v = &it->second;
        *(int*)(pb + 0xb) = it->first;
        *(int*)(pb + 0xf) = *(int*)((char*)v + 4);
        for (int i = 0; i < 8; i++)
        {
            *(short*)(pb + 0x13 + i * 2) = *(short*)((char*)v + 0x10 + (i + 8) * 2);
        }
        if (*(int*)((char*)v + 0x30) == 0)
        {
            *(short*)(pb + 0x23) = -1;
            *(short*)(pb + 0x25) = -1;
        }
        else
        {
            *(short*)(pb + 0x23) = (short)((double)(*(int*)((char*)v + 0x34)) /
                                           (double)(*(unsigned int*)((char*)v + 0x30)) + 0.5);
            *(short*)(pb + 0x25) = (short)((double)(*(int*)((char*)v + 0x38)) /
                                           (double)(*(unsigned int*)((char*)v + 0x30)) + 0.5);
        }
        for (int i = 0; i < 6; i++)
        {
            *(short*)(pb + 0x27 + i * 0x1c + 0) = 0;
            *(short*)(pb + 0x27 + i * 0x1c + 2) = 0;
            *(short*)(pb + 0x27 + i * 0x1c + 4) = 0;
            *(short*)(pb + 0x27 + i * 0x1c + 6) = 0;
            if (0 < *(int*)((char*)v + (i + 9) * 0x10 + 0xc))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 0) =
                    (short)(*(int*)((char*)v + 0xc + (i + 0xc) * 4) /
                            *(int*)((char*)v + (i + 9) * 0x10 + 0xc));
            }
            if (0 < *(int*)((char*)v + i * 0x10 + 0xa0))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 2) =
                    (short)(*(int*)((char*)v + 4 + (i + 0x14) * 4) /
                            *(int*)((char*)v + i * 0x10 + 0xa0));
            }
            if (0 < *(int*)((char*)v + i * 0x10 + 0xa4))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 4) =
                    (short)(*(int*)((char*)v + 0xc + (i + 0x18) * 4) /
                            *(int*)((char*)v + i * 0x10 + 0xa4));
            }
            if (0 < *(int*)((char*)v + i * 0x10 + 0xa8))
            {
                *(short*)(pb + 0x27 + i * 0x1c + 6) =
                    (short)(*(int*)((char*)v + 4 + (i + 0x20) * 4) /
                            *(int*)((char*)v + i * 0x10 + 0xa8));
            }
            for (int j = 0; j < 6; j++)
            {
                *(int*)(pb + 0x2f + (i * 7 + j + 4) * 8) =
                    *(int*)((char*)v + 0x14 + (i * 7 + j + 0x1e) * 8);
                *(int*)(pb + 0x33 + (i * 7 + j + 4) * 8) =
                    *(int*)((char*)v + 0x18 + (i * 7 + j + 0x1e) * 8);
            }
        }
        handler->SendToDB((PacketHeader*)&pkt);
        v->init();
        DNFFLib::Sleep_Ext(0, 1);
    }
    m_field6c = 0;
    time_t t2 = time(0);
    if (t2 < m_field8c || m_field90 < t2)
    {
        m_collectInterval = 0x1e;
    }
}

int FrameLagCollector::GetCollectInterval()
{
    return m_collectInterval;
}


int FrameLagCollector::SaveCollectedDirectxVersion(CServerHandler* handler)
{
    if (m_field4 == 2)
    {
        if (m_field9c != m_today)
        {
            m_field9c = m_today;
            Packet_Frame_Lag_Statistic_Write_Query pkt;
            time_t now = time(0);
            char sql[1024];
            snprintf(sql, 0x400,
                     "inSert into directx_version(occ_time,server_group,ver_etc,ver_8_x,ver_9_0,ver_9_0_a,ver_9_0_b,ver_9_0_c,ver_10_x,ver_11_x) values(from_unixtime(%d),%hhd,%u,%u,%u,%u,%u,%u,%u,%u)",
                     (int)now, (signed char)handler->GetServerGroupNo(),
                     (unsigned int)m_directx.m_data[0], (unsigned int)m_directx.m_data[1],
                     (unsigned int)m_directx.m_data[2], (unsigned int)m_directx.m_data[3],
                     (unsigned int)m_directx.m_data[4], (unsigned int)m_directx.m_data[5],
                     (unsigned int)m_directx.m_data[6], (unsigned int)m_directx.m_data[7]);
            strcpy((char*)&pkt + 10, sql);
            handler->SendToDB((PacketHeader*)&pkt);
            m_directx.init();
        }
    }
}

bool FrameLagCollector::Init()
{
    char ret = m_field0;
    if (m_field0 == 0)
    {
        m_field0 = 1;
        time_t now = time(0);
        tm* pt = localtime(&now);
        m_today = pt->tm_mday;
    }
    return ret != 0;
}

void FrameLagCollector::LoadSpec(CServerHandler* handler)
{
    if (m_field4 == 2)
    {
        return;
    }
    char needLoad = 0;
    if (m_field4 == 0)
    {
        needLoad = 1;
    }
    else if (m_field4 == 1)
    {
        m_field8++;
        if (m_field8 == 0x3c)
        {
            m_field8 = 0;
            needLoad = 1;
        }
    }
    if (needLoad != 0)
    {
        m_field4 = 1;
        m_field18++;
        if (m_field18 == 0x7f)
        {
            m_field18 = 1;
        }
        Packet_Frame_Lag_Statistic_Load_Spec pkt;
        *(char*)((char*)&pkt + 10) = m_field18;
        m_map1c.clear();
        handler->SendToDB((PacketHeader*)&pkt);
    }
}

void FrameLagCollector::UsedMemoryStruct::init()
{
    memset(this, 0, 0x30);
}

void FrameLagCollector::UsedMemoryStruct::SetUsedMemory(char idx, short value)
{
    if (idx < 6)
    {
        *(int*)((char*)this + (idx + 4) * 4 + 8) += (int)value;
        *(int*)((char*)this + idx * 4) += 1;
    }
}

void FrameLagCollector::DirectxVersionStruct::init()
{
    memset(this, 0, 0x20);
}

void FrameLagCollector::DirectxVersionStruct::add_cnt(unsigned int version)
{
    if (version != 0xffffffff)
    {
        if (version < 0x80000)
        {
            m_data[0] += 1;
        }
        else if (version == 0x80000 || version == 0x90000)
        {
            if (version == 0x90000)
            {
                m_data[2] += 1;
            }
            else
            {
                m_data[1] += 1;
            }
        }
        else if (version == 0x90001)
        {
            m_data[3] += 1;
        }
        else if (version == 0x90002)
        {
            m_data[4] += 1;
        }
        else if (version == 0x90003)
        {
            m_data[5] += 1;
        }
        else if (version == 0x90004)
        {
            m_data[6] += 1;
        }
        else
        {
            m_data[7] += 1;
        }
    }
}

FrameLagCollector::FrameLagDataStruct::FrameLagDataStruct()
{
    init();
}

void FrameLagCollector::FrameLagDataStruct::init()
{
    *(int*)((char*)this + 0) = 0;
    for (int i = 0; i < 8; i++)
    {
        *(short*)((char*)this + 0xc + (i + 8) * 2) = 0;
    }
    *(int*)((char*)this + 0x2c) = 0;
    *(int*)((char*)this + 0x30) = 0;
    *(int*)((char*)this + 0x34) = 0;
    for (int i = 0; i < 6; i++)
    {
        *(int*)((char*)this + i * 4 + 4) = 0;
        *(int*)((char*)this + (i + 0xc) * 4 + 8) = 0;
        *(int*)((char*)this + (i + 0x14) * 4) = 0;
        *(int*)((char*)this + (i + 0x18) * 4 + 8) = 0;
        *(int*)((char*)this + (i + 0x20) * 4) = 0;
        *(int*)((char*)this + (i + 9) * 0x10 + 8) = 0;
        *(int*)((char*)this + i * 0x10 + 0x9c) = 0;
        *(int*)((char*)this + i * 0x10 + 0xa0) = 0;
        *(int*)((char*)this + i * 0x10 + 0xa4) = 0;
        for (int j = 0; j < 6; j++)
        {
            *(int*)((char*)this + (i * 7 + j + 0x1e) * 8 + 0x10) = 0;
            *(int*)((char*)this + (i * 7 + j + 0x1e) * 8 + 0x14) = 0;
        }
    }
}

UdpCharacteristic::UdpCharacteristic()
{
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(int*)((char*)this + 0x28) = 0;
}

UdpCharacteristic::~UdpCharacteristic()
{
}

void UdpCharacteristic::PushPartyResultData(Packet_Party_Result_Statistic* pkt)
{
    *(unsigned int*)((char*)this + 4) += (unsigned int)*(unsigned short*)((char*)pkt + 10);
    *(unsigned int*)((char*)this + 8) += (unsigned int)*(unsigned short*)((char*)pkt + 0xc);
}

void UdpCharacteristic::PushPartyPingData(Packet_Party_Ping_Statistic* pkt)
{
    *(unsigned int*)((char*)this + 0xc) += (unsigned int)*(unsigned short*)((char*)pkt + 10);
    *(unsigned int*)((char*)this + 0x10) += (unsigned int)*(unsigned short*)((char*)pkt + 0xc);
}

void UdpCharacteristic::PushPvpPingData(Packet_Pvp_Ping_Statistic* pkt)
{
    *(unsigned int*)((char*)this + 0x14) += (unsigned int)*(unsigned short*)((char*)pkt + 10);
    *(unsigned int*)((char*)this + 0x18) += (unsigned int)*(unsigned short*)((char*)pkt + 0xc);
}

void UdpCharacteristic::PushFairPvpPingData(Packet_Fair_Pvp_Ping_Statistic* pkt)
{
    *(unsigned int*)((char*)this + 0x1c) += (unsigned int)*(unsigned short*)((char*)pkt + 10);
    *(unsigned int*)((char*)this + 0x20) += (unsigned int)*(unsigned short*)((char*)pkt + 0xc);
}

void UdpCharacteristic::PushAbnormalExitData(Packet_Abnormal_Exit_Statistic* pkt)
{
    *(unsigned int*)((char*)this + 0x24) += (unsigned int)*(unsigned short*)((char*)pkt + 10);
    *(unsigned int*)((char*)this + 0x28) += (unsigned int)*(unsigned short*)((char*)pkt + 0xc);
}

void UdpCharacteristic::InitUdpCharacteristicData()
{
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(int*)((char*)this + 0x28) = 0;
}

void UdpCharacteristic::SaveUdpCharacteristicData(CServerHandler* handler, int interval)
{
    *(int*)this += 1;
    if (interval <= *(int*)this)
    {
        *(int*)this = 0;
        Packet_Udp_Characteristic pkt;
        new ((void*)&pkt) PacketHeader(0xfaa, 0x33);
        *(char*)((char*)&pkt + 10) = (char)handler->GetServerGroupNo();
        *(int*)((char*)&pkt + 0xb) = *(int*)((char*)this + 4);
        *(int*)((char*)&pkt + 0xf) = *(int*)((char*)this + 8);
        *(int*)((char*)&pkt + 0x13) = *(int*)((char*)this + 0xc);
        *(int*)((char*)&pkt + 0x17) = *(int*)((char*)this + 0x10);
        *(int*)((char*)&pkt + 0x1b) = *(int*)((char*)this + 0x14);
        *(int*)((char*)&pkt + 0x1f) = *(int*)((char*)this + 0x18);
        *(int*)((char*)&pkt + 0x23) = *(int*)((char*)this + 0x1c);
        *(int*)((char*)&pkt + 0x27) = *(int*)((char*)this + 0x20);
        *(int*)((char*)&pkt + 0x2b) = *(int*)((char*)this + 0x24);
        *(int*)((char*)&pkt + 0x2f) = *(int*)((char*)this + 0x28);
        handler->SendToDB((PacketHeader*)&pkt);
        InitUdpCharacteristicData();
    }
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
    m_field110.clear();
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

#undef STUB_STAT

CCubeStatistic::CCubeStatistic()
{
}

CCubeStatistic::~CCubeStatistic()
{
    m_data.clear();
}

void CCubeStatistic::addStatisticData(Packet_Cube_Statistic* pkt)
{
    STCubeStatisticKey key;
    key.m_field0 = (unsigned int)*(short*)((char*)pkt + 10);
    key.m_field4 = *(unsigned int*)((char*)pkt + 0xe);
    key.m_field8 = (unsigned int)*(short*)((char*)pkt + 0xc);
    key.m_fieldc = *(char*)((char*)pkt + 0x58);
    int value = *(int*)((char*)pkt + 0x48);
    std::map<STCubeStatisticKey, int>::iterator it = m_data.find(key);
    if (it == m_data.end())
    {
        m_data.insert(std::make_pair(key, value));
    }
    else
    {
        it->second += value;
    }
}

void CCubeStatistic::sendStatisticData(CServerHandler* handler)
{
    Packet_DBMW_Cube_Statistic pkt;
    unsigned int count = 0;
    if (!m_data.empty())
    {
        for (std::map<STCubeStatisticKey, int>::iterator it = m_data.begin();
             it != m_data.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + count * 0xd;
            *(short*)(slot + 0) = (short)it->first.m_field0;
            *(short*)(slot + 2) = (short)it->first.m_field8;
            *(int*)(slot + 4) = (int)it->first.m_field4;
            slot[8] = it->first.m_fieldc;
            *(int*)(slot + 9) = it->second;
            count++;
            if (0x1d5 < count)
            {
                *(unsigned int*)((char*)&pkt + 10) = 0x1d6;
                handler->SendToDB((PacketHeader*)&pkt);
                count = 0;
                CMyFileLog log("sendStatisticData", 0x40);
                log("./log/statistic", "cube statistic DB Sent %d", 0x1d6);
            }
        }
        if (0 < (int)count)
        {
            *(unsigned int*)((char*)&pkt + 10) = count;
            *(short*)((char*)&pkt + 8) = (short)(count * 0xd + 0xe);
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("sendStatisticData", 0x49);
            log("./log/statistic", "cube statistic DB Sent %d", count);
        }
    }
}

void CCubeStatistic::printStatisticData()
{
    for (std::map<STCubeStatisticKey, int>::iterator it = m_data.begin();
         it != m_data.end(); ++it)
    {
        printf("\nchannel %d, index %d, level %d, type %d, count %d\n",
               it->first.m_field0, it->first.m_field4, it->first.m_field8,
               (unsigned int)it->first.m_fieldc, it->second);
    }
}

void CCubeStatistic::resetStatisticData()
{
    m_data.clear();
}

namespace WongWork
{
bool CGMAccounts::stGMInfo_t::operator==(const stGMInfo_t& other) const
{
    return m_field0 == other.m_field0;
}

void CGMAccounts::LoadGmList(unsigned int group, int index)
{
    stGMInfo_t info;
    info.m_field0 = group;
    info.m_field1 = (unsigned char)index;
    m_list.push_back(info);
}

void CGMAccounts::clearGmList()
{
    m_list.clear();
}

void CGMAccounts::AppendGM_Sys(unsigned int id, char flag)
{
    stGMInfo_t info;
    info.m_field0 = id;
    info.m_field1 = (unsigned char)flag;
    m_list.push_back(info);
    char* mid = NumberToString(id, 0);
    CMyFileLog log("AppendGM_Sys", 0xcd);
    log("./log/Init", "GM List Add mid:%s", mid);
}

void CGMAccounts::loadGMAccounts(const char* path)
{
    return;
}

int CGMAccounts::isGM(unsigned int id)
{
    stGMInfo_t key;
    key.m_field0 = id;
    key.m_field1 = 3;
    std::list<stGMInfo_t>::iterator it =
        std::find(m_list.begin(), m_list.end(), key);
    return it != m_list.end();
}

void CGMAccounts::appendGM(unsigned int id, unsigned int value)
{
    return;
}

void CGMAccounts::removeGM(unsigned int id, unsigned int value)
{
    return;
}

CGMAccounts::stGMInfo_t CGMAccounts::getGMInfo(unsigned int id) const
{
    stGMInfo_t key;
    key.m_field0 = id;
    key.m_field1 = 3;
    stGMInfo_t result;
    result.m_field0 = 0;
    result.m_field1 = 3;
    std::list<stGMInfo_t>::const_iterator it =
        std::find(m_list.begin(), m_list.end(), key);
    if (it != m_list.end())
    {
        result = *it;
    }
    return result;
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

void StatisticManager::SendDBRandomboxStatistic(CServerHandler* handler)
{
    Packet_Randombox_statistic_DB pkt;
    for (int i = 0; i < 5; i++)
    {
        *(unsigned int*)((char*)&pkt + 0xa + i * 4) =
            *(unsigned int*)((char*)this + (i + 0xd0) * 4 + 8);
        *(unsigned int*)((char*)&pkt + 0x1e + i * 4) =
            *(unsigned int*)((char*)this + (i + 0xd4) * 4 + 0xc);
    }
    handler->SendToDB((PacketHeader*)&pkt);
}

void StatisticManager::SendDBDisjointAvatarInfoTotal(CServerHandler* handler)
{
    Packet_Avater_Disjoint_Statistic_DB pkt;
    memcpy((char*)&pkt + 0xa, (char*)this + 0x1e8, 0x144);
    handler->SendToDB((PacketHeader*)&pkt);
    CMyFileLog log("SendDBDisjointAvatarInfoTotal", 0x5fa);
    log("./log/statistic", "Packet_Avater_Disjoint_Statistic_DB");
}

void StatisticManager::SendDBCreateEmblemInfo(CServerHandler* handler)
{
    Packet_Emblem_Create_Statistic_DB pkt;
    memcpy((char*)&pkt + 0xa, (char*)this + 0x32c, 0x1c);
    handler->SendToDB((PacketHeader*)&pkt);
}

void StatisticManager::SendDBServerMatchData(CServerHandler* handler)
{
    if (*(int*)((char*)this + 0x438) != 0)
    {
        Packet_Server_Match_data_DBMW pkt;
        *(char*)((char*)&pkt + 0xa) = *(char*)((char*)this + 0x438);
        *(unsigned int*)((char*)&pkt + 0xb) = *(unsigned int*)((char*)this + 0x43c);
        *(unsigned int*)((char*)&pkt + 0xf) = *(unsigned int*)((char*)this + 0x440);
        handler->SendToDB((PacketHeader*)&pkt);
    }
}

void StatisticManager::SendDBPacketOverflowStatistic(CServerHandler* handler)
{
    Packet_DBMW_Packet_Overflow_Statistic pkt;
    int count = 0;
    if (!m_packetOverflow.empty())
    {
        for (std::map<STPacketOverflowKey, int>::iterator it = m_packetOverflow.begin();
             it != m_packetOverflow.end(); ++it)
        {
            *(char*)((char*)&pkt + 0xa) = it->first.m_field0;
            *(unsigned short*)((char*)&pkt + 0xb) = it->first.m_field2;
            *(unsigned int*)((char*)&pkt + 0xd) = it->second;
            handler->SendToDB((PacketHeader*)&pkt);
            count++;
        }
        CMyFileLog log("SendDBPacketOverflowStatistic", 0x297);
        log("./log/Statistic", "Packet Overflow DB Sent %d", count);
    }
}

void StatisticManager::SendDBValueStatistic(CServerHandler* handler)
{
    if (!m_value.empty())
    {
        Packet_DBMW_Query_String pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = 0x4ef5;
        time_t now = time(0);
        for (std::map<int, ValueStatisticData>::iterator it = m_value.begin();
             it != m_value.end(); ++it)
        {
            int key = it->first;
            ValueStatisticData* v = &it->second;
            memset((char*)&pkt + 0xe, 0, 0x1001);
            snprintf((char*)&pkt + 0xe, 0x400,
                "inSert into log_value_stat(channel_no,occ_time ,level,uv,drop_gold,drop_item,result_card_gold,result_card_item,gold_card_item,store_item_buy,jar_item,disjoint_create,upgrade_faild_forced_disjoint,quest_reward,deathtower_card_gold,deathtower_card_item,consume_store_item_buy,consume_upgrade_attempt,consume_upgrade_faild,consume_stamina_recovery,consume_quest_consume,consume_auction_commision,consume_item_disjoint,consume_item_repair,consume_item_use,consume_item_drop,consume_gold_drop,consume_gold_card_price,consume_qp_init) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)",
                1, now, key, v->m_data[0], v->m_data[1], v->m_data[2], v->m_data[3], v->m_data[4],
                v->m_data[5], v->m_data[6], v->m_data[7], v->m_data[8], v->m_data[9],
                v->m_data[10], v->m_data[11], v->m_data[12], v->m_data[13], v->m_data[14],
                v->m_data[15], v->m_data[16], v->m_data[17], v->m_data[18], v->m_data[19],
                v->m_data[20], v->m_data[21], v->m_data[22], v->m_data[23], v->m_data[24],
                v->m_data[25], v->m_data[26], v->m_data[27], v->m_data[28]);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}

void StatisticManager::SendDBCirculationStatistic(CServerHandler* handler)
{
    if (!m_circ.empty())
    {
        Packet_DBMW_Query_String pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = 0x4ef6;
        time_t now = time(0);
        for (std::map<int, CirculationStatisticData>::iterator it = m_circ.begin();
             it != m_circ.end(); ++it)
        {
            int key = it->first;
            CirculationStatisticData* v = &it->second;
            memset((char*)&pkt + 0xe, 0, 0x1001);
            snprintf((char*)&pkt + 0xe, 0x1000,
                "inSert into log_gold_stat(channel_no,occ_time ,level,dungeon_drop,result_card,sell_store,quest_reward,death_tower_reward,illusion_tower_reward,war_area_drop,member_tax,blood_dungeon_reward,blood_dungeon_lotto,power_dungeon_drop,power_dungeon_result_card,buy_store,stamina_recovery,repair_item,private_store_commission,gold_card,gold_drop,upgrade,quest_use,mail_commission,punish_user,restrict_trade,guild_level_up,guild_skill,guild_mail,item_compound,blood_dungeon_enter,buy_cerashop,war_area_enter,assault_gold,upgrade_guild_agit,upgrade_guild_cargo,break_away_reward,link_charac_bonus,ultimate_dungeon_reward,guild_fund,guild_fund_dungeon,quest_shop_init_cost,unseal, lottery, amplify,roi_regen) values(%d,from_unixtime(%d),%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u)",
                1, now, key,
                v->m_data[0], v->m_data[1], v->m_data[2], v->m_data[3], v->m_data[4],
                v->m_data[5], v->m_data[6], v->m_data[7], v->m_data[8], v->m_data[9],
                v->m_data[10], v->m_data[11], v->m_data[12], v->m_data[13], v->m_data[14],
                v->m_data[15], v->m_data[16], v->m_data[17], v->m_data[18], v->m_data[19],
                v->m_data[20], v->m_data[21], v->m_data[22], v->m_data[23], v->m_data[24],
                v->m_data[25], v->m_data[26], v->m_data[27], v->m_data[28], v->m_data[29],
                v->m_data[30], v->m_data[31], v->m_data[32], v->m_data[33], v->m_data[34],
                v->m_data[35], v->m_data[36], v->m_data[37], v->m_data[38], v->m_data[39],
                v->m_data[40], v->m_data[41], v->m_data[42], v->m_data[43], v->m_data[44],
                v->m_data[45], v->m_data[46], v->m_data[47]);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}

void StatisticManager::SendDBBloodDungeonStatistic(CServerHandler* handler)
{
    if (!m_blood.empty())
    {
        Packet_DBMW_Query_String pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = 0x4ed3;
        for (std::map<unsigned int, STBloodDungeonStatistic>::iterator it = m_blood.begin();
             it != m_blood.end(); ++it)
        {
            memset((char*)&pkt + 0xe, 0, 0x1001);
            snprintf((char*)&pkt + 0xe, 0x400,
                "inSert into log_blood_dungeon(occ_date,level,try_count,clear_count) values (now(),%d,%d,%d)",
                it->first, it->second.m_field0, it->second.m_field4);
            handler->SendToDB((PacketHeader*)&pkt);
        }
    }
}

void StatisticManager::SendDBFatigueBattery(CServerHandler* handler)
{
    if (!m_fatigue.empty())
    {
        Packet_DBMW_Fatigue_Battery_Money_Statistic pkt;
        for (std::map<unsigned char, STFatigueBattery>::iterator it = m_fatigue.begin();
             it != m_fatigue.end(); ++it)
        {
            unsigned int idx = (unsigned int)it->first;
            *(unsigned int*)((char*)&pkt + 0xa + idx * 8) = it->second.m_field0;
            *(unsigned int*)((char*)&pkt + 0xa + idx * 8 + 4) = it->second.m_field4;
        }
        handler->SendToDB((PacketHeader*)&pkt);
    }
}

void StatisticManager::SendDBDeathTowerValueStatistic(CServerHandler* handler)
{
    Packet_DBMW_DeathTower_Statistic_Value pkt;
    int idx = 0;
    if (!m_deathTowerValue.empty())
    {
        for (std::map<STDeathTowerValueStatisticKey, ValueStatistic>::iterator it =
                 m_deathTowerValue.begin(); it != m_deathTowerValue.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x10;
            slot[0] = it->first.m_field0;
            *(unsigned short*)(slot + 2) = it->first.m_field2;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            *(int*)(slot + 8) = it->second.m_data[0];
            *(int*)(slot + 0xc) = it->second.m_data[1];
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBDeathTowerValueStatistic", 0x217);
                log("./log/statistic", "DeathTowerValue DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBDeathTowerValueStatistic", 0x220);
            log("./log/statistic", "DeathTowerValue DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBHellPartyStatisticItem(CServerHandler* handler)
{
    Packet_DBMW_HellParty_Statistic_Item pkt;
    int idx = 0;
    if (!m_hellParty.empty())
    {
        for (std::map<STHellPartyStatisticItemKey, HellPartyItenmData>::iterator it =
                 m_hellParty.begin(); it != m_hellParty.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x24;
            slot[0] = it->first.m_field0;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            slot[9] = it->first.m_field9;
            slot[10] = it->first.m_fielda;
            *(int*)(slot + 0x14) = it->second.m_count;
            for (int k = 0; k < 6; k++)
            {
                *(int*)(slot + 0x18 + k * 4) = it->second.m_data[k];
            }
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBHellPartyStatisticItem", 0x391);
                log("./log/statistic", "HellParty DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBHellPartyStatisticItem", 0x39b);
            log("./log/statistic", "HellParty DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBUserTingTimeCheckStatistic(CServerHandler* handler)
{
    Packet_DBMW_User_Ting_TimeCheck_Write_Query pkt;
    int idx = 0;
    if (!m_userTing.empty())
    {
        for (std::map<STUserTingTimeCheckKey, int>::iterator it = m_userTing.begin();
             it != m_userTing.end(); ++it)
        {
            *(unsigned int*)((char*)&pkt + 0xe + idx * 8) = it->first.m_field0;
            *(int*)((char*)&pkt + 0xe + idx * 8 + 4) = it->second;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBUserTingTimeCheckStatistic", 0x353);
                log("./log/statistic", "UserTing DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBUserTingTimeCheckStatistic", 0x35d);
            log("./log/statistic", "UserTing DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBDeathTowerPlayDataJobStatistic(CServerHandler* handler)
{
    Packet_DBMW_DeathTower_Statistic_Playdata_Job pkt;
    int idx = 0;
    if (!m_deathTowerJob.empty())
    {
        for (std::map<STDeathTowerPlayDataJobStatisticKey, PlayDataJobStatistic>::iterator it =
                 m_deathTowerJob.begin(); it != m_deathTowerJob.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0xc;
            slot[0] = it->first.m_field0;
            *(unsigned short*)(slot + 2) = it->first.m_field2;
            *(unsigned int*)(slot + 4) = it->first.m_field4;
            slot[8] = it->first.m_field8;
            *(int*)(slot + 0xc) = it->second.m_data[0];
            *(int*)(slot + 0x10) = it->second.m_data[1];
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBDeathTowerPlayDataJobStatistic", 0x236);
                log("./log/statistic", "DeathTowerPlayDataJob DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBDeathTowerPlayDataJobStatistic", 0x240);
            log("./log/statistic", "DeathTowerPlayDataJob DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBDeathTowerPlayDataPartyStatistic(CServerHandler* handler)
{
    Packet_DBMW_DeathTower_Statistic_Playdata_Party pkt;
    int idx = 0;
    if (!m_deathTowerParty.empty())
    {
        for (std::map<STDeathTowerPlayDataPartyStatisticKey, PlayDataPartyStatistic>::iterator it =
                 m_deathTowerParty.begin(); it != m_deathTowerParty.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0xa;
            slot[0] = it->first.m_field0;
            slot[1] = it->first.m_field1;
            *(int*)(slot + 2) = it->second.m_data[0];
            *(int*)(slot + 6) = it->second.m_data[1];
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBDeathTowerPlayDataPartyStatistic", 0x26d);
                log("./log/statistic", "DeathTowerPlayDataParty DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBDeathTowerPlayDataPartyStatistic", 0x277);
            log("./log/statistic", "DeathTowerPlayDataParty DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBSecretShopStatistic(CServerHandler* handler)
{
    Packet_Secret_Shop_Statistic pkt;
    if (!m_secretShop[0].empty() || !m_secretShop[1].empty() || !m_secretShop[2].empty())
    {
        for (int s = 0; s < 3; s++)
        {
            for (std::map<int, SECRET_SHOP_STATISTIC_DATA>::iterator it = m_secretShop[s].begin();
                 it != m_secretShop[s].end(); ++it)
            {
                *(int*)((char*)&pkt + 0xe + it->first * 0x14 + 0) = it->first;
                for (int k = 0; k < 4; k++)
                {
                    *(int*)((char*)&pkt + 0xe + it->first * 0x14 + 4 + k * 4) =
                        it->second.m_data[k + 1];
                }
            }
        }
        handler->SendToDB((PacketHeader*)&pkt);
    }
}

void StatisticManager::SendDBP2PStatistic(CServerHandler* handler)
{
    Packet_P2P_Statistics pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = *(unsigned int*)((char*)&m_p2p + 0);
    *(char*)((char*)&pkt + 0xe) = *(char*)((char*)&m_p2p + 8);
    if (*(short*)((char*)&m_p2p + 0xa) == 0x7fff)
    {
        *(short*)((char*)&pkt + 0xf) = 0;
    }
    else
    {
        *(short*)((char*)&pkt + 0xf) = *(short*)((char*)&m_p2p + 0xa);
    }
    avgPing(*(int*)((char*)&m_p2p + 0x10), *(int*)((char*)&m_p2p + 0x14),
            *(short*)((char*)&m_p2p + 0xe));
    *(short*)((char*)&pkt + 0x11) = *(short*)((char*)&m_p2p + 0xc);
    *(short*)((char*)&pkt + 0x13) = *(short*)((char*)&m_p2p + 0xe);
    *(int*)((char*)&pkt + 0x15) = *(int*)((char*)&m_p2p + 0x18);
    *(int*)((char*)&pkt + 0x19) = *(int*)((char*)&m_p2p + 0x1c);
    *(int*)((char*)&pkt + 0x1d) = *(int*)((char*)&m_p2p + 0x20);
    *(int*)((char*)&pkt + 0x21) = *(int*)((char*)&m_p2p + 0x24);
    *(int*)((char*)&pkt + 0x25) = *(int*)((char*)&m_p2p + 4);
    if (*(short*)((char*)&m_p2p + 0x28) == 0x7fff)
    {
        *(short*)((char*)&pkt + 0x29) = 0;
    }
    else
    {
        *(short*)((char*)&pkt + 0x29) = *(short*)((char*)&m_p2p + 0x28);
    }
    avgPing(*(int*)((char*)&m_p2p + 0x30), *(int*)((char*)&m_p2p + 0x34),
            *(short*)((char*)&m_p2p + 0x2e));
    *(short*)((char*)&pkt + 0x2b) = *(short*)((char*)&m_p2p + 0x2a);
    *(short*)((char*)&pkt + 0x2d) = *(short*)((char*)&m_p2p + 0x2e);
    *(int*)((char*)&pkt + 0x2f) = *(int*)((char*)&m_p2p + 0x38);
    *(int*)((char*)&pkt + 0x33) = *(int*)((char*)&m_p2p + 0x3c);
    *(int*)((char*)&pkt + 0x37) = *(int*)((char*)&m_p2p + 0x40);
    *(int*)((char*)&pkt + 0x3b) = *(int*)((char*)&m_p2p + 0x44);
    handler->SendToDB((PacketHeader*)&pkt);
}

void StatisticManager::SendDBLoadingTimeReport(CServerHandler* handler)
{
    Packet_DBMW_Loading_Time_Report pkt;
    for (int i = 0; i < 9; i++)
    {
        *(char*)((char*)&pkt + 0xa + i) = handler->GetServerGroupNo();
        if (m_loading.m_data[i + 9] == 0)
        {
            *(unsigned int*)((char*)&pkt + 0x13 + i * 4) = 0;
        }
        else
        {
            *(unsigned int*)((char*)&pkt + 0x13 + i * 4) =
                m_loading.m_data[i] / m_loading.m_data[i + 9];
        }
    }
    handler->SendToDB((PacketHeader*)&pkt);
    m_loading.Reset();
}

void StatisticManager::SendDBAssertManagerStatistic(CServerHandler* handler)
{
    Packet_DBMW_Assert_Manager_Info_Write_Query pkt;
    int idx = 0;
    if (!m_assertManager.empty())
    {
        for (std::map<STAssertManagerKey, int>::iterator it = m_assertManager.begin();
             it != m_assertManager.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x206;
            memcpy(slot, it->first.m_str0, 0x100);
            *(unsigned short*)(slot + 0x100) = it->first.m_field100;
            memcpy(slot + 0x102, it->first.m_str2, 0x100);
            *(int*)(slot + 0x202) = it->second;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBAssertManagerStatistic", 0x2a7);
                log("./log/statistic", "AssertManager DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBAssertManagerStatistic", 0x2b1);
            log("./log/statistic", "AssertManager DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBTingUserTimeCheck(CServerHandler* handler)
{
    Packet_DBMW_Ting_User_TimeCheck_Write_Query pkt;
    int idx = 0;
    if (!m_field110.empty())
    {
        for (std::map<unsigned int, int>::iterator it = m_field110.begin();
             it != m_field110.end(); ++it)
        {
            *(unsigned int*)((char*)&pkt + 0xe + idx * 8) = it->first;
            *(int*)((char*)&pkt + 0xe + idx * 8 + 4) = it->second;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBTingUserTimeCheck", 0x377);
                log("./log/statistic", "TingUserTimeCheck DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBTingUserTimeCheck", 0x381);
            log("./log/statistic", "TingUserTimeCheck DB Sent %d", idx);
        }
    }
}

void StatisticManager::SendDBPowerwarLoadingTimeReport(CServerHandler* handler)
{
    Packet_DBMW_Powerwar_Loading_Time_Report pkt;
    int idx = 0;
    if (!m_pwLoading.empty())
    {
        for (std::map<STPowerwarFightLoadingKey, STPowerwarFightLoadingData>::iterator it =
                 m_pwLoading.begin(); it != m_pwLoading.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x14;
            *(unsigned int*)(slot + 0) = it->first.m_field0;
            *(unsigned short*)(slot + 4) = it->first.m_field4;
            slot[6] = it->second.m_field0;
            *(unsigned short*)(slot + 8) = it->second.m_field2;
            *(unsigned short*)(slot + 10) = it->second.m_field4;
            *(unsigned short*)(slot + 12) = it->second.m_field6;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBPowerwarLoadingTimeReport", 0x3cf);
                log("./log/statistic", "PowerwarLoading DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBPowerwarLoadingTimeReport", 0x3d9);
            log("./log/statistic", "PowerwarLoading DB Sent %d", idx);
        }
        m_pwLoading.clear();
    }
}

void StatisticManager::SendDBPowerwarLagReport(CServerHandler* handler)
{
    Packet_DBMW_Powerwar_Lag_Report pkt;
    int idx = 0;
    if (!m_pwLag.empty())
    {
        for (std::map<STPowerwarFightLagKey, STPowerwarFightLagData>::iterator it =
                 m_pwLag.begin(); it != m_pwLag.end(); ++it)
        {
            char* slot = (char*)&pkt + 0xe + idx * 0x14;
            *(unsigned int*)(slot + 0) = it->first.m_field0;
            *(unsigned short*)(slot + 4) = it->first.m_field4;
            *(unsigned int*)(slot + 8) = it->second.m_field0;
            *(unsigned int*)(slot + 12) = it->second.m_field4;
            *(unsigned int*)(slot + 16) = it->second.m_field8;
            idx++;
            if (99 < idx)
            {
                *(unsigned int*)((char*)&pkt + 0xa) = 100;
                handler->SendToDB((PacketHeader*)&pkt);
                CMyFileLog log("SendDBPowerwarLagReport", 0x33b);
                log("./log/statistic", "PowerwarLag DB Sent %d", idx);
                idx = 0;
            }
        }
        if (idx != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = idx;
            handler->SendToDB((PacketHeader*)&pkt);
            CMyFileLog log("SendDBPowerwarLagReport", 0x345);
            log("./log/statistic", "PowerwarLag DB Sent %d", idx);
        }
        m_pwLag.clear();
    }
}

void StatisticManager::WriteAssertManagerStatistic(Packet_Assert_Manager_Info* pkt)
{
    if (pkt == 0)
    {
        return;
    }
    STAssertManagerKey key;
    memcpy(key.m_str0, (char*)pkt + 0xe, *(size_t*)((char*)pkt + 10));
    AMDecrypt(key.m_str0, *(unsigned int*)((char*)pkt + 10));
    key.m_field100 = *(unsigned short*)((char*)pkt + 0x10e);
    if (-1 < *(int*)((char*)pkt + 0x110) && *(int*)((char*)pkt + 0x110) < 0x101)
    {
        memcpy(key.m_str2, (char*)pkt + 0x114, *(size_t*)((char*)pkt + 0x110));
        AMDecrypt(key.m_str2, *(unsigned int*)((char*)pkt + 0x110));
        CMyFileLog log("WriteAssertManagerStatistic", 0x2b5);
        log("./log/Statistic", "[AssertManager] Reason(%s)", key.m_str2);
    }
    if (99 < m_assertManager.size())
    {
        CMyFileLog log("WriteAssertManagerStatistic", 0x2ba);
        log("./log/Statistic", "[AssertManager] Map 100 Over!!!");
        return;
    }
    std::map<STAssertManagerKey, int>::iterator it = m_assertManager.find(key);
    bool isNew = (m_assertManager.empty() || it == m_assertManager.end());
    if (isNew)
    {
        m_assertManager.insert(std::make_pair(key, 1));
    }
    else
    {
        it->second += 1;
    }
}

void StatisticManager::AddLoadingTimeReportStatistics(Packet_Loading_Time_Report_Statistics* pkt)
{
    for (int i = 0; i <= 8; i++)
    {
        if (*(int*)((char*)pkt + i * 4 + 10) != 0)
        {
            m_loading.m_data[i] += *(int*)((char*)pkt + i * 4 + 10);
            m_loading.m_data[i + 9] += 1;
        }
        if (i == 7)
        {
            unsigned short lcount = *(unsigned short*)((char*)pkt + 0x32);
            if (lcount != 0)
            {
                STPowerwarFightLoadingKey lkey;
                lkey.m_field0 = *(unsigned int*)((char*)pkt + 0x2e);
                for (int j = 0; j < (int)lcount; j++)
                {
                    lkey.m_field4 = *(unsigned short*)((char*)pkt + j * 9 + 0x34);
                    if (m_pwLoading.size() < 0x3e9)
                    {
                        std::map<STPowerwarFightLoadingKey, STPowerwarFightLoadingData>::iterator it =
                            m_pwLoading.find(lkey);
                        bool isNew = (m_pwLoading.empty() || it == m_pwLoading.end());
                        if (isNew)
                        {
                            STPowerwarFightLoadingData v;
                            v.m_field0 = *(char*)((char*)pkt + j * 9 + 0x36);
                            v.m_field2 = *(unsigned short*)((char*)pkt + j * 9 + 0x37);
                            v.m_field4 = *(unsigned short*)((char*)pkt + j * 9 + 0x39);
                            v.m_field6 = *(unsigned short*)((char*)pkt + j * 9 + 0x3b);
                            m_pwLoading.insert(std::make_pair(lkey, v));
                        }
                        else
                        {
                            it->second.m_field2 += *(unsigned short*)((char*)pkt + j * 9 + 0x37);
                            it->second.m_field4 += *(unsigned short*)((char*)pkt + j * 9 + 0x39);
                            it->second.m_field6 += *(unsigned short*)((char*)pkt + j * 9 + 0x3b);
                        }
                    }
                }
            }
            unsigned short gcount = *(unsigned short*)((char*)pkt + 0x4e);
            if (gcount != 0)
            {
                STPowerwarFightLagKey gkey;
                gkey.m_field0 = *(unsigned int*)((char*)pkt + 0x4a);
                for (int j = 0; j < (int)gcount; j++)
                {
                    gkey.m_field4 = *(unsigned short*)((char*)pkt + j * 0xd + 0x50);
                    if (m_pwLag.size() < 0x3e9)
                    {
                        std::map<STPowerwarFightLagKey, STPowerwarFightLagData>::iterator it =
                            m_pwLag.find(gkey);
                        bool isNew = (m_pwLag.empty() || it == m_pwLag.end());
                        if (isNew)
                        {
                            STPowerwarFightLagData v;
                            v.m_field0 = *(unsigned int*)((char*)pkt + j * 0xd + 0x52);
                            v.m_field4 = *(unsigned int*)((char*)pkt + j * 0xd + 0x56);
                            v.m_field8 = *(unsigned int*)((char*)pkt + j * 0xd + 0x5a);
                            m_pwLag.insert(std::make_pair(gkey, v));
                        }
                        else
                        {
                            it->second.m_field0 += *(unsigned int*)((char*)pkt + j * 0xd + 0x52);
                            it->second.m_field4 += *(unsigned int*)((char*)pkt + j * 0xd + 0x56);
                            it->second.m_field8 += *(unsigned int*)((char*)pkt + j * 0xd + 0x5a);
                        }
                    }
                }
            }
        }
    }
}

void StatisticManager::AddMoneyLog(MoneyLogPacket* pkt, CServerHandler* handler)
{
    PacketInsertUpdate p;
    *(unsigned int*)((char*)&p + 0xa) = 4;
    *(unsigned int*)((char*)&p + 0xe) = 0x4f2d;
    unsigned int a = *(unsigned int*)((char*)pkt + 0x12);
    unsigned int b = *(unsigned int*)((char*)pkt + 0xe);
    char* uid = NumberToString(*(unsigned int*)((char*)pkt + 0x16), 0);
    snprintf((char*)&p + 0x12, 0x800,
        "inSert into log_charac_money(charac_no,occ_date,m_id,money_plus,money_minus) values(%u,cast(from_unixtime(%d) as date),%s,%u,%u)",
        *(unsigned int*)((char*)pkt + 10), *(unsigned int*)((char*)pkt + 0x1a), uid, b, a);
    *(unsigned int*)((char*)&p + 0x812) = 0x4f2e;
    snprintf((char*)&p + 0x816, 0x800,
        "update log_charac_money set money_plus=money_plus+%u,money_minus=money_minus+%u where charac_no=%u and occ_date=cast(from_unixtime(%d) as date)",
        *(unsigned int*)((char*)pkt + 0xe), *(unsigned int*)((char*)pkt + 0x12),
        *(unsigned int*)((char*)pkt + 10), *(unsigned int*)((char*)pkt + 0x1a));
    handler->SendToDB((PacketHeader*)&p);
}

void StatisticManager::SendDBLagStatistics(CServerHandler* handler, char* timeStr)
{
    Packet_DBMW_TechnicalReport_Common_Query pkt;
    char sql[1024];
    for (int i = 0; i < 8; i++)
    {
        if (0 < m_modules[i].m_data[3])
        {
            memset(sql, 0, 0x400);
            int d1 = m_modules[i].m_data[2];
            int d2 = m_modules[i].m_data[3];
            unsigned int a = m_modules[i].m_data[1];
            unsigned int b = m_modules[i].m_data[3];
            unsigned int c = m_modules[i].m_data[0];
            unsigned int d = m_modules[i].m_data[3];
            unsigned int group = handler->GetServerGroupNo();
            snprintf(sql, 0x400,
                "inSert into lag_stat_module (occ_time, server_id, module, average, deviation, count) values ('%s', %d, %d, %d, %d, %d)",
                timeStr, group & 0xff, i, c / d, a / b, d1 / d2);
            CMyFileLog log("SendDBLagStatistics", 0x6a1);
            log("./log/LagStatistics", "%s", sql);
            handler->SendToDB((PacketHeader*)&pkt);
            m_modules[i].Reset();
        }
    }
    if (!m_dungeonLag.empty())
    {
        for (std::map<unsigned short, STDungeonLagStatistics>::iterator it = m_dungeonLag.begin();
             it != m_dungeonLag.end(); ++it)
        {
            memset(sql, 0, 0x400);
            int d1 = it->second.m_data[6];
            int d2 = it->second.m_data[7];
            unsigned int a = it->second.m_data[5];
            unsigned int b = it->second.m_data[7];
            unsigned int c = it->second.m_data[4];
            unsigned int d = it->second.m_data[7];
            unsigned int e = it->second.m_data[2];
            int f = it->second.m_data[3];
            unsigned int g = it->second.m_data[1];
            unsigned int group = handler->GetServerGroupNo();
            snprintf(sql, 0x400,
                "inSert into lag_stat_dungeon (occ_time, server_id, dungeon_id, average, deviation, count, e1, e2, e3) values ('%s', %d, %d, %d, %d, %d, %d, %d, %d)",
                timeStr, group & 0xff, it->first, c / d, a / b, d1 / d2, e, f, g);
            CMyFileLog log("SendDBLagStatistics", 0x6bb);
            log("./log/LagStatistics", "%s", sql);
            handler->SendToDB((PacketHeader*)&pkt);
        }
        m_dungeonLag.clear();
    }
}

void StatisticManager::AddLagStatistics(Packet_Stat_Lag_Statistics* pkt)
{
    for (int i = 0; i < 8; i++)
    {
        if (*(int*)((char*)pkt + i * 10 + 0xb) != 0)
        {
            float avg_f = *(float*)((char*)pkt + i * 10 + 0xb);
            float dev_f = *(float*)((char*)pkt + i * 10 + 0xf);
            m_modules[i].m_data[0] += (int)(long long)(avg_f + 0.5);
            m_modules[i].m_data[1] += (int)(long long)(dev_f + 0.5);
            m_modules[i].m_data[2] +=
                (unsigned int)*(unsigned short*)((char*)pkt + i * 10 + 0x13);
            m_modules[i].m_data[3] += 1;
        }
    }
    unsigned char dcount = *(char*)((char*)pkt + 0x5b);
    if (dcount != 0 && dcount < 0xb)
    {
        for (int j = 0; j < (int)dcount; j++)
        {
            float a = *(float*)((char*)pkt + j * 0x18 + 0x5f);
            float b = *(float*)((char*)pkt + j * 0x18 + 99);
            float c = *(float*)((char*)pkt + j * 0x18 + 0x6a);
            float d = *(float*)((char*)pkt + j * 0x18 + 0x6e);
            unsigned short key = *(unsigned short*)((char*)pkt + j * 0x18 + 0x5c);
            std::map<unsigned short, STDungeonLagStatistics>::iterator it =
                m_dungeonLag.find(key);
            bool isNew = (m_dungeonLag.empty() || it == m_dungeonLag.end());
            if (isNew)
            {
                STDungeonLagStatistics v;
                v.m_data[0] = (int)(long long)(a + 0.5);
                v.m_data[1] = (int)(long long)(b + 0.5);
                v.m_data[2] = (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x67);
                v.m_data[3] = 1;
                v.m_data[4] = (int)(long long)(c + 0.5);
                v.m_data[5] = (int)(long long)(d + 0.5);
                v.m_data[6] = (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x72);
                v.m_data[7] = 1;
                m_dungeonLag.insert(std::make_pair(key, v));
            }
            else
            {
                it->second.m_data[0] += (int)(long long)(a + 0.5);
                it->second.m_data[1] += (int)(long long)(b + 0.5);
                it->second.m_data[2] +=
                    (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x67);
                it->second.m_data[3] += 1;
                it->second.m_data[4] += (int)(long long)(c + 0.5);
                it->second.m_data[5] += (int)(long long)(d + 0.5);
                it->second.m_data[6] +=
                    (unsigned int)*(unsigned short*)((char*)pkt + j * 0x18 + 0x72);
                it->second.m_data[7] += 1;
            }
        }
    }
}

int FrameLagCollector::CollectIntervalCheck(Packet_Frame_Lag_Collect_Interval_Check* pkt)
{
    if (*(short*)((char*)pkt + 10) == 0)
    {
        m_collectInterval = 0x1e;
    }
    else
    {
        m_collectInterval = (int)*(short*)((char*)pkt + 10);
    }
    printf("FrameLagCollector::CollectIntervalCheck(), Interval check : %d", m_collectInterval);
    return 0;
}

int FrameLagCollector::is_valid_statistic_packet(Packet_Frame_Lag_Statistic_Add* pkt)
{
    if ((char)*(char*)((char*)pkt + 0x1f) < 0 || 8 < (char)*(char*)((char*)pkt + 0x1f))
    {
        return 0;
    }
    for (int i = 0; i < 6; i++)
    {
        if (*(short*)((char*)pkt + i * 0x38 + 0x24) < 0) return 0;
        if (*(short*)((char*)pkt + i * 0x38 + 0x26) < 0) return 0;
        if (*(short*)((char*)pkt + i * 0x38 + 0x28) < 0) return 0;
        if (*(short*)((char*)pkt + i * 0x38 + 0x2a) < 0) return 0;
        for (int j = 0; j < 6; j++)
        {
            if (99999 < *(int*)((char*)pkt + (i * 7 + j + 4) * 8 + 0xc)) return 0;
            if (*(float*)((char*)pkt + (i * 7 + j + 4) * 8 + 0x10) == 0.0 &&
                0 < *(int*)((char*)pkt + (i * 7 + j + 4) * 8 + 0xc)) return 0;
        }
    }
    return 1;
}

int FrameLagCollector::PopMonitoringSpecData(Packet_Frame_Lag_Spec_Delete_Notify* pkt)
{
    char erased = 0;
    char again = 1;
    while (again != 0)
    {
        again = 0;
        for (std::map<int, MonitoringSpecCase>::iterator it = m_monitor.begin();
             it != m_monitor.end(); ++it)
        {
            if (*(int*)((char*)&it->second + 0x8) == *(int*)((char*)pkt + 10))
            {
                m_monitor.erase(it);
                again = 1;
                erased = 1;
                break;
            }
        }
    }
    if (erased != 0)
    {
        m_data.erase(*(int*)((char*)pkt + 10));
    }
    return 0;
}

int FrameLagCollector::PushOneFrameLagData(Packet_Frame_Lag_Statistic_Add* pkt)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    if (is_valid_statistic_packet(pkt) != 1)
    {
        return 4;
    }
    m_field6c++;
    m_directx.add_cnt(*(unsigned int*)((char*)pkt + 0x6c));
    for (int i = 0; i < 6; i++)
    {
        m_memory[i].SetUsedMemory((char)*(char*)((char*)pkt + i * 0x38 + 0x174),
                                  *(short*)((char*)pkt + i * 0x38 + 0x170));
    }
    for (std::map<int, MonitoringSpecCase>::iterator it = m_monitor.begin();
         it != m_monitor.end(); ++it)
    {
        char match = 1;
        char* s = (char*)&it->second;
        if (!(*(char*)(s + 0x8) == -1 || *(char*)(s + 0x8) == *(char*)((char*)pkt + 0x3c)))
            match = 0;
        if (match && !(*(char*)(s + 0x9) == -1 || *(char*)(s + 0x9) == *(char*)((char*)pkt + 0x38)))
            match = 0;
        if (match && !(*(int*)(s + 0xc) == -1 || *(int*)((char*)pkt + 0x28) < *(int*)(s + 0xc)))
            match = 0;
        if (match && !(*(int*)(s + 0x10) == -1 || *(int*)(s + 0x10) <= *(int*)((char*)pkt + 0x28)))
            match = 0;
        if (match && !(*(short*)(s + 0x14) == -1 || *(short*)(s + 0x14) == *(short*)((char*)pkt + 0x60)))
            match = 0;
        if (match && !(*(int*)(s + 0x18) == -1 || *(unsigned int*)(s + 0x18) == (unsigned int)*(unsigned short*)((char*)pkt + 0x48)))
            match = 0;
        if (match && !(*(int*)(s + 0x1c) == -1 || *(unsigned int*)(s + 0x1c) == (unsigned int)*(unsigned short*)((char*)pkt + 0x50)))
            match = 0;
        if (match && !(*(short*)(s + 0x20) == -1 || *(short*)(s + 0x20) == *(short*)((char*)pkt + 0x58)))
            match = 0;
        if (match && !(*(char*)(s + 0x22) == -1 || *(char*)(s + 0x22) == *(char*)((char*)pkt + 0x68)))
            match = 0;
        if (match)
        {
            std::map<int, FrameLagDataStruct>::iterator fd = m_data.find(it->first);
            if (fd != m_data.end())
            {
                FrameLagDataStruct* v = &fd->second;
                *(int*)((char*)v + 4) = *(int*)((char*)v + 4) + 1;
                if (-1 < (char)*(char*)((char*)pkt + 0x7c) &&
                    (char)*(char*)((char*)pkt + 0x7c) < 8)
                {
                    *(short*)((char*)v + 0x10 + ((char)*(char*)((char*)pkt + 0x7c) + 8) * 2) += 1;
                }
                if (-1 < *(short*)((char*)pkt + 0x80))
                {
                    *(int*)((char*)v + 0x34) += (int)*(short*)((char*)pkt + 0x80);
                    *(int*)((char*)v + 0x38) += (int)*(short*)((char*)pkt + 0x88);
                    *(int*)((char*)v + 0x30) += 1;
                }
                accFrameLagStruct(*v, (FrameLagStruct*)((char*)pkt + 0x90));
            }
        }
    }
    return 0;
}

int FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Load_Spec* pkt)
{
    if (m_field4 != 1)
    {
        return 3;
    }
    char* pb = (char*)pkt;
    if (m_field18 != *(char*)(pb + 0x18))
    {
        return 0;
    }
    int specId = *(int*)(pb + 0x14);
    if (m_map1c.find(specId) != m_map1c.end())
    {
        return 0;
    }
    m_map1c[specId] = 1;
    for (int i = 0; i < 6; i++)
    {
        int sid = *(int*)(pb + 0x18 + i * 0x38);
        if (sid == -1)
        {
            break;
        }
        int ts = *(int*)(pb + 0x2c + i * 0x10);
        if (m_field4c < ts)
        {
            m_field4c = ts;
        }
        MonitoringSpecCase mc;
        char* s = (char*)&mc;
        *(int*)(s + 0x8) = sid;
        *(char*)(s + 0xc) = *(char*)(pb + 0x20 + i * 0x38);
        *(char*)(s + 0xd) = *(char*)(pb + 0x21 + i * 0x38);
        *(char*)(s + 0xe) = *(char*)(pb + 0x22 + i * 0x38);
        *(char*)(s + 0xf) = *(char*)(pb + 0x23 + i * 0x38);
        *(char*)(s + 0x10) = *(char*)(pb + 0x24 + i * 0x38);
        *(char*)(s + 0x11) = *(char*)(pb + 0x25 + i * 0x38);
        *(int*)(s + 0x14) = *(int*)(pb + 0x28 + i * 0x38);
        *(int*)(s + 0x18) = ts;
        *(int*)(s + 0x1c) = *(int*)(pb + 0x30 + i * 0x38);
        *(int*)(s + 0x20) = *(int*)(pb + 0x34 + i * 0x38);
        *(char*)(s + 0x24) = *(char*)(pb + 0x38 + i * 0x38);
        m_monitor[sid] = mc;
        FrameLagDataStruct fd;
        m_data[sid] = fd;
    }
    if ((int)m_map1c.size() == *(int*)(pb + 0x1c))
    {
        m_field4 = 2;
        puts("============FirstSpecLoad Complete!!!==========");
    }
    return 0;
}

int FrameLagCollector::PushMonitoringSpecData(Packet_Frame_Lag_Statistic_Result_Reload_Spec* pkt)
{
    if (m_field4 != 2)
    {
        return 2;
    }
    char* pb = (char*)pkt;
    if (m_field19 != *(char*)(pb + 0x18))
    {
        return 0;
    }
    int specId = *(int*)(pb + 0x14);
    if (m_map34.find(specId) != m_map34.end())
    {
        return 0;
    }
    m_map34[specId] = 1;
    for (int i = 0; i < 6; i++)
    {
        int sid = *(int*)(pb + 0x18 + i * 0x38);
        if (sid == -1)
        {
            break;
        }
        int ts = *(int*)(pb + 0x2c + i * 0x10);
        if (m_field50 < ts)
        {
            m_field50 = ts;
        }
        std::map<int, MonitoringSpecCase>::iterator it = m_monitor.find(sid);
        if (it != m_monitor.end())
        {
            char* s = (char*)&it->second;
            *(int*)(s + 0x8) = sid;
            *(char*)(s + 0xc) = *(char*)(pb + 0x20 + i * 0x38);
            *(char*)(s + 0xd) = *(char*)(pb + 0x21 + i * 0x38);
            *(char*)(s + 0xe) = *(char*)(pb + 0x22 + i * 0x38);
            *(char*)(s + 0xf) = *(char*)(pb + 0x23 + i * 0x38);
            *(char*)(s + 0x10) = *(char*)(pb + 0x24 + i * 0x38);
            *(char*)(s + 0x11) = *(char*)(pb + 0x25 + i * 0x38);
            *(int*)(s + 0x14) = *(int*)(pb + 0x28 + i * 0x38);
            *(int*)(s + 0x18) = ts;
            *(int*)(s + 0x1c) = *(int*)(pb + 0x30 + i * 0x38);
            *(int*)(s + 0x20) = *(int*)(pb + 0x34 + i * 0x38);
            *(char*)(s + 0x24) = *(char*)(pb + 0x38 + i * 0x38);
        }
        else
        {
            MonitoringSpecCase mc;
            char* s = (char*)&mc;
            *(int*)(s + 0x8) = sid;
            *(char*)(s + 0xc) = *(char*)(pb + 0x20 + i * 0x38);
            *(char*)(s + 0xd) = *(char*)(pb + 0x21 + i * 0x38);
            *(char*)(s + 0xe) = *(char*)(pb + 0x22 + i * 0x38);
            *(char*)(s + 0xf) = *(char*)(pb + 0x23 + i * 0x38);
            *(char*)(s + 0x10) = *(char*)(pb + 0x24 + i * 0x38);
            *(char*)(s + 0x11) = *(char*)(pb + 0x25 + i * 0x38);
            *(int*)(s + 0x14) = *(int*)(pb + 0x28 + i * 0x38);
            *(int*)(s + 0x18) = ts;
            *(int*)(s + 0x1c) = *(int*)(pb + 0x30 + i * 0x38);
            *(int*)(s + 0x20) = *(int*)(pb + 0x34 + i * 0x38);
            *(char*)(s + 0x24) = *(char*)(pb + 0x38 + i * 0x38);
            m_monitor[sid] = mc;
        }
        FrameLagDataStruct fd;
        m_data[sid] = fd;
    }
    if ((int)m_map34.size() == *(int*)(pb + 0x1c))
    {
        if (m_field4c < m_field50)
        {
            m_field4c = m_field50;
        }
        puts("============ReloadSpec Complete!!!==========");
    }
    return 0;
}

void FrameLagCollector::accFrameLagStruct(FrameLagDataStruct& data, FrameLagStruct* pkt)
{
    for (int i = 0; i < 6; i++)
    {
        if (0 < *(short*)((char*)pkt + i * 0x38 + 0))
        {
            *(int*)((char*)&data + (i + 0xc) * 4 + 8) +=
                (int)*(short*)((char*)pkt + i * 0x38 + 0);
            *(int*)((char*)&data + (i + 9) * 0x10 + 8) += 1;
        }
        if (0 < *(short*)((char*)pkt + i * 0x38 + 2))
        {
            *(int*)((char*)&data + (i + 0x14) * 4) +=
                (int)*(short*)((char*)pkt + i * 0x38 + 2);
            *(int*)((char*)&data + i * 0x10 + 0x9c) += 1;
        }
        if (0 < *(short*)((char*)pkt + i * 0x38 + 4))
        {
            *(int*)((char*)&data + (i + 0x18) * 4 + 8) +=
                (int)*(short*)((char*)pkt + i * 0x38 + 4);
            *(int*)((char*)&data + i * 0x10 + 0xa0) += 1;
        }
        if (0 < *(short*)((char*)pkt + i * 0x38 + 6))
        {
            *(int*)((char*)&data + (i + 0x20) * 4) +=
                (int)*(short*)((char*)pkt + i * 0x38 + 6);
            *(int*)((char*)&data + i * 0x10 + 0xa4) += 1;
        }
        for (int j = 0; j < 6; j++)
        {
            *(int*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x10) =
                *(int*)((char*)&data + i * 4 + 4) *
                *(int*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x10);
            *(float*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x14) =
                (float)*(unsigned int*)((char*)&data + i * 4 + 4) *
                *(float*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x14);
            *(int*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x10) +=
                *(int*)((char*)pkt + j * 8 + i * 0x38 + 8);
            *(float*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x14) +=
                *(float*)((char*)pkt + j * 8 + i * 0x38 + 0xc);
            *(unsigned int*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x10) /=
                (*(int*)((char*)&data + i * 4 + 4) + 1U);
            *(float*)((char*)&data + (i * 7 + j + 0x1e) * 8 + 0x14) /=
                (float)(*(int*)((char*)&data + i * 4 + 4) + 1);
        }
        *(int*)((char*)&data + i * 4 + 4) += 1;
    }
}
