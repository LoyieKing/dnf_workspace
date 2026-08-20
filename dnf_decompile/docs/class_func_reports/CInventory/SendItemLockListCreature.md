# SendItemLockListCreature

`_ZNK10CInventory24SendItemLockListCreatureEv`

`CInventory::SendItemLockListCreature() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fafee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fafee  _ZNK10CInventory24SendItemLockListCreatureEv
#           CInventory::SendItemLockListCreature() const
# range [0x084fafee, 0x084fb01d]
084fafee +0x00:  push   %ebp
084fafef +0x01:  mov    %esp,%ebp
084faff1 +0x03:  sub    $0x18,%esp
084faff4 +0x06:  mov    0x8(%ebp),%eax
084faff7 +0x09:  mov    0x6e4(%eax),%eax
084faffd +0x0f:  movl   $0x7,0xc(%esp)
084fb005 +0x17:  movl   $0xf2,0x8(%esp)
084fb00d +0x1f:  mov    %eax,0x4(%esp)
084fb011 +0x23:  mov    0x8(%ebp),%eax
084fb014 +0x26:  mov    %eax,(%esp)
084fb017 +0x29:  call   084fae0a <_ZNK10CInventory16SendItemLockListEPK10Inven_Itemi14ENUM_ITEMSPACE>  ; CInventory::SendItemLockList(Inven_Item const*, int, ENUM_ITEMSPACE) const
084fb01c +0x2e:  leave
084fb01d +0x2f:  ret
```

## 反编译 C

```c
// CInventory::SendItemLockListCreature @ 0x84fafee

/* CInventory::SendItemLockListCreature() const */

void __thiscall CInventory::SendItemLockListCreature(CInventory *this)

{
  SendItemLockList(this,*(undefined4 *)(this + 0x6e4),0xf2,7);
  return;
}
```
