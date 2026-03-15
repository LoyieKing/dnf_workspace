//
// Created by Loyie King on 2024/3/10.
//

#pragma once

#include "PacketHeader.h"
#include "AbstractSocket.h"
#include "ISessionManager.h"

class CNetworkSession : public CAbstractSocket<4096, 4096> {
    ENUM_SESSION_TYPE type;

public:
    static ISessionManager* pSessionManager;

    CNetworkSession();
    ~CNetworkSession();
    bool OnRecv();
    CNetworkSession* OnAccept();
    bool OnConnect();
    int OnSend();
    bool OnError();
    bool Disconnect();
    int Parsing(char const* data, int len);

    bool dispatch(PacketHeader* packet);
    ENUM_SESSION_TYPE get_type();
    void set_type(ENUM_SESSION_TYPE t);
    bool Send(char const* data, int len);

    static CNetworkSession* Connect(char const* ip, int port);
    static CNetworkSession* CreateListenSocket(int port, char const* ip);

    void* operator new(size_t size);
    void operator delete(void* p);
};



TEST_CLASS_SIZE(CNetworkSession, 0x2030)