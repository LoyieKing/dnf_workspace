# RegistTimerClearReward

`_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE`

`advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::Timer_StageControl` | `0x0812f89c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f89c  _ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE
#           advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T)
# range [0x0812f89c, 0x0812f8eb]
0812f89c +0x00:  push   %ebp
0812f89d +0x01:  mov    %esp,%ebp
0812f89f +0x03:  push   %ebx
0812f8a0 +0x04:  sub    $0x24,%esp
0812f8a3 +0x07:  mov    0xc(%ebp),%ebx
0812f8a6 +0x0a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0812f8ab +0x0f:  mov    %ebx,0x1c(%esp)
0812f8af +0x13:  movl   $0xa8,0x18(%esp)
0812f8b7 +0x1b:  movl   $0xbb8,0x10(%esp)
0812f8bf +0x23:  movl   $0x0,0x14(%esp)
0812f8c7 +0x2b:  movl   $0xa8,0xc(%esp)
0812f8cf +0x33:  mov    0x8(%ebp),%edx
0812f8d2 +0x36:  mov    %edx,0x8(%esp)
0812f8d6 +0x3a:  movl   $0x8,0x4(%esp)
0812f8de +0x42:  mov    %eax,(%esp)
0812f8e1 +0x45:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
0812f8e6 +0x4a:  add    $0x24,%esp
0812f8e9 +0x4d:  pop    %ebx
0812f8ea +0x4e:  pop    %ebp
0812f8eb +0x4f:  ret
```

## 反编译 C

```c
// advancealtar::Timer_StageControl::RegistTimerClearReward @ 0x812f89c

/* advancealtar::Timer_StageControl::RegistTimerClearReward(int, advancealtar::StageEndType::T) */

void advancealtar::Timer_StageControl::RegistTimerClearReward(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xa8,3000,0,0xa8,param_2);
  return;
}
```
