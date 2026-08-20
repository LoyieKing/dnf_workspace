# RegistNextTimerGage

`_ZN12advancealtar14Timer_MainTick19RegistNextTimerGageEv`

`advancealtar::Timer_MainTick::RegistNextTimerGage()`

| 类 | 地址 |
|---|---|
| `advancealtar::Timer_MainTick` | `0x0812f7b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f7b8  _ZN12advancealtar14Timer_MainTick19RegistNextTimerGageEv
#           advancealtar::Timer_MainTick::RegistNextTimerGage()
# range [0x0812f7b8, 0x0812f805]
0812f7b8 +0x00:  push   %ebp
0812f7b9 +0x01:  mov    %esp,%ebp
0812f7bb +0x03:  sub    $0x28,%esp
0812f7be +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0812f7c3 +0x0b:  movl   $0x0,0x1c(%esp)
0812f7cb +0x13:  movl   $0x0,0x18(%esp)
0812f7d3 +0x1b:  movl   $0x3e8,0x10(%esp)
0812f7db +0x23:  movl   $0x0,0x14(%esp)
0812f7e3 +0x2b:  movl   $0xa6,0xc(%esp)
0812f7eb +0x33:  movl   $0x0,0x8(%esp)
0812f7f3 +0x3b:  movl   $0x8,0x4(%esp)
0812f7fb +0x43:  mov    %eax,(%esp)
0812f7fe +0x46:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
0812f803 +0x4b:  leave
0812f804 +0x4c:  ret
0812f805 +0x4d:  nop
```

## 反编译 C

```c
// advancealtar::Timer_MainTick::RegistNextTimerGage @ 0x812f7b8

/* advancealtar::Timer_MainTick::RegistNextTimerGage() */

void advancealtar::Timer_MainTick::RegistNextTimerGage(void)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,0,0xa6,1000,0,0,0);
  return;
}
```
