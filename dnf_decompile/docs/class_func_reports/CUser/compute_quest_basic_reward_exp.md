# compute_quest_basic_reward_exp

`_ZN5CUser30compute_quest_basic_reward_expEP5Quest`

`CUser::compute_quest_basic_reward_exp(Quest*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866e3e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866e3e2  _ZN5CUser30compute_quest_basic_reward_expEP5Quest
#           CUser::compute_quest_basic_reward_exp(Quest*)
# range [0x0866e3e2, 0x0866e5e5]
0866e3e2 +0x000:  push   %ebp
0866e3e3 +0x001:  mov    %esp,%ebp
0866e3e5 +0x003:  push   %ebx
0866e3e6 +0x004:  sub    $0x44,%esp
0866e3e9 +0x007:  mov    0xc(%ebp),%eax
0866e3ec +0x00a:  mov    0x8(%eax),%eax
0866e3ef +0x00d:  cmp    $0x4,%eax
0866e3f2 +0x010:  jne    0866e3fe <+0x1c>
0866e3f4 +0x012:  mov    $0x0,%eax
0866e3f9 +0x017:  jmp    0866e5e0 <+0x1fe>
0866e3fe +0x01c:  mov    0x8(%ebp),%eax
0866e401 +0x01f:  mov    %eax,(%esp)
0866e404 +0x022:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866e409 +0x027:  mov    0xc(%ebp),%edx
0866e40c +0x02a:  mov    0x20(%edx),%edx
0866e40f +0x02d:  sub    %edx,%eax
0866e411 +0x02f:  mov    %eax,-0x24(%ebp)
0866e414 +0x032:  movl   $0x64,-0x20(%ebp)
0866e41b +0x039:  mov    0xc(%ebp),%eax
0866e41e +0x03c:  movzbl 0x130(%eax),%eax
0866e425 +0x043:  xor    $0x1,%eax
0866e428 +0x046:  test   %al,%al
0866e42a +0x048:  je     0866e441 <+0x5f>
0866e42c +0x04a:  mov    -0x24(%ebp),%eax
0866e42f +0x04d:  mov    %eax,0x4(%esp)
0866e433 +0x051:  mov    0x8(%ebp),%eax
0866e436 +0x054:  mov    %eax,(%esp)
0866e439 +0x057:  call   0866e3a8 <_ZN5CUser21compute_level_penaltyEi>  ; CUser::compute_level_penalty(int)
0866e43e +0x05c:  mov    %eax,-0x20(%ebp)
0866e441 +0x05f:  mov    0xc(%ebp),%eax
0866e444 +0x062:  movzbl 0x102(%eax),%eax
0866e44b +0x069:  movsbl %al,%ebx
0866e44e +0x06c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e453 +0x071:  add    $0x8cc8,%eax
0866e458 +0x076:  mov    %ebx,0x4(%esp)
0866e45c +0x07a:  mov    %eax,(%esp)
0866e45f +0x07d:  call   08a6bd1c <_ZN20QuestParameterScript15getRewardWeightEc>  ; QuestParameterScript::getRewardWeight(char)
0866e464 +0x082:  mov    %eax,-0x1c(%ebp)
0866e467 +0x085:  movl   $0x0,-0x18(%ebp)
0866e46e +0x08c:  mov    0xc(%ebp),%eax
0866e471 +0x08f:  movzbl 0x101(%eax),%eax
0866e478 +0x096:  test   %al,%al
0866e47a +0x098:  jne    0866e48a <+0xa8>
0866e47c +0x09a:  mov    0xc(%ebp),%eax
0866e47f +0x09d:  movzbl 0x130(%eax),%eax
0866e486 +0x0a4:  test   %al,%al
0866e488 +0x0a6:  je     0866e4b2 <+0xd0>
0866e48a +0x0a8:  mov    0x8(%ebp),%eax
0866e48d +0x0ab:  mov    %eax,(%esp)
0866e490 +0x0ae:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866e495 +0x0b3:  mov    %eax,%ebx
0866e497 +0x0b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e49c +0x0ba:  add    $0x8cc8,%eax
0866e4a1 +0x0bf:  mov    %ebx,0x4(%esp)
0866e4a5 +0x0c3:  mov    %eax,(%esp)
0866e4a8 +0x0c6:  call   08a6bd86 <_ZN20QuestParameterScript12getRewardExpEi>  ; QuestParameterScript::getRewardExp(int)
0866e4ad +0x0cb:  mov    %eax,-0x18(%ebp)
0866e4b0 +0x0ce:  jmp    0866e4d1 <+0xef>
0866e4b2 +0x0d0:  mov    0xc(%ebp),%eax
0866e4b5 +0x0d3:  mov    0x20(%eax),%ebx
0866e4b8 +0x0d6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e4bd +0x0db:  add    $0x8cc8,%eax
0866e4c2 +0x0e0:  mov    %ebx,0x4(%esp)
0866e4c6 +0x0e4:  mov    %eax,(%esp)
0866e4c9 +0x0e7:  call   08a6bd86 <_ZN20QuestParameterScript12getRewardExpEi>  ; QuestParameterScript::getRewardExp(int)
0866e4ce +0x0ec:  mov    %eax,-0x18(%ebp)
0866e4d1 +0x0ef:  mov    -0x18(%ebp),%eax
0866e4d4 +0x0f2:  mov    %eax,%ecx
0866e4d6 +0x0f4:  imul   -0x1c(%ebp),%ecx
0866e4da +0x0f8:  mov    $0x51eb851f,%edx
0866e4df +0x0fd:  mov    %ecx,%eax
0866e4e1 +0x0ff:  imul   %edx
0866e4e3 +0x101:  sar    $0x5,%edx
0866e4e6 +0x104:  mov    %ecx,%eax
0866e4e8 +0x106:  sar    $0x1f,%eax
0866e4eb +0x109:  mov    %edx,%ecx
0866e4ed +0x10b:  sub    %eax,%ecx
0866e4ef +0x10d:  mov    %ecx,%eax
0866e4f1 +0x10f:  mov    %eax,%ecx
0866e4f3 +0x111:  imul   -0x20(%ebp),%ecx
0866e4f7 +0x115:  mov    $0x51eb851f,%edx
0866e4fc +0x11a:  mov    %ecx,%eax
0866e4fe +0x11c:  imul   %edx
0866e500 +0x11e:  sar    $0x5,%edx
0866e503 +0x121:  mov    %ecx,%eax
0866e505 +0x123:  sar    $0x1f,%eax
0866e508 +0x126:  mov    %edx,%ecx
0866e50a +0x128:  sub    %eax,%ecx
0866e50c +0x12a:  mov    %ecx,%eax
0866e50e +0x12c:  mov    %eax,-0x18(%ebp)
0866e511 +0x12f:  movl   $0x0,-0x14(%ebp)
0866e518 +0x136:  movl   $0x4f,0x4(%esp)
0866e520 +0x13e:  mov    0x8(%ebp),%eax
0866e523 +0x141:  mov    %eax,(%esp)
0866e526 +0x144:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0866e52b +0x149:  test   %al,%al
0866e52d +0x14b:  je     0866e55d <+0x17b>
0866e52f +0x14d:  movl   $0x4f,0x4(%esp)
0866e537 +0x155:  mov    0x8(%ebp),%eax
0866e53a +0x158:  mov    %eax,(%esp)
0866e53d +0x15b:  call   085bfd76 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12d4>  ; global constructors keyed to CParty::cMember::cMember()+0x12d4
0866e542 +0x160:  mov    %eax,%ecx
0866e544 +0x162:  mov    -0x18(%ebp),%edx
0866e547 +0x165:  mov    0x8(%ebp),%eax
0866e54a +0x168:  mov    %ecx,0x8(%esp)
0866e54e +0x16c:  mov    %edx,0x4(%esp)
0866e552 +0x170:  mov    %eax,(%esp)
0866e555 +0x173:  call   0868e1f6 <_ZN15CUserCharacInfo18setPremiumBonusExpEji>  ; CUserCharacInfo::setPremiumBonusExp(unsigned int, int)
0866e55a +0x178:  mov    %eax,-0x14(%ebp)
0866e55d +0x17b:  lea    -0x28(%ebp),%eax
0866e560 +0x17e:  mov    %eax,(%esp)
0866e563 +0x181:  call   085bed52 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x2b0>  ; global constructors keyed to CParty::cMember::cMember()+0x2b0
0866e568 +0x186:  movl   $0x0,-0x10(%ebp)
0866e56f +0x18d:  lea    -0x2c(%ebp),%eax
0866e572 +0x190:  mov    0x8(%ebp),%edx
0866e575 +0x193:  mov    %edx,0x4(%esp)
0866e579 +0x197:  mov    %eax,(%esp)
0866e57c +0x19a:  call   0868dc64 <_ZN5CUser27get_growth_power_exp_rewardEv>  ; CUser::get_growth_power_exp_reward()
0866e581 +0x19f:  sub    $0x4,%esp
0866e584 +0x1a2:  mov    -0x2c(%ebp),%eax
0866e587 +0x1a5:  mov    %eax,-0x28(%ebp)
0866e58a +0x1a8:  movzbl -0x25(%ebp),%eax
0866e58e +0x1ac:  movzbl %al,%eax
0866e591 +0x1af:  mov    %ax,-0x2e(%ebp)
0866e595 +0x1b3:  filds  -0x2e(%ebp)
0866e598 +0x1b6:  flds   ""
0866e59e +0x1bc:  fdivrp %st,%st(1)
0866e5a0 +0x1be:  fstps  -0xc(%ebp)
0866e5a3 +0x1c1:  fildl  -0x18(%ebp)
0866e5a6 +0x1c4:  fmuls  -0xc(%ebp)
0866e5a9 +0x1c7:  fnstcw -0x30(%ebp)
0866e5ac +0x1ca:  movzwl -0x30(%ebp),%eax
0866e5b0 +0x1ce:  mov    $0xc,%ah
0866e5b2 +0x1d0:  mov    %ax,-0x32(%ebp)
0866e5b6 +0x1d4:  fldcw  -0x32(%ebp)
0866e5b9 +0x1d7:  fistpl -0x10(%ebp)
0866e5bc +0x1da:  fldcw  -0x30(%ebp)
0866e5bf +0x1dd:  mov    0x8(%ebp),%eax
0866e5c2 +0x1e0:  mov    -0x10(%ebp),%edx
0866e5c5 +0x1e3:  mov    %edx,0x4(%esp)
0866e5c9 +0x1e7:  mov    %eax,(%esp)
0866e5cc +0x1ea:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
0866e5d1 +0x1ef:  mov    -0x14(%ebp),%eax
0866e5d4 +0x1f2:  add    %eax,-0x18(%ebp)
0866e5d7 +0x1f5:  mov    -0x10(%ebp),%eax
0866e5da +0x1f8:  add    %eax,-0x18(%ebp)
0866e5dd +0x1fb:  mov    -0x18(%ebp),%eax
0866e5e0 +0x1fe:  mov    -0x4(%ebp),%ebx
0866e5e3 +0x201:  leave
0866e5e4 +0x202:  ret
0866e5e5 +0x203:  nop
```

## 反编译 C

```c
// CUser::compute_quest_basic_reward_exp @ 0x866e3e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::compute_quest_basic_reward_exp(Quest*) */

int __thiscall CUser::compute_quest_basic_reward_exp(CUser *this,Quest *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint local_30;
  STExpReward local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float local_10;
  
  if (*(int *)(param_1 + 8) == 4) {
    local_14 = 0;
  }
  else {
    local_28 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    local_28 = local_28 - *(int *)(param_1 + 0x20);
    local_24 = 100;
    if (param_1[0x130] != (Quest)0x1) {
      local_24 = compute_level_penalty(this,local_28);
    }
    cVar1 = G_CDataManager();
    local_20 = QuestParameterScript::getRewardWeight(cVar1 + -0x38);
    local_1c = 0;
    if ((param_1[0x101] == (Quest)0x0) && (param_1[0x130] == (Quest)0x0)) {
      iVar2 = *(int *)(param_1 + 0x20);
      iVar3 = G_CDataManager();
      local_1c = QuestParameterScript::getRewardExp((QuestParameterScript *)(iVar3 + 0x8cc8),iVar2);
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      iVar3 = G_CDataManager();
      local_1c = QuestParameterScript::getRewardExp((QuestParameterScript *)(iVar3 + 0x8cc8),iVar2);
    }
    local_1c = (((local_1c * local_20) / 100) * local_24) / 100;
    local_18 = 0;
    cVar1 = isAffectedPremium(this,0x4f);
    if (cVar1 != '\0') {
      getAddExpRateFromPremium(this,0x4f);
      local_18 = CUserCharacInfo::setPremiumBonusExp((uint)this,local_1c);
    }
    STExpReward::STExpReward(local_2c);
    local_14 = 0;
    get_growth_power_exp_reward();
    local_10 = (float)(local_30 >> 0x18) / _DAT_08cf3954;
    local_14 = (int)ROUND((float)local_1c * local_10);
    CUserCharacInfo::set_charac_seria_buf_bonus_exp((CUserCharacInfo *)this,local_14);
    local_14 = local_1c + local_18 + local_14;
  }
  return local_14;
}
```
