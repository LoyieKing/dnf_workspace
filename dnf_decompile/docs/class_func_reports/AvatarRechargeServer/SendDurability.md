# SendDurability

`_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci`

`AvatarRechargeServer::SendDurability(CUser*, char, short, char, int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190416` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190416  _ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci
#           AvatarRechargeServer::SendDurability(CUser*, char, short, char, int)
# range [0x08190416, 0x08190499]
08190416 +0x00:  push   %ebp
08190417 +0x01:  mov    %esp,%ebp
08190419 +0x03:  sub    $0x38,%esp
0819041c +0x06:  mov    0x10(%ebp),%ecx
0819041f +0x09:  mov    0x14(%ebp),%edx
08190422 +0x0c:  mov    0x18(%ebp),%eax
08190425 +0x0f:  mov    %cl,-0x1c(%ebp)
08190428 +0x12:  mov    %dx,-0x20(%ebp)
0819042c +0x16:  mov    %al,-0x24(%ebp)
0819042f +0x19:  cmpl   $0x0,0xc(%ebp)
08190433 +0x1d:  je     08190494 <+0x7e>
08190435 +0x1f:  mov    0xc(%ebp),%eax
08190438 +0x22:  mov    %eax,(%esp)
0819043b +0x25:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08190440 +0x2a:  cmp    $0x5,%eax
08190443 +0x2d:  setne  %al
08190446 +0x30:  test   %al,%al
08190448 +0x32:  jne    08190497 <+0x81>
0819044a +0x34:  cmpb   $0x1,-0x1c(%ebp)
0819044e +0x38:  jne    08190498 <+0x82>
08190450 +0x3a:  cmpb   $0x3,-0x24(%ebp)
08190454 +0x3e:  jne    08190498 <+0x82>
08190456 +0x40:  movl   $0x1,-0xc(%ebp)
0819045d +0x47:  mov    0xc(%ebp),%eax
08190460 +0x4a:  mov    %eax,(%esp)
08190463 +0x4d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08190468 +0x52:  test   %eax,%eax
0819046a +0x54:  setne  %al
0819046d +0x57:  test   %al,%al
0819046f +0x59:  je     08190478 <+0x62>
08190471 +0x5b:  movl   $0x2,-0xc(%ebp)
08190478 +0x62:  mov    0x1c(%ebp),%eax
0819047b +0x65:  cwtl
0819047c +0x66:  mov    %eax,0x8(%esp)
08190480 +0x6a:  mov    0xc(%ebp),%eax
08190483 +0x6d:  mov    %eax,0x4(%esp)
08190487 +0x71:  mov    -0xc(%ebp),%eax
0819048a +0x74:  mov    %eax,(%esp)
0819048d +0x77:  call   081913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>  ; AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short)
08190492 +0x7c:  jmp    08190498 <+0x82>
08190494 +0x7e:  nop
08190495 +0x7f:  jmp    08190498 <+0x82>
08190497 +0x81:  nop
08190498 +0x82:  leave
08190499 +0x83:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::SendDurability @ 0x8190416

/* AvatarRechargeServer::SendDurability(CUser*, char, short, char, int) */

void __thiscall
AvatarRechargeServer::SendDurability
          (AvatarRechargeServer *this,CUser *param_1,char param_2,short param_3,char param_4,
          int param_5)

{
  int iVar1;
  undefined4 local_10;
  
  if ((((param_1 != (CUser *)0x0) && (iVar1 = CUser::get_state(param_1), iVar1 == 5)) &&
      (param_2 == '\x01')) && (param_4 == '\x03')) {
    local_10 = 1;
    iVar1 = CUser::GetParty(param_1);
    if (iVar1 != 0) {
      local_10 = 2;
    }
    UpdateAvatarEndurance(local_10,param_1,(int)(short)param_5);
  }
  return;
}
```
