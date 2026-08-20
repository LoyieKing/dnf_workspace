# setFullIPCounterData

`_ZN8WongWork26CAutoPunishRuleHackTypeMgr20setFullIPCounterDataEjjPcj`

`WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData(unsigned int, unsigned int, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAutoPunishRuleHackTypeMgr` | `0x080f946a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f946a  _ZN8WongWork26CAutoPunishRuleHackTypeMgr20setFullIPCounterDataEjjPcj
#           WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData(unsigned int, unsigned int, char*, unsigned int)
# range [0x080f946a, 0x080f9573]
080f946a +0x000:  push   %ebp
080f946b +0x001:  mov    %esp,%ebp
080f946d +0x003:  sub    $0xd8,%esp
080f9473 +0x009:  mov    0x10(%ebp),%edx
080f9476 +0x00c:  mov    0xc(%ebp),%eax
080f9479 +0x00f:  mov    0x18(%ebp),%ecx
080f947c +0x012:  mov    %ecx,0x10(%esp)
080f9480 +0x016:  mov    0x14(%ebp),%ecx
080f9483 +0x019:  mov    %ecx,0xc(%esp)
080f9487 +0x01d:  mov    %edx,0x8(%esp)
080f948b +0x021:  mov    %eax,0x4(%esp)
080f948f +0x025:  lea    -0x74(%ebp),%eax
080f9492 +0x028:  mov    %eax,(%esp)
080f9495 +0x02b:  call   080f98f6 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x102>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x102
080f949a +0x030:  lea    -0x90(%ebp),%eax
080f94a0 +0x036:  lea    -0x74(%ebp),%edx
080f94a3 +0x039:  mov    %edx,0x8(%esp)
080f94a7 +0x03d:  lea    0xc(%ebp),%edx
080f94aa +0x040:  mov    %edx,0x4(%esp)
080f94ae +0x044:  mov    %eax,(%esp)
080f94b1 +0x047:  call   080f9fbd <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x7c9>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x7c9
080f94b6 +0x04c:  sub    $0x4,%esp
080f94b9 +0x04f:  lea    -0x90(%ebp),%eax
080f94bf +0x055:  mov    %eax,0x4(%esp)
080f94c3 +0x059:  lea    -0xac(%ebp),%eax
080f94c9 +0x05f:  mov    %eax,(%esp)
080f94cc +0x062:  call   080f9ffc <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x808>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x808
080f94d1 +0x067:  mov    0x8(%ebp),%eax
080f94d4 +0x06a:  lea    0x40(%eax),%ecx
080f94d7 +0x06d:  lea    -0xb0(%ebp),%eax
080f94dd +0x073:  lea    -0xac(%ebp),%edx
080f94e3 +0x079:  mov    %edx,0x8(%esp)
080f94e7 +0x07d:  mov    %ecx,0x4(%esp)
080f94eb +0x081:  mov    %eax,(%esp)
080f94ee +0x084:  call   080fa04e <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x85a>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x85a
080f94f3 +0x089:  sub    $0x4,%esp
080f94f6 +0x08c:  mov    0x10(%ebp),%eax
080f94f9 +0x08f:  test   %eax,%eax
080f94fb +0x091:  je     080f9571 <+0x107>
080f94fd +0x093:  mov    0x10(%ebp),%edx
080f9500 +0x096:  mov    0xc(%ebp),%eax
080f9503 +0x099:  mov    0x18(%ebp),%ecx
080f9506 +0x09c:  mov    %ecx,0x10(%esp)
080f950a +0x0a0:  mov    0x14(%ebp),%ecx
080f950d +0x0a3:  mov    %ecx,0xc(%esp)
080f9511 +0x0a7:  mov    %edx,0x8(%esp)
080f9515 +0x0ab:  mov    %eax,0x4(%esp)
080f9519 +0x0af:  lea    -0x20(%ebp),%eax
080f951c +0x0b2:  mov    %eax,(%esp)
080f951f +0x0b5:  call   080f98f6 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x102>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x102
080f9524 +0x0ba:  lea    -0x3c(%ebp),%eax
080f9527 +0x0bd:  lea    -0x20(%ebp),%edx
080f952a +0x0c0:  mov    %edx,0x8(%esp)
080f952e +0x0c4:  lea    0x10(%ebp),%edx
080f9531 +0x0c7:  mov    %edx,0x4(%esp)
080f9535 +0x0cb:  mov    %eax,(%esp)
080f9538 +0x0ce:  call   080f9fbd <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x7c9>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x7c9
080f953d +0x0d3:  sub    $0x4,%esp
080f9540 +0x0d6:  lea    -0x3c(%ebp),%eax
080f9543 +0x0d9:  mov    %eax,0x4(%esp)
080f9547 +0x0dd:  lea    -0x58(%ebp),%eax
080f954a +0x0e0:  mov    %eax,(%esp)
080f954d +0x0e3:  call   080f9ffc <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x808>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x808
080f9552 +0x0e8:  mov    0x8(%ebp),%eax
080f9555 +0x0eb:  lea    0x40(%eax),%ecx
080f9558 +0x0ee:  lea    -0x5c(%ebp),%eax
080f955b +0x0f1:  lea    -0x58(%ebp),%edx
080f955e +0x0f4:  mov    %edx,0x8(%esp)
080f9562 +0x0f8:  mov    %ecx,0x4(%esp)
080f9566 +0x0fc:  mov    %eax,(%esp)
080f9569 +0x0ff:  call   080fa04e <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x85a>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x85a
080f956e +0x104:  sub    $0x4,%esp
080f9571 +0x107:  leave
080f9572 +0x108:  ret
080f9573 +0x109:  nop
```

## 反编译 C

```c
// WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData @ 0x80f946a

/* WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData(unsigned int, unsigned int, char*,
   unsigned int) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::setFullIPCounterData
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3,uint param_4)

{
  pair local_b4 [4];
  pair<unsigned_short_const,WongWork::HackFullIPCounter_t> local_b0 [28];
  uint local_94 [7];
  HackFullIPCounter_t local_78 [24];
  pair local_60 [4];
  pair<unsigned_short_const,WongWork::HackFullIPCounter_t> local_5c [28];
  uint local_40 [7];
  HackFullIPCounter_t local_24 [32];
  
  HackFullIPCounter_t::HackFullIPCounter_t(local_78,param_1,param_2,param_3,param_4);
  std::make_pair<unsigned_int&,WongWork::HackFullIPCounter_t>
            (local_94,(HackFullIPCounter_t *)&param_1);
  std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>::
  pair<unsigned_int,WongWork::HackFullIPCounter_t>(local_b0,(pair *)local_94);
  std::
  multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
  ::insert(local_b4);
  if (param_2 != 0) {
    HackFullIPCounter_t::HackFullIPCounter_t(local_24,param_1,param_2,param_3,param_4);
    std::make_pair<unsigned_int&,WongWork::HackFullIPCounter_t>
              (local_40,(HackFullIPCounter_t *)&param_2);
    std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>::
    pair<unsigned_int,WongWork::HackFullIPCounter_t>(local_5c,(pair *)local_40);
    std::
    multimap<unsigned_short,WongWork::HackFullIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackFullIPCounter_t>>>
    ::insert(local_60);
  }
  return;
}
```
