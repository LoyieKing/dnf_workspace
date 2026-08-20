# RegistNextTimer

`_ZN21Timer_EventManagement15RegistNextTimerEi`

`Timer_EventManagement::RegistNextTimer(int)`

| 类 | 地址 |
|---|---|
| `Timer_EventManagement` | `0x0863abd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863abd4  _ZN21Timer_EventManagement15RegistNextTimerEi
#           Timer_EventManagement::RegistNextTimer(int)
# range [0x0863abd4, 0x0863ac17]
0863abd4 +0x00:  push   %ebp
0863abd5 +0x01:  mov    %esp,%ebp
0863abd7 +0x03:  sub    $0x28,%esp
0863abda +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863abdf +0x0b:  movl   $0x0,0x18(%esp)
0863abe7 +0x13:  movl   $0x0,0x14(%esp)
0863abef +0x1b:  mov    0x8(%ebp),%edx
0863abf2 +0x1e:  mov    %edx,0x10(%esp)
0863abf6 +0x22:  movl   $0x9c,0xc(%esp)
0863abfe +0x2a:  movl   $0x0,0x8(%esp)
0863ac06 +0x32:  movl   $0x2,0x4(%esp)
0863ac0e +0x3a:  mov    %eax,(%esp)
0863ac11 +0x3d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863ac16 +0x42:  leave
0863ac17 +0x43:  ret
```

## 反编译 C

```c
// Timer_EventManagement::RegistNextTimer @ 0x863abd4

/* Timer_EventManagement::RegistNextTimer(int) */

void Timer_EventManagement::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x9c,param_1,0,0);
  return;
}
```
