// df_guild_r — CPacketDecoder/CPacketTracer/CPacketTranslater/CInnerMsgHandler
#include <stdio.h>
#include <string.h>

#include "GuildPacket.h"
#include "GuildApp.h"
#include "GuildServer.h"
#include "GuildUdp.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CApplication* CPacketTranslater::m_pclApp = 0;

void CPacketTranslater::attach(CApplication* app)
{
    m_pclApp = app;
}

#define STUB_HANDLER(name) \
    void CPacketTranslater::name(PacketHeader* pkt) {}

void CPacketTranslater::OnLogin(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp != 0)
    {
        CGameServer* gs = m_pclApp->FindGameServer(*(unsigned int*)(pb + 0xe));
        if (gs == 0)
        {
            char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
            CMyFileLog log("OnLogin", 0x65);
            log("./log/Channel", "Not Found M_ID(%s) Channel No(%d)", mid,
                (unsigned int)(unsigned char)pb[0x12]);
        }
        else
        {
            CTcpGameServer* tgs = m_pclApp->FindTcpGameServer(*(unsigned int*)(pb + 0xe));
            if (tgs != 0)
            {
                CUserManager* um = m_pclApp->Get_UserManager();
                CUser* user = um->FindUser(*(unsigned int*)(pb + 0xe));
                if (user == 0)
                {
                    CUser* nu = um->CreateUser(*(unsigned int*)(pb + 0xe), 0, "",
                                               *(int*)(pb + 10), gs);
                    char* mid = NumberToString(*(unsigned int*)(pb + 0xe), 0);
                    CMyFileLog log("OnLogin", 0x76);
                    log("./log/User", "Current user count : %d\tConnected User DB ID : %s\n",
                        um->Size(), mid);
                    nu->SetSex((unsigned char)pb[0x23]);
                    nu->SetSsn(pb + 0x2c);
                    nu->SetTcpGameServer(tgs);
                    CMemoryCashManager* mc = m_pclApp->Get_MemoryCashManager();
                    if (mc->QueryCashMemoryBlackList(nu) != 1)
                    {
                    }
                }
                else
                {
                    char* mid = NumberToString(user->GetDBID(), 0);
                    CMyFileLog log("OnLogin", 0x70);
                    log("./log/User",
                        "DOUBLE CONNECTED : Already User DB ID(%s)\tChannel(%d)\tCurrent Connect User DB ID(%s)\tChannel(%d)\n",
                        mid, (unsigned int)user->GetGameServer()->m_field9,
                        NumberToString(*(unsigned int*)(pb + 0xe), 1),
                        (unsigned int)gs->m_field9);
                }
            }
        }
    }
}

void CPacketTranslater::OnLogout(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp != 0)
    {
        CUserManager* um = m_pclApp->Get_UserManager();
        CUser* user = um->FindUser(*(unsigned int*)(pb + 10));
        if (user != 0)
        {
            char* mid = NumberToString(*(unsigned int*)(pb + 10), 0);
            CMyFileLog log("OnLogout", 0xaa);
            log("./log/User",
                "[USER LOGOUT] User DB ID : %s\tChar No : %d\tChar Name : %s\tGuild Key : %d\tGuild Flag : %d\n",
                mid, user->GetUniqCharNo(), user->GetCharName(), user->GetGuildKey(),
                user->GetGuildMemFlag());
            um->DeleteUser(user);
        }
    }
}

void CPacketTranslater::OnHeartBeat(PacketHeader* pkt)
{
}

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
