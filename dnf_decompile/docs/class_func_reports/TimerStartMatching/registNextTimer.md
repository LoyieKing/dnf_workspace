# registNextTimer

`_ZN18TimerStartMatching15registNextTimerElii`

`TimerStartMatching::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerStartMatching` | `0x08637e14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637e14  _ZN18TimerStartMatching15registNextTimerElii
#           TimerStartMatching::registNextTimer(long, int, int)
# range [0x08637e14, 0x08637e55]
08637e14 +0x00:  push   %ebp
08637e15 +0x01:  mov    %esp,%ebp
08637e17 +0x03:  sub    $0x28,%esp
08637e1a +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637e1f +0x0b:  movl   $0x0,0x18(%esp)
08637e27 +0x13:  mov    0x10(%ebp),%edx
08637e2a +0x16:  mov    %edx,0x14(%esp)
08637e2e +0x1a:  mov    0x8(%ebp),%edx
08637e31 +0x1d:  mov    %edx,0x10(%esp)
08637e35 +0x21:  movl   $0x79,0xc(%esp)
08637e3d +0x29:  mov    0xc(%ebp),%edx
08637e40 +0x2c:  mov    %edx,0x8(%esp)
08637e44 +0x30:  movl   $0x2,0x4(%esp)
08637e4c +0x38:  mov    %eax,(%esp)
08637e4f +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08637e54 +0x40:  leave
08637e55 +0x41:  ret
```

## 反编译 C

```c
// TimerStartMatching::registNextTimer @ 0x8637e14

/* TimerStartMatching::registNextTimer(long, int, int) */

void TimerStartMatching::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x79,param_1,param_3,0);
  return;
}
```
