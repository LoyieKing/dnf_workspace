# insert_timer_waiting_party_matching

`_ZN10QuickParty24CQuickPartySystemManager35insert_timer_waiting_party_matchingEPNS_11CQuickPartyE`

`QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching(QuickParty::CQuickParty*)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826acea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826acea  _ZN10QuickParty24CQuickPartySystemManager35insert_timer_waiting_party_matchingEPNS_11CQuickPartyE
#           QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching(QuickParty::CQuickParty*)
# range [0x0826acea, 0x0826ad4f]
0826acea +0x00:  push   %ebp
0826aceb +0x01:  mov    %esp,%ebp
0826aced +0x03:  push   %esi
0826acee +0x04:  push   %ebx
0826acef +0x05:  sub    $0x20,%esp
0826acf2 +0x08:  movl   $0x9e,0x4(%esp)
0826acfa +0x10:  mov    0xc(%ebp),%eax
0826acfd +0x13:  mov    %eax,(%esp)
0826ad00 +0x16:  call   08269680 <_ZN10QuickParty11CQuickParty13gen_timer_keyE13TIMER_MESSAGE>  ; QuickParty::CQuickParty::gen_timer_key(TIMER_MESSAGE)
0826ad05 +0x1b:  mov    %eax,%ebx
0826ad07 +0x1d:  mov    0xc(%ebp),%eax
0826ad0a +0x20:  mov    %eax,(%esp)
0826ad0d +0x23:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0826ad12 +0x28:  mov    %eax,%esi
0826ad14 +0x2a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0826ad19 +0x2f:  movl   $0x9e,0x18(%esp)
0826ad21 +0x37:  mov    %ebx,0x14(%esp)
0826ad25 +0x3b:  movl   $0x14,0x10(%esp)
0826ad2d +0x43:  movl   $0x9e,0xc(%esp)
0826ad35 +0x4b:  mov    %esi,0x8(%esp)
0826ad39 +0x4f:  movl   $0x1,0x4(%esp)
0826ad41 +0x57:  mov    %eax,(%esp)
0826ad44 +0x5a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0826ad49 +0x5f:  add    $0x20,%esp
0826ad4c +0x62:  pop    %ebx
0826ad4d +0x63:  pop    %esi
0826ad4e +0x64:  pop    %ebp
0826ad4f +0x65:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching @ 0x826acea

/* QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching(QuickParty::CQuickParty*)
    */

void __thiscall
QuickParty::CQuickPartySystemManager::insert_timer_waiting_party_matching
          (CQuickPartySystemManager *this,CQuickParty *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CQuickParty::gen_timer_key(param_1,0x9e);
  uVar2 = CQuickParty::get_quick_party_index(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x9e,0x14,uVar1,0x9e);
  return;
}
```
