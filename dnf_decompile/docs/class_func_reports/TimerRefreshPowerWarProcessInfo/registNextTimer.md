# registNextTimer

`_ZN31TimerRefreshPowerWarProcessInfo15registNextTimerEl`

`TimerRefreshPowerWarProcessInfo::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerRefreshPowerWarProcessInfo` | `0x08638316` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638316  _ZN31TimerRefreshPowerWarProcessInfo15registNextTimerEl
#           TimerRefreshPowerWarProcessInfo::registNextTimer(long)
# range [0x08638316, 0x08638359]
08638316 +0x00:  push   %ebp
08638317 +0x01:  mov    %esp,%ebp
08638319 +0x03:  sub    $0x28,%esp
0863831c +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08638321 +0x0b:  movl   $0x0,0x18(%esp)
08638329 +0x13:  movl   $0x0,0x14(%esp)
08638331 +0x1b:  mov    0x8(%ebp),%edx
08638334 +0x1e:  mov    %edx,0x10(%esp)
08638338 +0x22:  movl   $0x7b,0xc(%esp)
08638340 +0x2a:  movl   $0x0,0x8(%esp)
08638348 +0x32:  movl   $0x0,0x4(%esp)
08638350 +0x3a:  mov    %eax,(%esp)
08638353 +0x3d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08638358 +0x42:  leave
08638359 +0x43:  ret
```

## 反编译 C

```c
// TimerRefreshPowerWarProcessInfo::registNextTimer @ 0x8638316

/* TimerRefreshPowerWarProcessInfo::registNextTimer(long) */

void TimerRefreshPowerWarProcessInfo::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,0,0,0x7b,param_1,0,0);
  return;
}
```
