// df_relay_r — 日志系统（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <stdlib.h>
#include <string.h>

#include "RelayLog.h"
#include "RelayApp.h"

namespace RelayServiceApp
{

TGlobalInstance<TextOutputDevice_FILE> g_FileLogInfo;
TGlobalInstance<TextOutputDevice_FILE> g_FileLogWarn;
TGlobalInstance<TextOutputDevice_FILE> g_FileLogError;
TGlobalInstance<TextOutputDevice_FILE> g_FileLogCri;
TGlobalInstance<TDebugTrace<char> > g_LogInfo;
TGlobalInstance<TDebugTrace<char> > g_LogCri;
TGlobalInstance<TDebugTrace<char> > g_LogWarn;
TGlobalInstance<TDebugTrace<char> > g_LogError;

PacketHeaderS2S::PacketHeaderS2S(unsigned short a, unsigned short b)
{
    m_a = a;
    m_b = b;
}

Packet_Relay_User_Check::Packet_Relay_User_Check()
    : PacketHeaderS2S(0x9c4, 0xf)
{
    m_f = 0;
    m_g = 0;
}

} // namespace RelayServiceApp

TextOutputDevice_FILE::TextOutputDevice_FILE()
{
    m_fp = 0;
    memset(m_filename, 0, 0x104);
}

TextOutputDevice_FILE::~TextOutputDevice_FILE()
{
    if (m_fp != 0)
    {
        fclose(m_fp);
        m_fp = 0;
    }
}

void TextOutputDevice_FILE::_reopen()
{
    if (m_fp == 0)
    {
        m_fp = fopen(m_filename, "a");
    }
}

void TextOutputDevice_FILE::serialize(char c)
{
    _reopen();
    fputc(c, m_fp);
}

void TextOutputDevice_FILE::serialize(char* str)
{
    _reopen();
    fputs(str, m_fp);
}

void TextOutputDevice_FILE::serialize(char const* str)
{
    _reopen();
    fputs(str, m_fp);
}

void TextOutputDevice_FILE::serialize(wchar_t c)
{
    _reopen();
    fputc((char)c, m_fp);
}

void TextOutputDevice_FILE::serialize(wchar_t* str)
{
    _reopen();
    fputs((char*)str, m_fp);
}

void TextOutputDevice_FILE::serialize(wchar_t const* str)
{
    _reopen();
    fputs((char*)str, m_fp);
}

void TextOutputDevice_FILE::close()
{
    if (m_fp != 0)
    {
        fclose(m_fp);
        m_fp = 0;
    }
}

void TextOutputDevice_FILE::flush()
{
    if (m_fp != 0)
    {
        fflush(m_fp);
    }
}
