# dispatch_sig

`_ZN24TimerBloodPhaseRegister512dispatch_sigEiij`

`TimerBloodPhaseRegister5::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBloodPhaseRegister5` | `0x08635376` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635376  _ZN24TimerBloodPhaseRegister512dispatch_sigEiij
#           TimerBloodPhaseRegister5::dispatch_sig(int, int, unsigned int)
# range [0x08635376, 0x08635417]
08635376 +0x00:  push   %ebp
08635377 +0x01:  mov    %esp,%ebp
08635379 +0x03:  sub    $0x38,%esp
0863537c +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635381 +0x0b:  mov    0xc(%ebp),%edx
08635384 +0x0e:  mov    %edx,0x4(%esp)
08635388 +0x12:  mov    %eax,(%esp)
0863538b +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08635390 +0x1a:  mov    %eax,-0x14(%ebp)
08635393 +0x1d:  cmpl   $0x0,-0x14(%ebp)
08635397 +0x21:  jne    086353a0 <+0x2a>
08635399 +0x23:  mov    $0x0,%eax
0863539e +0x28:  jmp    08635416 <+0xa0>
086353a0 +0x2a:  mov    0x10(%ebp),%eax
086353a3 +0x2d:  mov    %eax,0x8(%esp)
086353a7 +0x31:  movl   $0x1c,0x4(%esp)
086353af +0x39:  mov    -0x14(%ebp),%eax
086353b2 +0x3c:  mov    %eax,(%esp)
086353b5 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
086353ba +0x44:  xor    $0x1,%eax
086353bd +0x47:  test   %al,%al
086353bf +0x49:  je     086353c8 <+0x52>
086353c1 +0x4b:  mov    $0x0,%eax
086353c6 +0x50:  jmp    08635416 <+0xa0>
086353c8 +0x52:  mov    -0x14(%ebp),%eax
086353cb +0x55:  movzwl 0xda6(%eax),%eax
086353d2 +0x5c:  mov    %ax,-0xe(%ebp)
086353d6 +0x60:  mov    -0x14(%ebp),%eax
086353d9 +0x63:  add    $0xdbc,%eax
086353de +0x68:  mov    %eax,-0xc(%ebp)
086353e1 +0x6b:  movswl -0xe(%ebp),%eax
086353e5 +0x6f:  mov    -0x14(%ebp),%edx
086353e8 +0x72:  lea    0xb24(%edx),%ecx
086353ee +0x78:  movl   $0x5,0x10(%esp)
086353f6 +0x80:  movl   $0x1c,0xc(%esp)
086353fe +0x88:  mov    -0xc(%ebp),%edx
08635401 +0x8b:  mov    %edx,0x8(%esp)
08635405 +0x8f:  mov    %eax,0x4(%esp)
08635409 +0x93:  mov    %ecx,(%esp)
0863540c +0x96:  call   0830553a <_ZN13CBattle_Field15BloodPhaseSpawnEsRsii>  ; CBattle_Field::BloodPhaseSpawn(short, short&, int, int)
08635411 +0x9b:  mov    $0x1,%eax
08635416 +0xa0:  leave
08635417 +0xa1:  ret
```

## 反编译 C

```c
// TimerBloodPhaseRegister5::dispatch_sig @ 0x8635376

/* TimerBloodPhaseRegister5::dispatch_sig(int, int, unsigned int) */

undefined4 TimerBloodPhaseRegister5::dispatch_sig(int param_1,int param_2,uint param_3)

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
    cVar1 = CParty::check_timer_key(pCVar3,0x1c,param_3);
    if (cVar1 == '\x01') {
      CBattle_Field::BloodPhaseSpawn
                ((CBattle_Field *)(pCVar3 + 0xb24),*(short *)(pCVar3 + 0xda6),
                 (short *)(pCVar3 + 0xdbc),0x1c,5);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
