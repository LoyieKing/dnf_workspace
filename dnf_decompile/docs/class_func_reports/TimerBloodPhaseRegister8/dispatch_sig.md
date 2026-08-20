# dispatch_sig

`_ZN24TimerBloodPhaseRegister812dispatch_sigEiij`

`TimerBloodPhaseRegister8::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister8` | `0x0863555c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863555c  _ZN24TimerBloodPhaseRegister812dispatch_sigEiij
#           TimerBloodPhaseRegister8::dispatch_sig(int, int, unsigned int)
# range [0x0863555c, 0x086355fd]
0863555c +0x00:  push   %ebp
0863555d +0x01:  mov    %esp,%ebp
0863555f +0x03:  sub    $0x38,%esp
08635562 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635567 +0x0b:  mov    0xc(%ebp),%edx
0863556a +0x0e:  mov    %edx,0x4(%esp)
0863556e +0x12:  mov    %eax,(%esp)
08635571 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08635576 +0x1a:  mov    %eax,-0x14(%ebp)
08635579 +0x1d:  cmpl   $0x0,-0x14(%ebp)
0863557d +0x21:  jne    08635586 <+0x2a>
0863557f +0x23:  mov    $0x0,%eax
08635584 +0x28:  jmp    086355fc <+0xa0>
08635586 +0x2a:  mov    0x10(%ebp),%eax
08635589 +0x2d:  mov    %eax,0x8(%esp)
0863558d +0x31:  movl   $0x1f,0x4(%esp)
08635595 +0x39:  mov    -0x14(%ebp),%eax
08635598 +0x3c:  mov    %eax,(%esp)
0863559b +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086355a0 +0x44:  xor    $0x1,%eax
086355a3 +0x47:  test   %al,%al
086355a5 +0x49:  je     086355ae <+0x52>
086355a7 +0x4b:  mov    $0x0,%eax
086355ac +0x50:  jmp    086355fc <+0xa0>
086355ae +0x52:  mov    -0x14(%ebp),%eax
086355b1 +0x55:  movzwl 0xdac(%eax),%eax
086355b8 +0x5c:  mov    %ax,-0xe(%ebp)
086355bc +0x60:  mov    -0x14(%ebp),%eax
086355bf +0x63:  add    $0xdc2,%eax
086355c4 +0x68:  mov    %eax,-0xc(%ebp)
086355c7 +0x6b:  movswl -0xe(%ebp),%eax
086355cb +0x6f:  mov    -0x14(%ebp),%edx
086355ce +0x72:  lea    0xb24(%edx),%ecx
086355d4 +0x78:  movl   $0x8,0x10(%esp)
086355dc +0x80:  movl   $0x1f,0xc(%esp)
086355e4 +0x88:  mov    -0xc(%ebp),%edx
086355e7 +0x8b:  mov    %edx,0x8(%esp)
086355eb +0x8f:  mov    %eax,0x4(%esp)
086355ef +0x93:  mov    %ecx,(%esp)
086355f2 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
086355f7 +0x9b:  mov    $0x1,%eax
086355fc +0xa0:  leave
086355fd +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister8::dispatch_sig @ 0x863555c

/* TimerBloodPhaseRegister8::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister8::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1f,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xdac),
                 (short *)(pCVar3 + 0xdc2),0x1f,8);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
