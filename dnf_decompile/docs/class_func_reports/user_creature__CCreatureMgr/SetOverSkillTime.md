# SetOverSkillTime

`_ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi`

`user_creature::CCreatureMgr::SetOverSkillTime(int const&)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833c41e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c41e  _ZN13user_creature12CCreatureMgr16SetOverSkillTimeERKi
#           user_creature::CCreatureMgr::SetOverSkillTime(int const&)
# range [0x0833c41e, 0x0833c6f5]
0833c41e +0x000:  push   %ebp
0833c41f +0x001:  mov    %esp,%ebp
0833c421 +0x003:  push   %edi
0833c422 +0x004:  push   %esi
0833c423 +0x005:  push   %ebx
0833c424 +0x006:  sub    $0x6c,%esp
0833c427 +0x009:  mov    0x8(%ebp),%eax
0833c42a +0x00c:  mov    0x18(%eax),%eax
0833c42d +0x00f:  test   %eax,%eax
0833c42f +0x011:  je     0833c6e9 <+0x2cb>
0833c435 +0x017:  mov    0x8(%ebp),%eax
0833c438 +0x01a:  mov    0x18(%eax),%eax
0833c43b +0x01d:  mov    %eax,(%esp)
0833c43e +0x020:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
0833c443 +0x025:  test   %al,%al
0833c445 +0x027:  je     0833c451 <+0x33>
0833c447 +0x029:  mov    $0x1,%eax
0833c44c +0x02e:  jmp    0833c6ee <+0x2d0>
0833c451 +0x033:  mov    0xc(%ebp),%eax
0833c454 +0x036:  mov    (%eax),%ebx
0833c456 +0x038:  mov    0x8(%ebp),%eax
0833c459 +0x03b:  mov    0x18(%eax),%eax
0833c45c +0x03e:  mov    %eax,(%esp)
0833c45f +0x041:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833c464 +0x046:  cmp    %eax,%ebx
0833c466 +0x048:  sete   %al
0833c469 +0x04b:  test   %al,%al
0833c46b +0x04d:  je     0833c6e9 <+0x2cb>
0833c471 +0x053:  mov    0x8(%ebp),%eax
0833c474 +0x056:  mov    0x18(%eax),%eax
0833c477 +0x059:  mov    %eax,(%esp)
0833c47a +0x05c:  call   0833f0f2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11bf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11bf
0833c47f +0x061:  xor    $0x1,%eax
0833c482 +0x064:  test   %al,%al
0833c484 +0x066:  je     0833c4cf <+0xb1>
0833c486 +0x068:  mov    0xc(%ebp),%eax
0833c489 +0x06b:  mov    (%eax),%ebx
0833c48b +0x06d:  movl   $0x0,0xc(%esp)
0833c493 +0x075:  movl   $0xe62,0x8(%esp)
0833c49b +0x07d:  movl   $&_ZZN13user_creature12CCreatureMgr16SetOverSkillTimeERKiE19__PRETTY_FUNCTION__,0x4(%esp)
0833c4a3 +0x085:  lea    -0x38(%ebp),%eax
0833c4a6 +0x088:  mov    %eax,(%esp)
0833c4a9 +0x08b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833c4ae +0x090:  mov    %ebx,0x8(%esp)
0833c4b2 +0x094:  movl   $"SetOverSkillTime::creature_script is null(creature_itemno=%u)",0x4(%esp)
0833c4ba +0x09c:  lea    -0x38(%ebp),%eax
0833c4bd +0x09f:  mov    %eax,(%esp)
0833c4c0 +0x0a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833c4c5 +0x0a7:  mov    $0x13,%eax
0833c4ca +0x0ac:  jmp    0833c6ee <+0x2d0>
0833c4cf +0x0b1:  mov    0x8(%ebp),%eax
0833c4d2 +0x0b4:  mov    0x18(%eax),%eax
0833c4d5 +0x0b7:  mov    %eax,(%esp)
0833c4d8 +0x0ba:  call   08338c78 <_ZN13user_creature9CCreature22GetLearnOverSkillLevelEv>  ; user_creature::CCreature::GetLearnOverSkillLevel()
0833c4dd +0x0bf:  mov    %eax,%ebx
0833c4df +0x0c1:  mov    0x8(%ebp),%eax
0833c4e2 +0x0c4:  mov    0x18(%eax),%eax
0833c4e5 +0x0c7:  mov    %eax,(%esp)
0833c4e8 +0x0ca:  call   0833f08e <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x115b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x115b
0833c4ed +0x0cf:  mov    0x8(%ebp),%edx
0833c4f0 +0x0d2:  mov    0x18(%edx),%edx
0833c4f3 +0x0d5:  mov    %eax,0x4(%esp)
0833c4f7 +0x0d9:  mov    %edx,(%esp)
0833c4fa +0x0dc:  call   083374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>  ; user_creature::CCreature::GetExpLevel(int)
0833c4ff +0x0e1:  cmp    %eax,%ebx
0833c501 +0x0e3:  setg   %al
0833c504 +0x0e6:  test   %al,%al
0833c506 +0x0e8:  je     0833c512 <+0xf4>
0833c508 +0x0ea:  mov    $0x13,%eax
0833c50d +0x0ef:  jmp    0833c6ee <+0x2d0>
0833c512 +0x0f4:  mov    0x8(%ebp),%eax
0833c515 +0x0f7:  mov    0x18(%eax),%eax
0833c518 +0x0fa:  mov    %eax,(%esp)
0833c51b +0x0fd:  call   0833f0e6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11b3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11b3
0833c520 +0x102:  mov    %eax,(%esp)
0833c523 +0x105:  call   0833ef04 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfd1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfd1
0833c528 +0x10a:  mov    (%eax),%ebx
0833c52a +0x10c:  mov    0x8(%ebp),%eax
0833c52d +0x10f:  mov    0x18(%eax),%eax
0833c530 +0x112:  mov    %eax,(%esp)
0833c533 +0x115:  call   08338c28 <_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv>  ; user_creature::CCreature::GetSkillRecoveryTime()
0833c538 +0x11a:  mov    %eax,%ecx
0833c53a +0x11c:  mov    $0x10624dd3,%edx
0833c53f +0x121:  mov    %ecx,%eax
0833c541 +0x123:  imul   %edx
0833c543 +0x125:  sar    $0x6,%edx
0833c546 +0x128:  mov    %ecx,%eax
0833c548 +0x12a:  sar    $0x1f,%eax
0833c54b +0x12d:  mov    %edx,%ecx
0833c54d +0x12f:  sub    %eax,%ecx
0833c54f +0x131:  mov    %ecx,%eax
0833c551 +0x133:  add    %eax,%ebx
0833c553 +0x135:  mov    0x8(%ebp),%eax
0833c556 +0x138:  mov    0x18(%eax),%eax
0833c559 +0x13b:  mov    %eax,(%esp)
0833c55c +0x13e:  call   08338c50 <_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv>  ; user_creature::CCreature::GetOverSkillRecoveryTime()
0833c561 +0x143:  mov    %eax,%ecx
0833c563 +0x145:  mov    $0x10624dd3,%edx
0833c568 +0x14a:  mov    %ecx,%eax
0833c56a +0x14c:  imul   %edx
0833c56c +0x14e:  sar    $0x6,%edx
0833c56f +0x151:  mov    %ecx,%eax
0833c571 +0x153:  sar    $0x1f,%eax
0833c574 +0x156:  mov    %edx,%ecx
0833c576 +0x158:  sub    %eax,%ecx
0833c578 +0x15a:  mov    %ecx,%eax
0833c57a +0x15c:  add    %eax,%ebx
0833c57c +0x15e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0833c583 +0x165:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0833c588 +0x16a:  add    $0x2,%eax
0833c58b +0x16d:  cmp    %eax,%ebx
0833c58d +0x16f:  setg   %al
0833c590 +0x172:  test   %al,%al
0833c592 +0x174:  je     0833c6d3 <+0x2b5>
0833c598 +0x17a:  mov    0x8(%ebp),%eax
0833c59b +0x17d:  mov    0x1c(%eax),%eax
0833c59e +0x180:  mov    %eax,(%esp)
0833c5a1 +0x183:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0833c5a6 +0x188:  mov    %eax,%edi
0833c5a8 +0x18a:  mov    0x8(%ebp),%eax
0833c5ab +0x18d:  mov    0x1c(%eax),%eax
0833c5ae +0x190:  mov    %eax,(%esp)
0833c5b1 +0x193:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0833c5b6 +0x198:  movl   $0x0,0x4(%esp)
0833c5be +0x1a0:  mov    %eax,(%esp)
0833c5c1 +0x1a3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0833c5c6 +0x1a8:  mov    %eax,%esi
0833c5c8 +0x1aa:  mov    0x8(%ebp),%eax
0833c5cb +0x1ad:  mov    0x18(%eax),%eax
0833c5ce +0x1b0:  mov    %eax,(%esp)
0833c5d1 +0x1b3:  call   08338c50 <_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv>  ; user_creature::CCreature::GetOverSkillRecoveryTime()
0833c5d6 +0x1b8:  mov    %eax,%ecx
0833c5d8 +0x1ba:  mov    $0x10624dd3,%edx
0833c5dd +0x1bf:  mov    %ecx,%eax
0833c5df +0x1c1:  imul   %edx
0833c5e1 +0x1c3:  sar    $0x6,%edx
0833c5e4 +0x1c6:  mov    %ecx,%eax
0833c5e6 +0x1c8:  sar    $0x1f,%eax
0833c5e9 +0x1cb:  mov    %edx,%ecx
0833c5eb +0x1cd:  sub    %eax,%ecx
0833c5ed +0x1cf:  mov    %ecx,-0x48(%ebp)
0833c5f0 +0x1d2:  mov    0x8(%ebp),%eax
0833c5f3 +0x1d5:  mov    0x18(%eax),%eax
0833c5f6 +0x1d8:  mov    %eax,(%esp)
0833c5f9 +0x1db:  call   08338c28 <_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv>  ; user_creature::CCreature::GetSkillRecoveryTime()
0833c5fe +0x1e0:  mov    %eax,%ecx
0833c600 +0x1e2:  mov    $0x10624dd3,%edx
0833c605 +0x1e7:  mov    %ecx,%eax
0833c607 +0x1e9:  imul   %edx
0833c609 +0x1eb:  sar    $0x6,%edx
0833c60c +0x1ee:  mov    %ecx,%eax
0833c60e +0x1f0:  sar    $0x1f,%eax
0833c611 +0x1f3:  mov    %edx,%ecx
0833c613 +0x1f5:  sub    %eax,%ecx
0833c615 +0x1f7:  mov    %ecx,-0x44(%ebp)
0833c618 +0x1fa:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0833c61f +0x201:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0833c624 +0x206:  mov    %eax,%ebx
0833c626 +0x208:  mov    0x8(%ebp),%eax
0833c629 +0x20b:  mov    0x18(%eax),%eax
0833c62c +0x20e:  mov    %eax,(%esp)
0833c62f +0x211:  call   0833f0e6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11b3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11b3
0833c634 +0x216:  mov    %eax,(%esp)
0833c637 +0x219:  call   0833ef04 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfd1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfd1
0833c63c +0x21e:  mov    (%eax),%eax
0833c63e +0x220:  mov    %ebx,%edx
0833c640 +0x222:  sub    %eax,%edx
0833c642 +0x224:  mov    %edx,-0x40(%ebp)
0833c645 +0x227:  mov    0x8(%ebp),%eax
0833c648 +0x22a:  mov    0x18(%eax),%eax
0833c64b +0x22d:  mov    %eax,(%esp)
0833c64e +0x230:  call   0833f0e6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11b3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11b3
0833c653 +0x235:  mov    %eax,(%esp)
0833c656 +0x238:  call   0833ef04 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfd1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfd1
0833c65b +0x23d:  mov    (%eax),%eax
0833c65d +0x23f:  mov    %eax,-0x3c(%ebp)
0833c660 +0x242:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0833c667 +0x249:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0833c66c +0x24e:  mov    %eax,%ebx
0833c66e +0x250:  movl   $0x0,0xc(%esp)
0833c676 +0x258:  movl   $0xe6c,0x8(%esp)
0833c67e +0x260:  movl   $&_ZZN13user_creature12CCreatureMgr16SetOverSkillTimeERKiE19__PRETTY_FUNCTION__,0x4(%esp)
0833c686 +0x268:  lea    -0x28(%ebp),%eax
0833c689 +0x26b:  mov    %eax,(%esp)
0833c68c +0x26e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833c691 +0x273:  mov    %edi,0x20(%esp)
0833c695 +0x277:  mov    %esi,0x1c(%esp)
0833c699 +0x27b:  mov    -0x48(%ebp),%ecx
0833c69c +0x27e:  mov    %ecx,0x18(%esp)
0833c6a0 +0x282:  mov    -0x44(%ebp),%eax
0833c6a3 +0x285:  mov    %eax,0x14(%esp)
0833c6a7 +0x289:  mov    -0x40(%ebp),%edx
0833c6aa +0x28c:  mov    %edx,0x10(%esp)
0833c6ae +0x290:  mov    -0x3c(%ebp),%ecx
0833c6b1 +0x293:  mov    %ecx,0xc(%esp)
0833c6b5 +0x297:  mov    %ebx,0x8(%esp)
0833c6b9 +0x29b:  movl   $"fail:cur_time(%u),last_used_skilltime(%u),interval(%d) st(%d),ovst(%d),m_id(%s),ch_no(%u)",0x4(%esp)
0833c6c1 +0x2a3:  lea    -0x28(%ebp),%eax
0833c6c4 +0x2a6:  mov    %eax,(%esp)
0833c6c7 +0x2a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833c6cc +0x2ae:  mov    $0x13,%eax
0833c6d1 +0x2b3:  jmp    0833c6ee <+0x2d0>
0833c6d3 +0x2b5:  mov    0x8(%ebp),%eax
0833c6d6 +0x2b8:  mov    0x18(%eax),%eax
0833c6d9 +0x2bb:  mov    %eax,(%esp)
0833c6dc +0x2be:  call   0833f0e6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11b3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11b3
0833c6e1 +0x2c3:  mov    %eax,(%esp)
0833c6e4 +0x2c6:  call   0833d644 <_ZN13user_creature14COverSkillTime7SetTimeEv>  ; user_creature::COverSkillTime::SetTime()
0833c6e9 +0x2cb:  mov    $0x0,%eax
0833c6ee +0x2d0:  add    $0x6c,%esp
0833c6f1 +0x2d3:  pop    %ebx
0833c6f2 +0x2d4:  pop    %esi
0833c6f3 +0x2d5:  pop    %edi
0833c6f4 +0x2d6:  pop    %ebp
0833c6f5 +0x2d7:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SetOverSkillTime @ 0x833c41e

/* user_creature::CCreatureMgr::SetOverSkillTime(int const&) */

undefined4 __thiscall user_creature::CCreatureMgr::SetOverSkillTime(CCreatureMgr *this,int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  COverSkillTime *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  if (*(int *)(this + 0x18) != 0) {
    cVar2 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
    if (cVar2 != '\0') {
      return 1;
    }
    iVar4 = *param_1;
    iVar3 = CCreatureItem::GetItemId(*(CCreatureItem **)(this + 0x18));
    if (iVar4 == iVar3) {
      cVar2 = CCreature::IsCreatureScript(*(CCreature **)(this + 0x18));
      if (cVar2 != '\x01') {
        iVar4 = *param_1;
        cMyTrace::cMyTrace(local_3c,"int user_creature::CCreatureMgr::SetOverSkillTime(const int&)",
                           0xe62,0);
        cMyTrace::operator()
                  (local_3c,"SetOverSkillTime::creature_script is null(creature_itemno=%u)",iVar4);
        return 0x13;
      }
      iVar4 = CCreature::GetLearnOverSkillLevel(*(CCreature **)(this + 0x18));
      iVar3 = CCreature::GetExp(*(CCreature **)(this + 0x18));
      iVar3 = CCreature::GetExpLevel(*(CCreature **)(this + 0x18),iVar3);
      if (iVar3 < iVar4) {
        return 0x13;
      }
      pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
      piVar6 = (int *)COverSkillTime::GetTime(pCVar5);
      iVar4 = *piVar6;
      iVar3 = CCreature::GetSkillRecoveryTime(*(CCreature **)(this + 0x18));
      iVar7 = CCreature::GetOverSkillRecoveryTime(*(CCreature **)(this + 0x18));
      iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar8 + 2 < iVar4 + iVar3 / 1000 + iVar7 / 1000) {
        uVar9 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x1c));
        uVar10 = CUser::get_acc_id(*(CUser **)(this + 0x1c));
        uVar11 = NumberToString(uVar10,0);
        iVar3 = CCreature::GetOverSkillRecoveryTime(*(CCreature **)(this + 0x18));
        iVar7 = CCreature::GetSkillRecoveryTime(*(CCreature **)(this + 0x18));
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
        piVar6 = (int *)COverSkillTime::GetTime(pCVar5);
        iVar4 = *piVar6;
        pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
        puVar12 = (undefined4 *)COverSkillTime::GetTime(pCVar5);
        uVar1 = *puVar12;
        uVar13 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        cMyTrace::cMyTrace(local_2c,"int user_creature::CCreatureMgr::SetOverSkillTime(const int&)",
                           0xe6c,0);
        cMyTrace::operator()
                  (local_2c,
                   "fail:cur_time(%u),last_used_skilltime(%u),interval(%d) st(%d),ovst(%d),m_id(%s),ch_no(%u)"
                   ,uVar13,uVar1,iVar8 - iVar4,iVar7 / 1000,iVar3 / 1000,uVar11,uVar9);
        return 0x13;
      }
      pCVar5 = (COverSkillTime *)CCreature::GetOverSkillTime(*(CCreature **)(this + 0x18));
      COverSkillTime::SetTime(pCVar5);
    }
  }
  return 0;
}
```
