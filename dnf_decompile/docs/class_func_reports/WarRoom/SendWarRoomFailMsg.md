# SendWarRoomFailMsg

`_ZN7WarRoom18SendWarRoomFailMsgEv`

`WarRoom::SendWarRoomFailMsg()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c078e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c078e  _ZN7WarRoom18SendWarRoomFailMsgEv
#           WarRoom::SendWarRoomFailMsg()
# range [0x086c078e, 0x086c07ed]
086c078e +0x00:  push   %ebp
086c078f +0x01:  mov    %esp,%ebp
086c0791 +0x03:  push   %esi
086c0792 +0x04:  push   %ebx
086c0793 +0x05:  sub    $0x20,%esp
086c0796 +0x08:  movl   $0x46,0x4(%esp)
086c079e +0x10:  mov    0x8(%ebp),%eax
086c07a1 +0x13:  mov    %eax,(%esp)
086c07a4 +0x16:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086c07a9 +0x1b:  mov    %eax,%ebx
086c07ab +0x1d:  mov    0x8(%ebp),%eax
086c07ae +0x20:  mov    0x4(%eax),%esi
086c07b1 +0x23:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086c07b6 +0x28:  movl   $0x0,0x18(%esp)
086c07be +0x30:  mov    %ebx,0x14(%esp)
086c07c2 +0x34:  movl   $0xa,0x10(%esp)
086c07ca +0x3c:  movl   $0x46,0xc(%esp)
086c07d2 +0x44:  mov    %esi,0x8(%esp)
086c07d6 +0x48:  movl   $0x3,0x4(%esp)
086c07de +0x50:  mov    %eax,(%esp)
086c07e1 +0x53:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086c07e6 +0x58:  add    $0x20,%esp
086c07e9 +0x5b:  pop    %ebx
086c07ea +0x5c:  pop    %esi
086c07eb +0x5d:  pop    %ebp
086c07ec +0x5e:  ret
086c07ed +0x5f:  nop
```

## 反编译 C

```c
// WarRoom::SendWarRoomFailMsg @ 0x86c078e

/* WarRoom::SendWarRoomFailMsg() */

void __thiscall WarRoom::SendWarRoomFailMsg(WarRoom *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar2 = GenTimerKey(this,0x46);
  uVar1 = *(undefined4 *)(this + 4);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,3,uVar1,0x46,10,uVar2,0);
  return;
}
```
