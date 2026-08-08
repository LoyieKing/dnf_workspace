// df_guild_r — 域类骨架（CGuild/CUser/CGuildManager/CPowerManager/CTcpNetSystem 等）
#include <string.h>

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
    memset(m_data, 0, sizeof(m_data));
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
    return *(unsigned int*)((char*)this + 4);
}

bool CGuild::IsSubGuildMaster(unsigned int dbid)
{
    return false;
}

bool CGuild::IsGuildMaster(unsigned int dbid)
{
    return false;
}

char* CGuild::GetGuildName()
{
    return (char*)((char*)this + 0x20);
}

unsigned short CGuild::GetGuildDBFlag()
{
    return *(unsigned short*)((char*)this + 0x14);
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

void CGuildManager::GuildMemLogin(unsigned int guildKey, CUser* user)
{
}

void CGuildManager::GuildMemLogout(unsigned int guildKey, CUser* user)
{
}

void CGuildManager::GuildEnter(unsigned int guildKey, ST_Notice_Guild_Enter& info)
{
}

void CGuildManager::GuildSecede(unsigned int guildKey, ST_Notice_Guild_Secede& info)
{
}

void CGuildManager::CreateGuild(unsigned int guildKey, CServerHandler* handler,
                                unsigned int masterId)
{
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

void CGuildManager::LoadGuild(unsigned int guildKey, STGuildDBInfoOnly& info, char* name)
{
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
