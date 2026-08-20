# RegisterNextTimer

`_ZN23Timer_AssaultGhostTimer17RegisterNextTimerEP5CUserij`

`Timer_AssaultGhostTimer::RegisterNextTimer(CUser*, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_AssaultGhostTimer` | `0x0863b242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b242  _ZN23Timer_AssaultGhostTimer17RegisterNextTimerEP5CUserij
#           Timer_AssaultGhostTimer::RegisterNextTimer(CUser*, int, unsigned int)
# range [0x0863b242, 0x0863b29b]
0863b242 +0x00:  push   %ebp
0863b243 +0x01:  mov    %esp,%ebp
0863b245 +0x03:  push   %ebx
0863b246 +0x04:  sub    $0x24,%esp
0863b249 +0x07:  cmpl   $0x0,0x8(%ebp)
0863b24d +0x0b:  je     0863b295 <+0x53>
0863b24f +0x0d:  mov    0x8(%ebp),%eax
0863b252 +0x10:  mov    %eax,(%esp)
0863b255 +0x13:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0863b25a +0x18:  mov    %eax,%ebx
0863b25c +0x1a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863b261 +0x1f:  mov    0x10(%ebp),%edx
0863b264 +0x22:  mov    %edx,0x18(%esp)
0863b268 +0x26:  movl   $0x0,0x14(%esp)
0863b270 +0x2e:  mov    0xc(%ebp),%edx
0863b273 +0x31:  mov    %edx,0x10(%esp)
0863b277 +0x35:  movl   $0xa0,0xc(%esp)
0863b27f +0x3d:  mov    %ebx,0x8(%esp)
0863b283 +0x41:  movl   $0x0,0x4(%esp)
0863b28b +0x49:  mov    %eax,(%esp)
0863b28e +0x4c:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863b293 +0x51:  jmp    0863b296 <+0x54>
0863b295 +0x53:  nop
0863b296 +0x54:  add    $0x24,%esp
0863b299 +0x57:  pop    %ebx
0863b29a +0x58:  pop    %ebp
0863b29b +0x59:  ret
```

## 反编译 C

```c
// Timer_AssaultGhostTimer::RegisterNextTimer @ 0x863b242

/* Timer_AssaultGhostTimer::RegisterNextTimer(CUser*, int, unsigned int) */

void Timer_AssaultGhostTimer::RegisterNextTimer(CUser *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  TimerQueue *pTVar2;
  
  if (param_1 != (CUser *)0x0) {
    uVar1 = CUser::GetUID(param_1);
    pTVar2 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar2,0,uVar1,0xa0,param_2,0,param_3);
  }
  return;
}
```
