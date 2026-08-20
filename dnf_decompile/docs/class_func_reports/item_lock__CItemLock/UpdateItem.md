# UpdateItem

`_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item`

`item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541e4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541e4e  _ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item
#           item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*)
# range [0x08541e4e, 0x08541e9f]
08541e4e +0x00:  push   %ebp
08541e4f +0x01:  mov    %esp,%ebp
08541e51 +0x03:  sub    $0x18,%esp
08541e54 +0x06:  mov    0x10(%ebp),%eax
08541e57 +0x09:  movzbl 0x1(%eax),%eax
08541e5b +0x0d:  cmp    $0x8,%al
08541e5d +0x0f:  jne    08541e7a <+0x2c>
08541e5f +0x11:  mov    0x10(%ebp),%eax
08541e62 +0x14:  mov    %eax,0x8(%esp)
08541e66 +0x18:  mov    0xc(%ebp),%eax
08541e69 +0x1b:  mov    %eax,0x4(%esp)
08541e6d +0x1f:  mov    0x8(%ebp),%eax
08541e70 +0x22:  mov    %eax,(%esp)
08541e73 +0x25:  call   08541d42 <_ZN9item_lock9CItemLock16UpdateAvatarItemEP5CUserP10Inven_Item>  ; item_lock::CItemLock::UpdateAvatarItem(CUser*, Inven_Item*)
08541e78 +0x2a:  jmp    08541e9e <+0x50>
08541e7a +0x2c:  mov    0x10(%ebp),%eax
08541e7d +0x2f:  movzbl 0x1(%eax),%eax
08541e81 +0x33:  cmp    $0x5,%al
08541e83 +0x35:  jne    08541e9e <+0x50>
08541e85 +0x37:  mov    0x10(%ebp),%eax
08541e88 +0x3a:  mov    %eax,0x8(%esp)
08541e8c +0x3e:  mov    0xc(%ebp),%eax
08541e8f +0x41:  mov    %eax,0x4(%esp)
08541e93 +0x45:  mov    0x8(%ebp),%eax
08541e96 +0x48:  mov    %eax,(%esp)
08541e99 +0x4b:  call   08541c36 <_ZN9item_lock9CItemLock18UpdateCreatereItemEP5CUserP10Inven_Item>  ; item_lock::CItemLock::UpdateCreatereItem(CUser*, Inven_Item*)
08541e9e +0x50:  leave
08541e9f +0x51:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::UpdateItem @ 0x8541e4e

/* item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*) */

void __thiscall item_lock::CItemLock::UpdateItem(CItemLock *this,CUser *param_1,Inven_Item *param_2)

{
  if (param_2[1] == (Inven_Item)0x8) {
    UpdateAvatarItem(this,param_1,param_2);
  }
  else if (param_2[1] == (Inven_Item)0x5) {
    UpdateCreatereItem(this,param_1,param_2);
  }
  return;
}
```
