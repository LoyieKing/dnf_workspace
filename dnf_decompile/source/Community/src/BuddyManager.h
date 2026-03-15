//
// Created by loyieking on 24-3-24.
//

#ifndef DF_PLAYGROUND_BUDDYMANAGER_H
#define DF_PLAYGROUND_BUDDYMANAGER_H

#include <vector>

#include "STPvPBuddyDBInfo.h"
class CBuddyManager {
public:
    std::vector<STPvPBuddyDBInfo> buddies;
    CBuddyManager();
    CBuddyManager(const CBuddyManager &buddyManager);
    void add_buddy(STPvPBuddyDBInfo &buddy);
    bool del_buddy(char server_id, char const* user_id_what);
    STPvPBuddyDBInfo* find_buddy(char server_id, char const* user_id_what);
    int get_size();


};

#endif  // DF_PLAYGROUND_BUDDYMANAGER_H
