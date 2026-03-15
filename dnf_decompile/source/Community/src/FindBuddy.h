//
// Created by loyieking on 24-3-24.
//

#ifndef DF_PLAYGROUND_FINDBUDDY_H
#define DF_PLAYGROUND_FINDBUDDY_H

#include "STPvPBuddyDBInfo.h"
class CFindBuddy {
    char server_id;
    char buddy_n_user_id_what[0x1e];

public:
    CFindBuddy(char server_id, char const* buddy_n_user_id_what);
    bool operator()(STPvPBuddyDBInfo & buddy) const;
};

#endif  // DF_PLAYGROUND_FINDBUDDY_H
