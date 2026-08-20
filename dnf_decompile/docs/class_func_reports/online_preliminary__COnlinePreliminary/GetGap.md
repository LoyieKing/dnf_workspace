# GetGap

`_ZN18online_preliminary18COnlinePreliminary6GetGapEP6IMatch`

`online_preliminary::COnlinePreliminary::GetGap(IMatch*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561a0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561a0e  _ZN18online_preliminary18COnlinePreliminary6GetGapEP6IMatch
#           online_preliminary::COnlinePreliminary::GetGap(IMatch*)
# range [0x08561a0e, 0x08561a51]
08561a0e +0x00:  push   %ebp
08561a0f +0x01:  mov    %esp,%ebp
08561a11 +0x03:  sub    $0x1c,%esp
08561a14 +0x06:  mov    $0x0,%eax
08561a19 +0x0b:  mov    %eax,-0x8(%ebp)
08561a1c +0x0e:  mov    0xc(%ebp),%eax
08561a1f +0x11:  mov    %eax,-0x4(%ebp)
08561a22 +0x14:  movl   $0x0,0x4(%esp)
08561a2a +0x1c:  mov    0x8(%ebp),%eax
08561a2d +0x1f:  mov    %eax,(%esp)
08561a30 +0x22:  call   08560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
08561a35 +0x27:  fstps  -0x14(%ebp)
08561a38 +0x2a:  movl   $0x0,0x4(%esp)
08561a40 +0x32:  mov    -0x4(%ebp),%eax
08561a43 +0x35:  mov    %eax,(%esp)
08561a46 +0x38:  call   08560342 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM>  ; online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
08561a4b +0x3d:  fsubrs -0x14(%ebp)
08561a4e +0x40:  fabs
08561a50 +0x42:  leave
08561a51 +0x43:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::GetGap @ 0x8561a0e

/* online_preliminary::COnlinePreliminary::GetGap(IMatch*) */

longdouble __thiscall
online_preliminary::COnlinePreliminary::GetGap(COnlinePreliminary *this,IMatch *param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)_GetRating(this,0);
  lVar2 = (longdouble)_GetRating((COnlinePreliminary *)param_1,0);
  return ABS((longdouble)(float)lVar1 - lVar2);
}
```
