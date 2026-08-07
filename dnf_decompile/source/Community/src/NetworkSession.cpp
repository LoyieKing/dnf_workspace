//
// Created by Loyie King on 2024/3/10.
//

#include "NetworkSession.h"

#include <iostream>
#include "DNFFunctionLib.h"
#include "CommonConstants.h"
#include "GuildConstants.h"

#include <cerrno>
#include <cstdlib>
#include <cstring>

#include "ArchiveLog.h"
#include "BoostPool.h"
#include "ISessionManager.h"

// 原始二进制：全局对象池 g_network_session_pool（bss 0x80df098），
// object_pool 构造参数 (next_size=0x20, max_size=0) → pool(sizeof(CNetworkSession), 0x20, 0)。
boost::object_pool<CNetworkSession, boost::default_user_allocator_new_delete> g_network_session_pool(0x20, 0);

ISessionManager *CNetworkSession::pSessionManager = NULL;

CNetworkSession::CNetworkSession()
    : CAbstractSocket<4096, 4096>() {
}

bool CNetworkSession::OnRecv() {
    int size = recv_packet();
    // 原始：主路径在前（jg 越过尾部 size 检查），size<=0 的判定在函数尾部
    if (size > 0) {
        int got = 0;
        char* buff = GetRecvBuff(size, got);
        int parsingLen = Parsing(buff, got);
        // 原始：SetRecvBufferOffset == false 提前返回（xor eax,1; test/je 形态）
        if (SetRecvBufferOffset(parsingLen) == false) {
            return 0;
        }
        return 1;
    }
    if (size < 0) {
        return false;
    }
    return true;
}
CNetworkSession *CNetworkSession::OnAccept() {
    int sock = this->AcceptSocket();
    CNetworkSession* networkSession = new CNetworkSession();
    // 原始：!= NULL 分支在前（SetSocket 先于 ArchiveLog 块）
    if (networkSession != NULL) {
        networkSession->SetSocket(sock, false);
    } else {
        ArchiveLog("session_pool_.Acquire() error");
    }
    networkSession->set_type(SESSION_TYPE_USER);
    pSessionManager->RegisterSession(networkSession, SESSION_TYPE_USER);  // (**(code **)(*pSessionManager + 4))(pSessionManager,local_20,1);
    return networkSession;
}
bool CNetworkSession::OnConnect() {
    // 原始：GetSocket() 结果直接作为变参参数（mov [esp+8],eax，无临时变量溢栈）
    ArchiveLog("OnConnect sock(%d)", GetSocket());
    return true;
}
int CNetworkSession::OnSend() {
    // 原始：send_packet() 结果直接入条件（shr eax,0x1f + test/je）
    if (send_packet() < 0) {
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
    delete this;
    return true;
}
int CNetworkSession::Parsing(const char *data, int len) {
    // 原始：while (len > i) + 两个 break（setg 物化循环条件；len-i 先求值）
    ushort *p;
    ushort *p2;  // 原始：p2 = p 副本（mov [ebp-0xc],eax）
    int i;
    i = 0;
    while (len > i) {
        p = (ushort *)(data + i);
        p2 = p;
        if (9 >= (uint)(len - i)) {
            break;
        }
        if ((len - i) < (int)p2[1]) {
            break;
        }
        dispatch((PacketHeader *)p2);
        i += p2[1];
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
    // 原始：get_type() 调用结果直接入条件（cmp eax,1; sete al; test al,al; je 形态）
    if (get_type() == SESSION_TYPE_USER) {
        ushort packetId = packet->packetId;
        CPacketDispatcher* packetDispatcher = pSessionManager->GetPacketDispatcher();
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
    int ret = send_packet(data, len);
    // 原始：显式 if/else 返回（cmp+jns 分支，避免 not+shr 位技巧）
    if (ret < 0) {
        return false;
    } else {
        return true;
    }
}
CNetworkSession *CNetworkSession::Connect(const char *ip, int port) {
    CNetworkSession* networkSession = new CNetworkSession();
    if (networkSession == NULL) {
        return NULL;
    }
    // 原始：CreateConnectionSocket == false 提前处理（xor eax,1; test/je 形态）
    if (networkSession->CreateConnectionSocket(ip, port) == false) {
        ArchiveLog("CreateConnectionSocket failed - %s", strerror(errno));
        delete networkSession;
        return NULL;
    }
    // 原始：GetSocket() 直接作为变参
    ArchiveLog("Try connect to other server sock(%d), ip(%s), port(%d)", networkSession->GetSocket(), ip, port);
    networkSession->set_type(SESSION_TYPE_SERVER);
    pSessionManager->RegisterSession(networkSession, SESSION_TYPE_SERVER);
    return networkSession;
}
CNetworkSession *CNetworkSession::CreateListenSocket(int port, const char *ip) {
    int socket = 0;
    // 原始：直接检查 == false（xor eax,1 惯用法），失败分支在前
    if (CAbstractSocket<4096, 4096>::CreateListenSocket(socket, port, ip) == false) {
        ArchiveLog("CreateListenSocket failed - %s", strerror(errno));
        return NULL;
    }
    CNetworkSession *networkSession = new CNetworkSession();
    networkSession->SetSocket(socket, false);
    return networkSession;
}
void *CNetworkSession::operator new(size_t size) {
    return g_network_session_pool.malloc();
}
void CNetworkSession::operator delete(void *p, unsigned int /*size*/) {
    g_network_session_pool.free((CNetworkSession *)p);
}

CNetworkSession::~CNetworkSession() {
}
