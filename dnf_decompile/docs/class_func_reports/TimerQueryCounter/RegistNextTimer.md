# RegistNextTimer

`_ZN17TimerQueryCounter15RegistNextTimerEv`

`TimerQueryCounter::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerQueryCounter` | `0x08635bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635bdc  _ZN17TimerQueryCounter15RegistNextTimerEv
#           TimerQueryCounter::RegistNextTimer()
# range [0x08635bdc, 0x08635c2b]
08635bdc +0x00:  push   %ebp
08635bdd +0x01:  mov    %esp,%ebp
08635bdf +0x03:  sub    $0x38,%esp
08635be2 +0x06:  movl   $0x708,-0xc(%ebp)
08635be9 +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08635bee +0x12:  movl   $0x0,0x18(%esp)
08635bf6 +0x1a:  movl   $0x0,0x14(%esp)
08635bfe +0x22:  mov    -0xc(%ebp),%edx
08635c01 +0x25:  mov    %edx,0x10(%esp)
08635c05 +0x29:  movl   $0x59,0xc(%esp)
08635c0d +0x31:  movl   $0x0,0x8(%esp)
08635c15 +0x39:  movl   $0x2,0x4(%esp)
08635c1d +0x41:  mov    %eax,(%esp)
08635c20 +0x44:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08635c25 +0x49:  mov    $0x1,%eax
08635c2a +0x4e:  leave
08635c2b +0x4f:  ret
```

## 反编译 C

```c
// TimerQueryCounter::RegistNextTimer @ 0x8635bdc

/* TimerQueryCounter::RegistNextTimer() */

undefined4 TimerQueryCounter::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x59,0x708,0,0);
  return 1;
}
```
