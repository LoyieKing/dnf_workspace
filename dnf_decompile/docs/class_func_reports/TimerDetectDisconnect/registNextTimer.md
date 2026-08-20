# registNextTimer

`_ZN21TimerDetectDisconnect15registNextTimerEv`

`TimerDetectDisconnect::registNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerDetectDisconnect` | `0x086374e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086374e0  _ZN21TimerDetectDisconnect15registNextTimerEv
#           TimerDetectDisconnect::registNextTimer()
# range [0x086374e0, 0x0863752b]
086374e0 +0x00:  push   %ebp
086374e1 +0x01:  mov    %esp,%ebp
086374e3 +0x03:  sub    $0x38,%esp
086374e6 +0x06:  movl   $0xa,-0xc(%ebp)
086374ed +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086374f2 +0x12:  movl   $0x0,0x18(%esp)
086374fa +0x1a:  movl   $0x0,0x14(%esp)
08637502 +0x22:  mov    -0xc(%ebp),%edx
08637505 +0x25:  mov    %edx,0x10(%esp)
08637509 +0x29:  movl   $0x6d,0xc(%esp)
08637511 +0x31:  movl   $0x0,0x8(%esp)
08637519 +0x39:  movl   $0x2,0x4(%esp)
08637521 +0x41:  mov    %eax,(%esp)
08637524 +0x44:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08637529 +0x49:  leave
0863752a +0x4a:  ret
0863752b +0x4b:  nop
```

## 反编译 C

```c
// TimerDetectDisconnect::registNextTimer @ 0x86374e0

/* TimerDetectDisconnect::registNextTimer() */

void TimerDetectDisconnect::registNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x6d,10,0,0);
  return;
}
```
