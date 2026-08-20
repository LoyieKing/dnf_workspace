# process

`_ZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_RecoverStamina::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RecoverStamina` | `0x081c3eae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3eae  _ZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_RecoverStamina::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c3eae, 0x081c3f49]
081c3eae +0x00:  push   %ebp
081c3eaf +0x01:  mov    %esp,%ebp
081c3eb1 +0x03:  sub    $0x28,%esp
081c3eb4 +0x06:  mov    0x10(%ebp),%eax
081c3eb7 +0x09:  mov    %eax,0x8(%esp)
081c3ebb +0x0d:  mov    0xc(%ebp),%eax
081c3ebe +0x10:  mov    %eax,0x4(%esp)
081c3ec2 +0x14:  mov    0x8(%ebp),%eax
081c3ec5 +0x17:  mov    %eax,(%esp)
081c3ec8 +0x1a:  call   081c3f4a <_ZN25DisPatcher_RecoverStamina11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_RecoverStamina::check_error(CUser*, MSG_BASE&)
081c3ecd +0x1f:  mov    %eax,-0x10(%ebp)
081c3ed0 +0x22:  cmpl   $0x0,-0x10(%ebp)
081c3ed4 +0x26:  jle    081c3efa <+0x4c>
081c3ed6 +0x28:  mov    -0x10(%ebp),%eax
081c3ed9 +0x2b:  movzbl %al,%eax
081c3edc +0x2e:  mov    %eax,0x8(%esp)
081c3ee0 +0x32:  movl   $0x9,0x4(%esp)
081c3ee8 +0x3a:  mov    0xc(%ebp),%eax
081c3eeb +0x3d:  mov    %eax,(%esp)
081c3eee +0x40:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c3ef3 +0x45:  mov    $0xffffffff,%eax
081c3ef8 +0x4a:  jmp    081c3f47 <+0x99>
081c3efa +0x4c:  cmpl   $0x0,-0x10(%ebp)
081c3efe +0x50:  jns    081c3f2d <+0x7f>
081c3f00 +0x52:  mov    0xc(%ebp),%eax
081c3f03 +0x55:  mov    %eax,(%esp)
081c3f06 +0x58:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c3f0b +0x5d:  mov    %eax,0xc(%esp)
081c3f0f +0x61:  movl   $0x0,0x8(%esp)
081c3f17 +0x69:  movl   $&_ZZN25DisPatcher_RecoverStamina7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c3f1f +0x71:  movl   $0xf9d,(%esp)
081c3f26 +0x78:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3f2b +0x7d:  jmp    081c3f47 <+0x99>
081c3f2d +0x7f:  mov    0x14(%ebp),%eax
081c3f30 +0x82:  mov    %eax,-0xc(%ebp)
081c3f33 +0x85:  mov    0xc(%ebp),%eax
081c3f36 +0x88:  mov    %eax,(%esp)
081c3f39 +0x8b:  call   0865798a <_ZN5CUser15serviceOfShusiaEv>  ; CUser::serviceOfShusia()
081c3f3e +0x90:  mov    -0xc(%ebp),%edx
081c3f41 +0x93:  mov    %eax,0x4(%edx)
081c3f44 +0x96:  mov    -0x10(%ebp),%eax
081c3f47 +0x99:  leave
081c3f48 +0x9a:  ret
081c3f49 +0x9b:  nop
```

## 反编译 C

```c
// DisPatcher_RecoverStamina::process @ 0x81c3eae

/* DisPatcher_RecoverStamina::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_RecoverStamina::process
          (DisPatcher_RecoverStamina *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
      uVar1 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0xf9d,
                       "virtual int DisPatcher_RecoverStamina::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,uVar1);
    }
    else {
      uVar2 = CUser::serviceOfShusia(param_1);
      *(undefined4 *)(param_3 + 4) = uVar2;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,9,uVar1 & 0xff);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
