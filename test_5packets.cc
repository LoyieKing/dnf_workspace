#include <cstdio>
#include <cstring>

#include "Packet_GameServer2Statisctics2DBServer.h"
#include "Packet_Monitor_MegaPhone_Hyper_Link.h"
#include "Packet_Guild_Exp_Limit.h"
#include "Packet_Monitor_Call_Guild_Members_ToChannel.h"
#include "Packet_GTM_OntimeEvent_RequestReward.h"

int main()
{
    Packet_GameServer2Statisctics2DBServer s2d;
    s2d.m_serverGroup = 1;
    s2d.m_connectedType = 2;
    s2d.m_requiredTime = 3;
    s2d.m_checkTime = 4;
    std::memcpy(s2d.m_nationCode, "CN", 3);
    std::memcpy(s2d.m_peerAddress, "1.2.3.4", 8);

    Packet_Monitor_MegaPhone_Hyper_Link mph;
    mph.m_sg = 1;
    mph.m_channel = 2;
    mph.m_uniqueId = 3;
    mph.m_nameLength = 4;
    std::memcpy(mph.m_name, "Name", 5);
    mph.m_itemCount = 1;
    mph.m_items[0] = 1;
    mph.m_pad96[0] = 2;
    mph.m_msgLen = 3;
    std::memcpy(mph.m_msg, "hi", 3);

    Packet_Guild_Exp_Limit gel;
    gel.m_channel = 1;
    gel.m_fieldB = 2;
    gel.m_fieldC = 3;
    gel.m_guildExpLimit[0] = 4;
    gel.m_guildExpLimit[16] = 5;

    Packet_Monitor_Call_Guild_Members_ToChannel cm;
    cm.m_channel = 1;
    cm.m_charNo = 2;
    cm.m_guildKey = 3;
    std::memcpy(cm.m_guildName, "Guild", 6);
    cm.m_count = 1;
    cm.m_guildPoint = 4;
    cm.m_totalCnt = 5;
    cm.m_members[0].f.m_b0 = 1;
    cm.m_members[0].f.m_w2 = 2;

    Packet_GTM_OntimeEvent_RequestReward gtm;
    gtm.m_fieldA = 1;
    gtm.m_fieldB = 2;
    gtm.m_fieldC = 3;

    std::printf("%d %d %d %d %d\n", (int)sizeof(s2d), (int)sizeof(mph),
                (int)sizeof(gel), (int)sizeof(cm), (int)sizeof(gtm));
    return 0;
}
