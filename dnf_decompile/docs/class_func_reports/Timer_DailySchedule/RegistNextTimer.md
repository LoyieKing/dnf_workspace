# RegistNextTimer

`_ZN19Timer_DailySchedule15RegistNextTimerEv`

`Timer_DailySchedule::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_DailySchedule` | `0x0812c940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812c940  _ZN19Timer_DailySchedule15RegistNextTimerEv
#           Timer_DailySchedule::RegistNextTimer()
# range [0x0812c940, 0x0812c984]
0812c940 +0x00:  push   %ebp
0812c941 +0x01:  mov    %esp,%ebp
0812c943 +0x03:  sub    $0x28,%esp
0812c946 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0812c94b +0x0b:  movl   $0x0,0x18(%esp)
0812c953 +0x13:  movl   $0x0,0x14(%esp)
0812c95b +0x1b:  movl   $0x3c,0x10(%esp)
0812c963 +0x23:  movl   $0x91,0xc(%esp)
0812c96b +0x2b:  movl   $0x0,0x8(%esp)
0812c973 +0x33:  movl   $0x2,0x4(%esp)
0812c97b +0x3b:  mov    %eax,(%esp)
0812c97e +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0812c983 +0x43:  leave
0812c984 +0x44:  ret
```

## 反编译 C

```c
// Timer_DailySchedule::RegistNextTimer @ 0x812c940

/* Timer_DailySchedule::RegistNextTimer() */

void Timer_DailySchedule::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x91,0x3c,0,0);
  return;
}
```
