# check_N_addItem

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem`

`ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem(CEquipItem&)`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832db00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832db00  _ZN14ExtreamDungeon25CCompound_ExtreamDun_Item15check_N_addItemER10CEquipItem
#           ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem(CEquipItem&)
# range [0x0832db00, 0x0832db4d]
0832db00 +0x00:  push   %ebp
0832db01 +0x01:  mov    %esp,%ebp
0832db03 +0x03:  sub    $0x18,%esp
0832db06 +0x06:  mov    0xc(%ebp),%eax
0832db09 +0x09:  mov    %eax,0x4(%esp)
0832db0d +0x0d:  mov    0x8(%ebp),%eax
0832db10 +0x10:  mov    %eax,(%esp)
0832db13 +0x13:  call   0832db4e <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item21_isPossibleResultItemER10CEquipItem>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_isPossibleResultItem(CEquipItem&) const
0832db18 +0x18:  xor    $0x1,%eax
0832db1b +0x1b:  test   %al,%al
0832db1d +0x1d:  je     0832db26 <+0x26>
0832db1f +0x1f:  mov    $0x0,%eax
0832db24 +0x24:  jmp    0832db4b <+0x4b>
0832db26 +0x26:  mov    0xc(%ebp),%eax
0832db29 +0x29:  mov    %eax,0x4(%esp)
0832db2d +0x2d:  mov    0x8(%ebp),%eax
0832db30 +0x30:  mov    %eax,(%esp)
0832db33 +0x33:  call   0832dd1c <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item8_AddItemER10CEquipItem>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_AddItem(CEquipItem&)
0832db38 +0x38:  xor    $0x1,%eax
0832db3b +0x3b:  test   %al,%al
0832db3d +0x3d:  je     0832db46 <+0x46>
0832db3f +0x3f:  mov    $0x0,%eax
0832db44 +0x44:  jmp    0832db4b <+0x4b>
0832db46 +0x46:  mov    $0x1,%eax
0832db4b +0x4b:  leave
0832db4c +0x4c:  ret
0832db4d +0x4d:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem @ 0x832db00

/* ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem(CEquipItem&) */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::check_N_addItem
          (CCompound_ExtreamDun_Item *this,CEquipItem *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = _isPossibleResultItem(this,param_1);
  if (cVar1 == '\x01') {
    cVar1 = _AddItem(this,param_1);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
