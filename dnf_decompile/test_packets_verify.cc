#include "Packet_P2P_Statistics.h"
#include "Packet_Monitor_UDP_Logout.h"
#include "Packet_Monitor_Call_Guild_Level_Up.h"
#include "Packet_Monitor_UDP_Reply_UserInfo.h"
#include "Packet_Monitor_Charac_Delete.h"
#include "Packet_Monitor_Other_Channel_Chat_ToUser.h"

int main()
{
    Packet_P2P_Statistics p2p;
    p2p.m_p2pUser = 1;
    p2p.m_relayUser = 2;
    p2p.m_serverGroup = 3;
    p2p.m_p2pMinPing = 4;
    p2p.m_p2pMaxPing = 5;
    p2p.m_p2pAvgPing = 6;
    p2p.m_p2pOverPing100 = 7;
    p2p.m_p2pOverPing200 = 8;
    p2p.m_p2pOverPing300 = 9;
    p2p.m_p2pOverPing400 = 10;
    p2p.m_relayMinPing = 11;
    p2p.m_relayMaxPing = 12;
    p2p.m_relayAvgPing = 13;
    p2p.m_relayOverPing100 = 14;
    p2p.m_relayOverPing200 = 15;
    p2p.m_relayOverPing300 = 16;
    p2p.m_relayOverPing400 = 17;

    Packet_Monitor_UDP_Logout logout;
    logout.m_dbid = 1;
    logout.m_channel = 2;
    logout.m_cache0 = 3;
    logout.m_cache4 = 4;
    logout.m_foc = 5;
    logout.m_memberKey = 6;
    logout.m_name[0] = 'x';
    logout.m_cacheFlag = 7;

    Packet_Monitor_Call_Guild_Level_Up lvlup;
    lvlup.m_uid = 1;
    lvlup.m_charNo = 2;
    lvlup.m_guildKey = 3;
    lvlup.m_pad16 = 4;
    lvlup.m_fund = 5;

    Packet_Monitor_UDP_Reply_UserInfo reply;
    reply.m_count = 1;
    reply.m_channel = 2;
    reply.m_items[0].m_dbid = 3;
    reply.m_items[0].m_charNo = 4;
    reply.m_items[0].m_channel = 5;
#ifdef DNF_SVC_GUILD
    reply.m_items[0].m_memberKey = 6;
#else
    reply.m_items[0].m_guildKey = 6;
    reply.m_items[0].m_memberKey = 7;
#endif
    reply.m_items[0].m_job = 8;
    reply.m_items[0].m_grade = 9;
    reply.m_items[0].m_level = 10;
    reply.m_items[0].m_name[0] = 'n';
    reply.m_items[0].m_ip[0] = '1';
    reply.m_items[0].m_sex = 11;
    reply.m_items[0].m_ssn[0] = 's';

    Packet_Monitor_Charac_Delete del;
    del.m_accId = 1;
    del.m_charNo = 2;
    del.m_guildKey = 3;

    Packet_Monitor_Other_Channel_Chat_ToUser touser;
    touser.m_senderCharId = 1;
    touser.m_serverId = 2;
    touser.m_idByChannel = 3;
    touser.m_uniqCharNo = 4;
    touser.m_name[0] = 'n';
    touser.m_type = 5;
    touser.m_msgLen = 6;
    touser.m_msg[0] = 'm';

    return (int)(p2p.m_p2pUser + logout.m_cache4 + lvlup.m_uid + reply.m_count +
                 del.m_accId + touser.m_senderCharId);
}
