# _convertInputItem

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c620  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
# range [0x0832c620, 0x0832c65d]
0832c620 +0x00:  push   %ebp
0832c621 +0x01:  mov    %esp,%ebp
0832c623 +0x03:  mov    0xc(%ebp),%eax
0832c626 +0x06:  cmp    $0x2,%eax
0832c629 +0x09:  je     0832c648 <+0x28>
0832c62b +0x0b:  cmp    $0x2,%eax
0832c62e +0x0e:  jg     0832c637 <+0x17>
0832c630 +0x10:  cmp    $0x1,%eax
0832c633 +0x13:  je     0832c641 <+0x21>
0832c635 +0x15:  jmp    0832c656 <+0x36>
0832c637 +0x17:  cmp    $0x3,%eax
0832c63a +0x1a:  je     0832c64f <+0x2f>
0832c63c +0x1c:  cmp    $0x9,%eax
0832c63f +0x1f:  jne    0832c656 <+0x36>
0832c641 +0x21:  mov    $0x0,%eax
0832c646 +0x26:  jmp    0832c65b <+0x3b>
0832c648 +0x28:  mov    $0x1,%eax
0832c64d +0x2d:  jmp    0832c65b <+0x3b>
0832c64f +0x2f:  mov    $0x2,%eax
0832c654 +0x34:  jmp    0832c65b <+0x3b>
0832c656 +0x36:  mov    $0x3,%eax
0832c65b +0x3b:  pop    %ebp
0832c65c +0x3c:  ret
0832c65d +0x3d:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem @ 0x832c620

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
    */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(undefined4 this,int param_2)

{
  if (param_2 == 2) {
    return 1;
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      return 0;
    }
  }
  else {
    if (param_2 == 3) {
      return 2;
    }
    if (param_2 == 9) {
      return 0;
    }
  }
  return 3;
}
```
