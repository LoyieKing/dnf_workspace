# RegistNextTimer

`_ZN24Timer_Send_Ontime_Reward15RegistNextTimerEv`

`Timer_Send_Ontime_Reward::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_Send_Ontime_Reward` | `0x0863ab4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863ab4c  _ZN24Timer_Send_Ontime_Reward15RegistNextTimerEv
#           Timer_Send_Ontime_Reward::RegistNextTimer()
# range [0x0863ab4c, 0x0863ab91]
0863ab4c +0x00:  push   %ebp
0863ab4d +0x01:  mov    %esp,%ebp
0863ab4f +0x03:  sub    $0x28,%esp
0863ab52 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863ab57 +0x0b:  movl   $0x0,0x18(%esp)
0863ab5f +0x13:  movl   $0x0,0x14(%esp)
0863ab67 +0x1b:  movl   $0xa,0x10(%esp)
0863ab6f +0x23:  movl   $0x9b,0xc(%esp)
0863ab77 +0x2b:  movl   $0x0,0x8(%esp)
0863ab7f +0x33:  movl   $0x2,0x4(%esp)
0863ab87 +0x3b:  mov    %eax,(%esp)
0863ab8a +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863ab8f +0x43:  leave
0863ab90 +0x44:  ret
0863ab91 +0x45:  nop
```

## 反编译 C

```c
// Timer_Send_Ontime_Reward::RegistNextTimer @ 0x863ab4c

/* Timer_Send_Ontime_Reward::RegistNextTimer() */

void Timer_Send_Ontime_Reward::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x9b,10,0,0);
  return;
}
```
