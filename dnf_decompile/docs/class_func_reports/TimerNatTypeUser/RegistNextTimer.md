# RegistNextTimer

`_ZN16TimerNatTypeUser15RegistNextTimerEv`

`TimerNatTypeUser::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `TimerNatTypeUser` | `0x08635cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635cd0  _ZN16TimerNatTypeUser15RegistNextTimerEv
#           TimerNatTypeUser::RegistNextTimer()
# range [0x08635cd0, 0x08635d1f]
08635cd0 +0x00:  push   %ebp
08635cd1 +0x01:  mov    %esp,%ebp
08635cd3 +0x03:  sub    $0x38,%esp
08635cd6 +0x06:  movl   $0xe10,-0xc(%ebp)
08635cdd +0x0d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08635ce2 +0x12:  movl   $0x0,0x18(%esp)
08635cea +0x1a:  movl   $0x0,0x14(%esp)
08635cf2 +0x22:  mov    -0xc(%ebp),%edx
08635cf5 +0x25:  mov    %edx,0x10(%esp)
08635cf9 +0x29:  movl   $0x5b,0xc(%esp)
08635d01 +0x31:  movl   $0x0,0x8(%esp)
08635d09 +0x39:  movl   $0x2,0x4(%esp)
08635d11 +0x41:  mov    %eax,(%esp)
08635d14 +0x44:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08635d19 +0x49:  mov    $0x1,%eax
08635d1e +0x4e:  leave
08635d1f +0x4f:  ret
```

## 反编译 C

```c
// TimerNatTypeUser::RegistNextTimer @ 0x8635cd0

/* TimerNatTypeUser::RegistNextTimer() */

undefined4 TimerNatTypeUser::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x5b,0xe10,0,0);
  return 1;
}
```
