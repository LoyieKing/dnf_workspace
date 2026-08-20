# insert_time_card_select_right_msg

`_ZN6CParty33insert_time_card_select_right_msgEi`

`CParty::insert_time_card_select_right_msg(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b2284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b2284  _ZN6CParty33insert_time_card_select_right_msgEi
#           CParty::insert_time_card_select_right_msg(int)
# range [0x085b2284, 0x085b22e1]
085b2284 +0x00:  push   %ebp
085b2285 +0x01:  mov    %esp,%ebp
085b2287 +0x03:  push   %esi
085b2288 +0x04:  push   %ebx
085b2289 +0x05:  sub    $0x20,%esp
085b228c +0x08:  movl   $0x13,0x4(%esp)
085b2294 +0x10:  mov    0x8(%ebp),%eax
085b2297 +0x13:  mov    %eax,(%esp)
085b229a +0x16:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b229f +0x1b:  mov    %eax,%ebx
085b22a1 +0x1d:  mov    0x8(%ebp),%eax
085b22a4 +0x20:  mov    0x64(%eax),%esi
085b22a7 +0x23:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b22ac +0x28:  movl   $0x0,0x18(%esp)
085b22b4 +0x30:  mov    %ebx,0x14(%esp)
085b22b8 +0x34:  mov    0xc(%ebp),%edx
085b22bb +0x37:  mov    %edx,0x10(%esp)
085b22bf +0x3b:  movl   $0x13,0xc(%esp)
085b22c7 +0x43:  mov    %esi,0x8(%esp)
085b22cb +0x47:  movl   $0x1,0x4(%esp)
085b22d3 +0x4f:  mov    %eax,(%esp)
085b22d6 +0x52:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b22db +0x57:  add    $0x20,%esp
085b22de +0x5a:  pop    %ebx
085b22df +0x5b:  pop    %esi
085b22e0 +0x5c:  pop    %ebp
085b22e1 +0x5d:  ret
```

## 反编译 C

```c
// CParty::insert_time_card_select_right_msg @ 0x85b2284

/* CParty::insert_time_card_select_right_msg(int) */

void __thiscall CParty::insert_time_card_select_right_msg(CParty *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar2 = gen_timer_key(this,0x13);
  uVar1 = *(undefined4 *)(this + 100);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar1,0x13,param_1,uVar2,0);
  return;
}
```
