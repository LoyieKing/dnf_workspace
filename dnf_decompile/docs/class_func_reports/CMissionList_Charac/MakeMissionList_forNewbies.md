# MakeMissionList_forNewbies

`_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser`

`CMissionList_Charac::MakeMissionList_forNewbies(CUser const&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4d14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4d14  _ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser
#           CMissionList_Charac::MakeMissionList_forNewbies(CUser const&)
# range [0x085e4d14, 0x085e4e4b]
085e4d14 +0x000:  push   %ebp
085e4d15 +0x001:  mov    %esp,%ebp
085e4d17 +0x003:  sub    $0x38,%esp
085e4d1a +0x006:  movl   $0x1,-0x10(%ebp)
085e4d21 +0x00d:  jmp    085e4e3b <+0x127>
085e4d26 +0x012:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e4d2b +0x017:  mov    -0x10(%ebp),%edx
085e4d2e +0x01a:  mov    %edx,0x4(%esp)
085e4d32 +0x01e:  mov    %eax,(%esp)
085e4d35 +0x021:  call   0835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>  ; CDataManager::get_kind_mission_list(int) const
085e4d3a +0x026:  mov    %eax,-0xc(%ebp)
085e4d3d +0x029:  mov    -0xc(%ebp),%eax
085e4d40 +0x02c:  mov    %eax,(%esp)
085e4d43 +0x02f:  call   085e80c2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x184a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x184a
085e4d48 +0x034:  test   %al,%al
085e4d4a +0x036:  jne    085e4e36 <+0x122>
085e4d50 +0x03c:  lea    -0x1c(%ebp),%eax
085e4d53 +0x03f:  mov    %eax,(%esp)
085e4d56 +0x042:  call   0832aede <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x7b>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x7b
085e4d5b +0x047:  lea    -0x20(%ebp),%eax
085e4d5e +0x04a:  mov    -0xc(%ebp),%edx
085e4d61 +0x04d:  mov    %edx,0x4(%esp)
085e4d65 +0x051:  mov    %eax,(%esp)
085e4d68 +0x054:  call   085e7f62 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16ea>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16ea
085e4d6d +0x059:  sub    $0x4,%esp
085e4d70 +0x05c:  lea    -0x20(%ebp),%eax
085e4d73 +0x05f:  mov    %eax,(%esp)
085e4d76 +0x062:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4d7b +0x067:  mov    (%eax),%eax
085e4d7d +0x069:  mov    %eax,(%esp)
085e4d80 +0x06c:  call   085e6944 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcc
085e4d85 +0x071:  cmp    $0x2,%eax
085e4d88 +0x074:  sete   %al
085e4d8b +0x077:  test   %al,%al
085e4d8d +0x079:  je     085e4e05 <+0xf1>
085e4d8f +0x07b:  jmp    085e4e37 <+0x123>
085e4d94 +0x080:  lea    -0x20(%ebp),%eax
085e4d97 +0x083:  mov    %eax,(%esp)
085e4d9a +0x086:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4d9f +0x08b:  mov    (%eax),%eax
085e4da1 +0x08d:  mov    0xc(%ebp),%edx
085e4da4 +0x090:  mov    %edx,0x4(%esp)
085e4da8 +0x094:  mov    %eax,(%esp)
085e4dab +0x097:  call   085e318e <_ZNK8CMission17isAcceptConditionERK5CUser>  ; CMission::isAcceptCondition(CUser const&) const
085e4db0 +0x09c:  test   %al,%al
085e4db2 +0x09e:  je     085e4dfa <+0xe6>
085e4db4 +0x0a0:  lea    -0x20(%ebp),%eax
085e4db7 +0x0a3:  mov    %eax,(%esp)
085e4dba +0x0a6:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4dbf +0x0ab:  mov    (%eax),%eax
085e4dc1 +0x0ad:  mov    (%eax),%edx
085e4dc3 +0x0af:  add    $0x20,%edx
085e4dc6 +0x0b2:  mov    (%edx),%ecx
085e4dc8 +0x0b4:  mov    0xc(%ebp),%edx
085e4dcb +0x0b7:  mov    %edx,0x8(%esp)
085e4dcf +0x0bb:  lea    -0x1c(%ebp),%edx
085e4dd2 +0x0be:  mov    %edx,0x4(%esp)
085e4dd6 +0x0c2:  mov    %eax,(%esp)
085e4dd9 +0x0c5:  call   *%ecx
085e4ddb +0x0c7:  lea    -0x1c(%ebp),%eax
085e4dde +0x0ca:  mov    %eax,0x4(%esp)
085e4de2 +0x0ce:  mov    0x8(%ebp),%eax
085e4de5 +0x0d1:  mov    %eax,(%esp)
085e4de8 +0x0d4:  call   085e4c6c <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo>  ; CMissionList_Charac::addNewMission(MissionInfo const&)
085e4ded +0x0d9:  mov    0x8(%ebp),%eax
085e4df0 +0x0dc:  mov    %eax,(%esp)
085e4df3 +0x0df:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e4df8 +0x0e4:  jmp    085e4e37 <+0x123>
085e4dfa +0x0e6:  lea    -0x20(%ebp),%eax
085e4dfd +0x0e9:  mov    %eax,(%esp)
085e4e00 +0x0ec:  call   085e7fc0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1748>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1748
085e4e05 +0x0f1:  lea    -0x14(%ebp),%eax
085e4e08 +0x0f4:  mov    -0xc(%ebp),%edx
085e4e0b +0x0f7:  mov    %edx,0x4(%esp)
085e4e0f +0x0fb:  mov    %eax,(%esp)
085e4e12 +0x0fe:  call   085e7f88 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1710>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1710
085e4e17 +0x103:  sub    $0x4,%esp
085e4e1a +0x106:  lea    -0x20(%ebp),%eax
085e4e1d +0x109:  mov    %eax,0x4(%esp)
085e4e21 +0x10d:  lea    -0x14(%ebp),%eax
085e4e24 +0x110:  mov    %eax,(%esp)
085e4e27 +0x113:  call   085e7fac <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1734>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1734
085e4e2c +0x118:  test   %al,%al
085e4e2e +0x11a:  jne    085e4d94 <+0x80>
085e4e34 +0x120:  jmp    085e4e37 <+0x123>
085e4e36 +0x122:  nop
085e4e37 +0x123:  addl   $0x1,-0x10(%ebp)
085e4e3b +0x127:  cmpl   $0x23,-0x10(%ebp)
085e4e3f +0x12b:  setle  %al
085e4e42 +0x12e:  test   %al,%al
085e4e44 +0x130:  jne    085e4d26 <+0x12>
085e4e4a +0x136:  leave
085e4e4b +0x137:  ret
```

## 反编译 C

```c
// CMissionList_Charac::MakeMissionList_forNewbies @ 0x85e4d14

/* CMissionList_Charac::MakeMissionList_forNewbies(CUser const&) */

void __thiscall
CMissionList_Charac::MakeMissionList_forNewbies(CMissionList_Charac *this,CUser *param_1)

{
  char cVar1;
  CDataManager *this_00;
  undefined4 *puVar2;
  int iVar3;
  _List_const_iterator<CMission*> local_24 [4];
  MissionInfo local_20 [8];
  _List_const_iterator<CMission*> local_18 [4];
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
      puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
      iVar3 = CMission::GetMissionGrade((CMission *)*puVar2);
      if (iVar3 != 2) {
        while( true ) {
          std::list<CMission*,std::allocator<CMission*>>::end();
          cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_18,local_24);
          if (cVar1 == '\0') break;
          puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
          cVar1 = CMission::isAcceptCondition((CMission *)*puVar2,param_1);
          if (cVar1 != '\0') {
            puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
            (**(code **)(*(int *)*puVar2 + 0x20))((int *)*puVar2,local_20,param_1);
            addNewMission(this,local_20);
            charac_expand::CData::alter((CData *)this);
            break;
          }
          std::_List_const_iterator<CMission*>::operator++(local_24);
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
