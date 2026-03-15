//
// Created by loyieking on 24-3-23.
//

#include "PacketDispatcher.h"

DispatcherFunction CPacketDispatcher::get_dispatcher(ushort id) {
    std::map<int, DispatcherFunction>::iterator found = packetTable.find(id);
    if (found == packetTable.end()) {
        return NULL;
    }
    return found->second;
}
void CPacketDispatcher::register_packet(ushort id, DispatcherFunction dispatcher) {
    // 来自反编译/DWARF 的推断：原始代码使用 insert(make_pair(...))，而非 operator[]
    // insert 语义为：key已存在时不覆盖旧值（operator[] 会覆盖）
    packetTable.insert(std::make_pair(id, dispatcher));
}
