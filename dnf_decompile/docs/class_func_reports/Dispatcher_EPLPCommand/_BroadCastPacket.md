# _BroadCastPacket

`_ZN22Dispatcher_EPLPCommand16_BroadCastPacketEP6CPartyR16MSG_EPLP_COMMAND`

`Dispatcher_EPLPCommand::_BroadCastPacket(CParty*, MSG_EPLP_COMMAND&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EPLPCommand` | `0x081fee14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fee14  _ZN22Dispatcher_EPLPCommand16_BroadCastPacketEP6CPartyR16MSG_EPLP_COMMAND
#           Dispatcher_EPLPCommand::_BroadCastPacket(CParty*, MSG_EPLP_COMMAND&)
# range [0x081fee14, 0x081feedb]
081fee14 +0x00:  push   %ebp
081fee15 +0x01:  mov    %esp,%ebp
081fee17 +0x03:  push   %esi
081fee18 +0x04:  push   %ebx
081fee19 +0x05:  sub    $0x20,%esp
081fee1c +0x08:  lea    -0x14(%ebp),%eax
081fee1f +0x0b:  mov    %eax,(%esp)
081fee22 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fee27 +0x13:  movl   $0x4b,0x8(%esp)
081fee2f +0x1b:  movl   $0x1,0x4(%esp)
081fee37 +0x23:  lea    -0x14(%ebp),%eax
081fee3a +0x26:  mov    %eax,(%esp)
081fee3d +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fee42 +0x2e:  movl   $0x1,0x4(%esp)
081fee4a +0x36:  lea    -0x14(%ebp),%eax
081fee4d +0x39:  mov    %eax,(%esp)
081fee50 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fee55 +0x41:  mov    0x10(%ebp),%eax
081fee58 +0x44:  movzbl 0xd(%eax),%eax
081fee5c +0x48:  movzbl %al,%eax
081fee5f +0x4b:  mov    %eax,0x4(%esp)
081fee63 +0x4f:  lea    -0x14(%ebp),%eax
081fee66 +0x52:  mov    %eax,(%esp)
081fee69 +0x55:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fee6e +0x5a:  mov    0x10(%ebp),%eax
081fee71 +0x5d:  movzbl 0xe(%eax),%eax
081fee75 +0x61:  movzbl %al,%eax
081fee78 +0x64:  mov    %eax,0x4(%esp)
081fee7c +0x68:  lea    -0x14(%ebp),%eax
081fee7f +0x6b:  mov    %eax,(%esp)
081fee82 +0x6e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fee87 +0x73:  movl   $0x1,0x4(%esp)
081fee8f +0x7b:  lea    -0x14(%ebp),%eax
081fee92 +0x7e:  mov    %eax,(%esp)
081fee95 +0x81:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fee9a +0x86:  lea    -0x14(%ebp),%eax
081fee9d +0x89:  mov    %eax,0x4(%esp)
081feea1 +0x8d:  mov    0xc(%ebp),%eax
081feea4 +0x90:  mov    %eax,(%esp)
081feea7 +0x93:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081feeac +0x98:  jmp    081feec9 <+0xb5>
081feeae +0x9a:  mov    %edx,%ebx
081feeb0 +0x9c:  mov    %eax,%esi
081feeb2 +0x9e:  lea    -0x14(%ebp),%eax
081feeb5 +0xa1:  mov    %eax,(%esp)
081feeb8 +0xa4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081feebd +0xa9:  mov    %esi,%eax
081feebf +0xab:  mov    %ebx,%edx
081feec1 +0xad:  mov    %eax,(%esp)
081feec4 +0xb0:  call   08ae3750 <_Unwind_Resume>
081feec9 +0xb5:  lea    -0x14(%ebp),%eax
081feecc +0xb8:  mov    %eax,(%esp)
081feecf +0xbb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081feed4 +0xc0:  add    $0x20,%esp
081feed7 +0xc3:  pop    %ebx
081feed8 +0xc4:  pop    %esi
081feed9 +0xc5:  pop    %ebp
081feeda +0xc6:  ret
081feedb +0xc7:  nop
```

## 反编译 C

```c
// Dispatcher_EPLPCommand::_BroadCastPacket @ 0x81fee14

/* Dispatcher_EPLPCommand::_BroadCastPacket(CParty*, MSG_EPLP_COMMAND&) */

void __thiscall
Dispatcher_EPLPCommand::_BroadCastPacket
          (Dispatcher_EPLPCommand *this,CParty *param_1,MSG_EPLP_COMMAND *param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081fee3d to 081feeab has its CatchHandler @ 081feeae */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x4b);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(byte)param_2[0xd]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(byte)param_2[0xe]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
