# reset

`_ZN14TeamInfoSecond5resetEv`

`TeamInfoSecond::reset()`

| 类 | 地址 |
|---|---|
| `TeamInfoSecond` | `0x0855fdc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fdc0  _ZN14TeamInfoSecond5resetEv
#           TeamInfoSecond::reset()
# range [0x0855fdc0, 0x0855fdfd]
0855fdc0 +0x00:  push   %ebp
0855fdc1 +0x01:  mov    %esp,%ebp
0855fdc3 +0x03:  sub    $0x28,%esp
0855fdc6 +0x06:  mov    0x8(%ebp),%eax
0855fdc9 +0x09:  movl   $0x0,(%eax)
0855fdcf +0x0f:  movl   $0x0,-0xc(%ebp)
0855fdd6 +0x16:  jmp    0855fdf0 <+0x30>
0855fdd8 +0x18:  mov    -0xc(%ebp),%eax
0855fddb +0x1b:  shl    $0x3,%eax
0855fdde +0x1e:  add    0x8(%ebp),%eax
0855fde1 +0x21:  add    $0x8,%eax
0855fde4 +0x24:  mov    %eax,(%esp)
0855fde7 +0x27:  call   08568850 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x21a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x21a
0855fdec +0x2c:  addl   $0x1,-0xc(%ebp)
0855fdf0 +0x30:  cmpl   $0x3,-0xc(%ebp)
0855fdf4 +0x34:  setle  %al
0855fdf7 +0x37:  test   %al,%al
0855fdf9 +0x39:  jne    0855fdd8 <+0x18>
0855fdfb +0x3b:  leave
0855fdfc +0x3c:  ret
0855fdfd +0x3d:  nop
```

## 反编译 C

```c
// TeamInfoSecond::reset @ 0x855fdc0

/* TeamInfoSecond::reset() */

void __thiscall TeamInfoSecond::reset(TeamInfoSecond *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    PlayerInfoSecond::reset((PlayerInfoSecond *)(this + local_10 * 8 + 8));
  }
  return;
}
```
