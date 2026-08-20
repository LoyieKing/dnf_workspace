# sumGainedEachExp

`_ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData`

`CParty::sumGainedEachExp(CUser*, STGainedEachExpData const&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a2488` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a2488  _ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData
#           CParty::sumGainedEachExp(CUser*, STGainedEachExpData const&)
# range [0x085a2488, 0x085a2779]
085a2488 +0x000:  push   %ebp
085a2489 +0x001:  mov    %esp,%ebp
085a248b +0x003:  sub    $0x78,%esp
085a248e +0x006:  movl   $0x0,-0x38(%ebp)
085a2495 +0x00d:  mov    0x10(%ebp),%eax
085a2498 +0x010:  mov    (%eax),%eax
085a249a +0x012:  mov    %eax,-0x34(%ebp)
085a249d +0x015:  mov    0x10(%ebp),%eax
085a24a0 +0x018:  mov    0x4(%eax),%eax
085a24a3 +0x01b:  mov    %eax,-0x30(%ebp)
085a24a6 +0x01e:  movl   $0x0,-0x2c(%ebp)
085a24ad +0x025:  movl   $0x0,-0x28(%ebp)
085a24b4 +0x02c:  movl   $0x0,-0x24(%ebp)
085a24bb +0x033:  mov    0x8(%ebp),%eax
085a24be +0x036:  add    $0xb24,%eax
085a24c3 +0x03b:  mov    %eax,(%esp)
085a24c6 +0x03e:  call   085bf31c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x87a>  ; global constructors keyed to CParty::cMember::cMember()+0x87a
085a24cb +0x043:  xor    $0x1,%eax
085a24ce +0x046:  test   %al,%al
085a24d0 +0x048:  je     085a265a <+0x1d2>
085a24d6 +0x04e:  mov    0xc(%ebp),%eax
085a24d9 +0x051:  mov    %eax,(%esp)
085a24dc +0x054:  call   084a852c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x92>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x92
085a24e1 +0x059:  test   %ax,%ax
085a24e4 +0x05c:  setne  %al
085a24e7 +0x05f:  test   %al,%al
085a24e9 +0x061:  je     085a2532 <+0xaa>
085a24eb +0x063:  mov    -0x34(%ebp),%eax
085a24ee +0x066:  mov    $0x0,%edx
085a24f3 +0x06b:  mov    %eax,-0x58(%ebp)
085a24f6 +0x06e:  mov    %edx,-0x54(%ebp)
085a24f9 +0x071:  fildll -0x58(%ebp)
085a24fc +0x074:  fldl   &data#1cf1e2e6(.rodata)
085a2502 +0x07a:  fmulp  %st,%st(1)
085a2504 +0x07c:  fnstcw -0x5a(%ebp)
085a2507 +0x07f:  movzwl -0x5a(%ebp),%eax
085a250b +0x083:  mov    $0xc,%ah
085a250d +0x085:  mov    %ax,-0x5c(%ebp)
085a2511 +0x089:  fldcw  -0x5c(%ebp)
085a2514 +0x08c:  fistpl -0x2c(%ebp)
085a2517 +0x08f:  fldcw  -0x5a(%ebp)
085a251a +0x092:  mov    -0x2c(%ebp),%eax
085a251d +0x095:  add    %eax,-0x38(%ebp)
085a2520 +0x098:  mov    0xc(%ebp),%eax
085a2523 +0x09b:  mov    -0x2c(%ebp),%edx
085a2526 +0x09e:  mov    %edx,0x4(%esp)
085a252a +0x0a2:  mov    %eax,(%esp)
085a252d +0x0a5:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
085a2532 +0x0aa:  lea    -0x3c(%ebp),%eax
085a2535 +0x0ad:  mov    %eax,(%esp)
085a2538 +0x0b0:  call   085bed52 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2b0>  ; global constructors keyed to CParty::cMember::cMember()+0x2b0
085a253d +0x0b5:  lea    -0x4c(%ebp),%eax
085a2540 +0x0b8:  mov    0xc(%ebp),%edx
085a2543 +0x0bb:  mov    %edx,0x4(%esp)
085a2547 +0x0bf:  mov    %eax,(%esp)
085a254a +0x0c2:  call   0868dc64 <_ZN5CUser27get_growth_power_exp_rewardEv>  ; CUser::get_growth_power_exp_reward()
085a254f +0x0c7:  sub    $0x4,%esp
085a2552 +0x0ca:  mov    -0x4c(%ebp),%eax
085a2555 +0x0cd:  mov    %eax,-0x3c(%ebp)
085a2558 +0x0d0:  movzbl -0x3b(%ebp),%eax
085a255c +0x0d4:  movzbl %al,%eax
085a255f +0x0d7:  mov    %ax,-0x5e(%ebp)
085a2563 +0x0db:  filds  -0x5e(%ebp)
085a2566 +0x0de:  flds   ""
085a256c +0x0e4:  fdivrp %st,%st(1)
085a256e +0x0e6:  fstps  -0xc(%ebp)
085a2571 +0x0e9:  mov    -0x34(%ebp),%eax
085a2574 +0x0ec:  mov    $0x0,%edx
085a2579 +0x0f1:  mov    %eax,-0x58(%ebp)
085a257c +0x0f4:  mov    %edx,-0x54(%ebp)
085a257f +0x0f7:  fildll -0x58(%ebp)
085a2582 +0x0fa:  fmuls  -0xc(%ebp)
085a2585 +0x0fd:  fnstcw -0x5a(%ebp)
085a2588 +0x100:  movzwl -0x5a(%ebp),%eax
085a258c +0x104:  mov    $0xc,%ah
085a258e +0x106:  mov    %ax,-0x5c(%ebp)
085a2592 +0x10a:  fldcw  -0x5c(%ebp)
085a2595 +0x10d:  fistpl -0x28(%ebp)
085a2598 +0x110:  fldcw  -0x5a(%ebp)
085a259b +0x113:  mov    0xc(%ebp),%eax
085a259e +0x116:  mov    -0x28(%ebp),%edx
085a25a1 +0x119:  mov    %edx,0x4(%esp)
085a25a5 +0x11d:  mov    %eax,(%esp)
085a25a8 +0x120:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
085a25ad +0x125:  mov    -0x28(%ebp),%eax
085a25b0 +0x128:  add    %eax,-0x38(%ebp)
085a25b3 +0x12b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085a25b8 +0x130:  movl   $0x57,0x4(%esp)
085a25c0 +0x138:  mov    %eax,(%esp)
085a25c3 +0x13b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085a25c8 +0x140:  mov    (%eax),%edx
085a25ca +0x142:  add    $0x34,%edx
085a25cd +0x145:  mov    (%edx),%edx
085a25cf +0x147:  movl   $0x0,0x4(%esp)
085a25d7 +0x14f:  mov    %eax,(%esp)
085a25da +0x152:  call   *%edx
085a25dc +0x154:  test   %al,%al
085a25de +0x156:  je     085a2615 <+0x18d>
085a25e0 +0x158:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a25e5 +0x15d:  mov    0x520(%eax),%edx
085a25eb +0x163:  mov    0xc(%ebp),%eax
085a25ee +0x166:  mov    %edx,0x8(%esp)
085a25f2 +0x16a:  mov    -0x34(%ebp),%edx
085a25f5 +0x16d:  mov    %edx,0x4(%esp)
085a25f9 +0x171:  mov    %eax,(%esp)
085a25fc +0x174:  call   0868e2d2 <_ZN15CUserCharacInfo18setWeekendBonusExpEji>  ; CUserCharacInfo::setWeekendBonusExp(unsigned int, int)
085a2601 +0x179:  mov    0xc(%ebp),%eax
085a2604 +0x17c:  mov    %eax,(%esp)
085a2607 +0x17f:  call   0868e328 <_ZN15CUserCharacInfo18getWeekendBonusExpEv>  ; CUserCharacInfo::getWeekendBonusExp()
085a260c +0x184:  mov    %eax,-0x24(%ebp)
085a260f +0x187:  mov    -0x24(%ebp),%eax
085a2612 +0x18a:  add    %eax,-0x38(%ebp)
085a2615 +0x18d:  movl   $0x4f,0x4(%esp)
085a261d +0x195:  mov    0xc(%ebp),%eax
085a2620 +0x198:  mov    %eax,(%esp)
085a2623 +0x19b:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085a2628 +0x1a0:  test   %al,%al
085a262a +0x1a2:  je     085a265a <+0x1d2>
085a262c +0x1a4:  movl   $0x4f,0x4(%esp)
085a2634 +0x1ac:  mov    0xc(%ebp),%eax
085a2637 +0x1af:  mov    %eax,(%esp)
085a263a +0x1b2:  call   085bfd76 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12d4>  ; global constructors keyed to CParty::cMember::cMember()+0x12d4
085a263f +0x1b7:  mov    %eax,%edx
085a2641 +0x1b9:  mov    0xc(%ebp),%eax
085a2644 +0x1bc:  mov    %edx,0x8(%esp)
085a2648 +0x1c0:  mov    -0x34(%ebp),%edx
085a264b +0x1c3:  mov    %edx,0x4(%esp)
085a264f +0x1c7:  mov    %eax,(%esp)
085a2652 +0x1ca:  call   0868e1f6 <_ZN15CUserCharacInfo18setPremiumBonusExpEji>  ; CUserCharacInfo::setPremiumBonusExp(unsigned int, int)
085a2657 +0x1cf:  add    %eax,-0x38(%ebp)
085a265a +0x1d2:  mov    $0x0,%eax
085a265f +0x1d7:  mov    %eax,-0x20(%ebp)
085a2662 +0x1da:  mov    0xc(%ebp),%eax
085a2665 +0x1dd:  mov    %eax,(%esp)
085a2668 +0x1e0:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
085a266d +0x1e5:  mov    %eax,(%esp)
085a2670 +0x1e8:  call   0814aa08 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7a7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7a7
085a2675 +0x1ed:  mov    %eax,-0x50(%ebp)
085a2678 +0x1f0:  fildl  -0x50(%ebp)
085a267b +0x1f3:  fstps  -0x20(%ebp)
085a267e +0x1f6:  call   0814a6e0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x47f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x47f
085a2683 +0x1fb:  mov    %eax,-0x50(%ebp)
085a2686 +0x1fe:  fildl  -0x50(%ebp)
085a2689 +0x201:  flds   -0x20(%ebp)
085a268c +0x204:  faddp  %st,%st(1)
085a268e +0x206:  fstps  -0x20(%ebp)
085a2691 +0x209:  mov    -0x34(%ebp),%eax
085a2694 +0x20c:  mov    $0x0,%edx
085a2699 +0x211:  mov    %eax,-0x58(%ebp)
085a269c +0x214:  mov    %edx,-0x54(%ebp)
085a269f +0x217:  fildll -0x58(%ebp)
085a26a2 +0x21a:  mov    -0x34(%ebp),%eax
085a26a5 +0x21d:  mov    $0x0,%edx
085a26aa +0x222:  mov    %eax,-0x58(%ebp)
085a26ad +0x225:  mov    %edx,-0x54(%ebp)
085a26b0 +0x228:  fildll -0x58(%ebp)
085a26b3 +0x22b:  fmuls  -0x20(%ebp)
085a26b6 +0x22e:  flds   ""
085a26bc +0x234:  fdivrp %st,%st(1)
085a26be +0x236:  faddp  %st,%st(1)
085a26c0 +0x238:  fnstcw -0x5a(%ebp)
085a26c3 +0x23b:  movzwl -0x5a(%ebp),%eax
085a26c7 +0x23f:  mov    $0xc,%ah
085a26c9 +0x241:  mov    %ax,-0x5c(%ebp)
085a26cd +0x245:  fldcw  -0x5c(%ebp)
085a26d0 +0x248:  fistpll -0x58(%ebp)
085a26d3 +0x24b:  fldcw  -0x5a(%ebp)
085a26d6 +0x24e:  mov    -0x58(%ebp),%eax
085a26d9 +0x251:  mov    -0x54(%ebp),%edx
085a26dc +0x254:  mov    %eax,-0x34(%ebp)
085a26df +0x257:  mov    -0x34(%ebp),%eax
085a26e2 +0x25a:  add    %eax,-0x38(%ebp)
085a26e5 +0x25d:  mov    -0x34(%ebp),%eax
085a26e8 +0x260:  mov    $0x0,%edx
085a26ed +0x265:  mov    %eax,-0x58(%ebp)
085a26f0 +0x268:  mov    %edx,-0x54(%ebp)
085a26f3 +0x26b:  fildll -0x58(%ebp)
085a26f6 +0x26e:  fdivs  -0x30(%ebp)
085a26f9 +0x271:  fldcw  -0x5c(%ebp)
085a26fc +0x274:  fistpl -0x50(%ebp)
085a26ff +0x277:  fldcw  -0x5a(%ebp)
085a2702 +0x27a:  mov    -0x50(%ebp),%eax
085a2705 +0x27d:  mov    -0x34(%ebp),%edx
085a2708 +0x280:  mov    %edx,%ecx
085a270a +0x282:  sub    %eax,%ecx
085a270c +0x284:  mov    %ecx,%eax
085a270e +0x286:  mov    %eax,-0x1c(%ebp)
085a2711 +0x289:  mov    0xc(%ebp),%eax
085a2714 +0x28c:  mov    -0x1c(%ebp),%edx
085a2717 +0x28f:  mov    %edx,0x4(%esp)
085a271b +0x293:  mov    %eax,(%esp)
085a271e +0x296:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
085a2723 +0x29b:  mov    -0x34(%ebp),%eax
085a2726 +0x29e:  mov    %eax,0x4(%esp)
085a272a +0x2a2:  mov    0xc(%ebp),%eax
085a272d +0x2a5:  mov    %eax,(%esp)
085a2730 +0x2a8:  call   0864fa08 <_ZN5CUser20gainExpAsUpperMemberEi>  ; CUser::gainExpAsUpperMember(int)
085a2735 +0x2ad:  mov    %eax,-0x18(%ebp)
085a2738 +0x2b0:  mov    -0x18(%ebp),%eax
085a273b +0x2b3:  add    %eax,-0x38(%ebp)
085a273e +0x2b6:  mov    -0x34(%ebp),%eax
085a2741 +0x2b9:  mov    %eax,0x4(%esp)
085a2745 +0x2bd:  mov    0xc(%ebp),%eax
085a2748 +0x2c0:  mov    %eax,(%esp)
085a274b +0x2c3:  call   0864fb3a <_ZN5CUser17gainGuildSkillExpEi>  ; CUser::gainGuildSkillExp(int)
085a2750 +0x2c8:  mov    %eax,-0x14(%ebp)
085a2753 +0x2cb:  mov    -0x14(%ebp),%eax
085a2756 +0x2ce:  add    %eax,-0x38(%ebp)
085a2759 +0x2d1:  mov    -0x34(%ebp),%eax
085a275c +0x2d4:  mov    %eax,0x4(%esp)
085a2760 +0x2d8:  mov    0xc(%ebp),%eax
085a2763 +0x2db:  mov    %eax,(%esp)
085a2766 +0x2de:  call   0864fc34 <_ZN5CUser21gainPowerWarRewardExpEi>  ; CUser::gainPowerWarRewardExp(int)
085a276b +0x2e3:  mov    %eax,-0x10(%ebp)
085a276e +0x2e6:  mov    -0x10(%ebp),%eax
085a2771 +0x2e9:  add    %eax,-0x38(%ebp)
085a2774 +0x2ec:  mov    -0x38(%ebp),%eax
085a2777 +0x2ef:  leave
085a2778 +0x2f0:  ret
085a2779 +0x2f1:  nop
```

## 反编译 C

```c
// CParty::sumGainedEachExp @ 0x85a2488

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::sumGainedEachExp(CUser*, STGainedEachExpData const&) */

int __thiscall CParty::sumGainedEachExp(CParty *this,CUser *param_1,STGainedEachExpData *param_2)

{
  float fVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  CUserPremium *this_00;
  ulonglong local_5c;
  uint local_50;
  STExpReward local_40 [4];
  int local_3c;
  uint local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_10;
  
  local_3c = 0;
  local_38 = *(uint *)param_2;
  local_34 = *(float *)(param_2 + 4);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  cVar2 = CBattle_Field::isWorldMapTowerArea((CBattle_Field *)(this + 0xb24));
  if (cVar2 != '\x01') {
    sVar3 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1);
    if (sVar3 != 0) {
      local_5c = (ulonglong)local_38;
      local_30 = (int)ROUND(_DAT_08cbbbd8 * (double)local_5c);
      local_3c = local_3c + local_30;
      CUserCharacInfo::set_charac_fatigue_buf_bonus_exp((CUserCharacInfo *)param_1,local_30);
    }
    STExpReward::STExpReward(local_40);
    CUser::get_growth_power_exp_reward();
    local_10 = (float)(local_50 >> 8 & 0xff) / _DAT_08cbbbcc;
    local_5c = (ulonglong)local_38;
    local_2c = (int)ROUND((float)local_5c * local_10);
    CUserCharacInfo::set_charac_seria_buf_bonus_exp((CUserCharacInfo *)param_1,local_2c);
    local_3c = local_3c + local_2c;
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar2 != '\0') {
      iVar5 = G_CDataManager();
      CUserCharacInfo::setWeekendBonusExp
                ((CUserCharacInfo *)param_1,local_38,*(int *)(iVar5 + 0x520));
      local_28 = CUserCharacInfo::getWeekendBonusExp((CUserCharacInfo *)param_1);
      local_3c = local_3c + local_28;
    }
    cVar2 = CUser::isAffectedPremium(param_1,0x4f);
    if (cVar2 != '\0') {
      CUser::getAddExpRateFromPremium(param_1,0x4f);
      iVar5 = CUserCharacInfo::setPremiumBonusExp((uint)param_1,local_38);
      local_3c = local_3c + iVar5;
    }
  }
  local_24 = 0.0;
  this_00 = (CUserPremium *)CUser::GetPremiumInfo(param_1);
  iVar5 = WongWork::CUserPremium::GetAdvantageExpRate(this_00);
  local_24 = (float)iVar5;
  iVar5 = CServerEvent::GetExpRate();
  local_24 = local_24 + (float)iVar5;
  local_5c = (ulonglong)local_38;
  fVar1 = (float)local_5c;
  local_5c = (ulonglong)local_38;
  local_5c = (ulonglong)ROUND(((float)local_5c * local_24) / _DAT_08cbbbcc + fVar1);
  local_20 = (int)local_5c;
  local_38 = (int)local_5c;
  local_3c = local_3c + (int)local_5c;
  local_5c = local_5c & 0xffffffff;
  local_20 = local_20 - (int)ROUND((float)local_5c / local_34);
  CUserCharacInfo::set_charac_party_bonus_exp((CUserCharacInfo *)param_1,local_20);
  local_1c = CUser::gainExpAsUpperMember(param_1,local_38);
  local_3c = local_3c + local_1c;
  local_18 = CUser::gainGuildSkillExp(param_1,local_38);
  local_3c = local_3c + local_18;
  iVar5 = CUser::gainPowerWarRewardExp((int)param_1);
  return local_3c + iVar5;
}
```
