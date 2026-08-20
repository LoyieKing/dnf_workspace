# _onPrepareFinishTower

`_ZN8WongWork10CBossTower21_onPrepareFinishTowerEb`

`WongWork::CBossTower::_onPrepareFinishTower(bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08142d24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08142d24  _ZN8WongWork10CBossTower21_onPrepareFinishTowerEb
#           WongWork::CBossTower::_onPrepareFinishTower(bool)
# range [0x08142d24, 0x08142f31]
08142d24 +0x000:  push   %ebp
08142d25 +0x001:  mov    %esp,%ebp
08142d27 +0x003:  push   %edi
08142d28 +0x004:  push   %ebx
08142d29 +0x005:  sub    $0x140,%esp
08142d2f +0x00b:  mov    0xc(%ebp),%eax
08142d32 +0x00e:  mov    %al,-0x11c(%ebp)
08142d38 +0x014:  mov    0x8(%ebp),%eax
08142d3b +0x017:  movzbl -0x11c(%ebp),%edx
08142d42 +0x01e:  mov    %dl,0xafc(%eax)
08142d48 +0x024:  movl   $0x0,-0x14(%ebp)
08142d4f +0x02b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08142d56 +0x032:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08142d5b +0x037:  mov    %eax,%edx
08142d5d +0x039:  mov    0x8(%ebp),%eax
08142d60 +0x03c:  mov    %edx,0xaf8(%eax)
08142d66 +0x042:  mov    0x8(%ebp),%eax
08142d69 +0x045:  mov    0xaf8(%eax),%edx
08142d6f +0x04b:  mov    0x8(%ebp),%eax
08142d72 +0x04e:  mov    0xaf4(%eax),%eax
08142d78 +0x054:  mov    %edx,%ecx
08142d7a +0x056:  sub    %eax,%ecx
08142d7c +0x058:  mov    $0x10624dd3,%edx
08142d81 +0x05d:  mov    %ecx,%eax
08142d83 +0x05f:  imul   %edx
08142d85 +0x061:  sar    $0x6,%edx
08142d88 +0x064:  mov    %ecx,%eax
08142d8a +0x066:  sar    $0x1f,%eax
08142d8d +0x069:  mov    %edx,%ecx
08142d8f +0x06b:  sub    %eax,%ecx
08142d91 +0x06d:  mov    %ecx,%eax
08142d93 +0x06f:  mov    %eax,-0x14(%ebp)
08142d96 +0x072:  lea    -0x113(%ebp),%edx
08142d9c +0x078:  mov    $0xff,%ebx
08142da1 +0x07d:  mov    $0x0,%eax
08142da6 +0x082:  mov    %edx,%ecx
08142da8 +0x084:  and    $0x1,%ecx
08142dab +0x087:  test   %ecx,%ecx
08142dad +0x089:  je     08142db7 <+0x93>
08142daf +0x08b:  mov    %al,(%edx)
08142db1 +0x08d:  add    $0x1,%edx
08142db4 +0x090:  sub    $0x1,%ebx
08142db7 +0x093:  mov    %edx,%ecx
08142db9 +0x095:  and    $0x2,%ecx
08142dbc +0x098:  test   %ecx,%ecx
08142dbe +0x09a:  je     08142dc9 <+0xa5>
08142dc0 +0x09c:  mov    %ax,(%edx)
08142dc3 +0x09f:  add    $0x2,%edx
08142dc6 +0x0a2:  sub    $0x2,%ebx
08142dc9 +0x0a5:  mov    %ebx,%ecx
08142dcb +0x0a7:  shr    $0x2,%ecx
08142dce +0x0aa:  mov    %edx,%edi
08142dd0 +0x0ac:  rep stos %eax,%es:(%edi)
08142dd2 +0x0ae:  mov    %edi,%edx
08142dd4 +0x0b0:  mov    %ebx,%ecx
08142dd6 +0x0b2:  and    $0x2,%ecx
08142dd9 +0x0b5:  test   %ecx,%ecx
08142ddb +0x0b7:  je     08142de3 <+0xbf>
08142ddd +0x0b9:  mov    %ax,(%edx)
08142de0 +0x0bc:  add    $0x2,%edx
08142de3 +0x0bf:  mov    %ebx,%ecx
08142de5 +0x0c1:  and    $0x1,%ecx
08142de8 +0x0c4:  test   %ecx,%ecx
08142dea +0x0c6:  je     08142df1 <+0xcd>
08142dec +0x0c8:  mov    %al,(%edx)
08142dee +0x0ca:  add    $0x1,%edx
08142df1 +0x0cd:  mov    0x8(%ebp),%eax
08142df4 +0x0d0:  mov    0x4(%eax),%eax
08142df7 +0x0d3:  lea    -0x113(%ebp),%edx
08142dfd +0x0d9:  mov    %edx,0x4(%esp)
08142e01 +0x0dd:  mov    %eax,(%esp)
08142e04 +0x0e0:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
08142e09 +0x0e5:  movl   $0x0,-0x10(%ebp)
08142e10 +0x0ec:  jmp    08142ed7 <+0x1b3>
08142e15 +0x0f1:  mov    0x8(%ebp),%eax
08142e18 +0x0f4:  mov    0x4(%eax),%eax
08142e1b +0x0f7:  mov    -0x10(%ebp),%edx
08142e1e +0x0fa:  mov    %edx,0x4(%esp)
08142e22 +0x0fe:  mov    %eax,(%esp)
08142e25 +0x101:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08142e2a +0x106:  mov    %eax,-0xc(%ebp)
08142e2d +0x109:  cmpl   $0x0,-0xc(%ebp)
08142e31 +0x10d:  je     08142e4f <+0x12b>
08142e33 +0x10f:  mov    0x8(%ebp),%eax
08142e36 +0x112:  mov    0x4(%eax),%eax
08142e39 +0x115:  mov    -0x10(%ebp),%edx
08142e3c +0x118:  mov    %edx,0x4(%esp)
08142e40 +0x11c:  mov    %eax,(%esp)
08142e43 +0x11f:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08142e48 +0x124:  xor    $0x1,%eax
08142e4b +0x127:  test   %al,%al
08142e4d +0x129:  je     08142e56 <+0x132>
08142e4f +0x12b:  mov    $0x1,%eax
08142e54 +0x130:  jmp    08142e5b <+0x137>
08142e56 +0x132:  mov    $0x0,%eax
08142e5b +0x137:  test   %al,%al
08142e5d +0x139:  jne    08142ed2 <+0x1ae>
08142e5f +0x13b:  mov    -0x10(%ebp),%edx
08142e62 +0x13e:  mov    0x8(%ebp),%eax
08142e65 +0x141:  add    $0x274,%edx
08142e6b +0x147:  mov    0x8(%eax,%edx,4),%eax
08142e6f +0x14b:  test   %eax,%eax
08142e71 +0x14d:  jne    08142ead <+0x189>
08142e73 +0x14f:  mov    -0xc(%ebp),%eax
08142e76 +0x152:  mov    %eax,(%esp)
08142e79 +0x155:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08142e7e +0x15a:  movl   $0x0,0x14(%esp)
08142e86 +0x162:  movl   $0x0,0x10(%esp)
08142e8e +0x16a:  movl   $0x1,0xc(%esp)
08142e96 +0x172:  movl   $0x13a,0x8(%esp)
08142e9e +0x17a:  mov    -0xc(%ebp),%edx
08142ea1 +0x17d:  mov    %edx,0x4(%esp)
08142ea5 +0x181:  mov    %eax,(%esp)
08142ea8 +0x184:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08142ead +0x189:  movzbl -0x11c(%ebp),%eax
08142eb4 +0x190:  mov    -0xc(%ebp),%edx
08142eb7 +0x193:  lea    0x79700(%edx),%ecx
08142ebd +0x199:  mov    -0x14(%ebp),%edx
08142ec0 +0x19c:  mov    %edx,0x8(%esp)
08142ec4 +0x1a0:  mov    %eax,0x4(%esp)
08142ec8 +0x1a4:  mov    %ecx,(%esp)
08142ecb +0x1a7:  call   08684ac4 <_ZN15cUserHistoryLog16DungeonClearInfoEil>  ; cUserHistoryLog::DungeonClearInfo(int, long)
08142ed0 +0x1ac:  jmp    08142ed3 <+0x1af>
08142ed2 +0x1ae:  nop
08142ed3 +0x1af:  addl   $0x1,-0x10(%ebp)
08142ed7 +0x1b3:  cmpl   $0x3,-0x10(%ebp)
08142edb +0x1b7:  setle  %al
08142ede +0x1ba:  test   %al,%al
08142ee0 +0x1bc:  jne    08142e15 <+0xf1>
08142ee6 +0x1c2:  mov    0x8(%ebp),%eax
08142ee9 +0x1c5:  mov    0xaf0(%eax),%ebx
08142eef +0x1cb:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08142ef4 +0x1d0:  movl   $0xa3,0x18(%esp)
08142efc +0x1d8:  movl   $0xa3,0x14(%esp)
08142f04 +0x1e0:  movl   $0x5,0x10(%esp)
08142f0c +0x1e8:  movl   $0xa3,0xc(%esp)
08142f14 +0x1f0:  mov    %ebx,0x8(%esp)
08142f18 +0x1f4:  movl   $0x7,0x4(%esp)
08142f20 +0x1fc:  mov    %eax,(%esp)
08142f23 +0x1ff:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08142f28 +0x204:  add    $0x140,%esp
08142f2e +0x20a:  pop    %ebx
08142f2f +0x20b:  pop    %edi
08142f30 +0x20c:  pop    %ebp
08142f31 +0x20d:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::_onPrepareFinishTower @ 0x8142d24

/* WongWork::CBossTower::_onPrepareFinishTower(bool) */

void __thiscall WongWork::CBossTower::_onPrepareFinishTower(CBossTower *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  TimerQueue *pTVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_117;
  char local_116 [254];
  int local_18;
  int local_14;
  CUser *local_10;
  
  bVar9 = 0;
  this[0xafc] = (CBossTower)param_1;
  local_18 = 0;
  uVar2 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0xaf8) = uVar2;
  local_18 = (*(int *)(this + 0xaf8) - *(int *)(this + 0xaf4)) / 1000;
  pcVar6 = &local_117;
  uVar7 = 0xff;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_117 = '\0';
    pcVar6 = local_116;
    uVar7 = 0xfe;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  CParty::getMemberNames(*(CParty **)(this + 4),&local_117);
  local_14 = 0;
  do {
    if (3 < local_14) {
      uVar2 = *(undefined4 *)(this + 0xaf0);
      pTVar4 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar4,7,uVar2,0xa3,5,0xa3,0xa3);
      return;
    }
    local_10 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (local_10 == (CUser *)0x0) {
LAB_08142e4f:
      bVar8 = true;
    }
    else {
      cVar1 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar1 != '\x01') goto LAB_08142e4f;
      bVar8 = false;
    }
    if (!bVar8) {
      if (*(int *)(this + (local_14 + 0x274) * 4 + 8) == 0) {
        pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_10);
        CHackAnalyzer::addServerHackCnt(pCVar3,local_10,0x13a,1,0,0);
      }
      cUserHistoryLog::DungeonClearInfo
                ((cUserHistoryLog *)(local_10 + 0x79700),(uint)param_1,local_18);
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
