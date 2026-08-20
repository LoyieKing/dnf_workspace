/*
 * 新增/修改类布局的 C++98 编译期验证。
 *
 * 这里只选择无需 STL/链接、且头文件给出明确布局依据的类型；typedef
 * 数组断言可由旧版 g++ 在实际 TU 中求值。
 * 注意：不对此处类使用 offsetof——它们带用户构造函数，C++98 下
 * offsetof 对非 POD 类型是未定义行为，GCC 4.4.6 会直接报错。
 */
#include "AvatarCoin.h"
#include "BlueMarblePOD.h"
#include "CMap.h"
#include "GamePODTypes.h"

typedef char check_avatar_coin_size[(sizeof(AvatarCoin) == 0x04) ? 1 : -1];

typedef char check_buff_info_size[(sizeof(BuffInfo) == 0x0c) ? 1 : -1];
typedef char check_tile_index_info_size[
    (sizeof(TileIndexInfo) == 0x08) ? 1 : -1];

typedef char check_avatar_emblem_info_size[
    (sizeof(stAvatarEmblemInfo_t) == 0x1e) ? 1 : -1];
typedef char check_avatar_expansion_info_size[
    (sizeof(stAvatarExpansionInfo_t) == 0x04) ? 1 : -1];

typedef char check_avatar_detail_info_size[
    (sizeof(AvatarDetailInfo) == 0x48) ? 1 : -1];
typedef char check_cmap_size[(sizeof(CMap) == 0x130) ? 1 : -1];
typedef char check_st_map_script_size[
    (sizeof(STMapScript) == 0x37c) ? 1 : -1];

int main()
{
    return 0;
}
