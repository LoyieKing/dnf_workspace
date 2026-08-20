# dispatch_sig

`_ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci`

`Inter_AddGuildFundResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AddGuildFundResult` | `0x084e34ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e34ba  _ZN24Inter_AddGuildFundResult12dispatch_sigEP5CUserPci
#           Inter_AddGuildFundResult::dispatch_sig(CUser*, char*, int)
# range [0x084e34ba, 0x084e3589]
084e34ba +0x00:  push   %ebp
084e34bb +0x01:  mov    %esp,%ebp
084e34bd +0x03:  push   %ebx
084e34be +0x04:  sub    $0x34,%esp
084e34c1 +0x07:  mov    0x10(%ebp),%eax
084e34c4 +0x0a:  mov    %eax,-0xc(%ebp)
084e34c7 +0x0d:  mov    0xc(%ebp),%eax
084e34ca +0x10:  mov    %eax,(%esp)
084e34cd +0x13:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e34d2 +0x18:  cmp    $0x2,%eax
084e34d5 +0x1b:  setle  %al
084e34d8 +0x1e:  test   %al,%al
084e34da +0x20:  je     084e34e6 <+0x2c>
084e34dc +0x22:  mov    $0x0,%eax
084e34e1 +0x27:  jmp    084e3584 <+0xca>
084e34e6 +0x2c:  mov    -0xc(%ebp),%eax
084e34e9 +0x2f:  mov    0xb(%eax),%ebx
084e34ec +0x32:  mov    0xc(%ebp),%eax
084e34ef +0x35:  mov    %eax,(%esp)
084e34f2 +0x38:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e34f7 +0x3d:  cmp    %eax,%ebx
084e34f9 +0x3f:  setne  %al
084e34fc +0x42:  test   %al,%al
084e34fe +0x44:  je     084e3507 <+0x4d>
084e3500 +0x46:  mov    $0x0,%eax
084e3505 +0x4b:  jmp    084e3584 <+0xca>
084e3507 +0x4d:  mov    -0xc(%ebp),%eax
084e350a +0x50:  movzbl 0xa(%eax),%eax
084e350e +0x54:  test   %al,%al
084e3510 +0x56:  je     084e356c <+0xb2>
084e3512 +0x58:  mov    -0xc(%ebp),%eax
084e3515 +0x5b:  mov    0x13(%eax),%eax
084e3518 +0x5e:  mov    %eax,%ebx
084e351a +0x60:  mov    0xc(%ebp),%eax
084e351d +0x63:  mov    %eax,(%esp)
084e3520 +0x66:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084e3525 +0x6b:  movl   $0x0,0x10(%esp)
084e352d +0x73:  movl   $0x1,0xc(%esp)
084e3535 +0x7b:  movl   $0x1d,0x8(%esp)
084e353d +0x83:  mov    %ebx,0x4(%esp)
084e3541 +0x87:  mov    %eax,(%esp)
084e3544 +0x8a:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084e3549 +0x8f:  mov    -0xc(%ebp),%eax
084e354c +0x92:  movzbl 0xa(%eax),%eax
084e3550 +0x96:  movzbl %al,%eax
084e3553 +0x99:  mov    %eax,0x8(%esp)
084e3557 +0x9d:  movl   $0x15b,0x4(%esp)
084e355f +0xa5:  mov    0xc(%ebp),%eax
084e3562 +0xa8:  mov    %eax,(%esp)
084e3565 +0xab:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e356a +0xb0:  jmp    084e357f <+0xc5>
084e356c +0xb2:  movl   $0x15b,0x4(%esp)
084e3574 +0xba:  mov    0xc(%ebp),%eax
084e3577 +0xbd:  mov    %eax,(%esp)
084e357a +0xc0:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
084e357f +0xc5:  mov    $0x0,%eax
084e3584 +0xca:  add    $0x34,%esp
084e3587 +0xcd:  pop    %ebx
084e3588 +0xce:  pop    %ebp
084e3589 +0xcf:  ret
```

## 反编译 C

```c
// Inter_AddGuildFundResult::dispatch_sig @ 0x84e34ba

/* Inter_AddGuildFundResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AddGuildFundResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar2) &&
     (iVar2 = *(int *)(param_3 + 0xb),
     iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 == iVar3)) {
    if (*(char *)(param_3 + 10) == '\0') {
      CUser::SendCmdOkPacket((CUser *)param_2,0x15b);
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 0x13);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::gain_money(pCVar4,uVar1,0x1d,1,0);
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15b,*(undefined1 *)(param_3 + 10));
    }
  }
  return 0;
}
```
