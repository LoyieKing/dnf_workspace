# TiXmlAttributeSet

`_ZN17TiXmlAttributeSetC1Ev`

`TiXmlAttributeSet::TiXmlAttributeSet()`

| 类 | 地址 |
|---|---|
| `TiXmlAttributeSet` | `0x087e0100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e0100  _ZN17TiXmlAttributeSetC1Ev
#           TiXmlAttributeSet::TiXmlAttributeSet()
# range [0x087e0100, 0x087e013e]
087e0100 +0x00:  push   %ebp
087e0101 +0x01:  mov    %esp,%ebp
087e0103 +0x03:  mov    0x8(%ebp),%eax
087e0106 +0x06:  movl   $0xffffffff,0x8(%eax)
087e010d +0x0d:  movl   $0xffffffff,0x4(%eax)
087e0114 +0x14:  movl   $0x0,0xc(%eax)
087e011b +0x1b:  movl   $&_ZTV14TiXmlAttribute+0x8,(%eax)
087e0121 +0x21:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x14(%eax)
087e0128 +0x28:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,0x18(%eax)
087e012f +0x2f:  movl   $0x0,0x10(%eax)
087e0136 +0x36:  mov    %eax,0x20(%eax)
087e0139 +0x39:  mov    %eax,0x1c(%eax)
087e013c +0x3c:  pop    %ebp
087e013d +0x3d:  ret
087e013e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TiXmlAttributeSet::TiXmlAttributeSet @ 0x87e0100

/* TiXmlAttributeSet::TiXmlAttributeSet() */

void __thiscall TiXmlAttributeSet::TiXmlAttributeSet(TiXmlAttributeSet *this)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__TiXmlAttribute_08de2028;
  *(undefined1 **)(this + 0x14) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x18) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(TiXmlAttributeSet **)(this + 0x20) = this;
  *(TiXmlAttributeSet **)(this + 0x1c) = this;
  return;
}
```
