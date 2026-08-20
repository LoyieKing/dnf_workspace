# InsertTimerInMilisecond

`_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij`

`TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerQueue` | `0x08630e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630e60  _ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij
#           TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
# range [0x08630e60, 0x08630ecb]
08630e60 +0x00:  push   %ebp
08630e61 +0x01:  mov    %esp,%ebp
08630e63 +0x03:  sub    $0x48,%esp
08630e66 +0x06:  mov    0x18(%ebp),%eax
08630e69 +0x09:  mov    %eax,-0x30(%ebp)
08630e6c +0x0c:  mov    0x1c(%ebp),%eax
08630e6f +0x0f:  mov    %eax,-0x2c(%ebp)
08630e72 +0x12:  lea    -0x24(%ebp),%eax
08630e75 +0x15:  mov    %eax,(%esp)
08630e78 +0x18:  call   0847e85c <_GLOBAL__I__ZN14DispatchThreadC2Ev+0x1c>  ; global constructors keyed to DispatchThread::DispatchThread()+0x1c
08630e7d +0x1d:  mov    0xc(%ebp),%eax
08630e80 +0x20:  mov    %eax,-0x24(%ebp)
08630e83 +0x23:  mov    0x10(%ebp),%eax
08630e86 +0x26:  mov    %eax,-0x20(%ebp)
08630e89 +0x29:  mov    0x14(%ebp),%eax
08630e8c +0x2c:  mov    %eax,-0x1c(%ebp)
08630e8f +0x2f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08630e96 +0x36:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08630e9b +0x3b:  mov    $0x0,%edx
08630ea0 +0x40:  add    -0x30(%ebp),%eax
08630ea3 +0x43:  adc    -0x2c(%ebp),%edx
08630ea6 +0x46:  mov    %eax,-0x18(%ebp)
08630ea9 +0x49:  mov    %edx,-0x14(%ebp)
08630eac +0x4c:  mov    0x20(%ebp),%eax
08630eaf +0x4f:  mov    %eax,-0x10(%ebp)
08630eb2 +0x52:  mov    0x24(%ebp),%eax
08630eb5 +0x55:  mov    %eax,-0xc(%ebp)
08630eb8 +0x58:  lea    -0x24(%ebp),%eax
08630ebb +0x5b:  mov    %eax,0x4(%esp)
08630ebf +0x5f:  mov    0x8(%ebp),%eax
08630ec2 +0x62:  mov    %eax,(%esp)
08630ec5 +0x65:  call   08630cec <_ZN10TimerQueue11InsertTimerER10TimerEntry>  ; TimerQueue::InsertTimer(TimerEntry&)
08630eca +0x6a:  leave
08630ecb +0x6b:  ret
```

## 反编译 C

```c
// TimerQueue::InsertTimerInMilisecond @ 0x8630e60

/* TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int,
   unsigned int) */

void TimerQueue::InsertTimerInMilisecond
               (TimerQueue *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  TimerEntry::TimerEntry((TimerEntry *)&local_28);
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = uVar1 + param_5;
  local_18 = param_6 + (uint)CARRY4(uVar1,param_5);
  local_14 = param_7;
  local_10 = param_8;
  InsertTimer(param_1,(TimerEntry *)&local_28);
  return;
}
```
