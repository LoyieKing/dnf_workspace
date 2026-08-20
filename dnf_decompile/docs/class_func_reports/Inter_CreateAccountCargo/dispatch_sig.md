# dispatch_sig

`_ZN24Inter_CreateAccountCargo12dispatch_sigEP5CUserPci`

`Inter_CreateAccountCargo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CreateAccountCargo` | `0x084e23a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e23a2  _ZN24Inter_CreateAccountCargo12dispatch_sigEP5CUserPci
#           Inter_CreateAccountCargo::dispatch_sig(CUser*, char*, int)
# range [0x084e23a2, 0x084e2439]
084e23a2 +0x00:  push   %ebp
084e23a3 +0x01:  mov    %esp,%ebp
084e23a5 +0x03:  sub    $0x28,%esp
084e23a8 +0x06:  mov    0x10(%ebp),%eax
084e23ab +0x09:  mov    %eax,-0xc(%ebp)
084e23ae +0x0c:  mov    0xc(%ebp),%eax
084e23b1 +0x0f:  mov    %eax,(%esp)
084e23b4 +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e23b9 +0x17:  cmp    $0x2,%eax
084e23bc +0x1a:  setle  %al
084e23bf +0x1d:  test   %al,%al
084e23c1 +0x1f:  je     084e23ca <+0x28>
084e23c3 +0x21:  mov    $0x0,%eax
084e23c8 +0x26:  jmp    084e2438 <+0x96>
084e23ca +0x28:  mov    -0xc(%ebp),%eax
084e23cd +0x2b:  movzbl (%eax),%eax
084e23d0 +0x2e:  test   %al,%al
084e23d2 +0x30:  je     084e23fb <+0x59>
084e23d4 +0x32:  mov    -0xc(%ebp),%eax
084e23d7 +0x35:  movzbl (%eax),%eax
084e23da +0x38:  movzbl %al,%eax
084e23dd +0x3b:  mov    %eax,0x8(%esp)
084e23e1 +0x3f:  movl   $0x132,0x4(%esp)
084e23e9 +0x47:  mov    0xc(%ebp),%eax
084e23ec +0x4a:  mov    %eax,(%esp)
084e23ef +0x4d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e23f4 +0x52:  mov    $0x0,%eax
084e23f9 +0x57:  jmp    084e2438 <+0x96>
084e23fb +0x59:  mov    -0xc(%ebp),%eax
084e23fe +0x5c:  mov    0x4(%eax),%eax
084e2401 +0x5f:  mov    %eax,0xc(%esp)
084e2405 +0x63:  movl   $0x0,0x8(%esp)
084e240d +0x6b:  movl   $0x0,0x4(%esp)
084e2415 +0x73:  mov    0xc(%ebp),%eax
084e2418 +0x76:  mov    %eax,(%esp)
084e241b +0x79:  call   0867d86e <_ZN5CUser21SetAccountCargoDBDataEP10Inven_Itemjj>  ; CUser::SetAccountCargoDBData(Inven_Item*, unsigned int, unsigned int)
084e2420 +0x7e:  movl   $0x132,0x4(%esp)
084e2428 +0x86:  mov    0xc(%ebp),%eax
084e242b +0x89:  mov    %eax,(%esp)
084e242e +0x8c:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
084e2433 +0x91:  mov    $0x0,%eax
084e2438 +0x96:  leave
084e2439 +0x97:  ret
```

## 反编译 C

```c
// Inter_CreateAccountCargo::dispatch_sig @ 0x84e23a2

/* Inter_CreateAccountCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CreateAccountCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    if (*(char *)param_3 == '\0') {
      CUser::SetAccountCargoDBData((CUser *)param_2,(Inven_Item *)0x0,0,*(uint *)(param_3 + 4));
      CUser::SendCmdOkPacket((CUser *)param_2,0x132);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x132,*(undefined1 *)param_3);
    }
  }
  return 0;
}
```
