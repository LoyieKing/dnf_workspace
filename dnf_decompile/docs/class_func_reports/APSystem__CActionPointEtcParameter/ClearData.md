# ClearData

`_ZN8APSystem24CActionPointEtcParameter9ClearDataEv`

`APSystem::CActionPointEtcParameter::ClearData()`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointEtcParameter` | `0x088948fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088948fc  _ZN8APSystem24CActionPointEtcParameter9ClearDataEv
#           APSystem::CActionPointEtcParameter::ClearData()
# range [0x088948fc, 0x08894955]
088948fc +0x00:  push   %ebp
088948fd +0x01:  mov    %esp,%ebp
088948ff +0x03:  sub    $0x18,%esp
08894902 +0x06:  mov    0x8(%ebp),%eax
08894905 +0x09:  mov    %eax,(%esp)
08894908 +0x0c:  call   08895770 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x11e>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x11e
0889490d +0x11:  mov    0x8(%ebp),%eax
08894910 +0x14:  add    $0x18,%eax
08894913 +0x17:  mov    %eax,(%esp)
08894916 +0x1a:  call   08895784 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x132>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x132
0889491b +0x1f:  mov    0x8(%ebp),%eax
0889491e +0x22:  add    $0x30,%eax
08894921 +0x25:  mov    %eax,(%esp)
08894924 +0x28:  call   08895798 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x146>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x146
08894929 +0x2d:  mov    0x8(%ebp),%eax
0889492c +0x30:  add    $0x48,%eax
0889492f +0x33:  mov    %eax,(%esp)
08894932 +0x36:  call   08895798 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x146>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x146
08894937 +0x3b:  mov    0x8(%ebp),%eax
0889493a +0x3e:  add    $0x60,%eax
0889493d +0x41:  mov    %eax,(%esp)
08894940 +0x44:  call   088957ac <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x15a>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x15a
08894945 +0x49:  mov    0x8(%ebp),%eax
08894948 +0x4c:  add    $0x6c,%eax
0889494b +0x4f:  mov    %eax,(%esp)
0889494e +0x52:  call   088957c8 <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x176>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x176
08894953 +0x57:  leave
08894954 +0x58:  ret
08894955 +0x59:  nop
```

## 反编译 C

```c
// APSystem::CActionPointEtcParameter::ClearData @ 0x88948fc

/* APSystem::CActionPointEtcParameter::ClearData() */

void __thiscall APSystem::CActionPointEtcParameter::ClearData(CActionPointEtcParameter *this)

{
  std::
  map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
  ::clear((map<unsigned_short,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,std::vector<APSystem::CActionPointEx,std::allocator<APSystem::CActionPointEx>>>>>
           *)this);
  std::
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  ::clear((map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
           *)(this + 0x18));
  std::
  map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
  ::clear((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
           *)(this + 0x30));
  std::
  map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
  ::clear((map<unsigned_int,std::string,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::string>>>
           *)(this + 0x48));
  std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::clear
            ((vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *)
             (this + 0x60));
  std::vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>>::clear
            ((vector<APSystem::_TodayRewardItem,std::allocator<APSystem::_TodayRewardItem>> *)
             (this + 0x6c));
  return;
}
```
