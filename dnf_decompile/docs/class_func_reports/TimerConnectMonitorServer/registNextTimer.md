# registNextTimer

`_ZN25TimerConnectMonitorServer15registNextTimerElii`

`TimerConnectMonitorServer::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerConnectMonitorServer` | `0x086381a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086381a0  _ZN25TimerConnectMonitorServer15registNextTimerElii
#           TimerConnectMonitorServer::registNextTimer(long, int, int)
# range [0x086381a0, 0x086381e1]
086381a0 +0x00:  push   %ebp
086381a1 +0x01:  mov    %esp,%ebp
086381a3 +0x03:  sub    $0x28,%esp
086381a6 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086381ab +0x0b:  movl   $0x0,0x18(%esp)
086381b3 +0x13:  mov    0x10(%ebp),%edx
086381b6 +0x16:  mov    %edx,0x14(%esp)
086381ba +0x1a:  mov    0x8(%ebp),%edx
086381bd +0x1d:  mov    %edx,0x10(%esp)
086381c1 +0x21:  movl   $0x7a,0xc(%esp)
086381c9 +0x29:  mov    0xc(%ebp),%edx
086381cc +0x2c:  mov    %edx,0x8(%esp)
086381d0 +0x30:  movl   $0x2,0x4(%esp)
086381d8 +0x38:  mov    %eax,(%esp)
086381db +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086381e0 +0x40:  leave
086381e1 +0x41:  ret
```

## 反编译 C

```c
// TimerConnectMonitorServer::registNextTimer @ 0x86381a0

/* TimerConnectMonitorServer::registNextTimer(long, int, int) */

void TimerConnectMonitorServer::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x7a,param_1,param_3,0);
  return;
}
```
