// df_guild_r — CPacketDecoder/CPacketTracer/CPacketTranslater/CInnerMsgHandler
#include <stdio.h>
#include <string.h>

#include "GuildPacket.h"
#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildUdp.h"
#include "DNFFileLog.h"

CApplication* CPacketTranslater::m_pclApp = 0;

void CPacketTranslater::attach(CApplication* app)
{
    m_pclApp = app;
}

#define STUB_HANDLER(name) \
    void CPacketTranslater::name(PacketHeader* pkt) {}

STUB_HANDLER(OnHeartBeat)
STUB_HANDLER(OnLogin)
STUB_HANDLER(OnLogout)
STUB_HANDLER(OnReplyUserInfo)
STUB_HANDLER(OnCharLogin)
STUB_HANDLER(OnReplyQueryGuild)
STUB_HANDLER(OnDBReplyQueryGuildMember)
STUB_HANDLER(OnNoticeGuildEnter)
STUB_HANDLER(OnNoticeGuildSecede)
STUB_HANDLER(OnNoticeGuildMarkChange)
STUB_HANDLER(OnNoticeGuildDismiss)
STUB_HANDLER(OnNoticeGuildChatMsg)
STUB_HANDLER(OnSetGuildMemberGrade)
STUB_HANDLER(OnCallGuildMembers)
STUB_HANDLER(OnCallGuildAllMembers)
STUB_HANDLER(OnDBReplyGuildAllMembers)
STUB_HANDLER(OnDBReplyUnconnGuildMember)
STUB_HANDLER(OnCallGuildLevelUp)
STUB_HANDLER(OnCallGuildInfo)
STUB_HANDLER(OnNoticeGuildCreate)
STUB_HANDLER(OnCharacterDelete)
STUB_HANDLER(OnUpdateChangableCharInfo)
STUB_HANDLER(OnEventStart)
STUB_HANDLER(OnEventEnd)
STUB_HANDLER(OnLoadGuildWarEnterableGuilds)
STUB_HANDLER(OnNoticeGuildWarEnd)
STUB_HANDLER(OnNoticeGuildMailArrive)
STUB_HANDLER(OnNoticeGuildWarStart)
STUB_HANDLER(OnNoticeGuildWarPointChange)
STUB_HANDLER(OnRequestGuildWarInfo)
STUB_HANDLER(OnRegisterToBlackList)
STUB_HANDLER(OnDeleteToBlackList)
STUB_HANDLER(OnRequestBlackList)
STUB_HANDLER(OnDBMWResisterToBlackList)
STUB_HANDLER(OnDBMWDeleteToBlackList)
STUB_HANDLER(OnDBMWResponseBlackListOnLogin)
STUB_HANDLER(OnIncreaseGuildExp)
STUB_HANDLER(OnBuyGuildSkill)
STUB_HANDLER(OnDBMWChangeUnconnectedGuildMemberGrade)
STUB_HANDLER(OnNotifyMessageToGuild)
STUB_HANDLER(OnMonitorManagerConnectOK)
STUB_HANDLER(OnMonitorSendGuildLetter)
STUB_HANDLER(OnDBMWReplySendGuildLetter)
STUB_HANDLER(OnCallGuildInvite)
STUB_HANDLER(OnReplyGuildInvite)
STUB_HANDLER(OnDBMWGuildJoin)
STUB_HANDLER(OnRequestGuildSecede)
STUB_HANDLER(OnDBReplyGuildSecede)
STUB_HANDLER(OnRequestGuildMasterDelegate)
STUB_HANDLER(OnDBReplyGuildMasterDelegate)
STUB_HANDLER(OnRequestGuildCreate)
STUB_HANDLER(OnDBReplyGuildCreate)
STUB_HANDLER(OnSetGuildMemberGradeFromWeb)
STUB_HANDLER(OnGuildMasterDelegateFromWeb)
STUB_HANDLER(OnCheckGuildMemberConnectionFromWeb)
STUB_HANDLER(OnInnerPacketLogin)
STUB_HANDLER(OnInnerPacketLogout)
STUB_HANDLER(OnChangeGuildName)
STUB_HANDLER(OnPowerWarStartInfo)
STUB_HANDLER(OnChangePowerWarPoint)
STUB_HANDLER(OnPacketJoinPower)
STUB_HANDLER(OnPacketSecedePower)
STUB_HANDLER(OnSetPowerWarCfg)
STUB_HANDLER(OnLoadFromDBOnGuildBooting)
STUB_HANDLER(OnGMPowerWarStart)
STUB_HANDLER(OnGMPowerWarEnd)
STUB_HANDLER(OnChangeCharName)
STUB_HANDLER(OnChangeGuildNameFromWeb)
STUB_HANDLER(OnNotifyNewGroupMail)
STUB_HANDLER(OnInCreaseDecreasePowerWarPoint)
STUB_HANDLER(OnCreateGuildAgit)
STUB_HANDLER(OnDeleteGuildAgit)
STUB_HANDLER(OnDBCreateGuildAgit)
STUB_HANDLER(OnDBDeleteGuildAgit)
STUB_HANDLER(OnPowerWarProcessInfo)
STUB_HANDLER(OnDBLoadGuildAgit)
STUB_HANDLER(OnUpgradeGuildAgit)
STUB_HANDLER(OnDBUpgradeGuildAgit)
STUB_HANDLER(OnGuildExpLimit)
STUB_HANDLER(OnWriteGuildMemberMemo)
STUB_HANDLER(OnLoadGuildCargo)
STUB_HANDLER(OnLoadGuildCargoHistory)
STUB_HANDLER(OnGuildCargo)
STUB_HANDLER(OnGuildCargoHistory)
STUB_HANDLER(OnGuildCargoCheckPushItem)
STUB_HANDLER(OnGuildCargoPushItem)
STUB_HANDLER(OnGuildCargoPopItem)
STUB_HANDLER(OnGuildCargoMoveItem)
STUB_HANDLER(OnGuildCargoUpgrade)
STUB_HANDLER(OnGuildRequestGuildBoardOpen)
STUB_HANDLER(OnDBLoadReplyGuildBoardOpen)
STUB_HANDLER(OnGuildRequestGuildBoardWrite)
STUB_HANDLER(OnDBLoadReplyGuildBoardWrite)
STUB_HANDLER(OnGuildRequestGuildBoardDelete)
STUB_HANDLER(OnDBLoadReplyGuildBoardDelete)
STUB_HANDLER(OnWebGuildBoardWrite)
STUB_HANDLER(OnWebGuildBoardDelete)
STUB_HANDLER(OnDBLoadReplyWebGuildBoardWrite)
STUB_HANDLER(OnGuildApplyOriginalPowerSide)
STUB_HANDLER(OnGameServerRegist)
STUB_HANDLER(OnAddGuildFund)
STUB_HANDLER(OnRefreshGuildInfo)
STUB_HANDLER(OnReplyTodayGuildMember)
STUB_HANDLER(OnApproveJoinGuild)
STUB_HANDLER(OnDBResponseApproveJoinGuild)
STUB_HANDLER(OnGuildAttendanceInfo)
STUB_HANDLER(OnGuildDebug)
STUB_HANDLER(OnRenew_GM_List)
STUB_HANDLER(OnNoticeGuildChatMsgHyperLink)

#undef STUB_HANDLER

CPacketDecoder::CPacketDecoder()
{
    memset(m_data, 0, sizeof(m_data));
}

CPacketDecoder::~CPacketDecoder()
{
}

CPacketDecoder* CPacketDecoderInstance()
{
    static CPacketDecoder instance;
    return &instance;
}

void CPacketDecoder::Attach(CApplication* app)
{
}

int CPacketDecoder::Process()
{
    return 0;
}

int CPacketDecoder::TcpProcess()
{
    return 0;
}

int CPacketDecoder::UdpProcess()
{
    return 0;
}

int CPacketDecoder::MsgDecode(PacketHeader* pkt)
{
    return 0;
}

void CPacketDecoder::SetTCPQueue(std::queue<CTcpRecvBuffer*>* q)
{
}

void CPacketDecoder::SetUdpQueue(std::queue<CUdpRecvBuffer*>* q)
{
}

CPacketTracer::CPacketTracer()
{
}

CPacketTracer::~CPacketTracer()
{
}

CPacketTracer* CPacketTracerInstance()
{
    static CPacketTracer instance;
    return &instance;
}

void CPacketTracer::AddLog(int p1, int p2)
{
}

void CPacketTracer::ResetLog()
{
}

void CPacketTracer::WriteLog()
{
}

void CPacketTracer::AbsoluteWriteLog()
{
}

template<int Lo, int Hi>
CPacketCounter<Lo, Hi>::CPacketCounter(char* name, char* title)
{
}

template<int Lo, int Hi>
CPacketCounter<Lo, Hi>::~CPacketCounter()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::IncrementPacketCount(int id)
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::BeforeProcess()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::AfterProcess()
{
}

template<int Lo, int Hi>
void CPacketCounter<Lo, Hi>::WriteLog()
{
}

CInnerMsgHandler::CInnerMsgHandler()
{
}

CInnerMsgHandler::~CInnerMsgHandler()
{
}

void CInnerMsgHandler::SendStopNetworkThread()
{
}
