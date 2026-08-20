# MakeMissionList_forOldUser

`_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser`

`CMissionList_Charac::MakeMissionList_forOldUser(CUser const&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4e4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4e4c  _ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser
#           CMissionList_Charac::MakeMissionList_forOldUser(CUser const&)
# range [0x085e4e4c, 0x085e4fb9]
085e4e4c +0x000:  push   %ebp
085e4e4d +0x001:  mov    %esp,%ebp
085e4e4f +0x003:  sub    $0x38,%esp
085e4e52 +0x006:  movl   $0x1,-0x10(%ebp)
085e4e59 +0x00d:  jmp    085e4fa8 <+0x15c>
085e4e5e +0x012:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e4e63 +0x017:  mov    -0x10(%ebp),%edx
085e4e66 +0x01a:  mov    %edx,0x4(%esp)
085e4e6a +0x01e:  mov    %eax,(%esp)
085e4e6d +0x021:  call   0835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>  ; CDataManager::get_kind_mission_list(int) const
085e4e72 +0x026:  mov    %eax,-0xc(%ebp)
085e4e75 +0x029:  mov    -0xc(%ebp),%eax
085e4e78 +0x02c:  mov    %eax,(%esp)
085e4e7b +0x02f:  call   085e80c2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x184a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x184a
085e4e80 +0x034:  test   %al,%al
085e4e82 +0x036:  jne    085e4fa0 <+0x154>
085e4e88 +0x03c:  lea    -0x1c(%ebp),%eax
085e4e8b +0x03f:  mov    %eax,(%esp)
085e4e8e +0x042:  call   0832aede <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x7b>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x7b
085e4e93 +0x047:  lea    -0x20(%ebp),%eax
085e4e96 +0x04a:  mov    -0xc(%ebp),%edx
085e4e99 +0x04d:  mov    %edx,0x4(%esp)
085e4e9d +0x051:  mov    %eax,(%esp)
085e4ea0 +0x054:  call   085e7f62 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16ea>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16ea
085e4ea5 +0x059:  sub    $0x4,%esp
085e4ea8 +0x05c:  lea    -0x20(%ebp),%eax
085e4eab +0x05f:  mov    %eax,(%esp)
085e4eae +0x062:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4eb3 +0x067:  mov    (%eax),%eax
085e4eb5 +0x069:  mov    %eax,(%esp)
085e4eb8 +0x06c:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e4ebd +0x071:  mov    %eax,0x4(%esp)
085e4ec1 +0x075:  mov    0x8(%ebp),%eax
085e4ec4 +0x078:  mov    %eax,(%esp)
085e4ec7 +0x07b:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e4ecc +0x080:  test   %ax,%ax
085e4ecf +0x083:  setne  %al
085e4ed2 +0x086:  test   %al,%al
085e4ed4 +0x088:  jne    085e4fa3 <+0x157>
085e4eda +0x08e:  lea    -0x20(%ebp),%eax
085e4edd +0x091:  mov    %eax,(%esp)
085e4ee0 +0x094:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4ee5 +0x099:  mov    (%eax),%eax
085e4ee7 +0x09b:  mov    %eax,(%esp)
085e4eea +0x09e:  call   085e6944 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcc
085e4eef +0x0a3:  cmp    $0x2,%eax
085e4ef2 +0x0a6:  sete   %al
085e4ef5 +0x0a9:  test   %al,%al
085e4ef7 +0x0ab:  je     085e4f6f <+0x123>
085e4ef9 +0x0ad:  jmp    085e4fa4 <+0x158>
085e4efe +0x0b2:  lea    -0x20(%ebp),%eax
085e4f01 +0x0b5:  mov    %eax,(%esp)
085e4f04 +0x0b8:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4f09 +0x0bd:  mov    (%eax),%eax
085e4f0b +0x0bf:  mov    0xc(%ebp),%edx
085e4f0e +0x0c2:  mov    %edx,0x4(%esp)
085e4f12 +0x0c6:  mov    %eax,(%esp)
085e4f15 +0x0c9:  call   085e318e <_ZNK8CMission17isAcceptConditionERK5CUser>  ; CMission::isAcceptCondition(CUser const&) const
085e4f1a +0x0ce:  test   %al,%al
085e4f1c +0x0d0:  je     085e4f64 <+0x118>
085e4f1e +0x0d2:  lea    -0x20(%ebp),%eax
085e4f21 +0x0d5:  mov    %eax,(%esp)
085e4f24 +0x0d8:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4f29 +0x0dd:  mov    (%eax),%eax
085e4f2b +0x0df:  mov    (%eax),%edx
085e4f2d +0x0e1:  add    $0x20,%edx
085e4f30 +0x0e4:  mov    (%edx),%ecx
085e4f32 +0x0e6:  mov    0xc(%ebp),%edx
085e4f35 +0x0e9:  mov    %edx,0x8(%esp)
085e4f39 +0x0ed:  lea    -0x1c(%ebp),%edx
085e4f3c +0x0f0:  mov    %edx,0x4(%esp)
085e4f40 +0x0f4:  mov    %eax,(%esp)
085e4f43 +0x0f7:  call   *%ecx
085e4f45 +0x0f9:  lea    -0x1c(%ebp),%eax
085e4f48 +0x0fc:  mov    %eax,0x4(%esp)
085e4f4c +0x100:  mov    0x8(%ebp),%eax
085e4f4f +0x103:  mov    %eax,(%esp)
085e4f52 +0x106:  call   085e4c6c <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo>  ; CMissionList_Charac::addNewMission(MissionInfo const&)
085e4f57 +0x10b:  mov    0x8(%ebp),%eax
085e4f5a +0x10e:  mov    %eax,(%esp)
085e4f5d +0x111:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e4f62 +0x116:  jmp    085e4fa4 <+0x158>
085e4f64 +0x118:  lea    -0x20(%ebp),%eax
085e4f67 +0x11b:  mov    %eax,(%esp)
085e4f6a +0x11e:  call   085e7fc0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1748>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1748
085e4f6f +0x123:  lea    -0x14(%ebp),%eax
085e4f72 +0x126:  mov    -0xc(%ebp),%edx
085e4f75 +0x129:  mov    %edx,0x4(%esp)
085e4f79 +0x12d:  mov    %eax,(%esp)
085e4f7c +0x130:  call   085e7f88 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1710>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1710
085e4f81 +0x135:  sub    $0x4,%esp
085e4f84 +0x138:  lea    -0x14(%ebp),%eax
085e4f87 +0x13b:  mov    %eax,0x4(%esp)
085e4f8b +0x13f:  lea    -0x20(%ebp),%eax
085e4f8e +0x142:  mov    %eax,(%esp)
085e4f91 +0x145:  call   085e7fac <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1734>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1734
085e4f96 +0x14a:  test   %al,%al
085e4f98 +0x14c:  jne    085e4efe <+0xb2>
085e4f9e +0x152:  jmp    085e4fa4 <+0x158>
085e4fa0 +0x154:  nop
085e4fa1 +0x155:  jmp    085e4fa4 <+0x158>
085e4fa3 +0x157:  nop
085e4fa4 +0x158:  addl   $0x1,-0x10(%ebp)
085e4fa8 +0x15c:  cmpl   $0x23,-0x10(%ebp)
085e4fac +0x160:  setle  %al
085e4faf +0x163:  test   %al,%al
085e4fb1 +0x165:  jne    085e4e5e <+0x12>
085e4fb7 +0x16b:  leave
085e4fb8 +0x16c:  ret
085e4fb9 +0x16d:  nop
```

## 反编译 C

```c
// CMissionList_Charac::MakeMissionList_forOldUser @ 0x85e4e4c

/* CMissionList_Charac::MakeMissionList_forOldUser(CUser const&) */

void __thiscall
CMissionList_Charac::MakeMissionList_forOldUser(CMissionList_Charac *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  CDataManager *this_00;
  undefined4 *puVar3;
  int iVar4;
  _List_const_iterator<CMission*> local_24 [4];
  MissionInfo local_20 [8];
  _List_const_iterator local_18 [4];
  int local_14;
  list<CMission*,std::allocator<CMission*>> *local_10;
  
  local_14 = 1;
  do {
    if (0x23 < local_14) {
      return;
    }
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (list<CMission*,std::allocator<CMission*>> *)
               CDataManager::get_kind_mission_list(this_00,local_14);
    cVar1 = std::list<CMission*,std::allocator<CMission*>>::empty(local_10);
    if (cVar1 == '\0') {
      MissionInfo::MissionInfo(local_20);
      std::list<CMission*,std::allocator<CMission*>>::begin();
      puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
      iVar4 = CMission::GetMissionKind((CMission *)*puVar3);
      sVar2 = getIndex_byKind(this,iVar4);
      if (sVar2 == 0) {
        puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
        iVar4 = CMission::GetMissionGrade((CMission *)*puVar3);
        if (iVar4 != 2) {
          while( true ) {
            std::list<CMission*,std::allocator<CMission*>>::end();
            cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_24,local_18);
            if (cVar1 == '\0') break;
            puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
            cVar1 = CMission::isAcceptCondition((CMission *)*puVar3,param_1);
            if (cVar1 != '\0') {
              puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
              (**(code **)(*(int *)*puVar3 + 0x20))((int *)*puVar3,local_20,param_1);
              addNewMission(this,local_20);
              charac_expand::CData::alter((CData *)this);
              break;
            }
            std::_List_const_iterator<CMission*>::operator++(local_24);
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
