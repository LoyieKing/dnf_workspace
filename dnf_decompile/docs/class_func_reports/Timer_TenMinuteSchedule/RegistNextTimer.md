# RegistNextTimer

`_ZN23Timer_TenMinuteSchedule15RegistNextTimerEi`

`Timer_TenMinuteSchedule::RegistNextTimer(int)`

| 类 | 地址 |
|---|---|
| `Timer_TenMinuteSchedule` | `0x086396d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086396d2  _ZN23Timer_TenMinuteSchedule15RegistNextTimerEi
#           Timer_TenMinuteSchedule::RegistNextTimer(int)
# range [0x086396d2, 0x08639721]
086396d2 +0x00:  push   %ebp
086396d3 +0x01:  mov    %esp,%ebp
086396d5 +0x03:  sub    $0x38,%esp
086396d8 +0x06:  movl   $0x258,-0xc(%ebp)
086396df +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086396e4 +0x12:  movl   $0x0,0x18(%esp)
086396ec +0x1a:  mov    0x8(%ebp),%edx
086396ef +0x1d:  mov    %edx,0x14(%esp)
086396f3 +0x21:  mov    -0xc(%ebp),%edx
086396f6 +0x24:  mov    %edx,0x10(%esp)
086396fa +0x28:  movl   $0x8e,0xc(%esp)
08639702 +0x30:  movl   $0x0,0x8(%esp)
0863970a +0x38:  movl   $0x2,0x4(%esp)
08639712 +0x40:  mov    %eax,(%esp)
08639715 +0x43:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863971a +0x48:  mov    $0x1,%eax
0863971f +0x4d:  leave
08639720 +0x4e:  ret
08639721 +0x4f:  nop
```

## 反编译 C

```c
// Timer_TenMinuteSchedule::RegistNextTimer @ 0x86396d2

/* Timer_TenMinuteSchedule::RegistNextTimer(int) */

undefined4 Timer_TenMinuteSchedule::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x8e,600,param_1,0);
  return 1;
}
```
