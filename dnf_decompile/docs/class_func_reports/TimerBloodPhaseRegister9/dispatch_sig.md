# dispatch_sig

`_ZN24TimerBloodPhaseRegister912dispatch_sigEiij`

`TimerBloodPhaseRegister9::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister9` | `0x086355fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086355fe  _ZN24TimerBloodPhaseRegister912dispatch_sigEiij
#           TimerBloodPhaseRegister9::dispatch_sig(int, int, unsigned int)
# range [0x086355fe, 0x0863569f]
086355fe +0x00:  push   %ebp
086355ff +0x01:  mov    %esp,%ebp
08635601 +0x03:  sub    $0x38,%esp
08635604 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635609 +0x0b:  mov    0xc(%ebp),%edx
0863560c +0x0e:  mov    %edx,0x4(%esp)
08635610 +0x12:  mov    %eax,(%esp)
08635613 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08635618 +0x1a:  mov    %eax,-0x14(%ebp)
0863561b +0x1d:  cmpl   $0x0,-0x14(%ebp)
0863561f +0x21:  jne    08635628 <+0x2a>
08635621 +0x23:  mov    $0x0,%eax
08635626 +0x28:  jmp    0863569e <+0xa0>
08635628 +0x2a:  mov    0x10(%ebp),%eax
0863562b +0x2d:  mov    %eax,0x8(%esp)
0863562f +0x31:  movl   $0x20,0x4(%esp)
08635637 +0x39:  mov    -0x14(%ebp),%eax
0863563a +0x3c:  mov    %eax,(%esp)
0863563d +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08635642 +0x44:  xor    $0x1,%eax
08635645 +0x47:  test   %al,%al
08635647 +0x49:  je     08635650 <+0x52>
08635649 +0x4b:  mov    $0x0,%eax
0863564e +0x50:  jmp    0863569e <+0xa0>
08635650 +0x52:  mov    -0x14(%ebp),%eax
08635653 +0x55:  movzwl 0xdae(%eax),%eax
0863565a +0x5c:  mov    %ax,-0xe(%ebp)
0863565e +0x60:  mov    -0x14(%ebp),%eax
08635661 +0x63:  add    $0xdc4,%eax
08635666 +0x68:  mov    %eax,-0xc(%ebp)
08635669 +0x6b:  movswl -0xe(%ebp),%eax
0863566d +0x6f:  mov    -0x14(%ebp),%edx
08635670 +0x72:  lea    0xb24(%edx),%ecx
08635676 +0x78:  movl   $0x9,0x10(%esp)
0863567e +0x80:  movl   $0x20,0xc(%esp)
08635686 +0x88:  mov    -0xc(%ebp),%edx
08635689 +0x8b:  mov    %edx,0x8(%esp)
0863568d +0x8f:  mov    %eax,0x4(%esp)
08635691 +0x93:  mov    %ecx,(%esp)
08635694 +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
08635699 +0x9b:  mov    $0x1,%eax
0863569e +0xa0:  leave
0863569f +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister9::dispatch_sig @ 0x86355fe

/* TimerBloodPhaseRegister9::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister9::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x20,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xdae),
                 (short *)(pCVar3 + 0xdc4),0x20,9);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
