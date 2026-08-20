# CFairPvPScore

`_ZN8fair_pvp13CFairPvPScoreC1Ev`

`fair_pvp::CFairPvPScore::CFairPvPScore()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a47dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a47dc  _ZN8fair_pvp13CFairPvPScoreC1Ev
#           fair_pvp::CFairPvPScore::CFairPvPScore()
# range [0x084a47dc, 0x084a484f]
084a47dc +0x00:  push   %ebp
084a47dd +0x01:  mov    %esp,%ebp
084a47df +0x03:  push   %esi
084a47e0 +0x04:  push   %ebx
084a47e1 +0x05:  sub    $0x10,%esp
084a47e4 +0x08:  mov    0x8(%ebp),%eax
084a47e7 +0x0b:  mov    %eax,(%esp)
084a47ea +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
084a47ef +0x13:  mov    0x8(%ebp),%eax
084a47f2 +0x16:  movl   $&_ZTVN8fair_pvp13CFairPvPScoreE+0x8,(%eax)
084a47f8 +0x1c:  mov    0x8(%ebp),%eax
084a47fb +0x1f:  add    $0x8,%eax
084a47fe +0x22:  mov    %eax,(%esp)
084a4801 +0x25:  call   084a6584 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x56c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x56c
084a4806 +0x2a:  mov    0x8(%ebp),%eax
084a4809 +0x2d:  add    $0x20,%eax
084a480c +0x30:  mov    %eax,(%esp)
084a480f +0x33:  call   082ab448 <_GLOBAL__I__ZN4CLog5this_E+0x786f>  ; global constructors keyed to CLog::this_+0x786f
084a4814 +0x38:  jmp    084a4849 <+0x6d>
084a4816 +0x3a:  mov    %edx,%ebx
084a4818 +0x3c:  mov    %eax,%esi
084a481a +0x3e:  mov    0x8(%ebp),%eax
084a481d +0x41:  add    $0x8,%eax
084a4820 +0x44:  mov    %eax,(%esp)
084a4823 +0x47:  call   084a647e <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x466>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x466
084a4828 +0x4c:  mov    %esi,%eax
084a482a +0x4e:  mov    %ebx,%edx
084a482c +0x50:  jmp    084a482e <+0x52>
084a482e +0x52:  mov    %edx,%ebx
084a4830 +0x54:  mov    %eax,%esi
084a4832 +0x56:  mov    0x8(%ebp),%eax
084a4835 +0x59:  mov    %eax,(%esp)
084a4838 +0x5c:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
084a483d +0x61:  mov    %esi,%eax
084a483f +0x63:  mov    %ebx,%edx
084a4841 +0x65:  mov    %eax,(%esp)
084a4844 +0x68:  call   08ae3750 <_Unwind_Resume>
084a4849 +0x6d:  add    $0x10,%esp
084a484c +0x70:  pop    %ebx
084a484d +0x71:  pop    %esi
084a484e +0x72:  pop    %ebp
084a484f +0x73:  ret
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::CFairPvPScore @ 0x84a47dc

/* fair_pvp::CFairPvPScore::CFairPvPScore() */

void __thiscall fair_pvp::CFairPvPScore::CFairPvPScore(CFairPvPScore *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7ec08;
                    /* try { // try from 084a4801 to 084a4805 has its CatchHandler @ 084a482e */
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::map((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
         *)(this + 8));
                    /* try { // try from 084a480f to 084a4813 has its CatchHandler @ 084a4816 */
  std::list<unsigned_char,std::allocator<unsigned_char>>::list
            ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
  return;
}
```
