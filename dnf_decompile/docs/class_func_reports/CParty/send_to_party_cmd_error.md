# send_to_party_cmd_error

`_ZN6CParty23send_to_party_cmd_errorE14ENUM_CMDPACKETh`

`CParty::send_to_party_cmd_error(ENUM_CMDPACKET, unsigned char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d1aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d1aa  _ZN6CParty23send_to_party_cmd_errorE14ENUM_CMDPACKETh
#           CParty::send_to_party_cmd_error(ENUM_CMDPACKET, unsigned char)
# range [0x0859d1aa, 0x0859d257]
0859d1aa +0x00:  push   %ebp
0859d1ab +0x01:  mov    %esp,%ebp
0859d1ad +0x03:  push   %esi
0859d1ae +0x04:  push   %ebx
0859d1af +0x05:  sub    $0x30,%esp
0859d1b2 +0x08:  mov    0x10(%ebp),%eax
0859d1b5 +0x0b:  mov    %al,-0x1c(%ebp)
0859d1b8 +0x0e:  lea    -0x14(%ebp),%eax
0859d1bb +0x11:  mov    %eax,(%esp)
0859d1be +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859d1c3 +0x19:  mov    0xc(%ebp),%eax
0859d1c6 +0x1c:  mov    %eax,0x8(%esp)
0859d1ca +0x20:  movl   $0x1,0x4(%esp)
0859d1d2 +0x28:  lea    -0x14(%ebp),%eax
0859d1d5 +0x2b:  mov    %eax,(%esp)
0859d1d8 +0x2e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859d1dd +0x33:  movl   $0x0,0x4(%esp)
0859d1e5 +0x3b:  lea    -0x14(%ebp),%eax
0859d1e8 +0x3e:  mov    %eax,(%esp)
0859d1eb +0x41:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d1f0 +0x46:  movzbl -0x1c(%ebp),%eax
0859d1f4 +0x4a:  mov    %eax,0x4(%esp)
0859d1f8 +0x4e:  lea    -0x14(%ebp),%eax
0859d1fb +0x51:  mov    %eax,(%esp)
0859d1fe +0x54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859d203 +0x59:  movl   $0x1,0x4(%esp)
0859d20b +0x61:  lea    -0x14(%ebp),%eax
0859d20e +0x64:  mov    %eax,(%esp)
0859d211 +0x67:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859d216 +0x6c:  lea    -0x14(%ebp),%eax
0859d219 +0x6f:  mov    %eax,0x4(%esp)
0859d21d +0x73:  mov    0x8(%ebp),%eax
0859d220 +0x76:  mov    %eax,(%esp)
0859d223 +0x79:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859d228 +0x7e:  jmp    0859d245 <+0x9b>
0859d22a +0x80:  mov    %edx,%ebx
0859d22c +0x82:  mov    %eax,%esi
0859d22e +0x84:  lea    -0x14(%ebp),%eax
0859d231 +0x87:  mov    %eax,(%esp)
0859d234 +0x8a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d239 +0x8f:  mov    %esi,%eax
0859d23b +0x91:  mov    %ebx,%edx
0859d23d +0x93:  mov    %eax,(%esp)
0859d240 +0x96:  call   08ae3750 <_Unwind_Resume>
0859d245 +0x9b:  lea    -0x14(%ebp),%eax
0859d248 +0x9e:  mov    %eax,(%esp)
0859d24b +0xa1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859d250 +0xa6:  add    $0x30,%esp
0859d253 +0xa9:  pop    %ebx
0859d254 +0xaa:  pop    %esi
0859d255 +0xab:  pop    %ebp
0859d256 +0xac:  ret
0859d257 +0xad:  nop
```

## 反编译 C

```c
// CParty::send_to_party_cmd_error @ 0x859d1aa

/* CParty::send_to_party_cmd_error(ENUM_CMDPACKET, unsigned char) */

void __thiscall CParty::send_to_party_cmd_error(CParty *this,int param_2,uint param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0859d1d8 to 0859d227 has its CatchHandler @ 0859d22a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  send_to_party(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
