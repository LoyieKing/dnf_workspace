# DeleteInvaildItem

`_ZN15cUserHistoryLog17DeleteInvaildItemERKSsii`

`cUserHistoryLog::DeleteInvaildItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686f1e  _ZN15cUserHistoryLog17DeleteInvaildItemERKSsii
#           cUserHistoryLog::DeleteInvaildItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int)
# range [0x08686f1e, 0x08686f57]
08686f1e +0x00:  push   %ebp
08686f1f +0x01:  mov    %esp,%ebp
08686f21 +0x03:  sub    $0x28,%esp
08686f24 +0x06:  mov    0xc(%ebp),%eax
08686f27 +0x09:  mov    %eax,(%esp)
08686f2a +0x0c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08686f2f +0x11:  mov    0x8(%ebp),%edx
08686f32 +0x14:  mov    (%edx),%edx
08686f34 +0x16:  mov    0x14(%ebp),%ecx
08686f37 +0x19:  mov    %ecx,0x10(%esp)
08686f3b +0x1d:  mov    0x10(%ebp),%ecx
08686f3e +0x20:  mov    %ecx,0xc(%esp)
08686f42 +0x24:  mov    %eax,0x8(%esp)
08686f46 +0x28:  movl   $"DeleteInvaildItem, %s, %d, %d",0x4(%esp)
08686f4e +0x30:  mov    %edx,(%esp)
08686f51 +0x33:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686f56 +0x38:  leave
08686f57 +0x39:  ret
```

## 反编译 C

```c
// cUserHistoryLog::DeleteInvaildItem @ 0x8686f1e

/* cUserHistoryLog::DeleteInvaildItem(std::string const&, int, int) */

void __thiscall
cUserHistoryLog::DeleteInvaildItem(cUserHistoryLog *this,string *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = std::string::c_str((string *)param_1);
  CUser::LogHistory(*(CUser **)this,"DeleteInvaildItem, %s, %d, %d",uVar1,param_2,param_3);
  return;
}
```
