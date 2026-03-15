//
// Created by loyieking on 24-3-24.
//

#include "UserManager.h"

#include <algorithm>

#include "FindUser.h"

CUserManager g_user_manager = CUserManager();

bool CUserManager::enter_user(unsigned int m_id, CNetworkSession *networkSession, STGameUserInfo &gameUserInfo, int buddyCount, STPvPBuddyDBInfo *buddyList) {
    CUser user(networkSession, gameUserInfo, buddyCount, buddyList);
    std::pair<std::map<unsigned int, CUser>::iterator, bool> insert_result = users.insert(std::pair<unsigned int, CUser>(m_id, user));
    return insert_result.second;
}

CUser *CUserManager::find_user(unsigned int m_id) {
    std::map<unsigned int, CUser>::iterator user = users.find(m_id);
    if (user == users.end()) {
        return NULL;
    }
    return &user->second;
}

CUser *CUserManager::find_user(char service_id, char const *user_id_what) {
    std::map<unsigned int, CUser>::iterator user = std::find_if(users.begin(), users.end(), CFindUser(service_id, user_id_what));
    if (user == users.end()) {
        return NULL;
    }
    return &user->second;
}
bool CUserManager::leave_user(unsigned int m_id) {
    std::map<unsigned int, CUser>::iterator user = users.find(m_id);
    if (user == users.end()) {
        return false;
    }
    users.erase(user);
    return true;
}
bool CUserManager::leave_user(CNetworkSession *networkSession) {
    std::map<unsigned int, CUser>::iterator p = users.begin();
    std::map<unsigned int, CUser>::iterator end = users.end();
    while (true) {
        if (p == end) {
            break;
        }
        if (p->second.networkSession == networkSession) {
            users.erase(p++);
        } else {
            p++;
        }
    }
    return true;
}
