# SendCmdErrorPacket

`_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard`

`CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867bfae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867bfae  _ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard
#           CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
# range [0x0867bfae, 0x0867c021]
0867bfae +0x00:  push   %ebp
0867bfaf +0x01:  mov    %esp,%ebp
0867bfb1 +0x03:  sub    $0x28,%esp
0867bfb4 +0x06:  mov    0x10(%ebp),%eax
0867bfb7 +0x09:  mov    %al,-0xc(%ebp)
0867bfba +0x0c:  mov    0xc(%ebp),%edx
0867bfbd +0x0f:  mov    0x14(%ebp),%eax
0867bfc0 +0x12:  mov    %edx,0x8(%esp)
0867bfc4 +0x16:  movl   $0x1,0x4(%esp)
0867bfcc +0x1e:  mov    %eax,(%esp)
0867bfcf +0x21:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867bfd4 +0x26:  mov    0x14(%ebp),%eax
0867bfd7 +0x29:  movl   $0x0,0x4(%esp)
0867bfdf +0x31:  mov    %eax,(%esp)
0867bfe2 +0x34:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bfe7 +0x39:  movzbl -0xc(%ebp),%edx
0867bfeb +0x3d:  mov    0x14(%ebp),%eax
0867bfee +0x40:  mov    %edx,0x4(%esp)
0867bff2 +0x44:  mov    %eax,(%esp)
0867bff5 +0x47:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867bffa +0x4c:  mov    0x14(%ebp),%eax
0867bffd +0x4f:  movl   $0x1,0x4(%esp)
0867c005 +0x57:  mov    %eax,(%esp)
0867c008 +0x5a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c00d +0x5f:  mov    0x14(%ebp),%eax
0867c010 +0x62:  mov    %eax,0x4(%esp)
0867c014 +0x66:  mov    0x8(%ebp),%eax
0867c017 +0x69:  mov    %eax,(%esp)
0867c01a +0x6c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867c01f +0x71:  leave
0867c020 +0x72:  ret
0867c021 +0x73:  nop
```

## 反编译 C

```c
// CUser::SendCmdErrorPacket @ 0x867bfae

/* CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&) */

void __thiscall
CUser::SendCmdErrorPacket(CUser *this,int param_2,uint param_3,InterfacePacketBuf *param_4)

{
  InterfacePacketBuf::put_header(param_4,1,param_2);
  InterfacePacketBuf::put_byte(param_4,0);
  InterfacePacketBuf::put_byte(param_4,param_3 & 0xff);
  InterfacePacketBuf::finalize(param_4,true);
  Send(this,(PacketGuard *)param_4);
  return;
}
```
