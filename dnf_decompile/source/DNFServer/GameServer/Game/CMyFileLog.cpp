#include "CMyFileLog.h"

// CMyFileLog.cpp — 迁移自 GameStubs.cpp 的单参 operator() 桩。
// ORIG 仅有两参形式 operator()(const char*, const char*, ...)（由
// ServerCommon/DNFFileLog.cpp 定义，含 ctor）；工程另有 PvP_GuildWar_Log.cpp
// 使用单参形式 operator()(const char*, ...)（_ZN10CMyFileLogclEPKcz），
// 为项目自造桥接符号，此处仅提供该单参形式，不重复定义 ctor/两参形式。

void CMyFileLog::operator()(const char*, ...)
{
}