// df_game_r Game/ APSystem 命名空间类实现（独立 TU，从 GameStubs.cpp 拆出）。
#include "CUser.h"
#include "MoreTypes.h"

namespace APSystem
{
class _ActionGroupIndex { public: int m_value; };
class CUserProc {
public:
    static void SendActionClear(CUser&, unsigned short, _ActionGroupIndex, bool, ENUM_PACKETCLASS);
    static void CheckAndSendToMessageAllUser(unsigned int, unsigned int, const char*);
};

int CActionPointManager::GetActionPoint() const
{
    return *reinterpret_cast<const int*>(reinterpret_cast<const unsigned char*>(this) + 0x0c);
}

void CActionPointManager::GM_Set(CUser& user, unsigned int value)
{
    unsigned char* bytes = reinterpret_cast<unsigned char*>(this);
    *reinterpret_cast<unsigned int*>(bytes + 0x04) = 0;
    *reinterpret_cast<unsigned int*>(bytes + 0x0c) = 0;
    for (int row = 0; row < 300; ++row)
        for (int slot = 0; slot < 5; ++slot) {
            signed char& entry = *reinterpret_cast<signed char*>(bytes + 0x1b + row * 0x0b + slot);
            if (entry > 0) entry = static_cast<signed char>(-entry);
        }
    for (int row = 0; row < 300 && GetActionPoint() < (int)value; ++row)
        for (int slot = 0; slot < 5 && GetActionPoint() < (int)value; ++slot) {
            signed char& entry = *reinterpret_cast<signed char*>(bytes + 0x1b + row * 0x0b + slot);
            if (entry < 0) {
                *reinterpret_cast<unsigned int*>(bytes + 0x04) = GetActionPoint();
                entry = static_cast<signed char>(-entry);
                *reinterpret_cast<unsigned int*>(bytes + 0x0c) += entry;
                _ActionGroupIndex group;
                group.m_value = *reinterpret_cast<int*>(bytes + 0x17 + row * 0x0b);
                CUserProc::SendActionClear(user, *reinterpret_cast<unsigned short*>(bytes + 0x15 + row * 0x0b), group, true, ENUM_PACKETCLASS_0);
                CUserProc::CheckAndSendToMessageAllUser(*reinterpret_cast<unsigned int*>(bytes + 0x04), GetActionPoint(), 0);
            }
        }
}

void CActionPointManager::Reset()
{
    unsigned char* bytes = reinterpret_cast<unsigned char*>(this);
    *reinterpret_cast<unsigned int*>(bytes + 0x04) = 0;
    *reinterpret_cast<unsigned int*>(bytes + 0x0c) = 0;
    bytes[0x10] = 0;
    *reinterpret_cast<unsigned int*>(bytes + 0x11) = 0;
    for (int row = 0; row < 300; ++row)
        for (int slot = 0; slot < 5; ++slot) {
            signed char& entry = *reinterpret_cast<signed char*>(bytes + 0x1b + row * 0x0b + slot);
            if (entry > 0) entry = static_cast<signed char>(-entry);
        }
}

class _MSG_ACTION_POINT_ACTION_CLEAR { public: _MSG_ACTION_POINT_ACTION_CLEAR(); };
_MSG_ACTION_POINT_ACTION_CLEAR::_MSG_ACTION_POINT_ACTION_CLEAR() {}
class DB_UpdateActionPoint { public: void makeRequest(int, const _SIG_LOAD_ACTION_POINT&, bool); };
void DB_UpdateActionPoint::makeRequest(int, const _SIG_LOAD_ACTION_POINT&, bool) {}
} // namespace APSystem
