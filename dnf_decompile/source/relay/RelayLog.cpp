// df_relay_r — 日志系统（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <stdlib.h>
#include <string.h>

#include "RelayLog.h"

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
