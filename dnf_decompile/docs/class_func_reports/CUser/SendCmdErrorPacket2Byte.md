# SendCmdErrorPacket2Byte

`_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt`

`CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c110  _ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt
#           CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
# range [0x0867c110, 0x0867c1d3]
0867c110 +0x00:  push   %ebp
0867c111 +0x01:  mov    %esp,%ebp
0867c113 +0x03:  push   %esi
0867c114 +0x04:  push   %ebx
0867c115 +0x05:  sub    $0x30,%esp
0867c118 +0x08:  mov    0x10(%ebp),%eax
0867c11b +0x0b:  mov    %ax,-0x1c(%ebp)
0867c11f +0x0f:  lea    -0x14(%ebp),%eax
0867c122 +0x12:  mov    %eax,(%esp)
0867c125 +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867c12a +0x1a:  mov    0xc(%ebp),%eax
0867c12d +0x1d:  mov    %eax,0x8(%esp)
0867c131 +0x21:  movl   $0x1,0x4(%esp)
0867c139 +0x29:  lea    -0x14(%ebp),%eax
0867c13c +0x2c:  mov    %eax,(%esp)
0867c13f +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867c144 +0x34:  movl   $0x0,0x4(%esp)
0867c14c +0x3c:  lea    -0x14(%ebp),%eax
0867c14f +0x3f:  mov    %eax,(%esp)
0867c152 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c157 +0x47:  movl   $0x0,0x4(%esp)
0867c15f +0x4f:  lea    -0x14(%ebp),%eax
0867c162 +0x52:  mov    %eax,(%esp)
0867c165 +0x55:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c16a +0x5a:  movzwl -0x1c(%ebp),%eax
0867c16e +0x5e:  mov    %eax,0x4(%esp)
0867c172 +0x62:  lea    -0x14(%ebp),%eax
0867c175 +0x65:  mov    %eax,(%esp)
0867c178 +0x68:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867c17d +0x6d:  movl   $0x1,0x4(%esp)
0867c185 +0x75:  lea    -0x14(%ebp),%eax
0867c188 +0x78:  mov    %eax,(%esp)
0867c18b +0x7b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c190 +0x80:  lea    -0x14(%ebp),%eax
0867c193 +0x83:  mov    %eax,0x4(%esp)
0867c197 +0x87:  mov    0x8(%ebp),%eax
0867c19a +0x8a:  mov    %eax,(%esp)
0867c19d +0x8d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867c1a2 +0x92:  mov    %eax,%ebx
0867c1a4 +0x94:  lea    -0x14(%ebp),%eax
0867c1a7 +0x97:  mov    %eax,(%esp)
0867c1aa +0x9a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c1af +0x9f:  mov    %ebx,%eax
0867c1b1 +0xa1:  add    $0x30,%esp
0867c1b4 +0xa4:  pop    %ebx
0867c1b5 +0xa5:  pop    %esi
0867c1b6 +0xa6:  pop    %ebp
0867c1b7 +0xa7:  ret
0867c1b8 +0xa8:  mov    %edx,%ebx
0867c1ba +0xaa:  mov    %eax,%esi
0867c1bc +0xac:  lea    -0x14(%ebp),%eax
0867c1bf +0xaf:  mov    %eax,(%esp)
0867c1c2 +0xb2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c1c7 +0xb7:  mov    %esi,%eax
0867c1c9 +0xb9:  mov    %ebx,%edx
0867c1cb +0xbb:  mov    %eax,(%esp)
0867c1ce +0xbe:  call   08ae3750 <_Unwind_Resume>
0867c1d3 +0xc3:  nop
```

## 反编译 C

```c
// CUser::SendCmdErrorPacket2Byte @ 0x867c110

/* CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short) */

undefined4 __thiscall CUser::SendCmdErrorPacket2Byte(CUser *this,int param_2,uint param_3)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867c13f to 0867c1a1 has its CatchHandler @ 0867c1b8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  uVar1 = Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
