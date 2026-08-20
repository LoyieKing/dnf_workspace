# dispatch_sig

`_ZN20TimerScheduleOneHour12dispatch_sigEiij`

`TimerScheduleOneHour::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerScheduleOneHour` | `0x08634104` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634104  _ZN20TimerScheduleOneHour12dispatch_sigEiij
#           TimerScheduleOneHour::dispatch_sig(int, int, unsigned int)
# range [0x08634104, 0x0863414d]
08634104 +0x00:  push   %ebp
08634105 +0x01:  mov    %esp,%ebp
08634107 +0x03:  sub    $0x28,%esp
0863410a +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863410f +0x0b:  movl   $0x0,0x18(%esp)
08634117 +0x13:  movl   $0x0,0x14(%esp)
0863411f +0x1b:  movl   $0xe10,0x10(%esp)
08634127 +0x23:  movl   $0x56,0xc(%esp)
0863412f +0x2b:  movl   $0x0,0x8(%esp)
08634137 +0x33:  movl   $0x2,0x4(%esp)
0863413f +0x3b:  mov    %eax,(%esp)
08634142 +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08634147 +0x43:  mov    $0x1,%eax
0863414c +0x48:  leave
0863414d +0x49:  ret
```

## 反编译 C

```c
// TimerScheduleOneHour::dispatch_sig @ 0x8634104

/* TimerScheduleOneHour::dispatch_sig(int, int, unsigned int) */

undefined4 TimerScheduleOneHour::dispatch_sig(int param_1,int param_2,uint param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x56,0xe10,0,0);
  return 1;
}
```
