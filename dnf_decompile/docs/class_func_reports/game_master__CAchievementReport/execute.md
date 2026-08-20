# execute

`_ZN11game_master18CAchievementReport7executeEv`

`game_master::CAchievementReport::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAchievementReport` | `0x084b07fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b07fe  _ZN11game_master18CAchievementReport7executeEv
#           game_master::CAchievementReport::execute()
# range [0x084b07fe, 0x084b08ef]
084b07fe +0x00:  push   %ebp
084b07ff +0x01:  mov    %esp,%ebp
084b0801 +0x03:  push   %esi
084b0802 +0x04:  push   %ebx
084b0803 +0x05:  sub    $&_ZL14gUnicodeBuffer+0xce04,%esp
084b0809 +0x0b:  lea    -&_ZL14gUnicodeBuffer+0xcdf8(%ebp),%eax
084b080f +0x11:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084b0814 +0x16:  mov    %edx,0x8(%esp)
084b0818 +0x1a:  movl   $0x0,0x4(%esp)
084b0820 +0x22:  mov    %eax,(%esp)
084b0823 +0x25:  call   0807dcc0 <_init+0x5b8>
084b0828 +0x2a:  lea    -0xc(%ebp),%eax
084b082b +0x2d:  mov    %eax,(%esp)
084b082e +0x30:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084b0833 +0x35:  mov    0x8(%ebp),%eax
084b0836 +0x38:  mov    %eax,(%esp)
084b0839 +0x3b:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b083e +0x40:  movl   $0xf,0x4(%esp)
084b0846 +0x48:  mov    %eax,(%esp)
084b0849 +0x4b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084b084e +0x50:  lea    -0xc(%ebp),%edx
084b0851 +0x53:  mov    %edx,0x4(%esp)
084b0855 +0x57:  mov    %eax,(%esp)
084b0858 +0x5a:  call   0828d450 <_ZN12CAchievement10_gm_reportERSs>  ; CAchievement::_gm_report(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
084b085d +0x5f:  lea    -0xc(%ebp),%eax
084b0860 +0x62:  mov    %eax,(%esp)
084b0863 +0x65:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
084b0868 +0x6a:  cmp    $&_ZL14gUnicodeBuffer+0xcdeb,%eax
084b086d +0x6f:  setbe  %al
084b0870 +0x72:  test   %al,%al
084b0872 +0x74:  je     084b0891 <+0x93>
084b0874 +0x76:  lea    -0xc(%ebp),%eax
084b0877 +0x79:  mov    %eax,(%esp)
084b087a +0x7c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b087f +0x81:  mov    %eax,0x4(%esp)
084b0883 +0x85:  lea    -&_ZL14gUnicodeBuffer+0xcdf8(%ebp),%eax
084b0889 +0x8b:  mov    %eax,(%esp)
084b088c +0x8e:  call   0807def0 <_init+0x7e8>
084b0891 +0x93:  mov    0x8(%ebp),%eax
084b0894 +0x96:  mov    %eax,(%esp)
084b0897 +0x99:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b089c +0x9e:  lea    -&_ZL14gUnicodeBuffer+0xcdf8(%ebp),%edx
084b08a2 +0xa4:  mov    %edx,0xc(%esp)
084b08a6 +0xa8:  movl   $"achievement_report.txt",0x8(%esp)
084b08ae +0xb0:  movl   $0x0,0x4(%esp)
084b08b6 +0xb8:  mov    %eax,(%esp)
084b08b9 +0xbb:  call   084aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>  ; game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
084b08be +0xc0:  jmp    084b08db <+0xdd>
084b08c0 +0xc2:  mov    %edx,%ebx
084b08c2 +0xc4:  mov    %eax,%esi
084b08c4 +0xc6:  lea    -0xc(%ebp),%eax
084b08c7 +0xc9:  mov    %eax,(%esp)
084b08ca +0xcc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b08cf +0xd1:  mov    %esi,%eax
084b08d1 +0xd3:  mov    %ebx,%edx
084b08d3 +0xd5:  mov    %eax,(%esp)
084b08d6 +0xd8:  call   08ae3750 <_Unwind_Resume>
084b08db +0xdd:  lea    -0xc(%ebp),%eax
084b08de +0xe0:  mov    %eax,(%esp)
084b08e1 +0xe3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b08e6 +0xe8:  add    $&_ZL14gUnicodeBuffer+0xce04,%esp
084b08ec +0xee:  pop    %ebx
084b08ed +0xef:  pop    %esi
084b08ee +0xf0:  pop    %ebp
084b08ef +0xf1:  ret
```

## 反编译 C

```c
// game_master::CAchievementReport::execute @ 0x84b07fe

/* game_master::CAchievementReport::execute() */

void __thiscall game_master::CAchievementReport::execute(CAchievementReport *this)

{
  CUser *pCVar1;
  CAchievement *this_00;
  uint uVar2;
  char *__src;
  char acStack_17328 [95000];
  string local_10;
  
  memset(acStack_17328,0,95000);
  std::string::string((string *)&local_10);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
                    /* try { // try from 084b0849 to 084b08bd has its CatchHandler @ 084b08c0 */
  this_00 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::_gm_report(this_00,&local_10);
  uVar2 = std::string::length((string *)&local_10);
  if (uVar2 < 95000) {
    __src = (char *)std::string::c_str((string *)&local_10);
    strcpy(acStack_17328,__src);
  }
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  CBoosterTest::printClient(pCVar1,false,"achievement_report.txt",acStack_17328);
  std::string::~string((string *)&local_10);
  return;
}
```
