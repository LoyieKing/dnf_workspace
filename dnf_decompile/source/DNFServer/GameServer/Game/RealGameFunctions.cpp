#include <bitset>
#include "GameWorld.h"

void BitsetToStr(const std::bitset<256>& bits, unsigned char* out)
{
    if (!out) return;
    for (unsigned int i = 0; i < 32; ++i) {
        out[i] = 0;
        for (unsigned int b = 0; b < 8; ++b)
            if (bits[i * 8 + b]) out[i] = (unsigned char)(out[i] | (1u << b));
    }
}

void StrToBitset(unsigned char* data, std::bitset<256>& bits)
{
    bits.reset();
    if (!data) return;
    for (unsigned int i = 0; i < 32; ++i)
        for (unsigned int b = 0; b < 8; ++b)
            bits[i * 8 + b] = (data[i] & (1u << b)) != 0;
}

bool IsDeathMatchMap(int mapNo, bool& onlyDeathMatch)
{
    onlyDeathMatch = false;
    if (mapNo < 0 || mapNo > 0x13) return false;
    onlyDeathMatch = mapNo >= 0x08;
    return onlyDeathMatch;
}

bool GameWorld_IsCharacterLevelRevisionChannel(void* world)
{
    return world != 0 &&
           static_cast<GameWorld*>(world)->IsCharacterLevelRevisionChannel();
}
