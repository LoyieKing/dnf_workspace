# RemoveFPItem

`_ZN10CInventory12RemoveFPItemEv`

`CInventory::RemoveFPItem()`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a392` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a392  _ZN10CInventory12RemoveFPItemEv
#           CInventory::RemoveFPItem()
# range [0x0850a392, 0x0850a3b5]
0850a392 +0x00:  push   %ebp
0850a393 +0x01:  mov    %esp,%ebp
0850a395 +0x03:  sub    $0x18,%esp
0850a398 +0x06:  mov    0x8(%ebp),%eax
0850a39b +0x09:  mov    0x650(%eax),%eax
0850a3a1 +0x0f:  mov    0x8(%ebp),%edx
0850a3a4 +0x12:  add    $0x1c,%edx
0850a3a7 +0x15:  mov    %eax,0x4(%esp)
0850a3ab +0x19:  mov    %edx,(%esp)
0850a3ae +0x1c:  call   0850a2bc <_ZN10CInventory12RemoveFPItemEP10Inven_ItemS1_>  ; CInventory::RemoveFPItem(Inven_Item*, Inven_Item*)
0850a3b3 +0x21:  leave
0850a3b4 +0x22:  ret
0850a3b5 +0x23:  nop
```

## 反编译 C

```c
// CInventory::RemoveFPItem @ 0x850a392

/* CInventory::RemoveFPItem() */

void __thiscall CInventory::RemoveFPItem(CInventory *this)

{
  RemoveFPItem((Inven_Item *)(this + 0x1c),*(Inven_Item **)(this + 0x650));
  return;
}
```
