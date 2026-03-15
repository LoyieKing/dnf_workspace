//
// Created by loyieking on 24-3-30.
//

#ifndef REDNF_GLOBAL_H
#define REDNF_GLOBAL_H

#include <ctime>

#include "ArchiveLog.h"
#include "UserManager.h"
class ISessionManager;
class CNetworkSession;
struct PacketHeader;

typedef int (*DispatcherFunction)(ISessionManager* sessionManager, CNetworkSession* networkSession, PacketHeader* packetHeader);

// maybe these packets should be in another file?
struct packet_table_item {
    int packet_id;
    DispatcherFunction packet_handler;
};

extern packet_table_item* get_packet_table();
extern int get_packet_table_size();

extern CUserManager g_user_manager;

namespace global_instance {
extern bool shutdown;
extern time_t current_time;
}  // namespace global_instance

namespace global_function {
extern void sleep(int ms);
}

#ifdef ENABLE_REDNF_LOG
#define REDNF_LOG(fmt, ...) ArchiveLog(fmt, ##__VA_ARGS__)
#else
#define REDNF_LOG(fmt, ...)
#endif

#endif  // REDNF_GLOBAL_H
