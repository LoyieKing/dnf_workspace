#ifndef COSERVER_PACKET_H_
#define COSERVER_PACKET_H_

#include <queue>
#include <string>

#include "PacketHeader.h"
#include "Thread.h"

class CApplication;
class CUdpRecvBuffer;
class CUserManager;

// ---- 包结构（coserver 专用）----
class Packet_CutOff_UDP_Call_UserInfo : public PacketHeader
{
public:
    Packet_CutOff_UDP_Call_UserInfo();
};

class Packet_Monitor_UDP_User_Getout : public PacketHeader
{
public:
    Packet_Monitor_UDP_User_Getout();
    unsigned int m_userID;  // +0xa
};

class Packet_DoubleCheck_UDP_Logout : public PacketHeader
{
};

// 事件包（coserver 原版大小：Start 0x12 / End 0xa）
class Packet_Monitor_Event_Start : public PacketHeader
{
public:
    Packet_Monitor_Event_Start();
    unsigned int m_field1;    // +0xa
    unsigned short m_field2;  // +0xe
    unsigned short m_field3;  // +0x10
};

class Packet_Monitor_Event_End : public PacketHeader
{
public:
    Packet_Monitor_Event_End();
};

// ---- CInnerMsgHandler：空类（1 字节）----
class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    ~CInnerMsgHandler();
};

// ---- CPacketDecoder：lock@0 + handlers[0x27fd]@4 ----
class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Attach(CApplication* app);
    int MsgDecode(PacketHeader* pkt);
    void Process(std::queue<CUdpRecvBuffer*>* q, CMutex* lock);
    void* m_poolLock;              // +0
    void* m_handlers[0x27fd];      // +4
};

CPacketDecoder* CPacketDecoderInstance();

// ---- CPacketTracer：count@0 + string@4 ----
class CPacketTracer
{
public:
    CPacketTracer();
    ~CPacketTracer();
    void AddLog(int p1, int p2);
    void ResetLog();
    void WriteLog();
    void AbsoluteWriteLog();
    int m_count;            // +0
    std::string m_log;      // +4
};

CPacketTracer* CPacketTracerInstance();

// ---- CPacketTranslater：静态 m_pclApp ----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
    static void OnLogin(PacketHeader* pkt);
    static void OnLogout(PacketHeader* pkt);
    static void OnHeartBeat(PacketHeader* pkt);
    static void OnReplyUserInfo(PacketHeader* pkt);
    static CApplication* m_pclApp;
};

#endif // COSERVER_PACKET_H_
