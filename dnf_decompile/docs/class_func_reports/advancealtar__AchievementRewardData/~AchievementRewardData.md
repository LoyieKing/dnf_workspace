# ~AchievementRewardData

`_ZN12advancealtar21AchievementRewardDataD1Ev`

`advancealtar::AchievementRewardData::~AchievementRewardData()`

| 类 | 地址 |
|---|---|
| `advancealtar::AchievementRewardData` | `0x0889adba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889adba  _ZN12advancealtar21AchievementRewardDataD1Ev
#           advancealtar::AchievementRewardData::~AchievementRewardData()
# range [0x0889adba, 0x0889ae55]
0889adba +0x00:  push   %ebp
0889adbb +0x01:  mov    %esp,%ebp
0889adbd +0x03:  push   %esi
0889adbe +0x04:  push   %ebx
0889adbf +0x05:  sub    $0x10,%esp
0889adc2 +0x08:  mov    0x8(%ebp),%eax
0889adc5 +0x0b:  add    $0x24,%eax
0889adc8 +0x0e:  mov    %eax,(%esp)
0889adcb +0x11:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889add0 +0x16:  jmp    0889adea <+0x30>
0889add2 +0x18:  mov    %edx,%ebx
0889add4 +0x1a:  mov    %eax,%esi
0889add6 +0x1c:  mov    0x8(%ebp),%eax
0889add9 +0x1f:  add    $0x20,%eax
0889addc +0x22:  mov    %eax,(%esp)
0889addf +0x25:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ade4 +0x2a:  mov    %esi,%eax
0889ade6 +0x2c:  mov    %ebx,%edx
0889ade8 +0x2e:  jmp    0889adfa <+0x40>
0889adea +0x30:  mov    0x8(%ebp),%eax
0889aded +0x33:  add    $0x20,%eax
0889adf0 +0x36:  mov    %eax,(%esp)
0889adf3 +0x39:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889adf8 +0x3e:  jmp    0889ae12 <+0x58>
0889adfa +0x40:  mov    %edx,%ebx
0889adfc +0x42:  mov    %eax,%esi
0889adfe +0x44:  mov    0x8(%ebp),%eax
0889ae01 +0x47:  add    $0x1c,%eax
0889ae04 +0x4a:  mov    %eax,(%esp)
0889ae07 +0x4d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ae0c +0x52:  mov    %esi,%eax
0889ae0e +0x54:  mov    %ebx,%edx
0889ae10 +0x56:  jmp    0889ae22 <+0x68>
0889ae12 +0x58:  mov    0x8(%ebp),%eax
0889ae15 +0x5b:  add    $0x1c,%eax
0889ae18 +0x5e:  mov    %eax,(%esp)
0889ae1b +0x61:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889ae20 +0x66:  jmp    0889ae40 <+0x86>
0889ae22 +0x68:  mov    %edx,%ebx
0889ae24 +0x6a:  mov    %eax,%esi
0889ae26 +0x6c:  mov    0x8(%ebp),%eax
0889ae29 +0x6f:  add    $0x10,%eax
0889ae2c +0x72:  mov    %eax,(%esp)
0889ae2f +0x75:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0889ae34 +0x7a:  mov    %esi,%eax
0889ae36 +0x7c:  mov    %ebx,%edx
0889ae38 +0x7e:  mov    %eax,(%esp)
0889ae3b +0x81:  call   08ae3750 <_Unwind_Resume>
0889ae40 +0x86:  mov    0x8(%ebp),%eax
0889ae43 +0x89:  add    $0x10,%eax
0889ae46 +0x8c:  mov    %eax,(%esp)
0889ae49 +0x8f:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0889ae4e +0x94:  add    $0x10,%esp
0889ae51 +0x97:  pop    %ebx
0889ae52 +0x98:  pop    %esi
0889ae53 +0x99:  pop    %ebp
0889ae54 +0x9a:  ret
0889ae55 +0x9b:  nop
```

## 反编译 C

```c
// advancealtar::AchievementRewardData::~AchievementRewardData @ 0x889adba

/* advancealtar::AchievementRewardData::~AchievementRewardData() */

void __thiscall
advancealtar::AchievementRewardData::~AchievementRewardData(AchievementRewardData *this)

{
                    /* try { // try from 0889adcb to 0889adcf has its CatchHandler @ 0889add2 */
  std::string::~string((string *)(this + 0x24));
                    /* try { // try from 0889adf3 to 0889adf7 has its CatchHandler @ 0889adfa */
  std::string::~string((string *)(this + 0x20));
                    /* try { // try from 0889ae1b to 0889ae1f has its CatchHandler @ 0889ae22 */
  std::string::~string((string *)(this + 0x1c));
  std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
            ((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
             (this + 0x10));
  return;
}
```
