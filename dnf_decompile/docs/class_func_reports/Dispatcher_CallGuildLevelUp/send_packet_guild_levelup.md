# send_packet_guild_levelup

`_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh`

`Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildLevelUp` | `0x08200126` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08200126  _ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh
#           Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char)
# range [0x08200126, 0x082001ef]
08200126 +0x00:  push   %ebp
08200127 +0x01:  mov    %esp,%ebp
08200129 +0x03:  push   %esi
0820012a +0x04:  push   %ebx
0820012b +0x05:  sub    $0x30,%esp
0820012e +0x08:  mov    0x10(%ebp),%eax
08200131 +0x0b:  mov    %al,-0x1c(%ebp)
08200134 +0x0e:  lea    -0x14(%ebp),%eax
08200137 +0x11:  mov    %eax,(%esp)
0820013a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820013f +0x19:  movl   $0x4c,0x8(%esp)
08200147 +0x21:  movl   $0x1,0x4(%esp)
0820014f +0x29:  lea    -0x14(%ebp),%eax
08200152 +0x2c:  mov    %eax,(%esp)
08200155 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820015a +0x34:  cmpb   $0x0,-0x1c(%ebp)
0820015e +0x38:  jne    08200175 <+0x4f>
08200160 +0x3a:  movl   $0x1,0x4(%esp)
08200168 +0x42:  lea    -0x14(%ebp),%eax
0820016b +0x45:  mov    %eax,(%esp)
0820016e +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08200173 +0x4d:  jmp    08200188 <+0x62>
08200175 +0x4f:  movl   $0x0,0x4(%esp)
0820017d +0x57:  lea    -0x14(%ebp),%eax
08200180 +0x5a:  mov    %eax,(%esp)
08200183 +0x5d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08200188 +0x62:  movzbl -0x1c(%ebp),%eax
0820018c +0x66:  mov    %eax,0x4(%esp)
08200190 +0x6a:  lea    -0x14(%ebp),%eax
08200193 +0x6d:  mov    %eax,(%esp)
08200196 +0x70:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820019b +0x75:  movl   $0x1,0x4(%esp)
082001a3 +0x7d:  lea    -0x14(%ebp),%eax
082001a6 +0x80:  mov    %eax,(%esp)
082001a9 +0x83:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082001ae +0x88:  lea    -0x14(%ebp),%eax
082001b1 +0x8b:  mov    %eax,0x4(%esp)
082001b5 +0x8f:  mov    0xc(%ebp),%eax
082001b8 +0x92:  mov    %eax,(%esp)
082001bb +0x95:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082001c0 +0x9a:  jmp    082001dd <+0xb7>
082001c2 +0x9c:  mov    %edx,%ebx
082001c4 +0x9e:  mov    %eax,%esi
082001c6 +0xa0:  lea    -0x14(%ebp),%eax
082001c9 +0xa3:  mov    %eax,(%esp)
082001cc +0xa6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082001d1 +0xab:  mov    %esi,%eax
082001d3 +0xad:  mov    %ebx,%edx
082001d5 +0xaf:  mov    %eax,(%esp)
082001d8 +0xb2:  call   08ae3750 <_Unwind_Resume>
082001dd +0xb7:  lea    -0x14(%ebp),%eax
082001e0 +0xba:  mov    %eax,(%esp)
082001e3 +0xbd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082001e8 +0xc2:  add    $0x30,%esp
082001eb +0xc5:  pop    %ebx
082001ec +0xc6:  pop    %esi
082001ed +0xc7:  pop    %ebp
082001ee +0xc8:  ret
082001ef +0xc9:  nop
```

## 反编译 C

```c
// Dispatcher_CallGuildLevelUp::send_packet_guild_levelup @ 0x8200126

/* Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char) */

void __thiscall
Dispatcher_CallGuildLevelUp::send_packet_guild_levelup
          (Dispatcher_CallGuildLevelUp *this,CUser *param_1,uchar param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08200155 to 082001bf has its CatchHandler @ 082001c2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x4c);
  if (param_2 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
