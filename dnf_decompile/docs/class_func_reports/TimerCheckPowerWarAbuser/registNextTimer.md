# registNextTimer

`_ZN24TimerCheckPowerWarAbuser15registNextTimerEl`

`TimerCheckPowerWarAbuser::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerCheckPowerWarAbuser` | `0x08638294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638294  _ZN24TimerCheckPowerWarAbuser15registNextTimerEl
#           TimerCheckPowerWarAbuser::registNextTimer(long)
# range [0x08638294, 0x086382d7]
08638294 +0x00:  push   %ebp
08638295 +0x01:  mov    %esp,%ebp
08638297 +0x03:  sub    $0x28,%esp
0863829a +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863829f +0x0b:  movl   $0x0,0x18(%esp)
086382a7 +0x13:  movl   $0x0,0x14(%esp)
086382af +0x1b:  mov    0x8(%ebp),%edx
086382b2 +0x1e:  mov    %edx,0x10(%esp)
086382b6 +0x22:  movl   $0x80,0xc(%esp)
086382be +0x2a:  movl   $0x0,0x8(%esp)
086382c6 +0x32:  movl   $0x2,0x4(%esp)
086382ce +0x3a:  mov    %eax,(%esp)
086382d1 +0x3d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086382d6 +0x42:  leave
086382d7 +0x43:  ret
```

## 反编译 C

```c
// TimerCheckPowerWarAbuser::registNextTimer @ 0x8638294

/* TimerCheckPowerWarAbuser::registNextTimer(long) */

void TimerCheckPowerWarAbuser::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x80,param_1,0,0);
  return;
}
```
