# process

`_ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SecretShopOpenClose::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopOpenClose` | `0x081d28b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d28b4  _ZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SecretShopOpenClose::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d28b4, 0x081d2991]
081d28b4 +0x00:  push   %ebp
081d28b5 +0x01:  mov    %esp,%ebp
081d28b7 +0x03:  push   %ebx
081d28b8 +0x04:  sub    $0x24,%esp
081d28bb +0x07:  mov    0x14(%ebp),%eax
081d28be +0x0a:  mov    %eax,-0x14(%ebp)
081d28c1 +0x0d:  mov    0x14(%ebp),%eax
081d28c4 +0x10:  mov    %eax,0xc(%esp)
081d28c8 +0x14:  mov    0x10(%ebp),%eax
081d28cb +0x17:  mov    %eax,0x8(%esp)
081d28cf +0x1b:  mov    0xc(%ebp),%eax
081d28d2 +0x1e:  mov    %eax,0x4(%esp)
081d28d6 +0x22:  mov    0x8(%ebp),%eax
081d28d9 +0x25:  mov    %eax,(%esp)
081d28dc +0x28:  call   081d288a <_ZN30Dispatcher_SecretShopOpenClose11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_SecretShopOpenClose::check_error(CUser*, MSG_BASE&, ParamBase&)
081d28e1 +0x2d:  mov    %eax,%edx
081d28e3 +0x2f:  mov    -0x14(%ebp),%eax
081d28e6 +0x32:  mov    %edx,0x4(%eax)
081d28e9 +0x35:  mov    -0x14(%ebp),%eax
081d28ec +0x38:  mov    0x4(%eax),%eax
081d28ef +0x3b:  test   %eax,%eax
081d28f1 +0x3d:  jle    081d28fd <+0x49>
081d28f3 +0x3f:  mov    $0x0,%eax
081d28f8 +0x44:  jmp    081d298c <+0xd8>
081d28fd +0x49:  mov    -0x14(%ebp),%eax
081d2900 +0x4c:  mov    0x4(%eax),%eax
081d2903 +0x4f:  test   %eax,%eax
081d2905 +0x51:  jns    081d292f <+0x7b>
081d2907 +0x53:  mov    -0x14(%ebp),%eax
081d290a +0x56:  mov    0x4(%eax),%eax
081d290d +0x59:  movl   $0x0,0xc(%esp)
081d2915 +0x61:  mov    %eax,0x8(%esp)
081d2919 +0x65:  movl   $&_ZZN30Dispatcher_SecretShopOpenClose7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d2921 +0x6d:  movl   $0x2fdc,(%esp)
081d2928 +0x74:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d292d +0x79:  jmp    081d298c <+0xd8>
081d292f +0x7b:  mov    0x10(%ebp),%eax
081d2932 +0x7e:  mov    %eax,-0x10(%ebp)
081d2935 +0x81:  mov    0xc(%ebp),%eax
081d2938 +0x84:  mov    %eax,(%esp)
081d293b +0x87:  call   086885a6 <_ZN5CUser17GetSecretShopDataEv>  ; CUser::GetSecretShopData()
081d2940 +0x8c:  mov    %eax,-0xc(%ebp)
081d2943 +0x8f:  cmpl   $0x0,-0xc(%ebp)
081d2947 +0x93:  jne    081d295a <+0xa6>
081d2949 +0x95:  mov    -0x14(%ebp),%eax
081d294c +0x98:  movl   $0x7fffffff,0x4(%eax)
081d2953 +0x9f:  mov    $0x0,%eax
081d2958 +0xa4:  jmp    081d298c <+0xd8>
081d295a +0xa6:  mov    -0x10(%ebp),%eax
081d295d +0xa9:  movzbl 0xd(%eax),%eax
081d2961 +0xad:  test   %al,%al
081d2963 +0xaf:  setne  %al
081d2966 +0xb2:  movzbl %al,%ebx
081d2969 +0xb5:  mov    0xc(%ebp),%eax
081d296c +0xb8:  mov    %eax,(%esp)
081d296f +0xbb:  call   08688638 <_ZN5CUser17GetUserPosInPartyEv>  ; CUser::GetUserPosInParty()
081d2974 +0xc0:  mov    %ebx,0x8(%esp)
081d2978 +0xc4:  mov    %eax,0x4(%esp)
081d297c +0xc8:  mov    -0xc(%ebp),%eax
081d297f +0xcb:  mov    %eax,(%esp)
081d2982 +0xce:  call   08ab1532 <_ZN10secretshop16SECRET_SHOP_DATA9SetBuyingEib>  ; secretshop::SECRET_SHOP_DATA::SetBuying(int, bool)
081d2987 +0xd3:  mov    $0x0,%eax
081d298c +0xd8:  add    $0x24,%esp
081d298f +0xdb:  pop    %ebx
081d2990 +0xdc:  pop    %ebp
081d2991 +0xdd:  ret
```

## 反编译 C

```c
// Dispatcher_SecretShopOpenClose::process @ 0x81d28b4

/* Dispatcher_SecretShopOpenClose::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SecretShopOpenClose::process
          (Dispatcher_SecretShopOpenClose *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  SECRET_SHOP_DATA *this_00;
  int iVar3;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x2fdc,
                       "virtual int Dispatcher_SecretShopOpenClose::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (SECRET_SHOP_DATA *)CUser::GetSecretShopData(param_1);
      if (this_00 == (SECRET_SHOP_DATA *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x7fffffff;
        uVar2 = 0;
      }
      else {
        MVar1 = param_2[0xd];
        iVar3 = CUser::GetUserPosInParty(param_1);
        secretshop::SECRET_SHOP_DATA::SetBuying(this_00,iVar3,MVar1 != (MSG_BASE)0x0);
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
