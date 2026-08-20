# getSlotMap

`_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE`

`advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x08899a0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899a0c  _ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE
#           advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T)
# range [0x08899a0c, 0x08899a39]
08899a0c +0x00:  push   %ebp
08899a0d +0x01:  mov    %esp,%ebp
08899a0f +0x03:  mov    0xc(%ebp),%eax
08899a12 +0x06:  cmp    $0x1,%eax
08899a15 +0x09:  je     08899a1e <+0x12>
08899a17 +0x0b:  cmp    $0x2,%eax
08899a1a +0x0e:  je     08899a28 <+0x1c>
08899a1c +0x10:  jmp    08899a32 <+0x26>
08899a1e +0x12:  mov    0x8(%ebp),%eax
08899a21 +0x15:  add    $0x84,%eax
08899a26 +0x1a:  jmp    08899a37 <+0x2b>
08899a28 +0x1c:  mov    0x8(%ebp),%eax
08899a2b +0x1f:  add    $0x9c,%eax
08899a30 +0x24:  jmp    08899a37 <+0x2b>
08899a32 +0x26:  mov    $0x0,%eax
08899a37 +0x2b:  pop    %ebp
08899a38 +0x2c:  ret
08899a39 +0x2d:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::getSlotMap @ 0x8899a0c

/* advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T) */

AdvanceAltarData * __thiscall
advancealtar::AdvanceAltarData::getSlotMap(AdvanceAltarData *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 0x84;
  }
  else if (param_2 == 2) {
    this = this + 0x9c;
  }
  else {
    this = (AdvanceAltarData *)0x0;
  }
  return this;
}
```
