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
#include "Packet_Guild_Change_Power_War_Point.h"

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

void CPacketTranslater::SendPacketGuildMail(unsigned char group, unsigned int charNo,
                                            unsigned int guildKey, const char* title,
                                            const char* content,
                                            unsigned int param)
{
    Packet_DBMW_Send_Guild_Mail pkt;
    *(unsigned int*)((char*)&pkt + 0xa) = charNo;
    *(unsigned int*)((char*)&pkt + 0xf) = guildKey;
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
    char* pb = (char*)pkt;
    if (m_pclApp != 0)
    {
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler != 0)
        {
            unsigned char idx = (unsigned char)pb[10];
            if (idx == 0xc8)
            {
                handler->ResetDBHeartBeat();
                if (handler->IsConnectedDBServer() != 1)
                {
                    handler->SetDBConnectFlag(true);
                    handler->SendDBMWConnectionCheck();
                    CMyFileLog log("OnHeartBeat", 0x10d);
                    log("./log/Udp", "DB Server Connection Complete!");
                }
            }
            else if (idx == 0 || 0xbe < idx)
            {
                CMyFileLog log("OnHeartBeat", 0x130);
                log("./log/Except", "[ERROR - HEART BEAT] Channel Index(%d) Over.",
                    (unsigned int)idx);
            }
            else
            {
                handler->ResetHeartBeat(idx);
                if (handler->IsConnectedGameServer(idx) != 1)
                {
                    handler->SetConnectFlag(idx, true);
                    Packet_Tcp_Server_Connect connectPkt;
                    *(unsigned char*)((char*)&connectPkt + 0xa) = 0xcb;
                    CServerInterface* gs = handler->GetGameServer((unsigned int)idx);
                    if (gs == 0)
                    {
                        CMyFileLog log("OnHeartBeat", 0x129);
                        log("./log/Except",
                            "CPacketTranslater::OnHeartBeat() => Channel Index : %d\n",
                            (unsigned int)idx);
                    }
                    else
                    {
                        gs->SendToServer((char*)&connectPkt, 0xb);
                    }
                }
            }
        }
    }
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

STUB_HANDLER(OnInnerPacketLogin)
STUB_HANDLER(OnInnerPacketLogout)
STUB_HANDLER(OnGuildApplyOriginalPowerSide)
STUB_HANDLER(OnGameServerRegist)
STUB_HANDLER(OnRefreshGuildInfo)
STUB_HANDLER(OnReplyTodayGuildMember)
STUB_HANDLER(OnApproveJoinGuild)
STUB_HANDLER(OnDBResponseApproveJoinGuild)
STUB_HANDLER(OnGuildAttendanceInfo)
STUB_HANDLER(OnGuildDebug)
STUB_HANDLER(OnRenew_GM_List)

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

void CPacketTranslater::OnGuildCargoPushItem(PacketHeader* pkt)
{
    unsigned int group = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
    int slot = *(int*)((char*)pkt + 0x12);
    int count = *(int*)((char*)pkt + 0x16);
    unsigned char itemType = *(unsigned char*)((char*)pkt + 0x1a);
    DnfItemInfo* item = (DnfItemInfo*)((char*)pkt + 0x1b);
    unsigned char fst = *(unsigned char*)((char*)pkt + 0x50);
    unsigned short fsn = *(unsigned short*)((char*)pkt + 0x51);
    char* itemDesc = (char*)CGuildCargo::PrintDnfItemInfo(*item);
    CMyFileLog log0("OnGuildCargoPushItem", 0x19b3);
    log0("./log/GuildCargo", "PUSH ITEM(g:%d,cn:%d,sn:%d,sl:%d,fsn:%d,fst:%d,it:%d,%s)",
         group, guildKey, *(unsigned int*)((char*)pkt + 0x12),
         *(unsigned int*)((char*)pkt + 0x16), (unsigned int)fsn, (unsigned int)fst,
         (unsigned int)itemType, itemDesc);
    Packet_Channel_Guild_Cargo_Push_Item resp;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x19c3);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(group);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x19cd);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : 0 == pclUser");
        return;
    }
    *(unsigned int*)((char*)&resp + 0xa) = user->GetIdByChannel();
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x19d7);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : 0 == pclGuild");
        *(unsigned char*)((char*)&resp + 0x12) = 100;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    if (m_pclApp->Get_GuildManager()->IsCargoLock())
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x19e2);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem GUILD CARGO LOCKED!(%d,%d)",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xcc;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    if (guild->IsExistGuildAgit() != 1)
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x19ed);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xb5;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() != 1)
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x19f7);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xc3;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
    if (grade != 3 && grade != 1 && grade != 2)
    {
        CMyFileLog log("OnGuildCargoPushItem", 0x1a05);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPushItem : Access Deny(%d,%d,%d)",
            guildKey, group, (unsigned int)grade);
        *(unsigned char*)((char*)&resp + 0x12) = 0x24;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    int result = cargo->InsertItem(*item, slot, count, itemType, (int)guildKey);
    *(unsigned char*)((char*)&resp + 0x12) = (unsigned char)result;
    *(int*)((char*)&resp + 0x16) = slot;
    if (result == 0xc1)
    {
        cargo->InsertHistory((ENUM_GUILD_CARGO_BEHAVIOR)1, (int)guildKey, user->GetCharName(),
                             *(int*)((char*)pkt + 0x1c), *(int*)((char*)pkt + 0x21),
                             (RandomOption*)((char*)pkt + 0x38));
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        cargo->SendHistoryToDBMW(handler, (ENUM_GUILD_CARGO_BEHAVIOR)1, (int)guildKey,
                                 user->GetCharName(), slot, 0, *item);
        cargo->SendGuildCargoToDBMW(handler, (int)guildKey);
        cargo->PrintCargo((ENUM_GUILD_CARGO_BEHAVIOR)1);
    }
    user->SendTcpGameserver((PacketHeader*)&resp);
}

void CPacketTranslater::OnGuildCargoPopItem(PacketHeader* pkt)
{
    unsigned int group = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
    int slot = *(int*)((char*)pkt + 0x12);
    int id = *(int*)((char*)pkt + 0x16);
    int count = *(int*)((char*)pkt + 0x1a);
    unsigned char itemType = *(unsigned char*)((char*)pkt + 0x1e);
    unsigned int uit = *(unsigned int*)((char*)pkt + 0x1f);
    CMyFileLog log0("OnGuildCargoPopItem", 0x1a65);
    log0("./log/GuildCargo", "POP ITEM(g:%d,cn:%d,sn:%d,id:%d,cnt:%d,it:%d,uit:%d)",
         group, guildKey, slot, id, count, (unsigned int)itemType, uit);
    Packet_Channel_Guild_Cargo_Pop_Item resp;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1a74);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(group);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1a7e);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : 0 == pclUser");
        return;
    }
    *(unsigned int*)((char*)&resp + 0xa) = user->GetIdByChannel();
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1a88);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : 0 == pclGuild");
        *(unsigned char*)((char*)&resp + 0x12) = 100;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    if (m_pclApp->Get_GuildManager()->IsCargoLock())
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1a92);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem GUILD CARGO LOCKED!(%d,%d)",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xcc;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    if (guild->IsExistGuildAgit() != 1)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1a9d);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : (%d,%d) No GuildAgit",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xb5;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() != 1)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1aa7);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : Guild(%d,%d) Not Loaded",
            group, guildKey);
        *(unsigned char*)((char*)&resp + 0x12) = 0xc3;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
    if (grade != 3 && grade != 1 && grade != 2)
    {
        CMyFileLog log("OnGuildCargoPopItem", 0x1ab5);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoPopItem : Access Deny(%d,%d,%d)",
            guildKey, group, (unsigned int)grade);
        *(unsigned char*)((char*)&resp + 0x12) = 0x24;
        user->SendTcpGameserver((PacketHeader*)&resp);
        return;
    }
    DnfItemInfo poppedItem;
    int result = cargo->DeleteItem(poppedItem, slot, count, itemType, id, (int)guildKey);
    *(unsigned char*)((char*)&resp + 0x12) = (unsigned char)result;
    if (result == 0xc1)
    {
        memcpy((char*)&resp + 0x16, &poppedItem, 0x35);
        cargo->InsertHistory((ENUM_GUILD_CARGO_BEHAVIOR)2, (int)guildKey, user->GetCharName(),
                             count, id, (RandomOption*)((char*)&poppedItem + 0x1d));
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        cargo->SendHistoryToDBMW(handler, (ENUM_GUILD_CARGO_BEHAVIOR)2, (int)guildKey,
                                 user->GetCharName(), slot, 0, poppedItem);
        cargo->SendGuildCargoToDBMW(handler, (int)guildKey);
        cargo->PrintCargo((ENUM_GUILD_CARGO_BEHAVIOR)2);
    }
    user->SendTcpGameserver((PacketHeader*)&resp);
}

void CPacketTranslater::OnSetGuildMemberGradeFromWeb(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == m_pclApp");
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int masterCharNo = *(unsigned int*)((char*)pkt + 0xa);
    unsigned char newGrade = *(unsigned char*)((char*)pkt + 0x12);
    unsigned int targetCharNo = *(unsigned int*)((char*)pkt + 0x13);
    if (guildKey == 0)
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x515);
        log("./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : 0 == packet->m_uGuildKey(%d)",
            (unsigned int)(guildKey == 0));
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x51a);
        log("./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild(%d)", masterCharNo);
        return;
    }
    if (!guild->IsGuildMaster(masterCharNo) && !guild->IsSubGuildMaster(masterCharNo))
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x520);
        log("./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : no guild master(%d)", masterCharNo);
        return;
    }
    if (newGrade == 1)
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x526);
        log("./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",
            (int)(char)newGrade);
        return;
    }
    if (newGrade == 2)
    {
        if (4 < guild->GetCurSubGuildMasterCnt())
        {
            CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x52e);
            log("./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : over sub guild master count");
            return;
        }
        if (!guild->IsGuildMaster(masterCharNo))
        {
            CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x535);
            log("./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except master");
            return;
        }
    }
    if (guild->IsGuildMaster(targetCharNo))
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x53d);
        log("./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change guild master(%d)",
            (int)(char)newGrade);
        return;
    }
    if (targetCharNo == masterCharNo)
    {
        CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x542);
        log("./log/GuildModify",
            "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change myself(%d)", targetCharNo);
        return;
    }
    if (newGrade == 2)
    {
        if (!guild->IsGuildMaster(masterCharNo))
        {
            CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x54c);
            log("./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",
                masterCharNo);
            return;
        }
        guild->SetSubGuildMaster(targetCharNo, true);
        guild->SendGuildInfoToMembers(false);
    }
    else if (guild->IsSubGuildMaster(targetCharNo))
    {
        if (!guild->IsGuildMaster(masterCharNo))
        {
            CMyFileLog log("OnSetGuildMemberGradeFromWeb", 0x55c);
            log("./log/GuildModify",
                "CPacketTranslater::OnSetGuildMemberGradeFromWeb : can't change sub guild master except guild master(%d)",
                masterCharNo);
            return;
        }
        guild->SetSubGuildMaster(targetCharNo, false);
        guild->SendGuildInfoToMembers(false);
    }
    guild->ChangeUnconnectedGuildMemberGrade(targetCharNo, (int)(char)newGrade);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(targetCharNo);
    if (user != 0)
    {
        user->ChangeGuildMemberGrade(newGrade);
        Packet_Monitor_Notify_GuildMemberGrade notify;
        *(unsigned int*)((char*)&notify + 0xa) = user->GetIdByChannel();
        *(unsigned int*)((char*)&notify + 0xe) = user->GetUniqCharNo();
        *(unsigned char*)((char*)&notify + 0x12) = newGrade;
        user->SendToGameserver((char*)&notify, *(unsigned short*)((char*)&notify + 2));
    }
}

void CPacketTranslater::OnCheckGuildMemberConnectionFromWeb(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCheckGuildMemberConnectionFromWeb : 0 == m_pclApp");
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    if (guildKey != 0)
    {
        Packet_Answer_Guild_Member_Connection_From_Web resp;
        *(unsigned int*)((char*)&resp + 0xa) = guildKey;
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        unsigned short size;
        if (guild == 0 || guild->IsSetGuildDBFlag(4) != 1)
        {
            size = 0x10;
        }
        else
        {
            short count =
                (short)guild->ReplyGuildMembersToWeb(
                    (STGuildMemberWebConnInfo*)((char*)&resp + 0x10));
            size = (unsigned short)(count * 5 + 0x10);
        }
        *(unsigned short*)((char*)&resp + 2) = size;
        unsigned short port = *(unsigned short*)((char*)pkt + 4);
        unsigned int ip = *(unsigned int*)((char*)pkt + 6);
        if (m_pclApp->Get_UdpHandler()->SendToClient((char*)&resp, (int)size, port, 0, ip) != 1)
        {
            throw CDNFException(strerror(errno));
        }
    }
}

void CPacketTranslater::OnRequestGuildMasterDelegate(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Master_Delegate resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    if (guildKey != 0)
    {
        CUser* requester = m_pclApp->Get_UserManager()->FindUser_CharNo(requesterCharNo);
        if (requester == 0)
        {
            CMyFileLog log("OnRequestGuildMasterDelegate", 0xc23);
            log("./log/Except",
                "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",
                requesterCharNo);
            return;
        }
        *(unsigned int*)((char*)&resp + 0xa) = requesterCharNo;
        *(unsigned int*)((char*)&resp + 0xe) = requester->GetIdByChannel();
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guild == 0)
        {
            CMyFileLog log("OnRequestGuildMasterDelegate", 0xc2c);
            log("./log/GuildModify",
                "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",
                guildKey);
            *(unsigned int*)((char*)&resp + 0x12) = 0x22;
            requester->SendToGameserver((char*)&resp, 0x16);
            return;
        }
        if (guild->IsSetGuildDBFlag(4) == 1)
        {
            if (guild->IsGuildMaster(requesterCharNo))
            {
                CUser* delegatee = m_pclApp->Get_UserManager()->FindUser_CharName(
                    std::string((char*)pkt + 0x12));
                if (delegatee != 0 && !guild->IsSubGuildMaster(delegatee->GetUniqCharNo()))
                {
                    CMyFileLog log("OnRequestGuildMasterDelegate", 0xc49);
                    log("./log/GuildModify",
                        "CPacketTranslater::OnRequestGuildMasterDelegate : Delegatee is Not Sub Guild Master(%d)(%d)",
                        guildKey, delegatee->GetUniqCharNo());
                    *(unsigned int*)((char*)&resp + 0x12) = 0x56;
                    requester->SendToGameserver((char*)&resp, 0x16);
                    return;
                }
                if (requester->GetGameServer() != 0)
                {
                    Packet_DB_Request_Guild_Master_Delegate dbPkt;
                    *(unsigned int*)((char*)&dbPkt + 0xa) = guildKey;
                    *(unsigned int*)((char*)&dbPkt + 0xe) = requesterCharNo;
                    *(unsigned char*)((char*)&dbPkt + 0x12) =
                        requester->GetGameServer()->GetGroupNo();
                    memcpy((char*)&dbPkt + 0x13, (char*)pkt + 0x12, 0x1d);
                    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
                }
            }
            else
            {
                CMyFileLog log("OnRequestGuildMasterDelegate", 0xc3d);
                log("./log/GuildModify",
                    "CPacketTranslater::OnRequestGuildMasterDelegate : Requester is Not Guild Master(%d)(%d)",
                    guildKey, requesterCharNo);
                *(unsigned int*)((char*)&resp + 0x12) = 0x24;
                requester->SendToGameserver((char*)&resp, 0x16);
            }
        }
        else
        {
            CMyFileLog log("OnRequestGuildMasterDelegate", 0xc34);
            log("./log/GuildModify",
                "CPacketTranslater::OnRequestGuildMasterDelegate : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",
                guildKey);
            *(unsigned int*)((char*)&resp + 0x12) = 0x22;
            requester->SendToGameserver((char*)&resp, 0x16);
        }
    }
    else
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0");
    }
}

void CPacketTranslater::OnDBReplyGuildMasterDelegate(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildMasterDelegate : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Master_Delegate resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int delegateeCharNo = *(unsigned int*)((char*)pkt + 0x12);
    int result = *(int*)((char*)pkt + 0x34);
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : packet->m_uGuildKey == 0");
    }
    CUser* requester = m_pclApp->Get_UserManager()->FindUser_CharNo(requesterCharNo);
    if (requester == 0)
    {
        CMyFileLog log("OnDBReplyGuildMasterDelegate", 0xc82);
        log("./log/GuildModify",
            "CPacketTranslater::OnRequestGuildMasterDelegate : 0 == pclRequester, Char Key = %d",
            requesterCharNo);
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBReplyGuildMasterDelegate", 0xc89);
        log("./log/GuildModify",
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : 0 == pclGuild, Guild Key = %d",
            guildKey);
        return;
    }
    if (guild->IsSetGuildDBFlag(4) == 1)
    {
        if (result == 0)
        {
            if (guild->IsSubGuildMaster(delegateeCharNo) == 0)
            {
                CMyFileLog log("OnDBReplyGuildMasterDelegate", 0xc9b);
                log("./log/GuildModify",
                    "CPacketTranslater::OnDBReplyGuildMasterDelegate : Delegatee(%d) is not sub guild master, Guild Key = %d",
                    delegateeCharNo, guildKey);
            }
            else
            {
                guild->SetSubGuildMaster(delegateeCharNo, false);
            }
            if (guild->ChangeGuildMaster(m_pclApp->Get_ServerHandler(), requester,
                                         delegateeCharNo) != 1)
            {
                CMyFileLog log("OnDBReplyGuildMasterDelegate", 0xca5);
                log("./log/GuildModify",
                    "CPacketTranslater::OnDBReplyGuildMasterDelegate : ERR Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
                    guildKey);
            }
            guild->ChangeUnconnectedGuildMemberGrade(requesterCharNo, 3);
            requester->ChangeGuildMemberGrade(3);
            guild->SendGuildInfoToMembers(false);
            guild->NoticeGuildMasterDelegateToMembers((char*)pkt + 0x16);
        }
        if (requester != 0)
        {
            *(unsigned int*)((char*)&resp + 0xa) = requesterCharNo;
            *(unsigned int*)((char*)&resp + 0xe) = requester->GetIdByChannel();
            *(int*)((char*)&resp + 0x12) = result;
            requester->SendToGameserver((char*)&resp, 0x16);
        }
        CUser* delegatee = m_pclApp->Get_UserManager()->FindUser_CharNo(delegateeCharNo);
        if (delegatee != 0)
        {
            Packet_Notice_Has_Been_Guild_Master notice;
            *(unsigned int*)((char*)&notice + 0xa) = delegateeCharNo;
            *(unsigned int*)((char*)&notice + 0xe) = delegatee->GetIdByChannel();
            delegatee->SendToGameserver((char*)&notice, 0x12);
        }
    }
    else
    {
        CMyFileLog log("OnDBReplyGuildMasterDelegate", 0xc8e);
        log("./log/GuildModify",
            "CPacketTranslater::OnDBReplyGuildMasterDelegate : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
            guildKey);
    }
}

void CPacketTranslater::OnRequestGuildSecede(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Secede resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    if (guildKey == 0)
    {
        throw CDNFException("CPacketTranslater::OnCallGuildInvite : packet->m_uGuildKey == 0");
    }
    CUser* requester = m_pclApp->Get_UserManager()->FindUser_CharNo(requesterCharNo);
    if (requester == 0)
    {
        CMyFileLog log("OnRequestGuildSecede", 0xb3d);
        log("./log/Except",
            "CPacketTranslater::OnRequestGuildSecede : 0 == pclRequester, Char Key = %d",
            requesterCharNo);
        return;
    }
    *(unsigned int*)((char*)&resp + 0xa) = requesterCharNo;
    *(unsigned int*)((char*)&resp + 0xe) = requester->GetIdByChannel();
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild != 0)
    {
        if (guild->IsSetGuildDBFlag(4) != 1)
        {
            CMyFileLog log("OnRequestGuildSecede", 0xb4e);
            log("./log/GuildModify",
                "CPacketTranslater::OnRequestGuildSecede : !( m_eGuildDBFlag & GUILD_DB_LOAD_STATE ), Guild Key = %d",
                guildKey);
            *(unsigned int*)((char*)&resp + 0x12) = 0x22;
            requester->SendToGameserver((char*)&resp, 0x52);
            return;
        }
        Packet_DB_Request_Guild_Secede dbPkt;
        *(unsigned int*)((char*)&dbPkt + 0xa) = guildKey;
        *(unsigned int*)((char*)&dbPkt + 0xe) = requesterCharNo;
        size_t nameLen = *(size_t*)((char*)pkt + 0x12);
        memcpy((char*)&dbPkt + 0x16, (char*)pkt + 0x16, nameLen);
        if (*(int*)((char*)pkt + 0x12) == 0)
        {
            *(unsigned char*)((char*)&dbPkt + 0x12) = 1;
            const char* name = requester->GetCharName();
            memcpy((char*)&dbPkt + 0x16, name, strlen(name));
        }
        else
        {
            if (!guild->IsGuildMaster(requesterCharNo) &&
                !guild->IsSubGuildMaster(requesterCharNo))
            {
                CMyFileLog log("OnRequestGuildSecede", 0xb60);
                log("./log/GuildModify",
                    "CPacketTranslater::OnRequestGuildSecede : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",
                    guildKey, requesterCharNo);
                *(unsigned int*)((char*)&resp + 0x12) = 0x24;
                requester->SendToGameserver((char*)&resp, 0x52);
                return;
            }
            *(unsigned char*)((char*)&dbPkt + 0x12) = 2;
        }
        m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
        return;
    }
    CMyFileLog log("OnRequestGuildSecede", 0xb46);
    log("./log/GuildModify",
        "CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Guild Key = %d", guildKey);
    *(unsigned int*)((char*)&resp + 0x12) = 0x22;
    requester->SendToGameserver((char*)&resp, 0x52);
}

void CPacketTranslater::OnDBReplyGuildSecede(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildSecede : 0 == m_pclApp");
    Packet_Guild_Reply_Guild_Secede resp;
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int targetCharNo = *(unsigned int*)((char*)pkt + 0x12);
    int secedeType = *(int*)((char*)pkt + 0x16);
    unsigned char secedeFlag = *(unsigned char*)((char*)pkt + 0x1a);
    unsigned int dbid = *(unsigned int*)((char*)pkt + 0x3d);
    CUser* requester = m_pclApp->Get_UserManager()->FindUser_CharNo(requesterCharNo);
    if (requester == 0)
    {
        CMyFileLog log("OnDBReplyGuildSecede", 0xb9e);
        log("./log/Except",
            "CPacketTranslater::OnRequestGuildSecede : 0 == pclCaller, Char Key = %d",
            requesterCharNo);
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBReplyGuildSecede", 0xba3);
        log("./log/GuildModify",
            "CPacketTranslater::OnRequestGuildSecede : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)",
            requesterCharNo);
        return;
    }
    *(unsigned int*)((char*)&resp + 0xa) = guildKey;
    *(unsigned short*)((char*)&resp + 0xe) = guild->GetTotalCnt_Of_GuildDBInfo();
    *(unsigned int*)((char*)&resp + 0x10) = requesterCharNo;
    *(unsigned int*)((char*)&resp + 0x14) = requester->GetIdByChannel();
    *(unsigned char*)((char*)&resp + 0x18) = secedeFlag;
    if (secedeType == 0 || secedeType == 1)
    {
        if (requesterCharNo != targetCharNo)
        {
            CUser* target = m_pclApp->Get_UserManager()->FindUser_CharNo(targetCharNo);
            if (target == 0)
            {
                Packet_No_Cache noCache;
                *(unsigned int*)((char*)&noCache + 0xa) = dbid;
                *(unsigned int*)((char*)&noCache + 0xe) =
                    (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
                *(unsigned int*)((char*)&noCache + 0x12) = 1;
                m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&noCache);
                *(unsigned int*)((char*)&noCache + 0x12) = 2;
                m_pclApp->Get_ServerHandler()->SendTcpGameServerFirst(&noCache);
                Packet_DBMW_Query_Msg query;
                *(unsigned int*)((char*)&query + 0xa) = 2;
                *(unsigned int*)((char*)&query + 0xe) = 0x4f00;
                char sql[4097];
                sprintf(sql, "upDate charac_info set guild_secede = 1 where charac_no = %u",
                        targetCharNo);
                m_pclApp->Get_ServerHandler()->SendToDB(&query);
            }
            else
            {
                Packet_Guild_Exp_Book_Delete expDel;
                *(unsigned int*)((char*)&expDel + 0xa) = target->GetIdByChannel();
                *(unsigned int*)((char*)&expDel + 0xe) = target->GetUniqCharNo();
                *(unsigned int*)((char*)&expDel + 0x12) =
                    (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
                *(unsigned int*)((char*)&expDel + 0x16) = target->GetDBID();
                target->SendTcpGameserver((PacketHeader*)&expDel);
            }
        }
        ST_Notice_Guild_Secede notice;
        memset(&notice, 0, sizeof(notice));
        *(unsigned int*)((char*)&notice + 0) = guildKey;
        *(unsigned int*)((char*)&notice + 4) = targetCharNo;
        *(unsigned short*)((char*)&notice + 8) = (unsigned short)(signed char)secedeFlag;
        memcpy((char*)&notice + 0xe, (char*)pkt + 0x1f, 0x1d);
        memcpy((char*)&notice + 0x2b, guild->GetGuildName(), 0x16);
        guild->NoticeSecedeToGuildMember((char*)&notice);
        m_pclApp->Get_GuildManager()->GuildSecede(guildKey, notice);
        guild->SendGuildInfoToMembers(false);
        if (guild != 0 && secedeType == 1)
        {
            if (guild->GetTotalCnt_Of_GuildDBInfo() != 0)
            {
                CMyFileLog log("OnDBReplyGuildSecede", 0xbf3);
                log("./log/GuildModify",
                    "CPacketTranslater::OnDBReplyGuildSecede : Guild(%d) Deleted, rest member count(%d)",
                    guild->GetGuildKey(), guild->GetTotalCnt_Of_GuildDBInfo() & 0xffff);
            }
            m_pclApp->Get_GuildManager()->GuildDismiss(guild);
        }
        *(unsigned int*)((char*)&resp + 0x1a) = 0;
        requester->SendToGameserver((char*)&resp, 0x52);
    }
    else
    {
        *(unsigned int*)((char*)&resp + 0x1a) = (unsigned int)secedeType;
        requester->SendToGameserver((char*)&resp, 0x52);
    }
}

void CPacketTranslater::OnGuildMasterDelegateFromWeb(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == m_pclApp");
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xa);
    unsigned int requesterCharNo = *(unsigned int*)((char*)pkt + 0xe);
    unsigned int delegateeCharNo = *(unsigned int*)((char*)pkt + 0x12);
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnGuildMasterDelegateFromWeb : packet->m_uGuildKey == 0");
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xcf0);
        log("./log/GuildModify",
            "CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclGuild, Guild Key = %d",
            guildKey);
        return;
    }
    if (guild->IsSetGuildDBFlag(4) == 1)
    {
        if (guild->IsGuildMaster(requesterCharNo))
        {
            CUser* requester = m_pclApp->Get_UserManager()->FindUser_CharNo(requesterCharNo);
            if (requester == 0)
            {
                CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xd04);
                log("./log/GuildModify",
                    "CPacketTranslater::OnGuildMasterDelegateFromWeb : 0 == pclRequester, Char Key = %d",
                    requesterCharNo);
            }
            if (guild->IsSubGuildMaster(delegateeCharNo) == 0)
            {
                CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xd10);
                log("./log/GuildModify",
                    "CPacketTranslater::OnGuildMasterDelegateFromWeb : Delegatee(%d) is not sub guild master, Guild Key = %d",
                    delegateeCharNo, guildKey);
            }
            else
            {
                guild->SetSubGuildMaster(delegateeCharNo, false);
                if (guild->ChangeGuildMaster(m_pclApp->Get_ServerHandler(), requester,
                                             delegateeCharNo) != 1)
                {
                    CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xd1b);
                    log("./log/GuildModify",
                        "CPacketTranslater::OnGuildMasterDelegateFromWeb : ERR : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
                        guildKey);
                }
                guild->ChangeUnconnectedGuildMemberGrade(requesterCharNo, 3);
                if (requester != 0)
                {
                    requester->ChangeGuildMemberGrade(3);
                }
                guild->SendGuildInfoToMembers(false);
                guild->NoticeGuildMasterDelegateToMembers((char*)pkt + 0x16);
                CUser* delegatee = m_pclApp->Get_UserManager()->FindUser_CharNo(delegateeCharNo);
                if (delegatee != 0)
                {
                    Packet_Notice_Has_Been_Guild_Master notice;
                    *(unsigned int*)((char*)&notice + 0xa) = delegateeCharNo;
                    *(unsigned int*)((char*)&notice + 0xe) = delegatee->GetIdByChannel();
                    delegatee->SendToGameserver((char*)&notice, 0x12);
                }
            }
        }
        else
        {
            CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xcfd);
            log("./log/GuildModify",
                "CPacketTranslater::OnGuildMasterDelegateFromWeb : Requester is Not Guild Master(%d)(%d)",
                guildKey, requesterCharNo);
        }
    }
    else
    {
        CMyFileLog log("OnGuildMasterDelegateFromWeb", 0xcf6);
        log("./log/GuildModify",
            "CPacketTranslater::OnGuildMasterDelegateFromWeb : Guild'state is not GUILD_DB_LOAD_STATE, Guild Key = %d",
            guildKey);
    }
}

void CPacketTranslater::OnBuyGuildSkill(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnBuyGuildSkill : 0 == m_pclApp");
    unsigned int charNo = *(unsigned int*)((char*)pkt + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        throw CDNFException("CPacketTranslater::OnBuyGuildSkill : 0 == pclUser");
    }
    unsigned int guildKey = *(unsigned int*)((char*)pkt + 0xe);
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnBuyGuildSkill : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild != 0)
    {
        bool isMaster = guild->IsGuildMaster(charNo) || guild->IsSubGuildMaster(charNo);
        if (isMaster &&
            guild->BuyGuildSkill(*(int*)((char*)pkt + 0x12), *(int*)((char*)pkt + 0x16),
                                 *(short*)((char*)pkt + 0x1a),
                                 *(unsigned int*)((char*)pkt + 0x1c)))
        {
            char saveFlag = (char)guild->GetDBSaveFlag();
            guild->SendGuildInfoToMembers(false);
            unsigned char group =
                user->GetGameServer() != 0 ? user->GetGameServer()->GetGroupNo() : 0;
            guild->DBGuildSave(group, m_pclApp->Get_ServerHandler(), 1);
            if (saveFlag != 0)
            {
                guild->EnableDBSaveFlag();
                guild->DBGuildSave(group, m_pclApp->Get_ServerHandler(), 0);
            }
        }
    }
}

void CPacketTranslater::OnMonitorSendGuildLetter(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    unsigned int guildId = *(unsigned int*)(pb + 0xe);
    const char* msg = pb + 0x12;
    Packet_Monitor_Reply_Guild_Mail reply;
    {
        CMyFileLog log("OnMonitorSendGuildLetter", 0xa98);
        log("./log/GuildLetter", "charNo(%d),guildId(%d),msg(%s)", charNo, guildId, msg);
    }
    if (guildId == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnMonitorSendGuildLetter : packet->m_uGuildKey == 0");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnMonitorSendGuildLetter", 0xaa0);
        log("./log/GuildModify",
            "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser, Char Key = %d", charNo);
        return;
    }
    *(unsigned int*)((char*)&reply + 0xa) = charNo;
    *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildId);
    if (guild != 0)
    {
        if (!(guild->IsGuildMaster(charNo) || guild->IsSubGuildMaster(charNo)))
        {
            CMyFileLog log("OnMonitorSendGuildLetter", 0xab0);
            log("./log/GuildModify",
                "CPacketTranslater::OnMonitorSendGuildLetter : IsGuildMaster or IsSubGuildMaster, g(%d), c(%d)",
                guildId, charNo);
            *(unsigned char*)((char*)&reply + 0x12) = 0x24;
            user->SendToGameserver((char*)&reply, 0x13);
        }
        else
        {
            CServerInterface* gs = user->GetGameServer();
            if (gs == 0)
            {
                CMyFileLog log("OnMonitorSendGuildLetter", 0xab8);
                log("./log/GuildModify",
                    "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclUser->GetGameServer(), g(%d), c(%d)",
                    guildId, charNo);
                *(unsigned char*)((char*)&reply + 0x12) = 1;
                user->SendToGameserver((char*)&reply, 0x13);
            }
            else
            {
                SendPacketGuildMail(gs->GetGroupNo(), charNo, guildId, "", msg, 0xffffffff);
            }
        }
    }
    else
    {
        CMyFileLog log("OnMonitorSendGuildLetter", 0xaa8);
        log("./log/GuildModify",
            "CPacketTranslater::OnMonitorSendGuildLetter : 0 == pclGuild, Guild Key = %d", guildId);
        *(unsigned char*)((char*)&reply + 0x12) = 0x22;
        user->SendToGameserver((char*)&reply, 0x13);
    }
}

void CPacketTranslater::OnDBMWReplySendGuildLetter(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == m_pclApp");
    char* pb = (char*)pkt;
    Packet_Monitor_Reply_Guild_Mail reply;
    if (*(unsigned int*)(pb + 0xe) == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBMWReplySendGuildLetter : packet->m_uGuildKey == 0");
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnDBMWReplySendGuildLetter", 0xb0e);
        log("./log/GuildModify",
            "CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d", charNo);
    }
    else
    {
        *(unsigned int*)((char*)&reply + 0xa) = charNo;
        *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
        *(unsigned char*)((char*)&reply + 0x12) = *(unsigned char*)(pb + 0x12);
        user->SendToGameserver((char*)&reply, 0x13);
    }
}

void CPacketTranslater::OnReplyUserInfo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    {
        CMyFileLog log("OnReplyUserInfo", 0x150);
        log("./log/Reboot", "[GAME SERVER] Channel No : %d\n",
            (unsigned int)(unsigned char)pb[0xb]);
    }
    THROW_IF_NO_APP("CPacketTranslater::OnReplyUserInfo : m_pclApp == 0");
    CGameServer* gs = m_pclApp->FindGameServer((int)(unsigned char)pb[0xb]);
    if (gs == 0)
    {
        throw CDNFException("CPacketTranslater::OnReplyUserInfo : pclGameServer == 0");
    }
    CTcpGameServer* tgs = m_pclApp->FindTcpGameServer(*(unsigned int*)(pb + 6));
    if (tgs != 0)
    {
        CUserManager* um = m_pclApp->Get_UserManager();
        int count = (int)(unsigned char)pb[10];
        for (int i = 0; i < count; i++)
        {
            char* rec = pb + i * 0x4e + 0xc;
            unsigned int dbid = *(unsigned int*)(rec + 0);
            CUser* user = um->FindUser(dbid);
            if (user == 0)
            {
                user = um->CreateUser(dbid, *(unsigned int*)(rec + 4), rec + 0x14,
                                      *(int*)(rec + 8), gs);
                user->SetUserInfo_CharNo((char)rec[0x10], (char)rec[0x11],
                                         *(short*)(rec + 0x12), *(unsigned int*)(rec + 4),
                                         rec + 0x14);
                user->SetSex((unsigned char)rec[0x46]);
                user->SetSsn(rec + 0x47);
                user->SetTcpGameServer(tgs);
                RequestBlackListToDBMW(dbid);
                if (*(unsigned int*)(rec + 0xc) != 0)
                {
                    m_pclApp->Get_GuildManager()->GuildMemLogin(*(unsigned int*)(rec + 0xc),
                                                                user);
                }
            }
            else
            {
                char* mid = NumberToString(dbid, 0);
                CMyFileLog log("OnReplyUserInfo", 0x166);
                log("./log/Except", "CPacketTranslater::OnReplyUserInfo() : %s\n", mid);
            }
        }
    }
}

void CPacketTranslater::OnDBReplyGuildAllMembers(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDBReplyGuildAllMembers : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyGuildAllMembers : packet->m_uGuildKey == 0");
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyGuildAllMembers : 0 == pclGuild ,the guild is out");
    }
    guild->LoadGuildAllMembersProxy((STGuildMemberProxy*)(pb + 0x14),
                                    (unsigned char)pb[0x12], (unsigned char)pb[0x13]);
    CUser* user = 0;
    if ((unsigned char)pb[0x12] == 2)
    {
        user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
        if (user != 0)
        {
            guild->SetGuildDBFlag(0x10);
            guild->ReplyGuildAllMembers(user);
            CMyFileLog log("OnDBReplyGuildAllMembers", 0x87b);
            log("./log/GuildModify", "OnDBReplyGuildAllMembers gKey(%d), cKey(%d)", guildKey,
                *(unsigned int*)(pb + 0xe));
        }
    }
}

void CPacketTranslater::OnDBReplyUnconnGuildMember(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    if (guildKey == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBReplyUnconnGuildMember : packet->m_uGuildKey == 0");
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild != 0)
    {
        guild->LoadGuildOneMemberProxy(*(STGuildMemberProxy*)(pb + 0x12));
        return;
    }
    throw CDNFException(
        "CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == pclGuild ,the guild is out");
}

void CPacketTranslater::OnDBReplyGuildCreate(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBReplyGuildCreate", 0x112c);
        log("./log/GuildModify", "CPacketTranslater::OnDBReplyGuildCreate : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnDBReplyGuildCreate", 0x1133);
        log("./log/GuildModify",
            "CPacketTranslater::OnDBReplyGuildCreate : 0 == pclRequestUser");
        return;
    }
    Packet_Notice_GuildName_On_Guild_Create notice;
    Packet_Reply_Guild_Create reply;
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    *(unsigned int*)((char*)&notice + 0xa) = charNo;
    *(unsigned int*)((char*)&reply + 0xa) = charNo;
    unsigned int channel = user->GetIdByChannel();
    *(unsigned int*)((char*)&notice + 0xe) = channel;
    *(unsigned int*)((char*)&reply + 0xe) = channel;
    int result = *(int*)(pb + 0x12);
    *(int*)((char*)&reply + 0x12) = result;
    memcpy((char*)&reply + 0x16, pb + 0x16, 0x16);
    if (result == 0)
    {
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler == 0)
        {
            throw CDNFException("CGuildManager::GuildMemLogin() pclServerHandler == NULL\n");
        }
        CGuild* guild = m_pclApp->Get_GuildManager()->CreateGuild(guildKey, handler, charNo);
        unsigned int uniqCharNo = user->GetUniqCharNo();
        if (guild->InsertGuildMember(uniqCharNo, user) == 1)
        {
            user->QueryGuildMember(handler);
        }
        uniqCharNo = user->GetUniqCharNo();
        user->SendSetGuildKeyToUser(guildKey, uniqCharNo);
        *(unsigned int*)((char*)&notice + 0x12) = guildKey;
        memcpy((char*)&notice + 0x16, pb + 0x16, 0x16);
        *(unsigned char*)((char*)&notice + 0x2d) = m_pclApp->Get_ServerGroup();
        m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&notice);
        m_pclApp->Get_GuildManager()->AttendGuild(guildKey, charNo);
        guild->QueryTodayGuildMember(m_pclApp->Get_ServerHandler());
    }
    user->SendTcpGameserver(&reply);
}

void CPacketTranslater::OnChangePowerWarPoint(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnChangePowerWarPoint", 0x11ba);
        log("./log/Power", "CPacketTranslater::OnChangePowerWarScore : 0 == m_pclApp");
        return;
    }
    CPowerManager* pm = m_pclApp->GetPowerManager();
    if (pm->IsPowerWarOn() == 1)
    {
        if ((unsigned char)pb[10] != 1 && (unsigned char)pb[10] != 2)
        {
            if ((unsigned char)pb[10] == 0)
            {
                CMyFileLog log("OnChangePowerWarPoint", 0x11c9);
                log("./log/Power",
                    "ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)",
                    (unsigned int)(unsigned char)pb[10], *(unsigned int*)(pb + 0xb),
                    *(unsigned int*)(pb + 0xf), *(unsigned int*)(pb + 0x13),
                    *(unsigned int*)(pb + 0x17), (unsigned int)(unsigned char)pb[0x2b]);
                return;
            }
            CMyFileLog log("OnChangePowerWarPoint", 0x11ce);
            log("./log/Power",
                "ChangePowerWarPoint Invalid Power Side Income(side:%d, 0:%d, 1:%d, 2:%d, 3:%d, pp:%d)",
                (unsigned int)(unsigned char)pb[10], *(unsigned int*)(pb + 0xb),
                *(unsigned int*)(pb + 0xf), *(unsigned int*)(pb + 0x13),
                *(unsigned int*)(pb + 0x17), (unsigned int)(unsigned char)pb[0x2b]);
            pb[10] = (char)((unsigned char)pb[10] == 3 ? 1 : 2);
        }
        int winScore = pm->IncPowerScore((ENUM_POWER_SIDE_TYPE)(unsigned char)pb[10],
                                         (unsigned char)pb[0x2b]);
        ENUM_POWER_SIDE_TYPE loseSide =
            (unsigned char)pb[10] == 1 ? (ENUM_POWER_SIDE_TYPE)2 : (ENUM_POWER_SIDE_TYPE)1;
        int loseScore = pm->IncPowerScore(loseSide, (unsigned char)pb[0x2c]);
        {
            CMyFileLog log("OnChangePowerWarPoint", 0x11e1);
            log("./log/Power", "win side(%d), win pp(%d, %d), lose pp(%d, %d)",
                (unsigned int)(unsigned char)pb[10], (unsigned int)(unsigned char)pb[0x2b],
                winScore, (unsigned int)(unsigned char)pb[0x2c], loseScore);
        }
        pm->UpdatePowerWarInfo(1, (ENUM_POWER_SIDE_TYPE)(unsigned char)pb[10],
                               (unsigned char)pb[0x2b], (unsigned int*)(pb + 0xb));
        pm->UpdatePowerWarInfo(0, loseSide, (unsigned char)pb[0x2c],
                               (unsigned int*)(pb + 0x1b));
        std::vector<unsigned int> users;
        users.reserve(8);
        ((Packet_Guild_Change_Power_War_Point*)pb)->GetUserList(users);
        for (unsigned int i = 0; i < users.size(); i++)
        {
            pm->SendPowerWarProcessInfo(users[i]);
        }
    }
}

void CPacketTranslater::OnEventEnd(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnEventEnd : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int eventCode = *(unsigned int*)(pb + 10);
    CMyFileLog log("OnEventEnd", 0xe6b);
    log("./log/Web", "CPacketTranslater::OnEventEnd() eventCode(%d)\n", eventCode);
    m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
}

void CPacketTranslater::OnNoticeGuildWarEnd(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildWarEnd : 0 == m_pclApp");
    CGuildWar* war = m_pclApp->Get_GuildManager()->GetGuildWar();
    if (war->IsGuildWarEventOn() == 1)
    {
        char* pb = (char*)pkt;
        war->SetGuildWarEvent(false, (unsigned char)pb[10]);
        if (war->Rank() != 1)
        {
            throw CDNFException(
                "CPacketTranslater::OnNoticeGuildWarEnd : false == Rank() : May be m_vtGuildWarInfo is empty!");
        }
        if (war->SameRankWork() != 1)
        {
            throw CDNFException(
                "CPacketTranslater::OnNoticeGuildWarEnd : false == SameRankWork() : May be m_vtGuildWarInfo is empty!");
        }
        unsigned char group = m_pclApp->Get_ServerGroup();
        Packet_Notice_DB_Guild_War_End dbPkt;
        *(unsigned char*)((char*)&dbPkt + 0xa) = group;
        war->GetGuildWarInfo((unsigned int*)((char*)&dbPkt + 0xb),
                             (unsigned int*)((char*)&dbPkt + 0x33),
                             (unsigned short*)((char*)&dbPkt + 0x5b));
        m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
        Packet_Monitor_Event_End monPkt;
        *(unsigned int*)((char*)&monPkt + 0xa) = 9;
        OnEventEnd(&monPkt);
    }
}

void CPacketTranslater::OnGuildCargoMoveItem(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    Packet_Channel_Guild_Cargo_Move_Item reply;
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    unsigned int fromSlot = *(unsigned int*)(pb + 0x12);
    unsigned int toSlot = *(unsigned int*)(pb + 0x16);
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b15);
        log("./log/GuildCargo", "MOVE ITEM(g:%d,cn:%d,fsn:%d,dsn:%d",
            *(unsigned int*)(pb + 0xa), charNo, fromSlot, toSlot);
    }
    *(unsigned int*)((char*)&reply + 0xe) = charNo;
    *(unsigned int*)((char*)&reply + 0x13) = fromSlot;
    *(unsigned int*)((char*)&reply + 0x17) = toSlot;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b21);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b2b);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoMoveItem : 0 == pclUser");
        return;
    }
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xa));
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b35);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoMoveItem : 0 == pclGuild");
        *(unsigned char*)((char*)&reply + 0x12) = 100;
        user->SendTcpGameserver(&reply);
        return;
    }
    if (m_pclApp->Get_GuildManager()->IsCargoLock() != 0)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b40);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem GUILD CARGO LOCKED!(%d,%d)",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
        *(unsigned char*)((char*)&reply + 0x12) = 0xcc;
        user->SendTcpGameserver(&reply);
        return;
    }
    if (guild->IsExistGuildAgit() != 1)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b4b);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : (%d,%d) No GuildAgit",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
        *(unsigned char*)((char*)&reply + 0x12) = 0xb5;
        user->SendTcpGameserver(&reply);
        return;
    }
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() != 1)
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b55);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : Guild(%d,%d) Not Loaded",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa));
        *(unsigned char*)((char*)&reply + 0x12) = 0xc3;
        user->SendTcpGameserver(&reply);
        return;
    }
    unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
    if (grade == 3 || grade == 1 || grade == 2)
    {
        DnfItemInfo fromItem;
        DnfItemInfo toItem;
        int result = cargo->MoveItem(fromItem, toItem, *(int*)(pb + 0x12),
                                     *(int*)(pb + 0x1a), *(int*)(pb + 0x16),
                                     *(int*)(pb + 0x1e), *(int*)(pb + 0xe));
        *(unsigned char*)((char*)&reply + 0x12) = (unsigned char)result;
        if (result == 0xc1)
        {
            cargo->SendGuildCargoToDBMW(m_pclApp->Get_ServerHandler(), *(int*)(pb + 0xe));
            cargo->PrintCargo((ENUM_GUILD_CARGO_BEHAVIOR)3);
        }
        user->SendTcpGameserver(&reply);
    }
    else
    {
        CMyFileLog log("OnGuildCargoMoveItem", 0x1b63);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoMoveItem : Access Deny(%d,%d,%d)",
            *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0xa), (unsigned int)grade);
        *(unsigned char*)((char*)&reply + 0x12) = 0x24;
        user->SendTcpGameserver(&reply);
    }
}

void CPacketTranslater::OnGuildCargoUpgrade(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargoUpgrade", 0x1bd1);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoUpgrade : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargoUpgrade", 0x1bdb);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoUpgrade : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargoUpgrade", 0x1be2);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoUpgrade : 0 == pclGuild");
        return;
    }
    if (guild->IsGuildMaster(charNo) == 1)
    {
        if (guild->IsExistGuildAgit() == 1)
        {
            int curCapacity = guild->GetGuildCargo()->GetCapacity();
            if (*(int*)(pb + 0x12) == curCapacity)
            {
                unsigned int reqFund = *(unsigned int*)(pb + 0x1a);
                unsigned int guildFund = guild->GetGuildFund();
                if (guildFund < reqFund)
                {
                    CMyFileLog log("OnGuildCargoUpgrade", 0x1c00);
                    log("./log/GuildCargo",
                        "CPacketTranslater::OnGuildCargoUpgrade guild fund shortage(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d), ReqFund(%d), CurrFund(%d)",
                        *(unsigned int*)(pb + 0x12), *(unsigned int*)(pb + 0x16), curCapacity,
                        guildKey, charNo, reqFund, guildFund);
                }
                else
                {
                    guild->SubGuildFund(reqFund);
                    guild->SendGuildInfoToMembers(true);
                    guild->GetGuildCargo()->SetCapacity(*(unsigned int*)(pb + 0x16));
                    CTcpDBServer* tcpDb = m_pclApp->Get_ServerHandler()->GetTcpDBServer();
                    char* buf = tcpDb->makePacketHeader(0x714, 0x16);
                    *(unsigned int*)(buf + 0xa) = guildKey;
                    *(unsigned int*)(buf + 0xe) = charNo;
                    *(unsigned int*)(buf + 0x12) = *(unsigned int*)(pb + 0x16);
                    tcpDb->SendToServer(buf);
                    Packet_Channel_Guild_Cargo_Upgrade reply;
                    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
                    *(unsigned int*)((char*)&reply + 0xe) = charNo;
                    *(unsigned char*)((char*)&reply + 0x12) = 0xc1;
                    user->SendToGameserver((char*)&reply, 0x13);
                    guild->GetGuildCargo()->SendGuildCargo(user);
                }
            }
            else
            {
                CMyFileLog log("OnGuildCargoUpgrade", 0x1bf7);
                log("./log/GuildCargo",
                    "CPacketTranslater::OnGuildCargoUpgrade Capacity(c:%d,n:%d, gcapa:%d) Error! Guild(%d), User(%d)",
                    *(unsigned int*)(pb + 0x12), *(unsigned int*)(pb + 0x16), curCapacity,
                    guildKey, charNo);
            }
        }
        else
        {
            CMyFileLog log("OnGuildCargoUpgrade", 0x1bf0);
            log("./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoUpgrade : %d guild agit error", guildKey);
        }
    }
    else
    {
        CMyFileLog log("OnGuildCargoUpgrade", 0x1be9);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoUpgrade : %d is not guild master(g:%d)", charNo,
            guildKey);
    }
}

void CPacketTranslater::OnGuildCargoCheckPushItem(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x1935);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == m_pclApp");
        return;
    }
    Packet_Channel_Check_Guild_Cargo_Push_Item reply;
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    *(unsigned int*)((char*)&reply + 0xe) = charNo;
    *(unsigned int*)((char*)&reply + 0x13) = *(unsigned int*)(pb + 0x12);
    *(unsigned int*)((char*)&reply + 0x17) = *(unsigned int*)(pb + 0x16);
    *(unsigned int*)((char*)&reply + 0x1b) = *(unsigned int*)(pb + 0x1a);
    *(unsigned char*)((char*)&reply + 0x23) = *(unsigned char*)(pb + 0x22);
    *(unsigned int*)((char*)&reply + 0x1f) = *(unsigned int*)(pb + 0x1e);
    *(unsigned short*)((char*)&reply + 0x25) = *(unsigned short*)(pb + 0x24);
    *(unsigned char*)((char*)&reply + 0x24) = *(unsigned char*)(pb + 0x23);
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x194a);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclUser");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x1952);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoCheckPushItem : 0 == pclGuild");
        return;
    }
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    if (m_pclApp->Get_GuildManager()->IsCargoLock() != 0)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x195c);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoCheckPushItem GUILD CARGO LOCKED!(%d,%d)", charNo,
            guildKey);
        *(unsigned char*)((char*)&reply + 0x12) = 0xcc;
        user->SendTcpGameserver(&reply);
        return;
    }
    if (guild->IsExistGuildAgit() != 1)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x1967);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoPushItem : (%d,%d) No GuildAgit", charNo, guildKey);
        *(unsigned char*)((char*)&reply + 0x12) = 0xb5;
        user->SendTcpGameserver(&reply);
        return;
    }
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() != 1)
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x1971);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoPushItem : Guild(%d,%d) Not Loaded", charNo,
            guildKey);
        *(unsigned char*)((char*)&reply + 0x12) = 0xc3;
        user->SendTcpGameserver(&reply);
        return;
    }
    unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
    if (grade == 3 || grade == 1 || grade == 2)
    {
        int result = cargo->CheckInsertItem(*(int*)(pb + 0x16), *(int*)(pb + 0x1a),
                                            *(int*)(pb + 0x12), *(unsigned char*)(pb + 0x22),
                                            *(int*)(pb + 0x1e));
        *(unsigned char*)((char*)&reply + 0x12) = (unsigned char)result;
        user->SendTcpGameserver(&reply);
    }
    else
    {
        CMyFileLog log("OnGuildCargoCheckPushItem", 0x197f);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoCheckPushItem : Access Deny(%d,%d,%d)", charNo,
            guildKey, (unsigned int)grade);
        *(unsigned char*)((char*)&reply + 0x12) = 0x24;
        user->SendTcpGameserver(&reply);
    }
}

void CPacketTranslater::OnPacketJoinPower(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    Packet_Answer_Join_Power reply;
    *(unsigned int*)((char*)&reply + 0xa) = 0;
    *(unsigned int*)((char*)&reply + 0x12) = *(unsigned int*)(pb + 0xa);
    *(unsigned char*)((char*)&reply + 0x16) = *(unsigned char*)(pb + 0x12);
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnPacketJoinPower", 0x1237);
        log("./log/Power", "CPacketTranslater::OnPacketJoinPower : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnPacketJoinPower", 0x123d);
        log("./log/Power", "CPacketTranslater::OnPacketJoinPower : 0 == pclRequestUser");
        return;
    }
    *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        CMyFileLog log("OnPacketJoinPower", 0x1244);
        log("./log/Power", "CPacketTranslater::OnPacketJoinPower : 0 == pclGuild");
        *(unsigned int*)((char*)&reply + 0xa) = 100;
        user->SendToGameserver((char*)&reply, 0x17);
        return;
    }
    if (guild->IsSubGuildMaster(charNo) == 1 || guild->IsGuildMaster(charNo) == 1)
    {
        unsigned char side = (unsigned char)pb[0x12] == 1 ? 3 : 4;
        guild->SetPowerSide(side);
        guild->IncPowerJoinCount();
        CServerInterface* gs = user->GetGameServer();
        guild->DBGuildSave(gs->GetGroupNo(), m_pclApp->Get_ServerHandler(), 0);
        *(unsigned char*)((char*)&reply + 0x16) = side;
        user->SendToGameserver((char*)&reply, 0x17);
        guild->SendGuildInfoToMembers(false);
    }
    else
    {
        CMyFileLog log("OnPacketJoinPower", 0x124f);
        log("./log/Power",
            "CPacketTranslater::OnPacketJoinPower : %d is not guild master or sub master(g:%d)",
            charNo, guildKey);
        *(unsigned int*)((char*)&reply + 0xa) = 0x56;
        user->SendToGameserver((char*)&reply, 0x17);
    }
}

void CPacketTranslater::OnPacketSecedePower(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnPacketSecedePower", 0x12a9);
        log("./log/Power", "CPacketTranslater::OnPacketSecedePower : 0 == m_pclApp");
        return;
    }
    Packet_Answer_Secede_Power reply;
    *(unsigned int*)((char*)&reply + 0xa) = 0;
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    *(unsigned int*)((char*)&reply + 0x12) = charNo;
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnPacketSecedePower", 0x12b5);
        log("./log/Power", "CPacketTranslater::OnPacketSecedePower : 0 == pclRequestUser");
        return;
    }
    *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        CMyFileLog log("OnPacketSecedePower", 0x12bc);
        log("./log/Power", "CPacketTranslater::OnPacketSecedePower : 0 == pclGuild");
        *(unsigned int*)((char*)&reply + 0xa) = 100;
        user->SendToGameserver((char*)&reply, 0x17);
        return;
    }
    if (guild->GetPowerSide() != 0)
    {
        if (guild->IsSubGuildMaster(charNo) == 1 || guild->IsGuildMaster(charNo) == 1)
        {
            if (m_pclApp->GetPowerManager()->IsPowerWarOn() == 0)
            {
                guild->SetPowerSide(0);
                guild->SetPowerSecedeTime((unsigned int)time(0));
                CServerInterface* gs = user->GetGameServer();
                guild->DBSavePowerSecedeTime(gs->GetGroupNo(),
                                             m_pclApp->Get_ServerHandler());
                guild->SendGuildInfoToMembers(false);
                user->SendToGameserver((char*)&reply, 0x17);
            }
            else
            {
                CMyFileLog log("OnPacketSecedePower", 0x12db);
                log("./log/Power",
                    "CPacketTranslater::OnPacketSecedePower : %d power war on(g:%d)", charNo,
                    guildKey);
                *(unsigned int*)((char*)&reply + 0xa) = 0x7f;
                user->SendToGameserver((char*)&reply, 0x17);
            }
        }
        else
        {
            CMyFileLog log("OnPacketSecedePower", 0x12d1);
            log("./log/Power",
                "CPacketTranslater::OnPacketSecedePower : %d is not guild master or sub master(g:%d)",
                charNo, guildKey);
            *(unsigned int*)((char*)&reply + 0xa) = 0x56;
            user->SendToGameserver((char*)&reply, 0x17);
        }
        return;
    }
    CMyFileLog log("OnPacketSecedePower", 0x12c8);
    log("./log/Power",
        "CPacketTranslater::OnPacketSecedePower : %d did not join power side(g:%d)", charNo,
        guildKey);
    *(unsigned int*)((char*)&reply + 0xa) = 0x82;
    user->SendToGameserver((char*)&reply, 0x17);
}

void CPacketTranslater::OnDBMWGuildJoin(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp");
    char* pb = (char*)pkt;
    CUser* joinUser = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0x12));
    if (joinUser == 0)
    {
        CMyFileLog log("OnDBMWGuildJoin", 0x9d8);
        log("./log/GuildModify", "CPacketTranslater::OnDBMWGuildJoin() 0 == pclJoinUser");
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xa));
    if (guild == 0)
    {
        CMyFileLog log("OnDBMWGuildJoin", 0x9dc);
        log("./log/GuildModify", "CPacketTranslater::OnDBMWGuildJoin() 0 == pclGuild");
    }
    if (*(int*)(pb + 0x16) == 0)
    {
        GuildJoin(guild, joinUser, *(unsigned int*)(pb + 0xe));
    }
    else
    {
        CUser* caller = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
        if (caller != 0)
        {
            Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
            *(unsigned int*)((char*)&callerPkt + 0xa) = *(unsigned int*)(pb + 0xe);
            *(unsigned int*)((char*)&callerPkt + 0xe) = caller->GetIdByChannel();
            *(unsigned int*)((char*)&callerPkt + 0x12) = *(unsigned int*)(pb + 0x16);
            caller->SendToGameserver((char*)&callerPkt, 0x34);
        }
        if (joinUser != 0)
        {
            Packet_Guild_Reply_Guild_Invite_To_Invited invitedPkt;
            *(unsigned int*)((char*)&invitedPkt + 0xa) = *(unsigned int*)(pb + 0x12);
            *(unsigned int*)((char*)&invitedPkt + 0xe) = joinUser->GetIdByChannel();
            *(unsigned int*)((char*)&invitedPkt + 0x12) = *(unsigned int*)(pb + 0x16);
            joinUser->SendToGameserver((char*)&invitedPkt, 0x16);
        }
    }
}

void CPacketTranslater::OnRequestGuildCreate(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnRequestGuildCreate", 0x10d8);
        log("./log/GuildModify", "CPacketTranslater::OnRequestGuildCreate : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnRequestGuildCreate", 0x10df);
        log("./log/GuildModify", "CPacketTranslater::OnRequestGuildCreate : 0 == pclUser");
        return;
    }
    Packet_Reply_Guild_Create reply;
    *(unsigned int*)((char*)&reply + 0xa) = charNo;
    *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
    if (user->GetGuildKey() != 0)
    {
        *(unsigned int*)((char*)&reply + 0x12) = 0x20;
        user->SendToGameserver((char*)&reply, 0x2d);
        return;
    }
    if (user->GetGameServer() == 0)
    {
        *(unsigned int*)((char*)&reply + 0x12) = 1;
        user->SendToGameserver((char*)&reply, 0x2d);
        return;
    }
    Packet_DBMW_Request_Guild_Create dbPkt;
    *(unsigned char*)((char*)&dbPkt + 0xa) = user->GetGameServer()->GetGroupNo();
    *(unsigned int*)((char*)&dbPkt + 0xb) = user->GetDBID();
    *(unsigned int*)((char*)&dbPkt + 0xf) = user->GetUniqCharNo();
    memcpy((char*)&dbPkt + 0x13, user->GetCharName(), 0x1d);
    *(unsigned char*)((char*)&dbPkt + 0x31) = user->GetJob();
    *(unsigned char*)((char*)&dbPkt + 0x32) = user->GetGrowthType();
    *(unsigned char*)((char*)&dbPkt + 0x33) = user->GetLevel();
    *(unsigned char*)((char*)&dbPkt + 0x34) = user->GetSex();
    memcpy((char*)&dbPkt + 0x35, user->GetSsn(), 2);
    memcpy((char*)&dbPkt + 0x38, pb + 0xe, 0x16);
    memcpy((char*)&dbPkt + 0x4f, pb + 0x25, 0xc);
    m_pclApp->Get_ServerHandler()->GetDBServer()->SendToServer((char*)&dbPkt, 0x5c);
}

void CPacketTranslater::OnChangeCharName(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnChangeCharName", 0x1544);
        log("./log/Except", "CPacketTranslater::OnChangeGuildName : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        CMyFileLog log("OnChangeCharName", 0x154c);
        log("./log/ServerUnify", "CPacketTranslater::OnChangeCharName : packet->m_uGuildKey");
        return;
    }
    Packet_UnChangable_GuildInfo_Save save;
    *(unsigned int*)((char*)&save + 0xa) = *(unsigned int*)(pb + 0x12);
    *(unsigned int*)((char*)&save + 0xe) = *(unsigned int*)(pb + 0xe);
    memcpy((char*)&save + 0x12, pb + 0x16, 0x1d);
    m_pclApp->Get_ServerHandler()->SendToDB(&save);
    STTodayGuildMember* today =
        m_pclApp->Get_GuildManager()->GetTodayMember(*(unsigned int*)(pb + 0x12));
    if (today != 0 && *(int*)today == *(int*)(pb + 0xe))
    {
        memset((char*)today + 4, 0, 0x1e);
        strncpy((char*)today + 4, pb + 0x16, 0x1d);
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xa));
    if (guild == 0)
    {
        CMyFileLog log("OnChangeCharName", 0x1563);
        log("./log/ServerUnify", "CPacketTranslater::OnChangeCharName : 0 == pclGuild");
        return;
    }
    if (guild->ChangeGuildMemberCharName(*(unsigned int*)(pb + 0xe), pb + 0x16) == 1)
    {
        CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
        if (user == 0)
        {
            CMyFileLog log("OnChangeCharName", 0x1572);
            log("./log/ServerUnify",
                "CPacketTranslater::OnChangeGuildName : 0 == pclRequestUser");
        }
        else
        {
            user->ChangeCharName(pb + 0x16);
        }
    }
    else
    {
        CMyFileLog log("OnChangeCharName", 0x156b);
        log("./log/ServerUnify",
            "CPacketTranslater::OnChangeGuildName : false == pclGuild->ChangeGuildMemberCharName()");
    }
}

void CPacketTranslater::OnRegisterToBlackList(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnRegisterToBlackList", 0xe8f);
        log("./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == m_pclApp");
        return;
    }
    Packet_DBMW_Register_To_BlackList dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = *(unsigned int*)(pb + 0xa);
    memcpy((char*)&dbPkt + 0xe, pb + 0xe, 0x1d);
    CUser* requester = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (requester == 0)
    {
        CMyFileLog log("OnRegisterToBlackList", 0xe9f);
        log("./log/BlackList", "CPacketTranslater::OnRegisterToBlackList : 0 == pclUser");
        return;
    }
    char* targetName = pb + 0xe;
    if (strcmp(requester->GetCharName(), targetName) != 0 && requester->GetBlackListSize() < 10)
    {
        CUser* target = m_pclApp->Get_UserManager()->FindUser_CharName(targetName);
        if (target != 0)
        {
            if (requester->RegisterToBlackList(target->GetUniqCharNo(), targetName) == 1)
            {
                target->GetUniqCharNo();
            }
        }
    }
}

void CPacketTranslater::OnDeleteToBlackList(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDeleteToBlackList", 0xeeb);
        log("./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == m_pclApp");
        return;
    }
    Packet_DMBW_Delete_To_BlackList dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = *(unsigned int*)(pb + 0xa);
    memcpy((char*)&dbPkt + 0xe, pb + 0xe, 0x1d);
    CUser* target = m_pclApp->Get_UserManager()->FindUser_CharName(pb + 0xe);
    if (target != 0)
    {
        CUser* requester = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
        if (requester == 0)
        {
            CMyFileLog log("OnDeleteToBlackList", 0xefc);
            log("./log/BlackList", "CPacketTranslater::OnDeleteToBlackList : 0 == pclUser");
        }
        else
        {
            if (requester->DeleteToBlackList(target->GetUniqCharNo()) == 1)
            {
                target->GetUniqCharNo();
            }
        }
    }
}

void CPacketTranslater::OnRequestBlackList(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnRequestBlackList", 0xf2f);
        log("./log/BlackList", "CPacketTranslater::OnRequestBlackList : 0 == m_pclApp");
        return;
    }
    Packet_Request_Result_BlackList reply;
    *(unsigned int*)((char*)&reply + 0xa) = *(unsigned int*)(pb + 0xe);
    CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnRequestBlackList", 0xf39);
        log("./log/BlackList", "CPacketTranslater::OnRequestBlackList : 0 == pclUser");
        return;
    }
    unsigned char count = 0;
    user->GetBlackList(count, (STBlackUserDBType*)((char*)&reply + 0xf));
    *(unsigned char*)((char*)&reply + 0xe) = count;
    user->SendToGameserver((char*)&reply, 0x19f);
}

void CPacketTranslater::OnDBMWResisterToBlackList(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBMWResisterToBlackList", 0xf5e);
        log("./log/BlackList",
            "CPacketTranslater::OnDBMWResisterToBlackList : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnDBMWResisterToBlackList", 0xf65);
        log("./log/BlackList",
            "CPacketTranslater::OnDBMWResisterToBlackList : 0 == pclUser");
        return;
    }
    Packet_Register_To_BlackList_RESULT reply;
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    memcpy((char*)&reply + 0xe, pb + 0xe, 0x1d);
    if (*(int*)(pb + 0x2c) == -1)
    {
        *(unsigned char*)((char*)&reply + 0x30) = 3;
        user->SendToGameserver((char*)&reply, 0x31);
        return;
    }
    if (user->IsBlackUser(*(unsigned int*)(pb + 0x2c)) == 0)
    {
        if (user->GetBlackListSize() < 10)
        {
            user->RegisterToBlackList(*(unsigned int*)(pb + 0x2c), pb + 0xe);
            *(unsigned char*)((char*)&reply + 0x30) = 1;
            *(unsigned int*)((char*)&reply + 0x2c) = *(unsigned int*)(pb + 0x2c);
            user->SendToGameserver((char*)&reply, 0x31);
        }
        else
        {
            *(unsigned char*)((char*)&reply + 0x30) = 4;
            user->SendToGameserver((char*)&reply, 0x31);
        }
    }
    else
    {
        *(unsigned char*)((char*)&reply + 0x30) = 2;
        user->SendToGameserver((char*)&reply, 0x31);
    }
}

void CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBMWDeleteToBlackList", 0xfa6);
        log("./log/BlackList",
            "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnDBMWDeleteToBlackList", 0xfad);
        log("./log/BlackList",
            "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser");
        return;
    }
    Packet_Delete_To_BlackList_Result reply;
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    memcpy((char*)&reply + 0xe, pb + 0xe, 0x1d);
    if (*(int*)(pb + 0x2c) == -1)
    {
        *(unsigned char*)((char*)&reply + 0x30) = 3;
        user->SendToGameserver((char*)&reply, 0x31);
        return;
    }
    if (user->DeleteToBlackList(*(unsigned int*)(pb + 0x2c)) != 1)
    {
        *(unsigned char*)((char*)&reply + 0x30) = 2;
        user->SendToGameserver((char*)&reply, 0x31);
    }
    *(unsigned char*)((char*)&reply + 0x30) = 1;
    *(unsigned int*)((char*)&reply + 0x2c) = *(unsigned int*)(pb + 0x2c);
    user->SendToGameserver((char*)&reply, 0x31);
}

void CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBMWResponseBlackListOnLogin", 0x1000);
        log("./log/BlackList",
            "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnDBMWResponseBlackListOnLogin", 0x1007);
        log("./log/BlackList",
            "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser");
        return;
    }
    int i = 0;
    while (*(int*)(pb + i * 0x28 + 0x32) != 0)
    {
        if (user->IsBlackUser(*(unsigned int*)(pb + i * 0x28 + 0xe)) != 1)
        {
            user->RegisterToBlackList(*(unsigned int*)(pb + i * 0x28 + 0xe),
                                      pb + i * 0x28 + 0x12,
                                      *(unsigned int*)(pb + i * 0x28 + 0x32));
        }
        i++;
    }
    user->SetBlackListDBFlag(4);
}

void CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBMWChangeUnconnectedGuildMemberGrade", 0x1036);
        log("./log/GuildModify",
            "CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBMWChangeUnconnectedGuildMemberGrade", 0x103c);
        log("./log/GuildModify",
            "CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",
            guildKey);
        return;
    }
    Packet_Monitor_Set_Sub_Guild_Master_Reply reply;
    int result = 0;
    if ((unsigned char)pb[0x30] == 0xff)
    {
        result = 2;
    }
    else if ((unsigned char)pb[0x30] == 0xfe)
    {
        result = 0x66;
    }
    else if ((unsigned char)pb[0x31] == 1)
    {
        result = 0x58;
    }
    else if ((unsigned char)pb[0x30] == (unsigned char)pb[0x31])
    {
        result = 0x65;
    }
    else
    {
        if ((unsigned char)pb[0x30] == 2)
        {
            if (guild->GetCurSubGuildMasterCnt() < 5)
            {
                guild->SetSubGuildMaster(*(unsigned int*)(pb + 0x32), true);
                guild->SendGuildInfoToMembers(false);
            }
            else
            {
                CMyFileLog log("OnDBMWChangeUnconnectedGuildMemberGrade", 0x105b);
                log("./log/GuildModify", "CRITICAL ERR sub guild master cnt over(%d)",
                    (unsigned int)guild->GetCurSubGuildMasterCnt() & 0xff);
                result = 0x59;
            }
        }
        else if ((unsigned char)pb[0x31] == 2)
        {
            guild->SetSubGuildMaster(*(unsigned int*)(pb + 0x32), false);
            guild->SendGuildInfoToMembers(false);
        }
        if (result == 0)
        {
            guild->ChangeUnconnectedGuildMemberGrade(*(unsigned int*)(pb + 0x32),
                                                     (unsigned char)pb[0x30]);
        }
    }
    {
        CMyFileLog log("OnDBMWChangeUnconnectedGuildMemberGrade", 0x1073);
        log("./log/GuildModify",
            "Change Guild(%d) Grade(%d) Prev Grade(%d) result(%d) unconnected charNo(%d) RequestNo(%d)",
            guildKey, (unsigned int)(unsigned char)pb[0x30],
            (unsigned int)(unsigned char)pb[0x31], result, *(unsigned int*)(pb + 0x32),
            *(unsigned int*)(pb + 0xe));
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user != 0)
    {
        *(unsigned int*)((char*)&reply + 0xa) = result;
        *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
        *(unsigned int*)((char*)&reply + 0x12) = user->GetUniqCharNo();
        *(unsigned char*)((char*)&reply + 0x16) = *(unsigned char*)(pb + 0x30);
        memcpy((char*)&reply + 0x17, pb + 0x12, 0x1d);
        user->SendToGameserver((char*)&reply, 0x3a);
    }
}

void CPacketTranslater::OnNoticeGuildCreate(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildCreate : 0 == m_pclApp");
    char* pb = (char*)pkt;
    CServerHandler* handler = m_pclApp->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() pclServerHandler == NULL\n");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user != 0)
    {
        unsigned int uniqCharNo = user->GetUniqCharNo();
        m_pclApp->Get_GuildManager()->CreateGuild(*(unsigned int*)(pb + 0xa), handler,
                                                  uniqCharNo);
        user->QueryGuildMember(handler);
        Packet_Monitor_Notice_Guild_Create_ToUser notice;
        memcpy((char*)&notice + 0xa, pb + 0xa, 0x1f);
        *(unsigned int*)((char*)&notice + 0x29) = user->GetIdByChannel();
        user->SendToGameserver((char*)&notice, 0x2d);
    }
}

void CPacketTranslater::OnCreateGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnCreateGuildAgit", 0x1608);
        log("./log/Except", "CPacketTranslater::OnCreateGuildAgit : 0 == m_pclApp");
        return;
    }
    else
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log("OnCreateGuildAgit", 0x1610);
            log("./log/GuildAgit", "CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild");
        }
        else if (guild->IsGuildMaster(*(unsigned int*)(pb + 0xe)) == 1)
        {
            if (guild->IsExistGuildAgit() == 0)
            {
                if (guild->GetGuildFund() < *(unsigned int*)(pb + 0x16))
                {
                    CMyFileLog log("OnCreateGuildAgit", 0x1623);
                    log("./log/GuildAgit",
                        "CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",
                        guildKey);
                }
                else
                {
                    guild->CreateGuildAgit(m_pclApp->Get_ServerHandler(), guildKey,
                                           *(unsigned int*)(pb + 0xe),
                                           *(unsigned int*)(pb + 0x12),
                                           *(unsigned int*)(pb + 0x16));
                }
            }
            else
            {
                CMyFileLog log("OnCreateGuildAgit", 0x161c);
                log("./log/GuildAgit",
                    "CPacketTranslater::OnCreateGuildAgit : %d guild already have guild agit",
                    guildKey);
            }
        }
        else
        {
            CMyFileLog log("OnCreateGuildAgit", 0x1616);
            log("./log/GuildAgit",
                "CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",
                *(unsigned int*)(pb + 0xe), guildKey);
        }
    }
}

void CPacketTranslater::OnDeleteGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDeleteGuildAgit", 0x1647);
        log("./log/Except", "CPacketTranslater::OnDeleteGuildAgit : 0 == m_pclApp");
        return;
    }
    else
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log("OnDeleteGuildAgit", 0x164f);
            log("./log/GuildAgit", "CPacketTranslater::OnDeleteGuildAgit : 0 == pclGuild");
        }
        else if (guild->IsGuildMaster(*(unsigned int*)(pb + 0xe)) == 1)
        {
            if (guild->IsExistGuildAgit() == 1)
            {
                if (guild->GetGuildCargo()->IsEmpty() == 1)
                {
                    guild->DeleteGuildAgit(m_pclApp->Get_ServerHandler(), guildKey,
                                           *(unsigned int*)(pb + 0xe));
                }
                else
                {
                    CMyFileLog log("OnDeleteGuildAgit", 0x1663);
                    log("./log/GuildAgit",
                        "CPacketTranslater::OnDeleteGuildAgit : %d guild cargo is not empty",
                        guildKey);
                    CUser* user =
                        m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
                    if (user == 0)
                    {
                        CMyFileLog log("OnDeleteGuildAgit", 0x166b);
                        log("./log/GuildCargo",
                            "CPacketTranslater::OnDeleteGuildAgit : 0 == pclUser(%d)",
                            *(unsigned int*)(pb + 0xe));
                    }
                    else
                    {
                        Packet_Channel_Delete_Guild_Agit reply;
                        *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
                        *(unsigned int*)((char*)&reply + 0xe) = user->GetUniqCharNo();
                        *(unsigned int*)((char*)&reply + 0x12) = user->GetUniqCharNo();
                        *(unsigned char*)((char*)&reply + 0x16) = 0xd4;
                        user->SendToGameserver((char*)&reply, 0x17);
                    }
                }
            }
            else
            {
                CMyFileLog log("OnDeleteGuildAgit", 0x165b);
                log("./log/GuildAgit",
                    "CPacketTranslater::OnDeleteGuildAgit : %d guild do not have guild agit",
                    guildKey);
            }
        }
        else
        {
            CMyFileLog log("OnDeleteGuildAgit", 0x1655);
            log("./log/GuildAgit",
                "CPacketTranslater::OnDeleteGuildAgit : %d is not guild master(g:%d)",
                *(unsigned int*)(pb + 0xe), guildKey);
        }
    }
}

void CPacketTranslater::OnUpgradeGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnUpgradeGuildAgit", 0x1767);
        log("./log/Except", "CPacketTranslater::OnUpgradeGuildAgit : 0 == m_pclApp");
        return;
    }
    else
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log("OnUpgradeGuildAgit", 6000);
            log("./log/GuildAgit", "CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild");
        }
        else if (guild->IsGuildMaster(*(unsigned int*)(pb + 0xe)) == 1)
        {
            if (guild->IsExistGuildAgit() == 1)
            {
                if (guild->GetGuildFund() < *(unsigned int*)(pb + 0x16))
                {
                    CMyFileLog log("OnUpgradeGuildAgit", 0x1783);
                    log("./log/GuildAgit",
                        "CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",
                        guildKey);
                }
                else
                {
                    guild->UpgradeGuildAgit(m_pclApp->Get_ServerHandler(), guildKey,
                                            *(unsigned int*)(pb + 0xe),
                                            *(unsigned int*)(pb + 0x12),
                                            *(unsigned int*)(pb + 0x16));
                }
            }
            else
            {
                CMyFileLog log("OnUpgradeGuildAgit", 0x177c);
                log("./log/GuildAgit",
                    "CPacketTranslater::OnDeleteGuildAgit : %d guild already have guild agit",
                    guildKey);
            }
        }
        else
        {
            CMyFileLog log("OnUpgradeGuildAgit", 0x1776);
            log("./log/GuildAgit",
                "CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",
                *(unsigned int*)(pb + 0xe), guildKey);
        }
    }
}

void CPacketTranslater::OnDBCreateGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBCreateGuildAgit", 0x1696);
        log("./log/Except", "CPacketTranslater::OnDBCreateGuildAgit : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log("OnDBCreateGuildAgit", 0x16a9);
            log("./log/GuildAgit", "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
        }
        else
        {
            guild->SetGuildAgitFlag(true);
            guild->GetGuildCargo()->SetGuildInfo(guild->GetGuildKey());
            STGuildCargoDBInfo cargoInfo;
            memset(&cargoInfo, 0, 0x18dc);
            *(unsigned int*)((char*)&cargoInfo + 0x18d8) = 8;
            guild->GetGuildCargo()->SetGuildCargoDBInfo(cargoInfo);
            guild->NotifyCreateGuildAgitToGuildMember(*(unsigned int*)(pb + 0xe));
            guild->SendGuildAgitInfoToMembers();
            guild->SendGuildInfoToMembers(false);
        }
        return;
    }
    CMyFileLog log("OnDBCreateGuildAgit", 0x16a0);
    log("./log/GuildAgit",
        "CPacketTranslater::OnDBCreateGuildAgit / Failure! Create Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
        *(unsigned int*)(pb + 0xa), *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0x12));
}

void CPacketTranslater::OnDBDeleteGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBDeleteGuildAgit", 0x16dd);
        log("./log/Except", "CPacketTranslater::OnDBDeleteGuildAgit : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log("OnDBDeleteGuildAgit", 0x16ef);
            log("./log/GuildAgit", "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
        }
        else
        {
            guild->SetGuildAgitFlag(false);
            guild->NotifyDeleteGuildAgitToGuildMember(*(unsigned int*)(pb + 0xe));
            guild->SendGuildInfoToMembers(false);
        }
        return;
    }
    CMyFileLog log("OnDBDeleteGuildAgit", 0x16e6);
    log("./log/GuildAgit",
        "CPacketTranslater::OnDBDeleteGuildAgit / Failure! Delete Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
        *(unsigned int*)(pb + 0xa), *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0x12));
}

void CPacketTranslater::OnDBLoadGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBLoadGuildAgit", 0x173a);
        log("./log/Except", "CPacketTranslater::OnDBLoadGuildAgit : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        CMyFileLog log("OnDBLoadGuildAgit", 0x1743);
        log("./log/GuildAgit", "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
    }
    else
    {
        guild->SetGuildAgitInfo(*(STGuildAgitDBInfo*)(pb + 0xe));
        guild->SendGuildAgitInfoToMembers();
    }
}

void CPacketTranslater::OnDBUpgradeGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBUpgradeGuildAgit", 0x17a8);
        log("./log/Except", "CPacketTranslater::OnDBUpgradeGuildAgit : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            CMyFileLog log("OnDBUpgradeGuildAgit", 0x17b9);
            log("./log/GuildAgit",
                "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
        }
        else
        {
            guild->SetGuildAgitLevelUp();
            guild->SendGuildAgitInfoToMembers();
        }
        return;
    }
    CMyFileLog log("OnDBUpgradeGuildAgit", 0x17b2);
    log("./log/GuildAgit",
        "CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
        *(unsigned int*)(pb + 0xa), *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0x12));
}

void CPacketTranslater::OnGuildCargo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargo", 0x188c);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargo : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargo", 0x1896);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargo : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargo", 0x189e);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargo : 0 == pclGuild");
        return;
    }
    Packet_Guild_Cargo_Response reply;
    *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
    *(unsigned int*)((char*)&reply + 0xe) = guildKey;
    CGuildCargo* cargo = guild->GetGuildCargo();
    if (cargo->IsLoadComplete() == 1)
    {
        unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
        if (grade == 3 || grade == 1 || grade == 2)
        {
            if (m_pclApp->Get_GuildManager()->IsCargoLock() == 0)
            {
                *(unsigned char*)((char*)&reply + 0x18ee) = 0xc1;
                memcpy((char*)&reply + 0x12, cargo->GetGuildCargoDBInfo(), 0x18dc);
            }
            else
            {
                *(unsigned char*)((char*)&reply + 0x18ee) = 0xcc;
                CMyFileLog log("OnGuildCargo", 0x18c2);
                log("./log/GuildCargo", "CPacketTranslater::OnGuildCargo GUILD CARGO LOCKED!");
            }
            user->SendTcpGameserver(&reply);
        }
        else
        {
            CMyFileLog log("OnGuildCargo", 0x18b7);
            log("./log/GuildCargo",
                "CPacketTranslater::OnGuildCargo : Access Deny(%d,%d,%d)", charNo, guildKey,
                (unsigned int)grade);
            *(unsigned char*)((char*)&reply + 0x18ee) = 0x24;
            user->SendTcpGameserver(&reply);
        }
    }
    else
    {
        CMyFileLog log("OnGuildCargo", 0x18aa);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargo : Guild(%d,%d) Not Loaded",
            charNo, guildKey);
        *(unsigned char*)((char*)&reply + 0x18ee) = 0xc3;
        user->SendTcpGameserver(&reply);
    }
}

void CPacketTranslater::OnGuildCargoHistory(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildCargoHistory", 0x18ec);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoHistory : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnGuildCargoHistory", 0x18f6);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoHistory : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildCargoHistory", 0x18fe);
        log("./log/GuildCargo", "CPacketTranslater::OnGuildCargoHistory : 0 == pclGuild");
        return;
    }
    if (m_pclApp->Get_GuildManager()->IsCargoLock() == 0)
    {
        unsigned char grade = *(unsigned char*)((char*)user->GetGuildMemDBInfo() + 0x15);
        if (grade == 3 || grade == 1 || grade == 2)
        {
            Packet_Guild_Cargo_History_Response reply;
            *(unsigned int*)((char*)&reply + 0xa) = user->GetIdByChannel();
            *(unsigned int*)((char*)&reply + 0xe) = guildKey;
            guild->GetGuildCargo()->GetHistory((STGuildCargoLog*)((char*)&reply + 0x12));
            user->SendTcpGameserver(&reply);
        }
        else
        {
            CMyFileLog log("OnGuildCargoHistory", 0x1910);
            log("./log/GuildCargo",
                "CPacketTranslater::OnGuildCargoHistory : Access Deny(%d,%d,%d)", charNo,
                guildKey, (unsigned int)grade);
        }
    }
    else
    {
        CMyFileLog log("OnGuildCargoHistory", 0x1906);
        log("./log/GuildCargo",
            "CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)", charNo,
            guildKey);
    }
}

void CPacketTranslater::OnCharacterDelete(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCharacterDelete : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnCharacterDelete", 0x7bb);
        log("./log/GuildModify",
            "CPacketTranslater::OnCharacterDelete : 0 == pclGuild, Char Key = %d (Maybe Requester was logout)",
            *(unsigned int*)(pb + 0xe));
    }
    else
    {
        ST_Notice_Guild_Secede notice;
        *(unsigned int*)((char*)&notice + 0) = *(unsigned int*)(pb + 0x12);
        *(unsigned int*)((char*)&notice + 8) = *(unsigned int*)(pb + 0xe);
        *(unsigned short*)((char*)&notice + 0xc) = 1;
        memcpy((char*)&notice + 0xe, guild->GetGuildName(), 0x16);
        m_pclApp->Get_GuildManager()->GuildSecede(*(unsigned int*)(pb + 0x12), notice);
        guild->SendGuildInfoToMembers(false);
        m_pclApp->Get_UserManager()->DeleteBlackUserOnCharacDelete(*(unsigned int*)(pb + 0xe));
    }
}

void CPacketTranslater::OnAddGuildFund(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnAddGuildFund", 0x1f03);
        log("./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnAddGuildFund", 0x1f09);
        log("./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pUser");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild == 0)
    {
        CMyFileLog log("OnAddGuildFund", 0x1f0f);
        log("./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pGuild");
        return;
    }
    if ((unsigned char)pb[10] == 1)
    {
        int result = guild->IsAddableGuildFund(*(unsigned int*)(pb + 0xb)) ? 1 : 0;
        if (result == 0)
        {
            guild->AddGuildFund(*(unsigned int*)(pb + 0xb));
            guild->GetGuildBoard()->sendMessageToDBMW_GuildFund(m_pclApp->Get_ServerHandler(),
                                                                *(int*)(pb + 0xb), user);
        }
        Packet_Add_Guild_Fund_Result reply;
        *(unsigned char*)((char*)&reply + 0xa) = (unsigned char)result;
        *(unsigned int*)((char*)&reply + 0xb) = *(unsigned int*)(pb + 0xf);
        *(unsigned int*)((char*)&reply + 0xf) = user->GetIdByChannel();
        user->SendToGameserver((char*)&reply, 0x17);
        guild->SendGuildInfoToManagers();
    }
    else if ((unsigned char)pb[10] == 2)
    {
        *(unsigned int*)((char*)guild->GetGuildDBInfo() + 0xa0) = *(unsigned int*)(pb + 0xb);
        guild->SendGuildInfoToMemberOnly(user);
    }
    else
    {
        guild->AddGuildFund(*(unsigned int*)(pb + 0xb));
    }
}

void CPacketTranslater::OnGuildRequestGuildBoardOpen(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardOpen", 0x1c4a);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xf));
    if (user == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardOpen", 0x1c54);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xb);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardOpen", 0x1c5b);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardOpen : 0 == pclGuild");
        return;
    }
    CGuildBoard* board = guild->GetGuildBoard();
    bool sendNow = false;
    if (board->isWebGuildBoardAction() == 0 && (unsigned char)pb[10] == 0)
    {
        if (board->getGuildBoardDBLoadState() == 0)
        {
            sendNow = true;
        }
    }
    else
    {
        sendNow = true;
    }
    if (!sendNow)
    {
        board->sendGuildBoardData(*(unsigned int*)(pb + 0xb), *(unsigned int*)(pb + 0xf),
                                  0x232a, user);
        return;
    }
    if (board->getGuildBoardDBLoadState() == 0)
    {
        Packet_DB_Load_Request_Guild_Board_Open dbPkt;
        *(unsigned int*)((char*)&dbPkt + 0xa) = *(unsigned int*)(pb + 0xb);
        *(unsigned int*)((char*)&dbPkt + 0xe) = *(unsigned int*)(pb + 0xf);
        m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
        board->setGuildBoardDBLoadState((ENUM_DB_LOAD_STATE)1);
        return;
    }
    board->setWebGuildBoardAction(false);
    bool needDB = false;
    if (board->getGuildBoardDBLoadState() == 2 && board->isGuildBoardDBAccess() != 0)
    {
        needDB = true;
    }
    if (needDB)
    {
        Packet_DB_Load_Request_Guild_Board_Open dbPkt;
        *(unsigned int*)((char*)&dbPkt + 0xa) = *(unsigned int*)(pb + 0xb);
        *(unsigned int*)((char*)&dbPkt + 0xe) = *(unsigned int*)(pb + 0xf);
        m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
        board->setGuildBoardDBLoadState((ENUM_DB_LOAD_STATE)1);
    }
    else
    {
        board->sendGuildBoardData(*(unsigned int*)(pb + 0xb), *(unsigned int*)(pb + 0xf),
                                  0x232a, user);
    }
}

void CPacketTranslater::OnDBLoadReplyGuildBoardOpen(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardOpen", 0x1c9d);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0x11);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardOpen", 0x1ca7);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xd);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardOpen", 0x1cae);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclGuild");
        return;
    }
    CGuildBoard* board = guild->GetGuildBoard();
    board->setGuildBoardData(guildKey, charNo, guild, (int)(char)pb[0x15],
                             (STGuildBoardDBInfo*)(pb + 0x16));
    if (pb[0xc] != 0)
    {
        board->sendGuildBoardData(guildKey, charNo, 0x232a, user);
        board->setGuildBoardDBLoadState((ENUM_DB_LOAD_STATE)2);
        board->setGuildBoardDBAccess();
    }
}

void CPacketTranslater::OnGuildRequestGuildBoardWrite(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardWrite", 0x1cd3);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardWrite", 0x1cdd);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclUser");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardWrite", 0x1ce4);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclGuild");
        return;
    }
    Packet_DB_Load_Request_Guild_Board_Write dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xb) = *(unsigned int*)(pb + 0xa);
    *(unsigned int*)((char*)&dbPkt + 0xf) = *(unsigned int*)(pb + 0xe);
    *(unsigned int*)((char*)&dbPkt + 0x13) = *(unsigned int*)(pb + 0x12);
    memcpy((char*)&dbPkt + 0x17, pb + 0x18, 0x78);
    *(unsigned char*)((char*)&dbPkt + 0x9b) = *(unsigned char*)(pb + 0x16);
    *(unsigned char*)((char*)&dbPkt + 0x9c) = *(unsigned char*)(pb + 0x17);
    memcpy((char*)&dbPkt + 0x9e, user->GetCharName(), 0x1e);
    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
}

void CPacketTranslater::OnDBLoadReplyGuildBoardWrite(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardWrite", 0x1d0c);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0x10);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardWrite", 0x1d16);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xc);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardWrite", 0x1d1d);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclGuild");
        return;
    }
    if (*(short*)(pb + 0xa) == 0)
    {
        CGuildBoard* board = guild->GetGuildBoard();
        board->setGuildBoardData(guildKey, charNo, guild, 1,
                                 (STGuildBoardDBInfo*)(pb + 0x14));
        if (*(int*)(pb + 0x94) != 0)
        {
            board->sendGuildBoardData(guildKey, charNo, 0x232e, user);
        }
    }
    else
    {
        Packet_Guild_Reply_Guild_Board reply;
        *(unsigned short*)((char*)&reply + 0xa) = *(unsigned short*)(pb + 0xa);
        *(unsigned short*)((char*)&reply + 0xc) = 0x232e;
        *(unsigned int*)((char*)&reply + 0xf) = user->GetIdByChannel();
        *(unsigned int*)((char*)&reply + 0x13) = user->GetUniqCharNo();
        user->SendTcpGameserver(&reply);
        CMyFileLog log("OnDBLoadReplyGuildBoardWrite", 0x1d37);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : Write Fail!!");
    }
}

void CPacketTranslater::OnGuildRequestGuildBoardDelete(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardDelete", 0x1d52);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardDelete", 0x1d5c);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclUser");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild == 0)
    {
        CMyFileLog log("OnGuildRequestGuildBoardDelete", 0x1d63);
        log("./log/GuildBoard",
            "CPacketTranslater::OnGuildRequestGuildBoardDelete : 0 == pclGuild");
        return;
    }
    Packet_DB_Load_Request_Guild_Board_Delete dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xb) = *(unsigned int*)(pb + 0xa);
    *(unsigned int*)((char*)&dbPkt + 0xf) = *(unsigned int*)(pb + 0xe);
    *(unsigned int*)((char*)&dbPkt + 0x13) = *(unsigned int*)(pb + 0x12);
    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
}

void CPacketTranslater::OnDBLoadReplyGuildBoardDelete(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardDelete", 0x1d7c);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0x10);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardDelete", 0x1d86);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xc);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardDelete", 0x1d8d);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclGuild");
        return;
    }
    if (*(short*)(pb + 0xa) == 0)
    {
        guild->GetGuildBoard()->deleteGuildBoardData(*(unsigned int*)(pb + 0x14), guildKey,
                                                     charNo);
    }
    else
    {
        CMyFileLog log("OnDBLoadReplyGuildBoardDelete", 0x1d9e);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : Delete Fail!!");
    }
    Packet_Guild_Reply_Guild_Board_Delete reply;
    *(unsigned short*)((char*)&reply + 0xa) = *(unsigned short*)(pb + 0xa);
    *(unsigned int*)((char*)&reply + 0xc) = user->GetIdByChannel();
    *(unsigned int*)((char*)&reply + 0x10) = user->GetUniqCharNo();
    user->SendTcpGameserver(&reply);
}

void CPacketTranslater::OnWebGuildBoardWrite(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    unsigned int no = *(unsigned int*)(pb + 0x12);
    {
        CMyFileLog log("OnWebGuildBoardWrite", 0x1dbe);
        log("./log/GuildBoard",
            "CPacketTranslater::OnWebGuildBoardWrite Receive Data: GuildKey : %u, CharacID : %u, NO : %u",
            guildKey, charNo, no);
    }
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnWebGuildBoardWrite", 0x1dc2);
        log("./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnWebGuildBoardWrite", 0x1dc9);
        log("./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardWrite : 0 == pclGuild");
        return;
    }
    Packet_DB_Load_Request_Web_Guild_Board_Write dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = guildKey;
    *(unsigned int*)((char*)&dbPkt + 0xe) = charNo;
    *(unsigned int*)((char*)&dbPkt + 0x12) = no;
    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
}

void CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnDBLoadReplyWebGuildBoardWrite", 0x1ded);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xc);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnDBLoadReplyWebGuildBoardWrite", 0x1df4);
        log("./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyWebGuildBoardWrite : 0 == pclGuild");
        return;
    }
    if (*(short*)(pb + 0xa) == 0)
    {
        guild->GetGuildBoard()->setGuildBoardData(guildKey, *(unsigned int*)(pb + 0x10),
                                                  guild, 1,
                                                  (STGuildBoardDBInfo*)(pb + 0x14));
        guild->GetGuildBoard()->setWebGuildBoardAction(true);
    }
}

void CPacketTranslater::OnWebGuildBoardDelete(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    unsigned int no = *(unsigned int*)(pb + 0x12);
    {
        CMyFileLog log("OnWebGuildBoardDelete", 0x1e15);
        log("./log/GuildBoard",
            "CPacketTranslater::OnWebGuildBoardDelete Receive Data: GuildKey : %u, CharacID : %u, NO : %u",
            guildKey, charNo, no);
    }
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnWebGuildBoardDelete", 0x1e19);
        log("./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardDelete : 0 == m_pclApp");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnWebGuildBoardDelete", 0x1e20);
        log("./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardDelete : 0 == pclGuild");
        return;
    }
    guild->GetGuildBoard()->deleteGuildBoardData(no, guildKey, charNo);
    guild->GetGuildBoard()->setWebGuildBoardAction(true);
}

void CPacketTranslater::OnPowerWarProcessInfo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnPowerWarProcessInfo", 0x1717);
        log("./log/Except", "CPacketTranslater::OnPowerWarProcessInfo : 0 == m_pclApp");
        return;
    }
    m_pclApp->GetPowerManager()->SendPowerWarProcessInfo(*(unsigned int*)(pb + 0xa));
}

void CPacketTranslater::OnSetPowerWarCfg(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnSetPowerWarCfg", 0x1317);
        log("./log/Power", "CPacketTranslater::OnSetPowerWarCfg : 0 == m_pclApp");
        return;
    }
    CPowerManager* pm = m_pclApp->GetPowerManager();
    pm->SetPowerWarEndKillPoint(*(unsigned short*)(pb + 0xa));
    pm->SetPowerWarRewardInfo(*(int*)(pb + 0xc), *(int*)(pb + 0x10), *(int*)(pb + 0x14),
                              *(int*)(pb + 0x18));
    CMyFileLog log("OnSetPowerWarCfg", 0x1321);
    log("./log/Power",
        "CPacketTranslater::OnSetPowerWarCfg EndKillPoint:%d, BasicPowerWarPoint:%d, FirstGradeBonusPowerWarPoint:%d, BonusDecreasePoint:%d, RankingBonusGrade:%d",
        (unsigned int)*(unsigned short*)(pb + 0xa), *(int*)(pb + 0xc), *(int*)(pb + 0x10),
        *(int*)(pb + 0x14), *(int*)(pb + 0x18));
}

void CPacketTranslater::OnLoadFromDBOnGuildBooting(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnLoadFromDBOnGuildBooting", 0x1343);
        log("./log/Power",
            "CPacketTranslater::OnLoadFromDBOnGuildBooting : 0 == m_pclApp");
        return;
    }
    CPowerManager* pm = m_pclApp->GetPowerManager();
    pm->SetPowerInfo((char)pb[0x12], *(int*)(pb + 0xa), *(int*)(pb + 0xe));
    pm->SendPowerWarInfo();
}

void CPacketTranslater::OnGMPowerWarStart(PacketHeader* pkt)
{
    (void)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGMPowerWarStart", 0x13f9);
        log("./log/Power", "CPacketTranslater::OnGMPowerWarStart : 0 == m_pclApp");
        return;
    }
    CPowerManager* pm = m_pclApp->GetPowerManager();
    if (pm->IsPowerWarOn() == 0)
    {
        pm->StartPowerWarEvent();
        Packet_Monitor_Event_Start start;
        *(unsigned int*)((char*)&start + 0xa) = 0x1e;
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler == 0)
        {
            throw CDNFException(
                "CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n");
        }
        handler->SendAllTcpGameServer(&start);
    }
}

void CPacketTranslater::OnGMPowerWarEnd(PacketHeader* pkt)
{
    (void)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnGMPowerWarEnd", 0x1426);
        log("./log/Power", "CPacketTranslater::OnGMPowerWarEnd : 0 == m_pclApp");
        return;
    }
    CPowerManager* pm = m_pclApp->GetPowerManager();
    if (pm->IsPowerWarOn() == 1)
    {
        pm->SendPowerWarScore();
        pm->EndPowerWarEvent();
        Packet_Monitor_Event_End end;
        *(unsigned int*)((char*)&end + 0xa) = 0x1e;
        CServerHandler* handler = m_pclApp->Get_ServerHandler();
        if (handler == 0)
        {
            throw CDNFException(
                "CGuildManager::OnGMPowerWarStart() pclServerHandler == NULL\n");
        }
        handler->SendAllTcpGameServer(&end);
    }
}

void CPacketTranslater::OnInCreaseDecreasePowerWarPoint(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnInCreaseDecreasePowerWarPoint", 0x15d3);
        log("./log/Except",
            "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        CMyFileLog log("OnInCreaseDecreasePowerWarPoint", 0x15db);
        log("./log/Power",
            "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : 0 == pclGuild");
        return;
    }
    int point = *(int*)(pb + 0x12);
    if (point == 0)
    {
        CMyFileLog log("OnInCreaseDecreasePowerWarPoint", 0x15e2);
        log("./log/Power",
            "CPacketTranslater::OnInCreaseDecreasePowerWarPoint : Invalid Power War Point Reached(characNo:%d, PowerWarPoint:%d)",
            *(unsigned int*)(pb + 0xe), point);
        return;
    }
    if (point < 1)
    {
        unsigned int neg = ((unsigned int)point >> 0x1f);
        guild->SubPowerWarPoint(((unsigned int)point ^ neg) - neg);
    }
    else
    {
        guild->AddPowerWarPoint((unsigned int)point);
    }
    guild->SendGuildInfoToMembers(false);
}

void CPacketTranslater::OnPowerWarStartInfo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnPowerWarStartInfo", 0x118a);
        log("./log/Power", "CPacketTranslater::OnPowerWarStartInfo : 0 == m_pclApp");
        return;
    }
    CPowerManager* pm = m_pclApp->GetPowerManager();
    if (pm->IsPowerWarOn() != 0)
    {
        Packet_Monitor_Event_Start start;
        *(unsigned int*)((char*)&start + 0xa) = 0x1e;
        m_pclApp->Get_ServerHandler()->SendToGameServer((unsigned char)*(unsigned int*)(pb + 0xa),
                                                        &start);
    }
    const char* state = pm->IsPowerWarOn() == 0 ? "END!" : "START!";
    CMyFileLog log("OnPowerWarStartInfo", 0x119a);
    log("./log/Power", "OnPowerWarStartInfo(%d) - power war %s ", *(unsigned int*)(pb + 0xa),
        state);
}

void CPacketTranslater::OnChangeGuildNameFromWeb(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnChangeGuildNameFromWeb", 0x159d);
        log("./log/Except",
            "CPacketTranslater::OnChangeGuildNameFromWeb : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guildKey == 0 || guild == 0)
    {
        CMyFileLog log("OnChangeGuildNameFromWeb", 0x15a5);
        log("./log/GuildModify",
            "CPacketTranslater::OnChangeGuildNameFromWeb : 0 == pclGuild");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    if (guild->IsSubGuildMaster(charNo) == 1 || guild->IsGuildMaster(charNo) == 1)
    {
        guild->ChangeGuildName(pb + 0x12, 0);
        guild->SendGuildInfoToMembers(false);
    }
    else
    {
        CMyFileLog log("OnChangeGuildNameFromWeb", 0x15ab);
        log("./log/GuildModify",
            "CPacketTranslater::OnChangeGuildNameFromWeb : %d is not guild master or sub master(g:%d)",
            charNo, guildKey);
    }
}

void CPacketTranslater::OnNotifyNewGroupMail(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    CUser* user = 0;
    Packet_Monitor_Notify_New_Mail mail;
    for (int i = 0; i < *(int*)(pb + 0xa); i++)
    {
        user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + i * 4 + 0xe));
        if (user != 0)
        {
            *(unsigned int*)((char*)&mail + 0xa) = *(unsigned int*)(pb + i * 4 + 0xe);
            *(unsigned int*)((char*)&mail + 0xe) = user->GetIdByChannel();
            user->SendToGameserver((char*)&mail, 0x12);
        }
    }
}

void CPacketTranslater::OnGuildExpLimit(PacketHeader* pkt)
{
    (void)pkt;
}

void CPacketTranslater::OnWriteGuildMemberMemo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnWriteGuildMemberMemo", 0x17eb);
        log("./log/GuildMember",
            "CPacketTranslater::OnWriteGuildMemberMemo : 0 == m_pclApp");
        return;
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
    if (user == 0)
    {
        CMyFileLog log("OnWriteGuildMemberMemo", 0x17f5);
        log("./log/GuildMember", "CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xe);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnWriteGuildMemberMemo", 0x17fc);
        log("./log/GuildMember", "CPacketTranslater::OnWriteGuildMemberMemo : 0 == pclGuild");
        return;
    }
    Packet_DB_Write_Guild_Member_Memo dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = *(unsigned int*)(pb + 0xa);
    *(unsigned int*)((char*)&dbPkt + 0xe) = guildKey;
    size_t len = strlen(pb + 0x12);
    memcpy((char*)&dbPkt + 0x12, pb + 0x12, len < 0x15 ? len : 0x14);
    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
    guild->WriteGuildMemberMemo(user, pb + 0x12);
    guild->NotifyMemoToGuildMember(user, pb + 0x12);
}

void CPacketTranslater::OnLoadGuildCargo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnLoadGuildCargo", 0x1831);
        log("./log/GuildCargo", "CPacketTranslater::OnLoadGuildCargo : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnLoadGuildCargo", 0x1838);
        log("./log/GuildCargo", "CPacketTranslater::OnLoadGuildCargo : 0 == pclGuild");
        return;
    }
    guild->GetGuildCargo()->SetGuildCargoDBInfo(*(STGuildCargoDBInfo*)(pb + 0xe));
}

void CPacketTranslater::OnLoadGuildCargoHistory(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnLoadGuildCargoHistory", 0x1861);
        log("./log/GuildCargo",
            "CPacketTranslater::OnLoadGuildCargoHistory : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        CMyFileLog log("OnLoadGuildCargoHistory", 0x1868);
        log("./log/GuildCargo",
            "CPacketTranslater::OnLoadGuildCargoHistory : 0 == pclGuild");
        return;
    }
    guild->GetGuildCargo()->SetGuildCargoHistory(*(unsigned int*)(pb + 0xe),
                                                 (STGuildCargoLog*)(pb + 0x12));
}

void CPacketTranslater::OnNotifyMessageToGuild(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        CMyFileLog log("OnNotifyMessageToGuild", 0x109d);
        log("./log/Except", "CPacketTranslater::OnNotifyMessageToGuild : 0 == m_pclApp");
        return;
    }
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xa));
    if (guild != 0)
    {
        if ((unsigned char)pb[0xe] != 1)
        {
            if ((unsigned char)pb[0xe] != 2)
            {
                return;
            }
            Packet_Web_Notify_Message_To_Guild notify;
            memcpy(&notify, pb, 0x74);
            *(unsigned char*)((char*)&notify + 0xa) = m_pclApp->Get_ServerGroup();
            m_pclApp->Get_ServerHandler()->SendToDB(&notify);
        }
        guild->SetGuildMessage(pb + 0xf);
        guild->NotifyMessageToGuildMember();
    }
}

void CPacketTranslater::OnEventStart(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnEventStart : 0 == m_pclApp");
    char* pb = (char*)pkt;
    CMyFileLog log("OnEventStart", 0xe4c);
    log("./log/Web",
        "CPacketTranslater::OnEventStart() eventCode(%d), eventParam1(%d), eventParam2(%d)\n",
        *(unsigned int*)(pb + 0xa), (unsigned int)*(unsigned short*)(pb + 0xe),
        (unsigned int)*(unsigned short*)(pb + 0x10));
    m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(pkt);
}

void CPacketTranslater::OnLoadGuildWarEnterableGuilds(PacketHeader* pkt)
{
    (void)pkt;
}

void CPacketTranslater::OnNoticeGuildMailArrive(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildMailArrive : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    for (int i = 0; i < (int)(unsigned int)(unsigned char)pb[10]; i++)
    {
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guild != 0)
        {
            guild->SendToGuildForMail();
        }
    }
}

void CPacketTranslater::OnNoticeGuildWarStart(PacketHeader* pkt)
{
    (void)pkt;
}

void CPacketTranslater::OnNoticeGuildWarPointChange(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeGuildWarStart : 0 == m_pclApp");
    }
    CGuildWar* war = m_pclApp->Get_GuildManager()->GetGuildWar();
    if (war->IsGuildWarEventOn() == 1)
    {
        char* pb = (char*)pkt;
        if (war->IsGuildWarEnterableGuild(*(unsigned int*)(pb + 0xa)) == 1)
        {
            war->AddGuildWarPoint(*(unsigned int*)(pb + 0xa), (int)(char)pb[0xe]);
        }
    }
}

void CPacketTranslater::OnRequestGuildWarInfo(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnRequestGuildWarInfo : 0 == m_pclApp");
    CGuildWar* war = m_pclApp->Get_GuildManager()->GetGuildWar();
    char* pb = (char*)pkt;
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user == 0)
    {
        CMyFileLog log("OnRequestGuildWarInfo", 0x78d);
        log("./log/Except",
            "[USER] CPacketTranslater::OnRequestGuildWarInfo : pclUser == 0!\tchar id(%d)",
            *(unsigned int*)(pb + 0xe));
    }
    else
    {
        war->GetGuildWarInfo((ST_Guild_War_Rank_Info*)(pb + 0x12));
        user->SendToGameserver((char*)pb, 0x15c);
    }
}

void CPacketTranslater::OnUpdateChangableCharInfo(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnUpdateChangableCharInfo : 0 == m_pclApp");
    char* pb = (char*)pkt;
    CUser* user = m_pclApp->Get_UserManager()->FindUser(*(unsigned int*)(pb + 0xa));
    if (user != 0)
    {
        user->SetUserChangableInfo(*(short*)(pb + 0xf), (char)pb[0x11]);
    }
}

void CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader* pkt)
{
    (void)pkt;
    THROW_IF_NO_APP("CPacketTranslater::OnMonitorManagerConnectOK : 0 == m_pclApp");
    m_pclApp->Get_ServerHandler()->SetManagerConnectFlag(true);
    CMyFileLog log("OnMonitorManagerConnectOK", 0xe2d);
    log("./log/Manager", "Manager Server Connect Success");
    puts("** Manager Server Connect Success **");
}

void CPacketTranslater::OnNoticeGuildChatMsgHyperLink(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildChatMsgHyperLink : 0 == m_pclApp");
    char* pb = (char*)pkt;
    if (*(int*)(pb + 0xe) != 0 && *(int*)(pb + 0xa) != 0 && (unsigned char)pb[0x14b] != 0)
    {
        CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
        if (user != 0)
        {
            CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
            if (guild != 0)
            {
                const char* name = user->GetCharName();
                guild->NoticeChatMsgToGuildMembersHyperLink(
                    *(unsigned int*)(pb + 0xa), pb + 0x14c, (unsigned char)pb[0x14b],
                    (unsigned char)pb[0x12], (hyperlink_item_info*)(pb + 0x13), name);
            }
        }
    }
    else
    {
        throw CDNFException(
            "CPacketTranslater::OnNoticeGuildChatMsgHyperLink : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
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
