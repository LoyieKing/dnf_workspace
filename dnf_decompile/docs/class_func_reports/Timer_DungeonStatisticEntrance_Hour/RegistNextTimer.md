# RegistNextTimer

`_ZN35Timer_DungeonStatisticEntrance_Hour15RegistNextTimerEv`

`Timer_DungeonStatisticEntrance_Hour::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_DungeonStatisticEntrance_Hour` | `0x0863b9fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b9fa  _ZN35Timer_DungeonStatisticEntrance_Hour15RegistNextTimerEv
#           Timer_DungeonStatisticEntrance_Hour::RegistNextTimer()
# range [0x0863b9fa, 0x0863ba45]
0863b9fa +0x00:  push   %ebp
0863b9fb +0x01:  mov    %esp,%ebp
0863b9fd +0x03:  sub    $0x38,%esp
0863ba00 +0x06:  movl   $0xe10,-0xc(%ebp)
0863ba07 +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863ba0c +0x12:  movl   $0x0,0x18(%esp)
0863ba14 +0x1a:  movl   $0x0,0x14(%esp)
0863ba1c +0x22:  movl   $0xe10,0x10(%esp)
0863ba24 +0x2a:  movl   $0xab,0xc(%esp)
0863ba2c +0x32:  movl   $0x0,0x8(%esp)
0863ba34 +0x3a:  movl   $0x2,0x4(%esp)
0863ba3c +0x42:  mov    %eax,(%esp)
0863ba3f +0x45:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863ba44 +0x4a:  leave
0863ba45 +0x4b:  ret
```

## 反编译 C

```c
// Timer_DungeonStatisticEntrance_Hour::RegistNextTimer @ 0x863b9fa

/* Timer_DungeonStatisticEntrance_Hour::RegistNextTimer() */

void Timer_DungeonStatisticEntrance_Hour::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xab,0xe10,0,0);
  return;
}
```
