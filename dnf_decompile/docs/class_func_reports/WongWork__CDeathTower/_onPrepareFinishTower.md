# _onPrepareFinishTower

`_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv`

`WongWork::CDeathTower::_onPrepareFinishTower()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08467e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08467e00  _ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv
#           WongWork::CDeathTower::_onPrepareFinishTower()
# range [0x08467e00, 0x08467e5f]
08467e00 +0x00:  push   %ebp
08467e01 +0x01:  mov    %esp,%ebp
08467e03 +0x03:  push   %esi
08467e04 +0x04:  push   %ebx
08467e05 +0x05:  sub    $0x20,%esp
08467e08 +0x08:  movl   $0x4a,0x4(%esp)
08467e10 +0x10:  mov    0x8(%ebp),%eax
08467e13 +0x13:  mov    %eax,(%esp)
08467e16 +0x16:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
08467e1b +0x1b:  mov    %eax,%ebx
08467e1d +0x1d:  mov    0x8(%ebp),%eax
08467e20 +0x20:  mov    0x4(%eax),%esi
08467e23 +0x23:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08467e28 +0x28:  movl   $0x4a,0x18(%esp)
08467e30 +0x30:  mov    %ebx,0x14(%esp)
08467e34 +0x34:  movl   $0x5,0x10(%esp)
08467e3c +0x3c:  movl   $0x4a,0xc(%esp)
08467e44 +0x44:  mov    %esi,0x8(%esp)
08467e48 +0x48:  movl   $0x6,0x4(%esp)
08467e50 +0x50:  mov    %eax,(%esp)
08467e53 +0x53:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08467e58 +0x58:  add    $0x20,%esp
08467e5b +0x5b:  pop    %ebx
08467e5c +0x5c:  pop    %esi
08467e5d +0x5d:  pop    %ebp
08467e5e +0x5e:  ret
08467e5f +0x5f:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_onPrepareFinishTower @ 0x8467e00

/* WongWork::CDeathTower::_onPrepareFinishTower() */

void __thiscall WongWork::CDeathTower::_onPrepareFinishTower(CDeathTower *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar2 = _genTimerKey(this,0x4a);
  uVar1 = *(undefined4 *)(this + 4);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,6,uVar1,0x4a,5,uVar2,0x4a);
  return;
}
```
