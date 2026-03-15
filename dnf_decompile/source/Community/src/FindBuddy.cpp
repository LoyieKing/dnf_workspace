//
// Created by loyieking on 24-3-24.
//

#include "FindBuddy.h"

#include <cstring>
CFindBuddy::CFindBuddy(char server_id, const char *buddy_n_user_id_what) {
    this->server_id = server_id;
    memset(this->buddy_n_user_id_what, 0, sizeof(this->buddy_n_user_id_what));
    memcpy(this->buddy_n_user_id_what, buddy_n_user_id_what, sizeof(this->buddy_n_user_id_what) - 1);
}
bool CFindBuddy::operator()(STPvPBuddyDBInfo &buddy) const {
    if (server_id == buddy.server_id && strcmp(this->buddy_n_user_id_what, buddy.buddy_n_user_id_what) == 0) {
        return true;
    }
    return false;
}
