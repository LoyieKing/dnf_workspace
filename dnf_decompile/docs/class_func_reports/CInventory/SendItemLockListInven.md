# SendItemLockListInven

`_ZNK10CInventory21SendItemLockListInvenEv`

`CInventory::SendItemLockListInven() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084faf8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084faf8e  _ZNK10CInventory21SendItemLockListInvenEv
#           CInventory::SendItemLockListInven() const
# range [0x084faf8e, 0x084fafbd]
084faf8e +0x00:  push   %ebp
084faf8f +0x01:  mov    %esp,%ebp
084faf91 +0x03:  sub    $0x18,%esp
084faf94 +0x06:  mov    0x8(%ebp),%eax
084faf97 +0x09:  mov    0x650(%eax),%eax
084faf9d +0x0f:  movl   $0x0,0xc(%esp)
084fafa5 +0x17:  movl   $0x138,0x8(%esp)
084fafad +0x1f:  mov    %eax,0x4(%esp)
084fafb1 +0x23:  mov    0x8(%ebp),%eax
084fafb4 +0x26:  mov    %eax,(%esp)
084fafb7 +0x29:  call   084fae0a <_ZNK10CInventory16SendItemLockListEPK10Inven_Itemi14ENUM_ITEMSPACE>  ; CInventory::SendItemLockList(Inven_Item const*, int, ENUM_ITEMSPACE) const
084fafbc +0x2e:  leave
084fafbd +0x2f:  ret
```

## 反编译 C

```c
// CInventory::SendItemLockListInven @ 0x84faf8e

/* CInventory::SendItemLockListInven() const */

void __thiscall CInventory::SendItemLockListInven(CInventory *this)

{
  SendItemLockList(this,*(undefined4 *)(this + 0x650),0x138,0);
  return;
}
```
