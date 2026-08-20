# insertTimer

`_ZN26CSpecialItemRoutingManager11insertTimerEP6CParty`

`CSpecialItemRoutingManager::insertTimer(CParty*)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860b45c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b45c  _ZN26CSpecialItemRoutingManager11insertTimerEP6CParty
#           CSpecialItemRoutingManager::insertTimer(CParty*)
# range [0x0860b45c, 0x0860b4c1]
0860b45c +0x00:  push   %ebp
0860b45d +0x01:  mov    %esp,%ebp
0860b45f +0x03:  push   %esi
0860b460 +0x04:  push   %ebx
0860b461 +0x05:  sub    $0x20,%esp
0860b464 +0x08:  movl   $0x2b,0x4(%esp)
0860b46c +0x10:  mov    0xc(%ebp),%eax
0860b46f +0x13:  mov    %eax,(%esp)
0860b472 +0x16:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
0860b477 +0x1b:  mov    %eax,%esi
0860b479 +0x1d:  mov    0xc(%ebp),%eax
0860b47c +0x20:  mov    %eax,(%esp)
0860b47f +0x23:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0860b484 +0x28:  mov    %eax,%ebx
0860b486 +0x2a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0860b48b +0x2f:  movl   $0x0,0x18(%esp)
0860b493 +0x37:  mov    %esi,0x14(%esp)
0860b497 +0x3b:  movl   $0x23,0x10(%esp)
0860b49f +0x43:  movl   $0x2b,0xc(%esp)
0860b4a7 +0x4b:  mov    %ebx,0x8(%esp)
0860b4ab +0x4f:  movl   $0x1,0x4(%esp)
0860b4b3 +0x57:  mov    %eax,(%esp)
0860b4b6 +0x5a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0860b4bb +0x5f:  add    $0x20,%esp
0860b4be +0x62:  pop    %ebx
0860b4bf +0x63:  pop    %esi
0860b4c0 +0x64:  pop    %ebp
0860b4c1 +0x65:  ret
```

## 反编译 C

```c
// CSpecialItemRoutingManager::insertTimer @ 0x860b45c

/* CSpecialItemRoutingManager::insertTimer(CParty*) */

void __thiscall
CSpecialItemRoutingManager::insertTimer(CSpecialItemRoutingManager *this,CParty *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CParty::gen_timer_key(param_1,0x2b);
  uVar2 = CParty::GetPartyIndex(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x2b,0x23,uVar1,0);
  return;
}
```
