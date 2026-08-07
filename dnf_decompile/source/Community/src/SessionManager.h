//
// Created by Loyie King on 2024/3/17.
//

#pragma once

#include <map>

#include "Epoll.h"
#include "ISessionManager.h"
#include "PacketDispatcher.h"
#include "SessionProxy.h"

// 原始二进制：std::map<int, stSessionInfo>（仅构造使用，未参与读写；字段以推断的最小结构对齐符号）
struct stSessionInfo {
    int value;
};

class CSessionManager : public ISessionManager, public network_engine::CSessionProxy<CNetworkSession, socket_event::CEpoll> {
    std::map<int, stSessionInfo> map;    // offset 0x14
    CNetworkSession* networkSession;     // offset 0x2c
    CPacketDispatcher packetDispatcher;  //  offset 0x30

public:
    CSessionManager();
    static bool SendHeartbeat(char const* data, int length);
    CPacketDispatcher* GetPacketDispatcher();
    bool RegisterSession(CNetworkSession* networkSession, ENUM_SESSION_TYPE sessionType);
    bool UnregisterSession(CNetworkSession* networkSession, ENUM_SESSION_TYPE sessionType);
    bool SendPacketToConnectingSession(char const* what1, int what2, char const* what3, int what4);
    ~CSessionManager();
};
