//
// Created by loyieking on 24-3-24.
//

#ifndef DF_PLAYGROUND_USERMANAGER_H
#define DF_PLAYGROUND_USERMANAGER_H

#include <map>

#include "STGameUserInfo.h"
#include "STPvPBuddyDBInfo.h"

class CUser;
class CNetworkSession;

class CUserManager {
    std::map<unsigned int, CUser> users;

public:
    bool enter_user(unsigned int m_id, CNetworkSession* networkSession, STGameUserInfo& gameUserInfo, int buddyCount, STPvPBuddyDBInfo* buddyList);
    CUser* find_user(unsigned int m_id);
    CUser* find_user(char server_id, char const* user_id_what);
    bool leave_user(unsigned int m_id);
    bool leave_user(CNetworkSession* networkSession);
};

#endif  // DF_PLAYGROUND_USERMANAGER_H
