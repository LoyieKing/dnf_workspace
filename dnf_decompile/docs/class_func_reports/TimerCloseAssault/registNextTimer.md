# registNextTimer

`_ZN17TimerCloseAssault15registNextTimerElii`

`TimerCloseAssault::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerCloseAssault` | `0x086376aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086376aa  _ZN17TimerCloseAssault15registNextTimerElii
#           TimerCloseAssault::registNextTimer(long, int, int)
# range [0x086376aa, 0x086376eb]
086376aa +0x00:  push   %ebp
086376ab +0x01:  mov    %esp,%ebp
086376ad +0x03:  sub    $0x28,%esp
086376b0 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086376b5 +0x0b:  movl   $0x0,0x18(%esp)
086376bd +0x13:  mov    0x10(%ebp),%edx
086376c0 +0x16:  mov    %edx,0x14(%esp)
086376c4 +0x1a:  mov    0x8(%ebp),%edx
086376c7 +0x1d:  mov    %edx,0x10(%esp)
086376cb +0x21:  movl   $0x71,0xc(%esp)
086376d3 +0x29:  mov    0xc(%ebp),%edx
086376d6 +0x2c:  mov    %edx,0x8(%esp)
086376da +0x30:  movl   $0x2,0x4(%esp)
086376e2 +0x38:  mov    %eax,(%esp)
086376e5 +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086376ea +0x40:  leave
086376eb +0x41:  ret
```

## 反编译 C

```c
// TimerCloseAssault::registNextTimer @ 0x86376aa

/* TimerCloseAssault::registNextTimer(long, int, int) */

void TimerCloseAssault::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x71,param_1,param_3,0);
  return;
}
```
