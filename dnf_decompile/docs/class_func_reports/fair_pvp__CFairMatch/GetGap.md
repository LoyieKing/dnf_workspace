# GetGap

`_ZN8fair_pvp10CFairMatch6GetGapEP6IMatch`

`fair_pvp::CFairMatch::GetGap(IMatch*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x0856491c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856491c  _ZN8fair_pvp10CFairMatch6GetGapEP6IMatch
#           fair_pvp::CFairMatch::GetGap(IMatch*)
# range [0x0856491c, 0x08564951]
0856491c +0x00:  push   %ebp
0856491d +0x01:  mov    %esp,%ebp
0856491f +0x03:  sub    $0x28,%esp
08564922 +0x06:  movl   $0x0,0x4(%esp)
0856492a +0x0e:  mov    0x8(%ebp),%eax
0856492d +0x11:  mov    %eax,(%esp)
08564930 +0x14:  call   08568966 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x330>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x330
08564935 +0x19:  fstps  -0xc(%ebp)
08564938 +0x1c:  mov    0xc(%ebp),%eax
0856493b +0x1f:  movl   $0x0,0x4(%esp)
08564943 +0x27:  mov    %eax,(%esp)
08564946 +0x2a:  call   08568966 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x330>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x330
0856494b +0x2f:  fsubrs -0xc(%ebp)
0856494e +0x32:  fabs
08564950 +0x34:  leave
08564951 +0x35:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::GetGap @ 0x856491c

/* fair_pvp::CFairMatch::GetGap(IMatch*) */

longdouble __thiscall fair_pvp::CFairMatch::GetGap(CFairMatch *this,IMatch *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)_GetRating(this,0);
  lVar2 = (longdouble)_GetRating((CFairMatch *)param_1,0);
  return ABS((longdouble)(float)lVar1 - lVar2);
}
```
