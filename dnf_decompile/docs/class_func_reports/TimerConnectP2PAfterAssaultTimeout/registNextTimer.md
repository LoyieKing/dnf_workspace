# registNextTimer

`_ZN34TimerConnectP2PAfterAssaultTimeout15registNextTimerElii`

`TimerConnectP2PAfterAssaultTimeout::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerConnectP2PAfterAssaultTimeout` | `0x0863778a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863778a  _ZN34TimerConnectP2PAfterAssaultTimeout15registNextTimerElii
#           TimerConnectP2PAfterAssaultTimeout::registNextTimer(long, int, int)
# range [0x0863778a, 0x086377cb]
0863778a +0x00:  push   %ebp
0863778b +0x01:  mov    %esp,%ebp
0863778d +0x03:  sub    $0x28,%esp
08637790 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08637795 +0x0b:  movl   $0x0,0x18(%esp)
0863779d +0x13:  mov    0x10(%ebp),%edx
086377a0 +0x16:  mov    %edx,0x14(%esp)
086377a4 +0x1a:  mov    0x8(%ebp),%edx
086377a7 +0x1d:  mov    %edx,0x10(%esp)
086377ab +0x21:  movl   $0x72,0xc(%esp)
086377b3 +0x29:  mov    0xc(%ebp),%edx
086377b6 +0x2c:  mov    %edx,0x8(%esp)
086377ba +0x30:  movl   $0x1,0x4(%esp)
086377c2 +0x38:  mov    %eax,(%esp)
086377c5 +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086377ca +0x40:  leave
086377cb +0x41:  ret
```

## 反编译 C

```c
// TimerConnectP2PAfterAssaultTimeout::registNextTimer @ 0x863778a

/* TimerConnectP2PAfterAssaultTimeout::registNextTimer(long, int, int) */

void TimerConnectP2PAfterAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,1,param_2,0x72,param_1,param_3,0);
  return;
}
```
