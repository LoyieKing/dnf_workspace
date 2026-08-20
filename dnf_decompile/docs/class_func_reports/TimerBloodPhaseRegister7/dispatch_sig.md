# dispatch_sig

`_ZN24TimerBloodPhaseRegister712dispatch_sigEiij`

`TimerBloodPhaseRegister7::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister7` | `0x086354ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086354ba  _ZN24TimerBloodPhaseRegister712dispatch_sigEiij
#           TimerBloodPhaseRegister7::dispatch_sig(int, int, unsigned int)
# range [0x086354ba, 0x0863555b]
086354ba +0x00:  push   %ebp
086354bb +0x01:  mov    %esp,%ebp
086354bd +0x03:  sub    $0x38,%esp
086354c0 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086354c5 +0x0b:  mov    0xc(%ebp),%edx
086354c8 +0x0e:  mov    %edx,0x4(%esp)
086354cc +0x12:  mov    %eax,(%esp)
086354cf +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086354d4 +0x1a:  mov    %eax,-0x14(%ebp)
086354d7 +0x1d:  cmpl   $0x0,-0x14(%ebp)
086354db +0x21:  jne    086354e4 <+0x2a>
086354dd +0x23:  mov    $0x0,%eax
086354e2 +0x28:  jmp    0863555a <+0xa0>
086354e4 +0x2a:  mov    0x10(%ebp),%eax
086354e7 +0x2d:  mov    %eax,0x8(%esp)
086354eb +0x31:  movl   $0x1e,0x4(%esp)
086354f3 +0x39:  mov    -0x14(%ebp),%eax
086354f6 +0x3c:  mov    %eax,(%esp)
086354f9 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086354fe +0x44:  xor    $0x1,%eax
08635501 +0x47:  test   %al,%al
08635503 +0x49:  je     0863550c <+0x52>
08635505 +0x4b:  mov    $0x0,%eax
0863550a +0x50:  jmp    0863555a <+0xa0>
0863550c +0x52:  mov    -0x14(%ebp),%eax
0863550f +0x55:  movzwl 0xdaa(%eax),%eax
08635516 +0x5c:  mov    %ax,-0xe(%ebp)
0863551a +0x60:  mov    -0x14(%ebp),%eax
0863551d +0x63:  add    $0xdc0,%eax
08635522 +0x68:  mov    %eax,-0xc(%ebp)
08635525 +0x6b:  movswl -0xe(%ebp),%eax
08635529 +0x6f:  mov    -0x14(%ebp),%edx
0863552c +0x72:  lea    0xb24(%edx),%ecx
08635532 +0x78:  movl   $0x7,0x10(%esp)
0863553a +0x80:  movl   $0x1e,0xc(%esp)
08635542 +0x88:  mov    -0xc(%ebp),%edx
08635545 +0x8b:  mov    %edx,0x8(%esp)
08635549 +0x8f:  mov    %eax,0x4(%esp)
0863554d +0x93:  mov    %ecx,(%esp)
08635550 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
08635555 +0x9b:  mov    $0x1,%eax
0863555a +0xa0:  leave
0863555b +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister7::dispatch_sig @ 0x86354ba

/* TimerBloodPhaseRegister7::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister7::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1e,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xdaa),
                 (short *)(pCVar3 + 0xdc0),0x1e,7);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
