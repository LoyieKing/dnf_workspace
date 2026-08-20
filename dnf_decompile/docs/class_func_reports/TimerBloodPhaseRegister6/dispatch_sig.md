# dispatch_sig

`_ZN24TimerBloodPhaseRegister612dispatch_sigEiij`

`TimerBloodPhaseRegister6::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister6` | `0x08635418` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635418  _ZN24TimerBloodPhaseRegister612dispatch_sigEiij
#           TimerBloodPhaseRegister6::dispatch_sig(int, int, unsigned int)
# range [0x08635418, 0x086354b9]
08635418 +0x00:  push   %ebp
08635419 +0x01:  mov    %esp,%ebp
0863541b +0x03:  sub    $0x38,%esp
0863541e +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635423 +0x0b:  mov    0xc(%ebp),%edx
08635426 +0x0e:  mov    %edx,0x4(%esp)
0863542a +0x12:  mov    %eax,(%esp)
0863542d +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08635432 +0x1a:  mov    %eax,-0x14(%ebp)
08635435 +0x1d:  cmpl   $0x0,-0x14(%ebp)
08635439 +0x21:  jne    08635442 <+0x2a>
0863543b +0x23:  mov    $0x0,%eax
08635440 +0x28:  jmp    086354b8 <+0xa0>
08635442 +0x2a:  mov    0x10(%ebp),%eax
08635445 +0x2d:  mov    %eax,0x8(%esp)
08635449 +0x31:  movl   $0x1d,0x4(%esp)
08635451 +0x39:  mov    -0x14(%ebp),%eax
08635454 +0x3c:  mov    %eax,(%esp)
08635457 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863545c +0x44:  xor    $0x1,%eax
0863545f +0x47:  test   %al,%al
08635461 +0x49:  je     0863546a <+0x52>
08635463 +0x4b:  mov    $0x0,%eax
08635468 +0x50:  jmp    086354b8 <+0xa0>
0863546a +0x52:  mov    -0x14(%ebp),%eax
0863546d +0x55:  movzwl 0xda8(%eax),%eax
08635474 +0x5c:  mov    %ax,-0xe(%ebp)
08635478 +0x60:  mov    -0x14(%ebp),%eax
0863547b +0x63:  add    $0xdbe,%eax
08635480 +0x68:  mov    %eax,-0xc(%ebp)
08635483 +0x6b:  movswl -0xe(%ebp),%eax
08635487 +0x6f:  mov    -0x14(%ebp),%edx
0863548a +0x72:  lea    0xb24(%edx),%ecx
08635490 +0x78:  movl   $0x6,0x10(%esp)
08635498 +0x80:  movl   $0x1d,0xc(%esp)
086354a0 +0x88:  mov    -0xc(%ebp),%edx
086354a3 +0x8b:  mov    %edx,0x8(%esp)
086354a7 +0x8f:  mov    %eax,0x4(%esp)
086354ab +0x93:  mov    %ecx,(%esp)
086354ae +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
086354b3 +0x9b:  mov    $0x1,%eax
086354b8 +0xa0:  leave
086354b9 +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister6::dispatch_sig @ 0x8635418

/* TimerBloodPhaseRegister6::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister6::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1d,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda8),
                 (short *)(pCVar3 + 0xdbe),0x1d,6);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
