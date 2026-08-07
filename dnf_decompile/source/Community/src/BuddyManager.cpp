//
// Created by loyieking on 24-3-24.
//


#include "BuddyManager.h"

#include <iostream>
#include "DNFFunctionLib.h"
#include "CommonConstants.h"
#include "GuildConstants.h"

#include <algorithm>

#include "FindBuddy.h"

void CBuddyManager::add_buddy(STPvPBuddyDBInfo& buddy) {
    buddies.push_back(buddy);
}

CBuddyManager::CBuddyManager() {
}
CBuddyManager::CBuddyManager(const CBuddyManager& buddyManager) : buddies(buddyManager.buddies) {
}
CBuddyManager::~CBuddyManager() {
    buddies.clear();  // 与原始反编译一致：析构先 clear
}
bool CBuddyManager::del_buddy(char server_id, const char* user_id_what) {
    CFindBuddy findBuddy(server_id, user_id_what);
    std::vector<STPvPBuddyDBInfo>::iterator it = std::find_if(buddies.begin(), buddies.end(), findBuddy);
    if (it != buddies.end()) {
        buddies.erase(it);
        return true;
    }
    return false;
}
STPvPBuddyDBInfo* CBuddyManager::find_buddy(char server_id, const char* user_id_what) {
    CFindBuddy findBuddy(server_id, user_id_what);
    std::vector<STPvPBuddyDBInfo>::iterator it = std::find_if(buddies.begin(), buddies.end(), findBuddy);
    return it != buddies.end() ? &(*it) : NULL;
}
unsigned int CBuddyManager::get_size() {
    return buddies.size();
}
