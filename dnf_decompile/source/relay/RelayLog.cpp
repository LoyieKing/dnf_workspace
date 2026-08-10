// df_relay_r — 日志系统（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

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

} // namespace RelayServiceApp

TextOutputDevice_FILE::TextOutputDevice_FILE()
{
    m_fp = 0;
    memset(m_filename, 0, 0x104);
}

TextOutputDevice_FILE::~TextOutputDevice_FILE()
{
    close();
}

void TextOutputDevice_FILE::_reopen()
{
    if (m_fp != 0)
    {
        return;
    }
    FILE* fp = fopen(m_filename, "a");
    if (fp == 0)
    {
        return;
    }
    m_fp = fp;
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
    fputwc(c, m_fp);
}

void TextOutputDevice_FILE::serialize(wchar_t* str)
{
    _reopen();
    fputs((char*)str, m_fp);
}

void TextOutputDevice_FILE::serialize(wchar_t const* str)
{
    _reopen();
    fputws(str, m_fp);
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
    close();
}
