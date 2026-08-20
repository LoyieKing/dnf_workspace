# InsertTournamentDungeonTimer

`_ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE`

`CParty::InsertTournamentDungeonTimer(TIMER_MESSAGE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd6de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd6de  _ZN6CParty28InsertTournamentDungeonTimerE13TIMER_MESSAGE
#           CParty::InsertTournamentDungeonTimer(TIMER_MESSAGE)
# range [0x085bd6de, 0x085bd79d]
085bd6de +0x00:  push   %ebp
085bd6df +0x01:  mov    %esp,%ebp
085bd6e1 +0x03:  push   %esi
085bd6e2 +0x04:  push   %ebx
085bd6e3 +0x05:  sub    $0x20,%esp
085bd6e6 +0x08:  mov    0xc(%ebp),%eax
085bd6e9 +0x0b:  cmp    $0x2e,%eax
085bd6ec +0x0e:  je     085bd6f8 <+0x1a>
085bd6ee +0x10:  cmp    $0x2f,%eax
085bd6f1 +0x13:  je     085bd748 <+0x6a>
085bd6f3 +0x15:  jmp    085bd796 <+0xb8>
085bd6f8 +0x1a:  mov    0xc(%ebp),%eax
085bd6fb +0x1d:  mov    %eax,0x4(%esp)
085bd6ff +0x21:  mov    0x8(%ebp),%eax
085bd702 +0x24:  mov    %eax,(%esp)
085bd705 +0x27:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085bd70a +0x2c:  mov    %eax,%ebx
085bd70c +0x2e:  mov    0x8(%ebp),%eax
085bd70f +0x31:  mov    0x64(%eax),%esi
085bd712 +0x34:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085bd717 +0x39:  movl   $0x0,0x18(%esp)
085bd71f +0x41:  mov    %ebx,0x14(%esp)
085bd723 +0x45:  movl   $0x28,0x10(%esp)
085bd72b +0x4d:  mov    0xc(%ebp),%edx
085bd72e +0x50:  mov    %edx,0xc(%esp)
085bd732 +0x54:  mov    %esi,0x8(%esp)
085bd736 +0x58:  movl   $0x1,0x4(%esp)
085bd73e +0x60:  mov    %eax,(%esp)
085bd741 +0x63:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085bd746 +0x68:  jmp    085bd796 <+0xb8>
085bd748 +0x6a:  mov    0xc(%ebp),%eax
085bd74b +0x6d:  mov    %eax,0x4(%esp)
085bd74f +0x71:  mov    0x8(%ebp),%eax
085bd752 +0x74:  mov    %eax,(%esp)
085bd755 +0x77:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085bd75a +0x7c:  mov    %eax,%ebx
085bd75c +0x7e:  mov    0x8(%ebp),%eax
085bd75f +0x81:  mov    0x64(%eax),%esi
085bd762 +0x84:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085bd767 +0x89:  movl   $0x0,0x18(%esp)
085bd76f +0x91:  mov    %ebx,0x14(%esp)
085bd773 +0x95:  movl   $0x4,0x10(%esp)
085bd77b +0x9d:  mov    0xc(%ebp),%edx
085bd77e +0xa0:  mov    %edx,0xc(%esp)
085bd782 +0xa4:  mov    %esi,0x8(%esp)
085bd786 +0xa8:  movl   $0x1,0x4(%esp)
085bd78e +0xb0:  mov    %eax,(%esp)
085bd791 +0xb3:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085bd796 +0xb8:  add    $0x20,%esp
085bd799 +0xbb:  pop    %ebx
085bd79a +0xbc:  pop    %esi
085bd79b +0xbd:  pop    %ebp
085bd79c +0xbe:  ret
085bd79d +0xbf:  nop
```

## 反编译 C

```c
// CParty::InsertTournamentDungeonTimer @ 0x85bd6de

/* CParty::InsertTournamentDungeonTimer(TIMER_MESSAGE) */

void __thiscall CParty::InsertTournamentDungeonTimer(CParty *this,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (param_2 == 0x2e) {
    uVar2 = gen_timer_key(this,0x2e);
    uVar1 = *(undefined4 *)(this + 100);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,1,uVar1,0x2e,0x28,uVar2,0);
  }
  else if (param_2 == 0x2f) {
    uVar2 = gen_timer_key(this,0x2f);
    uVar1 = *(undefined4 *)(this + 100);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,1,uVar1,0x2f,4,uVar2,0);
  }
  return;
}
```
