# SendSecretShopItemList

`_ZN5CUser22SendSecretShopItemListEv`

`CUser::SendSecretShopItemList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868860a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868860a  _ZN5CUser22SendSecretShopItemListEv
#           CUser::SendSecretShopItemList()
# range [0x0868860a, 0x08688637]
0868860a +0x00:  push   %ebp
0868860b +0x01:  mov    %esp,%ebp
0868860d +0x03:  sub    $0x28,%esp
08688610 +0x06:  mov    0x8(%ebp),%eax
08688613 +0x09:  mov    %eax,(%esp)
08688616 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868861b +0x11:  mov    %eax,-0xc(%ebp)
0868861e +0x14:  cmpl   $0x0,-0xc(%ebp)
08688622 +0x18:  je     08688636 <+0x2c>
08688624 +0x1a:  mov    0x8(%ebp),%eax
08688627 +0x1d:  mov    %eax,0x4(%esp)
0868862b +0x21:  mov    -0xc(%ebp),%eax
0868862e +0x24:  mov    %eax,(%esp)
08688631 +0x27:  call   085b9ecc <_ZN6CParty22SendSecretShopItemListEP5CUser>  ; CParty::SendSecretShopItemList(CUser*)
08688636 +0x2c:  leave
08688637 +0x2d:  ret
```

## 反编译 C

```c
// CUser::SendSecretShopItemList @ 0x868860a

/* CUser::SendSecretShopItemList() */

void __thiscall CUser::SendSecretShopItemList(CUser *this)

{
  CParty *this_00;
  
  this_00 = (CParty *)GetParty(this);
  if (this_00 != (CParty *)0x0) {
    CParty::SendSecretShopItemList(this_00,this);
  }
  return;
}
```
