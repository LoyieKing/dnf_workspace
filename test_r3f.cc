#include <cstring>

#include "Packet_Broadcast_Msg.h"
#include "Packet_Change_Char_Name.h"
#include "Packet_Forbid_Chat_By_Monitor.h"
#include "Packet_GTM_OntimeEvent_RequestReward.h"
#include "Packet_Guild_Apply_Origial_Power_Side.h"
#include "Packet_Monitor_Call_Guild_Level_Up.h"
#include "Packet_Monitor_Char_Changable_Info.h"
#include "Packet_Monitor_Find_Factory_Hub_User.h"
#include "Packet_Monitor_UDP_Logout.h"
#include "Packet_Monitor_UDP_Reply_UserInfo.h"
#include "Packet_Monitor_User_Repel_ByCharName.h"
#include "Packet_No_Cache.h"
#include "Packet_Notice_Guild_War_End.h"
#include "Packet_PvPChannelUserCount.h"
#include "Packet_Randombox_statistic.h"
#include "Packet_TowerOfDespair_Statistic_GTS.h"
#include "Packet_VillageAttackedGMCommand.h"

int main()
{
    Packet_Broadcast_Msg p1;
    p1.m_padA[0] = 0; p1.m_len = 1; p1.m_text[0] = 'a';

    Packet_Forbid_Chat_By_Monitor p2;
    p2.m_secs = 60; p2.m_padE[0] = 0; p2.m_name[0] = 'n';

    Packet_No_Cache p3;
    p3.m_dbid = 0x1234; p3.m_serverGroup = 1; p3.m_field12 = 1;

    Packet_Monitor_User_Repel_ByCharName p4;
    p4.m_fieldA = 0; p4.m_dbid = 2; p4.m_name[0] = 'x';

    Packet_VillageAttackedGMCommand p5;
    p5.m_uid = 1; p5.m_charNo = 2; p5.m_field12 = 0; p5.m_command = 3;

    Packet_Randombox_statistic p6;
    p6.m_boxKind = 0; p6.m_actionKind = 1;

    Packet_Change_Char_Name p7;
    p7.m_idByChannel = 1; p7.m_charNo = 2; p7.m_guildKey = 3; p7.m_name[0] = 'c';

    Packet_Monitor_UDP_Logout p8;
    p8.m_dbid = 4; p8.m_channel = 5; p8.m_cache0 = 0; p8.m_cache4 = 0;
    p8.m_foc = 0; p8.m_memberKey = 6; p8.m_name[0] = 'l'; p8.m_cacheFlag = 0;

    Packet_TowerOfDespair_Statistic_GTS p9;
    p9.m_padA = 0; p9.m_layer = 10; p9.m_enterFlag = 1; p9.m_accId = 7;

    Packet_Monitor_Char_Changable_Info p10;
    p10.m_dbid = 8; p10.m_padE = 0;
    p10.m_guildMemFlag = 0xabcd; p10.m_field_f = 0xabcd; p10.m_level = 0xabcd;
    p10.m_growthType = 0x5a; p10.m_field_11 = 0x5a; p10.m_flag = 0x5a;

    Packet_Monitor_Find_Factory_Hub_User p11;
    p11.m_charNo = 9; p11.m_nameLen = 0; p11.m_name[0] = 'f';
    p11.m_field2e = 0x2c1; p11.m_accId = 10;

    Packet_Monitor_UDP_Reply_UserInfo p12;
    p12.m_count = 1; p12.m_channel = 0xc9;
    p12.m_items[0].m_dbid = 11; p12.m_items[0].m_charNo = 12;
    p12.m_items[0].m_channel = 13;
#ifdef DNF_SVC_GUILD
    p12.m_items[0].m_memberKey = 14;
#else
    p12.m_items[0].m_guildKey = 14;
#endif
    p12.m_items[0].m_job = 0; p12.m_items[0].m_grade = 0;
    p12.m_items[0].m_level = 20; p12.m_items[0].m_name[0] = 'r';
#ifdef DNF_SVC_GUILD
    p12.m_items[0].m_pad32[0] = 0; p12.m_items[0].m_ip[0] = 0;
#else
    p12.m_items[0].m_memberKey = 0; p12.m_items[0].m_ip[0] = 0;
#endif
    p12.m_items[0].m_sex = 1; p12.m_items[0].m_ssn[0] = 0;

    Packet_PvPChannelUserCount p13;
    p13.m_charNo = 15; p13.m_uid = 16; p13.m_schoolNo = 17;
    p13.m_countA = 1; p13.m_countB = 2; p13.m_pad1e = 0;
    p13.m_countC = 3; p13.m_countD = 4;

    Packet_GTM_OntimeEvent_RequestReward p14;
    p14.m_fieldA = 0; p14.m_fieldB = 0xffffffffu; p14.m_fieldC = 0;

    Packet_Monitor_Call_Guild_Level_Up p15;
    p15.m_uid = 0xffffffffu; p15.m_charNo = 18; p15.m_guildKey = 19;
    p15.m_pad16 = 0; p15.m_fund = 100000;

    Packet_Notice_Guild_War_End p16;
    p16.m_fieldA = 0;

    Packet_Guild_Apply_Origial_Power_Side p17;
    p17.m_charNo = 20; p17.m_guildKey = 21;
    p17.m_powerSide = 3; p17.m_field12 = 3;

    return (int)(p1.m_padA[0] + p1.m_len + p2.m_secs + p3.m_dbid + p4.m_dbid +
                 p5.m_command + p6.m_boxKind + p7.m_guildKey + p8.m_dbid +
                 p9.m_layer + p10.m_guildMemFlag + p10.m_growthType +
                 p11.m_field2e + p12.m_count + p13.m_countD +
                 p14.m_fieldB + p15.m_fund + p16.m_fieldA + p17.m_powerSide);
}
