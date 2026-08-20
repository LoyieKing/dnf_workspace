# NextItemLockTimer

`_ZN9item_lock14CItemLockTimer17NextItemLockTimerEP5CUser`

`item_lock::CItemLockTimer::NextItemLockTimer(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLockTimer` | `0x08541502` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541502  _ZN9item_lock14CItemLockTimer17NextItemLockTimerEP5CUser
#           item_lock::CItemLockTimer::NextItemLockTimer(CUser*)
# range [0x08541502, 0x08541569]
08541502 +0x00:  push   %ebp
08541503 +0x01:  mov    %esp,%ebp
08541505 +0x03:  push   %esi
08541506 +0x04:  push   %ebx
08541507 +0x05:  sub    $0x20,%esp
0854150a +0x08:  mov    0x8(%ebp),%eax
0854150d +0x0b:  mov    (%eax),%eax
0854150f +0x0d:  test   %eax,%eax
08541511 +0x0f:  je     08541562 <+0x60>
08541513 +0x11:  mov    0xc(%ebp),%eax
08541516 +0x14:  mov    %eax,(%esp)
08541519 +0x17:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0854151e +0x1c:  mov    %eax,%esi
08541520 +0x1e:  mov    0xc(%ebp),%eax
08541523 +0x21:  mov    %eax,(%esp)
08541526 +0x24:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0854152b +0x29:  mov    %eax,%ebx
0854152d +0x2b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08541532 +0x30:  mov    %esi,0x18(%esp)
08541536 +0x34:  movl   $0x0,0x14(%esp)
0854153e +0x3c:  movl   $0x3c,0x10(%esp)
08541546 +0x44:  movl   $0x88,0xc(%esp)
0854154e +0x4c:  mov    %ebx,0x8(%esp)
08541552 +0x50:  movl   $0x0,0x4(%esp)
0854155a +0x58:  mov    %eax,(%esp)
0854155d +0x5b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08541562 +0x60:  add    $0x20,%esp
08541565 +0x63:  pop    %ebx
08541566 +0x64:  pop    %esi
08541567 +0x65:  pop    %ebp
08541568 +0x66:  ret
08541569 +0x67:  nop
```

## 反编译 C

```c
// item_lock::CItemLockTimer::NextItemLockTimer @ 0x8541502

/* item_lock::CItemLockTimer::NextItemLockTimer(CUser*) */

void __thiscall item_lock::CItemLockTimer::NextItemLockTimer(CItemLockTimer *this,CUser *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)this != 0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar2 = CUser::GetUID(param_1);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,0,uVar2,0x88,0x3c,0,uVar1);
  }
  return;
}
```
