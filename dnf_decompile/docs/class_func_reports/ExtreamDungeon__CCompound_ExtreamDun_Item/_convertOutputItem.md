# _convertOutputItem

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE`

`ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c5ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c5ac  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item18_convertOutputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE
#           ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
# range [0x0832c5ac, 0x0832c5ef]
0832c5ac +0x00:  push   %ebp
0832c5ad +0x01:  mov    %esp,%ebp
0832c5af +0x03:  mov    0xc(%ebp),%eax
0832c5b2 +0x06:  cmp    $0x2,%eax
0832c5b5 +0x09:  je     0832c5db <+0x2f>
0832c5b7 +0x0b:  cmp    $0x2,%eax
0832c5ba +0x0e:  jg     0832c5c3 <+0x17>
0832c5bc +0x10:  cmp    $0x1,%eax
0832c5bf +0x13:  je     0832c5d4 <+0x28>
0832c5c1 +0x15:  jmp    0832c5e9 <+0x3d>
0832c5c3 +0x17:  cmp    $0x3,%eax
0832c5c6 +0x1a:  je     0832c5e2 <+0x36>
0832c5c8 +0x1c:  cmp    $0x9,%eax
0832c5cb +0x1f:  jne    0832c5e9 <+0x3d>
0832c5cd +0x21:  mov    $0x0,%eax
0832c5d2 +0x26:  jmp    0832c5ee <+0x42>
0832c5d4 +0x28:  mov    $0x1,%eax
0832c5d9 +0x2d:  jmp    0832c5ee <+0x42>
0832c5db +0x2f:  mov    $0x2,%eax
0832c5e0 +0x34:  jmp    0832c5ee <+0x42>
0832c5e2 +0x36:  mov    $0x3,%eax
0832c5e7 +0x3b:  jmp    0832c5ee <+0x42>
0832c5e9 +0x3d:  mov    $0x4,%eax
0832c5ee +0x42:  pop    %ebp
0832c5ef +0x43:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem @ 0x832c5ac

/* ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
    */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::_convertOutputItem(undefined4 this,int param_2)

{
  if (param_2 == 2) {
    return 2;
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      return 1;
    }
  }
  else {
    if (param_2 == 3) {
      return 3;
    }
    if (param_2 == 9) {
      return 0;
    }
  }
  return 4;
}
```
