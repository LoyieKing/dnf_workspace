# _checkMemberReady

`_ZN8WongWork11CDeathTower17_checkMemberReadyEv`

`WongWork::CDeathTower::_checkMemberReady()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x084670f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084670f8  _ZN8WongWork11CDeathTower17_checkMemberReadyEv
#           WongWork::CDeathTower::_checkMemberReady()
# range [0x084670f8, 0x08467187]
084670f8 +0x00:  push   %ebp
084670f9 +0x01:  mov    %esp,%ebp
084670fb +0x03:  push   %esi
084670fc +0x04:  push   %ebx
084670fd +0x05:  sub    $0x30,%esp
08467100 +0x08:  mov    0x8(%ebp),%eax
08467103 +0x0b:  add    $0x110,%eax
08467108 +0x10:  mov    %eax,(%esp)
0846710b +0x13:  call   08461ee6 <_ZN8WongWork11CDeathTower9CPlayData16resetMemberReadyEv>  ; WongWork::CDeathTower::CPlayData::resetMemberReady()
08467110 +0x18:  mov    0x8(%ebp),%eax
08467113 +0x1b:  mov    (%eax),%eax
08467115 +0x1d:  mov    %eax,(%esp)
08467118 +0x20:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0846711d +0x25:  cmp    $0x1,%eax
08467120 +0x28:  jne    08467129 <+0x31>
08467122 +0x2a:  mov    &_ZL37CONST_SINGLE_MAP_LOADING_WAIT_TIMEOUT,%eax
08467127 +0x2f:  jmp    0846712e <+0x36>
08467129 +0x31:  mov    &_ZL36CONST_PARTY_MAP_LOADING_WAIT_TIMEOUT,%eax
0846712e +0x36:  mov    %eax,-0xc(%ebp)
08467131 +0x39:  movl   $0x49,0x4(%esp)
08467139 +0x41:  mov    0x8(%ebp),%eax
0846713c +0x44:  mov    %eax,(%esp)
0846713f +0x47:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
08467144 +0x4c:  mov    %eax,%ebx
08467146 +0x4e:  mov    0x8(%ebp),%eax
08467149 +0x51:  mov    0x4(%eax),%esi
0846714c +0x54:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08467151 +0x59:  movl   $0x49,0x18(%esp)
08467159 +0x61:  mov    %ebx,0x14(%esp)
0846715d +0x65:  mov    -0xc(%ebp),%edx
08467160 +0x68:  mov    %edx,0x10(%esp)
08467164 +0x6c:  movl   $0x49,0xc(%esp)
0846716c +0x74:  mov    %esi,0x8(%esp)
08467170 +0x78:  movl   $0x6,0x4(%esp)
08467178 +0x80:  mov    %eax,(%esp)
0846717b +0x83:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08467180 +0x88:  add    $0x30,%esp
08467183 +0x8b:  pop    %ebx
08467184 +0x8c:  pop    %esi
08467185 +0x8d:  pop    %ebp
08467186 +0x8e:  ret
08467187 +0x8f:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_checkMemberReady @ 0x84670f8

/* WongWork::CDeathTower::_checkMemberReady() */

void __thiscall WongWork::CDeathTower::_checkMemberReady(CDeathTower *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TimerQueue *pTVar5;
  
  CPlayData::resetMemberReady((CPlayData *)(this + 0x110));
  iVar2 = CParty::get_member_count(*(CParty **)this);
  uVar3 = ::CONST_PARTY_MAP_LOADING_WAIT_TIMEOUT;
  if (iVar2 == 1) {
    uVar3 = ::CONST_SINGLE_MAP_LOADING_WAIT_TIMEOUT;
  }
  uVar4 = _genTimerKey(this,0x49);
  uVar1 = *(undefined4 *)(this + 4);
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,6,uVar1,0x49,uVar3,uVar4,0x49);
  return;
}
```
