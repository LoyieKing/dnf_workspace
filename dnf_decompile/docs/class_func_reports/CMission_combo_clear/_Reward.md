# _Reward

`_ZNK20CMission_combo_clear7_RewardER5CUser`

`CMission_combo_clear::_Reward(CUser&) const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e4134` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4134  _ZNK20CMission_combo_clear7_RewardER5CUser
#           CMission_combo_clear::_Reward(CUser&) const
# range [0x085e4134, 0x085e42ef]
085e4134 +0x000:  push   %ebp
085e4135 +0x001:  mov    %esp,%ebp
085e4137 +0x003:  push   %esi
085e4138 +0x004:  push   %ebx
085e4139 +0x005:  sub    $0x50,%esp
085e413c +0x008:  lea    -0x14(%ebp),%eax
085e413f +0x00b:  mov    %eax,(%esp)
085e4142 +0x00e:  call   085e68de <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x66>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x66
085e4147 +0x013:  mov    0xc(%ebp),%eax
085e414a +0x016:  mov    %eax,(%esp)
085e414d +0x019:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085e4152 +0x01e:  mov    %al,-0x14(%ebp)
085e4155 +0x021:  mov    0xc(%ebp),%eax
085e4158 +0x024:  mov    %eax,(%esp)
085e415b +0x027:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
085e4160 +0x02c:  cbtw
085e4162 +0x02e:  mov    %ax,-0x12(%ebp)
085e4166 +0x032:  mov    0x8(%ebp),%eax
085e4169 +0x035:  lea    0x40(%eax),%ecx
085e416c +0x038:  lea    -0x18(%ebp),%eax
085e416f +0x03b:  lea    -0x14(%ebp),%edx
085e4172 +0x03e:  mov    %edx,0x8(%esp)
085e4176 +0x042:  mov    %ecx,0x4(%esp)
085e417a +0x046:  mov    %eax,(%esp)
085e417d +0x049:  call   085e7fe2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x176a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x176a
085e4182 +0x04e:  sub    $0x4,%esp
085e4185 +0x051:  mov    0x8(%ebp),%eax
085e4188 +0x054:  lea    0x40(%eax),%edx
085e418b +0x057:  lea    -0x10(%ebp),%eax
085e418e +0x05a:  mov    %edx,0x4(%esp)
085e4192 +0x05e:  mov    %eax,(%esp)
085e4195 +0x061:  call   085e800e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1796>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1796
085e419a +0x066:  sub    $0x4,%esp
085e419d +0x069:  lea    -0x18(%ebp),%eax
085e41a0 +0x06c:  mov    %eax,0x4(%esp)
085e41a4 +0x070:  lea    -0x10(%ebp),%eax
085e41a7 +0x073:  mov    %eax,(%esp)
085e41aa +0x076:  call   085e8034 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17bc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17bc
085e41af +0x07b:  test   %al,%al
085e41b1 +0x07d:  je     085e42e1 <+0x1ad>
085e41b7 +0x083:  lea    -0x24(%ebp),%eax
085e41ba +0x086:  mov    %eax,(%esp)
085e41bd +0x089:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
085e41c2 +0x08e:  lea    -0x18(%ebp),%eax
085e41c5 +0x091:  mov    %eax,(%esp)
085e41c8 +0x094:  call   085e8048 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17d0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17d0
085e41cd +0x099:  add    $0x10,%eax
085e41d0 +0x09c:  mov    %eax,0x4(%esp)
085e41d4 +0x0a0:  lea    -0x24(%ebp),%eax
085e41d7 +0x0a3:  mov    %eax,(%esp)
085e41da +0x0a6:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
085e41df +0x0ab:  lea    -0x30(%ebp),%eax
085e41e2 +0x0ae:  mov    %eax,(%esp)
085e41e5 +0x0b1:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e41ea +0x0b6:  movl   $0x0,-0xc(%ebp)
085e41f1 +0x0bd:  mov    0xc(%ebp),%eax
085e41f4 +0x0c0:  mov    %eax,(%esp)
085e41f7 +0x0c3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085e41fc +0x0c8:  movl   $"game_server_msg_174",0x1c(%esp)
085e4204 +0x0d0:  movl   $"game_server_msg_173",0x18(%esp)
085e420c +0x0d8:  movl   $0x1,0x14(%esp)
085e4214 +0x0e0:  movl   $0x33,0x10(%esp)
085e421c +0x0e8:  movl   $0x1e,0xc(%esp)
085e4224 +0x0f0:  lea    -0x30(%ebp),%edx
085e4227 +0x0f3:  mov    %edx,0x8(%esp)
085e422b +0x0f7:  lea    -0x24(%ebp),%edx
085e422e +0x0fa:  mov    %edx,0x4(%esp)
085e4232 +0x0fe:  mov    %eax,(%esp)
085e4235 +0x101:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
085e423a +0x106:  mov    %eax,-0xc(%ebp)
085e423d +0x109:  cmpl   $0x0,-0xc(%ebp)
085e4241 +0x10d:  jle    085e425a <+0x126>
085e4243 +0x10f:  lea    -0x30(%ebp),%eax
085e4246 +0x112:  mov    %eax,(%esp)
085e4249 +0x115:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085e424e +0x11a:  cmp    $0x2,%eax
085e4251 +0x11d:  jbe    085e425a <+0x126>
085e4253 +0x11f:  mov    $0x1,%eax
085e4258 +0x124:  jmp    085e425f <+0x12b>
085e425a +0x126:  mov    $0x0,%eax
085e425f +0x12b:  test   %al,%al
085e4261 +0x12d:  je     085e42ae <+0x17a>
085e4263 +0x12f:  movl   $0x0,0x4(%esp)
085e426b +0x137:  lea    -0x30(%ebp),%eax
085e426e +0x13a:  mov    %eax,(%esp)
085e4271 +0x13d:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085e4276 +0x142:  mov    (%eax),%eax
085e4278 +0x144:  mov    %eax,0xc(%esp)
085e427c +0x148:  movl   $0x0,0x8(%esp)
085e4284 +0x150:  movl   $0x1,0x4(%esp)
085e428c +0x158:  mov    0xc(%ebp),%eax
085e428f +0x15b:  mov    %eax,(%esp)
085e4292 +0x15e:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085e4297 +0x163:  jmp    085e42ae <+0x17a>
085e4299 +0x165:  mov    %edx,%ebx
085e429b +0x167:  mov    %eax,%esi
085e429d +0x169:  lea    -0x30(%ebp),%eax
085e42a0 +0x16c:  mov    %eax,(%esp)
085e42a3 +0x16f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e42a8 +0x174:  mov    %esi,%eax
085e42aa +0x176:  mov    %ebx,%edx
085e42ac +0x178:  jmp    085e42bb <+0x187>
085e42ae +0x17a:  lea    -0x30(%ebp),%eax
085e42b1 +0x17d:  mov    %eax,(%esp)
085e42b4 +0x180:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e42b9 +0x185:  jmp    085e42d6 <+0x1a2>
085e42bb +0x187:  mov    %edx,%ebx
085e42bd +0x189:  mov    %eax,%esi
085e42bf +0x18b:  lea    -0x24(%ebp),%eax
085e42c2 +0x18e:  mov    %eax,(%esp)
085e42c5 +0x191:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085e42ca +0x196:  mov    %esi,%eax
085e42cc +0x198:  mov    %ebx,%edx
085e42ce +0x19a:  mov    %eax,(%esp)
085e42d1 +0x19d:  call   08ae3750 <_Unwind_Resume>
085e42d6 +0x1a2:  lea    -0x24(%ebp),%eax
085e42d9 +0x1a5:  mov    %eax,(%esp)
085e42dc +0x1a8:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085e42e1 +0x1ad:  mov    $0x1,%eax
085e42e6 +0x1b2:  lea    -0x8(%ebp),%esp
085e42e9 +0x1b5:  add    $0x0,%esp
085e42ec +0x1b8:  pop    %ebx
085e42ed +0x1b9:  pop    %esi
085e42ee +0x1ba:  pop    %ebp
085e42ef +0x1bb:  ret
```

## 反编译 C

```c
// CMission_combo_clear::_Reward @ 0x85e4134

/* CMission_combo_clear::_Reward(CUser&) const */

undefined4 __thiscall CMission_combo_clear::_Reward(CMission_combo_clear *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  vector<int,std::allocator<int>> local_34 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [12];
  combo_script_key local_1c [4];
  combo_script_key local_18 [2];
  short local_16;
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  local_14 [4];
  int local_10;
  
  combo_script_key::combo_script_key(local_18);
  local_18[0] = (combo_script_key)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  local_16 = (short)cVar2;
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::find(local_1c);
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
          operator!=((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>> *
                     )local_14,(_Rb_tree_const_iterator *)local_1c);
  if (cVar2 != '\0') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_28);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
            operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                        *)local_1c);
                    /* try { // try from 085e41da to 085e41e9 has its CatchHandler @ 085e42bb */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              (local_28,(pair *)(iVar3 + 0x10));
    std::vector<int,std::allocator<int>>::vector(local_34);
    local_10 = 0;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 085e4235 to 085e4296 has its CatchHandler @ 085e4299 */
    local_10 = CInventory::insert_event_items
                         (pCVar4,local_28,local_34,0x1e,0x33,1,"game_server_msg_173",
                          "game_server_msg_174");
    if ((local_10 < 1) || (uVar5 = std::vector<int,std::allocator<int>>::size(local_34), uVar5 < 3))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_34,0);
      CUser::SendUpdateItem(param_1,1,0,*puVar6);
    }
                    /* try { // try from 085e42b4 to 085e42b8 has its CatchHandler @ 085e42bb */
    std::vector<int,std::allocator<int>>::~vector(local_34);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_28);
    return 1;
  }
  return 1;
}
```
