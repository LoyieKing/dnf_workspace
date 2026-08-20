# init

`_ZN10QuickParty24CQuickPartyRewardManager4initEv`

`QuickParty::CQuickPartyRewardManager::init()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d6b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d6b0  _ZN10QuickParty24CQuickPartyRewardManager4initEv
#           QuickParty::CQuickPartyRewardManager::init()
# range [0x0826d6b0, 0x0826d85f]
0826d6b0 +0x000:  push   %ebp
0826d6b1 +0x001:  mov    %esp,%ebp
0826d6b3 +0x003:  push   %ebx
0826d6b4 +0x004:  sub    $0x24,%esp
0826d6b7 +0x007:  mov    0x8(%ebp),%eax
0826d6ba +0x00a:  mov    %eax,0x4(%esp)
0826d6be +0x00e:  movl   $"Etc/QuickParty.etc",(%esp)
0826d6c5 +0x015:  call   08a6e282 <_ZN10QuickParty22importQuickPartyScriptEPKcPNS_14QuickPartyDataE>  ; QuickParty::importQuickPartyScript(char const*, QuickParty::QuickPartyData*)
0826d6ca +0x01a:  xor    $0x1,%eax
0826d6cd +0x01d:  test   %al,%al
0826d6cf +0x01f:  je     0826d711 <+0x61>
0826d6d1 +0x021:  movl   $0x0,0xc(%esp)
0826d6d9 +0x029:  movl   $0x92,0x8(%esp)
0826d6e1 +0x031:  movl   $&_ZZN10QuickParty24CQuickPartyRewardManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0826d6e9 +0x039:  lea    -0x18(%ebp),%eax
0826d6ec +0x03c:  mov    %eax,(%esp)
0826d6ef +0x03f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826d6f4 +0x044:  movl   $"QUICK_PARTY_LOG : QuickParty.etc FILE LOAD FAIL!!",0x4(%esp)
0826d6fc +0x04c:  lea    -0x18(%ebp),%eax
0826d6ff +0x04f:  mov    %eax,(%esp)
0826d702 +0x052:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826d707 +0x057:  mov    $0x0,%eax
0826d70c +0x05c:  jmp    0826d859 <+0x1a9>
0826d711 +0x061:  movl   $0x8,(%esp)
0826d718 +0x068:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826d71d +0x06d:  mov    %eax,%ebx
0826d71f +0x06f:  mov    0x8(%ebp),%edx
0826d722 +0x072:  mov    %ebx,%eax
0826d724 +0x074:  mov    %edx,0x8(%esp)
0826d728 +0x078:  movl   $0xb,0x4(%esp)
0826d730 +0x080:  mov    %eax,(%esp)
0826d733 +0x083:  call   0826dc30 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x25c>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x25c
0826d738 +0x088:  mov    %ebx,%eax
0826d73a +0x08a:  mov    %eax,%edx
0826d73c +0x08c:  mov    0x8(%ebp),%eax
0826d73f +0x08f:  mov    %edx,0x1ec(%eax)
0826d745 +0x095:  movl   $0x8,(%esp)
0826d74c +0x09c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826d751 +0x0a1:  mov    %eax,%ebx
0826d753 +0x0a3:  mov    0x8(%ebp),%edx
0826d756 +0x0a6:  mov    %ebx,%eax
0826d758 +0x0a8:  mov    %edx,0x8(%esp)
0826d75c +0x0ac:  movl   $0xc,0x4(%esp)
0826d764 +0x0b4:  mov    %eax,(%esp)
0826d767 +0x0b7:  call   0826dc54 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x280>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x280
0826d76c +0x0bc:  mov    %ebx,%eax
0826d76e +0x0be:  mov    %eax,%edx
0826d770 +0x0c0:  mov    0x8(%ebp),%eax
0826d773 +0x0c3:  mov    %edx,0x1f0(%eax)
0826d779 +0x0c9:  movl   $0xc,(%esp)
0826d780 +0x0d0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826d785 +0x0d5:  mov    %eax,%ebx
0826d787 +0x0d7:  mov    0x8(%ebp),%edx
0826d78a +0x0da:  mov    %ebx,%eax
0826d78c +0x0dc:  mov    %edx,0x8(%esp)
0826d790 +0x0e0:  movl   $0x0,0x4(%esp)
0826d798 +0x0e8:  mov    %eax,(%esp)
0826d79b +0x0eb:  call   0826dca2 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x2ce>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x2ce
0826d7a0 +0x0f0:  mov    %ebx,%eax
0826d7a2 +0x0f2:  mov    %eax,%edx
0826d7a4 +0x0f4:  mov    0x8(%ebp),%eax
0826d7a7 +0x0f7:  mov    %edx,0x1f4(%eax)
0826d7ad +0x0fd:  movl   $0xc,(%esp)
0826d7b4 +0x104:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826d7b9 +0x109:  mov    %eax,%ebx
0826d7bb +0x10b:  mov    0x8(%ebp),%edx
0826d7be +0x10e:  mov    %ebx,%eax
0826d7c0 +0x110:  mov    %edx,0x8(%esp)
0826d7c4 +0x114:  movl   $0x3,0x4(%esp)
0826d7cc +0x11c:  mov    %eax,(%esp)
0826d7cf +0x11f:  call   0826dcce <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x2fa>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x2fa
0826d7d4 +0x124:  mov    %ebx,%eax
0826d7d6 +0x126:  mov    %eax,%edx
0826d7d8 +0x128:  mov    0x8(%ebp),%eax
0826d7db +0x12b:  mov    %edx,0x200(%eax)
0826d7e1 +0x131:  movl   $0xc,(%esp)
0826d7e8 +0x138:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826d7ed +0x13d:  mov    %eax,%ebx
0826d7ef +0x13f:  mov    0x8(%ebp),%edx
0826d7f2 +0x142:  mov    %ebx,%eax
0826d7f4 +0x144:  mov    %edx,0x8(%esp)
0826d7f8 +0x148:  movl   $0x9,0x4(%esp)
0826d800 +0x150:  mov    %eax,(%esp)
0826d803 +0x153:  call   0826dcfa <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x326>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x326
0826d808 +0x158:  mov    %ebx,%eax
0826d80a +0x15a:  mov    %eax,%edx
0826d80c +0x15c:  mov    0x8(%ebp),%eax
0826d80f +0x15f:  mov    %edx,0x218(%eax)
0826d815 +0x165:  movl   $0xc,(%esp)
0826d81c +0x16c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826d821 +0x171:  mov    %eax,%ebx
0826d823 +0x173:  mov    0x8(%ebp),%edx
0826d826 +0x176:  mov    %ebx,%eax
0826d828 +0x178:  mov    %edx,0x8(%esp)
0826d82c +0x17c:  movl   $0xa,0x4(%esp)
0826d834 +0x184:  mov    %eax,(%esp)
0826d837 +0x187:  call   0826dd26 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x352>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x352
0826d83c +0x18c:  mov    %ebx,%eax
0826d83e +0x18e:  mov    %eax,%edx
0826d840 +0x190:  mov    0x8(%ebp),%eax
0826d843 +0x193:  mov    %edx,0x21c(%eax)
0826d849 +0x199:  mov    0x8(%ebp),%eax
0826d84c +0x19c:  mov    %eax,(%esp)
0826d84f +0x19f:  call   0826d91a <_ZN10QuickParty24CQuickPartyRewardManager24set_rand_buff_total_probEv>  ; QuickParty::CQuickPartyRewardManager::set_rand_buff_total_prob()
0826d854 +0x1a4:  mov    $0x1,%eax
0826d859 +0x1a9:  add    $0x24,%esp
0826d85c +0x1ac:  pop    %ebx
0826d85d +0x1ad:  pop    %ebp
0826d85e +0x1ae:  ret
0826d85f +0x1af:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::init @ 0x826d6b0

/* QuickParty::CQuickPartyRewardManager::init() */

bool __thiscall QuickParty::CQuickPartyRewardManager::init(CQuickPartyRewardManager *this)

{
  char cVar1;
  RewardCardGold *pRVar2;
  HellPartyDifficulty *pHVar3;
  KillMonsterExp *pKVar4;
  EquipItemDropRate *pEVar5;
  CointLimitCount *pCVar6;
  ReturnAncientDungeonTicket *pRVar7;
  cMyTrace local_1c [20];
  
  cVar1 = importQuickPartyScript("Etc/QuickParty.etc",(QuickPartyData *)this);
  if (cVar1 == '\x01') {
    pRVar2 = operator_new(8);
    RewardCardGold::RewardCardGold(pRVar2,0xb,this);
    *(RewardCardGold **)(this + 0x1ec) = pRVar2;
    pHVar3 = operator_new(8);
    HellPartyDifficulty::HellPartyDifficulty(pHVar3,0xc,this);
    *(HellPartyDifficulty **)(this + 0x1f0) = pHVar3;
    pKVar4 = operator_new(0xc);
    KillMonsterExp::KillMonsterExp(pKVar4,0,this);
    *(KillMonsterExp **)(this + 500) = pKVar4;
    pEVar5 = operator_new(0xc);
    EquipItemDropRate::EquipItemDropRate(pEVar5,3,this);
    *(EquipItemDropRate **)(this + 0x200) = pEVar5;
    pCVar6 = operator_new(0xc);
    CointLimitCount::CointLimitCount(pCVar6,9,this);
    *(CointLimitCount **)(this + 0x218) = pCVar6;
    pRVar7 = operator_new(0xc);
    ReturnAncientDungeonTicket::ReturnAncientDungeonTicket(pRVar7,10,this);
    *(ReturnAncientDungeonTicket **)(this + 0x21c) = pRVar7;
    set_rand_buff_total_prob(this);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"bool QuickParty::CQuickPartyRewardManager::init()",0x92,0);
    cMyTrace::operator()(local_1c,"QUICK_PARTY_LOG : QuickParty.etc FILE LOAD FAIL!!");
  }
  return cVar1 == '\x01';
}
```
