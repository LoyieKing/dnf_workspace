// ============================================================================
// __dnf_script__FlexLexer 基础引擎方法（词法引擎批次；ORIG 地址与汇编证据见
// docs/class_func_reports/__dnf_script__FlexLexer.md）
// ----------------------------------------------------------------------------
// 本 TU 承载 __dnf_script__FlexLexer（_ZN23__dnf_script__FlexLexer*）引擎符号。
// 当前实现（ORIG 地址 / 汇编证据）：
//   yypop_buffer_state()     _ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv
//                                                     ORIG 0x8ad1d00
//   yyensure_buffer_stack()  _ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv
//                                                     ORIG 0x8ad2350
//   yypush_buffer_state()    _ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state
//                                                     ORIG 0x8ad2420
// 其中 yypop 为 DNFLex::PopInputStream（DNFLexCore.cpp）的依赖；yypush /
// yyensure 为 DNFLex::PushInputStream 的依赖（Main 委托本 TU 补齐）。
// 经 LexStreamMethods / ScannerMethods / LexSimpleAccessors / CompiledLexCore
// 确认无人认领，由本 TU 提供（若后续引擎批次接管，可整体迁移本文件）。
//
// 字段布局依据 ORIG 0x8ad1940（基类构造）/ 0x8ad27e0（基类析构）/
// 0x8ad1d00 / 0x8ad2350 / 0x8ad2420 汇编（__dnf_script__FlexLexer，this
// 基地址）：
//   +0x00 vptr
//   +0x04 yytext（FlexLexer 基类，DNFLexWrapper 文档：wrapper+0x1c = +0x04）
//   +0x0c yylineno（FlexLexer 基类；构造 movl $1,0xc(%eax)）
//   +0x10 yy_flex_debug（FlexLexer 基类）
//   +0x14 yy_start_stack_ptr / +0x18 yy_start_stack_depth
//   +0x1c yy_start_stack（int*；析构 free）
//   +0x20 yyin（istream*）
//   +0x24 yyout（ostream*）
//   +0x28 yy_hold_char（char）
//   +0x2c yy_n_chars（int）
//   +0x30 yy_c_buf_p（char*）
//   +0x34 yy_init / +0x38 yy_start
//   +0x3c yy_did_buffer_switch_on_eof（int）
//   +0x40 yy_buffer_stack_top（int）
//   +0x44 yy_buffer_stack_max（int；yyensure 汇编 mov 0x44(%ebx),%esi）
//   +0x48 yy_buffer_stack（yy_buffer_state**）
//   +0x4c yy_last_accepting_state / +0x50 yy_last_accepting_cpos
//   +0x54 yy_state_buf（析构 delete[]）
//   +0x58 yy_state_ptr / +0x5c yy_full_match / +0x60 yy_full_state
//   +0x6c yy_looking_for_trail_begin / +0x70 yy_more_flag
//   +0x74 yy_more_len / +0x78 yy_more_offset / +0x7c yy_prev_more_offset
//
// yy_buffer_state 布局（ORIG yy_create_buffer 0x8ad2620 / yypop_buffer_state
// 汇编读取偏移；malloc(0x30)）：
//   +0x00 yy_input_file（istream*）
//   +0x04 yy_ch_buf（char*）
//   +0x08 yy_buf_pos（char*）
//   +0x0c yy_buf_size（int）
//   +0x10 yy_n_chars（int）
//   +0x14 yy_is_our_buffer（int）
//   +0x18 yy_is_interactive / +0x1c yy_at_bol
//   +0x20 yy_bs_lineno / +0x24 yy_bs_column
//   +0x28 yy_fill_buffer / +0x2c yy_buffer_status
// ============================================================================

#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <istream>
#include <ostream>

namespace
{

struct YyBufferState
{
    void*   yy_input_file;   // +0x00 istream*
    char*   yy_ch_buf;       // +0x04
    char*   yy_buf_pos;      // +0x08
    int     yy_buf_size;     // +0x0c
    int     yy_n_chars;      // +0x10
    int     yy_is_our_buffer;// +0x14
    int     yy_is_interactive;// +0x18
    int     yy_at_bol;       // +0x1c
    int     yy_bs_lineno;    // +0x20
    int     yy_bs_column;    // +0x24
    int     yy_fill_buffer;  // +0x28
    int     yy_buffer_status;// +0x2c
};

struct FlexLexerState
{
    void*   vptr;                            // +0x00
    char*   yytext;                          // +0x04
    int     yyleng;                          // +0x08（yylex: mov %edx,0x8(%esi)）
    int     yylineno;                        // +0x0c
    int     yy_flex_debug;                   // +0x10
    int     yy_start_stack_ptr;              // +0x14
    int     yy_start_stack_depth;            // +0x18
    int*    yy_start_stack;                  // +0x1c
    void*   yyin;                            // +0x20
    void*   yyout;                           // +0x24
    char    yy_hold_char;                    // +0x28
    char    pad29[3];                        // +0x29 .. +0x2b
    int     yy_n_chars;                      // +0x2c
    char*   yy_c_buf_p;                      // +0x30
    int     yy_init;                         // +0x34
    int     yy_start;                        // +0x38
    int     yy_did_buffer_switch_on_eof;     // +0x3c
    int     yy_buffer_stack_top;             // +0x40
    int     yy_buffer_stack_max;             // +0x44
    void**  yy_buffer_stack;                 // +0x48
    int     yy_last_accepting_state;         // +0x4c
    char*   yy_last_accepting_cpos;          // +0x50
    char*   yy_state_buf;                    // +0x54
    char*   yy_state_ptr;                    // +0x58
    char*   yy_full_match;                   // +0x5c
    int*    yy_full_state;                   // +0x60
    char    pad64[8];                        // +0x64 .. +0x6b
    int     yy_looking_for_trail_begin;      // +0x6c
    int     yy_more_flag;                    // +0x70
    int     yy_more_len;                     // +0x74
    int     yy_more_offset;                  // +0x78
    int     yy_prev_more_offset;             // +0x7c
};

// 导出 vtable 槽辅助：经 vptr 调虚函数（槽号 = 字节偏移/4 - 2，
// ORIG 全部以 vptr 起点按槽偏移调用，如槽 3 = vptr+0xc）。
inline void* callVSlot(void* self, int slot,
                        void* a1 = 0, void* a2 = 0, void* a3 = 0)
{
    void** vt = *reinterpret_cast<void***>(self);
    switch (slot)
    {
    case 2:  reinterpret_cast<void (*)(void*, void*)>(vt[2])(self, a1); return 0;
    case 3:  return reinterpret_cast<void* (*)(void*, void*, void*)>(vt[3])(self, a1, a2);
    case 4:  reinterpret_cast<void (*)(void*, void*)>(vt[4])(self, a1); return 0;
    case 5:  reinterpret_cast<void (*)(void*, void*)>(vt[5])(self, a1); return 0;
    case 8:  return reinterpret_cast<void* (*)(void*)>(vt[8])(self);
    case 9:  return reinterpret_cast<void* (*)(void*, void*, void*)>(vt[9])(self, a1, a2);
    case 10: reinterpret_cast<void (*)(void*, void*, void*)>(vt[10])(self, a1, a2); return 0;
    case 11: reinterpret_cast<void (*)(void*, void*)>(vt[11])(self, a1); return 0;
    default: return 0;
    }
}

// vtable 数据（定义于本 TU 末尾）。

// yy_delete_buffer（定义于本 TU 中段；sub_FlexLexer_D1 先引用）。

}  // namespace
extern "C" const void* g_flexLexerBase_vtable[];
extern "C" const void* g_dnfScriptFlexLexer_vtable[];

// ---- __dnf_script__FlexLexer::yypop_buffer_state()（ORIG 0x8ad1d00）----
// 弹出缓冲区栈顶 yy_buffer_state：先经 vtable 槽 +4（yy_delete_buffer）删除
// 当前缓冲区，清空栈顶槽位；随后若栈中仍有缓冲区，恢复其 yy_n_chars /
// yy_c_buf_p / yytext / yyin / yy_hold_char 并置 yy_did_buffer_switch_on_eof=1。
extern "C" void* sub_FlexLexer_yy_create_buffer(void* self, void* file, int size)
{
    YyBufferState* b = reinterpret_cast<YyBufferState*>(std::malloc(0x30));
    if (b == 0)
    {
        void (**vtable)(void*, const char*) =
            *reinterpret_cast<void (***)(void*, const char*)>(self);
        vtable[0xb](self, "out of dynamic memory in yy_create_buffer()");
    }
    b->yy_buf_size = size;
    b->yy_ch_buf = reinterpret_cast<char*>(std::malloc(size + 2));
    if (b->yy_ch_buf == 0)
    {
        void (**vtable)(void*, const char*) =
            *reinterpret_cast<void (***)(void*, const char*)>(self);
        vtable[0xb](self, "out of dynamic memory in yy_create_buffer()");
    }
    b->yy_is_our_buffer = 1;
    sub_FlexLexer_yy_init_buffer(self, b, file);
    return b;
}

// ---- yyrestart（ORIG 0x8ad26c0）----

// Itanium ABI typeinfo：{ vptr, type_name }。
struct FlexLexerTypeInfo
{
    const void* vptr;
    const char* typeName;
};
extern "C" const struct FlexLexerTypeInfo g_dnfScriptFlexLexer_typeinfo
    __asm__("_ZTI23__dnf_script__FlexLexer");
extern "C" const struct FlexLexerTypeInfo g_dnfScriptFlexLexer_typeinfo = {
    reinterpret_cast<const char*>(&g_cxxabi_classTypeInfo_vtable2) + 8,
    g_dnfScriptFlexLexer_typeinfoName,
};
extern "C" const struct FlexLexerTypeInfo g_flexLexerBase_typeinfo
    __asm__("_ZTI9FlexLexer");
extern "C" const struct FlexLexerTypeInfo g_flexLexerBase_typeinfo = {
    reinterpret_cast<const char*>(&g_cxxabi_classTypeInfo_vtable2) + 8,
    g_flexLexerBase_typeinfoName,
};

// __cxa_pure_virtual（libstdc++，纯虚调用处理）。
extern "C" void __cxa_pure_virtual();
typedef void (*PureVirtualFn)();

extern "C" const void* g_dnfScriptFlexLexer_vtable[]
    __asm__("_ZTV23__dnf_script__FlexLexer");
extern "C" const void* g_dnfScriptFlexLexer_vtable[] = {
    0,
    &g_dnfScriptFlexLexer_typeinfo,
    reinterpret_cast<const void*>(static_cast<void (*)(void*)>(&sub_FlexLexer_D1)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*)>(&sub_FlexLexer_D0)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*, void*)>(&sub_FlexLexer_yy_switch_to_buffer)),
    reinterpret_cast<const void*>(
        static_cast<void* (*)(void*, void*, int)>(&sub_FlexLexer_yy_create_buffer)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*, void*)>(&sub_FlexLexer_yy_delete_buffer)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*, void*)>(&sub_FlexLexer_yyrestart)),
    reinterpret_cast<const void*>(static_cast<int (*)(void*)>(&sub_FlexLexer_yylex)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*, void*, void*)>(&sub_FlexLexer_switch_streams)),
    reinterpret_cast<const void*>(static_cast<int (*)(void*)>(&sub_FlexLexer_yywrap)),
    reinterpret_cast<const void*>(static_cast<int (*)(void*, char*, int)>(&sub_FlexLexer_LexerInput)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*, const char*, int)>(&sub_FlexLexer_LexerOutput)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*, const char*)>(&sub_FlexLexer_LexerError)),
};

extern "C" const void* g_flexLexerBase_vtable[] __asm__("_ZTV9FlexLexer");
extern "C" const void* g_flexLexerBase_vtable[] = {
    0,
    &g_flexLexerBase_typeinfo,
    reinterpret_cast<const void*>(static_cast<void (*)(void*)>(&sub_FlexLexer_base_D1)),
    reinterpret_cast<const void*>(static_cast<void (*)(void*)>(&sub_FlexLexer_base_D0)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
    reinterpret_cast<const void*>(static_cast<PureVirtualFn>(&__cxa_pure_virtual)),
};

// ============================================================================
// ---- yy_get_previous_state（ORIG 0x8ad1a80）----
// flex DFA 前缀扫描：从 yytext 起沿 DFA 表走到 yy_c_buf_p，返回结束状态。
// 表（ORIG 数据区）：yy_accept@0x8e2f180、yy_def@0x8e2f200、
// yy_base@0x8e2f280、yy_chk@0x8e2f300、yy_nxt@0x8e30400、
// yy_NUL_trans@0x8e2f0a0（int 数组）。DNFLex::yylex（DNFLexCore.cpp）共用
// 同一组表，故表数组由 DNFLexCore.cpp 定义（extern 声明，见下）。
// ============================================================================
extern "C" const short g_yy_accept[];
extern "C" const short g_yy_def[];
extern "C" const short g_yy_base[];
extern "C" const short g_yy_chk[];
extern "C" const short g_yy_nxt[];
extern "C" const int   g_yy_NUL_trans[];

extern "C" int sub_FlexLexer_yy_get_next_buffer(void* self)
{
    FlexLexerState* f = reinterpret_cast<FlexLexerState*>(self);
    YyBufferState** stack =
        reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
    int top = f->yy_buffer_stack_top;
    char* cp = f->yy_c_buf_p;
    YyBufferState* buf = stack[top];
    char* chBuf = buf->yy_ch_buf;
    char* text = f->yytext;
    char* dest = text;
    if (chBuf + f->yy_n_chars + 1 < cp)
    {
        callVSlot(self, 11,
            const_cast<char*>("fatal flex scanner internal error--end of buffer missed"));
        stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
        cp = f->yy_c_buf_p;
        top = f->yy_buffer_stack_top;
        buf = stack[top];
        dest = f->yytext;
    }
    if (buf->yy_fill_buffer == 0)
        return (cp - dest != 1) + 1;
    int numToMove = static_cast<int>(cp - 1 - dest);
    if (numToMove > 0)
    {
        std::memmove(chBuf, dest, numToMove);
        stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
        top = f->yy_buffer_stack_top;
        buf = stack[top];
    }
    if (buf->yy_buffer_status == 2)
    {
        f->yy_n_chars = 0;
        buf->yy_n_chars = 0;
    }
    else
    {
        int numToRead = ~numToMove + buf->yy_buf_size;
        while (numToRead < 1)
        {
            char* oldChBuf = f->yy_c_buf_p;
            YyBufferState* b2 = 0;
            if (stack != 0)
                b2 = stack[top];
            char* oldBuf = b2->yy_ch_buf;
            if (b2->yy_is_our_buffer == 0)
            {
                b2->yy_ch_buf = 0;
                callVSlot(self, 11,
                    const_cast<char*>("fatal error - scanner input buffer overflow"));
            }
            else
            {
                unsigned int oldSize = b2->yy_buf_size;
                unsigned int newSize = oldSize * 2;
                if (static_cast<int>(newSize) < 1)
                {
                    newSize = (oldSize >> 3) + oldSize;
                    b2->yy_buf_size = newSize;
                }
                else
                {
                    b2->yy_buf_size = newSize;
                }
                char* nb = reinterpret_cast<char*>(
                    std::realloc(b2->yy_ch_buf, newSize + 2));
                b2->yy_ch_buf = nb;
                if (nb == 0)
                {
                    callVSlot(self, 11,
                        const_cast<char*>("fatal error - scanner input buffer overflow"));
                }
                else
                {
                    oldChBuf = nb + (oldChBuf - oldBuf);
                }
            }
            top = f->yy_buffer_stack_top;
            stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
            f->yy_c_buf_p = oldChBuf;
            buf = stack[top];
            numToRead = ~numToMove + buf->yy_buf_size;
        }
        if (numToRead > 0x2000)
            numToRead = 0x2000;
        int got = static_cast<int>(reinterpret_cast<long>(callVSlot(
            self, 9, buf->yy_ch_buf + numToMove,
            reinterpret_cast<void*>(numToRead))));
        f->yy_n_chars = got;
        if (got < 0)
        {
            callVSlot(self, 11, const_cast<char*>("input in flex scanner failed"));
            got = f->yy_n_chars;
        }
        stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
        stack[f->yy_buffer_stack_top]->yy_n_chars = got;
    }
    int n = f->yy_n_chars;
    int ret = 0;
    if (n == 0)
    {
        if (numToMove == 0)
        {
            ret = 1;
            callVSlot(self, 5, f->yyin);       // yyrestart
            stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
            n = f->yy_n_chars;
        }
        else
        {
            ret = 2;
            stack[f->yy_buffer_stack_top]->yy_buffer_status = 2;
            n = f->yy_n_chars;
        }
    }
    top = f->yy_buffer_stack_top;
    buf = stack[top];
    int newPos = numToMove + n;
    if (buf->yy_buf_size < newPos)
    {
        char* nb = reinterpret_cast<char*>(std::realloc(
            buf->yy_ch_buf, static_cast<size_t>(newPos + (n >> 1))));
        top = f->yy_buffer_stack_top;
        buf->yy_ch_buf = nb;
        stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
        if (stack[top]->yy_ch_buf == 0)
        {
            callVSlot(self, 11,
                const_cast<char*>("out of dynamic memory in yy_get_next_buffer()"));
            stack = reinterpret_cast<YyBufferState**>(f->yy_buffer_stack);
            newPos = numToMove + f->yy_n_chars;
            top = f->yy_buffer_stack_top;
        }
        else
        {
            newPos = numToMove + f->yy_n_chars;
        }
    }
    f->yy_n_chars = newPos;
    stack[top]->yy_ch_buf[newPos] = '\0';
    if (f->yy_buffer_stack[f->yy_buffer_stack_top] != 0)
        reinterpret_cast<YyBufferState*>(
            f->yy_buffer_stack[f->yy_buffer_stack_top])->yy_ch_buf[
                f->yy_n_chars + 1] = '\0';
    f->yytext = reinterpret_cast<YyBufferState*>(
        f->yy_buffer_stack[f->yy_buffer_stack_top])->yy_ch_buf;
    return ret;
}
