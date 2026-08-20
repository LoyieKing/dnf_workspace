/*
 * 共享 packet 布局编译期验证。
 *
 * 使用 C++98 typedef 数组表达式，避免依赖 C++11 static_assert。
 * 断言包总尺寸；字段偏移已由包头注释和 packed 布局证据确认，
 * 此处不使用 offsetof，以保持对旧编译器和非标准布局类型的兼容。
 */
#include "PacketHeader.h"
#include "Packet_Assert_Manager_Info.h"
#include "Packet_P2P_Statistics.h"
#include "Packet_User_Ting_TimeCheck_Statistic_Add.h"

typedef char packet_header_size_must_be_0x0a
    [(sizeof(PacketHeader) == 0x0a) ? 1 : -1];

typedef char packet_assert_manager_info_size_must_be_0x214
    [(sizeof(Packet_Assert_Manager_Info) == 0x214) ? 1 : -1];

typedef char packet_p2p_statistics_size_must_be_0x3f
    [(sizeof(Packet_P2P_Statistics) == 0x3f) ? 1 : -1];

typedef char packet_user_ting_timecheck_statistic_add_size_must_be_0x12
    [(sizeof(Packet_User_Ting_TimeCheck_Statistic_Add) == 0x12) ? 1 : -1];

int main()
{
    return 0;
}
