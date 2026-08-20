# MakeMissionList_JustKind

`_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj`

`CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4fba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4fba  _ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj
#           CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int)
# range [0x085e4fba, 0x085e50f9]
085e4fba +0x000:  push   %ebp
085e4fbb +0x001:  mov    %esp,%ebp
085e4fbd +0x003:  push   %ebx
085e4fbe +0x004:  sub    $0x34,%esp
085e4fc1 +0x007:  movb   $0x0,-0xd(%ebp)
085e4fc5 +0x00b:  mov    0x10(%ebp),%ebx
085e4fc8 +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e4fcd +0x013:  mov    %ebx,0x4(%esp)
085e4fd1 +0x017:  mov    %eax,(%esp)
085e4fd4 +0x01a:  call   0835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>  ; CDataManager::get_kind_mission_list(int) const
085e4fd9 +0x01f:  mov    %eax,-0xc(%ebp)
085e4fdc +0x022:  mov    -0xc(%ebp),%eax
085e4fdf +0x025:  mov    %eax,(%esp)
085e4fe2 +0x028:  call   085e80c2 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x184a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x184a
085e4fe7 +0x02d:  test   %al,%al
085e4fe9 +0x02f:  je     085e4ff5 <+0x3b>
085e4feb +0x031:  mov    $0x0,%eax
085e4ff0 +0x036:  jmp    085e50f5 <+0x13b>
085e4ff5 +0x03b:  lea    -0x1c(%ebp),%eax
085e4ff8 +0x03e:  mov    %eax,(%esp)
085e4ffb +0x041:  call   0832aede <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x7b>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x7b
085e5000 +0x046:  lea    -0x20(%ebp),%eax
085e5003 +0x049:  mov    -0xc(%ebp),%edx
085e5006 +0x04c:  mov    %edx,0x4(%esp)
085e500a +0x050:  mov    %eax,(%esp)
085e500d +0x053:  call   085e7f62 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16ea>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16ea
085e5012 +0x058:  sub    $0x4,%esp
085e5015 +0x05b:  lea    -0x20(%ebp),%eax
085e5018 +0x05e:  mov    %eax,(%esp)
085e501b +0x061:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e5020 +0x066:  mov    (%eax),%eax
085e5022 +0x068:  mov    %eax,(%esp)
085e5025 +0x06b:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e502a +0x070:  mov    %eax,0x4(%esp)
085e502e +0x074:  mov    0x8(%ebp),%eax
085e5031 +0x077:  mov    %eax,(%esp)
085e5034 +0x07a:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e5039 +0x07f:  test   %ax,%ax
085e503c +0x082:  setne  %al
085e503f +0x085:  test   %al,%al
085e5041 +0x087:  je     085e50c2 <+0x108>
085e5043 +0x089:  mov    $0x0,%eax
085e5048 +0x08e:  jmp    085e50f5 <+0x13b>
085e504d +0x093:  lea    -0x20(%ebp),%eax
085e5050 +0x096:  mov    %eax,(%esp)
085e5053 +0x099:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e5058 +0x09e:  mov    (%eax),%eax
085e505a +0x0a0:  mov    0xc(%ebp),%edx
085e505d +0x0a3:  mov    %edx,0x4(%esp)
085e5061 +0x0a7:  mov    %eax,(%esp)
085e5064 +0x0aa:  call   085e318e <_ZNK8CMission17isAcceptConditionERK5CUser>  ; CMission::isAcceptCondition(CUser const&) const
085e5069 +0x0af:  test   %al,%al
085e506b +0x0b1:  je     085e50b7 <+0xfd>
085e506d +0x0b3:  lea    -0x20(%ebp),%eax
085e5070 +0x0b6:  mov    %eax,(%esp)
085e5073 +0x0b9:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e5078 +0x0be:  mov    (%eax),%eax
085e507a +0x0c0:  mov    (%eax),%edx
085e507c +0x0c2:  add    $0x20,%edx
085e507f +0x0c5:  mov    (%edx),%ecx
085e5081 +0x0c7:  mov    0xc(%ebp),%edx
085e5084 +0x0ca:  mov    %edx,0x8(%esp)
085e5088 +0x0ce:  lea    -0x1c(%ebp),%edx
085e508b +0x0d1:  mov    %edx,0x4(%esp)
085e508f +0x0d5:  mov    %eax,(%esp)
085e5092 +0x0d8:  call   *%ecx
085e5094 +0x0da:  lea    -0x1c(%ebp),%eax
085e5097 +0x0dd:  mov    %eax,0x4(%esp)
085e509b +0x0e1:  mov    0x8(%ebp),%eax
085e509e +0x0e4:  mov    %eax,(%esp)
085e50a1 +0x0e7:  call   085e4c6c <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo>  ; CMissionList_Charac::addNewMission(MissionInfo const&)
085e50a6 +0x0ec:  mov    0x8(%ebp),%eax
085e50a9 +0x0ef:  mov    %eax,(%esp)
085e50ac +0x0f2:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e50b1 +0x0f7:  movb   $0x1,-0xd(%ebp)
085e50b5 +0x0fb:  jmp    085e50f1 <+0x137>
085e50b7 +0x0fd:  lea    -0x20(%ebp),%eax
085e50ba +0x100:  mov    %eax,(%esp)
085e50bd +0x103:  call   085e7fc0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1748>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1748
085e50c2 +0x108:  lea    -0x14(%ebp),%eax
085e50c5 +0x10b:  mov    -0xc(%ebp),%edx
085e50c8 +0x10e:  mov    %edx,0x4(%esp)
085e50cc +0x112:  mov    %eax,(%esp)
085e50cf +0x115:  call   085e7f88 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1710>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1710
085e50d4 +0x11a:  sub    $0x4,%esp
085e50d7 +0x11d:  lea    -0x14(%ebp),%eax
085e50da +0x120:  mov    %eax,0x4(%esp)
085e50de +0x124:  lea    -0x20(%ebp),%eax
085e50e1 +0x127:  mov    %eax,(%esp)
085e50e4 +0x12a:  call   085e7fac <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1734>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1734
085e50e9 +0x12f:  test   %al,%al
085e50eb +0x131:  jne    085e504d <+0x93>
085e50f1 +0x137:  movzbl -0xd(%ebp),%eax
085e50f5 +0x13b:  mov    -0x4(%ebp),%ebx
085e50f8 +0x13e:  leave
085e50f9 +0x13f:  ret
```

## 反编译 C

```c
// CMissionList_Charac::MakeMissionList_JustKind @ 0x85e4fba

/* CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int) */

undefined1 __thiscall
CMissionList_Charac::MakeMissionList_JustKind(CMissionList_Charac *this,CUser *param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  CDataManager *this_00;
  undefined4 *puVar3;
  int iVar4;
  _List_const_iterator<CMission*> local_24 [4];
  MissionInfo local_20 [8];
  _List_const_iterator local_18 [7];
  undefined1 local_11;
  list<CMission*,std::allocator<CMission*>> *local_10;
  
  local_11 = 0;
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (list<CMission*,std::allocator<CMission*>> *)
             CDataManager::get_kind_mission_list(this_00,param_2);
  cVar1 = std::list<CMission*,std::allocator<CMission*>>::empty(local_10);
  if (cVar1 == '\0') {
    MissionInfo::MissionInfo(local_20);
    std::list<CMission*,std::allocator<CMission*>>::begin();
    puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
    iVar4 = CMission::GetMissionKind((CMission *)*puVar3);
    sVar2 = getIndex_byKind(this,iVar4);
    if (sVar2 == 0) {
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
          return 1;
        }
        std::_List_const_iterator<CMission*>::operator++(local_24);
      }
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}
```
