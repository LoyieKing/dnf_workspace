# registNextTimer

`_ZN21Timer_PcRoomAuthRetry15registNextTimerEliij`

`Timer_PcRoomAuthRetry::registNextTimer(long, int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_PcRoomAuthRetry` | `0x086399d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086399d0  _ZN21Timer_PcRoomAuthRetry15registNextTimerEliij
#           Timer_PcRoomAuthRetry::registNextTimer(long, int, int, unsigned int)
# range [0x086399d0, 0x08639a11]
086399d0 +0x00:  push   %ebp
086399d1 +0x01:  mov    %esp,%ebp
086399d3 +0x03:  sub    $0x28,%esp
086399d6 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086399db +0x0b:  mov    0x14(%ebp),%edx
086399de +0x0e:  mov    %edx,0x18(%esp)
086399e2 +0x12:  mov    0x10(%ebp),%edx
086399e5 +0x15:  mov    %edx,0x14(%esp)
086399e9 +0x19:  mov    0x8(%ebp),%edx
086399ec +0x1c:  mov    %edx,0x10(%esp)
086399f0 +0x20:  movl   $0x92,0xc(%esp)
086399f8 +0x28:  mov    0xc(%ebp),%edx
086399fb +0x2b:  mov    %edx,0x8(%esp)
086399ff +0x2f:  movl   $0x2,0x4(%esp)
08639a07 +0x37:  mov    %eax,(%esp)
08639a0a +0x3a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08639a0f +0x3f:  leave
08639a10 +0x40:  ret
08639a11 +0x41:  nop
```

## 反编译 C

```c
// Timer_PcRoomAuthRetry::registNextTimer @ 0x86399d0

/* Timer_PcRoomAuthRetry::registNextTimer(long, int, int, unsigned int) */

void Timer_PcRoomAuthRetry::registNextTimer(long param_1,int param_2,int param_3,uint param_4)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x92,param_1,param_3,param_4);
  return;
}
```
