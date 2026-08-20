# reset

`_ZN8fair_pvp13TeamInfoThird5resetEv`

`fair_pvp::TeamInfoThird::reset()`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x08562582` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562582  _ZN8fair_pvp13TeamInfoThird5resetEv
#           fair_pvp::TeamInfoThird::reset()
# range [0x08562582, 0x085625c5]
08562582 +0x00:  push   %ebp
08562583 +0x01:  mov    %esp,%ebp
08562585 +0x03:  sub    $0x28,%esp
08562588 +0x06:  movl   $0x0,-0xc(%ebp)
0856258f +0x0d:  jmp    085625a9 <+0x27>
08562591 +0x0f:  mov    -0xc(%ebp),%eax
08562594 +0x12:  shl    $0x4,%eax
08562597 +0x15:  add    0x8(%ebp),%eax
0856259a +0x18:  add    $0x8,%eax
0856259d +0x1b:  mov    %eax,(%esp)
085625a0 +0x1e:  call   08568900 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2ca>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2ca
085625a5 +0x23:  addl   $0x1,-0xc(%ebp)
085625a9 +0x27:  cmpl   $0x3,-0xc(%ebp)
085625ad +0x2b:  setle  %al
085625b0 +0x2e:  test   %al,%al
085625b2 +0x30:  jne    08562591 <+0xf>
085625b4 +0x32:  mov    0x8(%ebp),%eax
085625b7 +0x35:  movb   $0x0,(%eax)
085625ba +0x38:  mov    0x8(%ebp),%eax
085625bd +0x3b:  movl   $0x2,0x4(%eax)
085625c4 +0x42:  leave
085625c5 +0x43:  ret
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::reset @ 0x8562582

/* fair_pvp::TeamInfoThird::reset() */

void __thiscall fair_pvp::TeamInfoThird::reset(TeamInfoThird *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    PlayerInfoThird::reset((PlayerInfoThird *)(this + local_10 * 0x10 + 8));
  }
  *this = (TeamInfoThird)0x0;
  *(undefined4 *)(this + 4) = 2;
  return;
}
```
