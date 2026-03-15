//
// Created by loyieking on 24-3-24.
//

#include "User.h"

#include <cstring>

#include "ArchiveLog.h"
#include "BuddyManager.h"
#include "Packet_Delete_PvP_Buddy.h"
#include "Packet_Insert_PvP_Buddy.h"
#include "Packet_Monitor_Other_Channel_Chat_ToUser.h"
#include "Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link.h"
#include "Packet_Notice_Add_PvP_Buddy_Result.h"
#include "Packet_Notice_PvP_Buddy_In_Out.h"
#include "Packet_Notice_Request_Add_PvP_Buddy.h"
#include "Packet_Response_PvP_Buddy_Conn_List.h"
#include "Packet_Response_Remove_PvP_Buddy.h"
#include "Packet_Update_PvP_Buddy.h"
#include "UserManager.h"

CUser::CUser(CNetworkSession *networkSession, STGameUserInfo &stGameUserInfo, int buddyCount, STPvPBuddyDBInfo *buddyList) {
    this->networkSession = networkSession;
    this->stGameUserInfo = stGameUserInfo;
    for (int i = 0; i < buddyCount; i++) {
        buddyManager.add_buddy(buddyList[i]);
    }
}
CUser::CUser(const CUser &other) {
    this->networkSession = other.networkSession;
    this->stGameUserInfo = other.stGameUserInfo;
    this->buddyManager = CBuddyManager(other.buddyManager);
}
bool CUser::check_variable_charac_info(char service_id, char const *user_id_what, char variable_what1, char variable_what2) {
    STPvPBuddyDBInfo* buddy = buddyManager.find_buddy(service_id, user_id_what);
    if (buddy == NULL) {
        return true;
    }
    if (buddy->variable_what1 == variable_what1 && buddy->variable_what2 == variable_what2) {
        return true;
    }
    return false;
}
void CUser::update_variable_charac_info(char service_id, char *user_id_what, char variable_what1, char variable_what2) {
    STPvPBuddyDBInfo* buddy = buddyManager.find_buddy(service_id, user_id_what);
    if (buddy != NULL) {
        buddy->variable_what1 = variable_what1;
        buddy->variable_what2 = variable_what2;
    }

    const int a = sizeof(std::pair<int, CUser>);
}

void CUser::db_delete_buddy(char buddy_server_id, unsigned int buddy_charac_no) {
    Packet_Delete_PvP_Buddy packet;
    packet.user_server_id = stGameUserInfo.server_id;
    packet.user_charac_no = stGameUserInfo.charac_no;
    packet.buddy_charac_no = buddy_charac_no;
    packet.buddy_server_id = buddy_server_id;
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::db_insert_buddy(STPvPBuddyDBInfo *a, STPvPBuddyDBInfo *b) {
    Packet_Insert_PvP_Buddy packet;
    memcpy(&packet.a, a, sizeof(STPvPBuddyDBInfo));
    memcpy(&packet.b, b, sizeof(STPvPBuddyDBInfo));
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::db_update_buddy() {
    Packet_Update_PvP_Buddy packet;
    packet.server_id = stGameUserInfo.server_id;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.variable_what1 = stGameUserInfo.variable_what1;
    packet.variable_what2 = stGameUserInfo.variable_what2;
    networkSession->Send((char *)&packet, packet.packetSize);
}
CBuddyManager *CUser::get_buddy_manager() {
    return &buddyManager;
}
STGameUserInfo *CUser::get_user_info() {
    return &stGameUserInfo;
}
void CUser::get_user_info_for_buddy(STPvPBuddyDBInfo &output) {
    output.server_id = stGameUserInfo.server_id;
    output.user_m_id = stGameUserInfo.user_m_id;
    output.charac_no = stGameUserInfo.charac_no;
    output.variable_what1 = stGameUserInfo.variable_what1;
    output.buddy_n_user_what2 = stGameUserInfo.buddy_n_user_what2;
    output.variable_what2 = stGameUserInfo.variable_what2;
    output.buddy_n_user_what3 = stGameUserInfo.buddy_n_user_what3;
    memcpy(output.buddy_n_user_id_what, stGameUserInfo.buddy_n_user_id_what, 0x1d);
}
void CUser::notice_add_buddy_fail(char reason_what1, unsigned char error_code) {
    Packet_Notice_Add_PvP_Buddy_Result packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.reason_what_18_0x12 = reason_what1;
    packet.error_code_what_50_0x32 = error_code;
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::notice_add_buddy_success(char reason_what, CUser *user) {
    Packet_Notice_Add_PvP_Buddy_Result packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.error_code_what_50_0x32 = 0;
    packet.server_id = stGameUserInfo.server_id;
    packet.reason_what_18_0x12 = reason_what;
    memcpy(packet.buddy_n_user_id_what, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::notice_login_logout(CUser::eLoginout loginout) {
    Packet_Notice_PvP_Buddy_In_Out packet;
    packet.what_0x12 = loginout;
    packet.channel_no = stGameUserInfo.channel_no;
    packet.server_id = stGameUserInfo.server_id;
    memcpy(packet.buddy_n_user_id_what, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    for (std::vector<STPvPBuddyDBInfo>::iterator _it_buddie = buddyManager.buddies.begin(); _it_buddie != buddyManager.buddies.end(); ++_it_buddie) {
        STPvPBuddyDBInfo& buddie = *_it_buddie;
        CUser* user = g_user_manager.find_user(buddie.server_id, buddie.buddy_n_user_id_what);
        if (user != NULL) {
            packet.what_0xa = user->stGameUserInfo.charac_no;
            packet.what_0xe = user->stGameUserInfo.what_0x5;
            user->networkSession->Send((char *)&packet, packet.packetSize);
        }
    }
}
void CUser::notice_remove_buddy_fail(unsigned char error_code) {
    Packet_Response_Remove_PvP_Buddy packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.error_code_what_0x31 = error_code;
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::notice_remove_buddy_success(char server_id, const char *user_id_what) {
    Packet_Response_Remove_PvP_Buddy packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.error_code_what_0x31 = 0;
    packet.server_id = server_id;
    memcpy(packet.buddy_n_user_id_what, user_id_what, 0x1d);
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::req_add_buddy(CUser *buddy) {
    Packet_Notice_Request_Add_PvP_Buddy packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.server_id = stGameUserInfo.server_id;
    memcpy(packet.buddy_n_user_id_what, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::req_remove_buddy(char param_server_id, char const *param_user_id_what) {
    STPvPBuddyDBInfo* removingBuddy = buddyManager.find_buddy(param_server_id, param_user_id_what);
    if (removingBuddy == NULL) {
        // 3 means buddy not found?
        notice_remove_buddy_fail(3);
        return;
    }
    // copied from server, never used
    __attribute__((unused)) int user_m_id = removingBuddy->user_m_id;
    char server_id = removingBuddy->server_id;
    int charac_no = removingBuddy->charac_no;
    if (buddyManager.del_buddy(param_server_id, param_user_id_what)) {
        CUser* user = g_user_manager.find_user(param_server_id, param_user_id_what);
        if (user != NULL) {
            user->get_buddy_manager()->del_buddy(user->stGameUserInfo.server_id, stGameUserInfo.buddy_n_user_id_what);
        }
        db_delete_buddy(server_id, charac_no);
        notice_remove_buddy_success(param_server_id, param_user_id_what);
        ArchiveLog("CUser::req_remove_buddy REQ(server_id:%d, charac_no:%d), RES(server_id:%d, charac_ no:%d)", stGameUserInfo.server_id, stGameUserInfo.charac_no, server_id, charac_no);
    } else {
        // 3 not means buddy not found???
        notice_remove_buddy_fail(3);
    }
}
void CUser::res_add_buddy(CUser *buddy) {
    STPvPBuddyDBInfo buddyUserInfo;
    buddy->get_user_info_for_buddy(buddyUserInfo);
    buddyManager.add_buddy(buddyUserInfo);

    STPvPBuddyDBInfo myUserInfo;
    get_user_info_for_buddy(myUserInfo);
    buddy->buddyManager.add_buddy(myUserInfo);

    db_insert_buddy(&buddyUserInfo, &myUserInfo);

    notice_add_buddy_success(1, buddy);
    buddy->notice_add_buddy_success(0, this);

    ArchiveLog("CUser::res_add_buddy REQ(server_id:%d, charac_no:%d, channel_no:%d), RES(server_id:%d,  charac_no:%d, channel_no:%d)", stGameUserInfo.server_id, stGameUserInfo.charac_no,
               stGameUserInfo.channel_no, buddy->stGameUserInfo.server_id, buddy->stGameUserInfo.charac_no, buddy->stGameUserInfo.channel_no);
}
void CUser::send_buddy_list() {
    Packet_Response_PvP_Buddy_Conn_List packet;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.buddyCount = buddyManager.get_size();
    int i = 0;
    for (std::vector<STPvPBuddyDBInfo>::iterator iBuddy = buddyManager.buddies.begin(); iBuddy != buddyManager.buddies.end() && i < 32; iBuddy++, i++) {
        CUser* user = g_user_manager.find_user(iBuddy->server_id, iBuddy->buddy_n_user_id_what);
        if (user == NULL) {
            packet.buddies[i].isOnline = false;
            packet.buddies[i].channel_no = -1;
        } else {
            packet.buddies[i].isOnline = true;
            packet.buddies[i].channel_no = user->stGameUserInfo.channel_no;
        }
        STPvPBuddyDBInfo buddy = *iBuddy;
        packet.buddies[i].server_id = buddy.server_id;
        packet.buddies[i].charac_no = buddy.charac_no;
        packet.buddies[i].variable_what1 = buddy.variable_what1;
        packet.buddies[i].buddy_n_user_what2 = buddy.buddy_n_user_what2;
        packet.buddies[i].variable_what2 = buddy.variable_what2;
        packet.buddies[i].buddy_n_user_what3 = buddy.buddy_n_user_what3;
        memcpy(packet.buddies[i].buddy_n_user_id_what, buddy.buddy_n_user_id_what, 0x1d);
    }
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::send_other_channel_chat(Packet_Monitor_Other_Channel_Chat *chat, CUser *user) {
    Packet_Monitor_Other_Channel_Chat_ToUser packet;
    packet.what_0x0a = chat->what_0x0a;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.server_id = stGameUserInfo.server_id;
    memcpy(packet.buddy_n_user_id_what, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    packet.chatLength = chat->chatLength;
    memcpy(packet.chatContent, chat->chatContent, chat->chatLength);
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::send_other_channel_chat_hyper_link(Packet_Monitor_Other_Channel_Chat_Hyper_Link *chat, CUser *user) {
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link packet;
    packet.what_0x0a = chat->what_0x0a;
    packet.what_0x0f = stGameUserInfo.what_0x5;
    packet.what_0x13 = stGameUserInfo.charac_no;
    packet.what_0x0e = stGameUserInfo.server_id;
    memcpy(packet.what_0x17, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    packet.what_0x16f = chat->what_0x3a;
    memcpy(packet.what_0x170, chat->what_0x174, chat->what_0x173);
    packet.what_0x16f = chat->what_0x3a;
    for (int i = 0; i < chat->what_0x3a; i++) {
        memcpy(packet.what_0x37 + i * 0x68, chat->what_0x3b + i * 0x68, 0x68);
    }
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::send_other_channel_chat_result(Packet_Monitor_Other_Channel_Chat *chat, ENUM_MONITOR_ERROR error) {
    Packet_Monitor_Other_Channel_Chat_ToUser packet;
    packet.what_0x0a = chat->what_0x0a;
    packet.sTGameUserInfo_what3_0x05 = stGameUserInfo.what_0x5;
    packet.charac_no = stGameUserInfo.charac_no;
    packet.errorCode = error;
    memcpy(packet.buddy_n_user_id_what, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    packet.chatLength = chat->chatLength;
    memcpy(packet.chatContent, chat->chatContent, chat->chatLength);
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::send_other_channel_chat_result_hyper_link(Packet_Monitor_Other_Channel_Chat_Hyper_Link *chat, ENUM_MONITOR_ERROR error) {
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link packet;
    packet.what_0x0a = chat->what_0x0a;
    packet.what_0x0f = stGameUserInfo.what_0x5;
    packet.what_0x13 = stGameUserInfo.charac_no;
    packet.what_0x35 = error;
    memcpy(packet.what_0x17, stGameUserInfo.buddy_n_user_id_what, 0x1d);
    packet.what_0x16f = chat->what_0x173;
    memcpy(packet.what_0x170, chat->what_0x174, chat->what_0x173);
    packet.what_0x36 = chat->what_0x3a;
    for (int i = 0; i < chat->what_0x3a; i++) {
        memcpy(packet.what_0x37 + i * 0x68, chat->what_0x3b + i * 0x68, 0x68);
    }
    networkSession->Send((char *)&packet, packet.packetSize);
}
void CUser::update_variable_charac_info(char server_id, const char *user_id_what, char variable_what1, char variable_what2) {
    STPvPBuddyDBInfo* buddy = buddyManager.find_buddy(server_id, user_id_what);
    if (buddy != NULL) {
        buddy->variable_what1 = variable_what1;
        buddy->variable_what2 = variable_what2;
    }
}
void CUser::check_myself() {
    bool flag = false;
    for (std::vector<STPvPBuddyDBInfo>::iterator _it_buddy = buddyManager.buddies.begin(); _it_buddy != buddyManager.buddies.end(); ++_it_buddy) {
        STPvPBuddyDBInfo& buddy = *_it_buddy;
        bool needUpdate = false;
        CUser* user = g_user_manager.find_user(buddy.user_m_id);
        if (user == NULL) {
            needUpdate = false;
        } else {
            needUpdate = !check_variable_charac_info(stGameUserInfo.server_id,
                                                     stGameUserInfo.buddy_n_user_id_what,
                                                     stGameUserInfo.variable_what1,
                                                     stGameUserInfo.variable_what2);
        }
        if (needUpdate) {
            flag = true;
            update_variable_charac_info(stGameUserInfo.server_id,
                                        stGameUserInfo.buddy_n_user_id_what,
                                        stGameUserInfo.variable_what1,
                                        stGameUserInfo.variable_what2);
        }
    }
    if (!flag) {
        db_update_buddy();
    }
}
