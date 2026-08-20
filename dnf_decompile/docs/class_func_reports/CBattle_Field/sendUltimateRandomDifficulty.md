# sendUltimateRandomDifficulty

`_ZN13CBattle_Field28sendUltimateRandomDifficultyEiii`

`CBattle_Field::sendUltimateRandomDifficulty(int, int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830637c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830637c  _ZN13CBattle_Field28sendUltimateRandomDifficultyEiii
#           CBattle_Field::sendUltimateRandomDifficulty(int, int, int)
# range [0x0830637c, 0x08306435]
0830637c +0x00:  push   %ebp
0830637d +0x01:  mov    %esp,%ebp
0830637f +0x03:  push   %esi
08306380 +0x04:  push   %ebx
08306381 +0x05:  sub    $0x20,%esp
08306384 +0x08:  lea    -0x14(%ebp),%eax
08306387 +0x0b:  mov    %eax,(%esp)
0830638a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0830638f +0x13:  movl   $0x126,0x8(%esp)
08306397 +0x1b:  movl   $0x0,0x4(%esp)
0830639f +0x23:  lea    -0x14(%ebp),%eax
083063a2 +0x26:  mov    %eax,(%esp)
083063a5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083063aa +0x2e:  mov    0xc(%ebp),%eax
083063ad +0x31:  mov    %eax,0x4(%esp)
083063b1 +0x35:  lea    -0x14(%ebp),%eax
083063b4 +0x38:  mov    %eax,(%esp)
083063b7 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083063bc +0x40:  mov    0x10(%ebp),%eax
083063bf +0x43:  mov    %eax,0x4(%esp)
083063c3 +0x47:  lea    -0x14(%ebp),%eax
083063c6 +0x4a:  mov    %eax,(%esp)
083063c9 +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083063ce +0x52:  mov    0x14(%ebp),%eax
083063d1 +0x55:  mov    %eax,0x4(%esp)
083063d5 +0x59:  lea    -0x14(%ebp),%eax
083063d8 +0x5c:  mov    %eax,(%esp)
083063db +0x5f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083063e0 +0x64:  movl   $0x1,0x4(%esp)
083063e8 +0x6c:  lea    -0x14(%ebp),%eax
083063eb +0x6f:  mov    %eax,(%esp)
083063ee +0x72:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083063f3 +0x77:  mov    0x8(%ebp),%eax
083063f6 +0x7a:  mov    (%eax),%eax
083063f8 +0x7c:  lea    -0x14(%ebp),%edx
083063fb +0x7f:  mov    %edx,0x4(%esp)
083063ff +0x83:  mov    %eax,(%esp)
08306402 +0x86:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08306407 +0x8b:  jmp    08306424 <+0xa8>
08306409 +0x8d:  mov    %edx,%ebx
0830640b +0x8f:  mov    %eax,%esi
0830640d +0x91:  lea    -0x14(%ebp),%eax
08306410 +0x94:  mov    %eax,(%esp)
08306413 +0x97:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08306418 +0x9c:  mov    %esi,%eax
0830641a +0x9e:  mov    %ebx,%edx
0830641c +0xa0:  mov    %eax,(%esp)
0830641f +0xa3:  call   08ae3750 <_Unwind_Resume>
08306424 +0xa8:  lea    -0x14(%ebp),%eax
08306427 +0xab:  mov    %eax,(%esp)
0830642a +0xae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0830642f +0xb3:  add    $0x20,%esp
08306432 +0xb6:  pop    %ebx
08306433 +0xb7:  pop    %esi
08306434 +0xb8:  pop    %ebp
08306435 +0xb9:  ret
```

## 反编译 C

```c
// CBattle_Field::sendUltimateRandomDifficulty @ 0x830637c

/* CBattle_Field::sendUltimateRandomDifficulty(int, int, int) */

void __thiscall
CBattle_Field::sendUltimateRandomDifficulty(CBattle_Field *this,int param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 083063a5 to 08306406 has its CatchHandler @ 08306409 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x126);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(*(CParty **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
