# RegistNextTimer

`_ZN12TimerNatType15RegistNextTimerEv`

`TimerNatType::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerNatType` | `0x08635c5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635c5a  _ZN12TimerNatType15RegistNextTimerEv
#           TimerNatType::RegistNextTimer()
# range [0x08635c5a, 0x08635ca9]
08635c5a +0x00:  push   %ebp
08635c5b +0x01:  mov    %esp,%ebp
08635c5d +0x03:  sub    $0x38,%esp
08635c60 +0x06:  movl   $&_ZL14gUnicodeBuffer+0xac54,-0xc(%ebp)
08635c67 +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08635c6c +0x12:  movl   $0x0,0x18(%esp)
08635c74 +0x1a:  movl   $0x0,0x14(%esp)
08635c7c +0x22:  mov    -0xc(%ebp),%edx
08635c7f +0x25:  mov    %edx,0x10(%esp)
08635c83 +0x29:  movl   $0x5a,0xc(%esp)
08635c8b +0x31:  movl   $0x0,0x8(%esp)
08635c93 +0x39:  movl   $0x2,0x4(%esp)
08635c9b +0x41:  mov    %eax,(%esp)
08635c9e +0x44:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08635ca3 +0x49:  mov    $0x1,%eax
08635ca8 +0x4e:  leave
08635ca9 +0x4f:  ret
```

## 反编译 C

```c
// TimerNatType::RegistNextTimer @ 0x8635c5a

/* TimerNatType::RegistNextTimer() */

undefined4 TimerNatType::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x5a,0x15180,0,0);
  return 1;
}
```
