# send_packet_guild_invite

`_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh`

`Dispatcher_CallGuildInvite::send_packet_guild_invite(CUser*, unsigned char)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildInvite` | `0x08207852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08207852  _ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh
#           Dispatcher_CallGuildInvite::send_packet_guild_invite(CUser*, unsigned char)
# range [0x08207852, 0x0820791b]
08207852 +0x00:  push   %ebp
08207853 +0x01:  mov    %esp,%ebp
08207855 +0x03:  push   %esi
08207856 +0x04:  push   %ebx
08207857 +0x05:  sub    $0x30,%esp
0820785a +0x08:  mov    0x10(%ebp),%eax
0820785d +0x0b:  mov    %al,-0x1c(%ebp)
08207860 +0x0e:  lea    -0x14(%ebp),%eax
08207863 +0x11:  mov    %eax,(%esp)
08207866 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820786b +0x19:  movl   $0x9a,0x8(%esp)
08207873 +0x21:  movl   $0x1,0x4(%esp)
0820787b +0x29:  lea    -0x14(%ebp),%eax
0820787e +0x2c:  mov    %eax,(%esp)
08207881 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08207886 +0x34:  cmpb   $0x0,-0x1c(%ebp)
0820788a +0x38:  jne    082078a1 <+0x4f>
0820788c +0x3a:  movl   $0x1,0x4(%esp)
08207894 +0x42:  lea    -0x14(%ebp),%eax
08207897 +0x45:  mov    %eax,(%esp)
0820789a +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820789f +0x4d:  jmp    082078c7 <+0x75>
082078a1 +0x4f:  movl   $0x0,0x4(%esp)
082078a9 +0x57:  lea    -0x14(%ebp),%eax
082078ac +0x5a:  mov    %eax,(%esp)
082078af +0x5d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082078b4 +0x62:  movzbl -0x1c(%ebp),%eax
082078b8 +0x66:  mov    %eax,0x4(%esp)
082078bc +0x6a:  lea    -0x14(%ebp),%eax
082078bf +0x6d:  mov    %eax,(%esp)
082078c2 +0x70:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082078c7 +0x75:  movl   $0x1,0x4(%esp)
082078cf +0x7d:  lea    -0x14(%ebp),%eax
082078d2 +0x80:  mov    %eax,(%esp)
082078d5 +0x83:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082078da +0x88:  lea    -0x14(%ebp),%eax
082078dd +0x8b:  mov    %eax,0x4(%esp)
082078e1 +0x8f:  mov    0xc(%ebp),%eax
082078e4 +0x92:  mov    %eax,(%esp)
082078e7 +0x95:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082078ec +0x9a:  jmp    08207909 <+0xb7>
082078ee +0x9c:  mov    %edx,%ebx
082078f0 +0x9e:  mov    %eax,%esi
082078f2 +0xa0:  lea    -0x14(%ebp),%eax
082078f5 +0xa3:  mov    %eax,(%esp)
082078f8 +0xa6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082078fd +0xab:  mov    %esi,%eax
082078ff +0xad:  mov    %ebx,%edx
08207901 +0xaf:  mov    %eax,(%esp)
08207904 +0xb2:  call   08ae3750 <_Unwind_Resume>
08207909 +0xb7:  lea    -0x14(%ebp),%eax
0820790c +0xba:  mov    %eax,(%esp)
0820790f +0xbd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08207914 +0xc2:  add    $0x30,%esp
08207917 +0xc5:  pop    %ebx
08207918 +0xc6:  pop    %esi
08207919 +0xc7:  pop    %ebp
0820791a +0xc8:  ret
0820791b +0xc9:  nop
```

## 反编译 C

```c
// Dispatcher_CallGuildInvite::send_packet_guild_invite @ 0x8207852

/* Dispatcher_CallGuildInvite::send_packet_guild_invite(CUser*, unsigned char) */

void __thiscall
Dispatcher_CallGuildInvite::send_packet_guild_invite
          (Dispatcher_CallGuildInvite *this,CUser *param_1,uchar param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08207881 to 082078eb has its CatchHandler @ 082078ee */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x9a);
  if (param_2 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
