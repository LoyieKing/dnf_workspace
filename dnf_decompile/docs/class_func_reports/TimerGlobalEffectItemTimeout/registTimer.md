# registTimer

`_ZN28TimerGlobalEffectItemTimeout11registTimerEjj`

`TimerGlobalEffectItemTimeout::registTimer(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerGlobalEffectItemTimeout` | `0x08637ef6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637ef6  _ZN28TimerGlobalEffectItemTimeout11registTimerEjj
#           TimerGlobalEffectItemTimeout::registTimer(unsigned int, unsigned int)
# range [0x08637ef6, 0x08637f3f]
08637ef6 +0x00:  push   %ebp
08637ef7 +0x01:  mov    %esp,%ebp
08637ef9 +0x03:  push   %esi
08637efa +0x04:  push   %ebx
08637efb +0x05:  sub    $0x20,%esp
08637efe +0x08:  mov    0x8(%ebp),%esi
08637f01 +0x0b:  mov    0xc(%ebp),%ebx
08637f04 +0x0e:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637f09 +0x13:  movl   $0x0,0x18(%esp)
08637f11 +0x1b:  mov    %esi,0x14(%esp)
08637f15 +0x1f:  mov    %ebx,0x10(%esp)
08637f19 +0x23:  movl   $0x78,0xc(%esp)
08637f21 +0x2b:  movl   $0x0,0x8(%esp)
08637f29 +0x33:  movl   $0x2,0x4(%esp)
08637f31 +0x3b:  mov    %eax,(%esp)
08637f34 +0x3e:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08637f39 +0x43:  add    $0x20,%esp
08637f3c +0x46:  pop    %ebx
08637f3d +0x47:  pop    %esi
08637f3e +0x48:  pop    %ebp
08637f3f +0x49:  ret
```

## 反编译 C

```c
// TimerGlobalEffectItemTimeout::registTimer @ 0x8637ef6

/* TimerGlobalEffectItemTimeout::registTimer(unsigned int, unsigned int) */

void TimerGlobalEffectItemTimeout::registTimer(uint param_1,uint param_2)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x78,param_2,param_1,0);
  return;
}
```
