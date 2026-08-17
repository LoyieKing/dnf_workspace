#include "Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link.h"
#include "Packet_Monitor_Other_Channel_Chat_Hyper_Link.h"
#include "Packet_Guild_Guild_Cargo_Upgrade.h"
#include "Packet_Event_UpgradeJar_Output_Statistic_GTS.h"
#include "Packet_Check_Overlapped_Accusation.h"
#include "Packet_PvPChannelUserCount.h"
#include "Packet_Monitor_Guild_Chat_Hyper_Link.h"
#include "Packet_Monitor_UDP_Login.h"

static void instantiate_all()
{
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link p1;
    Packet_Monitor_Other_Channel_Chat_Hyper_Link p2;
    Packet_Guild_Guild_Cargo_Upgrade p3;
    Packet_Event_UpgradeJar_Output_Statistic_GTS p4;
    Packet_Check_Overlapped_Accusation p5;
    Packet_PvPChannelUserCount p6;
    Packet_Monitor_Guild_Chat_Hyper_Link p7;
    Packet_Monitor_UDP_Login p8;

    // touch fields to force layout/name correctness
    p1.m_senderCharId = 1; p1.m_serverId = 0; p1.m_idByChannel = -1;
    p1.m_uniqCharNo = 2; p1.m_name[0] = 0; p1.m_type = 0; p1.m_itemCount = 0;
    p1.m_items[0][0] = 0; p1.m_msgLen = 0; p1.m_msg[0] = 0;

    p2.m_chatType = 1; p2.m_id = 0; p2.server_id = 0; p2.m_characNo = 0;
    p2.m_recverCharId = 0; p2.m_buddyNameLen = 0; p2.buddy_n_user_id_what[0] = 0;
    p2.m_itemCount = 0; p2.m_items[0][0] = 0; p2.m_msgLen = 0; p2.m_msg[0] = 0;

    p3.m_guildKey = 0; p3.m_charNo = 0; p3.m_curCapacity = 0;
    p3.m_newCapacity = 0; p3.m_requiredFund = 0;

    p4.m_itemCode = 0; p4.m_itemCount = 0;

    p5.m_uid = 0; p5.m_characNo = 0; p5.m_type = 4; p5.m_serverGroup = 0;
    p5.m_reportedServerGroup = 0; p5.m_accId = 0; p5.m_name1[0] = 0;
    p5.m_name2[0] = 0; p5.m_reportText[0] = 0; p5.m_result = 0;

    p6.m_charNo = 0; p6.m_uid = 0; p6.m_schoolNo = 0; p6.m_countA = 0;
    p6.m_countB = 0; p6.m_pad1e = 0; p6.m_countC = 0; p6.m_countD = 0;

    p7.m_charNo = 0; p7.m_guildKey = 0; p7.m_itemCount = 0;
    p7.m_items[0] = 0; p7.m_msgLen = 0; p7.m_msg[0] = 0;

    p8.m_channelId = 0; p8.m_dbid = 0; p8.m_channel = 255; p8.m_ip[0] = 0;
    p8.m_sex = 0; p8.m_cache0 = 0; p8.m_cache4 = 0; p8.m_ssn[0] = 0;
}

int main()
{
    instantiate_all();
    return 0;
}
