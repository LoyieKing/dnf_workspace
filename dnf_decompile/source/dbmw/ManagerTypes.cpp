#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
#include "ManagerApp.h"
#include "PacketNameTables.h"
#include "ManagerApp.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/resource.h>
#include <signal.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/times.h>
#include <sys/times.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

int getErrno();

int getErrno();

// ============================================================
// CSystemTime / CSystemTimeHandler
// ============================================================
// ============================================================
// ============================================================
// ============================================================
// ============================================================
// ============================================================
// CDBHandle / CMySql / CDBManager
// ============================================================
// ---- CGuildManager / WongWork（ctor/dtor 占位，成员展开待后续）----
STGuildWarRankInfo::STGuildWarRankInfo()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    memset(m_name, 0, 0x17);
}

STGuildRankInfo::STGuildRankInfo()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
}

CGuildManager::CGuildManager() {}
CGuildManager::~CGuildManager() { clear(); }

void CGuildManager::clear()
{
    for (std::vector<std::pair<unsigned int, STGuildRankInfo*> >::iterator it =
             m_rankList.begin();
         it != m_rankList.end(); ++it)
    {
        delete it->second;
    }
    m_rankList.clear();
}

void CGuildManager::clearGuildWar()
{
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        delete it->second;
    }
    m_warRankList.clear();
}

std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >*
CGuildManager::GetVtGuildWarRankInfo()
{
    return &m_warRankList;
}

STGuildMemberProxy* CGuildManager::GetArrayTempGuildMemberList()
{
    return m_members;
}

bool GuildWarPairDataCompare(const std::pair<unsigned int, STGuildWarRankInfo*>& a,
                             const std::pair<unsigned int, STGuildWarRankInfo*>& b)
{
    return a.second->m_field4 < b.second->m_field4;
}

bool CPairDataCompare::operator()(
    const std::pair<unsigned int, STGuildRankInfo*>& a,
    const std::pair<unsigned int, STGuildRankInfo*>& b) const
{
    return keyLess(a.first, b.first);
}

bool CPairDataCompare::keyLess(const unsigned int& a, const unsigned int& b) const
{
    return a > b;
}

bool CPairDataGuildWarCompare::operator()(
    const std::pair<unsigned int, STGuildWarRankInfo*>& a,
    const std::pair<unsigned int, STGuildWarRankInfo*>& b) const
{
    return keyLess(a.first, b.first);
}

bool CPairDataGuildWarCompare::keyLess(const unsigned int& a,
                                       const unsigned int& b) const
{
    return a > b;
}

STGuildWarRankInfo* CGuildManager::GetFirstRankGuild()
{
    if (m_warRankList.empty())
        return 0;
    return m_warRankList.begin()->second;
}

void CGuildManager::insertGuildWar(STGuildWarRankInfo* info)
{
    if (info)
        m_warRankList.push_back(std::make_pair(info->m_field4, info));
}

unsigned int CGuildManager::getFirstGuildOfGuildWar()
{
    if (m_warRankList.empty())
        return 0;
    return std::max_element(m_warRankList.begin(), m_warRankList.end(),
                            GuildWarPairDataCompare)
        ->second->m_field0;
}

char CGuildManager::InitGuildWarPointList()
{
    if (m_warRankList.empty())
        return 0;
    int count = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        it->second->m_field4 = 0x3e8;
        count++;
        if (count > 0xa)
            break;
    }
    return 1;
}

char CGuildManager::rank()
{
    if (m_rankList.empty())
        return 0;
    std::sort(m_rankList.begin(), m_rankList.end(), CPairDataCompare());
    int r = 0;
    for (std::vector<std::pair<unsigned int, STGuildRankInfo*> >::iterator it =
             m_rankList.begin();
         it != m_rankList.end(); ++it)
    {
        (*it).second->m_field8 = ++r;
    }
    return 1;
}

char CGuildManager::rankGuildWar()
{
    if (m_warRankList.empty())
        return 0;
    std::sort(m_warRankList.begin(), m_warRankList.end(),
              CPairDataGuildWarCompare());
    int r = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        (*it).second->m_field8 = ++r;
    }
    return 1;
}

void CGuildManager::insert(STGuildRankInfo* info)
{
    if (info)
        m_rankList.push_back(std::make_pair(info->m_field4, info));
}

std::vector<std::pair<unsigned int, STGuildRankInfo*> >*
CGuildManager::GetVtGuildRankInfo()
{
    return &m_rankList;
}

void CGuildManager::printGuildWarRank()
{
    if (m_warRankList.empty())
        return;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        CMyFileLog log("printGuildWarRank", 0x10a);
        log("./log/GuildWar", "GuildKey : %d,  GuildWarPoint : %d, Guild Rank : %d",
            (*it).first, (*it).second->m_field4, (*it).second->m_field8);
    }
}

void CGuildManager::GetGuildWarEnterableRank(ST_Guild_War_Info* info)
{
    if (m_warRankList.empty())
        return;
    int i = 0;
    for (std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >::iterator it =
             m_warRankList.begin();
         it != m_warRankList.end(); ++it)
    {
        char* dst = (char*)info + i * 0x23;
        *(unsigned int*)(dst + 0) = (*it).second->m_field0;
        *(unsigned int*)(dst + 0x4) = (*it).second->m_field4;
        memcpy(dst + 0x8, (char*)(*it).second + 0xc, 0x16);
        *(unsigned int*)(dst + 0x1f) = (*it).second->m_field24;
        i++;
        if (i > 9)
            break;
    }
    printGuildWarRank();
}

char CDBManager::QueryGuildWarPointList(int guildWarPoint, CGuildManager* gm)
{
    if (!gm)
        return 0;
    CDBHandle* h = m_handles[8];
    if (!h->set_query(
            0x4e3b,
            "seLect guild_id, guild_war_point, guild_name, guild_point_prev from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0",
            guildWarPoint, 0xa))
    {
        CMyFileLog log("QueryGuildWarPointList", 0x953);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildWarPointList() select guild_id, guild_war_point from guild_info where server_id = %d and expire_flag = 0 and guild_rank <= %d and guild_rank != 0\n",
            guildWarPoint, 0xa);
        return 0;
    }
    if (!h->exec(0x4e3b))
        return 0;
    std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >* ranks =
        gm->GetVtGuildWarRankInfo();
    int n = h->get_n_rows();
    if (n > 0xa)
    {
        CMyFileLog log("QueryGuildWarPointList", 0x963);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildWarPointList() : Server Group( %d )\tMAX_GUILD_WAR_ENTERABLE_RANK( %d ) <-> select n_data( %d )\n",
            guildWarPoint, 0xa, n);
    }
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        STGuildWarRankInfo* info = new (std::nothrow) STGuildWarRankInfo;
        if (!info)
            return 0;
        if (!h->get_uint(0, info->m_field0))
            return 0;
        if (!h->get_uint(1, info->m_field4))
            return 0;
        if (!h->get_str(2, info->m_name, 0x17))
            return 0;
        if (!h->get_uint(3, info->m_field24))
            return 0;
        ranks->push_back(std::make_pair(info->m_field4, info));
    }
    return 1;
}

char CDBManager::AwardGuildTitleByMail(int guildId, unsigned int characNo,
                                       unsigned int itemId, char* guildName,
                                       unsigned int item)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[3];   // game_db_2nd（postal 表）
    if (!h->set_query(0x4e39,
                      "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",
                      characNo, guildId))
    {
        CMyFileLog log("AwardGuildTitleByMail", 0x82b);
        log("./log/DBQueryErr",
            "CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",
            guildId, characNo);
        return 0;
    }
    if (!h->exec(0x4e39))
        return 0;
    int n = h->get_n_rows();
    time_t t = time(0);
    struct tm* now = localtime(&t);
    now->tm_hour += 1;
    now->tm_min = 0;
    now->tm_sec = 0;
    time_t awardTime = mktime(now);
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        unsigned int titleNo = 0;
        if (!h->get_uint(0, titleNo))
            return 0;
        int rand = (int)DNFFLib::get_rand_int(0x3e8);
        if (!h2->set_query(
                0x4e3a,
                "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')",
                awardTime, 0, titleNo, 0, itemId, rand, item, 0, 0, guildName))
        {
            CMyFileLog log("AwardGuildTitleByMail", 0x87d);
            log("./log/DBQueryErr",
                "CDBManager::AwardGuildTitleByMail() Fatal Error Break : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')\n",
                awardTime, 0, titleNo, 0, itemId, rand, 0, 0, 0, guildName);
            if (!h2->exec(0x4e3a))
                return 0;
        }
    }
    return 1;
}

char CDBManager::RegisterToBlackList(unsigned int m_id, unsigned int characNo,
                                     char* characName)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e3f,
                      "inSert into charac_black_list( m_id, charac_no, charac_name,  occ_time ) values( %s, %d, '%s', now() )",
                      NumberToString(m_id, 0), characNo, characName))
    {
        CMyFileLog log("RegisterToBlackList", 0x9fd);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() inSert into charac_black_list( m_id, charac_no, charac_name,  occ_time ) values( %s, %d, '%s', now() )",
            NumberToString(m_id, 0), characNo, characName);
        return 0;
    }
    if (!h->exec(0x4e3f))
        return 0;
    if (!h->set_query(0x4e41,
                      "upDate charac_black_info set black_point = black_point + 1 where charac_no = %d",
                      characNo))
    {
        CMyFileLog log("RegisterToBlackList", 0xa0e);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() upDate charac_black_info set black_point = black_point + 1 where charac_no = %d",
            characNo);
        return 0;
    }
    h->exec(0x4e41);
    if (h->getAffectedRowCount() == 0)
    {
        if (!h->set_query(0x4e43,
                          "inSert into charac_black_info( charac_no, black_point,  offset_point ) values( %d, 1, 0 )",
                          characNo))
        {
            CMyFileLog log("RegisterToBlackList", 0xa17);
            log("./log/DBQueryErr",
                "CDBManager::RegisterToBlackList() inSert into charac_black_info( charac_no, black_point,  offset_point ) values( %d, 1, 0 )",
                characNo);
            return 0;
        }
        if (!h->exec(0x4e43))
            return 0;
    }
    if (!h->set_query(0x4ed4,
                      "seLect black_point,offset_point,unix_timestamp(problem_child_time) from charac_black_info where charac_no=%d",
                      characNo))
    {
        CMyFileLog log("RegisterToBlackList", 0xa24);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->exec(0x4ed4))
        return 0;
    int n = h->get_n_rows();
    if (n > 1)
    {
        CMyFileLog log("RegisterToBlackList", 0xa2c);
        log("./log/BlackListModify",
            "CDBManager::RegisterToBlackList() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
    }
    if (!h->fetch())
    {
        CMyFileLog log("RegisterToBlackList", 0xa32);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    int blackPoint = 0;    // -0x68
    int offsetPoint = 0;   // -0x6c
    unsigned int problemTime = 0;  // -0x70
    if (!h->get_int(0, blackPoint))
    {
        CMyFileLog log("RegisterToBlackList", 0xa3b);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->get_int(1, offsetPoint))
    {
        CMyFileLog log("RegisterToBlackList", 0xa40);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->get_uint(2, problemTime))
    {
        CMyFileLog log("RegisterToBlackList", 0xa45);
        log("./log/DBQueryErr",
            "CDBManager::RegisterToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (problemTime == 0 && blackPoint - offsetPoint > 0x63)
    {
        if (!h->set_query(0x4ed5,
                          "upDate charac_black_info set problem_child_time = now() where charac_no = %d",
                          characNo))
        {
            CMyFileLog log("RegisterToBlackList", 0xa4e);
            log("./log/DBQueryErr",
                "CDBManager::RegisterToBlackList() upDate charac_black_info set problem_child_time = now() where charac_no = %d",
                characNo);
            return 0;
        }
        if (!h->exec(0x4ed5))
            return 0;
    }
    return 1;
}

char CDBManager::GuildSecede(Packet_DB_Request_Guild_Secede* req,
                             unsigned int& characNo, unsigned int& m_id,
                             unsigned int& result)
{
    result = 2;
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    char grade = 0;
    if (req->m_secedeType)
    {
        if (!h->set_query(0x4e66,
                          "seLect charac_no,grade from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",
                          req->m_guildId, req->m_characName))
        {
            CMyFileLog log("GuildSecede", 0xfaf);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede()seLect charac_no from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",
                req->m_guildId, req->m_characName);
            return 0;
        }
        if (!h->exec(0x4e66))
        {
            CMyFileLog log("GuildSecede", 0xfb6);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() db->exec() seLect charac_no from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",
                req->m_guildId, req->m_characName);
            return 0;
        }
        if (!h->fetch())
        {
            result = 0x22;
            return 0;
        }
        if (!h->get_uint(0, characNo))
        {
            CMyFileLog log("GuildSecede", 0xfc4);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() db->get_uint() seLect charac_no from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",
                req->m_guildId, req->m_characName);
            return 0;
        }
        if (!h->get_ubyte(1, (unsigned char&)grade))
        {
            CMyFileLog log("GuildSecede", 0xfcc);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() db->get_uint() seLect grade from guild_member where guild_id = %d and charac_name = '%s' and member_flag = 1",
                req->m_guildId, req->m_characName);
            return 0;
        }
    }
    int memberCount = 0;
    if (!h->set_query(0x4e83,
                      "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                      req->m_guildId))
        return 0;
    if (!h->exec(0x4e83))
        return 0;
    if (!h->fetch())
        return 0;
    if (!h->get_int(0, memberCount))
        return 0;
    if (req->m_grade == 2 && req->m_masterCharacNo == (int)characNo)
    {
        result = 0x57;
        return 0;
    }
    if (req->m_grade == 2 && req->m_masterCharacNo != req->m_characNo && grade == 2)
    {
        result = 0x18;
        return 0;
    }
    char isMaster = 0;
    if (req->m_grade == 1 && req->m_masterCharacNo == (int)characNo)
    {
        if (memberCount == 1)
            isMaster = 1;
        else
        {
            result = 4;
            return 0;
        }
    }
    if (!h2->set_query(0x4e68,
                       "upDate charac_info set guild_id = 0 where charac_no = %d",
                       characNo))
    {
        CMyFileLog log("GuildSecede", 0x100f);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede() upDate charac_info set guild_id = 0 where charac_no = %d",
            characNo);
        return 0;
    }
    if (!h2->exec(0x4e68))
    {
        CMyFileLog log("GuildSecede", 0x1016);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede() upDate charac_info set guild_id = 0 where charac_no = %d",
            characNo);
        return 0;
    }
    if (!h->set_query(0x4e67,
                      "upDate guild_member set member_flag = 2, secede_time = now(), secede_type = %d where guild_id = %d and charac_no = %d",
                      req->m_grade - 1, req->m_guildId, characNo))
    {
        CMyFileLog log("GuildSecede", 0x1023);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede()upDate guild_member set member_flag = 2 where guild_id = %d and charac_no = %d and member_flag = 1",
            characNo, req->m_guildId);
        return 0;
    }
    if (!h->exec(0x4e67))
    {
        CMyFileLog log("GuildSecede", 0x102b);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede()upDate guild_member set member_flag = 2 where guild_id = %d and charac_no = %d and member_flag = 1",
            characNo, req->m_guildId);
        return 0;
    }
    if (!h->set_query(0x4e83,
                      "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                      req->m_guildId))
    {
        CMyFileLog log("GuildSecede", 0x1034);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            req->m_guildId);
        return 0;
    }
    if (!h->exec(0x4e83))
    {
        CMyFileLog log("GuildSecede", 0x1039);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            req->m_guildId);
        return 0;
    }
    if (!h->fetch())
    {
        CMyFileLog log("GuildSecede", 0x103f);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede() db->fetch() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            req->m_guildId);
        return 0;
    }
    if (!h->get_int(0, memberCount))
    {
        CMyFileLog log("GuildSecede", 0x1046);
        log("./log/DBQueryErr",
            "CDBManager::GuildSecede() db->get_int() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            req->m_guildId);
        return 0;
    }
    if (memberCount != 0)
    {
        if (!h->set_query(0x4e74,
                          "upDate guild_info set member_count = %d where guild_id = %d",
                          memberCount, req->m_guildId))
        {
            CMyFileLog log("GuildSecede", 0x104e);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() upDate guild_info set member_count = %d where guild_id = %d seceded(%d)",
                characNo, req->m_guildId, memberCount);
            return 0;
        }
        if (!h->exec(0x4e74))
        {
            CMyFileLog log("GuildSecede", 0x1053);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() upDate guild_info set member_count = %d where guild_id = %d seceded(%d)",
                characNo, req->m_guildId, memberCount);
            return 0;
        }
    }
    if (req->m_secedeType && characNo)
    {
        if (!h2->set_query(0x4f01,
                           "seLect m_id from charac_info where charac_no = %u",
                           characNo))
        {
            CMyFileLog log("GuildSecede", 0x105f);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() seLect m_id from charac_info where charac_no = %u",
                characNo);
            return 0;
        }
        if (!h2->exec(0x4f01))
        {
            CMyFileLog log("GuildSecede", 0x1067);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede() seLect m_id from charac_info where charac_no = %u",
                characNo);
            return 0;
        }
        if (!h2->fetch())
        {
            result = 0x22;
            return 0;
        }
        if (!h2->get_uint(0, m_id))
        {
            CMyFileLog log("GuildSecede", 0x1076);
            log("./log/DBQueryErr",
                "CDBManager::GuildSecede()  db->get_uint() seLect m_id from charac_info where charac_no = %u",
                characNo);
            return 0;
        }
    }
    if (isMaster)
    {
        if (!h->set_query(0x4f0d,
                          "upDate guild_info set expire_flag=1, expire_time=now() where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f0d))
            return 0;
        if (!h->set_query(0x4f0e, "deLete from guild_introduce where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f0e))
            return 0;
        if (!h->set_query(0x4f10, "deLete from guild_member_introduce where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f10))
            return 0;
        if (!h->set_query(0x4f0f, "deLete from guild_member where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f0f))
            return 0;
        if (!h->set_query(0x4f11, "deLete from guild_visit where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f11))
            return 0;
        if (!h->set_query(0x4f12, "deLete from guild_notice where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f12))
            return 0;
        if (!h->set_query(0x4f13, "deLete from guild_skill where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f13))
            return 0;
        if (!h->set_query(0x4f13, "deLete from guild_join_list where guild_id=%d",
                          req->m_guildId))
            return 0;
        if (!h->exec(0x4f13))
            return 0;
        result = 1;
        return 1;
    }
    result = 0;
    return 1;
}

char CDBManager::QueryGuildCreate(Packet_DBMW_Request_Guild_Create* req,
                                  unsigned int& guildId, unsigned int& result)
{
    result = 0;
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    if (!h->set_query(0x4e6b,
                      "seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and server_id = %d",
                      req->m_characNo, req->m_serverId))
    {
        CMyFileLog log("QueryGuildCreate", 0x110a);
        log("./log/DBQueryErr",
            "seLect member_flag from guild_member where server_id = %d and charac_no = %d",
            req->m_serverId, req->m_characNo);
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e6b))
    {
        result = 2;
        return 0;
    }
    if (h->get_n_rows() != 0)
    {
        if (!h->fetch())
        {
            result = 0x22;
            return 0;
        }
        int memberFlag = 0;
        if (!h->get_uint(0, (unsigned int&)memberFlag))
        {
            result = 2;
            return 0;
        }
        if (memberFlag == 1)
        {
            result = 0x20;
            return 0;
        }
        if (memberFlag == 2)
        {
            unsigned int secedeTime = 0;
            if (!h->get_uint(1, secedeTime))
                return 0;
            if (!isDayTimeOver(secedeTime, 3))
            {
                result = 0x68;
                return 0;
            }
        }
    }
    if (req->m_characName[0] == 0 || req->m_guildName[0] == 0)
    {
        result = 2;
        if (req->m_characName[0] == 0)
        {
            CMyFileLog log("QueryGuildCreate", 0x114f);
            log("./log/TraceGuildErr",
                "CDBManager::QueryGuildCreate server_group(%d), charac_no(%d) CharacName NULL\n",
                req->m_serverId, req->m_characNo);
        }
        else
        {
            CMyFileLog log("QueryGuildCreate", 0x1151);
            log("./log/TraceGuildErr",
                "CDBManager::QueryGuildCreate server_group(%d), charac_no(%d) GuildName NULL\n",
                req->m_serverId, req->m_characNo);
            return 0;
        }
    }
    if (!h->set_query(0x4e6c,
                      "inSert into guild_info set server_id=%d,guild_name='%s',master_id=%s,master_no=%d,master_name='%s',guild_url='%s',create_time=now(),member_count=1",
                      req->m_serverId, req->m_guildName,
                      NumberToString(req->m_id, 0), req->m_characNo,
                      req->m_characName, req->m_guildUrl))
    {
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e6c))
    {
        result = 2;
        return 0;
    }
    guildId = GetIdentity(h);
    std::allocator<char> alloc;
    StackBuffer_char buf = sformat("%s%d", "url", guildId);
    std::string url((char*)buf, alloc);
    h->set_query(0x4f5f,
                 "upDate guild_info set guild_url='%s' where guild_id=%d",
                 url.c_str(), guildId);
    if (!h->exec(0x4f5f) || h->getAffectedRowCount() == 0)
        result = 2;
    h->set_query(0x4e6d,
                 "upDate guild_member set guild_id=%d,m_id=%s,charac_name='%s',grade=1,job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,apply_time=now(),member_time=now(),member_flag=1 where charac_no=%d and server_id=",
                 guildId, NumberToString(req->m_id, 0), req->m_characName,
                 req->m_job, req->m_growType, req->m_lev, req->m_bornYear,
                 req->m_sex, req->m_characNo, req->m_serverId);
    if (!h->exec(0x4e6d) || h->getAffectedRowCount() == 0)
        result = 2;
    if (!h->set_query(0x4e6e,
                      "inSert into guild_member set guild_id=%d,charac_no=%d,m_id=%s,server_id=%d,charac_name='%s',grade=1,job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,apply_time=now(),member_time=now(),member_flag=1",
                      guildId, req->m_characNo, NumberToString(req->m_id, 0),
                      req->m_serverId, req->m_characName, req->m_job,
                      req->m_growType, req->m_lev, req->m_bornYear, req->m_sex))
    {
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e6e))
        result = 2;
    if (!h->set_query(0x4e6f,
                      "inSert into guild_introduce set guild_id=%d,server_id=%d",
                      guildId, req->m_serverId))
    {
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e6f))
        result = 2;
    if (!h->set_query(0x4e70,
                      "inSert into guild_member_introduce set guild_id=%d,charac_no=%d",
                      guildId, req->m_characNo))
    {
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e70))
        result = 2;
    if (!h->set_query(0x4e71,
                      "inSert into guild_visit set guild_id=%d,server_id=%d, total_visit=0, today_visit=0",
                      guildId, req->m_serverId))
    {
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e71))
        result = 2;
    if (!h->set_query(0x4e72, "inSert into guild_skill set guild_id=%d", guildId))
    {
        result = 2;
        return 0;
    }
    if (!h->exec(0x4e72))
        result = 2;
    if (!h2->set_query(0x4e73,
                       "upDate charac_info set guild_id=%d where m_id=%s and charac_no=%d",
                       guildId, NumberToString(req->m_id, 0), req->m_characNo))
    {
        result = 2;
        return 0;
    }
    if (!h2->exec(0x4e73))
        result = 2;
    return 1;
}

ST_MemberProxy::ST_MemberProxy()
{
    m_no = 0;
    m_lev = 0;
    m_field23 = 0;
    memset(m_name, 0, 0x1e);
}

STMemberDBInfo::STMemberDBInfo() {}

STGuildMemberProxy::STGuildMemberProxy()
{
    m_no = 0;
    m_field22 = 0xff;
    m_field23 = 0xff;
    m_field24 = 0xffff;
    m_field26 = 0;
    m_field27 = 0;
    m_field28 = 0;
    memset(m_name, 0, 0x1e);
    memset(m_data2c, 0, 0x15);
}

STGuildSkill::STGuildSkill()
{
    m_field0 = 0xffffffff;
    m_field4 = 0xff;
}

STGuildDBInfoOnly::STGuildDBInfoOnly()
{
    *(int*)((char*)this + 0x17) = 0;
    m_lev = 0;
    *(int*)((char*)this + 0x1e) = 0;
    *(unsigned short*)((char*)this + 0x22) = 0;
    m_guildPoint = 0;
    *(char*)((char*)this + 0x28) = 0;
    m_guildExp = 0;
    *(char*)((char*)this + 0x2d) = 0;
    *(unsigned short*)((char*)this + 0x42) = 0;
    *(char*)((char*)this + 0x44) = 0;
    for (int i = 0; i < 0xf; i++)
        new ((char*)this + 0x45 + i * 5) STGuildSkill;
    m_powerSide = 0;
    *(int*)((char*)this + 0x96) = 0;
    m_powerWarPoint = 0;
    m_guildAgitFlag = 0;
    m_powerJoinCount = 0;
    m_guildFund = 0;
    *(int*)((char*)this + 0xb9) = 0;
    memset((char*)this + 0x2e, 0, 0x14);
    memset((char*)this, 0, 0x17);
    *(unsigned char*)((char*)this + 0x1c) |= 0x1;
    *(unsigned char*)((char*)this + 0x1c) &= 0xfffffffd;
    memset((char*)this + 0x45, 0, 0x50);
    memset((char*)this + 0xa4, 0, 0x15);
}

Packet_Item_Limit_Edition_Load_Data_Rpy::Packet_Item_Limit_Edition_Load_Data_Rpy()
    : PacketHeader(0x1008, 0x7ef)
{
    m_fieldB = 0;
}

char* getList2inQuery(unsigned int count, const unsigned int* list, char* out)
{
    out[0] = 0;
    memcpy(out, "in (", 5);
    for (int i = 0; i < (int)count - 1; i++)
        sprintf(out, "%s%d,", out, list[i]);
    sprintf(out, "%s%d)", out, list[count - 1]);
    return out;
}

char CDBManager::onItemLimitEditionLoadData(
    const Packet_Item_Limit_Edition_Load_Data_Req* req,
    Packet_Item_Limit_Edition_Load_Data_Rpy* rpy)
{
    CDBHandle* h = m_handles[1];    // neople db
    if (!h)
        return 0;
    time_t now = time(0);
    char buf[0x400];
    memset(buf, 0, 0x400);
    if (req->m_fieldF == 0 && req->m_fieldA == 0)
    {
        memcpy(buf, "and ipg_no ", 0xc);
        getList2inQuery(req->m_fieldF, (const unsigned int*)((char*)req + 0x13),
                        buf + 0xb);
    }
    if (!h->set_query(0x4ec7,
                      "seLect ipg_no,item_no,item_cnt,cera_price,gold_price,avatar_period_type,total_cnt,sell_cnt,restrict_no,start_time,end_time,npc_idx,cond_charac_job,cond_lev_begin,cond_lev_end,cond_acc_create_time_begin,cond_acc_create_time_end,cond_cha_create_time_begin,cond_cha_create_time_end from limited_shop_manager where server_id=%d %s and (start_time<%d and end_time>%d) and status_flag=0 limit %d",
                      req->m_fieldB, buf, now, now, 0x1c))
        return 0;
    if (!h->exec(0x4ec7))
        return 0;
    rpy->m_fieldA = req->m_fieldA;
    rpy->m_fieldB = h->get_n_rows();
    int n = rpy->m_fieldB;
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
#define IT(i) ((STItemLimitItem*)((char*)rpy + 0xf + (i) * 0x48))
        int col = 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x0f)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x13)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x17)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x1f)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x23)))
            return 0;
        if (!h->get_ubyte(col++, *(unsigned char*)((char*)IT(i) + 0x1b)))
            return 0;
        if (!h->get_int(col++, *(int*)((char*)IT(i) + 0x2b)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x27)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x2f)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x33)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x37)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x3b)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x3f)))
            return 0;
        if (!h->get_short(col++, *(short*)((char*)IT(i) + 0x43)))
            return 0;
        if (!h->get_short(col++, *(short*)((char*)IT(i) + 0x45)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x47)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x4b)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x4f)))
            return 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)IT(i) + 0x53)))
            return 0;
#undef IT
    }
    return 1;
}

char CDBManager::onItemLimitEditionUpdateData(
    const Packet_Item_Limit_Edition_Update* packet)
{
    CDBHandle* h = m_handles[1];    // neople db
    if (!h)
        return 0;
    time_t now = time(0);
    for (int i = 0; i < packet->m_count; i++)
    {
        if (((char*)packet)[i * 9 + 0x1a] != 0)
        {
            if (!h->set_query(0x4ec8,
                              "upDate limited_shop_manager set sell_cnt=%d,real_end_time=%d where ipg_no=%d and server_id=%d",
                              *(int*)((char*)packet + i * 9 + 0x16), now,
                              *(int*)((char*)packet + i * 9 + 0x12),
                              packet->m_serverId))
                return 0;
        }
        else
        {
            if (!h->set_query(0x4ec8,
                              "upDate limited_shop_manager set sell_cnt=%d where ipg_no=%d and server_id=%d",
                              *(int*)((char*)packet + i * 9 + 0x16),
                              *(int*)((char*)packet + i * 9 + 0x12),
                              packet->m_serverId))
                return 0;
        }
        h->exec(0x4ec8);
    }
    return 1;
}

char CDBManager::QueryGuild(unsigned char serverGroup, unsigned int guildId,
                            Packet_DB_Reply_Query_Guild& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e22,
                      "seLect guild_name, master_no, lev, ability, member_count, guild_rank, guild_point, guild_exp, power_side, unix_timestamp(power_secede_time), power_war_point, guild_agit_flag, power_join_count, guild_fund,master_name from guild_info where guild_id = %d and server_id = %d and expire_flag = 0",
                      guildId, serverGroup))
    {
        CMyFileLog log("QueryGuild", 0x97);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuild() select guild_name, master_no, lev, ability, member_count, guild_rank, guild_point, guild_exp from guild_info where guild_id = %d\n",
            guildId);
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->exec(0x4e22))
    {
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->fetch())
    {
        *(char*)((char*)&reply + 0xa) = 2;
        return 0;
    }
    char* info = (char*)&reply + 0x13;
#define QG_FAIL() \
    do { \
        *(char*)((char*)&reply + 0xa) = 3; \
        return 0; \
    } while (0)
    if (!h->get_str(0, info, 0x17))
        QG_FAIL();
    if (!h->get_uint(1, *(unsigned int*)(info + 0x17)))
        QG_FAIL();
    if (!h->get_ubyte(2, *(unsigned char*)(info + 0x1b)))
        QG_FAIL();
    if (!h->get_ushort(3, *(unsigned short*)(info + 0x1c)))
        QG_FAIL();
    if (!h->get_ushort(4, *(unsigned short*)(info + 0x22)))
        QG_FAIL();
    unsigned int guildRank = 0;
    if (!h->get_uint(5, guildRank))
        QG_FAIL();
    if (guildRank > 0x64)
        *(char*)(info + 0x28) = 0;
    else
        *(char*)(info + 0x28) = (char)guildRank;
    if (!h->get_uint(6, *(unsigned int*)(info + 0x24)))
        QG_FAIL();
    if (!h->get_uint(7, *(unsigned int*)(info + 0x29)))
        QG_FAIL();
    if (!h->get_ubyte(8, *(unsigned char*)(info + 0x95)))
        QG_FAIL();
    if (!h->get_uint(9, *(unsigned int*)(info + 0x96)))
        QG_FAIL();
    if (!h->get_uint(10, *(unsigned int*)(info + 0x9a)))
        QG_FAIL();
    if (!h->get_ubyte(11, *(unsigned char*)(info + 0x9e)))
        QG_FAIL();
    if (!h->get_ubyte(12, *(unsigned char*)(info + 0x9f)))
        QG_FAIL();
    if (!h->get_uint(13, *(unsigned int*)(info + 0xa0)))
        QG_FAIL();
    if (!h->get_str(14, info + 0xa4, 0x15))
        QG_FAIL();
#undef QG_FAIL
    *(char*)((char*)&reply + 0xa) = 1;
    return 1;
}

char CDBManager::SaveServerQueueLoadStatistic(unsigned char type, int kind,
                                              int qCnt)
{
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    h->set_query(0x4ecd,
                 "inSert into log_otherserver_load_stat set occ_time=now(), server_type=%d, kind=%d, q_cnt=%d",
                 type, kind, qCnt);
    if (!h->exec(0x4ecd))
    {
        CMyFileLog log("SaveServerQueueLoadStatistic", 0x1c5f);
        log("./log/DBQueryErr", "SaveServerQueueLoadStatistic Query Error");
    }
    return 1;
}

char CDBManager::UpdateGuildWarPointList(int serverId, int rank)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e3d,
                      "upDate guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d",
                      serverId, 0xa))
    {
        CMyFileLog log("UpdateGuildWarPointList", 0x9d2);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildWarPointList() update guild_info set guild_war_point = 1000 where server_id = %d and expire_flag = 0 and guild_rank <= %d",
            serverId, 0xa);
        return 0;
    }
    if (!h->exec(0x4e3d))
        return 0;
    return 1;
}

char CDBManager::UpdateResetGuildPoint(int serverId)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e36,
                      "upDate guild_info set guild_point = 0 , guild_war_point = 0 where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log("UpdateResetGuildPoint", 0x72b);
        log("./log/DBQueryErr",
            "CDBManager::UpdateResetGuildPoint() Fatal Error Break : update guild_info set guild_point = 0 where server_id = %d and expire_flag = 0\n",
            serverId);
    }
    if (!h->exec(0x4e36))
        return 0;
    if (!h->set_query(0x4e38,
                      "upDate guild_member set member_point = 0 where server_id = %d",
                      serverId))
    {
        CMyFileLog log("UpdateResetGuildPoint", 0x737);
        log("./log/DBQueryErr",
            "CDBManager::UpdateResetGuildPoint() Fatal Error Break : update guild_member set member_point = 0 where server_id = %d\n",
            serverId);
    }
    if (!h->exec(0x4e38))
        return 0;
    return 1;
}

char CDBManager::UpdateAccumulateGuildPoint(int serverId)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e35,
                      "upDate guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log("UpdateAccumulateGuildPoint", 0x707);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_point_acc = guild_point_acc + guild_point, guild_point_prev = guild_point where server_id = %d and expire_flag = 0\n",
            serverId);
    }
    if (!h->exec(0x4e35))
        return 0;
    if (!h->set_query(0x4e37,
                      "upDate guild_member set member_point_prev = member_point where server_id = %d",
                      serverId))
    {
        CMyFileLog log("UpdateAccumulateGuildPoint", 0x712);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_member set member_point_prev = member_point where server_id = %d\n",
            serverId);
    }
    if (!h->exec(0x4e37))
        return 0;
    return 1;
}

char CDBManager::ChangeCharName(Packet_DBMW_Change_Char_Name* packet)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e85,
                      "upDate charac_black_list set charac_name='%s' where charac_no=%d",
                      packet->m_name, packet->m_characNo))
    {
        CMyFileLog log("ChangeCharName", 0x1392);
        log("./log/DBQueryErr",
            "CDBManager::ChangeCharName() : upDate charac_black_list set charac_name='%s' where charac_no=%d",
            packet->m_name, packet->m_characNo);
        return 0;
    }
    if (!h->exec(0x4e85))
        return 0;
    return 1;
}

char CDBManager::ChangePvPBuddyName(Packet_DBMW_Change_Char_Name* packet)
{
    CDBHandle* h = m_handles[9];    // +0x24
    if (!h->set_query(0x4efa,
                      "upDate pvp_buddy set buddy_charac_name='%s' where buddy_server_id=%d and buddy_charac_no=%d",
                      packet->m_name, packet->m_serverId, packet->m_characNo))
    {
        CMyFileLog log("ChangePvPBuddyName", 0x13b0);
        log("./log/DBQueryErr",
            "CDBManager::ChangeCharacName() : upDate pvp_buddy set charac_name='%s' where server_id=%d and charac_no=%d",
            packet->m_name, packet->m_serverId, packet->m_characNo);
        return 0;
    }
    if (!h->exec(0x4efa))
        return 0;
    return 1;
}

char CDBManager::DeleteJoinListByInvite(unsigned int guildId,
                                        unsigned int characNo)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4f0c,
                      "deLete from guild_join_list where guild_id=%d and charac_no=%d",
                      guildId, characNo))
    {
        CMyFileLog log("DeleteJoinListByInvite", 0xe54);
        log("./log/DBQueryErr", "set_query(deLete_from_guild_join_list) Query Error");
        return 0;
    }
    if (!h->exec(0x4f0c))
    {
        CMyFileLog log("DeleteJoinListByInvite", 0xe5a);
        log("./log/DBQueryErr", "guild_db->exec(deLete_from_guild_join_list) Query Error");
        return 0;
    }
    return 1;
}

char CDBManager::OnUpgradeGuildCargo(Packet_DB_Guild_Cargo_Upgrade* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4edc,
                      "upDate guild_agit set cargo_capacity=%d where guild_id=%d",
                      *(int*)((char*)packet + 0x12), *(int*)((char*)packet + 0xa)))
    {
        CMyFileLog log("OnUpgradeGuildCargo", 0x1bec);
        log("./log/DBQueryErr",
            "OnUpgradeGuildCargo Query Error(G:%d,U:%d,Capa:%d)",
            *(int*)((char*)packet + 0xa), *(int*)((char*)packet + 0xe),
            *(int*)((char*)packet + 0x12));
        return 0;
    }
    if (!h->exec(0x4edc))
        return 0;
    return 1;
}

char CDBManager::OnUpdateGuildCargo(Packet_DB_Update_Guild_Cargo* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* cargo = h->blob_to_str(0, (char*)packet + 0x12, 0x18d8);
    if (!h->set_query(0x4ecb,
                      "upDate guild_agit set cargo='%s' where guild_id=%d",
                      cargo, *(int*)((char*)packet + 0xa)))
    {
        CMyFileLog log("OnUpdateGuildCargo", 0x1b90);
        log("./log/DBQueryErr", "OnUpdateGuildCargo Query Error");
        return 0;
    }
    if (!h->exec(0x4ecb))
        return 0;
    return 1;
}

char CDBManager::OnStatisticNumOfOccupations(
    Packet_DBMW_Statistic_Login_Logout* packet)
{
    CDBHandle* h = m_handles[2];    // game db
    if (h->set_query(0x4eec,
                     "inSert into log_num_occupations(occ_time,num_occupations_charscreen,num_occupations_seriaroom,num_login_per_min,num_logout_per_min) values (now(),%d,%d,%d,%d)",
                     *(int*)((char*)packet + 0x608), *(int*)((char*)packet + 0x60c),
                     *(int*)((char*)packet + 0x610), *(int*)((char*)packet + 0x614)))
        return 1;
    if (!h->exec(0x4eeb))
    {
        CMyFileLog log("OnStatisticNumOfOccupations", 0x20b6);
        log("./log/Statistics", "OnStatisticNumOfOccupations db insert error");
    }
    return 1;
}

Packet_Result_OnTimeEvent_Idx::Packet_Result_OnTimeEvent_Idx()
    : PacketHeader(0x2341, 0xf)
{
    m_fieldA = 0;
    m_fieldE = 0;
}

char CDBManager::OnStatisticLoginLogout(
    Packet_DBMW_Statistic_Login_Logout* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    time_t now = time(0);
    for (int i = 0; i < *(int*)((char*)packet + 0xa); i++)
    {
        h->set_query(0x4eeb,
                     "inSert into log_login_logout(occ_time,channel_no,event_type,count) values (from_unixtime(%d),%d,%d,%d)",
                     now, *(unsigned char*)((char*)packet + i * 6 + 0xe),
                     *(unsigned char*)((char*)packet + i * 6 + 0xf),
                     *(int*)((char*)packet + i * 6 + 0x10));
        if (!h->exec(0x4eeb))
        {
            CMyFileLog log("OnStatisticLoginLogout", 0x2099);
            log("./log/Statistics", "OnStatisticLoginLogout db insert error");
        }
    }
    return 1;
}

char CDBManager::QueryOnTimeEventIdx(Packet_Result_OnTimeEvent_Idx& rpy)
{
    CDBHandle* h = m_handles[0xd];    // se_event db
    *(unsigned int*)((char*)&rpy + 0xa) = 0;
    if (!h->set_query(0x4f14,
                      "seLect ifnull(max(no), 1) from event_1112_ontime_info"))
    {
        CMyFileLog log("QueryOnTimeEventIdx", 0x244e);
        log("./log/DBQueryErr", "set_query(seLect_from_event_ontime_idx) Query Error");
        return 0;
    }
    if (!h->exec(0x4f14) || !h->fetch())
        return 0;
    if (!h->get_uint(0, *(unsigned int*)((char*)&rpy + 0xa)))
        return 0;
    return 1;
}

Packet_Frame_Lag_Collect_Interval_Check::Packet_Frame_Lag_Collect_Interval_Check()
    : PacketHeader(0xc2f, 0xc)
{
}

Packet_Frame_Lag_Statistic_Result_Reload_Spec::
    Packet_Frame_Lag_Statistic_Result_Reload_Spec()
    : PacketHeader(0xc2a, 0xe5)
{
}

Packet_Frame_Lag_Statistic_Result_Load_Spec::Packet_Frame_Lag_Statistic_Result_Load_Spec()
    : PacketHeader(0xc28, 0xe5)
{
}

Packet_Frame_Lag_Spec_Delete_Notify::Packet_Frame_Lag_Spec_Delete_Notify()
    : PacketHeader(0xc2e, 0xe)
{
}

char CDBManager::QueryReloadSpecDb(Packet_Frame_Lag_Statistic_Reload_Spec* req,
                                   CStatisticsServer* stats)
{
    CDBHandle* h = m_handles[0xf];    // frame_lag db
    if (!h)
        return 0;
    h->set_query(0x4e8f,
                 "seLect value from collect_interval where start_time <= now() and now() <= end_time order by start_time limit 1");
    if (!h->exec(0x4e8f))
        return 0;
    Packet_Frame_Lag_Collect_Interval_Check pkt;
    if (h->get_n_rows() != 0)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_short(0, *(short*)((char*)&pkt + 0xa)))
            return 0;
    }
    else
    {
        pkt.m_fieldA = 0;
    }
    stats->SendToServer((char*)&pkt, pkt.packetSize);
    h->set_query(0x4e8a,
                 "seLect unique_id,unix_timestamp(modify_time),spec_id,cpu_vendor,cpu_processor_num,above_cpu_clock,below_cpu_clock,ram,videocard_vendor,videocard_device,videocard_texture_mem,os_version from monitoring_spec where unix_timestamp(modify_time)>%d",
                 *(int*)((char*)req + 0xb));
    if (!h->exec(0x4e8a))
        return 0;
    int n_rows = h->get_n_rows();
    if (n_rows <= 0)
        return 1;
    Packet_Frame_Lag_Statistic_Result_Reload_Spec rp;
    rp.m_fieldA = req->m_fieldA;
    int count = n_rows / 6;
    if (n_rows % 6 != 0)
        count++;
    *(int*)((char*)&rp + 0xf) = count;
    *(int*)((char*)&rp + 0xb) = 1;
    int i = 0;
    for (int j = 0; j < n_rows; j++)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_int(0, *(int*)((char*)&rp + (i + 4) * 4 + 3)))
            return 0;
        if (!h->get_uint(1, *(unsigned int*)((char*)&rp + (i + 8) * 4 + 0xb)))
            return 0;
        if (!h->get_int(2, *(int*)((char*)&rp + (i + 0x10) * 4 + 3)))
            return 0;
        if (!h->get_byte(3, *(char*)((char*)&rp + 0x50 + i + 0xb)))
            return 0;
        if (!h->get_byte(4, *(char*)((char*)&rp + 0x60 + i + 1)))
            return 0;
        if (!h->get_int(5, *(int*)((char*)&rp + (i + 0x18) * 4 + 7)))
            return 0;
        if (!h->get_int(6, *(int*)((char*)&rp + (i + 0x1c) * 4 + 0xf)))
            return 0;
        if (!h->get_short(7, *(short*)((char*)&rp + (i + 0x48) * 2 + 7)))
            return 0;
        if (!h->get_int(8, *(int*)((char*)&rp + (i + 0x28) * 4 + 3)))
            return 0;
        if (!h->get_int(9, *(int*)((char*)&rp + (i + 0x2c) * 4 + 0xb)))
            return 0;
        if (!h->get_short(10, *(short*)((char*)&rp + (i + 0x68) * 2 + 3)))
            return 0;
        if (!h->get_byte(11, *(char*)((char*)&rp + 0xd0 + i + 0xf)))
            return 0;
        i++;
        if (i % 6 == 0)
        {
            stats->SendToServer((char*)&rp, rp.packetSize);
            DNFFLib::Sleep_Ext(0, 1);
            stats->SendToServer((char*)&rp, rp.packetSize);
            *(int*)((char*)&rp + 0xb) += 1;
            i = 0;
        }
    }
    if (i != 0)
    {
        if (i > 0 && i <= 5)
            *(int*)((char*)&rp + (i + 4) * 4 + 3) = -1;
        stats->SendToServer((char*)&rp, rp.packetSize);
        DNFFLib::Sleep_Ext(0, 1);
        stats->SendToServer((char*)&rp, rp.packetSize);
        i = 0;
    }
    return 1;
}

char CDBManager::InsertFrameLagStatistics(
    Packet_Frame_Lag_Statistic_Write_Lag_Index* packet, CStatisticsServer* stats)
{
    CDBHandle* h = m_handles[0xf];    // frame_lag db
    if (!h)
        return 0;
    h->set_query(0x4e8c,
                 "inSert into common_index(spec_id,occ_time,server_group,share_rate,crash_village,crash_dungeon,crash_challenge,crash_wararea,crash_fight_village,crash_dead_tower,crash_channel,crash_load,village_to_dungeon_lag,dungeon_to_village_lag) values(%d,from_unixtime(%d),%hhd,%u,%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hu,%hd,%hd)",
                 *(int*)((char*)packet + 0xb),
                 *(unsigned int*)((char*)packet + 0x177),
                 *(signed char*)((char*)packet + 0xa),
                 *(unsigned int*)((char*)packet + 0xf),
                 *(unsigned short*)((char*)packet + 0x13),
                 *(unsigned short*)((char*)packet + 0x15),
                 *(unsigned short*)((char*)packet + 0x17),
                 *(unsigned short*)((char*)packet + 0x19),
                 *(unsigned short*)((char*)packet + 0x1b),
                 *(unsigned short*)((char*)packet + 0x1d),
                 *(unsigned short*)((char*)packet + 0x1f),
                 *(unsigned short*)((char*)packet + 0x21),
                 *(short*)((char*)packet + 0x23),
                 *(short*)((char*)packet + 0x25));
    if (!h->exec(0x4e8c))
        return 0;
    char buf[0x20];
    for (int kind = 0; kind <= 5; kind++)
    {
        switch (kind)
        {
        case 0:
            strncpy(buf, "village_lag_index", 0x20);
            break;
        case 1:
            strncpy(buf, "dungeon_lag_index", 0x20);
            break;
        case 2:
            strncpy(buf, "challenge_lag_index", 0x20);
            break;
        case 3:
            strncpy(buf, "wararea_lag_index", 0x20);
            break;
        case 4:
            strncpy(buf, "fight_village_lag_index", 0x20);
            break;
        case 5:
            strncpy(buf, "dead_tower_lag_index", 0x20);
            break;
        default:
            memcpy(buf, "___MAX_FRAME_LAG_STATISTISCS_KIND over", 0x20);
            break;
        }
        h->set_query(0x4e8d,
                     "inSert into %s(spec_id,occ_time,server_group,share_rate,win_fps,full_fps,full_win_fps,full_win_nosync_fps,frame1,time1,frame2,time2,frame3,time3,frame4,time4,frame5,time5,frame6,time6) values(%d,from_unixtime(%d),%hhd,%u,%hd,%hd,%hd,%hd,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f,%d,%.3f)",
                     buf,
                     *(int*)((char*)packet + 0xb),
                     *(unsigned int*)((char*)packet + 0x177),
                     *(signed char*)((char*)packet + 0xa),
                     *(unsigned int*)((char*)packet + 0xf),
                     *(short*)((char*)packet + kind * 0x38 + 0x27),
                     *(short*)((char*)packet + kind * 0x38 + 0x29),
                     *(short*)((char*)packet + kind * 0x38 + 0x2b),
                     *(short*)((char*)packet + kind * 0x38 + 0x2d),
                     *(int*)((char*)packet + kind * 0x38 + 0x2f),
                     *(float*)((char*)packet + kind * 0x38 + 0x33),
                     *(int*)((char*)packet + kind * 0x38 + 0x37),
                     *(float*)((char*)packet + kind * 0x38 + 0x3b),
                     *(int*)((char*)packet + kind * 0x38 + 0x3f),
                     *(float*)((char*)packet + kind * 0x38 + 0x43),
                     *(int*)((char*)packet + kind * 0x38 + 0x47),
                     *(float*)((char*)packet + kind * 0x38 + 0x4b),
                     *(int*)((char*)packet + kind * 0x38 + 0x4f),
                     *(float*)((char*)packet + kind * 0x38 + 0x53),
                     *(int*)((char*)packet + kind * 0x38 + 0x57),
                     *(float*)((char*)packet + kind * 0x38 + 0x5b));
        if (!h->exec(0x4e8d))
            return 0;
    }
    h->set_query(0x4e8e,
                 "select unique_id from monitoring_spec where spec_id = %d",
                 *(int*)((char*)packet + 0xb));
    if (!h->exec(0x4e8e))
        return 0;
    if (h->get_n_rows() != 0)
        return 1;
    Packet_Frame_Lag_Spec_Delete_Notify pkt;
    *(int*)((char*)&pkt + 0xb) = *(int*)((char*)packet + 0xb);
    stats->SendToServer((char*)&pkt, pkt.packetSize);
    return 1;
}

char CDBManager::QueryFirstLoadSpecDb(Packet_Frame_Lag_Statistic_Load_Spec* req,
                                      CStatisticsServer* stats)
{
    CDBHandle* h = m_handles[0xf];    // frame_lag db
    if (!h)
        return 0;
    h->set_query(0x4e89,
                 "seLect unique_id,unix_timestamp(modify_time),spec_id,cpu_vendor,cpu_processor_num,above_cpu_clock,below_cpu_clock,ram,videocard_vendor,videocard_device,videocard_texture_mem,os_version from monitoring_spec");
    if (!h->exec(0x4e89))
        return 0;
    int n_rows = h->get_n_rows();
    if (n_rows <= 0)
        return 1;
    Packet_Frame_Lag_Statistic_Result_Load_Spec rp;
    rp.m_fieldA = req->m_fieldA;
    int count = n_rows / 6;
    if (n_rows % 6 != 0)
        count++;
    *(int*)((char*)&rp + 0xf) = count;
    *(int*)((char*)&rp + 0xb) = 1;
    int i = 0;
    for (int j = 0; j < n_rows; j++)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_int(0, *(int*)((char*)&rp + (i + 4) * 4 + 3)))
            return 0;
        if (!h->get_uint(1, *(unsigned int*)((char*)&rp + (i + 8) * 4 + 0xb)))
            return 0;
        if (!h->get_int(2, *(int*)((char*)&rp + (i + 0x10) * 4 + 3)))
            return 0;
        if (!h->get_byte(3, *(char*)((char*)&rp + 0x50 + i + 0xb)))
            return 0;
        if (!h->get_byte(4, *(char*)((char*)&rp + 0x60 + i + 1)))
            return 0;
        if (!h->get_int(5, *(int*)((char*)&rp + (i + 0x18) * 4 + 7)))
            return 0;
        if (!h->get_int(6, *(int*)((char*)&rp + (i + 0x1c) * 4 + 0xf)))
            return 0;
        if (!h->get_short(7, *(short*)((char*)&rp + (i + 0x48) * 2 + 7)))
            return 0;
        if (!h->get_int(8, *(int*)((char*)&rp + (i + 0x28) * 4 + 3)))
            return 0;
        if (!h->get_int(9, *(int*)((char*)&rp + (i + 0x2c) * 4 + 0xb)))
            return 0;
        if (!h->get_short(10, *(short*)((char*)&rp + (i + 0x68) * 2 + 3)))
            return 0;
        if (!h->get_byte(11, *(char*)((char*)&rp + 0xd0 + i + 0xf)))
            return 0;
        i++;
        if (i % 6 == 0)
        {
            stats->SendToServer((char*)&rp, rp.packetSize);
            DNFFLib::Sleep_Ext(0, 1);
            stats->SendToServer((char*)&rp, rp.packetSize);
            *(int*)((char*)&rp + 0xb) += 1;
            i = 0;
        }
    }
    if (i != 0)
    {
        if (i > 0 && i <= 5)
            *(int*)((char*)&rp + (i + 4) * 4 + 3) = -1;
        stats->SendToServer((char*)&rp, rp.packetSize);
        DNFFLib::Sleep_Ext(0, 1);
        stats->SendToServer((char*)&rp, rp.packetSize);
        i = 0;
    }
    return 1;
}

char CDBManager::QueryTodayGuildMember(unsigned int guildId,
                                       Packet_Reply_Today_Guild_Member& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    time_t now = time(0);
    localtime(&now);
    *(unsigned int*)((char*)&reply + 0xa) = guildId;
    unsigned int i = 0;
    std::vector<STTodayGuildMember> vec;
    vec.clear();
    if (!h->set_query(0x4f05,
                      "seLect charac_no,charac_name,grade,job,grow_type,sex,lev from guild_member where guild_id = %d and member_flag = 1 and grade != 0",
                      guildId))
        return 0;
    if (!h->exec(0x4f05))
        return 0;
    while (i < (unsigned int)h->get_n_rows())
    {
        STTodayGuildMember member;
        memset(&member, 0, 0x27);
        if (!h->fetch())
            return 0;
        if (!h->get_uint(0, member.m_field0))
            return 0;
        if (!h->get_str(1, member.m_name, 0x1d))
            return 0;
        if (!h->get_byte(2, *(char*)&member.m_field22))
            return 0;
        if (!h->get_byte(3, *(char*)&member.m_field23))
            return 0;
        if (!h->get_byte(4, *(char*)&member.m_field24))
            return 0;
        if (!h->get_byte(5, *(char*)&member.m_field25))
            return 0;
        if (!h->get_byte(6, *(char*)&member.m_field26))
            return 0;
        vec.push_back(member);
        i++;
    }
    if (vec.size() <= 0x13)
        return 1;
    STTodayGuildMember& m = vec[rand() % vec.size()];
    *(STTodayGuildMember*)((char*)&reply + 0xe) = m;
    vec.clear();
    return 1;
}

char CDBManager::QueryHWspecCreate(
    Packet_DBMW_Save_Client_Spec_Statistic* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    int count = *(int*)((char*)packet + 0xb);
    if (*(unsigned char*)((char*)packet + 0xa) == 0)
    {
        for (int i = 0; i < count; i++)
        {
            char* e = (char*)packet + 0xf + i * 0xe;
            h->set_query(0x4e78,
                         "upDate log_hardware_ting set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",
                         *(unsigned short*)(e + 0), now,
                         *(unsigned char*)(e + 2), *(int*)(e + 6),
                         *(int*)(e + 0xa));
            if (!h->exec(0x4e78))
            {
                h->set_query(0x4e79,
                             "inSert into log_hardware_ting(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)",
                             now, *(unsigned char*)(e + 2), *(int*)(e + 6),
                             *(int*)(e + 0xa), *(unsigned short*)(e + 0));
                if (!h->exec(0x4e79))
                    return 0;
            }
        }
    }
    else if (*(unsigned char*)((char*)packet + 0xa) == 1)
    {
        for (int i = 0; i < count; i++)
        {
            char* e = (char*)packet + 0xf + i * 0xe;
            h->set_query(0x4e7a,
                         "upDate log_hardware_ting set ting=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",
                         *(unsigned short*)(e + 0), now,
                         *(unsigned char*)(e + 2), *(int*)(e + 6),
                         *(int*)(e + 0xa));
            if (!h->exec(0x4e7a))
            {
                h->set_query(0x4e7b,
                             "inSert into log_hardware_ting(occ_time, category1, category2, category3, ting) values(from_unixtime(%d), %d, %d, %d, %d)",
                             now, *(unsigned char*)(e + 2), *(int*)(e + 6),
                             *(int*)(e + 0xa), *(unsigned short*)(e + 0));
                if (!h->exec(0x4e7b))
                    return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            char* e = (char*)packet + 0xf + i * 0xe;
            h->set_query(0x4e7c,
                         "upDate log_hardware_ting_low set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",
                         *(unsigned short*)(e + 0), now,
                         *(unsigned char*)(e + 2), *(int*)(e + 6),
                         *(int*)(e + 0xa));
            if (!h->exec(0x4e7c))
            {
                h->set_query(0x4e7d,
                             "inSert into log_hardware_ting_low(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)",
                             now, *(unsigned char*)(e + 2), *(int*)(e + 6),
                             *(int*)(e + 0xa), *(unsigned short*)(e + 0));
                if (!h->exec(0x4e7d))
                    return 0;
            }
        }
    }
    return 1;
}

char CDBManager::OnLoadGuildCargoHistory(
    unsigned int guildId, Packet_Guild_Load_Guild_Cargo_History& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    char buf[0x100];
    memset(buf, 0, 0x100);
    sprintf(buf, "guild_cargo_history_%d", guildId % 10);
    h->set_query(0x4ed8,
                 "seLect occ_time,behavior,charac_name,item_id,add_info,random_option from %s where guild_id=%d order by occ_time desc limit %d",
                 buf, guildId, 0x32);
    if (!h->exec(0x4ed8))
    {
        CMyFileLog log("OnLoadGuildCargoHistory", 0x1b63);
        log("./log/DBQueryErr", "OnLoadGuildCargoHistory Query Error");
        return 0;
    }
    *(int*)((char*)&reply + 0xe) = h->get_n_rows();
    unsigned int j = 0;
    while (j < (unsigned int)h->get_n_rows())
    {
        if (!h->fetch())
            return 0;
        char* base = (char*)&reply + 0x12 + j * 0x30;
        if (!h->get_int(0, *(int*)(base + 0)))
            return 0;
        if (!h->get_byte(1, *(char*)(base + 4)))
            return 0;
        if (!h->get_str(2, base + 5, 0x15))
            return 0;
        if (!h->get_int(3, *(int*)(base + 0x1a)))
            return 0;
        if (!h->get_int(4, *(int*)(base + 0x1e)))
            return 0;
        if (!h->get_binary(5, base + 0x22, 0xe))
            return 0;
        j++;
    }
    return 1;
}

char CDBManager::DeleteToBlackList(unsigned int m_id, unsigned int characNo)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e40,
                      "deLete from charac_black_list where m_id = %s and charac_no = %d",
                      NumberToString(m_id, 0), characNo))
        return 0;
    if (!h->exec(0x4e40))
        return 0;
    if (!h->set_query(0x4ed6,
                      "seLect black_point,offset_point from charac_black_info where charac_no=%d",
                      characNo))
    {
        CMyFileLog log("DeleteToBlackList", 0xa6c);
        log("./log/BlackListModify",
            "CDBManager::DeleteToBlackList() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->exec(0x4ed6))
        return 0;
    if (h->get_n_rows() > 1)
    {
        CMyFileLog log("DeleteToBlackList", 0xa74);
        log("./log/BlackListModify",
            "CDBManager::seLect_black_point_offset_point_from_charac_black_info() idata > 1 seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
    }
    if (!h->fetch())
    {
        CMyFileLog log("DeleteToBlackList", 0xa7a);
        log("./log/BlackListModify",
            "CDBManager::seLect_black_point_offset_point_from_charac_black_info() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    int blackPoint = 0;
    int offsetPoint = 0;
    if (!h->get_int(0, blackPoint))
    {
        CMyFileLog log("DeleteToBlackList", 0xa82);
        log("./log/BlackListModify",
            "CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (!h->get_int(1, offsetPoint))
    {
        CMyFileLog log("DeleteToBlackList", 0xa87);
        log("./log/BlackListModify",
            "CDBManager::DeleteToBlackList() !db->fetch() seLect black_point,offset_point from charac_black_info where charac_no=%d",
            characNo);
        return 0;
    }
    if (blackPoint - offsetPoint > 0)
    {
        if (!h->set_query(0x4e42,
                          "upDate charac_black_info set black_point = black_point - 1 where charac_no = %d",
                          characNo))
        {
            CMyFileLog log("DeleteToBlackList", 0xa91);
            log("./log/BlackListModify",
                "CDBManager::DeleteToBlackList() upDate charac_black_info set black_point = black_point - 1 where charac_no = %d",
                characNo);
            return 0;
        }
        if (!h->exec(0x4e42))
            return 0;
    }
    return 1;
}

char CDBManager::OnLoadGuildBoard(int guildId, int& count,
                                  STGuildBoardDBInfo* boards)
{
    CDBHandle* h = m_handles[5];    // sso db
    if (!h->set_query(0x4f07,
                      "seLect no, m_id, charac_no, charac_name, memo, unix_timestamp(create_time), job from guild_memo where guild_id=%d order by no desc limit %d",
                      guildId, 0x32))
    {
        CMyFileLog log("OnLoadGuildBoard", 0x2292);
        log("./log/DBQueryErr", "OnLoadGuildBoard Query Error");
        return 0;
    }
    if (!h->exec(0x4f07))
        return 0;
    count = h->get_n_rows();
    if (count == 0)
        return 0;
    unsigned int i = 0;
    while (i < (unsigned int)count)
    {
        unsigned int m_id = 0;
        if (!h->fetch())
            return 0;
        if (!h->get_uint(0, *(unsigned int*)((char*)boards + i * 0xa5 + 0x7c)))
            return 0;
        if (!h->get_uint(1, m_id))
            return 0;
        if (!h->get_uint(2, *(unsigned int*)((char*)boards + i * 0xa5 + 0x80)))
            return 0;
        if (!h->get_str(3, (char*)boards + i * 0xa5 + 0x87, 0x1e))
            return 0;
        if (!h->get_str(4, (char*)boards + i * 0xa5, 0x78))
            return 0;
        if (!h->get_uint(5, *(unsigned int*)((char*)boards + i * 0xa5 + 0x78)))
            return 0;
        if (!h->get_byte(6, *(char*)((char*)boards + i * 0xa5 + 0x84)))
            return 0;
        if (m_id == 0)
            *(unsigned int*)((char*)boards + i * 0xa5 + 0x80) = 0;
        i++;
    }
    return 1;
}

char CDBManager::selectCollectItems(unsigned char serverInfo, int& curCount,
                                    int& totalCount, unsigned int& changeFlag,
                                    unsigned char& fullTime)
{
    CDBHandle* h = m_handles[9];    // +0x24
    if (!h)
        return 0;
    if (!h->set_query(0x4f4c,
                      "seLect cur_count, total_count, change_flag, unix_timestamp(full_time) from collect_items where server_info = %d",
                      serverInfo))
    {
        CMyFileLog log("selectCollectItems", 0x2977);
        log("./log/DBQueryErr",
            "seLect cur_count, total_count from collect_items Error");
        return 0;
    }
    if (!h->exec(0x4f4c))
    {
        CMyFileLog log("selectCollectItems", 0x2981);
        log("./log/DBQueryErr", "selectCollectItems Query(exec) Error");
        return 0;
    }
    if (h->get_n_rows() == 0)
    {
        CMyFileLog log("selectCollectItems", 0x2987);
        log("./log/DBQueryErr", "selectCollectItems (Row_Data Not Exist) Error");
        return 0;
    }
    if (!h->fetch())
    {
        CMyFileLog log("selectCollectItems", 0x298e);
        log("./log/DBQueryErr", "selectCollectItems Query(fetch) Error");
        return 0;
    }
    if (!h->get_int(0, curCount))
    {
        CMyFileLog log("selectCollectItems", 0x2997);
        log("./log/DBQueryErr", "selectCollectItems (get_uint(cur_count_)) Error");
        return 0;
    }
    if (!h->get_int(1, totalCount))
    {
        CMyFileLog log("selectCollectItems", 0x299e);
        log("./log/DBQueryErr",
            "selectCollectItems (get_uint(total_count_) Error");
        return 0;
    }
    if (!h->get_ubyte(2, fullTime))
    {
        CMyFileLog log("selectCollectItems", 0x29a5);
        log("./log/DBQueryErr", "selectCollectItems (get_ubyte(change_flag) Error");
        return 0;
    }
    if (!h->get_uint(3, changeFlag))
    {
        CMyFileLog log("selectCollectItems", 0x29ac);
        log("./log/DBQueryErr",
            "selectCollectItems (get_uint(total_count_) Error");
        return 0;
    }
    return 1;
}

char CDBManager::updateNexonPinPcRoomPlayTimeEvent(
    unsigned char serverInfo, unsigned int m_id, unsigned int& pinNo,
    char* nexonPin, unsigned int len)
{
    CDBHandle* h = m_handles[9];    // +0x24
    if (!h)
        return 0;
    if (!h->set_query(0x4f4e,
                      "seLect no, nexon_pin from event_pcroom_time_nexon_cash where server_info = %d and m_id = 0 order by no asc limit 1",
                      serverInfo))
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a16);
        log("./log/DBQueryErr", "seLect NexonPinPcRoomPlayTime set Error");
        return 0;
    }
    if (!h->exec(0x4f4e))
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a1e);
        log("./log/DBQueryErr",
            "selectNexonPinPcRoomPlayTime Query(exec) Error");
        return 0;
    }
    if (h->get_n_rows() == 0)
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a24);
        log("./log/DBQueryErr",
            "selectNexonPinPcRoomPlayTime (Row_Data Not Exist) Error");
        return 0;
    }
    if (!h->fetch())
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a2b);
        log("./log/DBQueryErr",
            "selectNexonPinPcRoomPlayTime Query(fetch) Error");
        return 0;
    }
    if (!h->get_uint(0, pinNo))
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a32);
        log("./log/DBQueryErr",
            "selectNexonPinPcRoomPlayTime (get_uint(pin_num)) Error");
        return 0;
    }
    if (!h->get_str(1, nexonPin, len))
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a39);
        log("./log/DBQueryErr",
            "selectNexonPinPcRoomPlayTime (get_str(nexon_pin)) Error");
        return 0;
    }
    if (!h->set_query(0x4f4f,
                      "upDate event_pcroom_time_nexon_cash set m_id = %d, occ_date = now() where no = %d",
                      m_id, pinNo))
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a43);
        log("./log/DBQueryErr", "upDate NexonPinPcRoomPlayTime set Error");
        return 0;
    }
    if (!h->exec(0x4f4f))
    {
        CMyFileLog log("updateNexonPinPcRoomPlayTimeEvent", 0x2a4b);
        log("./log/DBQueryErr",
            "upDate updateNexonPinPcRoomPlayTime Query(exec) Error");
        return 0;
    }
    return 1;
}

char CDBManager::OnSaveAssertManagerInfoWrite(
    Packet_DBMW_Assert_Manager_Info_Write_Query* packet)
{
    CDBHandle* h = m_handles[0xf];    // frame_lag db
    if (!h)
        return 0;
    int count = *(int*)((char*)packet + 0xa);
    for (int i = 0; i < count; i++)
    {
        char buf1[0x400];
        char buf2[0x100];
        char buf3[0x100];
        memset(buf1, 0, 0x400);
        memset(buf2, 0, 0x100);
        char* entry = (char*)packet + i * 0x206;
        if (strlen(entry + 0xe) > 0xfe || entry[0xe] == 0)
        {
            CMyFileLog log("OnSaveAssertManagerInfoWrite", 0x1a0e);
            log("./log/Statistics", "Assert Manager Error : %s", entry + 0xe);
            continue;
        }
        h->escape_string(buf2, entry + 0xe);
        memset(buf3, 0, 0x100);
        h->escape_string(buf3, entry + 0x114);
        sprintf(buf1,
                "upDate assert_manager set cnt=cnt+%d where file_name='%s' and file_line=%d and reason='%s'",
                *(int*)(entry + 0x110), buf2,
                *(unsigned short*)(entry + 0x10e), buf3);
        h->set_query(0x4eb8, "%s", buf1);
        if (!h->exec(0x4eb8))
        {
            memset(buf1, 0, 0x400);
            sprintf(buf1,
                    "inSert into assert_manager (file_name, file_line, reason, cnt) values ('%s', %d, '%s', %d)",
                    buf2, *(unsigned short*)(entry + 0x10e), buf3,
                    *(int*)(entry + 0x110));
            h->set_query(0x4eb7, "%s", buf1);
            h->exec(0x4eb7);
        }
        CMyFileLog log("OnSaveAssertManagerInfoWrite", 0x1a2e);
        log("./log/Statistic", "Exec Query : %s", buf1);
    }
    return 1;
}

char CDBManager::QueryCubeStatisticCreate(Packet_DBMW_Cube_Statistic* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = *(int*)((char*)packet + 0xa);
    CMyFileLog slog("QueryCubeStatisticCreate", 0x1872);
    slog("./log/statistic",
         "CDBManager::QueryCubeStatisticCreate : (%d) °³ ÆÐÅ¶ ¼ö½Å\n", count);
    char buf[0x800];
    memset(buf, 0, 0x800);
    std::string str;
    for (int i = 0; i < count; i++)
    {
        char* e = (char*)packet + i * 0xd;
        if (str.size() != 0)
        {
            sprintf(buf, ",(now(),%d,%d,%d,%d,%d)", *(short*)(e + 0xe),
                    *(short*)(e + 0x10), *(int*)(e + 0x12),
                    *(unsigned char*)(e + 0x1a), *(int*)(e + 0x16));
        }
        else
        {
            sprintf(buf, "(now(),%d,%d,%d,%d,%d)", *(short*)(e + 0xe),
                    *(short*)(e + 0x10), *(int*)(e + 0x12),
                    *(unsigned char*)(e + 0x1a), *(int*)(e + 0x16));
        }
        if (str.length() + 0x800 > 0x6000)
        {
            h->set_query(0x4ec2,
                         "inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",
                         str.c_str());
            if (!h->exec(0x4ec2))
            {
                CMyFileLog log("QueryCubeStatisticCreate", 0x1895);
                log("./log/statistic",
                    "\nQueryCubeStatisticCreate db1 error!!\n");
                return 0;
            }
            str.clear();
            i--;
        }
        else
        {
            str += buf;
        }
    }
    h->set_query(0x4ec2,
                 "inSert into log_cube_stat (occ_time, channel_no, level, item_index, type, item_count) values%s",
                 str.c_str());
    if (!h->exec(0x4ec2))
    {
        CMyFileLog log("QueryCubeStatisticCreate", 0x18a2);
        log("./log/statistic", "\nQueryCubeStatisticCreate db1 error!!\n");
        return 0;
    }
    return 1;
}

char CDBManager::SaveUnchangableGuildInfo(
    Packet_UnChangable_GuildInfo_Save* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (*(char*)((char*)packet + 0x12) == 0)
    {
        CMyFileLog log("SaveUnchangableGuildInfo", 0x1313);
        log("./log/TraceGuildErr",
            "CDBManager::SaveUnchangableGuildInfo guild(%d), charac_no(%d)\n",
            *(int*)((char*)packet + 0xa), *(int*)((char*)packet + 0xe));
        return 0;
    }
    if (!h->set_query(0x4e86,
                      "seLect master_no from guild_info where guild_id = %d and expire_flag = 0",
                      *(int*)((char*)packet + 0xa)))
    {
        CMyFileLog log("SaveUnchangableGuildInfo", 0x1319);
        log("./log/DBQueryErr",
            "CDBManager::SaveUnchangableGuildInfo() seLect master_no from guild_info where guild_id = %d and expire_flag = 0",
            *(int*)((char*)packet + 0xa));
        return 0;
    }
    if (!h->exec(0x4e86))
        return 0;
    if (!h->fetch())
    {
        CMyFileLog log("SaveUnchangableGuildInfo", 0x1327);
        log("./log/DBQueryErr",
            "CDBManager::SaveUnchangableGuildInfo() seLect master_no from guild_info where guild_id = %d and expire_flag = 0, fetch()",
            *(int*)((char*)packet + 0xa));
        return 0;
    }
    unsigned int masterNo = 0;
    if (!h->get_uint(0, masterNo))
        return 0;
    if (*(int*)((char*)packet + 0xe) == (int)masterNo)
    {
        if (!h->set_query(0x4e87,
                          "upDate guild_info set master_name='%s' where guild_id=%d and expire_flag = 0",
                          (char*)packet + 0x12, *(int*)((char*)packet + 0xa)))
        {
            CMyFileLog log("SaveUnchangableGuildInfo", 0x1348);
            log("./log/DBQueryErr",
                "CDBManager::SaveUnchangableGuildInfo() : upDate guild_info set master_name='%s' where guild_id=%d and expire_flag = 0",
                (char*)packet + 0x12, *(int*)((char*)packet + 0xa));
            return 0;
        }
        if (!h->exec(0x4e87))
        {
            CMyFileLog log("SaveUnchangableGuildInfo", 0x134f);
            log("./log/DBQueryErr",
                "CDBManager::SaveUnchangableGuildInfo() : upDate guild_info set master_name='%s' where guild_id=%d and expire_flag = 0, exe()",
                (char*)packet + 0x12, *(int*)((char*)packet + 0xa));
            return 0;
        }
    }
    else
    {
        if (!h->set_query(0x4e84,
                          "upDate guild_member set charac_name='%s' where guild_id=%d and charac_no=%d",
                          (char*)packet + 0x12, *(int*)((char*)packet + 0xa),
                          *(int*)((char*)packet + 0xe)))
        {
            CMyFileLog log("SaveUnchangableGuildInfo", 0x135e);
            log("./log/DBQueryErr",
                "CDBManager::SaveUnchangableGuildInfo() : upDate guild_member set charac_name=%s where guild_id=%d and charac_no=%d",
                (char*)packet + 0x12, *(int*)((char*)packet + 0xa),
                *(int*)((char*)packet + 0xe));
            return 0;
        }
        if (!h->exec(0x4e84))
        {
            CMyFileLog log("SaveUnchangableGuildInfo", 0x1369);
            log("./log/DBQueryErr",
                "CDBManager::SaveUnchangableGuildInfo() : upDate guild_member set charac_name=%s where guild_id=%d and charac_no=%d, exe()",
                (char*)packet + 0x12, *(int*)((char*)packet + 0xa),
                *(int*)((char*)packet + 0xe));
            return 0;
        }
    }
    return 1;
}

char CDBManager::InsertLetter(unsigned int characNo, unsigned int sendCharacNo,
                              const char* subject, const char* content,
                              int& letterNo, long expiry)
{
    CDBHandle* h = m_handles[3];    // game db
    char buf1[0x200];
    memset(buf1, 0, 0x200);
    h->escape_string(buf1, (char*)content);
    char buf2[0x3c];
    memset(buf2, 0, 0x3c);
    h->escape_string(buf2, (char*)subject);
    h->set_query(0x4e5c,
                 "inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,'%s','%s',from_unixtime(%d),%d)",
                 characNo, sendCharacNo, buf2, buf1, expiry, 1);
    if (!h->exec(0x4e5c))
        return 0;
    letterNo = GetIdentity(h);
    return 1;
}

char CDBManager::AddBuddy(unsigned int characNo, char* name,
                          STBuddyDBInfo& info, int& result)
{
    result = 3;
    CDBHandle* h = m_handles[2];    // game db
    memcpy(&info, name, 0x1d);
    char buf[0x3c];
    memset(buf, 0, 0x3c);
    h->escape_string(buf, name);
    if (!h->set_query(0x4e50,
                      "seLect charac_no, lev, job, grow_type, sex, m_id, charac_name from charac_info where charac_name = '%s' and delete_flag = 0",
                      buf))
    {
        CMyFileLog log("AddBuddy", 0xb8a);
        log("./log/DBQueryErr",
            "seLect charac_no, lev, job, grow_type, sex from charac_info where charac_name = '%s' and delete_flag = 0",
            buf);
        return 0;
    }
    if (!h->exec(0x4e50))
        return 0;
    int n = h->get_n_rows();
    if (n == 0)
        return 0;
    if (n > 1)
    {
        CMyFileLog log("AddBuddy", 0xb9e);
        log("./log/DBQueryErr",
            "CDBManager::AddBuddy() : n_data != 1( %d ) \n", n);
    }
    if (!h->fetch())
        return 0;
    if (!h->get_uint(0, info.m_characNo))
        return 0;
    if (!h->get_short(1, info.m_lev))
        return 0;
    if (!h->get_byte(2, info.m_job))
        return 0;
    if (!h->get_byte(3, info.m_growType))
        return 0;
    if (!h->get_byte(4, info.m_sex))
        return 0;
    unsigned int m_id = 0;
    if (!h->get_uint(5, m_id))
        return 0;
    void* gm = m_app->GetGMAccounts();
    if (gm && ((WongWork::CGMAccounts*)gm)->isGM(m_id))
    {
        result = 0x5a;
        return 0;
    }
    if (!h->get_str(6, (char*)&info, 0x1e))
        return 0;
    if (!h->set_query(0x4e51, "inSert into charac_friends values (%d, %d)",
                      characNo, info.m_characNo))
        return 0;
    if (!h->exec(0x4e51))
        return 0;
    result = 0;
    return 1;
}

char CDBManager::QueryIPCounter(
    unsigned char serverGroup, std::vector<st_ip_counter_list>& ipList,
    std::vector<st_full_ip_counter_list>& fullIpList)
{
    CDBHandle* h = m_handles[6];    // guild db
    if (!h->set_query(0x4eda,
                      "seLect hack_type, hack_sub_type, c_class_ip, cnt from  auto_punish_hack_ip where occ_date = now() and cnt >= %d",
                      serverGroup))
    {
        CMyFileLog log("QueryIPCounter", 0x1cd3);
        log("./log/DBQueryErr",
            "CDBManager::QueryIPCounter() seLect hack_type, hack_sub_type, c_class_ip, cnt from  auto_punish_hack_ip where occ_date = now() and cnt >= %d \n",
            serverGroup);
        return 0;
    }
    if (!h->exec(0x4eda))
        return 0;
    int n = h->get_n_rows();
    CMyFileLog log1("QueryIPCounter", 0x1cdf);
    log1("./log/Secu", "[IP Counter] QueryIPCounter (cnt>%d) : %d \n",
         serverGroup, n);
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        st_ip_counter_list item;
        if (!h->get_ushort(0, item.m_field0))
            return 0;
        if (!h->get_ushort(1, item.m_field2))
            return 0;
        memset(item.m_data, 0, 0xc);
        if (!h->get_str(2, item.m_data, 0xc))
            return 0;
        if (!h->get_uint(3, item.m_field10))
            return 0;
        ipList.push_back(item);
    }
    if (!h->set_query(0x4edb,
                      "seLect hack_type, hack_sub_type, full_ip, cnt from  auto_punish_hack_full_ip where occ_date = now() and cnt >= %d",
                      serverGroup))
    {
        CMyFileLog log("QueryIPCounter", 0x1d0f);
        log("./log/DBQueryErr",
            "CDBManager::QueryIPCounter() seLect hack_type, hack_sub_type, full_ip, cnt from  auto_punish_hack_full_ip where occ_date = now() and cnt >= %d \n",
            serverGroup);
        return 0;
    }
    if (!h->exec(0x4edb))
        return 0;
    n = h->get_n_rows();
    CMyFileLog log2("QueryIPCounter", 0x1d1b);
    log2("./log/Secu", "[D_IP Counter] QueryIPCounter (cnt>%d) : %d \n",
         serverGroup, n);
    for (int j = 0; j < n; j++)
    {
        if (!h->fetch())
            return 0;
        st_full_ip_counter_list item;
        if (!h->get_ushort(0, item.m_field0))
            return 0;
        if (!h->get_ushort(1, item.m_field2))
            return 0;
        memset(item.m_data, 0, 0x10);
        if (!h->get_str(2, item.m_data, 0x10))
            return 0;
        if (!h->get_uint(3, item.m_field14))
            return 0;
        fullIpList.push_back(item);
    }
    return 1;
}

char CDBManager::QueryDeathTowerPlayDataJobStatisticCreate(
    Packet_DBMW_DeathTower_Statistic_Playdata_Job* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = *(int*)((char*)packet + 0xa);
    CMyFileLog slog("QueryDeathTowerPlayDataJobStatisticCreate", 0x17a5);
    slog("./log/statistic",
         "Packet_DBMW_DeathTower_Statistic_Playdata_Job : (%d) °³ ÆÐÅ¶ ¼ö½Å\n",
         count);
    char buf[0x800];
    memset(buf, 0, 0x800);
    std::string str;
    for (int i = 0; i < count / 2; i++)
    {
        char* e = (char*)packet + i * 0x10;
        if (str.size() != 0)
        {
            sprintf(buf, ",(now(),%d,%d,%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(short*)(e + 0xf), *(int*)(e + 0x11),
                    *(signed char*)(e + 0x15), *(int*)(e + 0x16),
                    *(int*)(e + 0x1a));
        }
        else
        {
            sprintf(buf, "(now(),%d,%d,%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(short*)(e + 0xf), *(int*)(e + 0x11),
                    *(signed char*)(e + 0x15), *(int*)(e + 0x16),
                    *(int*)(e + 0x1a));
        }
        str += buf;
    }
    h->set_query(0x4e9f,
                 "inSert into log_deathtower_playdata_job (occ_time, type, level, charac_grow, charac_job, avg_clear_count, playcount ) values%s",
                 str.c_str());
    if (!h->exec(0x4e9f))
    {
        CMyFileLog log("QueryDeathTowerPlayDataJobStatisticCreate", 0x17c1);
        log("./log/statistic",
            "\nQueryDeathTowerPlayDataJobStatisticCreate db1 error!!\n");
        return 0;
    }
    memset(buf, 0, 0x800);
    str.clear();
    for (int j = count / 2 + 1; j < count; j++)
    {
        char* e = (char*)packet + j * 0x10;
        if (str.size() != 0)
        {
            sprintf(buf, ",(now(),%d,%d,%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(short*)(e + 0xf), *(int*)(e + 0x11),
                    *(signed char*)(e + 0x15), *(int*)(e + 0x16),
                    *(int*)(e + 0x1a));
        }
        else
        {
            sprintf(buf, "(now(),%d,%d,%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(short*)(e + 0xf), *(int*)(e + 0x11),
                    *(signed char*)(e + 0x15), *(int*)(e + 0x16),
                    *(int*)(e + 0x1a));
        }
        str += buf;
    }
    h->set_query(0x4e9f,
                 "inSert into log_deathtower_playdata_job (occ_time, type, level, charac_grow, charac_job, avg_clear_count, playcount) values%s",
                 str.c_str());
    if (!h->exec(0x4e9f))
    {
        CMyFileLog log("QueryDeathTowerPlayDataJobStatisticCreate", 0x17df);
        log("./log/statistic",
            "\nQueryDeathTowerPlayDataJobStatisticCreate db2 error!!\n");
        return 0;
    }
    return 1;
}

char CDBManager::QueryDeathTowerValueStatisticCreate(
    Packet_DBMW_DeathTower_Statistic_Value* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = *(int*)((char*)packet + 0xa);
    CMyFileLog slog("QueryDeathTowerValueStatisticCreate", 0x1760);
    slog("./log/statistic",
         "Packet_DBMW_DeathTower_Statistic_Value : (%d) °³ ÆÐÅ¶ ¼ö½Å\n",
         count);
    for (int i = 0; i < count; i++)
    {
        unsigned int vals[0xb];
        memset(vals, 0, 0x2c);
        vals[*(int*)((char*)packet + i * 0xf + 0x11)] =
            *(unsigned int*)((char*)packet + i * 0xf + 0x19);
        h->set_query(0x4e9e,
                     "upDate log_deathtower_value set try_cnt=try_cnt+%u, clear_stage=clear_stage+%u, recipeCnt=recipeCnt+%u, commonCnt=commonCnt+%u, uncommonCnt=uncommonCnt+%u, rareCnt=rareCnt+%u, uniqCnt=uniqCnt+%u, card_item_goldprice=card_item_goldprice+%u, card_gold=card_gold+%u, repair_price=repair_price+%u  where ",
                     vals[0], vals[1], vals[2], vals[3], vals[4], vals[5],
                     vals[6], vals[7], vals[8], vals[9]);
        if (!h->exec(0x4e9e))
        {
            h->set_query(0x4e9d,
                         "inSert into log_deathtower_value (occ_date, type, level, try_cnt, clear_stage, recipeCnt, commonCnt, uncommonCnt, rareCnt, uniqCnt, card_item_goldprice, card_gold, repair_price) values (cast(now() as date), %d, %d, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u)",
                         *(signed char*)((char*)packet + i * 0xf + 0xe),
                         *(short*)((char*)packet + i * 0xf + 0xf), vals[0],
                         vals[1], vals[2], vals[3], vals[4], vals[5], vals[6],
                         vals[7], vals[8], vals[9]);
            if (!h->exec(0x4e9d))
            {
                CMyFileLog log("QueryDeathTowerValueStatisticCreate", 0x178c);
                log("./log/statistic",
                    "\nQueryDeathTowerValueStatisticCreate db error!!\n");
                return 0;
            }
        }
    }
    return 1;
}

char CDBManager::queryTowerFullRank(unsigned int towerIndex,
                                    std::vector<stTowerRank_t>& ranks,
                                    unsigned int limit)
{
    CDBHandle* h = m_handles[2];    // game db
    for (unsigned int rank = 1; rank <= 4; rank++)
    {
        char ok = 0;
        if (limit <= 5)
        {
            ok = h->set_query(0x4e69,
                              "seLect charac_no,tower_index,rank,member_info from charac_tower_rank_top5 where tower_index=%d and part_type=%d limit %d",
                              towerIndex, rank, limit);
        }
        else
        {
            ok = h->set_query(0x4e69,
                              "seLect charac_no,tower_index,rank,member_info from charac_tower_rank where tower_index=%d and part_type=%d and rank>5 limit %d",
                              towerIndex, rank, limit);
        }
        if (!ok)
        {
            CMyFileLog log("queryTowerFullRank", 0xf6d);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() seLect_charac_no_tower_idx_rank_from_charac_tower_rank Exception Break\n");
            return 0;
        }
        if (!h->exec(0x4e69))
            return 0;
        unsigned int i = 0;
        while (i < (unsigned int)h->get_n_rows())
        {
            if (!h->fetch())
                return 0;
            stTowerRank_t item;
            if (!h->get_uint(0, item.m_characNo))
                return 0;
            if (!h->get_ushort(1, item.m_towerIndex))
                return 0;
            if (!h->get_ushort(2, item.m_rank))
                return 0;
            if (!h->get_binary(3, item.m_memberInfo, rank * 0x17))
                return 0;
            item.m_partType = (char)rank;
            ranks.push_back(item);
            i++;
        }
    }
    return 1;
}

char CDBManager::UpdateDisjointAvatarStatistic(
    Packet_Avater_Disjoint_Statistic_DB* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    char buf1[0x10] = {0};
    char buf2[0x10] = {0};
    if (!h)
        return 0;
    for (int kind = 0; kind <= 2; kind++)
    {
        if (kind == 0)
            memcpy(buf1, "normal", 7);
        else if (kind == 1)
            memcpy(buf1, "high", 5);
        else
            memcpy(buf1, "rare", 5);
        for (int item = 0; item <= 9; item++)
        {
            if (item == 0)
                memcpy(buf2, "headgear", 9);
            else if (item == 1)
                memcpy(buf2, "hair", 5);
            else if (item == 2)
                memcpy(buf2, "face", 5);
            else if (item == 3)
                memcpy(buf2, "jacket", 7);
            else if (item == 4)
                memcpy(buf2, "pants", 6);
            else if (item == 5)
                memcpy(buf2, "shoes", 6);
            else if (item == 6)
                memcpy(buf2, "breast", 7);
            else if (item == 7)
                memcpy(buf2, "waist", 6);
            else if (item == 8)
                memcpy(buf2, "skin", 5);
            else
                memcpy(buf2, "aurora", 7);
            int idx = kind * 9 + item;
            h->set_query(0x4f47,
                         "upDate log_avatar_grind set avatar_emblem_grind=avatar_emblem_grind+%d, avatar_bindcube_grind=avatar_bindcube_grind+%d, avatar_rechargestone_grind=avatar_rechargestone_grind+%d where cur_date=CURDATE() and grade='%s' and body_part='%s' ",
                         *(int*)((char*)packet + idx * 8 + 0xe),
                         *(int*)((char*)packet + (idx + 0x34) * 8 + 0xa),
                         *(int*)((char*)packet + (idx + 0x34) * 4 + 0x12),
                         buf1, buf2);
            if (!h->exec(0x4f47))
            {
                CMyFileLog log("UpdateDisjointAvatarStatistic", 0x1eb0);
                log("./log/DBQueryErr",
                    "CDBManager::UpdateDisjointAvatarStatistic() upDate Error");
            }
        }
    }
    return 1;
}

char CDBManager::QueryDeathTowerPlayDataPartyStatisticCreate(
    Packet_DBMW_DeathTower_Statistic_Playdata_Party* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = *(int*)((char*)packet + 0xa);
    CMyFileLog slog("QueryDeathTowerPlayDataPartyStatisticCreate", 0x17f7);
    slog("./log/statistic",
         "Packet_DBMW_DeathTower_Statistic_Playdata_Party : (%d) °³ ÆÐÅ¶ ¼ö½Å\n",
         count);
    char buf[0x800];
    memset(buf, 0, 0x800);
    std::string str;
    for (int i = 0; i < count / 2; i++)
    {
        char* e = (char*)packet + i * 0xa;
        if (str.size() != 0)
        {
            sprintf(buf, ",(now(),%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(signed char*)(e + 0xf), *(int*)(e + 0x10),
                    *(int*)(e + 0x14));
        }
        else
        {
            sprintf(buf, "(now(),%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(signed char*)(e + 0xf), *(int*)(e + 0x10),
                    *(int*)(e + 0x14));
        }
        str += buf;
    }
    h->set_query(0x4ea1,
                 "inSert into log_deathtower_playdata_party (occ_time, type, party_count, avg_clear_count, playcount) values%s",
                 str.c_str());
    if (!h->exec(0x4ea1))
    {
        CMyFileLog log("QueryDeathTowerPlayDataPartyStatisticCreate", 0x1813);
        log("./log/statistic",
            "\nQueryDeathTowerPlayDataPartyStatisticCreate db1 error!!\n");
        return 0;
    }
    memset(buf, 0, 0x800);
    str.clear();
    for (int j = count / 2 + 1; j < count; j++)
    {
        char* e = (char*)packet + j * 0xa;
        if (str.size() != 0)
        {
            sprintf(buf, ",(now(),%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(signed char*)(e + 0xf), *(int*)(e + 0x10),
                    *(int*)(e + 0x14));
        }
        else
        {
            sprintf(buf, "(now(),%d,%d,%d,%d)", *(signed char*)(e + 0xe),
                    *(signed char*)(e + 0xf), *(int*)(e + 0x10),
                    *(int*)(e + 0x14));
        }
        str += buf;
    }
    h->set_query(0x4ea1,
                 "inSert into log_deathtower_playdata_party (occ_time, type, party_count, avg_clear_count, playcount) values%s",
                 str.c_str());
    if (!h->exec(0x4ea1))
    {
        CMyFileLog log("QueryDeathTowerPlayDataPartyStatisticCreate", 0x1831);
        log("./log/statistic",
            "\nQueryDeathTowerPlayDataPartyStatisticCreate db2 error!!\n");
        return 0;
    }
    return 1;
}

char CDBManager::AwardGuildCoinByMail(int guildId, unsigned int serverGroup,
                                      unsigned int itemId,
                                      unsigned int endurance, int addInfo,
                                      int upgrade,
                                      std::vector<int>& characNos)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[3];   // game db
    if (!h->set_query(0x4e39,
                      "seLect charac_no,unix_timestamp(member_time) from guild_member where guild_id = %d and server_id = %d and member_flag = 1",
                      guildId, serverGroup))
    {
        CMyFileLog log("AwardGuildCoinByMail", 0x8dd);
        log("./log/DBQueryErr",
            "CDBManager::AwardGuildCoinByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",
            guildId, serverGroup);
        return 0;
    }
    if (!h->exec(0x4e39))
        return 0;
    int n = h->get_n_rows();
    time_t now = time(0);
    tm* t = localtime(&now);
    t->tm_mday += 1;
    t->tm_hour = 0;
    t->tm_min = 0;
    time_t tomorrow = mktime(t);
    int i = 0;
    while (i < n)
    {
        if (!h->fetch())
            return 0;
        unsigned int characNo = 0;
        if (!h->get_uint(0, characNo))
            return 0;
        unsigned int memberTime = 0;
        if (!h->get_uint(1, memberTime))
            return 0;
        if (upgrade > 2 && !isDayTimeOver(memberTime, 7))
            continue;
        characNos.push_back(characNo + 0);
        char buf[0x1e];
        memset(buf, 0, 0x1e);
        std::string s = g_ServerString_.GetServerString(0x7d0, 0);
        strcpy(buf, s.c_str());
        h2->set_query(0x4e57,
                      "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')",
                      tomorrow, 0, characNo, 0, itemId, addInfo, endurance, 0,
                      0, buf);
        if (!h2->exec(0x4e57))
            return 0;
        i++;
    }
    return 1;
}

char CDBManager::SendGuildCoinByMail(int guildId, unsigned int serverGroup,
                                     unsigned int itemId,
                                     unsigned int endurance, int addInfo,
                                     char* subject, char* content)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[3];   // game db
    if (!h->set_query(0x4e39,
                      "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",
                      guildId, serverGroup))
    {
        CMyFileLog log("SendGuildCoinByMail", 0x897);
        log("./log/DBQueryErr",
            "CDBManager::SendGuildCoinByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",
            guildId, serverGroup);
        return 0;
    }
    if (!h->exec(0x4e39))
        return 0;
    int n = h->get_n_rows();
    time_t now = time(0);
    tm* t = localtime(&now);
    t->tm_mday += 1;
    t->tm_hour = 0;
    t->tm_min = 0;
    time_t tomorrow = mktime(t);
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        unsigned int characNo = 0;
        if (!h->get_uint(0, characNo))
            return 0;
        int letterNo = 0;
        if (!InsertLetter(characNo, 0, subject, content, letterNo, tomorrow))
        {
            CMyFileLog log("SendGuildCoinByMail", 0x8c0);
            log("./log/Postal", "InsertLetter Err, %s(%s)", subject, content);
            continue;
        }
        if (!InsertPostal(characNo, 0, 0, itemId, addInfo, endurance, 0,
                          subject, tomorrow, letterNo))
        {
            CMyFileLog log("SendGuildCoinByMail", 0x8c6);
            log("./log/Postal", "InsertPostal Err, %s(%s)", subject, content);
        }
    }
    return 1;
}

char CDBManager::InsertPostal(unsigned int receiveCharacNo,
                              unsigned int sendCharacNo, int sealFlag,
                              unsigned int itemId, int addInfo,
                              unsigned int endurance, int upgrade, char* name,
                              long occTime, int letterId)
{
    CDBHandle* db = m_handles[3];    // game db
    if (!db->set_query(0x4e3a,
                       "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name, letter_id ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s', %d)",
                       occTime, sendCharacNo, receiveCharacNo, sealFlag, itemId,
                       addInfo, endurance, 0, upgrade, name, letterId))
    {
        CMyFileLog log("InsertPostal", 0x7bb);
        log("./log/DBQueryErr",
            "CDBManager::AwardGuildTitleByMail() Fatal Error Break : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( %d ), %d, %d, %d, %d, %d, %d, %d, %d,'%s', %d)\n",
            occTime, sendCharacNo, receiveCharacNo, sealFlag, itemId, addInfo,
            endurance, 0, upgrade, name, letterId);
    }
    if (!db->exec(0x4e3a))
        return 0;
    return 1;
}

char CDBManager::QueryLoadARSInfo(std::vector<st_ars_info_list>& arsList)
{
    CDBHandle* h = m_handles[6];    // guild db
    if (!h->set_query(0x4ef3,
                      "seLect hack_type,cnt,etc,hack_sub_type,hack_sub_cnt,apply_flag, ip_cnt from auto_punish_hack_info where apply_flag > 0"))
    {
        CMyFileLog log("QueryLoadARSInfo", 0x20cb);
        log("./log/DBQueryErr",
            "CDBManager::QueryLoadARSInfo() seLect hack_type,cnt,etc,hack_sub_type,hack_sub_cnt,apply_flag, ip_cnt from auto_punish_hack_info where apply_flag > 0 \n");
        return 0;
    }
    if (!h->exec(0x4ef3))
        return 0;
    int n = h->get_n_rows();
    CMyFileLog log("QueryLoadARSInfo", 0x20da);
    log("./log/Secu", "[ARS_INFO] QueryLoadARSInfo Load Cnt : %d \n", n);
    if (n == 0)
        return 1;
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        st_ars_info_list item;
        if (!h->get_ushort(0, item.m_field0))
            return 0;
        if (!h->get_ushort(1, item.m_field2))
            return 0;
        if (!h->get_ushort(2, item.m_fieldA))
            return 0;
        if (!h->get_ushort(3, item.m_field4))
            return 0;
        if (!h->get_ushort(4, item.m_field6))
            return 0;
        if (!h->get_ubyte(5, item.m_field8))
            return 0;
        if (!h->get_ubyte(6, item.m_field9))
            return 0;
        arsList.push_back(item);
    }
    return 1;
}

char CDBManager::QuerySubGuildMaster(unsigned char serverGroup,
                                     unsigned int guildId,
                                     Packet_DB_Reply_Query_Guild& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    char* info = (char*)&reply + 0x13;
    if (!h->set_query(0x4e58,
                      "seLect charac_no from guild_member where guild_id = %d and server_id = %d and grade =  %d and member_flag = 1 limit %d",
                      guildId, serverGroup, 2, 5))
    {
        CMyFileLog log("QuerySubGuildMaster", 0xd9d);
        log("./log/DBQueryErr", "CDBManager::QueryGuildMember() Exception Break\n");
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->exec(0x4e58))
    {
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    int n = h->get_n_rows();
    *(char*)(info + 0x2d) = (char)n;
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
        {
            *(char*)((char*)&reply + 0xa) = 1;
            return 1;
        }
        if (!h->get_uint(0, *(unsigned int*)(info + 0x2e + i * 4)))
        {
            *(char*)((char*)&reply + 0xa) = 3;
            return 0;
        }
    }
    *(char*)((char*)&reply + 0xa) = 1;
    return 1;
}

char CDBManager::QueryGuildNotiMessage(unsigned char serverGroup,
                                       unsigned int guildId,
                                       Packet_DB_Reply_Query_Guild& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e64, "seLect notice from guild_notice where guild_id = %d",
                      guildId))
    {
        CMyFileLog log("QueryGuildNotiMessage", 0xd65);
        log("./log/DBQueryErr", "CDBManager::QueryGuildMember() Exception Break\n");
        return 0;
    }
    if (!h->exec(0x4e64))
        return 0;
    if (!h->fetch())
        return 1;
    if (!h->get_str(0, (char*)&reply + 0xd0, 0x64))
        return 0;
    return 1;
}

char CDBManager::QueryGuildSkill(unsigned char serverGroup,
                                 unsigned int guildId,
                                 Packet_DB_Reply_Query_Guild& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    char* info = (char*)&reply + 0x13;
    if (!h->set_query(0x4e56, "seLect remain_sp, used_sp, skill_slot from guild_skill where guild_id = %d",
                      guildId))
    {
        CMyFileLog log("QueryGuildSkill", 0xcec);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuild() seLect remain_sp, skill_slot from guild_skill where guild_id = %d and server_id = %d and expire_flag = 0",
            guildId, serverGroup);
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->exec(0x4e56))
    {
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->fetch())
    {
        *(char*)((char*)&reply + 0xa) = 1;
        return 1;
    }
    if (!h->get_ushort(0, *(unsigned short*)(info + 0x42)))
    {
        *(char*)((char*)&reply + 0xa) = 3;
        return 1;
    }
    if (!h->get_ushort(1, *(unsigned short*)(info + 0x44)))
    {
        *(char*)((char*)&reply + 0xa) = 3;
        return 1;
    }
    if (*(unsigned char*)(info + 0x44) != 0)
    {
        if (!h->get_binary(2, info + 0x45,
                           *(unsigned char*)(info + 0x44) * 5))
        {
            *(char*)((char*)&reply + 0xa) = 3;
            return 1;
        }
    }
    *(char*)((char*)&reply + 0xa) = 1;
    return 1;
}

char CDBManager::QueryOnTimeEventIdxUpdate(
    Packet_Req_Ontime_Event_Idx_Update* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[0xd];    // se_event db
    if (!h->set_query(0x4f14,
                      "seLect ifnull(max(no), 1) from event_1112_ontime_info"))
    {
        CMyFileLog log("QueryOnTimeEventIdxUpdate", 0x24d8);
        log("./log/DBQueryErr",
            "set_query(seLect_from_event_ontime_idx) Query Error ");
        return 0;
    }
    if (h->exec(0x4f14))
    {
        if (!h->fetch())
            return 0;
    }
    unsigned int maxNo = 0;
    if (!h->get_uint(0, maxNo))
        return 0;
    if (*(unsigned int*)((char*)packet + 0x12) > maxNo)
    {
        if (!h->set_query(0x4f19,
                          "inSert into event_1112_ontime_info(no ,item_index,item_count,time ) values(%u,%u,%u,now())",
                          *(unsigned int*)((char*)packet + 0x12),
                          *(unsigned int*)((char*)packet + 0xa),
                          *(unsigned int*)((char*)packet + 0xe)))
        {
            CMyFileLog log("QueryOnTimeEventIdxUpdate", 0x24ec);
            log("./log/DBQueryErr",
                "set_query(inSert_event_ontime_idx_update) Query Error ");
            return 0;
        }
        if (!h->exec(0x4f19))
            return 0;
    }
    else
    {
        *(unsigned int*)((char*)packet + 0x12) = maxNo;
    }
    return 1;
}

char CDBManager::QueryOnTimeEventItem(Packet_Result_Ontime_Event_Item& reply)
{
    CDBHandle* h = m_handles[0xd];    // se_event db
    if (!h->set_query(0x4f18, "seLect idx, cnt from event_ontime_item"))
    {
        CMyFileLog log("QueryOnTimeEventItem", 0x24b1);
        log("./log/DBQueryErr",
            "set_query(seLect_from_event_ontime_item) Query Error");
        return 0;
    }
    if (!h->exec(0x4f18) || !h->fetch())
    {
        if (h->get_n_rows() == 0)
            *(unsigned short*)((char*)&reply + 0x12) = 2;
        return 0;
    }
    if (!h->get_uint(0, *(unsigned int*)((char*)&reply + 0xa)))
        return 0;
    if (!h->get_uint(1, *(unsigned int*)((char*)&reply + 0xe)))
        return 0;
    return 1;
}

char CDBManager::QueryBuddyInfo(unsigned int characNo, STBuddyDBInfo* buddies,
                                unsigned char& count)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h->set_query(0x4e52,
                      "seLect b.charac_no, b.charac_name, b.lev, b.job, b.grow_type, b.sex from charac_friends a, charac_info b where b.charac_no = a.friend_no and a.charac_no = %d and b.delete_flag=0 limit %d",
                      characNo, 0x20))
    {
        CMyFileLog log("QueryBuddyInfo", 0xc24);
        log("./log/DBQueryErr",
            "select_b_charac_info_from_charac_friends_a_charac_friends_b_where_characno_limit where charac_no = %d and friend_no = %d",
            characNo, 0x20);
        return 0;
    }
    if (!h->exec(0x4e52))
        return 0;
    count = (unsigned char)h->get_n_rows();
    for (int i = 0; i < (int)count; i++)
    {
        if (!h->fetch())
            return 1;
        STBuddyDBInfo& b = buddies[i];
        if (!h->get_uint(0, b.m_characNo))
            return 0;
        if (!h->get_str(1, b.m_name, 0x1e))
            return 0;
        if (!h->get_short(2, b.m_lev))
            return 0;
        if (!h->get_byte(3, b.m_job))
            return 0;
        if (!h->get_byte(4, b.m_growType))
            return 0;
        if (!h->get_byte(5, b.m_sex))
            return 0;
    }
    return 1;
}

char CDBManager::GetCoinEventPerDay(int serverId, int add, int& out1,
                                    int& out2)
{
    CDBHandle* h = m_handles[1];    // neople db
    if (!h->set_query(0x4ee5,
                      "seLect log_id, parameter1, parameter2 from dnf_event_log where event_type= %d and end_time = 0 and server_id =%d and now() >= start_time order by start_time",
                      4, serverId))
    {
        CMyFileLog log("GetCoinEventPerDay", 0x1e15);
        log("./log/DBQueryErr", "GetCoinEventPerDay Error\n");
        return 0;
    }
    if (!h->exec(0x4ee5))
        return 0;
    if (h->get_n_rows() == 0)
        return 0;
    if (!h->fetch())
        return 0;
    int logId = 0;
    if (!h->get_int(0, logId))
        return 0;
    int param1 = 0;
    if (!h->get_int(1, param1))
        return 0;
    int param2 = 0;
    if (!h->get_int(2, param2))
        return 0;
    param1 += add;
    if (param1 < 0)
        param1 = 0;
    out1 = param1;
    out2 = param2;
    if (!h->set_query(0x4ee6,
                      "upDate dnf_event_log set parameter1=%d, parameter2=%d where log_id = %u",
                      param1, param2, logId))
    {
        CMyFileLog log("GetCoinEventPerDay", 0x1e44);
        log("./log/DBQueryErr", "GetCoinEventPerDay Error\n");
        return 0;
    }
    if (!h->exec(0x4ee6))
        return 0;
    return 1;
}

char CDBManager::QueryCharacNoByName(char* name, unsigned int& characNo,
                                     int* result)
{
    CDBHandle* h = m_handles[2];    // game db
    if (result)
    {
        if (!h->set_query(0x4e3e,
                          "seLect charac_no,m_id from charac_info where charac_name = '%s'",
                          name))
        {
            CMyFileLog log("QueryCharacNoByName", 0xb1a);
            log("./log/DBQueryErr",
                "CDBManager::QueryCharacNoByName() seLect charac_no from charac_info where charac_name = '%s'",
                name);
            return 0;
        }
    }
    else
    {
        if (!h->set_query(0x4e3e,
                          "seLect charac_no from charac_info where charac_name = '%s'",
                          name))
        {
            CMyFileLog log("QueryCharacNoByName", 0xb12);
            log("./log/DBQueryErr",
                "CDBManager::QueryCharacNoByName() seLect charac_no from charac_info where charac_name = '%s'",
                name);
            return 0;
        }
    }
    if (!h->exec(0x4e3e))
        return 0;
    int n = h->get_n_rows();
    if (n == 0 || n > 1)
    {
        CMyFileLog log("QueryCharacNoByName", 0xb30);
        log("./log/DBQueryErr",
            "CDBManager::QueryCharacNoByName() : n_data != 1( %d )\n", n);
        return 0;
    }
    if (!h->fetch())
        return 0;
    if (!h->get_uint(0, characNo))
        return 0;
    if (result)
    {
        unsigned int m_id = 0;
        if (!h->get_uint(1, m_id))
            return 0;
        void* gm = m_app->GetGMAccounts();
        if (gm && ((WongWork::CGMAccounts*)gm)->isGM(m_id))
        {
            *result = 0x5a;
            return 0;
        }
    }
    return 1;
}

char CDBManager::updateCompatibilityIndex(
    Packet_Stat_Compatibility_Index* packet)
{
    CDBHandle* h = m_handles[0xf];    // frame_lag db
    if (!h)
        return 0;
    h->set_query(0x4f4b,
                 "upDate ting_user_spec set reg_datetime=now(), cpu_vendor=%d, cpu_num=%d, cpu_clock=%d, ram=%d, video_vendor=%d, video_device=%d, video_ram=%d, os=%d, os_bit=%d where m_id=%u",
                 *(unsigned char*)((char*)packet + 0xe),
                 *(unsigned char*)((char*)packet + 0xf),
                 *(int*)((char*)packet + 0x10),
                 *(unsigned short*)((char*)packet + 0x14),
                 *(unsigned short*)((char*)packet + 0x16),
                 *(unsigned short*)((char*)packet + 0x18),
                 *(unsigned short*)((char*)packet + 0x1a),
                 *(unsigned char*)((char*)packet + 0x1c),
                 *(unsigned char*)((char*)packet + 0x1d),
                 *(unsigned int*)((char*)packet + 0xa));
    if (!h->exec(0x4f4b))
    {
        CMyFileLog log("updateCompatibilityIndex", 0x2916);
        log("./log/DBQueryErr", "upDate ting_user_spec Query(exec) Error");
        return 0;
    }
    return 1;
}

char CDBManager::OnSecretShopStatistic(Packet_Secret_Shop_Statistic* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    int count = *(int*)((char*)packet + 0xa);
    for (int i = 0; i < count; i++)
    {
        char* e = (char*)packet + i * 0x14;
        h->set_query(0x4efc,
                     "upDate log_secret_shop set show_count=show_count+%d,show_charac_count=show_charac_count+%d,buy_count=buy_count+%d,price=price+%d where occ_date=cast(now() as date) and dungeon_idx=%d and npc_idx=%d",
                     *(int*)(e + 0x16), *(int*)(e + 0x1a), *(int*)(e + 0x1e),
                     *(int*)(e + 0x22), *(int*)(e + 0x12),
                     *(int*)((char*)packet + 0xe));
        if (!h->exec(0x4efc))
        {
            CMyFileLog log("OnSecretShopStatistic", 0x21bd);
            log("./log/DBQueryErr",
                "CDBManager::OnSecretShopStatistic() upDate Error");
        }
    }
    return 1;
}

// ---- Limit Npc Buy Item ----
LimitNpcBuyItemResultInfo::LimitNpcBuyItemResultInfo()
    : PacketHeader(0x176, 0x27dc)
{
    memset((char*)this + 0xe, 0, 0x168);
    *(int*)((char*)this + 0xa) = 0;
}

char CDBManager::loadLimitNpcBuyItemInfo(LimitNpcBuyItemRequestInfo* req,
                                         LimitNpcBuyItemResultInfo* result)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h)
        return 0;
    if (!h->set_query(0x4f45,
                      "seLect item_index, max_count, sell_count from limit_npc_item limit %d",
                      0x1e))
    {
        CMyFileLog log("loadLimitNpcBuyItemInfo", 0x2811);
        log("./log/DBQueryErr",
            "seLect item_index, max_count, sell_count from limit_npc_item Error");
        return 0;
    }
    if (!h->exec(0x4f45))
    {
        CMyFileLog log("loadLimitNpcBuyItemInfo", 0x281a);
        log("./log/DBQueryErr", "loadLimitNpcBuyItemInfo Query(exec) Error");
        return 0;
    }
    *(int*)((char*)result + 0xa) = h->get_n_rows();
    if (*(int*)((char*)result + 0xa) == 0)
    {
        CMyFileLog log("loadLimitNpcBuyItemInfo", 0x2821);
        log("./log/DBQueryErr", "loadLimitNpcBuyItemInfo (Row_Data Not Exist) Error");
        return 0;
    }
    for (int i = 0; i < *(int*)((char*)result + 0xa) && i <= 0x1d; i++)
    {
        if (!h->fetch())
        {
            CMyFileLog log("loadLimitNpcBuyItemInfo", 0x282a);
            log("./log/DBQueryErr", "loadLimitNpcBuyItemInfo Query(fetch) Error");
            return 0;
        }
        int col = 0;
        if (!h->get_uint(col++, *(unsigned int*)((char*)result + i * 0xc + 0xe)))
        {
            CMyFileLog log("loadLimitNpcBuyItemInfo", 0x2833);
            log("./log/DBQueryErr", "loadLimitNpcBuyItemInfo (get_uint(itemId)) Error");
            return 0;
        }
        if (!h->get_uint(col++, *(unsigned int*)((char*)result + i * 0xc + 0x12)))
        {
            CMyFileLog log("loadLimitNpcBuyItemInfo", 0x283a);
            log("./log/DBQueryErr", "loadLimitNpcBuyItemInfo (get_uint(maxCount) Error");
            return 0;
        }
        if (!h->get_uint(col++, *(unsigned int*)((char*)result + i * 0xc + 0x16)))
        {
            CMyFileLog log("loadLimitNpcBuyItemInfo", 0x2841);
            log("./log/DBQueryErr", "loadLimitNpcBuyItemInfo (get_uint(sellCount)) Error");
            return 0;
        }
    }
    return 1;
}

char CDBManager::updateLimitNpcBuyItemInfo(LimitNpcBuyItemUpdate* update)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h)
        return 0;
    if (!h->set_query(0x4f46,
                      "upDate limit_npc_item set sell_count=sell_count+%u where item_index=%u",
                      update->m_fieldA, update->m_field12))
    {
        CMyFileLog log("updateLimitNpcBuyItemInfo", 0x2857);
        log("./log/DBQueryErr",
            "upDate limit_npc_item set sell_count=%u where item_index=%u Error",
            update->m_fieldA, update->m_field12);
        return 0;
    }
    if (!h->exec(0x4f46))
    {
        CMyFileLog log("updateLimitNpcBuyItemInfo", 0x2861);
        log("./log/DBQueryErr", "updateLimitNpcBuyItemInfo Query(exec) Error");
        return 0;
    }
    return 1;
}

// ---- 公会成员等级族 ----
char CDBManager::QueryGuildMemberGradeByName(unsigned char serverId,
                                             unsigned int guildId,
                                             char* name,
                                             unsigned char& grade,
                                             unsigned int& m_id,
                                             unsigned int& result)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e5a,
                      "seLect charac_no, grade, m_id from guild_member where guild_id = %d and server_id = %d and charac_name =  '%s' and member_flag = 1",
                      guildId, serverId, name))
    {
        CMyFileLog log("QueryGuildMemberGradeByName", 0xddf);
        log("./log/DBQueryErr",
            "CDBManager::ChangeUnconnectedGuildMemberGrade() Exception Break\n");
        return 0;
    }
    if (!h->exec(0x4e5a))
        return 0;
    if (!h->fetch())
        return 1;
    if (!h->get_uint(0, m_id))
        return 0;
    if (!h->get_ubyte(1, grade))
        return 0;
    if (!h->get_ubyte(2, *(unsigned char*)&result))
        return 0;
    return 1;
}

char CDBManager::ChangeGuildMemberGrade(unsigned char serverId,
                                        unsigned int guildId,
                                        unsigned char grade, char* name)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e5b,
                      "upDate guild_member set grade = %d where guild_id = %d and server_id = %d and  charac_name = '%s' and member_flag = 1",
                      grade, guildId, serverId, name))
    {
        CMyFileLog log("ChangeGuildMemberGrade", 0xe1f);
        log("./log/DBQueryErr",
            "CDBManager::ChangeGuildMemberGrade() SetQuery Break,guild_id=%d,charac_name=%s",
            guildId, name);
        return 0;
    }
    if (!h->exec(0x4e5b))
    {
        CMyFileLog log("ChangeGuildMemberGrade", 0xe26);
        log("./log/DBQueryErr",
            "CDBManager::ChangeGuildMemberGrade() Exce Break,guild_id=%d,charac_name=%s",
            guildId, name);
        return 0;
    }
    return 1;
}

char CDBManager::ChangeGuildMemberGrade(unsigned char serverId,
                                        unsigned int guildId,
                                        unsigned char grade,
                                        unsigned int characNo)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e5b,
                      "upDate guild_member set grade = %d where guild_id = %d and server_id = %d and  charac_no = %d and member_flag = 1",
                      grade, guildId, serverId, characNo))
    {
        CMyFileLog log("ChangeGuildMemberGrade", 0xe3a);
        log("./log/DBQueryErr",
            "CDBManager::ChangeGuildMemberGrade() SetQuery Break,guild_id=%d,charac_no=%d",
            guildId, characNo);
        return 0;
    }
    if (!h->exec(0x4e5b))
    {
        CMyFileLog log("ChangeGuildMemberGrade", 0xe41);
        log("./log/DBQueryErr",
            "CDBManager::ChangeGuildMemberGrade() Exec Break,guild_id=%d,charac_no=%d",
            guildId, characNo);
        return 0;
    }
    return 1;
}

char CDBManager::ChangeGuildNotifyMessage(int guildId, unsigned int m_id,
                                          char* msg)
{
    CDBHandle* h = m_handles[8];    // guild db
    char buf[0x6002];
    memset(buf, 0, 0x6002);
    h->escape_string(buf, msg);
    if (!h->set_query(0x4e62,
                      "upDate guild_notice set notice='%s' where guild_id = %d",
                      buf, guildId))
    {
        CMyFileLog log("ChangeGuildNotifyMessage", 0xd3b);
        log("./log/DBQueryErr",
            "CDBManager::ChangeGuildNotifyMessage() upDate guild_notice set notice='%s' where guild_id = %d",
            msg, guildId);
        return 0;
    }
    // 原版 exec 成功路径的 affected 检查被 `or %edx,%eax` 死代码恒真短路，
    // insert（0x4e63）仅在 exec(0x4e62) 失败时执行——按有效语义复刻
    if (!h->exec(0x4e62))
    {
        if (!h->set_query(0x4e63,
                          "inSert into guild_notice set guild_id=%d,notice='%s',acc_date=unix_timestamp(now())",
                          guildId, buf))
        {
            CMyFileLog log("ChangeGuildNotifyMessage", 0xd4b);
            log("./log/DBQueryErr",
                "CDBManager::ChangeGuildNotifyMessage() Exception Break\n");
            return 0;
        }
        if (!h->exec(0x4e63))
            return 0;
    }
    return 1;
}

char CDBManager::GuildMasterDelegate(int serverId,
                                     unsigned int guildId,
                                     unsigned int oldMasterNo,
                                     unsigned int newMasterMId,
                                     unsigned int newMasterNo,
                                     char* newMasterName)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (newMasterName[0] == 0)
    {
        CMyFileLog log("GuildMasterDelegate", 0x10b3);
        log("./log/TraceGuildErr",
            "CDBManager::GuildMasterDelegate server_group(%d), guild(%d), charac_no(%d)\n",
            serverId, guildId, newMasterNo);
        return 0;
    }
    if (!ChangeGuildMemberGrade((unsigned char)serverId, guildId, 3,
                                oldMasterNo))
        return 0;
    if (!ChangeGuildMemberGrade((unsigned char)serverId, guildId, 1,
                                newMasterNo))
        return 0;
    if (!h->set_query(0x4e6a,
                      "upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",
                      NumberToString(newMasterMId, 0), newMasterNo,
                      newMasterName, guildId, serverId))
    {
        CMyFileLog log("GuildMasterDelegate", 0x10da);
        log("./log/DBQueryErr",
            "CDBManager::GuildMasterDelegate() set : upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",
            NumberToString(newMasterMId, 0), newMasterNo, newMasterName,
            guildId, serverId);
        return 0;
    }
    if (!h->exec(0x4e6a))
    {
        CMyFileLog log("GuildMasterDelegate", 0x10e7);
        log("./log/DBQueryErr",
            "CDBManager::GuildMasterDelegate() exec : upDate guild_info set master_id=%s, master_no=%d, master_name='%s' where guild_id = %d and server_id= %d",
            NumberToString(newMasterMId, 0), newMasterNo, newMasterName,
            guildId, serverId);
        return 0;
    }
    return 1;
}

char CDBManager::SendGuildLetter(int serverId, unsigned int guildId, char* msg)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e39,
                      "seLect charac_no from guild_member where guild_id = %d and server_id = %d and member_flag = 1",
                      guildId, serverId))
    {
        CMyFileLog log("SendGuildLetter", 0x7d3);
        log("./log/DBQueryErr",
            "CDBManager::AwardGuildTitleByMail() select charac_no from guild_member where server_id = %d and guild_id = %d and member_flag = 1\n",
            serverId, guildId);
        return 0;
    }
    if (!h->exec(0x4e39))
        return 0;
    int n = h->get_n_rows();
    time_t now = time(0);
    struct tm* lt = localtime(&now);
    lt->tm_hour += 1;
    lt->tm_min = 0;
    lt->tm_sec = 0;
    long expiry = mktime(lt);
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        unsigned int characNo = 0;
        if (!h->get_uint(0, characNo))
            return 0;
        char subject[0x1e] = {0};
        std::string s = g_ServerString_.GetServerString(0x431, 0);
        strncpy(subject, s.c_str(), 0x1d);
        int letterNo = 0;
        if (!InsertLetter(characNo, 0, subject, msg, letterNo, expiry))
        {
            CMyFileLog log("SendGuildLetter", 0x80d);
            log("./log/Postal", "InsertLetter Err");
            return 0;
        }
    }
    return 1;
}

char CDBManager::OnWriteGuildBoard(
    Packet_DB_Load_Request_Guild_Board_Write* req, STGuildBoardDBInfo* info)
{
    CDBHandle* h = m_handles[5];    // web db
    char* r = (char*)req;
    if (*(unsigned int*)(r + 0xf) == 0)
        memset(r + 0x9e, 0, 0x1e);
    h->set_query(0x4f08,
                 "inSert into guild_memo set guild_id=%u, m_id=%s, charac_no=%u, charac_name='%s', memo='%s', create_time=now(), job=%d, grow_type=%d",
                 *(unsigned int*)(r + 0xb),
                 NumberToString(*(unsigned int*)(r + 0xf), 0),
                 *(unsigned int*)(r + 0x13), r + 0x9e,
                 h->blob_to_str(0, r + 0x17, 0x78),
                 *(char*)(r + 0x9b), *(char*)(r + 0x9c));
    if (!h->exec(0x4f08))
    {
        CMyFileLog log("OnWriteGuildBoard", 0x2306);
        log("./log/DBQueryErr", "OnWriteGuildBoard Query Error");
        return 0;
    }
    h->set_query(0x4f07,
                 "seLect no, unix_timestamp(create_time) from guild_memo where no=LAST_INSERT_ID()");
    if (!h->exec(0x4f07))
        return 0;
    if (!h->fetch())
        return 0;
    if (!h->get_uint(0, *(unsigned int*)((char*)info + 0x7c)))
        return 0;
    if (!h->get_uint(1, *(unsigned int*)((char*)info + 0x78)))
        return 0;
    if (*(unsigned int*)(r + 0xf) == 0)
    {
        *(int*)((char*)info + 0x80) = 0;
    }
    else
    {
        *(unsigned int*)((char*)info + 0x80) = *(unsigned int*)(r + 0x13);
        *(char*)((char*)info + 0x84) = *(char*)(r + 0x9b);
        memcpy((char*)info + 0x87, r + 0x9e, 0x1e);
        memcpy(info, r + 0x17, 0x78);
    }
    return 1;
}

char CDBManager::OnWriteWebGuildBoard(
    Packet_DB_Load_Request_Web_Guild_Board_Write* req,
    STGuildBoardDBInfo* info)
{
    CDBHandle* h = m_handles[5];    // web db
    char* r = (char*)req;
    h->set_query(0x4f07,
                 "seLect no, charac_no, charac_name, memo, unix_timestamp(create_time), job from guild_memo where no=%u",
                 *(unsigned int*)(r + 0x12));
    if (!h->exec(0x4f07))
    {
        CMyFileLog log("OnWriteWebGuildBoard", 0x2329);
        log("./log/DBQueryErr", "OnWriteWebGuildBoard Query Error");
        return 0;
    }
    if (!h->fetch())
        return 0;
    if (!h->get_uint(0, *(unsigned int*)((char*)info + 0x7c)))
        return 0;
    if (!h->get_uint(1, *(unsigned int*)((char*)info + 0x80)))
        return 0;
    if (!h->get_binary(2, (char*)info + 0x87, 0x1e))
        return 0;
    if (!h->get_binary(3, info, 0x78))
        return 0;
    if (!h->get_uint(4, *(unsigned int*)((char*)info + 0x78)))
        return 0;
    if (!h->get_byte(5, *(char*)((char*)info + 0x84)))
        return 0;
    return 1;
}

char CDBManager::OnDeleteGuildBoard(unsigned int no)
{
    CDBHandle* h = m_handles[5];    // web db
    h->set_query(0x4f09, "deLete from guild_memo where no=%u", no);
    if (!h->exec(0x4f09))
    {
        CMyFileLog log("OnDeleteGuildBoard", 0x235b);
        log("./log/DBQueryErr", "OnDeleteGuildBoard Query Error");
        return 0;
    }
    return 1;
}

char CDBManager::OnLoadGuildAgit(Packet_DB_Load_Guild_Agit* req,
                                 Packet_Guild_Load_Guild_Agit& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4eb5,
                      "seLect upgrade from guild_agit where guild_id=%d",
                      *(unsigned int*)((char*)req + 0xa)))
    {
        CMyFileLog log("OnLoadGuildAgit", 0x19c3);
        log("./log/DBQueryErr", "OnLoadGuildAgit Query Error\n");
        return 0;
    }
    if (!h->exec(0x4eb5))
    {
        CMyFileLog log("OnLoadGuildAgit", 0x19cb);
        log("./log/DBQueryErr", "OnLoadGuildAgit Fetch Error\n");
        return 0;
    }
    if (!h->fetch())
    {
        CMyFileLog log("OnLoadGuildAgit", 0x19d3);
        log("./log/DBQueryErr",
            "OnLoadGuildAgit get_ubyte(0, reply.m_stGuildAgitInfo.m_ucUpgrade) Error\n");
        return 0;
    }
    if (!h->get_ubyte(0, *(unsigned char*)((char*)&reply + 0xe)))
        return 0;
    return 1;
}

char CDBManager::OnLoadGuildCargo(unsigned int guildId,
                                  Packet_Guild_Load_Guild_Cargo& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4ed7,
                      "seLect cargo_capacity,cargo from guild_agit where guild_id=%d",
                      guildId))
    {
        CMyFileLog log("OnLoadGuildCargo", 0x1b35);
        log("./log/DBQueryErr", "OnLoadGuildCargo Query Error");
        return 0;
    }
    if (!h->exec(0x4ed7))
        return 0;
    if (!h->fetch())
        return 0;
    int col = 0;
    if (!h->get_uint(col++, *(unsigned int*)((char*)&reply + 0x18e6)))
        return 0;
    if (!h->get_str(col++, (char*)&reply + 0xe, 0x18d8))
        return 0;
    return 1;
}

char CDBManager::OnCreateGuildAgit(Packet_DB_Create_Guild_Agit* req,
                                   Packet_DB_Create_Guild_Agit_Reply& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4eae,
                      "inSert into guild_agit set guild_id=%d, upgrade=1, cargo_capacity=8",
                      *(unsigned int*)((char*)req + 0xa)))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnCreateGuildAgit", 0x1975);
        log("./log/DBQueryErr", "inSert_into_guild_Agit Query Error\n");
        return 0;
    }
    if (!h->exec(0x4eae))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnCreateGuildAgit", 0x1984);
        log("./log/DBQueryErr",
            "upDate_into_guild_info_guild_agit_flag Query Error\n");
        return 0;
    }
    if (!h->set_query(0x4eb4,
                      "upDate guild_info set guild_agit_flag=1 where guild_id=%d",
                      *(unsigned int*)((char*)req + 0xa)))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnCreateGuildAgit", 0x1984);
        log("./log/DBQueryErr",
            "upDate_into_guild_info_guild_agit_flag Query Error\n");
        return 0;
    }
    if (!h->exec(0x4eb4))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnCreateGuildAgit", 0x1984);
        log("./log/DBQueryErr",
            "upDate_into_guild_info_guild_agit_flag Query Error\n");
        return 0;
    }
    *(int*)((char*)&reply + 0x12) = 0;
    return 1;
}

char CDBManager::OnDeleteGuildAgit(Packet_DB_Delete_Guild_Agit* req,
                                   Packet_DB_Delete_Guild_Agit_Reply& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4eaf,
                      "deLete from guild_agit where guild_id=%d",
                      *(unsigned int*)((char*)req + 0xa)))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnDeleteGuildAgit", 0x199d);
        log("./log/DBQueryErr", "deLete_from_guild_Agit Query Error\n");
        return 0;
    }
    if (!h->exec(0x4eaf))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnDeleteGuildAgit", 0x19ac);
        log("./log/DBQueryErr",
            "upDate_into_guild_info_guild_agit_flag Query Error\n");
        return 0;
    }
    if (!h->set_query(0x4eb4,
                      "upDate guild_info set guild_agit_flag=0 where guild_id=%d",
                      *(unsigned int*)((char*)req + 0xa)))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnDeleteGuildAgit", 0x19ac);
        log("./log/DBQueryErr",
            "upDate_into_guild_info_guild_agit_flag Query Error\n");
        return 0;
    }
    if (!h->exec(0x4eb4))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnDeleteGuildAgit", 0x19ac);
        log("./log/DBQueryErr",
            "upDate_into_guild_info_guild_agit_flag Query Error\n");
        return 0;
    }
    *(int*)((char*)&reply + 0x12) = 0;
    return 1;
}

char CDBManager::OnUpgradeGuildAgit(Packet_DB_Upgrade_Guild_Agit* req,
                                    Packet_DB_Upgrade_Guild_Agit_Reply& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4eb6,
                      "UpDate guild_agit set upgrade = upgrade + 1 where guild_id = %d",
                      *(unsigned int*)((char*)req + 0xa)))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnUpgradeGuildAgit", 0x19ea);
        log("./log/DBQueryErr", "OnUpgradeGuildAgit Query Error\n");
        return 0;
    }
    if (!h->exec(0x4eb6))
    {
        *(int*)((char*)&reply + 0x12) = 2;
        CMyFileLog log("OnUpgradeGuildAgit", 0x19ea);
        log("./log/DBQueryErr", "OnUpgradeGuildAgit Query Error\n");
        return 0;
    }
    *(int*)((char*)&reply + 0x12) = 0;
    return 1;
}

char CDBManager::OnInsertGuildCargoHistory(
    Packet_DB_Insert_Guild_Cargo_History* req)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* r = (char*)req;
    char table[0x100];
    memset(table, 0, 0x100);
    sprintf(table, "guild_cargo_history_%d", *(unsigned int*)(r + 0xb) % 10);
    if (!h->set_query(
            0x4ed9,
            "inSert into %s(occ_time,guild_id,server_id,charac_no,charac_name,slot_no,moveto_slot_no,behavior,seal_flag,item_id,add_info,endurance,extend_info,upgrade,seal_cnt,amplify_option,amplify_value,random_option,separate) values(unix_timestamp(now()),%d,%d,%d,'%s',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,'%s',%d)",
            table, *(unsigned int*)(r + 0xb),
            *(unsigned char*)(r + 0xa), *(unsigned int*)(r + 0xf),
            r + 0x13, *(unsigned int*)(r + 0x29),
            *(unsigned int*)(r + 0x2d), *(signed char*)(r + 0x28),
            *(unsigned char*)(r + 0x31), *(unsigned int*)(r + 0x32),
            *(unsigned int*)(r + 0x37), *(unsigned short*)(r + 0x3b),
            *(unsigned int*)(r + 0x3d), *(unsigned int*)(r + 0x36) & 0x1f,
            (*(unsigned int*)(r + 0x36) >> 5) & 1,
            *(unsigned char*)(r + 0x41), *(unsigned short*)(r + 0x42),
            h->blob_to_str(0, r + 0x4e, 0xe),
            ((UpgradeSeparateInfo*)(r + 0x5c))->GetUpgradeSeparate()))
    {
        CMyFileLog log("OnInsertGuildCargoHistory", 0x1bd3);
        log("./log/DBQueryErr", "OnInsertGuildCargoHistory Query Error");
        return 0;
    }
    if (!h->exec(0x4ed9))
    {
        CMyFileLog log("OnInsertGuildCargoHistory", 0x1bd3);
        log("./log/DBQueryErr", "OnInsertGuildCargoHistory Query Error");
        return 0;
    }
    return 1;
}

char CDBManager::DeleteToBlackListOnly(unsigned int m_id, char* name)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e40,
                      "deLete from charac_black_list where m_id = %u and charac_name = '%s'",
                      m_id, name))
        return 0;
    if (!h->exec(0x4e40))
        return 0;
    return 1;
}

char CDBManager::QueryBlackList(unsigned int m_id, STBlackUserDBType* list)
{
    CDBHandle* h = m_handles[3];    // game db
    if (!h->set_query(0x4e44,
                      "seLect charac_no, charac_name, unix_timestamp(occ_time) from  charac_black_list where m_id = %s limit %d",
                      NumberToString(m_id, 0), 0xa))
    {
        CMyFileLog log("QueryBlackList", 0xaac);
        log("./log/DBQueryErr",
            "CDBManager::QueryCharacNoByName() seLect charac_no, charac_name, occ_time from  charac_black_list where m_id = %s",
            NumberToString(m_id, 0));
        return 0;
    }
    if (!h->exec(0x4e44))
        return 0;
    int n = h->get_n_rows();
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_uint(0, *(unsigned int*)((char*)list + i * 0x28)))
            return 0;
        if (!h->get_str(1, (char*)list + i * 0x28 + 0x4, 0x1e))
            return 0;
        if (!h->get_uint(2, *(unsigned int*)((char*)list + i * 0x28 + 0x24)))
            return 0;
    }
    return 1;
}

char CDBManager::SaveGuildSkill(unsigned char serverGroup,
                                unsigned int guildId,
                                STGuildDBInfoOnly& info)
{
    CDBHandle* h = m_handles[8];    // guild db
    h->set_query(0x4e55,
                 "upDate guild_skill set remain_sp = %d, used_sp = %d, skill_slot = '%s' where guild_id = %d",
                 *(unsigned short*)((char*)&info + 0x42),
                 *(unsigned char*)((char*)&info + 0x44),
                 h->blob_to_str(0, (char*)&info + 0x45,
                                *(unsigned char*)((char*)&info + 0x44) * 5),
                 guildId);
    if (h->exec(0x4e55))
        h->getAffectedRowCount();
    // 原版 exec 后的 affected 检查被 `or %edx,%eax` 死代码恒真短路，
    // insert(0x4e59) 永不执行——按有效语义直接返回
    return 1;
}

char CDBManager::SaveGuildMember(unsigned char serverGroup,
                                 unsigned int guildId,
                                 STGuildMemerDBInfo& info,
                                 unsigned int flag, unsigned char type)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (type <= 2)
    {
        h->set_query(0x4e30,
                     "upDate guild_member set member_point=%d, last_play_time =  now() where guild_id = %d and server_id = %d and charac_no = %d",
                     *(int*)((char*)&info + 0x16), guildId, serverGroup, flag);
        CMyFileLog log("SaveGuildMember", 0x2ba);
        log("./log/GuildModify",
            "CDBManager::SaveGuildMember(SAVE_LOGOUT flag(%d), grade(%d), guildMemPoint(%d), g(%d), s(%d), c(%d))",
            type, *(unsigned char*)((char*)&info + 0x15),
            *(int*)((char*)&info + 0x16), guildId, serverGroup, flag);
    }
    else if (type == 3)
    {
        h->set_query(0x4e30,
                     "upDate guild_member set member_point=%d, grade=%d where guild_id = %d and server_id = %d and charac_no = %d",
                     *(int*)((char*)&info + 0x16),
                     *(unsigned char*)((char*)&info + 0x15), guildId,
                     serverGroup, flag);
        CMyFileLog log("SaveGuildMember", 0x2c5);
        log("./log/GuildModify",
            "CDBManager::SaveGuildMember(SAVE_LOGOUT flag(%d), grade(%d), guildMemPoint(%d), g(%d), s(%d), c(%d))",
            type, *(unsigned char*)((char*)&info + 0x15),
            *(int*)((char*)&info + 0x16), guildId, serverGroup, flag);
    }
    else
    {
        CMyFileLog log("SaveGuildMember", 0x2c9);
        log("./log/GuildModify",
            "CDBManager::SaveGuildMember ERR(save_flag err(%d))", type);
    }
    if (!h->exec(0x4e30))
        return 0;
    return 1;
}

char CDBManager::SaveGuildWarPointList(int serverId,
                                       unsigned int* guildIds,
                                       unsigned int* points)
{
    if (guildIds == 0 && points == 0)
        return 0;
    CDBHandle* h = m_handles[8];    // guild db
    for (int i = 0; i <= 9; i++)
    {
        if (guildIds[i] == 0)
            continue;
        if (!h->set_query(0x4e3c,
                          "upDate guild_info set guild_war_point = %d where server_id = %d and expire_flag = 0 and guild_id = %d",
                          points[i], serverId, guildIds[i]))
        {
            CMyFileLog log("SaveGuildWarPointList", 0x9b7);
            log("./log/DBQueryErr",
                "CDBManager::SaveGuildWarPointList() update guild_info set guild_war_point = %d where server_id = %d and expire_flag = 0 and guild_id = %d",
                points[i], serverId, guildIds[i]);
            return 0;
        }
        if (!h->exec(0x4e3c))
            return 0;
    }
    return 1;
}

char CDBManager::OnSavePowerWarBonusPoint(
    Packet_DB_Save_Power_War_Bonus_Point* packet)
{
    CDBHandle* h = m_handles[3];    // game db
    char* p = (char*)packet;
    time_t now = time(0);
    struct tm* lt = localtime(&now);
    lt->tm_hour += 1;
    lt->tm_min = 0;
    lt->tm_sec = 0;
    long occTime = mktime(lt);
    std::string name("\xbc\xbc\xb7\xc2\xc0\xfc \xc6\xf7\xc0\xce\xc6\xae");
    int itemId = 0x4df;
    for (int i = 0; i < *(int*)(p + 0xa); i++)
    {
        if (!h->set_query(0x4ef7,
                          "inSert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name) values (from_unixtime(%d), %d, %d, %d, %d, %d, %d, %d, %d,'%s')",
                          occTime, 0, *(int*)(p + 0xe + i * 8), 0, itemId,
                          *(int*)(p + 0x12 + i * 8), 0, 0, 0, name.c_str()))
        {
            CMyFileLog log("OnSavePowerWarBonusPoint", 0x2172);
            log("./log/DBQueryErr",
                "CDBManager::OnSavePowerWarBonusPoint() : insert into postal (occ_time, send_charac_no, receive_charac_no, seal_flag, item_id, add_info, endurance, upgrade, gold, send_charac_name ) values ( from_unixtime( now() ), %d, %d, %d, %d, %d, %d, %d, %d,'%s')\n",
                0, *(int*)(p + 0xe + i * 8), 0, itemId,
                *(int*)(p + 0x12 + i * 8), 0, 0, 0, name.c_str());
            return 0;
        }
        if (!h->exec(0x4ef7))
            return 0;
    }
    return 1;
}

char CDBManager::SavePowerWarPoint(Packet_DB_Save_Power_War_Point* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* p = (char*)packet;
    if (!h->set_query(0x4e81,
                      "upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",
                      *(unsigned int*)(p + 0xc), *(unsigned int*)(p + 0x10),
                      *(signed char*)(p + 0xb), *(unsigned char*)(p + 0xa)))
    {
        CMyFileLog log("SavePowerWarPoint", 0x12ce);
        log("./log/DBQueryErr",
            "CDBManager::SavePowerWarPoint() : upDate power_war set a_side_point=%d, b_side_point=%d, winner_side=%d where server_id = %d",
            *(unsigned int*)(p + 0xc), *(unsigned int*)(p + 0x10),
            *(signed char*)(p + 0xb), *(unsigned char*)(p + 0xa));
        return 0;
    }
    if (!h->exec(0x4e81))
    {
        // 原版 exec 后 affected 检查被 or %edx 死代码短路，insert(0x4e82)
        // 仅在 exec 失败时执行
        if (!h->set_query(0x4e82,
                          "inSert into power_war set a_side_point=%d, b_side_point=%d, winner_side=%d ,server_id = %d",
                          *(unsigned int*)(p + 0xc),
                          *(unsigned int*)(p + 0x10),
                          *(signed char*)(p + 0xb),
                          *(unsigned char*)(p + 0xa)))
            return 0;
        if (!h->exec(0x4e82))
            return 0;
    }
    return 1;
}

char CDBManager::OnSavePowerWarStatueRanker(
    Packet_DB_Save_Power_War_Statue_Ranker* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[6];   // sso db
    char* p = (char*)packet;
    unsigned char serverId = *(unsigned char*)(p + 0xa);
    if (!h2->set_query(0x4ecc,
                       "deLete from event_server_message where server_info = %d and message_index in (1, 2, 3)",
                       serverId))
    {
        CMyFileLog log("OnSavePowerWarStatueRanker", 0x1943);
        log("./log/DBQueryErr", "deLete_power_war_statue_message Query Error\n");
    }
    if (!h->set_query(0x4ead,
                      "upDate power_war_statue_ranker set first_ranker=%d, second_ranker=%d, third_ranker=%d where server_id=%d",
                      *(unsigned int*)(p + 0xb), *(unsigned int*)(p + 0xf),
                      *(unsigned int*)(p + 0x13), serverId))
        return 0;
    if (!h->exec(0x4ead))
    {
        // 原版 affected 检查死代码：insert(0x4eac) 仅在 exec 失败时执行
        if (!h->set_query(0x4eac,
                          "inSert into power_war_statue_ranker set first_ranker=%d, second_ranker=%d, third_ranker=%d, server_id=%d",
                          *(unsigned int*)(p + 0xb),
                          *(unsigned int*)(p + 0xf),
                          *(unsigned int*)(p + 0x13), serverId))
            return 0;
        if (!h->exec(0x4eac))
        {
            CMyFileLog log("OnSavePowerWarStatueRanker", 0x195a);
            log("./log/DBQueryErr",
                "inSert_into_power_war_statue_ranker Query Error\n");
            return 0;
        }
    }
    return 1;
}

char CDBManager::OnSavePowerWarPointReward(
    Packet_DB_Save_Power_War_Point_Reward* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* p = (char*)packet;
    unsigned char serverId = *(unsigned char*)(p + 0xa);
    int count = *(int*)(p + 0xb);
    for (int i = 0; i < count; i++)
    {
        int p1 = *(int*)(p + 0xf + i * 8);
        int p2 = *(int*)(p + 0x13 + i * 8);
        h->set_query(0x4eab,
                     "upDate guild_info set power_war_point=power_war_point+%d where guild_id=%d and server_id=%d and expire_flag=0",
                     p2, p1, serverId);
        if (!h->exec(0x4eab))
        {
            CMyFileLog log("OnSavePowerWarPointReward", 0x192b);
            log("./log/DBQueryErr",
                "upDate_into_guild_info_power_war_point Query Error\n");
            return 0;
        }
    }
    return 1;
}

char CDBManager::InsertMail(unsigned int characNo, char* subject,
                            char* content, unsigned int hE,
                            unsigned int h12, int h16, int h17)
{
    time_t now = time(0);
    struct tm* lt = localtime(&now);
    lt->tm_hour += 1;
    lt->tm_min = 0;
    lt->tm_sec = 0;
    long occTime = mktime(lt);
    int letterNo = 0;
    if (!InsertLetter(characNo, (unsigned int)subject, content, 0, letterNo,
                      occTime))
    {
        CMyFileLog log("InsertMail", 0x1d9e);
        log("./log/Postal", "InsertLetter Err, %s(%s)", content, subject);
        return 0;
    }
    if (!InsertPostal(characNo, (unsigned int)subject, 0, 0, h12, h16, 0,
                      content, occTime, letterNo))
    {
        CMyFileLog log("InsertMail", 0x1da4);
        log("./log/Postal", "InsertPostal Err, %s(%s)", content, subject);
        return 0;
    }
    return 1;
}

char CDBManager::OnLoadPeriodicMessage(
    Packet_Load_Periodic_Message* req,
    Packet_Result_Loading_Periodic_Message* reply)
{
    CDBHandle* h = m_handles[1];    // account db
    if (!h->set_query(0x4f04,
                      "seLect message, start_h, end_h from dnf_game_message where occ_date=cast(now() as date) and display_type=1"))
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x2247);
        log("./log/DBQueryErr", "CDBManager::OnLoadPeriodicMessage() seLect Error");
        return 0;
    }
    if (!h->exec(0x4f04))
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x2247);
        log("./log/DBQueryErr", "CDBManager::OnLoadPeriodicMessage() seLect Error");
        return 0;
    }
    if (h->get_n_rows() == 0)
    {
        memset((char*)reply + 0xa, 0, 0x200);
        *(int*)((char*)reply + 0x20a) = 0;
        *(int*)((char*)reply + 0x20e) = 0;
        return 1;
    }
    if (!h->fetch())
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x2256);
        log("./log/DBQueryErr", "CDBManager::OnLoadPeriodicMessage() fetch Error");
        return 0;
    }
    if (!h->get_str(0, (char*)reply + 0xa, 0x200))
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x226c);
        log("./log/DBQueryErr",
            "CDBManager::OnLoadPeriodicMessage() get_str Error");
        return 0;
    }
    if (!h->get_int(1, *(int*)((char*)reply + 0x20a)))
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x2273);
        log("./log/DBQueryErr",
            "CDBManager::OnLoadPeriodicMessage() get_int for start_h Error");
        return 0;
    }
    if (!h->get_int(2, *(int*)((char*)reply + 0x20e)))
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x2279);
        log("./log/DBQueryErr",
            "CDBManager::OnLoadPeriodicMessage() get_int for end_h Error");
        return 0;
    }
    return 1;
}

char CDBManager::QueryGuildMember(unsigned char serverId,
                                  unsigned int guildId,
                                  Packet_DB_Reply_Query_Guild_Member& reply)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e24,
                      "seLect guild_id, memo, grade, member_point from guild_member where charac_no = %d and server_id = %d and member_flag = 1",
                      guildId, serverId))
    {
        CMyFileLog log("QueryGuildMember", 0x180);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildMember() Exception Break\n");
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->exec(0x4e24))
    {
        *(char*)((char*)&reply + 0xa) = 0;
        return 0;
    }
    if (!h->fetch())
    {
        *(char*)((char*)&reply + 0xa) = 2;
        return 0;
    }
    if (!h->get_uint(0, *(unsigned int*)((char*)&reply + 0xb)))
    {
        *(char*)((char*)&reply + 0xa) = 3;
        return 0;
    }
    if (!h->get_str(1, (char*)&reply + 0x13, 0x15))
    {
        *(char*)((char*)&reply + 0xa) = 3;
        return 0;
    }
    if (!h->get_ubyte(2, *(unsigned char*)((char*)&reply + 0x28)))
    {
        *(char*)((char*)&reply + 0xa) = 3;
        return 0;
    }
    if (!h->get_uint(3, *(unsigned int*)((char*)&reply + 0x29)))
    {
        *(char*)((char*)&reply + 0xa) = 3;
        return 0;
    }
    *(char*)((char*)&reply + 0xa) = 1;
    return 1;
}

char CDBManager::OnSavePowerWarUserRank(
    Packet_DB_Save_Power_War_User_Rank* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* p = (char*)packet;
    unsigned char serverId = *(unsigned char*)(p + 0xb);
    if (*(unsigned char*)(p + 0xa) != 0 &&
        *(unsigned char*)(p + 0xc) == 1)
    {
        if (!h->set_query(0x4ea7,
                          "deLete from power_war_user_rank where server_id=%d",
                          serverId))
        {
            CMyFileLog log("OnSavePowerWarUserRank", 0x18bf);
            log("./log/DBQueryErr",
                "deLete_from_power_war_user_rank Query Error\n");
            return 0;
        }
        if (!h->exec(0x4ea7))
            return 0;
    }
    int count = *(int*)(p + 0x11);
    int startIdx = *(int*)(p + 0xd);
    for (int i = 0; i < count; i++)
    {
        int p1 = *(int*)(p + 0x15 + i * 8);
        int p2 = *(int*)(p + 0x19 + i * 8);
        if (!h->set_query(0x4ea8,
                          "inSert into power_war_user_rank set server_id=%d, rank=%d, charac_no=%d, power_war_point=%d, power_side=%d",
                          serverId, startIdx + i, p1, p2,
                          *(unsigned char*)(p + 0xc)))
        {
            CMyFileLog log("OnSavePowerWarUserRank", 0x18d8);
            log("./log/DBQueryErr",
                "inSert_into_power_war_user_rank Query Error\n");
            return 0;
        }
        if (!h->exec(0x4ea8))
            return 0;
    }
    return 1;
}

char CDBManager::OnSavePowerWarGuildRank(
    Packet_DB_Save_Power_War_Guild_Rank* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* p = (char*)packet;
    unsigned char serverId = *(unsigned char*)(p + 0xa);
    if (*(unsigned char*)(p + 0xb) == 1)
    {
        if (!h->set_query(0x4ea9,
                          "deLete from power_war_guild_rank where server_id=%d",
                          serverId))
        {
            CMyFileLog log("OnSavePowerWarGuildRank", 0x18f4);
            log("./log/DBQueryErr",
                "deLete_from_power_war_guild_rank Query Error\n");
            return 0;
        }
        if (!h->exec(0x4ea9))
            return 0;
    }
    int count = *(int*)(p + 0xc);
    for (int i = 0; i < count; i++)
    {
        int g1 = *(int*)(p + 0x10 + i * 8);
        int g2 = *(int*)(p + 0x14 + i * 8);
        if (!h->set_query(0x4eaa,
                          "inSert into power_war_guild_rank set server_id=%d, rank=%d, guild_id=%d, power_war_point=%d, power_side=%d",
                          serverId, i, g1, g2,
                          *(unsigned char*)(p + 0xb)))
        {
            CMyFileLog log("OnSavePowerWarGuildRank", 0x190c);
            log("./log/DBQueryErr",
                "inSert_into_power_war_guild_rank Query Error\n");
            return 0;
        }
        if (!h->exec(0x4eaa))
            return 0;
    }
    return 1;
}

char CDBManager::InsertUdpCharacteristic(Packet_Udp_Characteristic* packet)
{
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(
            0x4e92,
            "insert into p2pnetwork_statistic (occ_time,server_group,success_party_try,total_party_try,dungeon_bad_ping,dungeon_total,pvp_bad_ping,pvp_total,fair_pvp_bad_ping,fair_pvp_total,success_dungeon_clear,total_dungeon_clear)  values(now(),%hhd,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
            *(signed char*)(p + 0xa), *(int*)(p + 0xb), *(int*)(p + 0xf),
            *(int*)(p + 0x13), *(int*)(p + 0x17), *(int*)(p + 0x1b),
            *(int*)(p + 0x1f), *(int*)(p + 0x23), *(int*)(p + 0x27),
            *(int*)(p + 0x2b), *(int*)(p + 0x2f)))
        return 0;
    if (!h->exec(0x4e92))
        return 0;
    return 1;
}

char CDBManager::DelBuddy(unsigned int m_id, unsigned int characNo)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h->set_query(0x4e53,
                      "deLete from charac_friends where charac_no = %d and friend_no = %d",
                      characNo, m_id))
    {
        CMyFileLog log("DelBuddy", 0xc0a);
        log("./log/DBQueryErr",
            "deLete from charac_friends where charac_no = %d and friend_no = %d",
            characNo, m_id);
        return 0;
    }
    if (!h->exec(0x4e53))
        return 0;
    return 1;
}

char CDBManager::insertServerGameEvent(
    Packet_StartGameEventFromServer* packet)
{
    CDBHandle* h = m_handles[1];    // account db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(
            0x4f5d,
            " inSert into dnf_event_log (occ_time, event_type, event_flag, parameter1, parameter2,  server_id, start_time, end_time, m_id, expl, etc)  values (unix_timestamp(now()), %d, %d, %d, %d, %d, unix_timestamp(now()), 0, 1, 'event from monitor server', '6th birthday') ",
            *(int*)(p + 0xa), *(int*)(p + 0xe),
            *(unsigned short*)(p + 0x16), *(unsigned short*)(p + 0x18),
            *(int*)(p + 0x12)))
    {
        CMyFileLog log("insertServerGameEvent", 0x2e96);
        log("./log/DBQueryErr", h->get_quest_str());
        return 0;
    }
    if (!h->exec(0x4f5d))
    {
        CMyFileLog log("insertServerGameEvent", 0x2e9d);
        log("./log/DBQueryErr", "insertServerGameEvent Query(exec) Error");
        return 0;
    }
    return 1;
}

char CDBManager::updateServerGameEvent(Packet_StopGameEventFromServer* packet)
{
    CDBHandle* h = m_handles[1];    // account db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(0x4f5e,
                      " upDate dnf_event_log set end_time = %u  where server_id = %d and event_type = %d and end_time = 0 ",
                      *(unsigned int*)(p + 0x12), *(int*)(p + 0xe),
                      *(int*)(p + 0xa)))
    {
        CMyFileLog log("updateServerGameEvent", 0x2eb2);
        log("./log/DBQueryErr", h->get_quest_str());
        return 0;
    }
    if (!h->exec(0x4f5e))
    {
        CMyFileLog log("updateServerGameEvent", 0x2eb9);
        log("./log/DBQueryErr", "updateServerGameEvent Query(exec) Error");
        return 0;
    }
    return 1;
}

char CDBManager::UpdateGuildRank(int serverId, CGuildManager* gm)
{
    if (!gm)
        return 0;
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e33,
                      "upDate guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log("UpdateGuildRank", 0x6cf);
        log("./log/DBQueryErr",
            "CDBManager::UpdateGuildRank() update guild_info set guild_rank = 0 where server_id = %d and expire_flag = 0\n",
            serverId);
        return 0;
    }
    if (!h->exec(0x4e33))
        return 0;
    std::vector<std::pair<unsigned int, STGuildRankInfo*> >* rankList =
        gm->GetVtGuildRankInfo();
    for (std::vector<std::pair<unsigned int, STGuildRankInfo*> >::iterator it =
             rankList->begin();
         it != rankList->end(); ++it)
    {
        STGuildRankInfo* info = it->second;
        if (!info)
            continue;
        if (*(int*)((char*)info + 8) == 0)
            continue;
        if (!h->set_query(0x4e34,
                          "upDate guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0",
                          *(int*)((char*)info + 8),
                          *(int*)((char*)info + 0), serverId))
        {
            CMyFileLog log("UpdateGuildRank", 0x6e6);
            log("./log/DBQueryErr",
                "CDBManager::UpdateGuildRank() Fatal Error Break : update guild_info set guild_rank = %d where guild_id = %d and server_id = %d and expire_flag = 0\n",
                *(int*)((char*)info + 8), *(int*)((char*)info + 0), serverId);
            return 0;
        }
        if (!h->exec(0x4e34))
            return 0;
    }
    return 1;
}

char CDBManager::QueryGuildPointList(int serverId, CGuildManager* gm)
{
    if (!gm)
        return 0;
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e32,
                      "seLect guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0",
                      serverId))
    {
        CMyFileLog log("QueryGuildPointList", 0x692);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuild() select guild_id, guild_point from guild_info where server_id = %d and expire_flag = 0\n",
            serverId);
        return 0;
    }
    if (!h->exec(0x4e32))
        return 0;
    std::vector<std::pair<unsigned int, STGuildRankInfo*> >* rankList =
        gm->GetVtGuildRankInfo();
    int n = h->get_n_rows();
    for (int i = 0; i < n; i++)
    {
        if (!h->fetch())
            return 0;
        STGuildRankInfo* info = new (std::nothrow) STGuildRankInfo;
        if (!info)
            return 0;
        if (!h->get_uint(0, *(unsigned int*)((char*)info + 0)))
            return 0;
        if (!h->get_uint(1, *(unsigned int*)((char*)info + 4)))
            return 0;
        rankList->push_back(
            std::make_pair(*(unsigned int*)((char*)info + 4), info));
    }
    return 1;
}

char CDBManager::QueryP2PStatistics(Packet_P2P_Statistics* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(
            0x4f26,
            "inSert into p2p_statistics ( occ_time, server_group, p2p_user, p2p_min_ping, p2p_max_ping, p2p_avg_ping, p2p_over_ping_100, p2p_over_ping_200, p2p_over_ping_300, p2p_over_ping_400, relay_user, relay_min_ping, relay_max_ping, relay_avg_ping, relay_over_ping_100, relay_over_ping_200, relay_over_ping_300, relay_over_ping_400) values (now(), %d, %d, %d, %d, %d, %u, %u, %u, %u, %d, %d, %d, %d, %u, %u, %u, %u)",
            *(signed char*)(p + 0x12), *(int*)(p + 0xa),
            *(signed short*)(p + 0x13), *(signed short*)(p + 0x15),
            *(signed short*)(p + 0x17), *(int*)(p + 0x19),
            *(int*)(p + 0x1d), *(int*)(p + 0x21), *(int*)(p + 0x25),
            *(int*)(p + 0xe), *(signed short*)(p + 0x29),
            *(signed short*)(p + 0x2b), *(signed short*)(p + 0x2d),
            *(int*)(p + 0x2f), *(int*)(p + 0x33), *(int*)(p + 0x37),
            *(int*)(p + 0x3b)))
    {
        CMyFileLog log("QueryP2PStatistics", 0x295c);
        log("./log/DBQueryErr", "set_query(insert_p2p_statistics)");
        return 0;
    }
    if (!h->exec(0x4f26))
        return 0;
    return 1;
}

char CDBManager::OnGoldcardEventStatistic(
    Packet_Goldcard_Event_Statistic_STD* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    char* p = (char*)packet;
    for (int i = 0; i <= 0x62; i++)
    {
        if (*(int*)(p + i * 9 + 0xb) == 0)
            continue;
        if (*(int*)(p + i * 9 + 0xf) == 0)
            continue;
        if (!h->set_query(0x4f03,
                          "upDate log_goldcard_event set create_cnt=create_cnt+%d,open_cnt=open_cnt+%d where occ_date=cast(now() as date) and level=%d",
                          *(int*)(p + i * 9 + 0xb),
                          *(int*)(p + i * 9 + 0xf), i))
        {
            CMyFileLog log("OnGoldcardEventStatistic", 0x222b);
            log("./log/DBQueryErr",
                "CDBManager::OnGoldcardEventStatistic() upDate Error");
        }
        else if (!h->exec(0x4f03))
        {
            CMyFileLog log("OnGoldcardEventStatistic", 0x222b);
            log("./log/DBQueryErr",
                "CDBManager::OnGoldcardEventStatistic() upDate Error");
            // 原版 affected 检查 or %edx 死代码：insert(0x4f02) 永不执行
        }
    }
    return 1;
}

char CDBManager::QueryUpdateChannelOccNum(Packet_User_Count_Statistic* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[2];    // game db
    if (!h)
        return 0;
    char* p = (char*)packet;
    h->set_query(0x4eed,
                 "upDate game_channel set gc_now=%d,gc_up_time=now() where gc_no=%d",
                 *(int*)(p + 0xe), *(int*)(p + 0xa));
    h->exec(0x4eed);
    CMyFileLog log("QueryUpdateChannelOccNum", 0x27dc);
    log("./log/DBQueryErr",
        "upDate game_channel Error : channel_no(%d), user_count(%d)",
        *(int*)(p + 0xe), *(int*)(p + 0xa));
    for (int i = 0; i <= 0x63; i++)
    {
        if (!h->set_query(0x4f29,
                          "upDate channel_occ_info set occ_num=%d where gc_no=%d and age=%d",
                          *(signed short*)(p + 0x12 + i * 2),
                          *(int*)(p + 0xa), i + 1))
        {
            CMyFileLog log("QueryUpdateChannelOccNum", 0x27e4);
            log("./log/DBQueryErr",
                "upDate channel_occ_info Error : channel_no(%d), user_count(%d)",
                *(signed short*)(p + 0x12 + i * 2), *(int*)(p + 0xa));
        }
        else if (!h->exec(0x4f29))
        {
            CMyFileLog log("QueryUpdateChannelOccNum", 0x27e4);
            log("./log/DBQueryErr",
                "upDate channel_occ_info Error : channel_no(%d), user_count(%d)",
                *(signed short*)(p + 0x12 + i * 2), *(int*)(p + 0xa));
        }
    }
    return 1;
}

char CDBManager::OnMemberDeleteAsCharDelete(unsigned int characNo)
{
    CDBHandle* h = m_handles[2];    // game db
    CDBHandle* h2 = m_handles[3];   // game2nd db
    h->set_query(0x4e2d,
                 "deLete from charac_members where charac_no=%d", characNo);
    h->exec(0x4e2d);
    h->set_query(0x4e2e,
                 "upDate charac_members set master_no = 0 where master_no=%d",
                 characNo);
    h->exec(0x4e2e);
    h2->set_query(0x4e7e,
                  "deLete from charac_black_list where charac_no=%d",
                  characNo);
    h2->exec(0x4e7e);
    h2->set_query(0x4e7f,
                  "deLete from charac_black_info where charac_no=%d",
                  characNo);
    h2->exec(0x4e7f);
    h->set_query(0x4ea3,
                 "deLete from charac_friends where charac_no=%d", characNo);
    h->exec(0x4ea3);
    h->set_query(0x4ea4,
                 "deLete from charac_friends where friend_no=%d", characNo);
    h->exec(0x4ea4);
    return 1;
}

char CDBManager::UpdateMemberKeyInCharacInfo(unsigned char serverId,
                                             unsigned int guildId)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h->set_query(0x4e26,
                      "upDate charac_info set member_flag = %d where charac_no = %d",
                      serverId, guildId))
        return 0;
    if (!h->exec(0x4e26))
        return 0;
    return 1;
}

char CDBManager::QueryGuildBooting(
    Packet_DB_Query_Reply_On_Guild_Booting& reply, int serverId)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e80,
                      "seLect a_side_point, b_side_point, winner_side from power_war where server_id = %d",
                      serverId))
    {
        CMyFileLog log("QueryGuildBooting", 0x1297);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildBooting() : seLect a_side_point, b_side_point, winner_side from power_war where server_id = %d",
            serverId);
        return 0;
    }
    if (!h->exec(0x4e80))
        return 0;
    if (h->get_n_rows() != 0)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_uint(0, *(unsigned int*)((char*)&reply + 0xa)))
            return 0;
        if (!h->get_uint(1, *(unsigned int*)((char*)&reply + 0xe)))
            return 0;
        if (!h->get_ubyte(2, *(unsigned char*)((char*)&reply + 0x12)))
            return 0;
    }
    return 1;
}

char CDBManager::QueryHellPartyStatisticItemCreate(
    Packet_DBMW_HellParty_Statistic_Item* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    char* p = (char*)packet;
    int count = *(int*)(p + 0xa);
    CMyFileLog log("QueryHellPartyStatisticItemCreate", 0x1848);
    log("./log/statistic",
        "Packet_DBMW_HellParty_Statistic_Item : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xbc\xf6\xbd\xc5\n",
        count);
    for (int i = 0; i < count; i++)
    {
        char* e = p + i * 0x24;
        if (!h->set_query(
                0x4ec0,
                "inSert into log_hellparty_value (occ_time, hellparty_type, dungeon_index, dungeon_diff, party_count, hellparty_diff, update_count, uncommon_count, rare_count, uniq_count, epic_count) values (now(), %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",
                *(unsigned char*)(e + 0xe), *(int*)(e + 0xf),
                *(signed char*)(e + 0x13), *(signed char*)(e + 0x14),
                *(signed char*)(e + 0x15), *(int*)(e + 0x16),
                *(int*)(e + 0x1e), *(int*)(e + 0x22), *(int*)(e + 0x26),
                *(int*)(e + 0x2a)))
        {
            CMyFileLog log2("QueryHellPartyStatisticItemCreate", 0x185c);
            log2("./log/statistic",
                 "\nQueryDeathTowerValueStatisticCreate db error!!\n");
            return 0;
        }
        if (!h->exec(0x4ec0))
            return 0;
    }
    return 1;
}

char CDBManager::OnSavePacketOverflowWrite(
    Packet_DBMW_Packet_Overflow_Statistic* packet)
{
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    char name[0x100];
    if (*(unsigned char*)(p + 0xa) == 0)
    {
        int idx = *(unsigned short*)(p + 0xb);
        if (idx >= getNotiPacketNameCount())
            memcpy(name, "???", 4);
        else
            strcpy(name, g_szNotiPacketName[idx]);
    }
    else
    {
        int idx = *(unsigned short*)(p + 0xb);
        if (idx >= getCmdPacketNameCount())
            memcpy(name, "???", 4);
        else
            strcpy(name, g_szCmdPacketName[idx]);
    }
    char sql[0x400];
    sprintf(sql, "upDate packet_overflow set cnt=cnt+%d where packet_type=%d and packet_kind='%s'",
            *(int*)(p + 0xd), *(unsigned char*)(p + 0xa), name);
    if (!h->set_query(0x4eba, "%s", sql))
        return 0;
    if (!h->exec(0x4eba))
    {
        memset(sql, 0, 0x400);
        sprintf(sql, "inSert into packet_overflow (packet_type, packet_kind, cnt) values (%d, '%s', %d)",
                *(unsigned char*)(p + 0xa), name, *(int*)(p + 0xd));
        if (!h->set_query(0x4eb9, "%s", sql))
            return 0;
        if (!h->exec(0x4eb9))
            return 0;
    }
    return 1;
}

char CDBManager::QueryErrorLineStatisticCreate(
    Packet_DBMW_Save_Error_Line_Statistic* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    char* p = (char*)packet;
    int count = *(int*)(p + 0xa);
    char buf[0x200];
    memset(buf, 0, 0x200);
    std::string sql;
    for (int i = 0; i < count; i++)
    {
        char* e = p + i * 0xa;
        if (sql.size() != 0)
            sprintf(buf, ",(from_unixtime(%d),%d,%d,%d)", now,
                    *(unsigned short*)(e + 0x12), *(int*)(e + 0xe),
                    *(int*)(e + 0x14));
        else
            sprintf(buf, "(from_unixtime(%d),%d,%d,%d)", now,
                    *(unsigned short*)(e + 0x12), *(int*)(e + 0xe),
                    *(int*)(e + 0x14));
        sql += buf;
    }
    if (!h->set_query(0x4e88,
                      "inSert into log_packet_dispatcher_error_line(occ_time,channel_no,error_line,cnt) values%s",
                      sql.c_str()))
        return 0;
    if (!h->exec(0x4e88))
        return 0;
    return 1;
}

char CDBManager::QueryTowerOfDespairStatistic(
    Packet_TowerOfDespair_Statistic_STD* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    char* p = (char*)packet;
    for (int i = 1; i <= 0x64; i++)
    {
        if (*(int*)(p + 0x12 + i * 8) == 0)
            continue;
        if (*(int*)(p + 0xe + i * 8) == 0)
            continue;
        h->set_query(0x4f27,
                     "inSert into log_tower_despair_layer_stat(occ_date,server_id,layer,enter,success) values(now(),%d,%d,%d,%d)",
                     *(int*)(p + 0xa), i, *(int*)(p + 0x12 + i * 8),
                     *(int*)(p + 0xe + i * 8));
        if (!h->exec(0x4f27))
        {
            CMyFileLog log("QueryTowerOfDespairStatistic", 0x27bc);
            log("./log/DBQueryErr",
                "insert error TOD : group(%d),layer(%d),enter(%d),succ(%d)",
                *(int*)(p + 0xa), i, *(int*)(p + 0x12 + i * 8),
                *(int*)(p + 0xe + i * 8));
        }
    }
    h->set_query(0x4f28,
                 "inSert into log_tower_despair_uv_stat(occ_date,server_id,uv) values(now(),%d,%d)",
                 *(int*)(p + 0xa), *(int*)(p + 0xe));
    if (!h->exec(0x4f28))
    {
        CMyFileLog log("QueryTowerOfDespairStatistic", 0x27c8);
        log("./log/DBQueryErr", "insert error TOD : uv(%d)",
            *(int*)(p + 0xe));
    }
    return 1;
}

char CDBManager::GetVillageAttackedRank(Packet_DB_VillageAttackedRank* packet,
                                        bool& flag, int& a, int& b)
{
    char* p = (char*)packet;
    if (*(unsigned char*)(p + 0xa) == GetMinTimeServerGroup(*(int*)(p + 0xb)) ||
        *(unsigned char*)(p + 0xa) == GetMaxHuntingPointServerGroup(*(int*)(p + 0xf)))
    {
        if (GetCoinEventPerDay(*(unsigned char*)(p + 0xa), 1, a, b))
            flag = true;
    }
    if (*(unsigned char*)(p + 0xa) == GetMinTimeServerGroup(*(int*)(p + 0x13)) ||
        *(unsigned char*)(p + 0xa) == GetMaxHuntingPointServerGroup(*(int*)(p + 0x17)))
    {
        if (GetCoinEventPerDay(*(unsigned char*)(p + 0xa), -1, a, b))
            flag = true;
    }
    return 1;
}

int CDBManager::GetMinTimeServerGroup(int serverId)
{
    CDBHandle* h = m_handles[6];    // sso db
    if (!h->set_query(0x4ee1,
                      "seLect server_info from village_attacked_server_time_rank where occ_date = cast(from_unixtime(%d) as date) order by clear_time asc limit 1",
                      serverId))
    {
        CMyFileLog log("GetMinTimeServerGroup", 0x1deb);
        log("./log/DBQueryErr", "GetMinTimeServerGroup Error\n");
        return 0;
    }
    if (!h->exec(0x4ee1))
        return 0;
    if (h->get_n_rows() == 0)
        return 0;
    if (!h->fetch())
        return 0;
    int result = 0;
    if (!h->get_int(0, result))
        return 0;
    return result;
}

int CDBManager::GetMaxHuntingPointServerGroup(int serverId)
{
    CDBHandle* h = m_handles[6];    // sso db
    if (!h->set_query(0x4ee0,
                      "seLect server_info from village_attacked_server_point_rank where occ_date = cast(from_unixtime(%d) as date) order by hunting_point desc limit 1",
                      serverId))
    {
        CMyFileLog log("GetMaxHuntingPointServerGroup", 0x1dc9);
        log("./log/DBQueryErr", "GetMaxHuntingPointServerGroup Error\n");
        return 0;
    }
    if (!h->exec(0x4ee0))
        return 0;
    if (h->get_n_rows() == 0)
        return 0;
    if (!h->fetch())
        return 0;
    int result = 0;
    if (!h->get_int(0, result))
        return 0;
    return result;
}

char CDBManager::updateCollectItems(unsigned char a, int b, unsigned int c,
                                    unsigned char d)
{
    CDBHandle* h = m_handles[9];    // event db
    if (!h)
        return 0;
    bool setQueryOk = false;
    if (d == 0)
    {
        if (b <= 0)
            return 1;
        if (c == 0)
            setQueryOk = h->set_query(
                0x4f4d,
                "upDate collect_items set cur_count = cur_count + %d where server_info = %d",
                b, a);
        else
            setQueryOk = h->set_query(
                0x4f4d,
                "upDate collect_items set cur_count = cur_count + %d, full_time = from_unixtime(%d) where server_info = %d",
                b, c, a);
    }
    else
    {
        setQueryOk = h->set_query(
            0x4f4d,
            "upDate collect_items set change_flag = %d where server_info = %d",
            0, a);
    }
    if (!setQueryOk)
    {
        CMyFileLog log("updateCollectItems", 0x29d6);
        log("./log/DBQueryErr", "upDate collect_items set Error");
        return 0;
    }
    if (!h->exec(0x4f4d))
    {
        CMyFileLog log("updateCollectItems", 0x29df);
        log("./log/DBQueryErr", "updateCollectItems Query(exec) Error");
        return 0;
    }
    return 1;
}

char CDBManager::updateCollectItemsGm(unsigned char a, unsigned int b, int c,
                                      int d)
{
    CDBHandle* h = m_handles[9];    // event db
    if (!h)
        return 0;
    if (!h->set_query(0x4f4d,
                      "upDate collect_items set cur_count=%u, total_count=%u, change_flag = 1, full_time=from_unixtime(%d) where server_info = %d",
                      b, c, d, a))
    {
        CMyFileLog log("updateCollectItemsGm", 0x29f6);
        log("./log/DBQueryErr", "upDate collect_items set Error");
        return 0;
    }
    if (!h->exec(0x4f4d))
    {
        CMyFileLog log("updateCollectItemsGm", 0x29ff);
        log("./log/DBQueryErr", "updateCollectItems Query(exec) Error");
        return 0;
    }
    return 1;
}

char CDBManager::insertHolePunchingResult(
    Packet_GameServer2Statisctics2DBServer* packet)
{
    if (!packet)
        return 0;
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    if (!h->set_query(0x4f60,
                      "inSert into p2p_connect_success_rate  (server_group, connected_type, required_time, check_time, nation_code, peer_address, occ_date) values (%d, %d, %d, %d, '%s', '%s', now())",
                      *(unsigned short*)(p + 0xa),
                      *(signed char*)(p + 0xc), *(int*)(p + 0xd),
                      *(int*)(p + 0x11), p + 0x15, p + 0x25))
    {
        CMyFileLog log("insertHolePunchingResult", 0x2edf);
        log("./log/DBQueryErr",
            "set_query(inSert_hole_punching_success_rate_stat)");
        return 0;
    }
    if (!h->exec(0x4f60))
        return 0;
    return 1;
}

char CDBManager::UpdateRandomboxStatistic(
    Packet_Randombox_statistic_DB* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    char boxKind[0x20] = {0};
    if (!h)
        return 0;
    char* p = (char*)packet;
    for (int i = 0; i <= 4; i++)
    {
        if (i == 0)
            memcpy(boxKind, "randombox", 10);
        else if (i == 2)
            memcpy(boxKind, "emeraldbox", 11);
        if (*(int*)(p + i * 4 + 0xa) == 0)
            continue;
        if (*(int*)(p + i * 4 + 0x1e) == 0)
            continue;
        if (!h->set_query(0x4eea,
                          "inSert into log_randombox(occ_date, box_kind, create_count, open_count) values(CURDATE(), '%s', %d, %d)",
                          boxKind, *(int*)(p + i * 4 + 0xa),
                          *(int*)(p + i * 4 + 0x1e)))
        {
            CMyFileLog log("UpdateRandomboxStatistic", 0x207b);
            log("./log/statistic", "UpdateRandomboxStatistic db error!!\n");
            return 0;
        }
        if (!h->exec(0x4eea))
        {
            CMyFileLog log("UpdateRandomboxStatistic", 0x207b);
            log("./log/statistic", "UpdateRandomboxStatistic db error!!\n");
            return 0;
        }
    }
    return 1;
}

char CDBManager::SaveMemberExp(unsigned int characNo, unsigned int exp,
                               unsigned int lev)
{
    CDBHandle* h = m_handles[2];    // game db
    if (!h->set_query(0x4e4d,
                      "upDate charac_members set exp=%d where charac_no = %d and master_no = %d",
                      lev, characNo, exp))
    {
        CMyFileLog log("SaveMemberExp", 0x4f1);
        log("./log/MemberModify",
            "ERROR  CDBManager::SaveMemberExp   upDate charac_members set exp=%d where charac_no = %d and master_no = %d",
            lev, characNo, exp);
        return 0;
    }
    if (!h->exec(0x4e4d))
        return 0;
    return 1;
}

char CDBManager::UpdatePowerSecedeTime(unsigned char serverId,
                                       unsigned int secedeTime)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4ec6,
                      "upDate guild_info set power_secede_time = now() where guild_id = %d and server_id = %d",
                      secedeTime, serverId))
    {
        CMyFileLog log("UpdatePowerSecedeTime", 0x12fa);
        log("./log/DBQueryErr",
            "CDBManager::SavePowerWarPoint() : upDate guild_info set power_secede_time = now() where guild_id = %d and server_id = %d",
            serverId, secedeTime);
        return 0;
    }
    h->exec(0x4ec6);
    return 1;
}

char CDBManager::QueryMsg(Packet_DBMW_Query_Msg* packet)
{
    char* p = (char*)packet;
    CDBHandle* h = m_handles[*(int*)(p + 0xe)];
    if (!h->set_query(*(int*)(p + 0xa), p + 0x12))
    {
        CMyFileLog log("QueryMsg", 0x1db6);
        log("./log/DBQueryErr", "GetDBMWQueryMsg Query(%s) Error\n", p + 0x12);
        return 0;
    }
    if (!h->exec(*(int*)(p + 0xa)))
        return 0;
    return 1;
}

char CDBManager::GetDBMWStatistic(Packet_DBMW_Query_String* packet)
{
    char* p = (char*)packet;
    CDBHandle* h = m_handles[4];    // log db
    if (!h->set_query(*(int*)(p + 0xa), p + 0xe))
    {
        CMyFileLog log("GetDBMWStatistic", 0x1cb8);
        log("./log/DBQueryErr", "GetDBMWStatistic Query(%s) Error\n",
            p + 0xe);
        return 0;
    }
    if (!h->exec(*(int*)(p + 0xa)))
        return 0;
    return 1;
}

char CDBManager::UpdateCreateEmblemStatistic(
    Packet_Emblem_Create_Statistic_DB* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    char* p = (char*)packet;
    if (!h->set_query(0x4ee9,
                      "inSert into log_emblem_create(cur_date, grade0, grade1, grade2, grade3, grade4, grade5, grade6) values(CURDATE(), %d, %d, %d, %d, %d, %d, %d)",
                      *(int*)(p + 0xa), *(int*)(p + 0xe), *(int*)(p + 0x12),
                      *(int*)(p + 0x16), *(int*)(p + 0x1a),
                      *(int*)(p + 0x1e), *(int*)(p + 0x22)))
    {
        CMyFileLog log("UpdateCreateEmblemStatistic", 0x1f04);
        log("./log/statistic", "UpdateCreateEmblemStatistic db error!!\n");
        return 0;
    }
    if (!h->exec(0x4ee9))
        return 0;
    return 1;
}

char CDBManager::OnWriteGuildMemberMemo(
    Packet_DB_Write_Guild_Member_Memo* packet)
{
    CDBHandle* h = m_handles[8];    // guild db
    char* p = (char*)packet;
    char buf[0x6002];
    memset(buf, 0, 0x6002);
    h->escape_string(buf, p + 0x12);
    if (!h->set_query(0x4ebb,
                      "upDate guild_member set memo='%s' where guild_id = %d and charac_no = %d",
                      buf, *(int*)(p + 0xa), *(int*)(p + 0xe)))
    {
        CMyFileLog log("OnWriteGuildMemberMemo", 0x1a8e);
        log("./log/DBQueryErr",
            "CDBManager::OnWriteGuildMemo() upDate guild_member set memo='%s' where guild_id = %d and charac_no = %d",
            buf, *(int*)(p + 0xa), *(int*)(p + 0xe));
        return 0;
    }
    if (!h->exec(0x4ebb))
    {
        CMyFileLog log("OnWriteGuildMemberMemo", 0x1a96);
        log("./log/DBQueryErr",
            "upDate_into_guild_member_memo Query Error\n");
        return 0;
    }
    return 1;
}

char CDBManager::OnServerMatchData(Packet_Server_Match_data_DBMW* packet)
{
    CDBHandle* h = m_handles[9];    // event db
    char* p = (char*)packet;
    if (!h->set_query(0x4ef8,
                      "upDate pvp_score set win_count=win_count+%d,lose_count=lose_count+%d where server_id = %d and occ_date = cast(now() as date)",
                      *(int*)(p + 0xb), *(int*)(p + 0xf),
                      *(signed char*)(p + 0xa)))
    {
        CMyFileLog log("OnServerMatchData", 0x219d);
        log("./log/Except", "OnServerMatchData Error db ");
        return 0;
    }
    if (!h->exec(0x4ef8))
    {
        // 原版 affected 死代码：insert(0x4ef9) 仅 exec 失败时执行
        if (!h->set_query(0x4ef9,
                          "inSert into pvp_score(server_id,occ_date,win_count,lose_count) values(%d,cast(now() as date),%d,%d)",
                          *(signed char*)(p + 0xa), *(int*)(p + 0xb),
                          *(int*)(p + 0xf)))
            return 0;
        if (!h->exec(0x4ef9))
            return 0;
    }
    return 1;
}

char CDBManager::OnManagerEventTriggerAck(
    Packet_Manager_Event_Trigger_Ack* packet)
{
    CDBHandle* h = m_handles[1];    // account db
    char* p = (char*)packet;
    int kind = *(int*)(p + 0xe);
    if (kind == 2)
    {
        h->set_query(0x4eff,
                     "upDate dnf_event_log set event_flag=%d where event_type=%d and server_id=%d and ( end_time > unix_timestamp(now()) or end_time=0)",
                     kind, *(int*)(p + 0xa), *(int*)(p + 0x12));
    }
    else if (kind == 4)
    {
        h->set_query(0x4eff,
                     "upDate dnf_event_log set event_flag=%d where event_type=%d and server_id=%d and end_time <>0",
                     kind, *(int*)(p + 0xa), *(int*)(p + 0x12));
    }
    else
    {
        CMyFileLog log("OnManagerEventTriggerAck", 0x2211);
        log("./log/DBQueryErr",
            "CDBManager::OnManagerEventTriggerAck() Unvalid Kind(%d)", kind);
    }
    if (!h->exec(0x4eff))
    {
        CMyFileLog log("OnManagerEventTriggerAck", 0x2215);
        log("./log/DBQueryErr",
            "CDBManager::OnManagerEventTriggerAck() upDate Error");
    }
    return 1;
}

char CDBManager::OnSaveLoadingTimeReport(
    Packet_DBMW_Loading_Time_Report* packet)
{
    CDBHandle* h = m_handles[0xf];  // frame_lag db
    if (!h)
        return 0;
    char* p = (char*)packet;
    for (int i = 0; i <= 8; i++)
    {
        char buf[0x400];
        memset(buf, 0, 0x400);
        snprintf(buf, 0x400,
                 "inSert into loading_time (occ_time, server_id, type, load_sec) values (now(), %d, %d, %d)",
                 *(unsigned char*)(p + 0xa + i), i, *(int*)(p + 0x13 + i * 4));
        h->set_query(0x4ec4, "%s", buf);
        h->exec(0x4ec4);
        CMyFileLog log("OnSaveLoadingTimeReport", 0x1ae8);
        log("./log/Statistic", "[LoadingTime] %s", buf);
    }
    return 1;
}

char CDBManager::OnSaveFatigueBattery(
    Packet_DBMW_Fatigue_Battery_Money_Statistic* packet)
{
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    char* p = (char*)packet;
    for (int i = 0; i <= 0x64; i++)
    {
        if (*(int*)(p + i * 8 + 0xa) != 0)
        {
            h->set_query(0x4ec5,
                         "inSert into log_fatigue_battery set occ_date = now(), server_id = %d, money = %d, buff = %d",
                         i, *(int*)(p + i * 8 + 0xa),
                         *(int*)(p + i * 8 + 0xe));
            h->exec(0x4ec5);
            CMyFileLog log("OnSaveFatigueBattery", 0x1b23);
            log("./log/Statistic",
                "[Fatigue Battery] inSert into log_fatigue_battery set occ_time = now(), server_id = %d, money = %d, buff = %d",
                i, *(int*)(p + i * 8 + 0xa), *(int*)(p + i * 8 + 0xe));
        }
    }
    return 1;
}

// ---- 包数据小结构（statistics 统计字段）----
void RandomOptionSeed::reset()
{
    m_data[0] = 0;
}

void RandomOption::reset()
{
    m_field0.reset();
    m_field1.reset();
    m_field2.reset();
    m_seed0.reset();
    m_field3.reset();
    m_seed1.reset();
}

void RandomOptionField::reset()
{
    m_data[0] = 0;
    m_data[1] = 0;
    m_data[2] = 0;
}

UpgradeSeparateInfo::UpgradeSeparateInfo()
{
    reset();
}

void UpgradeSeparateInfo::reset()
{
    m_data[0] &= ~0x1f;
    m_data[0] &= ~0x20;
    m_data[0] &= 0x3f;
}

unsigned char UpgradeSeparateInfo::GetUpgradeSeparate() const
{
    return (unsigned char)(m_data[0] & 0x1f);
}

ReservedCapacity::ReservedCapacity()
{
    reset();
}

void ReservedCapacity::reset()
{
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    *(char*)((char*)this + 8) = 0;
}

NpcBuyLimitItem::NpcBuyLimitItem()
{
    clear();
}

void NpcBuyLimitItem::clear()
{
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
}

STGuildAgitDBInfo::STGuildAgitDBInfo()
{
    *(char*)((char*)this + 0) = 0;
}

DnfItemInfo::DnfItemInfo()
{
    new ((UpgradeSeparateInfo*)((char*)this + 0x2b)) UpgradeSeparateInfo;
    new ((ReservedCapacity*)((char*)this + 0x2c)) ReservedCapacity;
    reset();
}

void DnfItemInfo::reset()
{
    *(char*)((char*)this + 0) = 0;
    *(int*)((char*)this + 1) = 0;
    *(char*)((char*)this + 5) = 0;
    *(int*)((char*)this + 6) = 0;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(char*)((char*)this + 0x10) = 0;
    *(unsigned short*)((char*)this + 0x11) = 0;
    ((RandomOption*)((char*)this + 0x1d))->reset();
    ((UpgradeSeparateInfo*)((char*)this + 0x2b))->reset();
    ((ReservedCapacity*)((char*)this + 0x2c))->reset();
}

STGuildMemberCharacData::STGuildMemberCharacData()
{
    *(char*)((char*)this + 0) = 0xff;
    *(char*)((char*)this + 1) = 0xff;
    *(char*)((char*)this + 2) = 0;
    memset((char*)this + 3, 0, 0x1e);
}

STGuildCargoLog::STGuildCargoLog()
{
    memset(this, 0, 0x30);
}

STBlackUserDBType::STBlackUserDBType()
{
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 0x24) = 0;
    memset((char*)this + 4, 0, 0x1e);
}

STGuildBoardDBInfo::STGuildBoardDBInfo()
{
    new ((STGuildMemberCharacData*)((char*)this + 0x84)) STGuildMemberCharacData;
    *(int*)((char*)this + 0x78) = 0;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0;
    memset(this, 0, 0x78);
}

STGuildCargoDBInfo::STGuildCargoDBInfo()
{
    for (int i = 0x76; i != -1; i--)
        new ((DnfItemInfo*)((char*)this + i * 0x35)) DnfItemInfo;
    *(int*)((char*)this + 0x18d8) = 0;
}

STGuildMemerDBInfo::STGuildMemerDBInfo()
{
    *(char*)((char*)this + 0x15) = 0;
    *(int*)((char*)this + 0x16) = 0;
    memset(this, 0, 0x15);
}

STTodayGuildMember::~STTodayGuildMember() {}
st_ip_counter_list::~st_ip_counter_list() {}
st_full_ip_counter_list::~st_full_ip_counter_list() {}
stTowerRank_t::~stTowerRank_t() {}
st_ars_info_list::~st_ars_info_list() {}
void st_ars_info_list::CopyStruct(const st_ars_info_list& other)
{
    m_field0 = other.m_field0;
    m_field2 = other.m_field2;
    m_field4 = other.m_field4;
    m_field6 = other.m_field6;
    m_field8 = other.m_field8;
    m_field9 = other.m_field9;
    m_fieldA = other.m_fieldA;
}
void st_ip_counter_list::CopyStruct(const st_ip_counter_list& other)
{
    m_field0 = other.m_field0;
    m_field2 = other.m_field2;
    memset(m_data, 0, 0xc);
    strncpy(m_data, other.m_data, 0xc);
    m_field10 = other.m_field10;
}
void st_full_ip_counter_list::CopyStruct(const st_full_ip_counter_list& other)
{
    m_field0 = other.m_field0;
    m_field2 = other.m_field2;
    memset(m_data, 0, 0x10);
    strncpy(m_data, other.m_data, 0x10);
    m_field14 = other.m_field14;
}

int getNotiPacketNameCount()
{
    return 0x233;
}

int getCmdPacketNameCount()
{
    return 0x25f;
}

// ---- CAppLoadChecker ----
CAppLoadChecker::CAppLoadChecker()
{
    m_tcpRecvLast = 0;
    m_udpRecvLast = 0;
    m_tcpSendLast = 0;
    m_tcpRecvLevel = 0;
    m_udpRecvLevel = 0;
    m_tcpSendLevel = 0;
}

char CAppLoadChecker::CheckTcpRecvQ(int size)
{
    if (checkTcpRecvLoad(size))
    {
        setTcpRecvQueue(size);
        return 1;
    }
    return 0;
}

char CAppLoadChecker::CheckUdpRecvQ(int size)
{
    if (checkUdpRecvLoad(size))
    {
        setUdpRecvQueue(size);
        return 1;
    }
    return 0;
}

char CAppLoadChecker::CheckTcpSendQ(int size)
{
    if (checkTcpSendLoad(size))
    {
        setTcpSendQueue(size);
        return 1;
    }
    return 0;
}

void CAppLoadChecker::setTcpRecvQueue(int size) { m_tcpRecvLast = size; }
void CAppLoadChecker::setUdpRecvQueue(int size) { m_udpRecvLast = size; }
void CAppLoadChecker::setTcpSendQueue(int size) { m_tcpSendLast = size; }

void CAppLoadChecker::RequestDB(CServerHandler* serverHandler, int flag, int size)
{
    Packet_Server_Queue_Load_Statistic pkt;
    pkt.m_fieldA = 0xc8;
    pkt.m_fieldB = (char)flag;
    pkt.m_fieldC = (unsigned short)size;
    CPacketTranslater::OnServeQueueLoadStatistic(&pkt);
}

bool CAppLoadChecker::checkTcpRecvLoad(int size)
{
    if (m_tcpRecvLevel < 1 && 0x32 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 1;
        return 1;
    }
    if (m_tcpRecvLevel < 2 && 0x64 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 2;
        return 1;
    }
    if (m_tcpRecvLevel < 3 && 0xc8 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 3;
        return 1;
    }
    if (m_tcpRecvLevel < 4 && 0x1f4 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 4;
        return 1;
    }
    if (m_tcpRecvLevel < 5 && 0x3e8 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 5;
        return 1;
    }
    if (m_tcpRecvLevel < 6 && 0x1388 < size - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 6;
        return 1;
    }
    if (m_tcpRecvLevel == 6 && 0x1388 < size - m_tcpRecvLast)
        return 1;
    if (m_tcpRecvLevel >= 0 && 0x32 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xff;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xff && 0x64 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfe;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfe && 0xc8 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfd;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfd && 0x1f4 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfc;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfc && 0x3e8 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfb;
        return 1;
    }
    if (m_tcpRecvLevel >= (char)0xfb && 0x1388 < m_tcpRecvLast - size)
    {
        m_tcpRecvLevel = 0xfa;
        return 1;
    }
    if (m_tcpRecvLevel == (char)0xfa && 0x1388 < m_tcpRecvLast - size)
        return 1;
    return 0;
}

bool CAppLoadChecker::checkUdpRecvLoad(int size)
{
    if (m_udpRecvLevel < 1 && 0x32 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 1;
        return 1;
    }
    if (m_udpRecvLevel < 2 && 0x64 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 2;
        return 1;
    }
    if (m_udpRecvLevel < 3 && 0xc8 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 3;
        return 1;
    }
    if (m_udpRecvLevel < 4 && 0x1f4 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 4;
        return 1;
    }
    if (m_udpRecvLevel < 5 && 0x3e8 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 5;
        return 1;
    }
    if (m_udpRecvLevel < 6 && 0x1388 < size - m_udpRecvLast)
    {
        m_udpRecvLevel = 6;
        return 1;
    }
    if (m_udpRecvLevel == 6 && 0x1388 < size - m_udpRecvLast)
        return 1;
    if (m_udpRecvLevel >= 0 && 0x32 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xff;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xff && 0x64 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfe;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfe && 0xc8 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfd;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfd && 0x1f4 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfc;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfc && 0x3e8 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfb;
        return 1;
    }
    if (m_udpRecvLevel >= (char)0xfb && 0x1388 < m_udpRecvLast - size)
    {
        m_udpRecvLevel = 0xfa;
        return 1;
    }
    if (m_udpRecvLevel == (char)0xfa && 0x1388 < m_udpRecvLast - size)
        return 1;
    return 0;
}

bool CAppLoadChecker::checkTcpSendLoad(int size)
{
    if (m_tcpSendLevel < 1 && 0x32 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 1;
        return 1;
    }
    if (m_tcpSendLevel < 2 && 0x64 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 2;
        return 1;
    }
    if (m_tcpSendLevel < 3 && 0xc8 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 3;
        return 1;
    }
    if (m_tcpSendLevel < 4 && 0x1f4 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 4;
        return 1;
    }
    if (m_tcpSendLevel < 5 && 0x3e8 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 5;
        return 1;
    }
    if (m_tcpSendLevel < 6 && 0x1388 < size - m_tcpSendLast)
    {
        m_tcpSendLevel = 6;
        return 1;
    }
    if (m_tcpSendLevel == 6 && 0x1388 < size - m_tcpSendLast)
        return 1;
    if (m_tcpSendLevel >= 0 && 0x32 < m_tcpSendLast - size)
    {
        m_udpRecvLevel = 0xff;   // 原版怪癖：此处写 +0xd（udp 等级）
        return 1;
    }
    if (m_tcpSendLevel >= (char)0xff && 0x64 < m_tcpSendLast - size)
    {
        m_tcpSendLevel = 0xfe;
        return 1;
    }
    if (m_tcpSendLevel >= (char)0xfe && 0xc8 < m_tcpSendLast - size)
    {
        m_tcpSendLevel = 0xfd;
        return 1;
    }
    if (m_tcpSendLevel >= (char)0xfd && 0x1f4 < m_tcpSendLast - size)
    {
        m_tcpSendLevel = 0xfc;
        return 1;
    }
    if (m_tcpSendLevel >= (char)0xfc && 0x3e8 < m_tcpSendLast - size)
    {
        m_tcpSendLevel = 0xfb;
        return 1;
    }
    if (m_tcpSendLevel >= (char)0xfb && 0x1388 < m_tcpSendLast - size)
    {
        m_tcpSendLevel = 0xfa;
        return 1;
    }
    if (m_tcpSendLevel == (char)0xfa && 0x1388 < m_tcpSendLast - size)
        return 1;
    return 0;
}

CAppLoadChecker* CAppLoadCheckerInstance()
{
    static CAppLoadChecker instance;
    return &instance;
}

Packet_Server_Queue_Load_Statistic::Packet_Server_Queue_Load_Statistic()
    : PacketHeader(0x9d2, 0xe)
{
    m_fieldA = 0;
    m_fieldB = 0;
    m_fieldC = 0;
}

Packet_DB_Query_Reply_On_Guild_Booting::Packet_DB_Query_Reply_On_Guild_Booting()
    : PacketHeader(0x677, 0x13)
{
}

Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail()
    : PacketHeader(0x514, 0x12)
{
}

Packet_DBMW_Reply_Guild_Mail::Packet_DBMW_Reply_Guild_Mail()
    : PacketHeader(0x433, 0x13)
{
}

Packet_DBMW_Save_Guild_Join_Reply::Packet_DBMW_Save_Guild_Join_Reply()
    : PacketHeader(0x438, 0x1a)
{
}

Packet_Reply_Load_Tower_Full_Rank::Packet_Reply_Load_Tower_Full_Rank()
    : PacketHeader(0x4cd, 0x17bf)
{
}

Packet_Set_ARS_Info::Packet_Set_ARS_Info()
    : PacketHeader(0xb61, 0x4bf)
{
}

Packet_Result_Ontime_Event_Idx_Update::Packet_Result_Ontime_Event_Idx_Update()
    : PacketHeader(0x2348, 0x16)
{
    m_fieldA = 0;
}

Packet_CollectItemsResult::Packet_CollectItemsResult()
    : PacketHeader(0x27e7, 0x16)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(int*)((char*)this + 0x12) = 0;
}

Packet_DBMW_Add_Buddy_Reply::Packet_DBMW_Add_Buddy_Reply()
    : PacketHeader(0x673, 0x36)
{
    memset((char*)this + 0xe, 0, 0x27);
}

Packet_DBMW_Del_Buddy_Reply::Packet_DBMW_Del_Buddy_Reply()
    : PacketHeader(0x675, 0x31)
{
    memset((char*)this + 0x12, 0, 0x1e);
}

Packet_DB_Reply_Query_Guild::Packet_DB_Reply_Query_Guild()
    : PacketHeader(0x405, 0x135)
{
    *(char*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xb) = 0;
    *(int*)((char*)this + 0xf) = 0;
    new ((STGuildDBInfoOnly*)((char*)this + 0x13)) STGuildDBInfoOnly;
    memset((char*)this + 0xd0, 0, 0x65);
}

Packet_DB_Reply_Guild_Secede::Packet_DB_Reply_Guild_Secede()
    : PacketHeader(0x43a, 0x41)
{
    memset((char*)this + 0x1f, 0, 0x1e);
}

Packet_Guild_Load_Guild_Agit::Packet_Guild_Load_Guild_Agit()
    : PacketHeader(0x6e1, 0xf)
{
    *(int*)((char*)this + 0xa) = 0;
    new ((STGuildAgitDBInfo*)((char*)this + 0xe)) STGuildAgitDBInfo;
}

Packet_Notify_New_Group_Mail::Packet_Notify_New_Group_Mail()
    : PacketHeader(0x515, 0x4be)
{
    memset((char*)this + 0xe, 0, 0x4b0);
}

Packet_DBMW_Reponse_BlackList::Packet_DBMW_Reponse_BlackList()
    : PacketHeader(0x5e1, 0x19e)
{
    *(int*)((char*)this + 0xa) = 0;
    for (int i = 9; i != -1; i--)
        new ((STBlackUserDBType*)((char*)this + 0xe + i * 0x28)) STBlackUserDBType;
    memset((char*)this + 0xe, 0, 0x190);
}

Packet_Guild_Load_Guild_Cargo::Packet_Guild_Load_Guild_Cargo()
    : PacketHeader(0x708, 0x18ea)
{
    new ((STGuildCargoDBInfo*)((char*)this + 0xe)) STGuildCargoDBInfo;
    memset((char*)this + 0xe, 0, 0x18dc);
}

Packet_Response_IPCounterList::Packet_Response_IPCounterList()
    : PacketHeader(0x1039, 0xbc4)
{
    *(char*)((char*)this + 0xa) = 0;
    *(char*)((char*)this + 0xb) = 0;
}

Packet_DBMW_Reply_Guild_Create::Packet_DBMW_Reply_Guild_Create()
    : PacketHeader(0x440, 0x2d)
{
    memset((char*)this + 0x16, 0, 0x17);
}

Packet_Reply_Today_Guild_Member::Packet_Reply_Today_Guild_Member()
    : PacketHeader(0x1bc0, 0x35)
{
    *(int*)((char*)this + 0xa) = 0;
    memset((char*)this + 0xe, 0, 0x27);
}

Packet_Response_D_IPCounterList::Packet_Response_D_IPCounterList()
    : PacketHeader(0x103a, 0xe1c)
{
    *(char*)((char*)this + 0xa) = 0;
    *(char*)((char*)this + 0xb) = 0;
}

Packet_Result_Ontime_Event_Item::Packet_Result_Ontime_Event_Item()
    : PacketHeader(0x2346, 0x14)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(unsigned short*)((char*)this + 0x12) = 0;
}

Packet_DB_Create_Guild_Agit_Reply::Packet_DB_Create_Guild_Agit_Reply()
    : PacketHeader(0x6dd, 0x16)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(int*)((char*)this + 0x12) = 0;
}

Packet_DB_Delete_Guild_Agit_Reply::Packet_DB_Delete_Guild_Agit_Reply()
    : PacketHeader(0x6df, 0x16)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(int*)((char*)this + 0x12) = 0;
}

Packet_DBMW_Query_Buddy_Info_Reply::Packet_DBMW_Query_Buddy_Info_Reply()
    : PacketHeader(0x676, 0x4ef)
{
    memset((char*)this + 0xf, 0, 0x4e0);
}

Packet_DB_Reply_Query_Guild_Member::Packet_DB_Reply_Query_Guild_Member()
    : PacketHeader(0x403, 0x2d)
{
    *(char*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xb) = 0;
    *(int*)((char*)this + 0xf) = 0;
    new ((STGuildMemerDBInfo*)((char*)this + 0x13)) STGuildMemerDBInfo;
}

Packet_DB_Upgrade_Guild_Agit_Reply::Packet_DB_Upgrade_Guild_Agit_Reply()
    : PacketHeader(0x6e4, 0x16)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(int*)((char*)this + 0x12) = 0;
}

Packet_DB_Load_Reply_Guild_Board_Open::Packet_DB_Load_Reply_Guild_Board_Open()
    : PacketHeader(0x232c, 0x688)
{
    for (int i = 8; i != -1; i--)
        new ((STGuildBoardDBInfo*)((char*)this + 0x16 + i * 0xa5)) STGuildBoardDBInfo;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(char*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0xd) = 0;
    *(int*)((char*)this + 0x11) = 0;
    *(char*)((char*)this + 0x15) = 0;
    memset((char*)this + 0x16, 0, 0x672);
}

Packet_DB_Reply_Guild_Master_Delegate::Packet_DB_Reply_Guild_Master_Delegate()
    : PacketHeader(0x43c, 0x38)
{
    memset((char*)this + 0x16, 0, 0x1e);
}

Packet_DB_Response_Approve_Join_Guild::Packet_DB_Response_Approve_Join_Guild()
    : PacketHeader(0x1bc5, 0x56)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(int*)((char*)this + 0x12) = 0;
    *(int*)((char*)this + 0x16) = 0;
    memset((char*)this + 0x1a, 0, 0x3c);
}

Packet_Guild_Load_Guild_Cargo_History::Packet_Guild_Load_Guild_Cargo_History()
    : PacketHeader(0x709, 0x972)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    for (int i = 0x30; i != -1; i--)
        new ((STGuildCargoLog*)((char*)this + 0x12 + i * 0x30)) STGuildCargoLog;
    memset((char*)this + 0x12, 0, 0x960);
}

Packet_DB_Load_Reply_Guild_Board_Write::Packet_DB_Load_Reply_Guild_Board_Write()
    : PacketHeader(0x2330, 0xb9)
{
    new ((STGuildBoardDBInfo*)((char*)this + 0x14)) STGuildBoardDBInfo;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
}

Packet_Result_Loading_Periodic_Message::Packet_Result_Loading_Periodic_Message()
    : PacketHeader(0x1f49, 0x212)
{
    memset((char*)this + 0xa, 0, 0x200);
    *(int*)((char*)this + 0x20a) = 0;
    *(int*)((char*)this + 0x20e) = 0;
}

Packet_DB_Load_Reply_Guild_Board_Delete::Packet_DB_Load_Reply_Guild_Board_Delete()
    : PacketHeader(0x2334, 0x18)
{
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
}

Packet_DB_Load_Reply_Web_Guild_Board_Write::Packet_DB_Load_Reply_Web_Guild_Board_Write()
    : PacketHeader(0x233f, 0xb9)
{
    new ((STGuildBoardDBInfo*)((char*)this + 0x14)) STGuildBoardDBInfo;
    *(unsigned short*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
}

Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade::
    Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade()
    : PacketHeader(0x42b, 0x36)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(char*)((char*)this + 0x30) = 0xff;
    *(char*)((char*)this + 0x31) = 0;
    *(int*)((char*)this + 0x32) = 0;
    memset((char*)this + 0x12, 0, 0x1e);
}

Packet_DB_Reply_Query_Member::Packet_DB_Reply_Query_Member()
    : PacketHeader(0x4b3, 0x1c5)
{
    m_flag = 0;
    m_fieldB = 0;
}

Packet_DB_Reply_Unconn_Guild_Member::Packet_DB_Reply_Unconn_Guild_Member()
    : PacketHeader(0x427, 0x53)
{
    m_fieldA = 0;
    m_fieldE = 0;
}

Packet_DB_Reply_Guild_All_Members::Packet_DB_Reply_Guild_All_Members()
    : PacketHeader(0x426, 0x17b1)
{
    m_fieldA = 0;
    m_fieldE = 0;
    m_flag = 0;
    m_count = 0;
}

int CDBManager::FindCharProxyInArray(ST_MemberProxy* proxies, unsigned int characNo,
                                     unsigned char maxIdx)
{
    for (int i = 0; i < maxIdx; i++)
    {
        if (proxies[i].m_no != 0 && (unsigned int)proxies[i].m_no == characNo)
            return i;
    }
    return -1;
}

char CDBManager::QueryMember(unsigned int characNo, Packet_DB_Reply_Query_Member& reply)
{
    CDBHandle* h = m_handles[2];    // game db
    char* mbase = (char*)&reply + 0x17;  // m_master（STMemberDBInfo，紧打包）
    if (!h->set_query(
            0x4e29,
            "seLect 1 as type, master_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) as charac from charac_members where charac_no = %d union all select 2, charac_no, exp, unix_timestamp(create_time), unix_timestamp(delete_time) from charac_members where master_no = %d",
            characNo, characNo))
    {
        CMyFileLog log("QueryMember", 0x52d);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildMember() select 1 as type, master_no as charac from charac_members where charac_no = %d union all select 2, charac_no from charac_members where master_no = %d\n",
            characNo, characNo);
        reply.m_flag = 0;
        return 0;
    }
    if (!h->exec(0x4e29))
    {
        reply.m_flag = 0;
        CMyFileLog log("QueryMember", 0x537);
        log("./log/DBQueryErr",
            "CDBManager::QueryMember() db->exec(select_from_charac_members_for_lower_member_query, Query ID : %d\n",
            characNo);
        return 0;
    }
    char str[0x40] = {0};
    str[0] = '(';
    int n = h->get_n_rows();
    if (n > 0xb)
        n = 0xb;
    if (n == 0)
    {
        *(char*)(mbase + 0x27) = 0;
        reply.m_flag = 1;
        return 1;
    }
    if (!h->fetch())
    {
        reply.m_flag = 0;
        CMyFileLog log("QueryMember", 0x54f);
        log("./log/DBQueryErr",
            "CDBManager::QueryMember() First db->fetch(), Lower, Query ID : %d, n_data : %d\n",
            characNo, n);
        return 0;
    }
    int type = 0;
    if (!h->get_int(0, type))
    {
        reply.m_flag = 3;
        return 0;
    }
    ST_MemberProxy* proxies = (ST_MemberProxy*)(mbase + 0x28);
    unsigned int maxExp = 0;
    unsigned int maxIdx = 0;
    if (type == 1)
    {
        unsigned int masterNo = 0;
        if (!h->get_uint(1, masterNo))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (masterNo != 0)
        {
            *(int*)(mbase + 0) = masterNo;
            if (!h->get_uint(2, *(unsigned int*)(mbase + 0x23)))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
        unsigned int t = 0;
        if (!h->get_uint(3, t))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (t > maxExp)
            maxExp = t;
        if (!h->get_uint(4, t))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (t > maxIdx)
            maxIdx = t;
        *(char*)(mbase + 0x27) = (char)(n - 1);
        sprintf(str, "%s%d,", str, *(int*)(mbase + 0));
        for (int i = 1; i < n; i++)
        {
            if (!h->fetch())
            {
                reply.m_flag = 0;
                CMyFileLog log("QueryMember", 0x58e);
                log("./log/DBQueryErr",
                    "CDBManager::QueryMember() 1 == type and find lower db->fetch() loop : %d, Lower, Query ID : %d\n",
                    i, characNo);
                return 0;
            }
            if (!h->get_uint(1, (unsigned int&)proxies[i - 1].m_no))
            {
                reply.m_flag = 3;
                return 0;
            }
            sprintf(str, "%s%d,", str, proxies[i - 1].m_no);
            if (!h->get_uint(2, (unsigned int&)proxies[i - 1].m_field23))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
    }
    else if (type == 2)
    {
        if (!h->get_uint(1, (unsigned int&)proxies[0].m_no))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (!h->get_uint(2, (unsigned int&)proxies[0].m_field23))
        {
            reply.m_flag = 3;
            return 0;
        }
        *(char*)(mbase + 0x27) = (char)n;
        sprintf(str, "%s%d,", str, proxies[0].m_no);
        for (int i = 1; i < n; i++)
        {
            if (!h->fetch())
            {
                reply.m_flag = 0;
                CMyFileLog log("QueryMember", 0x5cb);
                log("./log/DBQueryErr",
                    "CDBManager::QueryMember() 1 != type and find lower db->fetch() loop, Lower Query ID : %d\n",
                    i, characNo);
                return 0;
            }
            if (!h->get_uint(1, (unsigned int&)proxies[i].m_no))
            {
                reply.m_flag = 3;
                return 0;
            }
            sprintf(str, "%s%d,", str, proxies[i].m_no);
            if (!h->get_uint(2, (unsigned int&)proxies[i - 1].m_field23))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
    }
    else
    {
        reply.m_flag = 0;
        CMyFileLog log("QueryMember", 0x5e3);
        log("./log/DBQueryErr",
            "CDBManager::QueryMember() 1 != type and 2 != type, type(%d)\n", type);
        return 0;
    }
    int len = strlen(str);
    str[len - 1] = 0;
    sprintf(str, "%s)", str);
    reply.m_fieldF = (int)maxExp;
    reply.m_field13 = (int)maxIdx;
    if (!h->set_query(0x4e2b,
                      "seLect charac_no, lev, charac_name from charac_info where charac_no in %s",
                      str))
    {
        CMyFileLog log("QueryMember", 0x5f5);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildMember() select lev, charac_name from charac_info where charac_no in %s\n",
            str);
        reply.m_flag = 2;
        return 0;
    }
    if (!h->exec(0x4e2b))
    {
        reply.m_flag = 0;
        return 0;
    }
    n = h->get_n_rows();
    ST_MemberProxy* master = (ST_MemberProxy*)mbase;
    int j = 0;
    for (; j < n; j++)
    {
        if (!h->fetch())
        {
            reply.m_flag = 0;
            return 0;
        }
        int no = 0;
        if (!h->get_uint(0, (unsigned int&)no))
        {
            reply.m_flag = 3;
            return 0;
        }
        if (master->m_no == no)
        {
            if (!h->get_ubyte(1, master->m_lev))
            {
                reply.m_flag = 3;
                return 0;
            }
            if (!h->get_str(2, master->m_name, 0x1d))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
        else
        {
            int found = FindCharProxyInArray(proxies, (unsigned int)no, 0xa);
            if (found == -1)
                throw CDNFException("CDBManager::QueryMember(), Not Coresponding Database!");
            if (!h->get_ubyte(1, proxies[found].m_lev))
            {
                reply.m_flag = 3;
                return 0;
            }
            if (!h->get_str(2, proxies[found].m_name, 0x1d))
            {
                reply.m_flag = 3;
                return 0;
            }
        }
    }
    reply.m_flag = 1;
    return 1;
}

char CDBManager::QueryGuildMemberProxy(unsigned int guildId, unsigned int characNo,
                                       STGuildMemberProxy& proxy)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e54,
                      "seLect charac_no, charac_name, job, lev, grow_type, sex from guild_member where guild_id = %d and charac_no = %d and member_flag = 1",
                      guildId, characNo))
    {
        CMyFileLog log("QueryGuildMemberProxy", 0x25d);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildMemberProxy() seLect charac_no, charac_name, job, lev, grow_type, sex from guild_member where guild_id = %d and charac_no = %d and member_flag = 1",
            guildId, characNo);
        return 0;
    }
    if (!h->exec(0x4e54))
        return 0;
    if (!h->fetch())
        return 0;
    if (!h->get_uint(0, (unsigned int&)proxy.m_no))
        return 0;
    if (!h->get_str(1, proxy.m_name, 0x1d))
        return 0;
    if (!h->get_ubyte(2, proxy.m_field22))
        return 0;
    if (!h->get_short(3, (short&)proxy.m_field24))
        return 0;
    if (!h->get_ubyte(4, proxy.m_field23))
        return 0;
    if (!h->get_ubyte(5, proxy.m_field26))
        return 0;
    return 1;
}

char CDBManager::QueryGuildAllMembersProxy(unsigned int guildId,
                                           STGuildMemberProxy* proxies,
                                           unsigned short& count)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (!h->set_query(0x4e23,
                      "seLect charac_no, charac_name, job, lev, grow_type, sex, grade, unix_timestamp(last_play_time), memo from guild_member where guild_id = %d and member_flag = 1 limit %d",
                      guildId, 0x12c))
    {
        CMyFileLog log("QueryGuildAllMembersProxy", 0x1d7);
        log("./log/DBQueryErr",
            "CDBManager::QueryGuildAllMembersProxy() seLect charac_no, charac_name, job, lev, grow_type, sex, grade, unix_timestamp(last_play_time) from guild_member where guild_id = %d and member_flag = 1 limit %d",
            guildId, 0x12c);
        return 0;
    }
    if (!h->exec(0x4e23))
        return 0;
    count = (unsigned short)h->get_n_rows();
    if (count > 0x12c)
        count = 0x12c;
    for (int i = 0; i < count; i++)
    {
        if (!h->fetch())
            return 0;
        if (!h->get_uint(0, (unsigned int&)proxies[i].m_no))
            return 0;
        if (!h->get_str(1, proxies[i].m_name, 0x1d))
            return 0;
        if (!h->get_ubyte(2, proxies[i].m_field22))
            return 0;
        if (!h->get_short(3, (short&)proxies[i].m_field24))
            return 0;
        if (!h->get_ubyte(4, proxies[i].m_field23))
            return 0;
        if (!h->get_ubyte(5, proxies[i].m_field26))
            return 0;
        if (!h->get_ubyte(6, proxies[i].m_field27))
            return 0;
        if (!h->get_uint(7, (unsigned int&)proxies[i].m_field28))
            return 0;
        if (!h->get_str(8, proxies[i].m_data2c, 0x15))
            return 0;
    }
    return 1;
}

char CDBManager::GuildJoin(STGuildJoinInfo* info, unsigned int& result)
{
    result = 2;
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    if (info->m_characName[0] == 0)
    {
        result = 0x27;
        CMyFileLog log("GuildJoin", 0xe76);
        log("./log/TraceGuildErr",
            "CDBManager::GuildJoin guild(%d), server_group(%d), charac_no(%d)\n",
            info->m_guildId, info->m_serverId, info->m_characNo);
        return 0;
    }
    if (!h->set_query(0x4e60,
                      "seLect member_flag, unix_timestamp(secede_time) from guild_member where charac_no = %d and  server_id= %d",
                      info->m_characNo, info->m_serverId))
    {
        CMyFileLog log("GuildJoin", 0xe80);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin()select_secede_time_from_guild_member_for_guildjoin Exception Break\n");
        return 0;
    }
    if (!h->exec(0x4e60))
        return 0;
    if (h->fetch())
    {
        int memberFlag = 0;
        if (!h->get_uint(0, (unsigned int&)memberFlag))
            return 0;
        if (memberFlag == 1)
        {
            result = 0x27;
            return 0;
        }
        if (memberFlag == 2)
        {
            unsigned int secedeTime = 0;
            if (!h->get_uint(1, secedeTime))
                return 0;
            if (!isDayTimeOver(secedeTime, 3))
            {
                result = 0x68;
                return 0;
            }
        }
    }
    if (!h->set_query(0x4e83,
                      "seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
                      info->m_guildId))
    {
        CMyFileLog log("GuildJoin", 0xeb9);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            info->m_guildId);
        return 0;
    }
    if (!h->exec(0x4e83))
    {
        CMyFileLog log("GuildJoin", 0xebe);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() seLect count(*) from guild_member where guild_id = %d and member_flag = 1",
            info->m_guildId);
        return 0;
    }
    if (!h->fetch())
        return 0;
    int memberCount = 0;
    if (!h->get_int(0, memberCount))
        return 0;
    if (memberCount + 1 > 0x12c)
    {
        result = 0x26;
        return 0;
    }
    if (!h->set_query(0x4e61,
                      "upDate guild_member set guild_id=%d, member_flag=1, member_time= now(), grade = 0,last_visit_time = 0, secede_type = 0, secede_time = 0, member_point = 0, member_point_prev = 0, last_play_time = 0  where charac_no = %d and server_id= %d",
                      info->m_guildId, info->m_characNo, info->m_serverId))
    {
        CMyFileLog log("GuildJoin", 0xedb);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() upDate guild_member set guild_id=%d, member_flag=1 where charac_no = %d and server_id= %d",
            info->m_guildId, info->m_characNo, info->m_serverId);
        return 0;
    }
    if (!h->exec(0x4e61) || h->getAffectedRowCount() == 0)
    {
        if (!h->set_query(0x4e5e,
                          "inSert into guild_member set guild_id=%d,m_id=%s,server_id=%d,charac_no=%d,charac_name='%s',job=%d,grow_type=%d,lev=%d,born_year='%s',sex=%d,member_flag=1,member_time= now()",
                          info->m_guildId, NumberToString(info->m_id, 0),
                          info->m_serverId, info->m_characNo, info->m_characName,
                          info->m_job, info->m_growType, info->m_lev,
                          info->m_bornYear, info->m_sex))
        {
            CMyFileLog log("GuildJoin", 0xefd);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() Exception Break\n");
            return 0;
        }
        if (!h->exec(0x4e5e))
            return 0;
    }
    if (memberCount != 0)
    {
        if (!h->set_query(0x4e5f,
                          "upDate guild_info set member_count = %d where guild_id = %d",
                          memberCount + 1, info->m_guildId))
        {
            CMyFileLog log("GuildJoin", 0xf0d);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)",
                memberCount + 1, info->m_guildId, info->m_characNo);
            return 0;
        }
        if (!h->exec(0x4e5f))
        {
            CMyFileLog log("GuildJoin", 0xf12);
            log("./log/DBQueryErr",
                "CDBManager::GuildJoin() upDate guild_info set member_count = %d where guild_id = %d joined(%d)",
                memberCount + 1, info->m_guildId, info->m_characNo);
            return 0;
        }
    }
    if (!h2->set_query(0x4e65,
                       "upDate charac_info set guild_id=%d where charac_no = %d",
                       info->m_guildId, info->m_characNo))
    {
        CMyFileLog log("GuildJoin", 0xf1d);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",
            info->m_guildId, info->m_characNo);
        return 0;
    }
    if (!h2->exec(0x4e65))
    {
        CMyFileLog log("GuildJoin", 0xf24);
        log("./log/DBQueryErr",
            "CDBManager::GuildJoin() upDate charac_info set guild_id=%d where charac_no = %d",
            info->m_guildId, info->m_characNo);
        return 0;
    }
    result = 0;
    return 1;
}

char CDBManager::SaveMemberInsert(unsigned int masterNo, unsigned int characNo,
                                  unsigned char type)
{
    CDBHandle* h = m_handles[2];    // game db
    if (type == 2)
    {
        if (!h->set_query(0x4e45,
                          "upDate charac_members set master_no = %d , create_time = now() where charac_no = %d",
                          masterNo, characNo))
        {
            CMyFileLog log("SaveMemberInsert", 0x455);
            log("./log/DBQueryErr",
                "CDBManager::SaveMemberInsert() upDate charac_members set master_no = %d , create_time = now() where charac_no = %d",
                masterNo, characNo);
            return 0;
        }
        if (!h->exec(0x4e45) || h->getAffectedRowCount() == 0)
        {
            if (!h->set_query(0x4e46,
                              "inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()",
                              characNo, masterNo))
            {
                CMyFileLog log("SaveMemberInsert", 0x466);
                log("./log/DBQueryErr",
                    "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=%d, exp = 0, create_time = now()",
                    characNo, masterNo);
                return 0;
            }
            if (!h->exec(0x4e46))
                return 0;
        }
        if (!h->set_query(0x4e4b,
                          "upDate charac_members set charac_no = %d, create_time = now() where charac_no = %d",
                          masterNo, masterNo))
        {
            CMyFileLog log("SaveMemberInsert", 0x47b);
            log("./log/DBQueryErr",
                "CDBManager::SaveMemberInsert() upDate charac_members set charac_no = %d where charac_no = %d",
                masterNo, masterNo);
            return 0;
        }
        if (!h->exec(0x4e4b) || h->getAffectedRowCount() == 0)
        {
            if (!h->set_query(0x4e47,
                              "inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time = now()",
                              masterNo))
            {
                CMyFileLog log("SaveMemberInsert", 0x488);
                log("./log/DBQueryErr",
                    "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=0, exp = 0",
                    masterNo);
                return 0;
            }
            if (!h->exec(0x4e47))
                return 0;
        }
        return 1;
    }
    if (type != 1)
        return 1;
    if (!h->set_query(0x4e48,
                      "upDate charac_members set master_no = %d, create_time = now() where charac_no = %d",
                      masterNo, characNo))
    {
        CMyFileLog log("SaveMemberInsert", 0x49d);
        log("./log/DBQueryErr",
            "CDBManager::SaveMemberInsert() upDate charac_members set master_no = %d where charac_no = %d",
            masterNo, characNo);
        return 0;
    }
    if (!h->exec(0x4e48) || h->getAffectedRowCount() == 0)
    {
        if (!h->set_query(0x4e49,
                          "inSert into charac_members set charac_no=%d, master_no=%d, exp = 0",
                          characNo, masterNo))
        {
            CMyFileLog log("SaveMemberInsert", 0x4ae);
            log("./log/DBQueryErr",
                "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=%d, exp = 0",
                characNo, masterNo);
            return 0;
        }
        if (!h->exec(0x4e49))
            return 0;
    }
    if (!h->set_query(0x4e4a,
                      "upDate charac_members set create_time = now() where charac_no = %d",
                      masterNo))
    {
        CMyFileLog log("SaveMemberInsert", 0x4c2);
        log("./log/DBQueryErr",
            "CDBManager::SaveMemberInsert() upDate charac_members set create_time = now() where charac_no = %d",
            masterNo);
        return 0;
    }
    if (!h->exec(0x4e4a) || h->getAffectedRowCount() == 0)
    {
        if (!h->set_query(0x4e46,
                          "inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time=now()",
                          masterNo))
        {
            CMyFileLog log("SaveMemberInsert", 0x4cf);
            log("./log/DBQueryErr",
                "CDBManager::SaveMemberInsert() inSert into charac_members set charac_no=%d, master_no=0, exp = 0, create_time=now()",
                masterNo);
            return 0;
        }
        if (!h->exec(0x4e46))
            return 0;
    }
    return 1;
}

char CDBManager::SaveMemberDelete(unsigned int characNo, unsigned int masterNo,
                                  unsigned char type)
{
    CDBHandle* h = m_handles[2];    // game db
    if (type == 1)
    {
        h->set_query(0x4e4e,
                     "upDate charac_members set master_no = 0, exp = 0 where charac_no=%d",
                     masterNo);
        if (!h->exec(0x4e4e))
            return 0;
        h->set_query(0x4e4c,
                     "upDate charac_members set  delete_time = now() where charac_no=%d",
                     characNo);
        h->exec(0x4e4c);
        return 1;
    }
    if (type == 2)
    {
        h->set_query(0x4e4f,
                     "upDate charac_members set  master_no = 0 , exp = 0, delete_time = now() where charac_no=%d",
                     masterNo);
        if (!h->exec(0x4e4f))
            return 0;
    }
    return 1;
}

char CDBManager::OnGuildJoinByListApprove(unsigned int guildId,
                                          char serverId,
                                          unsigned int m_id,
                                          unsigned int characNo,
                                          STGuildJoinInfo& joinInfo,
                                          unsigned int& result)
{
    CDBHandle* h = m_handles[8];    // guild db
    CDBHandle* h2 = m_handles[2];   // game db
    memset(&joinInfo, 0, 0x3c);
    joinInfo.m_serverId = serverId;
    joinInfo.m_guildId = guildId;
    joinInfo.m_fieldC = m_id;
    joinInfo.m_characNo = characNo;
    if (!h->set_query(0x4f0a,
                      "seLect m_id,born_year from guild_join_list where guild_id=%d and charac_no=%d",
                      guildId, characNo))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x23d1);
        log("./log/DBQueryErr", "set_query(seLect_from_guild_join_list) Query Error");
        return 0;
    }
    if (!h->exec(0x4f0a) || !h->fetch())
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x23d7);
        log("./log/DBQueryErr", "exec(seLect_from_guild_join_list) or fetch() Query Error");
        return 0;
    }
    if (!h->get_uint(0, joinInfo.m_id))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x23dd);
        log("./log/DBQueryErr", "get_uint(0, join_info.m_uAccId) Query Error");
        return 0;
    }
    if (!h->get_str(1, joinInfo.m_bornYear, 3))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x23e3);
        log("./log/DBQueryErr",
            "get_str(1, join_info.m_bornYear, sizeof(join_info.m_bornYear)) Query Error");
        return 0;
    }
    if (!h2->set_query(0x4f0b,
                       "seLect charac_name,job,grow_type,lev,sex from charac_info where charac_no=%d",
                       characNo))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x23ec);
        log("./log/DBQueryErr",
            "set_query(seLect_from_charac_info_with_guild_join_list Query Error");
        return 0;
    }
    if (!h2->exec(0x4f0b) || !h2->fetch())
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x23f2);
        log("./log/DBQueryErr",
            "exec(seLect_from_charac_info_with_guild_join_list) or fetch() Query Error");
        return 0;
    }
    if (!h2->get_str(0, joinInfo.m_characName, 0x1d))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x240a);
        log("./log/DBQueryErr", "get_str(0, join_info.m_szJoinCharName) Query Error");
        return 0;
    }
    if (!h2->get_byte(1, (char&)joinInfo.m_lev))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x2411);
        log("./log/DBQueryErr", "get_byte(1, join_info.m_JoinJob) Query Error");
        return 0;
    }
    if (!h2->get_byte(2, (char&)joinInfo.m_growType))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x2417);
        log("./log/DBQueryErr", "get_byte(2, join_info.m_JoinGrowType) Query Error");
        return 0;
    }
    if (!h2->get_byte(3, (char&)joinInfo.m_job))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x241d);
        log("./log/DBQueryErr", "get_byte(3, join_info.m_JoinLevel) Query Error");
        return 0;
    }
    if (!h2->get_byte(4, (char&)joinInfo.m_sex))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x2423);
        log("./log/DBQueryErr", "get_byte(4, join_info.m_JoinSex) Query Error");
        return 0;
    }
    if (!GuildJoin(&joinInfo, result))
        return 0;
    if (!h->set_query(0x4f0c,
                      "deLete from guild_join_list where guild_id=%d and charac_no=%d",
                      guildId, characNo))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x242f);
        log("./log/DBQueryErr", "set_query(deLete_from_guild_join_list) Query Error");
        return 0;
    }
    if (!h->exec(0x4f0c))
    {
        CMyFileLog log("OnGuildJoinByListApprove", 0x2435);
        log("./log/DBQueryErr", "guild_db->exec(deLete_from_guild_join_list) Query Error");
        return 0;
    }
    return 1;
}

char CDBManager::QueryPartyStatisticCreate(
    Packet_DBMW_Dungeon_Statistic_Party* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = packet->m_count;
    CMyFileLog log("QueryPartyStatisticCreate", 0x15b3);
    log("./log/statistic",
        "Packet_DBMW_Dungeon_Statistic_Party : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xbc\xf6\xbd\xc5\n",
        count);
    char buf[0x200];
    memset(buf, 0, 0x200);
    std::string sql;
    for (int i = 0; i < count; i++)
    {
#define PM(i) ((STPartyMemberStat*)((char*)packet + 0x10 + (i) * 0x3c))
        if (!sql.empty())
            sprintf(buf,
                    ",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                    PM(i)->m_fieldE, PM(i)->m_field10, PM(i)->m_field14,
                    PM(i)->m_field15, PM(i)->m_field16, PM(i)->m_field17,
                    PM(i)->m_field18, PM(i)->m_field19, PM(i)->m_field1A,
                    PM(i)->m_field1E, PM(i)->m_field22, PM(i)->m_field26,
                    PM(i)->m_field2A, PM(i)->m_field2E, PM(i)->m_field32,
                    PM(i)->m_field36, PM(i)->m_field3A, PM(i)->m_field3E,
                    PM(i)->m_field42, PM(i)->m_field46);
        else
            sprintf(buf,
                    "(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                    PM(i)->m_fieldE, PM(i)->m_field10, PM(i)->m_field14,
                    PM(i)->m_field15, PM(i)->m_field16, PM(i)->m_field17,
                    PM(i)->m_field18, PM(i)->m_field19, PM(i)->m_field1A,
                    PM(i)->m_field1E, PM(i)->m_field22, PM(i)->m_field26,
                    PM(i)->m_field2A, PM(i)->m_field2E, PM(i)->m_field32,
                    PM(i)->m_field36, PM(i)->m_field3A, PM(i)->m_field3E,
                    PM(i)->m_field42, PM(i)->m_field46);
#undef PM
        if (sql.length() + 0x800 > 0x6000)
        {
            h->set_query(0x4e99,
                         "inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s",
                         sql.c_str());
            if (!h->exec(0x4e99))
            {
                CMyFileLog log2("QueryPartyStatisticCreate", 0x15e1);
                log2("./log/statistic",
                     "\nQueryPartyJobStatisticCreate db error!!\n");
                return 0;
            }
            sql.clear();
            i--;
        }
        else
        {
            sql += buf;
        }
    }
    h->set_query(0x4e97,
                 "inSert into log_dungeon_party(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_add) values%s",
                 sql.c_str());
    if (!h->exec(0x4e97))
    {
        CMyFileLog log2("QueryPartyStatisticCreate", 0x15f0);
        log2("./log/statistic", "\nQueryPartyStatisticCreate db error!!\n");
        return 0;
    }
    return 1;
}

char CDBManager::QueryPartyJobStatisticCreate(
    Packet_DBMW_Dungeon_Statistic_Party_Job* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = packet->m_count;
    CMyFileLog log("QueryPartyJobStatisticCreate", 0x1645);
    log("./log/statistic",
        "Packet_DBMW_Dungeon_Statistic_Party_Job : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xbc\xf6\xbd\xc5\n",
        count);
    char buf[0x200];
    memset(buf, 0, 0x200);
    std::string sql;
    for (int i = 0; i < count; i++)
    {
#define PM(i) ((STPartyJobMemberStat*)((char*)packet + 0x10 + (i) * 0x19))
        if (!sql.empty())
            sprintf(buf,
                    ",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                    PM(i)->m_fieldE, PM(i)->m_field10, PM(i)->m_field14,
                    PM(i)->m_field15, PM(i)->m_field16, PM(i)->m_field17,
                    PM(i)->m_field18, PM(i)->m_field19, PM(i)->m_field1A,
                    PM(i)->m_field1E, PM(i)->m_field1F, PM(i)->m_field23);
        else
            sprintf(buf,
                    "(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                    PM(i)->m_fieldE, PM(i)->m_field10, PM(i)->m_field14,
                    PM(i)->m_field15, PM(i)->m_field16, PM(i)->m_field17,
                    PM(i)->m_field18, PM(i)->m_field19, PM(i)->m_field1A,
                    PM(i)->m_field1E, PM(i)->m_field1F, PM(i)->m_field23);
#undef PM
        if (sql.length() + 0x800 > 0x6000)
        {
            h->set_query(0x4e99,
                         "inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s",
                         sql.c_str());
            if (!h->exec(0x4e99))
            {
                CMyFileLog log2("QueryPartyJobStatisticCreate", 0x166a);
                log2("./log/statistic",
                     "\nQueryPartyJobStatisticCreate db error!!\n");
                return 0;
            }
            sql.clear();
            i--;
        }
        else
        {
            sql += buf;
        }
    }
    h->set_query(0x4e99,
                 "inSert into log_dungeon_party_job(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, abuse_party, balkun_party, success, party_user_count, charac_job, charac_grow, job_count, rank) values%s",
                 sql.c_str());
    if (!h->exec(0x4e99))
    {
        CMyFileLog log2("QueryPartyJobStatisticCreate", 0x1678);
        log2("./log/statistic", "\nQueryPartyJobStatisticCreate db error!!\n");
        return 0;
    }
    return 1;
}

char CDBManager::QueryPartyCharacStatisticCreate(
    Packet_DBMW_Dungeon_Statistic_Party_Charac* packet)
{
    time_t now = time(0);
    CDBHandle* h = m_handles[4];    // log db
    if (!h)
        return 0;
    int count = packet->m_count;
    CMyFileLog log("QueryPartyCharacStatisticCreate", 0x16ce);
    log("./log/statistic",
        "Packet_DBMW_Dungeon_Statistic_Party_Charac : (%d) \xb0\xb3 \xc6\xd0\xc5\xb6 \xbc\xf6\xbd\xc5\n",
        count);
    char buf[0x200];
    memset(buf, 0, 0x200);
    std::string sql;
    for (int i = 0; i < count; i++)
    {
#define PM(i) ((STPartyCharacMemberStat*)((char*)packet + 0x10 + (i) * 0x43))
        if (!sql.empty())
            sprintf(buf,
                    ",(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                    PM(i)->m_fieldE, PM(i)->m_field10, PM(i)->m_field14,
                    PM(i)->m_field15, PM(i)->m_field16, PM(i)->m_field17,
                    PM(i)->m_field1B, PM(i)->m_field1D, PM(i)->m_field21,
                    PM(i)->m_field25, PM(i)->m_field29, PM(i)->m_field2D,
                    PM(i)->m_field31, PM(i)->m_field35, PM(i)->m_field39,
                    PM(i)->m_field49, PM(i)->m_field45, PM(i)->m_field41,
                    PM(i)->m_field3D, PM(i)->m_field1C, PM(i)->m_field4D);
        else
            sprintf(buf,
                    "(now(),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d)",
                    PM(i)->m_fieldE, PM(i)->m_field10, PM(i)->m_field14,
                    PM(i)->m_field15, PM(i)->m_field16, PM(i)->m_field17,
                    PM(i)->m_field1B, PM(i)->m_field1D, PM(i)->m_field21,
                    PM(i)->m_field25, PM(i)->m_field29, PM(i)->m_field2D,
                    PM(i)->m_field31, PM(i)->m_field35, PM(i)->m_field39,
                    PM(i)->m_field49, PM(i)->m_field45, PM(i)->m_field41,
                    PM(i)->m_field3D, PM(i)->m_field1C, PM(i)->m_field4D);
#undef PM
        if (sql.length() + 0x800 > 0x6000)
        {
            h->set_query(0x4e9b,
                         "inSert into log_dungeon_charac(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, success, charac_job, charac_grow , clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_avg, party_user_count, rank) values%s",
                         sql.c_str());
            if (!h->exec(0x4e9b))
            {
                CMyFileLog log2("QueryPartyCharacStatisticCreate", 0x16ff);
                log2("./log/statistic",
                     "\nQueryPartyCharacStatisticCreate db error!!\n");
                return 0;
            }
            sql.clear();
            i--;
        }
        else
        {
            sql += buf;
        }
    }
    h->set_query(0x4e9b,
                 "inSert into log_dungeon_charac(last_time, channel_no, dungeon_index, dungeon_diff, dungeon_standard_level, success, charac_job, charac_grow , clear_time, die_count, hp_consume, mp_consume, hit_count, hit_per_avg_damage, hp_recovery, mp_recovery, update_count, level, fatigue_consume, exp_avg, party_user_count, rank) values%s",
                 sql.c_str());
    if (!h->exec(0x4e9b))
    {
        CMyFileLog log2("QueryPartyCharacStatisticCreate", 0x170c);
        log2("./log/statistic", "\nQueryPartyCharacStatisticCreate db error!!\n");
        return 0;
    }
    return 1;
}

char CDBManager::SaveGuildInfo(unsigned char serverGroup, unsigned int guildId,
                               STGuildDBInfoOnly& info)
{
    CDBHandle* h = m_handles[8];    // guild db
    if (info.m_guildName[0] == 0)
    {
        CMyFileLog log("SaveGuildInfo", 0x2e2);
        log("./log/TraceGuildErr",
            "CDBManager::SaveGuildInfo server_group(%d), guild_id(%d) GuildName NULL\n",
            serverGroup, guildId);
    }
    if (!h->set_query(0x4e25,
                      "upDate guild_info set lev=%d, ability=%d, guild_point=%d, guild_exp = %d, guild_name = '%s', power_side=%d, power_war_point=%d, guild_agit_flag=%d, power_join_count=%d, guild_fund = %d where guild_id = %d",
                      info.m_lev, info.m_ability, info.m_guildPoint,
                      info.m_guildExp, info.m_guildName, info.m_powerSide,
                      info.m_powerWarPoint, info.m_guildAgitFlag,
                      info.m_powerJoinCount, info.m_guildFund, guildId))
        return 0;
    if (!h->exec(0x4e25))
        return 0;
    return 1;
}

WongWork::CGMAccounts::CGMAccounts() {}
WongWork::CGMAccounts::~CGMAccounts() {}
bool WongWork::CGMAccounts::stGMInfo_t::operator==(const stGMInfo_t& other) const
{
    return m_field0 == other.m_field0;
}
int WongWork::CGMAccounts::loadGMAccounts(char const* path) { return 1; }
unsigned int WongWork::CGMAccounts::isGM(unsigned int id)
{
    stGMInfo_t key = {};
    key.m_field1 = 3;
    key.m_field0 = (int)id;
    std::list<stGMInfo_t>::iterator it =
        std::find(m_list.begin(), m_list.end(), key);
    return it != m_list.end();
}
int WongWork::CGMAccounts::appendGM(unsigned int id, unsigned int flag)
{
    return 0;
}
int WongWork::CGMAccounts::removeGM(unsigned int id, unsigned int flag)
{
    return 0;
}
void WongWork::CGMAccounts::clearGmList() { m_list.clear(); }
void WongWork::CGMAccounts::LoadGmList(unsigned int idx, int flag)
{
    stGMInfo_t info;
    info.m_field0 = (int)idx;
    info.m_field1 = flag;
    m_list.push_back(info);
}
void WongWork::CGMAccounts::AppendGM_Sys(unsigned int id, char flag)
{
    stGMInfo_t info = {};
    info.m_field0 = (int)id;
    info.m_field1 = (int)flag;
    m_list.push_back(info);
    char* mid = NumberToString(id, 0);
    CMyFileLog log("AppendGM_Sys", 0xcd);
    log("./log/Init", "GM List Add mid:%s", mid);
}

CDBManager::CDBManager()
{
    m_app = 0;
    for (int i = 0; i <= 0x10; i++)
        m_handles[i] = 0;
}


CDBHandle* CDBManager::GetDBHandle(ENUM_DB_HANDLE_IDX idx)
{
    return m_handles[idx];
}

CDBManager::~CDBManager()
{
    Close();
    for (int i = 0; i <= 0x10; i++)
    {
        if (m_handles[i])
        {
            delete m_handles[i];
            m_handles[i] = 0;
        }
    }
}

char CDBManager::Open(ENUM_DB_HANDLE_IDX idx, const char* host, unsigned int port,
                      const char* user, const char* pass, const char* db)
{
    return ((CMySql*)m_handles[idx])->open(host, port, user, pass, db);
}

void CDBManager::Close()
{
    for (int i = 0; i <= 0x10; i++)
    {
        if (m_handles[i])
            m_handles[i]->close();
    }
}


char CDBManager::UpdateQueryCount(unsigned int idx, int count, int time)
{
    CDBHandle* h = m_handles[4];
    if (time <= 0)
        return 0;
    if (!h->set_query(0x4e2c,
                      "inSert into log_query_stat(occ_time,q_id,total,response_time) values(now(),%d,%d,%d)",
                      idx, count, time))
        return 0;
    if (!h->exec(0x4e2c))
        return 0;
    return 1;
}

char CDBManager::SelectTest()
{
    int i = 0;
    int j = 0;
    CDBHandle* h = m_handles[2];
    if (!h->set_query(0x4e21,
                      "seLect m_id, charac_no from charac_info where m_id = 1001024"))
    {
        puts("select login_status, m_channel_no from login_account");
        return 0;
    }
    if (!h->exec(0x4e21))
        return 0;
    if (!h->fetch())
        return 0;
    if (!h->get_int(0, j))
        return 0;
    if (!h->get_int(1, i))
        return 0;
    return 1;
}

void CDBManager::Init(ENUM_DB_KIND kind, CApplication* app)
{
    m_app = app;
    if (kind == 1)
    {
        for (int i = 0; i <= 0x10; i++)
        {
            m_handles[i] = new (std::nothrow) CMySql;
            if (!m_handles[i])
                throw CDNFException("CDBManager::Init() new CMySql fail!");
            if (!m_handles[i]->init())
                throw CDNFException("CDBManager::Init() mysql init fail!");
        }
    }
}

// ============================================================
// ============================================================
// CPacketTranslater（静态 handler）
// ============================================================


void CPacketTranslater::OnSecretShopStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnSecretShopStatistic(
            (Packet_Secret_Shop_Statistic*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSecretShopStatistic", 0xeed);
        log("./log/Except",
            "CPacketTranslater::OnSecretShopStatistic() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSecretShopStatistic", 0xef2);
        log("./log/Except",
            "CPacketTranslater::OnSecretShopStatistic() Exception Break\n");
    }
}

void CPacketTranslater::onLoadLimitNpcBuyItemInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    LimitNpcBuyItemResultInfo result;
    try
    {
        if (!m_pclApp->m_dbManager.loadLimitNpcBuyItemInfo(
                (LimitNpcBuyItemRequestInfo*)header, &result))
        {
            CMyFileLog log("onLoadLimitNpcBuyItemInfo", 0x132e);
            log("./log/NpcBuyLimitItem",
                "CPacketTranslater::onLoadLimitNpcBuyItemInfo data load fail\n");
            return;
        }
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&result, 0x176);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onLoadLimitNpcBuyItemInfo", 0x1338);
        log("./log/Except",
            "CPacketTranslater::onLoadLimitNpcBuyItemInfo Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onLoadLimitNpcBuyItemInfo", 0x133d);
        log("./log/Except",
            "CPacketTranslater::onLoadLimitNpcBuyItemInfo Exception Break\n");
    }
}

void CPacketTranslater::onUpdateLimitNpcBuyItemInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.updateLimitNpcBuyItemInfo(
                (LimitNpcBuyItemUpdate*)header))
        {
            CMyFileLog log("onUpdateLimitNpcBuyItemInfo", 0x134c);
            log("./log/NpcBuyLimitItem",
                "CPacketTranslater::onUpdateLimitNpcBuyItemInfo data update fail\n");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onUpdateLimitNpcBuyItemInfo", 0x1352);
        log("./log/Except",
            "CPacketTranslater::onUpdateLimitNpcBuyItemInfo Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onUpdateLimitNpcBuyItemInfo", 0x1357);
        log("./log/Except",
            "CPacketTranslater::onUpdateLimitNpcBuyItemInfo Exception Break\n");
    }
}

void CPacketTranslater::OnChangeUnconnectedGuildMemberGrade(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade pkt;
        if (*(int*)(h + 0xb) != 0)
        {
            memcpy((char*)&pkt + 0x12, h + 0x14, 0x1d);
            *(int*)((char*)&pkt + 0xa) = *(int*)(h + 0xb);
            *(char*)((char*)&pkt + 0x30) = *(char*)(h + 0x32);
            *(int*)((char*)&pkt + 0xe) = *(int*)(h + 0xf);
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        unsigned int result = 0;
        m_pclApp->m_dbManager.QueryGuildMemberGradeByName(
            *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb), h + 0x14,
            *(unsigned char*)((char*)&pkt + 0x31),
            *(unsigned int*)((char*)&pkt + 0x32), result);
        if (!result)
        {
            *(char*)((char*)&pkt + 0x30) = 0xff;
            gs->SendToServer((char*)&pkt, pkt.packetSize);
            return;
        }
        if (*(unsigned char*)((char*)&pkt + 0x31) == 1)
        {
            gs->SendToServer((char*)&pkt, pkt.packetSize);
            return;
        }
        if (*(unsigned char*)((char*)&pkt + 0x31) == 2)
            goto sendlog;
        if (*(unsigned char*)(h + 0x32) != 2 ||
            *(unsigned char*)(h + 0x13) == 1)
        {
            if (!m_pclApp->m_dbManager.ChangeGuildMemberGrade(
                    *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                    *(unsigned char*)(h + 0x32), h + 0x14))
                *(char*)((char*)&pkt + 0x30) = 0xff;
        }
        else
        {
            *(char*)((char*)&pkt + 0x30) = 0xfe;
            gs->SendToServer((char*)&pkt, pkt.packetSize);
            return;
        }
    sendlog:
        gs->SendToServer((char*)&pkt, pkt.packetSize);
        CMyFileLog log("OnChangeUnconnectedGuildMemberGrade", 0x495);
        log("./log/GuildModify",
            "::OnChangeUnconnectedGuildMemberGrade GRADE_CHANGE Guild(%d) UnConnected Name(%s) Grade(%d) Prev(%d)",
            *(unsigned int*)(h + 0xb), h + 0x14,
            *(unsigned char*)(h + 0x32),
            *(unsigned char*)((char*)&pkt + 0x31));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnChangeUnconnectedGuildMemberGrade", 0x49a);
        log("./log/Except.log",
            "CPacketTranslater::OnChangeUnconnectedGuildMemberGrade() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnChangeUnconnectedGuildMemberGrade", 0x49f);
        log("./log/Except.log",
            "CPacketTranslater::OnChangeUnconnectedGuildMemberGrade() Exception Break\n");
    }
}

void CPacketTranslater::OnChangeGuildNotifyMessage(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.ChangeGuildNotifyMessage(
            *(int*)(h + 0xa), *(unsigned int*)(h + 0xe), h + 0xf);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnChangeGuildNotifyMessage", 0x4b9);
        log("./log/Except.log",
            "CPacketTranslater::OnChangeGuildNotifyMessage() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnChangeGuildNotifyMessage", 0x4be);
        log("./log/Except.log",
            "CPacketTranslater::OnChangeGuildNotifyMessage() Exception Break\n");
    }
}

void CPacketTranslater::OnGuildMasterDelegate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(unsigned int*)(h + 0xa) == 0)
            return;
        Packet_DB_Reply_Guild_Master_Delegate reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xe);
        memcpy((char*)&reply + 0x16, h + 0x13, 0x1d);
        unsigned char grade = 0;
        unsigned int result = 0;
        m_pclApp->m_dbManager.QueryGuildMemberGradeByName(
            *(unsigned char*)(h + 0x12), *(unsigned int*)(h + 0xa), h + 0x13,
            grade, *(unsigned int*)((char*)&reply + 0x12), result);
        int resultCode = 0;
        if (grade == 2)
        {
            if (*(unsigned int*)((char*)&reply + 0x12) == 0 || result == 0)
            {
                resultCode = 0x22;
            }
            else if (!m_pclApp->m_dbManager.GuildMasterDelegate(
                         *(unsigned int*)(h + 0x12),
                         *(unsigned int*)(h + 0xa), *(unsigned int*)(h + 0xe),
                         result, *(unsigned int*)((char*)&reply + 0x12),
                         h + 0x13))
            {
                CMyFileLog log("OnGuildMasterDelegate", 0x628);
                log("./log/GuildModify",
                    "OnGuildMasterDelegate Err(%d) : return false",
                    *(unsigned int*)(h + 0xa));
                resultCode = 2;
            }
        }
        else
        {
            resultCode = 0x56;
        }
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        CMyFileLog log("OnGuildMasterDelegate", 0x636);
        log("./log/GuildModify",
            "::OnGuildMasterDelegate g(%d) delegater(%d) delegatee(%s) r(%d)",
            *(unsigned int*)(h + 0xa), *(unsigned int*)(h + 0xe), h + 0x13,
            resultCode);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildMasterDelegate", 0x63b);
        log("./log/Except.log",
            "CPacketTranslater::OnGuildMasterDelegate() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnGuildMasterDelegate", 0x640);
        log("./log/Except.log",
            "CPacketTranslater::OnGuildMasterDelegate() Exception Break\n");
    }
}

void CPacketTranslater::OnSendGuildLetter(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(unsigned int*)(h + 0xf) == 0)
            return;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        if (*(int*)(h + 0x124) == 1)
        {
            if (!m_pclApp->m_dbManager.SendGuildCoinByMail(
                    *(unsigned char*)(h + 0xe), *(unsigned int*)(h + 0xf),
                    1, 0, 1, h + 0x113, h + 0x13))
            {
                CMyFileLog log("OnSendGuildLetter", 0x4da);
                log("./log/GuildModify",
                    "AwardGuildItemByMail Err(%d) : return false",
                    *(unsigned int*)(h + 0xf));
                return;
            }
        }
        else if (*(int*)(h + 0x124) == -1)
        {
            if (!m_pclApp->m_dbManager.SendGuildLetter(
                    *(unsigned char*)(h + 0xe),
                    *(unsigned int*)(h + 0xf), h + 0x13))
            {
                CMyFileLog log("OnSendGuildLetter", 0x4e2);
                log("./log/GuildModify",
                    "OnSendGuildLetter Err(%d) : return false",
                    *(unsigned int*)(h + 0xf));
                return;
            }
        }
        Packet_DBMW_Reply_Guild_Mail reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xf);
        *(char*)((char*)&reply + 0x12) = 0;
        gs->SendToServer((char*)&reply, reply.packetSize);
        Packet_Notice_Guild_Mail_Arrived notice;
        *(char*)((char*)&notice + 0xa) = 1;
        *(unsigned int*)((char*)&notice + 0xb) = *(unsigned int*)(h + 0xf);
        gs->SendToServer((char*)&notice, notice.packetSize);
        CMyFileLog log("OnSendGuildLetter", 0x507);
        log("./log/GuildMail", "Guild(%d) Message(%s)",
            *(unsigned int*)(h + 0xf), h + 0x13);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSendGuildLetter", 0x50c);
        log("./log/Except.log",
            "CPacketTranslater::OnSendGuildLetter() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSendGuildLetter", 0x511);
        log("./log/Except.log",
            "CPacketTranslater::OnSendGuildLetter() Exception Break\n");
    }
}

void CPacketTranslater::OnGuildJoin(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(unsigned int*)(h + 0xb) == 0)
            return;
        Packet_DBMW_Save_Guild_Join_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xb);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0x13);
        *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)(h + 0x17);
        STGuildJoinInfo join;
        memset(&join, 0, 0x3c);
        join.m_serverId = *(unsigned char*)(h + 0xa);
        join.m_guildId = *(int*)(h + 0xb);
        join.m_id = *(unsigned int*)(h + 0xf);
        join.m_fieldC = *(unsigned int*)(h + 0x13);
        join.m_characNo = *(int*)(h + 0x17);
        strncpy(join.m_characName, h + 0x1b, 0x1d);
        join.m_lev = *(unsigned char*)(h + 0x39);
        join.m_growType = *(unsigned char*)(h + 0x3a);
        join.m_job = *(unsigned char*)(h + 0x3b);
        join.m_sex = *(unsigned char*)(h + 0x3c);
        memcpy(join.m_bornYear, h + 0x3d, 3);
        if (!m_pclApp->m_dbManager.GuildJoin(
                &join, *(unsigned int*)((char*)&reply + 0x16)))
        {
            CMyFileLog log("OnGuildJoin", 0x56a);
            log("./log/GuildModify",
                "OnGuildJoin Err(g:%d,c:%d,r:%d) : return false",
                *(unsigned int*)(h + 0xb), *(unsigned int*)(h + 0x17),
                *(unsigned int*)((char*)&reply + 0x16));
            if (*(unsigned int*)((char*)&reply + 0x16) == 0)
                m_pclApp->m_dbManager.DeleteJoinListByInvite(
                    *(unsigned int*)(h + 0x17), *(unsigned int*)(h + 0xb));
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        }
        CMyFileLog log2("OnGuildJoin", 0x576);
        log2("./log/GuildModify", "::OnGuildJoin g(%d) c(%d) r(%d)",
             *(unsigned int*)(h + 0xb), *(unsigned int*)(h + 0x17),
             *(unsigned int*)((char*)&reply + 0x16));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildJoin", 0x57b);
        log("./log/Except.log",
            "CPacketTranslater::OnGuildJoin() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnGuildJoin", 0x580);
        log("./log/Except.log",
            "CPacketTranslater::OnGuildJoin() Exception Break\n");
    }
}

void CPacketTranslater::OnSendMailCoinGuildEvent(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(unsigned int*)(h + 0xb) == 0)
            return;
        if (*(int*)(h + 0xf) > 0x10)
        {
            CMyFileLog log("OnSendMailCoinGuildEvent", 0x3d4);
            log("./log/GuildEvent",
                "CApplication.OnSendMailCoinGuildEvent Err : return false(%d)",
                *(unsigned int*)(h + 0xb));
            return;
        }
        int count = *(int*)(h + 0xf);
        int absCount = count < 0 ? -count : count;
        std::vector<int> characNos;
        characNos.clear();
        if (!m_pclApp->m_dbManager.AwardGuildCoinByMail(
                *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb), 1, 1,
                absCount, 0, characNos))
        {
            CMyFileLog log("OnSendMailCoinGuildEvent", 0x3f5);
            log("./log/GuildEvent",
                "CApplication.AwardGuildCoinByMail Err(%d) : return false",
                *(unsigned int*)(h + 0xb));
        }
        else if (!characNos.empty())
        {
            Packet_Notify_New_Group_Mail notice;
            int n = characNos.size() > 0x12b ? 0x12c : characNos.size();
            for (int i = 0; i < n; i++)
                *(int*)((char*)&notice + 0xe + i * 4) = characNos[i];
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&notice, notice.packetSize);
            characNos.clear();
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSendMailCoinGuildEvent", 0x449);
        log("./log/Except.log",
            "CPacketTranslater::OnSendMailCoinGuildEvent() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSendMailCoinGuildEvent", 0x44e);
        log("./log/Except.log",
            "CPacketTranslater::OnSendMailCoinGuildEvent() Exception Break\n");
    }
}

void CPacketTranslater::OnDBLoadRequestGuildBoardWrite(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        STGuildBoardDBInfo info;
        if (!m_pclApp->m_dbManager.OnWriteGuildBoard(
                (Packet_DB_Load_Request_Guild_Board_Write*)header, &info))
        {
            CMyFileLog log("OnDBLoadRequestGuildBoardWrite", 0xfbc);
            log("./log/Except",
                "CPacketTranslater::OnDBLoadRequestGuildBoardWrite()\tGuild Id : %d,\t Query Result : %d\n",
                *(unsigned int*)(h + 0xb), 0);
            Packet_DB_Load_Reply_Guild_Board_Write reply;
            *(unsigned short*)((char*)&reply + 0xa) = 1;
            *(unsigned int*)((char*)&reply + 0xc) = *(unsigned int*)(h + 0xb);
            *(unsigned int*)((char*)&reply + 0x10) = *(unsigned int*)(h + 0x13);
            gs->SendToServer((char*)&reply, 0xb9);
            return;
        }
        Packet_DB_Load_Reply_Guild_Board_Write reply;
        *(unsigned int*)((char*)&reply + 0xc) = *(unsigned int*)(h + 0xb);
        *(unsigned int*)((char*)&reply + 0x10) = *(unsigned int*)(h + 0x13);
        memcpy((char*)&reply + 0x14, &info, 0xa5);
        gs->SendToServer((char*)&reply, 0xb9);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBLoadRequestGuildBoardWrite", 0xfc8);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestGuildBoardWrite() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBLoadRequestGuildBoardWrite", 0xfcd);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestGuildBoardWrite() Exception Break\n");
    }
}

void CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        STGuildBoardDBInfo info;
        if (!m_pclApp->m_dbManager.OnWriteWebGuildBoard(
                (Packet_DB_Load_Request_Web_Guild_Board_Write*)header, &info))
        {
            CMyFileLog log("OnDBLoadRequestWebGuildBoardWrite", 0x101a);
            log("./log/Except",
                "CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite()\tGuild Id : %d,\t Query Result : %d\n",
                *(unsigned int*)(h + 0xa), 0);
            Packet_DB_Load_Reply_Web_Guild_Board_Write reply;
            *(unsigned short*)((char*)&reply + 0xa) = 1;
            *(unsigned int*)((char*)&reply + 0xc) = *(unsigned int*)(h + 0xa);
            *(unsigned int*)((char*)&reply + 0x10) = *(unsigned int*)(h + 0xe);
            gs->SendToServer((char*)&reply, 0xb9);
            return;
        }
        Packet_DB_Load_Reply_Web_Guild_Board_Write reply;
        *(unsigned int*)((char*)&reply + 0xc) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0x10) = *(unsigned int*)(h + 0xe);
        memcpy((char*)&reply + 0x14, &info, 0xa5);
        gs->SendToServer((char*)&reply, 0xb9);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBLoadRequestWebGuildBoardWrite", 0x1026);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBLoadRequestWebGuildBoardWrite", 0x102b);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite() Exception Break\n");
    }
}

void CPacketTranslater::OnDBLoadRequestGuildBoardDelete(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        if (!m_pclApp->m_dbManager.OnDeleteGuildBoard(*(unsigned int*)(h + 0xb)))
        {
            CMyFileLog log("OnDBLoadRequestGuildBoardDelete", 0xfe9);
            log("./log/Except",
                "CPacketTranslater::OnDBLoadRequestGuildBoardDelete()\tGuild Id : %d,\t Query Result : %d\n",
                *(unsigned int*)(h + 0xf), 0);
            Packet_DB_Load_Reply_Guild_Board_Delete reply;
            *(unsigned short*)((char*)&reply + 0xa) = 1;
            *(unsigned int*)((char*)&reply + 0xc) = *(unsigned int*)(h + 0xf);
            *(unsigned int*)((char*)&reply + 0x10) = *(unsigned int*)(h + 0x13);
            gs->SendToServer((char*)&reply, 0x18);
            return;
        }
        Packet_DB_Load_Reply_Guild_Board_Delete reply;
        *(unsigned int*)((char*)&reply + 0xc) = *(unsigned int*)(h + 0xf);
        *(unsigned int*)((char*)&reply + 0x10) = *(unsigned int*)(h + 0x13);
        *(unsigned int*)((char*)&reply + 0x14) = *(unsigned int*)(h + 0xb);
        gs->SendToServer((char*)&reply, 0x18);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBLoadRequestGuildBoardDelete", 0xff6);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestGuildBoardDelete() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBLoadRequestGuildBoardDelete", 0xffb);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestGuildBoardDelete() Exception Break\n");
    }
}

void CPacketTranslater::OnLoadGuildAgit(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnLoadGuildAgit() : 0 == m_pclApp"));
    try
    {
        char* h = (char*)header;
        Packet_Guild_Load_Guild_Agit reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        m_pclApp->m_dbManager.OnLoadGuildAgit(
            (Packet_DB_Load_Guild_Agit*)header, reply);
        Packet_Guild_Load_Guild_Cargo cargo;
        *(unsigned int*)((char*)&cargo + 0xa) = *(unsigned int*)(h + 0xa);
        m_pclApp->m_dbManager.OnLoadGuildCargo(*(unsigned int*)(h + 0xa),
                                               cargo);
        Packet_Guild_Load_Guild_Cargo_History history;
        *(unsigned int*)((char*)&history + 0xa) = *(unsigned int*)(h + 0xa);
        m_pclApp->m_dbManager.OnLoadGuildCargoHistory(
            *(unsigned int*)(h + 0xa), history);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0xf);
        gs->SendToServer((char*)&cargo, 0x18ea);
        gs->SendToServer((char*)&history, 0x972);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnLoadGuildAgit", 0x95f);
        log("./log/Except.log",
            "CPacketTranslater::OnLoadGuildAgit() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnLoadGuildAgit", 0x964);
        log("./log/Except.log",
            "CPacketTranslater::OnLoadGuildAgit() Exception Break\n");
    }
}

void CPacketTranslater::OnCreateGuildAgit(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnCreateGuildAgit() : 0 == m_pclApp"));
    try
    {
        char* h = (char*)header;
        Packet_DB_Create_Guild_Agit_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xe);
        m_pclApp->m_dbManager.OnCreateGuildAgit(
            (Packet_DB_Create_Guild_Agit*)header, reply);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0x16);
        if (*(int*)((char*)&reply + 0x12) == 0)
        {
            Packet_Guild_Load_Guild_Cargo cargo;
            *(unsigned int*)((char*)&cargo + 0xa) = *(unsigned int*)(h + 0xa);
            m_pclApp->m_dbManager.OnLoadGuildCargo(*(unsigned int*)(h + 0xa),
                                                   cargo);
            gs->SendToServer((char*)&cargo, 0x18ea);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnCreateGuildAgit", 0x911);
        log("./log/Except.log",
            "CPacketTranslater::OnCreateGuildAgit() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnCreateGuildAgit", 0x916);
        log("./log/Except.log",
            "CPacketTranslater::OnCreateGuildAgit() Exception Break\n");
    }
}

void CPacketTranslater::OnDeleteGuildAgit(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnDeleteGuildAgit() : 0 == m_pclApp"));
    try
    {
        char* h = (char*)header;
        Packet_DB_Delete_Guild_Agit_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xe);
        m_pclApp->m_dbManager.OnDeleteGuildAgit(
            (Packet_DB_Delete_Guild_Agit*)header, reply);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0x16);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDeleteGuildAgit", 0x932);
        log("./log/Except.log",
            "CPacketTranslater::OnDeleteGuildAgit() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDeleteGuildAgit", 0x937);
        log("./log/Except.log",
            "CPacketTranslater::OnDeleteGuildAgit() Exception Break\n");
    }
}

void CPacketTranslater::OnUpgradeGuildAgit(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnUpgradeGuildAgit() : 0 == m_pclApp"));
    try
    {
        char* h = (char*)header;
        Packet_DB_Upgrade_Guild_Agit_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xe);
        m_pclApp->m_dbManager.OnUpgradeGuildAgit(
            (Packet_DB_Upgrade_Guild_Agit*)header, reply);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0x16);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnUpgradeGuildAgit", 0x980);
        log("./log/Except.log",
            "CPacketTranslater::OnUpgradeGuildAgit() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnUpgradeGuildAgit", 0x985);
        log("./log/Except.log",
            "CPacketTranslater::OnUpgradeGuildAgit() Exception Break\n");
    }
}

void CPacketTranslater::OnUpdateGuildCargo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnUpdateGuildCargo(
            (Packet_DB_Update_Guild_Cargo*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnUpdateGuildCargo", 0xa5e);
        log("./log/Except",
            "CPacketTranslater::OnUpdateGuildCargo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnUpdateGuildCargo", 0xa63);
        log("./log/Except",
            "CPacketTranslater::OnUpdateGuildCargo() Exception Break\n");
    }
}

void CPacketTranslater::OnUpgradeGuildCargo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnUpgradeGuildCargo(
            (Packet_DB_Guild_Cargo_Upgrade*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnUpgradeGuildCargo", 0xa8e);
        log("./log/Except",
            "CPacketTranslater::OnUpgradeGuildCargo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnUpgradeGuildCargo", 0xa93);
        log("./log/Except",
            "CPacketTranslater::OnUpgradeGuildCargo() Exception Break\n");
    }
}

void CPacketTranslater::OnInsertGuildCargoHistory(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnInsertGuildCargoHistory(
            (Packet_DB_Insert_Guild_Cargo_History*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnInsertGuildCargoHistory", 0xa75);
        log("./log/Except",
            "CPacketTranslater::OnInsertGuildCargoHistory() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnInsertGuildCargoHistory", 0xa7a);
        log("./log/Except",
            "CPacketTranslater::OnInsertGuildCargoHistory() Exception Break\n");
    }
}

void CPacketTranslater::OnDeleteToBlackList(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        int characNo = *(int*)(h + 0x2c);
        if (characNo == -1)
        {
            if (!m_pclApp->m_dbManager.QueryCharacNoByName(h + 0xe, *(unsigned int*)&characNo, 0))
            {
                m_pclApp->m_dbManager.DeleteToBlackListOnly(
                    *(unsigned int*)(h + 0xa), h + 0xe);
                CMyFileLog log("OnDeleteToBlackList", 0x287);
                log("./log/BlackList",
                    "m_clDBManager.QueryCharacNoByName Err : return false");
                ms->SendToServer(h, *(unsigned short*)(h + 0x2));
                return;
            }
        }
        if (!m_pclApp->m_dbManager.DeleteToBlackList(
                *(unsigned int*)(h + 0xa), characNo))
        {
            CMyFileLog log("OnDeleteToBlackList", 0x28f);
            log("./log/BlackList",
                "m_clDBManager.DeleteToBlackList Err : return false");
            ms->SendToServer(h, *(unsigned short*)(h + 0x2));
            return;
        }
        if (*(int*)(h + 0x2c) == -1)
            *(int*)(h + 0x2c) = characNo;
        ms->SendToServer(h, *(unsigned short*)(h + 0x2));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDeleteToBlackList", 0x29c);
        log("./log/Except.log",
            "CPacketTranslater::OnDeleteToBlackList() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDeleteToBlackList", 0x2a1);
        log("./log/Except.log",
            "CPacketTranslater::OnDeleteToBlackList() Exception Break\n");
    }
}

void CPacketTranslater::OnRegisterToBlackList(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        *(int*)(h + 0x30) = 0;
        int characNo = *(int*)(h + 0x2c);
        if (characNo == -1)
        {
            if (!m_pclApp->m_dbManager.QueryCharacNoByName(
                    h + 0xe, *(unsigned int*)&characNo,
                    (int*)(h + 0x30)))
            {
                CMyFileLog log("OnRegisterToBlackList", 0x251);
                log("./log/BlackList",
                    "m_clDBManager.QueryCharacNoByName Err : return false");
                ms->SendToServer(h, *(unsigned short*)(h + 0x2));
                return;
            }
        }
        if (!m_pclApp->m_dbManager.RegisterToBlackList(
                *(unsigned int*)(h + 0xa), characNo, h + 0xe))
        {
            CMyFileLog log("OnRegisterToBlackList", 0x259);
            log("./log/BlackList",
                "m_clDBManager.RegisterToBlackList Err : return false");
            ms->SendToServer(h, *(unsigned short*)(h + 0x2));
            return;
        }
        if (*(int*)(h + 0x2c) == -1)
            *(int*)(h + 0x2c) = characNo;
        ms->SendToServer(h, *(unsigned short*)(h + 0x2));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRegisterToBlackList", 0x266);
        log("./log/Except.log",
            "CPacketTranslater::OnRegisterToBlackList() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnRegisterToBlackList", 0x26b);
        log("./log/Except.log",
            "CPacketTranslater::OnRegisterToBlackList() Exception Break\n");
    }
}

void CPacketTranslater::OnRequestBlackListOnLogin(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DBMW_Reponse_BlackList reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        if (!m_pclApp->m_dbManager.QueryBlackList(
                *(unsigned int*)(h + 0xa),
                (STBlackUserDBType*)((char*)&reply + 0xe)))
        {
            CMyFileLog log("OnRequestBlackListOnLogin", 0x2b8);
            log("./log/BlackList",
                "m_clDBManager.QueryBlackList Err : return false");
            return;
        }
        if (*(unsigned char*)(h + 0xe) == 0xc9)
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        else if (*(unsigned char*)(h + 0xe) == 0xcb)
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestBlackListOnLogin", 0x2ca);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestBlackListOnLogin() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnRequestBlackListOnLogin", 0x2cf);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestBlackListOnLogin() Exception Break\n");
    }
}

void CPacketTranslater::OnSaveGuild(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(int*)(h + 0xcc) == 0)
        {
            m_pclApp->m_dbManager.SaveGuildInfo(
                *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                *(STGuildDBInfoOnly*)(h + 0xf));
        }
        else if (*(int*)(h + 0xcc) == 1)
        {
            m_pclApp->m_dbManager.SaveGuildSkill(
                *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                *(STGuildDBInfoOnly*)(h + 0xf));
            CMyFileLog log("OnSaveGuild", 0xca);
            log("./log/GuildModify",
                "::OnSaveGuild s(%d) g(%d) k(%d) g_level(%d) g_cnt(%d) g_exp(%d) g_sub_cnt(%d) power_side(%d) power_war_p(%d) agit(%d) power_join_cnt(%d)",
                *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                *(int*)(h + 0xcc), *(unsigned char*)(h + 0x2a),
                *(unsigned short*)(h + 0x31), *(unsigned int*)(h + 0x38),
                *(unsigned char*)(h + 0x3c), *(unsigned char*)(h + 0xa4),
                *(unsigned int*)(h + 0xa9), *(unsigned char*)(h + 0xad),
                *(unsigned char*)(h + 0xae));
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSaveGuild() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnSaveGuild", 0xd8);
        log("./log/Except",
            "CPacketTranslater::OnSaveGuild() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSaveGuild() Exception Break");
        CMyFileLog log("OnSaveGuild", 0xde);
        log("./log/Except",
            "CPacketTranslater::OnSaveGuild() Exception Break\n");
    }
}

void CPacketTranslater::OnGuildSecede(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(unsigned int*)(h + 0xa) == 0)
            return;
        Packet_DB_Reply_Guild_Secede reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xe);
        *(char*)((char*)&reply + 0x1a) = *(char*)(h + 0x12);
        *(unsigned int*)((char*)&reply + 0x1b) = *(unsigned int*)(h + 0x13);
        memcpy((char*)&reply + 0x1f, h + 0x17, 0x1d);
        if (!m_pclApp->m_dbManager.GuildSecede(
                (Packet_DB_Request_Guild_Secede*)header,
                *(unsigned int*)((char*)&reply + 0x12),
                *(unsigned int*)((char*)&reply + 0x3d),
                *(unsigned int*)((char*)&reply + 0x16)))
        {
            CMyFileLog log("OnGuildSecede", 0x5e1);
            log("./log/GuildModify",
                "::OnGuildSecede Err g(%d) n(%s) c(%d) r(%d) f(%d)",
                *(unsigned int*)(h + 0xa), h + 0x17,
                *(unsigned int*)((char*)&reply + 0x12),
                *(unsigned int*)((char*)&reply + 0x16),
                *(signed char*)(h + 0x12));
        }
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        CMyFileLog log2("OnGuildSecede", 0x5ed);
        log2("./log/GuildModify", "::OnGuildSecede g(%d) c(%d) r(%d) f(%d)",
             *(unsigned int*)(h + 0xa),
             *(unsigned int*)((char*)&reply + 0x12),
             *(unsigned int*)((char*)&reply + 0x16),
             *(signed char*)(h + 0x12));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnGuildSecede", 0x5f6);
        log("./log/Except.log",
            "CPacketTranslater::OnGuildSecede() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnGuildSecede", 0x5fb);
        log("./log/Except.log",
            "CPacketTranslater::OnGuildSecede() Exception Break\n");
    }
}

void CPacketTranslater::OnSaveGuildMember(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.SaveGuildMember(
            *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
            *(STGuildMemerDBInfo*)(h + 0x13), *(unsigned int*)(h + 0xf),
            *(unsigned char*)(h + 0x2d));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSaveGuildMember() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnSaveGuildMember", 0x1c7);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveGuildMember() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSaveGuildMember() Exception Break");
        CMyFileLog log("OnSaveGuildMember", 0x1cd);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveGuildMember() Exception Break\n");
    }
}

void CPacketTranslater::OnSaveGuildWarInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (!m_pclApp->m_dbManager.SaveGuildWarPointList(
                *(unsigned int*)(h + 0xa), (unsigned int*)(h + 0xb),
                (unsigned int*)(h + 0x33)))
        {
            CMyFileLog log("OnSaveGuildWarInfo", 0x201);
            log("./log/Guild",
                "m_clDBManager.OnSaveGuildWarInfo Err : return false");
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSaveGuildWarInfo", 0x207);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveGuildWarInfo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSaveGuildWarInfo", 0x20c);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveGuildWarInfo() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerWarBonusPoint(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarBonusPoint() : 0 == m_pclApp"));
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.OnSavePowerWarBonusPoint(
            (Packet_DB_Save_Power_War_Bonus_Point*)header);
        if (*(int*)(h + 0xa) > 0)
        {
            Packet_Notify_New_Group_Mail notice;
            int n = *(int*)(h + 0xa) > 0x12c ? 0x12c : *(int*)(h + 0xa);
            for (int i = 0; i < n; i++)
                *(int*)((char*)&notice + 0xe + i * 4) = *(int*)(h + 0xe + i * 8);
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&notice, notice.packetSize);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSavePowerWarBonusPoint", 0xea5);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarBonusPoint() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSavePowerWarBonusPoint", 0xeaa);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarBonusPoint() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerWarPoint(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.SavePowerWarPoint(
            (Packet_DB_Save_Power_War_Point*)header);
        CMyFileLog log("OnSavePowerWarPoint", 0x6a4);
        log("./log/QueryGuildBooting", "QueryGuildBooting A_Side(%d) B_Side(%d)",
            *(unsigned int*)(h + 0x10), *(unsigned int*)(h + 0xc));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSavePowerWarPoint", 0x6a8);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSavePowerWarPoint", 0x6ad);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerWarStatueRanker(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarStatueRanker() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.OnSavePowerWarStatueRanker(
            (Packet_DB_Save_Power_War_Statue_Ranker*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSavePowerWarStatueRanker", 0x8e4);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarStatueRanker() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSavePowerWarStatueRanker", 0x8e9);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarStatueRanker() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerWarPointReward(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarPoint() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.OnSavePowerWarPointReward(
            (Packet_DB_Save_Power_War_Point_Reward*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSavePowerWarPointReward", 0x8cb);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarPoint() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSavePowerWarPointReward", 0x8d0);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarPoint() Exception Break\n");
    }
}

void CPacketTranslater::OnLoadPeriodicMessage(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_Result_Loading_Periodic_Message reply;
        if (!m_pclApp->m_dbManager.OnLoadPeriodicMessage(
                (Packet_Load_Periodic_Message*)header, &reply))
            return;
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, 0x212);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x104d);
        log("./log/Except",
            "CPacketTranslater::OnLoadPeriodicMessage() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnLoadPeriodicMessage", 0x1052);
        log("./log/Except",
            "CPacketTranslater::OnLoadPeriodicMessage() Exception Break\n");
    }
}

void CPacketTranslater::OnDBMWInsertMail(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(int*)(h + 0x12f) != 0)
        {
            time_t now = time(0);
            struct tm* lt = localtime(&now);
            lt->tm_hour += 1;
            lt->tm_min = 0;
            lt->tm_sec = 0;
            long nextHour = mktime(lt);
            long occTime = nextHour + *(int*)(h + 0x12f) * 0x15180;
            int letterNo = (occTime - 0x44a53c70) / 0x15180;
            if (!m_pclApp->m_dbManager.InsertMail(
                    *(unsigned int*)(h + 0xa), h + 0x1a, h + 0x2f,
                    *(unsigned int*)(h + 0xe), letterNo,
                    *(int*)(h + 0x12), *(int*)(h + 0x16)))
            {
                CMyFileLog log("OnDBMWInsertMail", 0xd1e);
                log("./log/GuildEvent",
                    "CPacketTranslater.OnDBMWInsertMail Err(%d) : return false",
                    *(unsigned int*)(h + 0xa));
                return;
            }
        }
        Packet_Monitor_Notify_New_Mail notice;
        *(unsigned int*)((char*)&notice + 0xa) = *(unsigned int*)(h + 0xa);
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&notice, notice.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWInsertMail", 0xd29);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWInsertMail() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWInsertMail", 0xd2e);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWInsertMail() Exception Break\n");
    }
}

void CPacketTranslater::OnQueryMember(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DB_Reply_Query_Member reply;
        *(unsigned int*)((char*)&reply + 0xb) = *(unsigned int*)(h + 0xa);
        if (!m_pclApp->m_dbManager.QueryMember(
                *(unsigned int*)(h + 0xa), reply))
        {
            CMyFileLog log("OnQueryMember", 0x117);
            log("./log/QueryErr",
                "CPacketTranslater::OnQueryMember() Error, member_id(%d)",
                *(unsigned int*)(h + 0xa));
            CMonitorServer* ms =
                m_pclApp->m_serverHandler->GetMonitorServer();
            int size =
                *(unsigned char*)((char*)&reply + 0x3e) * 0x2b + 0x3f;
            ms->SendToServer((char*)&reply, size);
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnQueryMember() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnQueryMember", 0x124);
        log("./log/Except",
            "CPacketTranslater::OnQueryMember() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnQueryMember() Exception Break");
        CMyFileLog log("OnQueryMember", 0x12a);
        log("./log/Except",
            "CPacketTranslater::OnQueryMember() Exception Break\n");
    }
}

void CPacketTranslater::OnQueryGuildMember(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DB_Reply_Query_Guild_Member reply;
        *(unsigned int*)((char*)&reply + 0xf) = *(unsigned int*)(h + 0xb);
        if (!m_pclApp->m_dbManager.QueryGuildMember(
                *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb),
                reply))
        {
            CMyFileLog log("OnQueryGuildMember", 0x98);
            log("./log/Except",
                "CPacketTranslater::OnQueryGuildMember() Query Error : %d, Char No : %d, Guild Id : %d",
                *(unsigned int*)((char*)&reply + 0xb),
                *(unsigned int*)(h + 0xb),
                *(unsigned char*)((char*)&reply + 0xa));
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, 0x2d);
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnQueryGuildMember() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnQueryGuildMember", 0xa8);
        log("./log/Except",
            "CPacketTranslater::OnQueryGuildMember() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnQueryGuildMember() Exception Break");
        CMyFileLog log("OnQueryGuildMember", 0xae);
        log("./log/Except",
            "CPacketTranslater::OnQueryGuildMember() Exception Break\n");
    }
}

void CPacketTranslater::OnQueryTodayGuildMemeber(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnQueryTodayGuildMemeber() : 0 == m_pclApp"));
    try
    {
        char* h = (char*)header;
        Packet_Reply_Today_Guild_Member reply;
        m_pclApp->m_dbManager.QueryTodayGuildMember(
            *(unsigned int*)(h + 0xa), reply);
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnQueryTodayGuildMemeber", 0x106a);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnQueryTodayGuildMemeber", 0x106f);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n");
    }
}

void CPacketTranslater::OnRequestGuildCreate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DBMW_Reply_Guild_Create reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xf);
        m_pclApp->m_dbManager.QueryGuildCreate(
            (Packet_DBMW_Request_Guild_Create*)header,
            *(unsigned int*)((char*)&reply + 0xe),
            *(unsigned int*)((char*)&reply + 0x12));
        memcpy((char*)&reply + 0x16, h + 0x38, 0x16);
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        CMyFileLog log("OnRequestGuildCreate", 0x65f);
        log("./log/GuildModify",
            "::OnRequestGuildCreate g(%d) c(%d) r(%d)",
            *(unsigned int*)((char*)&reply + 0x12),
            *(unsigned int*)(h + 0xf),
            *(unsigned int*)((char*)&reply + 0xe));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestGuildCreate", 0x663);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnRequestGuildCreate", 0x668);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerWarUserRank(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarUserRank() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.OnSavePowerWarUserRank(
            (Packet_DB_Save_Power_War_User_Rank*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSavePowerWarUserRank", 0x899);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarUserRank() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSavePowerWarUserRank", 0x89e);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarUserRank() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerWarGuildRank(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarGuildRank() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.OnSavePowerWarGuildRank(
            (Packet_DB_Save_Power_War_Guild_Rank*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSavePowerWarGuildRank", 0x8b2);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarGuildRank() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSavePowerWarGuildRank", 0x8b7);
        log("./log/Except.log",
            "CPacketTranslater::OnSavePowerWarGuildRank() Exception Break\n");
    }
}

void CPacketTranslater::OnRequestApproveJoinGuild(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DB_Response_Approve_Join_Guild reply;
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)(h + 0xe);
        *(unsigned int*)((char*)&reply + 0x16) = *(unsigned int*)(h + 0x12);
        if (!m_pclApp->m_dbManager.OnGuildJoinByListApprove(
                *(unsigned int*)(h + 0xa), *(signed char*)(h + 0x16),
                *(unsigned int*)(h + 0xe), *(unsigned int*)(h + 0x12),
                *(STGuildJoinInfo*)((char*)&reply + 0x1a),
                *(unsigned int*)((char*)&reply + 0xa)))
        {
            if (*(unsigned int*)((char*)&reply + 0xa) == 0)
                *(int*)((char*)&reply + 0xa) = 1;
            CMyFileLog log("OnRequestApproveJoinGuild", 0x52a);
            log("./log/GuildModify",
                "OnGuildJoin Err(g:%d,c:%d,r:%d) : return false",
                *(unsigned int*)((char*)&reply + 0xa),
                *(unsigned int*)(h + 0x12), *(unsigned int*)(h + 0xa));
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
            CMyFileLog log2("OnRequestApproveJoinGuild", 0x530);
            log2("./log/GuildModify", "::OnGuildJoin g(%d) c(%d) r(%d)",
                 *(unsigned int*)((char*)&reply + 0xa),
                 *(unsigned int*)(h + 0x12), *(unsigned int*)(h + 0xa));
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestApproveJoinGuild", 0x534);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestApproveJoinGuild() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnRequestApproveJoinGuild", 0x539);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestApproveJoinGuild() Exception Break\n");
    }
}

void CPacketTranslater::OnInsertUdpCharacteristic(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnInsertUdpCharacteristic() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.InsertUdpCharacteristic(
            (Packet_Udp_Characteristic*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnInsertUdpCharacteristic", 0x87f);
        log("./log/Except.log",
            "CPacketTranslater::OnInsertUdpCharacteristic() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnInsertUdpCharacteristic", 0x884);
        log("./log/Except.log",
            "CPacketTranslater::OnInsertUdpCharacteristic() Exception Break\n");
    }
}

void CPacketTranslater::OnDelBuddy(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DBMW_Del_Buddy_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xa);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xe);
        memcpy((char*)&reply + 0x12, h + 0x12, 0x1d);
        m_pclApp->m_dbManager.DelBuddy(*(unsigned int*)(h + 0xa),
                                       *(unsigned int*)(h + 0xe));
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDelBuddy", 0x319);
        log("./log/Except.log",
            "CPacketTranslater::OnDelBuddy() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDelBuddy", 0x31e);
        log("./log/Except.log",
            "CPacketTranslater::OnDelBuddy() Exception Break\n");
    }
}

void CPacketTranslater::OnEndGuildWar(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (!m_pclApp->m_dbManager.SaveGuildWarPointList(
                *(unsigned int*)(h + 0xa), (unsigned int*)(h + 0xb),
                (unsigned int*)(h + 0x33)))
        {
            CMyFileLog log("OnEndGuildWar", 0x223);
            log("./log/GuildWar",
                "m_clDBManager.OnEndGuildWar Err : return false");
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnEndGuildWar", 0x229);
        log("./log/Except.log",
            "CPacketTranslater::OnEndGuildWar() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnEndGuildWar", 0x22e);
        log("./log/Except.log",
            "CPacketTranslater::OnEndGuildWar() Exception Break\n");
    }
}

void CPacketTranslater::onStartGameEventFromServer(PacketHeader* header)
{
    try
    {
        char* h = (char*)header;
        CMyFileLog log("onStartGameEventFromServer", 0x1567);
        log("./log/AradOnly",
            "CPacketTranslater::onStartGameEventFromServer data. (event:%d)\n",
            *(int*)(h + 0xa));
        if (!m_pclApp->m_dbManager.insertServerGameEvent(
                (Packet_StartGameEventFromServer*)header))
        {
            CMyFileLog log2("onStartGameEventFromServer", 0x156b);
            log2("./log/AradOnly",
                 "CPacketTranslater::onStartGameEventFromServer fail\n");
            return;
        }
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* buf = tcp->makePacketHeader(0x27fb, 0x1a);
            *(int*)(buf + 0xa) = *(int*)(h + 0xa);
            *(int*)(buf + 0xe) = *(int*)(h + 0xe);
            *(int*)(buf + 0x12) = *(int*)(h + 0x12);
            *(int*)(buf + 0x16) = *(int*)(h + 0x16);
            tcp->SendToServer(buf);
        }
        else
        {
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                h, 0x1a);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onStartGameEventFromServer", 0x1583);
        log("./log/AradOnly",
            "CPacketTranslater::onStartGameEventFromServer Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onStartGameEventFromServer", 0x1588);
        log("./log/AradOnly",
            "CPacketTranslater::onRegistServerEvent Exception Break\n");
    }
}

void CPacketTranslater::onEndGameEventFromServer(PacketHeader* header)
{
    try
    {
        char* h = (char*)header;
        CMyFileLog log("onEndGameEventFromServer", 0x1592);
        log("./log/AradOnly",
            "CPacketTranslater::onEndGameEventFromServer data. (event:%d)\n",
            *(int*)(h + 0xa));
        if (!m_pclApp->m_dbManager.updateServerGameEvent(
                (Packet_StopGameEventFromServer*)header))
        {
            CMyFileLog log2("onEndGameEventFromServer", 0x1596);
            log2("./log/AradOnly",
                 "CPacketTranslater::onEndGameEventFromServer fail\n");
            return;
        }
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* buf = tcp->makePacketHeader(0x27fc, 0x16);
            *(int*)(buf + 0xa) = *(int*)(h + 0xa);
            *(int*)(buf + 0x12) = *(int*)(h + 0x12);
            *(int*)(buf + 0xe) = *(int*)(h + 0xe);
            tcp->SendToServer(buf);
        }
        else
        {
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                h, 0x16);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onEndGameEventFromServer", 0x15ac);
        log("./log/AradOnly",
            "CPacketTranslater::onEndGameEventFromServer Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onEndGameEventFromServer", 0x15b1);
        log("./log/AradOnly",
            "CPacketTranslater::onEndGameEventFromServer Exception Break\n");
    }
}

void CPacketTranslater::OnSaveMember(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (*(unsigned char*)(h + 0xa) == 1)
        {
            m_pclApp->m_dbManager.SaveMemberInsert(
                *(unsigned int*)(h + 0xb), *(unsigned int*)(h + 0xf),
                *(unsigned char*)(h + 0x13));
        }
        else if (*(unsigned char*)(h + 0xa) == 2)
        {
            m_pclApp->m_dbManager.SaveMemberDelete(
                *(unsigned int*)(h + 0xb), *(unsigned int*)(h + 0xf),
                *(unsigned char*)(h + 0x13));
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSaveMember() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnSaveMember", 0x148);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveMember() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSaveMember() Exception Break");
        CMyFileLog log("OnSaveMember", 0x14e);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveMember() Exception Break\n");
    }
}

void CPacketTranslater::OnSaveMemberUpdateCharInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (!m_pclApp->m_dbManager.UpdateMemberKeyInCharacInfo(
                *(unsigned char*)(h + 0xe), *(unsigned int*)(h + 0xa)))
        {
            CMyFileLog log("OnSaveMemberUpdateCharInfo", 0x1a4);
            log("./log/DBMemberErr", "Member key Update Error %d\n",
                *(unsigned int*)(h + 0xa));
        }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnSaveMemberUpdateCharInfo", 0x1a9);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break");
        CMyFileLog log("OnSaveMemberUpdateCharInfo", 0x1af);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveMemberUpdateCharInfo() Exception Break\n");
    }
}

void CPacketTranslater::OnQueryGuildBooting(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_DB_Query_Reply_On_Guild_Booting reply;
        m_pclApp->m_dbManager.QueryGuildBooting(
            reply, *(unsigned char*)(h + 0xa));
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        CMyFileLog log("OnQueryGuildBooting", 0x685);
        log("./log/QueryGuildBooting",
            "QueryGuildBooting A_Side(%d) B_Side(%d) Winner(%d)",
            *(unsigned int*)((char*)&reply + 0xa),
            *(unsigned int*)((char*)&reply + 0xe),
            *(signed char*)((char*)&reply + 0x12));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnQueryGuildBooting", 0x689);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnQueryGuildBooting", 0x68e);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break\n");
    }
}

void CPacketTranslater::OnUpdateTowerOfDespairStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        if (!m_pclApp->m_dbManager.QueryTowerOfDespairStatistic(
                (Packet_TowerOfDespair_Statistic_STD*)header))
            return;
        CMyFileLog log("OnUpdateTowerOfDespairStatistic", 0x12e5);
        log("./log/statistic", "TOD Statistic Error\nTOD uv(%d)",
            *(int*)(h + 0xe));
        for (int i = 1; i <= 0x64; i++)
        {
            CMyFileLog log2("OnUpdateTowerOfDespairStatistic", 0x12e7);
            log2("./log/statistic", "TOD Layer(%d), enter(%d), succ(%d)", i,
                 *(int*)(h + 0xe + i * 8), *(int*)(h + 0x12 + i * 8));
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnUpdateTowerOfDespairStatistic", 0x12ed);
        log("./log/Except.log",
            "CPacketTranslater::OnUpdateTowerOfDespairStatistic() Exception Break : %s",
            e.what());
    }
}

void CPacketTranslater::OnDBMWVillageAttackRank(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        bool flag = false;
        int a = 0;
        int b = 0;
        if (!m_pclApp->m_dbManager.GetVillageAttackedRank(
                (Packet_DB_VillageAttackedRank*)header, flag, a, b))
        {
            CMyFileLog log("OnDBMWVillageAttackRank", 0xd5a);
            log("./log/GuildEvent",
                "CPacketTranslater.OnDBMWVillageAttackRank Err : return false");
            return;
        }
        if (flag)
        {
            Packet_Monitor_Event_Start ev;
            *(int*)((char*)&ev + 0xa) = 4;
            *(unsigned short*)((char*)&ev + 0xe) = (unsigned short)a;
            *(unsigned short*)((char*)&ev + 0x10) = (unsigned short)b;
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&ev, ev.packetSize);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWVillageAttackRank", 0xd69);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWInsertMail() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWVillageAttackRank", 0xd6e);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWInsertMail() Exception Break\n");
    }
}

void CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_Item_Limit_Edition_Load_Data_Rpy reply;
        if (!m_pclApp->m_dbManager.onItemLimitEditionLoadData(
                (const Packet_Item_Limit_Edition_Load_Data_Req*)header,
                &reply))
        {
            CMyFileLog log("onItemLimitEditionLoadDataReq", 0xaa4);
            log("./log/LimitEdition",
                "CPacketTranslater::onItemLimitEditionLoadDataReq data load fail\n");
            return;
        }
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, 0x7ef);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onItemLimitEditionLoadDataReq", 0xaae);
        log("./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onItemLimitEditionLoadDataReq", 0xab3);
        log("./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}

void CPacketTranslater::onCollectItemsGm(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.updateCollectItemsGm(
            *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xf),
            *(int*)(h + 0xb), *(int*)(h + 0x13));
        Packet_CollectItemsResult reply;
        *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(h + 0xf);
        *(unsigned int*)((char*)&reply + 0xe) = *(unsigned int*)(h + 0xb);
        *(int*)((char*)&reply + 0x12) = *(int*)(h + 0x13);
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onCollectItemsGm", 0x1406);
        log("./log/Except",
            "CPacketTranslater::onCollectItemsGm Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onCollectItemsGm", 0x140b);
        log("./log/Except",
            "CPacketTranslater::onCollectItemsGm Exception Break\n");
    }
}

void CPacketTranslater::onInsertHolePunchingResult(PacketHeader* header)
{
    try
    {
        char* h = (char*)header;
        CMyFileLog log("onInsertHolePunchingResult", 0x15bd);
        log("./log/AradOnly",
            "CPacketTranslater::onInsertHolePunchingResult.\n");
        if (!m_pclApp->m_dbManager.insertHolePunchingResult(
                (Packet_GameServer2Statisctics2DBServer*)header))
        {
            CMyFileLog log2("onInsertHolePunchingResult", 0x15c0);
            log2("./log/AradOnly",
                 "CPacketTranslater::insertHolePunchingResult fail\n");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onInsertHolePunchingResult", 0x15c6);
        log("./log/AradOnly",
            "CPacketTranslater::onInsertHolePunchingResult Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onInsertHolePunchingResult", 0x15cb);
        log("./log/AradOnly",
            "CPacketTranslater::onInsertHolePunchingResult Exception Break\n");
    }
}

void CPacketTranslater::OnSaveMemberExp(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.SaveMemberExp(
            *(unsigned int*)(h + 0xa), *(unsigned int*)(h + 0xe),
            *(unsigned int*)(h + 0x12));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSaveMember() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnSaveMemberExp", 0x168);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveMember() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSaveMember() Exception Break");
        CMyFileLog log("OnSaveMemberExp", 0x16e);
        log("./log/Except.log",
            "CPacketTranslater::OnSaveMember() Exception Break\n");
    }
}

void CPacketTranslater::OnSavePowerSecedeTime(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        m_pclApp->m_dbManager.UpdatePowerSecedeTime(
            *(unsigned char*)(h + 0xa), *(unsigned int*)(h + 0xb));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnSaveGuild() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnSavePowerSecedeTime", 0xf8);
        log("./log/Except",
            "CPacketTranslater::OnSaveGuild() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnSaveGuild() Exception Break");
        CMyFileLog log("OnSavePowerSecedeTime", 0xfe);
        log("./log/Except",
            "CPacketTranslater::OnSaveGuild() Exception Break\n");
    }
}

void CPacketTranslater::onItemLimitEditionUpdateData(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.onItemLimitEditionUpdateData(
                (const Packet_Item_Limit_Edition_Update*)header))
        {
            CMyFileLog log("onItemLimitEditionUpdateData", 0xac1);
            log("./log/LimitEdition",
                "CPacketTranslater::onItemLimitEditionLoadDataReq data load fail\n");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onItemLimitEditionUpdateData", 0xac7);
        log("./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onItemLimitEditionUpdateData", 0xacc);
        log("./log/Except",
            "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n");
    }
}

void CPacketTranslater::onCompatibilityIndex(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.updateCompatibilityIndex(
                (Packet_Stat_Compatibility_Index*)header))
        {
            CMyFileLog log("onCompatibilityIndex", 0x13a5);
            log("./log/Query",
                "CPacketTranslater::onCompatibilityIndex data update fail\n");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onCompatibilityIndex", 0x13ab);
        log("./log/Except",
            "CPacketTranslater::onCompatibilityIndex Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onCompatibilityIndex", 0x13b0);
        log("./log/Except",
            "CPacketTranslater::onCompatibilityIndex Exception Break\n");
    }
}

void CPacketTranslater::OnP2PStatistics(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.QueryP2PStatistics(
                (Packet_P2P_Statistics*)header))
        {
            CMyFileLog log("OnP2PStatistics", 0x13c1);
            log("./log/Query", "CPacketTranslater::OnP2PStatistics()");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnP2PStatistics", 0x13c6);
        log("./log/Except.log",
            "CPacketTranslater::OnP2PStatistics() Exception Break : %s",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnP2PStatistics", 0x13cb);
        log("./log/Except",
            "CPacketTranslater::onCompatibilityIndex Exception Break\n");
    }
}

void CPacketTranslater::OnDBMWQueryMsg(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.QueryMsg(
                (Packet_DBMW_Query_Msg*)header))
        {
            CMyFileLog log("OnDBMWQueryMsg", 0xd3d);
            log("./log/GuildEvent",
                "CPacketTranslater.OnDBMWQueryMsg Err : return false");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWQueryMsg", 0xd43);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWQueryMsg() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWQueryMsg", 0xd48);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWQueryMsg() Exception Break\n");
    }
}

void CPacketTranslater::OnDBMWRandomboxStatic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.UpdateRandomboxStatistic(
                (Packet_Randombox_statistic_DB*)header))
        {
            CMyFileLog log("OnDBMWRandomboxStatic", 0xdbc);
            log("./log/statistic",
                "CPacketTranslater.OnDBMWRandomboxStatic Err : return false");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWRandomboxStatic", 0xdc1);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWRandomboxStatic() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWRandomboxStatic", 0xdc6);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWRandomboxStatic() Exception Break\n");
    }
}

void CPacketTranslater::OnBloodDungeonStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.GetDBMWStatistic(
                (Packet_DBMW_Query_String*)header))
        {
            CMyFileLog log("OnBloodDungeonStatistic", 0xb66);
            log("./log/PowerStatistic",
                "CPacketTranslater::OnBloodDungeonStatistic insert fail\n");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnBloodDungeonStatistic", 0xb6c);
        log("./log/Except",
            "CPacketTranslater::OnBloodDungeonStatistic Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnBloodDungeonStatistic", 0xb71);
        log("./log/Except",
            "CPacketTranslater::OnBloodDungeonStatistic Exception Break\n");
    }
}

void CPacketTranslater::OnDBMWCreateEmblemStatic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.UpdateCreateEmblemStatistic(
                (Packet_Emblem_Create_Statistic_DB*)header))
        {
            CMyFileLog log("OnDBMWCreateEmblemStatic", 0xd9f);
            log("./log/statistic",
                "CPacketTranslater.OnDBMWCreateEmblemStatic Err : return false");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWCreateEmblemStatic", 0xda4);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWCreateEmblemStatic() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWCreateEmblemStatic", 0xda9);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWCreateEmblemStatic() Exception Break\n");
    }
}

void CPacketTranslater::OnDBMWDisjointAvatarStatic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        puts("TEST : OnDBMWDisjointAvatarStatic");
        if (!m_pclApp->m_dbManager.UpdateDisjointAvatarStatistic(
                (Packet_Avater_Disjoint_Statistic_DB*)header))
        {
            CMyFileLog log("OnDBMWDisjointAvatarStatic", 0xd81);
            log("./log/statistic",
                "CPacketTranslater.OnDBMWDisjointAvatarStatic Err : return false");
            return;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWDisjointAvatarStatic", 0xd86);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWDisjointAvatarStatic() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWDisjointAvatarStatic", 0xd8b);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWDisjointAvatarStatic() Exception Break\n");
    }
}

void CPacketTranslater::onCollectItemsUpdate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        Packet_CollectItemsResult reply;
        unsigned char flag = 0;
        m_pclApp->m_dbManager.selectCollectItems(
            *(unsigned char*)(h + 0xe),
            *(int*)((char*)&reply + 0xe), *(int*)((char*)&reply + 0xa),
            *(unsigned int*)((char*)&reply + 0x12), flag);
        int diff = *(int*)(h + 0xa) - *(int*)((char*)&reply + 0xa);
        m_pclApp->m_dbManager.updateCollectItems(
            *(unsigned char*)(h + 0xe), diff,
            *(unsigned int*)((char*)&reply + 0x12), flag);
        if (flag == 0 && *(unsigned char*)(h + 0x13) == 0 && diff < 0)
        {
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onCollectItemsUpdate", 0x13e7);
        log("./log/Except",
            "CPacketTranslater::onCollectItemsUpdate Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onCollectItemsUpdate", 0x13ec);
        log("./log/Except",
            "CPacketTranslater::onCollectItemsUpdate Exception Break\n");
    }
}

void CPacketTranslater::OnDBMWConnectionCheck(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* h = (char*)header;
        CMyFileLog log("OnDBMWConnectionCheck", 0x1df);
        log("./log/Udp", "%d Server Connection Complete!",
            *(unsigned char*)(h + 0xa));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWConnectionCheck", 0x1e3);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWConnectionCheck() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBMWConnectionCheck", 0x1e8);
        log("./log/Except.log",
            "CPacketTranslater::OnDBMWConnectionCheck() Exception Break\n");
    }
}

void CPacketTranslater::OnChangeCharacName(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.ChangeCharName(
            (Packet_DBMW_Change_Char_Name*)header);
        m_pclApp->m_dbManager.ChangePvPBuddyName(
            (Packet_DBMW_Change_Char_Name*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnChangeCharacName", 0x6e5);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnChangeCharacName", 0x6ea);
        log("./log/Except.log",
            "CPacketTranslater::OnRequestGuildCreate() Exception Break\n");
    }
}

void CPacketTranslater::OnServerMatchData(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnServerMatchData(
            (Packet_Server_Match_data_DBMW*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnServerMatchData", 0xed5);
        log("./log/Except.log",
            "CPacketTranslater::OnServerMatchData() Exception Break : %s",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnServerMatchData", 0xeda);
        log("./log/Except.log",
            "CPacketTranslater::OnServerMatchData() Exception Break");
    }
}

void CPacketTranslater::OnManagerEventTriggerAck(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnManagerEventTriggerAck(
            (Packet_Manager_Event_Trigger_Ack*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnManagerEventTriggerAck", 0xf1e);
        log("./log/Except.log",
            "CPacketTranslater::OnManagerEventTriggerAck() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnManagerEventTriggerAck", 0xf23);
        log("./log/Except.log",
            "CPacketTranslater::OnManagerEventTriggerAck() Exception Break\n");
    }
}

void CPacketTranslater::OnRecvLoadingTimeReport(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnSaveLoadingTimeReport(
            (Packet_DBMW_Loading_Time_Report*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRecvLoadingTimeReport", 0xa09);
        log("./log/Except.log",
            "CPacketTranslater::OnRecvLoadingTimeReport() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnRecvLoadingTimeReport", 0xa0e);
        log("./log/Except.log",
            "CPacketTranslater::OnRecvLoadingTimeReport() Exception Break\n");
    }
}

void CPacketTranslater::OnSaveFatigueBatteryStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        m_pclApp->m_dbManager.OnSaveFatigueBattery(
            (Packet_DBMW_Fatigue_Battery_Money_Statistic*)header);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnSaveFatigueBatteryStatistic", 0xa46);
        log("./log/Except.log",
            "CPacketTranslater::OnRecvLoadingTimeReport() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnSaveFatigueBatteryStatistic", 0xa4b);
        log("./log/Except.log",
            "CPacketTranslater::OnRecvLoadingTimeReport() Exception Break\n");
    }
}

void CPacketTranslater::OnServeQueueLoadStatistic(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    Packet_Server_Queue_Load_Statistic* pkt =
        (Packet_Server_Queue_Load_Statistic*)header;
    unsigned char fieldA;
    if (pkt->m_fieldA == 0xc8)
    {
        fieldA = (unsigned char)(pkt->m_fieldA - m_pclApp->m_appConfig->Get_DbmwType());
    }
    else
    {
        fieldA = pkt->m_fieldA;
    }
    try
    {
        m_pclApp->m_dbManager.SaveServerQueueLoadStatistic(
            fieldA, pkt->m_fieldB, pkt->m_fieldC);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnServeQueueLoadStatistic", 0xae8);
        log("./log/Except.log",
            "CPacketTranslater::OnServeQueueLoadStatistic() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnServeQueueLoadStatistic", 0xaed);
        log("./log/Except.log",
            "CPacketTranslater::OnServeQueueLoadStatistic() Exception Break\n");
    }
}

void CPacketTranslater::OnDBLoadRequestGuildBoardOpen(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Load_Request_Guild_Board_Open* pkt =
            (Packet_DB_Load_Request_Guild_Board_Open*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        int count = 0;
        STGuildBoardDBInfo boards[0x31];
        if (!m_pclApp->m_dbManager.OnLoadGuildBoard(
                *(int*)((char*)pkt + 0xa), count, boards))
        {
            CMyFileLog log("OnDBLoadRequestGuildBoardOpen", 0xf8a);
            log("./log/Except",
                "CPacketTranslater::OnDBLoadRequestGuildBoardOpen()\tGuild Id : %d,\t Query Result : %d\n",
                *(int*)((char*)pkt + 0xa), 0);
            Packet_DB_Load_Reply_Guild_Board_Open reply;
            *(unsigned short*)((char*)&reply + 0xa) = 1;
            *(char*)((char*)&reply + 0xc) = 1;
            *(int*)((char*)&reply + 0xd) = *(int*)((char*)pkt + 0xa);
            *(int*)((char*)&reply + 0x11) = *(int*)((char*)pkt + 0xe);
            *(char*)((char*)&reply + 0x15) = 0;
            gs->SendToServer((char*)&reply, 0x688);
            return;
        }
        int pageCount = count / 10;
        int rem = count - pageCount * 10;
        for (int page = 0; page < pageCount; page++)
        {
            Packet_DB_Load_Reply_Guild_Board_Open reply;
            *(char*)((char*)&reply + 0xc) = 0;
            *(int*)((char*)&reply + 0xd) = *(int*)((char*)pkt + 0xa);
            *(int*)((char*)&reply + 0x11) = *(int*)((char*)pkt + 0xe);
            *(char*)((char*)&reply + 0x15) = 0xa;
            for (int i = 0; i <= 9; i++)
            {
                char* dst = (char*)&reply + 0x16 + i * 0xa5;
                char* src = (char*)boards + (page * 10 + i) * 0xa5;
                memcpy(dst, src, 0x78);
                *(int*)(dst + 0x78) = *(int*)(src + 0x78);
                *(int*)(dst + 0x7c) = *(int*)(src + 0x7c);
                *(int*)(dst + 0x88) = *(int*)(src + 0x88);
                memcpy(dst + 0x84, src + 0x84, 0x21);
            }
            if (page + 1 == pageCount && rem == 0)
                *(char*)((char*)&reply + 0xc) = 1;
            gs->SendToServer((char*)&reply, 0x688);
        }
        if (rem != 0)
        {
            Packet_DB_Load_Reply_Guild_Board_Open reply;
            *(char*)((char*)&reply + 0xc) = 1;
            *(int*)((char*)&reply + 0xd) = *(int*)((char*)pkt + 0xa);
            *(int*)((char*)&reply + 0x11) = *(int*)((char*)pkt + 0xe);
            *(char*)((char*)&reply + 0x15) = (char)rem;
            for (int i = 0; i < rem; i++)
            {
                char* dst = (char*)&reply + 0x16 + i * 0xa5;
                char* src = (char*)boards + (pageCount * 10 + i) * 0xa5;
                memcpy(dst, src, 0x78);
                *(int*)(dst + 0x78) = *(int*)(src + 0x78);
                *(int*)(dst + 0x7c) = *(int*)(src + 0x7c);
                *(int*)(dst + 0x88) = *(int*)(src + 0x88);
                memcpy(dst + 0x84, src + 0x84, 0x21);
            }
            gs->SendToServer((char*)&reply, 0x688);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBLoadRequestGuildBoardOpen", 0xf98);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestGuildBoardOpen() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnDBLoadRequestGuildBoardOpen", 0xf9d);
        log("./log/Except",
            "CPacketTranslater::OnDBLoadRequestGuildBoardOpen() Exception Break\n");
    }
}

void CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* pkt = (char*)header;
        unsigned char serverInfo = *(unsigned char*)(pkt + 0xa);
        int accId = *(int*)(pkt + 0xb);
        int characNo = *(int*)(pkt + 0xf);
        CMyFileLog log1("OnPcRoomPlayTimeReward", 0x141b);
        log1("./log/event",
             "CPacketTranslater::OnPcRoomPlayTimeReward Noti acc_id(%d), charac_no(%d), server_info(%d)",
             accId, characNo, serverInfo);
        unsigned int pinNo = 0;
        char pinBuf[0x15];
        memset(pinBuf, 0, 0x15);
        if (!m_pclApp->m_dbManager.updateNexonPinPcRoomPlayTimeEvent(
                serverInfo, accId, pinNo, pinBuf, 0x15))
        {
            CMyFileLog log("OnPcRoomPlayTimeReward", 0x1423);
            log("./log/event",
                "CPacketTranslater::OnPcRoomPlayTimeReward Error acc_id(%d), charac_no(%d), server_info(%d)",
                accId, characNo, serverInfo);
            return;
        }
        time_t now = time(0);
        tm* t = localtime(&now);
        t->tm_mday += 1;
        t->tm_hour = 0;
        t->tm_min = 0;
        time_t tomorrow = mktime(t);
        char str[0x100];
        memset(str, 0, 0x100);
        sprintf(str,
                "\xbf\xa9\xb8\xa7\xb9\xe6\xc7\xd0\x20\xb1\xe2\xb0\xa3\xbf\xa1\x20\x31\xbd\xc3\xb0\xa3\xb5\xbf\xbe\xc8\x20\x50\x43\xb9\xe6\xbf\xa1\xbc\xad\x20\xc1\xa2\xbc\xd3\xc0\xbb\x20\xc0\xaf\xc1\xf6\xc7\xcf\xbd\xc5\x20\x50\x43\xb9\xe6\x20\xc0\xaf\xc0\xfa\x20\xbf\xa9\xb7\xaf\xba\xd0\xb2\xb2\x20\xc6\xaf\xba\xb0\xc7\xd1\x20\xbc\xb1\xb9\xb0\xc0\xbb\x20\xb5\xe5\xb8\xb3\xb4\xcf\xb4\xd9\x2e\x0a\x20\x2d\x20\xb3\xd8\xbd\xbc\xc7\xc9\x3a\x20\x25\x73\x20",
                pinBuf);
        str[0x68] = 0x1e;
        str[0x7d] = 0x1f;
        int letterNo = 0;
        if (!m_pclApp->m_dbManager.InsertLetter(
                characNo, 0,
                "\xb4\xf8\xc6\xc4\x50\x43\xb9\xe6\x20\xbd\xe6\xb8\xd3\xc5\xb8\xc0\xd3",
                str, letterNo, tomorrow))
        {
            CMyFileLog log("OnPcRoomPlayTimeReward", 0x143d);
            log("./log/event",
                "CPacketTranslater::OnPcRoomPlayTimeReward Letter Error acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d)",
                accId, characNo, serverInfo, pinNo);
            return;
        }
        Packet_Monitor_Notify_New_Mail mail;
        *(int*)((char*)&mail + 0xf) = characNo;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&mail, mail.packetSize);
        CMyFileLog log2("OnPcRoomPlayTimeReward", 0x1447);
        log2("./log/event",
             "CPacketTranslater::OnPcRoomPlayTimeReward reward acc_id(%d), charac_no(%d), server_info(%d), pin_num(%d), letter_id(%d)",
             accId, characNo, serverInfo, pinNo, letterNo);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnPcRoomPlayTimeReward", 0x144c);
        log("./log/Except",
            "CPacketTranslater::OnPcRoomPlayTimeReward Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnPcRoomPlayTimeReward", 0x1451);
        log("./log/Except",
            "CPacketTranslater::OnPcRoomPlayTimeReward Exception Break\n");
    }
}

void CPacketTranslater::OnAddBuddy(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* pkt = (char*)header;
        Packet_DBMW_Add_Buddy_Reply reply;
        *(int*)((char*)&reply + 0xa) = *(int*)(pkt + 0xa);
        int result = 0;
        m_pclApp->m_dbManager.AddBuddy(*(int*)(pkt + 0xa), pkt + 0xe,
                                       *(STBuddyDBInfo*)((char*)&reply + 0xe),
                                       result);
        *(char*)((char*)&reply + 0x35) = (char)result;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnAddBuddy", 0x2f5);
        log("./log/Except", "CPacketTranslater::OnAddBuddy() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnAddBuddy", 0x2fa);
        log("./log/Except", "CPacketTranslater::OnAddBuddy() Exception Break\n");
    }
}

char CPacketTranslater::OnRequestIPCounterList(PacketHeader* header)
{
    std::vector<st_ip_counter_list> vec1;
    std::vector<st_full_ip_counter_list> vec2;
    if (!m_pclApp)
        return 0;
    try
    {
        char* pkt = (char*)header;
        if (!m_pclApp->m_dbManager.QueryIPCounter(
                *(unsigned char*)(pkt + 0xa), vec1, vec2))
        {
            CMyFileLog log("OnRequestIPCounterList", 0xb8a);
            log("./log/Secu",
                "CPacketTranslater::OnRequestIPCounterList insert fail\n");
            return 0;
        }
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        if (!vec1.empty())
        {
            int size = vec1.size();
            int srcIdx = 0;
            int batch = 0;
            while (srcIdx < size)
            {
                Packet_Response_IPCounterList reply;
                int count = 0;
                while (count <= 0x95 && srcIdx < size)
                {
                    (*(st_ip_counter_list*)((char*)&reply + 0xc + count * 0x14))
                        .CopyStruct(vec1[srcIdx]);
                    srcIdx++;
                    count++;
                }
                *(char*)((char*)&reply + 0xb) = (char)count;
                if (batch == 0)
                    *(char*)((char*)&reply + 0xa) = 0;
                else if (srcIdx >= size)
                    *(char*)((char*)&reply + 0xa) = 2;
                else
                    *(char*)((char*)&reply + 0xa) = 1;
                unsigned short sendSize =
                    (unsigned short)(0xbc4 - (0x96 - count) * 0x14);
                ms->SendToServer((char*)&reply, sendSize);
                CMyFileLog log("OnRequestIPCounterList", 0xbab);
                log("./log/Secu",
                    "[IP Counter] Packet Send - Stats : %3d, Cnt : %3d",
                    batch, count);
                batch++;
            }
        }
        else
        {
            Packet_Response_IPCounterList reply;
            ms->SendToServer((char*)&reply, 0xc);
        }
        if (!vec2.empty() && *(unsigned char*)(pkt + 0xb) != 0)
        {
            int size = vec2.size();
            int srcIdx = 0;
            int batch = 0;
            while (srcIdx < size)
            {
                Packet_Response_D_IPCounterList reply;
                int count = 0;
                while (count <= 0x95 && srcIdx < size)
                {
                    (*(st_full_ip_counter_list*)((char*)&reply + 0xc +
                                                 count * 0x18))
                        .CopyStruct(vec2[srcIdx]);
                    srcIdx++;
                    count++;
                }
                *(char*)((char*)&reply + 0xb) = (char)count;
                if (batch == 0)
                    *(char*)((char*)&reply + 0xa) = 0;
                else if (srcIdx >= size)
                    *(char*)((char*)&reply + 0xa) = 2;
                else
                    *(char*)((char*)&reply + 0xa) = 1;
                unsigned short sendSize =
                    (unsigned short)(0xe1c - (0x96 - count) * 0x18);
                ms->SendToServer((char*)&reply, sendSize);
                CMyFileLog log("OnRequestIPCounterList", 0xbd8);
                log("./log/Secu",
                    "[D_IP Counter] Packet Send - Stats : %3d, Cnt : %3d",
                    batch, count);
                batch++;
            }
        }
        else
        {
            Packet_Response_D_IPCounterList reply;
            ms->SendToServer((char*)&reply, 0xc);
        }
        return 1;
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestIPCounterList", 0xbe9);
        log("./log/Except",
            "CPacketTranslater::OnRequestIPCounterList Exception Break : %s\n",
            e.what());
        return 0;
    }
    catch (...)
    {
        CMyFileLog log("OnRequestIPCounterList", 0xbee);
        log("./log/Except",
            "CPacketTranslater::OnRequestIPCounterList Exception Break\n");
        return 0;
    }
}

void CPacketTranslater::onQueryTowerFullRank(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* pkt = (char*)header;
        std::vector<stTowerRank_t> ranks;
        if (!m_pclApp->m_dbManager.queryTowerFullRank(
                *(unsigned int*)(pkt + 0xa), ranks,
                *(unsigned int*)(pkt + 0xe)))
            return;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        Packet_Reply_Load_Tower_Full_Rank reply;
        *(char*)((char*)&reply + 0xa) = 1;
        if (*(unsigned int*)(pkt + 0xe) != 0x2710)
            *(char*)((char*)&reply + 0xa) = 0;
        CMyFileLog log1("onQueryTowerFullRank", 0x59b);
        log1("./log/DeathTower", "(tower_idx:%d)(rank count:%d)\n",
             *(unsigned int*)(pkt + 0xa), ranks.size());
        int i = 0;
        for (std::vector<stTowerRank_t>::const_iterator it = ranks.begin();
             it != ranks.end(); ++it)
        {
            memcpy((char*)&reply + 0x13 + i * 0x65, &*it, 0x65);
            i++;
            if (i > 0x3b)
            {
                *(char*)((char*)&reply + 0xb) = (char)i;
                ms->SendToServer((char*)&reply, 0x17bf);
                CMyFileLog log("onQueryTowerFullRank", 0x5a8);
                log("./log/DeathTower", "(tower_idx:%d)(send count:%d)\n",
                     *(unsigned int*)(pkt + 0xa), i);
                i = 0;
                *(char*)((char*)&reply + 0xa) = 0;
                DNFFLib::Sleep_Ext(0, 0x30d40);
            }
        }
        if (i != 0)
        {
            *(char*)((char*)&reply + 0xb) = (char)i;
            unsigned short sendSize = (unsigned short)(0x13 + i * 0x65);
            ms->SendToServer((char*)&reply, sendSize);
            CMyFileLog log("onQueryTowerFullRank", 0x5b3);
            log("./log/DeathTower", "(tower_idx:%d)(send count:%d)\n",
                 *(unsigned int*)(pkt + 0xa), i);
            i = 0;
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("onQueryTowerFullRank", 0x5b9);
        log("./log/Except.log",
            "CPacketTranslater::onQueryTowerFullRank() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("onQueryTowerFullRank", 0x5be);
        log("./log/Except.log",
            "CPacketTranslater::onQueryTowerFullRank() Exception Break\n");
    }
}

void CPacketTranslater::OnRequestARSInfo(PacketHeader* header)
{
    std::vector<st_ars_info_list> list;
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.QueryLoadARSInfo(list))
        {
            CMyFileLog log("OnRequestARSInfo", 0xdf6);
            log("./log/Secu", "CPacketTranslater::OnRequestARSInfo Select fail\n");
            return;
        }
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        if (!list.empty())
        {
            int size = list.size();
            int srcIdx = 0;
            int batch = 0;
            while (srcIdx < size)
            {
                Packet_Set_ARS_Info reply;
                int count = 0;
                while (count <= 0x63 && srcIdx < size)
                {
                    (*(st_ars_info_list*)((char*)&reply + 0xf + count * 0xc))
                        .CopyStruct(list[srcIdx]);
                    srcIdx++;
                    count++;
                }
                *(char*)((char*)&reply + 0xa) = (char)count;
                if (batch == 0)
                    *(char*)((char*)&reply + 0xe) = 0;
                else if (srcIdx >= size)
                    *(char*)((char*)&reply + 0xe) = 2;
                else
                    *(char*)((char*)&reply + 0xe) = 1;
                unsigned short sendSize =
                    (unsigned short)(0x4bf - (0x64 - count) * 0xc);
                ms->SendToServer((char*)&reply, sendSize);
                CMyFileLog log("OnRequestARSInfo", 0xe1a);
                log("./log/Secu",
                    "[ARS_INFO] Packet Send - Stats : %3d, Cnt : %3d",
                    batch, count);
                batch++;
            }
        }
        else
        {
            Packet_Set_ARS_Info reply;
            *(char*)((char*)&reply + 0xa) = 0;
            *(char*)((char*)&reply + 0xe) = 0;
            ms->SendToServer((char*)&reply, 0x4bf);
            CMyFileLog log("OnRequestARSInfo", 0xe2d);
            log("./log/Secu", "[ARS_INFO] Packet Send - Stats : %3d, Cnt : 0",
                0);
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestARSInfo", 0xe32);
        log("./log/Except",
            "CPacketTranslater::OnRequestARSInfo Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnRequestARSInfo", 0xe37);
        log("./log/Except",
            "CPacketTranslater::OnRequestARSInfo Exception Break\n");
    }
}

void CPacketTranslater::OnQueryGuild(PacketHeader* header)
{
    Packet_DB_Reply_Query_Guild reply;
    if (!m_pclApp)
        return;
    try
    {
        char* pkt = (char*)header;
        unsigned int guildId = *(unsigned int*)(pkt + 0xb);
        unsigned int serverGroup = *(unsigned int*)(pkt + 0xf);
        if (!m_pclApp->m_dbManager.QueryGuild(
                *(unsigned char*)(pkt + 0xa), guildId, reply))
        {
            CMyFileLog log("OnQueryGuild", 0x56);
            log("./log/Except",
                "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",
                guildId, *(char*)((char*)&reply + 0xa));
            return;
        }
        if (!m_pclApp->m_dbManager.QuerySubGuildMaster(
                *(unsigned char*)(pkt + 0xa), guildId, reply))
        {
            CMyFileLog log("OnQueryGuild", 0x5b);
            log("./log/Except",
                "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",
                guildId, *(char*)((char*)&reply + 0xa));
            return;
        }
        if (!m_pclApp->m_dbManager.QueryGuildSkill(
                *(unsigned char*)(pkt + 0xa), guildId, reply))
        {
            CMyFileLog log("OnQueryGuild", 0x60);
            log("./log/Except",
                "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",
                guildId, *(char*)((char*)&reply + 0xa));
            return;
        }
        if (!m_pclApp->m_dbManager.QueryGuildNotiMessage(
                *(unsigned char*)(pkt + 0xa), guildId, reply))
        {
            CMyFileLog log("OnQueryGuild", 0x65);
            log("./log/Except",
                "CPacketTranslater::OnQueryGuild()\tGuild Id : %d,\t Query Result : %d\n",
                guildId, *(char*)((char*)&reply + 0xa));
            return;
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0x135);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnQueryGuild() Exception Break : %s\n",
               e.what());
        CMyFileLog log("OnQueryGuild", 0x74);
        log("./log/Except",
            "CPacketTranslater::OnQueryGuild() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnQueryGuild() Exception Break");
        CMyFileLog log("OnQueryGuild", 0x7a);
        log("./log/Except",
            "CPacketTranslater::OnQueryGuild() Exception Break\n");
    }
}

void CPacketTranslater::OnReqOntimeEventIdx(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(
            "CPacketTranslater::OnReqOntimeEventIdx() : 0 == m_pclApp");
    try
    {
        Packet_Result_OnTimeEvent_Idx reply;
        m_pclApp->m_dbManager.QueryOnTimeEventIdx(reply);
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* pkt = tcp->makePacketHeader(0x2341, 0xf);
            memcpy(pkt + 0xa, (char*)&reply + 0xa, 5);
            tcp->SendToServer(pkt);
        }
        else
        {
            CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
            ms->SendToServer((char*)&reply, 0xf);
            CMyFileLog log("OnReqOntimeEventIdx", 0x1098);
            log("./log/TcpServer", "OnReqOntimeEventIdx:GetTcpServer null");
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnReqOntimeEventIdx", 0x109d);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnReqOntimeEventIdx", 0x10a2);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n");
    }
}

void CPacketTranslater::OnReqOntimeEventIdxUpdate(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(
            "CPacketTranslater::OnReqOntimeEventIdxUpdate() : 0 == m_pclApp");
    try
    {
        char* pktIn = (char*)header;
        m_pclApp->m_dbManager.QueryOnTimeEventIdxUpdate(
            (Packet_Req_Ontime_Event_Idx_Update*)pktIn);
        Packet_Result_Ontime_Event_Idx_Update reply;
        *(int*)((char*)&reply + 0xa) = *(int*)(pktIn + 0x12);
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* pkt = tcp->makePacketHeader(0x2348, 0xe);
            memcpy(pkt + 0xa, (char*)&reply + 0xa, 4);
            tcp->SendToServer(pkt);
        }
        else
        {
            CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
            ms->SendToServer((char*)&reply, 0xf);
            CMyFileLog log("OnReqOntimeEventIdxUpdate", 0x114c);
            log("./log/TcpServer", "OnReqOntimeEventItem:GetTcpServer null");
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnReqOntimeEventIdxUpdate", 0x1151);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnReqOntimeEventIdxUpdate", 0x1156);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n");
    }
}

void CPacketTranslater::OnReqOntimeEventItem(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(
            "CPacketTranslater::OnReqOntimeEventItem() : 0 == m_pclApp");
    try
    {
        Packet_Result_Ontime_Event_Item reply;
        m_pclApp->m_dbManager.QueryOnTimeEventItem(reply);
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* pkt = tcp->makePacketHeader(0x2346, 0x14);
            memcpy(pkt + 0xa, (char*)&reply + 0xa, 0xa);
            tcp->SendToServer(pkt);
        }
        else
        {
            CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
            ms->SendToServer((char*)&reply, 0xf);
            CMyFileLog log("OnReqOntimeEventItem", 0x1118);
            log("./log/TcpServer", "OnReqOntimeEventItem:GetTcpServer null");
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnReqOntimeEventItem", 0x111d);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnReqOntimeEventItem", 0x1122);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n");
    }
}

void CPacketTranslater::OnQueryBuddyInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char* pkt = (char*)header;
        Packet_DBMW_Query_Buddy_Info_Reply reply;
        *(int*)((char*)&reply + 0xa) = *(int*)(pkt + 0xa);
        if (!m_pclApp->m_dbManager.QueryBuddyInfo(
                *(unsigned int*)(pkt + 0xa),
                (STBuddyDBInfo*)((char*)&reply + 0xf),
                *(unsigned char*)((char*)&reply + 0xe)))
            return;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnQueryBuddyInfo", 0x33c);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryBuddyInfo() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnQueryBuddyInfo", 0x341);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryBuddyInfo() Exception Break\n");
    }
}


void CPacketTranslater::OnQueryUnconnGuildMemberProxy(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_DB_Reply_Unconn_Guild_Member reply;
        reply.m_fieldA = *(int*)((char*)header + 0xa);
        reply.m_fieldE = *(int*)((char*)header + 0xe);
        if (!m_pclApp->m_dbManager.QueryGuildMemberProxy(
                reply.m_fieldA, reply.m_fieldE, reply.m_proxy))
        {
            CMyFileLog log("OnQueryUnconnGuildMemberProxy", 0x3ae);
            log("./log/GuildMemberErr",
                "Query Guild Member List Error g(%d), c(%d)\n",
                reply.m_fieldA, reply.m_fieldE);
            return;
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, reply.packetSize);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnQueryUnconnGuildMemberProxy", 0x3b7);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnQueryUnconnGuildMemberProxy", 0x3bc);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break\n");
    }
}

void CPacketTranslater::OnQueryGuildAllMembersProxy(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_DB_Reply_Guild_All_Members reply;
        reply.m_fieldA = *(int*)((char*)header + 0xa);
        reply.m_fieldE = *(int*)((char*)header + 0xe);
        unsigned short tot = 0;
        STGuildMemberProxy* temp = m_pclApp->m_guildManager->GetArrayTempGuildMemberList();
        memset(temp, 0, 0x4c2c);
        if (!m_pclApp->m_dbManager.QueryGuildAllMembersProxy(reply.m_fieldA, temp, tot))
        {
            CMyFileLog log("OnQueryGuildAllMembersProxy", 0x362);
            log("./log/GuildMemberErr",
                "Query All Guild Member List Error g(%d), c(%d)\n",
                reply.m_fieldA, reply.m_fieldE);
            return;
        }
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        int pages = tot / 0x5d;
        int remain = tot % 0x5d;
        int i = 0;
        for (; i < pages; i++)
        {
            if (i == 0)
                reply.m_flag = 0;
            else
                reply.m_flag = 1;
            if (remain == 0 && (i + 1) * 0x5d == (int)tot)
                reply.m_flag = 2;
            reply.m_count = 0x5d;
            memcpy((char*)&reply + 0x14, (char*)temp + i * 0x179d, 0x179d);
            gs->SendToServer((char*)&reply, reply.packetSize);
        }
        if (remain != 0)
        {
            reply.m_flag = 2;
            reply.m_count = (unsigned char)remain;
            memcpy((char*)&reply + 0x14, (char*)temp + i * 0x179d,
                   remain * 0x41);
            *(unsigned short*)((char*)&reply + 2) =
                (unsigned short)(remain * 0x41 + 0x14);
            gs->SendToServer((char*)&reply, reply.packetSize);
        }
        CMyFileLog log("OnQueryGuildAllMembersProxy", 0x38b);
        log("./log/GuildModify",
            "Query All Guild Member List g(%d), c(%d), tot(%d)\n",
            reply.m_fieldA, reply.m_fieldE, tot);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnQueryGuildAllMembersProxy", 0x38f);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnQueryGuildAllMembersProxy", 0x394);
        log("./log/Except.log",
            "CPacketTranslater::OnQueryGuildAllMembersProxy() Exception Break\n");
    }
}


// ============================================================
// CPacketTranslater（静态 handler）
// ============================================================
CApplication* CPacketTranslater::m_pclApp;

void CPacketTranslater::attach(CApplication* app)
{
    m_pclApp = app;
}

void CPacketTranslater::OnHeartBeat(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    CServerHandler* handler = m_pclApp->m_serverHandler;
    if (!handler)
        return;
    unsigned char idx = ((char*)header)[0xa];
    if (idx > 0x64)
        throw CDNFException(
            "CPacketTranslater::OnHeartBeat() \xc3\xa4\xb3\xce \xc0\xce\xb5\xa6\xbd\xba \xbf\xc0\xb7\xf9\n");
    handler->ResetHeartBeat(idx);
    if (!handler->IsConnectedMonitorServer(idx))
    {
        handler->SetConnectFlag(idx, 1);
        Packet_Monitor_Manager_Connect_OK pkt;
        handler->SendToTcpServer(&pkt, idx);
        printf("First Heart Beat Arrived From %d Group Monitor!\n", idx);
        CMyFileLog log("OnHeartBeat", 0x43);
        log("./log/Monitor", "First Heart Beat Arrived From %d Group Monitor!", idx);
    }
}

void CPacketTranslater::OnEventStart(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnEventStart : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnEventStart", 0x70);
        log("./log/Web",
            "CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), eventParam2(%d)\n",
            *(int*)((char*)header + 0xa),
            *(unsigned short*)((char*)header + 0xe),
            *(unsigned short*)((char*)header + 0x10));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventStart() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd\n");
        throw;
    }
}

void CPacketTranslater::OnEventEnd(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnEventEnd : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnEventEnd", 0x92);
        log("./log/Web", "CPacketTranslater::OnEventEnd() eventCode(%d)\n",
            *(int*)((char*)header + 0xa));
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventEnd() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventEnd() \xbf\xb9\xbf\xdc \xb9\xdf\xbb\xfd\n");
        throw;
    }
}

void CPacketTranslater::OnCommonPacket(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnCommonPacket : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnCommonPacket", 0xb5);
        log("./log/Web", "CPacketTranslater::OnCommonPacket() packet_id(%d)\n", header->packetId);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnEventEnd() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CPacketTranslater::OnEventEnd() Exception Break\n");
        throw;
    }
}

void CPacketTranslater::OnInnerPacketLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            CMyFileLog log("OnInnerPacketLogin", 0x1f0);
            log("./log/Except", "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
            return;
        }
        CMyFileLog log("OnInnerPacketLogin", 0x1f6);
        log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogin (sock:%d)",
            *(int*)((char*)header + 6));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnInnerPacketLogin", 0x1fa);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnInnerPacketLogin", 0x1ff);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break\n");
    }
}

void CPacketTranslater::OnInnerPacketLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            CMyFileLog log("OnInnerPacketLogout", 0x20a);
            log("./log/Except", "CPacketTranslater::OnInnerPacketLogout : 0 == m_pclApp");
            return;
        }
        int port = *(int*)((char*)header + 6);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        CTcpServer* server = handler->GetTcpServer((unsigned int)port);
        if (!server)
        {
            CMyFileLog log("OnInnerPacketLogout", 0x215);
            log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogout Invalid Server Instance(sock:%d)",
                port);
            return;
        }
        unsigned char idx = server->m_index;
        handler = m_pclApp->Get_ServerHandler();
        if (!handler->DeleteTcpServer(idx))
        {
            CMyFileLog log("OnInnerPacketLogout", 0x21d);
            log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer fail(sock:%d)",
                port);
            return;
        }
        CMyFileLog log("OnInnerPacketLogout", 0x221);
        log("./log/TcpServer",
            "CPacketTranslater::OnInnerPacketLogout DeleteTcpServer Success(TYPE:%d, sock:%d)",
            idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnInnerPacketLogout", 0x225);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnInnerPacketLogout", 0x22a);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogout Exception Break\n");
    }
}

void CPacketTranslater::OnTcpServerLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        int port = *(int*)((char*)header + 6);
        unsigned char idx = ((char*)header)[0xa];
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler->GetTcpServer(idx))
        {
            CMyFileLog log("OnTcpServerLogin", 0x239);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogin Duplicate Server Instance(TYPE:%d, sock:%d)",
                idx, port);
            return;
        }
        handler = m_pclApp->Get_ServerHandler();
        if (!handler->CreateTcpServer(idx, port))
        {
            CMyFileLog log("OnTcpServerLogin", 0x242);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogin CreateTcpServer fail(TYPE:%d, sock:%d)\n",
                idx, port);
            return;
        }
        printf("CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)", idx, port);
        CMyFileLog log("OnTcpServerLogin", 0x250);
        log("./log/TcpServer", "CPacketTranslater::OnTcpServerLogin(TYPE:%d, sock:%d)", idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnTcpServerLogin", 0x254);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnTcpServerLogin", 0x259);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogin Exception Break\n");
    }
}

void CPacketTranslater::OnTcpServerLogout(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        unsigned char idx = ((char*)header)[0xa];
        int port = *(int*)((char*)header + 6);
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (!handler->GetTcpServer(idx))
        {
            CMyFileLog log("OnTcpServerLogout", 0x269);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogout Invalid Server Instance(TYPE:%d, sock:%d)",
                idx, port);
            return;
        }
        if (!handler->DeleteTcpServer(idx))
        {
            CMyFileLog log("OnTcpServerLogout", 0x26f);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerLogout DeleteTcpServer fail(TYPE:%d, sock:%d)",
                idx, port);
            return;
        }
        printf("CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)", idx, port);
        CMyFileLog log("OnTcpServerLogout", 0x273);
        log("./log/TcpServer", "CPacketTranslater::OnTcpServerLogout(TYPE:%d, sock:%d)", idx, port);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnTcpServerLogout", 0x277);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogout Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnTcpServerLogout", 0x27c);
        log("./log/Except", "CPacketTranslater::OnTcpServerLogout Exception Break\n");
    }
}

void CPacketTranslater::OnTcpServerHeartbeat(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        unsigned char idx = ((char*)header)[0xa];
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        CTcpServer* server = handler->GetTcpServer(idx);
        if (!server)
        {
            CMyFileLog log("OnTcpServerHeartbeat", 0x28d);
            log("./log/TcpServer",
                "CPacketTranslater::OnTcpServerHeartbeat Invalid Server Instance(TYPE:%d, sock:%d)",
                idx, *(int*)((char*)header + 6));
            return;
        }
        server->NotifyHeartbeat();
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnTcpServerHeartbeat", 0x299);
        log("./log/Except", "CPacketTranslater::OnTcpServerHeartbeat Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnTcpServerHeartbeat", 0x29e);
        log("./log/Except", "CPacketTranslater::OnTcpServerHeartbeat Exception Break\n");
    }
}

void CPacketTranslater::OnWebNoticeInGameAD(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            return;
        Packet_Web_Notice_InGame_Advertisement pkt;
        m_pclApp->m_serverHandler->SendAllTcpServer(&pkt);
        CMyFileLog log("OnWebNoticeInGameAD", 0x2ae);
        log("./log/Web", "OnWebNoticeInGameAD() packet_id(%d)\n", header->packetId);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnWebNoticeInGameAD", 0x2b2);
        log("./log/Except", "CPacketTranslater::OnWebNoticeInGameAD Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnWebNoticeInGameAD", 0x2b7);
        log("./log/Except", "CPacketTranslater::OnWebNoticeInGameAD Exception Break\n");
    }
}

void CPacketTranslater::OnWebNoticeBroadcast(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnWebNoticeBroadcast : 0 == m_pclApp");
        int len = ((char*)header)[0x10a];
        CMyFileLog log("OnWebNoticeBroadcast", 0x1b2);
        log("./log/test", "%d, %s, %d, %s\n",
            ((char*)header)[0xa], (char*)header + 0xb, len, (char*)header + 0x10b);
        if (m_pclApp && m_pclApp->m_serverHandler)
        {
            std::vector<std::string> parts;
            std::string s((char*)header + 0xb, len);
            parse_string(parts, s, ',');
            for (std::vector<std::string>::iterator it = parts.begin();
                 it != parts.end(); ++it)
            {
                std::string tok = *it;
                int ch = atoi(tok.c_str());
                if (ch <= 0x64)
                {
                    Packet_Web_Notice_Single pkt;
                    ((char*)&pkt)[0xa] = len;
                    memset((char*)&pkt + 0xb, 0, 0xff);
                    strncpy((char*)&pkt + 0xb, (char*)header + 0x10b, len);
                    m_pclApp->m_serverHandler->SendToTcpServer((char*)&pkt, 0x10a, ch);
                }
            }
        }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnWebNoticeBroadcast", 0x1e0);
        log("./log/Except", "CPacketTranslater::OnWebNoticeBroadcast() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log("OnWebNoticeBroadcast", 0x1e5);
        log("./log/Except", "CPacketTranslater::OnWebNoticeBroadcast() Exception Break\n");
    }
}



// ============================================================
// CTableBase / CAppInit / CAppConfig / CServerConfig
// ============================================================
CTableBase::CTableBase() {}
CTableBase::~CTableBase() {}

int CTableBase::Load_Txt_Table_Data(const char* fileName, int idx)
{
    FILE* f = fopen(fileName, "r");
    if (!f)
        return -1;
    char buf[0x400];
    int count = 0;
    while (!feof(f) && fgets(buf, 0x400, f))
    {
        if (buf[0] == '#')
            continue;
        if (count >= idx)
            return -2;
        if (!Parse_Table(buf, count))
            return -1;
        count++;
    }
    fclose(f);
    return count;
}

CAppInit::CAppInit() {}
CAppInit::~CAppInit() {}

CAppStartInit::CAppStartInit() {}
CAppStartInit::~CAppStartInit() {}


int CAppStartInit::Save_pid(const std::string& path)
{
    std::string full = std::string("./pid/") + path + std::string(".pid");
    int fd = open(full.c_str(), 0x42, 0x1a4);
    if (fd < 0)
        return 0;
    char buf[0x400];
    memset(buf, 0, 0x400);
    sprintf(buf, "%ld\n", (long)getpid());
    int n = write(fd, buf, strlen(buf));
    if (n < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    if (strcmp(argv[2], "start") == 0)
    {
        int pid = fork();
        if (pid < 0)
            return -1;
        if (pid > 0)
            exit(0);
        setsid();
        chdir("./");
        umask(0);
    }
    if (!Save_pid(std::string(argv[1])))
        return -1;
    return 0;
}

void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    app->m_appConfig->Check_FileName(std::string(argv[1]));
    app->m_serverConfig = new CServerConfig;
    app->m_killUsrConfig = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) != 0)
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
}

CAppStopInit::CAppStopInit() {}
CAppStopInit::~CAppStopInit() {}


void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, Manager had stoped this program.");
    app->Clear();
    if (app->Send_Term_Signal(std::string(argv[1])))
        throw CDNFException("By CAppStopInit::Init(), this app had stoped!");
    throw CDNFException("By CAppStopInit::Init(), this app had stoped!_1");
}

CAppConfig::CAppConfig()
{
    m_cipher.Initialize("qortmddkqortmdcksqordudwlswjdguswn", 0x21, 0, 0, 0);
    memset(m_dbConnInfo, 0, 0x17e8);
    m_tcpPort = 0;
    m_dbmwType = 0;
    m_serverGroup = 0;
}
CAppConfig::~CAppConfig() {}

STDBConnInfo::STDBConnInfo()
{
    memset(this, 0, 0x11);
    memset(m_user, 0, 0x15);
    memset(m_pass, 0, 0x15);
    memset(m_db, 0, 0x1f);
    memset(m_data, 0, 0x100);
    m_port = 0;
    m_tail = 0;
}

int CAppConfig::Load_Table(const std::string& fileName)
{
    CMyFileLog log("Load_Table", 0x35d);
    log("./log/process.log", "CAppConfig::Load_Table :  _S_MOD_CFG_LOADER_BY_NAME\n");
    std::string path = "./cfg/" + fileName + ".cfg";
    int n = Load_Txt_Table_Data(path.c_str(), 0xff);
    if (n > 0 && n <= 0xfe)
        return n;
    CMyFileLog log2("Load_Table", 0x365);
    log2("./log/TableError.log", "App Config Table - ReturnCode = %d\n", n);
    throw CDNFException("CAppConfig::Load_Setup_Table() Exception Break!");
}

STDBConnInfo* CAppConfig::GetDBConnInfo(ENUM_DB_HANDLE_IDX idx)
{
    return (STDBConnInfo*)((char*)this + 0x60 + (int)idx * 0x168);
}

int CAppConfig::GetServerGroup()
{
    return m_serverGroup;
}

int CAppConfig::DecryptValue(const char* value, char* dst)
{
    char buf1[0x40] = {0};
    char buf2[0x40] = {0};
    if (!DNFFLib::Hex2Binary(value, (unsigned char*)buf2, 0x18))
        return 0;
    m_cipher.Decrypt(buf2, buf1, 0x18);
    strncpy(dst, buf1, 0x14);
    return 1;
}

#define DBMW_PARSE_PWD(i, keyname) \
    else if (strcmp(key, keyname) == 0) { \
        char b1[0x40] = {0}; char b2[0x40] = {0}; \
        if (!DNFFLib::Hex2Binary(value, (unsigned char*)b2, 0x18)) return 0; \
        m_cipher.Decrypt(b2, b1, 0x18); \
        memcpy(m_dbConnInfo[i].m_pass, b1, strlen(b1)); }

int CAppConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[2];
    if (DNFFLib::ExplodeString(data, " =\t\r\n\"", fields, 2) != 2)
        return 0;
    if (size > 0xfe)
        return 0;
    char* key = fields[0];
    char* value = fields[1];
    if (strcmp(key, "tick_value") == 0)
        m_tickValue = (char)atoi(value);
    else if (strcmp(key, "udp_port") == 0)
        m_udpPort = atoi(value);
    else if (strcmp(key, "master_db_ip") == 0)
        memcpy(m_dbConnInfo[0].m_host, value, strlen(value));
    else if (strcmp(key, "master_db_port") == 0)
        m_dbConnInfo[0].m_port = atoi(value);
    else if (strcmp(key, "master_db_acc") == 0)
        memcpy(m_dbConnInfo[0].m_user, value, strlen(value));
    else if (strcmp(key, "master_db_pwd") == 0)
        DecryptValue(value, m_dbConnInfo[0].m_pass);
    else if (strcmp(key, "master_db_name") == 0)
        memcpy(m_dbConnInfo[0].m_db, value, strlen(value));
    else if (strcmp(key, "neople_db_ip") == 0)
        memcpy(m_dbConnInfo[1].m_host, value, strlen(value));
    else if (strcmp(key, "neople_db_port") == 0)
        m_dbConnInfo[1].m_port = atoi(value);
    else if (strcmp(key, "neople_db_acc") == 0)
        memcpy(m_dbConnInfo[1].m_user, value, strlen(value));
    DBMW_PARSE_PWD(1, "neople_db_pwd")
    else if (strcmp(key, "neople_db_name") == 0)
        memcpy(m_dbConnInfo[1].m_db, value, strlen(value));
    else if (strcmp(key, "game_db_ip") == 0)
        memcpy(m_dbConnInfo[2].m_host, value, strlen(value));
    else if (strcmp(key, "game_db_port") == 0)
        m_dbConnInfo[2].m_port = atoi(value);
    else if (strcmp(key, "game_db_acc") == 0)
        memcpy(m_dbConnInfo[2].m_user, value, strlen(value));
    DBMW_PARSE_PWD(2, "game_db_pwd")
    else if (strcmp(key, "game_db_name") == 0)
        memcpy(m_dbConnInfo[2].m_db, value, strlen(value));
    else if (strcmp(key, "log_db_ip") == 0)
        memcpy(m_dbConnInfo[4].m_host, value, strlen(value));
    else if (strcmp(key, "log_db_port") == 0)
        m_dbConnInfo[4].m_port = atoi(value);
    else if (strcmp(key, "log_db_acc") == 0)
        memcpy(m_dbConnInfo[4].m_user, value, strlen(value));
    DBMW_PARSE_PWD(4, "log_db_pwd")
    else if (strcmp(key, "log_db_name") == 0)
        memcpy(m_dbConnInfo[4].m_db, value, strlen(value));
    else if (strcmp(key, "sso_db_ip") == 0)
        memcpy(m_dbConnInfo[5].m_host, value, strlen(value));
    else if (strcmp(key, "sso_db_port") == 0)
        m_dbConnInfo[5].m_port = atoi(value);
    else if (strcmp(key, "sso_db_acc") == 0)
        memcpy(m_dbConnInfo[5].m_user, value, strlen(value));
    DBMW_PARSE_PWD(5, "sso_db_pwd")
    else if (strcmp(key, "sso_db_name") == 0)
        memcpy(m_dbConnInfo[5].m_db, value, strlen(value));
    else if (strcmp(key, "game_db_2nd_ip") == 0)
        memcpy(m_dbConnInfo[3].m_host, value, strlen(value));
    else if (strcmp(key, "game_db_2nd_port") == 0)
        m_dbConnInfo[3].m_port = atoi(value);
    else if (strcmp(key, "game_db_2nd_acc") == 0)
        memcpy(m_dbConnInfo[3].m_user, value, strlen(value));
    DBMW_PARSE_PWD(3, "game_db_2nd_pwd")
    else if (strcmp(key, "game_db_2nd_name") == 0)
        memcpy(m_dbConnInfo[3].m_db, value, strlen(value));
    else if (strcmp(key, "guild_db_ip") == 0)
        memcpy(m_dbConnInfo[6].m_host, value, strlen(value));
    else if (strcmp(key, "guild_db_port") == 0)
        m_dbConnInfo[6].m_port = atoi(value);
    else if (strcmp(key, "guild_db_acc") == 0)
        memcpy(m_dbConnInfo[6].m_user, value, strlen(value));
    DBMW_PARSE_PWD(6, "guild_db_pwd")
    else if (strcmp(key, "guild_db_name") == 0)
        memcpy(m_dbConnInfo[6].m_db, value, strlen(value));
    else if (strcmp(key, "web_db_ip") == 0)
        memcpy(m_dbConnInfo[7].m_host, value, strlen(value));
    else if (strcmp(key, "web_db_port") == 0)
        m_dbConnInfo[7].m_port = atoi(value);
    else if (strcmp(key, "web_db_acc") == 0)
        memcpy(m_dbConnInfo[7].m_user, value, strlen(value));
    DBMW_PARSE_PWD(7, "web_db_pwd")
    else if (strcmp(key, "web_db_name") == 0)
        memcpy(m_dbConnInfo[7].m_db, value, strlen(value));
    else if (strcmp(key, "stat_db_ip") == 0)
        memcpy(m_dbConnInfo[0xf].m_host, value, strlen(value));
    else if (strcmp(key, "stat_db_port") == 0)
        m_dbConnInfo[0xf].m_port = atoi(value);
    else if (strcmp(key, "stat_db_acc") == 0)
        memcpy(m_dbConnInfo[0xf].m_user, value, strlen(value));
    DBMW_PARSE_PWD(0xf, "stat_db_pwd")
    else if (strcmp(key, "stat_db_name") == 0)
        memcpy(m_dbConnInfo[0xf].m_db, value, strlen(value));
    else if (strcmp(key, "dbmw_type") == 0)
        m_dbmwType = (char)atoi(value);
    else if (strcmp(key, "server_group") == 0)
        m_serverGroup = atoi(value);
    else if (strcmp(key, "tcp_port") == 0)
        m_tcpPort = atoi(value);
    else if (strcmp(key, "event_db_ip") == 0)
        memcpy(m_dbConnInfo[9].m_host, value, strlen(value));
    else if (strcmp(key, "event_db_port") == 0)
        m_dbConnInfo[9].m_port = atoi(value);
    else if (strcmp(key, "event_db_acc") == 0)
        memcpy(m_dbConnInfo[9].m_user, value, strlen(value));
    DBMW_PARSE_PWD(9, "event_db_pwd")
    else if (strcmp(key, "event_db_name") == 0)
        memcpy(m_dbConnInfo[9].m_db, value, strlen(value));
    else if (strcmp(key, "se_event_db_ip") == 0)
        memcpy(m_dbConnInfo[0xd].m_host, value, strlen(value));
    else if (strcmp(key, "se_event_db_port") == 0)
        m_dbConnInfo[0xd].m_port = atoi(value);
    else if (strcmp(key, "se_event_db_acc") == 0)
        memcpy(m_dbConnInfo[0xd].m_user, value, strlen(value));
    DBMW_PARSE_PWD(0xd, "se_event_db_pwd")
    else if (strcmp(key, "se_event_db_name") == 0)
        memcpy(m_dbConnInfo[0xd].m_db, value, strlen(value));
    else
        return 0;
    return 1;
}
int CAppConfig::Check_FileName(const std::string& fileName)
{
    std::string cfg = std::string("./cfg/") + fileName + std::string(".cfg");
    if (access(cfg.c_str(), 0) != 0)
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    std::string pid = std::string("./pid/") + fileName + std::string(".pid");
    if (access(pid.c_str(), 0) != 0)
        throw CDNFException(
            "CAppConfig::Set_FileName() There is already pid file! Exception Break! Check ./pid/*.pid files");
    return 1;
}

CServerConfig::CServerConfig() {}
CServerConfig::~CServerConfig() {}

int CServerConfig::Load_Table(const std::string& fileName)
{
    int n = Load_Txt_Table_Data(fileName.c_str(), 0xff);
    if (n >= 0 && n <= 0xfe)
        return n;
    CMyFileLog log("Load_Table", 0x39);
    log("./log/TableError.log", "Server Config Table - ReturnCode = %d\n", n);
    throw CDNFException("CServerConfig::Load_Setup_Table() Exception Break!");
}
int CServerConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[5];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 5) == 5 && size <= 0xfe)
    {
        ST_ServerInfo* info = &m_servers[size];
        info->m_type = (char)atoi(fields[0]);
        info->m_flag = (char)atoi(fields[1]);
        info->m_idx = (char)atoi(fields[2]);
        info->m_name = fields[3];
        info->m_port = (unsigned short)atoi(fields[4]);
        return 1;
    }
    return 0;
}

CKillUSRConfig::CKillUSRConfig() {}
CKillUSRConfig::~CKillUSRConfig() {}
int CKillUSRConfig::Load_Table(const std::string& fileName)
{
    int n = Load_Txt_Table_Data(fileName.c_str(), 0x64);
    if (n > 0 && n <= 0x64)
        return n;
    CMyFileLog log("Load_Table", 0x5b);
    log("./log/TableError", "Kill USR Config Table - ReturnCode = %d\n", n);
    throw CDNFException(
        std::string("CKillUSRConfig::Load_Setup_Table() Exception break!"));
}
int CKillUSRConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[4];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 4) == 4)
    {
        ST_KillUSRConfig* kc = new (std::nothrow) ST_KillUSRConfig;
        if (!kc)
            return 0;
        kc->m_type = atoi(fields[0]);
        kc->m_field4 = atoi(fields[1]);
        kc->m_field8 = atoi(fields[2]);
        kc->m_fieldC = atoi(fields[3]);
        m_list.push_back(kc);
        return 1;
    }
    return 0;
}
void CKillUSRConfig::Clear_Table()
{
    if (m_list.empty())
        return;
    for (std::vector<ST_KillUSRConfig*>::iterator it = m_list.begin();
         it != m_list.end(); ++it)
    {
        delete *it;
        *it = 0;
    }
    m_list.clear();
}

// ============================================================
// ST_ServerInfo / CVersionMgr / CSourceVersionMgr
// ============================================================
ST_ServerInfo::ST_ServerInfo()
{
    m_type = 0;
    m_flag = 0;
    m_idx = 0xff;
    m_port = 0;
}

ST_ServerInfo::~ST_ServerInfo() {}

// ============================================================
// StackBuffer 缓冲池（原版：TLS StackBufferContext + 0x4000 块池）
// ============================================================
StackBufferContext::StackBufferContext() {}

StackBufferContext::~StackBufferContext() {}

static __thread StackBufferContext* g_stackBufferContext;

static void allocStackBuffer(unsigned int size, unsigned char** buf, int* end)
{
    StackBufferContext* ctx = g_stackBufferContext;
    if (!ctx)
    {
        ctx = new StackBufferContext;
        g_stackBufferContext = ctx;
        ctx->m_buffers.reserve(0x20);
        ctx->m_blocks.reserve(8);
        unsigned char* block = new unsigned char[0x4000];
        ctx->m_blocks.push_back(block);
        ctx->m_blockIndex = 0;
        ctx->m_offset = 0;
        StackBufferContext::Buffer b;
        b.m_blockIndex = 0;
        b.m_offset = 0;
        b.m_size = 0;
        ctx->m_buffers.push_back(std::move(b));
    }
    if (size > 0x4000)
    {
        *buf = new unsigned char[size];
        *end = -1;
        return;
    }
    if (ctx->m_offset + (int)size > 0x4000)
    {
        int idx = ctx->m_blockIndex + 1;
        if (idx == (int)ctx->m_blocks.size())
        {
            unsigned char* nb = new unsigned char[0x4000];
            ctx->m_blocks.push_back(nb);
        }
        ctx->m_buffers.back().m_blockIndex = idx;
        ctx->m_buffers.back().m_offset = 0;
        ctx->m_blockIndex = idx;
        ctx->m_offset = 0;
    }
    *buf = ctx->m_blocks[ctx->m_blockIndex] + ctx->m_offset;
    ctx->m_offset += size;
    *end = ctx->m_blockIndex;
}

static void freeStackBuffer(unsigned char* buf, int end)
{
    if (end == -1)
    {
        if (buf)
            delete[] buf;
        return;
    }
    StackBufferContext* ctx = g_stackBufferContext;
    ctx->m_buffers.erase(ctx->m_buffers.begin() + end);
    if (ctx->m_buffers.empty())
    {
        ctx->m_blockIndex = 0;
        ctx->m_offset = 0;
    }
    else
    {
        ctx->m_blockIndex = ctx->m_buffers.back().m_blockIndex;
        ctx->m_offset = ctx->m_buffers.back().m_offset + ctx->m_buffers.back().m_size;
    }
}

static void freeAllStackBuffers()
{
    StackBufferContext* ctx = g_stackBufferContext;
    if (!ctx)
        return;
    for (std::vector<unsigned char*>::iterator it = ctx->m_blocks.begin();
         it != ctx->m_blocks.end(); ++it)
    {
        if (*it)
            delete[] *it;
    }
    delete ctx;
    g_stackBufferContext = 0;
}

StackBuffer::StackBuffer() : m_buf(0), m_end(0) {}

StackBuffer::StackBuffer(const StackBuffer& other)
{
    m_buf = other.m_buf;
    m_end = other.m_end;
    const_cast<StackBuffer&>(other).m_buf = 0;
    const_cast<StackBuffer&>(other).m_end = 0;
}

StackBuffer::~StackBuffer()
{
    if (m_buf)
        freeStackBuffer((unsigned char*)m_buf, m_end);
}

StackBuffer& StackBuffer::operator=(const StackBuffer& other)
{
    if (this != &other)
    {
        if (m_buf)
            freeStackBuffer((unsigned char*)m_buf, m_end);
        m_buf = other.m_buf;
        m_end = other.m_end;
        const_cast<StackBuffer&>(other).m_buf = 0;
        const_cast<StackBuffer&>(other).m_end = 0;
    }
    return *this;
}

void StackBuffer::alloc(unsigned int size)
{
    m_buf = 0;
    m_end = 0;
    allocStackBuffer(size, (unsigned char**)&m_buf, &m_end);
}

void StackBuffer::freeAll()
{
    freeAllStackBuffers();
}

char* StackBuffer::getBuffer()
{
    return m_buf;
}

StackBuffer_char::StackBuffer_char() {}
StackBuffer_char::StackBuffer_char(const StackBuffer_char& other) : StackBuffer(other) {}
StackBuffer_char::~StackBuffer_char() {}

void StackBuffer_char::alloc(unsigned int size)
{
    m_buf = 0;
    m_end = 0;
    allocStackBuffer(size, (unsigned char**)&m_buf, &m_end);
}

StackBuffer_char::operator char*()
{
    return getBuffer();
}

StackBuffer_wchar::StackBuffer_wchar() {}
StackBuffer_wchar::StackBuffer_wchar(const StackBuffer_wchar& other) : StackBuffer(other) {}
StackBuffer_wchar::~StackBuffer_wchar() {}

void StackBuffer_wchar::alloc(unsigned int size)
{
    m_buf = 0;
    m_end = 0;
    allocStackBuffer(size, (unsigned char**)&m_buf, &m_end);
}

StackBuffer_wchar::operator wchar_t*()
{
    return (wchar_t*)getBuffer();
}

StackBuffer_char sformat(const char* fmt, ...)
{
    char buf[0x200];
    va_list ap;
    va_start(ap, fmt);
    int len = vsnprintf(buf, 0x200, fmt, ap);
    if (len >= 0 && len <= 0x1ff)
    {
        StackBuffer_char tmp;
        tmp.alloc(len + 1);
        memcpy(tmp.getBuffer(), buf, len + 1);
        va_end(ap);
        return tmp;
    }
    len = vsnprintf(0, 0, fmt, ap);
    StackBuffer_char tmp;
    tmp.alloc(len + 1);
    vsnprintf(tmp.getBuffer(), len + 1, fmt, ap);
    va_end(ap);
    return tmp;
}

CVersionMgr::CVersionMgr(int a, int b, int c, int d)
{
    m_versions[0] = a;
    m_versions[1] = b;
    m_versions[2] = c;
    m_versions[3] = d;
}

CSourceVersionMgr::SourceVersion::SourceVersion(const SourceVersion& other)
{
    m_name = other.m_name;
    m_version = other.m_version;
}

CSourceVersionMgr::SourceVersion& CSourceVersionMgr::SourceVersion::operator=(const SourceVersion& other)
{
    m_name = other.m_name;
    m_version = other.m_version;
    return *this;
}

CSourceVersionMgr::SourceVersion::~SourceVersion() {}

CSourceVersionMgr::CSourceVersionMgr() {}
CSourceVersionMgr::~CSourceVersionMgr() {}

// ============================================================
// CQueryCounter
// ============================================================
// ============================================================
// ============================================================
// 杂项
// ============================================================
int getErrno()
{
    return *__errno_location();
}

int parse_string(std::vector<std::string>& v, std::string& s, char c)
{
    int len = s.size();
    int pos = 0;
    std::string tok;
    while (pos < len)
    {
        int found = s.find(c, pos);
        if (found == (int)std::string::npos)
        {
            tok = s.substr(pos, len - pos);
            if (!tok.empty())
                v.push_back(tok);
            break;
        }
        tok = s.substr(pos, found - pos);
        if (!tok.empty())
            v.push_back(tok);
        pos = found + 1;
    }
    return 1;
}


// 强制发出原版存在的 libstdc++ 分配器弱符号
template class std::allocator<std::string>;
template class std::allocator<ST_KillUSRConfig*>;



CDNFException::CDNFException(const std::string& msg) : m_msg(msg) {}
CDNFException::~CDNFException() throw() {}

const char* CDNFException::what() const throw()
{
    CMyFileLog log("what", 0x1a);
    log("./log/Except", "%s", m_msg.c_str());
    return m_msg.c_str();
}

unsigned long long TIME_to_ulonglong_date(void* t)
{
    unsigned int* p = (unsigned int*)t;
    return (unsigned long long)(p[0] * 10000 + p[1] * 100 + p[2]);
}

unsigned long long TIME_to_ulonglong_time(void* t)
{
    unsigned int* p = (unsigned int*)t;
    return (unsigned long long)(p[3] * 10000 + p[4] * 100 + p[5]);
}

unsigned long long TIME_to_ulonglong(void* t)
{
    return 0;
}

unsigned long long TIME_to_ulonglong_datetime(void* t)
{
    return 0;
}

// ============================================================
// 出库化 getter（原版为独立符号）
// ============================================================


// ---- CGameServer / CGuildServer / CMonitorServer / CStatisticsServer（dbmw 同构）----
#define IMPL_SERVER_CLASS(CLS) \
CLS::CLS() : m_type(0xff) { m_port = 0; m_padA = 0; m_flag = 0; m_udpHandler = 0; } \
CLS::~CLS() {} \
void CLS::OnDisconnect() { m_padA = 0; } \
void CLS::Init(unsigned char type, std::string& name, unsigned short port, \
               unsigned char flag) \
{ \
    m_type = type; \
    m_name = name; \
    m_port = port; \
    m_udpHandler = new CUdpHandler; \
    m_udpHandler->InitClientSocket(); \
    m_flag = flag; \
} \
void CLS::SendToServer(char* buf, int len) \
{ \
    if (m_udpHandler) \
        m_udpHandler->SendToServer(buf, len, m_port, m_name.c_str()); \
} \
char CLS::IsValidGameServer() \
{ \
    if (m_type != 0xff) \
        return 1; \
    return 0; \
}

IMPL_SERVER_CLASS(CGameServer)
IMPL_SERVER_CLASS(CGuildServer)
IMPL_SERVER_CLASS(CMonitorServer)
IMPL_SERVER_CLASS(CStatisticsServer)

#undef IMPL_SERVER_CLASS

void CGameServer::SendHeartBeat()
{
    if (m_udpHandler)
    {
        Packet_Monitor_UDP_HeartBeat pkt;
        pkt.m_fieldA = 0xc8;
        m_udpHandler->SendToServer((char*)&pkt, 0xb, m_port, m_name.c_str());
    }
}

#define IMPL_SENDHEARTBEAT(CLS) \
void CLS::SendHeartBeat() \
{ \
    if (m_udpHandler) \
    { \
        Packet_Monitor_UDP_HeartBeat pkt; \
        pkt.m_fieldA = 0xc8; \
        SendToServer((char*)&pkt, pkt.packetSize); \
    } \
}

IMPL_SENDHEARTBEAT(CGuildServer)
IMPL_SENDHEARTBEAT(CMonitorServer)
IMPL_SENDHEARTBEAT(CStatisticsServer)

#undef IMPL_SENDHEARTBEAT

Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat()
    : PacketHeader(0x3ec, 0xb)
{
    m_fieldA = 0xff;
}

Packet_Notice_Guild_Mail_Arrived::Packet_Notice_Guild_Mail_Arrived()
    : PacketHeader(0x415, 0x33)
{
    memset((char*)this + 0xb, 0, 0x28);
}

int get_awardItem_using_interval()
{
    time_t t = time(0);
    struct tm* now = localtime(&t);
    struct tm base;
    memset(&base, 0, 0x2c);
    base.tm_year = 106;
    base.tm_mon = 6;
    base.tm_mday = 1;
    now->tm_mon += 1;
    if (now->tm_mon > 0xb)
    {
        now->tm_mon = 0;
        now->tm_year += 1;
    }
    now->tm_hour = 0;
    now->tm_min = 0;
    now->tm_sec = 0;
int get_day_interval(struct tm* a, struct tm* b);
    return get_day_interval(&base, now);
}

int get_day_interval(struct tm* a, struct tm* b);
int get_day_interval(struct tm* a, struct tm* b)
{
    time_t ta = mktime(a);
    time_t tb = mktime(b);
    return (int)((tb - ta) / 86400);
}

char isDayTimeOver(unsigned int timestamp, unsigned int days)
{
    struct tm t;
    time_t now;
    time(&now);
    struct tm* p = localtime(&now);
    t = *p;
    t.tm_mday -= days;
    time_t limit = mktime(&t);
    return (int)timestamp < (int)limit;
}

unsigned int CDBManager::GetIdentity(CDBHandle* h)
{
    if (!h->set_query(0x4e5d, "seLect @@identity"))
        return 0;
    if (!h->exec(0x4e5d))
        return 0;
    if (!h->fetch())
        return 0;
    unsigned int id;
    if (!h->get_uint(0, id))
        return 0;
    return id;
}



int CAppConfig::Get_ServerUdpPort() { return m_udpPort; }
int CAppConfig::Get_ServerTcpPort() { return m_tcpPort; }
unsigned char CAppConfig::Get_FrameCountValue() { return m_tickValue; }
unsigned char CAppConfig::Get_DbmwType() { return m_dbmwType; }


void CPacketDecoder::TcpProcess()
{
    if (!m_tcpQueue)
        return;
    if (!m_tcpRecvQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    while (!m_tcpQueue->empty())
    {
        CTcpRecvBuffer* buf = m_tcpQueue->front();
        m_tcpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        if (m_tcpQueue->size() > 0xa)
        {
            CMyFileLog log("TcpProcess", 0xe7);
            log("./log/TcpRecv", "cnt(%)id(%d)size(%d)ip(%d)",
                (int)m_tcpQueue->size(), p->packetId, p->packetSize,
                ((char*)buf)[6]);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_tcpRecvBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException("CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_tcpRecvBLock);
            delete buf;
        }
    }
}

void CPacketDecoder::UdpProcess()
{
    if (!m_udpQueue)
        return;
    if (!m_udpQLock)
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    while (!m_udpQueue->empty())
    {
        CUdpRecvBuffer* buf = m_udpQueue->front();
        m_udpQueue->pop();
        if (!buf)
            continue;
        PacketHeader* p = (PacketHeader*)buf;
        if (m_udpQueue->size() > 0x64)
        {
            CMyFileLog log("UdpProcess", 0x91);
            log("./log/UdpRecv", "cnt(%d)id(%d)size(%d)",
                (int)m_udpQueue->size(), p->packetId, p->packetSize);
        }
        if (!MsgDecode(p))
        {
            {
                CGuard<CMutex> guard(m_udpBLock);
                delete buf;
            }
            printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n",
                   p, p->packetId);
            throw CDNFException("CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
        }
        {
            CGuard<CMutex> guard(m_udpBLock);
            delete buf;
        }
    }
}

char CPacketDecoder::MsgDecode(PacketHeader* header)
{
    if (!header)
        return 0;
    unsigned short id = header->packetId;
    if (id > 0x27ff || id <= 0x3e7)
    {
        printf("Unknown Packet(%d)", id);
        CMyFileLog log("MsgDecode", 0x6c);
        log("./log/PacketDecode", "Unknown Packet(%d)", id);
        return 0;
    }
    void (**handler)(PacketHeader*) = (void (**)(PacketHeader*))((char*)this + 0x18 + id * 4);
    if (!*handler)
        return 0;
    (*handler)(header);
    return 1;
}

void CPacketDecoder::Attach(CApplication* app)
{
    if (!app)
        return;
    m_udpQueue = app->Get_UdpPacketParseQ();
    m_tcpQueue = app->Get_TcpNetSystem()->Get_TcpSwapQPacket()->GetParseQ();
    m_udpQLock = app->Get_UdpQLock();
    m_udpBLock = app->Get_UdpBLock();
    m_tcpRecvQLock = app->Get_TcpNetSystem()->Get_TcpRecvQLock();
    m_tcpRecvBLock = app->Get_TcpNetSystem()->Get_TcpRecvBLock();
}


CServerHandler::CServerHandler()
{
    m_app = 0;
    m_tickCount = 0;
}

CServerHandler::~CServerHandler()
{
    for (std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server)
        {
            delete server;
            it->second = 0;
        }
    }
    m_tcpServers.clear();
}

void CServerHandler::Load(ST_ServerInfo* infos)
{
    for (int i = 0; i <= 0xfe; i++)
    {
        ST_ServerInfo& info = infos[i];
        if (info.m_type == 1)
        {
            unsigned char idx = info.m_idx;
            if (idx == 0xff)
                throw CDNFException("CGameServerHandler::Load() Server Table Exception Break!");
            m_gameServers[idx].Init(info.m_flag, info.m_name, info.m_port, idx);
        }
        if (info.m_type == 3)
        {
            unsigned char idx = info.m_idx;
            if (idx != 0xff && idx != 0xc9)
                throw CDNFException("CServerHandler::Load() Monitor Server Table Exception Break!");
            if (idx == 0xc9)
                m_monitorServer.Init(info.m_flag, info.m_name, info.m_port, idx);
        }
        if (info.m_type == 5)
        {
            unsigned char idx = info.m_idx;
            if (idx != 0xff && idx != 0xcb)
                throw CDNFException("CServerHandler::Load() Guild Server Table Exception Break!");
            if (idx == 0xcb)
                m_guildServer.Init(info.m_flag, info.m_name, info.m_port, idx);
        }
        if (info.m_type == 7)
        {
            unsigned char idx = info.m_idx;
            if (idx != 0xcd)
                throw CDNFException("CServerHandler::Load() Statistics Server Table Exception Break!");
            m_statisticsServer.Init(info.m_flag, info.m_name, info.m_port, idx);
        }
    }
}

void CServerHandler::Process()
{
    if (m_tickCount++ > 3)
    {
        m_monitorServer.SendHeartBeat();
        m_guildServer.SendHeartBeat();
        m_statisticsServer.SendHeartBeat();
        m_tickCount = 0;
    }
    CheckTcpServerHeartbeat();
}

void CServerHandler::Attach(CApplication* app)
{
    if (app)
        m_app = app;
}

CGameServer* CServerHandler::GetGameServer(int idx)
{
    if (idx <= 0xfe && m_gameServers[idx].IsValidGameServer())
        return &m_gameServers[idx];
    CMyFileLog log("GetGameServer", 0xec);
    log("./log/GameServer.log", "Game Server Index Over Index : %d!\n", idx);
    return 0;
}

void CServerHandler::SendAllToGameServer(char* buf, int len)
{
    CGameServer* p = m_gameServers;
    for (int i = 0xff; i != 0; i--, p++)
        p->SendToServer(buf, len);
}

char CServerHandler::CreateTcpServer(unsigned char idx, unsigned int port)
{
    CTcpServer* server = new CTcpServer;
    server->Init(port, m_app->Get_TcpNetSystem());
    server->SetServerType(idx);
    if (m_tcpServers.insert(std::make_pair(idx, server)).second)
        return 1;
    delete server;
    return 0;
}

char CServerHandler::DeleteTcpServer(unsigned char idx)
{
    std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.find(idx);
    if (it != m_tcpServers.end())
    {
        CTcpServer* server = it->second;
        if (server)
            delete server;
        m_tcpServers.erase(it);
        CMyFileLog log("DeleteTcpServer", 0x130);
        log("./log/TcpServer", "TcpServer(%d) Deleted", idx);
        return 1;
    }
    return 0;
}

CTcpServer* CServerHandler::GetTcpServer(unsigned char idx)
{
    std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.find(idx);
    if (it != m_tcpServers.end())
        return it->second;
    return 0;
}

CTcpServer* CServerHandler::GetTcpServer(unsigned int socket)
{
    for (std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if ((unsigned int)server->GetSocket() == socket)
            return server;
    }
    return 0;
}

void CServerHandler::SendAllTcpServer(PacketHeader* header)
{
    for (std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server->IsValidServer())
        {
            char* buf = (char*)server->makePacketHeader(header->packetId, header->packetSize);
            memcpy(buf + 0xa, (char*)header + 0xa, header->packetSize - 0xa);
            server->SendToServer(buf);
        }
    }
}

void CServerHandler::CheckTcpServerHeartbeat()
{
    for (std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server && server->IsHeartbeatTimeOver())
        {
            CPeer* peer = m_app->Get_TcpNetSystem()->GetPeer((unsigned int)server->GetSocket());
            if (peer)
            {
                peer->DisConnSig();
                m_app->Get_TcpNetSystem()->DeletePeer(peer);
            }
            m_tcpServers.erase(it);
            break;
        }
    }
}

// ---- 兼容旧 API（manager 遗留；dbmw ORIG 无独立符号）----
CGuildServer* CServerHandler::GetGuildServer() { return &m_guildServer; }
CMonitorServer* CServerHandler::GetMonitorServer() { return &m_monitorServer; }
CStatisticsServer* CServerHandler::GetStatisticsServerPtr() { return &m_statisticsServer; }
int CServerHandler::GetAlivedMonitorServer() { return m_tcpServers.size(); }
void CServerHandler::ResetHeartBeat(unsigned char idx) {}
char CServerHandler::IsConnectedMonitorServer(unsigned char idx) { return 0; }
void CServerHandler::SetConnectFlag(unsigned char idx, bool flag) {}
void CServerHandler::SendToTcpServer(PacketHeader* header, unsigned char idx)
{
    CTcpServer* server = GetTcpServer(idx);
    if (!server)
        return;
    char* buf = (char*)server->makePacketHeader(header->packetId, header->packetSize);
    memcpy(buf + 0xa, (char*)header + 0xa, header->packetSize - 0xa);
    server->SendToServer(buf);
}
void CServerHandler::SendToTcpServer(char* buf, int len, unsigned char idx)
{
    CTcpServer* server = GetTcpServer(idx);
    if (!server)
        return;
    server->SendToServer(buf);
}
void CServerHandler::SendAllToMonitorServer(char* buf, int len)
{
    m_monitorServer.SendToServer(buf, len);
}
// ---- packet 构造（出库化）----

// ---- nothrow new/delete（原版来自 libstdc++ 弱符号）----
void* operator new(std::size_t size, const std::nothrow_t&) throw()
{
    void* p = 0;
    try
    {
        p = ::operator new(size);
    }
    catch (...)
    {
    }
    return p;
}

void operator delete(void* ptr, const std::nothrow_t&) throw()
{
    if (ptr)
        free(ptr);
}

// ============================================================
// 出库化 getter（原版为独立符号）
// ============================================================



void* CServerConfig::GetServerInfo() { return &m_servers; }
void* CKillUSRConfig::GetInfo() const { return (void*)&m_list; }

void CPacketDecoder::Process() { UdpProcess(); TcpProcess(); }
void CPacketDecoder::SetTCPQueue(TcpRecvQueue* q) { m_tcpQueue = q; }
void CPacketDecoder::SetUdpQueue(UdpRecvQueue* q) { m_udpQueue = q; }



// ---- packet 构造（出库化）----
Packet_InnerPakcet_Login::Packet_InnerPakcet_Login() : PacketHeader(0xfa0, 0xa) {}
Packet_InnerPakcet_Logout::Packet_InnerPakcet_Logout() : PacketHeader(0xfa1, 0xa) {}
Packet_Monitor_Event_Start::Packet_Monitor_Event_Start() : PacketHeader(0x44f, 0x12) {}
Packet_Monitor_Event_End::Packet_Monitor_Event_End() : PacketHeader(0x450, 0xe) {}
Packet_Monitor_Manager_Connect_OK::Packet_Monitor_Manager_Connect_OK() : PacketHeader(0x578, 0xa) {}
Packet_Web_Notice_Single::Packet_Web_Notice_Single() : PacketHeader(0x9e0, 0x10a) {}
Packet_Web_Notice_InGame_Advertisement::Packet_Web_Notice_InGame_Advertisement() : PacketHeader(0x27e2, 0xa) {}
Packet_Web_Prohibit_User_Connect::Packet_Web_Prohibit_User_Connect() : PacketHeader(0x4c8, 0x13)
{
    *(int*)((char*)this + 0xa) = 0;
    *(unsigned short*)((char*)this + 0xf) = 0;
    *(char*)((char*)this + 0x11) = 0;
    *(char*)((char*)this + 0x12) = 0;
}

ST_KillUSRConfig::ST_KillUSRConfig()
{
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
}

void CSourceVersionMgr::InsertSourceVersion(char* name, int version)
{
    m_versions.push_back(SourceVersion(name, version));
}

CSourceVersionMgr::SourceVersion::SourceVersion(char* name, int version)
{
    m_name = name;
    m_version = version;
}
