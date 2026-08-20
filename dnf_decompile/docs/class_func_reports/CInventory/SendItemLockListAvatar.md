# SendItemLockListAvatar

`_ZNK10CInventory22SendItemLockListAvatarEv`

`CInventory::SendItemLockListAvatar() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fafbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fafbe  _ZNK10CInventory22SendItemLockListAvatarEv
#           CInventory::SendItemLockListAvatar() const
# range [0x084fafbe, 0x084fafed]
084fafbe +0x00:  push   %ebp
084fafbf +0x01:  mov    %esp,%ebp
084fafc1 +0x03:  sub    $0x18,%esp
084fafc4 +0x06:  mov    0x8(%ebp),%eax
084fafc7 +0x09:  mov    0x654(%eax),%eax
084fafcd +0x0f:  movl   $0x1,0xc(%esp)
084fafd5 +0x17:  movl   $0x69,0x8(%esp)
084fafdd +0x1f:  mov    %eax,0x4(%esp)
084fafe1 +0x23:  mov    0x8(%ebp),%eax
084fafe4 +0x26:  mov    %eax,(%esp)
084fafe7 +0x29:  call   084fae0a <_ZNK10CInventory16SendItemLockListEPK10Inven_Itemi14ENUM_ITEMSPACE>  ; CInventory::SendItemLockList(Inven_Item const*, int, ENUM_ITEMSPACE) const
084fafec +0x2e:  leave
084fafed +0x2f:  ret
```

## 反编译 C

```c
// CInventory::SendItemLockListAvatar @ 0x84fafbe

/* CInventory::SendItemLockListAvatar() const */

void __thiscall CInventory::SendItemLockListAvatar(CInventory *this)

{
  SendItemLockList(this,*(undefined4 *)(this + 0x654),0x69,1);
  return;
}
```
