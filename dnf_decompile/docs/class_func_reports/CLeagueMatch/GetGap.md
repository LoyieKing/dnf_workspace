# GetGap

`_ZN12CLeagueMatch6GetGapEP6IMatch`

`CLeagueMatch::GetGap(IMatch*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e12a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e12a  _ZN12CLeagueMatch6GetGapEP6IMatch
#           CLeagueMatch::GetGap(IMatch*)
# range [0x0855e12a, 0x0855e21b]
0855e12a +0x00:  push   %ebp
0855e12b +0x01:  mov    %esp,%ebp
0855e12d +0x03:  sub    $0x48,%esp
0855e130 +0x06:  mov    $0x0,%eax
0855e135 +0x0b:  mov    %eax,-0x20(%ebp)
0855e138 +0x0e:  movl   $0x0,-0x1c(%ebp)
0855e13f +0x15:  jmp    0855e1f9 <+0xcf>
0855e144 +0x1a:  mov    -0x1c(%ebp),%eax
0855e147 +0x1d:  mov    0x8(%ebp),%ecx
0855e14a +0x20:  lea    0x0(,%eax,4),%edx
0855e151 +0x27:  lea    0x0(,%edx,8),%eax
0855e158 +0x2e:  sub    %edx,%eax
0855e15a +0x30:  lea    (%ecx,%eax,1),%eax
0855e15d +0x33:  add    $0x24,%eax
0855e160 +0x36:  mov    (%eax),%eax
0855e162 +0x38:  mov    %eax,-0x18(%ebp)
0855e165 +0x3b:  mov    0xc(%ebp),%eax
0855e168 +0x3e:  mov    (%eax),%eax
0855e16a +0x40:  add    $0x10,%eax
0855e16d +0x43:  mov    (%eax),%edx
0855e16f +0x45:  mov    -0x1c(%ebp),%eax
0855e172 +0x48:  mov    %eax,0x4(%esp)
0855e176 +0x4c:  mov    0xc(%ebp),%eax
0855e179 +0x4f:  mov    %eax,(%esp)
0855e17c +0x52:  call   *%edx
0855e17e +0x54:  mov    %eax,-0x14(%ebp)
0855e181 +0x57:  mov    -0x1c(%ebp),%eax
0855e184 +0x5a:  mov    0x8(%ebp),%ecx
0855e187 +0x5d:  lea    0x0(,%eax,4),%edx
0855e18e +0x64:  lea    0x0(,%edx,8),%eax
0855e195 +0x6b:  sub    %edx,%eax
0855e197 +0x6d:  lea    (%ecx,%eax,1),%eax
0855e19a +0x70:  add    $0x10,%eax
0855e19d +0x73:  movzbl 0x18(%eax),%eax
0855e1a1 +0x77:  test   %al,%al
0855e1a3 +0x79:  je     0855e1f5 <+0xcb>
0855e1a5 +0x7b:  cmpl   $0x0,-0x18(%ebp)
0855e1a9 +0x7f:  je     0855e1f5 <+0xcb>
0855e1ab +0x81:  cmpl   $0x0,-0x14(%ebp)
0855e1af +0x85:  je     0855e1f5 <+0xcb>
0855e1b1 +0x87:  mov    -0x18(%ebp),%eax
0855e1b4 +0x8a:  mov    %eax,(%esp)
0855e1b7 +0x8d:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
0855e1bc +0x92:  mov    -0x1c(%ebp),%eax
0855e1bf +0x95:  flds   &_ZL13g_RankingIncr(,%eax,4)
0855e1c6 +0x9c:  fmulp  %st,%st(1)
0855e1c8 +0x9e:  fstps  -0x10(%ebp)
0855e1cb +0xa1:  mov    -0x14(%ebp),%eax
0855e1ce +0xa4:  mov    %eax,(%esp)
0855e1d1 +0xa7:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
0855e1d6 +0xac:  mov    -0x1c(%ebp),%eax
0855e1d9 +0xaf:  flds   &_ZL13g_RankingIncr(,%eax,4)
0855e1e0 +0xb6:  fmulp  %st,%st(1)
0855e1e2 +0xb8:  fstps  -0xc(%ebp)
0855e1e5 +0xbb:  flds   -0x10(%ebp)
0855e1e8 +0xbe:  fsubs  -0xc(%ebp)
0855e1eb +0xc1:  fabs
0855e1ed +0xc3:  flds   -0x20(%ebp)
0855e1f0 +0xc6:  faddp  %st,%st(1)
0855e1f2 +0xc8:  fstps  -0x20(%ebp)
0855e1f5 +0xcb:  addl   $0x1,-0x1c(%ebp)
0855e1f9 +0xcf:  movzbl &_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E,%eax
0855e200 +0xd6:  movzbl %al,%eax
0855e203 +0xd9:  cmp    -0x1c(%ebp),%eax
0855e206 +0xdc:  seta   %al
0855e209 +0xdf:  test   %al,%al
0855e20b +0xe1:  jne    0855e144 <+0x1a>
0855e211 +0xe7:  mov    -0x20(%ebp),%eax
0855e214 +0xea:  mov    %eax,-0x2c(%ebp)
0855e217 +0xed:  flds   -0x2c(%ebp)
0855e21a +0xf0:  leave
0855e21b +0xf1:  ret
```

## 反编译 C

```c
// CLeagueMatch::GetGap @ 0x855e12a

/* CLeagueMatch::GetGap(IMatch*) */

longdouble __thiscall CLeagueMatch::GetGap(CLeagueMatch *this,IMatch *param_1)

{
  float fVar1;
  CUser *this_00;
  CUser *this_01;
  longdouble lVar2;
  longdouble lVar3;
  float local_24;
  uint local_20;
  
  local_24 = 0.0;
  for (local_20 = 0; local_20 < nPlayerCountPerOneTeam_; local_20 = local_20 + 1) {
    this_00 = *(CUser **)(this + local_20 * 0x1c + 0x24);
    this_01 = (CUser *)(**(code **)(*(int *)param_1 + 0x10))(param_1,local_20);
    if (((this[local_20 * 0x1c + 0x28] != (CLeagueMatch)0x0) && (this_00 != (CUser *)0x0)) &&
       (this_01 != (CUser *)0x0)) {
      lVar2 = (longdouble)CUser::GetRating(this_00);
      fVar1 = *(float *)(g_RankingIncr + local_20 * 4);
      lVar3 = (longdouble)CUser::GetRating(this_01);
      local_24 = local_24 +
                 ABS((float)((longdouble)fVar1 * lVar2) -
                     (float)((longdouble)*(float *)(g_RankingIncr + local_20 * 4) * lVar3));
    }
  }
  return (longdouble)local_24;
}
```
