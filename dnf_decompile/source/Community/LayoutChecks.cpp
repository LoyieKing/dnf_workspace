#include <assert.h>
#include <stddef.h>

#include "BuddyManager.h"
#include "STGameUserInfo.h"
#include "User.h"

// df_community_r is a 32-bit target. Keep these checks in their own TU so
// layout drift fails during compilation without exposing CUser's private data.
//
// 注：STGameUserInfo 带用户构造函数（非 POD），GCC 4.4.6 下 offsetof 宏
// 对其报 "invalid access to non-static data member of NULL object"（C++98
// 规定 offsetof 仅限 POD）。故成员偏移改用真实对象求值做运行时断言，
// 总大小仍为编译期 typedef 数组断言。
typedef char layout_st_game_user_info_size[(sizeof(STGameUserInfo) == 0x30) ? 1 : -1];

typedef char layout_c_buddy_manager_size[(sizeof(CBuddyManager) == 0x0c) ? 1 : -1];
typedef char layout_c_user_size[(sizeof(CUser) == 0x40) ? 1 : -1];

int main()
{
    STGameUserInfo info;
    const char *base = (const char *)&info;
    assert(base + 0x00 == (const char *)&info.server_id);
    assert(base + 0x01 == (const char *)&info.user_m_id);
    assert(base + 0x05 == (const char *)&info.m_uid);
    assert(base + 0x09 == (const char *)&info.channel_no);
    assert(base + 0x0a == (const char *)&info.charac_no);
    assert(base + 0x0e == (const char *)&info.m_name);
    assert(base + 0x2c == (const char *)&info.m_level);
    return 0;
}
