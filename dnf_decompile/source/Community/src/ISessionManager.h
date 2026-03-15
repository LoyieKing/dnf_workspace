//
// Created by Loyie King on 2024/3/10.
//
#pragma once

#include "PacketHeader.h"
#include "PacketDispatcher.h"

enum ENUM_SESSION_TYPE {
    SESSION_TYPE_USER = 1,
    SESSION_TYPE_SERVER = 2,
};

class CNetworkSession;

class ISessionManager {
public:
    virtual CPacketDispatcher* GetPackageDispatcher() = 0;
    virtual bool RegisterSession(CNetworkSession* networkSession, ENUM_SESSION_TYPE sessionType) = 0;
    virtual bool UnregisterSession(CNetworkSession* networkSession, ENUM_SESSION_TYPE sessionType) = 0;
    virtual bool SendPacketToConnectingSession(char const* what1, int what2, char const* what3, int what4) = 0;
    virtual ~ISessionManager() {}
};

