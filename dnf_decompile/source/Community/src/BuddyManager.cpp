//
// Created by loyieking on 24-3-24.
//

#include "BuddyManager.h"

#include <algorithm>

#include "FindBuddy.h"
CBuddyManager::CBuddyManager() {
}
CBuddyManager::CBuddyManager(const CBuddyManager& buddyManager) : buddies(buddyManager.buddies) {
}
void CBuddyManager::add_buddy(STPvPBuddyDBInfo& buddy) {
    buddies.push_back(buddy);
}
bool CBuddyManager::del_buddy(char server_id, const char* user_id_what) {
    CFindBuddy findBuddy(server_id, user_id_what);
    std::vector<STPvPBuddyDBInfo>::iterator it = std::find_if(buddies.begin(), buddies.end(), findBuddy);
    bool found = it != buddies.end();
    if (found) {
        buddies.erase(it);
    }
    return found;
}
STPvPBuddyDBInfo* CBuddyManager::find_buddy(char server_id, const char* user_id_what) {
    CFindBuddy findBuddy(server_id, user_id_what);
    std::vector<STPvPBuddyDBInfo>::iterator it = std::find_if(buddies.begin(), buddies.end(), findBuddy);
    return it != buddies.end() ? &(*it) : NULL;
}
int CBuddyManager::get_size() {
    return buddies.size();
}
