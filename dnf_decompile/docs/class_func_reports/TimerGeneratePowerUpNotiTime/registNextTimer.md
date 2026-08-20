# registNextTimer

`_ZN28TimerGeneratePowerUpNotiTime15registNextTimerEl`

`TimerGeneratePowerUpNotiTime::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUpNotiTime` | `0x0863847e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863847e  _ZN28TimerGeneratePowerUpNotiTime15registNextTimerEl
#           TimerGeneratePowerUpNotiTime::registNextTimer(long)
# range [0x0863847e, 0x086384c1]
0863847e +0x00:  push   %ebp
0863847f +0x01:  mov    %esp,%ebp
08638481 +0x03:  sub    $0x28,%esp
08638484 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08638489 +0x0b:  movl   $0x0,0x18(%esp)
08638491 +0x13:  movl   $0x0,0x14(%esp)
08638499 +0x1b:  mov    0x8(%ebp),%edx
0863849c +0x1e:  mov    %edx,0x10(%esp)
086384a0 +0x22:  movl   $0x7d,0xc(%esp)
086384a8 +0x2a:  movl   $0x0,0x8(%esp)
086384b0 +0x32:  movl   $0x2,0x4(%esp)
086384b8 +0x3a:  mov    %eax,(%esp)
086384bb +0x3d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086384c0 +0x42:  leave
086384c1 +0x43:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUpNotiTime::registNextTimer @ 0x863847e

/* TimerGeneratePowerUpNotiTime::registNextTimer(long) */

void TimerGeneratePowerUpNotiTime::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x7d,param_1,0,0);
  return;
}
```
