#include <bitset>
#include "GameWorld.h"

// BitsetToStr/StrToBitset 已由 CMissionList_Charac.cpp 真实定义（ORIG 0x8a5a90a/0x8a5a989），
// IsDeathMatchMap 已由 GameStubs.cpp 保留 ORIG 忠实实现（0x85d4636 + PVPMAP_DEATHMATCH_MODE），
// 本 TU 不再重复定义。

bool GameWorld_IsCharacterLevelRevisionChannel(void* world)
{
    return world != 0 &&
           static_cast<GameWorld*>(world)->IsCharacterLevelRevisionChannel();
}
