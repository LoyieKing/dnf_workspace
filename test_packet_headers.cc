#include <vector>
#include "Packet_Guild_Change_Power_War_Point.h"
#include "Packet_Monitor_Call_Guild_All_Members_ToChannel.h"
#include "Packet_Pcroom_Response.h"
#include "Packet_PcRoomPlayTimeReward.h"
#include "Packet_Hades_Udp_HeartBeat.h"
#include "Packet_Monitor_Max_Level_BroadCast.h"
#include "Packet_Monitor_Call_Guild_Info.h"
#include "Packet_Monitor_Char_Info.h"
#include "STGameUserInfo.h"

int main()
{
    Packet_Guild_Change_Power_War_Point p1;
    Packet_Monitor_Call_Guild_All_Members_ToChannel p2;
    Packet_Pcroom_Response p3;
    Packet_PcRoomPlayTimeReward p4;
    Packet_Hades_Udp_HeartBeat p5;
    Packet_Monitor_Max_Level_BroadCast p6;
    Packet_Monitor_Call_Guild_Info p7;
    Packet_Monitor_Char_Info p8;
    STGameUserInfo p9;

    std::vector<unsigned int> users;
    p1.GetUserList(users);

    (void)p2;
    (void)p3;
    (void)p4;
    (void)p5;
    (void)p6;
    (void)p7;
    (void)p8;
    (void)p9;
    return 0;
}
