# RegistTimerCheckFinsh

`_ZN12advancealtar18Timer_StageControl21RegistTimerCheckFinshEi`

`advancealtar::Timer_StageControl::RegistTimerCheckFinsh(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::Timer_StageControl` | `0x0812f850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f850  _ZN12advancealtar18Timer_StageControl21RegistTimerCheckFinshEi
#           advancealtar::Timer_StageControl::RegistTimerCheckFinsh(int)
# range [0x0812f850, 0x0812f89b]
0812f850 +0x00:  push   %ebp
0812f851 +0x01:  mov    %esp,%ebp
0812f853 +0x03:  sub    $0x28,%esp
0812f856 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0812f85b +0x0b:  movl   $0x0,0x1c(%esp)
0812f863 +0x13:  movl   $0xa7,0x18(%esp)
0812f86b +0x1b:  movl   $0x1388,0x10(%esp)
0812f873 +0x23:  movl   $0x0,0x14(%esp)
0812f87b +0x2b:  movl   $0xa7,0xc(%esp)
0812f883 +0x33:  mov    0x8(%ebp),%edx
0812f886 +0x36:  mov    %edx,0x8(%esp)
0812f88a +0x3a:  movl   $0x8,0x4(%esp)
0812f892 +0x42:  mov    %eax,(%esp)
0812f895 +0x45:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
0812f89a +0x4a:  leave
0812f89b +0x4b:  ret
```

## 反编译 C

```c
// advancealtar::Timer_StageControl::RegistTimerCheckFinsh @ 0x812f850

/* advancealtar::Timer_StageControl::RegistTimerCheckFinsh(int) */

void advancealtar::Timer_StageControl::RegistTimerCheckFinsh(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xa7,5000,0,0xa7,0);
  return;
}
```
