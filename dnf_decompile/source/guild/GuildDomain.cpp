// df_guild_r — 域类骨架（CGuild/CUser/CGuildManager/CPowerManager/CTcpNetSystem 等）
#include <string.h>
#include <time.h>

#include "GuildDomain.h"
#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildPacket.h"
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
    return malloc(size);
}

void CUser::operator delete(void* p)
{
    free(p);
}

void CUser::operator delete(void* p, unsigned int size)
{
    free(p);
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
    return 0;
}

void CUser::SetSex(unsigned char sex)
{
}

void CUser::SetSsn(char* ssn)
{
}

char* CUser::GetSsn()
{
    return 0;
}

unsigned char CUser::GetLevel()
{
    return 0;
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

void CUser::SendGuildMemberDBInfo(const STGuildMemerDBInfo& info)
{
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

void CUserManager::DeleteUser_CharName(const std::string& name)
{
    std::map<std::string, CUser*>::iterator it = m_charNameUsers.find(name);
    if (it != m_charNameUsers.end())
    {
        DeleteUser(it->second);
        m_charNameUsers.erase(it);
    }
}

CUser* CUserManager::FindUser(unsigned int dbid)
{
    std::map<unsigned int, CUser*>::iterator it = m_users.find(dbid);
    return it == m_users.end() ? 0 : it->second;
}

CUser* CUserManager::FindUser_CharNo(unsigned int charNo)
{
    std::map<unsigned int, CUser*>::iterator it = m_charNoUsers.find(charNo);
    return it == m_charNoUsers.end() ? 0 : it->second;
}

CUser* CUserManager::FindUser_CharName(const char* name)
{
    std::map<std::string, CUser*>::iterator it = m_charNameUsers.find(std::string(name));
    return it == m_charNameUsers.end() ? 0 : it->second;
}

void CUser::ResetBlackList()
{
    m_blackList.clear();
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
    memset(m_data, 0, sizeof(m_data));
}

CGuildWar::~CGuildWar()
{
}

void CGuildWar::DBSaveProcess(CApplication* app)
{
}

int CGuildWar::IsGuildWarEnterableGuild(unsigned int guildId)
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
    return malloc(size);
}

void CGuild::operator delete(void* p)
{
    free(p);
}

void CGuild::operator delete(void* p, unsigned int size)
{
    free(p);
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
}

void CGuild::GuildSkillPointUp(unsigned short point)
{
}

void CGuild::CheckGuildSkill()
{
}

void CGuild::ResetGuildPointRank()
{
}

void CGuild::IncPowerJoinCount()
{
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

void CGuild::QueryGuild(CServerHandler* handler, unsigned int charNo)
{
}

void CGuild::SendGuildInfoToMemberOnly(CUser* user)
{
}

void CGuild::QueryTodayGuildMember(CServerHandler* handler)
{
}

void CGuild::SetTodayGuildMember(STTodayGuildMember* member)
{
}

void CGuild::NotifyTodayGuildMember(CUser* user)
{
}

void CGuild::LoadGuildAgit(CServerHandler* handler, unsigned int charNo)
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

void CGuild::NoticeChatMsgToGuildMembers(unsigned int charNo, int len, char* msg,
                                         const char* name)
{
}

void CGuild::NoticeChatMsgToGuildMembersHyperLink(unsigned int charNo, int len, char* msg,
                                                  unsigned char type, const void* link)
{
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
}

void CGuild::SubPowerWarPoint(unsigned int point)
{
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
    memset(m_field70, 0, sizeof(m_field70));
    memset(m_rest, 0, sizeof(m_rest));
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
        guild->SetTodayGuildMember(today);
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
    return 0;
}

void CGuildManager::InsertTodayMember(unsigned int guildKey, STTodayGuildMember& member)
{
}

void CGuildManager::RefreshTodayMember(bool flag)
{
}

void CGuildManager::RefreshAttendanceInfo(bool flag)
{
}

void CGuildManager::CheckAchieveAttendance(unsigned int guildKey)
{
}

void CGuildManager::RewardAttendance(unsigned int guildKey, unsigned int charNo,
                                     unsigned int flag)
{
}

int CGuildManager::GetAttendancePhase(unsigned int guildKey)
{
    return 0;
}

void CGuildManager::GetAttendanceInfo(unsigned int guildKey, STAttendanceInfo& info)
{
}

int CGuildManager::GetAttendanceExp(unsigned int guildKey, unsigned int phase)
{
    return 0;
}

unsigned int CGuildManager::GetGuildExpWithLevel(unsigned char level)
{
    return 0;
}

int CGuildManager::GetGuildLevelWithExp(unsigned int exp)
{
    return 0;
}

unsigned int CGuildManager::GetMaxGuildExp1()
{
    return 0;
}

unsigned int CGuildManager::GetMaxGuildExp2()
{
    return 0;
}

void CGuildManager::SetGuildExpTable(unsigned int* table)
{
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

CGuildBoard::CGuildBoard()
{
    memset(m_data, 0, sizeof(m_data));
}

CGuildBoard::~CGuildBoard()
{
}

CPowerWarGuildInfo::CPowerWarGuildInfo()
{
    memset(m_data, 0, sizeof(m_data));
}

CPowerWarGuildInfo::~CPowerWarGuildInfo()
{
}

void CPowerWarGuildInfo::Initialize()
{
}

void CPowerWarGuildInfo::Clean()
{
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

CPowerWar::CPowerWar()
{
    memset(m_data, 0, sizeof(m_data));
}

CPowerWar::~CPowerWar()
{
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
}

int CPower::GetScore()
{
    return 0;
}

CPowerManager::CPowerManager()
{
    memset(m_data, 0, sizeof(m_data));
}

CPowerManager::~CPowerManager()
{
}

void CPowerManager::InitPowerManager(const char* path, CApplication* app)
{
}

void CPowerManager::Process()
{
}

CMemoryCashManager::CMemoryCashManager()
{
    memset(m_data, 0, sizeof(m_data));
}

CMemoryCashManager::~CMemoryCashManager()
{
}

void CMemoryCashManager::Init(CApplication* app)
{
}

int CMemoryCashManager::QueryCashMemoryBlackList(CUser* user)
{
    return 1;
}

CTcpNetSystem::CTcpNetSystem()
{
    memset(m_data, 0, sizeof(m_data));
}

CTcpNetSystem::~CTcpNetSystem()
{
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
