# setEventData

`_ZN16HeroMissionEvent12setEventDataEP5CUserRKSs`

`HeroMissionEvent::setEventData(CUser*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08166d0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166d0e  _ZN16HeroMissionEvent12setEventDataEP5CUserRKSs
#           HeroMissionEvent::setEventData(CUser*, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08166d0e, 0x08166d37]
08166d0e +0x00:  push   %ebp
08166d0f +0x01:  mov    %esp,%ebp
08166d11 +0x03:  sub    $0x18,%esp
08166d14 +0x06:  mov    0x10(%ebp),%eax
08166d17 +0x09:  mov    %eax,(%esp)
08166d1a +0x0c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08166d1f +0x11:  mov    %eax,0x8(%esp)
08166d23 +0x15:  mov    0xc(%ebp),%eax
08166d26 +0x18:  mov    %eax,0x4(%esp)
08166d2a +0x1c:  mov    0x8(%ebp),%eax
08166d2d +0x1f:  mov    %eax,(%esp)
08166d30 +0x22:  call   08166752 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc>  ; HeroMissionEvent::setEventData(CUser*, char const*)
08166d35 +0x27:  leave
08166d36 +0x28:  ret
08166d37 +0x29:  nop
```

## 反编译 C

```c
// HeroMissionEvent::setEventData @ 0x8166d0e

/* HeroMissionEvent::setEventData(CUser*, std::string const&) */

void __thiscall
HeroMissionEvent::setEventData(HeroMissionEvent *this,CUser *param_1,string *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::string::c_str((string *)param_2);
  setEventData(this,param_1,pcVar1);
  return;
}
```
