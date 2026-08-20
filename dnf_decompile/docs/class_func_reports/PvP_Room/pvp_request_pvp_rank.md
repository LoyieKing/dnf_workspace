# pvp_request_pvp_rank

`_ZN8PvP_Room20pvp_request_pvp_rankEv`

`PvP_Room::pvp_request_pvp_rank()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dcd7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dcd7e  _ZN8PvP_Room20pvp_request_pvp_rankEv
#           PvP_Room::pvp_request_pvp_rank()
# range [0x085dcd7e, 0x085dce27]
085dcd7e +0x00:  push   %ebp
085dcd7f +0x01:  mov    %esp,%ebp
085dcd81 +0x03:  push   %esi
085dcd82 +0x04:  push   %ebx
085dcd83 +0x05:  sub    $0x20,%esp
085dcd86 +0x08:  mov    0x8(%ebp),%eax
085dcd89 +0x0b:  movzbl 0x615(%eax),%eax
085dcd90 +0x12:  test   %al,%al
085dcd92 +0x14:  jne    085dce1f <+0xa1>
085dcd98 +0x1a:  mov    0x8(%ebp),%eax
085dcd9b +0x1d:  movb   $0x1,0x615(%eax)
085dcda2 +0x24:  lea    -0x14(%ebp),%eax
085dcda5 +0x27:  mov    %eax,(%esp)
085dcda8 +0x2a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085dcdad +0x2f:  movl   $0x31,0x8(%esp)
085dcdb5 +0x37:  movl   $0x0,0x4(%esp)
085dcdbd +0x3f:  lea    -0x14(%ebp),%eax
085dcdc0 +0x42:  mov    %eax,(%esp)
085dcdc3 +0x45:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dcdc8 +0x4a:  movl   $0x1,0x4(%esp)
085dcdd0 +0x52:  lea    -0x14(%ebp),%eax
085dcdd3 +0x55:  mov    %eax,(%esp)
085dcdd6 +0x58:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dcddb +0x5d:  lea    -0x14(%ebp),%eax
085dcdde +0x60:  mov    %eax,0x4(%esp)
085dcde2 +0x64:  mov    0x8(%ebp),%eax
085dcde5 +0x67:  mov    %eax,(%esp)
085dcde8 +0x6a:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085dcded +0x6f:  mov    0x8(%ebp),%eax
085dcdf0 +0x72:  movb   $0x1,0xc0(%eax)
085dcdf7 +0x79:  lea    -0x14(%ebp),%eax
085dcdfa +0x7c:  mov    %eax,(%esp)
085dcdfd +0x7f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dce02 +0x84:  jmp    085dce20 <+0xa2>
085dce04 +0x86:  mov    %edx,%ebx
085dce06 +0x88:  mov    %eax,%esi
085dce08 +0x8a:  lea    -0x14(%ebp),%eax
085dce0b +0x8d:  mov    %eax,(%esp)
085dce0e +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dce13 +0x95:  mov    %esi,%eax
085dce15 +0x97:  mov    %ebx,%edx
085dce17 +0x99:  mov    %eax,(%esp)
085dce1a +0x9c:  call   08ae3750 <_Unwind_Resume>
085dce1f +0xa1:  nop
085dce20 +0xa2:  add    $0x20,%esp
085dce23 +0xa5:  pop    %ebx
085dce24 +0xa6:  pop    %esi
085dce25 +0xa7:  pop    %ebp
085dce26 +0xa8:  ret
085dce27 +0xa9:  nop
```

## 反编译 C

```c
// PvP_Room::pvp_request_pvp_rank @ 0x85dcd7e

/* PvP_Room::pvp_request_pvp_rank() */

void __thiscall PvP_Room::pvp_request_pvp_rank(PvP_Room *this)

{
  PacketGuard local_18 [12];
  
  if (this[0x615] == (PvP_Room)0x0) {
    this[0x615] = (PvP_Room)0x1;
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dcdc3 to 085dcdec has its CatchHandler @ 085dce04 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x31);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_pvp(this,local_18);
    this[0xc0] = (PvP_Room)0x1;
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
