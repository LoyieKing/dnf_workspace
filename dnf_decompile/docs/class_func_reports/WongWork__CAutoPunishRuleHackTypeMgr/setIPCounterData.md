# setIPCounterData

`_ZN8WongWork26CAutoPunishRuleHackTypeMgr16setIPCounterDataEjjPcj`

`WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData(unsigned int, unsigned int, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAutoPunishRuleHackTypeMgr` | `0x080f9218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f9218  _ZN8WongWork26CAutoPunishRuleHackTypeMgr16setIPCounterDataEjjPcj
#           WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData(unsigned int, unsigned int, char*, unsigned int)
# range [0x080f9218, 0x080f9321]
080f9218 +0x000:  push   %ebp
080f9219 +0x001:  mov    %esp,%ebp
080f921b +0x003:  sub    $0xd8,%esp
080f9221 +0x009:  mov    0x10(%ebp),%edx
080f9224 +0x00c:  mov    0xc(%ebp),%eax
080f9227 +0x00f:  mov    0x18(%ebp),%ecx
080f922a +0x012:  mov    %ecx,0x10(%esp)
080f922e +0x016:  mov    0x14(%ebp),%ecx
080f9231 +0x019:  mov    %ecx,0xc(%esp)
080f9235 +0x01d:  mov    %edx,0x8(%esp)
080f9239 +0x021:  mov    %eax,0x4(%esp)
080f923d +0x025:  lea    -0x74(%ebp),%eax
080f9240 +0x028:  mov    %eax,(%esp)
080f9243 +0x02b:  call   080f9892 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x9e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x9e
080f9248 +0x030:  lea    -0x90(%ebp),%eax
080f924e +0x036:  lea    -0x74(%ebp),%edx
080f9251 +0x039:  mov    %edx,0x8(%esp)
080f9255 +0x03d:  lea    0xc(%ebp),%edx
080f9258 +0x040:  mov    %edx,0x4(%esp)
080f925c +0x044:  mov    %eax,(%esp)
080f925f +0x047:  call   080f9e59 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x665>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x665
080f9264 +0x04c:  sub    $0x4,%esp
080f9267 +0x04f:  lea    -0x90(%ebp),%eax
080f926d +0x055:  mov    %eax,0x4(%esp)
080f9271 +0x059:  lea    -0xac(%ebp),%eax
080f9277 +0x05f:  mov    %eax,(%esp)
080f927a +0x062:  call   080f9e98 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x6a4>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x6a4
080f927f +0x067:  mov    0x8(%ebp),%eax
080f9282 +0x06a:  lea    0x24(%eax),%ecx
080f9285 +0x06d:  lea    -0xb0(%ebp),%eax
080f928b +0x073:  lea    -0xac(%ebp),%edx
080f9291 +0x079:  mov    %edx,0x8(%esp)
080f9295 +0x07d:  mov    %ecx,0x4(%esp)
080f9299 +0x081:  mov    %eax,(%esp)
080f929c +0x084:  call   080f9eea <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x6f6>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x6f6
080f92a1 +0x089:  sub    $0x4,%esp
080f92a4 +0x08c:  mov    0x10(%ebp),%eax
080f92a7 +0x08f:  test   %eax,%eax
080f92a9 +0x091:  je     080f931f <+0x107>
080f92ab +0x093:  mov    0x10(%ebp),%edx
080f92ae +0x096:  mov    0xc(%ebp),%eax
080f92b1 +0x099:  mov    0x18(%ebp),%ecx
080f92b4 +0x09c:  mov    %ecx,0x10(%esp)
080f92b8 +0x0a0:  mov    0x14(%ebp),%ecx
080f92bb +0x0a3:  mov    %ecx,0xc(%esp)
080f92bf +0x0a7:  mov    %edx,0x8(%esp)
080f92c3 +0x0ab:  mov    %eax,0x4(%esp)
080f92c7 +0x0af:  lea    -0x20(%ebp),%eax
080f92ca +0x0b2:  mov    %eax,(%esp)
080f92cd +0x0b5:  call   080f9892 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x9e>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x9e
080f92d2 +0x0ba:  lea    -0x3c(%ebp),%eax
080f92d5 +0x0bd:  lea    -0x20(%ebp),%edx
080f92d8 +0x0c0:  mov    %edx,0x8(%esp)
080f92dc +0x0c4:  lea    0x10(%ebp),%edx
080f92df +0x0c7:  mov    %edx,0x4(%esp)
080f92e3 +0x0cb:  mov    %eax,(%esp)
080f92e6 +0x0ce:  call   080f9e59 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x665>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x665
080f92eb +0x0d3:  sub    $0x4,%esp
080f92ee +0x0d6:  lea    -0x3c(%ebp),%eax
080f92f1 +0x0d9:  mov    %eax,0x4(%esp)
080f92f5 +0x0dd:  lea    -0x58(%ebp),%eax
080f92f8 +0x0e0:  mov    %eax,(%esp)
080f92fb +0x0e3:  call   080f9e98 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x6a4>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x6a4
080f9300 +0x0e8:  mov    0x8(%ebp),%eax
080f9303 +0x0eb:  lea    0x24(%eax),%ecx
080f9306 +0x0ee:  lea    -0x5c(%ebp),%eax
080f9309 +0x0f1:  lea    -0x58(%ebp),%edx
080f930c +0x0f4:  mov    %edx,0x8(%esp)
080f9310 +0x0f8:  mov    %ecx,0x4(%esp)
080f9314 +0x0fc:  mov    %eax,(%esp)
080f9317 +0x0ff:  call   080f9eea <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x6f6>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x6f6
080f931c +0x104:  sub    $0x4,%esp
080f931f +0x107:  leave
080f9320 +0x108:  ret
080f9321 +0x109:  nop
```

## 反编译 C

```c
// WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData @ 0x80f9218

/* WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData(unsigned int, unsigned int, char*,
   unsigned int) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::setIPCounterData
          (CAutoPunishRuleHackTypeMgr *this,uint param_1,uint param_2,char *param_3,uint param_4)

{
  pair local_b4 [4];
  pair<unsigned_short_const,WongWork::HackIPCounter_t> local_b0 [28];
  uint local_94 [7];
  HackIPCounter_t local_78 [24];
  pair local_60 [4];
  pair<unsigned_short_const,WongWork::HackIPCounter_t> local_5c [28];
  uint local_40 [7];
  HackIPCounter_t local_24 [32];
  
  HackIPCounter_t::HackIPCounter_t(local_78,param_1,param_2,param_3,param_4);
  std::make_pair<unsigned_int&,WongWork::HackIPCounter_t>(local_94,(HackIPCounter_t *)&param_1);
  std::pair<unsigned_short_const,WongWork::HackIPCounter_t>::
  pair<unsigned_int,WongWork::HackIPCounter_t>(local_b0,(pair *)local_94);
  std::
  multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
  ::insert(local_b4);
  if (param_2 != 0) {
    HackIPCounter_t::HackIPCounter_t(local_24,param_1,param_2,param_3,param_4);
    std::make_pair<unsigned_int&,WongWork::HackIPCounter_t>(local_40,(HackIPCounter_t *)&param_2);
    std::pair<unsigned_short_const,WongWork::HackIPCounter_t>::
    pair<unsigned_int,WongWork::HackIPCounter_t>(local_5c,(pair *)local_40);
    std::
    multimap<unsigned_short,WongWork::HackIPCounter_t,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,WongWork::HackIPCounter_t>>>
    ::insert(local_60);
  }
  return;
}
```
