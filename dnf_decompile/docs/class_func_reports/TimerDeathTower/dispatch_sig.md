# dispatch_sig

`_ZN15TimerDeathTower12dispatch_sigEiij`

`TimerDeathTower::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDeathTower` | `0x086377cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086377cc  _ZN15TimerDeathTower12dispatch_sigEiij
#           TimerDeathTower::dispatch_sig(int, int, unsigned int)
# range [0x086377cc, 0x08637815]
086377cc +0x00:  push   %ebp
086377cd +0x01:  mov    %esp,%ebp
086377cf +0x03:  sub    $0x28,%esp
086377d2 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086377d7 +0x0b:  mov    0xc(%ebp),%edx
086377da +0x0e:  mov    %edx,0x4(%esp)
086377de +0x12:  mov    %eax,(%esp)
086377e1 +0x15:  call   082957bc <_ZN12CGameManager13getDeathTowerEi>  ; CGameManager::getDeathTower(int)
086377e6 +0x1a:  mov    %eax,-0xc(%ebp)
086377e9 +0x1d:  cmpl   $0x0,-0xc(%ebp)
086377ed +0x21:  jne    086377f6 <+0x2a>
086377ef +0x23:  mov    $0x0,%eax
086377f4 +0x28:  jmp    08637814 <+0x48>
086377f6 +0x2a:  mov    0x10(%ebp),%eax
086377f9 +0x2d:  mov    %eax,0x8(%esp)
086377fd +0x31:  mov    0x14(%ebp),%eax
08637800 +0x34:  mov    %eax,0x4(%esp)
08637804 +0x38:  mov    -0xc(%ebp),%eax
08637807 +0x3b:  mov    %eax,(%esp)
0863780a +0x3e:  call   08462aae <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj>  ; WongWork::CDeathTower::onTimer(TIMER_MESSAGE, unsigned int)
0863780f +0x43:  mov    $0x1,%eax
08637814 +0x48:  leave
08637815 +0x49:  ret
```

## 反编译 C

```c
// TimerDeathTower::dispatch_sig @ 0x86377cc

/* TimerDeathTower::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerDeathTower::dispatch_sig(TimerDeathTower *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  CDeathTower *pCVar2;
  
  iVar1 = G_CGameManager();
  pCVar2 = (CDeathTower *)CGameManager::getDeathTower(iVar1);
  if (pCVar2 != (CDeathTower *)0x0) {
    WongWork::CDeathTower::onTimer(pCVar2,param_3,param_2);
  }
  return pCVar2 != (CDeathTower *)0x0;
}
```
