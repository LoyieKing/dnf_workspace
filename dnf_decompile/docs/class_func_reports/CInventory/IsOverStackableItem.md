# IsOverStackableItem

`_ZN10CInventory19IsOverStackableItemEih`

`CInventory::IsOverStackableItem(int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a082  _ZN10CInventory19IsOverStackableItemEih
#           CInventory::IsOverStackableItem(int, unsigned char)
# range [0x0850a082, 0x0850a095]
0850a082 +0x00:  push   %ebp
0850a083 +0x01:  mov    %esp,%ebp
0850a085 +0x03:  sub    $0x4,%esp
0850a088 +0x06:  mov    0xc(%ebp),%eax
0850a08b +0x09:  mov    %al,-0x4(%ebp)
0850a08e +0x0c:  mov    $0x1,%eax
0850a093 +0x11:  leave
0850a094 +0x12:  ret
0850a095 +0x13:  nop
```

## 反编译 C

```c
// CInventory::IsOverStackableItem @ 0x850a082

/* CInventory::IsOverStackableItem(int, unsigned char) */

undefined4 CInventory::IsOverStackableItem(int param_1,uchar param_2)

{
  return 1;
}
```
