# _makeTotalMissionInfo

`_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser`

`CMission_combo_clear::_makeTotalMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e439e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e439e  _ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser
#           CMission_combo_clear::_makeTotalMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e439e, 0x085e452d]
085e439e +0x000:  push   %ebp
085e439f +0x001:  mov    %esp,%ebp
085e43a1 +0x003:  push   %esi
085e43a2 +0x004:  push   %ebx
085e43a3 +0x005:  sub    $0x30,%esp
085e43a6 +0x008:  lea    -0x18(%ebp),%eax
085e43a9 +0x00b:  mov    %eax,(%esp)
085e43ac +0x00e:  call   085e68de <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x66>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x66
085e43b1 +0x013:  mov    0x10(%ebp),%eax
085e43b4 +0x016:  mov    %eax,(%esp)
085e43b7 +0x019:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085e43bc +0x01e:  mov    %al,-0x18(%ebp)
085e43bf +0x021:  mov    0x10(%ebp),%eax
085e43c2 +0x024:  mov    %eax,(%esp)
085e43c5 +0x027:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
085e43ca +0x02c:  cbtw
085e43cc +0x02e:  mov    %ax,-0x16(%ebp)
085e43d0 +0x032:  mov    0x8(%ebp),%eax
085e43d3 +0x035:  lea    0x40(%eax),%ecx
085e43d6 +0x038:  lea    -0x1c(%ebp),%eax
085e43d9 +0x03b:  lea    -0x18(%ebp),%edx
085e43dc +0x03e:  mov    %edx,0x8(%esp)
085e43e0 +0x042:  mov    %ecx,0x4(%esp)
085e43e4 +0x046:  mov    %eax,(%esp)
085e43e7 +0x049:  call   085e7fe2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x176a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x176a
085e43ec +0x04e:  sub    $0x4,%esp
085e43ef +0x051:  mov    0x8(%ebp),%eax
085e43f2 +0x054:  lea    0x40(%eax),%edx
085e43f5 +0x057:  lea    -0x14(%ebp),%eax
085e43f8 +0x05a:  mov    %edx,0x4(%esp)
085e43fc +0x05e:  mov    %eax,(%esp)
085e43ff +0x061:  call   085e800e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1796>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1796
085e4404 +0x066:  sub    $0x4,%esp
085e4407 +0x069:  lea    -0x1c(%ebp),%eax
085e440a +0x06c:  mov    %eax,0x4(%esp)
085e440e +0x070:  lea    -0x14(%ebp),%eax
085e4411 +0x073:  mov    %eax,(%esp)
085e4414 +0x076:  call   085e8034 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17bc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17bc
085e4419 +0x07b:  test   %al,%al
085e441b +0x07d:  je     085e4523 <+0x185>
085e4421 +0x083:  lea    -0x1c(%ebp),%eax
085e4424 +0x086:  mov    %eax,(%esp)
085e4427 +0x089:  call   085e8048 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17d0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17d0
085e442c +0x08e:  add    $0x4,%eax
085e442f +0x091:  mov    %eax,(%esp)
085e4432 +0x094:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085e4437 +0x099:  mov    %eax,-0x10(%ebp)
085e443a +0x09c:  movl   $0x0,-0xc(%ebp)
085e4441 +0x0a3:  jmp    085e4493 <+0xf5>
085e4443 +0x0a5:  mov    0xc(%ebp),%eax
085e4446 +0x0a8:  movzwl 0x4(%eax),%eax
085e444a +0x0ac:  cwtl
085e444b +0x0ad:  shl    $0x4,%eax
085e444e +0x0b0:  mov    %eax,%edx
085e4450 +0x0b2:  mov    0xc(%ebp),%eax
085e4453 +0x0b5:  mov    %dx,0x4(%eax)
085e4457 +0x0b9:  mov    0xc(%ebp),%eax
085e445a +0x0bc:  movzwl 0x4(%eax),%eax
085e445e +0x0c0:  mov    %eax,%esi
085e4460 +0x0c2:  mov    -0xc(%ebp),%ebx
085e4463 +0x0c5:  lea    -0x1c(%ebp),%eax
085e4466 +0x0c8:  mov    %eax,(%esp)
085e4469 +0x0cb:  call   085e8048 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17d0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17d0
085e446e +0x0d0:  add    $0x4,%eax
085e4471 +0x0d3:  mov    %ebx,0x4(%esp)
085e4475 +0x0d7:  mov    %eax,(%esp)
085e4478 +0x0da:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
085e447d +0x0df:  mov    0x4(%eax),%eax
085e4480 +0x0e2:  and    $0xf,%eax
085e4483 +0x0e5:  lea    (%esi,%eax,1),%eax
085e4486 +0x0e8:  mov    %eax,%edx
085e4488 +0x0ea:  mov    0xc(%ebp),%eax
085e448b +0x0ed:  mov    %dx,0x4(%eax)
085e448f +0x0f1:  addl   $0x1,-0xc(%ebp)
085e4493 +0x0f5:  cmpl   $0x3,-0xc(%ebp)
085e4497 +0x0f9:  jg     085e44a8 <+0x10a>
085e4499 +0x0fb:  mov    -0xc(%ebp),%eax
085e449c +0x0fe:  cmp    -0x10(%ebp),%eax
085e449f +0x101:  jge    085e44a8 <+0x10a>
085e44a1 +0x103:  mov    $0x1,%eax
085e44a6 +0x108:  jmp    085e44ad <+0x10f>
085e44a8 +0x10a:  mov    $0x0,%eax
085e44ad +0x10f:  test   %al,%al
085e44af +0x111:  jne    085e4443 <+0xa5>
085e44b1 +0x113:  cmpl   $0x4,-0x10(%ebp)
085e44b5 +0x117:  jle    085e4523 <+0x185>
085e44b7 +0x119:  movl   $0x4,-0xc(%ebp)
085e44be +0x120:  jmp    085e4518 <+0x17a>
085e44c0 +0x122:  mov    0xc(%ebp),%eax
085e44c3 +0x125:  movzwl 0x6(%eax),%eax
085e44c7 +0x129:  cwtl
085e44c8 +0x12a:  shl    $0x4,%eax
085e44cb +0x12d:  mov    %eax,%edx
085e44cd +0x12f:  mov    0xc(%ebp),%eax
085e44d0 +0x132:  mov    %dx,0x6(%eax)
085e44d4 +0x136:  mov    -0xc(%ebp),%eax
085e44d7 +0x139:  cmp    -0x10(%ebp),%eax
085e44da +0x13c:  jge    085e4514 <+0x176>
085e44dc +0x13e:  mov    0xc(%ebp),%eax
085e44df +0x141:  movzwl 0x6(%eax),%eax
085e44e3 +0x145:  mov    %eax,%esi
085e44e5 +0x147:  mov    -0xc(%ebp),%ebx
085e44e8 +0x14a:  lea    -0x1c(%ebp),%eax
085e44eb +0x14d:  mov    %eax,(%esp)
085e44ee +0x150:  call   085e8048 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x17d0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x17d0
085e44f3 +0x155:  add    $0x4,%eax
085e44f6 +0x158:  mov    %ebx,0x4(%esp)
085e44fa +0x15c:  mov    %eax,(%esp)
085e44fd +0x15f:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
085e4502 +0x164:  mov    0x4(%eax),%eax
085e4505 +0x167:  and    $0xf,%eax
085e4508 +0x16a:  lea    (%esi,%eax,1),%eax
085e450b +0x16d:  mov    %eax,%edx
085e450d +0x16f:  mov    0xc(%ebp),%eax
085e4510 +0x172:  mov    %dx,0x6(%eax)
085e4514 +0x176:  addl   $0x1,-0xc(%ebp)
085e4518 +0x17a:  cmpl   $0x7,-0xc(%ebp)
085e451c +0x17e:  setle  %al
085e451f +0x181:  test   %al,%al
085e4521 +0x183:  jne    085e44c0 <+0x122>
085e4523 +0x185:  lea    -0x8(%ebp),%esp
085e4526 +0x188:  add    $0x0,%esp
085e4529 +0x18b:  pop    %ebx
085e452a +0x18c:  pop    %esi
085e452b +0x18d:  pop    %ebp
085e452c +0x18e:  ret
085e452d +0x18f:  nop
```

## 反编译 C

```c
// CMission_combo_clear::_makeTotalMissionInfo @ 0x85e439e

/* CMission_combo_clear::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void __thiscall
CMission_combo_clear::_makeTotalMissionInfo
          (CMission_combo_clear *this,MissionInfo *param_1,CUser *param_2)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  combo_script_key local_20 [4];
  combo_script_key local_1c [2];
  short local_1a;
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  combo_script_key::combo_script_key(local_1c);
  local_1c[0] = (combo_script_key)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
  cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2);
  local_1a = (short)cVar4;
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::find(local_20);
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::end(local_18);
  cVar4 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
          operator!=((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>> *
                     )local_18,(_Rb_tree_const_iterator *)local_20);
  if (cVar4 != '\0') {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
            operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                        *)local_20);
    local_14 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                         ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                          (iVar5 + 4));
    local_10 = 0;
    while( true ) {
      uVar3 = local_10;
      if (((int)local_10 < 4) && ((int)local_10 < local_14)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) << 4;
      sVar1 = *(short *)(param_1 + 4);
      iVar5 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
              operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                          *)local_20);
      iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (iVar5 + 4),uVar3);
      *(ushort *)(param_1 + 4) = sVar1 + ((ushort)*(undefined4 *)(iVar5 + 4) & 0xf);
      local_10 = local_10 + 1;
    }
    if (4 < local_14) {
      for (local_10 = 4; uVar3 = local_10, (int)local_10 < 8; local_10 = local_10 + 1) {
        *(short *)(param_1 + 6) = *(short *)(param_1 + 6) << 4;
        if ((int)local_10 < local_14) {
          sVar1 = *(short *)(param_1 + 6);
          iVar5 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                                *)local_20);
          iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (iVar5 + 4),uVar3);
          *(ushort *)(param_1 + 6) = sVar1 + ((ushort)*(undefined4 *)(iVar5 + 4) & 0xf);
        }
      }
    }
  }
  return;
}
```
