# UseDye

`_ZN15cUserHistoryLog6UseDyeEiiiRKSsi`

`cUserHistoryLog::UseDye(int, int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686cba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686cba  _ZN15cUserHistoryLog6UseDyeEiiiRKSsi
#           cUserHistoryLog::UseDye(int, int, int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
# range [0x08686cba, 0x08686d0d]
08686cba +0x00:  push   %ebp
08686cbb +0x01:  mov    %esp,%ebp
08686cbd +0x03:  sub    $0x28,%esp
08686cc0 +0x06:  mov    0x8(%ebp),%eax
08686cc3 +0x09:  mov    (%eax),%eax
08686cc5 +0x0b:  test   %eax,%eax
08686cc7 +0x0d:  je     08686d0b <+0x51>
08686cc9 +0x0f:  mov    0x18(%ebp),%eax
08686ccc +0x12:  mov    %eax,(%esp)
08686ccf +0x15:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08686cd4 +0x1a:  mov    0x8(%ebp),%edx
08686cd7 +0x1d:  mov    (%edx),%edx
08686cd9 +0x1f:  mov    0x1c(%ebp),%ecx
08686cdc +0x22:  mov    %ecx,0x18(%esp)
08686ce0 +0x26:  mov    %eax,0x14(%esp)
08686ce4 +0x2a:  mov    0x14(%ebp),%eax
08686ce7 +0x2d:  mov    %eax,0x10(%esp)
08686ceb +0x31:  mov    0x10(%ebp),%eax
08686cee +0x34:  mov    %eax,0xc(%esp)
08686cf2 +0x38:  mov    0xc(%ebp),%eax
08686cf5 +0x3b:  mov    %eax,0x8(%esp)
08686cf9 +0x3f:  movl   $"UseDye ,%d,%d,%d,%s,%d",0x4(%esp)
08686d01 +0x47:  mov    %edx,(%esp)
08686d04 +0x4a:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686d09 +0x4f:  jmp    08686d0c <+0x52>
08686d0b +0x51:  nop
08686d0c +0x52:  leave
08686d0d +0x53:  ret
```

## 反编译 C

```c
// cUserHistoryLog::UseDye @ 0x8686cba

/* cUserHistoryLog::UseDye(int, int, int, std::string const&, int) */

void __thiscall
cUserHistoryLog::UseDye
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,string *param_4,int param_5)

{
  undefined4 uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = std::string::c_str((string *)param_4);
    CUser::LogHistory(*(CUser **)this,"UseDye ,%d,%d,%d,%s,%d",param_1,param_2,param_3,uVar1,param_5
                     );
  }
  return;
}
```
