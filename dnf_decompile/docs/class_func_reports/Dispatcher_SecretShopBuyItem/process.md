# process

`_ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SecretShopBuyItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopBuyItem` | `0x081d26ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d26ea  _ZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SecretShopBuyItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d26ea, 0x081d27eb]
081d26ea +0x000:  push   %ebp
081d26eb +0x001:  mov    %esp,%ebp
081d26ed +0x003:  sub    $0x38,%esp
081d26f0 +0x006:  mov    0x14(%ebp),%eax
081d26f3 +0x009:  mov    %eax,-0x18(%ebp)
081d26f6 +0x00c:  mov    0x14(%ebp),%eax
081d26f9 +0x00f:  mov    %eax,0xc(%esp)
081d26fd +0x013:  mov    0x10(%ebp),%eax
081d2700 +0x016:  mov    %eax,0x8(%esp)
081d2704 +0x01a:  mov    0xc(%ebp),%eax
081d2707 +0x01d:  mov    %eax,0x4(%esp)
081d270b +0x021:  mov    0x8(%ebp),%eax
081d270e +0x024:  mov    %eax,(%esp)
081d2711 +0x027:  call   081d26c0 <_ZN28Dispatcher_SecretShopBuyItem11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_SecretShopBuyItem::check_error(CUser*, MSG_BASE&, ParamBase&)
081d2716 +0x02c:  mov    %eax,%edx
081d2718 +0x02e:  mov    -0x18(%ebp),%eax
081d271b +0x031:  mov    %edx,0x4(%eax)
081d271e +0x034:  mov    -0x18(%ebp),%eax
081d2721 +0x037:  mov    0x4(%eax),%eax
081d2724 +0x03a:  test   %eax,%eax
081d2726 +0x03c:  jle    081d2732 <+0x48>
081d2728 +0x03e:  mov    $0x0,%eax
081d272d +0x043:  jmp    081d27e9 <+0xff>
081d2732 +0x048:  mov    -0x18(%ebp),%eax
081d2735 +0x04b:  mov    0x4(%eax),%eax
081d2738 +0x04e:  test   %eax,%eax
081d273a +0x050:  jns    081d2767 <+0x7d>
081d273c +0x052:  mov    -0x18(%ebp),%eax
081d273f +0x055:  mov    0x4(%eax),%eax
081d2742 +0x058:  movl   $0x0,0xc(%esp)
081d274a +0x060:  mov    %eax,0x8(%esp)
081d274e +0x064:  movl   $&_ZZN28Dispatcher_SecretShopBuyItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d2756 +0x06c:  movl   $0x2fa1,(%esp)
081d275d +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d2762 +0x078:  jmp    081d27e9 <+0xff>
081d2767 +0x07d:  mov    0x10(%ebp),%eax
081d276a +0x080:  mov    %eax,-0x14(%ebp)
081d276d +0x083:  mov    0xc(%ebp),%eax
081d2770 +0x086:  mov    %eax,(%esp)
081d2773 +0x089:  call   086885a6 <_ZN5CUser17GetSecretShopDataEv>  ; CUser::GetSecretShopData()
081d2778 +0x08e:  mov    %eax,-0x10(%ebp)
081d277b +0x091:  mov    0xc(%ebp),%eax
081d277e +0x094:  mov    %eax,(%esp)
081d2781 +0x097:  call   086885d4 <_ZN5CUser17GetUserSecretShopEv>  ; CUser::GetUserSecretShop()
081d2786 +0x09c:  mov    %eax,-0xc(%ebp)
081d2789 +0x09f:  cmpl   $0x0,-0x10(%ebp)
081d278d +0x0a3:  je     081d2795 <+0xab>
081d278f +0x0a5:  cmpl   $0x0,-0xc(%ebp)
081d2793 +0x0a9:  jne    081d27a6 <+0xbc>
081d2795 +0x0ab:  mov    -0x18(%ebp),%eax
081d2798 +0x0ae:  movl   $0x7fffffff,0x4(%eax)
081d279f +0x0b5:  mov    $0x0,%eax
081d27a4 +0x0ba:  jmp    081d27e9 <+0xff>
081d27a6 +0x0bc:  mov    -0x10(%ebp),%eax
081d27a9 +0x0bf:  mov    %eax,(%esp)
081d27ac +0x0c2:  call   08ab150c <_ZN10secretshop16SECRET_SHOP_DATA6IsOpenEv>  ; secretshop::SECRET_SHOP_DATA::IsOpen()
081d27b1 +0x0c7:  test   %al,%al
081d27b3 +0x0c9:  je     081d27e4 <+0xfa>
081d27b5 +0x0cb:  mov    -0x14(%ebp),%eax
081d27b8 +0x0ce:  mov    0x11(%eax),%ecx
081d27bb +0x0d1:  mov    -0x14(%ebp),%eax
081d27be +0x0d4:  mov    0xd(%eax),%edx
081d27c1 +0x0d7:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
081d27c6 +0x0dc:  mov    %ecx,0x10(%esp)
081d27ca +0x0e0:  mov    %edx,0xc(%esp)
081d27ce +0x0e4:  mov    -0xc(%ebp),%edx
081d27d1 +0x0e7:  mov    %edx,0x8(%esp)
081d27d5 +0x0eb:  mov    0xc(%ebp),%edx
081d27d8 +0x0ee:  mov    %edx,0x4(%esp)
081d27dc +0x0f2:  mov    %eax,(%esp)
081d27df +0x0f5:  call   085fb16e <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii>  ; secretshop::CSecretShop::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)
081d27e4 +0x0fa:  mov    $0x0,%eax
081d27e9 +0x0ff:  leave
081d27ea +0x100:  ret
081d27eb +0x101:  nop
```

## 反编译 C

```c
// Dispatcher_SecretShopBuyItem::process @ 0x81d26ea

/* Dispatcher_SecretShopBuyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecretShopBuyItem::process
          (Dispatcher_SecretShopBuyItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SECRET_SHOP_DATA *this_00;
  SECRET_SHOP_INFO *pSVar3;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x2fa1,
                       "virtual int Dispatcher_SecretShopBuyItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (SECRET_SHOP_DATA *)CUser::GetSecretShopData(param_1);
      pSVar3 = (SECRET_SHOP_INFO *)CUser::GetUserSecretShop(param_1);
      if ((this_00 == (SECRET_SHOP_DATA *)0x0) || (pSVar3 == (SECRET_SHOP_INFO *)0x0)) {
        *(undefined4 *)(param_3 + 4) = 0x7fffffff;
        uVar2 = 0;
      }
      else {
        cVar1 = secretshop::SECRET_SHOP_DATA::IsOpen(this_00);
        if (cVar1 != '\0') {
          secretshop::CSecretShop::BuyItem
                    (GlobalData::s_secret_shop,param_1,pSVar3,*(int *)(param_2 + 0xd),
                     *(int *)(param_2 + 0x11));
        }
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
