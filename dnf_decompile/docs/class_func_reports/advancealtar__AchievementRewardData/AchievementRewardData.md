# AchievementRewardData

`_ZN12advancealtar21AchievementRewardDataC1Ev`

`advancealtar::AchievementRewardData::AchievementRewardData()`

| 类 | 地址 |
|---|---|
| `advancealtar::AchievementRewardData` | `0x0889ad06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889ad06  _ZN12advancealtar21AchievementRewardDataC1Ev
#           advancealtar::AchievementRewardData::AchievementRewardData()
# range [0x0889ad06, 0x0889adb9]
0889ad06 +0x00:  push   %ebp
0889ad07 +0x01:  mov    %esp,%ebp
0889ad09 +0x03:  push   %esi
0889ad0a +0x04:  push   %ebx
0889ad0b +0x05:  sub    $0x10,%esp
0889ad0e +0x08:  mov    0x8(%ebp),%eax
0889ad11 +0x0b:  movl   $0x0,(%eax)
0889ad17 +0x11:  mov    0x8(%ebp),%eax
0889ad1a +0x14:  movl   $0xffffffff,0x4(%eax)
0889ad21 +0x1b:  mov    0x8(%ebp),%eax
0889ad24 +0x1e:  movl   $0x0,0x8(%eax)
0889ad2b +0x25:  mov    0x8(%ebp),%eax
0889ad2e +0x28:  add    $0x10,%eax
0889ad31 +0x2b:  mov    %eax,(%esp)
0889ad34 +0x2e:  call   08134be0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7e7
0889ad39 +0x33:  mov    0x8(%ebp),%eax
0889ad3c +0x36:  add    $0x1c,%eax
0889ad3f +0x39:  mov    %eax,(%esp)
0889ad42 +0x3c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889ad47 +0x41:  mov    0x8(%ebp),%eax
0889ad4a +0x44:  add    $0x20,%eax
0889ad4d +0x47:  mov    %eax,(%esp)
0889ad50 +0x4a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889ad55 +0x4f:  mov    0x8(%ebp),%eax
0889ad58 +0x52:  add    $0x24,%eax
0889ad5b +0x55:  mov    %eax,(%esp)
0889ad5e +0x58:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889ad63 +0x5d:  jmp    0889adb3 <+0xad>
0889ad65 +0x5f:  mov    %edx,%ebx
0889ad67 +0x61:  mov    %eax,%esi
0889ad69 +0x63:  mov    0x8(%ebp),%eax
0889ad6c +0x66:  add    $0x20,%eax
0889ad6f +0x69:  mov    %eax,(%esp)
0889ad72 +0x6c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ad77 +0x71:  mov    %esi,%eax
0889ad79 +0x73:  mov    %ebx,%edx
0889ad7b +0x75:  jmp    0889ad7d <+0x77>
0889ad7d +0x77:  mov    %edx,%ebx
0889ad7f +0x79:  mov    %eax,%esi
0889ad81 +0x7b:  mov    0x8(%ebp),%eax
0889ad84 +0x7e:  add    $0x1c,%eax
0889ad87 +0x81:  mov    %eax,(%esp)
0889ad8a +0x84:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ad8f +0x89:  mov    %esi,%eax
0889ad91 +0x8b:  mov    %ebx,%edx
0889ad93 +0x8d:  jmp    0889ad95 <+0x8f>
0889ad95 +0x8f:  mov    %edx,%ebx
0889ad97 +0x91:  mov    %eax,%esi
0889ad99 +0x93:  mov    0x8(%ebp),%eax
0889ad9c +0x96:  add    $0x10,%eax
0889ad9f +0x99:  mov    %eax,(%esp)
0889ada2 +0x9c:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0889ada7 +0xa1:  mov    %esi,%eax
0889ada9 +0xa3:  mov    %ebx,%edx
0889adab +0xa5:  mov    %eax,(%esp)
0889adae +0xa8:  call   08ae3750 <_Unwind_Resume>
0889adb3 +0xad:  add    $0x10,%esp
0889adb6 +0xb0:  pop    %ebx
0889adb7 +0xb1:  pop    %esi
0889adb8 +0xb2:  pop    %ebp
0889adb9 +0xb3:  ret
```

## 反编译 C

```c
// advancealtar::AchievementRewardData::AchievementRewardData @ 0x889ad06

/* advancealtar::AchievementRewardData::AchievementRewardData() */

void __thiscall
advancealtar::AchievementRewardData::AchievementRewardData(AchievementRewardData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
            ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
             (this + 0x10));
                    /* try { // try from 0889ad42 to 0889ad46 has its CatchHandler @ 0889ad95 */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0889ad50 to 0889ad54 has its CatchHandler @ 0889ad7d */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0889ad5e to 0889ad62 has its CatchHandler @ 0889ad65 */
  std::string::string((string *)(this + 0x24));
  return;
}
```
