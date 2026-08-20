# reset

`_ZN12advancealtar21AchievementRewardData5resetEv`

`advancealtar::AchievementRewardData::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::AchievementRewardData` | `0x0889ae56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889ae56  _ZN12advancealtar21AchievementRewardData5resetEv
#           advancealtar::AchievementRewardData::reset()
# range [0x0889ae56, 0x0889aebd]
0889ae56 +0x00:  push   %ebp
0889ae57 +0x01:  mov    %esp,%ebp
0889ae59 +0x03:  sub    $0x18,%esp
0889ae5c +0x06:  mov    0x8(%ebp),%eax
0889ae5f +0x09:  movl   $0x0,(%eax)
0889ae65 +0x0f:  mov    0x8(%ebp),%eax
0889ae68 +0x12:  movl   $0xffffffff,0x4(%eax)
0889ae6f +0x19:  mov    0x8(%ebp),%eax
0889ae72 +0x1c:  movl   $0x0,0x8(%eax)
0889ae79 +0x23:  mov    0x8(%ebp),%eax
0889ae7c +0x26:  movl   $0xffffffff,0xc(%eax)
0889ae83 +0x2d:  mov    0x8(%ebp),%eax
0889ae86 +0x30:  add    $0x10,%eax
0889ae89 +0x33:  mov    %eax,(%esp)
0889ae8c +0x36:  call   08134c52 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x859>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x859
0889ae91 +0x3b:  mov    0x8(%ebp),%eax
0889ae94 +0x3e:  add    $0x1c,%eax
0889ae97 +0x41:  mov    %eax,(%esp)
0889ae9a +0x44:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0889ae9f +0x49:  mov    0x8(%ebp),%eax
0889aea2 +0x4c:  add    $0x20,%eax
0889aea5 +0x4f:  mov    %eax,(%esp)
0889aea8 +0x52:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0889aead +0x57:  mov    0x8(%ebp),%eax
0889aeb0 +0x5a:  add    $0x24,%eax
0889aeb3 +0x5d:  mov    %eax,(%esp)
0889aeb6 +0x60:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0889aebb +0x65:  leave
0889aebc +0x66:  ret
0889aebd +0x67:  nop
```

## 反编译 C

```c
// advancealtar::AchievementRewardData::reset @ 0x889ae56

/* advancealtar::AchievementRewardData::reset() */

void __thiscall advancealtar::AchievementRewardData::reset(AchievementRewardData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::clear
            ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
             (this + 0x10));
  std::string::clear((string *)(this + 0x1c));
  std::string::clear((string *)(this + 0x20));
  std::string::clear((string *)(this + 0x24));
  return;
}
```
