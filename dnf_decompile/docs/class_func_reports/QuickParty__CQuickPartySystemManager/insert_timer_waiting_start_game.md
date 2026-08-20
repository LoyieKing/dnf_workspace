# insert_timer_waiting_start_game

`_ZN10QuickParty24CQuickPartySystemManager31insert_timer_waiting_start_gameEP6CParty`

`QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game(CParty*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826ad50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ad50  _ZN10QuickParty24CQuickPartySystemManager31insert_timer_waiting_start_gameEP6CParty
#           QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game(CParty*)
# range [0x0826ad50, 0x0826adb5]
0826ad50 +0x00:  push   %ebp
0826ad51 +0x01:  mov    %esp,%ebp
0826ad53 +0x03:  push   %esi
0826ad54 +0x04:  push   %ebx
0826ad55 +0x05:  sub    $0x20,%esp
0826ad58 +0x08:  movl   $0x2d,0x4(%esp)
0826ad60 +0x10:  mov    0xc(%ebp),%eax
0826ad63 +0x13:  mov    %eax,(%esp)
0826ad66 +0x16:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
0826ad6b +0x1b:  mov    %eax,%esi
0826ad6d +0x1d:  mov    0xc(%ebp),%eax
0826ad70 +0x20:  mov    %eax,(%esp)
0826ad73 +0x23:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0826ad78 +0x28:  mov    %eax,%ebx
0826ad7a +0x2a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0826ad7f +0x2f:  movl   $0x2d,0x18(%esp)
0826ad87 +0x37:  mov    %esi,0x14(%esp)
0826ad8b +0x3b:  movl   $0x5a,0x10(%esp)
0826ad93 +0x43:  movl   $0x2d,0xc(%esp)
0826ad9b +0x4b:  mov    %ebx,0x8(%esp)
0826ad9f +0x4f:  movl   $0x1,0x4(%esp)
0826ada7 +0x57:  mov    %eax,(%esp)
0826adaa +0x5a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0826adaf +0x5f:  add    $0x20,%esp
0826adb2 +0x62:  pop    %ebx
0826adb3 +0x63:  pop    %esi
0826adb4 +0x64:  pop    %ebp
0826adb5 +0x65:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game @ 0x826ad50

/* QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game(CParty*) */

void __thiscall
QuickParty::CQuickPartySystemManager::insert_timer_waiting_start_game
          (CQuickPartySystemManager *this,CParty *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CParty::gen_timer_key(param_1,0x2d);
  uVar2 = CParty::GetPartyIndex(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x2d,0x5a,uVar1,0x2d);
  return;
}
```
