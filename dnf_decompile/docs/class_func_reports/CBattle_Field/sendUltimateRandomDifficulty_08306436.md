# sendUltimateRandomDifficulty

`_ZN13CBattle_Field28sendUltimateRandomDifficultyEii`

`CBattle_Field::sendUltimateRandomDifficulty(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306436  _ZN13CBattle_Field28sendUltimateRandomDifficultyEii
#           CBattle_Field::sendUltimateRandomDifficulty(int, int)
# range [0x08306436, 0x083064dd]
08306436 +0x00:  push   %ebp
08306437 +0x01:  mov    %esp,%ebp
08306439 +0x03:  push   %esi
0830643a +0x04:  push   %ebx
0830643b +0x05:  sub    $0x20,%esp
0830643e +0x08:  lea    -0x14(%ebp),%eax
08306441 +0x0b:  mov    %eax,(%esp)
08306444 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08306449 +0x13:  movl   $0x126,0x8(%esp)
08306451 +0x1b:  movl   $0x0,0x4(%esp)
08306459 +0x23:  lea    -0x14(%ebp),%eax
0830645c +0x26:  mov    %eax,(%esp)
0830645f +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08306464 +0x2e:  mov    0xc(%ebp),%eax
08306467 +0x31:  mov    %eax,0x4(%esp)
0830646b +0x35:  lea    -0x14(%ebp),%eax
0830646e +0x38:  mov    %eax,(%esp)
08306471 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08306476 +0x40:  mov    0x10(%ebp),%eax
08306479 +0x43:  mov    %eax,0x4(%esp)
0830647d +0x47:  lea    -0x14(%ebp),%eax
08306480 +0x4a:  mov    %eax,(%esp)
08306483 +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08306488 +0x52:  movl   $0x1,0x4(%esp)
08306490 +0x5a:  lea    -0x14(%ebp),%eax
08306493 +0x5d:  mov    %eax,(%esp)
08306496 +0x60:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0830649b +0x65:  mov    0x8(%ebp),%eax
0830649e +0x68:  mov    (%eax),%eax
083064a0 +0x6a:  lea    -0x14(%ebp),%edx
083064a3 +0x6d:  mov    %edx,0x4(%esp)
083064a7 +0x71:  mov    %eax,(%esp)
083064aa +0x74:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
083064af +0x79:  jmp    083064cc <+0x96>
083064b1 +0x7b:  mov    %edx,%ebx
083064b3 +0x7d:  mov    %eax,%esi
083064b5 +0x7f:  lea    -0x14(%ebp),%eax
083064b8 +0x82:  mov    %eax,(%esp)
083064bb +0x85:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083064c0 +0x8a:  mov    %esi,%eax
083064c2 +0x8c:  mov    %ebx,%edx
083064c4 +0x8e:  mov    %eax,(%esp)
083064c7 +0x91:  call   08ae3750 <_Unwind_Resume>
083064cc +0x96:  lea    -0x14(%ebp),%eax
083064cf +0x99:  mov    %eax,(%esp)
083064d2 +0x9c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083064d7 +0xa1:  add    $0x20,%esp
083064da +0xa4:  pop    %ebx
083064db +0xa5:  pop    %esi
083064dc +0xa6:  pop    %ebp
083064dd +0xa7:  ret
```

## 反编译 C

```c
// CBattle_Field::sendUltimateRandomDifficulty @ 0x8306436

/* CBattle_Field::sendUltimateRandomDifficulty(int, int) */

void __thiscall
CBattle_Field::sendUltimateRandomDifficulty(CBattle_Field *this,int param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0830645f to 083064ae has its CatchHandler @ 083064b1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x126);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(*(CParty **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
