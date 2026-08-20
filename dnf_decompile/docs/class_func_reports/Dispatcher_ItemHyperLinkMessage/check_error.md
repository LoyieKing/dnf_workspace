# check_error

`_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ItemHyperLinkMessage::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemHyperLinkMessage` | `0x081da514` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081da514  _ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ItemHyperLinkMessage::check_error(CUser*, MSG_BASE&)
# range [0x081da514, 0x081da583]
081da514 +0x00:  push   %ebp
081da515 +0x01:  mov    %esp,%ebp
081da517 +0x03:  sub    $0x28,%esp
081da51a +0x06:  cmpl   $0x0,0xc(%ebp)
081da51e +0x0a:  jne    081da527 <+0x13>
081da520 +0x0c:  mov    $0xffffffff,%eax
081da525 +0x11:  jmp    081da581 <+0x6d>
081da527 +0x13:  mov    0xc(%ebp),%eax
081da52a +0x16:  mov    %eax,(%esp)
081da52d +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081da532 +0x1e:  cmp    $0x2,%eax
081da535 +0x21:  setle  %al
081da538 +0x24:  test   %al,%al
081da53a +0x26:  je     081da543 <+0x2f>
081da53c +0x28:  mov    $0xffffffff,%eax
081da541 +0x2d:  jmp    081da581 <+0x6d>
081da543 +0x2f:  mov    0x10(%ebp),%eax
081da546 +0x32:  mov    %eax,-0xc(%ebp)
081da549 +0x35:  mov    -0xc(%ebp),%eax
081da54c +0x38:  movzbl 0xd(%eax),%eax
081da550 +0x3c:  cmp    $0x24,%al
081da552 +0x3e:  je     081da575 <+0x61>
081da554 +0x40:  mov    -0xc(%ebp),%eax
081da557 +0x43:  movzbl 0xd(%eax),%eax
081da55b +0x47:  cmp    $0x25,%al
081da55d +0x49:  je     081da575 <+0x61>
081da55f +0x4b:  mov    -0xc(%ebp),%eax
081da562 +0x4e:  movzbl 0xd(%eax),%eax
081da566 +0x52:  cmp    $0x21,%al
081da568 +0x54:  je     081da575 <+0x61>
081da56a +0x56:  mov    -0xc(%ebp),%eax
081da56d +0x59:  movzbl 0xd(%eax),%eax
081da571 +0x5d:  cmp    $0x7,%al
081da573 +0x5f:  jne    081da57c <+0x68>
081da575 +0x61:  mov    $0xffffffff,%eax
081da57a +0x66:  jmp    081da581 <+0x6d>
081da57c +0x68:  mov    $0x0,%eax
081da581 +0x6d:  leave
081da582 +0x6e:  ret
081da583 +0x6f:  nop
```

## 反编译 C

```c
// Dispatcher_ItemHyperLinkMessage::check_error @ 0x81da514

/* Dispatcher_ItemHyperLinkMessage::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ItemHyperLinkMessage::check_error
          (Dispatcher_ItemHyperLinkMessage *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else if ((((param_2[0xd] == (MSG_BASE)0x24) || (param_2[0xd] == (MSG_BASE)0x25)) ||
             (param_2[0xd] == (MSG_BASE)0x21)) || (param_2[0xd] == (MSG_BASE)0x7)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
