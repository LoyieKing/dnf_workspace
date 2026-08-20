# registNextTimer

`_ZN23Timer_ReturnUserTimeout15registNextTimerEiij`

`Timer_ReturnUserTimeout::registNextTimer(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_ReturnUserTimeout` | `0x0863a706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a706  _ZN23Timer_ReturnUserTimeout15registNextTimerEiij
#           Timer_ReturnUserTimeout::registNextTimer(int, int, unsigned int)
# range [0x0863a706, 0x0863a75f]
0863a706 +0x00:  push   %ebp
0863a707 +0x01:  mov    %esp,%ebp
0863a709 +0x03:  sub    $0x38,%esp
0863a70c +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863a713 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863a718 +0x12:  mov    0x10(%ebp),%edx
0863a71b +0x15:  mov    %edx,%ecx
0863a71d +0x17:  sub    %eax,%ecx
0863a71f +0x19:  mov    %ecx,%eax
0863a721 +0x1b:  mov    %eax,-0xc(%ebp)
0863a724 +0x1e:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863a729 +0x23:  movl   $0x0,0x18(%esp)
0863a731 +0x2b:  mov    0xc(%ebp),%edx
0863a734 +0x2e:  mov    %edx,0x14(%esp)
0863a738 +0x32:  mov    -0xc(%ebp),%edx
0863a73b +0x35:  mov    %edx,0x10(%esp)
0863a73f +0x39:  movl   $0x95,0xc(%esp)
0863a747 +0x41:  mov    0x8(%ebp),%edx
0863a74a +0x44:  mov    %edx,0x8(%esp)
0863a74e +0x48:  movl   $0x2,0x4(%esp)
0863a756 +0x50:  mov    %eax,(%esp)
0863a759 +0x53:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863a75e +0x58:  leave
0863a75f +0x59:  ret
```

## 反编译 C

```c
// Timer_ReturnUserTimeout::registNextTimer @ 0x863a706

/* Timer_ReturnUserTimeout::registNextTimer(int, int, unsigned int) */

void Timer_ReturnUserTimeout::registNextTimer(int param_1,int param_2,uint param_3)

{
  int iVar1;
  TimerQueue *pTVar2;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,param_1,0x95,param_3 - iVar1,param_2,0);
  return;
}
```
