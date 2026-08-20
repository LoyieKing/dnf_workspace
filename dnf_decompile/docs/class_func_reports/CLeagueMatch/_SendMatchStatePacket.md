# _SendMatchStatePacket

`_ZN12CLeagueMatch21_SendMatchStatePacketEii`

`CLeagueMatch::_SendMatchStatePacket(int, int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e664` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e664  _ZN12CLeagueMatch21_SendMatchStatePacketEii
#           CLeagueMatch::_SendMatchStatePacket(int, int)
# range [0x0855e664, 0x0855e7a7]
0855e664 +0x000:  push   %ebp
0855e665 +0x001:  mov    %esp,%ebp
0855e667 +0x003:  push   %esi
0855e668 +0x004:  push   %ebx
0855e669 +0x005:  sub    $0x30,%esp
0855e66c +0x008:  lea    -0x20(%ebp),%eax
0855e66f +0x00b:  mov    %eax,(%esp)
0855e672 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0855e677 +0x013:  movl   $0xaf,0x8(%esp)
0855e67f +0x01b:  movl   $0x0,0x4(%esp)
0855e687 +0x023:  lea    -0x20(%ebp),%eax
0855e68a +0x026:  mov    %eax,(%esp)
0855e68d +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855e692 +0x02e:  mov    0xc(%ebp),%eax
0855e695 +0x031:  mov    %eax,0x4(%esp)
0855e699 +0x035:  lea    -0x20(%ebp),%eax
0855e69c +0x038:  mov    %eax,(%esp)
0855e69f +0x03b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855e6a4 +0x040:  movl   $0x1,0x4(%esp)
0855e6ac +0x048:  lea    -0x20(%ebp),%eax
0855e6af +0x04b:  mov    %eax,(%esp)
0855e6b2 +0x04e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855e6b7 +0x053:  movl   $0x0,-0x14(%ebp)
0855e6be +0x05a:  jmp    0855e767 <+0x103>
0855e6c3 +0x05f:  movl   $0x0,-0x10(%ebp)
0855e6ca +0x066:  jmp    0855e754 <+0xf0>
0855e6cf +0x06b:  mov    -0x14(%ebp),%ecx
0855e6d2 +0x06e:  mov    -0x10(%ebp),%eax
0855e6d5 +0x071:  mov    0x8(%ebp),%ebx
0855e6d8 +0x074:  shl    $0x2,%eax
0855e6db +0x077:  lea    0x0(,%eax,8),%edx
0855e6e2 +0x07e:  sub    %eax,%edx
0855e6e4 +0x080:  mov    %ecx,%eax
0855e6e6 +0x082:  mov    %eax,%ecx
0855e6e8 +0x084:  shl    $0x4,%ecx
0855e6eb +0x087:  lea    0x0(,%ecx,8),%eax
0855e6f2 +0x08e:  sub    %ecx,%eax
0855e6f4 +0x090:  lea    (%edx,%eax,1),%eax
0855e6f7 +0x093:  lea    (%ebx,%eax,1),%eax
0855e6fa +0x096:  add    $0x24,%eax
0855e6fd +0x099:  mov    (%eax),%eax
0855e6ff +0x09b:  mov    %eax,-0xc(%ebp)
0855e702 +0x09e:  mov    -0x14(%ebp),%ecx
0855e705 +0x0a1:  mov    -0x10(%ebp),%eax
0855e708 +0x0a4:  mov    0x8(%ebp),%ebx
0855e70b +0x0a7:  shl    $0x2,%eax
0855e70e +0x0aa:  lea    0x0(,%eax,8),%edx
0855e715 +0x0b1:  sub    %eax,%edx
0855e717 +0x0b3:  mov    %ecx,%eax
0855e719 +0x0b5:  mov    %eax,%ecx
0855e71b +0x0b7:  shl    $0x4,%ecx
0855e71e +0x0ba:  lea    0x0(,%ecx,8),%eax
0855e725 +0x0c1:  sub    %ecx,%eax
0855e727 +0x0c3:  lea    (%edx,%eax,1),%eax
0855e72a +0x0c6:  lea    (%ebx,%eax,1),%eax
0855e72d +0x0c9:  add    $0x10,%eax
0855e730 +0x0cc:  movzbl 0x18(%eax),%eax
0855e734 +0x0d0:  test   %al,%al
0855e736 +0x0d2:  je     0855e750 <+0xec>
0855e738 +0x0d4:  cmpl   $0x0,-0xc(%ebp)
0855e73c +0x0d8:  je     0855e750 <+0xec>
0855e73e +0x0da:  lea    -0x20(%ebp),%eax
0855e741 +0x0dd:  mov    %eax,0x4(%esp)
0855e745 +0x0e1:  mov    -0xc(%ebp),%eax
0855e748 +0x0e4:  mov    %eax,(%esp)
0855e74b +0x0e7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855e750 +0x0ec:  addl   $0x1,-0x10(%ebp)
0855e754 +0x0f0:  cmpl   $0x3,-0x10(%ebp)
0855e758 +0x0f4:  setle  %al
0855e75b +0x0f7:  test   %al,%al
0855e75d +0x0f9:  jne    0855e6cf <+0x6b>
0855e763 +0x0ff:  addl   $0x1,-0x14(%ebp)
0855e767 +0x103:  mov    -0x14(%ebp),%eax
0855e76a +0x106:  cmp    0x10(%ebp),%eax
0855e76d +0x109:  setl   %al
0855e770 +0x10c:  test   %al,%al
0855e772 +0x10e:  jne    0855e6c3 <+0x5f>
0855e778 +0x114:  jmp    0855e795 <+0x131>
0855e77a +0x116:  mov    %edx,%ebx
0855e77c +0x118:  mov    %eax,%esi
0855e77e +0x11a:  lea    -0x20(%ebp),%eax
0855e781 +0x11d:  mov    %eax,(%esp)
0855e784 +0x120:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855e789 +0x125:  mov    %esi,%eax
0855e78b +0x127:  mov    %ebx,%edx
0855e78d +0x129:  mov    %eax,(%esp)
0855e790 +0x12c:  call   08ae3750 <_Unwind_Resume>
0855e795 +0x131:  lea    -0x20(%ebp),%eax
0855e798 +0x134:  mov    %eax,(%esp)
0855e79b +0x137:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855e7a0 +0x13c:  add    $0x30,%esp
0855e7a3 +0x13f:  pop    %ebx
0855e7a4 +0x140:  pop    %esi
0855e7a5 +0x141:  pop    %ebp
0855e7a6 +0x142:  ret
0855e7a7 +0x143:  nop
```

## 反编译 C

```c
// CLeagueMatch::_SendMatchStatePacket @ 0x855e664

/* CLeagueMatch::_SendMatchStatePacket(int, int) */

void __thiscall CLeagueMatch::_SendMatchStatePacket(CLeagueMatch *this,int param_1,int param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0855e68d to 0855e74f has its CatchHandler @ 0855e77a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xaf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + local_14 * 0x1c + local_18 * 0x70 + 0x24);
      if ((this[local_14 * 0x1c + local_18 * 0x70 + 0x28] != (CLeagueMatch)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
