//
// Created by loyieking on 24-3-24.
//

#include "FindUser.h"

#include <cstring>
CFindUser::CFindUser(char server_id, char const *user_id_what) {
    this->server_id = server_id;
    memset(this->user_id_what, 0, sizeof(this->user_id_what));
    memcpy(this->user_id_what, user_id_what, sizeof(this->user_id_what) - 1);
}

bool CFindUser::operator()(std::pair<unsigned int, CUser> user) const {
    if (this->server_id == user.second.stGameUserInfo.server_id && strcmp(this->user_id_what, user.second.stGameUserInfo.buddy_n_user_id_what) == 0) {
        return true;
    }
    return false;
}
