//
// Created by loyieking on 24-3-24.
//

#ifndef DF_PLAYGROUND_FINDUSER_H
#define DF_PLAYGROUND_FINDUSER_H

#include <utility>

#include "User.h"
class CFindUser {
    char server_id;
    char user_id_what[0x1e];

public:
    CFindUser(char server_id, char const* user_id_what);
    bool operator()(std::pair<unsigned int, CUser> user) const;
};

#endif  // DF_PLAYGROUND_FINDUSER_H
