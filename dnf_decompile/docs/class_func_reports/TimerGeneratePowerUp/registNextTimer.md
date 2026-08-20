# registNextTimer

`_ZN20TimerGeneratePowerUp15registNextTimerEl`

`TimerGeneratePowerUp::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUp` | `0x08638b5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638b5c  _ZN20TimerGeneratePowerUp15registNextTimerEl
#           TimerGeneratePowerUp::registNextTimer(long)
# range [0x08638b5c, 0x08638b9f]
08638b5c +0x00:  push   %ebp
08638b5d +0x01:  mov    %esp,%ebp
08638b5f +0x03:  sub    $0x28,%esp
08638b62 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08638b67 +0x0b:  movl   $0x0,0x18(%esp)
08638b6f +0x13:  movl   $0x0,0x14(%esp)
08638b77 +0x1b:  mov    0x8(%ebp),%edx
08638b7a +0x1e:  mov    %edx,0x10(%esp)
08638b7e +0x22:  movl   $0x7c,0xc(%esp)
08638b86 +0x2a:  movl   $0x0,0x8(%esp)
08638b8e +0x32:  movl   $0x2,0x4(%esp)
08638b96 +0x3a:  mov    %eax,(%esp)
08638b99 +0x3d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08638b9e +0x42:  leave
08638b9f +0x43:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUp::registNextTimer @ 0x8638b5c

/* TimerGeneratePowerUp::registNextTimer(long) */

void TimerGeneratePowerUp::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x7c,param_1,0,0);
  return;
}
```
