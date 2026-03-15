//
// Created by Loyie King on 2024/3/17.
//

#pragma once

#include <map>

#include "Epoll.h"
#include "ISessionManager.h"
#include "PacketDispatcher.h"
#include "SessionProxy.h"

class CSessionManager : public ISessionManager, public network_engine::CSessionProxy<CNetworkSession, socket_event::CEpoll<CNetworkSession> > {
    std::map<int, int> map;              // offset 0x14
    CNetworkSession* networkSession;     // offset 0x2c
    CPacketDispatcher packetDispatcher;  //  offset 0x30

public:
    CSessionManager();
    static bool SendHeartbeat(char const* data, int length);
    CPacketDispatcher* GetPackageDispatcher();
    bool RegisterSession(CNetworkSession* networkSession, ENUM_SESSION_TYPE sessionType);
    bool UnregisterSession(CNetworkSession* networkSession, ENUM_SESSION_TYPE sessionType);
    bool SendPacketToConnectingSession(char const* what1, int what2, char const* what3, int what4);
    ~CSessionManager();
};
