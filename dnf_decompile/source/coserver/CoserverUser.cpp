// df_coserver_r — CUser/CUserManager（UDP 用户，非 Community 会话用户）
#include <utility>

#include "CoserverUser.h"
#include "CoserverServer.h"
#include "CoserverPacket.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CUser::CUser()
{
    m_gs = 0;
}

CUser::CUser(CGameServer* gs)
{
    m_gs = gs;
}

CUser::~CUser()
{
    m_gs = 0;
}

CGameServer* CUser::GetGameServer()
{
    return m_gs;
}

void CUser::SendToGameserver(char* buf, int len)
{
    if (m_gs != 0)
    {
        m_gs->SendToGameServer(buf, len);
    }
}

CUserManager::CUserManager()
{
    m_app = 0;
}

CUserManager::~CUserManager()
{
    for (int i = 0; i < 10; i++)
    {
        m_maps[i].clear();
    }
}

void CUserManager::Init(CApplication* app)
{
    m_app = app;
}

bool CUserManager::DeleteUser(Packet_DoubleCheck_UDP_Logout* pkt)
{
    unsigned int user_id = pkt->m_userID;
    std::map<const unsigned int, CUser>::iterator it = m_maps[user_id % 10].find(user_id);
    if (it == m_maps[user_id % 10].end())
    {
        return 0;
    }
    m_maps[user_id % 10].erase(it);
    return 1;
}

void CUserManager::CreateUser(unsigned int user_id, CGameServer* gs)
{
    CUser user(gs);
    bool eq = m_maps[user_id % 10].insert(
        std::make_pair<const unsigned int&, CUser>(user_id, user)).second;
    if (!eq)
    {
        register char* num = NumberToString(user_id, 0);
        DNF_LOG_SCOPE_LINE(0x5f, "./log/LoginErr",
            "CreateUser() uDBID(%s) is already exist at m_mapUsers!", num);
    }
}

bool CUserManager::FindUser(unsigned int user_id, CUser& out)
{
    std::map<const unsigned int, CUser>::const_iterator it = m_maps[user_id % 10].find(user_id);
    if (it == m_maps[user_id % 10].end())
    {
        return 0;
    }
    out.m_gs = it->second.m_gs;
    return 1;
}
