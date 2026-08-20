# SendCmdPeerErrorPacket

`_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh`

`CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867be2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867be2e  _ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh
#           CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
# range [0x0867be2e, 0x0867be9b]
0867be2e +0x00:  push   %ebp
0867be2f +0x01:  mov    %esp,%ebp
0867be31 +0x03:  push   %esi
0867be32 +0x04:  push   %ebx
0867be33 +0x05:  sub    $0x40,%esp
0867be36 +0x08:  mov    0x14(%ebp),%eax
0867be39 +0x0b:  mov    %al,-0x1c(%ebp)
0867be3c +0x0e:  lea    -0x14(%ebp),%eax
0867be3f +0x11:  mov    %eax,(%esp)
0867be42 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867be47 +0x19:  movzbl -0x1c(%ebp),%eax
0867be4b +0x1d:  lea    -0x14(%ebp),%edx
0867be4e +0x20:  mov    %edx,0x10(%esp)
0867be52 +0x24:  mov    %eax,0xc(%esp)
0867be56 +0x28:  mov    0x10(%ebp),%eax
0867be59 +0x2b:  mov    %eax,0x8(%esp)
0867be5d +0x2f:  mov    0xc(%ebp),%eax
0867be60 +0x32:  mov    %eax,0x4(%esp)
0867be64 +0x36:  mov    0x8(%ebp),%eax
0867be67 +0x39:  mov    %eax,(%esp)
0867be6a +0x3c:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
0867be6f +0x41:  mov    %eax,%ebx
0867be71 +0x43:  lea    -0x14(%ebp),%eax
0867be74 +0x46:  mov    %eax,(%esp)
0867be77 +0x49:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867be7c +0x4e:  mov    %ebx,%eax
0867be7e +0x50:  add    $0x40,%esp
0867be81 +0x53:  pop    %ebx
0867be82 +0x54:  pop    %esi
0867be83 +0x55:  pop    %ebp
0867be84 +0x56:  ret
0867be85 +0x57:  mov    %edx,%ebx
0867be87 +0x59:  mov    %eax,%esi
0867be89 +0x5b:  lea    -0x14(%ebp),%eax
0867be8c +0x5e:  mov    %eax,(%esp)
0867be8f +0x61:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867be94 +0x66:  mov    %esi,%eax
0867be96 +0x68:  mov    %ebx,%edx
0867be98 +0x6a:  mov    %eax,(%esp)
0867be9b +0x6d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::SendCmdPeerErrorPacket @ 0x867be2e

/* CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char) */

undefined4 __thiscall
CUser::SendCmdPeerErrorPacket(CUser *this,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867be6a to 0867be6e has its CatchHandler @ 0867be85 */
  uVar1 = SendCmdPeerErrorPacket(this,param_2,param_3,param_4,local_18);
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
