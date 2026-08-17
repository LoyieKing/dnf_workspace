#include <cstring>

#include "Packet_Stat_Lag_Statistics.h"
#include "Packet_Monitor_MegaPhone_Hyper_Link.h"
#include "Packet_Monitor_Call_Guild_Members_ToChannel.h"
#include "Packet_Dungeon_Statistic_Party_Charac.h"
#include "PvPBuddyInfo.h"
#include "Packet_Response_PvP_Buddy_Conn_List.h"

int main()
{
    Packet_Stat_Lag_Statistics lag;
    lag.m_recordCount = 8;
    lag.m_records[0].m_avg.m_int = 100;
    lag.m_records[1].m_avg.m_float = 1.5f;
    lag.m_records[2].m_deviation = 2.5f;
    lag.m_records[7].m_count = 3;
    lag.m_detailCount = 10;
    lag.m_details[0].m_key = 0x1234;
    lag.m_details[0].m_pad1 = 0;
    lag.m_details[0].m_a = 1.0f;
    lag.m_details[0].m_b = 2.0f;
    lag.m_details[0].m_cntA = 3;
    lag.m_details[0].m_pad2 = 0;
    lag.m_details[0].m_c = 4.0f;
    lag.m_details[0].m_d = 5.0f;
    lag.m_details[0].m_cntB = 6;
    lag.m_details[9].m_key = 0x5678;
    lag.m_details[9].m_cntB = 9;

    Packet_Monitor_MegaPhone_Hyper_Link mph;
    mph.m_sg = 1;
    mph.m_channel = 2;
    mph.m_uniqueId = 3;
    mph.m_nameLength = 4;
    std::memcpy(mph.m_name, "Name", 4);
    mph.m_itemCount = 1;
    mph.m_items[0] = 0x41;
    mph.m_pad96[0] = 0x96;
    mph.m_pad96[0xcf] = 0x65;
    mph.m_msgLen = 3;
    std::memcpy(mph.m_msg, "msg", 3);

    Packet_Monitor_Call_Guild_Members_ToChannel guild;
    guild.m_channel = 1;
    guild.m_charNo = 2;
    guild.m_guildKey = 3;
    std::memcpy(guild.m_guildName, "guild", 5);
    guild.m_count = 1;
    guild.m_guildPoint = 4;
    guild.m_totalCnt = 5;
    guild.m_members[0].f.m_job = 1;
    guild.m_members[0].f.m_growthType = 2;
    guild.m_members[0].f.m_level = 3;
    guild.m_members[95].f.m_grade = 4;
    guild.m_members[95].f.m_blackUser = 1;

    Packet_Dungeon_Statistic_Party_Charac dungeon;
    dungeon.m_channelNo = 1;
    dungeon.m_dungeonIndex = 2;
    dungeon.m_dungeonDiff = 3;
    dungeon.m_dungeonStandardLevel = 4;
    dungeon.m_success = 5;
    dungeon.m_characJob = 6;
    dungeon.m_characGrow = 7;
    dungeon.m_partyUserCount = 8;
    dungeon.m_data[0] = 9;
    dungeon.m_data[9] = 10;
    dungeon.m_field41 = 11;
    dungeon.m_field43 = 12;

    PvPBuddyInfo buddy;
    buddy.server_id = 1;
    buddy.channel_no = 2;
    buddy.isOnline = true;
    buddy.charac_no = 3;
    std::memcpy(buddy.m_name, "buddy", 5);
    buddy.m_level = 4;
    buddy.m_job = 5;
    buddy.m_growType = 6;
    buddy.m_sex = 7;

    Packet_Response_PvP_Buddy_Conn_List conn;
    conn.charac_no = 1;
    conn.m_uid = 2;
    conn.buddyCount = 1;
    conn.buddies[0] = buddy;
    conn.buddies[31].server_id = 8;
    conn.buddies[31].m_sex = 9;

    return (int)(lag.m_records[0].m_avg.m_int + lag.m_details[9].m_key +
                 mph.m_pad96[0xcf] + guild.m_totalCnt + dungeon.m_field43 +
                 conn.buddies[31].server_id);
}
