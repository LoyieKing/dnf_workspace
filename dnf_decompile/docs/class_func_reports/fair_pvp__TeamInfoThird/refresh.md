# refresh

`_ZN8fair_pvp13TeamInfoThird7refreshEv`

`fair_pvp::TeamInfoThird::refresh()`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x085624de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085624de  _ZN8fair_pvp13TeamInfoThird7refreshEv
#           fair_pvp::TeamInfoThird::refresh()
# range [0x085624de, 0x08562581]
085624de +0x00:  push   %ebp
085624df +0x01:  mov    %esp,%ebp
085624e1 +0x03:  push   %ebx
085624e2 +0x04:  sub    $0x24,%esp
085624e5 +0x07:  movl   $0x0,-0x10(%ebp)
085624ec +0x0e:  movl   $0x0,-0xc(%ebp)
085624f3 +0x15:  jmp    08562560 <+0x82>
085624f5 +0x17:  mov    -0xc(%ebp),%edx
085624f8 +0x1a:  mov    0x8(%ebp),%eax
085624fb +0x1d:  shl    $0x4,%edx
085624fe +0x20:  movzbl 0xc(%edx,%eax,1),%eax
08562503 +0x25:  test   %al,%al
08562505 +0x27:  je     08562547 <+0x69>
08562507 +0x29:  mov    -0xc(%ebp),%edx
0856250a +0x2c:  mov    0x8(%ebp),%eax
0856250d +0x2f:  shl    $0x4,%edx
08562510 +0x32:  add    %edx,%eax
08562512 +0x34:  add    $0x8,%eax
08562515 +0x37:  mov    (%eax),%eax
08562517 +0x39:  test   %eax,%eax
08562519 +0x3b:  je     08562547 <+0x69>
0856251b +0x3d:  mov    -0xc(%ebp),%ebx
0856251e +0x40:  mov    -0xc(%ebp),%edx
08562521 +0x43:  mov    0x8(%ebp),%eax
08562524 +0x46:  shl    $0x4,%edx
08562527 +0x49:  add    %edx,%eax
08562529 +0x4b:  add    $0x8,%eax
0856252c +0x4e:  mov    (%eax),%eax
0856252e +0x50:  mov    %eax,(%esp)
08562531 +0x53:  call   08568e84 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x84e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x84e
08562536 +0x58:  mov    0x8(%ebp),%eax
08562539 +0x5b:  mov    %ebx,%edx
0856253b +0x5d:  shl    $0x4,%edx
0856253e +0x60:  add    %edx,%eax
08562540 +0x62:  add    $0x14,%eax
08562543 +0x65:  fstps  (%eax)
08562545 +0x67:  jmp    0856255c <+0x7e>
08562547 +0x69:  mov    -0xc(%ebp),%edx
0856254a +0x6c:  mov    0x8(%ebp),%eax
0856254d +0x6f:  shl    $0x4,%edx
08562550 +0x72:  add    %edx,%eax
08562552 +0x74:  lea    0x14(%eax),%edx
08562555 +0x77:  mov    $0x0,%eax
0856255a +0x7c:  mov    %eax,(%edx)
0856255c +0x7e:  addl   $0x1,-0xc(%ebp)
08562560 +0x82:  cmpl   $0x3,-0xc(%ebp)
08562564 +0x86:  setle  %al
08562567 +0x89:  test   %al,%al
08562569 +0x8b:  jne    085624f5 <+0x17>
0856256b +0x8d:  mov    0x8(%ebp),%eax
0856256e +0x90:  movb   $0x0,(%eax)
08562571 +0x93:  mov    0x8(%ebp),%eax
08562574 +0x96:  movl   $0x2,0x4(%eax)
0856257b +0x9d:  add    $0x24,%esp
0856257e +0xa0:  pop    %ebx
0856257f +0xa1:  pop    %ebp
08562580 +0xa2:  ret
08562581 +0xa3:  nop
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::refresh @ 0x85624de

/* fair_pvp::TeamInfoThird::refresh() */

void __thiscall fair_pvp::TeamInfoThird::refresh(TeamInfoThird *this)

{
  longdouble lVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[local_10 * 0x10 + 0xc] == (TeamInfoThird)0x0) ||
       (*(int *)(this + local_10 * 0x10 + 8) == 0)) {
      *(undefined4 *)(this + local_10 * 0x10 + 0x14) = 0;
    }
    else {
      lVar1 = (longdouble)CUser::GetRating(*(CUser **)(this + local_10 * 0x10 + 8));
      *(float *)(this + local_10 * 0x10 + 0x14) = (float)lVar1;
    }
  }
  *this = (TeamInfoThird)0x0;
  *(undefined4 *)(this + 4) = 2;
  return;
}
```
