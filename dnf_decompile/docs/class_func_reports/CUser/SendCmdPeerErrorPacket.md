# SendCmdPeerErrorPacket

`_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard`

`CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867bd84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867bd84  _ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard
#           CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
# range [0x0867bd84, 0x0867be2d]
0867bd84 +0x00:  push   %ebp
0867bd85 +0x01:  mov    %esp,%ebp
0867bd87 +0x03:  sub    $0x28,%esp
0867bd8a +0x06:  mov    0x14(%ebp),%eax
0867bd8d +0x09:  mov    %al,-0xc(%ebp)
0867bd90 +0x0c:  mov    0x18(%ebp),%eax
0867bd93 +0x0f:  mov    %eax,(%esp)
0867bd96 +0x12:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0867bd9b +0x17:  mov    0xc(%ebp),%edx
0867bd9e +0x1a:  mov    0x18(%ebp),%eax
0867bda1 +0x1d:  mov    %edx,0x8(%esp)
0867bda5 +0x21:  movl   $0x1,0x4(%esp)
0867bdad +0x29:  mov    %eax,(%esp)
0867bdb0 +0x2c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867bdb5 +0x31:  mov    0x18(%ebp),%eax
0867bdb8 +0x34:  movl   $0x0,0x4(%esp)
0867bdc0 +0x3c:  mov    %eax,(%esp)
0867bdc3 +0x3f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bdc8 +0x44:  movzbl -0xc(%ebp),%edx
0867bdcc +0x48:  mov    0x18(%ebp),%eax
0867bdcf +0x4b:  mov    %edx,0x4(%esp)
0867bdd3 +0x4f:  mov    %eax,(%esp)
0867bdd6 +0x52:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bddb +0x57:  mov    0x10(%ebp),%edx
0867bdde +0x5a:  mov    0x18(%ebp),%eax
0867bde1 +0x5d:  mov    %edx,0x4(%esp)
0867bde5 +0x61:  mov    %eax,(%esp)
0867bde8 +0x64:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bded +0x69:  cmpl   $0x4,0x10(%ebp)
0867bdf1 +0x6d:  jne    0867be06 <+0x82>
0867bdf3 +0x6f:  mov    0x18(%ebp),%eax
0867bdf6 +0x72:  movl   $0x0,0x4(%esp)
0867bdfe +0x7a:  mov    %eax,(%esp)
0867be01 +0x7d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867be06 +0x82:  mov    0x18(%ebp),%eax
0867be09 +0x85:  movl   $0x1,0x4(%esp)
0867be11 +0x8d:  mov    %eax,(%esp)
0867be14 +0x90:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867be19 +0x95:  mov    0x18(%ebp),%eax
0867be1c +0x98:  mov    %eax,0x4(%esp)
0867be20 +0x9c:  mov    0x8(%ebp),%eax
0867be23 +0x9f:  mov    %eax,(%esp)
0867be26 +0xa2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867be2b +0xa7:  leave
0867be2c +0xa8:  ret
0867be2d +0xa9:  nop
```

## 反编译 C

```c
// CUser::SendCmdPeerErrorPacket @ 0x867bd84

/* CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char,
   PacketGuard&) */

void __thiscall
CUser::SendCmdPeerErrorPacket
          (CUser *this,int param_2,int param_3,uint param_4,InterfacePacketBuf *param_5)

{
  InterfacePacketBuf::clear(param_5);
  InterfacePacketBuf::put_header(param_5,1,param_2);
  InterfacePacketBuf::put_byte(param_5,0);
  InterfacePacketBuf::put_byte(param_5,param_4 & 0xff);
  InterfacePacketBuf::put_byte(param_5,param_3);
  if (param_3 == 4) {
    InterfacePacketBuf::put_int(param_5,0);
  }
  InterfacePacketBuf::finalize(param_5,true);
  Send(this,(PacketGuard *)param_5);
  return;
}
```
