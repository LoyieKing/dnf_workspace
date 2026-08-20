# setEplpWaitingTimer

`_ZN13CBattle_Field19setEplpWaitingTimerEN10QuickParty17RandomBuffDungeonE`

`CBattle_Field::setEplpWaitingTimer(QuickParty::RandomBuffDungeon)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830ac7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830ac7a  _ZN13CBattle_Field19setEplpWaitingTimerEN10QuickParty17RandomBuffDungeonE
#           CBattle_Field::setEplpWaitingTimer(QuickParty::RandomBuffDungeon)
# range [0x0830ac7a, 0x0830adf5]
0830ac7a +0x000:  push   %ebp
0830ac7b +0x001:  mov    %esp,%ebp
0830ac7d +0x003:  push   %esi
0830ac7e +0x004:  push   %ebx
0830ac7f +0x005:  sub    $0x30,%esp
0830ac82 +0x008:  mov    0x8(%ebp),%eax
0830ac85 +0x00b:  mov    (%eax),%eax
0830ac87 +0x00d:  test   %eax,%eax
0830ac89 +0x00f:  je     0830adeb <+0x171>
0830ac8f +0x015:  mov    0xc(%ebp),%eax
0830ac92 +0x018:  cmp    $0x5,%eax
0830ac95 +0x01b:  jg     0830acaa <+0x30>
0830ac97 +0x01d:  cmp    $0x4,%eax
0830ac9a +0x020:  jge    0830ad31 <+0xb7>
0830aca0 +0x026:  cmp    $0x3,%eax
0830aca3 +0x029:  je     0830acb3 <+0x39>
0830aca5 +0x02b:  jmp    0830ad8e <+0x114>
0830acaa +0x030:  cmp    $0x6,%eax
0830acad +0x033:  jne    0830ad8e <+0x114>
0830acb3 +0x039:  mov    0x8(%ebp),%eax
0830acb6 +0x03c:  mov    (%eax),%eax
0830acb8 +0x03e:  mov    %eax,(%esp)
0830acbb +0x041:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
0830acc0 +0x046:  mov    %eax,(%esp)
0830acc3 +0x049:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
0830acc8 +0x04e:  mov    %eax,-0xc(%ebp)
0830accb +0x051:  cmpl   $0x0,-0xc(%ebp)
0830accf +0x055:  je     0830adee <+0x174>
0830acd5 +0x05b:  movl   $0x4d,0x4(%esp)
0830acdd +0x063:  mov    -0xc(%ebp),%eax
0830ace0 +0x066:  mov    %eax,(%esp)
0830ace3 +0x069:  call   0830edd2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9b7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9b7
0830ace8 +0x06e:  mov    %eax,%esi
0830acea +0x070:  mov    -0xc(%ebp),%eax
0830aced +0x073:  mov    %eax,(%esp)
0830acf0 +0x076:  call   082a7586 <_GLOBAL__I__ZN4CLog5this_E+0x39ad>  ; global constructors keyed to CLog::this_+0x39ad
0830acf5 +0x07b:  mov    %eax,%ebx
0830acf7 +0x07d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0830acfc +0x082:  movl   $0x4d,0x18(%esp)
0830ad04 +0x08a:  mov    %esi,0x14(%esp)
0830ad08 +0x08e:  movl   $0x1e,0x10(%esp)
0830ad10 +0x096:  movl   $0x4d,0xc(%esp)
0830ad18 +0x09e:  mov    %ebx,0x8(%esp)
0830ad1c +0x0a2:  movl   $0x6,0x4(%esp)
0830ad24 +0x0aa:  mov    %eax,(%esp)
0830ad27 +0x0ad:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0830ad2c +0x0b2:  jmp    0830adef <+0x175>
0830ad31 +0x0b7:  mov    0x8(%ebp),%eax
0830ad34 +0x0ba:  mov    (%eax),%eax
0830ad36 +0x0bc:  movl   $0x25,0x4(%esp)
0830ad3e +0x0c4:  mov    %eax,(%esp)
0830ad41 +0x0c7:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
0830ad46 +0x0cc:  mov    %eax,%esi
0830ad48 +0x0ce:  mov    0x8(%ebp),%eax
0830ad4b +0x0d1:  mov    (%eax),%eax
0830ad4d +0x0d3:  mov    %eax,(%esp)
0830ad50 +0x0d6:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0830ad55 +0x0db:  mov    %eax,%ebx
0830ad57 +0x0dd:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0830ad5c +0x0e2:  movl   $0x25,0x18(%esp)
0830ad64 +0x0ea:  mov    %esi,0x14(%esp)
0830ad68 +0x0ee:  movl   $0x1e,0x10(%esp)
0830ad70 +0x0f6:  movl   $0x25,0xc(%esp)
0830ad78 +0x0fe:  mov    %ebx,0x8(%esp)
0830ad7c +0x102:  movl   $0x1,0x4(%esp)
0830ad84 +0x10a:  mov    %eax,(%esp)
0830ad87 +0x10d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0830ad8c +0x112:  jmp    0830adef <+0x175>
0830ad8e +0x114:  mov    0x8(%ebp),%eax
0830ad91 +0x117:  mov    (%eax),%eax
0830ad93 +0x119:  movl   $0x15,0x4(%esp)
0830ad9b +0x121:  mov    %eax,(%esp)
0830ad9e +0x124:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
0830ada3 +0x129:  mov    %eax,%esi
0830ada5 +0x12b:  mov    0x8(%ebp),%eax
0830ada8 +0x12e:  mov    (%eax),%eax
0830adaa +0x130:  mov    %eax,(%esp)
0830adad +0x133:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0830adb2 +0x138:  mov    %eax,%ebx
0830adb4 +0x13a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0830adb9 +0x13f:  movl   $0x15,0x18(%esp)
0830adc1 +0x147:  mov    %esi,0x14(%esp)
0830adc5 +0x14b:  movl   $0x1e,0x10(%esp)
0830adcd +0x153:  movl   $0x15,0xc(%esp)
0830add5 +0x15b:  mov    %ebx,0x8(%esp)
0830add9 +0x15f:  movl   $0x1,0x4(%esp)
0830ade1 +0x167:  mov    %eax,(%esp)
0830ade4 +0x16a:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0830ade9 +0x16f:  jmp    0830adef <+0x175>
0830adeb +0x171:  nop
0830adec +0x172:  jmp    0830adef <+0x175>
0830adee +0x174:  nop
0830adef +0x175:  add    $0x30,%esp
0830adf2 +0x178:  pop    %ebx
0830adf3 +0x179:  pop    %esi
0830adf4 +0x17a:  pop    %ebp
0830adf5 +0x17b:  ret
```

## 反编译 C

```c
// CBattle_Field::setEplpWaitingTimer @ 0x830ac7a

/* CBattle_Field::setEplpWaitingTimer(QuickParty::RandomBuffDungeon) */

void __thiscall CBattle_Field::setEplpWaitingTimer(CBattle_Field *this,int param_2)

{
  CUser *this_00;
  CDeathTower *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)this == 0) {
    return;
  }
  if (param_2 < 6) {
    if (3 < param_2) {
      uVar1 = CParty::gen_timer_key(*(CParty **)this,0x25);
      uVar2 = CParty::GetPartyIndex(*(CParty **)this);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,1,uVar2,0x25,0x1e,uVar1,0x25);
      return;
    }
    if (param_2 == 3) {
LAB_0830acb3:
      this_00 = (CUser *)CParty::getManager(*(CParty **)this);
      this_01 = (CDeathTower *)CUser::getDeathTower(this_00);
      if (this_01 == (CDeathTower *)0x0) {
        return;
      }
      uVar1 = WongWork::CDeathTower::genTimerKey(this_01,0x4d);
      uVar2 = WongWork::CDeathTower::getIdx(this_01);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,6,uVar2,0x4d,0x1e,uVar1,0x4d);
      return;
    }
  }
  else if (param_2 == 6) goto LAB_0830acb3;
  uVar1 = CParty::gen_timer_key(*(CParty **)this,0x15);
  uVar2 = CParty::GetPartyIndex(*(CParty **)this);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,1,uVar2,0x15,0x1e,uVar1,0x15);
  return;
}
```
