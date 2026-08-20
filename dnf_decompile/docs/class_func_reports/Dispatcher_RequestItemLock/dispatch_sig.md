# dispatch_sig

`_ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestItemLock` | `0x08222e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08222e00  _ZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&)
# range [0x08222e00, 0x08222f81]
08222e00 +0x000:  push   %ebp
08222e01 +0x001:  mov    %esp,%ebp
08222e03 +0x003:  sub    $0x28,%esp
08222e06 +0x006:  mov    0xc(%ebp),%eax
08222e09 +0x009:  mov    %eax,(%esp)
08222e0c +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08222e11 +0x011:  cmp    $0x2,%eax
08222e14 +0x014:  setle  %al
08222e17 +0x017:  test   %al,%al
08222e19 +0x019:  je     08222e25 <+0x25>
08222e1b +0x01b:  mov    $0x0,%eax
08222e20 +0x020:  jmp    08222f7f <+0x17f>
08222e25 +0x025:  movb   $0x0,-0x11(%ebp)
08222e29 +0x029:  movw   $0x0,-0x14(%ebp)
08222e2f +0x02f:  lea    -0x11(%ebp),%eax
08222e32 +0x032:  mov    %eax,0x4(%esp)
08222e36 +0x036:  mov    0x10(%ebp),%eax
08222e39 +0x039:  mov    %eax,(%esp)
08222e3c +0x03c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08222e41 +0x041:  xor    $0x1,%eax
08222e44 +0x044:  test   %al,%al
08222e46 +0x046:  je     08222e71 <+0x71>
08222e48 +0x048:  movl   $0x0,0xc(%esp)
08222e50 +0x050:  movl   $0x0,0x8(%esp)
08222e58 +0x058:  movl   $&_ZZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222e60 +0x060:  movl   $0xdd26,(%esp)
08222e67 +0x067:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08222e6c +0x06c:  jmp    08222f7f <+0x17f>
08222e71 +0x071:  lea    -0x14(%ebp),%eax
08222e74 +0x074:  mov    %eax,0x4(%esp)
08222e78 +0x078:  mov    0x10(%ebp),%eax
08222e7b +0x07b:  mov    %eax,(%esp)
08222e7e +0x07e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08222e83 +0x083:  xor    $0x1,%eax
08222e86 +0x086:  test   %al,%al
08222e88 +0x088:  je     08222eb3 <+0xb3>
08222e8a +0x08a:  movl   $0x0,0xc(%esp)
08222e92 +0x092:  movl   $0x0,0x8(%esp)
08222e9a +0x09a:  movl   $&_ZZN26Dispatcher_RequestItemLock12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222ea2 +0x0a2:  movl   $0xdd27,(%esp)
08222ea9 +0x0a9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08222eae +0x0ae:  jmp    08222f7f <+0x17f>
08222eb3 +0x0b3:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08222eb8 +0x0b8:  movl   $0x17,0x8(%esp)
08222ec0 +0x0c0:  mov    0xc(%ebp),%edx
08222ec3 +0x0c3:  mov    %edx,0x4(%esp)
08222ec7 +0x0c7:  mov    %eax,(%esp)
08222eca +0x0ca:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08222ecf +0x0cf:  mov    %eax,-0x10(%ebp)
08222ed2 +0x0d2:  cmpl   $0x0,-0x10(%ebp)
08222ed6 +0x0d6:  je     08222eff <+0xff>
08222ed8 +0x0d8:  mov    -0x10(%ebp),%eax
08222edb +0x0db:  movzbl %al,%eax
08222ede +0x0de:  mov    %eax,0x8(%esp)
08222ee2 +0x0e2:  movl   $0x10f,0x4(%esp)
08222eea +0x0ea:  mov    0xc(%ebp),%eax
08222eed +0x0ed:  mov    %eax,(%esp)
08222ef0 +0x0f0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222ef5 +0x0f5:  mov    $0x0,%eax
08222efa +0x0fa:  jmp    08222f7f <+0x17f>
08222eff +0x0ff:  movl   $0x0,-0xc(%ebp)
08222f06 +0x106:  movzwl -0x14(%ebp),%eax
08222f0a +0x10a:  movswl %ax,%edx
08222f0d +0x10d:  movzbl -0x11(%ebp),%eax
08222f11 +0x111:  movsbl %al,%eax
08222f14 +0x114:  mov    %edx,0x8(%esp)
08222f18 +0x118:  mov    %eax,0x4(%esp)
08222f1c +0x11c:  mov    0xc(%ebp),%eax
08222f1f +0x11f:  mov    %eax,(%esp)
08222f22 +0x122:  call   08646a9c <_ZNK5CUser14IsAbleItemLockEii>  ; CUser::IsAbleItemLock(int, int) const
08222f27 +0x127:  mov    %eax,-0xc(%ebp)
08222f2a +0x12a:  cmpl   $0x0,-0xc(%ebp)
08222f2e +0x12e:  setne  %al
08222f31 +0x131:  test   %al,%al
08222f33 +0x133:  je     08222f59 <+0x159>
08222f35 +0x135:  mov    -0xc(%ebp),%eax
08222f38 +0x138:  movzbl %al,%eax
08222f3b +0x13b:  mov    %eax,0x8(%esp)
08222f3f +0x13f:  movl   $0x10f,0x4(%esp)
08222f47 +0x147:  mov    0xc(%ebp),%eax
08222f4a +0x14a:  mov    %eax,(%esp)
08222f4d +0x14d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08222f52 +0x152:  mov    $0x0,%eax
08222f57 +0x157:  jmp    08222f7f <+0x17f>
08222f59 +0x159:  movzwl -0x14(%ebp),%eax
08222f5d +0x15d:  movswl %ax,%edx
08222f60 +0x160:  movzbl -0x11(%ebp),%eax
08222f64 +0x164:  movsbl %al,%eax
08222f67 +0x167:  mov    %edx,0x8(%esp)
08222f6b +0x16b:  mov    %eax,0x4(%esp)
08222f6f +0x16f:  mov    0xc(%ebp),%eax
08222f72 +0x172:  mov    %eax,(%esp)
08222f75 +0x175:  call   08646d4a <_ZN5CUser10DoItemLockEii>  ; CUser::DoItemLock(int, int)
08222f7a +0x17a:  mov    $0x0,%eax
08222f7f +0x17f:  leave
08222f80 +0x180:  ret
08222f81 +0x181:  nop
```

## 反编译 C

```c
// Dispatcher_RequestItemLock::dispatch_sig @ 0x8222e00

/* Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestItemLock::dispatch_sig
          (Dispatcher_RequestItemLock *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short local_18;
  char local_15;
  uint local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_15 = '\0';
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_15);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_18);
      if (cVar1 == '\x01') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x17);
        if (local_14 == 0) {
          local_10 = 0;
          local_10 = CUser::IsAbleItemLock(param_1,(int)local_15,(int)local_18);
          if (local_10 == 0) {
            CUser::DoItemLock(param_1,(int)local_15,(int)local_18);
            uVar3 = 0;
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x10f,local_10 & 0xff);
            uVar3 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x10f,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xdd27,
                         "virtual int Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xdd26,
                       "virtual int Dispatcher_RequestItemLock::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar3;
}
```
