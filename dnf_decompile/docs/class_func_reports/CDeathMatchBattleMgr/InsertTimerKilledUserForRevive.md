# InsertTimerKilledUserForRevive

`_ZN20CDeathMatchBattleMgr30InsertTimerKilledUserForReviveEii`

`CDeathMatchBattleMgr::InsertTimerKilledUserForRevive(int, int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085def60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085def60  _ZN20CDeathMatchBattleMgr30InsertTimerKilledUserForReviveEii
#           CDeathMatchBattleMgr::InsertTimerKilledUserForRevive(int, int)
# range [0x085def60, 0x085defc5]
085def60 +0x00:  push   %ebp
085def61 +0x01:  mov    %esp,%ebp
085def63 +0x03:  push   %esi
085def64 +0x04:  push   %ebx
085def65 +0x05:  sub    $0x20,%esp
085def68 +0x08:  mov    0x10(%ebp),%eax
085def6b +0x0b:  add    $0x33,%eax
085def6e +0x0e:  mov    %eax,%edx
085def70 +0x10:  mov    0x8(%ebp),%eax
085def73 +0x13:  mov    (%eax),%eax
085def75 +0x15:  mov    %edx,0x4(%esp)
085def79 +0x19:  mov    %eax,(%esp)
085def7c +0x1c:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085def81 +0x21:  mov    %eax,%ebx
085def83 +0x23:  mov    0x10(%ebp),%eax
085def86 +0x26:  add    $0x33,%eax
085def89 +0x29:  mov    %eax,%esi
085def8b +0x2b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085def90 +0x30:  movl   $0x0,0x18(%esp)
085def98 +0x38:  mov    %ebx,0x14(%esp)
085def9c +0x3c:  movl   $0x3,0x10(%esp)
085defa4 +0x44:  mov    %esi,0xc(%esp)
085defa8 +0x48:  mov    0xc(%ebp),%edx
085defab +0x4b:  mov    %edx,0x8(%esp)
085defaf +0x4f:  movl   $0x5,0x4(%esp)
085defb7 +0x57:  mov    %eax,(%esp)
085defba +0x5a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085defbf +0x5f:  add    $0x20,%esp
085defc2 +0x62:  pop    %ebx
085defc3 +0x63:  pop    %esi
085defc4 +0x64:  pop    %ebp
085defc5 +0x65:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::InsertTimerKilledUserForRevive @ 0x85def60

/* CDeathMatchBattleMgr::InsertTimerKilledUserForRevive(int, int) */

void __thiscall
CDeathMatchBattleMgr::InsertTimerKilledUserForRevive
          (CDeathMatchBattleMgr *this,int param_1,int param_2)

{
  undefined4 uVar1;
  TimerQueue *pTVar2;
  
  uVar1 = PvP_Room::gen_timer_key(*(PvP_Room **)this,param_2 + 0x33);
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,5,param_1,param_2 + 0x33,3,uVar1,0);
  return;
}
```
