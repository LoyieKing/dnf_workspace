# registNextTimer

`_ZN22TimerScheduleTenSecond15registNextTimerEj`

`TimerScheduleTenSecond::registNextTimer(unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerScheduleTenSecond` | `0x08637a62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637a62  _ZN22TimerScheduleTenSecond15registNextTimerEj
#           TimerScheduleTenSecond::registNextTimer(unsigned int)
# range [0x08637a62, 0x08637aab]
08637a62 +0x00:  push   %ebp
08637a63 +0x01:  mov    %esp,%ebp
08637a65 +0x03:  push   %ebx
08637a66 +0x04:  sub    $0x24,%esp
08637a69 +0x07:  mov    0x8(%ebp),%ebx
08637a6c +0x0a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637a71 +0x0f:  movl   $0x0,0x18(%esp)
08637a79 +0x17:  movl   $0x0,0x14(%esp)
08637a81 +0x1f:  mov    %ebx,0x10(%esp)
08637a85 +0x23:  movl   $0x57,0xc(%esp)
08637a8d +0x2b:  movl   $0x0,0x8(%esp)
08637a95 +0x33:  movl   $0x2,0x4(%esp)
08637a9d +0x3b:  mov    %eax,(%esp)
08637aa0 +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08637aa5 +0x43:  add    $0x24,%esp
08637aa8 +0x46:  pop    %ebx
08637aa9 +0x47:  pop    %ebp
08637aaa +0x48:  ret
08637aab +0x49:  nop
```

## 反编译 C

```c
// TimerScheduleTenSecond::registNextTimer @ 0x8637a62

/* TimerScheduleTenSecond::registNextTimer(unsigned int) */

void TimerScheduleTenSecond::registNextTimer(uint param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x57,param_1,0,0);
  return;
}
```
