# handleSelectEPLPCommand

`_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri`

`WongWork::CDeathTower::handleSelectEPLPCommand(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08466208` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08466208  _ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri
#           WongWork::CDeathTower::handleSelectEPLPCommand(CUser*, int)
# range [0x08466208, 0x084662cb]
08466208 +0x00:  push   %ebp
08466209 +0x01:  mov    %esp,%ebp
0846620b +0x03:  push   %esi
0846620c +0x04:  push   %ebx
0846620d +0x05:  sub    $0x30,%esp
08466210 +0x08:  mov    0x8(%ebp),%eax
08466213 +0x0b:  mov    (%eax),%eax
08466215 +0x0d:  mov    0xc(%ebp),%edx
08466218 +0x10:  mov    %edx,0x4(%esp)
0846621c +0x14:  mov    %eax,(%esp)
0846621f +0x17:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
08466224 +0x1c:  mov    %eax,-0xc(%ebp)
08466227 +0x1f:  cmpl   $0xffffffff,-0xc(%ebp)
0846622b +0x23:  je     0846624c <+0x44>
0846622d +0x25:  mov    0x8(%ebp),%eax
08466230 +0x28:  mov    (%eax),%eax
08466232 +0x2a:  mov    -0xc(%ebp),%edx
08466235 +0x2d:  mov    %edx,0x4(%esp)
08466239 +0x31:  mov    %eax,(%esp)
0846623c +0x34:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08466241 +0x39:  test   %al,%al
08466243 +0x3b:  je     0846624c <+0x44>
08466245 +0x3d:  mov    $0x1,%eax
0846624a +0x42:  jmp    08466251 <+0x49>
0846624c +0x44:  mov    $0x0,%eax
08466251 +0x49:  test   %al,%al
08466253 +0x4b:  je     084662c0 <+0xb8>
08466255 +0x4d:  mov    0x8(%ebp),%eax
08466258 +0x50:  mov    (%eax),%eax
0846625a +0x52:  movl   $0x3,0x4(%esp)
08466262 +0x5a:  mov    %eax,(%esp)
08466265 +0x5d:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
0846626a +0x62:  movl   $0x4e,0x4(%esp)
08466272 +0x6a:  mov    0x8(%ebp),%eax
08466275 +0x6d:  mov    %eax,(%esp)
08466278 +0x70:  call   0830edec <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x9d1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x9d1
0846627d +0x75:  mov    %eax,%ebx
0846627f +0x77:  mov    0x8(%ebp),%eax
08466282 +0x7a:  mov    0x4(%eax),%esi
08466285 +0x7d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0846628a +0x82:  movl   $0x4e,0x18(%esp)
08466292 +0x8a:  mov    %ebx,0x14(%esp)
08466296 +0x8e:  mov    0x10(%ebp),%edx
08466299 +0x91:  mov    %edx,0x10(%esp)
0846629d +0x95:  movl   $0x4e,0xc(%esp)
084662a5 +0x9d:  mov    %esi,0x8(%esp)
084662a9 +0xa1:  movl   $0x6,0x4(%esp)
084662b1 +0xa9:  mov    %eax,(%esp)
084662b4 +0xac:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
084662b9 +0xb1:  mov    $0x1,%eax
084662be +0xb6:  jmp    084662c5 <+0xbd>
084662c0 +0xb8:  mov    $0x0,%eax
084662c5 +0xbd:  add    $0x30,%esp
084662c8 +0xc0:  pop    %ebx
084662c9 +0xc1:  pop    %esi
084662ca +0xc2:  pop    %ebp
084662cb +0xc3:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::handleSelectEPLPCommand @ 0x8466208

/* WongWork::CDeathTower::handleSelectEPLPCommand(CUser*, int) */

bool __thiscall
WongWork::CDeathTower::handleSelectEPLPCommand(CDeathTower *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  
  iVar4 = CParty::GetMemberSlotNo(*(CParty **)this,param_1);
  if ((iVar4 == -1) || (cVar3 = CParty::checkValidUser(*(CParty **)this,iVar4), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CParty::SetEPLPState(*(CParty **)this,'\x03');
    uVar5 = _genTimerKey(this,0x4e);
    uVar1 = *(undefined4 *)(this + 4);
    pTVar6 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar6,6,uVar1,0x4e,param_2,uVar5,0x4e);
  }
  return bVar2;
}
```
