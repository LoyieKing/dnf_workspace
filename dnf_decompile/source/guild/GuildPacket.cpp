// df_guild_r — CPacketDecoder/CPacketTracer/CPacketTranslater/CInnerMsgHandler
#include <stdio.h>
#include <string.h>

#include "GuildPacket.h"
#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildUdp.h"
#include "GuildPackets.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"
#include "GuildTable.h"

#define THROW_IF_NO_APP(msg) \
    if (m_pclApp == 0) \
    { \
        throw CDNFException(msg); \
    }

CApplication* CPacketTranslater::m_pclApp = 0;

void CPacketTranslater::RequestBlackListToDBMW(unsigned int charNo)
{
    Packet_DBMW_Request_BlackList pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = charNo;
    *(unsigned char*)((char*)&pkt + 0xb) = 0xcb;
    m_pclApp->Get_ServerHandler()->SendToDB(&pkt);
}

void CPacketTranslater::GuildJoin(CGuild* guild, CUser* user, unsigned int dbid)
{
    if (guild != 0 && user != 0)
    {
        user->SetGuildMemFlag(4);
        user->SendSetGuildKeyToUser(guild->GetGuildKey(), user->GetUniqCharNo());
        if (guild->InsertGuildMember(user->GetUniqCharNo(), user) != 1)
        {
            CMyFileLog log("GuildJoin", 0xa41);
            log("./log/GuildMember", "[INSERT_ERR]\tChar Key : %d\t Insert False\n",
                user->GetUniqCharNo());
        }
        if (guild->IsSetGuildDBFlag(4) != 0)
        {
            if (guild->LoadGuildOneMemberProxy(user) != 1)
            {
                guild->IncTotalCnt_Of_GuildDBInfo();
            }
            CMyFileLog log("GuildJoin", 0xa4a);
            log("./log/GuildModify", "GUILD JOIN guild(%s) char(%s)",
                guild->GetGuildName(), user->GetCharName());
            ST_Notice_Guild_Enter info;
            memset(&info, 0, sizeof(info));
            *(unsigned int*)((char*)&info + 0) = guild->GetGuildKey();
            *(unsigned int*)((char*)&info + 4) = user->GetDBID();
            *(unsigned int*)((char*)&info + 8) = user->GetUniqCharNo();
            memcpy((char*)&info + 0x23, user->GetCharName(), 0x1d);
            memcpy((char*)&info + 0xc, guild->GetGuildName(), 0x16);
            guild->NoticeEnterToGuildMember((char*)&info);
        }
        user->MakeGameServerSendUserInfoPacket(guild->GetGuildKey());
        guild->SendGuildInfoToMembers(false);
    }
}

void CPacketTranslater::GuildJoin(CGuild* guild, STGuildJoinInfo* joinInfo, unsigned int dbid)
{
    if (guild != 0)
    {
        if (guild->IsSetGuildDBFlag(4) != 0 || guild->IsSetGuildDBFlag(0x10) != 0)
        {
            STGuildMemberProxy proxy;
            memset(&proxy, 0, sizeof(proxy));
            *(unsigned int*)((char*)&proxy + 0x10) = *(unsigned int*)((char*)joinInfo + 0x10);
            memcpy((char*)&proxy + 0x14, (char*)joinInfo + 0x14, 0x1d);
            if (guild->LoadGuildOneMemberProxy(proxy) != 1)
            {
                guild->IncTotalCnt_Of_GuildDBInfo();
            }
            CMyFileLog log("GuildJoin", 0xa71);
            log("./log/GuildModify", "GUILD JOIN guild(%s) char(%s)",
                guild->GetGuildName(), (char*)joinInfo + 0x14);
        }
        ST_Notice_Guild_Enter info;
        memset(&info, 0, sizeof(info));
        *(unsigned int*)((char*)&info + 0) = guild->GetGuildKey();
        *(unsigned int*)((char*)&info + 4) = *(unsigned int*)((char*)joinInfo + 8);
        *(unsigned int*)((char*)&info + 8) = dbid;
        memcpy((char*)&info + 0x23, (char*)joinInfo + 0x14, 0x1d);
        memcpy((char*)&info + 0xc, guild->GetGuildName(), 0x16);
        guild->NoticeEnterToGuildMember((char*)&info);
        guild->SendGuildInfoToMembers(false);
    }
}

void CPacketTranslater::SendPacketGuildMail(unsigned char group, unsigned int guildKey,
                                            unsigned int charNo, const char* title,
                                            const char* content,
                                            unsigned int param)
{
    Packet_DBMW_Send_Guild_Mail pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = guildKey;
    *(unsigned int*)((char*)&pkt + 0xe) = charNo;
    *(unsigned char*)((char*)&pkt + 0x12) = group;
    size_t len = strlen(content);
    memcpy((char*)&pkt + 0x13, content, len < 0x100 ? len : 0xff);
    len = strlen(title);
    memcpy((char*)&pkt + 0x113, title, len < 0x11 ? len : 0x10);
    *(unsigned int*)((char*)&pkt + 0x124) = param;
    m_pclApp->Get_ServerHandler()->SendToDB(&pkt);
}

void CPacketTranslater::attach(CApplication* app)
{
    m_pclApp = app;
}

#define STUB_HANDLER(name) \
    void CPacketTranslater::name(PacketHeader* pkt) {}

void CPacketTranslater::OnLogin(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp != 0)
    {
        CGameServer* gs = m_pclApp->FindGameServer(*(int*)(pb + 0xe));
        if (gs == 0)
        {
            char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
            CMyFileLog log("OnLogin", 0x65);
            log("./log/Channel", "Not Found M_ID(%s) Channel No(%d)", mid,
                (unsigned int)(unsigned char)pb[0x12]);
        }
        else
        {
            CTcpGameServer* tgs = m_pclApp->FindTcpGameServer(*(unsigned int*)(pb + 0xe));
            if (tgs != 0)
            {
                CUserManager* um = m_pclApp->Get_UserManager();
                CUser* user = um->FindUser(*(unsigned int*)(pb + 0xe));
                if (user == 0)
                {
                    CUser* nu = um->CreateUser(*(unsigned int*)(pb + 0xe), 0, "",
                                               *(int*)(pb + 10), gs);
                    char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
                    CMyFileLog log("OnLogin", 0x76);
                    log("./log/User", "Current user count : %d\tConnected User DB ID : %s\n",
                        um->Size(), mid);
                    nu->SetSex((unsigned char)pb[0x23]);
                    nu->SetSsn(pb + 0x2c);
                    nu->SetTcpGameServer(tgs);
                    CMemoryCashManager* mc = m_pclApp->Get_MemoryCashManager();
                    if (mc->QueryCashMemoryBlackList(nu) != 1)
                    {
                    }
                }
                else
                {
                    char* mid = NumberToString(user->GetDBID(), 0);
                    CMyFileLog log("OnLogin", 0x70);
                    log("./log/User",
                        "DOUBLE CONNECTED : Already User DB ID(%s)\tChannel(%d)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",
                        mid, (unsigned int)user->GetGameServer()->m_field9,
                        NumberToString(*(unsigned int*)(pb + 0xe), 1),
                        (unsigned int)gs->m_field9);
                }
            }
        }
    }
}

void CPacketTranslater::OnLogout(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp != 0)
    {
        CUserManager* um = m_pclApp->Get_UserManager();
        CUser* user = um->FindUser(*(unsigned int*)(pb + 10));
        if (user != 0)
        {
            char* mid = NumberToString(*(unsigned int*)(pb + 10), 0);
            CMyFileLog log("OnLogout", 0xaa);
            log("./log/User",
                "[USER LOGOUT] User DB ID : %s\tChar No : %d\tChar Name : %s\tGuild Key : %d\tGuild Flag : %d\n",
                mid, user->GetUniqCharNo(), user->GetCharName(), user->GetGuildKey(),
                user->GetGuildMemFlag());
            um->DeleteUser(user);
        }
    }
}

void CPacketTranslater::OnHeartBeat(PacketHeader* pkt)
{
}

void CPacketTranslater::OnReplyQueryGuild(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (pb[10] == 1)
    {
        int rc = m_pclApp->Get_GuildManager()->LoadGuild(
            *(unsigned int*)(pb + 0xb), *(STGuildDBInfoOnly*)(pb + 0x13), pb + 0xd0);
        (void)rc;
        m_pclApp->Get_GuildManager()->SendGuildInfoToMembers(
            *(unsigned int*)(pb + 0xb), true);
        m_pclApp->Get_GuildManager()->AttendGuild(
            *(unsigned int*)(pb + 0xb), *(unsigned int*)(pb + 0xf));
        if (pb[0xb1] != 0)
        {
            m_pclApp->Get_GuildManager()->LoadGuildAgit(
                *(unsigned int*)(pb + 0xb), m_pclApp->Get_ServerHandler());
        }
    }
    else
    {
        m_pclApp->Get_GuildManager()->SendGuildInfoToMembers(
            *(unsigned int*)(pb + 0xb), true);
        CMyFileLog log("OnReplyQueryGuild", 0x21d);
        log("./log/Except",
            "[DB ERROR]CPacketTranslater::OnReplyQueryGuild() packet->bSuccess : %d,guildKey(%d)",
            (unsigned int)(unsigned char)pb[10], *(unsigned int*)(pb + 0xb));
    }
}

void CPacketTranslater::OnCharLogin(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        return;
    }
    if (m_pclApp->Get_GuildManager()->IsGuildWarEnterableChar(
            (unsigned char)pb[0x3d], *(unsigned int*)(pb + 0x13)) != true)
    {
        // Packet_Monitor_UDP_User_Getout（踢出玩家）
        if (m_pclApp->Get_ServerHandler() != 0)
        {
            // 简化：直接记录
        }
    }
    CUserManager* um = m_pclApp->Get_UserManager();
    CUser* user = um->FindUser(*(unsigned int*)(pb + 10));
    if (user == 0)
    {
        char* mid = NumberToString(*(unsigned int*)(pb + 10), 0);
        CMyFileLog log("OnCharLogin", 0x1d9);
        log("./log/User",
            "[CHAR_LOGIN_ERR]\tDB ID : %s\tChar Key : %d\tGuild Key : %d\tJob : %d\tname : %s\n",
            mid, *(unsigned int*)(pb + 0xf), *(unsigned int*)(pb + 0x13),
            (int)(char)pb[0x17], pb + 0x1f);
        return;
    }
    user->SetUserInfo_CharNo((char)pb[0x17], (char)pb[0x18],
                             *(short*)(pb + 0x19), *(unsigned int*)(pb + 0xf), pb + 0x1f);
    char* mid = NumberToString(*(unsigned int*)(pb + 10), 0);
    CMyFileLog log("OnCharLogin", 0x1b1);
    log("./log/User",
        "[CHAR_LOGIN]\tDB ID(%s)\tChar Key(%d)\tGuild K(%d)\tMember K(%d)\tJob(%d)\tname(%s)\tCh No(%d)\tpvp(%d)\n",
        mid, *(unsigned int*)(pb + 0xf), *(unsigned int*)(pb + 0x13),
        *(unsigned int*)(pb + 0x1b), (int)(char)pb[0x17], pb + 0x1f,
        (unsigned int)(unsigned char)pb[0xe], 0);
    user->SetUserPosState(3);
    if (*(unsigned int*)(pb + 0x13) != 0)
    {
        CGuild* guild = m_pclApp->Get_GuildManager()->GuildMemLogin(
            *(unsigned int*)(pb + 0x13), user);
        if (guild != 0)
        {
            guild->NoticeGuildMemberLogin_Out(user, 1);
        }
    }
    if (um->InsertUser_CharName(pb + 0x1f, user) != 1)
    {
        char* mid2 = NumberToString(*(unsigned int*)(pb + 10), 0);
        CMyFileLog log2("OnCharLogin", 0x1ce);
        log2("./log/Except",
             "uDBID(%s) uCharName(%s) is already exist at m_mapCharNameUsers!", mid2, pb + 0x1f);
    }
    um->InsertUser_CharNo(*(unsigned int*)(pb + 0xf), user);
}

void CPacketTranslater::OnNoticeGuildEnter(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildEnter : 0 == m_pclApp")
    char* pb = (char*)pkt;
    char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
    CMyFileLog log("OnNoticeGuildEnter", 0x283);
    log("./log/Web",
        "Packet_Monitor_Notice_Guild_Enter: guildkey : %d, m_id : %s , charid : %d, guildname : %s, charname : %s\n",
        *(unsigned int*)(pb + 10), mid, *(unsigned int*)(pb + 0x12), pb + 0x16, pb + 0x2d);
    CGuild* guild = m_pclApp->Get_GuildManager()->GuildEnter(
        *(unsigned int*)(pb + 10), *(ST_Notice_Guild_Enter*)(pb + 10));
    if (guild != 0)
    {
        pb[0x4f] = 1;
        *(unsigned int*)(pb + 0x4b) = *(unsigned int*)(pb + 0x12);
        guild->NoticeEnterToGuildMember(pb + 10);
    }
}

void CPacketTranslater::OnNoticeGuildSecede(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildSecede : 0 == m_pclApp")
    char* pb = (char*)pkt;
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user == 0)
    {
        return;
    }
    m_pclApp->Get_GuildManager()->GuildSecede(
        *(unsigned int*)(pb + 10), *(ST_Notice_Guild_Secede*)(pb + 10));
}

void CPacketTranslater::OnDBReplyQueryGuildMember(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDBReplyQueryGuildMember()\tpclApp is NULL")
    char* pb = (char*)pkt;
    if (pb[10] == 1)
    {
        CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
        if (user == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnDBReplyQueryGuildMember()\tpclUser is NULL\n");
        }
        user->LoadGuildMember(*(unsigned int*)(pb + 0xb),
                              *(STGuildMemerDBInfo*)(pb + 0x13));
        user->SendGuildMemberDBInfo(*(STGuildMemerDBInfo*)(pb + 0x13));
    }
    else
    {
        CMyFileLog log("OnDBReplyQueryGuildMember", 0x24b);
        log("./log/Except",
            "[DB ERROR]CPacketTranslater::OnDBReplyQueryGuildMember() packet->bSuccess : %d\n",
            (unsigned int)(unsigned char)pb[10]);
    }
}

void CPacketTranslater::OnNoticeGuildDismiss(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildDismiss : 0 == m_pclApp")
    char* pb = (char*)pkt;
    CMyFileLog log("OnNoticeGuildDismiss", 0x3a9);
    log("./log/Web", "Packet_Monitor_Notice_Guild_Dismiss: guildkey : %d\n",
        *(unsigned int*)(pb + 10));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 10));
    if (guild != 0)
    {
        guild->DismissGuildMemberAndNotice(m_pclApp->Get_ServerGroup());
        m_pclApp->Get_GuildManager()->GuildDismiss(guild);
    }
}

void CPacketTranslater::OnIncreaseGuildExp(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnIncreaseGuildExp : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0xe) == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnIncreaseGuildExp : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild != 0)
    {
        unsigned int oldExp = guild->GetGuildExp();
        unsigned int addExp = *(unsigned int*)(pb + 0x12);
        CMyFileLog log("OnIncreaseGuildExp", 0x453);
        log("./log/Guild",
            "GUILD EXP : char no(%d) guild key(%d), add exp(%d), guild exp(%d), book(%d)",
            *(unsigned int*)(pb + 10), *(unsigned int*)(pb + 0xe), addExp, oldExp,
            (int)(char)pb[0x17]);
        unsigned int max1 = m_pclApp->Get_GuildManager()->GetMaxGuildExp1();
        unsigned int max2 = m_pclApp->Get_GuildManager()->GetMaxGuildExp2();
        unsigned int level = guild->GetGuildLevel();
        int expLevel = m_pclApp->Get_GuildManager()->GetGuildLevelWithExp(oldExp);
        if (level == (unsigned int)expLevel)
        {
            if (pb[0x17] == 0)
            {
                unsigned int next = m_pclApp->Get_GuildManager()->GetGuildExpWithLevel(level + 1);
                unsigned int limit = next < max1 ? next : max1;
                guild->AddGuildExpUntilLimit(addExp, limit);
            }
            else if (pb[0x17] == 1 || pb[0x17] == 2)
            {
                guild->AddGuildExpUntilLimit(addExp, max2);
            }
            if (pb[0x16] != 0)
            {
                guild->SendGuildInfoToMembers(false);
            }
        }
        else
        {
            CMyFileLog log2("OnIncreaseGuildExp", 0x462);
            log2("./log/Guild",
                 "OnIncreaseGuildExp : guild key(%d), curr guild exp(%d),lev(%d), next guild exp(%d), exp lev(%d)",
                 *(unsigned int*)(pb + 0xe), oldExp, level, oldExp + addExp, expLevel);
        }
    }
}

void CPacketTranslater::OnChangeGuildName(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnChangeGuildName", 0x14dc);
        log("./log/Except", "CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user == 0)
    {
        CMyFileLog log("OnChangeGuildName", 0x14e7);
        log("./log/Except", "CPacketTranslater::OnChangeGuildName : user not found");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 10));
    if (guild == 0)
    {
        return;
    }
    if (guild->IsGuildMaster(user->GetUniqCharNo()) ||
        guild->IsSubGuildMaster(user->GetUniqCharNo()))
    {
        guild->ChangeGuildName(pb + 0x12, 1);
        guild->DBGuildSave(m_pclApp->Get_ServerGroup(), m_pclApp->Get_ServerHandler(), 0);
        guild->SendGuildNameChangeToMembers();
    }
    else
    {
        CMyFileLog log("OnChangeGuildName", 0x14f7);
        log("./log/GuildModify",
            "CPacketTranslater::OnChangeGuildName : %d is not guild master or sub master(g:%d)",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 10));
    }
}

void CPacketTranslater::OnCallGuildLevelUp(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCallGuildLevelUp : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0x12) == 0)
    {
        throw CDNFException("CPacketTranslater::OnCallGuildLevelUp : packet->m_uGuildKey == 0");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0x12));
    if (user != 0 && guild != 0)
    {
        guild->GuildLevelUp(m_pclApp->Get_ServerHandler(), user);
    }
}

void CPacketTranslater::OnSetGuildMemberGrade(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnSetGuildMemberGrade : 0 == m_pclApp")
    char* pb = (char*)pkt;
    CUser* caller = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (caller == 0)
    {
        return;
    }
    unsigned char grade = (unsigned char)pb[0x30];
    char* targetName = pb + 0x12;
    CUser* target = m_pclApp->Get_UserManager()->FindUser_CharName(targetName);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(caller->GetGuildKey());
    if (guild == 0)
    {
        return;
    }
    if (grade == 1)
    {
        if (target != 0)
        {
            guild->SetSubGuildMaster(target->GetUniqCharNo(), true);
        }
    }
    else if (grade == 2)
    {
        if (target != 0)
        {
            guild->SetSubGuildMaster(target->GetUniqCharNo(), false);
        }
    }
}

void CPacketTranslater::OnCallGuildMembers(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCallGuildMembers : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0xe) == 0)
    {
        throw CDNFException("CPacketTranslater::OnCallGuildMembers : packet->m_uGuildKey == 0");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 10));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (user != 0 && guild != 0)
    {
        guild->ReplyGuildMembers(user);
    }
}

void CPacketTranslater::OnCallGuildAllMembers(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCallGuildAllMembers : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0xe) == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnCallGuildAllMembers : packet->m_uGuildKey == 0");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 10));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (user != 0 && guild != 0)
    {
        guild->ReplyGuildMembers(user);
    }
}

void CPacketTranslater::OnCallGuildInfo(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCallGuildInfo : 0 == m_pclApp")
    char* pb = (char*)pkt;
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 10));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (user != 0 && guild != 0)
    {
        guild->SendGuildInfoToMemberOnly(user);
    }
}

void CPacketTranslater::OnNoticeGuildChatMsg(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildChatMsg : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0xe) == 0 || *(unsigned int*)(pb + 10) == 0 || pb[0x12] == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnNoticeGuildChatMsg : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 10));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (user != 0 && guild != 0)
    {
        guild->NoticeChatMsgToGuildMembers(*(unsigned int*)(pb + 10), pb + 0x13,
                                           (int)(unsigned char)pb[0x12],
                                           (const char*)user->GetCharName());
    }
}

void CPacketTranslater::OnNoticeGuildMarkChange(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildMarkChange : 0 == m_pclApp")
    char* pb = (char*)pkt;
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 10));
    if (guild != 0)
    {
        guild->NoticeMarkChangeToGuildMember(*(unsigned int*)(pb + 0xe));
    }
}

STUB_HANDLER(OnReplyUserInfo)
STUB_HANDLER(OnDBReplyGuildAllMembers)
STUB_HANDLER(OnDBReplyUnconnGuildMember)
STUB_HANDLER(OnNoticeGuildCreate)
STUB_HANDLER(OnCharacterDelete)
STUB_HANDLER(OnUpdateChangableCharInfo)
STUB_HANDLER(OnEventStart)
STUB_HANDLER(OnEventEnd)
STUB_HANDLER(OnLoadGuildWarEnterableGuilds)
STUB_HANDLER(OnNoticeGuildWarEnd)
STUB_HANDLER(OnNoticeGuildMailArrive)
STUB_HANDLER(OnNoticeGuildWarStart)
STUB_HANDLER(OnNoticeGuildWarPointChange)
STUB_HANDLER(OnRequestGuildWarInfo)
STUB_HANDLER(OnRegisterToBlackList)
STUB_HANDLER(OnDeleteToBlackList)
STUB_HANDLER(OnRequestBlackList)
STUB_HANDLER(OnDBMWResisterToBlackList)
STUB_HANDLER(OnDBMWDeleteToBlackList)
STUB_HANDLER(OnDBMWResponseBlackListOnLogin)
STUB_HANDLER(OnBuyGuildSkill)
STUB_HANDLER(OnDBMWChangeUnconnectedGuildMemberGrade)
STUB_HANDLER(OnNotifyMessageToGuild)
STUB_HANDLER(OnMonitorManagerConnectOK)
STUB_HANDLER(OnMonitorSendGuildLetter)
STUB_HANDLER(OnDBMWReplySendGuildLetter)
STUB_HANDLER(OnDBMWGuildJoin)
STUB_HANDLER(OnRequestGuildSecede)
STUB_HANDLER(OnDBReplyGuildSecede)
STUB_HANDLER(OnRequestGuildMasterDelegate)
STUB_HANDLER(OnDBReplyGuildMasterDelegate)
STUB_HANDLER(OnRequestGuildCreate)
STUB_HANDLER(OnDBReplyGuildCreate)
STUB_HANDLER(OnSetGuildMemberGradeFromWeb)
STUB_HANDLER(OnGuildMasterDelegateFromWeb)
STUB_HANDLER(OnCheckGuildMemberConnectionFromWeb)
STUB_HANDLER(OnInnerPacketLogin)
STUB_HANDLER(OnInnerPacketLogout)
STUB_HANDLER(OnPowerWarStartInfo)
STUB_HANDLER(OnChangePowerWarPoint)
STUB_HANDLER(OnPacketJoinPower)
STUB_HANDLER(OnPacketSecedePower)
STUB_HANDLER(OnSetPowerWarCfg)
STUB_HANDLER(OnLoadFromDBOnGuildBooting)
STUB_HANDLER(OnGMPowerWarStart)
STUB_HANDLER(OnGMPowerWarEnd)
STUB_HANDLER(OnChangeCharName)
STUB_HANDLER(OnChangeGuildNameFromWeb)
STUB_HANDLER(OnNotifyNewGroupMail)
STUB_HANDLER(OnInCreaseDecreasePowerWarPoint)
STUB_HANDLER(OnCreateGuildAgit)
STUB_HANDLER(OnDeleteGuildAgit)
STUB_HANDLER(OnDBCreateGuildAgit)
STUB_HANDLER(OnDBDeleteGuildAgit)
STUB_HANDLER(OnPowerWarProcessInfo)
STUB_HANDLER(OnDBLoadGuildAgit)
STUB_HANDLER(OnUpgradeGuildAgit)
STUB_HANDLER(OnDBUpgradeGuildAgit)
STUB_HANDLER(OnGuildExpLimit)
STUB_HANDLER(OnWriteGuildMemberMemo)
STUB_HANDLER(OnLoadGuildCargo)
STUB_HANDLER(OnLoadGuildCargoHistory)
STUB_HANDLER(OnGuildCargo)
STUB_HANDLER(OnGuildCargoHistory)
STUB_HANDLER(OnGuildCargoCheckPushItem)
STUB_HANDLER(OnGuildCargoPushItem)
STUB_HANDLER(OnGuildCargoPopItem)
STUB_HANDLER(OnGuildCargoMoveItem)
STUB_HANDLER(OnGuildCargoUpgrade)
STUB_HANDLER(OnGuildRequestGuildBoardOpen)
STUB_HANDLER(OnDBLoadReplyGuildBoardOpen)
STUB_HANDLER(OnGuildRequestGuildBoardWrite)
STUB_HANDLER(OnDBLoadReplyGuildBoardWrite)
STUB_HANDLER(OnGuildRequestGuildBoardDelete)
STUB_HANDLER(OnDBLoadReplyGuildBoardDelete)
STUB_HANDLER(OnWebGuildBoardWrite)
STUB_HANDLER(OnWebGuildBoardDelete)
STUB_HANDLER(OnDBLoadReplyWebGuildBoardWrite)
STUB_HANDLER(OnGuildApplyOriginalPowerSide)
STUB_HANDLER(OnGameServerRegist)
STUB_HANDLER(OnAddGuildFund)
STUB_HANDLER(OnRefreshGuildInfo)
STUB_HANDLER(OnReplyTodayGuildMember)
STUB_HANDLER(OnApproveJoinGuild)
STUB_HANDLER(OnDBResponseApproveJoinGuild)
STUB_HANDLER(OnGuildAttendanceInfo)
STUB_HANDLER(OnGuildDebug)
STUB_HANDLER(OnRenew_GM_List)
STUB_HANDLER(OnNoticeGuildChatMsgHyperLink)

void CPacketTranslater::OnCallGuildInvite(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp");
    Packet_Guild_Call_Guild_Invite_To_Caller callerPkt;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int charNo = *(unsigned int*)((char*)pkt + 0xa);
    if (guildKey == 0)
    {
        throw CDNFException("CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0");
    }
    CUser* caller = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (caller == 0)
    {
        CMyFileLog log("OnCallGuildInvite", 0x8db);
        log("./log/Except",
            "CPacketTranslater::OnCallGuildInvite : 0 == pclCaller, Char Key = %d", charNo);
        return;
    }
    *(unsigned int*)((char*)&callerPkt + 0xa) = charNo;
    *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnCallGuildInvite", 0x8e4);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : 0 == pclGuild, Guild Key = %d", guildKey);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0x22;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        return;
    }
    if (guild->IsSetGuildDBFlag(4) != 1)
    {
        CMyFileLog log("OnCallGuildInvite", 0x8eb);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",
            guildKey);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0x22;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        return;
    }
    if (!guild->IsGuildMaster(charNo) && !guild->IsSubGuildMaster(charNo) &&
        *(char*)((char*)caller->GetGuildMemDBInfo() + 0x15) != 0x03)
    {
        CMyFileLog log("OnCallGuildInvite", 0x8f4);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",
            guildKey, charNo);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0x24;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        return;
    }
    if (300 < (guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff) + 1)
    {
        CMyFileLog log("OnCallGuildInvite", 0x8fd);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : cnt(%d), Guild Key = %d",
            guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff, guildKey);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0x26;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        return;
    }
    CUser* invited =
        m_pclApp->Get_UserManager()->FindUser_CharName(std::string((char*)pkt + 0x12));
    if (invited == 0)
    {
        CMyFileLog log("OnCallGuildInvite", 0x905);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d", charNo);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 3;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        return;
    }
    if (caller->IsBlackUser(invited->GetUniqCharNo()) != 0 ||
        invited->IsBlackUser(caller->GetUniqCharNo()) != 0)
    {
        CMyFileLog log("OnCallGuildInvite", 0x90d);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : 0 == pclInvitedUser, Char Key = %d", charNo);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0x4d;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        return;
    }
    if (invited->GetGuildKey() == 0)
    {
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
        invited->SetGuildInviteFact(guild->GetGuildKey(), caller->GetUniqCharNo(), 1);
        Packet_Guild_Call_Guild_Invite_To_Invited invitedPkt;
        *(unsigned int*)((char*)&invitedPkt + 0xa) = invited->GetUniqCharNo();
        *(unsigned int*)((char*)&invitedPkt + 0xe) = invited->GetIdByChannel();
        memcpy((char*)&invitedPkt + 0x12, caller->GetCharName(), 0x1d);
        memcpy((char*)&invitedPkt + 0x2f, guild->GetGuildName(), 0x16);
        invited->SendToGameserver((char*)&invitedPkt, 0x47);
    }
    else
    {
        CMyFileLog log("OnCallGuildInvite", 0x916);
        log("./log/GuildModify",
            "CPacketTranslater::OnCallGuildInvite : 0 != pclInvitedUser.GetGuildKey(), Char Key = %d",
            charNo);
        *(unsigned int*)((char*)&callerPkt + 0x12) = 0x27;
        caller->SendToGameserver((char*)&callerPkt, 0x16);
    }
}

void CPacketTranslater::OnReplyGuildInvite(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp");
    unsigned int charNo = *(unsigned int*)((char*)pkt + 0xa);
    CUser* invited = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (invited == 0)
    {
        CMyFileLog log("OnReplyGuildInvite", 0x94d);
        log("./log/Except",
            "CPacketTranslater::OnReplyGuildInvite : 0 == pclInvitedUser, Char Key = %d", charNo);
        return;
    }
    Packet_Guild_Reply_Guild_Invite_To_Invited invitedPkt;
    *(unsigned int*)((char*)&invitedPkt + 0xa) = charNo;
    *(unsigned int*)((char*)&invitedPkt + 0xe) = invited->GetIdByChannel();
    int callerId = (int)invited->GetGuildInviteCallerId();
    int guildId = (int)invited->GetGuildInviteGuildId();
    if (callerId == 0 || guildId == 0)
    {
        *(unsigned int*)((char*)&invitedPkt + 0x12) = 0x67;
        invited->SendToGameserver((char*)&invitedPkt, 0x16);
        invited->SetGuildInviteFact(0, 0, 0xff);
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild((unsigned int)guildId);
    if (guild == 0)
    {
        CMyFileLog log("OnReplyGuildInvite", 0x962);
        log("./log/GuildModify",
            "CPacketTranslater::OnReplyGuildInvite : 0 == pclGuild, Guild Key = %d", guildId);
        *(unsigned int*)((char*)&invitedPkt + 0x12) = 0x22;
        invited->SendToGameserver((char*)&invitedPkt, 0x16);
        invited->SetGuildInviteFact(0, 0, 0xff);
        CUser* caller = m_pclApp->Get_UserManager()->FindUser_CharNo((unsigned int)callerId);
        if (caller != 0)
        {
            Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
            *(int*)((char*)&callerPkt + 0xa) = callerId;
            *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x22;
            caller->SendToGameserver((char*)&callerPkt, 0x34);
        }
        return;
    }
    if ((guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff) + 1 < 0x12d)
    {
        if (*(char*)((char*)pkt + 0xe) == 1)
        {
            Packet_DBMW_Save_Guild_Join joinPkt;
            unsigned int dbid = invited->GetDBID();
            unsigned char group = 0;
            if (invited->GetGameServer() != 0)
            {
                group = invited->GetGameServer()->GetGroupNo();
            }
            *(unsigned int*)((char*)&joinPkt + 0xa) =
                ((unsigned int)group << 24) | ((unsigned int)guildId & 0xffffff);
            *(unsigned char*)((char*)&joinPkt + 0xe) = (unsigned char)((unsigned int)guildId >> 24);
            *(unsigned char*)((char*)&joinPkt + 0xf) = (unsigned char)(dbid & 0xff);
            *(unsigned short*)((char*)&joinPkt + 0x10) = (unsigned short)((dbid >> 8) & 0xffff);
            *(unsigned char*)((char*)&joinPkt + 0x12) = (unsigned char)(dbid >> 24);
            *(unsigned char*)((char*)&joinPkt + 0x13) = (unsigned char)((unsigned int)callerId & 0xff);
            *(unsigned short*)((char*)&joinPkt + 0x14) =
                (unsigned short)(((unsigned int)callerId >> 8) & 0xffff);
            *(unsigned char*)((char*)&joinPkt + 0x16) = (unsigned char)((unsigned int)callerId >> 24);
            *(unsigned int*)((char*)&joinPkt + 0x17) = invited->GetUniqCharNo();
            memcpy((char*)&joinPkt + 0x1b, invited->GetCharName(), 0x1d);
            *(unsigned char*)((char*)&joinPkt + 0x38) = invited->GetJob();
            *(unsigned char*)((char*)&joinPkt + 0x39) = invited->GetGrowthType();
            *(unsigned char*)((char*)&joinPkt + 0x3a) = invited->GetLevel();
            *(unsigned char*)((char*)&joinPkt + 0x3b) = invited->GetSex();
            memcpy((char*)&joinPkt + 0x3c, invited->GetSsn(), 2);
            m_pclApp->Get_ServerHandler()->GetDBServer()->SendToServer((char*)&joinPkt, 0x40);
        }
        else
        {
            CUser* caller = m_pclApp->Get_UserManager()->FindUser_CharNo((unsigned int)callerId);
            if (caller != 0)
            {
                Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
                *(int*)((char*)&callerPkt + 0xa) = callerId;
                *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
                *(unsigned int*)((char*)&callerPkt + 0x12) =
                    (unsigned int)(unsigned char)*(char*)((char*)pkt + 0xe);
                memcpy((char*)&callerPkt + 0x16, invited->GetCharName(), 0x1d);
                caller->SendToGameserver((char*)&callerPkt, 0x34);
            }
        }
        invited->SetGuildInviteFact(0, 0, 0xff);
    }
    else
    {
        CMyFileLog log("OnReplyGuildInvite", 0x977);
        log("./log/GuildModify",
            "CPacketTranslater::OnReplyGuildInvite : cnt(%d), Guild Key = %d",
            guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff, guildId);
        *(unsigned int*)((char*)&invitedPkt + 0x12) = 0x26;
        invited->SendToGameserver((char*)&invitedPkt, 0x16);
        invited->SetGuildInviteFact(0, 0, 0xff);
        CUser* caller = m_pclApp->Get_UserManager()->FindUser_CharNo((unsigned int)callerId);
        if (caller != 0)
        {
            Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
            *(int*)((char*)&callerPkt + 0xa) = callerId;
            *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
            *(unsigned int*)((char*)&callerPkt + 0x12) = 0x26;
            caller->SendToGameserver((char*)&callerPkt, 0x34);
        }
    }
}

#undef STUB_HANDLER

CPacketDecoder::CPacketDecoder()
{
    memset(m_data, 0, sizeof(m_data));
    // handler 表：偏移 = (packetId + 4) * 4 + 0xc
    static const struct { unsigned int off; void (*fn)(PacketHeader*); } tbl[] = {
        {0xfbc, CPacketTranslater::OnLogin},
        {0xfc0, CPacketTranslater::OnLogout},
        {0xfc4, CPacketTranslater::OnReplyUserInfo},
        {0xfcc, CPacketTranslater::OnHeartBeat},
        {0xfd8, CPacketTranslater::OnCharLogin},
        {0x1030, CPacketTranslater::OnReplyQueryGuild},
        {0x1028, CPacketTranslater::OnDBReplyQueryGuildMember},
        {0x1010, CPacketTranslater::OnNoticeGuildEnter},
        {0x1014, CPacketTranslater::OnNoticeGuildSecede},
        {0x1018, CPacketTranslater::OnNoticeGuildMarkChange},
        {0x100c, CPacketTranslater::OnNoticeGuildDismiss},
        {0x101c, CPacketTranslater::OnNoticeGuildChatMsg},
        {0x10dc, CPacketTranslater::OnSetGuildMemberGrade},
        {0x1020, CPacketTranslater::OnCallGuildMembers},
        {0x10ac, CPacketTranslater::OnCallGuildAllMembers},
        {0x10b4, CPacketTranslater::OnDBReplyGuildAllMembers},
        {0x10b8, CPacketTranslater::OnDBReplyUnconnGuildMember},
        {0x103c, CPacketTranslater::OnCallGuildLevelUp},
        {0x1050, CPacketTranslater::OnCallGuildInfo},
        {0x104c, CPacketTranslater::OnNoticeGuildCreate},
        {0x1324, CPacketTranslater::OnCharacterDelete},
        {0xff0, CPacketTranslater::OnUpdateChangableCharInfo},
        {0x1158, CPacketTranslater::OnEventStart},
        {0x115c, CPacketTranslater::OnEventEnd},
        {0x1060, CPacketTranslater::OnLoadGuildWarEnterableGuilds},
        {0x1064, CPacketTranslater::OnNoticeGuildWarEnd},
        {0x1070, CPacketTranslater::OnNoticeGuildMailArrive},
        {0x1074, CPacketTranslater::OnNoticeGuildWarStart},
        {0x1078, CPacketTranslater::OnNoticeGuildWarPointChange},
        {0x106c, CPacketTranslater::OnRequestGuildWarInfo},
        {0x178c, CPacketTranslater::OnRegisterToBlackList},
        {0x1790, CPacketTranslater::OnDeleteToBlackList},
        {0x179c, CPacketTranslater::OnRequestBlackList},
        {0x1794, CPacketTranslater::OnDBMWResisterToBlackList},
        {0x1798, CPacketTranslater::OnDBMWDeleteToBlackList},
        {0x17a0, CPacketTranslater::OnDBMWResponseBlackListOnLogin},
        {0x1054, CPacketTranslater::OnIncreaseGuildExp},
        {0x10c0, CPacketTranslater::OnBuyGuildSkill},
        {0x10c8, CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade},
        {0x10d0, CPacketTranslater::OnNotifyMessageToGuild},
        {0x15fc, CPacketTranslater::OnMonitorManagerConnectOK},
        {0x10e4, CPacketTranslater::OnMonitorSendGuildLetter},
        {0x10e8, CPacketTranslater::OnDBMWReplySendGuildLetter},
        {0x10ec, CPacketTranslater::OnCallGuildInvite},
        {0x10f4, CPacketTranslater::OnReplyGuildInvite},
        {0x10fc, CPacketTranslater::OnDBMWGuildJoin},
        {0x1100, CPacketTranslater::OnRequestGuildSecede},
        {0x1104, CPacketTranslater::OnDBReplyGuildSecede},
        {0x1108, CPacketTranslater::OnRequestGuildMasterDelegate},
        {0x110c, CPacketTranslater::OnDBReplyGuildMasterDelegate},
        {0x1118, CPacketTranslater::OnRequestGuildCreate},
        {0x111c, CPacketTranslater::OnDBReplyGuildCreate},
        {0x1120, CPacketTranslater::OnSetGuildMemberGradeFromWeb},
        {0x1124, CPacketTranslater::OnGuildMasterDelegateFromWeb},
        {0x1128, CPacketTranslater::OnCheckGuildMemberConnectionFromWeb},
        {0x3e9c, CPacketTranslater::OnInnerPacketLogin},
        {0x3ea0, CPacketTranslater::OnInnerPacketLogout},
        {0x112c, CPacketTranslater::OnChangeGuildName},
        {0x1ae0, CPacketTranslater::OnPowerWarStartInfo},
        {0x1aac, CPacketTranslater::OnChangePowerWarPoint},
        {0x1abc, CPacketTranslater::OnPacketJoinPower},
        {0x1ac0, CPacketTranslater::OnPacketSecedePower},
        {0x1ac4, CPacketTranslater::OnSetPowerWarCfg},
        {0x19f8, CPacketTranslater::OnLoadFromDBOnGuildBooting},
        {0x1ab4, CPacketTranslater::OnGMPowerWarStart},
        {0x1ab8, CPacketTranslater::OnGMPowerWarEnd},
        {0x1160, CPacketTranslater::OnChangeCharName},
        {0x1168, CPacketTranslater::OnChangeGuildNameFromWeb},
        {0x1470, CPacketTranslater::OnNotifyNewGroupMail},
        {0x1b88, CPacketTranslater::OnInCreaseDecreasePowerWarPoint},
        {0x1b8c, CPacketTranslater::OnCreateGuildAgit},
        {0x1b94, CPacketTranslater::OnDeleteGuildAgit},
        {0x1b90, CPacketTranslater::OnDBCreateGuildAgit},
        {0x1b98, CPacketTranslater::OnDBDeleteGuildAgit},
        {0x1b9c, CPacketTranslater::OnPowerWarProcessInfo},
        {0x1ba0, CPacketTranslater::OnDBLoadGuildAgit},
        {0x1ba8, CPacketTranslater::OnUpgradeGuildAgit},
        {0x1bac, CPacketTranslater::OnDBUpgradeGuildAgit},
        {0x1bb0, CPacketTranslater::OnGuildExpLimit},
        {0x1360, CPacketTranslater::OnWriteGuildMemberMemo},
        {0x1c3c, CPacketTranslater::OnLoadGuildCargo},
        {0x1c40, CPacketTranslater::OnLoadGuildCargoHistory},
        {0x1c44, CPacketTranslater::OnGuildCargo},
        {0x1c48, CPacketTranslater::OnGuildCargoHistory},
        {0x1c4c, CPacketTranslater::OnGuildCargoCheckPushItem},
        {0x1c50, CPacketTranslater::OnGuildCargoPushItem},
        {0x1c54, CPacketTranslater::OnGuildCargoPopItem},
        {0x1c58, CPacketTranslater::OnGuildCargoMoveItem},
        {0x1c68, CPacketTranslater::OnGuildCargoUpgrade},
        {0x8cc0, CPacketTranslater::OnGuildRequestGuildBoardOpen},
        {0x8ccc, CPacketTranslater::OnDBLoadReplyGuildBoardOpen},
        {0x8cd0, CPacketTranslater::OnGuildRequestGuildBoardWrite},
        {0x8cdc, CPacketTranslater::OnDBLoadReplyGuildBoardWrite},
        {0x8ce0, CPacketTranslater::OnGuildRequestGuildBoardDelete},
        {0x8cec, CPacketTranslater::OnDBLoadReplyGuildBoardDelete},
        {0x8d0c, CPacketTranslater::OnWebGuildBoardWrite},
        {0x8d10, CPacketTranslater::OnWebGuildBoardDelete},
        {0x8d18, CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite},
        {0x1ae4, CPacketTranslater::OnGuildApplyOriginalPowerSide},
        {0x7d20, CPacketTranslater::OnGameServerRegist},
        {0x6f0c, CPacketTranslater::OnAddGuildFund},
        {0x6f14, CPacketTranslater::OnRefreshGuildInfo},
        {0x6f1c, CPacketTranslater::OnReplyTodayGuildMember},
        {0x6f24, CPacketTranslater::OnApproveJoinGuild},
        {0x6f30, CPacketTranslater::OnDBResponseApproveJoinGuild},
        {0x6f34, CPacketTranslater::OnGuildAttendanceInfo},
        {0x6f40, CPacketTranslater::OnGuildDebug},
        {0x7d50, CPacketTranslater::OnRenew_GM_List},
        {0x9c7c, CPacketTranslater::OnNoticeGuildChatMsgHyperLink},
    };
    for (unsigned int i = 0; i < sizeof(tbl) / sizeof(tbl[0]); i++)
    {
        *(void(**)(PacketHeader*))(m_data + tbl[i].off) = tbl[i].fn;
    }
}

CPacketDecoder::~CPacketDecoder()
{
}

CPacketDecoder* CPacketDecoderInstance()
{
    static CPacketDecoder instance;
    return &instance;
}

void CPacketDecoder::Attach(CApplication* app)
{
    if (app != 0)
    {
        *(void**)m_data = app->Get_UdpPacketParseQ();
        *(void**)(m_data + 4) = app->Get_UdpQLock();
        *(void**)(m_data + 8) = app->Get_UdpBLock();
        CTcpNetSystem* net = app->Get_TcpNetSystem();
        void* swapq = net != 0 ? net->Get_TcpSwapQPacket() : 0;
        *(void**)(m_data + 0xc) = swapq != 0 ? (void*)((char*)swapq + 0x2c) : 0;
        *(void**)(m_data + 0x10) = net != 0 ? net->Get_TcpRecvQLock() : 0;
        *(void**)(m_data + 0x14) = net != 0 ? net->Get_TcpRecvBLock() : 0;
        *(void**)(m_data + 0x18) = app->Get_ServerHandler();
    }
}

int CPacketDecoder::Process()
{
    TcpProcess();
    UdpProcess();
    return 0;
}

int CPacketDecoder::TcpProcess()
{
    return 0;
}

int CPacketDecoder::UdpProcess()
{
    if (*(void**)m_data != 0 && *(void**)(m_data + 4) != 0)
    {
        std::queue<CUdpRecvBuffer*>* q = *(std::queue<CUdpRecvBuffer*>**)m_data;
        while (!q->empty())
        {
            CUdpRecvBuffer* buf = q->front();
            q->pop();
            if (buf == 0)
            {
                continue;
            }
            if (MsgDecode((PacketHeader*)buf) != 1)
            {
                printf("[false == this->MsgDecode]packetHeader : %x\tpacket id : %d\n", buf,
                       (unsigned int)*(unsigned short*)buf);
                throw CDNFException(
                    "CPacketDecoder::MsgDecode() Undefined Packet Arrived Exception Break!");
            }
            CUdpRecvBuffer::operator delete(buf, 0x1804);
        }
    }
    else
    {
        throw CDNFException("CPacketDecoder is Not Ready!\n");
    }
    return 0;
}

int CPacketDecoder::MsgDecode(PacketHeader* pkt)
{
    if (pkt == 0)
    {
        return 0;
    }
    unsigned short id = *(unsigned short*)pkt;
    if (id < 0x2800 && 999 < id)
    {
        void (**fn)(PacketHeader*) = (void (**)(PacketHeader*))(m_data + (id + 4) * 4 + 0xc);
        if (*fn == 0)
        {
            CMyFileLog log("MsgDecode", 0x10d);
            log("./log/Decoder",
                "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.<0 == m_decodProcFunc>\n",
                (unsigned int)id);
            return 0;
        }
        (*fn)(pkt);
        return 1;
    }
    printf("Undefined Packet Err : Game Message with identifier %d has arrived.\n",
           (unsigned int)id);
    CMyFileLog log("MsgDecode", 0x123);
    log("./log/Decoder",
        "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.<Invalid Packet ID>\n",
        (unsigned int)id);
    return 0;
}

void CPacketDecoder::SetTCPQueue(std::queue<CTcpRecvBuffer*>* q)
{
}

void CPacketDecoder::SetUdpQueue(std::queue<CUdpRecvBuffer*>* q)
{
}

CPacketTracer::CPacketTracer()
{
}

CPacketTracer::~CPacketTracer()
{
}

CPacketTracer* CPacketTracerInstance()
{
    static CPacketTracer instance;
    return &instance;
}

void CPacketTracer::AddLog(int p1, int p2)
{
}

void CPacketTracer::ResetLog()
{
}

void CPacketTracer::WriteLog()
{
}

void CPacketTracer::AbsoluteWriteLog()
{
}

template<int Lo, int Hi>
CPacketCounter<Lo, Hi>::CPacketCounter(char* name, char* title)
{
}

template<int Lo, int Hi>
CPacketCounter<Lo, Hi>::~CPacketCounter()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::IncrementPacketCount(int id)
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::BeforeProcess()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::AfterProcess(int id)
{
    if (id < 0x2800 && 999 < id &&
        (m_data[0x1d640] == 1 ||
         *(unsigned int*)(m_data + 8 + (id - 1000) * 4) < 0xb) &&
        *(int*)m_data != -1)
    {
        int prev;
        if (m_data[0x1d640] == 0)
        {
            prev = *(int*)(m_data + 0x9068);
            *(int*)(m_data + 8 + (id - 1000) * 4) += 1;
            m_data[0x11ce0 + id] = 0;
        }
        else
        {
            prev = *(int*)(m_data + 0x9068);
        }
        int diff = *(int*)m_data - prev;
        *(int*)(m_data + (id + 0x4d50) * 4) += diff;
    }
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::WriteLog()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::Reset()
{
    memset(m_data, 0, sizeof(m_data));
}

template class CPacketCounter<1000, 10240>;

CInnerMsgHandler::CInnerMsgHandler()
{
}

CInnerMsgHandler::~CInnerMsgHandler()
{
}

void CInnerMsgHandler::SendStopNetworkThread()
{
}
