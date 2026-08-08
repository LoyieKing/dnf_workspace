#ifndef GUILD_PACKET_H_
#define GUILD_PACKET_H_

#include <queue>
#include <string>

#include "PacketHeader.h"
#include "Thread.h"

class CApplication;
class CUdpRecvBuffer;
class CTcpRecvBuffer;
class CGuild;
class CUser;
struct STGuildJoinInfo;

// ---- CPacketCounter<Lo,Hi> ----
template<int Lo, int Hi>
class CPacketCounter
{
public:
    CPacketCounter(char* name, char* title);
    ~CPacketCounter();
    void IncrementPacketCount(int id);
    void BeforeProcess();
    void AfterProcess();
    void WriteLog();
    void Reset();
    char m_data[0x20];
};

// ---- CPacketTracer ----
class CPacketTracer
{
public:
    CPacketTracer();
    ~CPacketTracer();
    void AddLog(int p1, int p2);
    void ResetLog();
    void WriteLog();
    void AbsoluteWriteLog();
};

CPacketTracer* CPacketTracerInstance();

// ---- CPacketDecoder ----
class CPacketDecoder
{
public:
    CPacketDecoder();
    ~CPacketDecoder();
    void Attach(CApplication* app);
    int Process();
    int TcpProcess();
    int UdpProcess();
    int MsgDecode(PacketHeader* pkt);
    void SetTCPQueue(std::queue<CTcpRecvBuffer*>* q);
    void SetUdpQueue(std::queue<CUdpRecvBuffer*>* q);
    char m_data[0x3ec0];
};

CPacketDecoder* CPacketDecoderInstance();

// ---- CPacketTranslater ----
class CPacketTranslater
{
public:
    static void attach(CApplication* app);
    static void OnHeartBeat(PacketHeader* pkt);
    static void OnLogin(PacketHeader* pkt);
    static void OnLogout(PacketHeader* pkt);
    static void OnReplyUserInfo(PacketHeader* pkt);
    static void OnCharLogin(PacketHeader* pkt);
    static void OnReplyQueryGuild(PacketHeader* pkt);
    static void OnDBReplyQueryGuildMember(PacketHeader* pkt);
    static void OnNoticeGuildEnter(PacketHeader* pkt);
    static void OnNoticeGuildSecede(PacketHeader* pkt);
    static void OnNoticeGuildMarkChange(PacketHeader* pkt);
    static void OnNoticeGuildDismiss(PacketHeader* pkt);
    static void OnNoticeGuildChatMsg(PacketHeader* pkt);
    static void OnSetGuildMemberGrade(PacketHeader* pkt);
    static void OnCallGuildMembers(PacketHeader* pkt);
    static void OnCallGuildAllMembers(PacketHeader* pkt);
    static void OnDBReplyGuildAllMembers(PacketHeader* pkt);
    static void OnDBReplyUnconnGuildMember(PacketHeader* pkt);
    static void OnCallGuildLevelUp(PacketHeader* pkt);
    static void OnCallGuildInfo(PacketHeader* pkt);
    static void OnNoticeGuildCreate(PacketHeader* pkt);
    static void OnCharacterDelete(PacketHeader* pkt);
    static void OnUpdateChangableCharInfo(PacketHeader* pkt);
    static void OnEventStart(PacketHeader* pkt);
    static void OnEventEnd(PacketHeader* pkt);
    static void OnLoadGuildWarEnterableGuilds(PacketHeader* pkt);
    static void OnNoticeGuildWarEnd(PacketHeader* pkt);
    static void OnNoticeGuildMailArrive(PacketHeader* pkt);
    static void OnNoticeGuildWarStart(PacketHeader* pkt);
    static void OnNoticeGuildWarPointChange(PacketHeader* pkt);
    static void OnRequestGuildWarInfo(PacketHeader* pkt);
    static void OnRegisterToBlackList(PacketHeader* pkt);
    static void OnDeleteToBlackList(PacketHeader* pkt);
    static void OnRequestBlackList(PacketHeader* pkt);
    static void OnDBMWResisterToBlackList(PacketHeader* pkt);
    static void OnDBMWDeleteToBlackList(PacketHeader* pkt);
    static void OnDBMWResponseBlackListOnLogin(PacketHeader* pkt);
    static void OnIncreaseGuildExp(PacketHeader* pkt);
    static void OnBuyGuildSkill(PacketHeader* pkt);
    static void OnDBMWChangeUnconnectedGuildMemberGrade(PacketHeader* pkt);
    static void OnNotifyMessageToGuild(PacketHeader* pkt);
    static void OnMonitorManagerConnectOK(PacketHeader* pkt);
    static void OnMonitorSendGuildLetter(PacketHeader* pkt);
    static void OnDBMWReplySendGuildLetter(PacketHeader* pkt);
    static void OnCallGuildInvite(PacketHeader* pkt);
    static void OnReplyGuildInvite(PacketHeader* pkt);
    static void OnDBMWGuildJoin(PacketHeader* pkt);
    static void OnRequestGuildSecede(PacketHeader* pkt);
    static void OnDBReplyGuildSecede(PacketHeader* pkt);
    static void OnRequestGuildMasterDelegate(PacketHeader* pkt);
    static void OnDBReplyGuildMasterDelegate(PacketHeader* pkt);
    static void OnRequestGuildCreate(PacketHeader* pkt);
    static void OnDBReplyGuildCreate(PacketHeader* pkt);
    static void OnSetGuildMemberGradeFromWeb(PacketHeader* pkt);
    static void OnGuildMasterDelegateFromWeb(PacketHeader* pkt);
    static void OnCheckGuildMemberConnectionFromWeb(PacketHeader* pkt);
    static void OnInnerPacketLogin(PacketHeader* pkt);
    static void OnInnerPacketLogout(PacketHeader* pkt);
    static void OnChangeGuildName(PacketHeader* pkt);
    static void OnPowerWarStartInfo(PacketHeader* pkt);
    static void OnChangePowerWarPoint(PacketHeader* pkt);
    static void OnPacketJoinPower(PacketHeader* pkt);
    static void OnPacketSecedePower(PacketHeader* pkt);
    static void OnSetPowerWarCfg(PacketHeader* pkt);
    static void OnLoadFromDBOnGuildBooting(PacketHeader* pkt);
    static void OnGMPowerWarStart(PacketHeader* pkt);
    static void OnGMPowerWarEnd(PacketHeader* pkt);
    static void OnChangeCharName(PacketHeader* pkt);
    static void OnChangeGuildNameFromWeb(PacketHeader* pkt);
    static void OnNotifyNewGroupMail(PacketHeader* pkt);
    static void OnInCreaseDecreasePowerWarPoint(PacketHeader* pkt);
    static void OnCreateGuildAgit(PacketHeader* pkt);
    static void OnDeleteGuildAgit(PacketHeader* pkt);
    static void OnDBCreateGuildAgit(PacketHeader* pkt);
    static void OnDBDeleteGuildAgit(PacketHeader* pkt);
    static void OnPowerWarProcessInfo(PacketHeader* pkt);
    static void OnDBLoadGuildAgit(PacketHeader* pkt);
    static void OnUpgradeGuildAgit(PacketHeader* pkt);
    static void OnDBUpgradeGuildAgit(PacketHeader* pkt);
    static void OnGuildExpLimit(PacketHeader* pkt);
    static void OnWriteGuildMemberMemo(PacketHeader* pkt);
    static void OnLoadGuildCargo(PacketHeader* pkt);
    static void OnLoadGuildCargoHistory(PacketHeader* pkt);
    static void OnGuildCargo(PacketHeader* pkt);
    static void OnGuildCargoHistory(PacketHeader* pkt);
    static void OnGuildCargoCheckPushItem(PacketHeader* pkt);
    static void OnGuildCargoPushItem(PacketHeader* pkt);
    static void OnGuildCargoPopItem(PacketHeader* pkt);
    static void OnGuildCargoMoveItem(PacketHeader* pkt);
    static void OnGuildCargoUpgrade(PacketHeader* pkt);
    static void OnGuildRequestGuildBoardOpen(PacketHeader* pkt);
    static void OnDBLoadReplyGuildBoardOpen(PacketHeader* pkt);
    static void OnGuildRequestGuildBoardWrite(PacketHeader* pkt);
    static void OnDBLoadReplyGuildBoardWrite(PacketHeader* pkt);
    static void OnGuildRequestGuildBoardDelete(PacketHeader* pkt);
    static void OnDBLoadReplyGuildBoardDelete(PacketHeader* pkt);
    static void OnWebGuildBoardWrite(PacketHeader* pkt);
    static void OnWebGuildBoardDelete(PacketHeader* pkt);
    static void OnDBLoadReplyWebGuildBoardWrite(PacketHeader* pkt);
    static void OnGuildApplyOriginalPowerSide(PacketHeader* pkt);
    static void OnGameServerRegist(PacketHeader* pkt);
    static void OnAddGuildFund(PacketHeader* pkt);
    static void OnRefreshGuildInfo(PacketHeader* pkt);
    static void OnReplyTodayGuildMember(PacketHeader* pkt);
    static void OnApproveJoinGuild(PacketHeader* pkt);
    static void OnDBResponseApproveJoinGuild(PacketHeader* pkt);
    static void OnGuildAttendanceInfo(PacketHeader* pkt);
    static void OnGuildDebug(PacketHeader* pkt);
    static void OnRenew_GM_List(PacketHeader* pkt);
    static void OnNoticeGuildChatMsgHyperLink(PacketHeader* pkt);
    static void RequestBlackListToDBMW(unsigned int charNo);
    static void SendPacketGuildMail(unsigned char group, unsigned int guildKey,
                                    unsigned int charNo, char* title, char* content,
                                    unsigned int param);
    static void GuildJoin(CGuild* guild, STGuildJoinInfo* info, unsigned int dbid);
    static void GuildJoin(CGuild* guild, CUser* user, unsigned int dbid);

    static CApplication* m_pclApp;
};

class CInnerMsgHandler
{
public:
    CInnerMsgHandler();
    ~CInnerMsgHandler();
    void SendStopNetworkThread();
};

#endif  // GUILD_PACKET_H_
