#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
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

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

int getErrno();

CApplication* CPacketTranslater::m_pclApp;

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
