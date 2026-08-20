# SendSecretShopItemList

`_ZN6CParty22SendSecretShopItemListEP5CUser`

`CParty::SendSecretShopItemList(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9ecc  _ZN6CParty22SendSecretShopItemListEP5CUser
#           CParty::SendSecretShopItemList(CUser*)
# range [0x085b9ecc, 0x085b9f27]
085b9ecc +0x00:  push   %ebp
085b9ecd +0x01:  mov    %esp,%ebp
085b9ecf +0x03:  sub    $0x28,%esp
085b9ed2 +0x06:  mov    0xc(%ebp),%eax
085b9ed5 +0x09:  mov    %eax,0x4(%esp)
085b9ed9 +0x0d:  mov    0x8(%ebp),%eax
085b9edc +0x10:  mov    %eax,(%esp)
085b9edf +0x13:  call   085b9e20 <_ZN6CParty15GetUserPositionEP5CUser>  ; CParty::GetUserPosition(CUser*)
085b9ee4 +0x18:  mov    %eax,-0xc(%ebp)
085b9ee7 +0x1b:  cmpl   $0x0,-0xc(%ebp)
085b9eeb +0x1f:  js     085b9f26 <+0x5a>
085b9eed +0x21:  cmpl   $0x3,-0xc(%ebp)
085b9ef1 +0x25:  jg     085b9f26 <+0x5a>
085b9ef3 +0x27:  mov    -0xc(%ebp),%eax
085b9ef6 +0x2a:  shl    $0x2,%eax
085b9ef9 +0x2d:  lea    0x0(,%eax,8),%edx
085b9f00 +0x34:  sub    %eax,%edx
085b9f02 +0x36:  lea    0x2a0(%edx),%eax
085b9f08 +0x3c:  add    0x8(%ebp),%eax
085b9f0b +0x3f:  lea    0x8(%eax),%edx
085b9f0e +0x42:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
085b9f13 +0x47:  mov    %edx,0x8(%esp)
085b9f17 +0x4b:  mov    0xc(%ebp),%edx
085b9f1a +0x4e:  mov    %edx,0x4(%esp)
085b9f1e +0x52:  mov    %eax,(%esp)
085b9f21 +0x55:  call   085fb374 <_ZN10secretshop11CSecretShop22SendSecretShopItemListEP5CUserRSt6vectorINS_9SALE_INFOESaIS4_EE>  ; secretshop::CSecretShop::SendSecretShopItemList(CUser*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)
085b9f26 +0x5a:  leave
085b9f27 +0x5b:  ret
```

## 反编译 C

```c
// CParty::SendSecretShopItemList @ 0x85b9ecc

/* CParty::SendSecretShopItemList(CUser*) */

void __thiscall CParty::SendSecretShopItemList(CParty *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = GetUserPosition(this,param_1);
  if ((-1 < iVar1) && (iVar1 < 4)) {
    secretshop::CSecretShop::SendSecretShopItemList
              (GlobalData::s_secret_shop,param_1,(vector *)(this + iVar1 * 0x1c + 0x2a8));
  }
  return;
}
```
