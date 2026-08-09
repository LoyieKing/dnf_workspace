#ifndef MANAGER_TYPES_H_
#define MANAGER_TYPES_H_

#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#include <sys/time.h>
#include <netinet/in.h>

#include <mysql.h>
#include <stdexcept>

#include "PacketHeader.h"
#include "Thread.h"

class CApplication;
class CUser;
class CServerHandler;
class CUdpRecvBuffer;
class CTcpRecvBuffer;
class CTcpSendBuffer;
class CPacketBuffer;
class CPeer;
class CTcpNetSystem;
class CUserManager;
class CUdpHandler;
class CUdpNetworkThread;
class CTcpNetworkThread;
class CTcpAcceptThread;
class CTcpHandler;
class EpollHandler;
class CDBHandle;
class CMySql;
class CDBManager;
class LimitNpcBuyItemRequestInfo;
class LimitNpcBuyItemResultInfo;
class LimitNpcBuyItemUpdate;
class Packet_DB_Load_Request_Guild_Board_Write;
class Packet_DB_Load_Request_Web_Guild_Board_Write;
class Packet_DB_Load_Guild_Agit;
class Packet_DB_Create_Guild_Agit;
class Packet_DB_Delete_Guild_Agit;
class Packet_DB_Upgrade_Guild_Agit;
class Packet_DB_Insert_Guild_Cargo_History;
class Packet_DB_Save_Power_War_Bonus_Point;
class Packet_DB_Save_Power_War_Point;
class Packet_DB_Save_Power_War_Statue_Ranker;
class Packet_DB_Save_Power_War_Point_Reward;
class Packet_Load_Periodic_Message;
class Packet_Result_Loading_Periodic_Message;
class Packet_DB_Save_Power_War_User_Rank;
class Packet_DB_Save_Power_War_Guild_Rank;
class Packet_Udp_Characteristic;
class Packet_StartGameEventFromServer;
class Packet_StopGameEventFromServer;
class Packet_P2P_Statistics;
class Packet_Goldcard_Event_Statistic_STD;
class Packet_DBMW_HellParty_Statistic_Item;
class Packet_DBMW_Packet_Overflow_Statistic;
class Packet_DBMW_Save_Error_Line_Statistic;
class Packet_TowerOfDespair_Statistic_STD;
class Packet_DB_VillageAttackedRank;
class Packet_GameServer2Statisctics2DBServer;
class Packet_Randombox_statistic_DB;
class Packet_DBMW_Query_Msg;
class Packet_DBMW_Query_String;
class Packet_Emblem_Create_Statistic_DB;
class Packet_DB_Write_Guild_Member_Memo;
class Packet_Server_Match_data_DBMW;
class Packet_Manager_Event_Trigger_Ack;
class Packet_DBMW_Loading_Time_Report;
class Packet_DBMW_Fatigue_Battery_Money_Statistic;
class Packet_Load_Periodic_Message;
class Packet_DB_Request_Guild_Secede;
class Packet_DBMW_Request_Guild_Create;
class Packet_DB_Reply_Query_Member;
struct ST_MemberProxy;
struct STGuildMemberProxy;
struct STGuildJoinInfo;
class Packet_DBMW_Dungeon_Statistic_Party;
class Packet_DBMW_Dungeon_Statistic_Party_Job;
class Packet_DBMW_Dungeon_Statistic_Party_Charac;
class Packet_Item_Limit_Edition_Load_Data_Req;
class Packet_Item_Limit_Edition_Load_Data_Rpy;
class Packet_Item_Limit_Edition_Update;
class Packet_DBMW_Change_Char_Name;
class Packet_DB_Guild_Cargo_Upgrade;
class Packet_DB_Update_Guild_Cargo;
class Packet_DBMW_Statistic_Login_Logout;
class Packet_Result_OnTimeEvent_Idx;
// ---- 统计/框架 packet（MISSING 62 批补全布局，+0xa 起数据区）----
class Packet_User_Count_Statistic : public PacketHeader
{
public:
    int m_gcNo;              // +0xa
    int m_userCount;         // +0xe
    short m_occ[0x64];       // +0x12（0..99 年龄段）
} __attribute__((packed));

class PacketInsertUpdate : public PacketHeader
{
public:
    int m_handleIdx;         // +0xa（DB 槽位）
    int m_updateQueryId;     // +0xe（update 查询 id）
    int m_insertQueryId;     // +0x12（insert 查询 id）
    char m_updateSql[0x801]; // +0x16（update SQL，exec 无影响行时执行）
    char m_insertSql[0x1000]; // +0x817（主 SQL）
} __attribute__((packed));

class Packet_Frame_Lag_Statistic_Write_Query : public PacketHeader
{
public:
    char m_query[0x800];     // +0xa
} __attribute__((packed));

class Packet_Frame_Lag_Used_Memory_Write_Query : public PacketHeader
{
public:
    char m_query[0x800];     // +0xa
} __attribute__((packed));

class Packet_Frame_Lag_Statistic_Write_Daily_Bad_Spec : public PacketHeader
{
public:
    int m_specId;            // +0xa
    char m_serverGroup;      // +0xe
    char m_pad[3];
} __attribute__((packed));

class Packet_DBMW_Reason_Crash_Down_Query : public PacketHeader
{
public:
    char m_query[0x800];     // +0xa
} __attribute__((packed));

class Packet_DBMW_TechnicalReport_Common_Query : public PacketHeader
{
public:
    char m_query[0x800];     // +0xa
} __attribute__((packed));

class Packet_DBMW_Powerwar_Lag_Report : public PacketHeader
{
public:
    int m_count;             // +0xa
    char m_sql[1][0x100];    // +0xe（SQL 字符串，步长 0x100）
} __attribute__((packed));

class Packet_DBMW_Powerwar_Loading_Time_Report : public PacketHeader
{
public:
    int m_count;             // +0xa
    char m_sql[1][0x100];    // +0xe（SQL 字符串，步长 0x100）
} __attribute__((packed));

class Packet_DBMW_Ting_User_TimeCheck_Write_Query : public PacketHeader
{
public:
    int m_count;             // +0xa
    struct Entry
    {
        unsigned int m_id;   // +0xe
        int m_minute;        // +0x12
    } m_entries[1];          // +0xe，步长 8
} __attribute__((packed));

class Packet_DBMW_User_Ting_TimeCheck_Write_Query : public PacketHeader
{
public:
    int m_count;             // +0xa
    struct Entry
    {
        int m_minute;        // +0xe
        int m_count;         // +0x12
    } m_entries[1];          // +0xe，步长 8
} __attribute__((packed));

class Packet_DB_Request_Member_Delete : public PacketHeader
{
public:
    unsigned int m_characNo; // +0xa
} __attribute__((packed));

class Packet_GM_List : public PacketHeader
{
public:
    char m_flag;             // +0xa（0 时先 clearGmList）
    char m_count;            // +0xb（GM 数量）
    unsigned int m_ids[0x14];  // +0xc
    char m_flags[0x14];      // +0x5c
} __attribute__((packed));

// ---- 既有 handler 入参 packet（类型化补全）----
class Packet_DBMW_Request_Guild_Notify_Message : public PacketHeader
{
public:
    int m_guildId;       // +0xa
    unsigned int m_id;   // +0xe
    char m_msg[0x1000];  // +0xf
} __attribute__((packed));

class Packet_DBMW_Query_Buddy : public PacketHeader
{
public:
    unsigned int m_characNo;  // +0xa
} __attribute__((packed));

class Packet_DBMW_Add_Buddy : public PacketHeader
{
public:
    int m_mid;       // +0xa
    char m_name[0x1e];  // +0xe
} __attribute__((packed));

class Packet_DBMW_PcRoom_PlayTime_Reward : public PacketHeader
{
public:
    unsigned char m_serverInfo;  // +0xa
    int m_accId;      // +0xb
    int m_characNo;   // +0xf
} __attribute__((packed));

class Packet_DBMW_Collect_Items_Update : public PacketHeader
{
public:
    int m_fieldA;          // +0xa
    unsigned char m_serverInfo;  // +0xe
    unsigned char m_field13;     // +0x13
} __attribute__((packed));

class Packet_DBMW_Collect_Items_Gm : public PacketHeader
{
public:
    unsigned char m_serverInfo;  // +0xa
    int m_fieldB;      // +0xb
    unsigned int m_fieldF;  // +0xf
    int m_field13;     // +0x13
} __attribute__((packed));

class Packet_DBMW_Request_Guild_Join : public PacketHeader
{
public:
    unsigned char m_serverId;    // +0xa
    unsigned int m_guildId;      // +0xb
    unsigned int m_id;           // +0xf
    unsigned int m_field13;      // +0x13
    int m_characNo;              // +0x17
    char m_characName[0x1d];     // +0x1b
    unsigned char m_lev;         // +0x39
    unsigned char m_growType;    // +0x3a
    unsigned char m_job;         // +0x3b
    unsigned char m_sex;         // +0x3c
    char m_bornYear[3];          // +0x3d
} __attribute__((packed));

class Packet_DBMW_Request_BlackList : public PacketHeader
{
public:
    unsigned int m_mid;      // +0xa
    char m_name[0x1e];       // +0xe
    int m_characNo;          // +0x2c
    int m_result;            // +0x30（仅 Register 使用）
} __attribute__((packed));

class Packet_DBMW_Send_Mail_Coin_Guild_Event : public PacketHeader
{
public:
    unsigned char m_serverId;  // +0xa
    unsigned int m_guildId;    // +0xb
    int m_count;               // +0xf
} __attribute__((packed));

class Packet_DBMW_Request_Change_Unconnected_GuildMember_Grade : public PacketHeader
{
public:
    unsigned char m_serverId;  // +0xa
    unsigned int m_guildId;    // +0xb
    unsigned int m_fieldF;     // +0xf
    unsigned char m_field13;   // +0x13
    char m_name[0x1d];         // +0x14
    unsigned char m_field32;   // +0x32
} __attribute__((packed));

class Packet_DBMW_Request_BlackList_Login : public PacketHeader
{
public:
    unsigned int m_mid;    // +0xa
    unsigned char m_fieldE;  // +0xe
} __attribute__((packed));

class Packet_DBMW_Request_Guild_Booting : public PacketHeader
{
public:
    unsigned char m_serverId;  // +0xa
} __attribute__((packed));

class Packet_DBMW_Request_Today_Guild_Member : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xa
} __attribute__((packed));

class Packet_DBMW_Connection_Check : public PacketHeader
{
public:
    unsigned char m_serverId;  // +0xa
} __attribute__((packed));

class Packet_DBMW_Query_Guild : public PacketHeader
{
public:
    unsigned char m_serverId;  // +0xa
    unsigned int m_guildId;    // +0xb
    unsigned int m_serverGroup;  // +0xf
} __attribute__((packed));

class Packet_DBMW_Query_Tower_Full_Rank : public PacketHeader
{
public:
    unsigned int m_towerIndex;  // +0xa
    unsigned int m_limit;       // +0xe
} __attribute__((packed));

class Packet_DBMW_Del_Buddy : public PacketHeader
{
public:
    unsigned int m_mid;      // +0xa
    unsigned int m_characNo; // +0xe
    char m_name[0x1d];       // +0x12
} __attribute__((packed));

class Packet_DB_Save_Power_War_Bonus_Point : public PacketHeader
{
public:
    int m_count;   // +0xa
    struct Entry
    {
        int m_characNo;  // +0xe
        int m_addInfo;   // +0x12
    } m_entries[1];      // +0xe，步长 8
} __attribute__((packed));

class Packet_DB_Load_Request_Guild_Board_Write : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xb
    unsigned int m_field13;  // +0x13
} __attribute__((packed));

class Packet_DB_Load_Request_Web_Guild_Board_Write : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xa
    unsigned int m_fieldE;   // +0xe
} __attribute__((packed));

class Packet_DB_Load_Request_Guild_Board_Delete : public PacketHeader
{
public:
    unsigned int m_fieldB;   // +0xb
    unsigned int m_fieldF;   // +0xf
    unsigned int m_field13;  // +0x13
} __attribute__((packed));

class Packet_DB_Load_Guild_Agit : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xa
} __attribute__((packed));

class Packet_DB_Create_Guild_Agit : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xa
    unsigned int m_fieldE;   // +0xe
} __attribute__((packed));

class Packet_DB_Delete_Guild_Agit : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xa
    unsigned int m_fieldE;   // +0xe
} __attribute__((packed));

class Packet_DB_Upgrade_Guild_Agit : public PacketHeader
{
public:
    unsigned int m_guildId;  // +0xa
    unsigned int m_fieldE;   // +0xe
} __attribute__((packed));

class Packet_StartGameEventFromServer : public PacketHeader
{
public:
    int m_eventType;      // +0xa
    int m_eventFlag;      // +0xe
    int m_serverId;       // +0x12
    int m_parameter1;     // +0x16（handler 按 int 读；CDBManager 按 ushort）
    unsigned short m_parameter2;  // +0x18
} __attribute__((packed));

class Packet_StopGameEventFromServer : public PacketHeader
{
public:
    int m_eventType;      // +0xa
    int m_serverId;       // +0xe
    unsigned int m_endTime;  // +0x12
} __attribute__((packed));

class Packet_DBMW_Save_Member_Exp : public PacketHeader
{
public:
    unsigned int m_characNo;  // +0xa
    unsigned int m_masterNo;  // +0xe
    unsigned int m_exp;       // +0x12
} __attribute__((packed));

class Packet_DBMW_Save_Power_Secede_Time : public PacketHeader
{
public:
    unsigned char m_serverId;   // +0xa
    unsigned int m_secedeTime;  // +0xb
} __attribute__((packed));

class Packet_DBMW_Query_Member : public PacketHeader
{
public:
    unsigned int m_characNo;  // +0xa
} __attribute__((packed));

class Packet_DBMW_Query_Guild_Member : public PacketHeader
{
public:
    unsigned char m_serverId;  // +0xa
    unsigned int m_guildId;    // +0xb
} __attribute__((packed));

class Packet_DBMW_Save_Member_Update_CharInfo : public PacketHeader
{
public:
    unsigned int m_characNo;  // +0xa
    unsigned char m_serverId; // +0xe
} __attribute__((packed));

class Packet_DB_Save_Power_War_Point : public PacketHeader
{
public:
    unsigned char m_serverId;    // +0xa
    signed char m_winnerSide;    // +0xb
    unsigned int m_aSidePoint;   // +0xc
    unsigned int m_bSidePoint;   // +0x10
} __attribute__((packed));

class Packet_DBMW_Send_Guild_Letter : public PacketHeader
{
public:
    unsigned int m_fieldA;   // +0xa
    unsigned char m_serverId; // +0xe
    unsigned int m_guildId;  // +0xf
    char m_content[0x100];   // +0x13
    char m_subject[0x100];   // +0x113
    int m_flag;              // +0x124
} __attribute__((packed));

class Packet_DB_Save_Guild_War_Info : public PacketHeader
{
public:
    unsigned int m_serverId;    // +0xa
    unsigned int m_guildIds[10];  // +0xb
    unsigned int m_points[10];    // +0x33
} __attribute__((packed));

class Packet_DBMW_Save_Member : public PacketHeader
{
public:
    unsigned char m_type;    // +0xa
    unsigned int m_fieldB;   // +0xb
    unsigned int m_fieldF;   // +0xf
    unsigned char m_field13; // +0x13
} __attribute__((packed));

class Packet_TowerOfDespair_Statistic_STD : public PacketHeader
{
public:
    int m_serverId;  // +0xa
    int m_uv;        // +0xe（与 m_entries[0] 同址）
    struct Entry
    {
        int m_fieldE;   // +0xe
        int m_field12;  // +0x12
    } m_entries[1];     // +0xe，步长 8（条目从 i=1 起用）
} __attribute__((packed));

class Packet_DBMW_Request_IPCounter_List : public PacketHeader
{
public:
    unsigned char m_serverGroup;  // +0xa
    unsigned char m_fieldB;       // +0xb
} __attribute__((packed));

class Packet_DBMW_Request_Approve_Join_Guild : public PacketHeader
{
public:
    unsigned int m_guildId;   // +0xa
    unsigned int m_id;        // +0xe
    unsigned int m_characNo;  // +0x12
    signed char m_serverId;   // +0x16
} __attribute__((packed));

class Packet_Result_OnTimeEvent_Idx : public PacketHeader
{
public:
    Packet_Result_OnTimeEvent_Idx();
    int m_fieldA;       // +0xa
    char m_fieldE;      // +0xe
} __attribute__((packed));
class Packet_Frame_Lag_Statistic_Reload_Spec : public PacketHeader
{
public:
    unsigned char m_fieldA;  // +0xa
    int m_fieldB;            // +0xb
} __attribute__((packed));
class Packet_Frame_Lag_Collect_Interval_Check : public PacketHeader
{
public:
    Packet_Frame_Lag_Collect_Interval_Check();
    short m_fieldA;          // +0xa
} __attribute__((packed));
class Packet_Frame_Lag_Statistic_Result_Reload_Spec : public PacketHeader
{
public:
    Packet_Frame_Lag_Statistic_Result_Reload_Spec();
    unsigned char m_fieldA;  // +0xa
    int m_specId;            // +0xb
    int m_count;             // +0xf
    char m_data[0xd6];       // +0x13 项数据区（3 条 × 各列，见 QueryReloadSpecDb）
} __attribute__((packed));
class Packet_Frame_Lag_Statistic_Result_Load_Spec : public PacketHeader
{
public:
    Packet_Frame_Lag_Statistic_Result_Load_Spec();
    unsigned char m_fieldA;  // +0xa
    char m_pad[0xda];  // 数据区（ORIG ctor size 0xe5）
} __attribute__((packed));
class Packet_Frame_Lag_Statistic_Load_Spec : public PacketHeader
{
public:
    unsigned char m_fieldA;  // +0xa
} __attribute__((packed));
class Packet_Frame_Lag_Spec_Delete_Notify : public PacketHeader
{
public:
    Packet_Frame_Lag_Spec_Delete_Notify();
    char m_pad[0x4];  // 数据区（ORIG ctor size 0xe）
} __attribute__((packed));
class Packet_Frame_Lag_Statistic_Write_Lag_Index : public PacketHeader
{
};
class Packet_CollectItemsResult : public PacketHeader
{
public:
    Packet_CollectItemsResult();
    char m_pad[0xc];  // 数据区（ORIG ctor size 0x16）
} __attribute__((packed));
class Packet_DBMW_Add_Buddy_Reply : public PacketHeader
{
public:
    Packet_DBMW_Add_Buddy_Reply();
    char m_pad[0x2c];  // 数据区（ORIG ctor size 0x36）
} __attribute__((packed));
class Packet_DBMW_Del_Buddy_Reply : public PacketHeader
{
public:
    Packet_DBMW_Del_Buddy_Reply();
    char m_pad[0x27];  // 数据区（ORIG ctor size 0x31）
} __attribute__((packed));
class Packet_DB_Reply_Query_Guild : public PacketHeader
{
public:
    Packet_DB_Reply_Query_Guild();
    char m_pad[0x12b];  // 数据区（ORIG ctor size 0x135）
} __attribute__((packed));
class Packet_DB_Reply_Guild_Secede : public PacketHeader
{
public:
    Packet_DB_Reply_Guild_Secede();
    char m_pad[0x37];  // 数据区（ORIG ctor size 0x41）
} __attribute__((packed));
class Packet_Guild_Load_Guild_Agit : public PacketHeader
{
public:
    Packet_Guild_Load_Guild_Agit();
    char m_pad[0x5];  // 数据区（ORIG ctor size 0xf）
} __attribute__((packed));
class Packet_Notify_New_Group_Mail : public PacketHeader
{
public:
    Packet_Notify_New_Group_Mail();
    char m_pad[0x4b4];  // 数据区（ORIG ctor size 0x4be）
} __attribute__((packed));
class Packet_DBMW_Reponse_BlackList : public PacketHeader
{
public:
    Packet_DBMW_Reponse_BlackList();
    char m_pad[0x194];  // 数据区（ORIG ctor size 0x19e）
} __attribute__((packed));
class Packet_Guild_Load_Guild_Cargo : public PacketHeader
{
public:
    Packet_Guild_Load_Guild_Cargo();
    char m_pad[0x18e0];  // 数据区（ORIG ctor size 0x18ea）
} __attribute__((packed));
class Packet_Response_IPCounterList : public PacketHeader
{
public:
    Packet_Response_IPCounterList();
    char m_pad[0xbba];  // 数据区（ORIG ctor size 0xbc4）
} __attribute__((packed));
class Packet_DBMW_Reply_Guild_Create : public PacketHeader
{
public:
    Packet_DBMW_Reply_Guild_Create();
    char m_pad[0x23];  // 数据区（ORIG ctor size 0x2d）
} __attribute__((packed));
class Packet_Reply_Today_Guild_Member : public PacketHeader
{
public:
    Packet_Reply_Today_Guild_Member();
    char m_pad[0x2b];  // 数据区（ORIG ctor size 0x35）
} __attribute__((packed));
class Packet_Response_D_IPCounterList : public PacketHeader
{
public:
    Packet_Response_D_IPCounterList();
    char m_pad[0xe12];  // 数据区（ORIG ctor size 0xe1c）
} __attribute__((packed));
class Packet_Result_Ontime_Event_Item : public PacketHeader
{
public:
    Packet_Result_Ontime_Event_Item();
    char m_pad[0xa];  // 数据区（ORIG ctor size 0x14）
} __attribute__((packed));
class Packet_DB_Create_Guild_Agit_Reply : public PacketHeader
{
public:
    Packet_DB_Create_Guild_Agit_Reply();
    char m_pad[0xc];  // 数据区（ORIG ctor size 0x16）
} __attribute__((packed));
class Packet_DB_Delete_Guild_Agit_Reply : public PacketHeader
{
public:
    Packet_DB_Delete_Guild_Agit_Reply();
    char m_pad[0xc];  // 数据区（ORIG ctor size 0x16）
} __attribute__((packed));
class Packet_DBMW_Query_Buddy_Info_Reply : public PacketHeader
{
public:
    Packet_DBMW_Query_Buddy_Info_Reply();
    char m_pad[0x4e5];  // 数据区（ORIG ctor size 0x4ef）
} __attribute__((packed));
class Packet_DB_Reply_Query_Guild_Member : public PacketHeader
{
public:
    Packet_DB_Reply_Query_Guild_Member();
    char m_pad[0x23];  // 数据区（ORIG ctor size 0x2d）
} __attribute__((packed));
class Packet_DB_Upgrade_Guild_Agit_Reply : public PacketHeader
{
public:
    Packet_DB_Upgrade_Guild_Agit_Reply();
    char m_pad[0xc];  // 数据区（ORIG ctor size 0x16）
} __attribute__((packed));
class Packet_DB_Load_Reply_Guild_Board_Open : public PacketHeader
{
public:
    Packet_DB_Load_Reply_Guild_Board_Open();
    char m_pad[0x67e];  // 数据区（ORIG ctor size 0x688）
} __attribute__((packed));
class Packet_DB_Reply_Guild_Master_Delegate : public PacketHeader
{
public:
    Packet_DB_Reply_Guild_Master_Delegate();
    char m_pad[0x2e];  // 数据区（ORIG ctor size 0x38）
} __attribute__((packed));
class Packet_DB_Response_Approve_Join_Guild : public PacketHeader
{
public:
    Packet_DB_Response_Approve_Join_Guild();
    char m_pad[0x4c];  // 数据区（ORIG ctor size 0x56）
} __attribute__((packed));
class Packet_Guild_Load_Guild_Cargo_History : public PacketHeader
{
public:
    Packet_Guild_Load_Guild_Cargo_History();
    char m_pad[0x968];  // 数据区（ORIG ctor size 0x972）
} __attribute__((packed));
class Packet_DB_Load_Reply_Guild_Board_Write : public PacketHeader
{
public:
    Packet_DB_Load_Reply_Guild_Board_Write();
    char m_pad[0xaf];  // 数据区（ORIG ctor size 0xb9）
} __attribute__((packed));
class Packet_Result_Loading_Periodic_Message : public PacketHeader
{
public:
    Packet_Result_Loading_Periodic_Message();
    char m_pad[0x208];  // 数据区（ORIG ctor size 0x212）
} __attribute__((packed));
class Packet_DB_Load_Reply_Guild_Board_Delete : public PacketHeader
{
public:
    Packet_DB_Load_Reply_Guild_Board_Delete();
    char m_pad[0xe];  // 数据区（ORIG ctor size 0x18）
} __attribute__((packed));
class Packet_DB_Load_Reply_Web_Guild_Board_Write : public PacketHeader
{
public:
    Packet_DB_Load_Reply_Web_Guild_Board_Write();
    char m_pad[0xaf];  // 数据区（ORIG ctor size 0xb9）
} __attribute__((packed));
class Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade : public PacketHeader
{
public:
    Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade();
} __attribute__((packed));
class Packet_DBMW_Save_Client_Spec_Statistic : public PacketHeader
{
};
class Packet_DBMW_Assert_Manager_Info_Write_Query : public PacketHeader
{
};
class Packet_DBMW_Cube_Statistic : public PacketHeader
{
};
class Packet_DBMW_DeathTower_Statistic_Playdata_Job : public PacketHeader
{
};
class Packet_DBMW_DeathTower_Statistic_Value : public PacketHeader
{
};
class Packet_Avater_Disjoint_Statistic_DB : public PacketHeader
{
};
class Packet_DBMW_DeathTower_Statistic_Playdata_Party : public PacketHeader
{
};
class Packet_Req_Ontime_Event_Idx_Update : public PacketHeader
{
public:
    unsigned int m_itemIndex;  // +0xa
    unsigned int m_itemCount;  // +0xe
    unsigned int m_no;         // +0x12
} __attribute__((packed));
class Packet_Stat_Compatibility_Index : public PacketHeader
{
};
class Packet_Secret_Shop_Statistic : public PacketHeader
{
};
class Packet_UnChangable_GuildInfo_Save : public PacketHeader
{
};
class Packet_DB_Load_Request_Guild_Board_Open : public PacketHeader
{
};
class Packet_Server_Queue_Load_Statistic : public PacketHeader
{
public:
    Packet_Server_Queue_Load_Statistic();
    char m_fieldA;       // +0xa
    char m_fieldB;       // +0xb
    unsigned short m_fieldC;  // +0xc
} __attribute__((packed));
class Packet_DB_Query_Reply_On_Guild_Booting : public PacketHeader
{
public:
    Packet_DB_Query_Reply_On_Guild_Booting();
    char m_pad[0x9];  // 数据区（ORIG ctor size 0x13）
} __attribute__((packed));
class Packet_Monitor_Notify_New_Mail : public PacketHeader
{
public:
    Packet_Monitor_Notify_New_Mail();
    char m_pad[0x8];  // 数据区（ORIG ctor size 0x12）
} __attribute__((packed));
class Packet_DBMW_Reply_Guild_Mail : public PacketHeader
{
public:
    Packet_DBMW_Reply_Guild_Mail();
    char m_pad[0x9];  // 数据区（ORIG ctor size 0x13）
} __attribute__((packed));
class Packet_DBMW_Save_Guild_Join_Reply : public PacketHeader
{
public:
    Packet_DBMW_Save_Guild_Join_Reply();
    char m_pad[0x10];  // 数据区（ORIG ctor size 0x1a）
} __attribute__((packed));
class Packet_Reply_Load_Tower_Full_Rank : public PacketHeader
{
public:
    Packet_Reply_Load_Tower_Full_Rank();
    char m_pad[0x17b5];  // 数据区（ORIG ctor size 0x17bf）
} __attribute__((packed));
class Packet_Set_ARS_Info : public PacketHeader
{
public:
    Packet_Set_ARS_Info();
    char m_pad[0x4b5];  // 数据区（ORIG ctor size 0x4bf）
} __attribute__((packed));
class Packet_Result_Ontime_Event_Idx_Update : public PacketHeader
{
public:
    Packet_Result_Ontime_Event_Idx_Update();
    int m_fieldA;        // +0xa
    char m_pad[0x8];  // 数据区（ORIG ctor size 0x16）
} __attribute__((packed));
class CQueryCounter;
class CMonitorServer;
class CStatisticsServer;
class CTcpServer;
class CSignalTranslator;
class CSignal;
class CDnFTimer;
class CUnixTimer;
class CSystemTime;
class CSystemTimeHandler;
class CAppInit;
class CAppStartInit;
class CAppStopInit;
class CTableBase;
class CAppConfig;
class CServerConfig;
class CKillUSRConfig;
class CProtocol;
class CPacketDecoder;
class CPacketTracer;
class CSourceVersionMgr;
class CDNFProhibitUser;
struct ST_ServerInfo;

// ---- CAppLoadChecker（dbmw 布局：3 个 int 队列水位 + 3 个 byte 等级）----
class CAppLoadChecker
{
public:
    CAppLoadChecker();
    bool CheckTcpRecvQ(int size);
    bool CheckUdpRecvQ(int size);
    bool CheckTcpSendQ(int size);
    bool checkTcpRecvLoad(int size);
    bool checkUdpRecvLoad(int size);
    bool checkTcpSendLoad(int size);
    void setTcpRecvQueue(int size);
    void setUdpRecvQueue(int size);
    void setTcpSendQueue(int size);
    void RequestDB(CServerHandler* serverHandler, int flag, int size);
    int m_tcpRecvLast;   // +0
    int m_udpRecvLast;   // +4
    int m_tcpSendLast;   // +8
    char m_tcpRecvLevel; // +0xc
    char m_udpRecvLevel; // +0xd
    char m_tcpSendLevel; // +0xe
    char m_padF;         // +0xf
};

CAppLoadChecker* CAppLoadCheckerInstance();

// ---- CDNFException：std::exception + std::string ----
class CDNFException : public std::exception
{
public:
    CDNFException(const std::string& msg);
    virtual ~CDNFException() throw();
    virtual const char* what() const throw();
private:
    std::string m_msg;  // +4
};

typedef std::queue<CUdpRecvBuffer*, std::deque<CUdpRecvBuffer*, std::allocator<CUdpRecvBuffer*> > > UdpRecvQueue;
typedef std::queue<CTcpRecvBuffer*, std::deque<CTcpRecvBuffer*, std::allocator<CTcpRecvBuffer*> > > TcpRecvQueue;
typedef std::queue<CTcpSendBuffer*, std::deque<CTcpSendBuffer*, std::allocator<CTcpSendBuffer*> > > CTcpSendQueue;

enum ENUM_DB_HANDLE_IDX {
    DB_HANDLE_0 = 0, DB_HANDLE_1, DB_HANDLE_2, DB_HANDLE_3, DB_HANDLE_4,
    DB_HANDLE_5, DB_HANDLE_6, DB_HANDLE_7, DB_HANDLE_8, DB_HANDLE_9,
    DB_HANDLE_A, DB_HANDLE_B, DB_HANDLE_C, DB_HANDLE_D, DB_HANDLE_E,
    DB_HANDLE_F, DB_HANDLE_10
};
enum ENUM_DB_KIND { DB_KIND_0 = 0 };
enum ENUM_SERVER_GROUP { ENUM_SERVER_GROUP_0 = 0 };

struct STDBConnInfo
{
    STDBConnInfo();
    char m_host[0x11];      // +0
    char m_pad11[3];
    unsigned int m_port;    // +0x14
    char m_user[0x15];      // +0x18
    char m_pass[0x15];      // +0x2d
    char m_db[0x1f];        // +0x42
    char m_data[0x100];     // +0x61
    int m_tail;             // +0x164
};

// ---- CUdpRecvBuffer / CTcpRecvBuffer / CTcpSendBuffer / CPacketBuffer：0x1804 ----
class CUdpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

class CTcpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

class CTcpSendBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

class CPacketBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    char m_data[0x1804];
};

// ---- MemPool<T>：对象池（manager：free(ptr) 无条件入空闲链表）----
template<class T>
class MemPool
{
public:
    MemPool();
    MemPool(unsigned int count);
    ~MemPool();
    void* alloc();
    void free(void* ptr);
    void free(void* ptr, unsigned int size);
    static void* headOfFreeList_;
    int m_size;                     // +0
    int m_count;                    // +4
    std::vector<void*> m_blocks;    // +8
};

// ---- IQueue<T>：双队列切换 ----
template<class T>
class IQueue
{
public:
    IQueue() {}
    ~IQueue() {}
    static IQueue& Get();
    char InitQueue(T* recv, T* parse) { m_recv = recv; m_parse = parse; return 1; }
    T* GetParseQueue() { return m_parse; }
    char SwitchQueue();
    T* m_recv;   // +0
    T* m_parse;  // +4
};

// ---- CFrameCountHandler ----
class CFrameCountHandler
{
public:
    CFrameCountHandler();
    ~CFrameCountHandler();
    void InitFrameCountInfo(CApplication* app, unsigned int a, unsigned short b);
    void SaveProcess();
    void SaveProcess(int n);
    void* GetFrameCountInfo();
    char m_field0[4];   // +0
    unsigned int m_field4;   // +4
    unsigned int m_field8;   // +8
    unsigned int m_fieldC;   // +0xc
    int m_field10;      // +0x10
    unsigned int m_field14;  // +0x14
    unsigned int m_field18;  // +0x18
    char m_pad1C[4];    // +0x1c
    unsigned int m_field20;  // +0x20
    unsigned char m_field24; // +0x24
    unsigned char m_field25; // +0x25
    unsigned char m_field26; // +0x26
    char m_pad27;       // +0x27
    unsigned char m_field28; // +0x28
    char m_pad29[3];    // +0x29
    CApplication* m_app;  // +0x2c
};

// ---- CUdpHandler：0x10 ----
class CUdpHandler
{
public:
    CUdpHandler();
    ~CUdpHandler();
    unsigned int InetAddr(const char* ip) const;
    int InitServerSocket(int port);
    int InitClientSocket();
    char RecvFromClient(char* buf, int* size, unsigned int* addr, unsigned short* port) const;
    int SendToClient(char* buf, int len, unsigned short port, const char* ip,
                     unsigned int addr) const;
    int SendToServer(char* buf, int len, unsigned short port, const char* ip) const;
    char RecvFromServer(char* buf, int* size, unsigned int* addr, unsigned short* port) const;
    int GetServerSocket();
    int m_sock;         // +0
    int m_clientSock;   // +4
    char m_data8[8];    // +8
};

// ---- CSwapQueue<T,N>：0x58 ----
template<class T, int N>
class CSwapQueue
{
public:
    CSwapQueue() { Init(); }
    ~CSwapQueue() {}
    void Init() { m_recvIdx = 0; m_parseIdx = 1; }
    T* GetRecvQ() { return &m_queues[m_recvIdx]; }
    T* GetParseQ() { return &m_queues[m_parseIdx]; }
    void SwapQ();
    int m_recvIdx;   // +0
    int m_parseIdx;  // +4
    T m_queues[N];   // +8
};

// ---- CSystemTime：0x14 ----
class CSystemTime
{
public:
    CSystemTime();
    ~CSystemTime() {}
    int m_field4;       // +4
    struct timeval m_tv;  // +8
    int m_field10;      // +0x10
};

class CSystemTimeHandler : public CSystemTime
{
public:
    CSystemTimeHandler() {}
    ~CSystemTimeHandler() {}
};

CSystemTimeHandler* CSystemTimeHandlerInstance();

// ---- CDnFTimer：vtable@0（SetLastTime / GetTimeInterval 两个虚函数）----
class CDnFTimer
{
public:
    CDnFTimer();
    ~CDnFTimer() {}
    virtual void SetLastTime() {}
    virtual double GetTimeInterval() { return 0.0; }
};

// ---- CUnixTimer：+4 double ----
class CUnixTimer : public CDnFTimer
{
public:
    CUnixTimer();
    ~CUnixTimer() {}
    virtual void SetLastTime();
    virtual double GetTimeInterval();
    double GetNowTime();  // 非虚（原版无虚表槽）
    double m_lastTime;  // +4
};

// ---- CUserManager：0x1c ----
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    char InsertProhibitUser(unsigned int dbid, CDNFProhibitUser* pu);
    CDNFProhibitUser* FindProhibitUser(unsigned int dbid) const;
    char DeleteProhibitUser(unsigned int dbid);
    void ProcessByMinute();
    std::map<unsigned int, CDNFProhibitUser*> m_prohibitUsers;  // +0
    CApplication* m_app;  // +0x18
};

// ---- CDNFProhibitUser：0x14 ----
class CDNFProhibitUser
{
public:
    CDNFProhibitUser();
    ~CDNFProhibitUser();
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    unsigned int GetDBID();
    unsigned short GetProhibitRemainTime();
    unsigned char GetMonitorRetPacketCnt();
    char GetConnectFlag();
    void SetIpPort(unsigned int ip, unsigned short port);
    void GetIpPort(unsigned int& ip, unsigned short& port);
    void SetMonitorWaitTime(unsigned int dbid, short time);
    void SetProhibitUserInfo(char flag);
    void IncreMonitorRetPacket();
    char IsTimeOutWaitMonitor();
    unsigned int m_dbid;        // +0
    unsigned short m_remainTime;  // +4
    unsigned char m_retPacketCnt; // +6
    char m_pad7;                // +7
    unsigned int m_ip;          // +8
    unsigned short m_port;      // +0xc
    char m_connectFlag;         // +0xe
    char m_padF;                // +0xf
};

// ---- CTcpServer：0x10 ----
class CTcpServer
{
public:
    CTcpServer();
    ~CTcpServer();
    void Init(unsigned int sock, CTcpNetSystem* net);
    void SetServerType(unsigned char type);
    unsigned char GetServerType();
    void* GetSocket();
    char IsValidServer();
    void NotifyHeartbeat();
    char IsHeartbeatTimeOver();
    void SendToServer(char* buf);
    char* makePacketHeader(unsigned short type, unsigned short size);
    unsigned char m_index;  // +0
    char m_pad1[3];
    void* m_socket;     // +4
    CTcpNetSystem* m_net;  // +8
    time_t m_heartbeat; // +0xc
};

// ---- CTcpNetSystem：0x160 ----
class CTcpNetSystem
{
public:
    CTcpNetSystem();
    ~CTcpNetSystem();
    void Init(unsigned short port);
    int OpenTcpService(int& serverCount, const char* ip, unsigned short port);
    int WaitForEvent();
    void SendPacket();
    void CleanPeers();
    void CleanTcpSendPacketQ();
    void DeletePeer(CPeer* peer);
    CPeer* GetPeer(unsigned int idx);
    CPeer* CreatePeer();
    void InsertAcceptedPeer(CPeer* peer);
    void SetEpollConnectedPeer(CPeer* peer);
    void SetEpollAcceptedPeers();
    void PopDeleteTcpSendPacketQ(CTcpSendBuffer* buf);
    void PushTcpSendPacketQ(char* buf);
    CTcpSendBuffer* Acquire_TcpSendBuffer();
    unsigned short Get_TcpServerPort();
    CTcpHandler* Get_TcpHandler();
    CSwapQueue<TcpRecvQueue, 2>* Get_TcpSwapQPacket();
    void* Get_TcpRecvQPacket();
    CMutex* Get_TcpRecvQLock();
    CMutex* Get_TcpRecvBLock();
    CMutex* Get_TcpSendQLock();
    CMutex* Get_TcpSendBLock();
    CTcpSendQueue* Get_TcpSendQPacket();
    CTcpHandler* m_tcpHandler;      // +0
    void* m_field4;                 // +4
    CSwapQueue<TcpRecvQueue, 2> m_recvSwapQueue;  // +8
    CMutex m_mutex60;               // +0x60
    CMutex m_mutex78;               // +0x78
    CMutex m_mutex90;               // +0x90
    CMutex m_mutexA8;               // +0xa8
    CTcpSendQueue m_sendQueue;      // +0xc0
    CMutex m_mutexE8;               // +0xe8
    CMutex m_mutex100;              // +0x100
    CTcpAcceptThread* m_acceptThread;  // +0x118
    std::queue<CPeer*> m_peerQueue;    // +0x11c
    std::map<unsigned int, CPeer*> m_peerMap;  // +0x144
    unsigned short m_serverPort;    // +0x15c
    char m_pad[2];
};

// ---- CProtocol / EpollHandler / CTcpHandler ----
class CProtocol
{
public:
    CProtocol() {}
    virtual ~CProtocol() {}
    virtual int SetPeer(void* peer, int fd, bool flag) { return 0; }
    virtual void* GetEventPtr(int idx) { return 0; }
    virtual char IsSetInEvent(int idx) { return 0; }
    virtual int ResetEpoll(int fd) { return 0; }
    virtual char IsSetOutEvent(int idx) { return 0; }
    virtual int WaitForEvent() { return 0; }
    virtual char IsSetErrEvent(int idx) { return 0; }
};

class EpollHandler : public CProtocol
{
public:
    EpollHandler();
    virtual ~EpollHandler();
    virtual int ResetEpoll(int fd);
    virtual char IsSetOutEvent(int idx);
    virtual int WaitForEvent();
    virtual char IsSetErrEvent(int idx);
    virtual char IsSetInEvent(int idx);
    virtual void* GetEventPtr(int idx);
    virtual int SetPeer(void* peer, int fd, bool flag);
    int SetEpoll(void* peer, int fd, bool flag);
    int GetEpollFD();
    void* GetEpollEvents();
    void Destroy();
    int Init();
    int m_eventType;  // +4
    void* m_peer;     // +8
    char m_dataC[4];  // +0xc
    void* m_events;   // +0x10
    int m_epollFd;    // +0x14
    CMutex m_mutex;   // +0x18
};

class CTcpHandler
{
public:
    CTcpHandler();
    ~CTcpHandler();
    int WaitForEvent();
    int ResetEpoll(int flag);
    int SetPeer(void* peer, int fd, bool flag);
    void* GetEventPtr(int idx);
    char IsSetInEvent(int idx);
    char IsSetOutEvent(int idx);
    char IsSetErrEvent(int idx);
    EpollHandler* m_epoll;  // +0
};

// ---- TCPSocket：0x1c ----
class TCPSocket
{
public:
    TCPSocket();
    virtual ~TCPSocket();
    char open();
    char connect(const char* ip, unsigned short port);
    char setOptNonBlock();
    char bind(unsigned short port, bool flag);
    char listen(int backlog);
    char pollReadEvent() const;
    char pollWriteEvent() const;
    char pollErrorEvent() const;
    int pollReadWriteErrEvent() const;
    char accept(TCPSocket& sock);
    int getHandle() const;
    int send(char* buf, int len);
    int recv(char* buf, int len);
    void close();
    int shutdown(int how);
    char* getPeerIP();
    char setOptResizeSendBuf(int size);
    char setOptResizeRecvBuf(int size);
    char setOptReuseAdrs(bool flag);
    char setOptLinger(bool flag);
    char* getPeerAdrs();
    unsigned short getPeerPort();
    int m_fd;       // +0
    char m_data4[0x10];  // +4
    struct sockaddr_in m_addr;  // +0x14
    unsigned short m_port;  // +0x18
    char m_pad1A[2];
};

// ---- CPeer：TCPSocket + 0x181c ----
class CPeer : public TCPSocket
{
public:
    CPeer();
    ~CPeer();
    static void* operator new(unsigned int size);
    static void operator delete(void* ptr);
    static void operator delete(void* ptr, unsigned int size);
    TCPSocket* GetTcpSocket();
    int get_remain_sendlen();
    int recv_packet();
    int send_packet();
    int send_packet(char* buf, int len);
    void InitPeer(TcpRecvQueue* recvQ, CMutex* qLock, CMutex* bLock);
    int parsing(int len);
    void ConnSig();
    void DisConnSig();
    char RecvPacket();
    char* m_sendBuf;        // +0x181c
    int m_recvLen;          // +0x1820
    int m_sendLen;          // +0x1824
    TcpRecvQueue* m_recvQ;  // +0x1828
    CMutex* m_sendBLock;    // +0x182c
    CMutex* m_sendQLock;    // +0x1830
    int m_remainSendLen;    // +0x1834
    char* m_recvBuf;        // +0x1838
    char m_data183c[0x96004];  // +0x183c（sizeof(CPeer)=0x97840，与 MemPool 池大小一致）
};

// ---- CThreadInterface ----
class CThreadInterface
{
public:
    CThreadInterface();
    virtual ~CThreadInterface();
    virtual char begin();
    virtual void* dispatch_proxy(void* param);
    virtual void* dispatch(void* param) = 0;
    virtual void stop();
    virtual void join();
    pthread_t m_thread;  // +4
    char m_stop;         // +8
};

// ---- CTcpNetworkThread：0x30 ----
class CTcpNetworkThread : public CThreadInterface
{
public:
    CTcpNetworkThread();
    ~CTcpNetworkThread();
    void attach(CTcpNetSystem* net);
    void* dispatch(void* param);
    CTcpNetSystem* m_net;   // +0xc
    void* m_recvQ;          // +0x10
    CTcpHandler* m_handler; // +0x14
    CMutex* m_recvQLock;    // +0x18
    CMutex* m_recvBLock;    // +0x1c
    void* m_sendQ;          // +0x20
    CMutex* m_sendQLock;    // +0x24
    CMutex* m_sendBLock;    // +0x28
    char m_runningFlag;     // +0x2c
};

// ---- CTcpAcceptThread：0x38 ----
class CTcpAcceptThread : public CThreadInterface
{
public:
    CTcpAcceptThread();
    ~CTcpAcceptThread();
    void attach(CTcpNetSystem* net);
    void* dispatch(void* param);
    CTcpNetSystem* m_net;   // +0xc
    CMutex* m_recvQLock;    // +0x10
    CMutex* m_recvBLock;    // +0x14
    TCPSocket m_sock;       // +0x18
    unsigned short m_port;  // +0x34
};

// ---- CUdpNetworkThread：0x30 ----
class CUdpNetworkThread : public CThreadInterface
{
public:
    CUdpNetworkThread();
    ~CUdpNetworkThread();
    void attach(CApplication* app);
    void* dispatch(void* param);
    void SetUDPQueue(UdpRecvQueue* q);
    UdpRecvQueue* m_udpQueue;   // +0xc
    void* m_udpHandler;         // +0x10
    CMutex* m_udpQLock;         // +0x14
    CMutex* m_udpBLock;         // +0x18
};

// ---- CNetworkThread（dbmw 网络线程，布局同 CUdpNetworkThread）----
class CNetworkThread : public CThreadInterface
{
public:
    CNetworkThread();
    ~CNetworkThread();
    void attach(CApplication* app);
    void* dispatch(void* param);
    void SetUDPQueue(UdpRecvQueue* q);
    UdpRecvQueue* m_udpQueue;   // +0xc
    void* m_udpHandler;         // +0x10
    CMutex* m_udpQLock;         // +0x14
    CMutex* m_udpBLock;         // +0x18
};

struct STGuildRankInfo
{
    STGuildRankInfo();
    int m_field0;    // +0
    int m_field4;    // +4
    int m_field8;    // +8（rank）
};

struct STGuildWarRankInfo
{
    STGuildWarRankInfo();
    unsigned int m_field0;  // +0（guild_id）
    unsigned int m_field4;  // +4（guild_war_point，pair.first）
    unsigned int m_field8;  // +8（guild_point_prev）
    char m_name[0x17];      // +0xc（guild_name）
    unsigned int m_field24; // +0x24
};

struct CPairDataCompare
{
    bool operator()(const std::pair<unsigned int, STGuildRankInfo*>& a,
                    const std::pair<unsigned int, STGuildRankInfo*>& b) const;
    bool keyLess(const unsigned int& a, const unsigned int& b) const;
};

struct CPairDataGuildWarCompare
{
    bool operator()(const std::pair<unsigned int, STGuildWarRankInfo*>& a,
                    const std::pair<unsigned int, STGuildWarRankInfo*>& b) const;
    bool keyLess(const unsigned int& a, const unsigned int& b) const;
};
struct STGuildMemberProxy
{
    STGuildMemberProxy();
    int m_no;               // +0
    char m_name[0x1e];      // +4
    unsigned char m_field22;   // +0x22
    unsigned char m_field23;   // +0x23
    unsigned short m_field24;  // +0x24
    unsigned char m_field26;   // +0x26
    unsigned char m_field27;   // +0x27
    int m_field28;          // +0x28
    char m_data2c[0x15];    // +0x2c
} __attribute__((packed));
struct ST_Guild_War_Info;

struct STGuildJoinInfo
{
    unsigned char m_serverId;  // +0
    char m_pad1[3];
    int m_guildId;             // +0x4
    unsigned int m_id;         // +0x8
    unsigned int m_fieldC;     // +0xc
    int m_characNo;            // +0x10
    char m_characName[0x1e];   // +0x14
    unsigned char m_lev;       // +0x32
    unsigned char m_growType;  // +0x33
    unsigned char m_job;       // +0x34
    unsigned char m_sex;       // +0x35
    char m_bornYear[0x14];     // +0x36
};

// ---- 随机选项/升级分离/预留容量/限量 NPC（包统计数据小结构）----
struct RandomOptionSeed
{
    void reset();
    char m_data[1];
};
struct RandomOptionField
{
    void reset();
    char m_data[3];
};
struct RandomOption
{
    void reset();
    RandomOptionField m_field0;  // +0（3）
    RandomOptionField m_field1;  // +3
    RandomOptionField m_field2;  // +6
    RandomOptionSeed m_seed0;    // +9
    RandomOptionField m_field3;  // +0xa
    RandomOptionSeed m_seed1;    // +0xd
};
struct UpgradeSeparateInfo
{
    UpgradeSeparateInfo();
    void reset();
    unsigned char GetUpgradeSeparate() const;
    char m_data[1];
};
struct ReservedCapacity
{
    ReservedCapacity();
    void reset();
    char m_data[0xc];
};
struct NpcBuyLimitItem
{
    NpcBuyLimitItem();
    void clear();
    char m_data[0xc];
};
struct STGuildAgitDBInfo
{
    STGuildAgitDBInfo();
    char m_data[0x89];
};
struct DnfItemInfo
{
    DnfItemInfo();
    void reset();
    char m_data[0x35];
};
struct STGuildMemberCharacData
{
    STGuildMemberCharacData();
    char m_data[0x21];
};
struct STBlackUserDBType
{
    STBlackUserDBType();
    char m_data[0x28];
};
struct STGuildBoardDBInfo
{
    STGuildBoardDBInfo();
    char m_data[0xa5];
};
struct STGuildCargoDBInfo
{
    STGuildCargoDBInfo();
    char m_data[0x18dc];
};
struct STGuildMemerDBInfo
{
    STGuildMemerDBInfo();
    char m_data[0x1a];
};
struct STTodayGuildMember
{
    ~STTodayGuildMember();
    unsigned int m_field0;   // +0（charac_no）
    char m_name[0x1e];       // +4（charac_name，get_str 0x1d）
    unsigned char m_field22; // +0x22（grade）
    unsigned char m_field23; // +0x23（job）
    unsigned char m_field24; // +0x24（grow_type）
    unsigned char m_field25; // +0x25（sex）
    unsigned char m_field26; // +0x26（lev）
};
struct STBuddyDBInfo
{
    char m_name[0x1e];        // +0
    short m_lev;              // +0x1e
    char m_job;               // +0x20
    char m_growType;          // +0x21
    unsigned int m_characNo;  // +0x22
    char m_sex;               // +0x26
};
struct st_ip_counter_list
{
    ~st_ip_counter_list();
    void CopyStruct(const st_ip_counter_list& other);
    unsigned short m_field0;  // +0（hack_type）
    unsigned short m_field2;  // +2（hack_sub_type）
    char m_data[0xc];         // +4（c_class_ip）
    unsigned int m_field10;   // +0x10（cnt）
};
struct st_full_ip_counter_list
{
    ~st_full_ip_counter_list();
    void CopyStruct(const st_full_ip_counter_list& other);
    unsigned short m_field0;  // +0（hack_type）
    unsigned short m_field2;  // +2（hack_sub_type）
    char m_data[0x10];        // +4（full_ip）
    unsigned int m_field14;   // +0x14（cnt）
};
struct stTowerRank_t
{
    ~stTowerRank_t();
    unsigned int m_characNo;     // +0
    unsigned short m_towerIndex; // +4
    unsigned short m_rank;       // +6
    char m_partType;             // +8
    char m_memberInfo[0x5c];     // +9（len = rank*0x17）
};
struct st_ars_info_list
{
    ~st_ars_info_list();
    void CopyStruct(const st_ars_info_list& other);
    unsigned short m_field0;  // +0（hack_type）
    unsigned short m_field2;  // +2（cnt）
    unsigned short m_field4;  // +4（etc）
    unsigned short m_field6;  // +6（hack_sub_type）
    unsigned char m_field8;   // +8（hack_sub_cnt）
    unsigned char m_field9;   // +9（apply_flag）
    unsigned short m_fieldA;  // +0xa（ip_cnt）
};

int getNotiPacketNameCount();
int getCmdPacketNameCount();

struct STGuildDBInfoOnly
{
    STGuildDBInfoOnly();
    char m_guildName[0x17];       // +0
    int m_masterNo;               // +0x17
    unsigned char m_lev;          // +0x1b
    unsigned short m_ability;     // +0x1c（bit 标志）
    char m_pad1E[4];              // +0x1e..0x21
    unsigned short m_memberCount; // +0x22
    int m_guildPoint;             // +0x24
    unsigned char m_guildRank;    // +0x28
    int m_guildExp;               // +0x29
    char m_pad2D[0x18];           // +0x2d..0x44
    char m_skills[0x50];          // +0x45..0x94（15×STGuildSkill(5B)+5B）
    unsigned char m_powerSide;    // +0x95
    int m_powerSecedeTime;        // +0x96
    int m_powerWarPoint;          // +0x9a
    unsigned char m_guildAgitFlag; // +0x9e
    unsigned char m_powerJoinCount; // +0x9f
    int m_guildFund;              // +0xa0
    char m_masterName[0x15];      // +0xa4
    int m_fieldB9;                // +0xb9
} __attribute__((packed));

struct STGuildSkill
{
    STGuildSkill();
    int m_field0;    // +0（默认 0xffffffff）
    char m_field4;   // +4（默认 0xff）
} __attribute__((packed));
struct STGuildMemberProxy;

// ---- CGuildManager：0x4c44（+0 rankList vector / +0xc warRankList vector /
//      +0x18 0x12c×0x41 STGuildMemberProxy）----
class CGuildManager
{
public:
    CGuildManager();
    ~CGuildManager();
    void clear();
    void clearGuildWar();
    std::vector<std::pair<unsigned int, STGuildWarRankInfo*> >* GetVtGuildWarRankInfo();
    STGuildMemberProxy* GetArrayTempGuildMemberList();
    STGuildWarRankInfo* GetFirstRankGuild();
    void insertGuildWar(STGuildWarRankInfo* info);
    unsigned int getFirstGuildOfGuildWar();
    char InitGuildWarPointList();
    char rank();
    char rankGuildWar();
    void insert(STGuildRankInfo* info);
    std::vector<std::pair<unsigned int, STGuildRankInfo*> >* GetVtGuildRankInfo();
    void printGuildWarRank();
    void GetGuildWarEnterableRank(ST_Guild_War_Info* info);
    std::vector<std::pair<unsigned int, STGuildRankInfo*> > m_rankList;   // +0
    std::vector<std::pair<unsigned int, STGuildWarRankInfo*> > m_warRankList; // +0xc
    STGuildMemberProxy m_members[0x12c];  // +0x18（0x12c×0x41 = 0x4c2c，至 0x4c44）
};

// ---- WongWork::CGMAccounts：std::list<stGMInfo_t>（8 字节）----
namespace WongWork
{
class CGMAccounts
{
public:
    struct stGMInfo_t
    {
        bool operator==(const stGMInfo_t& other) const;
        int m_field0;  // +0
        int m_field1;  // +4
    };
    CGMAccounts();
    ~CGMAccounts();
    int loadGMAccounts(char const* path);
    unsigned int isGM(unsigned int id);
    stGMInfo_t getGMInfo(unsigned int id) const;
    int appendGM(unsigned int id, unsigned int flag);
    int removeGM(unsigned int id, unsigned int flag);
    void clearGmList();
    void LoadGmList(unsigned int idx, int flag);
    void AppendGM_Sys(unsigned int id, char flag);
    std::list<stGMInfo_t> m_list;  // +0
};
}

// ---- CSHA：SHA-256（sm_K256 0x0819e660 / sm_H256 0x0819e760）----
class CSHA
{
public:
    CSHA();
    int AddData(char const* data, int len);
    void Reset();
    int FinalDigest(char* digest);
    void Transform();
    unsigned int CH(unsigned int x, unsigned int y, unsigned int z);
    unsigned int MAJ(unsigned int x, unsigned int y, unsigned int z);
    unsigned int SIG0(unsigned int x);
    unsigned int SIG1(unsigned int x);
    unsigned int sig0(unsigned int x);
    unsigned int sig1(unsigned int x);
    void Bytes2Word(unsigned char const* src, unsigned int& dst);
    void Word2Bytes(unsigned int const& src, unsigned char* dst);
    unsigned int m_H[8];        // +0
    unsigned int m_lengthLo;    // +0x20
    unsigned int m_lengthHi;    // +0x24
    unsigned char m_block[0x40]; // +0x28
    unsigned char m_finalized;  // +0x68
    static const unsigned int sm_K256[64];
    static const unsigned int sm_H256[8];
};

// ---- IMethod：加密基类（+0x4 initialized / +0x8 blockSize / +0xc keyLength /
//      +0x10 mode / +0x14 padding）----
class IMethod
{
public:
    IMethod();
    virtual ~IMethod();
    int Xor(char* a, char const* b);
    int SetMode(int mode);
    int SetPadding(int padding);
    int GetKeyLength(unsigned int* out);
    int GetBlockSize(unsigned int* out);
    int GetMode(unsigned int* out);
    int GetPadding(unsigned int* out);
    int Pad(char* data, int len, unsigned int* out);
    void BytesToWord(unsigned char const* src, unsigned int& dst);
    void WordToBytes(unsigned int src, unsigned char* dst);
    char m_initialized;   // +4
    char m_pad5[3];
    int m_blockSize;      // +8
    int m_keyLength;      // +0xc
    int m_mode;           // +0x10
    int m_padding;        // +0x14
};

// ---- CTEA：TEA 加密（+0x18 K[4] / +0x28 iv[4]（轮密钥）/ +0x38 chain /
//      +0x40 chain2）----
class CTEA : public IMethod
{
public:
    CTEA();
    virtual ~CTEA();
    int Initialize(char const* key, int keyLen, char const* iv, int ivLen, int mode);
    int ResetChain();
    int EncryptBlock(unsigned char const* src, unsigned char* dst);
    int DecryptBlock(unsigned char const* src, unsigned char* dst);
    int Encrypt(char const* src, char* dst, unsigned int len);
    int Decrypt(char const* src, char* dst, unsigned int len);
    int Signature(char* digest);
    unsigned char m_key[0x10];  // +0x18
    unsigned char m_iv[0x10];   // +0x28（轮密钥）
    unsigned char m_chain[8];   // +0x38
    unsigned char m_chain2[8];  // +0x40
};

// ---- CDBHandle / CMySql / CDBManager ----
class CDBHandle
{
public:
    CDBHandle();
    virtual ~CDBHandle();
    // dbmw 虚表顺序（vptr+0x08 起，共 31 个虚函数）
    virtual char init() { return 0; }
    virtual char open(const char* host, const char* user, const char* pass, const char* db) { return 0; }
    virtual char open(const char* host, unsigned int port, const char* user, const char* pass, const char* db) { return 0; }
    virtual void close() {}
    virtual char ping() { return 0; }
    virtual int set_query(unsigned int q, char* fmt, ...) { return 0; }
    virtual int exec(unsigned int q) { return 0; }
    virtual int fetch() { return 0; }
    virtual char* blob_to_str(int col, void* buf, int len) { return 0; }
    virtual int get_str(int col, char* buf, int len) { return 0; }
    virtual int get_binary(int col, void* buf, int len) { return 0; }
    virtual int get_int(int col, int& v) { return 0; }
    virtual int get_uint(int col, unsigned int& v) { return 0; }
    virtual int get_short(int col, int& v) { return 0; }
    virtual int get_short(int col, short& v) { return 0; }
    virtual int get_ushort(int col, int& v) { return 0; }
    virtual int get_ushort(int col, unsigned short& v) { return 0; }
    virtual int get_byte(int col, int& v) { return 0; }
    virtual int get_byte(int col, char& v) { return 0; }
    virtual int get_ubyte(int col, int& v) { return 0; }
    virtual int get_ubyte(int col, unsigned char& v) { return 0; }
    virtual int get_int(int col, unsigned int& v) { return 0; }
    virtual int get_int(int col, unsigned long long& v) { return 0; }
    virtual int get_uint(int col, unsigned long long& v) { return 0; }
    virtual int get_n_fields() { return 0; }
    virtual int get_n_rows() { return 0; }
    virtual void clear_result_set() {}
    virtual int getAffectedRowCount() { return 0; }
    virtual char* escape_string(char* dst, char const* src) { return 0; }
    virtual const char* get_quest_str() const { return 0; }
    // 以下为原版非虚成员
    char init_db_handle();
    char set_compress_option();
    char set_read_default_grp_option();
    char is_valid_col(int col);
    int exec_query();
};

class CMySql : public CDBHandle
{
public:
    CMySql();
    virtual ~CMySql();
    virtual char init();
    char open(const char* host, const char* user, const char* pass, const char* db);
    char open(const char* host, unsigned int port, const char* user, const char* pass, const char* db);
    void close();
    char init_db_handle();  // 非虚
    int exec_query();       // 非虚
    int set_query(unsigned int q, char* fmt, ...);
    int exec(unsigned int q);
    int fetch();
    void clear_result_set();
    char* blob_to_str(int col, void* buf, int len);
    int get_str(int col, char* buf, int len);
    int get_binary(int col, void* buf, int len);
    int get_int(int col, int& v);
    int get_uint(int col, unsigned int& v);
    int get_short(int col, int& v);
    int get_short(int col, short& v);
    int get_ushort(int col, int& v);
    int get_ushort(int col, unsigned short& v);
    int get_byte(int col, int& v);
    int get_byte(int col, char& v);
    int get_ubyte(int col, int& v);
    int get_ubyte(int col, unsigned char& v);
    int get_int(int col, unsigned int& v);
    int get_int(int col, unsigned long long& v);
    int get_uint(int col, unsigned long long& v);
    const char* get_quest_str() const;  // 虚（虚表 vptr+0x7c，返回 m_query）
    int get_n_rows();   // 虚（虚表 vptr+0x5c）
    int get_n_fields(); // 虚（虚表 vptr+0x58）
    int getAffectedRowCount();
    char* escape_string(char* dst, char const* src);
    int get_ulonglong(int col, unsigned long long& v);
    char is_valid_col(int col); // 非虚
    char set_compress_option(); // 非虚
    char set_read_default_grp_option(); // 非虚
    char set_charset_name_option(); // 非虚
    char set_reconnect_option();    // 非虚
    char ping();        // 虚（虚表 vptr+0x14）
    // dbmw 布局（init/open/exec_query 反推）
    MYSQL* m_mysql;   // +4
    MYSQL_RES* m_result;  // +8
    MYSQL_ROW m_row;      // +0xc
    unsigned long* m_lengths;  // +0x10
    int m_nRows;      // +0x14
    int m_nFields;    // +0x18
    char m_host[0x10];  // +0x1c
    char m_pass[0x14];  // +0x2c
    char m_db[0x14];    // +0x40
    char m_user[0x1e];  // +0x54
    unsigned int m_port;  // +0x74
    char m_query[0x6001];  // +0x78（memset 0x6001）
    unsigned int m_queryLen;  // +0x42084
    unsigned int m_lastErrno; // +0x42088
};

class CDBManager
{
public:
    CDBManager();
    ~CDBManager();
    char Open(ENUM_DB_HANDLE_IDX idx, const char* host, unsigned int port,
              const char* user, const char* pass, const char* db);
    void Init(ENUM_DB_KIND kind, CApplication* app);
    void Close();
    CDBHandle* GetDBHandle(ENUM_DB_HANDLE_IDX idx);
    char UpdateQueryCount(unsigned int idx, int count, int time);
    char SelectTest();
    char QueryGuildWarPointList(int guildWarPoint, CGuildManager* gm);
    char AwardGuildTitleByMail(int guildId, unsigned int characNo, unsigned int itemId,
                               char* guildName, unsigned int item);
    char RegisterToBlackList(unsigned int m_id, unsigned int characNo, char* characName);
    char GuildSecede(Packet_DB_Request_Guild_Secede* req, unsigned int& characNo,
                     unsigned int& m_id, unsigned int& result);
    char QueryGuildCreate(Packet_DBMW_Request_Guild_Create* req,
                          unsigned int& guildId, unsigned int& result);
    char QueryMember(unsigned int characNo, Packet_DB_Reply_Query_Member& reply);
    int FindCharProxyInArray(ST_MemberProxy* proxies, unsigned int characNo,
                             unsigned char maxIdx);
    char QueryGuildMemberProxy(unsigned int guildId, unsigned int characNo,
                               STGuildMemberProxy& proxy);
    char QueryGuildAllMembersProxy(unsigned int guildId, STGuildMemberProxy* proxies,
                                   unsigned short& count);
    char GuildJoin(STGuildJoinInfo* info, unsigned int& result);
    char SaveMemberInsert(unsigned int masterNo, unsigned int characNo,
                          unsigned char type);
    char SaveMemberDelete(unsigned int characNo, unsigned int masterNo,
                          unsigned char type);
    char OnGuildJoinByListApprove(unsigned int guildId, char serverId,
                                  unsigned int m_id, unsigned int characNo,
                                  STGuildJoinInfo& joinInfo, unsigned int& result);
    char QueryPartyStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party* packet);
    char QueryPartyJobStatisticCreate(Packet_DBMW_Dungeon_Statistic_Party_Job* packet);
    char QueryPartyCharacStatisticCreate(
        Packet_DBMW_Dungeon_Statistic_Party_Charac* packet);
    char SaveGuildInfo(unsigned char serverGroup, unsigned int guildId,
                       STGuildDBInfoOnly& info);
    char onItemLimitEditionLoadData(
        const Packet_Item_Limit_Edition_Load_Data_Req* req,
        Packet_Item_Limit_Edition_Load_Data_Rpy* rpy);
    char onItemLimitEditionUpdateData(
        const Packet_Item_Limit_Edition_Update* packet);
    char SaveServerQueueLoadStatistic(unsigned char type, int kind, int qCnt);
    char UpdateGuildWarPointList(int serverId, int rank);
    char UpdateResetGuildPoint(int serverId);
    char UpdateAccumulateGuildPoint(int serverId);
    char QueryGuild(unsigned char serverGroup, unsigned int guildId,
                    Packet_DB_Reply_Query_Guild& reply);
    char ChangeCharName(Packet_DBMW_Change_Char_Name* packet);
    char ChangePvPBuddyName(Packet_DBMW_Change_Char_Name* packet);
    char DeleteJoinListByInvite(unsigned int guildId, unsigned int characNo);
    char OnUpgradeGuildCargo(Packet_DB_Guild_Cargo_Upgrade* packet);
    char OnUpdateGuildCargo(Packet_DB_Update_Guild_Cargo* packet);
    char OnStatisticNumOfOccupations(Packet_DBMW_Statistic_Login_Logout* packet);
    char OnStatisticLoginLogout(Packet_DBMW_Statistic_Login_Logout* packet);
    char QueryOnTimeEventIdx(Packet_Result_OnTimeEvent_Idx& rpy);
    char QueryReloadSpecDb(Packet_Frame_Lag_Statistic_Reload_Spec* req,
                           CStatisticsServer* stats);
    char InsertFrameLagStatistics(
        Packet_Frame_Lag_Statistic_Write_Lag_Index* packet,
        CStatisticsServer* stats);
    char QueryFirstLoadSpecDb(Packet_Frame_Lag_Statistic_Load_Spec* req,
                              CStatisticsServer* stats);
    char QueryTodayGuildMember(unsigned int guildId,
                               Packet_Reply_Today_Guild_Member& reply);
    char QueryHWspecCreate(Packet_DBMW_Save_Client_Spec_Statistic* packet);
    char OnLoadGuildCargoHistory(unsigned int guildId,
                                 Packet_Guild_Load_Guild_Cargo_History& reply);
    char DeleteToBlackList(unsigned int m_id, unsigned int characNo);
    char OnLoadGuildBoard(int guildId, int& count, STGuildBoardDBInfo* boards);
    char selectCollectItems(unsigned char serverInfo, int& curCount,
                            int& totalCount, unsigned int& changeFlag,
                            unsigned char& fullTime);
    char updateNexonPinPcRoomPlayTimeEvent(unsigned char serverInfo,
                                          unsigned int m_id,
                                          unsigned int& pinNo, char* nexonPin,
                                          unsigned int len);
    char OnSaveAssertManagerInfoWrite(
        Packet_DBMW_Assert_Manager_Info_Write_Query* packet);
    char QueryCubeStatisticCreate(Packet_DBMW_Cube_Statistic* packet);
    char SaveUnchangableGuildInfo(Packet_UnChangable_GuildInfo_Save* packet);
    char InsertLetter(unsigned int characNo, unsigned int sendCharacNo,
                      const char* subject, const char* content, int& letterNo,
                      long expiry);
    char AddBuddy(unsigned int characNo, char* name, STBuddyDBInfo& info,
                  int& result);
    char QueryIPCounter(unsigned char serverGroup,
                        std::vector<st_ip_counter_list>& ipList,
                        std::vector<st_full_ip_counter_list>& fullIpList);
    char QueryDeathTowerPlayDataJobStatisticCreate(
        Packet_DBMW_DeathTower_Statistic_Playdata_Job* packet);
    char QueryDeathTowerValueStatisticCreate(
        Packet_DBMW_DeathTower_Statistic_Value* packet);
    char queryTowerFullRank(unsigned int towerIndex,
                            std::vector<stTowerRank_t>& ranks,
                            unsigned int limit);
    char UpdateDisjointAvatarStatistic(
        Packet_Avater_Disjoint_Statistic_DB* packet);
    char QueryDeathTowerPlayDataPartyStatisticCreate(
        Packet_DBMW_DeathTower_Statistic_Playdata_Party* packet);
    char AwardGuildCoinByMail(int guildId, unsigned int serverGroup,
                              unsigned int itemId, unsigned int endurance,
                              int addInfo, int upgrade,
                              std::vector<int>& characNos);
    char SendGuildCoinByMail(int guildId, unsigned int serverGroup,
                             unsigned int itemId, unsigned int endurance,
                             int addInfo, char* subject, char* content);
    char InsertPostal(unsigned int receiveCharacNo, unsigned int sendCharacNo,
                      int sealFlag, unsigned int itemId, int addInfo,
                      unsigned int endurance, int upgrade, char* name,
                      long occTime, int letterId);
    char QueryLoadARSInfo(std::vector<st_ars_info_list>& arsList);
    char QuerySubGuildMaster(unsigned char serverGroup, unsigned int guildId,
                             Packet_DB_Reply_Query_Guild& reply);
    char QueryGuildNotiMessage(unsigned char serverGroup, unsigned int guildId,
                               Packet_DB_Reply_Query_Guild& reply);
    char QueryGuildSkill(unsigned char serverGroup, unsigned int guildId,
                         Packet_DB_Reply_Query_Guild& reply);
    char QueryOnTimeEventIdxUpdate(Packet_Req_Ontime_Event_Idx_Update* packet);
    char QueryOnTimeEventItem(Packet_Result_Ontime_Event_Item& reply);
    char QueryBuddyInfo(unsigned int characNo, STBuddyDBInfo* buddies,
                        unsigned char& count);
    char GetCoinEventPerDay(int serverId, int add, int& out1, int& out2);
    char QueryCharacNoByName(char* name, unsigned int& characNo, int* result);
    char updateCompatibilityIndex(Packet_Stat_Compatibility_Index* packet);
    char OnSecretShopStatistic(Packet_Secret_Shop_Statistic* packet);
    char loadLimitNpcBuyItemInfo(LimitNpcBuyItemRequestInfo* req,
                                 LimitNpcBuyItemResultInfo* result);
    char updateLimitNpcBuyItemInfo(LimitNpcBuyItemUpdate* update);
    char QueryGuildMemberGradeByName(unsigned char serverId,
                                     unsigned int guildId, char* name,
                                     unsigned char& grade,
                                     unsigned int& m_id,
                                     unsigned int& result);
    char ChangeGuildMemberGrade(unsigned char serverId,
                                unsigned int guildId,
                                unsigned char grade, char* name);
    char ChangeGuildMemberGrade(unsigned char serverId,
                                unsigned int guildId,
                                unsigned char grade,
                                unsigned int characNo);
    char ChangeGuildNotifyMessage(int guildId, unsigned int m_id, char* msg);
    char GuildMasterDelegate(int serverId, unsigned int guildId,
                             unsigned int oldMasterNo,
                             unsigned int newMasterMId,
                             unsigned int newMasterNo, char* newMasterName);
    char SendGuildLetter(int serverId, unsigned int guildId, char* msg);
    char OnWriteGuildBoard(
        Packet_DB_Load_Request_Guild_Board_Write* req,
        STGuildBoardDBInfo* info);
    char OnWriteWebGuildBoard(
        Packet_DB_Load_Request_Web_Guild_Board_Write* req,
        STGuildBoardDBInfo* info);
    char OnDeleteGuildBoard(unsigned int no);
    char OnLoadGuildAgit(Packet_DB_Load_Guild_Agit* req,
                         Packet_Guild_Load_Guild_Agit& reply);
    char OnLoadGuildCargo(unsigned int guildId,
                          Packet_Guild_Load_Guild_Cargo& reply);
    char OnCreateGuildAgit(Packet_DB_Create_Guild_Agit* req,
                           Packet_DB_Create_Guild_Agit_Reply& reply);
    char OnDeleteGuildAgit(Packet_DB_Delete_Guild_Agit* req,
                           Packet_DB_Delete_Guild_Agit_Reply& reply);
    char OnUpgradeGuildAgit(Packet_DB_Upgrade_Guild_Agit* req,
                            Packet_DB_Upgrade_Guild_Agit_Reply& reply);
    char OnInsertGuildCargoHistory(
        Packet_DB_Insert_Guild_Cargo_History* req);
    char DeleteToBlackListOnly(unsigned int m_id, char* name);
    char QueryBlackList(unsigned int m_id, STBlackUserDBType* list);
    char SaveGuildSkill(unsigned char serverGroup, unsigned int guildId,
                        STGuildDBInfoOnly& info);
    char SaveGuildMember(unsigned char serverGroup, unsigned int guildId,
                         STGuildMemerDBInfo& info, unsigned int flag,
                         unsigned char type);
    char SaveGuildWarPointList(int serverId, unsigned int* guildIds,
                               unsigned int* points);
    char OnSavePowerWarBonusPoint(
        Packet_DB_Save_Power_War_Bonus_Point* packet);
    char SavePowerWarPoint(Packet_DB_Save_Power_War_Point* packet);
    char OnSavePowerWarStatueRanker(
        Packet_DB_Save_Power_War_Statue_Ranker* packet);
    char OnSavePowerWarPointReward(
        Packet_DB_Save_Power_War_Point_Reward* packet);
    char InsertMail(unsigned int characNo, char* subject, char* content,
                    unsigned int hE, unsigned int h12, int h16, int h17);
    char OnLoadPeriodicMessage(
        Packet_Load_Periodic_Message* req,
        Packet_Result_Loading_Periodic_Message* reply);
    char QueryGuildMember(unsigned char serverId, unsigned int guildId,
                          Packet_DB_Reply_Query_Guild_Member& reply);
    char OnSavePowerWarUserRank(
        Packet_DB_Save_Power_War_User_Rank* packet);
    char OnSavePowerWarGuildRank(
        Packet_DB_Save_Power_War_Guild_Rank* packet);
    char InsertUdpCharacteristic(Packet_Udp_Characteristic* packet);
    char DelBuddy(unsigned int m_id, unsigned int characNo);
    char insertServerGameEvent(Packet_StartGameEventFromServer* packet);
    char updateServerGameEvent(Packet_StopGameEventFromServer* packet);
    char UpdateGuildRank(int serverId, CGuildManager* gm);
    char QueryGuildPointList(int serverId, CGuildManager* gm);
    char QueryP2PStatistics(Packet_P2P_Statistics* packet);
    char OnGoldcardEventStatistic(
        Packet_Goldcard_Event_Statistic_STD* packet);
    char QueryUpdateChannelOccNum(Packet_User_Count_Statistic* packet);
    char OnMemberDeleteAsCharDelete(unsigned int characNo);
    char UpdateMemberKeyInCharacInfo(unsigned char serverId,
                                     unsigned int guildId);
    char QueryGuildBooting(Packet_DB_Query_Reply_On_Guild_Booting& reply,
                           int serverId);
    char QueryHellPartyStatisticItemCreate(
        Packet_DBMW_HellParty_Statistic_Item* packet);
    char OnSavePacketOverflowWrite(
        Packet_DBMW_Packet_Overflow_Statistic* packet);
    char QueryErrorLineStatisticCreate(
        Packet_DBMW_Save_Error_Line_Statistic* packet);
    char QueryTowerOfDespairStatistic(
        Packet_TowerOfDespair_Statistic_STD* packet);
    char GetVillageAttackedRank(Packet_DB_VillageAttackedRank* packet,
                                bool& flag, int& a, int& b);
    int GetMinTimeServerGroup(int serverId);
    int GetMaxHuntingPointServerGroup(int serverId);
    char updateCollectItems(unsigned char a, int b, unsigned int c,
                            unsigned char d);
    char updateCollectItemsGm(unsigned char a, int b, int c, unsigned int d);
    char insertHolePunchingResult(
        Packet_GameServer2Statisctics2DBServer* packet);
    char UpdateRandomboxStatistic(Packet_Randombox_statistic_DB* packet);
    char SaveMemberExp(unsigned int characNo, unsigned int exp,
                       unsigned int lev);
    char UpdatePowerSecedeTime(unsigned char serverId,
                               unsigned int secedeTime);
    char QueryMsg(Packet_DBMW_Query_Msg* packet);
    char GetDBMWStatistic(Packet_DBMW_Query_String* packet);
    char UpdateCreateEmblemStatistic(
        Packet_Emblem_Create_Statistic_DB* packet);
    char OnWriteGuildMemberMemo(
        Packet_DB_Write_Guild_Member_Memo* packet);
    char OnServerMatchData(Packet_Server_Match_data_DBMW* packet);
    char OnManagerEventTriggerAck(Packet_Manager_Event_Trigger_Ack* packet);
    char OnSaveLoadingTimeReport(Packet_DBMW_Loading_Time_Report* packet);
    char OnSaveFatigueBattery(
        Packet_DBMW_Fatigue_Battery_Money_Statistic* packet);
    char QueryInsertUpdate(PacketInsertUpdate* packet);
    char InsertDailyBadSpecStatistics(
        Packet_Frame_Lag_Statistic_Write_Daily_Bad_Spec* packet);
    char RegisterQueryIdTable(int queryId, const char* query);
    char LoadQueryIdTable();
    int FindCharIdInArray(unsigned int* arr, unsigned int characNo,
                          unsigned char maxIdx);
    char OnSaveTingUserAccount(
        Packet_DBMW_Ting_User_TimeCheck_Write_Query* packet);
    char OnSavePowerwarLagReport(Packet_DBMW_Powerwar_Lag_Report* packet);
    char OnSaveUsedMemoryWriteQuery(
        Packet_Frame_Lag_Used_Memory_Write_Query* packet);
    char OnReasonCrashDownQueryWrite(
        Packet_DBMW_Reason_Crash_Down_Query* packet);
    char OnSavePowerwarLoadingReport(
        Packet_DBMW_Powerwar_Loading_Time_Report* packet);
    char OnSaveUserTingTimeCheckWrite(
        Packet_DBMW_User_Ting_TimeCheck_Write_Query* packet);
    char OnTechnicalReportCommonQuery(
        Packet_DBMW_TechnicalReport_Common_Query* packet);
    char SunAhWriteQuery(Packet_Frame_Lag_Statistic_Write_Query* packet);
    char Open(ENUM_DB_HANDLE_IDX idx, const char* host, const char* user,
              const char* pass, const char* db);
    unsigned int GetIdentity(CDBHandle* h);
    CDBHandle* m_handles[0x11];  // +0（0x44 字节，17 个槽）
    CApplication* m_app;  // +0x44
};

// ---- Limit Npc Buy Item（ORIG 布局）----
class LimitNpcBuyItemRequestInfo;  // 请求包（load 流程未使用字段，占位）

class LimitNpcBuyItemResultInfo : public PacketHeader
{
public:
    LimitNpcBuyItemResultInfo();
    char m_data[0x16c];  // +0xa..0x176 数据区（count@+0xa、items@+0xe 步长 0xc）
} __attribute__((packed));

class LimitNpcBuyItemUpdate : public PacketHeader
{
public:
    unsigned int m_fieldA;   // +0xa（sell_count 增量）
    unsigned int m_field12;  // +0x12（item_index）
} __attribute__((packed));

int get_awardItem_using_interval();
void get_awardItem_using_interval(int monthInterval);
char isDayTimeOver(unsigned int timestamp, unsigned int days);

// ---- CSignal ----
class CSignal
{
public:
    CSignal();
    virtual ~CSignal();
    virtual void handle(int sig) {}
    void attachApp(CApplication* app);
    void dump_core_file();
    CApplication* m_app;  // +4
};

class CTerminateSig : public CSignal
{
public:
    CTerminateSig();
    virtual ~CTerminateSig();
    virtual void handle(int sig);
};
class CSystemFailSig : public CSignal
{
public:
    CSystemFailSig();
    virtual ~CSystemFailSig();
    virtual void handle(int sig);
};
class CSegmentationFaultSig : public CSignal
{
public:
    CSegmentationFaultSig();
    virtual ~CSegmentationFaultSig();
    virtual void handle(int sig);
};
class CFloatingPointExceptSig : public CSignal
{
public:
    CFloatingPointExceptSig();
    virtual ~CFloatingPointExceptSig();
    virtual void handle(int sig);
};
class CUser1Sig : public CSignal
{
public:
    CUser1Sig();
    virtual ~CUser1Sig();
    virtual void handle(int sig);
};
class CUser2Sig : public CSignal
{
public:
    CUser2Sig();
    virtual ~CUser2Sig();
    virtual void handle(int sig);
};

// ---- CSignalTranslator ----
class CSignalTranslator
{
public:
    CSignalTranslator();
    ~CSignalTranslator();
    char regist_signal(int sig, void (*handler)(int));
    void clear();
    void init_signal();
    void init_handler(CApplication* app);
    void init(CApplication* app);
    CSignal* getSignal(int idx) const;
    CSignal* m_signals[0x1a];  // +0（0x68 字节）
};

CSignalTranslator* CSignalTranslatorInstance();
void signal_handler(int sig);

// ---- CTableBase / CAppInit / CAppConfig ----
// ---- ST_ServerInfo ----
struct ST_ServerInfo
{
    ST_ServerInfo();
    ~ST_ServerInfo();
    char m_type;       // +0
    char m_flag;       // +1
    char m_idx;        // +2
    char m_pad3;
    std::string m_name;  // +4
    unsigned short m_port;  // +8
    char m_padA[2];
};

class CTableBase
{
public:
    CTableBase();
    virtual ~CTableBase();
    virtual int Load_Table(const std::string& fileName) = 0;   // vptr+0x8
    virtual int Parse_Table(char* data, int size) = 0;         // vptr+0xc
    int Load_Txt_Table_Data(const char* fileName, int idx);    // 非虚
};

class CAppInit
{
public:
    CAppInit();
    virtual ~CAppInit();
    virtual void Init(CApplication* app, int argc, char** argv) {}
};

class CAppStartInit : public CAppInit
{
public:
    CAppStartInit();
    virtual ~CAppStartInit();
    virtual void Init(CApplication* app, int argc, char** argv);
    int Init_Daemon(int argc, char** argv);
    int Save_pid(const std::string& path);
};

class CAppStopInit : public CAppInit
{
public:
    CAppStopInit();
    virtual ~CAppStopInit();
    virtual void Init(CApplication* app, int argc, char** argv);
};

class CAppConfig : public CTableBase
{
public:
    CAppConfig();
    virtual ~CAppConfig();
    virtual int Load_Table(const std::string& fileName);
    virtual int Parse_Table(char* data, int size);
    int Check_FileName(const std::string& fileName);
    int Get_ServerUdpPort();
    int Get_ServerTcpPort();
    unsigned char Get_FrameCountValue();
    unsigned char Get_DbmwType();
    STDBConnInfo* GetDBConnInfo(ENUM_DB_HANDLE_IDX idx);
    int GetServerGroup();
    int DecryptValue(const char* value, char* dst);
    CTEA m_cipher;          // +4（0x48 字节）
    char m_tickValue;       // +0x4c
    char m_pad4d[3];
    int m_udpPort;          // +0x50
    int m_tcpPort;          // +0x54
    char m_dbmwType;        // +0x58
    char m_pad59[3];
    int m_serverGroup;      // +0x5c
    STDBConnInfo m_dbConnInfo[0x11];  // +0x60（每项 0x168）
};

class CServerConfig : public CTableBase
{
public:
    CServerConfig();
    virtual ~CServerConfig();
    virtual int Load_Table(const std::string& fileName);
    virtual int Parse_Table(char* data, int size);
    void* GetServerInfo();
    ST_ServerInfo m_servers[0xff];  // +4（255 × 0xc = 0xbf4，至 0xbf8）
};

// ---- ST_KillUSRConfig：0x10 ----
class ST_KillUSRConfig
{
public:
    ST_KillUSRConfig();
    int m_type;    // +0
    int m_field4;  // +4
    int m_field8;  // +8
    int m_fieldC;  // +0xc
};

class CKillUSRConfig : public CTableBase
{
public:
    CKillUSRConfig();
    virtual ~CKillUSRConfig();
    virtual int Load_Table(const std::string& fileName);
    virtual int Parse_Table(char* data, int size);
    void Clear_Table();
    void* GetInfo() const;
    std::vector<ST_KillUSRConfig*> m_list;  // +4（sizeof=0x10）
};

// ---- CVersionMgr ----
class CVersionMgr
{
public:
    CVersionMgr(int a, int b, int c, int d);
    int m_versions[4];  // +0
};

// ---- CSourceVersionMgr ----
class CSourceVersionMgr
{
public:
    class SourceVersion
    {
    public:
        SourceVersion(char* name, int version);
        SourceVersion(const SourceVersion& other);
        SourceVersion& operator=(const SourceVersion& other);
        ~SourceVersion();
        std::string m_name;  // +0
        int m_version;       // +4
    };
    CSourceVersionMgr();
    ~CSourceVersionMgr();
    void InsertSourceVersion(char* name, int version);
    std::vector<SourceVersion> m_versions;  // +0
};

// ---- CQueryCounter ----
class CQueryCounter
{
public:
    CQueryCounter();
    ~CQueryCounter();
    char IncreQureyCount(unsigned int idx, const char* name);
    void ResetQueryCount();
    void SetResponseTime(unsigned int ms);
    void WriteFileLog();
    void WriteDBLog(CDBManager& db);
    int LoadQueryIdTable(int queryId);
    int m_field0;                     // +0
    bool m_used[0x141];               // +4
    unsigned int m_counts[0x141];     // +0x148（0x504 字节）
    double m_responseTimes[0x141];    // +0x64c（0xa08 字节）
    int m_interval;                   // +0x1054
    CUnixTimer* m_timer;              // +0x1058
};

CQueryCounter* CQueryCounterInstance();

// ---- CPacketTracer ----
// ---- stPacketProcess：CPacketTracer 进程统计值（map 节点 +4/+0xc）----
struct stPacketProcess
{
    double m_accTime;      // +0（map 节点 +4）
    unsigned int m_count;  // +8（map 节点 +0xc）
};

// ---- CPacketCounter<Lo,Hi>：包计数/耗时统计（ORIG 布局 0x1d648）----
template<int Lo, int Hi>
class CPacketCounter
{
public:
    CPacketCounter(char* dir, char* name);
    ~CPacketCounter();
    void Reset();
    void IncrementPacketCount(int id);
    void BeforeProcess();
    void AfterProcess(int id);
    char m_data[0x1d648];  // +0
};

class CPacketTracer
{
public:
    CPacketTracer();
    ~CPacketTracer();
    void AddLog(int type, int len);
    void WriteLog();
    void AbsoluteWriteLog();
    void ResetLog();
    void StartPacketProcessLog(unsigned int id);
    void EndPacketProcessLog(unsigned int id);
    void WritePacketProcessLog();
    void ResetPacketProcessLog();
    int m_field0;      // +0
    std::string m_log; // +4
    CUnixTimer* m_timer;  // +8
    std::map<unsigned int, stPacketProcess> m_processMap;  // +0xc
    int m_processCount;   // +0x24
};

CPacketTracer* CPacketTracerInstance();

// ---- CPacketDecoder ----
class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Process();
    void Attach(CApplication* app);
    void SetTCPQueue(TcpRecvQueue* q);
    void SetUdpQueue(UdpRecvQueue* q);
    void TcpProcess();
    void UdpProcess();
    bool MsgDecode(PacketHeader* header);
    UdpRecvQueue* m_udpQueue;    // +0
    CMutex* m_udpQLock;          // +4
    CMutex* m_udpBLock;          // +8
    TcpRecvQueue* m_tcpQueue;    // +0xc
    CMutex* m_tcpRecvQLock;      // +0x10
    CMutex* m_tcpRecvBLock;      // +0x14
    CServerHandler* m_serverHandler;  // +0x18
    void (*m_table[0x2418])(PacketHeader*);  // +0x1c（0x3e8..0x27ff）
};

CPacketDecoder* CPacketDecoderInstance();

int parse_string(std::vector<std::string>& v, std::string& s, char c);

// ---- packet 类 ----
class Packet_InnerPakcet_Login : public PacketHeader
{
public:
    Packet_InnerPakcet_Login();
};
class Packet_InnerPakcet_Logout : public PacketHeader
{
public:
    Packet_InnerPakcet_Logout();
};
class Packet_Monitor_Event_Start : public PacketHeader
{
public:
    Packet_Monitor_Event_Start();
    char m_pad[0x8];  // 数据区（ORIG ctor size 0x12）
};
class Packet_Monitor_Event_End : public PacketHeader
{
public:
    Packet_Monitor_Event_End();
    char m_pad[0x4];  // 数据区（ORIG ctor size 0xe）
};
class Packet_Monitor_Manager_Connect_OK : public PacketHeader
{
public:
    Packet_Monitor_Manager_Connect_OK();
};
class Packet_Web_Notice_Single : public PacketHeader
{
public:
    Packet_Web_Notice_Single();
    char m_pad[0x100];  // 数据区（ORIG ctor size 0x10a）
};
class Packet_Web_Notice_InGame_Advertisement : public PacketHeader
{
public:
    Packet_Web_Notice_InGame_Advertisement();
};
class Packet_Web_Prohibit_User_Connect : public PacketHeader
{
public:
    Packet_Web_Prohibit_User_Connect();
    int m_fieldA;       // +0xa
    char m_fieldE;      // +0xe
    unsigned short m_fieldF;  // +0xf
    char m_field11;     // +0x11
};
class Packet_Monitor_UDP_HeartBeat : public PacketHeader
{
public:
    Packet_Monitor_UDP_HeartBeat();
    char m_fieldA;      // +0xa
} __attribute__((packed));
class Packet_Notice_Guild_Mail_Arrived : public PacketHeader
{
public:
    Packet_Notice_Guild_Mail_Arrived();
    char m_fieldA;      // +0xa
    int m_guildId;      // +0xb
    char m_rest[0x28];  // +0xf..0x33
} __attribute__((packed));

// ---- 公会成员代理（0x27）----
struct ST_MemberProxy
{
    ST_MemberProxy();
    int m_no;               // +0
    unsigned char m_lev;    // +4
    char m_name[0x1e];      // +5（memset 0x1e）
    int m_field23;          // +0x23
};

struct STMemberDBInfo
{
    STMemberDBInfo();
    ST_MemberProxy m_proxy;     // +0
    char m_count;               // +0x27
    char m_pad28[1];
    ST_MemberProxy m_lowers[9]; // +0x28
};

class Packet_DB_Reply_Query_Member : public PacketHeader
{
public:
    Packet_DB_Reply_Query_Member();
    char m_flag;             // +0xa
    int m_fieldB;            // +0xb
    int m_fieldF;            // +0xf（maxExp）
    int m_field13;           // +0x13（maxIdx）
    STMemberDBInfo m_master; // +0x17
    char m_rest[0x1c5 - 0x17 - 0x187];
} __attribute__((packed));

class Packet_DB_Reply_Unconn_Guild_Member : public PacketHeader
{
public:
    Packet_DB_Reply_Unconn_Guild_Member();
    int m_fieldA;           // +0xa
    int m_fieldE;           // +0xe
    STGuildMemberProxy m_proxy;  // +0x12
} __attribute__((packed));

class Packet_DB_Reply_Guild_All_Members : public PacketHeader
{
public:
    Packet_DB_Reply_Guild_All_Members();
    int m_fieldA;            // +0xa
    int m_fieldE;            // +0xe
    unsigned char m_flag;    // +0x12
    unsigned char m_count;   // +0x13
    STGuildMemberProxy m_members[0x5d];  // +0x14（93 × 0x41 = 0x179d）
} __attribute__((packed));

// ---- 组队统计（成员 0x3c 步长）----
struct STPartyMemberStat
{
    char m_data0[0xe];      // +0..0xd
    unsigned short m_fieldE;  // +0xe
    int m_field10;            // +0x10
    char m_field14;           // +0x14（movsbl）
    unsigned char m_field15;  // +0x15
    unsigned char m_field16;  // +0x16
    unsigned char m_field17;  // +0x17
    unsigned char m_field18;  // +0x18
    char m_field19;           // +0x19（movsbl）
    int m_field1A;            // +0x1a
    int m_field1E;            // +0x1e
    int m_field22;            // +0x22
    int m_field26;            // +0x26
    int m_field2A;            // +0x2a
    int m_field2E;            // +0x2e
    int m_field32;            // +0x32
    int m_field36;            // +0x36
    int m_field3A;            // +0x3a
    int m_field3E;            // +0x3e
    int m_field42;            // +0x42
    int m_field46;            // +0x46
} __attribute__((packed));

class Packet_DBMW_Dungeon_Statistic_Party : public PacketHeader
{
public:
    Packet_DBMW_Dungeon_Statistic_Party() : PacketHeader(0x439, 0x34) {}
    int m_count;            // +0xa
    char m_padE[2];
    STPartyMemberStat m_members[1];  // +0x10（i*0x3c）
} __attribute__((packed));

// ---- 组队职业统计（成员 0x19 步长）----
struct STPartyJobMemberStat
{
    char m_data0[0xe];      // +0..0xd
    unsigned short m_fieldE;  // +0xe
    int m_field10;            // +0x10
    char m_field14;           // +0x14（movsbl）
    unsigned char m_field15;  // +0x15
    unsigned char m_field16;  // +0x16
    unsigned char m_field17;  // +0x17
    unsigned char m_field18;  // +0x18
    char m_field19;           // +0x19（movsbl）
    int m_field1A;            // +0x1a
    char m_field1E;           // +0x1e（movsbl）
    int m_field1F;            // +0x1f
    int m_field23;            // +0x23
} __attribute__((packed));

class Packet_DBMW_Dungeon_Statistic_Party_Job : public PacketHeader
{
public:
    Packet_DBMW_Dungeon_Statistic_Party_Job() : PacketHeader(0x439, 0x34) {}
    int m_count;            // +0xa
    char m_padE[2];
    STPartyJobMemberStat m_members[1];  // +0x10（i*0x19）
} __attribute__((packed));

// ---- 组队角色统计（成员 0x43 步长）----
struct STPartyCharacMemberStat
{
    char m_data0[0xe];       // +0..0xd
    unsigned short m_fieldE; // +0xe
    int m_field10;           // +0x10
    int m_field11;           // +0x11（与 +0x10 重叠读）
    char m_field14;          // +0x14（movsbl）
    unsigned char m_field15; // +0x15
    unsigned char m_field16; // +0x16
    int m_field17;           // +0x17
    char m_field1B;          // +0x1b（movsbl）
    char m_field1C;          // +0x1c（movsbl）
    int m_field1D;           // +0x1d
    int m_field21;           // +0x21
    int m_field25;           // +0x25
    int m_field29;           // +0x29
    int m_field2D;           // +0x2d
    int m_field31;           // +0x31
    int m_field35;           // +0x35
    int m_field39;           // +0x39
    int m_field3D;           // +0x3d
    int m_field41;           // +0x41
    int m_field45;           // +0x45
    int m_field49;           // +0x49
    int m_field4D;           // +0x4d
} __attribute__((packed));

class Packet_DBMW_Dungeon_Statistic_Party_Charac : public PacketHeader
{
public:
    Packet_DBMW_Dungeon_Statistic_Party_Charac() : PacketHeader(0x439, 0x34) {}
    int m_count;            // +0xa
    char m_padE[2];
    STPartyCharacMemberStat m_members[1];  // +0x10（i*0x43）
} __attribute__((packed));

// ---- 限量商店管理（回复项 0x48 步长）----
struct STItemLimitItem
{
    char m_data[0xf];          // +0..0xe
    unsigned int m_field0F;    // +0xf
    unsigned int m_field13;    // +0x13
    unsigned int m_field17;    // +0x17
    unsigned char m_field1B;   // +0x1b
    unsigned int m_field1F;    // +0x1f
    unsigned int m_field23;    // +0x23
    unsigned int m_field27;    // +0x27
    int m_field2B;             // +0x2b
    unsigned int m_field2F;    // +0x2f
    unsigned int m_field33;    // +0x33
    unsigned int m_field37;    // +0x37
    unsigned int m_field3B;    // +0x3b
    unsigned int m_field3F;    // +0x3f
    unsigned short m_field43;  // +0x43
    unsigned short m_field45;  // +0x45
    unsigned int m_field47;    // +0x47
    unsigned int m_field4B;    // +0x4b
    unsigned int m_field4F;    // +0x4f
    unsigned int m_field53;    // +0x53
} __attribute__((packed));

class Packet_Item_Limit_Edition_Load_Data_Req : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Load_Data_Req() : PacketHeader(0x1008, 0x7ef) {}
    unsigned char m_fieldA;    // +0xa
    int m_fieldB;              // +0xb
    unsigned int m_fieldF;     // +0xf
    unsigned int m_list[0x100]; // +0x13
} __attribute__((packed));

class Packet_Item_Limit_Edition_Load_Data_Rpy : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Load_Data_Rpy();
    unsigned char m_fieldA;    // +0xa
    int m_fieldB;              // +0xb
    STItemLimitItem m_items[1]; // +0xf
    char m_pad[0x78c];  // 数据区（ORIG ctor size 0x7ef）
} __attribute__((packed));

class Packet_Item_Limit_Edition_Update : public PacketHeader
{
public:
    Packet_Item_Limit_Edition_Update() : PacketHeader(0x1008, 0x7ef) {}
    int m_serverId;            // +0xa
    unsigned int m_count;      // +0xe
    char m_items[0x1000];      // 项在 +0，步长 9
} __attribute__((packed));

class Packet_DBMW_Change_Char_Name : public PacketHeader
{
public:
    Packet_DBMW_Change_Char_Name() : PacketHeader(0x439, 0x34) {}
    char m_serverId;           // +0xa
    int m_characNo;            // +0xb
    char m_name[0x25];         // +0xf..0x34
} __attribute__((packed));
class Packet_DB_Request_Guild_Secede : public PacketHeader
{
public:
    Packet_DB_Request_Guild_Secede() : PacketHeader(0x439, 0x34) {}
    int m_guildId;              // +0xa
    int m_characNo;             // +0xe
    char m_grade;               // +0x12
    int m_secedeType;           // +0x13
    char m_characName[0x1e];    // +0x17
    int m_masterCharacNo;       // +0x35
} __attribute__((packed));

class Packet_DBMW_Request_Guild_Create : public PacketHeader
{
public:
    Packet_DBMW_Request_Guild_Create() : PacketHeader(0x439, 0x34) {}
    unsigned char m_serverId;   // +0xa
    unsigned int m_id;          // +0xb
    int m_characNo;             // +0xf
    char m_characName[0x1e];    // +0x13
    char m_job;                 // +0x31（ORIG movsbl 有符号）
    char m_growType;            // +0x32（ORIG movsbl 有符号）
    char m_lev;                 // +0x33（ORIG movsbl 有符号）
    char m_sex;                 // +0x34（ORIG movsbl 有符号）
    char m_bornYear[3];         // +0x35
    char m_guildName[0x17];     // +0x38
    char m_guildUrl[0x40];      // +0x4f
} __attribute__((packed));

// ---- StackBuffer（原版：TLS 上下文 + 0x4000 块池）----
struct StackBufferContext
{
    StackBufferContext();
    ~StackBufferContext();
    struct Buffer
    {
        int m_blockIndex;  // +0
        int m_offset;      // +4
        int m_size;        // +8
    };
    std::vector<Buffer> m_buffers;        // +0
    std::vector<unsigned char*> m_blocks; // +0xc
    int m_blockIndex;                     // +0x18
    int m_offset;                         // +0x1c
};

class StackBuffer
{
public:
    StackBuffer();
    StackBuffer(const StackBuffer& other);
    ~StackBuffer();
    StackBuffer& operator=(const StackBuffer& other);
    void alloc(unsigned int size);
    void freeAll();
    char* getBuffer();
    char* m_buf;   // +0
    int m_end;     // +4
};

class StackBuffer_char : public StackBuffer
{
public:
    StackBuffer_char();
    StackBuffer_char(const StackBuffer_char& other);
    ~StackBuffer_char();
    void alloc(unsigned int size);
    operator char*();
    char m_data[0x20];  // +8
};

class StackBuffer_wchar : public StackBuffer
{
public:
    StackBuffer_wchar();
    StackBuffer_wchar(const StackBuffer_wchar& other);
    ~StackBuffer_wchar();
    void alloc(unsigned int size);
    operator wchar_t*();
    wchar_t m_data[0x10];  // +8
};

StackBuffer_char sformat(const char* fmt, ...);
StackBuffer_wchar wformat(const wchar_t* fmt, ...);

class CommonTime
{
public:
    void SetCurTime();
    char m_year;   // +0
    char m_mon;    // +1
    char m_mday;   // +2
    char m_hour;   // +3
    char m_min;    // +4
    char m_sec;    // +5
};

// ---- CPacketTranslater（静态 handler + 全局 m_pclApp）----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
    static void OnInnerPacketLogin(PacketHeader* header);
    static void OnInnerPacketLogout(PacketHeader* header);
    static void OnEventStart(PacketHeader* header);
    static void OnEventEnd(PacketHeader* header);
    static void OnHeartBeat(PacketHeader* header);
    static void OnTcpServerLogin(PacketHeader* header);
    static void OnTcpServerLogout(PacketHeader* header);
    static void OnTcpServerHeartbeat(PacketHeader* header);
    static void OnCommonPacket(PacketHeader* header);
    static void OnWebNoticeInGameAD(PacketHeader* header);
    static void OnWebNoticeBroadcast(PacketHeader* header);
    static void OnWebNoticeProhibitConnectUser(PacketHeader* header);
    static void OnMonitorNoticeProhibitConnectUser(PacketHeader* header);
    static void OnQueryGuildAllMembersProxy(PacketHeader* header);
    static void OnQueryUnconnGuildMemberProxy(PacketHeader* header);
    static void OnServeQueueLoadStatistic(PacketHeader* header);
    static void OnDBLoadRequestGuildBoardOpen(PacketHeader* header);
    static void OnPcRoomPlayTimeReward(PacketHeader* header);
    static void OnAddBuddy(PacketHeader* header);
    static char OnRequestIPCounterList(PacketHeader* header);
    static void onQueryTowerFullRank(PacketHeader* header);
    static void OnRequestARSInfo(PacketHeader* header);
    static void OnQueryGuild(PacketHeader* header);
    static void OnReqOntimeEventIdx(PacketHeader* header);
    static void OnReqOntimeEventIdxUpdate(PacketHeader* header);
    static void OnReqOntimeEventItem(PacketHeader* header);
    static void OnQueryBuddyInfo(PacketHeader* header);
    static void OnSecretShopStatistic(PacketHeader* header);
    static void onLoadLimitNpcBuyItemInfo(PacketHeader* header);
    static void onUpdateLimitNpcBuyItemInfo(PacketHeader* header);
    static void OnChangeUnconnectedGuildMemberGrade(PacketHeader* header);
    static void OnChangeGuildNotifyMessage(PacketHeader* header);
    static void OnGuildMasterDelegate(PacketHeader* header);
    static void OnSendGuildLetter(PacketHeader* header);
    static void OnGuildJoin(PacketHeader* header);
    static void OnSendMailCoinGuildEvent(PacketHeader* header);
    static void OnDBLoadRequestGuildBoardWrite(PacketHeader* header);
    static void OnDBLoadRequestWebGuildBoardWrite(PacketHeader* header);
    static void OnDBLoadRequestGuildBoardDelete(PacketHeader* header);
    static void OnLoadGuildAgit(PacketHeader* header);
    static void OnCreateGuildAgit(PacketHeader* header);
    static void OnDeleteGuildAgit(PacketHeader* header);
    static void OnUpgradeGuildAgit(PacketHeader* header);
    static void OnUpdateGuildCargo(PacketHeader* header);
    static void OnUpgradeGuildCargo(PacketHeader* header);
    static void OnInsertGuildCargoHistory(PacketHeader* header);
    static void OnDeleteToBlackList(PacketHeader* header);
    static void OnRegisterToBlackList(PacketHeader* header);
    static void OnRequestBlackListOnLogin(PacketHeader* header);
    static void OnSaveGuild(PacketHeader* header);
    static void OnGuildSecede(PacketHeader* header);
    static void OnSaveGuildMember(PacketHeader* header);
    static void OnSaveGuildWarInfo(PacketHeader* header);
    static void OnSavePowerWarBonusPoint(PacketHeader* header);
    static void OnSavePowerWarPoint(PacketHeader* header);
    static void OnSavePowerWarStatueRanker(PacketHeader* header);
    static void OnSavePowerWarPointReward(PacketHeader* header);
    static void OnLoadPeriodicMessage(PacketHeader* header);
    static void OnDBMWInsertMail(PacketHeader* header);
    static void OnQueryMember(PacketHeader* header);
    static void OnQueryGuildMember(PacketHeader* header);
    static void OnQueryTodayGuildMemeber(PacketHeader* header);
    static void OnRequestGuildCreate(PacketHeader* header);
    static void OnSavePowerWarUserRank(PacketHeader* header);
    static void OnSavePowerWarGuildRank(PacketHeader* header);
    static void OnRequestApproveJoinGuild(PacketHeader* header);
    static void OnInsertUdpCharacteristic(PacketHeader* header);
    static void OnDelBuddy(PacketHeader* header);
    static void OnEndGuildWar(PacketHeader* header);
    static void onStartGameEventFromServer(PacketHeader* header);
    static void onEndGameEventFromServer(PacketHeader* header);
    static void OnSaveMember(PacketHeader* header);
    static void OnSaveMemberUpdateCharInfo(PacketHeader* header);
    static void OnQueryGuildBooting(PacketHeader* header);
    static void OnUpdateTowerOfDespairStatistic(PacketHeader* header);
    static void OnDBMWVillageAttackRank(PacketHeader* header);
    static void onItemLimitEditionLoadDataReq(PacketHeader* header);
    static void onCollectItemsGm(PacketHeader* header);
    static void onInsertHolePunchingResult(PacketHeader* header);
    static void OnSaveMemberExp(PacketHeader* header);
    static void OnSavePowerSecedeTime(PacketHeader* header);
    static void onItemLimitEditionUpdateData(PacketHeader* header);
    static void onCompatibilityIndex(PacketHeader* header);
    static void OnP2PStatistics(PacketHeader* header);
    static void OnDBMWQueryMsg(PacketHeader* header);
    static void OnDBMWRandomboxStatic(PacketHeader* header);
    static void OnBloodDungeonStatistic(PacketHeader* header);
    static void OnDBMWCreateEmblemStatic(PacketHeader* header);
    static void OnDBMWDisjointAvatarStatic(PacketHeader* header);
    static void onCollectItemsUpdate(PacketHeader* header);
    static void OnDBMWConnectionCheck(PacketHeader* header);
    static void OnChangeCharacName(PacketHeader* header);
    static void OnServerMatchData(PacketHeader* header);
    static void OnManagerEventTriggerAck(PacketHeader* header);
    static void OnRecvLoadingTimeReport(PacketHeader* header);
    static void OnSaveFatigueBatteryStatistic(PacketHeader* header);
    static void OnMemberDeleteAsCharDelete(PacketHeader* header);
    static void OnSendHWspec(PacketHeader* header);
    static void OnSaveUnchangableGuildInfo(PacketHeader* header);
    static void OnErrorLineSave(PacketHeader* header);
    static void OnPartyStatisticSave(PacketHeader* header);
    static void OnPartyJobStatisticSave(PacketHeader* header);
    static void OnPartyCharacStatisticSave(PacketHeader* header);
    static void OnDeathTowerValueStatisticSave(PacketHeader* header);
    static void OnDeathTowerPlayDataJobStatisticSave(PacketHeader* header);
    static void OnDeathTowerPlayDataPartyStatisticSave(PacketHeader* header);
    static void OnHellPartyStatisticItemSave(PacketHeader* header);
    static void OnCubeStatisticDataSave(PacketHeader* header);
    static void OnQueryFirstLoadSpecDb(PacketHeader* header);
    static void OnQueryReloadSpecDb(PacketHeader* header);
    static void OnInsertFrameLagStatistics(PacketHeader* header);
    static void OnWriteQueryStatistics(PacketHeader* header);
    static void OnInsertDailyBadSpecStatistics(PacketHeader* header);
    static void OnInsertUsedMemoryStatistic(PacketHeader* header);
    static void OnSaveAssertManagerInfo(PacketHeader* header);
    static void OnSavePacketOverflowStatistic(PacketHeader* header);
    static void OnWriteGuildMemberMemo(PacketHeader* header);
    static void OnWriteUserTingTimeCheck(PacketHeader* header);
    static void OnTingUserCollect(PacketHeader* header);
    static void OnRecvPowerwarLoadingReport(PacketHeader* header);
    static void OnRecvPowerwarLagReport(PacketHeader* header);
    static void OnReasonCrashDownQuery(PacketHeader* header);
    static void OnDBMWLoginLogoutStatistics(PacketHeader* header);
    static void OnDBMWTechnicalReportCommonQuery(PacketHeader* header);
    static void OnGoldcardEventStatistic(PacketHeader* header);
    static void OnRenew_GM_List(PacketHeader* header);
    static void OnUpdateChannelOccNum(PacketHeader* header);
    static void OnInsertUpdate(PacketHeader* header);
    static CApplication* m_pclApp;
};

// ---- 服务器信息类（dbmw 版：Game/Guild/Monitor/Statistics 四同构类，0x10）----
// 布局：+0 type、+4 name(std::string)、+8 port、+0xa pad、+0xb flag、+0xc CUdpHandler*
class Packet_Monitor_UDP_HeartBeat;

class CGameServer
{
public:
    CGameServer();
    ~CGameServer();
    void Init(unsigned char type, std::string& name, unsigned short port,
              unsigned char flag);
    void SendToServer(char* buf, int len);
    void SendHeartBeat();
    char IsValidGameServer();
    void OnDisconnect();
    unsigned char m_type;  // +0
    char m_pad1[3];
    std::string m_name;  // +4
    unsigned short m_port;  // +8
    char m_padA;         // +0xa
    char m_flag;         // +0xb
    CUdpHandler* m_udpHandler;  // +0xc
};

class CGuildServer
{
public:
    CGuildServer();
    ~CGuildServer();
    void Init(unsigned char type, std::string& name, unsigned short port,
              unsigned char flag);
    void SendToServer(char* buf, int len);
    void SendHeartBeat();
    char IsValidGameServer();
    void OnDisconnect();
    unsigned char m_type;  // +0
    char m_pad1[3];
    std::string m_name;  // +4
    unsigned short m_port;  // +8
    char m_padA;         // +0xa
    char m_flag;         // +0xb
    CUdpHandler* m_udpHandler;  // +0xc
};

class CMonitorServer
{
public:
    CMonitorServer();
    ~CMonitorServer();
    void Init(unsigned char type, std::string& name, unsigned short port,
              unsigned char flag);
    void SendToServer(char* buf, int len);
    void SendHeartBeat();
    char IsValidGameServer();
    void OnDisconnect();
    unsigned char m_type;  // +0
    char m_pad1[3];
    std::string m_name;  // +4
    unsigned short m_port;  // +8
    char m_padA;         // +0xa
    char m_flag;         // +0xb
    CUdpHandler* m_udpHandler;  // +0xc
};

class CStatisticsServer
{
public:
    CStatisticsServer();
    ~CStatisticsServer();
    void Init(unsigned char type, std::string& name, unsigned short port,
              unsigned char flag);
    void SendToServer(char* buf, int len);
    void SendHeartBeat();
    char IsValidGameServer();
    void OnDisconnect();
    unsigned char m_type;  // +0
    char m_pad1[3];
    std::string m_name;  // +4
    unsigned short m_port;  // +8
    char m_padA;         // +0xa
    char m_flag;         // +0xb
    CUdpHandler* m_udpHandler;  // +0xc
};

// ---- CServerHandler（dbmw 版：0x1040，非多态）----
class CServerHandler
{
public:
    CServerHandler();
    ~CServerHandler();
    void Attach(CApplication* app);
    void Load(ST_ServerInfo* info);
    void Process();
    CTcpServer* GetTcpServer(unsigned char idx);
    CTcpServer* GetTcpServer(unsigned int socket);
    CGameServer* GetGameServer(int idx);
    CGuildServer* GetGuildServer();
    CMonitorServer* GetMonitorServer();
    CStatisticsServer* GetStatisticsServerPtr();
    char CreateTcpServer(unsigned char idx, unsigned int port);
    char DeleteTcpServer(unsigned char idx);
    void SendAllTcpServer(PacketHeader* header);
    void SendAllToGameServer(char* buf, int len);
    void CheckTcpServerHeartbeat();
    // 兼容旧 API（manager 遗留 CPacketTranslater handler 使用；待其按 dbmw 重做后清理）
    int GetAlivedMonitorServer();
    void ResetHeartBeat(unsigned char idx);
    char IsConnectedMonitorServer(unsigned char idx);
    void SetConnectFlag(unsigned char idx, bool flag);
    void SendToTcpServer(PacketHeader* header, unsigned char idx);
    void SendToTcpServer(char* buf, int len, unsigned char idx);
    void SendAllToMonitorServer(char* buf, int len);
    CGameServer m_gameServers[0xff];    // +0（255 × 0x10 = 0xff0）
    CMonitorServer m_monitorServer;     // +0xff0
    std::map<unsigned char, CTcpServer*> m_tcpServers;  // +0x1000
    CGuildServer m_guildServer;         // +0x1018
    CApplication* m_app;                // +0x1028
    int m_tickCount;                    // +0x102c
    CStatisticsServer m_statisticsServer;  // +0x1030
};

#endif  // MANAGER_TYPES_H_
