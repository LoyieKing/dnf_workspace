# getIsCharacEvent

`_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb`

`EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(bool&) const`

| 类 | 地址 |
|---|---|
| `EventClassify::CUsedFatigueGiveItem` | `0x081107ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081107ea  _ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb
#           EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(bool&) const
# range [0x081107ea, 0x08110813]
081107ea +0x00:  push   %ebp
081107eb +0x01:  mov    %esp,%ebp
081107ed +0x03:  mov    0x8(%ebp),%eax
081107f0 +0x06:  mov    0x1c(%eax),%eax
081107f3 +0x09:  test   %eax,%eax
081107f5 +0x0b:  jne    081107fe <+0x14>
081107f7 +0x0d:  mov    $0x0,%eax
081107fc +0x12:  jmp    08110812 <+0x28>
081107fe +0x14:  mov    0x8(%ebp),%eax
08110801 +0x17:  mov    0x1c(%eax),%eax
08110804 +0x1a:  movzbl 0x14(%eax),%edx
08110808 +0x1e:  mov    0xc(%ebp),%eax
0811080b +0x21:  mov    %dl,(%eax)
0811080d +0x23:  mov    $0x1,%eax
08110812 +0x28:  pop    %ebp
08110813 +0x29:  ret
```

## 反编译 C

```c
// EventClassify::CUsedFatigueGiveItem::getIsCharacEvent @ 0x81107ea

/* EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(bool&) const */

bool __thiscall
EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(CUsedFatigueGiveItem *this,bool *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 != 0) {
    *param_1 = *(bool *)(*(int *)(this + 0x1c) + 0x14);
  }
  return iVar1 != 0;
}
```
