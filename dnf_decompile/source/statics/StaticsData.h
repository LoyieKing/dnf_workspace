#ifndef STATICS_DATA_H_
#define STATICS_DATA_H_

#include <string.h>

// ---- HWSpec：0xc ----
struct HWSpec
{
    HWSpec();
    unsigned char m_field0;   // +0（0xff）
    unsigned int m_field4;    // +4（0xffffffff）
    unsigned int m_field8;    // +8（0xffffffff）
};

// ---- ErrorValue：0x8 ----
struct ErrorValue
{
    ErrorValue();
    ErrorValue(unsigned short value, unsigned int param);
    unsigned short m_field0;  // +0（0xffff）
    unsigned int m_field4;    // +4（0xffffffff）
};

// ---- STSpecCount：0xe ----
struct STSpecCount
{
    STSpecCount();
    unsigned short m_field0;  // +0
    HWSpec m_spec;            // +2
};

// ---- STErrorCount：0xa ----
struct STErrorCount
{
    STErrorCount();
    unsigned int m_field0;   // +0
    unsigned short m_field4; // +4
    unsigned int m_field6;   // +6
};

// ---- STSpecStatic：0xc ----
struct STSpecStatic
{
    STSpecStatic(const HWSpec& spec);
    bool operator<(const STSpecStatic& other) const;
    unsigned char m_field0;   // +0
    unsigned int m_field4;    // +4
    unsigned int m_field8;    // +8
};

// ---- STErrorStatic：0x8 ----
struct STErrorStatic
{
    STErrorStatic(const ErrorValue& value);
    bool operator<(const STErrorStatic& other) const;
    unsigned short m_field0;  // +0
    unsigned int m_field4;    // +4
};

// ---- STCubeStatisticKey：0xd ----
struct STCubeStatisticKey
{
    STCubeStatisticKey();
    STCubeStatisticKey(const STCubeStatisticKey& other);
    ~STCubeStatisticKey();
    bool operator<(STCubeStatisticKey other) const;
    unsigned int m_field0;  // +0
    unsigned int m_field4;  // +4
    unsigned int m_field8;  // +8
    unsigned char m_fieldc; // +0xc
};

// ---- STPartyStatisticKey：0xe ----
struct STPartyStatisticKey
{
    STPartyStatisticKey();
    ~STPartyStatisticKey();
    bool operator<(const STPartyStatisticKey& other) const;
    unsigned short m_field0;  // +0
    unsigned int m_field4;    // +4
    char m_field8;            // +8
    unsigned char m_field9;   // +9
    unsigned char m_fielda;   // +0xa
    unsigned char m_fieldb;   // +0xb
    unsigned char m_fieldc;   // +0xc
    char m_fieldd;            // +0xd
};

// ---- PartyStatistic：0x30 ----
struct PartyStatistic
{
    PartyStatistic();
    ~PartyStatistic();
    void Reset();
    PartyStatistic& operator+=(const PartyStatistic& other);
    int m_data[12];
};

// ---- STPartyJobStatisticKey：0x15 ----
struct STPartyJobStatisticKey
{
    STPartyJobStatisticKey();
    ~STPartyJobStatisticKey();
    bool operator<(const STPartyJobStatisticKey& other) const;
    unsigned short m_field0;  // +0
    unsigned int m_field4;    // +4
    char m_field8;            // +8
    unsigned char m_field9;   // +9
    unsigned char m_fielda;   // +0xa
    unsigned char m_fieldb;   // +0xb
    unsigned char m_fieldc;   // +0xc
    char m_fieldd;            // +0xd
    unsigned int m_field10;   // +0x10
    char m_field14;           // +0x14
};

// ---- PartyJobStatistic：0x8 ----
struct PartyJobStatistic
{
    PartyJobStatistic();
    ~PartyJobStatistic();
    void reset();
    PartyJobStatistic& operator+=(const PartyJobStatistic& other);
    int m_data[2];
};

// ---- STPartyCharacKey：0x12 ----
struct STPartyCharacKey
{
    STPartyCharacKey();
    ~STPartyCharacKey();
    bool operator<(const STPartyCharacKey& other) const;
    unsigned short m_field0;  // +0
    unsigned int m_field4;    // +4
    char m_field8;            // +8
    unsigned char m_field9;   // +9
    unsigned char m_fielda;   // +0xa
    unsigned int m_fieldc;    // +0xc
    char m_field10;           // +0x10
    char m_field11;           // +0x11
};

// ---- PartyCharacStatistic：0x34 ----
struct PartyCharacStatistic
{
    PartyCharacStatistic();
    ~PartyCharacStatistic();
    void Reset();
    PartyCharacStatistic& operator+=(const PartyCharacStatistic& other);
    int m_data[13];
};

// ---- STDeathTowerValueStatisticKey：0x8 ----
struct STDeathTowerValueStatisticKey
{
    STDeathTowerValueStatisticKey();
    ~STDeathTowerValueStatisticKey();
    bool operator<(const STDeathTowerValueStatisticKey& other) const;
    char m_field0;            // +0
    unsigned short m_field2;  // +2
    unsigned int m_field4;    // +4
};

// ---- ValueStatistic：0x8 ----
struct ValueStatistic
{
    ValueStatistic();
    ~ValueStatistic();
    void Reset();
    ValueStatistic& operator+=(const ValueStatistic& other);
    int m_data[2];
};

// ---- STDeathTowerPlayDataJobStatisticKey：0x9 ----
struct STDeathTowerPlayDataJobStatisticKey
{
    STDeathTowerPlayDataJobStatisticKey();
    ~STDeathTowerPlayDataJobStatisticKey();
    bool operator<(const STDeathTowerPlayDataJobStatisticKey& other) const;
    char m_field0;            // +0
    unsigned short m_field2;  // +2
    unsigned int m_field4;    // +4
    char m_field8;            // +8
};

// ---- PlayDataJobStatistic：0x8 ----
struct PlayDataJobStatistic
{
    PlayDataJobStatistic();
    ~PlayDataJobStatistic();
    void Reset();
    PlayDataJobStatistic& operator+=(const PlayDataJobStatistic& other);
    int m_data[2];
};

// ---- STDeathTowerPlayDataPartyStatisticKey：0x2 ----
struct STDeathTowerPlayDataPartyStatisticKey
{
    STDeathTowerPlayDataPartyStatisticKey();
    ~STDeathTowerPlayDataPartyStatisticKey();
    bool operator<(const STDeathTowerPlayDataPartyStatisticKey& other) const;
    char m_field0;  // +0
    char m_field1;  // +1
};

// ---- PlayDataPartyStatistic：0x8 ----
struct PlayDataPartyStatistic
{
    PlayDataPartyStatistic();
    ~PlayDataPartyStatistic();
    void Reset();
    PlayDataPartyStatistic& operator+=(const PlayDataPartyStatistic& other);
    int m_data[2];
};

// ---- STPacketOverflowKey：0x4 ----
struct STPacketOverflowKey
{
    STPacketOverflowKey();
    ~STPacketOverflowKey();
    void Reset();
    bool operator<(const STPacketOverflowKey& other) const;
    unsigned char m_field0;  // +0
    unsigned short m_field2; // +2
};

// ---- STAssertManagerKey：0x202 ----
struct STAssertManagerKey
{
    STAssertManagerKey();
    ~STAssertManagerKey();
    void Reset();
    bool operator<(const STAssertManagerKey& other) const;
    char m_str0[0x100];     // +0
    unsigned short m_field100;  // +0x100
    char m_str2[0x100];     // +0x102
};

// ---- STUserTingTimeCheckKey：0x4 ----
struct STUserTingTimeCheckKey
{
    STUserTingTimeCheckKey();
    ~STUserTingTimeCheckKey();
    void Reset();
    bool operator<(const STUserTingTimeCheckKey& other) const;
    unsigned int m_field0;  // +0
};

// ---- STHellPartyStatisticItemKey：0xb ----
struct STHellPartyStatisticItemKey
{
    STHellPartyStatisticItemKey();
    ~STHellPartyStatisticItemKey();
    bool operator<(const STHellPartyStatisticItemKey& other) const;
    unsigned char m_field0;  // +0
    unsigned int m_field4;   // +4
    char m_field8;           // +8
    char m_field9;           // +9
    char m_fielda;           // +0xa
};

// ---- HellPartyItenmData：0x1c ----
struct HellPartyItenmData
{
    HellPartyItenmData();
    ~HellPartyItenmData();
    void Reset();
    HellPartyItenmData& operator+=(const HellPartyItenmData& other);
    int m_count;       // +0（1）
    int m_data[6];     // +4
};

// ---- LoadingTimeReport：0x48 ----
struct LoadingTimeReport
{
    LoadingTimeReport();
    ~LoadingTimeReport();
    void Reset();
    int m_data[18];
};

// ---- STPowerwarFightLoadingKey：0x6 ----
struct STPowerwarFightLoadingKey
{
    STPowerwarFightLoadingKey();
    ~STPowerwarFightLoadingKey();
    void Reset();
    bool operator<(const STPowerwarFightLoadingKey& other) const;
    unsigned int m_field0;    // +0
    unsigned short m_field4;  // +4
};

// ---- STPowerwarFightLoadingData：0x8 ----
struct STPowerwarFightLoadingData
{
    STPowerwarFightLoadingData();
    ~STPowerwarFightLoadingData();
    void Reset();
    char m_field0;            // +0
    unsigned short m_field2;  // +2
    unsigned short m_field4;  // +4
    unsigned short m_field6;  // +6
};

// ---- STPowerwarFightLagKey：0x6 ----
struct STPowerwarFightLagKey
{
    STPowerwarFightLagKey();
    ~STPowerwarFightLagKey();
    void Reset();
    bool operator<(const STPowerwarFightLagKey& other) const;
    unsigned int m_field0;    // +0
    unsigned short m_field4;  // +4
};

// ---- STPowerwarFightLagData：0xc ----
struct STPowerwarFightLagData
{
    STPowerwarFightLagData();
    ~STPowerwarFightLagData();
    void Reset();
    unsigned int m_field0;  // +0
    unsigned int m_field4;  // +4
    unsigned int m_field8;  // +8
};

// ---- STFatigueBattery：0x8 ----
struct STFatigueBattery
{
    STFatigueBattery();
    int m_field0;  // +0
    int m_field4;  // +4
};

// ---- STModuleLagStatistics：0x10 ----
struct STModuleLagStatistics
{
    STModuleLagStatistics();
    ~STModuleLagStatistics();
    void Reset();
    int m_data[4];
};

// ---- STDungeonLagStatistics：0x20 ----
struct STDungeonLagStatistics
{
    STDungeonLagStatistics();
    ~STDungeonLagStatistics();
    void Reset();
    int m_data[8];
};

// ---- ValueStatisticData：0x78 ----
struct ValueStatisticData
{
    ValueStatisticData();
    int m_data[0x1e];
};

// ---- CirculationStatisticData：0xc0 ----
struct CirculationStatisticData
{
    CirculationStatisticData();
    int m_data[0x30];
};

// ---- stP2PStatistics：0x48 ----
struct stP2PStatistics
{
    stP2PStatistics();
    void Init();
    char m_data[0x48];
};

// ---- stDisjointAvatarInfoTotal：0x144 ----
struct stDisjointAvatarInfoTotal
{
    stDisjointAvatarInfoTotal();
    void clear();
    int checkCondition(int a, int b, int c);
    void incCount(int a, int b, int c, int d);
    char m_data[0x144];
};

// ---- stCreateEmblemStatistic：0x1c ----
struct stCreateEmblemStatistic
{
    void increaseCount(int idx);
    void clear();
    int m_data[7];
};

// ---- SECRET_SHOP_STATISTIC_DATA：0x14 ----
struct SECRET_SHOP_STATISTIC_DATA
{
    SECRET_SHOP_STATISTIC_DATA();
    int m_data[5];
};

// ---- GoldCardEventStatistic：0x9 ----
struct GoldCardEventStatistic
{
    GoldCardEventStatistic();
    char m_field0;   // +0
    unsigned int m_field1;  // +1
    unsigned int m_field5;  // +5
};

// ---- TowerOfDespairStatistic_Value：0x8 ----
struct TowerOfDespairStatistic_Value
{
    TowerOfDespairStatistic_Value();
    unsigned int m_field0;  // +0
    unsigned int m_field4;  // +4
};

// ---- STReasonCrashDownKey / STBloodDungeonStatistic / STUserTingTimeCheckKey 值 ----
struct STReasonCrashDownKey
{
    bool operator<(const STReasonCrashDownKey& other) const
    {
        return memcmp(this, &other, sizeof(*this)) < 0;
    }
    char m_data[0x10];
};

struct STBloodDungeonStatistic
{
    unsigned int m_field0;  // +0
    unsigned int m_field4;  // +4
    char m_data[8];         // +8
};

#endif // STATICS_DATA_H_
