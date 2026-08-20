# RegistNextTimer

`_ZN25Timer_SecretShopStatistic15RegistNextTimerEv`

`Timer_SecretShopStatistic::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_SecretShopStatistic` | `0x086397ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086397ee  _ZN25Timer_SecretShopStatistic15RegistNextTimerEv
#           Timer_SecretShopStatistic::RegistNextTimer()
# range [0x086397ee, 0x08639833]
086397ee +0x00:  push   %ebp
086397ef +0x01:  mov    %esp,%ebp
086397f1 +0x03:  sub    $0x28,%esp
086397f4 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086397f9 +0x0b:  movl   $0x0,0x18(%esp)
08639801 +0x13:  movl   $0x0,0x14(%esp)
08639809 +0x1b:  movl   $0x3c,0x10(%esp)
08639811 +0x23:  movl   $0x90,0xc(%esp)
08639819 +0x2b:  movl   $0x0,0x8(%esp)
08639821 +0x33:  movl   $0x2,0x4(%esp)
08639829 +0x3b:  mov    %eax,(%esp)
0863982c +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08639831 +0x43:  leave
08639832 +0x44:  ret
08639833 +0x45:  nop
```

## 反编译 C

```c
// Timer_SecretShopStatistic::RegistNextTimer @ 0x86397ee

/* Timer_SecretShopStatistic::RegistNextTimer() */

void Timer_SecretShopStatistic::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x90,0x3c,0,0);
  return;
}
```
