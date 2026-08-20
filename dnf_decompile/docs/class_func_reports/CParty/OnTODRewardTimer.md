# OnTODRewardTimer

`_ZN6CParty16OnTODRewardTimerE13TIMER_MESSAGE`

`CParty::OnTODRewardTimer(TIMER_MESSAGE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba906  _ZN6CParty16OnTODRewardTimerE13TIMER_MESSAGE
#           CParty::OnTODRewardTimer(TIMER_MESSAGE)
# range [0x085ba906, 0x085baa05]
085ba906 +0x00:  push   %ebp
085ba907 +0x01:  mov    %esp,%ebp
085ba909 +0x03:  push   %esi
085ba90a +0x04:  push   %ebx
085ba90b +0x05:  sub    $0x20,%esp
085ba90e +0x08:  mov    0xc(%ebp),%eax
085ba911 +0x0b:  cmp    $0x2c,%eax
085ba914 +0x0e:  jne    085ba9f9 <+0xf3>
085ba91a +0x14:  mov    0x8(%ebp),%eax
085ba91d +0x17:  mov    %eax,(%esp)
085ba920 +0x1a:  call   085baa06 <_ZN6CParty21_Send_TOD_ClearRewardEv>  ; CParty::_Send_TOD_ClearReward()
085ba925 +0x1f:  movl   $0x2,0x4(%esp)
085ba92d +0x27:  mov    0x8(%ebp),%eax
085ba930 +0x2a:  mov    %eax,(%esp)
085ba933 +0x2d:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
085ba938 +0x32:  movl   $0x15,0x4(%esp)
085ba940 +0x3a:  mov    0x8(%ebp),%eax
085ba943 +0x3d:  mov    %eax,(%esp)
085ba946 +0x40:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085ba94b +0x45:  mov    %eax,%esi
085ba94d +0x47:  mov    0x8(%ebp),%eax
085ba950 +0x4a:  mov    %eax,(%esp)
085ba953 +0x4d:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085ba958 +0x52:  mov    %eax,%ebx
085ba95a +0x54:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085ba95f +0x59:  movl   $0x0,0x18(%esp)
085ba967 +0x61:  mov    %esi,0x14(%esp)
085ba96b +0x65:  movl   $0x3c,0x10(%esp)
085ba973 +0x6d:  movl   $0x15,0xc(%esp)
085ba97b +0x75:  mov    %ebx,0x8(%esp)
085ba97f +0x79:  movl   $0x1,0x4(%esp)
085ba987 +0x81:  mov    %eax,(%esp)
085ba98a +0x84:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085ba98f +0x89:  movl   $0x1,0x4(%esp)
085ba997 +0x91:  mov    0x8(%ebp),%eax
085ba99a +0x94:  mov    %eax,(%esp)
085ba99d +0x97:  call   0826b978 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x246>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x246
085ba9a2 +0x9c:  movl   $0x24,0x4(%esp)
085ba9aa +0xa4:  mov    0x8(%ebp),%eax
085ba9ad +0xa7:  mov    %eax,(%esp)
085ba9b0 +0xaa:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085ba9b5 +0xaf:  mov    %eax,%esi
085ba9b7 +0xb1:  mov    0x8(%ebp),%eax
085ba9ba +0xb4:  mov    %eax,(%esp)
085ba9bd +0xb7:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085ba9c2 +0xbc:  mov    %eax,%ebx
085ba9c4 +0xbe:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085ba9c9 +0xc3:  movl   $0x24,0x18(%esp)
085ba9d1 +0xcb:  mov    %esi,0x14(%esp)
085ba9d5 +0xcf:  movl   $0x8,0x10(%esp)
085ba9dd +0xd7:  movl   $0x2c,0xc(%esp)
085ba9e5 +0xdf:  mov    %ebx,0x8(%esp)
085ba9e9 +0xe3:  movl   $0x1,0x4(%esp)
085ba9f1 +0xeb:  mov    %eax,(%esp)
085ba9f4 +0xee:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085ba9f9 +0xf3:  mov    $0x1,%eax
085ba9fe +0xf8:  add    $0x20,%esp
085baa01 +0xfb:  pop    %ebx
085baa02 +0xfc:  pop    %esi
085baa03 +0xfd:  pop    %ebp
085baa04 +0xfe:  ret
085baa05 +0xff:  nop
```

## 反编译 C

```c
// CParty::OnTODRewardTimer @ 0x85ba906

/* CParty::OnTODRewardTimer(TIMER_MESSAGE) */

undefined4 __thiscall CParty::OnTODRewardTimer(CParty *this,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (param_2 == 0x2c) {
    _Send_TOD_ClearReward(this);
    SetEPLPState(this,'\x02');
    uVar1 = gen_timer_key(this,0x15);
    uVar2 = GetPartyIndex(this);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,1,uVar2,0x15,0x3c,uVar1,0);
    set_state(this,'\x01');
    uVar1 = gen_timer_key(this,0x24);
    uVar2 = GetPartyIndex(this);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,1,uVar2,0x2c,8,uVar1,0x24);
  }
  return 1;
}
```
