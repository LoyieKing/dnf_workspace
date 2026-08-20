# reset

`_ZN8TeamInfo5resetEv`

`TeamInfo::reset()`

| 类 | 地址 |
|---|---|
| `TeamInfo` | `0x0855cb16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cb16  _ZN8TeamInfo5resetEv
#           TeamInfo::reset()
# range [0x0855cb16, 0x0855cb53]
0855cb16 +0x00:  push   %ebp
0855cb17 +0x01:  mov    %esp,%ebp
0855cb19 +0x03:  sub    $0x28,%esp
0855cb1c +0x06:  movl   $0x0,-0xc(%ebp)
0855cb23 +0x0d:  jmp    0855cb47 <+0x31>
0855cb25 +0x0f:  mov    -0xc(%ebp),%eax
0855cb28 +0x12:  lea    0x0(,%eax,4),%edx
0855cb2f +0x19:  lea    0x0(,%edx,8),%eax
0855cb36 +0x20:  sub    %edx,%eax
0855cb38 +0x22:  add    0x8(%ebp),%eax
0855cb3b +0x25:  mov    %eax,(%esp)
0855cb3e +0x28:  call   085687d4 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x19e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x19e
0855cb43 +0x2d:  addl   $0x1,-0xc(%ebp)
0855cb47 +0x31:  cmpl   $0x3,-0xc(%ebp)
0855cb4b +0x35:  setle  %al
0855cb4e +0x38:  test   %al,%al
0855cb50 +0x3a:  jne    0855cb25 <+0xf>
0855cb52 +0x3c:  leave
0855cb53 +0x3d:  ret
```

## 反编译 C

```c
// TeamInfo::reset @ 0x855cb16

/* TeamInfo::reset() */

void __thiscall TeamInfo::reset(TeamInfo *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    PlayerInfo::reset((PlayerInfo *)(this + local_10 * 0x1c));
  }
  return;
}
```
