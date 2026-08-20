# Reward

`_ZNK8CMission6RewardER5CUser`

`CMission::Reward(CUser&) const`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e32da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e32da  _ZNK8CMission6RewardER5CUser
#           CMission::Reward(CUser&) const
# range [0x085e32da, 0x085e348b]
085e32da +0x000:  push   %ebp
085e32db +0x001:  mov    %esp,%ebp
085e32dd +0x003:  push   %esi
085e32de +0x004:  push   %ebx
085e32df +0x005:  sub    $0x50,%esp
085e32e2 +0x008:  mov    0x8(%ebp),%eax
085e32e5 +0x00b:  mov    0x18(%eax),%eax
085e32e8 +0x00e:  movzwl %ax,%ebx
085e32eb +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e32f0 +0x016:  mov    %ebx,0x4(%esp)
085e32f4 +0x01a:  mov    %eax,(%esp)
085e32f7 +0x01d:  call   0835fb12 <_ZNK12CDataManager25get_BaseMissionExp_byRankEt>  ; CDataManager::get_BaseMissionExp_byRank(unsigned short) const
085e32fc +0x022:  mov    $0x0,%edx
085e3301 +0x027:  mov    %eax,-0x30(%ebp)
085e3304 +0x02a:  mov    %edx,-0x2c(%ebp)
085e3307 +0x02d:  fildll -0x30(%ebp)
085e330a +0x030:  mov    0x8(%ebp),%eax
085e330d +0x033:  flds   0x2c(%eax)
085e3310 +0x036:  fmulp  %st,%st(1)
085e3312 +0x038:  fnstcw -0x32(%ebp)
085e3315 +0x03b:  movzwl -0x32(%ebp),%eax
085e3319 +0x03f:  mov    $0xc,%ah
085e331b +0x041:  mov    %ax,-0x34(%ebp)
085e331f +0x045:  fldcw  -0x34(%ebp)
085e3322 +0x048:  fistpl -0x10(%ebp)
085e3325 +0x04b:  fldcw  -0x32(%ebp)
085e3328 +0x04e:  mov    0x8(%ebp),%eax
085e332b +0x051:  mov    %eax,(%esp)
085e332e +0x054:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e3333 +0x059:  mov    %eax,%esi
085e3335 +0x05b:  mov    0x8(%ebp),%eax
085e3338 +0x05e:  mov    %eax,(%esp)
085e333b +0x061:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e3340 +0x066:  mov    %eax,%ebx
085e3342 +0x068:  mov    0xc(%ebp),%eax
085e3345 +0x06b:  mov    %eax,(%esp)
085e3348 +0x06e:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
085e334d +0x073:  mov    0x8(%eax),%eax
085e3350 +0x076:  mov    0xc(%ebp),%edx
085e3353 +0x079:  lea    0x79700(%edx),%ecx
085e3359 +0x07f:  mov    %esi,0x10(%esp)
085e335d +0x083:  mov    %ebx,0xc(%esp)
085e3361 +0x087:  mov    -0x10(%ebp),%edx
085e3364 +0x08a:  mov    %edx,0x8(%esp)
085e3368 +0x08e:  mov    %eax,0x4(%esp)
085e336c +0x092:  mov    %ecx,(%esp)
085e336f +0x095:  call   08686a4e <_ZN15cUserHistoryLog21pvpMissionClearRewardEiiii>  ; cUserHistoryLog::pvpMissionClearReward(int, int, int, int)
085e3374 +0x09a:  mov    0xc(%ebp),%eax
085e3377 +0x09d:  mov    %eax,(%esp)
085e337a +0x0a0:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
085e337f +0x0a5:  mov    0x8(%eax),%edx
085e3382 +0x0a8:  add    -0x10(%ebp),%edx
085e3385 +0x0ab:  mov    %edx,0x8(%eax)
085e3388 +0x0ae:  lea    -0x1c(%ebp),%eax
085e338b +0x0b1:  mov    %eax,(%esp)
085e338e +0x0b4:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e3393 +0x0b9:  movl   $0x0,-0xc(%ebp)
085e339a +0x0c0:  mov    0x8(%ebp),%eax
085e339d +0x0c3:  lea    0x30(%eax),%ebx
085e33a0 +0x0c6:  mov    0xc(%ebp),%eax
085e33a3 +0x0c9:  mov    %eax,(%esp)
085e33a6 +0x0cc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085e33ab +0x0d1:  movl   $"game_server_msg_174",0x1c(%esp)
085e33b3 +0x0d9:  movl   $"game_server_msg_173",0x18(%esp)
085e33bb +0x0e1:  movl   $0x1,0x14(%esp)
085e33c3 +0x0e9:  movl   $0x33,0x10(%esp)
085e33cb +0x0f1:  movl   $0x1e,0xc(%esp)
085e33d3 +0x0f9:  lea    -0x1c(%ebp),%edx
085e33d6 +0x0fc:  mov    %edx,0x8(%esp)
085e33da +0x100:  mov    %ebx,0x4(%esp)
085e33de +0x104:  mov    %eax,(%esp)
085e33e1 +0x107:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
085e33e6 +0x10c:  mov    %eax,-0xc(%ebp)
085e33e9 +0x10f:  cmpl   $0x0,-0xc(%ebp)
085e33ed +0x113:  jle    085e3406 <+0x12c>
085e33ef +0x115:  lea    -0x1c(%ebp),%eax
085e33f2 +0x118:  mov    %eax,(%esp)
085e33f5 +0x11b:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085e33fa +0x120:  cmp    $0x2,%eax
085e33fd +0x123:  jbe    085e3406 <+0x12c>
085e33ff +0x125:  mov    $0x1,%eax
085e3404 +0x12a:  jmp    085e340b <+0x131>
085e3406 +0x12c:  mov    $0x0,%eax
085e340b +0x131:  test   %al,%al
085e340d +0x133:  je     085e3443 <+0x169>
085e340f +0x135:  movl   $0x0,0x4(%esp)
085e3417 +0x13d:  lea    -0x1c(%ebp),%eax
085e341a +0x140:  mov    %eax,(%esp)
085e341d +0x143:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085e3422 +0x148:  mov    (%eax),%eax
085e3424 +0x14a:  mov    %eax,0xc(%esp)
085e3428 +0x14e:  movl   $0x0,0x8(%esp)
085e3430 +0x156:  movl   $0x1,0x4(%esp)
085e3438 +0x15e:  mov    0xc(%ebp),%eax
085e343b +0x161:  mov    %eax,(%esp)
085e343e +0x164:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085e3443 +0x169:  mov    0x8(%ebp),%eax
085e3446 +0x16c:  mov    (%eax),%eax
085e3448 +0x16e:  add    $0x30,%eax
085e344b +0x171:  mov    (%eax),%edx
085e344d +0x173:  mov    0xc(%ebp),%eax
085e3450 +0x176:  mov    %eax,0x4(%esp)
085e3454 +0x17a:  mov    0x8(%ebp),%eax
085e3457 +0x17d:  mov    %eax,(%esp)
085e345a +0x180:  call   *%edx
085e345c +0x182:  mov    $0x1,%ebx
085e3461 +0x187:  lea    -0x1c(%ebp),%eax
085e3464 +0x18a:  mov    %eax,(%esp)
085e3467 +0x18d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e346c +0x192:  mov    %ebx,%eax
085e346e +0x194:  add    $0x50,%esp
085e3471 +0x197:  pop    %ebx
085e3472 +0x198:  pop    %esi
085e3473 +0x199:  pop    %ebp
085e3474 +0x19a:  ret
085e3475 +0x19b:  mov    %edx,%ebx
085e3477 +0x19d:  mov    %eax,%esi
085e3479 +0x19f:  lea    -0x1c(%ebp),%eax
085e347c +0x1a2:  mov    %eax,(%esp)
085e347f +0x1a5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e3484 +0x1aa:  mov    %esi,%eax
085e3486 +0x1ac:  mov    %ebx,%edx
085e3488 +0x1ae:  mov    %eax,(%esp)
085e348b +0x1b1:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CMission::Reward @ 0x85e32da

/* CMission::Reward(CUser&) const */

undefined4 __thiscall CMission::Reward(CMission *this,CUser *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  CDataManager *this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 *puVar8;
  vector<int,std::allocator<int>> local_20 [12];
  int local_14;
  int local_10;
  
  uVar1 = *(undefined4 *)(this + 0x18);
  this_00 = (CDataManager *)G_CDataManager();
  uVar3 = CDataManager::get_BaseMissionExp_byRank(this_00,(ushort)uVar1);
  local_14 = (int)ROUND(*(float *)(this + 0x2c) * (float)uVar3);
  iVar4 = GetMissionIndex(this);
  iVar5 = GetMissionKind(this);
  iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
  cUserHistoryLog::pvpMissionClearReward
            ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(iVar6 + 8),local_14,iVar5,iVar4);
  iVar4 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + local_14;
  std::vector<int,std::allocator<int>>::vector(local_20);
  local_10 = 0;
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 085e33e1 to 085e345b has its CatchHandler @ 085e3475 */
  local_10 = CInventory::insert_event_items
                       (pCVar7,this + 0x30,local_20,0x1e,0x33,1,"game_server_msg_173",
                        "game_server_msg_174");
  if (0 < local_10) {
    uVar3 = std::vector<int,std::allocator<int>>::size(local_20);
    if (2 < uVar3) {
      bVar2 = true;
      goto LAB_085e340b;
    }
  }
  bVar2 = false;
LAB_085e340b:
  if (bVar2) {
    puVar8 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_20,0);
    CUser::SendUpdateItem(param_1,1,0,*puVar8);
  }
  (**(code **)(*(int *)this + 0x30))(this,param_1);
  std::vector<int,std::allocator<int>>::~vector(local_20);
  return 1;
}
```
