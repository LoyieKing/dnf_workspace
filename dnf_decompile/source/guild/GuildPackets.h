// df_guild_r — 缺失 Packet 构造器声明（由 gen_packet_ctors.py 生成）
#ifndef GUILD_PACKETS_H_
#define GUILD_PACKETS_H_

#include "PacketHeader.h"

class Packet_Achieve_Guild_Attendance : public PacketHeader {
public:
    Packet_Achieve_Guild_Attendance();
};

class Packet_Add_Guild_Fund_Result : public PacketHeader {
public:
    Packet_Add_Guild_Fund_Result();
};

class Packet_Answer_Join_Power : public PacketHeader {
public:
    Packet_Answer_Join_Power();
};

class Packet_Answer_Secede_Power : public PacketHeader {
public:
    Packet_Answer_Secede_Power();
};

class Packet_Approve_Join_Guild_Result : public PacketHeader {
public:
    Packet_Approve_Join_Guild_Result();
};

class Packet_Channel_Check_Guild_Cargo_Push_Item : public PacketHeader {
public:
    Packet_Channel_Check_Guild_Cargo_Push_Item();
};

class Packet_Channel_Create_Guild_Agit : public PacketHeader {
public:
    Packet_Channel_Create_Guild_Agit();
};

class Packet_Channel_Delete_Guild_Agit : public PacketHeader {
public:
    Packet_Channel_Delete_Guild_Agit();
};

class Packet_Channel_Guild_Agit_Info : public PacketHeader {
public:
    Packet_Channel_Guild_Agit_Info();
};

class Packet_Channel_Guild_Cargo_Move_Item : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Move_Item();
};

class Packet_Channel_Guild_Cargo_Pop_Item : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Pop_Item();
};

class Packet_Channel_Guild_Cargo_Push_Item : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Push_Item();
};

class Packet_Channel_Guild_Cargo_Upgrade : public PacketHeader {
public:
    Packet_Channel_Guild_Cargo_Upgrade();
};

class Packet_Channel_Power_War_Process_Info : public PacketHeader {
public:
    Packet_Channel_Power_War_Process_Info();
};

class Packet_DBMW_Connection_Check : public PacketHeader {
public:
    Packet_DBMW_Connection_Check();
};

class Packet_DBMW_Query_Msg : public PacketHeader {
public:
    Packet_DBMW_Query_Msg();
};

class Packet_DBMW_Register_To_BlackList : public PacketHeader {
public:
    Packet_DBMW_Register_To_BlackList();
};

class Packet_DBMW_Request_BlackList : public PacketHeader {
public:
    Packet_DBMW_Request_BlackList();
};

class Packet_DBMW_Request_Guild_Create : public PacketHeader {
public:
    Packet_DBMW_Request_Guild_Create();
};

class Packet_DBMW_Save_Guild_Join : public PacketHeader {
public:
    Packet_DBMW_Save_Guild_Join();
};

class Packet_DBMW_Save_Power_Secede_Time : public PacketHeader {
public:
    Packet_DBMW_Save_Power_Secede_Time();
};

class Packet_DBMW_Send_Guild_Mail : public PacketHeader {
public:
    Packet_DBMW_Send_Guild_Mail();
};

class Packet_DB_Call_Guild_All_Members : public PacketHeader {
public:
    Packet_DB_Call_Guild_All_Members();
};

class Packet_DB_Call_Unconn_Guild_Member : public PacketHeader {
public:
    Packet_DB_Call_Unconn_Guild_Member();
};

class Packet_DB_Create_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Create_Guild_Agit();
};

class Packet_DB_Delete_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Delete_Guild_Agit();
};

class Packet_DB_Insert_Guild_Cargo_History : public PacketHeader {
public:
    Packet_DB_Insert_Guild_Cargo_History();
};

class Packet_DB_Load_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Load_Guild_Agit();
};

class Packet_DB_Load_Request_Guild_Board_Delete : public PacketHeader {
public:
    Packet_DB_Load_Request_Guild_Board_Delete();
};

class Packet_DB_Load_Request_Guild_Board_Open : public PacketHeader {
public:
    Packet_DB_Load_Request_Guild_Board_Open();
};

class Packet_DB_Load_Request_Guild_Board_Write : public PacketHeader {
public:
    Packet_DB_Load_Request_Guild_Board_Write();
};

class Packet_DB_Load_Request_Web_Guild_Board_Write : public PacketHeader {
public:
    Packet_DB_Load_Request_Web_Guild_Board_Write();
};

class Packet_DB_Query_Guild : public PacketHeader {
public:
    Packet_DB_Query_Guild();
};

class Packet_DB_Query_Guild_Member : public PacketHeader {
public:
    Packet_DB_Query_Guild_Member();
};

class Packet_DB_Query_On_Guild_Booting : public PacketHeader {
public:
    Packet_DB_Query_On_Guild_Booting();
};

class Packet_DB_Request_Approve_Join_Guild : public PacketHeader {
public:
    Packet_DB_Request_Approve_Join_Guild();
};

class Packet_DB_Request_Guild_Master_Delegate : public PacketHeader {
public:
    Packet_DB_Request_Guild_Master_Delegate();
};

class Packet_DB_Request_Guild_Secede : public PacketHeader {
public:
    Packet_DB_Request_Guild_Secede();
};

class Packet_DB_Save_Power_War_Bonus_Point : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Bonus_Point();
};

class Packet_DB_Save_Power_War_Guild_Rank : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Guild_Rank();
};

class Packet_DB_Save_Power_War_Point : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Point();
};

class Packet_DB_Save_Power_War_Point_Reward : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Point_Reward();
};

class Packet_DB_Save_Power_War_Statue_Ranker : public PacketHeader {
public:
    Packet_DB_Save_Power_War_Statue_Ranker();
};

class Packet_DB_Save_Power_War_User_Rank : public PacketHeader {
public:
    Packet_DB_Save_Power_War_User_Rank();
};

class Packet_DB_Upgrade_Guild_Agit : public PacketHeader {
public:
    Packet_DB_Upgrade_Guild_Agit();
};

class Packet_DB_Write_Guild_Member_Memo : public PacketHeader {
public:
    Packet_DB_Write_Guild_Member_Memo();
};

class Packet_DMBW_Delete_To_BlackList : public PacketHeader {
public:
    Packet_DMBW_Delete_To_BlackList();
};

class Packet_Delete_To_BlackList_Result : public PacketHeader {
public:
    Packet_Delete_To_BlackList_Result();
};

class Packet_Guild_Apply_Origial_Power_Side_Reply : public PacketHeader {
public:
    Packet_Guild_Apply_Origial_Power_Side_Reply();
};

class Packet_Guild_Attendance_Info_Reply : public PacketHeader {
public:
    Packet_Guild_Attendance_Info_Reply();
};

class Packet_Guild_Call_Guild_Invite_To_Caller : public PacketHeader {
public:
    Packet_Guild_Call_Guild_Invite_To_Caller();
};

class Packet_Guild_Call_Guild_Invite_To_Invited : public PacketHeader {
public:
    Packet_Guild_Call_Guild_Invite_To_Invited();
};

class Packet_Guild_Cargo_History_Response : public PacketHeader {
public:
    Packet_Guild_Cargo_History_Response();
};

class Packet_Guild_Cargo_Response : public PacketHeader {
public:
    Packet_Guild_Cargo_Response();
};

class Packet_Guild_Exp_Book_Delete : public PacketHeader {
public:
    Packet_Guild_Exp_Book_Delete();
};

class Packet_Guild_Master_Delegate_FromWeb : public PacketHeader {
public:
    Packet_Guild_Master_Delegate_FromWeb();
};

class Packet_Guild_Notice_Guild_Master_Delegate : public PacketHeader {
public:
    Packet_Guild_Notice_Guild_Master_Delegate();
};

class Packet_Guild_Notice_Guild_Name_Change : public PacketHeader {
public:
    Packet_Guild_Notice_Guild_Name_Change();
};

class Packet_Guild_Notify_Guild_Member_Memo : public PacketHeader {
public:
    Packet_Guild_Notify_Guild_Member_Memo();
};

class Packet_Guild_Notify_Message_To_Guild_Mem : public PacketHeader {
public:
    Packet_Guild_Notify_Message_To_Guild_Mem();
};

class Packet_Guild_Reply_Guild_Board : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Board();
};

class Packet_Guild_Reply_Guild_Board_Delete : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Board_Delete();
};

class Packet_Guild_Reply_Guild_Invite_To_Caller : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Invite_To_Caller();
};

class Packet_Guild_Reply_Guild_Invite_To_Invited : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Invite_To_Invited();
};

class Packet_Guild_Reply_Guild_Master_Delegate : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Master_Delegate();
};

class Packet_Guild_Reply_Guild_Secede : public PacketHeader {
public:
    Packet_Guild_Reply_Guild_Secede();
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
};

class Packet_Monitor_Event_End : public PacketHeader {
public:
    Packet_Monitor_Event_End();
};

class Packet_Monitor_Event_Start : public PacketHeader {
public:
    Packet_Monitor_Event_Start();
};

class Packet_Monitor_Guild_Chat_ToUser : public PacketHeader {
public:
    Packet_Monitor_Guild_Chat_ToUser();
};

class Packet_Monitor_Guild_Chat_ToUser_Hyper_Link : public PacketHeader {
public:
    Packet_Monitor_Guild_Chat_ToUser_Hyper_Link();
};

class Packet_Monitor_Notice_Guild_Create_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Create_ToUser();
};

class Packet_Monitor_Notice_Guild_Dismiss_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Dismiss_ToUser();
};

class Packet_Monitor_Notice_Guild_Enter : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Enter();
};

class Packet_Monitor_Notice_Guild_Enter_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Enter_ToUser();
};

class Packet_Monitor_Notice_Guild_Info : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Info();
};

class Packet_Monitor_Notice_Guild_Member_Info : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Member_Info();
};

class Packet_Monitor_Notice_Guild_Member_Login_out : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Member_Login_out();
};

class Packet_Monitor_Notice_Guild_Secede_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Secede_ToUser();
};

class Packet_Monitor_Notify_GuildMemberGrade : public PacketHeader {
public:
    Packet_Monitor_Notify_GuildMemberGrade();
};

class Packet_Monitor_Notify_New_Mail : public PacketHeader {
public:
    Packet_Monitor_Notify_New_Mail();
};

class Packet_Monitor_Reply_Guild_Mail : public PacketHeader {
public:
    Packet_Monitor_Reply_Guild_Mail();
};

class Packet_Monitor_SAVE_Guild : public PacketHeader {
public:
    Packet_Monitor_SAVE_Guild();
};

class Packet_Monitor_SAVE_Guild_Member : public PacketHeader {
public:
    Packet_Monitor_SAVE_Guild_Member();
};

class Packet_Monitor_Send_Guild_Mail : public PacketHeader {
public:
    Packet_Monitor_Send_Guild_Mail();
};

class Packet_Monitor_Set_GuildMember_Grade_FromWeb : public PacketHeader {
public:
    Packet_Monitor_Set_GuildMember_Grade_FromWeb();
};

class Packet_Monitor_Set_Guild_Key : public PacketHeader {
public:
    Packet_Monitor_Set_Guild_Key();
};

class Packet_Monitor_Set_Sub_Guild_Master_Reply : public PacketHeader {
public:
    Packet_Monitor_Set_Sub_Guild_Master_Reply();
};

class Packet_Monitor_UDP_HeartBeat : public PacketHeader {
public:
    Packet_Monitor_UDP_HeartBeat();
};

class Packet_Monitor_UDP_User_Getout : public PacketHeader {
public:
    Packet_Monitor_UDP_User_Getout();
};

class Packet_No_Cache : public PacketHeader {
public:
    Packet_No_Cache();
};

class Packet_Notice_DB_Guild_War_End : public PacketHeader {
public:
    Packet_Notice_DB_Guild_War_End();
};

class Packet_Notice_DB_Save_Guild_War_Point : public PacketHeader {
public:
    Packet_Notice_DB_Save_Guild_War_Point();
};

class Packet_Notice_GuildName_On_Guild_Create : public PacketHeader {
public:
    Packet_Notice_GuildName_On_Guild_Create();
};

class Packet_Notice_Guild_Cargo : public PacketHeader {
public:
    Packet_Notice_Guild_Cargo();
};

class Packet_Notice_Has_Been_Guild_Master : public PacketHeader {
public:
    Packet_Notice_Has_Been_Guild_Master();
};

class Packet_Notice_Power_War_End_Time : public PacketHeader {
public:
    Packet_Notice_Power_War_End_Time();
};

class Packet_Notice_Power_War_Info : public PacketHeader {
public:
    Packet_Notice_Power_War_Info();
};

class Packet_Notice_Power_War_Rank : public PacketHeader {
public:
    Packet_Notice_Power_War_Rank();
};

class Packet_Notice_Power_war_End_Info : public PacketHeader {
public:
    Packet_Notice_Power_war_End_Info();
};

class Packet_Notify_Today_Guild_Member : public PacketHeader {
public:
    Packet_Notify_Today_Guild_Member();
};

class Packet_Query_Today_Guild_Member : public PacketHeader {
public:
    Packet_Query_Today_Guild_Member();
};

class Packet_Register_To_BlackList_RESULT : public PacketHeader {
public:
    Packet_Register_To_BlackList_RESULT();
};

class Packet_Reply_Change_Guild_Name : public PacketHeader {
public:
    Packet_Reply_Change_Guild_Name();
};

class Packet_Reply_Guild_Create : public PacketHeader {
public:
    Packet_Reply_Guild_Create();
};

class Packet_Reply_Power_War_Score : public PacketHeader {
public:
    Packet_Reply_Power_War_Score();
};

class Packet_Request_Result_BlackList : public PacketHeader {
public:
    Packet_Request_Result_BlackList();
};

class Packet_Server_Queue_Load_Statistic : public PacketHeader {
public:
    Packet_Server_Queue_Load_Statistic();
};

class Packet_Tcp_Server_Connect : public PacketHeader {
public:
    Packet_Tcp_Server_Connect();
};

class Packet_UnChangable_GuildInfo_Save : public PacketHeader {
public:
    Packet_UnChangable_GuildInfo_Save();
};

class Packet_Web_Notify_Message_To_Guild : public PacketHeader {
public:
    Packet_Web_Notify_Message_To_Guild();
};

#endif  // GUILD_PACKETS_H_
