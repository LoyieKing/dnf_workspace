# dispatch_sig

`_ZN19TimerBossDieTimeout12dispatch_sigEiij`

`TimerBossDieTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerBossDieTimeout` | `0x0863647e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863647e  _ZN19TimerBossDieTimeout12dispatch_sigEiij
#           TimerBossDieTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863647e, 0x086364c3]
0863647e +0x00:  push   %ebp
0863647f +0x01:  mov    %esp,%ebp
08636481 +0x03:  sub    $0x28,%esp
08636484 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08636489 +0x0b:  mov    0xc(%ebp),%edx
0863648c +0x0e:  mov    %edx,0x4(%esp)
08636490 +0x12:  mov    %eax,(%esp)
08636493 +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08636498 +0x1a:  mov    %eax,-0xc(%ebp)
0863649b +0x1d:  cmpl   $0x0,-0xc(%ebp)
0863649f +0x21:  jne    086364a8 <+0x2a>
086364a1 +0x23:  mov    $0x0,%eax
086364a6 +0x28:  jmp    086364c1 <+0x43>
086364a8 +0x2a:  mov    0x14(%ebp),%eax
086364ab +0x2d:  mov    %eax,0x8(%esp)
086364af +0x31:  mov    0x10(%ebp),%eax
086364b2 +0x34:  mov    %eax,0x4(%esp)
086364b6 +0x38:  mov    -0xc(%ebp),%eax
086364b9 +0x3b:  mov    %eax,(%esp)
086364bc +0x3e:  call   085aa5d4 <_ZN6CParty16OnTimeoutBossDieEij>  ; CParty::OnTimeoutBossDie(int, unsigned int)
086364c1 +0x43:  leave
086364c2 +0x44:  ret
086364c3 +0x45:  nop
```

## 反编译 C

```c
// TimerBossDieTimeout::dispatch_sig @ 0x863647e

/* TimerBossDieTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerBossDieTimeout::dispatch_sig(TimerBossDieTimeout *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  CParty *this_00;
  undefined4 uVar2;
  
  iVar1 = G_CGameManager();
  this_00 = (CParty *)CGameManager::GetParty(iVar1);
  if (this_00 == (CParty *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CParty::OnTimeoutBossDie(this_00,param_2,param_3);
  }
  return uVar2;
}
```
