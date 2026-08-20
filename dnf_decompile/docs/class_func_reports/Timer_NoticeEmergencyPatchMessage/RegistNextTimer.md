# RegistNextTimer

`_ZN33Timer_NoticeEmergencyPatchMessage15RegistNextTimerEv`

`Timer_NoticeEmergencyPatchMessage::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_NoticeEmergencyPatchMessage` | `0x0863b87e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b87e  _ZN33Timer_NoticeEmergencyPatchMessage15RegistNextTimerEv
#           Timer_NoticeEmergencyPatchMessage::RegistNextTimer()
# range [0x0863b87e, 0x0863b8c3]
0863b87e +0x00:  push   %ebp
0863b87f +0x01:  mov    %esp,%ebp
0863b881 +0x03:  sub    $0x28,%esp
0863b884 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863b889 +0x0b:  movl   $0x0,0x18(%esp)
0863b891 +0x13:  movl   $0x0,0x14(%esp)
0863b899 +0x1b:  movl   $0x3c,0x10(%esp)
0863b8a1 +0x23:  movl   $0xa2,0xc(%esp)
0863b8a9 +0x2b:  movl   $0x0,0x8(%esp)
0863b8b1 +0x33:  movl   $0x2,0x4(%esp)
0863b8b9 +0x3b:  mov    %eax,(%esp)
0863b8bc +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863b8c1 +0x43:  leave
0863b8c2 +0x44:  ret
0863b8c3 +0x45:  nop
```

## 反编译 C

```c
// Timer_NoticeEmergencyPatchMessage::RegistNextTimer @ 0x863b87e

/* Timer_NoticeEmergencyPatchMessage::RegistNextTimer() */

void Timer_NoticeEmergencyPatchMessage::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xa2,0x3c,0,0);
  return;
}
```
