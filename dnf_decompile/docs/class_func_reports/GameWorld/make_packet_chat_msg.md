# make_packet_chat_msg

`_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET`

`GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c954c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c954c  _ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET
#           GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET)
# range [0x086c954c, 0x086c9637]
086c954c +0x00:  push   %ebp
086c954d +0x01:  mov    %esp,%ebp
086c954f +0x03:  sub    $0x28,%esp
086c9552 +0x06:  mov    0x1c(%ebp),%eax
086c9555 +0x09:  mov    %al,-0xc(%ebp)
086c9558 +0x0c:  mov    0xc(%ebp),%eax
086c955b +0x0f:  mov    %eax,(%esp)
086c955e +0x12:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c9563 +0x17:  mov    0x20(%ebp),%edx
086c9566 +0x1a:  mov    0xc(%ebp),%eax
086c9569 +0x1d:  mov    %edx,0x8(%esp)
086c956d +0x21:  movl   $0x0,0x4(%esp)
086c9575 +0x29:  mov    %eax,(%esp)
086c9578 +0x2c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c957d +0x31:  movsbl -0xc(%ebp),%edx
086c9581 +0x35:  mov    0xc(%ebp),%eax
086c9584 +0x38:  mov    %edx,0x4(%esp)
086c9588 +0x3c:  mov    %eax,(%esp)
086c958b +0x3f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9590 +0x44:  cmpl   $0x0,0x10(%ebp)
086c9594 +0x48:  jne    086c95be <+0x72>
086c9596 +0x4a:  mov    0xc(%ebp),%eax
086c9599 +0x4d:  movl   $0x0,0x4(%esp)
086c95a1 +0x55:  mov    %eax,(%esp)
086c95a4 +0x58:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c95a9 +0x5d:  mov    0xc(%ebp),%eax
086c95ac +0x60:  movl   $0x0,0x4(%esp)
086c95b4 +0x68:  mov    %eax,(%esp)
086c95b7 +0x6b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c95bc +0x70:  jmp    086c95f7 <+0xab>
086c95be +0x72:  mov    0x10(%ebp),%eax
086c95c1 +0x75:  mov    %eax,(%esp)
086c95c4 +0x78:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c95c9 +0x7d:  movzwl %ax,%edx
086c95cc +0x80:  mov    0xc(%ebp),%eax
086c95cf +0x83:  mov    %edx,0x4(%esp)
086c95d3 +0x87:  mov    %eax,(%esp)
086c95d6 +0x8a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c95db +0x8f:  mov    0x10(%ebp),%eax
086c95de +0x92:  mov    %eax,(%esp)
086c95e1 +0x95:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086c95e6 +0x9a:  mov    %eax,%edx
086c95e8 +0x9c:  mov    0xc(%ebp),%eax
086c95eb +0x9f:  mov    %edx,0x4(%esp)
086c95ef +0xa3:  mov    %eax,(%esp)
086c95f2 +0xa6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c95f7 +0xab:  mov    0xc(%ebp),%eax
086c95fa +0xae:  mov    0x18(%ebp),%edx
086c95fd +0xb1:  mov    %edx,0x4(%esp)
086c9601 +0xb5:  mov    %eax,(%esp)
086c9604 +0xb8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c9609 +0xbd:  mov    0xc(%ebp),%eax
086c960c +0xc0:  mov    0x18(%ebp),%edx
086c960f +0xc3:  mov    %edx,0x8(%esp)
086c9613 +0xc7:  mov    0x14(%ebp),%edx
086c9616 +0xca:  mov    %edx,0x4(%esp)
086c961a +0xce:  mov    %eax,(%esp)
086c961d +0xd1:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086c9622 +0xd6:  mov    0xc(%ebp),%eax
086c9625 +0xd9:  movl   $0x1,0x4(%esp)
086c962d +0xe1:  mov    %eax,(%esp)
086c9630 +0xe4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c9635 +0xe9:  leave
086c9636 +0xea:  ret
086c9637 +0xeb:  nop
```

## 反编译 C

```c
// GameWorld::make_packet_chat_msg @ 0x86c954c

/* GameWorld::make_packet_chat_msg(PacketGuard&, CUser*, char*, int, char, ENUM_NOTIPACKET) */

void __thiscall
GameWorld::make_packet_chat_msg
          (undefined4 this,InterfacePacketBuf *param_1,CUser *param_2,char *param_3,int param_4,
          char param_5,int param_7)

{
  uint uVar1;
  int iVar2;
  
  InterfacePacketBuf::clear(param_1);
  InterfacePacketBuf::put_header(param_1,0,param_7);
  InterfacePacketBuf::put_byte(param_1,(int)param_5);
  if (param_2 == (CUser *)0x0) {
    InterfacePacketBuf::put_short(param_1,0);
    InterfacePacketBuf::put_byte(param_1,0);
  }
  else {
    uVar1 = CUser::get_unique_id(param_2);
    InterfacePacketBuf::put_short(param_1,uVar1 & 0xffff);
    iVar2 = CUser::GetServerGroup(param_2);
    InterfacePacketBuf::put_byte(param_1,iVar2);
  }
  InterfacePacketBuf::put_int(param_1,param_4);
  InterfacePacketBuf::put_str(param_1,param_3,param_4);
  InterfacePacketBuf::finalize(param_1,true);
  return;
}
```
