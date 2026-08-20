# send_packet_guildcreateright

`_ZN31Dispatcher_CallGuildCreateRight28send_packet_guildcreaterightEP5CUserh`

`Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser*, unsigned char)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildCreateRight` | `0x081ffbde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ffbde  _ZN31Dispatcher_CallGuildCreateRight28send_packet_guildcreaterightEP5CUserh
#           Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser*, unsigned char)
# range [0x081ffbde, 0x081ffcc1]
081ffbde +0x00:  push   %ebp
081ffbdf +0x01:  mov    %esp,%ebp
081ffbe1 +0x03:  push   %esi
081ffbe2 +0x04:  push   %ebx
081ffbe3 +0x05:  sub    $0x30,%esp
081ffbe6 +0x08:  mov    0x10(%ebp),%eax
081ffbe9 +0x0b:  mov    %al,-0x1c(%ebp)
081ffbec +0x0e:  lea    -0x14(%ebp),%eax
081ffbef +0x11:  mov    %eax,(%esp)
081ffbf2 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ffbf7 +0x19:  lea    -0x14(%ebp),%eax
081ffbfa +0x1c:  mov    %eax,(%esp)
081ffbfd +0x1f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081ffc02 +0x24:  movl   $0xe,0x8(%esp)
081ffc0a +0x2c:  movl   $0x0,0x4(%esp)
081ffc12 +0x34:  lea    -0x14(%ebp),%eax
081ffc15 +0x37:  mov    %eax,(%esp)
081ffc18 +0x3a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ffc1d +0x3f:  movl   $0x0,0x4(%esp)
081ffc25 +0x47:  lea    -0x14(%ebp),%eax
081ffc28 +0x4a:  mov    %eax,(%esp)
081ffc2b +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ffc30 +0x52:  movl   $0x1,0x4(%esp)
081ffc38 +0x5a:  lea    -0x14(%ebp),%eax
081ffc3b +0x5d:  mov    %eax,(%esp)
081ffc3e +0x60:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ffc43 +0x65:  mov    0xc(%ebp),%eax
081ffc46 +0x68:  mov    %eax,(%esp)
081ffc49 +0x6b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ffc4e +0x70:  lea    -0x14(%ebp),%edx
081ffc51 +0x73:  mov    %edx,0xc(%esp)
081ffc55 +0x77:  movl   $0x0,0x8(%esp)
081ffc5d +0x7f:  movl   $0x1,0x4(%esp)
081ffc65 +0x87:  mov    %eax,(%esp)
081ffc68 +0x8a:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
081ffc6d +0x8f:  movl   $0x1,0x4(%esp)
081ffc75 +0x97:  lea    -0x14(%ebp),%eax
081ffc78 +0x9a:  mov    %eax,(%esp)
081ffc7b +0x9d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ffc80 +0xa2:  lea    -0x14(%ebp),%eax
081ffc83 +0xa5:  mov    %eax,0x4(%esp)
081ffc87 +0xa9:  mov    0xc(%ebp),%eax
081ffc8a +0xac:  mov    %eax,(%esp)
081ffc8d +0xaf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ffc92 +0xb4:  jmp    081ffcaf <+0xd1>
081ffc94 +0xb6:  mov    %edx,%ebx
081ffc96 +0xb8:  mov    %eax,%esi
081ffc98 +0xba:  lea    -0x14(%ebp),%eax
081ffc9b +0xbd:  mov    %eax,(%esp)
081ffc9e +0xc0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ffca3 +0xc5:  mov    %esi,%eax
081ffca5 +0xc7:  mov    %ebx,%edx
081ffca7 +0xc9:  mov    %eax,(%esp)
081ffcaa +0xcc:  call   08ae3750 <_Unwind_Resume>
081ffcaf +0xd1:  lea    -0x14(%ebp),%eax
081ffcb2 +0xd4:  mov    %eax,(%esp)
081ffcb5 +0xd7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ffcba +0xdc:  add    $0x30,%esp
081ffcbd +0xdf:  pop    %ebx
081ffcbe +0xe0:  pop    %esi
081ffcbf +0xe1:  pop    %ebp
081ffcc0 +0xe2:  ret
081ffcc1 +0xe3:  nop
```

## 反编译 C

```c
// Dispatcher_CallGuildCreateRight::send_packet_guildcreateright @ 0x81ffbde

/* Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser*, unsigned char) */

void Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser *param_1,uchar param_2)

{
  CInventory *pCVar1;
  undefined3 in_stack_00000009;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081ffbfd to 081ffc91 has its CatchHandler @ 081ffc94 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::MakeItemPacket(pCVar1,1,0,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)_param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
