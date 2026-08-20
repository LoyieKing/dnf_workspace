# registNextTimer

`_ZN36TimerCompleteLoadAfterAssaultTimeout15registNextTimerElii`

`TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerCompleteLoadAfterAssaultTimeout` | `0x0863771a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863771a  _ZN36TimerCompleteLoadAfterAssaultTimeout15registNextTimerElii
#           TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long, int, int)
# range [0x0863771a, 0x0863775b]
0863771a +0x00:  push   %ebp
0863771b +0x01:  mov    %esp,%ebp
0863771d +0x03:  sub    $0x28,%esp
08637720 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637725 +0x0b:  movl   $0x0,0x18(%esp)
0863772d +0x13:  mov    0x10(%ebp),%edx
08637730 +0x16:  mov    %edx,0x14(%esp)
08637734 +0x1a:  mov    0x8(%ebp),%edx
08637737 +0x1d:  mov    %edx,0x10(%esp)
0863773b +0x21:  movl   $0x2a,0xc(%esp)
08637743 +0x29:  mov    0xc(%ebp),%edx
08637746 +0x2c:  mov    %edx,0x8(%esp)
0863774a +0x30:  movl   $0x1,0x4(%esp)
08637752 +0x38:  mov    %eax,(%esp)
08637755 +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863775a +0x40:  leave
0863775b +0x41:  ret
```

## 反编译 C

```c
// TimerCompleteLoadAfterAssaultTimeout::registNextTimer @ 0x863771a

/* TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long, int, int) */

void TimerCompleteLoadAfterAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,1,param_2,0x2a,param_1,param_3,0);
  return;
}
```
