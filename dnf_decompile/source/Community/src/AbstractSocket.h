//
// Created by Loyie King on 2024/3/10.
//
#pragma once

#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "ReverseEngineerLib.h"

template<int MaxRecvBuf, int MaxSendBuf>
class CAbstractSocket {
    int socket;  // offset 0
    int what1;   // offset 4

    int m_remain_recvlen;         // offset 8
    char *recvBufferOffset;        // offset 0xc
    char recvBuffer[MaxRecvBuf];  // offset 0x10

    int remainSendLen;            // offset 0x1010
    char *sendBufferOffset;        // offset 0x1014
    char sendBuffer[MaxSendBuf];  // offset 0x1018

    int triggerSessionEventType;  // offset 0x2018
    sockaddr_in socket_address;   // offset 0x201c（原始为命名字段布局：sin_family/sin_port/sin_addr）

public:
    int AcceptSocket();

    void AddTriggerSessionEventType(int sessionEventType);

    CAbstractSocket();
    ~CAbstractSocket();

    bool ConnectPeer();

    bool CreateConnectionSocket(const char *ip, int port);

    static bool CreateListenSocket(int &outputSocket, int port, const char *ip);  // 原始：bool 返回

    void disconnect();

    char *GetRecvBuff(int getSize, int &remainRecvLen);

    int GetSocket();

    int GetTriggerSessionEventType();

    ssize_t recv_packet();

    void Reset();

    int send_packet();

    int send_packet(const char *data, int last);

    static bool SetNonblock(int sock);

    bool SetRecvBufferOffset(int parsingLen);

    int SetSocket(int sock, bool setNonBlock);

    void SetTriggerSessionEventType(int sessionEventType);
};

TEST_CLASS_SIZE(sockaddr, 0x10)
typedef char _CAbstractSocket_size_check[sizeof(CAbstractSocket<4096, 4096>) == 0x202c ? 1 : -1];
