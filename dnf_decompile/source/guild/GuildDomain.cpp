// df_guild_r — 域类骨架（CGuild/CUser/CGuildManager/CPowerManager/CTcpNetSystem 等）
#include <string.h>
#include <time.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <fcntl.h>
#include <unistd.h>

#include "GuildDomain.h"
#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildPacket.h"
#include "GuildMisc.h"
#include "GuildPackets.h"
#include "tinyxml.h"
#include "Packet_Monitor_Call_Guild_Members_ToChannel.h"
#include "Packet_Monitor_Call_Guild_Members_ToChannel_Next.h"
#include "Packet_Monitor_Call_Guild_All_Members_ToChannel.h"
#include "Packet_Monitor_Call_Guild_All_Members_ToChannel_Next.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

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

int CheckDayScheduleTimeOver(int hour, long t)
{
    time_t now = time(0);
    time_t target = (time_t)((long)now - (long)hour * 86400);
    return t < target;
}

bool CheckDailyScheduleTimeOver(int hour, long t)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    tm local;
    local.tm_sec = pt->tm_sec;
    local.tm_min = pt->tm_min;
    local.tm_hour = pt->tm_hour;
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
    time_t target = mktime(&local);
    return t < target;
}

int CheckDayHourScheduleTimeOver(int day, int hour, long t)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    tm local;
    local.tm_sec = pt->tm_sec;
    local.tm_min = pt->tm_min;
    local.tm_hour = pt->tm_hour;
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
    time_t target = mktime(&local);
    return t < target;
}

void GetScheduleTimeAsWDay(int day, int hour)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    tm local;
    local.tm_sec = pt->tm_sec;
    local.tm_min = pt->tm_min;
    local.tm_hour = pt->tm_hour;
    local.tm_mday = pt->tm_mday;
    local.tm_mon = pt->tm_mon;
    local.tm_year = pt->tm_year;
    local.tm_wday = pt->tm_wday;
    local.tm_yday = pt->tm_yday;
    local.tm_isdst = pt->tm_isdst;
    local.tm_gmtoff = pt->tm_gmtoff;
    local.tm_zone = pt->tm_zone;
    int diff = day - local.tm_wday;
    if (diff < 0 || (diff == 0 && hour <= local.tm_hour))
    {
        diff += 7;
    }
    time_t t2 = mktime(&local);
    time_t target = (time_t)(diff * 86400 + t2);
    localtime(&target);
}

bool GuildWarPairDataCompare(const std::pair<unsigned int, STGuildWarInfo*>& a,
                             const std::pair<unsigned int, STGuildWarInfo*>& b)
{
    return *(unsigned int*)((char*)b.second + 4) < *(unsigned int*)((char*)a.second + 4);
}

CBlackUser::CBlackUser()
{
    memset(m_data, 0, sizeof(m_data));
}

CBlackUser::~CBlackUser()
{
}

void CBlackUser::SetBlackUser(char* name, unsigned int time)
{
    strncpy(m_data, name, 0x1e);
    *(unsigned int*)(m_data + 0x20) = time;
}

char* CBlackUser::GetName()
{
    return m_data;
}

unsigned int CBlackUser::GetOccurTime()
{
    return *(unsigned int*)(m_data + 0x20);
}

STGuildSkill::STGuildSkill()
{
    memset(m_data, 0, sizeof(m_data));
}

STGuildMemberProxy::STGuildMemberProxy()
{
    memset(m_data, 0, sizeof(m_data));
}

STGuildDBInfoOnly::STGuildDBInfoOnly()
{
    memset(m_data, 0, sizeof(m_data));
}

STGuildDBInfo::STGuildDBInfo()
{
    memset((void*)&m_info, 0, sizeof(m_info));
    for (int i = 0; i < 300; i++)
    {
        memset((void*)&m_members[i], 0, sizeof(m_members[i]));
    }
}

STGuildAgitDBInfo::STGuildAgitDBInfo()
{
    memset(m_data, 0, sizeof(m_data));
}

CScheduler::~CScheduler()
{
}

void CScheduler::SetSpecialHour(int hour)
{
}

void CScheduler::SetSpecialDayHour(int day, int hour)
{
}

void CScheduler::SetSpecificDayScheduleHour(int day, int hour)
{
}

int CScheduler::IsOnTimeSpecialHour(int hour, int min)
{
    return 0;
}

int CScheduler::IsOnTimeSpecialDayHour(int day, int hour, int min)
{
    return 0;
}

int CScheduler::GetSpecificDayScheduleHour(int day)
{
    return 0;
}

void CScheduler::Clear()
{
    m_day = 0xff;
    m_min = 0xff;
    m_hour = 0xff;
    m_sec = 0xff;
    m_week = 0xffff;
    m_flag1 = 0xff;
    m_flag2 = 0xff;
    for (int i = 0; i < 7; i++)
    {
        *(char*)((char*)this + i * 4 + 8) = 0;
        *(char*)((char*)this + i * 4 + 9) = 0xff;
        *(char*)((char*)this + i * 4 + 10) = 0xff;
        *(char*)((char*)this + i * 4 + 0xb) = 0xff;
    }
}

void CScheduler::SetSpecialWeekDayHour(std::vector<STPowerWarScheduleTime> schedule)
{
    for (std::vector<STPowerWarScheduleTime>::iterator it = schedule.begin();
         it != schedule.end(); ++it)
    {
        char* p = (char*)&(*it);
        *(char*)((char*)this + p[0] * 4 + 8) = 1;
        *(char*)((char*)this + p[0] * 4 + 9) = p[1];
        *(char*)((char*)this + p[0] * 4 + 10) = p[2];
        *(char*)((char*)this + p[0] * 4 + 0xb) = 0;
    }
}

void CScheduler::SetSpecialWeekDayHour(int day, int hour)
{
    *(char*)((char*)this + day * 4 + 8) = 1;
    *(char*)((char*)this + day * 4 + 9) = (char)hour;
}

int CScheduler::IsOnTimeSpecialWeekDayHour(int day, int hour, int min)
{
    if (*(char*)((char*)this + day * 4 + 8) != 0 &&
        *(char*)((char*)this + day * 4 + 9) == (char)hour)
    {
        return 1;
    }
    return 0;
}

void CScheduler::GetNextScheduleTime(unsigned char& hour, unsigned char& min)
{
    time_t now = time(0);
    tm* pt = localtime(&now);
    hour = (unsigned char)pt->tm_hour;
    min = (unsigned char)pt->tm_min;
}

CUser::CUser()
{
    m_dbid = 0;
    m_charNo = 0;
    m_gameServer = 0;
    m_tcpGameServer = 0;
    m_posState = 0;
    m_channel = -1;
    memset(m_charInfo, 0, sizeof(m_charInfo));
    m_job = 0xff;
    m_growthType = 0xff;
    m_guildMemFlag = 0xffff;
    m_field3a = 1;
    memset(m_field3b, 0, sizeof(m_field3b));
    m_guild = 0;
    m_field48 = 0;
    memset((void*)&m_guildDBInfo, 0, sizeof(m_guildDBInfo));
    m_field7c = 0;
    m_field7e = 0x7f;
    m_field80 = 0;
    m_field84 = 0;
}

CUser::~CUser()
{
}

void* CUser::operator new(unsigned int size)
{
    return m_UserMemPool_.alloc();
}

void CUser::operator delete(void* p)
{
    m_UserMemPool_.free(p);
}

void CUser::operator delete(void* p, unsigned int size)
{
    m_UserMemPool_.free(p, size);
}

unsigned int CUser::GetDBID()
{
    return m_dbid;
}

void CUser::SetDBID(unsigned int dbid)
{
    m_dbid = dbid;
}

unsigned int CUser::GetUniqCharNo()
{
    return m_charNo;
}

void CUser::SetUniqCharNo(unsigned int charNo)
{
    m_charNo = charNo;
}

int CUser::GetIdByChannel()
{
    return m_channel;
}

void CUser::SetIdByChannel(int channel)
{
    m_channel = channel;
}

CGameServer* CUser::GetGameServer()
{
    return m_gameServer;
}

void CUser::SetGameServer(CGameServer* server)
{
    m_gameServer = server;
}

CTcpGameServer* CUser::GetTcpGameServer()
{
    return m_tcpGameServer;
}

void CUser::SetTcpGameServer(CTcpGameServer* server)
{
    m_tcpGameServer = server;
}

void CUser::SetUserPosState(unsigned char state)
{
    m_posState = state;
}

char* CUser::GetCharName()
{
    return m_charInfo;
}

void CUser::ResetCharInfo()
{
    m_charNo = 0;
    ResetGuild();
    m_job = 0xff;
    m_growthType = 0xff;
    m_guildMemFlag = 0xffff;
    memset(m_charInfo, 0, 0x1e);
}

void CUser::SetUserInfo_CharNo(char sex, char job, short flag, unsigned int charNo, char* name)
{
    m_job = (unsigned char)sex;
    m_growthType = (unsigned char)job;
    *(short*)((char*)this + 0x38) = flag;
    m_charNo = charNo;
    memcpy(m_charInfo, name, 0x1d);
}

unsigned char CUser::GetJob()
{
    return m_job;
}

unsigned char CUser::GetGrowthType()
{
    return m_growthType;
}

unsigned char CUser::GetSex()
{
    return *(unsigned char*)((char*)this + 0x3a);
}

void CUser::SetSex(unsigned char sex)
{
    *(unsigned char*)((char*)this + 0x3a) = sex;
}

void CUser::SetSsn(char* ssn)
{
    memcpy((char*)this + 0x3b, ssn, 6);
}

char* CUser::GetSsn()
{
    return (char*)this + 0x3b;
}

unsigned char CUser::GetLevel()
{
    return *(unsigned short*)((char*)this + 0x38);
}

void CUser::SetGuildInviteFact(unsigned int guildId, unsigned int callerId, unsigned char fact)
{
    *(unsigned int*)((char*)this + 0x84) = guildId;
    *(unsigned int*)((char*)this + 0x80) = callerId;
    *(unsigned char*)((char*)this + 0x7e) = fact;
}

unsigned int CUser::GetGuildInviteGuildId()
{
    return *(unsigned int*)((char*)this + 0x84);
}

unsigned int CUser::GetGuildInviteCallerId()
{
    return *(unsigned int*)((char*)this + 0x80);
}

void CUser::GuildInviteProcess()
{
}

void CUser::SetGuildMemberMemo(const char* memo)
{
    memset((char*)this + 0x4a, 0, 0x15);
    size_t n = strlen(memo);
    if ((int)n < 0x15)
    {
        memcpy((char*)this + 0x4a, memo, n);
    }
    else
    {
        memcpy((char*)this + 0x4a, memo, 0x14);
    }
}

void CUser::SetUserChangableInfo(short type, char value)
{
    *(short*)((char*)this + 0x38) = type;
    *(char*)((char*)this + 0x37) = value;
}

void CUser::ChangeGuildMemberGrade(unsigned char grade)
{
    if (grade == 1 || grade == 2 || *(unsigned char*)((char*)this + 0x5f) == 1 ||
        *(unsigned char*)((char*)this + 0x5f) == 2)
    {
        CMyFileLog log("ChangeGuildMemberGrade", 0x183);
        log("./log/GuildModify", "char(%s), old(%d), new(%d)", GetCharName(),
            (unsigned int)*(unsigned char*)((char*)this + 0x5f), (unsigned int)grade);
    }
    *(unsigned char*)((char*)this + 0x5f) = grade;
    SendGuildMemberDBInfo(*(STGuildMemerDBInfo*)((char*)this + 0x4a));
}

void CUser::SaveGuildMember(unsigned char type, unsigned int value, CServerHandler* handler,
                            unsigned char flag)
{
    if (IsSetGuildMemFlag(0x10) && IsSetGuildMemFlag(4))
    {
        ResetGuildMemFlag(0x10);
    }
}

void CUser::SendGuildMemberDBInfo(STGuildMemerDBInfo& info)
{
    if (GetUniqCharNo() == 0)
    {
        CMyFileLog log("SendGuildMemberDBInfo", 0x193);
        log("./log/GuildModify", "SendGuildMemberDBInfo(), 0 == this->GetUniqCharNo() ERR");
    }
    else
    {
        // 发送 Packet_Monitor_Notice_Guild_Member_Info（骨架：仅拷贝）
    }
}

STGuildMemerDBInfo* CUser::GetGuildMemDBInfo()
{
    return &m_guildDBInfo;
}

unsigned int CUser::GetGuildKey()
{
    return m_guild ? m_guild->GetGuildKey() : 0;
}

void CUser::ResetGuild()
{
    DetachGuild();
    memset((void*)&m_guildDBInfo, 0, 0x1a);
    m_field48 = 0;
    m_field7e = 0x7f;
    m_field80 = 0;
    m_field84 = 0;
}

void CUser::AttachGuild(CGuild* guild)
{
    m_guild = guild;
}

void CUser::DetachGuild()
{
    m_guild = 0;
}

unsigned short CUser::GetGuildMemFlag()
{
    return m_field48;
}

void CUser::SetGuildMemFlag(unsigned short flag)
{
    m_field48 = flag;
}

void CUser::ResetGuildMemFlag(unsigned short flag)
{
    m_field48 &= (unsigned short)~flag;
}

bool CUser::IsSetGuildMemFlag(unsigned short flag)
{
    return (m_field48 & flag) != 0;
}

bool CUser::IsSubGuildMaster()
{
    return m_guild != 0 && m_guild->IsSubGuildMaster(m_dbid);
}

void CUser::SendSetGuildKeyToUser(unsigned int guildKey, unsigned int grade)
{
}

void CUser::ChangeCharName(char* name)
{
    if (m_charNo != 0 && m_job != 0)
    {
        memset(m_charInfo, 0, 0x1e);
        memcpy(m_charInfo, name, 0x1d);
    }
}

void CUser::SendToGameserver(char* buf, int len)
{
    if (m_gameServer != 0)
    {
        m_gameServer->SendToServer(buf, len);
    }
}

void CUser::SendTcpGameserver(PacketHeader* pkt)
{
}

void CUser::QueryGuildMember(CServerHandler* handler)
{
}

void CUser::MakeGameServerSendUserInfoPacket(unsigned int guildKey)
{
}

void CUser::LoadGuildMember(unsigned int guildKey, STGuildMemerDBInfo& info)
{
    m_guildDBInfo = info;
    m_guildMemFlag = (unsigned short)guildKey;
}

void CUser::AddGuildMemberPoint(unsigned int point)
{
    unsigned int old = *(unsigned int*)((char*)this + 0x60);
    *(unsigned int*)((char*)this + 0x60) += point;
    SetGuildMemFlag(0x10);
    if (*(unsigned int*)((char*)this + 0x60) < old)
    {
        *(unsigned int*)((char*)this + 0x60) = old;
    }
}

void CUser::ResetGuildPoint()
{
    *(unsigned int*)((char*)this + 0x60) = 0;
}

CUserManager::CUserManager()
{
    m_app = 0;
}

CUserManager::~CUserManager()
{
}

void CUserManager::Init(CApplication* app)
{
    m_app = app;
}

void CUserManager::Process()
{
}

void CUserManager::ProcessByMinute()
{
    if (m_app != 0)
    {
        CGuildManager* gm = m_app->Get_GuildManager();
        for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
             it != m_users.end(); ++it)
        {
            if (it->second->GetGuildKey() != 0)
            {
                gm->AttendGuild(it->second->GetGuildKey(), it->second->GetUniqCharNo());
            }
        }
    }
}

int CUserManager::Size()
{
    return (int)m_users.size();
}

CUser* CUserManager::CreateUser(unsigned int dbid, unsigned int charNo, char* charName,
                                int channel, CGameServer* server)
{
    CUser* user = new CUser;
    user->SetDBID(dbid);
    user->SetUniqCharNo(charNo);
    user->SetIdByChannel(channel);
    user->SetGameServer(server);
    if (InsertUser(dbid, user) != 1)
    {
        char* mid = NumberToString(dbid, 0);
        CMyFileLog log("CreateUser", 0x13c);
        log("./log/LoginErr",
            "uDBID(%s) uCharNo(%d) is already exist at m_mapUsers!", mid, charNo);
    }
    user->SetUserPosState(2);
    if (charNo != 0)
    {
        if (InsertUser_CharNo(charNo, user) != 1)
        {
            char* mid = NumberToString(dbid, 0);
            CMyFileLog log("CreateUser", 0x146);
            log("./log/LoginErr",
                "uDBID(%s) uCharNo(%d) is already exist at m_mapCharNoUsers!", mid, charNo);
        }
        if (InsertUser_CharName(charName, user) != 1)
        {
            char* mid = NumberToString(dbid, 0);
            CMyFileLog log("CreateUser", 0x14a);
            log("./log/LoginErr",
                "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!", mid, charName);
        }
        user->SetUserPosState(3);
    }
    return user;
}

int CUserManager::InsertUser(unsigned int dbid, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_users.insert(std::make_pair(dbid, user));
    return 1;
}

int CUserManager::InsertUser_CharNo(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_charNoUsers.insert(std::make_pair(charNo, user));
    return 1;
}

int CUserManager::InsertUser_CharName(char* name, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_charNameUsers.insert(std::make_pair(std::string(name), user));
    return 1;
}

void CUserManager::DeleteUser(unsigned int dbid)
{
    if (m_users.empty())
    {
        return;
    }
    std::map<unsigned int, CUser*>::iterator it = m_users.find(dbid);
    if (it != m_users.end())
    {
        CUser* user = it->second;
        if (user->GetGameServer() == 0)
        {
            return;
        }
        if (m_users.erase(dbid) == 1)
        {
            char* mid = NumberToString(dbid, 0);
            CMyFileLog log("DeleteUser", 0x5f);
            log("./log/User",
                "[USER LOGOUT] Disconnected User DB ID : %s, Char No : %d , char name:%s\n",
                mid, user->GetUniqCharNo(), user->GetCharName());
            delete user;
        }
    }
}

void CUserManager::DeleteUser(CUser* user)
{
    if (m_users.empty() || user == 0)
    {
        return;
    }
    if (user->GetGameServer() == 0)
    {
        return;
    }
    unsigned int dbid = user->GetDBID();
    if (m_users.erase(dbid) == 1)
    {
        char* mid = NumberToString(dbid, 0);
        CMyFileLog log("DeleteUser", 0x7d);
        log("./log/User", "[USER LOGOUT] Disconnected User DB ID : %s\n", mid);
        delete user;
    }
}

void CUserManager::DeleteUser_CharNo(unsigned int charNo)
{
    std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.find(charNo);
    if (it != m_charNoUsers.end())
    {
        DeleteUser(it->second);
        m_charNoUsers.erase(it);
    }
}

void CUserManager::DeleteUser_CharName(std::string name)
{
    std::map<std::string, CUser*>::iterator it = m_charNameUsers.find(name);
    if (it != m_charNameUsers.end())
    {
        DeleteUser(it->second);
        m_charNameUsers.erase(it);
    }
}

CUser* CUserManager::FindUser(unsigned int dbid) const
{
    std::map<unsigned int, CUser*>::const_iterator it = m_users.find(dbid);
    return it == m_users.end() ? 0 : it->second;
}

CUser* CUserManager::FindUser_CharNo(unsigned int charNo) const
{
    std::map<unsigned int, CUser*>::const_iterator it = m_charNoUsers.find(charNo);
    return it == m_charNoUsers.end() ? 0 : it->second;
}

CUser* CUserManager::FindUser_CharName(std::string name) const
{
    std::map<std::string, CUser*>::const_iterator it = m_charNameUsers.find(name);
    return it == m_charNameUsers.end() ? 0 : it->second;
}

void CUser::ResetBlackList()
{
    m_blackList.clear();
}

void CUser::GetBlackList(unsigned char& count, STBlackUserDBType* list)
{
    count = 0;
    if (!m_blackList.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
             it != m_blackList.end() && count < 0xff; ++it, count++)
        {
        }
    }
}

void CUser::GetBlackList(unsigned char& count, unsigned int* list)
{
    count = 0;
    if (!m_blackList.empty())
    {
        for (std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.begin();
             it != m_blackList.end() && count < 0xff; ++it, count++)
        {
            list[count] = it->first;
        }
    }
}

void CUser::RegisterToCashBlackList(std::map<unsigned int, CBlackUser*>& map)
{
    for (std::map<unsigned int, CBlackUser*>::iterator it = map.begin();
         it != map.end(); ++it)
    {
        m_blackList[it->first] = it->second;
    }
}

int CUser::RegisterToBlackList(unsigned int charNo, char* name)
{
    if (name == 0 || charNo == 0)
    {
        CMyFileLog log("RegisterToBlackList", 0x1c0);
        log("./log/BlackList", "Register Err(%d)(%s)", charNo, name);
        return 0;
    }
    CBlackUser* bu = new CBlackUser;
    bu->SetBlackUser(name, (unsigned int)time(0));
    m_blackList.insert(std::make_pair(charNo, bu));
    return 1;
}

int CUser::RegisterToBlackList(unsigned int charNo, char* name, unsigned int param)
{
    if (name == 0 || charNo == 0)
    {
        return 0;
    }
    CBlackUser* bu = new CBlackUser;
    bu->SetBlackUser(name, param);
    m_blackList.insert(std::make_pair(charNo, bu));
    return 1;
}

int CUser::DeleteToBlackList(unsigned int charNo)
{
    std::map<unsigned int, CBlackUser*>::iterator it = m_blackList.find(charNo);
    if (it != m_blackList.end())
    {
        delete it->second;
        m_blackList.erase(it);
        return 1;
    }
    return 0;
}

int CUser::IsBlackUser(unsigned int charNo)
{
    if (m_blackList.empty())
    {
        return 0;
    }
    return m_blackList.find(charNo) != m_blackList.end() ? 1 : 0;
}

unsigned short CUser::GetBlackListSize()
{
    return (unsigned short)m_blackList.size();
}

void* CUser::GetMapBlackList()
{
    return &m_blackList;
}

unsigned short CUser::GetBlackListDBFlag()
{
    return m_field7c;
}

void CUser::SetBlackListDBFlag(unsigned short flag)
{
    m_field7c = flag;
}

void CUserManager::DeleteUsersOnGameServerDown(CGameServer* server)
{
    std::vector<unsigned int> toDelete;
    for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
         it != m_users.end(); ++it)
    {
        if (it->second->GetGameServer() == server)
        {
            toDelete.push_back(it->first);
        }
    }
    for (std::vector<unsigned int>::iterator it = toDelete.begin(); it != toDelete.end(); ++it)
    {
        DeleteUser(*it);
    }
}

void CUserManager::DeleteUsersOnTcpGameServerDown(CTcpGameServer* server)
{
    std::vector<unsigned int> toDelete;
    for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
         it != m_users.end(); ++it)
    {
        if (it->second->GetTcpGameServer() == server)
        {
            toDelete.push_back(it->first);
        }
    }
    for (std::vector<unsigned int>::iterator it = toDelete.begin(); it != toDelete.end(); ++it)
    {
        DeleteUser(*it);
    }
}

void CUserManager::DeleteBlackUserOnCharacDelete(unsigned int charNo)
{
    std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.find(charNo);
    if (it != m_charNoUsers.end())
    {
        it->second->ResetBlackList();
    }
}

void CUserManager::RefreshGuildAttendanceInfo()
{
    if (m_app != 0)
    {
        CGuildManager* gm = m_app->Get_GuildManager();
        for (std::map<unsigned int, CUser*>::iterator it = m_users.begin();
             it != m_users.end(); ++it)
        {
            if (it->second->GetGuildKey() != 0)
            {
                gm->AttendGuild(it->second->GetGuildKey(), it->second->GetUniqCharNo());
            }
        }
    }
}

CGuildWar::CGuildWar()
{
    new (m_data) std::vector<std::pair<unsigned int, STGuildWarInfo*> >();
    memset(m_data + 0xc, 0, 5);
}

CGuildWar::~CGuildWar()
{
    ((std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data)->~vector();
}

void CGuildWar::DBSaveProcess(CApplication* app)
{
}

int CGuildWar::IsGuildWarEnterableGuild(unsigned int guildId)
{
    return 0;
}

void CGuildWar::SetGuildWarEvent(bool flag, unsigned char param)
{
    *(char*)((char*)this + 0xc) = (char)flag;
    *(char*)((char*)this + 0xf) = (char)param;
}

bool CGuildWar::IsGuildWarEventOn()
{
    return *(char*)((char*)this + 0xc) != 0;
}

void CGuildWar::InitGuildWarInfo()
{
    *(char*)((char*)this + 0xd) = 0;
    *(char*)((char*)this + 0xf) = 0;
    *(char*)((char*)this + 0xc) = 0;
    Clear_VtGuildWarInfo();
}

void CGuildWar::Clear_VtGuildWarInfo()
{
    std::vector<void*>* v = (std::vector<void*>*)((char*)this + 0x10);
    v->clear();
}

void CGuildWar::AddGuildWarPoint(unsigned int guildId, int point)
{
    if (guildId != 0)
    {
        STGuildWarInfo* info = (STGuildWarInfo*)Find_GuildWarInfo(guildId);
        if (info != 0)
        {
            *(int*)((char*)info + 4) = *(int*)((char*)info + 4) + point;
            *(char*)((char*)this + 0x10) = 1;
            printGuildWarRank();
        }
    }
}

int CGuildWar::Rank()
{
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >* vec =
        (std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data;
    if (vec->empty())
    {
        return 0;
    }
    if (vec->size() < 2)
    {
        return 0;
    }
    std::sort(vec->begin(), vec->end(), GuildWarPairDataCompare);
    printGuildWarRank();
    return 1;
}

void CGuildWar::RankProcess()
{
}

int CGuildWar::SameRankWork()
{
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >* vec =
        (std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data;
    if (vec->empty())
    {
        return 0;
    }
    STGuildWarInfo* first = vec->front().second;
    if (first == 0)
    {
        return 0;
    }
    int field4 = *(int*)((char*)first + 4);
    int count = 0;
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it = vec->begin();
    for (; it != vec->end(); ++it)
    {
        if (it->second != 0)
        {
            if (field4 != *(int*)((char*)it->second + 4))
            {
                break;
            }
            count++;
        }
    }
    if (1 < count)
    {
        std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator maxIt = vec->begin();
        unsigned int maxVal = *(unsigned int*)((char*)maxIt->second + 0x20);
        std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it2 = vec->begin();
        for (int i = 1; i < count; i++)
        {
            ++it2;
            if (maxVal < *(unsigned int*)((char*)it2->second + 0x20))
            {
                maxVal = *(unsigned int*)((char*)it2->second + 0x20);
                maxIt = it2;
            }
        }
        if (*(unsigned int*)((char*)vec->front().second + 0x20) != maxVal)
        {
            DNFFLib::Swap<STGuildWarInfo>(vec->front().second, maxIt->second);
        }
    }
    return 1;
}

void CGuildWar::printGuildWarRank()
{
}

void CGuildWar::GetGuildWarInfo(unsigned int* a, unsigned int* b, unsigned short* c)
{
    if (a != 0 && b != 0 && c != 0)
    {
        std::vector<std::pair<unsigned int, STGuildWarInfo*> >* vec =
            (std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data;
        int idx = 0;
        for (std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it = vec->begin();
             it != vec->end(); ++it)
        {
            if (it->second != 0)
            {
                a[idx] = *(unsigned int*)it->second;
                b[idx] = *(unsigned int*)((char*)it->second + 4);
                idx++;
                c[idx - 1] = (unsigned short)idx;
            }
        }
    }
}

int CGuildWar::GetGuildWarInfo(ST_Guild_War_Rank_Info* info)
{
    if (info == 0)
    {
        return 0;
    }
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >* vec =
        (std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data;
    int count = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it = vec->begin();
         it != vec->end(); ++it)
    {
        if (it->second != 0)
        {
            char* out = (char*)info + count * 0x21;
            *(unsigned int*)(out + 0) = *(unsigned int*)((char*)it->second + 0);
            *(unsigned int*)(out + 4) = *(unsigned int*)((char*)it->second + 4);
            memcpy(out + 10, (char*)it->second + 8, 0x16);
            count++;
            *(short*)(out + 8) = (short)count;
        }
    }
    return 0;
}

int CGuildWar::Find_GuildWarInfo(unsigned int guildId)
{
    std::vector<std::pair<unsigned int, STGuildWarInfo*> >* vec =
        (std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data;
    if (vec->empty())
    {
        return 0;
    }
    for (std::vector<std::pair<unsigned int, STGuildWarInfo*> >::iterator it = vec->begin();
         it != vec->end(); ++it)
    {
        if (it->second != 0 && *(unsigned int*)it->second == guildId)
        {
            return (int)it->second;
        }
    }
    return 0;
}

void CGuildWar::Insert_GuildWarInfo(STGuildWarInfo* info)
{
    if (info == 0)
    {
        CMyFileLog log("Insert_GuildWarInfo", 0x95);
        log("./log/GuildWar", "[INSERT_ERR]info == 0\n");
        return;
    }
    CMyFileLog log("Insert_GuildWarInfo", 0x90);
    log("./log/GuildWar", "[INSERT]\tGuild Key : %d\tGuild Point : %d\n",
        *(unsigned int*)info, *(unsigned int*)((char*)info + 4));
    ((std::vector<std::pair<unsigned int, STGuildWarInfo*> >*)m_data)
        ->push_back(std::make_pair(*(unsigned int*)info, info));
}

int CGuildWar::GetGuildWarInfoDBSave(unsigned int* a, unsigned int* b)
{
    return 0;
}

CGuild::CGuild(unsigned int guildKey)
{
    m_guildKey = guildKey;
    m_field1c = 0;
    m_field1e = 0;
    memset((void*)&m_dbInfo, 0, sizeof(m_dbInfo));
    memset((void*)&m_agitInfo, 0, sizeof(m_agitInfo));
    memset(m_field4d0a, 0, sizeof(m_field4d0a));
    m_field4d70 = 300;
    m_field4d72 = 300;
    m_field4d74 = 300;
    m_field4d92 = 0;
    m_field4d94 = 0;
    m_field4d96 = 0;
    m_field4db0 = 0;
}

CGuild::~CGuild()
{
}

void* CGuild::operator new(unsigned int size)
{
    return m_GuildMemPool_.alloc();
}

void CGuild::operator delete(void* p)
{
    m_GuildMemPool_.free(p);
}

void CGuild::operator delete(void* p, unsigned int size)
{
    m_GuildMemPool_.free(p, size);
}

unsigned int CGuild::GetGuildKey()
{
    return m_guildKey;
}

unsigned short CGuild::GetGuildLevel()
{
    return *(unsigned short*)((char*)this + 0x3b);
}

char* CGuild::GetGuildName()
{
    return (char*)((char*)this + 0x20);
}

unsigned short CGuild::GetGuildRank()
{
    return *(unsigned short*)((char*)this + 0x48);
}

unsigned int CGuild::GetGuildExp()
{
    return *(unsigned int*)((char*)this + 0x49);
}

unsigned char CGuild::GetPowerSide()
{
    return *(unsigned char*)((char*)this + 0xb5);
}

void CGuild::SetPowerSide(unsigned char side)
{
    if (IsSetGuildDBFlag(4))
    {
        m_field4d96 = 1;
        *(unsigned char*)((char*)this + 0xb5) = side;
    }
}

void CGuild::SetPowerSecedeTime(unsigned int time)
{
    *(unsigned int*)((char*)this + 0xb6) = time;
}

unsigned int CGuild::GetPowerWarPoint()
{
    return *(unsigned int*)((char*)this + 0xba);
}

CGuildCargo* CGuild::GetGuildCargo()
{
    return (CGuildCargo*)((char*)this + 0x4db4);
}

CGuildBoard* CGuild::GetGuildBoard()
{
    return (CGuildBoard*)((char*)this + 0x66c4);
}

unsigned int CGuild::GetMasterId()
{
    return (m_field1c & 2) == 0 ? 0 : *(unsigned int*)((char*)this + 0x37);
}

unsigned int CGuild::GetGuildFund()
{
    return (m_field1c & 4) == 0 ? 0 : *(unsigned int*)((char*)this + 0xc0);
}

unsigned short CGuild::GetGuildDBFlag()
{
    return m_field1c;
}

void CGuild::SetGuildDBFlag(unsigned short flag)
{
    m_field1c |= flag;
}

bool CGuild::IsSetGuildDBFlag(unsigned short flag)
{
    return (m_field1c & flag) != 0;
}

void CGuild::EnableDBSaveFlag()
{
    m_field1c |= 1;
}

bool CGuild::GetDBSaveFlag()
{
    return (m_field1c & 1) != 0;
}

bool CGuild::IsSubGuildMaster(unsigned int dbid)
{
    return *(unsigned short*)((char*)this + 0x43) == 1;
}

bool CGuild::IsGuildMaster(unsigned int dbid)
{
    return GetMasterId() == dbid;
}

int CGuild::InsertGuildMember(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    user->AttachGuild(this);
    std::pair<std::map<unsigned int, CUser*>::iterator, bool> r =
        m_members.insert(std::make_pair(charNo, user));
    if (!r.second)
    {
        CMyFileLog log("InsertGuildMember", 0x7b);
        log("./log/GuildMember",
            "[INSERT_ERR]\tAlready Exist : Guild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n",
            GetGuildKey(), charNo, user->GetCharName(), (int)m_members.size());
        return 0;
    }
    return 1;
}

int CGuild::DeleteGuildMember(unsigned int charNo, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    if (m_members.erase(charNo) == 0)
    {
        CMyFileLog log("DeleteGuildMember", 0x96);
        log("./log/GuildMember",
            "CGuild::DeleteGuildMember\tException Break Possible! Or Check Using Function FindUser() or FindUser_CharNo()\tGuild Key : %d\tChar Key : %d,\tChar Name : %s\tLogin Mem Cnt : %d\n",
            GetGuildKey(), charNo, user->GetCharName(), (int)m_members.size());
        return 0;
    }
    user->DetachGuild();
    return 1;
}

CUser* CGuild::FindGuildMember(unsigned int charNo)
{
    if (m_members.empty())
    {
        return 0;
    }
    std::map<unsigned int, CUser*>::iterator it = m_members.find(charNo);
    return it == m_members.end() ? 0 : it->second;
}

void CGuild::AddGuildFund(unsigned int fund)
{
    if ((m_field1c & 4) == 0)
    {
        CMyFileLog log("AddGuildFund", 0xb06);
        log("./log/GuildFund",
            "CPacketTranslater::AddGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n",
            GetGuildKey(), *(unsigned int*)((char*)this + 0xc0), fund,
            (unsigned int)m_field1c, (int)m_members.size());
    }
    else
    {
        m_field4d96 = 1;
        unsigned int* fundPtr = (unsigned int*)((char*)this + 0xc0);
        *fundPtr += fund;
        if ((unsigned char)*(char*)((char*)this + 0x3b) < 0x10 || *fundPtr < 0x989681)
        {
            if (20000000 < *fundPtr)
            {
                *fundPtr = 20000000;
            }
        }
        else
        {
            *fundPtr = 10000000;
        }
        CMyFileLog log("AddGuildFund", 0xb0a);
        log("./log/GuildFund",
            "CPacketTranslater::AddGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",
            GetGuildKey(), *fundPtr, fund);
    }
}

void CGuild::SubGuildFund(unsigned int fund)
{
    if ((m_field1c & 4) == 0)
    {
        CMyFileLog log("SubGuildFund", 0xb24);
        log("./log/GuildFund",
            "CPacketTranslater::SubGuildFund() Error!! : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u), STATE (%d), CONNECTING_GUILD_MEMBER_CNT (%d)\n",
            GetGuildKey(), *(unsigned int*)((char*)this + 0xc0), fund,
            (unsigned int)m_field1c, (int)m_members.size());
    }
    else
    {
        m_field4d96 = 1;
        unsigned int* fundPtr = (unsigned int*)((char*)this + 0xc0);
        if (fund < *fundPtr)
        {
            *fundPtr -= fund;
        }
        else
        {
            *fundPtr = 0;
        }
        CMyFileLog log("SubGuildFund", 0xb28);
        log("./log/GuildFund",
            "CPacketTranslater::SubGuildFund() : GUILD_ID (%u), GUILD_FUND (%u), GOLD (%u)\n",
            GetGuildKey(), *fundPtr, fund);
    }
}

bool CGuild::IsAddableGuildFund(unsigned int fund)
{
    if ((m_field1c & 4) == 0)
    {
        return 0x5f != 0;
    }
    if ((unsigned char)*(char*)((char*)this + 0x3b) < 0x10)
    {
        if (20000000 < *(int*)((char*)this + 0xc0) + (int)fund)
        {
            return 0x5f != 0;
        }
    }
    else if (10000000 < *(int*)((char*)this + 0xc0) + (int)fund)
    {
        return 0x5f != 0;
    }
    return false;
}

bool CGuild::IsCompleteGuildFund()
{
    return (m_field1c & 4) != 0;
}

void CGuild::AddGuildExp(unsigned int exp)
{
    *(unsigned int*)((char*)this + 0x49) += exp;
}

void CGuild::AddGuildMemberPoint(unsigned int charNo, unsigned int point)
{
}

void CGuild::AddGuildExpUntilLimit(unsigned int exp, unsigned int limit)
{
    if ((m_field1c & 4) != 0)
    {
        m_field4d96 = 1;
        unsigned int old = *(unsigned int*)((char*)this + 0x49);
        *(unsigned int*)((char*)this + 0x49) += exp;
        if (limit < *(unsigned int*)((char*)this + 0x49))
        {
            *(unsigned int*)((char*)this + 0x49) = limit;
        }
        if (*(unsigned int*)((char*)this + 0x49) < old)
        {
            *(unsigned int*)((char*)this + 0x49) = old;
        }
        CMyFileLog log("AddGuildExpUntilLimit", 0x246);
        log("./log/Guild",
            "GUILD EXP UNTIL LIMIT : guild key(%d), old exp(%d), add exp(%d), guild exp(%d), exp_limit(%d)",
            GetGuildKey(), old, exp, *(unsigned int*)((char*)this + 0x49), limit);
    }
}

void CGuild::GuildSkillPointUp(unsigned short point)
{
    if ((m_field1c & 4) != 0)
    {
        unsigned short old = *(unsigned short*)((char*)this + 0x62);
        *(unsigned short*)((char*)this + 0x62) += point;
        if (*(unsigned short*)((char*)this + 0x62) < old)
        {
            *(unsigned short*)((char*)this + 0x62) = old;
        }
    }
}

void CGuild::CheckGuildSkill()
{
    if (*(unsigned char*)((char*)this + 0x3b) != 0 &&
        *(short*)((char*)this + 0x62) == 0 && *(char*)((char*)this + 100) == 0)
    {
        CMyFileLog log("CheckGuildSkill", 0x85c);
        log("./log/GuildSkill", "Err : key(%d), lev(%d), gsp(0), cnt(0)",
            GetGuildKey(), (unsigned int)*(unsigned char*)((char*)this + 0x3b));
    }
}

void CGuild::ResetGuildPointRank()
{
    *(unsigned short*)((char*)this + 0x48) = 0;
    *(unsigned int*)((char*)this + 0x44) = 0;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->ResetGuildPoint();
        }
    }
}

void CGuild::IncPowerJoinCount()
{
}

int CGuild::GuildLevelUp(CServerHandler* handler, CUser* user)
{
    if (user == 0 || (m_field1c & 4) == 0)
    {
        return 2;
    }
    bool isMaster = user->GetUniqCharNo() == GetMasterId();
    if (!isMaster)
    {
        isMaster = IsSubGuildMaster(user->GetUniqCharNo());
    }
    if (!isMaster)
    {
        return 0;
    }
    return 1;
}

void CGuild::LoadGuild(STGuildDBInfoOnly& info, char* name)
{
    if ((m_field1c & 4) == 0 && (m_field1c & 2) != 0)
    {
        int local18 = *(int*)((char*)this + 0x44);
        char local11 = 0;
        int local10 = 0;
        while (local10 < (int)(unsigned char)info.m_data[0x44] &&
               199 < *(int*)(info.m_data + local10 * 5 + 0x45) &&
               *(int*)(info.m_data + local10 * 5 + 0x45) < 0xd1)
        {
            local11++;
            local10++;
        }
        if ((int)local11 != (int)(unsigned char)info.m_data[0x44])
        {
            CMyFileLog log("LoadGuild", 0x11b);
            log("./log/GuildSkill", "Guild Skill Learn Error(%d)(%d)",
                (unsigned char)info.m_data[0x44], (int)local11);
            info.m_data[0x44] = local11;
        }
        memcpy((char*)this + 0x20, info.m_data, 0xbd);
        SetGuildMessage(name);
        if (local18 != 0 && *(int*)(info.m_data + 0x24) < local18)
        {
            *(int*)((char*)this + 0x44) = local18;
        }
        m_field1c |= 4;
    }
}

void CGuild::SetGuildMessage(char* msg)
{
    if (msg != 0)
    {
        strncpy((char*)this + 0x98, msg, 0x40);
    }
}

void CGuild::SaveGuild(unsigned char flag, CServerHandler* handler, unsigned int param)
{
}

void CGuild::DBGuildSave(unsigned char flag, CServerHandler* handler, unsigned int param)
{
}

void CGuild::DBSaveGuildMembers(unsigned char flag, CServerHandler* handler, unsigned char param)
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->SaveGuildMember(flag, it->first, handler, param);
        }
    }
}

void CGuild::DBGuildSaveProcess(CServerHandler* handler)
{
    if (m_field4d96 != 0 && (m_field1c & 4) != 0)
    {
        short* cnt = (short*)((char*)this + 0x4d94);
        *cnt = (short)(*cnt + 1);
        if (1 < *(unsigned short*)((char*)this + 0x4d94))
        {
            *cnt = 0;
            m_field4d96 = 0;
        }
    }
}

void CGuild::QueryGuild(CServerHandler* handler, unsigned int charNo)
{
}

void CGuild::SendGuildInfoToMemberOnly(CUser* user)
{
}

void CGuild::QueryTodayGuildMember(CServerHandler* handler)
{
}

void CGuild::SetTodayGuildMember(STTodayGuildMember& member)
{
    memcpy((char*)this + 0x66ec, member.m_data, 0x27);
}

void CGuild::NotifyTodayGuildMember(CUser* user)
{
}

void CGuild::LoadGuildAgit(CServerHandler* handler, unsigned int charNo)
{
}

void CGuild::UpdateChangableInfoProcess()
{
    if (IsSetGuildDBFlag(4) && IsSetGuildDBFlag(0x10))
    {
        m_field4db0++;
        if (9 < (unsigned char)m_field4db0)
        {
            m_field4db0 = 0;
        }
    }
}

void CGuild::DBSavePowerSecedeTime(unsigned char flag, CServerHandler* handler)
{
    if ((m_field1c & 4) != 0)
    {
        // 发送 Packet_DBMW_Save_Power_Secede_Time（简化：构造并发送）
        char buf[0x1b];
        memset(buf, 0, sizeof(buf));
        *(unsigned short*)(buf + 0) = 0x1f5a;
        *(unsigned int*)(buf + 0xa) = m_guildKey;
        buf[0xe] = (char)flag;
        handler->SendToDB((PacketHeader*)buf);
    }
}

void CGuild::CallGuildAllMembersProxy(CUser* user, CServerHandler* handler)
{
    if (user == 0 || (m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    ReplyGuildMembers(user);
}

void CGuild::QueryGuildAllMembersProxy(CServerHandler* handler, unsigned int charNo)
{
    char buf[0x1e];
    memset(buf, 0, sizeof(buf));
    *(unsigned short*)(buf + 0) = 0x1f5c;
    *(unsigned int*)(buf + 0xa) = m_guildKey;
    *(unsigned int*)(buf + 0xe) = charNo;
    handler->SendToDB((PacketHeader*)buf);
    m_field1c |= 8;
}

void CGuild::LoadGuildAllMembersProxy(STGuildMemberProxy* proxy, unsigned char flag,
                                      unsigned char param)
{
    if ((m_field1c & 4) != 0 && (m_field1c & 8) != 0)
    {
        if (flag == 0)
        {
            memcpy((char*)this + 0xdd, proxy, (size_t)param * 0x41);
            m_field1e = param;
        }
        else
        {
            memcpy((char*)this + (unsigned int)m_field1e * 0x41 + 0xdd, proxy,
                   (size_t)param * 0x41);
            m_field1e = (unsigned short)(m_field1e + param);
        }
    }
}

int CGuild::PopGuildMemberChanglableInfo(unsigned int charNo,
                                         STGuildMemberChangableInfo& info) const
{
    if (m_changable.empty())
    {
        return 0;
    }
    std::map<unsigned int, STGuildMemberChangableInfo>::const_iterator it =
        m_changable.find(charNo);
    if (it == m_changable.end())
    {
        return 0;
    }
    info = it->second;
    return 1;
}

int CGuild::ReplyGuildMembersToWeb(STGuildMemberWebConnInfo* info)
{
    int count = 0;
    if ((m_field1c & 4) != 0 && !m_members.empty())
    {
        for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
             it != m_members.end() && count < 300; ++it)
        {
            if (it->second != 0)
            {
                *(unsigned int*)((char*)&info + count * 5 * 4) = it->second->GetUniqCharNo();
                if (it->second->GetGameServer() != 0)
                {
                    *(unsigned char*)((char*)&info + count * 5 * 4 + 4) =
                        it->second->GetGameServer()->m_field9;
                }
                count++;
            }
        }
    }
    return count;
}

void CGuild::DBSaveGuildMemberUnChangableInfo(CServerHandler* handler, unsigned int a,
                                              unsigned int b, char* name)
{
}

void CGuild::DismissGuildMemberAndNotice(int group)
{
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->DetachGuild();
        }
    }
    m_members.clear();
}

void CGuild::NotifyMemoToGuildMember(CUser* user, const char* memo)
{
    if (user == 0 || memo == 0 || (m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    char buf[0x45];
    memset(buf, 0, sizeof(buf));
    *(unsigned short*)(buf + 0) = 0x1f46;  // 包 ID（占位）
    char* name = user->GetCharName();
    size_t n = strlen(name);
    memcpy(buf + 0xa, name, n < 0x1e ? n : 0x1d);
    n = strlen(memo);
    memcpy(buf + 0x28, memo, n < 0x15 ? n : 0x14);
    *(int*)(buf + 0x3c) = user->GetIdByChannel();
    *(unsigned int*)(buf + 0x40) = user->GetUniqCharNo();
    user->SendToGameserver(buf, 0x45);
}

void CGuild::NotifyAllTodayGuildMember()
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    char buf[0x5b];
    memset(buf, 0, sizeof(buf));
    *(unsigned short*)(buf + 0) = 0x1f48;
    memcpy(buf + 0xa, (char*)this + 0x66ec, 0x27);
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->SendToGameserver(buf, 0x5b);
        }
    }
}

void CGuild::NotifyAllAchieveAttendance(unsigned int charNo, unsigned int phase)
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
        }
    }
}

void CGuild::NoticeMarkChangeToGuildMember(unsigned int charNo)
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
        }
    }
}

void CGuild::NoticeGuildMasterDelegateToMembers(char* name)
{
    if ((m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
        }
    }
}

void CGuild::NotifyCreateGuildAgitToGuildMember(unsigned int charNo)
{
}

void CGuild::NotifyDeleteGuildAgitToGuildMember(unsigned int charNo)
{
}

void CGuild::NoticeGuildMemberLogin_Out(CUser* user, char flag)
{
}

void CGuild::QueryUnconnGuildMemberProxy(CServerHandler* handler, unsigned int charNo)
{
}

int CGuild::LoadGuildOneMemberProxy(CUser* user)
{
    return 0;
}

int CGuild::LoadGuildOneMemberProxy(STGuildMemberProxy& proxy)
{
    return 0;
}

void CGuild::IncTotalCnt_Of_GuildDBInfo()
{
}

void CGuild::SendGuildInfoToMembers(bool flag)
{
}

void CGuild::DBGuildMemberSave(CUser* user, unsigned char flag, CServerHandler* handler,
                               unsigned char param)
{
}

void CGuild::InsertGuildMemberChanglableInfo(unsigned int charNo)
{
}

void CGuild::SendToGuild(PacketHeader* pkt)
{
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->SendToGameserver((char*)pkt, *(unsigned short*)((char*)pkt + 2));
        }
    }
}

void CGuild::SendToGuildForMail()
{
}

void CGuild::NotifyMessageToGuildMember()
{
}

void CGuild::SendGuildInfoToManagers()
{
}

void CGuild::SendGuildNameChangeToMembers()
{
}

void CGuild::SendGuildAgitInfoToMembers()
{
}

void CGuild::NoticeChatMsgToGuildMembers(unsigned int charNo, char* msg, int len,
                                         const char* name)
{
}

void CGuild::NoticeChatMsgToGuildMembersHyperLink(unsigned int charNo, char* msg, int len,
                                                  unsigned char type,
                                                  const hyperlink_item_info* link,
                                                  const char* name)
{
    if (len >= 0x100 || (m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    Packet_Monitor_Guild_Chat_ToUser_Hyper_Link pkt;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        CUser* user = it->second;
        if (user != 0)
        {
            *(unsigned int*)((char*)&pkt + 0xa) = user->GetIdByChannel();
            *(unsigned int*)((char*)&pkt + 0xe) = user->GetUniqCharNo();
            memcpy((char*)&pkt + 0x12, name, 0x1d);
            *(unsigned char*)((char*)&pkt + 0x2f) = type;
            for (int i = 0; i < (int)type; i++)
            {
                memcpy((char*)&pkt + 0x30 + i * 0x68, (char*)link + i * 0x68, 0x68);
            }
            *(char*)((char*)&pkt + 0x158) = (char)len;
            memcpy((char*)&pkt + 0x159, msg, (size_t)len);
            *(unsigned short*)((char*)&pkt + 2) = (unsigned short)(len + 0x16a);
            user->SendToGameserver((char*)&pkt, (unsigned int)(len + 0x16a));
        }
    }
}

void CGuild::NoticeEnterToGuildMember(char* info)
{
}

void CGuild::NoticeSecedeToGuildMember(char* info)
{
}

void CGuild::DismissGuildMemberAndNotice(unsigned char group)
{
}

bool CGuild::IsEmpty()
{
    return m_members.empty();
}

STGuildDBInfo* CGuild::GetGuildDBInfo()
{
    return &m_dbInfo;
}

bool CGuild::IsExistGuildAgit()
{
    return *(unsigned char*)((char*)this + 0xbe) != 0;
}

void CGuild::SetGuildAgitFlag(bool flag)
{
    *(unsigned char*)((char*)this + 0xbe) = flag ? 1 : 0;
}

unsigned char CGuild::GetCurSubGuildMasterCnt()
{
    return *(unsigned char*)((char*)this + 0x4d);
}

unsigned short CGuild::GetTotalCnt_Of_GuildDBInfo()
{
    return *(unsigned short*)((char*)this + 0x42);
}

void CGuild::DecTotalCnt_Of_GuildDBInfo()
{
    *(unsigned short*)((char*)this + 0x42) -= 1;
}

int CGuild::CheckPowerSecedeTime()
{
    if (!IsSetGuildDBFlag(4))
    {
        return 0;
    }
    return CheckDayScheduleTimeOver(0x1e, *(long long*)((char*)this + 0xb6));
}

void CGuild::ChangeGuildMemberCharName(unsigned int charNo, char* name)
{
    if (IsSetGuildDBFlag(4))
    {
        for (int i = 0; i < 300; i++)
        {
            if (*(unsigned int*)((char*)this + i * 0x41 + 0xdd) == charNo)
            {
                memset((char*)this + i * 0x41 + 0xe1, 0, 0x1e);
                memcpy((char*)this + i * 0x41 + 0xe1, name, 0x1d);
            }
        }
        if (*(unsigned int*)((char*)this + 0x66ec) == charNo)
        {
            memset((char*)this + 0x66f0, 0, 0x1e);
            memcpy((char*)this + 0x66f0, name, 0x1d);
        }
    }
}

void CGuild::AddGuildPoint(unsigned short point)
{
}

void CGuild::AddPowerWarPoint(unsigned int point)
{
    if ((m_field1c & 4) != 0)
    {
        m_field4d96 = 1;
        *(unsigned int*)((char*)this + 0xba) += point;
        if (99999999 < *(unsigned int*)((char*)this + 0xba))
        {
            *(unsigned int*)((char*)this + 0xba) = 99999999;
        }
        CMyFileLog log("AddPowerWarPoint", 0x277);
        log("./log/Guild",
            "GUILD POWERWAR POINT : guild key(%d), add powerwar point(%d), guild powerwar point(%d)",
            GetGuildKey(), point, *(unsigned int*)((char*)this + 0xba));
    }
}

void CGuild::SubPowerWarPoint(unsigned int point)
{
    if ((m_field1c & 4) != 0)
    {
        m_field4d96 = 1;
        if (point < *(unsigned int*)((char*)this + 0xba))
        {
            *(unsigned int*)((char*)this + 0xba) -= point;
        }
        else
        {
            *(unsigned int*)((char*)this + 0xba) = 0;
        }
    }
}

void CGuild::SetGuildAgitInfo(STGuildAgitDBInfo& info)
{
    memcpy((void*)&m_agitInfo, info.m_data, sizeof(m_agitInfo));
}

void CGuild::SetGuildAgitLevelUp()
{
}

void CGuild::CreateGuildAgit(CServerHandler* handler, unsigned int a, unsigned int b,
                             unsigned int c, unsigned int d)
{
}

void CGuild::DeleteGuildAgit(CServerHandler* handler, unsigned int a, unsigned int b)
{
}

void CGuild::UpgradeGuildAgit(CServerHandler* handler, unsigned int a, unsigned int b,
                              unsigned int c, unsigned int d)
{
}

void CGuild::AddGuildMember(ST_Notice_Guild_Enter& info, CUser* user)
{
    if (user == 0 || (m_field1c & 4) == 0 || (m_field1c & 0x10) == 0 || m_members.empty())
    {
        return;
    }
    unsigned short idx = *(unsigned short*)((char*)this + 0x1e);
    *(unsigned int*)((char*)this + (unsigned int)idx * 0x41 + 0xdd) =
        *(unsigned int*)((char*)&info + 8);
    memcpy((char*)this + (unsigned int)idx * 0x41 + 0xe1, (char*)&info + 0x23, 0x1d);
    *(unsigned char*)((char*)this + (unsigned int)idx * 0x41 + 0xff) = user->GetJob();
    *(unsigned char*)((char*)this + (unsigned int)idx * 0x41 + 0x100) = user->GetGrowthType();
    *(unsigned short*)((char*)this + (unsigned int)idx * 0x41 + 0x101) = user->GetLevel();
    idx++;
    if (300 < idx)
    {
        idx = 300;
    }
    *(unsigned short*)((char*)this + 0x1e) = idx;
    *(unsigned short*)((char*)this + 0x42) = idx;
}

void CGuild::SetSubGuildMaster(unsigned int charNo, bool flag)
{
    if (flag)
    {
        unsigned char cnt = *(unsigned char*)((char*)this + 0x4d);
        if (cnt + 1 < 6)
        {
            *(unsigned int*)((char*)this + ((unsigned int)cnt + 0x10) * 4 + 0xe) = charNo;
            *(unsigned char*)((char*)this + 0x4d) = cnt + 1;
        }
    }
    else
    {
        unsigned char* cnt = (unsigned char*)((char*)this + 0x4d);
        for (unsigned int i = 0; i < (unsigned int)*cnt; i++)
        {
            if (*(unsigned int*)((char*)this + (i + 0x10) * 4 + 0xe) == charNo)
            {
                memcpy((char*)this + i * 4 + 0x4e, (char*)this + (i + 1) * 4 + 0x4e,
                       ((unsigned int)*cnt + ~i) * 4);
                *cnt = (unsigned char)((int)*cnt - 1);
                if (5 < (unsigned char)*cnt)
                {
                    *cnt = 0;
                }
                break;
            }
        }
    }
    CMyFileLog log("SetSubGuildMaster", 0x84e);
    log("./log/GuildModify", "Set Sub Guild Master guild(%d) CharNo(%d) flag(%d)",
        GetGuildKey(), charNo, (unsigned int)flag);
}

void CGuild::SecedeProxyMember(ST_Notice_Guild_Secede& info)
{
    if ((m_field1c & 4) != 0 && (m_field1c & 0x10) != 0 && !m_members.empty())
    {
        unsigned short cnt = *(unsigned short*)((char*)this + 0x1e);
        if (cnt < 0x12d)
        {
            for (int i = 0; i < (int)cnt; i++)
            {
                if (*(int*)((char*)this + i * 0x41 + 0xdd) == *(int*)((char*)&info + 8))
                {
                    if ((unsigned int)cnt - (unsigned int)i != 1)
                    {
                        memmove((char*)this + i * 0x41 + 0xdd,
                                (char*)this + (i + 1) * 0x41 + 0xdd,
                                ((unsigned int)cnt - (unsigned int)i - 1) * 0x41);
                    }
                    cnt--;
                    if (300 < cnt)
                    {
                        cnt = 0;
                    }
                    *(unsigned short*)((char*)this + 0x1e) = cnt;
                    *(unsigned short*)((char*)this + 0x42) = cnt;
                    return;
                }
            }
        }
    }
}

int CGuild::ChangeGuildMaster(CServerHandler* handler, CUser* user, unsigned int charNo)
{
    if ((m_field1c & 4) == 0 || charNo == 0)
    {
        return 0;
    }
    *(unsigned int*)((char*)this + 0x37) = charNo;
    ChangeUnconnectedGuildMemberGrade(charNo, 1);
    CUser* member = FindGuildMember(charNo);
    if (member == 0)
    {
        char* name = getUnconnectedGuildMemberName(charNo);
        if (name != 0)
        {
            strncpy((char*)this + 0xc4, name, 0x14);
        }
    }
    else
    {
        member->ChangeGuildMemberGrade(1);
        strncpy((char*)this + 0xc4, member->GetCharName(), 0x14);
    }
    return 1;
}

bool CGuild::ChangeGuildName(char* name, int flag)
{
    bool ok = (m_field1c & 4) != 0;
    if (ok)
    {
        strcpy((char*)this + 0x20, name);
        m_field4d96 = (unsigned char)flag;
    }
    return ok;
}

void CGuild::ChangeUnconnectedGuildMemberGrade(unsigned int charNo, int grade)
{
    if ((m_field1c & 4) != 0 && (m_field1c & 0x10) != 0)
    {
        unsigned short cnt = *(unsigned short*)((char*)this + 0x1e);
        for (int i = 0; i < (int)cnt; i++)
        {
            if (*(unsigned int*)((char*)this + i * 0x41 + 0xdd) == charNo)
            {
                *(unsigned char*)((char*)this + i * 0x41 + 0x104) = (unsigned char)grade;
                return;
            }
        }
    }
}

char* CGuild::getUnconnectedGuildMemberName(unsigned int charNo)
{
    return 0;
}

void CGuild::WriteGuildMemberMemo(CUser* user, const char* memo)
{
    if (user == 0 || memo == 0)
    {
        return;
    }
    user->SetGuildMemberMemo(memo);
    if (IsSetGuildDBFlag(4) && IsSetGuildDBFlag(0x10))
    {
        for (int i = 0; i < 300; i++)
        {
            if (*(int*)((char*)this + i * 0x41 + 0xdd) == (int)user->GetUniqCharNo())
            {
                memset((char*)this + i * 0x41 + 0x109, 0, 0x15);
                memcpy((char*)this + i * 0x41 + 0x109, memo, 0x14);
                return;
            }
        }
    }
}

void CGuild::ReplyGuildMembers(CUser* user)
{
    if (user == 0 || (m_field1c & 4) == 0 || m_members.empty())
    {
        return;
    }
    Packet_Monitor_Call_Guild_Members_ToChannel pkt;
    char* buf = (char*)&pkt;
    *(unsigned int*)(buf + 0x12) = m_guildKey;
    memcpy(buf + 0x16, (char*)this + 0x20, 0x16);
    *(unsigned int*)(buf + 0x2e) = *(unsigned int*)((char*)this + 0x44);
    *(unsigned short*)(buf + 0x32) = *(unsigned short*)((char*)this + 0x42);
    int count = 0;
    std::map<unsigned int, CUser*>::iterator it = m_members.begin();
    while (it != m_members.end())
    {
        CUser* m = it->second;
        char* rec = buf + 0x34 + count * 0x3f;
        rec[0] = m->GetJob();
        rec[1] = m->GetGrowthType();
        *(unsigned short*)(rec + 2) = m->GetLevel();
        memcpy(rec + 4, m->GetCharName(), 0x1d);
        rec[0x38] = m->GetSex();
        if (m->GetGameServer() != 0)
        {
            rec[0x37] = m->GetGameServer()->GetChannelNo();
        }
        memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
        rec[0x3a] = *(char*)((char*)m->GetGuildMemDBInfo() + 0x15);
        if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
        {
            rec[0x39] = 1;
        }
        count++;
        ++it;
        if (0x5f < count)
        {
            break;
        }
    }
    *(unsigned char*)(buf + 0x2d) = (unsigned char)count;
    *(unsigned short*)(buf + 2) = (unsigned short)(count * 0x3f + 0x34);
    *(unsigned int*)(buf + 0xa) = user->GetIdByChannel();
    *(unsigned int*)(buf + 0xe) = user->GetUniqCharNo();
    user->SendToGameserver(buf, count * 0x3f + 0x34);
    if (it != m_members.end())
    {
        Packet_Monitor_Call_Guild_Members_ToChannel_Next pkt2;
        char* buf2 = (char*)&pkt2;
        *(unsigned int*)(buf2 + 0x12) = m_guildKey;
        int cnt2 = 0;
        while (it != m_members.end())
        {
            CUser* m = it->second;
            char* rec = buf2 + 0x17 + cnt2 * 0x3f;
            rec[0] = m->GetJob();
            rec[1] = m->GetGrowthType();
            *(unsigned short*)(rec + 2) = m->GetLevel();
            memcpy(rec + 4, m->GetCharName(), 0x1d);
            rec[0x38] = m->GetSex();
            if (m->GetGameServer() != 0)
            {
                rec[0x37] = m->GetGameServer()->GetChannelNo();
            }
            memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
            rec[0x3a] = *(char*)((char*)m->GetGuildMemDBInfo() + 0x15);
            if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
            {
                rec[0x39] = 1;
            }
            cnt2++;
            ++it;
            if (0x5f < cnt2)
            {
                *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
                *(unsigned short*)(buf2 + 2) = 0x17b7;
                *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
                *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
                user->SendToGameserver(buf2, 0x17b7);
                cnt2 = 0;
            }
        }
        if (cnt2 != 0)
        {
            *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
            *(unsigned short*)(buf2 + 2) = (unsigned short)(cnt2 * 0x3f + 0x17);
            *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
            *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
            user->SendToGameserver(buf2, cnt2 * 0x3f + 0x17);
        }
    }
}

void CGuild::ReplyGuildAllMembers(CUser* user)
{
    if (user == 0 || (m_field1c & 4) == 0 || (m_field1c & 0x10) == 0)
    {
        return;
    }
    Packet_Monitor_Call_Guild_All_Members_ToChannel pkt;
    char* buf = (char*)&pkt;
    *(unsigned int*)(buf + 0x12) = m_guildKey;
    memcpy(buf + 0x16, (char*)this + 0x20, 0x16);
    *(unsigned int*)(buf + 0x2d) = *(unsigned int*)((char*)this + 0x44);
    unsigned short total = *(unsigned short*)((char*)this + 0x1e);
    int count = 0;
    if (*(short*)((char*)this + 0x42) != *(short*)((char*)this + 0x1e))
    {
        CMyFileLog log("ReplyGuildAllMembers", 0x63b);
        log("./log/GuildModify", "Error Guild Member Cnt Not Valid , (%d)/(%d)",
            (unsigned int)*(unsigned short*)((char*)this + 0x42),
            (unsigned int)*(unsigned short*)((char*)this + 0x1e));
        *(unsigned short*)((char*)this + 0x42) = *(unsigned short*)((char*)this + 0x1e);
    }
    int idx = 0;
    for (idx = 0; idx < (int)total; idx++)
    {
        char* src = (char*)this + idx * 0x41 + 0xdd;
        char* rec = buf + 0x34 + count * 0x3f;
        rec[0] = src[0x22];
        rec[1] = src[0x23];
        *(unsigned short*)(rec + 2) = *(unsigned short*)(src + 0x24);
        memcpy(rec + 4, src + 4, 0x1d);
        rec[0x38] = src[0x26];
        rec[0x3a] = src[0x27];
        *(unsigned int*)(rec + 0x3b) = *(unsigned int*)(src + 0x28);
        CUser* m = FindGuildMember(*(unsigned int*)src);
        if (m == 0)
        {
            memcpy(rec + 0x22, src + 0x2c, 0x14);
        }
        else
        {
            rec[1] = m->GetGrowthType();
            *(unsigned short*)(rec + 2) = m->GetLevel();
            if (m->GetGameServer() == 0)
            {
                CMyFileLog log("ReplyGuildAllMembers", 0x658);
                log("./log/Except",
                    "CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n",
                    GetGuildKey(), GetGuildName(), m->GetDBID(), *(unsigned int*)src);
            }
            else
            {
                rec[0x37] = m->GetGameServer()->GetChannelNo();
                memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
                rec[0x3a] = *(char*)((char*)m->GetGuildMemDBInfo() + 0x15);
            }
            if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
            {
                rec[0x39] = 1;
            }
        }
        count++;
        if (0x5f < count)
        {
            break;
        }
    }
    *(unsigned char*)(buf + 0x33) = (unsigned char)count;
    *(unsigned short*)(buf + 2) = (unsigned short)(count * 0x3f + 0x34);
    *(unsigned int*)(buf + 0xa) = user->GetIdByChannel();
    *(unsigned int*)(buf + 0xe) = user->GetUniqCharNo();
    user->SendTcpGameserver((PacketHeader*)buf);
    if (count < (int)total)
    {
        Packet_Monitor_Call_Guild_All_Members_ToChannel_Next pkt2;
        char* buf2 = (char*)&pkt2;
        *(unsigned int*)(buf2 + 0x12) = m_guildKey;
        int cnt2 = 0;
        for (int i = idx; i < (int)total; i++)
        {
            char* src = (char*)this + i * 0x41 + 0xdd;
            char* rec = buf2 + 0x17 + cnt2 * 0x3f;
            rec[0] = src[0x22];
            rec[1] = src[0x23];
            *(unsigned short*)(rec + 2) = *(unsigned short*)(src + 0x24);
            memcpy(rec + 4, src + 4, 0x1d);
            rec[0x38] = src[0x26];
            rec[0x3a] = src[0x27];
            *(unsigned int*)(rec + 0x3b) = *(unsigned int*)(src + 0x28);
            CUser* m = FindGuildMember(*(unsigned int*)src);
            if (m == 0)
            {
                memcpy(rec + 0x22, src + 0x2c, 0x14);
            }
            else
            {
                rec[1] = m->GetGrowthType();
                *(unsigned short*)(rec + 2) = m->GetLevel();
                if (m->GetGameServer() == 0)
                {
                    CMyFileLog log("ReplyGuildAllMembers", 0x658);
                    log("./log/Except",
                        "CGuild::ReplyGuildMembers() Guild Key : %d\tGuild Name : %s\tDB Id : %d\tChar Id : %d\n",
                        GetGuildKey(), GetGuildName(), m->GetDBID(), *(unsigned int*)src);
                }
                else
                {
                    rec[0x37] = m->GetGameServer()->GetChannelNo();
                    memcpy(rec + 0x22, (char*)m->GetGuildMemDBInfo(), 0x14);
                    rec[0x3a] = *(char*)((char*)m->GetGuildMemDBInfo() + 0x15);
                }
                if (m->IsBlackUser(user->GetUniqCharNo()) != 0)
                {
                    rec[0x39] = 1;
                }
            }
            cnt2++;
            if (0x5f < cnt2)
            {
                *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
                *(unsigned short*)(buf2 + 2) = 0x17b7;
                *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
                *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
                user->SendTcpGameserver((PacketHeader*)buf2);
                cnt2 = 0;
            }
        }
        if (cnt2 != 0)
        {
            *(unsigned char*)(buf2 + 0x16) = (unsigned char)cnt2;
            *(unsigned short*)(buf2 + 2) = (unsigned short)(cnt2 * 0x3f + 0x17);
            *(unsigned int*)(buf2 + 0xa) = user->GetIdByChannel();
            *(unsigned int*)(buf2 + 0xe) = user->GetUniqCharNo();
            user->SendTcpGameserver((PacketHeader*)buf2);
        }
    }
}

int CGuild::BuyGuildSkill(int skillId, int slot, short param, unsigned int charNo)
{
    if ((m_field1c & 4) == 0)
    {
        return 0;
    }
    return 1;
}

void CGuildManager::LoadGuildAgit(unsigned int guildKey, CServerHandler* handler)
{
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        guild->LoadGuildAgit(handler, guildKey);
    }
}

CGuildManager::CGuildManager()
{
    m_app = 0;
    m_field40 = 1;
    memset(m_time1, 0, sizeof(m_time1));
    memset(m_time2, 0, sizeof(m_time2));
    m_scheduler.SetSpecialDayHour(1, 5);
}

CGuildManager::~CGuildManager()
{
}

void CGuildManager::Init(CApplication* app)
{
}

void CGuildManager::Process()
{
}

void CGuildManager::ProcessByMinute()
{
    m_guildWar.DBSaveProcess(m_app);
    if (!m_guilds.empty())
    {
        for (std::map<unsigned int, CGuild*>::iterator it = m_guilds.begin();
             it != m_guilds.end(); ++it)
        {
            if (it->second != 0)
            {
                it->second->UpdateChangableInfoProcess();
            }
        }
        RefreshTodayMember(false);
        RefreshAttendanceInfo(false);
    }
}

void CGuildManager::ProcessBySecond()
{
}

bool CGuildManager::IsCargoLock()
{
    return m_field40 != 0;
}

void CGuildManager::DBSaveProcess(CApplication* app, bool force)
{
}

void CGuildManager::AttendGuild(unsigned int guildKey, unsigned int charNo)
{
}

CGuild* CGuildManager::GuildMemLogin(unsigned int guildKey, CUser* user)
{
    if (user == 0 || m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() : dwGuildKey == 0\n");
    }
    CServerHandler* handler = m_app->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() pclServerHandler == NULL\n");
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild == 0)
    {
        guild = CreateGuild(guildKey, handler, user->GetUniqCharNo());
    }
    else
    {
        guild->QueryGuild(handler, user->GetUniqCharNo());
        guild->SendGuildInfoToMemberOnly(user);
        guild->CheckGuildSkill();
        AttendGuild(guildKey, user->GetUniqCharNo());
    }
    STTodayGuildMember* today = (STTodayGuildMember*)GetTodayMember(guildKey);
    if (today == 0)
    {
        guild->QueryTodayGuildMember(handler);
    }
    else
    {
        guild->SetTodayGuildMember(*today);
        guild->NotifyTodayGuildMember(user);
    }
    if (guild->InsertGuildMember(user->GetUniqCharNo(), user) == 1)
    {
        user->QueryGuildMember(handler);
    }
    return guild;
}

void CGuildManager::GuildMemLogout(unsigned int guildKey, CUser* user)
{
    if (user == 0 || m_app == 0)
    {
        throw CDNFException(
            "CGuildManager::GuildMemLogout()\t0 == pclUser || 0 == m_pclApp\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogout()\t0 == dwGuildKey\n");
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        if (user->GetGameServer() != 0)
        {
            guild->DBGuildMemberSave(user, user->GetGameServer()->m_field9,
                                     m_app->Get_ServerHandler(), 1);
        }
        if (guild->DeleteGuildMember(user->GetUniqCharNo(), user) == 1)
        {
            guild->InsertGuildMemberChanglableInfo(user->GetUniqCharNo());
            if (!IsEmptyGuild(guildKey))
            {
                guild->NoticeGuildMemberLogin_Out(user, 0);
            }
            else
            {
                if (user->GetGameServer() != 0)
                {
                    guild->DBGuildSave(user->GetGameServer()->m_field9,
                                       m_app->Get_ServerHandler(), 0);
                }
                DeleteGuild(guildKey);
            }
        }
    }
}

CGuild* CGuildManager::GuildEnter(unsigned int guildKey, ST_Notice_Guild_Enter& info)
{
    if (m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildEnter()\t0 == m_pclApp\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildEnter()\t0 == dwGuildKey\n");
    }
    CServerHandler* handler = m_app->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException("CGuildManager::GuildEnter() pclServerHandler == NULL\n");
    }
    CUser* user = m_app->Get_UserManager()->FindUser_CharNo(*(unsigned int*)((char*)&info + 8));
    if (user != 0)
    {
        user->SendSetGuildKeyToUser(guildKey, *(unsigned int*)((char*)&info + 8));
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        if (user == 0)
        {
            if (guild->IsSetGuildDBFlag(4) && guild->IsSetGuildDBFlag(0x10))
            {
                guild->QueryUnconnGuildMemberProxy(handler, *(unsigned int*)((char*)&info + 8));
            }
            return guild;
        }
        user->QueryGuildMember(handler);
        guild->InsertGuildMember(user->GetUniqCharNo(), user);
        if (guild->LoadGuildOneMemberProxy(user) != 1)
        {
            guild->IncTotalCnt_Of_GuildDBInfo();
        }
        guild->SendGuildInfoToMembers(false);
        user->MakeGameServerSendUserInfoPacket(guildKey);
        return guild;
    }
    if (user == 0)
    {
        return 0;
    }
    guild = new CGuild(guildKey);
    guild->QueryGuild(handler, user->GetUniqCharNo());
    InsertGuild(guildKey, guild);
    user->QueryGuildMember(handler);
    guild->InsertGuildMember(user->GetUniqCharNo(), user);
    user->MakeGameServerSendUserInfoPacket(guildKey);
    return guild;
}

CGuild* CGuildManager::GuildSecede(unsigned int guildKey, ST_Notice_Guild_Secede& info)
{
    return 0;
}

CGuild* CGuildManager::CreateGuild(unsigned int guildKey, CServerHandler* handler,
                                   unsigned int masterId)
{
    CGuild* guild = new CGuild(guildKey);
    InsertGuild(guildKey, guild);
    return guild;
}

void CGuildManager::DeleteGuild(unsigned int guildKey)
{
    if (m_guilds.empty())
    {
        return;
    }
    std::map<unsigned int, CGuild*>::iterator it = m_guilds.find(guildKey);
    if (it == m_guilds.end())
    {
        CMyFileLog log("DeleteGuild", 0xcd);
        log("./log/Guild",
            "[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",
            guildKey, (int)m_guilds.size());
        return;
    }
    CMyFileLog log("DeleteGuild", 0xc4);
    log("./log/Guild",
        "[DELETE]  Guild Key : %d\tGuild Name : %s\tGuild State:%d\tCurr Guild Load Cnt : %d\n",
        guildKey, it->second->GetGuildName(),
        it->second->GetGuildDBFlag() & 0xffff, (int)m_guilds.size() - 1);
    delete it->second;
    m_guilds.erase(it);
}

void CGuildManager::DeleteGuild(CGuild* guild)
{
    if (m_guilds.empty() || guild == 0)
    {
        return;
    }
    if (m_guilds.erase(guild->GetGuildKey()) == 1)
    {
        CMyFileLog log("DeleteGuild", 0xe0);
        log("./log/Guild",
            "[DELETE]  Guild Key : %d\tGuild Name : %s\tCurr Guild Load Cnt : %d\n",
            guild->GetGuildKey(), guild->GetGuildName(), (int)m_guilds.size());
        delete guild;
    }
    else
    {
        CMyFileLog log("DeleteGuild", 0xe7);
        log("./log/Guild",
            "[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",
            guild->GetGuildKey(), (int)m_guilds.size());
    }
}

void CGuildManager::GuildDismiss(CGuild* guild)
{
}

int CGuildManager::InsertGuild(unsigned int guildKey, CGuild* guild)
{
    if (guild == 0)
    {
        return 0;
    }
    m_guilds.insert(std::make_pair(guildKey, guild));
    return 1;
}

CGuild* CGuildManager::FindGuild(unsigned int guildKey)
{
    if (m_guilds.empty())
    {
        return 0;
    }
    std::map<unsigned int, CGuild*>::iterator it = m_guilds.find(guildKey);
    return it == m_guilds.end() ? 0 : it->second;
}

bool CGuildManager::IsEmptyGuild(unsigned int guildKey)
{
    return FindGuild(guildKey) == 0;
}

int CGuildManager::LoadGuild(unsigned int guildKey, STGuildDBInfoOnly& info, char* name)
{
    CGuild* guild = new CGuild(guildKey);
    guild->LoadGuild(info, name);
    InsertGuild(guildKey, guild);
    return 1;
}

void CGuildManager::DBGuildProcess(CServerHandler* handler, bool flag)
{
}

void CGuildManager::DBGuildAndGuildMemberSave(CServerHandler* handler)
{
}

void CGuildManager::DBLoadAllLoginGuild(CServerHandler* handler)
{
}

void CGuildManager::SendGuildInfoToMembers(unsigned int guildKey, bool flag)
{
}

int CGuildManager::GetTodayMember(unsigned int guildKey)
{
    std::map<unsigned int, STTodayGuildMember>::iterator it = m_todayMembers.find(guildKey);
    return it == m_todayMembers.end() ? 0 : 1;
}

void CGuildManager::InsertTodayMember(unsigned int guildKey, STTodayGuildMember& member)
{
    m_todayMembers[guildKey] = member;
}

void CGuildManager::RefreshTodayMember(bool flag)
{
    if (!flag)
    {
        m_todayMembers.clear();
    }
}

void CGuildManager::RefreshAttendanceInfo(bool flag)
{
    if (!flag)
    {
        m_attendance.clear();
    }
}

void CGuildManager::CheckAchieveAttendance(unsigned int guildKey)
{
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it != m_attendance.end())
    {
    }
}

void CGuildManager::RewardAttendance(unsigned int guildKey, unsigned int charNo, int flag)
                                     
{
    if ((int)flag != -1 && (int)flag < 9)
    {
        int exp = GetAttendanceExp(guildKey, flag);
        if (exp != 0)
        {
            CGuild* guild = FindGuild(guildKey);
            if (guild != 0)
            {
                guild->AddGuildExp((unsigned int)exp);
                guild->NotifyAllAchieveAttendance(charNo, (unsigned int)exp);
            }
        }
    }
}

int CGuildManager::GetAttendancePhase(unsigned int guildKey)
{
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it == m_attendance.end())
    {
        return 0;
    }
    return (int)it->second.size();
}

void CGuildManager::GetAttendanceInfo(unsigned int guildKey, STAttendanceInfo& info)
{
}

int CGuildManager::GetAttendanceExp(unsigned int guildKey, int phase)
{
    CGuild* guild = FindGuild(guildKey);
    if (guild == 0)
    {
        return 0;
    }
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it == m_attendance.end())
    {
        return 0;
    }
    return 100;
}

unsigned int CGuildManager::GetGuildExpWithLevel(unsigned char level)
{
    return (unsigned int)level * 1000;
}

int CGuildManager::GetGuildLevelWithExp(unsigned int exp)
{
    return (int)(exp / 1000);
}

unsigned int CGuildManager::GetMaxGuildExp1()
{
    return 10000;
}

unsigned int CGuildManager::GetMaxGuildExp2()
{
    return 20000;
}

void CGuildManager::SetGuildExpTable(unsigned int* table)
{
    for (int i = 0; i < 20; i++)
    {
        *(unsigned int*)((char*)this + i * 4 + 0x70) = table[i];
    }
}

bool CGuildManager::IsGuildWarEventOn(unsigned char group)
{
    return false;
}

bool CGuildManager::IsGuildWarEnterableChar(unsigned char group, unsigned int charNo)
{
    return false;
}

CGuildWar* CGuildManager::GetGuildWar()
{
    return &m_guildWar;
}

void CGuildManager::CargoLock()
{
}

void CGuildManager::CargoUnlock()
{
}

CGuildCargo::CGuildCargo()
{
    memset(m_data, 0, sizeof(m_data));
}

CGuildCargo::~CGuildCargo()
{
}

void CGuildCargo::Reset()
{
    *(int*)((char*)this + 0x18d8) = 0;
    *(int*)((char*)this + 0x18dc) = 0;
    *(int*)((char*)this + 0x18e0) = 0;
    *(char*)((char*)this + 0x18e4) = 0;
}

int CGuildCargo::GetCapacity()
{
    return *(int*)((char*)this + 0x18d8);
}

void CGuildCargo::SetCapacity(unsigned int capacity)
{
    *(unsigned int*)((char*)this + 0x18d8) = capacity;
}

int CGuildCargo::IsValidSlot(int slot)
{
    return !(slot < 0 || *(int*)((char*)this + 0x18d8) <= slot || 0x77 < slot);
}

void CGuildCargo::SetGuildInfo(int guildKey)
{
    *(int*)((char*)this + 0x18e0) = guildKey;
}

bool CGuildCargo::IsLoadComplete()
{
    return *(char*)((char*)this + 0x18e4) != 0;
}

int CGuildCargo::CalcItemCount()
{
    *(int*)((char*)this + 0x18dc) = 0;
    int cap = *(int*)((char*)this + 0x18d8);
    for (int i = 0; i < cap; i++)
    {
        if (*(int*)((char*)this + i * 0x35 + 1) != 0)
        {
            *(int*)((char*)this + 0x18dc) += 1;
        }
    }
    return *(int*)((char*)this + 0x18dc);
}

int CGuildCargo::IsEmpty()
{
    int cap = *(int*)((char*)this + 0x18d8);
    for (int i = 0; i < cap; i++)
    {
        if (*(int*)((char*)this + i * 0x35 + 1) != 0)
        {
            return 0;
        }
    }
    return 1;
}

void* CGuildCargo::GetGuildCargoDBInfo()
{
    return this;
}

int CGuildCargo::GetSpecificItemSlot(int itemId)
{
    int cap = *(int*)((char*)this + 0x18d8);
    for (int i = 0; i < cap; i++)
    {
        if (*(int*)((char*)this + i * 0x35 + 1) == itemId)
        {
            return i;
        }
    }
    return -1;
}

void CGuildCargo::PrintCargo(ENUM_GUILD_CARGO_BEHAVIOR behavior)
{
}

const char* CGuildCargo::PrintDnfItemInfo(DnfItemInfo& info)
{
    static char szBuffer[0x400];
    memset(szBuffer, 0, sizeof(szBuffer));
    unsigned char up = ((UpgradeSeparateInfo*)((char*)&info + 0x2b))->GetUpgradeSeparate();
    sprintf(szBuffer,
            "id:%d,s:%d,sc:%d,up:%d,add:%d,en:%d,ex:%d,at:%d,av:%d,sp:%d",
            *(unsigned int*)((char*)&info + 1),
            (unsigned int)(unsigned char)*(char*)&info,
            (unsigned int)((unsigned char)((char*)&info)[5] >> 5),
            (unsigned int)((unsigned char)((char*)&info)[5] & 0x1f),
            *(unsigned int*)((char*)&info + 6),
            (unsigned int)*(unsigned short*)((char*)&info + 10),
            *(unsigned int*)((char*)&info + 0xc),
            (unsigned int)(unsigned char)((char*)&info)[0x10],
            (unsigned int)*(unsigned short*)((char*)&info + 0x11),
            (unsigned int)up & 0xff);
    return szBuffer;
}

void CGuildCargo::AddItem(DnfItemInfo& info, int slot, int count)
{
}

int CGuildCargo::InsertItem(DnfItemInfo& info, int& slot, int count, unsigned char a, int b)
{
    return 1;
}

int CGuildCargo::DeleteItem(DnfItemInfo& info, int slot, int count, unsigned char a, int b, int c)
{
    return 1;
}

void CGuildCargo::MoveItem(DnfItemInfo& info, DnfItemInfo& info2, int a, int b, int c,
                           int d, int e)
{
}

int CGuildCargo::CheckInsertItem(int slot, int count, int a, unsigned char b, int c)
{
    return 0;
}

void CGuildCargo::SendGuildCargo(CUser* user)
{
}

void CGuildCargo::GetHistory(STGuildCargoLog* out)
{
}

void CGuildCargo::InsertHistory(ENUM_GUILD_CARGO_BEHAVIOR behavior, int slot, const char* name, int count,
                                int param, const RandomOption* option)
{
}

void CGuildCargo::SendHistoryToDBMW(CServerHandler* handler, ENUM_GUILD_CARGO_BEHAVIOR behavior, int slot,
                                    const char* name, int count, int param, DnfItemInfo& info)
{
}

void CGuildCargo::SendGuildCargoToDBMW(CServerHandler* handler, int slot)
{
}

void CGuildCargo::SetGuildCargoHistory(unsigned int idx, STGuildCargoLog* log)
{
}

void CGuildCargo::SetGuildCargoDBInfo(STGuildCargoDBInfo& info)
{
}

CGuildBoard::CGuildBoard()
{
    memset(m_data, 0, sizeof(m_data));
}

CGuildBoard::~CGuildBoard()
{
}

void CGuildBoard::reset()
{
}

void CGuildBoard::printGuildBoard()
{
}

void CGuildBoard::setGuildBoardData(unsigned int a, unsigned int b, CGuild* guild, int c,
                                    STGuildBoardDBInfo* info)
{
}

void CGuildBoard::sendGuildBoardData(unsigned int a, unsigned int b, unsigned int c,
                                     CUser* user)
{
}

void CGuildBoard::clearGuildBoardData()
{
}

void CGuildBoard::deleteGuildBoardData(unsigned int a, unsigned int b, unsigned int c)
{
}

bool CGuildBoard::isGuildBoardDBAccess()
{
    return false;
}

bool CGuildBoard::isWebGuildBoardAction()
{
    return false;
}

void CGuildBoard::setGuildBoardDBAccess()
{
}

void CGuildBoard::setWebGuildBoardAction(bool flag)
{
}

int CGuildBoard::getGuildBoardDBLoadState()
{
    return 0;
}

void CGuildBoard::setGuildBoardDBLoadState(ENUM_DB_LOAD_STATE state)
{
}

void CGuildBoard::sendMessageToDBMW_GuildFund(CServerHandler* handler, int fund, CUser* user)
{
}

void CGuildBoard::sendMessageToDBMW_GuildLevelUP(CServerHandler* handler, int level,
                                                 CUser* user)
{
}

void CGuildBoard::sendMessageToDBMW_GuildAttendance(CServerHandler* handler, int a, int b,
                                                    unsigned int c, unsigned int d)
{
}

void CGuildBoard::sendMessageToDBMW_GuildMasterChanging(CServerHandler* handler, CUser* user,
                                                        const char* name)
{
}

CPowerWarGuildInfo::CPowerWarGuildInfo()
{
    new (m_data + 0) std::map<unsigned int, STPowerWarGuildInfo*>();
    new (m_data + 0x1c) std::vector<STPowerWarGuildInfo*>();
    new (m_data + 0x28) std::vector<STDBSavePowerWarPoint*>();
}

CPowerWarGuildInfo::~CPowerWarGuildInfo()
{
    ((std::vector<STDBSavePowerWarPoint*>*)(m_data + 0x28))->~vector();
    ((std::vector<STPowerWarGuildInfo*>*)(m_data + 0x1c))->~vector();
    ((std::map<unsigned int, STPowerWarGuildInfo*>*)(m_data + 0))->~map();
}

void CPowerWarGuildInfo::Initialize()
{
}

void CPowerWarGuildInfo::Clean()
{
}

STPowerWarGuildInfo* CPowerWarGuildInfo::CreatePowerwarGuild()
{
    return (STPowerWarGuildInfo*)malloc(0x14);
}

void CPowerWarGuildInfo::DeletePowerWarGuild(STPowerWarGuildInfo* info)
{
    if (info != 0)
    {
        free(info);
    }
}

STPowerWarGuildInfo* CPowerWarGuildInfo::FindPowerwarGuild(unsigned int guildKey)
{
    return 0;
}

int CPowerWarGuildInfo::InsertPowerwarGuild(unsigned int guildKey, STPowerWarGuildInfo* info)
{
}

STPowerWarGuildInfo* CPowerWarGuildInfo::GetSpecificGuildInfo(unsigned int guildKey)
{
    return FindPowerwarGuild(guildKey);
}

unsigned int CPowerWarGuildInfo::GetGuildRanking(unsigned int guildKey)
{
    return 0;
}

void CPowerWarGuildInfo::CalcAllGuildRanking()
{
}

void CPowerWarGuildInfo::PrintDebugInfo()
{
}

void CPowerWarGuildInfo::UpdateGuildPowerwarInfo(unsigned int guildKey, unsigned short point)
{
}

void CPowerWarGuildInfo::RewardGuildPowerWarPoint(CGuildManager& gm, bool a, int b, int c,
                                                 int d, int e)
{
}

STDBSavePowerWarPoint* CPowerWarGuildInfo::CreateDBSavePowerWarPoint()
{
    return 0;
}

void CPowerWarGuildInfo::DeleteDBSavePowerWarPoint(STDBSavePowerWarPoint* p)
{
    if (p != 0)
    {
        free(p);
    }
}

void CPowerWarGuildInfo::MakePacketDBPowerWarPoint(Packet_DB_Save_Power_War_Point_Reward* pkt)
{
    std::vector<STDBSavePowerWarPoint*>* vec =
        (std::vector<STDBSavePowerWarPoint*>*)(m_data + 0x28);
    size_t n = vec->size();
    int count = 0;
    if (n != 0)
    {
        count = n < 0xfb ? (int)n : 0xfa;
        char* out = (char*)pkt + 0xf;
        int i = 0;
        for (std::vector<STDBSavePowerWarPoint*>::iterator it = vec->begin();
             it != vec->end() && i < count; )
        {
            STDBSavePowerWarPoint* p = *it;
            *(unsigned int*)(out + i * 8) = *(unsigned int*)p;
            *(unsigned int*)(out + i * 8 + 4) = *(unsigned int*)((char*)p + 4);
            CMyFileLog log("MakePacketDBPowerWarPoint", 0x16b);
            log("./log/Power", "INTERVAL SAVE - GUILD:%d, POINT:%d",
                *(unsigned int*)p, *(unsigned int*)((char*)p + 4));
            DeleteDBSavePowerWarPoint(p);
            it = vec->erase(it);
            i++;
        }
        *(unsigned int*)((char*)pkt + 0xb) = (unsigned int)count;
    }
}

int CPowerWarGuildInfo::GetPowerWarPointDBSaveCount()
{
    return 0;
}

void CPowerWarGuildInfo::GetAllGuildRankingInfo(int& count, STGuildRank* rank)
{
    count = 0;
}

CPowerWarCharacInfo::CPowerWarCharacInfo()
{
    memset(m_data, 0, sizeof(m_data));
}

CPowerWarCharacInfo::~CPowerWarCharacInfo()
{
}

void CPowerWarCharacInfo::Initialize()
{
}

void CPowerWarCharacInfo::Clean()
{
}

int CPowerWarCharacInfo::IsExistCharac(unsigned int charNo)
{
    return 0;
}

unsigned int CPowerWarCharacInfo::GetUserRanking(unsigned int charNo)
{
    return 0;
}

void CPowerWarCharacInfo::PrintDebugInfo()
{
}

void CPowerWarCharacInfo::CalcAllUserRanking()
{
}

STPowerWarCharacInfo* CPowerWarCharacInfo::FindPowerwarCharac(unsigned int charNo)
{
    return 0;
}

std::vector<STPowerWarCharacInfo*>* CPowerWarCharacInfo::GetCharacInfoVector()
{
    return 0;
}

STPowerWarCharacInfo* CPowerWarCharacInfo::CreatePowerwarCharac()
{
    return (STPowerWarCharacInfo*)malloc(0x10);
}

unsigned int CPowerWarCharacInfo::GetUserPowerWarPoint(unsigned int charNo)
{
    return 0;
}

int CPowerWarCharacInfo::InsertPowerwarCharac(unsigned int charNo, STPowerWarCharacInfo* info)
{
}

void CPowerWarCharacInfo::GetAllUserRankingInfo(unsigned int& count, STUserRank* rank)
{
    count = 0;
}

void CPowerWarCharacInfo::GetStatueRankingUsers(std::vector<STPowerWarCharacInfo*>& vec)
{
}

void CPowerWarCharacInfo::UpdatePowerwarCharacInfo(unsigned int charNo, unsigned short point)
{
}

int CPowerWarCharacInfo::GetBonus(Packet_DB_Save_Power_War_Bonus_Point& pkt)
{
    return 0;
}

int CPowerWarCharacInfo::GetBonus(int idx)
{
    return 0;
}

void CPowerWarCharacInfo::CalcBonus()
{
}

CPowerWar::CPowerWar()
{
    memset(m_data, 0, sizeof(m_data));
}

CPowerWar::~CPowerWar()
{
}

int CPowerWar::IsPowerWarOn()
{
    return *(int*)((char*)this + 4);
}

int CPowerWar::IsPowerWarOn() const
{
    return *(int*)((char*)this + 4);
}

unsigned short CPowerWar::getPowerWarEndKillPoint()
{
    return *(unsigned short*)((char*)this + 0xc);
}

unsigned short CPowerWar::getPowerWarEndKillPoint() const
{
    return *(unsigned short*)((char*)this + 0xc);
}

void CPowerWar::setPowerWarEndKillPoint(unsigned short point)
{
    *(unsigned short*)((char*)this + 0xc) = point;
}

void CPowerWar::resetEvent()
{
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = -1;
    *(unsigned short*)((char*)this + 0xc) = 0xffff;
}

void CPowerWar::setEvent()
{
    *(int*)((char*)this + 4) = 1;
}

void CPowerWar::setProlongTime()
{
    *(int*)((char*)this + 4) = 1;
    *(int*)((char*)this + 8) += 10;
}

void CPowerWar::GetPowerWarConfigTbl(unsigned char& a, unsigned char& b, unsigned char& c,
                                     unsigned char& d)
{
}

void CPowerWar::LoadPowerWarTableFile(char* path)
{
}

void CPowerWar::ProcessByMinuteEndEvent()
{
}

void CPowerWar::ProcessByMinuteStartEvent()
{
}

int CPowerWar::GetPowerWarRankingUpdateTime()
{
    return 0;
}

CPower::CPower()
{
    m_field4 = 0;
    memset((void*)&m_guildInfo, 0, sizeof(m_guildInfo));
    memset((void*)&m_characInfo, 0, sizeof(m_characInfo));
}

CPower::~CPower()
{
}

void CPower::SetScore(int score)
{
    m_field4 = score;
}

int CPower::GetScore()
{
    return m_field4;
}

int CPower::IncScore(int score)
{
    m_field4 += score;
    if (m_field4 == 0x7fffffff)
    {
        m_field4 = 0x7fffffff;
    }
    return m_field4;
}

void CPower::InitPower()
{
    m_field4 = 0;
    m_characInfo.Initialize();
    m_guildInfo.Initialize();
}

void CPower::CleanPower()
{
    m_field4 = 0;
    m_characInfo.Clean();
    m_guildInfo.Clean();
}

void CPower::CalcPowerWarRank()
{
}

void CPower::UpdatePowerWarInfo(int a, unsigned int b, unsigned int c)
{
}

void CPower::RewardGuildPowerWarPoint(CGuildManager& gm, bool a, int b, int c, int d, int e)
{
}

CPowerWarGuildInfo* CPower::GetPowerWarGuildInfo()
{
    return &m_guildInfo;
}

CPowerWarCharacInfo* CPower::GetPowerWarCharacInfo()
{
    return &m_characInfo;
}

CPowerManager::CPowerManager()
{
    memset(m_data, 0, sizeof(m_data));
}

CPowerManager::~CPowerManager()
{
}

void CPowerManager::InitPowerManager(char* path, CApplication* app)
{
    *(CApplication**)((char*)this + 4) = app;
    LoadPowerWarCfg(path);
}

void CPowerManager::Process()
{
}

void CPowerManager::ProcessByMinute()
{
}

int CPowerManager::IsPowerWarOn()
{
    return ((CPowerWar*)((char*)this + 0x14c))->IsPowerWarOn();
}

void CPowerManager::SetPowerInfo(char side, int score1, int score2)
{
    *(char*)((char*)this + 0x184) = side;
    if (IsPowerWarOn() != 1)
    {
        ((CPower*)((char*)this + 0x74))->SetScore(score1);
        ((CPower*)((char*)this + 0xe0))->SetScore(score2);
    }
    SetPowerDBFlag(4);
}

void CPowerManager::CleanPowerWar()
{
}

int CPowerManager::GetPowerScore(ENUM_POWER_SIDE_TYPE side)
{
    return ((CPower*)((char*)this + 8 + side * 0x6c))->GetScore();
}

char CPowerManager::GetWinnerSide()
{
    return *(char*)((char*)this + 0x184);
}

int CPowerManager::IncPowerScore(ENUM_POWER_SIDE_TYPE side, int score)
{
    CPower* p = (CPower*)((char*)this + 8 + side * 0x6c);
    if (((CPowerWar*)((char*)this + 0x14c))->IsPowerWarOn() == 0)
    {
        return p->GetScore();
    }
    return p->IncScore(score);
}

void CPowerManager::SetWinnerSide(char side)
{
    *(char*)((char*)this + 0x184) = side;
}

void CPowerManager::PrintDebugInfo()
{
}

void CPowerManager::SetPowerDBFlag(unsigned short flag)
{
    *(unsigned short*)((char*)this + 0x18a) |= flag;
}

void CPowerManager::LoadPowerWarCfg(char* path)
{
}

void CPowerManager::CalcPowerWarRank(bool flag)
{
}

void CPowerManager::EndPowerWarEvent()
{
}

void CPowerManager::RewardBonusPoint()
{
}

void CPowerManager::SendPowerWarInfo()
{
}

void CPowerManager::ComputeWinnerSide()
{
}

void CPowerManager::SendPowerWarScore()
{
}

void CPowerManager::SaveDBPowerWarRank()
{
}

void CPowerManager::StartPowerWarEvent()
{
}

void CPowerManager::UpdatePowerWarInfo(bool flag, ENUM_POWER_SIDE_TYPE side, int score, unsigned int* p)
{
}

void CPowerManager::SaveDBPowerWarPoint()
{
}

void CPowerManager::SendPowerWarEndInfo(int time)
{
}

void CPowerManager::SendPowerWarEndTime(int time)
{
    CMyFileLog log("SendPowerWarEndTime", 0x3d5);
    log("./log/PowerResult", "POWER WAR END TIME : %d", time);
    SendPowerWarEndInfo(time);
}

void CPowerManager::SendPowerWarEndInfo()
{
    CMyFileLog log("SendPowerWarEndInfo", 0x419);
    log("./log/PowerResult", "SEND POWER WAR END INFO START");
    SendPowerWarEndInfoInSpecificPower(1);
    SendPowerWarEndInfoInSpecificPower(2);
    CMyFileLog log2("SendPowerWarEndInfo", 0x41f);
    log2("./log/PowerResult", "SEND POWER WAR END INFO END");
}

unsigned int CPowerManager::GetUserPowerWarPoint(ENUM_POWER_SIDE_TYPE side, unsigned int charNo)
{
    return 0;
}

unsigned int CPowerManager::GetUserRankingInPower(ENUM_POWER_SIDE_TYPE side, unsigned int charNo)
{
    return 0;
}

void CPowerManager::SetPowerWarRewardInfo(int a, int b, int c, int d)
{
}

unsigned int CPowerManager::GetGuildRankingInPower(ENUM_POWER_SIDE_TYPE side, unsigned int guildKey)
{
    return 0;
}

unsigned short CPowerManager::GetPowerWarEndKillPoint()
{
    return ((CPowerWar*)((char*)this + 0x14c))->getPowerWarEndKillPoint();
}

void CPowerManager::SendPowerWarProcessInfo(unsigned int charNo)
{
}

void CPowerManager::SetPowerWarEndKillPoint(unsigned short point)
{
    ((CPowerWar*)((char*)this + 0x14c))->setPowerWarEndKillPoint(point);
}

void CPowerManager::RewardGuildPowerWarPoint()
{
}

void CPowerManager::SaveDBPowerWarBonusPoint()
{
}

void CPowerManager::SaveDBPowerWarPointReward()
{
}

void CPowerManager::SendPowerWarEndInfoToSpecificUser(CUser* user, unsigned int b,
                                                     unsigned char c, unsigned int d,
                                                     unsigned int e, unsigned int f,
                                                     unsigned int g, unsigned int h)
{
}

void CPowerManager::SendPowerWarEndInfoInSpecificPower(char side)
{
}

CMemoryCashManager::CMemoryCashManager()
{
    m_app = 0;
}

CMemoryCashManager::~CMemoryCashManager()
{
    for (std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.begin();
         it != m_cashObjects.end(); ++it)
    {
        delete it->second;
    }
    m_cashObjects.clear();
}

void CMemoryCashManager::Init(CApplication* app)
{
    m_app = app;
}

bool CMemoryCashManager::IsRightObject(CUser* user)
{
    return (user->GetBlackListDBFlag() & 4) != 0;
}

int CMemoryCashManager::InsertCashMemorySetCharacterObject(CUser* user)
{
    if (!IsRightObject(user))
    {
        return 0;
    }
    CCashObject* obj = new CCashObject;
    obj->SetCharacNo(user->GetUniqCharNo());
    std::pair<std::map<unsigned int, CCashObject*>::iterator, bool> r =
        m_cashObjects.insert(std::make_pair(user->GetDBID(), obj));
    if (r.second)
    {
        return 1;
    }
    delete obj;
    return 0;
}

bool CMemoryCashManager::SetUserObject(CUser* user)
{
    std::map<unsigned int, CCashObject*>::iterator it =
        m_cashObjects.find(user->GetDBID());
    if (it != m_cashObjects.end())
    {
        CCashObject* obj = it->second;
        obj->SetBlackUsersObject(*(std::map<unsigned int, CBlackUser*>*)user->GetMapBlackList());
    }
    return it != m_cashObjects.end();
}

void CMemoryCashManager::ProcessLifeTimeOut()
{
    if (m_app != 0)
    {
        for (std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.begin();
             it != m_cashObjects.end(); )
        {
            CCashObject* obj = it->second;
            if (obj->IsLifeTimeOut())
            {
                obj->ClearBlackUsers();
                std::map<unsigned int, CCashObject*>::iterator cur = it;
                ++it;
                m_cashObjects.erase(cur);
                delete obj;
            }
            else
            {
                ++it;
            }
        }
    }
}

void CMemoryCashManager::DeleteCashObjecct(unsigned int dbid)
{
    std::map<unsigned int, CCashObject*>::iterator it = m_cashObjects.find(dbid);
    if (it != m_cashObjects.end())
    {
        delete it->second;
        m_cashObjects.erase(it);
    }
}

int CMemoryCashManager::QueryCashMemoryBlackList(CUser* user)
{
    std::map<unsigned int, CCashObject*>::iterator it =
        m_cashObjects.find(user->GetDBID());
    if (it != m_cashObjects.end())
    {
        CCashObject* obj = it->second;
        user->RegisterToCashBlackList(*obj->GetBlackUsersObject());
        user->SetBlackListDBFlag(4);
    }
    return it != m_cashObjects.end();
}

CTcpNetSystem::CTcpNetSystem()
{
    memset(m_data, 0, sizeof(m_data));
    // 构造内部 std 容器（反编译布局：queue@0xc0 / queue@0x11c / map@0x144）
    new (m_data + 0xc0) std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >();
    new (m_data + 0x11c) std::queue<CPeer*, std::deque<CPeer*> >();
    new (m_data + 0x144) std::map<unsigned int, CPeer*>();
}

CTcpNetSystem::~CTcpNetSystem()
{
    CleanPeers();
    ((std::map<unsigned int, CPeer*>*)(m_data + 0x144))->~map();
    ((std::queue<CPeer*, std::deque<CPeer*> >*)(m_data + 0x11c))->~queue();
    ((std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >*)(m_data + 0xc0))->~queue();
}

TCPSocket::TCPSocket()
{
    m_sock = -1;
    memset(m_data, 0, 0x14);
}

TCPSocket::~TCPSocket()
{
    close();
}

bool TCPSocket::open()
{
    m_sock = socket(2, 1, 0);
    if (m_sock == -1)
    {
        printf("Could not create a TDP socket : %d\n", errno);
    }
    return m_sock != -1;
}

int TCPSocket::bind(unsigned short port, bool flag)
{
    setOptReuseAdrs(true);
    sockaddr local;
    memset(&local, 0, 0x10);
    local.sa_family = 2;
    *(unsigned short*)local.sa_data = htons(port);
    int r = ::bind(m_sock, &local, 0x10);
    if (r < 0)
    {
        close();
        return 0;
    }
    if (flag)
    {
        setOptNonBlock();
    }
    printf("succeeded in binding TCP socket port #%d\n", (unsigned int)port);
    return 1;
}

bool TCPSocket::listen(int backlog)
{
    int r = ::listen(m_sock, backlog);
    if (-1 >= r)
    {
        close();
    }
    return -1 < r;
}

int TCPSocket::send(char* buf, int len)
{
    if (buf == 0 || len < 1)
    {
        printf("buf error or size-%d error", len);
        return -1;
    }
    int r = write(m_sock, buf, len);
    if (r < 1)
    {
        if (errno != 0xb && errno != 4 && errno != 0)
        {
            printf("tcp send fail='%d', error ='%s'", r, strerror(errno));
            return -1;
        }
        printf("tcp send retry='%d', error ='%s'", r, strerror(errno));
        return 0;
    }
    return r;
}

bool TCPSocket::pollReadEvent() const
{
    fd_set fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        fds.fds_bits[i] = 0;
    }
    fds.fds_bits[(unsigned int)m_sock >> 5] =
        (1 << ((unsigned int)m_sock & 0x1f)) | fds.fds_bits[(unsigned int)m_sock >> 5];
    timeval tv;
    tv.tv_sec = 5;
    tv.tv_usec = 0;
    int r = select(m_sock + 1, &fds, 0, 0, &tv);
    if (r < 0)
    {
        printf("pollReadEvent(%s)", strerror(errno));
        return 0;
    }
    return (fds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f)) & 1;
}

bool TCPSocket::pollWriteEvent() const
{
    fd_set fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        fds.fds_bits[i] = 0;
    }
    fds.fds_bits[(unsigned int)m_sock >> 5] =
        (1 << ((unsigned int)m_sock & 0x1f)) | fds.fds_bits[(unsigned int)m_sock >> 5];
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int r = select(2, 0, &fds, 0, &tv);
    if (r < 0)
    {
        printf("pollWriteEvent(%s)", strerror(errno));
        return 0;
    }
    return (fds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f)) & 1;
}

bool TCPSocket::pollErrorEvent() const
{
    fd_set fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        fds.fds_bits[i] = 0;
    }
    fds.fds_bits[(unsigned int)m_sock >> 5] =
        (1 << ((unsigned int)m_sock & 0x1f)) | fds.fds_bits[(unsigned int)m_sock >> 5];
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int r = select(2, 0, 0, &fds, &tv);
    if (r < 0)
    {
        printf("pollErrorEvent(%s)", strerror(errno));
        return 0;
    }
    return (fds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f)) & 1;
}

int TCPSocket::pollReadWriteErrEvent() const
{
    fd_set rfds;
    fd_set wfds;
    fd_set efds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        rfds.fds_bits[i] = 0;
        wfds.fds_bits[i] = 0;
        efds.fds_bits[i] = 0;
    }
    rfds.fds_bits[(unsigned int)m_sock >> 5] =
        (1 << ((unsigned int)m_sock & 0x1f)) | rfds.fds_bits[(unsigned int)m_sock >> 5];
    wfds.fds_bits[(unsigned int)m_sock >> 5] =
        (1 << ((unsigned int)m_sock & 0x1f)) | wfds.fds_bits[(unsigned int)m_sock >> 5];
    efds.fds_bits[(unsigned int)m_sock >> 5] =
        (1 << ((unsigned int)m_sock & 0x1f)) | efds.fds_bits[(unsigned int)m_sock >> 5];
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    int result = 0;
    int r = select(2, &rfds, &wfds, &efds, &tv);
    if (r < 0)
    {
        printf("pollReadWriteErrEvent(%s)", strerror(errno));
    }
    else if ((rfds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f) & 1U) == 0)
    {
        if ((wfds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f) & 1U) == 0)
        {
            if ((efds.fds_bits[(unsigned int)m_sock >> 5] >> ((unsigned int)m_sock & 0x1f) & 1U) != 0)
            {
                result = 3;
            }
        }
        else
        {
            result = 2;
        }
    }
    else
    {
        result = 1;
    }
    return result;
}

int TCPSocket::recv(char* buf, int len)
{
    if (buf == 0 || len < 1)
    {
        printf("In recv : recv buffer is null");
        return -1;
    }
    int r = read(m_sock, buf, len);
    if (r < 0)
    {
        if (errno == 0xb || errno == 4 || errno == 0)
        {
            return 0;
        }
    }
    else if (r == 0)
    {
        printf("tcp recv : FIN recv, %s", strerror(errno));
        return -1;
    }
    return r;
}

int TCPSocket::getHandle() const
{
    return m_sock;
}

int TCPSocket::shutdown(int how)
{
    return ::shutdown(m_sock, how);
}

void TCPSocket::close()
{
    if (m_sock != -1)
    {
        ::close(m_sock);
        m_sock = -1;
    }
}

bool TCPSocket::setOptNonBlock()
{
    int flags = fcntl(m_sock, 3, 0);
    int r = fcntl(m_sock, 4, flags | 0x800);
    return -1 < r;
}

bool TCPSocket::setOptReuseAdrs(bool flag)
{
    int v = (int)flag;
    int r = setsockopt(m_sock, 1, 2, &v, 4);
    return -1 < r;
}

bool TCPSocket::setOptLinger(bool flag)
{
    int v[2];
    v[0] = (int)flag;
    v[1] = 0;
    int r = setsockopt(m_sock, 1, 0xd, v, 8);
    return -1 < r;
}

bool TCPSocket::connect(const char* ip, unsigned short port)
{
    sockaddr local;
    memset(&local, 0, 0x10);
    local.sa_family = 2;
    *(unsigned int*)(local.sa_data + 2) = inet_addr(ip);
    *(unsigned short*)local.sa_data = htons(port);
    int r = ::connect(m_sock, &local, 0x10);
    if (-1 < r)
    {
        memcpy((char*)this + 0x14, local.sa_data + 2, 4);
        *(unsigned short*)((char*)this + 0x18) = *(unsigned short*)local.sa_data;
    }
    else
    {
        printf("CONNECTION FAIL IP =%s, PORT =%d, reason =%s", ip, (unsigned int)port,
               strerror(errno));
    }
    return -1 < r;
}

int TCPSocket::accept(TCPSocket& peer)
{
    socklen_t slen = 0x10;
    int fd = ::accept(m_sock, (sockaddr*)((char*)&peer + 4), &slen);
    peer.m_sock = fd;
    if (fd == 0 || fd == -1)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f != 0)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", peer.m_sock);
            fclose(f);
        }
        return 0;
    }
    memcpy((char*)&peer + 0x14, (char*)&peer + 8, 4);
    *(unsigned short*)((char*)&peer + 0x18) = *(unsigned short*)((char*)&peer + 6);
    peer.setOptNonBlock();
    return 1;
}

char* TCPSocket::getPeerIP()
{
    static char ip[16];
    sprintf(ip, "%d.%d.%d.%d", (unsigned int)(unsigned char)m_data[0],
            (unsigned int)(unsigned char)m_data[1], (unsigned int)(unsigned char)m_data[2],
            (unsigned int)(unsigned char)m_data[3]);
    return ip;
}

char* TCPSocket::getPeerAdrs()
{
    return (char*)this + 0x14;
}

unsigned short TCPSocket::getPeerPort()
{
    return *(unsigned short*)((char*)this + 0x18);
}

int TCPSocket::setOptResizeSendBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    return setsockopt(m_sock, 1, 7, &size, 4) < 0 ? 0 : 1;
}

int TCPSocket::setOptResizeRecvBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    return setsockopt(m_sock, 1, 8, &size, 4) < 0 ? 0 : 1;
}

CPeer::CPeer()
{
    memset(m_data, 0, sizeof(m_data));
}

CPeer::~CPeer()
{
}

void* CPeer::operator new(unsigned int size)
{
    return m_PeerMemPool_.alloc();
}

void CPeer::operator delete(void* p)
{
    m_PeerMemPool_.free(p);
}

void CPeer::operator delete(void* p, unsigned int size)
{
    m_PeerMemPool_.free(p, size);
}

TCPSocket* CPeer::GetTcpSocket()
{
    return this;
}

int CPeer::get_remain_sendlen()
{
    return *(int*)((char*)this + 0x1834);
}

void CPeer::InitPeer(std::queue<CTcpRecvBuffer*>* q, CMutex* lock1, CMutex* lock2)
{
    *(void**)((char*)this + 0x1828) = q;
    *(void**)((char*)this + 0x1830) = lock1;
    *(void**)((char*)this + 0x182c) = lock2;
    *(void**)((char*)this + 0x181c) = (char*)this + 0x1c;
    *(int*)((char*)this + 0x1824) = 0;
    *(int*)((char*)this + 0x1820) = 0;
    *(void**)((char*)this + 0x1838) = (char*)this + 0x183c;
    *(int*)((char*)this + 0x1834) = 0;
}

int CPeer::RecvPacket()
{
    return 0;
}

int CPeer::recv_packet()
{
    return 0;
}

int CPeer::parsing(int len)
{
    return 0;
}

int CPeer::send_packet(char* buf, int len)
{
    if (getHandle() < 0)
    {
        return -1;
    }
    if (len < 1)
    {
        printf("!!!Send Packet[(%d,%d) Size(%d) Error\n", (int)buf[0], (int)buf[1], len);
        return -1;
    }
    errno = 0;
    *(int*)((char*)this + 0x1834) += len;
    if (*(unsigned int*)((char*)this + 0x1834) < 0x96001)
    {
        if (*(CPeer**)((char*)this + 0x1838) < (CPeer*)((char*)this + 0x183c) ||
            (CPeer*)((char*)this + 0x9783c) <= *(CPeer**)((char*)this + 0x1838))
        {
            int remain = *(int*)((char*)this + 0x1834);
            CMyFileLog log("send_packet", 0x13b);
            log("./log/TcpErr",
                "!!!Send Packet Buffer critical error P_TYPE[%d] Size:Remain[%d] Last[%d]",
                (int)buf[1], remain, len);
            *(CPeer**)((char*)this + 0x1838) = (CPeer*)((char*)this + 0x183c);
            *(int*)((char*)this + 0x1834) = 0;
            return -1;
        }
        memcpy(*(void**)((char*)this + 0x1838), buf, (size_t)len);
        *(int*)((char*)this + 0x1838) += len;
        return send_packet();
    }
    int remain = *(int*)((char*)this + 0x1834);
    CMyFileLog log("send_packet", 0x133);
    log("./log/TcpErr", "!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",
        (int)buf[1], remain, len);
    *(CPeer**)((char*)this + 0x1838) = (CPeer*)((char*)this + 0x183c);
    *(int*)((char*)this + 0x1834) = 0;
    return -1;
}

int CPeer::send_packet()
{
    ssize_t r = 0;
    if (*(int*)((char*)this + 0x1834) == 0)
    {
        r = 1;
    }
    else
    {
        size_t n = *(size_t*)((char*)this + 0x1834);
        int fd = getHandle();
        r = write(fd, (char*)this + 0x183c, n);
        if (r < 1)
        {
            if (errno == 0xb || errno == 4 || errno == 0)
            {
                r = 1;
            }
            else
            {
                printf("SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)", fd, errno, strerror(errno));
                r = 1;
            }
        }
        else if (r > 0)
        {
            if (r < *(int*)((char*)this + 0x1834))
            {
                *(CPeer**)((char*)this + 0x1838) = (CPeer*)((char*)this + 0x183c + r);
                *(int*)((char*)this + 0x1834) -= (int)r;
                if (*(unsigned int*)((char*)this + 0x1834) < 0x96001)
                {
                    memmove((char*)this + 0x183c, *(void**)((char*)this + 0x1838),
                            *(size_t*)((char*)this + 0x1834));
                    *(CPeer**)((char*)this + 0x1838) = (CPeer*)((char*)this + 0x183c);
                    *(int*)((char*)this + 0x1834) = 0;
                    r = 1;
                }
            }
            else if (*(int*)((char*)this + 0x1834) < r)
            {
                printf("offset error[Remain_Data: %d Send:%d]",
                       *(int*)((char*)this + 0x1834), (int)r);
                r = -1;
            }
            else
            {
                *(CPeer**)((char*)this + 0x1838) = (CPeer*)((char*)this + 0x183c);
                *(int*)((char*)this + 0x1834) = 0;
            }
        }
    }
    return (int)r;
}

void CPeer::DisConnSig()
{
    *(int*)((char*)this + 0x1820) = 0;
}

void CPeer::ConnSig()
{
    *(int*)((char*)this + 0x1820) = 1;
}

CTcpSendBuffer::CTcpSendBuffer()
{
    memset(m_data, 0, sizeof(m_data));
}

int CTcpHandler::WaitForEvent()
{
    if (m_epoll != 0)
    {
        return m_epoll->WaitForEvent();
    }
    return -1;
}

CTcpHandler::CTcpHandler()
{
    m_epoll = new EpollHandler;
}

CTcpHandler::~CTcpHandler()
{
    if (m_epoll != 0)
    {
        delete m_epoll;
        m_epoll = 0;
    }
}

int CTcpHandler::SetPeer(void* ptr, int fd, bool flag)
{
    if (m_epoll == 0)
    {
        return -1;
    }
    return m_epoll->SetEpoll(ptr, fd, flag);
}

int CTcpHandler::ResetEpoll(int fd)
{
    if (m_epoll == 0)
    {
        return -1;
    }
    return m_epoll->ResetEpoll(fd);
}

bool CTcpHandler::IsSetErrEvent(int idx)
{
    return m_epoll != 0 && m_epoll->IsSetErrEvent(idx);
}

bool CTcpHandler::IsSetOutEvent(int idx)
{
    return m_epoll != 0 && m_epoll->IsSetOutEvent(idx);
}

unsigned int CTcpHandler::IsSetInEvent(int idx)
{
    return m_epoll != 0 ? m_epoll->IsSetInEvent(idx) : 0;
}

void* CTcpHandler::GetEventPtr(int idx)
{
    return m_epoll != 0 ? m_epoll->GetEventPtr(idx) : 0;
}

namespace np_server_xml
{
CServerXml::CServerXml()
{
    memset(m_data, 0, sizeof(m_data));
    new (m_doc) TiXmlDocument;
    m_field50 = 0;
    m_path = std::string();
    InitString();
}

CServerXml::~CServerXml()
{
    InitString();
    ((TiXmlDocument*)m_doc)->~TiXmlDocument();
}

void CServerXml::InitString()
{
    m_field50 = 0;
    memset(m_data, 0, 5);
    m_str1.clear();
    m_str2.clear();
    m_str3.clear();
    m_rgba.clear();
}

void CServerXml::StrLoading()
{
    StrLoading(std::string("server_str.xml"));
}

void CServerXml::StrLoading(std::string path)
{
    InitString();
    m_path = path;
    TiXmlDocument* doc = (TiXmlDocument*)m_doc;
    doc->Clear();
    if (doc->LoadFile(m_path.c_str(), TIXML_ENCODING_UNKNOWN))
    {
        TiXmlNode* xml = doc->FirstChild("xml");
        if (xml == 0)
        {
            puts("[CServerXml] <xml> Tag Error");
        }
        else
        {
            CharsetInit(xml);
            EventLoad(xml);
            ProcessLoad(xml);
        }
    }
    else
    {
        printf("[CServerXml] Load Fail File : %s\n", "server_str.xml");
    }
}

void CServerXml::CharsetInit(TiXmlNode* node)
{
}

void CServerXml::EventLoad(TiXmlNode* node)
{
}

void CServerXml::RGBALoad(int idx, TiXmlNode* node)
{
}

void CServerXml::ProcessLoad(TiXmlNode* node)
{
}

void CServerXml::StrPunish(int idx, const char* str, _eStringType type)
{
}

const char* CServerXml::GetServerString(int idx, bool* ok) const
{
    return "";
}

unsigned int CServerXml::GetEventRGBA(int idx) const
{
    return 0;
}

std::string CServerXml::GetEventString(int idx, _eStringType type, bool* ok) const
{
    return std::string();
}
}

np_server_xml::CServerXml g_ServerString_;

CProtocol::CProtocol()
{
    memset(m_data, 0, sizeof(m_data));
}

CProtocol::~CProtocol()
{
}

// ---- ST_PowerWarEventStartTimeConfig ----
ST_PowerWarEventStartTimeConfig::ST_PowerWarEventStartTimeConfig()
{
    m_day = 0xff;
    m_hour = 0xff;
    m_min = 0xff;
    m_field4 = 0;
}

ST_PowerWarEventStartTimeConfig::~ST_PowerWarEventStartTimeConfig()
{
}

// ---- CPowerWarConfig ----
CPowerWarConfig::CPowerWarConfig()
{
}

CPowerWarConfig::~CPowerWarConfig()
{
}

ST_PowerWarEventStartTimeConfig* CPowerWarConfig::GetInfo() const
{
    return (ST_PowerWarEventStartTimeConfig*)((char*)this + 4);
}

void CPowerWarConfig::Clear_Table()
{
    m_info.m_day = 0xff;
    m_info.m_hour = 0xff;
    m_info.m_min = 0xff;
    m_info.m_schedule.clear();
}

int CPowerWarConfig::Parse_Table(char* line, int idx)
{
    if (*line == '#')
    {
        return 0;
    }
    char* tokens[4];
    int n = DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 4);
    if (n == 4 || n == 2)
    {
        switch (idx)
        {
        case 0:
            m_info.m_day = (unsigned char)atoi(tokens[1]);
            break;
        case 1:
            m_info.m_hour = (unsigned char)atoi(tokens[1]);
            break;
        case 2:
            m_info.m_min = (unsigned char)atoi(tokens[1]);
            break;
        case 3:
            m_info.m_field4 = atoi(tokens[1]);
            break;
        case 4:
            if (atoi(tokens[1]) != 0)
            {
                STPowerWarScheduleTime st;
                memset(st.m_data, 0, sizeof(st.m_data));
                st.m_data[1] = (char)atoi(tokens[2]);
                st.m_data[2] = (char)atoi(tokens[3]);
                m_info.m_schedule.push_back(st);
            }
            break;
        default:
            return 0;
        }
        return 1;
    }
    return 0;
}

void CPowerWarConfig::Load_Table(const std::string& path)
{
    int rc = Load_Txt_Table_Data(path.c_str(), 100);
    if (0 < rc && rc < 0x65)
    {
        return;
    }
    CMyFileLog log("Load_Table", 0xcc);
    log("./log/TableError", "Power War Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CPowerWarConfig::Load_Setup_Table() Exception break!");
}

// ---- STPowerWarGuildInfo / STPowerWarCharacInfo / STDBSavePowerWarPoint ----
STPowerWarGuildInfo::STPowerWarGuildInfo()
{
    memset(m_data, 0, sizeof(m_data));
}

bool STPowerWarGuildInfo::Compare(const STPowerWarGuildInfo* a, const STPowerWarGuildInfo* b)
{
    return *(unsigned int*)(b->m_data + 4) < *(unsigned int*)(a->m_data + 4);
}

STPowerWarCharacInfo::STPowerWarCharacInfo()
{
    memset(m_data, 0, sizeof(m_data));
}

bool STPowerWarCharacInfo::Compare(const STPowerWarCharacInfo* a, const STPowerWarCharacInfo* b)
{
    return *(unsigned int*)(b->m_data + 4) < *(unsigned int*)(a->m_data + 4);
}

STDBSavePowerWarPoint::STDBSavePowerWarPoint()
{
    memset(m_data, 0, sizeof(m_data));
}

// ---- CEvent ----
CEvent::CEvent()
{
    *(int*)((char*)this + 4) = 0;
}

CEvent::~CEvent()
{
}

static CEvent g_dummyCEvent;

template void DNFFLib::Swap<STGuildWarInfo>(STGuildWarInfo*, STGuildWarInfo*);

EpollHandler::EpollHandler()
{
    m_events = 0;
    m_epollFd = 0;
    m_field4 = 0;
    m_ptr = 0;
    Init();
}

EpollHandler::~EpollHandler()
{
    Destroy();
}

int EpollHandler::Init()
{
    m_epollFd = epoll_create(1000);
    if (m_epollFd < 0)
    {
        puts("[Epoll::init] Can't init epoll create");
        return 0;
    }
    m_events = (int)malloc(12000);
    if (m_events == 0)
    {
        printf("[Epoll::init] Can't alloc event memory");
        return 0;
    }
    return 1;
}

void EpollHandler::Destroy()
{
    if (m_events != 0)
    {
        free((void*)m_events);
    }
    m_events = 0;
}

int EpollHandler::SetEpoll(void* ptr, int fd, bool flag)
{
    m_field4 = flag ? 0x8000001d : 0x1d;
    m_ptr = ptr;
    CGuard<CMutex> g(&m_mutex);
    epoll_event ev;
    ev.events = (unsigned int)m_field4;
    ev.data.ptr = ptr;
    int r = epoll_ctl(m_epollFd, 1, fd, &ev);
    return r < 0 ? errno : 0;
}

int EpollHandler::ResetEpoll(int fd)
{
    memset((char*)this + 4, 0, 0xc);
    *(int*)((char*)this + 4) = 1;
    CGuard<CMutex> g(&m_mutex);
    epoll_event ev;
    ev.events = 1;
    ev.data.ptr = m_ptr;
    int r = epoll_ctl(m_epollFd, 2, fd, &ev);
    return r < 0 ? errno : 0;
}

int EpollHandler::WaitForEvent()
{
    return epoll_wait(m_epollFd, (epoll_event*)m_events, 1000, 100);
}

bool EpollHandler::IsSetErrEvent(int idx)
{
    return (*(unsigned int*)((char*)m_events + idx * 0xc) & 0x18) != 0;
}

bool EpollHandler::IsSetOutEvent(int idx)
{
    return (*(unsigned int*)((char*)m_events + idx * 0xc) & 4) != 0;
}

unsigned int EpollHandler::IsSetInEvent(int idx)
{
    return *(unsigned int*)((char*)m_events + idx * 0xc) & 1;
}

void* EpollHandler::GetEventPtr(int idx)
{
    return *(void**)((char*)m_events + idx * 0xc + 4);
}

int EpollHandler::GetEpollFD()
{
    return m_epollFd;
}

void* EpollHandler::GetEpollEvents()
{
    return (void*)m_events;
}

void CTcpNetSystem::PushTcpSendPacketQ(PacketHeader* pkt)
{
}

void* CTcpNetSystem::Acquire_TcpSendBuffer(unsigned int size)
{
    return 0;
}

void CTcpNetSystem::Process()
{
}

void* CTcpNetSystem::Get_TcpHandler()
{
    return *(void**)m_data;
}

void* CTcpNetSystem::Get_TcpSwapQPacket()
{
    return m_data + 8;
}

CMutex* CTcpNetSystem::Get_TcpRecvQLock()
{
    return (CMutex*)(m_data + 0x90);
}

CMutex* CTcpNetSystem::Get_TcpRecvBLock()
{
    return (CMutex*)(m_data + 0xa8);
}

void* CTcpNetSystem::Get_TcpSendQPacket()
{
    return m_data + 0xc0;
}

CMutex* CTcpNetSystem::Get_TcpSendQLock()
{
    return (CMutex*)(m_data + 0xe8);
}

CMutex* CTcpNetSystem::Get_TcpSendBLock()
{
    return (CMutex*)(m_data + 0x100);
}

unsigned short CTcpNetSystem::Get_TcpServerPort()
{
    return *(unsigned short*)(m_data + 0x15c);
}

void CTcpNetSystem::Init(unsigned short port)
{
    *(unsigned short*)(m_data + 0x15c) = port;
    CTcpHandler* h = new CTcpHandler;
    *(CTcpHandler**)(m_data + 0) = h;
    CTcpAcceptThread* at = new CTcpAcceptThread;
    *(CTcpAcceptThread**)(m_data + 0x118) = at;
    at->attach(this);
    if (!((CThreadInterface*)at)->begin())
    {
        throw CDNFException("CTcpNetSystem::Init() AcceptThread begin Fail!");
    }
    CTcpNetworkThread* nt = new CTcpNetworkThread;
    *(CTcpNetworkThread**)(m_data + 4) = nt;
    nt->attach(this);
    if (!((CThreadInterface*)nt)->begin())
    {
        throw CDNFException("CTcpNetSystem::Init() NetworkThread begin Fail!");
    }
}

int CTcpNetSystem::WaitForEvent()
{
    CTcpHandler* h = (CTcpHandler*)*(void**)m_data;
    if (h != 0)
    {
        return h->WaitForEvent();
    }
    return -1;
}

CPeer* CTcpNetSystem::CreatePeer()
{
    CGuard<CMutex> g((CMutex*)(m_data + 0x78));
    return new CPeer;
}

void CTcpNetSystem::DeletePeer(CPeer* peer)
{
    if (peer != 0)
    {
        delete peer;
    }
}

void CTcpNetSystem::InsertAcceptedPeer(CPeer* peer)
{
    CGuard<CMutex> g((CMutex*)(m_data + 0x60));
    ((std::queue<CPeer*, std::deque<CPeer*> >*)(m_data + 0x11c))->push(peer);
}

CPeer* CTcpNetSystem::GetPeer(unsigned int id)
{
    std::map<unsigned int, CPeer*>* peers =
        (std::map<unsigned int, CPeer*>*)(m_data + 0x144);
    std::map<unsigned int, CPeer*>::iterator it = peers->find(id);
    return it == peers->end() ? 0 : it->second;
}

void CTcpNetSystem::CleanPeers()
{
    std::map<unsigned int, CPeer*>* peers =
        (std::map<unsigned int, CPeer*>*)(m_data + 0x144);
    for (std::map<unsigned int, CPeer*>::iterator it = peers->begin();
         it != peers->end(); ++it)
    {
        CGuard<CMutex> g((CMutex*)(m_data + 0x78));
        delete it->second;
    }
    peers->clear();
}

void CTcpNetSystem::PushTcpSendPacketQ(char* buf)
{
    if (buf == 0)
    {
        return;
    }
    CGuard<CMutex> g((CMutex*)(m_data + 0xe8));
    ((std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >*)(m_data + 0xc0))
        ->push((CTcpSendBuffer*)buf);
}

void CTcpNetSystem::CleanTcpSendPacketQ()
{
    CGuard<CMutex> g((CMutex*)(m_data + 0xe8));
    std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >* q =
        (std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >*)(m_data + 0xc0);
    while (!q->empty())
    {
        CTcpSendBuffer* buf = q->front();
        q->pop();
        if (buf != 0)
        {
            free(buf);
        }
    }
}

void* CTcpNetSystem::Acquire_TcpSendBuffer()
{
    return malloc(0x1804);
}

void CTcpNetSystem::PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf)
{
    CGuard<CMutex> g((CMutex*)(m_data + 0xe8));
    std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >* q =
        (std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >*)(m_data + 0xc0);
    if (!q->empty())
    {
        q->pop();
    }
    if (buf != 0)
    {
        free(buf);
    }
}

void CTcpNetSystem::SendPacket()
{
    std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >* q =
        (std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*> >*)(m_data + 0xc0);
    CTcpSendBuffer* buf = 0;
    bool empty;
    {
        CGuard<CMutex> g((CMutex*)(m_data + 0xe8));
        empty = q->empty();
        if (!empty)
        {
            buf = q->front();
        }
    }
    if (empty || buf == 0)
    {
        return;
    }
    std::map<unsigned int, CPeer*>* peers =
        (std::map<unsigned int, CPeer*>*)(m_data + 0x144);
    std::map<unsigned int, CPeer*>::iterator it =
        peers->find(*(unsigned int*)((char*)buf + 6));
    if (it == peers->end())
    {
        CMyFileLog log("SendPacket", 0xba);
        log("./log/TcpSend", "SEND ERR:no peer(id:%d,size:%d,ip:%d)",
            (unsigned int)*(unsigned short*)buf, (unsigned int)*(unsigned short*)((char*)buf + 2),
            *(unsigned int*)((char*)buf + 6));
        PopDeleteTcpSendPacketQ(buf);
        return;
    }
    CPeer* peer = it->second;
    bool invalid = true;
    if (peer != 0 &&
        *(int*)((char*)buf + 6) == peer->GetTcpSocket()->getHandle())
    {
        invalid = false;
    }
    if (invalid)
    {
        CMyFileLog log("SendPacket", 0xc3);
        log("./log/TcpSend", "SEND ERR:invalid peer(%x)(id:%d)(size:%d)(ip:%d)", peer,
            (unsigned int)*(unsigned short*)buf, (unsigned int)*(unsigned short*)((char*)buf + 2),
            *(unsigned int*)((char*)buf + 6));
        PopDeleteTcpSendPacketQ(buf);
        return;
    }
    int r = peer->send_packet((char*)buf, (int)*(unsigned short*)((char*)buf + 2));
    if (r < 1)
    {
        CMyFileLog log("SendPacket", 0xd5);
        log("./log/TcpSend", "SEND(id:%d,size:%d,ip:%d, cnt:%d)",
            (unsigned int)*(unsigned short*)buf, (unsigned int)*(unsigned short*)((char*)buf + 2),
            *(unsigned int*)((char*)buf + 6), (unsigned int)q->size());
    }
    else
    {
        PopDeleteTcpSendPacketQ(buf);
    }
}

bool CTcpNetSystem::OpenTcpService(int& sock, const char* ip, unsigned short port)
{
    CPeer* peer = CreatePeer();
    TCPSocket* tcp = peer->GetTcpSocket();
    if (tcp->open())
    {
        if (tcp->connect(ip, port))
        {
            tcp->setOptNonBlock();
            peer->InitPeer((std::queue<CTcpRecvBuffer*>*)Get_TcpSwapQPacket(),
                           Get_TcpRecvQLock(), Get_TcpRecvBLock());
            peer->ConnSig();
            SetEpollConnectedPeer(peer);
            sock = tcp->getHandle();
            return true;
        }
        puts("tcpSock.connect Fail!");
        CMyFileLog log("OpenTcpService", 0x123);
        log("./log/TcpServer", "tcpSock.connect(%s, %d) Fail!", ip, (unsigned int)port);
        DeletePeer(peer);
        return false;
    }
    else
    {
        puts("tcpSock.open() Fail!");
        CMyFileLog log("OpenTcpService", 0x118);
        log("./log/TcpServer", "tcpSock.open() Fail!");
        DeletePeer(peer);
        return false;
    }
}

void CTcpNetSystem::SetEpollAcceptedPeers()
{
    CGuard<CMutex> g((CMutex*)(m_data + 0x60));
    std::queue<CPeer*, std::deque<CPeer*> >* q =
        (std::queue<CPeer*, std::deque<CPeer*> >*)(m_data + 0x11c);
    std::map<unsigned int, CPeer*>* peers =
        (std::map<unsigned int, CPeer*>*)(m_data + 0x144);
    while (!q->empty())
    {
        CPeer* peer = q->front();
        q->pop();
        int r = 0;
        TCPSocket* tcp = peer->GetTcpSocket();
        int fd = tcp->getHandle();
        CTcpHandler* h = (CTcpHandler*)*(void**)m_data;
        if (h != 0)
        {
            r = h->SetPeer(peer, fd, false);
        }
        if (r != 0)
        {
            printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)", fd, r, strerror(r));
        }
        (*peers)[(unsigned int)fd] = peer;
    }
}

void CTcpNetSystem::SetEpollConnectedPeer(CPeer* peer)
{
    CGuard<CMutex> g((CMutex*)(m_data + 0x78));
    TCPSocket* tcp = peer->GetTcpSocket();
    int fd = tcp->getHandle();
    int r = 0;
    CTcpHandler* h = (CTcpHandler*)*(void**)m_data;
    if (h != 0)
    {
        r = h->SetPeer(peer, fd, false);
    }
    if (r != 0)
    {
        printf("G_EpollHandler()->SetPeer(peer->get_socket(%d)) %d(%s)", fd, r, strerror(r));
    }
    (*(std::map<unsigned int, CPeer*>*)(m_data + 0x144))[(unsigned int)fd] = peer;
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
}

int CGMAccounts::isGM(unsigned int id)
{
    stGMInfo_t key;
    key.m_field0 = id;
    key.m_field1 = 3;
    std::list<stGMInfo_t>::iterator it = std::find(m_list.begin(), m_list.end(), key);
    return it != m_list.end();
}

void CGMAccounts::appendGM(unsigned int id, unsigned int value)
{
}

void CGMAccounts::removeGM(unsigned int id, unsigned int value)
{
}

CGMAccounts::stGMInfo_t CGMAccounts::getGMInfo(unsigned int id) const
{
    stGMInfo_t key;
    key.m_field0 = id;
    key.m_field1 = 3;
    stGMInfo_t result;
    result.m_field0 = 0;
    result.m_field1 = 3;
    std::list<stGMInfo_t>::const_iterator it = std::find(m_list.begin(), m_list.end(), key);
    if (it != m_list.end())
    {
        result = *it;
    }
    return result;
}
}
