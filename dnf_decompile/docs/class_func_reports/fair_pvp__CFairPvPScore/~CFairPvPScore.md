# ~CFairPvPScore

`_ZN8fair_pvp13CFairPvPScoreD1Ev`

`fair_pvp::CFairPvPScore::~CFairPvPScore()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a4850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a4850  _ZN8fair_pvp13CFairPvPScoreD1Ev
#           fair_pvp::CFairPvPScore::~CFairPvPScore()
# range [0x084a4850, 0x084a48d9]
084a4850 +0x00:  push   %ebp
084a4851 +0x01:  mov    %esp,%ebp
084a4853 +0x03:  push   %esi
084a4854 +0x04:  push   %ebx
084a4855 +0x05:  sub    $0x10,%esp
084a4858 +0x08:  mov    0x8(%ebp),%eax
084a485b +0x0b:  movl   $&_ZTVN8fair_pvp13CFairPvPScoreE+0x8,(%eax)
084a4861 +0x11:  mov    0x8(%ebp),%eax
084a4864 +0x14:  add    $0x20,%eax
084a4867 +0x17:  mov    %eax,(%esp)
084a486a +0x1a:  call   084a646a <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x452>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x452
084a486f +0x1f:  jmp    084a4889 <+0x39>
084a4871 +0x21:  mov    %edx,%ebx
084a4873 +0x23:  mov    %eax,%esi
084a4875 +0x25:  mov    0x8(%ebp),%eax
084a4878 +0x28:  add    $0x8,%eax
084a487b +0x2b:  mov    %eax,(%esp)
084a487e +0x2e:  call   084a647e <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x466>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x466
084a4883 +0x33:  mov    %esi,%eax
084a4885 +0x35:  mov    %ebx,%edx
084a4887 +0x37:  jmp    084a4899 <+0x49>
084a4889 +0x39:  mov    0x8(%ebp),%eax
084a488c +0x3c:  add    $0x8,%eax
084a488f +0x3f:  mov    %eax,(%esp)
084a4892 +0x42:  call   084a647e <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x466>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x466
084a4897 +0x47:  jmp    084a48b4 <+0x64>
084a4899 +0x49:  mov    %edx,%ebx
084a489b +0x4b:  mov    %eax,%esi
084a489d +0x4d:  mov    0x8(%ebp),%eax
084a48a0 +0x50:  mov    %eax,(%esp)
084a48a3 +0x53:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
084a48a8 +0x58:  mov    %esi,%eax
084a48aa +0x5a:  mov    %ebx,%edx
084a48ac +0x5c:  mov    %eax,(%esp)
084a48af +0x5f:  call   08ae3750 <_Unwind_Resume>
084a48b4 +0x64:  mov    0x8(%ebp),%eax
084a48b7 +0x67:  mov    %eax,(%esp)
084a48ba +0x6a:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
084a48bf +0x6f:  mov    $0x0,%eax
084a48c4 +0x74:  test   %al,%al
084a48c6 +0x76:  je     084a48d3 <+0x83>
084a48c8 +0x78:  mov    0x8(%ebp),%eax
084a48cb +0x7b:  mov    %eax,(%esp)
084a48ce +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a48d3 +0x83:  add    $0x10,%esp
084a48d6 +0x86:  pop    %ebx
084a48d7 +0x87:  pop    %esi
084a48d8 +0x88:  pop    %ebp
084a48d9 +0x89:  ret
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::~CFairPvPScore @ 0x84a4850

/* WARNING: Removing unreachable block (ram,0x084a48c8) */
/* fair_pvp::CFairPvPScore::~CFairPvPScore() */

void __thiscall fair_pvp::CFairPvPScore::~CFairPvPScore(CFairPvPScore *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7ec08;
                    /* try { // try from 084a486a to 084a486e has its CatchHandler @ 084a4871 */
  std::list<unsigned_char,std::allocator<unsigned_char>>::~list
            ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
                    /* try { // try from 084a4892 to 084a4896 has its CatchHandler @ 084a4899 */
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::~map((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
