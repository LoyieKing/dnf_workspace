# SetNextLogTimer

`_ZN8WongWork15CLogGameChannel15SetNextLogTimerEv`

`WongWork::CLogGameChannel::SetNextLogTimer()`

| 类 | 地址 |
|---|---|
| `WongWork::CLogGameChannel` | `0x085503fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085503fe  _ZN8WongWork15CLogGameChannel15SetNextLogTimerEv
#           WongWork::CLogGameChannel::SetNextLogTimer()
# range [0x085503fe, 0x08550455]
085503fe +0x00:  push   %ebp
085503ff +0x01:  mov    %esp,%ebp
08550401 +0x03:  push   %ebx
08550402 +0x04:  sub    $0x24,%esp
08550405 +0x07:  mov    0x8(%ebp),%eax
08550408 +0x0a:  mov    0xc(%eax),%eax
0855040b +0x0d:  shl    $0x2,%eax
0855040e +0x10:  mov    %eax,%edx
08550410 +0x12:  shl    $0x4,%edx
08550413 +0x15:  mov    %edx,%ebx
08550415 +0x17:  sub    %eax,%ebx
08550417 +0x19:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0855041c +0x1e:  movl   $0x0,0x18(%esp)
08550424 +0x26:  movl   $0x0,0x14(%esp)
0855042c +0x2e:  mov    %ebx,0x10(%esp)
08550430 +0x32:  movl   $0x58,0xc(%esp)
08550438 +0x3a:  movl   $0x0,0x8(%esp)
08550440 +0x42:  movl   $0x2,0x4(%esp)
08550448 +0x4a:  mov    %eax,(%esp)
0855044b +0x4d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08550450 +0x52:  add    $0x24,%esp
08550453 +0x55:  pop    %ebx
08550454 +0x56:  pop    %ebp
08550455 +0x57:  ret
```

## 反编译 C

```c
// WongWork::CLogGameChannel::SetNextLogTimer @ 0x85503fe

/* WongWork::CLogGameChannel::SetNextLogTimer() */

void __thiscall WongWork::CLogGameChannel::SetNextLogTimer(CLogGameChannel *this)

{
  int iVar1;
  TimerQueue *pTVar2;
  
  iVar1 = *(int *)(this + 0xc);
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,0,0x58,iVar1 * 0x3c,0,0);
  return;
}
```
