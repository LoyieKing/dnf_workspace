# insert_timer_recv_pvp_rank

`_ZN8PvP_Room26insert_timer_recv_pvp_rankEv`

`PvP_Room::insert_timer_recv_pvp_rank()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc340  _ZN8PvP_Room26insert_timer_recv_pvp_rankEv
#           PvP_Room::insert_timer_recv_pvp_rank()
# range [0x085dc340, 0x085dc3c9]
085dc340 +0x00:  push   %ebp
085dc341 +0x01:  mov    %esp,%ebp
085dc343 +0x03:  push   %esi
085dc344 +0x04:  push   %ebx
085dc345 +0x05:  sub    $0x20,%esp
085dc348 +0x08:  mov    0x8(%ebp),%eax
085dc34b +0x0b:  movzbl 0x616(%eax),%eax
085dc352 +0x12:  test   %al,%al
085dc354 +0x14:  je     085dc35d <+0x1d>
085dc356 +0x16:  mov    $0x1,%eax
085dc35b +0x1b:  jmp    085dc3c3 <+0x83>
085dc35d +0x1d:  movl   $0x3c,0x4(%esp)
085dc365 +0x25:  mov    0x8(%ebp),%eax
085dc368 +0x28:  mov    %eax,(%esp)
085dc36b +0x2b:  call   08568d90 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x75a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x75a
085dc370 +0x30:  mov    %eax,%ebx
085dc372 +0x32:  mov    0x8(%ebp),%eax
085dc375 +0x35:  mov    (%eax),%esi
085dc377 +0x37:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085dc37c +0x3c:  movl   $0x0,0x1c(%esp)
085dc384 +0x44:  mov    %ebx,0x18(%esp)
085dc388 +0x48:  movl   $0x2710,0x10(%esp)
085dc390 +0x50:  movl   $0x0,0x14(%esp)
085dc398 +0x58:  movl   $0x3c,0xc(%esp)
085dc3a0 +0x60:  mov    %esi,0x8(%esp)
085dc3a4 +0x64:  movl   $0x1,0x4(%esp)
085dc3ac +0x6c:  mov    %eax,(%esp)
085dc3af +0x6f:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
085dc3b4 +0x74:  mov    0x8(%ebp),%eax
085dc3b7 +0x77:  movb   $0x1,0x616(%eax)
085dc3be +0x7e:  mov    $0x1,%eax
085dc3c3 +0x83:  add    $0x20,%esp
085dc3c6 +0x86:  pop    %ebx
085dc3c7 +0x87:  pop    %esi
085dc3c8 +0x88:  pop    %ebp
085dc3c9 +0x89:  ret
```

## 反编译 C

```c
// PvP_Room::insert_timer_recv_pvp_rank @ 0x85dc340

/* PvP_Room::insert_timer_recv_pvp_rank() */

undefined4 __thiscall PvP_Room::insert_timer_recv_pvp_rank(PvP_Room *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this[0x616] == (PvP_Room)0x0) {
    uVar2 = gen_timer_key(this,0x3c);
    uVar1 = *(undefined4 *)this;
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar1,0x3c,10000,0,uVar2,0);
    this[0x616] = (PvP_Room)0x1;
  }
  return 1;
}
```
