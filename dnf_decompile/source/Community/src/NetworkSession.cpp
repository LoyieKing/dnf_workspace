//
// Created by Loyie King on 2024/3/10.
//

#include "NetworkSession.h"

#include <cerrno>
#include <cstdlib>
#include <cstring>

#include "ArchiveLog.h"
#include "ISessionManager.h"

ISessionManager *CNetworkSession::pSessionManager = NULL;

CNetworkSession::CNetworkSession()
    : CAbstractSocket<4096, 4096>() {
}

bool CNetworkSession::OnRecv() {
    int size = recv_packet();
    if (size < 1) {
        if (size < 0) {
            return false;
        } else {
            return true;
        }
    }
    int got = 0;
    char* buff = GetRecvBuff(size, &got);
    int parsingLen = Parsing(buff, got);
    return SetRecvBufferOffset(parsingLen);
}
CNetworkSession *CNetworkSession::OnAccept() {
    int sock = this->AcceptSocket();
    CNetworkSession* networkSession = new CNetworkSession();
    if (networkSession == NULL) {
        ArchiveLog("session_pool_.Acquire() error");
        // miss a return here?
    } else {
        networkSession->SetSocket(sock, false);
    }
    networkSession->set_type(SESSION_TYPE_USER);
    pSessionManager->RegisterSession(networkSession, SESSION_TYPE_USER);  // (**(code **)(*pSessionManager + 4))(pSessionManager,local_20,1);
    return networkSession;
}
bool CNetworkSession::OnConnect() {
    int sock = GetSocket();
    ArchiveLog("OnConnect sock(%d)", sock);
    return true;
}
int CNetworkSession::OnSend() {
    int size = send_packet();
    if (size < 0) {
        ArchiveLog("OnSend() Socket[%d] Error(%s)", GetSocket(), strerror(errno));
        return -1;
    }
    return 0;
}
bool CNetworkSession::OnError() {
    ArchiveLog("OnError() Socket[%d] Error(%s)", GetSocket(), strerror(errno));
    return false;
}
bool CNetworkSession::Disconnect() {
    pSessionManager->UnregisterSession(this, type);  //(**(code **)(*pSessionManager + 8))(pSessionManager,param_1,param_1[0x80b]);
    disconnect();
    if (this != NULL) {
        delete this;
    }
    return true;
}
int CNetworkSession::Parsing(const char *data, int len) {
    ushort *p;
    int i;
    for (i = 0; ((i < len && (p = (ushort *)(data + i), 9 < (uint)(len - i))) && ((int)p[1] <= len - i)); i += p[1]) {
        dispatch((PacketHeader *)p);
    }
    /**
     * some information about each packet:
     * minimum packet length is 10
     * 0x00,0x01(ushort): packet type
     * 0x02,0x03(ushort): packet length
     * 0x4, 0x05(ushort): reversed1
     * 0x06, 0x07. 0x08, 0x09(uint): reversed2
     * ...: data content
     */
    return i;
}

bool CNetworkSession::dispatch(PacketHeader *packet) {
    ENUM_SESSION_TYPE t = get_type();
    REDNF_LOG("dispatch sessionType(%s) packetId(%d)", t == SESSION_TYPE_USER ? "user" : "server", packet->packetId);
    if (t == SESSION_TYPE_USER) {
        ushort packetId = packet->packetId;
        CPacketDispatcher* packetDispatcher = pSessionManager->GetPackageDispatcher();
        DispatcherFunction dispatcher = packetDispatcher->get_dispatcher(packetId);
        if (dispatcher != NULL) {
            dispatcher(pSessionManager, this, packet);
        }
    }
    return true;
}
ENUM_SESSION_TYPE CNetworkSession::get_type() {
    return type;
}
void CNetworkSession::set_type(ENUM_SESSION_TYPE t) {
    this->type = t;
}
bool CNetworkSession::Send(const char *data, int len) {
    return send_packet(data, len) > -1;
}
CNetworkSession *CNetworkSession::Connect(const char *ip, int port) {
    CNetworkSession* networkSession = new CNetworkSession();
    if (networkSession == NULL) {
        return NULL;
    }
    if (networkSession->CreateConnectionSocket(ip, port)) {
        int socket = networkSession->GetSocket();
        ArchiveLog("Try connect to other server sock(%d), ip(%s), port(%d)", socket, ip, port);
        networkSession->set_type(SESSION_TYPE_SERVER);
        pSessionManager->RegisterSession(networkSession, SESSION_TYPE_SERVER);
    } else {
        ArchiveLog("CreateConnectionSocket failed - %s", strerror(errno));
        if (networkSession != NULL) {
            delete networkSession;
        }
        networkSession = NULL;
    }
    return networkSession;
}
CNetworkSession *CNetworkSession::CreateListenSocket(int port, const char *ip) {
    int socket;
    int succeed = CAbstractSocket<4096, 4096>::CreateListenSocket(socket, port, ip);
    if (succeed) {
        CNetworkSession *networkSession = new CNetworkSession();
        networkSession->SetSocket(socket, false);
        return networkSession;
    } else {
        ArchiveLog("CreateListenSocket failed - %s", strerror(errno));
        return NULL;
    }
}
void *CNetworkSession::operator new(size_t size) {
    // TODO: replace with boost::pool
    return malloc(size);
}
void CNetworkSession::operator delete(void *p) {
    // TODO: replace with boost::pool
    free(p);
}

CNetworkSession::~CNetworkSession() {
}
