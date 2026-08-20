# InsertTimer

`_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij`

`TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerQueue` | `0x08630e16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630e16  _ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij
#           TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
# range [0x08630e16, 0x08630e5f]
08630e16 +0x00:  push   %ebp
08630e17 +0x01:  mov    %esp,%ebp
08630e19 +0x03:  sub    $0x28,%esp
08630e1c +0x06:  mov    0x18(%ebp),%eax
08630e1f +0x09:  mov    %eax,(%esp)
08630e22 +0x0c:  call   0863bb0b <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1c>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1c
08630e27 +0x11:  mov    0x20(%ebp),%ecx
08630e2a +0x14:  mov    %ecx,0x1c(%esp)
08630e2e +0x18:  mov    0x1c(%ebp),%ecx
08630e31 +0x1b:  mov    %ecx,0x18(%esp)
08630e35 +0x1f:  mov    %eax,0x10(%esp)
08630e39 +0x23:  mov    %edx,0x14(%esp)
08630e3d +0x27:  mov    0x14(%ebp),%eax
08630e40 +0x2a:  mov    %eax,0xc(%esp)
08630e44 +0x2e:  mov    0x10(%ebp),%eax
08630e47 +0x31:  mov    %eax,0x8(%esp)
08630e4b +0x35:  mov    0xc(%ebp),%eax
08630e4e +0x38:  mov    %eax,0x4(%esp)
08630e52 +0x3c:  mov    0x8(%ebp),%eax
08630e55 +0x3f:  mov    %eax,(%esp)
08630e58 +0x42:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
08630e5d +0x47:  leave
08630e5e +0x48:  ret
08630e5f +0x49:  nop
```

## 反编译 C

```c
// TimerQueue::InsertTimer @ 0x8630e16

/* TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int) */

void __thiscall
TimerQueue::InsertTimer
          (TimerQueue *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = SECOND_TO_MILISECOND(param_5);
  InsertTimerInMilisecond(this,param_2,param_3,param_4,uVar1,param_6,param_7);
  return;
}
```
