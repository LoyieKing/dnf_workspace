# send_dungeon_fail_msg

`_ZN6CParty21send_dungeon_fail_msgEv`

`CParty::send_dungeon_fail_msg()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b35f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b35f4  _ZN6CParty21send_dungeon_fail_msgEv
#           CParty::send_dungeon_fail_msg()
# range [0x085b35f4, 0x085b366f]
085b35f4 +0x00:  push   %ebp
085b35f5 +0x01:  mov    %esp,%ebp
085b35f7 +0x03:  push   %esi
085b35f8 +0x04:  push   %ebx
085b35f9 +0x05:  sub    $0x30,%esp
085b35fc +0x08:  movl   $0xa,-0xc(%ebp)
085b3603 +0x0f:  mov    0x8(%ebp),%eax
085b3606 +0x12:  movzwl 0xc4c(%eax),%eax
085b360d +0x19:  test   %ax,%ax
085b3610 +0x1c:  je     085b3619 <+0x25>
085b3612 +0x1e:  movl   $0x3,-0xc(%ebp)
085b3619 +0x25:  movl   $0xe,0x4(%esp)
085b3621 +0x2d:  mov    0x8(%ebp),%eax
085b3624 +0x30:  mov    %eax,(%esp)
085b3627 +0x33:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b362c +0x38:  mov    %eax,%ebx
085b362e +0x3a:  mov    0x8(%ebp),%eax
085b3631 +0x3d:  mov    0x64(%eax),%esi
085b3634 +0x40:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b3639 +0x45:  movl   $0x0,0x18(%esp)
085b3641 +0x4d:  mov    %ebx,0x14(%esp)
085b3645 +0x51:  mov    -0xc(%ebp),%edx
085b3648 +0x54:  mov    %edx,0x10(%esp)
085b364c +0x58:  movl   $0xe,0xc(%esp)
085b3654 +0x60:  mov    %esi,0x8(%esp)
085b3658 +0x64:  movl   $0x1,0x4(%esp)
085b3660 +0x6c:  mov    %eax,(%esp)
085b3663 +0x6f:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b3668 +0x74:  add    $0x30,%esp
085b366b +0x77:  pop    %ebx
085b366c +0x78:  pop    %esi
085b366d +0x79:  pop    %ebp
085b366e +0x7a:  ret
085b366f +0x7b:  nop
```

## 反编译 C

```c
// CParty::send_dungeon_fail_msg @ 0x85b35f4

/* CParty::send_dungeon_fail_msg() */

void __thiscall CParty::send_dungeon_fail_msg(CParty *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  undefined4 local_10;
  
  local_10 = 10;
  if (*(short *)(this + 0xc4c) != 0) {
    local_10 = 3;
  }
  uVar2 = gen_timer_key(this,0xe);
  uVar1 = *(undefined4 *)(this + 100);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar1,0xe,local_10,uVar2,0);
  return;
}
```
