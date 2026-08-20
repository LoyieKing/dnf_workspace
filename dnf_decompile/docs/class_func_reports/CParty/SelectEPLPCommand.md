# SelectEPLPCommand

`_ZN6CParty17SelectEPLPCommandEi`

`CParty::SelectEPLPCommand(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a22a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a22a8  _ZN6CParty17SelectEPLPCommandEi
#           CParty::SelectEPLPCommand(int)
# range [0x085a22a8, 0x085a231f]
085a22a8 +0x00:  push   %ebp
085a22a9 +0x01:  mov    %esp,%ebp
085a22ab +0x03:  push   %esi
085a22ac +0x04:  push   %ebx
085a22ad +0x05:  sub    $0x20,%esp
085a22b0 +0x08:  movl   $0x3,0x4(%esp)
085a22b8 +0x10:  mov    0x8(%ebp),%eax
085a22bb +0x13:  mov    %eax,(%esp)
085a22be +0x16:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085a22c3 +0x1b:  movl   $0x14,0x4(%esp)
085a22cb +0x23:  mov    0x8(%ebp),%eax
085a22ce +0x26:  mov    %eax,(%esp)
085a22d1 +0x29:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085a22d6 +0x2e:  mov    %eax,%esi
085a22d8 +0x30:  mov    0x8(%ebp),%eax
085a22db +0x33:  mov    %eax,(%esp)
085a22de +0x36:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085a22e3 +0x3b:  mov    %eax,%ebx
085a22e5 +0x3d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085a22ea +0x42:  movl   $0x0,0x18(%esp)
085a22f2 +0x4a:  mov    %esi,0x14(%esp)
085a22f6 +0x4e:  mov    0xc(%ebp),%edx
085a22f9 +0x51:  mov    %edx,0x10(%esp)
085a22fd +0x55:  movl   $0x14,0xc(%esp)
085a2305 +0x5d:  mov    %ebx,0x8(%esp)
085a2309 +0x61:  movl   $0x1,0x4(%esp)
085a2311 +0x69:  mov    %eax,(%esp)
085a2314 +0x6c:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085a2319 +0x71:  add    $0x20,%esp
085a231c +0x74:  pop    %ebx
085a231d +0x75:  pop    %esi
085a231e +0x76:  pop    %ebp
085a231f +0x77:  ret
```

## 反编译 C

```c
// CParty::SelectEPLPCommand @ 0x85a22a8

/* CParty::SelectEPLPCommand(int) */

void __thiscall CParty::SelectEPLPCommand(CParty *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  SetEPLPState(this,'\x03');
  uVar1 = gen_timer_key(this,0x14);
  uVar2 = GetPartyIndex(this);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x14,param_1,uVar1,0);
  return;
}
```
