# registNextTimer

`_ZN20Timer_HadesHeartBeat15registNextTimerEv`

`Timer_HadesHeartBeat::registNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_HadesHeartBeat` | `0x0863a7c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a7c2  _ZN20Timer_HadesHeartBeat15registNextTimerEv
#           Timer_HadesHeartBeat::registNextTimer()
# range [0x0863a7c2, 0x0863a807]
0863a7c2 +0x00:  push   %ebp
0863a7c3 +0x01:  mov    %esp,%ebp
0863a7c5 +0x03:  sub    $0x28,%esp
0863a7c8 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863a7cd +0x0b:  movl   $0x0,0x18(%esp)
0863a7d5 +0x13:  movl   $0x0,0x14(%esp)
0863a7dd +0x1b:  movl   $0x3c,0x10(%esp)
0863a7e5 +0x23:  movl   $0x96,0xc(%esp)
0863a7ed +0x2b:  movl   $0x0,0x8(%esp)
0863a7f5 +0x33:  movl   $0x2,0x4(%esp)
0863a7fd +0x3b:  mov    %eax,(%esp)
0863a800 +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863a805 +0x43:  leave
0863a806 +0x44:  ret
0863a807 +0x45:  nop
```

## 反编译 C

```c
// Timer_HadesHeartBeat::registNextTimer @ 0x863a7c2

/* Timer_HadesHeartBeat::registNextTimer() */

void Timer_HadesHeartBeat::registNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x96,0x3c,0,0);
  return;
}
```
