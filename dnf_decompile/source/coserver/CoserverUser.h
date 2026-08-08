#ifndef COSERVER_USER_H_
#define COSERVER_USER_H_

#include <map>

class CApplication;
class CGameServer;
class Packet_DoubleCheck_UDP_Logout;

// CUser：CGameServer*@0（4）
class CUser
{
public:
    CUser();
    CUser(CGameServer* gs);
    ~CUser();
    CGameServer* GetGameServer();
    void SendToGameserver(char* buf, int len);
    CGameServer* m_gs;   // +0
};

// CUserManager：10 × map<const uint, CUser>@0（0x18）+ CApplication*@0xf0（0xf4）
class CUserManager
{
public:
    CUserManager();
    ~CUserManager();
    void Init(CApplication* app);
    bool DeleteUser(Packet_DoubleCheck_UDP_Logout* pkt);
    void CreateUser(unsigned int user_id, CGameServer* gs);
    bool FindUser(unsigned int user_id, CUser& out);
    std::map<const unsigned int, CUser> m_maps[10];  // +0
    CApplication* m_app;                              // +0xf0
};

#endif // COSERVER_USER_H_
