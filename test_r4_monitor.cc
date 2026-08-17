#include <cstring>

#include "Packet_Monitor_Char_Changable_Info.h"
#include "Packet_Monitor_Find_Factory_Hub_User.h"
#include "Packet_Monitor_MegaPhone_Hyper_Link.h"
#include "Packet_Monitor_Other_Channel_Chat.h"
#include "Packet_Monitor_Other_Channel_Chat_Hyper_Link.h"
#include "Packet_Monitor_Other_Channel_Chat_ToUser.h"
#include "Packet_Monitor_UDP_Reply_UserInfo.h"
#include "Packet_PvPChannelUserCount.h"
#include "Packet_Stat_Lag_Statistics.h"
#include "Packet_TowerOfDespair_Statistic_GTS.h"

int main()
{
    Packet_Monitor_Char_Changable_Info p1;
    p1.m_dbid = 1;
    p1.m_padE = 2;
    p1.m_level = 3;
    p1.m_field_f = 4;
    p1.m_flag = 5;
    p1.m_field_11 = 6;

    Packet_Monitor_Find_Factory_Hub_User p2;
    p2.m_charNo = 1;
    p2.m_nameLen = 2;
    std::memcpy(p2.m_name, "name", 4);
    p2.m_field2e = 0x2c1;
    p2.m_accId = 3;

    Packet_Monitor_MegaPhone_Hyper_Link p3;
    p3.m_sg = 1;
    p3.m_channel = 2;
    p3.m_uniqueId = 3;
    p3.m_nameLength = 4;
    std::memcpy(p3.m_name, "Name", 4);
    p3.m_itemCount = 5;
    p3.m_items[0] = 6;
    p3.m_pad96[0] = 7;
    p3.m_pad96[0xcf] = 8;
    p3.m_msgLen = 9;
    std::memcpy(p3.m_msg, "msg", 3);

    Packet_Monitor_Other_Channel_Chat p4;
    p4.m_chatType = 1;
    p4.m_id = 2;
    p4.server_id = 3;
    p4.m_characNo = 4;
    p4.m_recverCharId = 5;
    p4.m_buddyNameLen = 6;
    std::memcpy(p4.buddy_n_user_id_what, "buddy", 5);
    p4.chatLength = 7;
    std::memcpy(p4.chatContent, "chat", 4);

    Packet_Monitor_Other_Channel_Chat_Hyper_Link p5;
    p5.m_chatType = 1;
    p5.m_id = 2;
    p5.server_id = 3;
    p5.m_characNo = 4;
    p5.m_recverCharId = 5;
    p5.m_buddyNameLen = 6;
    std::memcpy(p5.buddy_n_user_id_what, "buddy", 5);
    p5.m_itemCount = 7;
    p5.m_items[0][0] = 8;
    p5.m_items[2][0x67] = 9;
    p5.m_msgLen = 10;
    std::memcpy(p5.m_msg, "msg", 3);

    Packet_Monitor_Other_Channel_Chat_ToUser p6;
    p6.m_senderCharId = 1;
    p6.m_serverId = 2;
    p6.m_idByChannel = 3;
    p6.m_uniqCharNo = 4;
    std::memcpy(p6.m_name, "name", 4);
    p6.m_type = 5;
    p6.m_msgLen = 6;
    std::memcpy(p6.m_msg, "msg", 3);

    Packet_Monitor_UDP_Reply_UserInfo p7;
    p7.m_count = 1;
    p7.m_channel = 2;
    p7.m_items[0].m_dbid = 3;
    p7.m_items[0].m_charNo = 4;
    p7.m_items[0].m_channel = 5;
#ifdef DNF_SVC_GUILD
    p7.m_items[0].m_memberKey = 6;
    p7.m_items[0].m_pad32[0] = 7;
#else
    p7.m_items[0].m_guildKey = 6;
    p7.m_items[0].m_memberKey = 7;
#endif
    p7.m_items[0].m_job = 8;
    p7.m_items[0].m_grade = 9;
    p7.m_items[0].m_level = 10;
    std::memcpy(p7.m_items[0].m_name, "name", 4);
    std::memcpy(p7.m_items[0].m_ip, "ip", 2);
    p7.m_items[0].m_sex = 11;
    std::memcpy(p7.m_items[0].m_ssn, "ssn", 3);

    Packet_PvPChannelUserCount p8;
    p8.m_charNo = 1;
    p8.m_uid = 2;
    p8.m_schoolNo = 3;
    p8.m_countA = 4;
    p8.m_countB = 5;
    p8.m_pad1e = 6;
    p8.m_countC = 7;
    p8.m_countD = 8;

    Packet_Stat_Lag_Statistics p9;
    p9.m_recordCount = 1;
    p9.m_padb[0] = 2;
    p9.m_padb[0x4f] = 3;
    p9.m_detailCount = 4;
    p9.m_pad5c[0] = 5;
    p9.m_pad5c[0xef] = 6;

    Packet_TowerOfDespair_Statistic_GTS p10;
    p10.m_padA = 1;
    p10.m_layer = 2;
    p10.m_enterFlag = 3;
    p10.m_accId = 4;

    return p1.m_dbid + p2.m_charNo + p3.m_sg + p4.m_chatType + p5.m_chatType +
           p6.m_senderCharId + p7.m_count + p8.m_charNo + p9.m_recordCount +
           p10.m_padA;
}
