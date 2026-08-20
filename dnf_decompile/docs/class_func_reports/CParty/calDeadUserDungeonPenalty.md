# calDeadUserDungeonPenalty

`_ZN6CParty25calDeadUserDungeonPenaltyEi`

`CParty::calDeadUserDungeonPenalty(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ad9b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ad9b4  _ZN6CParty25calDeadUserDungeonPenaltyEi
#           CParty::calDeadUserDungeonPenalty(int)
# range [0x085ad9b4, 0x085ada2f]
085ad9b4 +0x00:  push   %ebp
085ad9b5 +0x01:  mov    %esp,%ebp
085ad9b7 +0x03:  sub    $0x18,%esp
085ad9ba +0x06:  mov    $0x0,%eax
085ad9bf +0x0b:  mov    %eax,-0x8(%ebp)
085ad9c2 +0x0e:  mov    0x8(%ebp),%eax
085ad9c5 +0x11:  mov    0x9b8(%eax),%eax
085ad9cb +0x17:  mov    %eax,-0x4(%ebp)
085ad9ce +0x1a:  cmpl   $0x0,0xc(%ebp)
085ad9d2 +0x1e:  jns    085ad9d9 <+0x25>
085ad9d4 +0x20:  mov    -0x8(%ebp),%eax
085ad9d7 +0x23:  jmp    085ada28 <+0x74>
085ad9d9 +0x25:  cmpl   $0x1,-0x4(%ebp)
085ad9dd +0x29:  jle    085ada25 <+0x71>
085ad9df +0x2b:  mov    0xc(%ebp),%edx
085ad9e2 +0x2e:  mov    0x8(%ebp),%eax
085ad9e5 +0x31:  add    $0xe0,%edx
085ad9eb +0x37:  mov    0x10(%eax,%edx,4),%eax
085ad9ef +0x3b:  mov    %eax,-0x14(%ebp)
085ad9f2 +0x3e:  fildl  -0x14(%ebp)
085ad9f5 +0x41:  mov    -0x4(%ebp),%eax
085ad9f8 +0x44:  sub    $0x1,%eax
085ad9fb +0x47:  mov    %eax,-0x14(%ebp)
085ad9fe +0x4a:  fildl  -0x14(%ebp)
085ada01 +0x4d:  fdivrp %st,%st(1)
085ada03 +0x4f:  fstps  -0x8(%ebp)
085ada06 +0x52:  flds   -0x8(%ebp)
085ada09 +0x55:  flds   &data#47c448bc(.rodata)
085ada0f +0x5b:  fucompp
085ada11 +0x5d:  fnstsw %ax
085ada13 +0x5f:  test   $0x45,%ah
085ada16 +0x62:  sete   %al
085ada19 +0x65:  test   %al,%al
085ada1b +0x67:  je     085ada25 <+0x71>
085ada1d +0x69:  mov    $0x0,%eax
085ada22 +0x6e:  mov    %eax,-0x8(%ebp)
085ada25 +0x71:  mov    -0x8(%ebp),%eax
085ada28 +0x74:  mov    %eax,-0x18(%ebp)
085ada2b +0x77:  flds   -0x18(%ebp)
085ada2e +0x7a:  leave
085ada2f +0x7b:  ret
```

## 反编译 C

```c
// CParty::calDeadUserDungeonPenalty @ 0x85ad9b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::calDeadUserDungeonPenalty(int) */

longdouble __thiscall CParty::calDeadUserDungeonPenalty(CParty *this,int param_1)

{
  float local_c;
  
  local_c = 0.0;
  if (param_1 < 0) {
    local_c = 0.0;
  }
  else if ((1 < *(int *)(this + 0x9b8)) &&
          (local_c = (float)*(int *)(this + (param_1 + 0xe0) * 4 + 0x10) /
                     (float)(*(int *)(this + 0x9b8) + -1), local_c < _DAT_08cbbbe8)) {
    local_c = 0.0;
  }
  return (longdouble)local_c;
}
```
