# getBuyItemMap

`_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE`

`advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x088999d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088999d8  _ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE
#           advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)
# range [0x088999d8, 0x08899a0b]
088999d8 +0x00:  push   %ebp
088999d9 +0x01:  mov    %esp,%ebp
088999db +0x03:  mov    0xc(%ebp),%eax
088999de +0x06:  cmp    $0x1,%eax
088999e1 +0x09:  je     088999f4 <+0x1c>
088999e3 +0x0b:  cmp    $0x2,%eax
088999e6 +0x0e:  je     088999fc <+0x24>
088999e8 +0x10:  test   %eax,%eax
088999ea +0x12:  jne    08899a04 <+0x2c>
088999ec +0x14:  mov    0x8(%ebp),%eax
088999ef +0x17:  add    $0x3c,%eax
088999f2 +0x1a:  jmp    08899a09 <+0x31>
088999f4 +0x1c:  mov    0x8(%ebp),%eax
088999f7 +0x1f:  add    $0x54,%eax
088999fa +0x22:  jmp    08899a09 <+0x31>
088999fc +0x24:  mov    0x8(%ebp),%eax
088999ff +0x27:  add    $0x6c,%eax
08899a02 +0x2a:  jmp    08899a09 <+0x31>
08899a04 +0x2c:  mov    $0x0,%eax
08899a09 +0x31:  pop    %ebp
08899a0a +0x32:  ret
08899a0b +0x33:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::getBuyItemMap @ 0x88999d8

/* advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T) */

AdvanceAltarData * __thiscall
advancealtar::AdvanceAltarData::getBuyItemMap(AdvanceAltarData *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 0x54;
  }
  else if (param_2 == 2) {
    this = this + 0x6c;
  }
  else if (param_2 == 0) {
    this = this + 0x3c;
  }
  else {
    this = (AdvanceAltarData *)0x0;
  }
  return this;
}
```
