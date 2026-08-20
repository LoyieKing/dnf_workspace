# send_elevator_time_packet

`_ZN13CBattle_Field25send_elevator_time_packetEc`

`CBattle_Field::send_elevator_time_packet(char)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830d848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830d848  _ZN13CBattle_Field25send_elevator_time_packetEc
#           CBattle_Field::send_elevator_time_packet(char)
# range [0x0830d848, 0x0830d901]
0830d848 +0x00:  push   %ebp
0830d849 +0x01:  mov    %esp,%ebp
0830d84b +0x03:  push   %esi
0830d84c +0x04:  push   %ebx
0830d84d +0x05:  sub    $0x30,%esp
0830d850 +0x08:  mov    0xc(%ebp),%eax
0830d853 +0x0b:  mov    %al,-0x1c(%ebp)
0830d856 +0x0e:  lea    -0x14(%ebp),%eax
0830d859 +0x11:  mov    %eax,(%esp)
0830d85c +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0830d861 +0x19:  movl   $0xfd,0x8(%esp)
0830d869 +0x21:  movl   $0x0,0x4(%esp)
0830d871 +0x29:  lea    -0x14(%ebp),%eax
0830d874 +0x2c:  mov    %eax,(%esp)
0830d877 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0830d87c +0x34:  mov    0x8(%ebp),%eax
0830d87f +0x37:  movzbl 0x139(%eax),%eax
0830d886 +0x3e:  movsbl %al,%eax
0830d889 +0x41:  mov    %eax,0x4(%esp)
0830d88d +0x45:  lea    -0x14(%ebp),%eax
0830d890 +0x48:  mov    %eax,(%esp)
0830d893 +0x4b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830d898 +0x50:  movsbl -0x1c(%ebp),%eax
0830d89c +0x54:  mov    %eax,0x4(%esp)
0830d8a0 +0x58:  lea    -0x14(%ebp),%eax
0830d8a3 +0x5b:  mov    %eax,(%esp)
0830d8a6 +0x5e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830d8ab +0x63:  movl   $0x1,0x4(%esp)
0830d8b3 +0x6b:  lea    -0x14(%ebp),%eax
0830d8b6 +0x6e:  mov    %eax,(%esp)
0830d8b9 +0x71:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0830d8be +0x76:  mov    0x8(%ebp),%eax
0830d8c1 +0x79:  mov    (%eax),%eax
0830d8c3 +0x7b:  lea    -0x14(%ebp),%edx
0830d8c6 +0x7e:  mov    %edx,0x4(%esp)
0830d8ca +0x82:  mov    %eax,(%esp)
0830d8cd +0x85:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0830d8d2 +0x8a:  jmp    0830d8ef <+0xa7>
0830d8d4 +0x8c:  mov    %edx,%ebx
0830d8d6 +0x8e:  mov    %eax,%esi
0830d8d8 +0x90:  lea    -0x14(%ebp),%eax
0830d8db +0x93:  mov    %eax,(%esp)
0830d8de +0x96:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0830d8e3 +0x9b:  mov    %esi,%eax
0830d8e5 +0x9d:  mov    %ebx,%edx
0830d8e7 +0x9f:  mov    %eax,(%esp)
0830d8ea +0xa2:  call   08ae3750 <_Unwind_Resume>
0830d8ef +0xa7:  lea    -0x14(%ebp),%eax
0830d8f2 +0xaa:  mov    %eax,(%esp)
0830d8f5 +0xad:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0830d8fa +0xb2:  add    $0x30,%esp
0830d8fd +0xb5:  pop    %ebx
0830d8fe +0xb6:  pop    %esi
0830d8ff +0xb7:  pop    %ebp
0830d900 +0xb8:  ret
0830d901 +0xb9:  nop
```

## 反编译 C

```c
// CBattle_Field::send_elevator_time_packet @ 0x830d848

/* CBattle_Field::send_elevator_time_packet(char) */

void __thiscall CBattle_Field::send_elevator_time_packet(CBattle_Field *this,char param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0830d877 to 0830d8d1 has its CatchHandler @ 0830d8d4 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xfd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)this[0x139]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(*(CParty **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
