# RegistNextTimer

`_ZN25Timer_GenerateCaptchaData15RegistNextTimerEi`

`Timer_GenerateCaptchaData::RegistNextTimer(int)`

| 类 | 地址 |
|---|---|
| `Timer_GenerateCaptchaData` | `0x0863b2ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b2ba  _ZN25Timer_GenerateCaptchaData15RegistNextTimerEi
#           Timer_GenerateCaptchaData::RegistNextTimer(int)
# range [0x0863b2ba, 0x0863b2fd]
0863b2ba +0x00:  push   %ebp
0863b2bb +0x01:  mov    %esp,%ebp
0863b2bd +0x03:  sub    $0x28,%esp
0863b2c0 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863b2c5 +0x0b:  movl   $0x0,0x18(%esp)
0863b2cd +0x13:  movl   $0x0,0x14(%esp)
0863b2d5 +0x1b:  mov    0x8(%ebp),%edx
0863b2d8 +0x1e:  mov    %edx,0x10(%esp)
0863b2dc +0x22:  movl   $0xa1,0xc(%esp)
0863b2e4 +0x2a:  movl   $0x0,0x8(%esp)
0863b2ec +0x32:  movl   $0x2,0x4(%esp)
0863b2f4 +0x3a:  mov    %eax,(%esp)
0863b2f7 +0x3d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863b2fc +0x42:  leave
0863b2fd +0x43:  ret
```

## 反编译 C

```c
// Timer_GenerateCaptchaData::RegistNextTimer @ 0x863b2ba

/* Timer_GenerateCaptchaData::RegistNextTimer(int) */

void Timer_GenerateCaptchaData::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xa1,param_1,0,0);
  return;
}
```
