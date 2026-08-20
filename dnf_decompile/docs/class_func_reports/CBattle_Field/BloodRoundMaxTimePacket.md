# BloodRoundMaxTimePacket

`_ZN13CBattle_Field23BloodRoundMaxTimePacketEsii`

`CBattle_Field::BloodRoundMaxTimePacket(short, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08305dc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08305dc4  _ZN13CBattle_Field23BloodRoundMaxTimePacketEsii
#           CBattle_Field::BloodRoundMaxTimePacket(short, int, int)
# range [0x08305dc4, 0x08305e9b]
08305dc4 +0x00:  push   %ebp
08305dc5 +0x01:  mov    %esp,%ebp
08305dc7 +0x03:  push   %esi
08305dc8 +0x04:  push   %ebx
08305dc9 +0x05:  sub    $0x30,%esp
08305dcc +0x08:  mov    0xc(%ebp),%eax
08305dcf +0x0b:  mov    %ax,-0x1c(%ebp)
08305dd3 +0x0f:  lea    -0x14(%ebp),%eax
08305dd6 +0x12:  mov    %eax,(%esp)
08305dd9 +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08305dde +0x1a:  movl   $0xd6,0x8(%esp)
08305de6 +0x22:  movl   $0x0,0x4(%esp)
08305dee +0x2a:  lea    -0x14(%ebp),%eax
08305df1 +0x2d:  mov    %eax,(%esp)
08305df4 +0x30:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08305df9 +0x35:  movl   $0x0,0x4(%esp)
08305e01 +0x3d:  lea    -0x14(%ebp),%eax
08305e04 +0x40:  mov    %eax,(%esp)
08305e07 +0x43:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305e0c +0x48:  movswl -0x1c(%ebp),%eax
08305e10 +0x4c:  add    $0x1,%eax
08305e13 +0x4f:  mov    %eax,0x4(%esp)
08305e17 +0x53:  lea    -0x14(%ebp),%eax
08305e1a +0x56:  mov    %eax,(%esp)
08305e1d +0x59:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305e22 +0x5e:  mov    0x10(%ebp),%eax
08305e25 +0x61:  mov    %eax,0x4(%esp)
08305e29 +0x65:  lea    -0x14(%ebp),%eax
08305e2c +0x68:  mov    %eax,(%esp)
08305e2f +0x6b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08305e34 +0x70:  mov    0x14(%ebp),%eax
08305e37 +0x73:  mov    %eax,0x4(%esp)
08305e3b +0x77:  lea    -0x14(%ebp),%eax
08305e3e +0x7a:  mov    %eax,(%esp)
08305e41 +0x7d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08305e46 +0x82:  movl   $0x1,0x4(%esp)
08305e4e +0x8a:  lea    -0x14(%ebp),%eax
08305e51 +0x8d:  mov    %eax,(%esp)
08305e54 +0x90:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08305e59 +0x95:  mov    0x8(%ebp),%eax
08305e5c +0x98:  mov    (%eax),%eax
08305e5e +0x9a:  lea    -0x14(%ebp),%edx
08305e61 +0x9d:  mov    %edx,0x4(%esp)
08305e65 +0xa1:  mov    %eax,(%esp)
08305e68 +0xa4:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08305e6d +0xa9:  jmp    08305e8a <+0xc6>
08305e6f +0xab:  mov    %edx,%ebx
08305e71 +0xad:  mov    %eax,%esi
08305e73 +0xaf:  lea    -0x14(%ebp),%eax
08305e76 +0xb2:  mov    %eax,(%esp)
08305e79 +0xb5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305e7e +0xba:  mov    %esi,%eax
08305e80 +0xbc:  mov    %ebx,%edx
08305e82 +0xbe:  mov    %eax,(%esp)
08305e85 +0xc1:  call   08ae3750 <_Unwind_Resume>
08305e8a +0xc6:  lea    -0x14(%ebp),%eax
08305e8d +0xc9:  mov    %eax,(%esp)
08305e90 +0xcc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305e95 +0xd1:  add    $0x30,%esp
08305e98 +0xd4:  pop    %ebx
08305e99 +0xd5:  pop    %esi
08305e9a +0xd6:  pop    %ebp
08305e9b +0xd7:  ret
```

## 反编译 C

```c
// CBattle_Field::BloodRoundMaxTimePacket @ 0x8305dc4

/* CBattle_Field::BloodRoundMaxTimePacket(short, int, int) */

void __thiscall
CBattle_Field::BloodRoundMaxTimePacket(CBattle_Field *this,short param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08305df4 to 08305e6c has its CatchHandler @ 08305e6f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xd6);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1 + 1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(*(CParty **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
