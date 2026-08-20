# send

`_ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase`

`Dispatcher_MailBox_Open::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Open` | `0x081cc2e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc2e6  _ZN23Dispatcher_MailBox_Open4sendEP5CUserR9ParamBase
#           Dispatcher_MailBox_Open::send(CUser*, ParamBase&)
# range [0x081cc2e6, 0x081cc3d9]
081cc2e6 +0x00:  push   %ebp
081cc2e7 +0x01:  mov    %esp,%ebp
081cc2e9 +0x03:  push   %esi
081cc2ea +0x04:  push   %ebx
081cc2eb +0x05:  sub    $0x20,%esp
081cc2ee +0x08:  mov    0x10(%ebp),%eax
081cc2f1 +0x0b:  mov    %eax,-0xc(%ebp)
081cc2f4 +0x0e:  mov    -0xc(%ebp),%eax
081cc2f7 +0x11:  mov    0x4(%eax),%eax
081cc2fa +0x14:  cmp    $0x7fffffff,%eax
081cc2ff +0x19:  je     081cc3d1 <+0xeb>
081cc305 +0x1f:  mov    -0xc(%ebp),%eax
081cc308 +0x22:  mov    0x4(%eax),%eax
081cc30b +0x25:  test   %eax,%eax
081cc30d +0x27:  je     081cc334 <+0x4e>
081cc30f +0x29:  mov    -0xc(%ebp),%eax
081cc312 +0x2c:  mov    0x4(%eax),%eax
081cc315 +0x2f:  movzbl %al,%eax
081cc318 +0x32:  mov    %eax,0x8(%esp)
081cc31c +0x36:  movl   $0x63,0x4(%esp)
081cc324 +0x3e:  mov    0xc(%ebp),%eax
081cc327 +0x41:  mov    %eax,(%esp)
081cc32a +0x44:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cc32f +0x49:  jmp    081cc3d2 <+0xec>
081cc334 +0x4e:  lea    -0x18(%ebp),%eax
081cc337 +0x51:  mov    %eax,(%esp)
081cc33a +0x54:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081cc33f +0x59:  movl   $0x63,0x8(%esp)
081cc347 +0x61:  movl   $0x1,0x4(%esp)
081cc34f +0x69:  lea    -0x18(%ebp),%eax
081cc352 +0x6c:  mov    %eax,(%esp)
081cc355 +0x6f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081cc35a +0x74:  movl   $0x1,0x4(%esp)
081cc362 +0x7c:  lea    -0x18(%ebp),%eax
081cc365 +0x7f:  mov    %eax,(%esp)
081cc368 +0x82:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081cc36d +0x87:  mov    -0xc(%ebp),%eax
081cc370 +0x8a:  mov    0x8(%eax),%eax
081cc373 +0x8d:  mov    %eax,0x4(%esp)
081cc377 +0x91:  lea    -0x18(%ebp),%eax
081cc37a +0x94:  mov    %eax,(%esp)
081cc37d +0x97:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081cc382 +0x9c:  movl   $0x1,0x4(%esp)
081cc38a +0xa4:  lea    -0x18(%ebp),%eax
081cc38d +0xa7:  mov    %eax,(%esp)
081cc390 +0xaa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081cc395 +0xaf:  lea    -0x18(%ebp),%eax
081cc398 +0xb2:  mov    %eax,0x4(%esp)
081cc39c +0xb6:  mov    0xc(%ebp),%eax
081cc39f +0xb9:  mov    %eax,(%esp)
081cc3a2 +0xbc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081cc3a7 +0xc1:  jmp    081cc3c4 <+0xde>
081cc3a9 +0xc3:  mov    %edx,%ebx
081cc3ab +0xc5:  mov    %eax,%esi
081cc3ad +0xc7:  lea    -0x18(%ebp),%eax
081cc3b0 +0xca:  mov    %eax,(%esp)
081cc3b3 +0xcd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cc3b8 +0xd2:  mov    %esi,%eax
081cc3ba +0xd4:  mov    %ebx,%edx
081cc3bc +0xd6:  mov    %eax,(%esp)
081cc3bf +0xd9:  call   08ae3750 <_Unwind_Resume>
081cc3c4 +0xde:  lea    -0x18(%ebp),%eax
081cc3c7 +0xe1:  mov    %eax,(%esp)
081cc3ca +0xe4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081cc3cf +0xe9:  jmp    081cc3d2 <+0xec>
081cc3d1 +0xeb:  nop
081cc3d2 +0xec:  add    $0x20,%esp
081cc3d5 +0xef:  pop    %ebx
081cc3d6 +0xf0:  pop    %esi
081cc3d7 +0xf1:  pop    %ebp
081cc3d8 +0xf2:  ret
081cc3d9 +0xf3:  nop
```

## 反编译 C

```c
// Dispatcher_MailBox_Open::send @ 0x81cc2e6

/* Dispatcher_MailBox_Open::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MailBox_Open::send(Dispatcher_MailBox_Open *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081cc355 to 081cc3a6 has its CatchHandler @ 081cc3a9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,99);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,99,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
