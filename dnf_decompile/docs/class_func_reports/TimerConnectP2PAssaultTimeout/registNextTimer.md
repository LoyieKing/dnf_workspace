# registNextTimer

`_ZN29TimerConnectP2PAssaultTimeout15registNextTimerElii`

`TimerConnectP2PAssaultTimeout::registNextTimer(long, int, int)`

| 类 | 地址 |
|---|---|
| `TimerConnectP2PAssaultTimeout` | `0x086375ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086375ca  _ZN29TimerConnectP2PAssaultTimeout15registNextTimerElii
#           TimerConnectP2PAssaultTimeout::registNextTimer(long, int, int)
# range [0x086375ca, 0x0863760b]
086375ca +0x00:  push   %ebp
086375cb +0x01:  mov    %esp,%ebp
086375cd +0x03:  sub    $0x28,%esp
086375d0 +0x06:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086375d5 +0x0b:  movl   $0x0,0x18(%esp)
086375dd +0x13:  mov    0x10(%ebp),%edx
086375e0 +0x16:  mov    %edx,0x14(%esp)
086375e4 +0x1a:  mov    0x8(%ebp),%edx
086375e7 +0x1d:  mov    %edx,0x10(%esp)
086375eb +0x21:  movl   $0x6f,0xc(%esp)
086375f3 +0x29:  mov    0xc(%ebp),%edx
086375f6 +0x2c:  mov    %edx,0x8(%esp)
086375fa +0x30:  movl   $0x2,0x4(%esp)
08637602 +0x38:  mov    %eax,(%esp)
08637605 +0x3b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863760a +0x40:  leave
0863760b +0x41:  ret
```

## 反编译 C

```c
// TimerConnectP2PAssaultTimeout::registNextTimer @ 0x86375ca

/* TimerConnectP2PAssaultTimeout::registNextTimer(long, int, int) */

void TimerConnectP2PAssaultTimeout::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x6f,param_1,param_3,0);
  return;
}
```
