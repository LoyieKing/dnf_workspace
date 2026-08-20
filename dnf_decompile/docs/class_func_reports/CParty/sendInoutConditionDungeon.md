# sendInoutConditionDungeon

`_ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE`

`CParty::sendInoutConditionDungeon(RetryFailReason::T)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ac95e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ac95e  _ZN6CParty25sendInoutConditionDungeonEN15RetryFailReason1TE
#           CParty::sendInoutConditionDungeon(RetryFailReason::T)
# range [0x085ac95e, 0x085aca09]
085ac95e +0x00:  push   %ebp
085ac95f +0x01:  mov    %esp,%ebp
085ac961 +0x03:  push   %esi
085ac962 +0x04:  push   %ebx
085ac963 +0x05:  sub    $0x20,%esp
085ac966 +0x08:  cmpl   $0xa,0xc(%ebp)
085ac96a +0x0c:  je     085aca02 <+0xa4>
085ac970 +0x12:  lea    -0x14(%ebp),%eax
085ac973 +0x15:  mov    %eax,(%esp)
085ac976 +0x18:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085ac97b +0x1d:  lea    -0x14(%ebp),%eax
085ac97e +0x20:  mov    %eax,(%esp)
085ac981 +0x23:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085ac986 +0x28:  movl   $0x104,0x8(%esp)
085ac98e +0x30:  movl   $0x0,0x4(%esp)
085ac996 +0x38:  lea    -0x14(%ebp),%eax
085ac999 +0x3b:  mov    %eax,(%esp)
085ac99c +0x3e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085ac9a1 +0x43:  mov    0xc(%ebp),%eax
085ac9a4 +0x46:  mov    %eax,0x4(%esp)
085ac9a8 +0x4a:  lea    -0x14(%ebp),%eax
085ac9ab +0x4d:  mov    %eax,(%esp)
085ac9ae +0x50:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085ac9b3 +0x55:  movl   $0x1,0x4(%esp)
085ac9bb +0x5d:  lea    -0x14(%ebp),%eax
085ac9be +0x60:  mov    %eax,(%esp)
085ac9c1 +0x63:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085ac9c6 +0x68:  lea    -0x14(%ebp),%eax
085ac9c9 +0x6b:  mov    %eax,0x4(%esp)
085ac9cd +0x6f:  mov    0x8(%ebp),%eax
085ac9d0 +0x72:  mov    %eax,(%esp)
085ac9d3 +0x75:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085ac9d8 +0x7a:  jmp    085ac9f5 <+0x97>
085ac9da +0x7c:  mov    %edx,%ebx
085ac9dc +0x7e:  mov    %eax,%esi
085ac9de +0x80:  lea    -0x14(%ebp),%eax
085ac9e1 +0x83:  mov    %eax,(%esp)
085ac9e4 +0x86:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085ac9e9 +0x8b:  mov    %esi,%eax
085ac9eb +0x8d:  mov    %ebx,%edx
085ac9ed +0x8f:  mov    %eax,(%esp)
085ac9f0 +0x92:  call   08ae3750 <_Unwind_Resume>
085ac9f5 +0x97:  lea    -0x14(%ebp),%eax
085ac9f8 +0x9a:  mov    %eax,(%esp)
085ac9fb +0x9d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085aca00 +0xa2:  jmp    085aca03 <+0xa5>
085aca02 +0xa4:  nop
085aca03 +0xa5:  add    $0x20,%esp
085aca06 +0xa8:  pop    %ebx
085aca07 +0xa9:  pop    %esi
085aca08 +0xaa:  pop    %ebp
085aca09 +0xab:  ret
```

## 反编译 C

```c
// CParty::sendInoutConditionDungeon @ 0x85ac95e

/* CParty::sendInoutConditionDungeon(RetryFailReason::T) */

void __thiscall CParty::sendInoutConditionDungeon(CParty *this,int param_2)

{
  PacketGuard local_18 [12];
  
  if (param_2 != 10) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ac981 to 085ac9d7 has its CatchHandler @ 085ac9da */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x104);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_party(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
