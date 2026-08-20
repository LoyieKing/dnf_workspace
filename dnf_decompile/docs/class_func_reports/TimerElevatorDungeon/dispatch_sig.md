# dispatch_sig

`_ZN20TimerElevatorDungeon12dispatch_sigEiij`

`TimerElevatorDungeon::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerElevatorDungeon` | `0x086381f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086381f2  _ZN20TimerElevatorDungeon12dispatch_sigEiij
#           TimerElevatorDungeon::dispatch_sig(int, int, unsigned int)
# range [0x086381f2, 0x0863825b]
086381f2 +0x00:  push   %ebp
086381f3 +0x01:  mov    %esp,%ebp
086381f5 +0x03:  sub    $0x28,%esp
086381f8 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086381fd +0x0b:  mov    0xc(%ebp),%edx
08638200 +0x0e:  mov    %edx,0x4(%esp)
08638204 +0x12:  mov    %eax,(%esp)
08638207 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
0863820c +0x1a:  mov    %eax,-0xc(%ebp)
0863820f +0x1d:  cmpl   $0x0,-0xc(%ebp)
08638213 +0x21:  jne    0863821c <+0x2a>
08638215 +0x23:  mov    $0x0,%eax
0863821a +0x28:  jmp    08638259 <+0x67>
0863821c +0x2a:  mov    0x10(%ebp),%eax
0863821f +0x2d:  mov    %eax,0x8(%esp)
08638223 +0x31:  movl   $0x28,0x4(%esp)
0863822b +0x39:  mov    -0xc(%ebp),%eax
0863822e +0x3c:  mov    %eax,(%esp)
08638231 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08638236 +0x44:  xor    $0x1,%eax
08638239 +0x47:  test   %al,%al
0863823b +0x49:  je     08638244 <+0x52>
0863823d +0x4b:  mov    $0x0,%eax
08638242 +0x50:  jmp    08638259 <+0x67>
08638244 +0x52:  mov    -0xc(%ebp),%eax
08638247 +0x55:  add    $0xb24,%eax
0863824c +0x5a:  mov    %eax,(%esp)
0863824f +0x5d:  call   0830d902 <_ZN13CBattle_Field20check_elevator_timerEv>  ; CBattle_Field::check_elevator_timer()
08638254 +0x62:  mov    $0x1,%eax
08638259 +0x67:  leave
0863825a +0x68:  ret
0863825b +0x69:  nop
```

## 反编译 C

```c
// TimerElevatorDungeon::dispatch_sig @ 0x86381f2

/* TimerElevatorDungeon::dispatch_sig(int, int, unsigned int) */

undefined4 TimerElevatorDungeon::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  undefined4 uVar4;
  
  iVar2 = G_CGameManager();
  pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
  if (pCVar3 == (CParty *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar3,0x28,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::check_elevator_timer((CBattle_Field *)(pCVar3 + 0xb24));
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
