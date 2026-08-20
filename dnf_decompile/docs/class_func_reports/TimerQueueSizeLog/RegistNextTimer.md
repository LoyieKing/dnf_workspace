# RegistNextTimer

`_ZN17TimerQueueSizeLog15RegistNextTimerEv`

`TimerQueueSizeLog::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerQueueSizeLog` | `0x08636348` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636348  _ZN17TimerQueueSizeLog15RegistNextTimerEv
#           TimerQueueSizeLog::RegistNextTimer()
# range [0x08636348, 0x08636397]
08636348 +0x00:  push   %ebp
08636349 +0x01:  mov    %esp,%ebp
0863634b +0x03:  sub    $0x38,%esp
0863634e +0x06:  movl   $0x3c,-0xc(%ebp)
08636355 +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863635a +0x12:  movl   $0x0,0x18(%esp)
08636362 +0x1a:  movl   $0x0,0x14(%esp)
0863636a +0x22:  mov    -0xc(%ebp),%edx
0863636d +0x25:  mov    %edx,0x10(%esp)
08636371 +0x29:  movl   $0x61,0xc(%esp)
08636379 +0x31:  movl   $0x0,0x8(%esp)
08636381 +0x39:  movl   $0x2,0x4(%esp)
08636389 +0x41:  mov    %eax,(%esp)
0863638c +0x44:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08636391 +0x49:  mov    $0x1,%eax
08636396 +0x4e:  leave
08636397 +0x4f:  ret
```

## 反编译 C

```c
// TimerQueueSizeLog::RegistNextTimer @ 0x8636348

/* TimerQueueSizeLog::RegistNextTimer() */

undefined4 TimerQueueSizeLog::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x61,0x3c,0,0);
  return 1;
}
```
