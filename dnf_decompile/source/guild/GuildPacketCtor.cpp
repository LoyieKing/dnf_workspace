// df_guild_r — 缺失 Packet 构造器实现（由 gen_packet_ctors.py 生成）
#include <string.h>

#include "GuildDomain.h"
#include "DNFFunctionLib.h"
#include "GuildPackets.h"

// df_guild_r — 缺失 Packet 构造器实现（由 gen_packet_ctors.py 生成）
#include <string.h>

#include "GuildPackets.h"

Packet_Achieve_Guild_Attendance::Packet_Achieve_Guild_Attendance()
    : PacketHeader(0x1bc8, 0x1a)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_Add_Guild_Fund_Result::Packet_Add_Guild_Fund_Result()
    : PacketHeader(0x1bbd, 0x17)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned int*)((char*)this + 0x13) = 0;
}

Packet_Answer_Join_Power::Packet_Answer_Join_Power()
    : PacketHeader(0x6a8, 0x17)
{
    (void)0;
}

Packet_Answer_Secede_Power::Packet_Answer_Secede_Power()
    : PacketHeader(0x6a9, 0x17)
{
    (void)0;
}

Packet_Approve_Join_Guild_Result::Packet_Approve_Join_Guild_Result()
    : PacketHeader(0x1bc3, 0x1a)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned int*)((char*)this + 0x16) = 0;
}

Packet_Channel_Check_Guild_Cargo_Push_Item::Packet_Channel_Check_Guild_Cargo_Push_Item()
    : PacketHeader(0x70c, 0x27)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    *(unsigned int*)((char*)this + 0x13) = 0;
    *(unsigned int*)((char*)this + 0x17) = 0;
    *(unsigned int*)((char*)this + 0x1b) = 0;
    *(unsigned int*)((char*)this + 0x1f) = 0;
    *(unsigned char*)((char*)this + 0x23) = 0x0;
    *(unsigned char*)((char*)this + 0x24) = 0x0;
    *(unsigned short*)((char*)this + 0x25) = 0;
}

Packet_Channel_Create_Guild_Agit::Packet_Channel_Create_Guild_Agit()
    : PacketHeader(0x6dc, 0x16)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
}

Packet_Channel_Delete_Guild_Agit::Packet_Channel_Delete_Guild_Agit()
    : PacketHeader(0x6de, 0x17)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned char*)((char*)this + 0x16) = 0x0;
}

Packet_Channel_Guild_Agit_Info::Packet_Channel_Guild_Agit_Info()
    : PacketHeader(0x6e2, 0x17)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    new ((char*)this + 0x16) STGuildAgitDBInfo;
    memset((char*)this + 0x16, 0, 1);
}

Packet_Channel_Guild_Cargo_Move_Item::Packet_Channel_Guild_Cargo_Move_Item()
    : PacketHeader(0x70f, 0x1b)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    *(unsigned int*)((char*)this + 0x13) = 0;
    *(unsigned int*)((char*)this + 0x17) = 0;
}

Packet_Channel_Guild_Cargo_Pop_Item::Packet_Channel_Guild_Cargo_Pop_Item()
    : PacketHeader(0x70e, 0x50)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    new ((char*)this + 0x16) DnfItemInfo;
    *(unsigned char*)((char*)this + 0x4b) = 0x0;
    *(unsigned int*)((char*)this + 0x4c) = 0;
    memset((char*)this + 0x16, 0, 0x35);
}

Packet_Channel_Guild_Cargo_Push_Item::Packet_Channel_Guild_Cargo_Push_Item()
    : PacketHeader(0x70d, 0x4f)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    *(unsigned int*)((char*)this + 0x13) = 0;
    new ((char*)this + 0x17) DnfItemInfo;
    *(unsigned char*)((char*)this + 0x4c) = 0x0;
    *(unsigned short*)((char*)this + 0x4d) = 0;
    memset((char*)this + 0x17, 0, 0x35);
}

Packet_Channel_Guild_Cargo_Upgrade::Packet_Channel_Guild_Cargo_Upgrade()
    : PacketHeader(0x713, 0x13)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
}

Packet_Channel_Power_War_Process_Info::Packet_Channel_Power_War_Process_Info()
    : PacketHeader(0x6e0, 0x26)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned int*)((char*)this + 0x16) = 0;
    *(unsigned int*)((char*)this + 0x1a) = 0;
    *(unsigned int*)((char*)this + 0x1e) = 0;
    *(unsigned int*)((char*)this + 0x22) = 0;
}

Packet_DBMW_Connection_Check::Packet_DBMW_Connection_Check()
    : PacketHeader(0x413, 0xb)
{
    (void)0;
}

Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg()
    : PacketHeader(0x177d, 0x1013)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    for (int i = 0; i < 0x1001; i++) { *(unsigned char*)((char*)this + i + 0x12) = 0x0; }
}

Packet_DBMW_Register_To_BlackList::Packet_DBMW_Register_To_BlackList()
    : PacketHeader(0x5de, 0x34)
{
    *(unsigned int*)((char*)this + 0x2c) = 0xffffffff;
    memset((char*)this + 0xe, 0, 0x1e);
}

Packet_DBMW_Request_BlackList::Packet_DBMW_Request_BlackList()
    : PacketHeader(0x5e1, 0xf)
{
    (void)0;
}

Packet_DBMW_Request_Guild_Create::Packet_DBMW_Request_Guild_Create()
    : PacketHeader(0x43f, 0x5c)
{
    memset((char*)this + 0x13, 0, 0x17);
    memset((char*)this + 0x35, 0, 3);
    memset((char*)this + 0x4f, 0, 0xd);
    memset((char*)this + 0x38, 0, 0x17);
}

Packet_DBMW_Save_Guild_Join::Packet_DBMW_Save_Guild_Join()
    : PacketHeader(0x438, 0x40)
{
    memset((char*)this + 0x1b, 0, 0x1e);
    memset((char*)this + 0x3d, 0, 3);
}

Packet_DBMW_Save_Power_Secede_Time::Packet_DBMW_Save_Power_Secede_Time()
    : PacketHeader(0x448, 0xf)
{
    (void)0;
}

Packet_DBMW_Send_Guild_Mail::Packet_DBMW_Send_Guild_Mail()
    : PacketHeader(0x432, 0x129)
{
    memset((char*)this + 0x113, 0, 0x11);
    memset((char*)this + 0x13, 0, 0x100);
}

Packet_DB_Call_Guild_All_Members::Packet_DB_Call_Guild_All_Members()
    : PacketHeader(0x425, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_DB_Call_Unconn_Guild_Member::Packet_DB_Call_Unconn_Guild_Member()
    : PacketHeader(0x427, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_DB_Create_Guild_Agit::Packet_DB_Create_Guild_Agit()
    : PacketHeader(0x6dd, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_DB_Delete_Guild_Agit::Packet_DB_Delete_Guild_Agit()
    : PacketHeader(0x6df, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_DB_Insert_Guild_Cargo_History::Packet_DB_Insert_Guild_Cargo_History()
    : PacketHeader(0x711, 0x66)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned char*)((char*)this + 0x28) = 0xff;
    *(unsigned int*)((char*)this + 0x29) = 0;
    *(unsigned int*)((char*)this + 0x2d) = 0;
    new ((char*)this + 0x31) DnfItemInfo;
    memset((char*)this + 0x13, 0, 0x15);
    memset((char*)this + 0x31, 0, 0x35);
}

Packet_DB_Load_Guild_Agit::Packet_DB_Load_Guild_Agit()
    : PacketHeader(0x6e1, 0xe)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
}

Packet_DB_Load_Request_Guild_Board_Delete::Packet_DB_Load_Request_Guild_Board_Delete()
    : PacketHeader(0x2333, 0x17)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned int*)((char*)this + 0x13) = 0;
}

Packet_DB_Load_Request_Guild_Board_Open::Packet_DB_Load_Request_Guild_Board_Open()
    : PacketHeader(0x232b, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write()
    : PacketHeader(0x232f, 0xbc)
{
    new ((char*)this + 0x17) STGuildBoardDBInfo;
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned int*)((char*)this + 0x13) = 0;
}

Packet_DB_Load_Request_Web_Guild_Board_Write::Packet_DB_Load_Request_Web_Guild_Board_Write()
    : PacketHeader(0x233e, 0x16)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
}

Packet_DB_Query_Guild::Packet_DB_Query_Guild()
    : PacketHeader(0x404, 0x13)
{
    *(unsigned char*)((char*)this + 0x10) = 0xff;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned int*)((char*)this + 0xf) = 0;
}

Packet_DB_Query_Guild_Member::Packet_DB_Query_Guild_Member()
    : PacketHeader(0x402, 0xf)
{
    *(unsigned int*)((char*)this + 0xb) = 0;
}

Packet_DB_Query_On_Guild_Booting::Packet_DB_Query_On_Guild_Booting()
    : PacketHeader(0x677, 0xb)
{
    (void)0;
}

Packet_DB_Request_Approve_Join_Guild::Packet_DB_Request_Approve_Join_Guild()
    : PacketHeader(0x1bc4, 0x17)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned char*)((char*)this + 0x16) = 0x0;
}

Packet_DB_Request_Guild_Master_Delegate::Packet_DB_Request_Guild_Master_Delegate()
    : PacketHeader(0x43b, 0x31)
{
    memset((char*)this + 0x13, 0, 0x1e);
}

Packet_DB_Request_Guild_Secede::Packet_DB_Request_Guild_Secede()
    : PacketHeader(0x439, 0x39)
{
    memset((char*)this + 0x17, 0, 0x1e);
}

Packet_DB_Save_Power_War_Bonus_Point::Packet_DB_Save_Power_War_Bonus_Point()
    : PacketHeader(0x6f4, 0x7de)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    for (int i = 0; i < 0xfa; i++) { new ((char*)this + 0xe + i * 0x8) STUserPoint; }
    memset((char*)this + 0xe, 0, 2000);
}

Packet_DB_Save_Power_War_Guild_Rank::Packet_DB_Save_Power_War_Guild_Rank()
    : PacketHeader(0x6d6, 0x330)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned char*)((char*)this + 0xb) = 0x0;
    *(unsigned int*)((char*)this + 0xc) = 0;
    for (int i = 0; i < 0x64; i++) { new ((char*)this + 0x10 + i * 0x8) STGuildRank; }
    memset((char*)this + 0x10, 0, 800);
}

Packet_DB_Save_Power_War_Point::Packet_DB_Save_Power_War_Point()
    : PacketHeader(0x6ad, 0x14)
{
    (void)0;
}

Packet_DB_Save_Power_War_Point_Reward::Packet_DB_Save_Power_War_Point_Reward()
    : PacketHeader(0x6d9, 0x7df)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    for (int i = 0; i < 0xfa; i++) { new ((char*)this + 0xf + i * 0x8) STPowerWarPointInfo; }
    memset((char*)this + 0xf, 0, 2000);
}

Packet_DB_Save_Power_War_Statue_Ranker::Packet_DB_Save_Power_War_Statue_Ranker()
    : PacketHeader(0x6da, 0x17)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    memset((char*)this + 0xb, 0, 0xc);
}

Packet_DB_Save_Power_War_User_Rank::Packet_DB_Save_Power_War_User_Rank()
    : PacketHeader(0x6d7, 0x7e5)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned char*)((char*)this + 0xb) = 0x0;
    *(unsigned char*)((char*)this + 0xc) = 0x0;
    *(unsigned int*)((char*)this + 0xd) = 0;
    *(unsigned int*)((char*)this + 0x11) = 0;
    for (int i = 0; i < 0xfa; i++) { new ((char*)this + 0x15 + i * 0x8) STUserRank; }
    memset((char*)this + 0x15, 0, 2000);
}

Packet_DB_Upgrade_Guild_Agit::Packet_DB_Upgrade_Guild_Agit()
    : PacketHeader(0x6e4, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_DB_Write_Guild_Member_Memo::Packet_DB_Write_Guild_Member_Memo()
    : PacketHeader(0x4d3, 0x27)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    memset((char*)this + 0x12, 0, 0x15);
}

Packet_DMBW_Delete_To_BlackList::Packet_DMBW_Delete_To_BlackList()
    : PacketHeader(0x5df, 0x30)
{
    *(unsigned int*)((char*)this + 0x2c) = 0xffffffff;
    memset((char*)this + 0xe, 0, 0x1e);
}

Packet_Delete_To_BlackList_Result::Packet_Delete_To_BlackList_Result()
    : PacketHeader(0x5dd, 0x31)
{
    memset((char*)this + 0xe, 0, 0x1e);
}

Packet_Guild_Apply_Origial_Power_Side_Reply::Packet_Guild_Apply_Origial_Power_Side_Reply()
    : PacketHeader(0x6b2, 0x17)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned char*)((char*)this + 0x16) = 0x0;
}

Packet_Guild_Attendance_Info_Reply::Packet_Guild_Attendance_Info_Reply()
    : PacketHeader(0x1bc7, 0x2f)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    new ((char*)this + 0x13) STAttendanceInfo;
}

Packet_Guild_Call_Guild_Invite_To_Caller::Packet_Guild_Call_Guild_Invite_To_Caller()
    : PacketHeader(0x434, 0x16)
{
    (void)0;
}

Packet_Guild_Call_Guild_Invite_To_Invited::Packet_Guild_Call_Guild_Invite_To_Invited()
    : PacketHeader(0x435, 0x47)
{
    memset((char*)this + 0x12, 0, 0x1e);
    memset((char*)this + 0x30, 0, 0x17);
}

Packet_Guild_Cargo_History_Response::Packet_Guild_Cargo_History_Response()
    : PacketHeader(0x70b, 0x972)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    for (int i = 0; i < 0x32; i++) { new ((char*)this + 0x12 + i * 0x30) STGuildCargoLog; }
    memset((char*)this + 0x12, 0, 0x960);
}

Packet_Guild_Cargo_Response::Packet_Guild_Cargo_Response()
    : PacketHeader(0x70a, 0x18ef)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    new ((char*)this + 0x12) STGuildCargoDBInfo;
    *(unsigned char*)((char*)this + 0x18ee) = 0x0;
    memset((char*)this + 0x12, 0, 0x18dc);
}

Packet_Guild_Exp_Book_Delete::Packet_Guild_Exp_Book_Delete()
    : PacketHeader(0x1b6c, 0x1a)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x16) = 0;
}

Packet_Guild_Master_Delegate_FromWeb::Packet_Guild_Master_Delegate_FromWeb()
    : PacketHeader(0x442, 0x34)
{
    memset((char*)this + 0x16, 0, 0x1e);
}

Packet_Guild_Notice_Guild_Master_Delegate::Packet_Guild_Notice_Guild_Master_Delegate()
    : PacketHeader(0x43d, 0x30)
{
    memset((char*)this + 0x12, 0, 0x1e);
}

Packet_Guild_Notice_Guild_Name_Change::Packet_Guild_Notice_Guild_Name_Change()
    : PacketHeader(0x446, 0x2d)
{
    memset((char*)this + 0x16, 0, 0x17);
}

Packet_Guild_Notify_Guild_Member_Memo::Packet_Guild_Notify_Guild_Member_Memo()
    : PacketHeader(0x4d2, 0x45)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    memset((char*)this + 0x30, 0, 0x15);
    memset((char*)this + 0x12, 0, 0x1e);
}

Packet_Guild_Notify_Message_To_Guild_Mem::Packet_Guild_Notify_Message_To_Guild_Mem()
    : PacketHeader(0x42d, 0x77)
{
    memset((char*)this + 0x12, 0, 0x65);
}

Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board()
    : PacketHeader(0x2328, 0x68a)
{
    *(unsigned short*)((char*)this + 0xc) = 0;
    *(unsigned char*)((char*)this + 0xe) = 0x0;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned int*)((char*)this + 0x13) = 0;
    *(unsigned char*)((char*)this + 0x17) = 0x0;
    memset((char*)this + 0x18, 0, 0x672);
}

Packet_Guild_Reply_Guild_Board_Delete::Packet_Guild_Reply_Guild_Board_Delete()
    : PacketHeader(0x2332, 0x14)
{
    *(unsigned short*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xc) = 0;
    *(unsigned int*)((char*)this + 0x10) = 0;
}

Packet_Guild_Reply_Guild_Invite_To_Caller::Packet_Guild_Reply_Guild_Invite_To_Caller()
    : PacketHeader(0x437, 0x34)
{
    memset((char*)this + 0x16, 0, 0x1e);
}

Packet_Guild_Reply_Guild_Invite_To_Invited::Packet_Guild_Reply_Guild_Invite_To_Invited()
    : PacketHeader(0x436, 0x16)
{
    (void)0;
}

Packet_Guild_Reply_Guild_Master_Delegate::Packet_Guild_Reply_Guild_Master_Delegate()
    : PacketHeader(0x43b, 0x16)
{
    (void)0;
}

Packet_Guild_Reply_Guild_Secede::Packet_Guild_Reply_Guild_Secede()
    : PacketHeader(0x439, 0x52)
{
    memset((char*)this + 0x1d, 0, 0x1e);
    memset((char*)this + 0x3b, 0, 0x17);
}

Packet_InnerPakcet_Login::Packet_InnerPakcet_Login()
    : PacketHeader(0xfa0, 0xa)
{
    (void)0;
}

Packet_InnerPakcet_Logout::Packet_InnerPakcet_Logout()
    : PacketHeader(0xfa1, 0xa)
{
    (void)0;
}

Packet_Monitor_Call_Guild_Info_Reply::Packet_Monitor_Call_Guild_Info_Reply()
    : PacketHeader(0x40d, 0xad6)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    for (int i = 0; i < 0x5f; i++) { new ((char*)this + 0x13 + i * 0x1d) STGuildCallInfo; }
}

Packet_Monitor_Event_End::Packet_Monitor_Event_End()
    : PacketHeader(0x450, 0xe)
{
    (void)0;
}

Packet_Monitor_Event_Start::Packet_Monitor_Event_Start()
    : PacketHeader(0x44f, 0x12)
{
    (void)0;
}

Packet_Monitor_Guild_Chat_ToUser::Packet_Monitor_Guild_Chat_ToUser()
    : PacketHeader(0x400, 0x131)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x30) = 0x0;
    memset((char*)this + 0x12, 0, 0x1e);
    memset((char*)this + 0x31, 0, 0x100);
}

Packet_Monitor_Guild_Chat_ToUser_Hyper_Link::Packet_Monitor_Guild_Chat_ToUser_Hyper_Link()
    : PacketHeader(0x2718, 0x26a)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x30) = 0x0;
    *(unsigned char*)((char*)this + 0x169) = 0x0;
    memset((char*)this + 0x12, 0, 0x1e);
    memset((char*)this + 0x16a, 0, 0x100);
    memset((char*)this + 0x31, 0, 0x138);
}

Packet_Monitor_Notice_Guild_Create_ToUser::Packet_Monitor_Notice_Guild_Create_ToUser()
    : PacketHeader(0x40c, 0x2d)
{
    new ((char*)this + 0x10) ST_GuildCreateFromWeb;
    *(unsigned int*)((char*)this + 0x29) = 0xffffffff;
}

Packet_Monitor_Notice_Guild_Dismiss_ToUser::Packet_Monitor_Notice_Guild_Dismiss_ToUser()
    : PacketHeader(0x3fc, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_Monitor_Notice_Guild_Enter::Packet_Monitor_Notice_Guild_Enter()
    : PacketHeader(0x3fd, 0x50)
{
    new ((char*)this + 0x10) ST_Notice_Guild_Enter;
}

Packet_Monitor_Notice_Guild_Enter_ToUser::Packet_Monitor_Notice_Guild_Enter_ToUser()
    : PacketHeader(0x3fd, 0x5a)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    new ((char*)this + 0x14) ST_Notice_Guild_Enter;
}

Packet_Monitor_Notice_Guild_Info::Packet_Monitor_Notice_Guild_Info()
    : PacketHeader(0x40a, 0x139)
{
    *(unsigned int*)((char*)this + 0x12) = 0;
    new ((char*)this + 0x16) STGuildDBInfoOnly;
    memset((char*)this + 0xd4, 0, 0x65);
}

Packet_Monitor_Notice_Guild_Member_Info::Packet_Monitor_Notice_Guild_Member_Info()
    : PacketHeader(0x431, 0x2c)
{
    new ((char*)this + 0x12) STGuildMemerDBInfo;
    memset((char*)this + 0x12, 0, 0x1a);
}

Packet_Monitor_Notice_Guild_Member_Login_out::Packet_Monitor_Notice_Guild_Member_Login_out()
    : PacketHeader(0x407, 0x32)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned int*)((char*)this + 0xb) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xf) = 0;
    *(unsigned char*)((char*)this + 0x13) = 0xff;
    memset((char*)this + 0x14, 0, 0x1e);
}

Packet_Monitor_Notice_Guild_Secede_ToUser::Packet_Monitor_Notice_Guild_Secede_ToUser()
    : PacketHeader(0x3fe, 0x55)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    new ((char*)this + 0x12) ST_Notice_Guild_Secede;
}

Packet_Monitor_Notify_GuildMemberGrade::Packet_Monitor_Notify_GuildMemberGrade()
    : PacketHeader(0x42c, 0x13)
{
    *(unsigned char*)((char*)this + 0x12) = 0xff;
}

Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail()
    : PacketHeader(0x514, 0x12)
{
    (void)0;
}

Packet_Monitor_Reply_Guild_Mail::Packet_Monitor_Reply_Guild_Mail()
    : PacketHeader(0x432, 0x13)
{
    (void)0;
}

Packet_Monitor_SAVE_Guild::Packet_Monitor_SAVE_Guild()
    : PacketHeader(0x409, 0xd0)
{
    *(unsigned char*)((char*)this + 0x10) = 0xff;
    *(unsigned int*)((char*)this + 0xb) = 0;
    new ((char*)this + 0xf) STGuildDBInfoOnly;
}

Packet_Monitor_SAVE_Guild_Member::Packet_Monitor_SAVE_Guild_Member()
    : PacketHeader(0x40f, 0x2e)
{
    *(unsigned char*)((char*)this + 0x10) = 0xff;
    *(unsigned int*)((char*)this + 0xb) = 0;
    new ((char*)this + 0x13) STGuildMemerDBInfo;
}

Packet_Monitor_Send_Guild_Mail::Packet_Monitor_Send_Guild_Mail()
    : PacketHeader(0x432, 0x112)
{
    memset((char*)this + 0x12, 0, 0x100);
}

Packet_Monitor_Set_GuildMember_Grade_FromWeb::Packet_Monitor_Set_GuildMember_Grade_FromWeb()
    : PacketHeader(0x441, 0x17)
{
    (void)0;
}

Packet_Monitor_Set_Guild_Key::Packet_Monitor_Set_Guild_Key()
    : PacketHeader(0x40b, 0x16)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
}

Packet_Monitor_Set_Sub_Guild_Master_Reply::Packet_Monitor_Set_Sub_Guild_Master_Reply()
    : PacketHeader(0x430, 0x3a)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
}

Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat()
    : PacketHeader(0x3ec, 0xb)
{
    *(unsigned char*)((char*)this + 0x10) = 0xff;
}

Packet_Monitor_UDP_User_Getout::Packet_Monitor_UDP_User_Getout()
    : PacketHeader(0x3ee, 0xe)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
}

Packet_No_Cache::Packet_No_Cache()
    : PacketHeader(0x1b6d, 0x16)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
}

Packet_Notice_DB_Guild_War_End::Packet_Notice_DB_Guild_War_End()
    : PacketHeader(0x412, 0x6f)
{
    memset((char*)this + 0xb, 0, 0x28);
    memset((char*)this + 0x33, 0, 0x28);
    memset((char*)this + 0x5b, 0, 0x14);
}

Packet_Notice_DB_Save_Guild_War_Point::Packet_Notice_DB_Save_Guild_War_Point()
    : PacketHeader(0x418, 0x5b)
{
    memset((char*)this + 0xb, 0, 0x28);
    memset((char*)this + 0x33, 0, 0x28);
}

Packet_Notice_GuildName_On_Guild_Create::Packet_Notice_GuildName_On_Guild_Create()
    : PacketHeader(0x445, 0x2e)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0xffffffff;
    *(unsigned int*)((char*)this + 0x12) = 0;
    *(unsigned char*)((char*)this + 0x2d) = 0xff;
    memset((char*)this + 0x16, 0, 0x17);
}

Packet_Notice_Guild_Cargo::Packet_Notice_Guild_Cargo()
    : PacketHeader(0x712, 0x18ee)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    new ((char*)this + 0x12) STGuildCargoDBInfo;
    memset((char*)this + 0x12, 0, 0x18dc);
}

Packet_Notice_Has_Been_Guild_Master::Packet_Notice_Has_Been_Guild_Master()
    : PacketHeader(0x43e, 0x12)
{
    (void)0;
}

Packet_Notice_Power_War_End_Time::Packet_Notice_Power_War_End_Time()
    : PacketHeader(0x6ac, 0x13)
{
    (void)0;
}

Packet_Notice_Power_War_Info::Packet_Notice_Power_War_Info()
    : PacketHeader(0x6ae, 0x13)
{
    (void)0;
}

Packet_Notice_Power_War_Rank::Packet_Notice_Power_War_Rank()
    : PacketHeader(0x6d8, 0x16)
{
    memset((char*)this + 0x10, 0, 0xc);
}

Packet_Notice_Power_war_End_Info::Packet_Notice_Power_war_End_Info()
    : PacketHeader(0x6b0, 0x27)
{
    *(unsigned int*)((char*)this + 0x10) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned char*)((char*)this + 0x12) = 0x0;
    *(unsigned int*)((char*)this + 0x13) = 0;
    *(unsigned int*)((char*)this + 0x17) = 0;
    *(unsigned int*)((char*)this + 0x1b) = 0;
    *(unsigned int*)((char*)this + 0x1f) = 0;
    *(unsigned int*)((char*)this + 0x23) = 0;
}

Packet_Notify_Today_Guild_Member::Packet_Notify_Today_Guild_Member()
    : PacketHeader(0x1bc1, 0x3d)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    memset((char*)this + 0x16, 0, 0x27);
}

Packet_Query_Today_Guild_Member::Packet_Query_Today_Guild_Member()
    : PacketHeader(0x1bbf, 0xe)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
}

Packet_Register_To_BlackList_RESULT::Packet_Register_To_BlackList_RESULT()
    : PacketHeader(0x5dc, 0x31)
{
    memset((char*)this + 0xe, 0, 0x1e);
}

Packet_Reply_Change_Guild_Name::Packet_Reply_Change_Guild_Name()
    : PacketHeader(0x444, 0x2e)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    memset((char*)this + 0x17, 0, 0x17);
}

Packet_Reply_Guild_Create::Packet_Reply_Guild_Create()
    : PacketHeader(0x43f, 0x2d)
{
    memset((char*)this + 0x16, 0, 0x17);
}

Packet_Reply_Power_War_Score::Packet_Reply_Power_War_Score()
    : PacketHeader(0x6a5, 0x12)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_Request_Result_BlackList::Packet_Request_Result_BlackList()
    : PacketHeader(0x5e0, 0x19f)
{
    (void)0;
}

Packet_Server_Queue_Load_Statistic::Packet_Server_Queue_Load_Statistic()
    : PacketHeader(0x9d2, 0xe)
{
    *(unsigned char*)((char*)this + 0x10) = 0x0;
    *(unsigned char*)((char*)this + 0xb) = 0x0;
    *(unsigned short*)((char*)this + 0xc) = 0;
}

Packet_Tcp_Server_Connect::Packet_Tcp_Server_Connect()
    : PacketHeader(0x3f8, 0xb)
{
    (void)0;
}

Packet_UnChangable_GuildInfo_Save::Packet_UnChangable_GuildInfo_Save()
    : PacketHeader(0x452, 0x30)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    memset((char*)this + 0x12, 0, 0x1e);
}

Packet_Web_Notify_Message_To_Guild::Packet_Web_Notify_Message_To_Guild()
    : PacketHeader(0x42d, 0x74)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned char*)((char*)this + 0xe) = 0x0;
    memset((char*)this + 0xf, 0, 0x65);
}


Packet_Answer_Guild_Member_Connection_From_Web::
    Packet_Answer_Guild_Member_Connection_From_Web()
    : PacketHeader(0x443, 0x5ec)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    *(unsigned short*)((char*)this + 0xe) = 0;
    memset((char*)this + 0x10, 0, 0x5dc);
}

Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade::
    Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade()
    : PacketHeader(0x42b, 0x33)
{
    *(unsigned char*)((char*)this + 0xa) = 0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned char*)((char*)this + 0x32) = 0xff;
    memset((char*)this + 0x14, 0, 0x1e);
}

Packet_Monitor_Notice_Guild_Mark_Change_ToUser::
    Packet_Monitor_Notice_Guild_Mark_Change_ToUser()
    : PacketHeader(0x3ff, 0x16)
{
    *(unsigned int*)((char*)this + 0xa) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_Send_All_User_Info_Minimum_For_Guild_System::
    Packet_Send_All_User_Info_Minimum_For_Guild_System()
    : PacketHeader(0x447, 0x16)
{
}
