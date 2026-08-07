//
// Created by loyieking on 24-3-23.
//

#include "SessionManager.h"

#include <iostream>
#include "DNFFunctionLib.h"
#include "CommonConstants.h"
#include "GuildConstants.h"

#include "ISessionManager.h"
#include "NetworkSession.h"


CSessionManager::CSessionManager() {
    CNetworkSession::pSessionManager = this;
    networkSession = NULL;
    // 来自反编译/DWARF 的推断：原始条件为 size <= i 时 break，即遍历 0..size-1
    // 原重建代码的 "size > i break" 逻辑完全反转，导致一次都不执行注册
    for (int i = 0; i < get_packet_table_size(); i++) {
        packetDispatcher.register_packet(get_packet_table()[i].packet_id, get_packet_table()[i].packet_handler);
    }
}
CPacketDispatcher* CSessionManager::GetPacketDispatcher() {
    return &packetDispatcher;
}

bool CSessionManager::RegisterSession(CNetworkSession* registeringSession, ENUM_SESSION_TYPE sessionType) {
    if (sessionType == SESSION_TYPE_SERVER) {
        this->networkSession = registeringSession;
    }
    return true;
}
bool CSessionManager::UnregisterSession(CNetworkSession* unregisteringSession, ENUM_SESSION_TYPE sessionType) {
    if (sessionType == SESSION_TYPE_SERVER) {
        this->networkSession = NULL;
    } else if (sessionType == SESSION_TYPE_USER) {
        g_user_manager.leave_user(unregisteringSession);
    }
    return true;
}
bool CSessionManager::SendHeartbeat(const char* data, int length) {
    return true;
}

bool CSessionManager::SendPacketToConnectingSession(char const* what1, int what2, char const* what3, int what4) {
    // 原始：networkSession != NULL 外层；Send == false 提前处理（xor eax,1; test/je）
    if (networkSession != NULL) {
        if (networkSession->Send(what1, what2) == false) {
            if (what3 != NULL && what4 != 0) {
                TryDisconnect(networkSession);
                TryConnect(what3, what4);
            }
            return false;
        }
        return true;
    } else {
        if (what3 != NULL && what4 != 0) {
            TryConnect(what3, what4);
        }
        return false;
    }
}
CSessionManager::~CSessionManager() {
}
