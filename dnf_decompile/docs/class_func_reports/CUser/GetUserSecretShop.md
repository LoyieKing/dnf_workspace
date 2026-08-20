# GetUserSecretShop

`_ZN5CUser17GetUserSecretShopEv`

`CUser::GetUserSecretShop()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086885d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086885d4  _ZN5CUser17GetUserSecretShopEv
#           CUser::GetUserSecretShop()
# range [0x086885d4, 0x08688609]
086885d4 +0x00:  push   %ebp
086885d5 +0x01:  mov    %esp,%ebp
086885d7 +0x03:  sub    $0x28,%esp
086885da +0x06:  mov    0x8(%ebp),%eax
086885dd +0x09:  mov    %eax,(%esp)
086885e0 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086885e5 +0x11:  mov    %eax,-0xc(%ebp)
086885e8 +0x14:  cmpl   $0x0,-0xc(%ebp)
086885ec +0x18:  je     08688602 <+0x2e>
086885ee +0x1a:  mov    0x8(%ebp),%eax
086885f1 +0x1d:  mov    %eax,0x4(%esp)
086885f5 +0x21:  mov    -0xc(%ebp),%eax
086885f8 +0x24:  mov    %eax,(%esp)
086885fb +0x27:  call   085b9e80 <_ZN6CParty17GetUserSecretShopEP5CUser>  ; CParty::GetUserSecretShop(CUser*)
08688600 +0x2c:  jmp    08688607 <+0x33>
08688602 +0x2e:  mov    $0x0,%eax
08688607 +0x33:  leave
08688608 +0x34:  ret
08688609 +0x35:  nop
```

## 反编译 C

```c
// CUser::GetUserSecretShop @ 0x86885d4

/* CUser::GetUserSecretShop() */

undefined4 __thiscall CUser::GetUserSecretShop(CUser *this)

{
  CParty *this_00;
  undefined4 uVar1;
  
  this_00 = (CParty *)GetParty(this);
  if (this_00 == (CParty *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CParty::GetUserSecretShop(this_00,this);
  }
  return uVar1;
}
```
