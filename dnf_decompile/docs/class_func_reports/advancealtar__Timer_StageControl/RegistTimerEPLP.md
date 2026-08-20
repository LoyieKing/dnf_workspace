# RegistTimerEPLP

`_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE`

`advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::Timer_StageControl` | `0x0812f8ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f8ec  _ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE
#           advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T)
# range [0x0812f8ec, 0x0812f955]
0812f8ec +0x00:  push   %ebp
0812f8ed +0x01:  mov    %esp,%ebp
0812f8ef +0x03:  push   %edi
0812f8f0 +0x04:  push   %esi
0812f8f1 +0x05:  push   %ebx
0812f8f2 +0x06:  sub    $0x3c,%esp
0812f8f5 +0x09:  movl   $0x3e8,-0x1c(%ebp)
0812f8fc +0x10:  cmpl   $0x3,0xc(%ebp)
0812f900 +0x14:  jne    0812f909 <+0x1d>
0812f902 +0x16:  movl   $0x3e8,-0x1c(%ebp)
0812f909 +0x1d:  mov    0xc(%ebp),%edi
0812f90c +0x20:  mov    -0x1c(%ebp),%eax
0812f90f +0x23:  mov    %eax,%ebx
0812f911 +0x25:  mov    %eax,%esi
0812f913 +0x27:  sar    $0x1f,%esi
0812f916 +0x2a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0812f91b +0x2f:  mov    %edi,0x1c(%esp)
0812f91f +0x33:  movl   $0xa9,0x18(%esp)
0812f927 +0x3b:  mov    %ebx,0x10(%esp)
0812f92b +0x3f:  mov    %esi,0x14(%esp)
0812f92f +0x43:  movl   $0xa9,0xc(%esp)
0812f937 +0x4b:  mov    0x8(%ebp),%edx
0812f93a +0x4e:  mov    %edx,0x8(%esp)
0812f93e +0x52:  movl   $0x8,0x4(%esp)
0812f946 +0x5a:  mov    %eax,(%esp)
0812f949 +0x5d:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
0812f94e +0x62:  add    $0x3c,%esp
0812f951 +0x65:  pop    %ebx
0812f952 +0x66:  pop    %esi
0812f953 +0x67:  pop    %edi
0812f954 +0x68:  pop    %ebp
0812f955 +0x69:  ret
```

## 反编译 C

```c
// advancealtar::Timer_StageControl::RegistTimerEPLP @ 0x812f8ec

/* advancealtar::Timer_StageControl::RegistTimerEPLP(int, advancealtar::StageEndType::T) */

void advancealtar::Timer_StageControl::RegistTimerEPLP(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar1,8,param_1,0xa9,1000,0,0xa9,param_2);
  return;
}
```
