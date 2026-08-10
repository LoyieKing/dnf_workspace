// df_guild_r — 缺失 Packet 构造器声明（由 gen_packet_ctors.py 生成）
#ifndef GUILD_PACKETS_H_
#define GUILD_PACKETS_H_

#include "PacketHeader.h"

class Packet_Achieve_Guild_Attendance : public PacketHeader {
public:
    Packet_Achieve_Guild_Attendance();
    char m_data[0x10];
};

class Packet_Add_Guild_Fund_Result : public PacketHeader {
public:
    Packet_Add_Guild_Fund_Result();
    char m_data[0xd];
};

class Packet_Answer_Join_Power : public PacketHeader {
public:
    Packet_Answer_Join_Power();
    char m_data[0xd];
};

class Packet_Answer_Secede_Power : public PacketHeader {
public:
    Packet_Answer_Secede_Power();
    char m_data[0xd];
};

class Packet_Approve_Join_Guild_Result : public PacketHeader {
public:
    Packet_Approve_Join_Guild_Result();
    char m_data[0x10];
};

class Packet_Channel_Check_Guild_Cargo_Push_Item : public PacketHeader {
public:
    Packet_Channel_Check_Guild_Cargo_Push_Item();
    char m_data[0x1d];
};

class Packet_Channel_Create_Guild_Agit : public PacketHeader {
public:
    Packet_Channel_Create_Guild_Agit();
    char m_data[0xc];
};

class Packet_Channel_Delete_Guild_Agit : public PacketHeader {
public:
    Packet_Channel_Delete_Guild_Agit();
    char m_data[0xd];
};

class Packet_Channel_Guild_Agit_Info : public PacketHeader {
public:
    Packet_Channel_Guild_Agit_Info();
    char m_data[0xd];
};

class Packet_Channel_Guild_Cargo_Move_Item : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Move_Item();
    char m_data[0x11];
};

class Packet_Channel_Guild_Cargo_Pop_Item : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Pop_Item();
    char m_data[0x46];
};

class Packet_Channel_Guild_Cargo_Push_Item : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Push_Item();
    char m_data[0x45];
};

class Packet_Channel_Guild_Cargo_Upgrade : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Upgrade();
    char m_data[0xa];
};

class Packet_Channel_Power_War_Process_Info : public PacketHeader {
public:
    Packet_Channel_Power_War_Process_Info();
    char m_data[0x1c];
};

class Packet_DBMW_Connection_Check : public PacketHeader {
public:
    Packet_DBMW_Connection_Check();
    char m_data[0x1];
};

class Packet_DBMW_Query_Msg : public PacketHeader {
public:
    Packet_DBMW_Query_Msg();
    char m_data[0x1009];
};

class Packet_DBMW_Register_To_BlackList : public PacketHeader {
public:
    Packet_DBMW_Register_To_BlackList();
    char m_data[0x2a];
};

class Packet_DBMW_Request_BlackList : public PacketHeader {
public:
    Packet_DBMW_Request_BlackList();
    char m_data[0x5];
};

class Packet_DBMW_Request_Guild_Create : public PacketHeader {
public:
    Packet_DBMW_Request_Guild_Create();
    char m_data[0x52];
};

class Packet_DBMW_Save_Guild_Join : public PacketHeader {
public:
    Packet_DBMW_Save_Guild_Join();
    char m_data[0x36];
};

class Packet_DBMW_Save_Power_Secede_Time : public PacketHeader {
public:
    Packet_DBMW_Save_Power_Secede_Time();
    char m_data[0x5];
};

class Packet_DBMW_Send_Guild_Mail : public PacketHeader {
public:
    Packet_DBMW_Send_Guild_Mail();
    char m_data[0x11f];
};

class Packet_DB_Call_Guild_All_Members : public PacketHeader {
public:
    Packet_DB_Call_Guild_All_Members();
    char m_data[0xa];
};

class Packet_DB_Call_Unconn_Guild_Member : public PacketHeader {
public:
    Packet_DB_Call_Unconn_Guild_Member();
    char m_data[0xa];
};

class Packet_DB_Create_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Create_Guild_Agit();
    char m_data[0xa];
};

class Packet_DB_Delete_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Delete_Guild_Agit();
    char m_data[0xa];
};

class Packet_DB_Insert_Guild_Cargo_History : public PacketHeader {
public:
    Packet_DB_Insert_Guild_Cargo_History();
    char m_data[0x5c];
};

class Packet_DB_Load_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Load_Guild_Agit();
    char m_data[0xa];
};

class Packet_DB_Load_Request_Guild_Board_Delete : public PacketHeader {
public:
    Packet_DB_Load_Request_Guild_Board_Delete();
    char m_data[0xd];
};

class Packet_DB_Load_Request_Guild_Board_Open : public PacketHeader {
public:
    Packet_DB_Load_Request_Guild_Board_Open();
    char m_data[0xa];
};

class Packet_DB_Load_Request_Guild_Board_Write : public PacketHeader {
public:
    Packet_DB_Load_Request_Guild_Board_Write();
    char m_data[0xb2];
};

class Packet_DB_Load_Request_Web_Guild_Board_Write : public PacketHeader {
public:
    Packet_DB_Load_Request_Web_Guild_Board_Write();
    char m_data[0xc];
};

class Packet_DB_Query_Guild : public PacketHeader {
public:
    Packet_DB_Query_Guild();
    char m_data[0x9];
};

class Packet_DB_Query_Guild_Member : public PacketHeader {
public:
    Packet_DB_Query_Guild_Member();
    char m_data[0x5];
};

class Packet_DB_Query_On_Guild_Booting : public PacketHeader {
public:
    Packet_DB_Query_On_Guild_Booting();
    char m_data[0x1];
};

class Packet_DB_Request_Approve_Join_Guild : public PacketHeader {
public:
    Packet_DB_Request_Approve_Join_Guild();
    char m_data[0xd];
};

class Packet_DB_Request_Guild_Master_Delegate : public PacketHeader {
public:
    Packet_DB_Request_Guild_Master_Delegate();
    char m_data[0x27];
};

class Packet_DB_Request_Guild_Secede : public PacketHeader {
public:
    Packet_DB_Request_Guild_Secede();
    char m_data[0x2f];
};

class Packet_DB_Save_Power_War_Bonus_Point : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Bonus_Point();
    char m_data[0x7d4];
};

class Packet_DB_Save_Power_War_Guild_Rank : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Guild_Rank();
    char m_data[0x326];
};

class Packet_DB_Save_Power_War_Point : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Point();
    char m_data[0xa];
};

class Packet_DB_Save_Power_War_Point_Reward : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Point_Reward();
    char m_data[0x7d5];
};

class Packet_DB_Save_Power_War_Statue_Ranker : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Statue_Ranker();
    char m_data[0xd];
};

class Packet_DB_Save_Power_War_User_Rank : public PacketHeader {
public:
    Packet_DB_Save_Power_War_User_Rank();
    char m_data[0x7db];
};

class Packet_DB_Upgrade_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Upgrade_Guild_Agit();
    char m_data[0xa];
};

class Packet_DB_Write_Guild_Member_Memo : public PacketHeader {
public:
    Packet_DB_Write_Guild_Member_Memo();
    char m_data[0x1d];
};

class Packet_DMBW_Delete_To_BlackList : public PacketHeader {
public:
    Packet_DMBW_Delete_To_BlackList();
    char m_data[0x26];
};

class Packet_Delete_To_BlackList_Result : public PacketHeader {
public:
    Packet_Delete_To_BlackList_Result();
    char m_data[0x27];
};

class Packet_Guild_Apply_Origial_Power_Side_Reply : public PacketHeader {
public:
    Packet_Guild_Apply_Origial_Power_Side_Reply();
    char m_data[0xd];
};

class Packet_Guild_Attendance_Info_Reply : public PacketHeader {
public:
    Packet_Guild_Attendance_Info_Reply();
    char m_data[0x25];
};

class Packet_Guild_Call_Guild_Invite_To_Caller : public PacketHeader {
public:
    Packet_Guild_Call_Guild_Invite_To_Caller();
    char m_data[0xc];
};

class Packet_Guild_Call_Guild_Invite_To_Invited : public PacketHeader {
public:
    Packet_Guild_Call_Guild_Invite_To_Invited();
    char m_data[0x3d];
};

class Packet_Guild_Cargo_History_Response : public PacketHeader {
public:
    Packet_Guild_Cargo_History_Response();
    char m_data[0x968];
};

class Packet_Guild_Cargo_Response : public PacketHeader {
public:
    Packet_Guild_Cargo_Response();
    char m_data[0x18e5];
};

class Packet_Guild_Exp_Book_Delete : public PacketHeader {
public:
    Packet_Guild_Exp_Book_Delete();
    char m_data[0x10];
};

class Packet_Guild_Master_Delegate_FromWeb : public PacketHeader {
public:
    Packet_Guild_Master_Delegate_FromWeb();
    char m_data[0x2a];
};

class Packet_Guild_Notice_Guild_Master_Delegate : public PacketHeader {
public:
    Packet_Guild_Notice_Guild_Master_Delegate();
    char m_data[0x26];
};

class Packet_Guild_Notice_Guild_Name_Change : public PacketHeader {
public:
    Packet_Guild_Notice_Guild_Name_Change();
    char m_data[0x23];
};

class Packet_Guild_Notify_Guild_Member_Memo : public PacketHeader {
public:
    Packet_Guild_Notify_Guild_Member_Memo();
    char m_data[0x3b];
};

class Packet_Guild_Notify_Message_To_Guild_Mem : public PacketHeader {
public:
    Packet_Guild_Notify_Message_To_Guild_Mem();
    char m_data[0x6d];
};

class Packet_Guild_Reply_Guild_Board : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Board();
    char m_data[0x680];
};

class Packet_Guild_Reply_Guild_Board_Delete : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Board_Delete();
    char m_data[0xa];
};

class Packet_Guild_Reply_Guild_Invite_To_Caller : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Invite_To_Caller();
    char m_data[0x2a];
};

class Packet_Guild_Reply_Guild_Invite_To_Invited : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Invite_To_Invited();
    char m_data[0xc];
};

class Packet_Guild_Reply_Guild_Master_Delegate : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Master_Delegate();
    char m_data[0xc];
};

class Packet_Guild_Reply_Guild_Secede : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Secede();
    char m_data[0x48];
};

class Packet_InnerPakcet_Login : public PacketHeader {
public:
    Packet_InnerPakcet_Login();
};

class Packet_InnerPakcet_Logout : public PacketHeader {
public:
    Packet_InnerPakcet_Logout();
};

class Packet_Monitor_Call_Guild_Info_Reply : public PacketHeader {
public:
    Packet_Monitor_Call_Guild_Info_Reply();
    char m_data[0xacc];
};

class Packet_Monitor_Event_End : public PacketHeader {
public:
    Packet_Monitor_Event_End();
    char m_data[0x4];
};

class Packet_Monitor_Event_Start : public PacketHeader {
public:
    Packet_Monitor_Event_Start();
    char m_data[0x8];
};

class Packet_Monitor_Guild_Chat_ToUser : public PacketHeader {
public:
    Packet_Monitor_Guild_Chat_ToUser();
    char m_data[0x127];
};

class Packet_Monitor_Guild_Chat_ToUser_Hyper_Link : public PacketHeader {
public:
    Packet_Monitor_Guild_Chat_ToUser_Hyper_Link();
    char m_data[0x260];
};

class Packet_Monitor_Notice_Guild_Create_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Create_ToUser();
    char m_data[0x23];
};

class Packet_Monitor_Notice_Guild_Dismiss_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Dismiss_ToUser();
    char m_data[0xa];
};

class Packet_Monitor_Notice_Guild_Enter : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Enter();
    char m_data[0x46];
};

class Packet_Monitor_Notice_Guild_Enter_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Enter_ToUser();
    char m_data[0x50];
};

class Packet_Monitor_Notice_Guild_Info : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Info();
    char m_data[0x12f];
};

class Packet_Monitor_Notice_Guild_Member_Info : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Member_Info();
    char m_data[0x22];
};

class Packet_Monitor_Notice_Guild_Member_Login_out : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Member_Login_out();
    char m_data[0x28];
};

class Packet_Monitor_Notice_Guild_Secede_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Secede_ToUser();
    char m_data[0x4b];
};

class Packet_Monitor_Notify_GuildMemberGrade : public PacketHeader {
public:
    Packet_Monitor_Notify_GuildMemberGrade();
    char m_data[0x9];
};

class Packet_Monitor_Notify_New_Mail : public PacketHeader {
public:
    Packet_Monitor_Notify_New_Mail();
    char m_data[0x8];
};

class Packet_Monitor_Reply_Guild_Mail : public PacketHeader {
public:
    Packet_Monitor_Reply_Guild_Mail();
    char m_data[0x9];
};

class Packet_Monitor_SAVE_Guild : public PacketHeader {
public:
    Packet_Monitor_SAVE_Guild();
    char m_data[0xc6];
};

class Packet_Monitor_SAVE_Guild_Member : public PacketHeader {
public:
    Packet_Monitor_SAVE_Guild_Member();
    char m_data[0x24];
};

class Packet_Monitor_Send_Guild_Mail : public PacketHeader {
public:
    Packet_Monitor_Send_Guild_Mail();
    char m_data[0x108];
};

class Packet_Monitor_Set_GuildMember_Grade_FromWeb : public PacketHeader {
public:
    Packet_Monitor_Set_GuildMember_Grade_FromWeb();
    char m_data[0xd];
};

class Packet_Monitor_Set_Guild_Key : public PacketHeader {
public:
    Packet_Monitor_Set_Guild_Key();
    char m_data[0xc];
};

class Packet_Monitor_Set_Sub_Guild_Master_Reply : public PacketHeader {
public:
    Packet_Monitor_Set_Sub_Guild_Master_Reply();
    char m_data[0x30];
};

class Packet_Monitor_UDP_HeartBeat : public PacketHeader {
public:
    Packet_Monitor_UDP_HeartBeat();
    char m_data[0x7];
};

class Packet_Monitor_UDP_User_Getout : public PacketHeader {
public:
    Packet_Monitor_UDP_User_Getout();
    char m_data[0xa];
};

class Packet_No_Cache : public PacketHeader {
public:
    Packet_No_Cache();
    char m_data[0xc];
};

class Packet_Notice_DB_Guild_War_End : public PacketHeader {
public:
    Packet_Notice_DB_Guild_War_End();
    char m_data[0x65];
};

class Packet_Notice_DB_Save_Guild_War_Point : public PacketHeader {
public:
    Packet_Notice_DB_Save_Guild_War_Point();
    char m_data[0x51];
};

class Packet_Notice_GuildName_On_Guild_Create : public PacketHeader {
public:
    Packet_Notice_GuildName_On_Guild_Create();
    char m_data[0x24];
};

class Packet_Notice_Guild_Cargo : public PacketHeader {
public:
    Packet_Notice_Guild_Cargo();
    char m_data[0x18e4];
};

class Packet_Notice_Has_Been_Guild_Master : public PacketHeader {
public:
    Packet_Notice_Has_Been_Guild_Master();
    char m_data[0x8];
};

class Packet_Notice_Power_War_End_Time : public PacketHeader {
public:
    Packet_Notice_Power_War_End_Time();
    char m_data[0x9];
};

class Packet_Notice_Power_War_Info : public PacketHeader {
public:
    Packet_Notice_Power_War_Info();
    char m_data[0x9];
};

class Packet_Notice_Power_War_Rank : public PacketHeader {
public:
    Packet_Notice_Power_War_Rank();
    char m_data[0x12];
};

class Packet_Notice_Power_war_End_Info : public PacketHeader {
public:
    Packet_Notice_Power_war_End_Info();
    char m_data[0x1d];
};

class Packet_Notify_Today_Guild_Member : public PacketHeader {
public:
    Packet_Notify_Today_Guild_Member();
    char m_data[0x33];
};

class Packet_Query_Today_Guild_Member : public PacketHeader {
public:
    Packet_Query_Today_Guild_Member();
    char m_data[0xa];
};

class Packet_Register_To_BlackList_RESULT : public PacketHeader {
public:
    Packet_Register_To_BlackList_RESULT();
    char m_data[0x27];
};

class Packet_Reply_Change_Guild_Name : public PacketHeader {
public:
    Packet_Reply_Change_Guild_Name();
    char m_data[0x24];
};

class Packet_Reply_Guild_Create : public PacketHeader {
public:
    Packet_Reply_Guild_Create();
    char m_data[0x23];
};

class Packet_Reply_Power_War_Score : public PacketHeader {
public:
    Packet_Reply_Power_War_Score();
    char m_data[0xa];
};

class Packet_Request_Result_BlackList : public PacketHeader {
public:
    Packet_Request_Result_BlackList();
    char m_data[0x195];
};

class Packet_Server_Queue_Load_Statistic : public PacketHeader {
public:
    Packet_Server_Queue_Load_Statistic();
    unsigned char m_flag;   // +0xa
    unsigned char m_param;  // +0xb
    unsigned short m_value; // +0xc
};

class Packet_Tcp_Server_Connect : public PacketHeader {
public:
    Packet_Tcp_Server_Connect();
    unsigned char m_field_a;   // +0xa（ORIG 直写 movb $0xcb,-0xNN(%ebp)）
};

class Packet_UnChangable_GuildInfo_Save : public PacketHeader {
public:
    Packet_UnChangable_GuildInfo_Save();
    char m_data[0x26];
};

class Packet_Web_Notify_Message_To_Guild : public PacketHeader {
public:
    Packet_Web_Notify_Message_To_Guild();
    char m_data[0x6a];
};


class Packet_Answer_Guild_Member_Connection_From_Web : public PacketHeader {
public:
    Packet_Answer_Guild_Member_Connection_From_Web();
    char m_data[0x5e2];
};

class Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade : public PacketHeader {
public:
    Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade();
    char m_data[0x29];
};

class Packet_Monitor_Notice_Guild_Mark_Change_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Mark_Change_ToUser();
    char m_data[0xc];
};

class Packet_Send_All_User_Info_Minimum_For_Guild_System : public PacketHeader {
public:
    Packet_Send_All_User_Info_Minimum_For_Guild_System();
    char m_data[0xc];
};

#endif  // GUILD_PACKETS_H_
