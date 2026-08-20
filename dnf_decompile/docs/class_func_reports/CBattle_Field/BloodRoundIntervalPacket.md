# BloodRoundIntervalPacket

`_ZN13CBattle_Field24BloodRoundIntervalPacketEsi`

`CBattle_Field::BloodRoundIntervalPacket(short, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08305e9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08305e9c  _ZN13CBattle_Field24BloodRoundIntervalPacketEsi
#           CBattle_Field::BloodRoundIntervalPacket(short, int)
# range [0x08305e9c, 0x08305f4f]
08305e9c +0x00:  push   %ebp
08305e9d +0x01:  mov    %esp,%ebp
08305e9f +0x03:  push   %esi
08305ea0 +0x04:  push   %ebx
08305ea1 +0x05:  sub    $0x30,%esp
08305ea4 +0x08:  mov    0xc(%ebp),%eax
08305ea7 +0x0b:  mov    %ax,-0x1c(%ebp)
08305eab +0x0f:  lea    -0x14(%ebp),%eax
08305eae +0x12:  mov    %eax,(%esp)
08305eb1 +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08305eb6 +0x1a:  movl   $0xd7,0x8(%esp)
08305ebe +0x22:  movl   $0x0,0x4(%esp)
08305ec6 +0x2a:  lea    -0x14(%ebp),%eax
08305ec9 +0x2d:  mov    %eax,(%esp)
08305ecc +0x30:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08305ed1 +0x35:  movswl -0x1c(%ebp),%eax
08305ed5 +0x39:  add    $0x1,%eax
08305ed8 +0x3c:  mov    %eax,0x4(%esp)
08305edc +0x40:  lea    -0x14(%ebp),%eax
08305edf +0x43:  mov    %eax,(%esp)
08305ee2 +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305ee7 +0x4b:  mov    0x10(%ebp),%eax
08305eea +0x4e:  mov    %eax,0x4(%esp)
08305eee +0x52:  lea    -0x14(%ebp),%eax
08305ef1 +0x55:  mov    %eax,(%esp)
08305ef4 +0x58:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08305ef9 +0x5d:  movl   $0x1,0x4(%esp)
08305f01 +0x65:  lea    -0x14(%ebp),%eax
08305f04 +0x68:  mov    %eax,(%esp)
08305f07 +0x6b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08305f0c +0x70:  mov    0x8(%ebp),%eax
08305f0f +0x73:  mov    (%eax),%eax
08305f11 +0x75:  lea    -0x14(%ebp),%edx
08305f14 +0x78:  mov    %edx,0x4(%esp)
08305f18 +0x7c:  mov    %eax,(%esp)
08305f1b +0x7f:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08305f20 +0x84:  jmp    08305f3d <+0xa1>
08305f22 +0x86:  mov    %edx,%ebx
08305f24 +0x88:  mov    %eax,%esi
08305f26 +0x8a:  lea    -0x14(%ebp),%eax
08305f29 +0x8d:  mov    %eax,(%esp)
08305f2c +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305f31 +0x95:  mov    %esi,%eax
08305f33 +0x97:  mov    %ebx,%edx
08305f35 +0x99:  mov    %eax,(%esp)
08305f38 +0x9c:  call   08ae3750 <_Unwind_Resume>
08305f3d +0xa1:  lea    -0x14(%ebp),%eax
08305f40 +0xa4:  mov    %eax,(%esp)
08305f43 +0xa7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305f48 +0xac:  add    $0x30,%esp
08305f4b +0xaf:  pop    %ebx
08305f4c +0xb0:  pop    %esi
08305f4d +0xb1:  pop    %ebp
08305f4e +0xb2:  ret
08305f4f +0xb3:  nop
```

## 反编译 C

```c
// CBattle_Field::BloodRoundIntervalPacket @ 0x8305e9c

/* CBattle_Field::BloodRoundIntervalPacket(short, int) */

void __thiscall
CBattle_Field::BloodRoundIntervalPacket(CBattle_Field *this,short param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08305ecc to 08305f1f has its CatchHandler @ 08305f22 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xd7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1 + 1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(*(CParty **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
