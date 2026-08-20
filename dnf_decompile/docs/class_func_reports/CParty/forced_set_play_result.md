# forced_set_play_result

`_ZN6CParty22forced_set_play_resultEv`

`CParty::forced_set_play_result()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b26e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b26e8  _ZN6CParty22forced_set_play_resultEv
#           CParty::forced_set_play_result()
# range [0x085b26e8, 0x085b27c7]
085b26e8 +0x00:  push   %ebp
085b26e9 +0x01:  mov    %esp,%ebp
085b26eb +0x03:  push   %esi
085b26ec +0x04:  push   %ebx
085b26ed +0x05:  sub    $0x20,%esp
085b26f0 +0x08:  mov    0x8(%ebp),%eax
085b26f3 +0x0b:  movzbl 0x6a(%eax),%eax
085b26f7 +0x0f:  cmp    $0x3,%al
085b26f9 +0x11:  je     085b27c0 <+0xd8>
085b26ff +0x17:  lea    -0x14(%ebp),%eax
085b2702 +0x1a:  mov    %eax,(%esp)
085b2705 +0x1d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b270a +0x22:  movl   $0x22,0x8(%esp)
085b2712 +0x2a:  movl   $0x0,0x4(%esp)
085b271a +0x32:  lea    -0x14(%ebp),%eax
085b271d +0x35:  mov    %eax,(%esp)
085b2720 +0x38:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b2725 +0x3d:  movl   $0x0,0x4(%esp)
085b272d +0x45:  lea    -0x14(%ebp),%eax
085b2730 +0x48:  mov    %eax,(%esp)
085b2733 +0x4b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b2738 +0x50:  movl   $0x0,0x4(%esp)
085b2740 +0x58:  lea    -0x14(%ebp),%eax
085b2743 +0x5b:  mov    %eax,(%esp)
085b2746 +0x5e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b274b +0x63:  movl   $0x0,0x4(%esp)
085b2753 +0x6b:  lea    -0x14(%ebp),%eax
085b2756 +0x6e:  mov    %eax,(%esp)
085b2759 +0x71:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b275e +0x76:  movl   $0x0,0x4(%esp)
085b2766 +0x7e:  lea    -0x14(%ebp),%eax
085b2769 +0x81:  mov    %eax,(%esp)
085b276c +0x84:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b2771 +0x89:  movl   $0x1,0x4(%esp)
085b2779 +0x91:  lea    -0x14(%ebp),%eax
085b277c +0x94:  mov    %eax,(%esp)
085b277f +0x97:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b2784 +0x9c:  lea    -0x14(%ebp),%eax
085b2787 +0x9f:  mov    %eax,0x4(%esp)
085b278b +0xa3:  mov    0x8(%ebp),%eax
085b278e +0xa6:  mov    %eax,(%esp)
085b2791 +0xa9:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b2796 +0xae:  jmp    085b27b3 <+0xcb>
085b2798 +0xb0:  mov    %edx,%ebx
085b279a +0xb2:  mov    %eax,%esi
085b279c +0xb4:  lea    -0x14(%ebp),%eax
085b279f +0xb7:  mov    %eax,(%esp)
085b27a2 +0xba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b27a7 +0xbf:  mov    %esi,%eax
085b27a9 +0xc1:  mov    %ebx,%edx
085b27ab +0xc3:  mov    %eax,(%esp)
085b27ae +0xc6:  call   08ae3750 <_Unwind_Resume>
085b27b3 +0xcb:  lea    -0x14(%ebp),%eax
085b27b6 +0xce:  mov    %eax,(%esp)
085b27b9 +0xd1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b27be +0xd6:  jmp    085b27c1 <+0xd9>
085b27c0 +0xd8:  nop
085b27c1 +0xd9:  add    $0x20,%esp
085b27c4 +0xdc:  pop    %ebx
085b27c5 +0xdd:  pop    %esi
085b27c6 +0xde:  pop    %ebp
085b27c7 +0xdf:  ret
```

## 反编译 C

```c
// CParty::forced_set_play_result @ 0x85b26e8

/* CParty::forced_set_play_result() */

void __thiscall CParty::forced_set_play_result(CParty *this)

{
  PacketGuard local_18 [12];
  
  if (this[0x6a] != (CParty)0x3) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085b2720 to 085b2795 has its CatchHandler @ 085b2798 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_party(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
