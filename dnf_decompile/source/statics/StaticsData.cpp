// df_statics_r — 统计键/值结构实现
#include <string.h>

#include "StaticsData.h"

HWSpec::HWSpec()
{
    m_field0 = 0xff;
    m_field4 = 0xffffffff;
    m_field8 = 0xffffffff;
}

ErrorValue::ErrorValue()
{
    m_field0 = 0xffff;
    m_field4 = 0xffffffff;
}

ErrorValue::ErrorValue(unsigned short value, unsigned int param)
{
    m_field0 = value;
    m_field4 = param;
}

STSpecCount::STSpecCount()
    : m_field0(0)
{
}

STErrorCount::STErrorCount()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field6 = 0;
}

STSpecStatic::STSpecStatic(const HWSpec& spec)
{
    m_field0 = spec.m_field0;
    m_field4 = spec.m_field4;
    m_field8 = spec.m_field8;
}

bool STSpecStatic::operator<(const STSpecStatic& other) const
{
    if ((unsigned char)m_field0 < (unsigned char)other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if ((int)m_field4 == (int)other.m_field4 && m_field8 < other.m_field8) return true;
    }
    return false;
}

STErrorStatic::STErrorStatic(const ErrorValue& value)
{
    m_field0 = value.m_field0;
    m_field4 = value.m_field4;
}

bool STErrorStatic::operator<(const STErrorStatic& other) const
{
    if (m_field0 < other.m_field0) return true;
    if (m_field0 == other.m_field0 && m_field4 < other.m_field4) return true;
    return false;
}

STCubeStatisticKey::STCubeStatisticKey()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    m_fieldc = 0;
}

STCubeStatisticKey::STCubeStatisticKey(const STCubeStatisticKey& other)
{
    m_field0 = other.m_field0;
    m_field4 = other.m_field4;
    m_field8 = other.m_field8;
    m_fieldc = other.m_fieldc;
}

STCubeStatisticKey::~STCubeStatisticKey()
{
}

bool STCubeStatisticKey::operator<(STCubeStatisticKey other) const
{
    if (m_field0 < other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if (m_field8 < other.m_field8) return true;
            if (m_field8 == other.m_field8 && (unsigned char)m_fieldc <
                                                  (unsigned char)other.m_fieldc) return true;
        }
    }
    return false;
}

#define KEY_LESS(cls) \
    bool cls::operator<(const cls& other) const \
    { \
        return false; \
    }

// STPartyStatisticKey
STPartyStatisticKey::STPartyStatisticKey()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    m_field9 = 0;
    m_fielda = 0;
    m_fieldb = 0;
    m_fieldc = 0;
    m_fieldd = 0;
}

STPartyStatisticKey::~STPartyStatisticKey()
{
}

bool STPartyStatisticKey::operator<(const STPartyStatisticKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if ((short)m_field0 == (short)other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if ((unsigned char)m_field8 < (unsigned char)other.m_field8) return true;
            if (m_field8 == other.m_field8)
            {
                if ((unsigned char)m_field9 < (unsigned char)other.m_field9) return true;
                if (m_field9 == other.m_field9)
                {
                    if ((unsigned char)m_fielda < (unsigned char)other.m_fielda) return true;
                    if (m_fielda == other.m_fielda)
                    {
                        if ((unsigned char)m_fieldb < (unsigned char)other.m_fieldb) return true;
                        if (m_fieldb == other.m_fieldb)
                        {
                            if ((unsigned char)m_fieldc < (unsigned char)other.m_fieldc) return true;
                            if (m_fieldc == other.m_fieldc &&
                                (unsigned char)m_fieldd < (unsigned char)other.m_fieldd) return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

PartyStatistic::PartyStatistic()
{
    Reset();
}

PartyStatistic::~PartyStatistic()
{
}

void PartyStatistic::Reset()
{
    for (int i = 0; i < 12; i++)
    {
        m_data[i] = 0;
    }
    m_data[11] = 1;
}

PartyStatistic& PartyStatistic::operator+=(const PartyStatistic& other)
{
    for (int i = 0; i < 11; i++)
    {
        m_data[i] += other.m_data[i];
    }
    m_data[11] += 1;
    return *this;
}

// STPartyJobStatisticKey
STPartyJobStatisticKey::STPartyJobStatisticKey()
{
    memset(this, 0, sizeof(*this));
}

STPartyJobStatisticKey::~STPartyJobStatisticKey()
{
}

bool STPartyJobStatisticKey::operator<(const STPartyJobStatisticKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if ((unsigned char)m_field8 < (unsigned char)other.m_field8) return true;
            if (m_field8 == other.m_field8)
            {
                if ((unsigned char)m_field9 < (unsigned char)other.m_field9) return true;
                if (m_field9 == other.m_field9)
                {
                    if ((unsigned char)m_fielda < (unsigned char)other.m_fielda) return true;
                    if (m_fielda == other.m_fielda)
                    {
                        if ((unsigned char)m_fieldb < (unsigned char)other.m_fieldb) return true;
                        if (m_fieldb == other.m_fieldb)
                        {
                            if ((unsigned char)m_fieldc < (unsigned char)other.m_fieldc) return true;
                            if (m_fieldc == other.m_fieldc)
                            {
                                if ((unsigned char)m_fieldd < (unsigned char)other.m_fieldd)
                                    return true;
                                if (m_fieldd == other.m_fieldd)
                                {
                                    if (m_field10 < other.m_field10) return true;
                                    if (m_field10 == other.m_field10 &&
                                        (unsigned char)m_field14 <
                                            (unsigned char)other.m_field14) return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

PartyJobStatistic::PartyJobStatistic()
{
    reset();
}

PartyJobStatistic::~PartyJobStatistic()
{
}

void PartyJobStatistic::reset()
{
    m_data[0] = 1;
    m_data[1] = 0;
}

PartyJobStatistic& PartyJobStatistic::operator+=(const PartyJobStatistic& other)
{
    m_data[0] += 1;
    m_data[1] += other.m_data[1];
    return *this;
}

// STPartyCharacKey
STPartyCharacKey::STPartyCharacKey()
{
    memset(this, 0, sizeof(*this));
}

STPartyCharacKey::~STPartyCharacKey()
{
}

bool STPartyCharacKey::operator<(const STPartyCharacKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if ((unsigned char)m_field8 < (unsigned char)other.m_field8) return true;
            if (m_field8 == other.m_field8)
            {
                if ((unsigned char)m_field9 < (unsigned char)other.m_field9) return true;
                if (m_field9 == other.m_field9)
                {
                    if ((unsigned char)m_fielda < (unsigned char)other.m_fielda) return true;
                    if (m_fielda == other.m_fielda)
                    {
                        if (m_fieldc < other.m_fieldc) return true;
                        if (m_fieldc == other.m_fieldc)
                        {
                            if ((unsigned char)m_field10 < (unsigned char)other.m_field10)
                                return true;
                            if (m_field10 == other.m_field10 &&
                                (unsigned char)m_field11 < (unsigned char)other.m_field11)
                                return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}

PartyCharacStatistic::PartyCharacStatistic()
{
    Reset();
}

PartyCharacStatistic::~PartyCharacStatistic()
{
}

void PartyCharacStatistic::Reset()
{
    for (int i = 0; i < 13; i++)
    {
        m_data[i] = 0;
    }
    m_data[11] = 1;
}

PartyCharacStatistic& PartyCharacStatistic::operator+=(const PartyCharacStatistic& other)
{
    for (int i = 0; i < 12; i++)
    {
        m_data[i] += other.m_data[i];
    }
    m_data[11] += 1;
    m_data[12] += other.m_data[12];
    return *this;
}

// STDeathTowerValueStatisticKey
STDeathTowerValueStatisticKey::STDeathTowerValueStatisticKey()
{
    m_field0 = 0;
    m_field2 = 0;
    m_field4 = 0;
}

STDeathTowerValueStatisticKey::~STDeathTowerValueStatisticKey()
{
}

bool STDeathTowerValueStatisticKey::operator<(const STDeathTowerValueStatisticKey& other) const
{
    if ((char)m_field0 < (char)other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if ((short)m_field2 < (short)other.m_field2) return true;
        if ((short)m_field2 == (short)other.m_field2 && m_field4 < other.m_field4) return true;
    }
    return false;
}

ValueStatistic::ValueStatistic()
{
    Reset();
}

ValueStatistic::~ValueStatistic()
{
}

void ValueStatistic::Reset()
{
    m_data[0] = 0;
    m_data[1] = 1;
}

ValueStatistic& ValueStatistic::operator+=(const ValueStatistic& other)
{
    m_data[0] += other.m_data[0];
    m_data[1] += 1;
    return *this;
}

// STDeathTowerPlayDataJobStatisticKey
STDeathTowerPlayDataJobStatisticKey::STDeathTowerPlayDataJobStatisticKey()
{
    memset(this, 0, sizeof(*this));
}

STDeathTowerPlayDataJobStatisticKey::~STDeathTowerPlayDataJobStatisticKey()
{
}

bool STDeathTowerPlayDataJobStatisticKey::operator<(
    const STDeathTowerPlayDataJobStatisticKey& other) const
{
    if ((unsigned char)m_field0 < (unsigned char)other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field2 < other.m_field2) return true;
        if (m_field2 == other.m_field2)
        {
            if (m_field4 < other.m_field4) return true;
            if (m_field4 == other.m_field4 &&
                (unsigned char)m_field8 < (unsigned char)other.m_field8) return true;
        }
    }
    return false;
}

PlayDataJobStatistic::PlayDataJobStatistic()
{
    Reset();
}

PlayDataJobStatistic::~PlayDataJobStatistic()
{
}

void PlayDataJobStatistic::Reset()
{
    m_data[0] = 0;
    m_data[1] = 1;
}

PlayDataJobStatistic& PlayDataJobStatistic::operator+=(const PlayDataJobStatistic& other)
{
    m_data[0] += other.m_data[0];
    m_data[1] += 1;
    return *this;
}

// STDeathTowerPlayDataPartyStatisticKey
STDeathTowerPlayDataPartyStatisticKey::STDeathTowerPlayDataPartyStatisticKey()
{
    m_field0 = 0;
    m_field1 = 0;
}

STDeathTowerPlayDataPartyStatisticKey::~STDeathTowerPlayDataPartyStatisticKey()
{
}

bool STDeathTowerPlayDataPartyStatisticKey::operator<(
    const STDeathTowerPlayDataPartyStatisticKey& other) const
{
    if ((char)m_field0 < (char)other.m_field0) return true;
    if (m_field0 == other.m_field0 && (char)m_field1 < (char)other.m_field1) return true;
    return false;
}

PlayDataPartyStatistic::PlayDataPartyStatistic()
{
    Reset();
}

PlayDataPartyStatistic::~PlayDataPartyStatistic()
{
}

void PlayDataPartyStatistic::Reset()
{
    m_data[0] = 0;
    m_data[1] = 1;
}

PlayDataPartyStatistic& PlayDataPartyStatistic::operator+=(const PlayDataPartyStatistic& other)
{
    m_data[0] += other.m_data[0];
    m_data[1] += 1;
    return *this;
}

STPacketOverflowKey::STPacketOverflowKey()
{
    Reset();
}

STPacketOverflowKey::~STPacketOverflowKey()
{
}

void STPacketOverflowKey::Reset()
{
    m_field0 = 0;
    m_field2 = 0;
}

bool STPacketOverflowKey::operator<(const STPacketOverflowKey& other) const
{
    if ((unsigned char)m_field0 < (unsigned char)other.m_field0) return true;
    if (m_field2 < other.m_field2) return true;
    return false;
}

STAssertManagerKey::STAssertManagerKey()
{
    Reset();
}

STAssertManagerKey::~STAssertManagerKey()
{
}

void STAssertManagerKey::Reset()
{
    memset(m_str0, 0, 0x100);
    m_field100 = 0;
    memset(m_str2, 0, 0x100);
}

bool STAssertManagerKey::operator<(const STAssertManagerKey& other) const
{
    int r = strcmp(m_str0, other.m_str0);
    if (r == 0)
    {
        if (m_field100 < other.m_field100)
        {
            return true;
        }
        r = strcmp(m_str2, other.m_str2);
        if (r == 0)
        {
            return false;
        }
        return true;
    }
    return true;
}

STUserTingTimeCheckKey::STUserTingTimeCheckKey()
{
    Reset();
}

STUserTingTimeCheckKey::~STUserTingTimeCheckKey()
{
}

void STUserTingTimeCheckKey::Reset()
{
    m_field0 = 0;
}

bool STUserTingTimeCheckKey::operator<(const STUserTingTimeCheckKey& other) const
{
    return m_field0 < other.m_field0;
}

STHellPartyStatisticItemKey::STHellPartyStatisticItemKey()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field9 = 0;
    m_field8 = 0;
    m_fielda = 0;
}

STHellPartyStatisticItemKey::~STHellPartyStatisticItemKey()
{
}

bool STHellPartyStatisticItemKey::operator<(const STHellPartyStatisticItemKey& other) const
{
    if ((unsigned char)m_field0 < (unsigned char)other.m_field0) return true;
    if (m_field0 == other.m_field0)
    {
        if (m_field4 < other.m_field4) return true;
        if (m_field4 == other.m_field4)
        {
            if ((unsigned char)m_field8 < (unsigned char)other.m_field8) return true;
            if (m_field8 == other.m_field8)
            {
                if ((unsigned char)m_field9 < (unsigned char)other.m_field9) return true;
                if (m_field9 == other.m_field9)
                {
                    if ((unsigned char)m_fielda < (unsigned char)other.m_fielda) return true;
                    if (m_fielda == other.m_fielda &&
                        (unsigned char)m_fielda < (unsigned char)other.m_fielda) return true;
                }
            }
        }
    }
    return false;
}

HellPartyItenmData::HellPartyItenmData()
{
    Reset();
}

HellPartyItenmData::~HellPartyItenmData()
{
}

void HellPartyItenmData::Reset()
{
    memset(m_data, 0, 0x18);
    m_count = 1;
}

HellPartyItenmData& HellPartyItenmData::operator+=(const HellPartyItenmData& other)
{
    for (int i = 0; i < 6; i++)
    {
        m_data[i] += other.m_data[i];
    }
    m_count += 1;
    return *this;
}

LoadingTimeReport::LoadingTimeReport()
{
    Reset();
}

LoadingTimeReport::~LoadingTimeReport()
{
}

void LoadingTimeReport::Reset()
{
    for (int i = 0; i < 9; i++)
    {
        m_data[i] = 0;
        m_data[i + 9] = 0;
    }
}

STPowerwarFightLoadingKey::STPowerwarFightLoadingKey()
{
    Reset();
}

STPowerwarFightLoadingKey::~STPowerwarFightLoadingKey()
{
}

void STPowerwarFightLoadingKey::Reset()
{
    m_field0 = 0;
    m_field4 = 0;
}

bool STPowerwarFightLoadingKey::operator<(const STPowerwarFightLoadingKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if ((int)m_field0 == (int)other.m_field0 && m_field4 < other.m_field4) return true;
    return false;
}

STPowerwarFightLoadingData::STPowerwarFightLoadingData()
{
    Reset();
}

STPowerwarFightLoadingData::~STPowerwarFightLoadingData()
{
}

void STPowerwarFightLoadingData::Reset()
{
    m_field0 = 0;
    m_field2 = 0;
    m_field4 = 0;
    m_field6 = 0;
}

STPowerwarFightLagKey::STPowerwarFightLagKey()
{
    Reset();
}

STPowerwarFightLagKey::~STPowerwarFightLagKey()
{
}

void STPowerwarFightLagKey::Reset()
{
    m_field0 = 0;
    m_field4 = 0;
}

bool STPowerwarFightLagKey::operator<(const STPowerwarFightLagKey& other) const
{
    if (m_field0 < other.m_field0) return true;
    if ((int)m_field0 == (int)other.m_field0 && m_field4 < other.m_field4) return true;
    return false;
}

STPowerwarFightLagData::STPowerwarFightLagData()
{
    Reset();
}

STPowerwarFightLagData::~STPowerwarFightLagData()
{
}

void STPowerwarFightLagData::Reset()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
}

STFatigueBattery::STFatigueBattery()
{
    m_field0 = 0;
    m_field4 = 0;
}

STModuleLagStatistics::STModuleLagStatistics()
{
    Reset();
}

STModuleLagStatistics::~STModuleLagStatistics()
{
}

void STModuleLagStatistics::Reset()
{
    m_data[0] = 0;
    m_data[1] = 0;
    m_data[2] = 0;
    m_data[3] = 0;
}

STDungeonLagStatistics::STDungeonLagStatistics()
{
    Reset();
}

STDungeonLagStatistics::~STDungeonLagStatistics()
{
}

void STDungeonLagStatistics::Reset()
{
    for (int i = 0; i < 8; i++)
    {
        m_data[i] = 0;
    }
}

ValueStatisticData::ValueStatisticData()
{
    for (int i = 0; i < 0x1e; i++)
    {
        m_data[i] = 0;
    }
}

CirculationStatisticData::CirculationStatisticData()
{
    for (int i = 0; i < 0x30; i++)
    {
        m_data[i] = 0;
    }
}

stP2PStatistics::stP2PStatistics()
{
    Init();
}

void stP2PStatistics::Init()
{
    memset(m_data, 0, 0x48);
    *(unsigned short*)(m_data + 10) = 0x7fff;
    *(unsigned short*)(m_data + 0x28) = 0x7fff;
}

stDisjointAvatarInfoTotal::stDisjointAvatarInfoTotal()
{
    clear();
}

void stDisjointAvatarInfoTotal::clear()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                *(int*)(m_data + ((i * 9 + j) * 2 + k) * 4) = 0;
            }
            *(int*)(m_data + (i * 9 + j + 0x34) * 4 + 8) = 0;
        }
    }
}

int stDisjointAvatarInfoTotal::checkCondition(int a, int b, int c)
{
    if (a < 0 || 2 < a) return 0;
    if (b < 0 || 8 < b) return 0;
    if (c < 0 || 1 < c) return 0;
    return 1;
}

void stDisjointAvatarInfoTotal::incCount(int a, int b, int c, int d)
{
    if (checkCondition(a, b, c) != 0)
    {
        *(int*)(m_data + ((a * 9 + b) * 2 + c) * 4) += 1;
        *(int*)(m_data + (a * 9 + b + 0x34) * 4 + 8) += d;
    }
}

void stCreateEmblemStatistic::increaseCount(int idx)
{
    if (-1 < idx && idx < 7)
    {
        m_data[idx] += 1;
    }
}

void stCreateEmblemStatistic::clear()
{
    for (int i = 0; i < 7; i++)
    {
        m_data[i] = 0;
    }
}

SECRET_SHOP_STATISTIC_DATA::SECRET_SHOP_STATISTIC_DATA()
{
    m_data[0] = 0;
    m_data[1] = 0;
    m_data[2] = 0;
    m_data[3] = 0;
    m_data[4] = 0;
}

GoldCardEventStatistic::GoldCardEventStatistic()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field5 = 0;
}

TowerOfDespairStatistic_Value::TowerOfDespairStatistic_Value()
{
    m_field0 = 0;
    m_field4 = 0;
}
