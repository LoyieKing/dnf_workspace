//
// Created by loyieking on 24-3-23.
//

#pragma once

#include <map>

#include "ReverseEngineerLib.h"
#include "global.h"

class CPacketDispatcher {
    std::map<int, DispatcherFunction> packetTable;
public:
    DispatcherFunction get_dispatcher(ushort id);
    void register_packet(ushort id, DispatcherFunction dispatcher);
};
