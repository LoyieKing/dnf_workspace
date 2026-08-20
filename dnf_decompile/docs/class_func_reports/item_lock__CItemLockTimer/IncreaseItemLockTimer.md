# IncreaseItemLockTimer

`_ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser`

`item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLockTimer` | `0x0854147c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854147c  _ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser
#           item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)
# range [0x0854147c, 0x085414ef]
0854147c +0x00:  push   %ebp
0854147d +0x01:  mov    %esp,%ebp
0854147f +0x03:  push   %esi
08541480 +0x04:  push   %ebx
08541481 +0x05:  sub    $0x20,%esp
08541484 +0x08:  mov    0x8(%ebp),%eax
08541487 +0x0b:  mov    (%eax),%eax
08541489 +0x0d:  test   %eax,%eax
0854148b +0x0f:  jne    085414dc <+0x60>
0854148d +0x11:  mov    0xc(%ebp),%eax
08541490 +0x14:  mov    %eax,(%esp)
08541493 +0x17:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08541498 +0x1c:  mov    %eax,%esi
0854149a +0x1e:  mov    0xc(%ebp),%eax
0854149d +0x21:  mov    %eax,(%esp)
085414a0 +0x24:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085414a5 +0x29:  mov    %eax,%ebx
085414a7 +0x2b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085414ac +0x30:  mov    %esi,0x18(%esp)
085414b0 +0x34:  movl   $0x0,0x14(%esp)
085414b8 +0x3c:  movl   $0x3c,0x10(%esp)
085414c0 +0x44:  movl   $0x88,0xc(%esp)
085414c8 +0x4c:  mov    %ebx,0x8(%esp)
085414cc +0x50:  movl   $0x0,0x4(%esp)
085414d4 +0x58:  mov    %eax,(%esp)
085414d7 +0x5b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085414dc +0x60:  mov    0x8(%ebp),%eax
085414df +0x63:  mov    (%eax),%eax
085414e1 +0x65:  lea    0x1(%eax),%edx
085414e4 +0x68:  mov    0x8(%ebp),%eax
085414e7 +0x6b:  mov    %edx,(%eax)
085414e9 +0x6d:  add    $0x20,%esp
085414ec +0x70:  pop    %ebx
085414ed +0x71:  pop    %esi
085414ee +0x72:  pop    %ebp
085414ef +0x73:  ret
```

## 反编译 C

```c
// item_lock::CItemLockTimer::IncreaseItemLockTimer @ 0x854147c

/* item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*) */

void __thiscall
item_lock::CItemLockTimer::IncreaseItemLockTimer(CItemLockTimer *this,CUser *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)this == 0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar2 = CUser::GetUID(param_1);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,0,uVar2,0x88,0x3c,0,uVar1);
  }
  *(int *)this = *(int *)this + 1;
  return;
}
```
