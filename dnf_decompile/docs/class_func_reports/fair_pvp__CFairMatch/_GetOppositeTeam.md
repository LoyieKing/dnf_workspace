# _GetOppositeTeam

`_ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi`

`fair_pvp::CFairMatch::_GetOppositeTeam(int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564f8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564f8c  _ZN8fair_pvp10CFairMatch16_GetOppositeTeamEi
#           fair_pvp::CFairMatch::_GetOppositeTeam(int)
# range [0x08564f8c, 0x08564fb1]
08564f8c +0x00:  push   %ebp
08564f8d +0x01:  mov    %esp,%ebp
08564f8f +0x03:  mov    0xc(%ebp),%eax
08564f92 +0x06:  cmp    $0x1,%eax
08564f95 +0x09:  je     08564f9e <+0x12>
08564f97 +0x0b:  cmp    $0x2,%eax
08564f9a +0x0e:  je     08564fa5 <+0x19>
08564f9c +0x10:  jmp    08564fac <+0x20>
08564f9e +0x12:  mov    $0x2,%eax
08564fa3 +0x17:  jmp    08564faf <+0x23>
08564fa5 +0x19:  mov    $0x1,%eax
08564faa +0x1e:  jmp    08564faf <+0x23>
08564fac +0x20:  mov    0xc(%ebp),%eax
08564faf +0x23:  pop    %ebp
08564fb0 +0x24:  ret
08564fb1 +0x25:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_GetOppositeTeam @ 0x8564f8c

/* fair_pvp::CFairMatch::_GetOppositeTeam(int) */

int __thiscall fair_pvp::CFairMatch::_GetOppositeTeam(CFairMatch *this,int param_1)

{
  if (param_1 == 1) {
    param_1 = 2;
  }
  else if (param_1 == 2) {
    param_1 = 1;
  }
  return param_1;
}
```
