# setWeekendBonusFatigue

`_ZN15CUserCharacInfo22setWeekendBonusFatigueEt`

`CUserCharacInfo::setWeekendBonusFatigue(unsigned short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e2a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e2a4  _ZN15CUserCharacInfo22setWeekendBonusFatigueEt
#           CUserCharacInfo::setWeekendBonusFatigue(unsigned short)
# range [0x0868e2a4, 0x0868e2d1]
0868e2a4 +0x00:  push   %ebp
0868e2a5 +0x01:  mov    %esp,%ebp
0868e2a7 +0x03:  sub    $0x4,%esp
0868e2aa +0x06:  mov    0xc(%ebp),%eax
0868e2ad +0x09:  mov    %ax,-0x4(%ebp)
0868e2b1 +0x0d:  mov    0x8(%ebp),%eax
0868e2b4 +0x10:  mov    0x10(%eax),%eax
0868e2b7 +0x13:  test   %eax,%eax
0868e2b9 +0x15:  je     0868e2cf <+0x2b>
0868e2bb +0x17:  mov    0x8(%ebp),%eax
0868e2be +0x1a:  mov    0x10(%eax),%eax
0868e2c1 +0x1d:  mov    &DEFAULT_MAX_FATIGUE,%edx
0868e2c7 +0x23:  add    -0x4(%ebp),%dx
0868e2cb +0x27:  mov    %dx,0x35(%eax)
0868e2cf +0x2b:  leave
0868e2d0 +0x2c:  ret
0868e2d1 +0x2d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::setWeekendBonusFatigue @ 0x868e2a4

/* CUserCharacInfo::setWeekendBonusFatigue(unsigned short) */

void __thiscall CUserCharacInfo::setWeekendBonusFatigue(CUserCharacInfo *this,ushort param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(ushort *)(*(int *)(this + 0x10) + 0x35) = (short)DEFAULT_MAX_FATIGUE + param_1;
  }
  return;
}
```
