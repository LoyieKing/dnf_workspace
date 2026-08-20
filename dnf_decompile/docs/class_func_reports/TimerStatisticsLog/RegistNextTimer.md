# RegistNextTimer

`_ZN18TimerStatisticsLog15RegistNextTimerEv`

`TimerStatisticsLog::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerStatisticsLog` | `0x086340b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086340b4  _ZN18TimerStatisticsLog15RegistNextTimerEv
#           TimerStatisticsLog::RegistNextTimer()
# range [0x086340b4, 0x08634103]
086340b4 +0x00:  push   %ebp
086340b5 +0x01:  mov    %esp,%ebp
086340b7 +0x03:  sub    $0x38,%esp
086340ba +0x06:  movl   $0x708,-0xc(%ebp)
086340c1 +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086340c6 +0x12:  movl   $0x0,0x18(%esp)
086340ce +0x1a:  movl   $0x0,0x14(%esp)
086340d6 +0x22:  mov    -0xc(%ebp),%edx
086340d9 +0x25:  mov    %edx,0x10(%esp)
086340dd +0x29:  movl   $0x52,0xc(%esp)
086340e5 +0x31:  movl   $0x0,0x8(%esp)
086340ed +0x39:  movl   $0x2,0x4(%esp)
086340f5 +0x41:  mov    %eax,(%esp)
086340f8 +0x44:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086340fd +0x49:  mov    $0x1,%eax
08634102 +0x4e:  leave
08634103 +0x4f:  ret
```

## 反编译 C

```c
// TimerStatisticsLog::RegistNextTimer @ 0x86340b4

/* TimerStatisticsLog::RegistNextTimer() */

undefined4 TimerStatisticsLog::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x52,0x708,0,0);
  return 1;
}
```
