# RemoveKCItem

`_ZN10CInventory12RemoveKCItemEv`

`CInventory::RemoveKCItem()`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a298  _ZN10CInventory12RemoveKCItemEv
#           CInventory::RemoveKCItem()
# range [0x0850a298, 0x0850a2bb]
0850a298 +0x00:  push   %ebp
0850a299 +0x01:  mov    %esp,%ebp
0850a29b +0x03:  sub    $0x18,%esp
0850a29e +0x06:  mov    0x8(%ebp),%eax
0850a2a1 +0x09:  mov    0x650(%eax),%eax
0850a2a7 +0x0f:  mov    0x8(%ebp),%edx
0850a2aa +0x12:  add    $0x1c,%edx
0850a2ad +0x15:  mov    %eax,0x4(%esp)
0850a2b1 +0x19:  mov    %edx,(%esp)
0850a2b4 +0x1c:  call   0850a096 <_ZN10CInventory12RemoveKCItemEP10Inven_ItemS1_>  ; CInventory::RemoveKCItem(Inven_Item*, Inven_Item*)
0850a2b9 +0x21:  leave
0850a2ba +0x22:  ret
0850a2bb +0x23:  nop
```

## 反编译 C

```c
// CInventory::RemoveKCItem @ 0x850a298

/* CInventory::RemoveKCItem() */

void __thiscall CInventory::RemoveKCItem(CInventory *this)

{
  RemoveKCItem((Inven_Item *)(this + 0x1c),*(Inven_Item **)(this + 0x650));
  return;
}
```
