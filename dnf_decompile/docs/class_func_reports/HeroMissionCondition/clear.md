# clear

`_ZN20HeroMissionCondition5clearEv`

`HeroMissionCondition::clear()`

| 类 | 地址 |
|---|---|
| `HeroMissionCondition` | `0x08961376` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08961376  _ZN20HeroMissionCondition5clearEv
#           HeroMissionCondition::clear()
# range [0x08961376, 0x089613d6]
08961376 +0x00:  push   %ebp
08961377 +0x01:  mov    %esp,%ebp
08961379 +0x03:  sub    $0x18,%esp
0896137c +0x06:  mov    0x8(%ebp),%eax
0896137f +0x09:  movl   $0x0,(%eax)
08961385 +0x0f:  mov    0x8(%ebp),%eax
08961388 +0x12:  movl   $0x0,0x4(%eax)
0896138f +0x19:  mov    0x8(%ebp),%eax
08961392 +0x1c:  movb   $0x0,0x8(%eax)
08961396 +0x20:  mov    0x8(%ebp),%eax
08961399 +0x23:  movb   $0x0,0x9(%eax)
0896139d +0x27:  mov    0x8(%ebp),%eax
089613a0 +0x2a:  add    $0xc,%eax
089613a3 +0x2d:  mov    %eax,(%esp)
089613a6 +0x30:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
089613ab +0x35:  mov    0x8(%ebp),%eax
089613ae +0x38:  add    $0x10,%eax
089613b1 +0x3b:  mov    %eax,(%esp)
089613b4 +0x3e:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
089613b9 +0x43:  mov    0x8(%ebp),%eax
089613bc +0x46:  add    $0x14,%eax
089613bf +0x49:  mov    %eax,(%esp)
089613c2 +0x4c:  call   08963120 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xd83>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xd83
089613c7 +0x51:  mov    0x8(%ebp),%eax
089613ca +0x54:  add    $0x20,%eax
089613cd +0x57:  mov    %eax,(%esp)
089613d0 +0x5a:  call   0896313c <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xd9f>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xd9f
089613d5 +0x5f:  leave
089613d6 +0x60:  ret
```

## 反编译 C

```c
// HeroMissionCondition::clear @ 0x8961376

/* HeroMissionCondition::clear() */

void __thiscall HeroMissionCondition::clear(HeroMissionCondition *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (HeroMissionCondition)0x0;
  this[9] = (HeroMissionCondition)0x0;
  std::string::clear((string *)(this + 0xc));
  std::string::clear((string *)(this + 0x10));
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  clear((vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>> *
        )(this + 0x14));
  std::vector<unsigned_short,std::allocator<unsigned_short>>::clear
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x20));
  return;
}
```
