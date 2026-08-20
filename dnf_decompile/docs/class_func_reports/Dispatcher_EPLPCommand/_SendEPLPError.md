# _SendEPLPError

`_ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh`

`Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EPLPCommand` | `0x081fed4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fed4c  _ZN22Dispatcher_EPLPCommand14_SendEPLPErrorEP6CPartyhh
#           Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char)
# range [0x081fed4c, 0x081fee13]
081fed4c +0x00:  push   %ebp
081fed4d +0x01:  mov    %esp,%ebp
081fed4f +0x03:  push   %esi
081fed50 +0x04:  push   %ebx
081fed51 +0x05:  sub    $0x30,%esp
081fed54 +0x08:  mov    0x10(%ebp),%edx
081fed57 +0x0b:  mov    0x14(%ebp),%eax
081fed5a +0x0e:  mov    %dl,-0x1c(%ebp)
081fed5d +0x11:  mov    %al,-0x20(%ebp)
081fed60 +0x14:  lea    -0x14(%ebp),%eax
081fed63 +0x17:  mov    %eax,(%esp)
081fed66 +0x1a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fed6b +0x1f:  movl   $0x4b,0x8(%esp)
081fed73 +0x27:  movl   $0x1,0x4(%esp)
081fed7b +0x2f:  lea    -0x14(%ebp),%eax
081fed7e +0x32:  mov    %eax,(%esp)
081fed81 +0x35:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081fed86 +0x3a:  movl   $0x0,0x4(%esp)
081fed8e +0x42:  lea    -0x14(%ebp),%eax
081fed91 +0x45:  mov    %eax,(%esp)
081fed94 +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fed99 +0x4d:  movzbl -0x20(%ebp),%eax
081fed9d +0x51:  mov    %eax,0x4(%esp)
081feda1 +0x55:  lea    -0x14(%ebp),%eax
081feda4 +0x58:  mov    %eax,(%esp)
081feda7 +0x5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fedac +0x60:  movzbl -0x1c(%ebp),%eax
081fedb0 +0x64:  mov    %eax,0x4(%esp)
081fedb4 +0x68:  lea    -0x14(%ebp),%eax
081fedb7 +0x6b:  mov    %eax,(%esp)
081fedba +0x6e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081fedbf +0x73:  movl   $0x1,0x4(%esp)
081fedc7 +0x7b:  lea    -0x14(%ebp),%eax
081fedca +0x7e:  mov    %eax,(%esp)
081fedcd +0x81:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081fedd2 +0x86:  lea    -0x14(%ebp),%eax
081fedd5 +0x89:  mov    %eax,0x4(%esp)
081fedd9 +0x8d:  mov    0xc(%ebp),%eax
081feddc +0x90:  mov    %eax,(%esp)
081feddf +0x93:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081fede4 +0x98:  jmp    081fee01 <+0xb5>
081fede6 +0x9a:  mov    %edx,%ebx
081fede8 +0x9c:  mov    %eax,%esi
081fedea +0x9e:  lea    -0x14(%ebp),%eax
081feded +0xa1:  mov    %eax,(%esp)
081fedf0 +0xa4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fedf5 +0xa9:  mov    %esi,%eax
081fedf7 +0xab:  mov    %ebx,%edx
081fedf9 +0xad:  mov    %eax,(%esp)
081fedfc +0xb0:  call   08ae3750 <_Unwind_Resume>
081fee01 +0xb5:  lea    -0x14(%ebp),%eax
081fee04 +0xb8:  mov    %eax,(%esp)
081fee07 +0xbb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fee0c +0xc0:  add    $0x30,%esp
081fee0f +0xc3:  pop    %ebx
081fee10 +0xc4:  pop    %esi
081fee11 +0xc5:  pop    %ebp
081fee12 +0xc6:  ret
081fee13 +0xc7:  nop
```

## 反编译 C

```c
// Dispatcher_EPLPCommand::_SendEPLPError @ 0x81fed4c

/* Dispatcher_EPLPCommand::_SendEPLPError(CParty*, unsigned char, unsigned char) */

void __thiscall
Dispatcher_EPLPCommand::_SendEPLPError
          (Dispatcher_EPLPCommand *this,CParty *param_1,uchar param_2,uchar param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081fed81 to 081fede3 has its CatchHandler @ 081fede6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x4b);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
