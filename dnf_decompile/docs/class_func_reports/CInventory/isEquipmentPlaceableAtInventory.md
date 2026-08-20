# isEquipmentPlaceableAtInventory

`_ZN10CInventory31isEquipmentPlaceableAtInventoryEi`

`CInventory::isEquipmentPlaceableAtInventory(int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08500354` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08500354  _ZN10CInventory31isEquipmentPlaceableAtInventoryEi
#           CInventory::isEquipmentPlaceableAtInventory(int)
# range [0x08500354, 0x08500383]
08500354 +0x00:  push   %ebp
08500355 +0x01:  mov    %esp,%ebp
08500357 +0x03:  cmpl   $0x2,0x8(%ebp)
0850035b +0x07:  jle    0850036a <+0x16>
0850035d +0x09:  cmpl   $0x8,0x8(%ebp)
08500361 +0x0d:  jg     0850036a <+0x16>
08500363 +0x0f:  mov    $0x1,%eax
08500368 +0x14:  jmp    08500382 <+0x2e>
0850036a +0x16:  cmpl   $0x8,0x8(%ebp)
0850036e +0x1a:  jle    0850037d <+0x29>
08500370 +0x1c:  cmpl   $0x38,0x8(%ebp)
08500374 +0x20:  jg     0850037d <+0x29>
08500376 +0x22:  mov    $0x1,%eax
0850037b +0x27:  jmp    08500382 <+0x2e>
0850037d +0x29:  mov    $0x0,%eax
08500382 +0x2e:  pop    %ebp
08500383 +0x2f:  ret
```

## 反编译 C

```c
// CInventory::isEquipmentPlaceableAtInventory @ 0x8500354

/* CInventory::isEquipmentPlaceableAtInventory(int) */

undefined4 CInventory::isEquipmentPlaceableAtInventory(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 3) || (8 < param_1)) {
    if ((param_1 < 9) || (0x38 < param_1)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
