// df_guild_r — 缺失 ST 结构体构造器实现（由 gen_packet_ctors.py 生成）
#include <string.h>

#include "GuildDomain.h"
#include "DNFFunctionLib.h"


void RandomOptionField::reset()
{
    m_data[0] = 0;
    m_data[1] = 0;
    m_data[2] = 0;
}

void RandomOptionSeed::reset()
{
    m_data[0] = 0;
}

void RandomOption::reset()
{
    ((RandomOptionField*)this)->reset();
    ((RandomOptionField*)((char*)this + 3))->reset();
    ((RandomOptionField*)((char*)this + 6))->reset();
    ((RandomOptionSeed*)((char*)this + 9))->reset();
    ((RandomOptionField*)((char*)this + 10))->reset();
    ((RandomOptionSeed*)((char*)this + 0xd))->reset();
}

void UpgradeSeparateInfo::reset()
{
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0xe0);
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0xdf);
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0x3f);
}

void ReservedCapacity::reset()
{
    *(unsigned int*)(m_data + 0) = 0;
    *(unsigned int*)(m_data + 4) = 0;
    m_data[8] = 0;
}

void DnfItemInfo::reset()
{
    m_data[0] = 0;
    *(unsigned int*)(m_data + 1) = 0;
    m_data[5] = 0;
    *(unsigned int*)(m_data + 6) = 0;
    *(unsigned short*)(m_data + 10) = 0;
    *(unsigned int*)(m_data + 0xc) = 0;
    m_data[0x10] = 0;
    *(unsigned short*)(m_data + 0x11) = 0;
    ((RandomOption*)(m_data + 0x1d))->reset();
    ((UpgradeSeparateInfo*)(m_data + 0x2b))->reset();
    ((ReservedCapacity*)(m_data + 0x2c))->reset();
}

DnfItemInfo::DnfItemInfo()
{
    new ((char*)this + 0x2b) UpgradeSeparateInfo;
    new ((char*)this + 0x2c) ReservedCapacity;
    reset();
}

STAttendanceInfo::STAttendanceInfo()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
    *(unsigned int*)((char*)this + 0x8) = 0;
    *(unsigned int*)((char*)this + 0xc) = 0;
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0x14) = 0;
    *(unsigned int*)((char*)this + 0x18) = 0xffffffff;
}

STGuildBoardDBInfo::STGuildBoardDBInfo()
{
    new ((char*)this + 0x84) STGuildMemberCharacData;
    *(unsigned int*)((char*)this + 0x78) = 0;
    *(unsigned int*)((char*)this + 0x7c) = 0;
    *(unsigned int*)((char*)this + 0x80) = 0;
    memset((char*)this, 0, 0x78);
}

STGuildCallInfo::STGuildCallInfo()
{
    *(unsigned char*)((char*)this + 0x4) = 0x0;
    *(unsigned char*)((char*)this + 0x5) = 0x0;
    memset((char*)this + 0x6, 0, 0x17);
}

STGuildCargoDBInfo::STGuildCargoDBInfo()
{
    for (int i = 0; i < 0x78; i++) { new ((char*)this + 0x0 + i * 0x35) DnfItemInfo; }
    *(unsigned int*)((char*)this + 0x18d8) = 0;
}

STGuildCargoLog::STGuildCargoLog()
{
    memset((char*)this, 0, 0x30);
}

STGuildMemerDBInfo::STGuildMemerDBInfo()
{
    *(unsigned char*)((char*)this + 0x15) = 0x0;
    *(unsigned int*)((char*)this + 0x16) = 0;
    memset((char*)this, 0, 0x15);
}

STGuildRank::STGuildRank()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
}

STPowerWarPointInfo::STPowerWarPointInfo()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
}

STUserPoint::STUserPoint()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
}

STUserRank::STUserRank()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
}

ST_GuildCreateFromWeb::ST_GuildCreateFromWeb()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
    memset((char*)this + 0x8, 0, 0x17);
}

ST_Notice_Guild_Enter::ST_Notice_Guild_Enter()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
    *(unsigned int*)((char*)this + 0x8) = 0;
    memset((char*)this + 0xc, 0, 0x17);
    memset((char*)this + 0x23, 0, 0x1e);
}

ST_Notice_Guild_Secede::ST_Notice_Guild_Secede()
{
    *(unsigned int*)((char*)this + 0x4) = 0;
    *(unsigned int*)((char*)this + 0x8) = 0;
    *(unsigned short*)((char*)this + 0xc) = 0;
    memset((char*)this + 0xe, 0, 0x17);
    memset((char*)this + 0x25, 0, 0x1e);
}

STBlackUserDBType::STBlackUserDBType()
{
    *(unsigned int*)((char*)this + 0x24) = 0;
    memset((char*)this + 0x4, 0, 0x1e);
}

UpgradeSeparateInfo::UpgradeSeparateInfo()
{
    reset();
}

ReservedCapacity::ReservedCapacity()
{
    reset();
}

STGuildMemberCharacData::STGuildMemberCharacData()
{
    *(unsigned char*)this = 0xff;
    *(unsigned char*)((char*)this + 0x1) = 0xff;
    *(unsigned char*)((char*)this + 0x2) = 0x0;
    memset((char*)this + 0x3, 0, 0x1e);
}
