# StartRecvEventWaiting

`_ZN5CUser21StartRecvEventWaitingEv`

`CUser::StartRecvEventWaiting()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f1fe  _ZN5CUser21StartRecvEventWaitingEv
#           CUser::StartRecvEventWaiting()
# range [0x0867f1fe, 0x0867f26d]
0867f1fe +0x00:  push   %ebp
0867f1ff +0x01:  mov    %esp,%ebp
0867f201 +0x03:  push   %esi
0867f202 +0x04:  push   %ebx
0867f203 +0x05:  sub    $0x30,%esp
0867f206 +0x08:  mov    0x8(%ebp),%eax
0867f209 +0x0b:  movb   $0x0,0x8e408(%eax)
0867f210 +0x12:  movl   $0x1e,-0xc(%ebp)
0867f217 +0x19:  mov    0x8(%ebp),%eax
0867f21a +0x1c:  mov    %eax,(%esp)
0867f21d +0x1f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0867f222 +0x24:  movzwl %ax,%esi
0867f225 +0x27:  mov    0x8(%ebp),%eax
0867f228 +0x2a:  mov    %eax,(%esp)
0867f22b +0x2d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0867f230 +0x32:  mov    %eax,%ebx
0867f232 +0x34:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0867f237 +0x39:  movl   $0x0,0x18(%esp)
0867f23f +0x41:  mov    %esi,0x14(%esp)
0867f243 +0x45:  mov    -0xc(%ebp),%edx
0867f246 +0x48:  mov    %edx,0x10(%esp)
0867f24a +0x4c:  movl   $0x67,0xc(%esp)
0867f252 +0x54:  mov    %ebx,0x8(%esp)
0867f256 +0x58:  movl   $0x2,0x4(%esp)
0867f25e +0x60:  mov    %eax,(%esp)
0867f261 +0x63:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0867f266 +0x68:  add    $0x30,%esp
0867f269 +0x6b:  pop    %ebx
0867f26a +0x6c:  pop    %esi
0867f26b +0x6d:  pop    %ebp
0867f26c +0x6e:  ret
0867f26d +0x6f:  nop
```

## 反编译 C

```c
// CUser::StartRecvEventWaiting @ 0x867f1fe

/* CUser::StartRecvEventWaiting() */

void __thiscall CUser::StartRecvEventWaiting(CUser *this)

{
  undefined2 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  this[0x8e408] = (CUser)0x0;
  uVar1 = get_unique_id(this);
  uVar2 = GetUID(this);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,uVar2,0x67,0x1e,uVar1,0);
  return;
}
```
