# GetTeamRating

`_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv`

`fair_pvp::TeamInfoThird::GetTeamRating()`

| 类 | 地址 |
|---|---|
| `fair_pvp::TeamInfoThird` | `0x085627b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085627b2  _ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv
#           fair_pvp::TeamInfoThird::GetTeamRating()
# range [0x085627b2, 0x08562833]
085627b2 +0x00:  push   %ebp
085627b3 +0x01:  mov    %esp,%ebp
085627b5 +0x03:  sub    $0x14,%esp
085627b8 +0x06:  mov    $0x0,%eax
085627bd +0x0b:  mov    %eax,-0xc(%ebp)
085627c0 +0x0e:  movl   $0x0,-0x8(%ebp)
085627c7 +0x15:  movl   $0x0,-0x4(%ebp)
085627ce +0x1c:  jmp    0856280d <+0x5b>
085627d0 +0x1e:  mov    -0x4(%ebp),%edx
085627d3 +0x21:  mov    0x8(%ebp),%eax
085627d6 +0x24:  shl    $0x4,%edx
085627d9 +0x27:  add    %edx,%eax
085627db +0x29:  add    $0x14,%eax
085627de +0x2c:  flds   (%eax)
085627e0 +0x2e:  flds   -0xc(%ebp)
085627e3 +0x31:  faddp  %st,%st(1)
085627e5 +0x33:  fstps  -0xc(%ebp)
085627e8 +0x36:  mov    -0x4(%ebp),%edx
085627eb +0x39:  mov    0x8(%ebp),%eax
085627ee +0x3c:  shl    $0x4,%edx
085627f1 +0x3f:  add    %edx,%eax
085627f3 +0x41:  add    $0x14,%eax
085627f6 +0x44:  flds   (%eax)
085627f8 +0x46:  fldz
085627fa +0x48:  fxch   %st(1)
085627fc +0x4a:  fucompp
085627fe +0x4c:  fnstsw %ax
08562800 +0x4e:  sahf
08562801 +0x4f:  jp     08562805 <+0x53>
08562803 +0x51:  je     08562809 <+0x57>
08562805 +0x53:  addl   $0x1,-0x8(%ebp)
08562809 +0x57:  addl   $0x1,-0x4(%ebp)
0856280d +0x5b:  cmpl   $0x3,-0x4(%ebp)
08562811 +0x5f:  setle  %al
08562814 +0x62:  test   %al,%al
08562816 +0x64:  jne    085627d0 <+0x1e>
08562818 +0x66:  cmpl   $0x0,-0x8(%ebp)
0856281c +0x6a:  je     08562829 <+0x77>
0856281e +0x6c:  fildl  -0x8(%ebp)
08562821 +0x6f:  flds   -0xc(%ebp)
08562824 +0x72:  fdivp  %st,%st(1)
08562826 +0x74:  fstps  -0xc(%ebp)
08562829 +0x77:  mov    -0xc(%ebp),%eax
0856282c +0x7a:  mov    %eax,-0x14(%ebp)
0856282f +0x7d:  flds   -0x14(%ebp)
08562832 +0x80:  leave
08562833 +0x81:  ret
```

## 反编译 C

```c
// fair_pvp::TeamInfoThird::GetTeamRating @ 0x85627b2

/* fair_pvp::TeamInfoThird::GetTeamRating() */

longdouble __thiscall fair_pvp::TeamInfoThird::GetTeamRating(TeamInfoThird *this)

{
  float local_10;
  int local_c;
  int local_8;
  
  local_10 = 0.0;
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    local_10 = local_10 + *(float *)(this + local_8 * 0x10 + 0x14);
    if (*(float *)(this + local_8 * 0x10 + 0x14) != 0.0) {
      local_c = local_c + 1;
    }
  }
  if (local_c != 0) {
    local_10 = local_10 / (float)local_c;
  }
  return (longdouble)local_10;
}
```
