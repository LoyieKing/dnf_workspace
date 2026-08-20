# useItem

`_ZN6CParty7useItemEP5CUserRK10Inven_Item`

`CParty::useItem(CUser*, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a7800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a7800  _ZN6CParty7useItemEP5CUserRK10Inven_Item
#           CParty::useItem(CUser*, Inven_Item const&)
# range [0x085a7800, 0x085a7827]
085a7800 +0x00:  push   %ebp
085a7801 +0x01:  mov    %esp,%ebp
085a7803 +0x03:  sub    $0x18,%esp
085a7806 +0x06:  mov    0x8(%ebp),%eax
085a7809 +0x09:  lea    0xb24(%eax),%edx
085a780f +0x0f:  mov    0x10(%ebp),%eax
085a7812 +0x12:  mov    %eax,0x8(%esp)
085a7816 +0x16:  mov    0xc(%ebp),%eax
085a7819 +0x19:  mov    %eax,0x4(%esp)
085a781d +0x1d:  mov    %edx,(%esp)
085a7820 +0x20:  call   0830dbde <_ZN13CBattle_Field9onUseItemEP5CUserRK10Inven_Item>  ; CBattle_Field::onUseItem(CUser*, Inven_Item const&)
085a7825 +0x25:  leave
085a7826 +0x26:  ret
085a7827 +0x27:  nop
```

## 反编译 C

```c
// CParty::useItem @ 0x85a7800

/* CParty::useItem(CUser*, Inven_Item const&) */

void __thiscall CParty::useItem(CParty *this,CUser *param_1,Inven_Item *param_2)

{
  CBattle_Field::onUseItem((CBattle_Field *)(this + 0xb24),param_1,param_2);
  return;
}
```
