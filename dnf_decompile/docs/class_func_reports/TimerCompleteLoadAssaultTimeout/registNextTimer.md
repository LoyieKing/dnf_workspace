# registNextTimer

`_ZN31TimerCompleteLoadAssaultTimeout15registNextTimerElii`

`TimerCompleteLoadAssaultTimeout::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerCompleteLoadAssaultTimeout` | `0x0863755a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863755a  _ZN31TimerCompleteLoadAssaultTimeout15registNextTimerElii
#           TimerCompleteLoadAssaultTimeout::registNextTimer(long, int, int)
# range [0x0863755a, 0x0863759b]
0863755a +0x00:  push   %ebp
0863755b +0x01:  mov    %esp,%ebp
0863755d +0x03:  sub    $0x28,%esp
08637560 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637565 +0x0b:  movl   $0x0,0x18(%esp)
0863756d +0x13:  mov    0x10(%ebp),%edx
08637570 +0x16:  mov    %edx,0x14(%esp)
08637574 +0x1a:  mov    0x8(%ebp),%edx
08637577 +0x1d:  mov    %edx,0x10(%esp)
0863757b +0x21:  movl   $0x6e,0xc(%esp)
08637583 +0x29:  mov    0xc(%ebp),%edx
08637586 +0x2c:  mov    %edx,0x8(%esp)
0863758a +0x30:  movl   $0x2,0x4(%esp)
08637592 +0x38:  mov    %eax,(%esp)
08637595 +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863759a +0x40:  leave
0863759b +0x41:  ret
```

## 反编译 C

```c
// TimerCompleteLoadAssaultTimeout::registNextTimer @ 0x863755a

/* TimerCompleteLoadAssaultTimeout::registNextTimer(long, int, int) */

void TimerCompleteLoadAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x6e,param_1,param_3,0);
  return;
}
```
