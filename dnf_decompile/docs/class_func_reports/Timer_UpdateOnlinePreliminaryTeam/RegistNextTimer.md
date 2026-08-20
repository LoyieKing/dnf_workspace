# RegistNextTimer

`_ZN33Timer_UpdateOnlinePreliminaryTeam15RegistNextTimerEi`

`Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int)`

| 类 | 地址 |
|---|---|
| `Timer_UpdateOnlinePreliminaryTeam` | `0x0863977e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863977e  _ZN33Timer_UpdateOnlinePreliminaryTeam15RegistNextTimerEi
#           Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int)
# range [0x0863977e, 0x086397cd]
0863977e +0x00:  push   %ebp
0863977f +0x01:  mov    %esp,%ebp
08639781 +0x03:  sub    $0x38,%esp
08639784 +0x06:  movl   $0x258,-0xc(%ebp)
0863978b +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08639790 +0x12:  movl   $0x0,0x18(%esp)
08639798 +0x1a:  mov    0x8(%ebp),%edx
0863979b +0x1d:  mov    %edx,0x14(%esp)
0863979f +0x21:  mov    -0xc(%ebp),%edx
086397a2 +0x24:  mov    %edx,0x10(%esp)
086397a6 +0x28:  movl   $0x8f,0xc(%esp)
086397ae +0x30:  movl   $0x0,0x8(%esp)
086397b6 +0x38:  movl   $0x2,0x4(%esp)
086397be +0x40:  mov    %eax,(%esp)
086397c1 +0x43:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086397c6 +0x48:  mov    $0x1,%eax
086397cb +0x4d:  leave
086397cc +0x4e:  ret
086397cd +0x4f:  nop
```

## 反编译 C

```c
// Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer @ 0x863977e

/* Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int) */

undefined4 Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x8f,600,param_1,0);
  return 1;
}
```
