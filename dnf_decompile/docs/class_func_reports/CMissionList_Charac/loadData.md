# loadData

`_ZN19CMissionList_Charac8loadDataEP5CUserPc`

`CMissionList_Charac::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e47de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e47de  _ZN19CMissionList_Charac8loadDataEP5CUserPc
#           CMissionList_Charac::loadData(CUser*, char*)
# range [0x085e47de, 0x085e4a03]
085e47de +0x000:  push   %ebp
085e47df +0x001:  mov    %esp,%ebp
085e47e1 +0x003:  push   %esi
085e47e2 +0x004:  push   %ebx
085e47e3 +0x005:  sub    $0x30,%esp
085e47e6 +0x008:  mov    0x8(%ebp),%eax
085e47e9 +0x00b:  mov    (%eax),%eax
085e47eb +0x00d:  add    $0x1c,%eax
085e47ee +0x010:  mov    (%eax),%edx
085e47f0 +0x012:  mov    0x8(%ebp),%eax
085e47f3 +0x015:  mov    %eax,(%esp)
085e47f6 +0x018:  call   *%edx
085e47f8 +0x01a:  mov    0x8(%ebp),%eax
085e47fb +0x01d:  mov    0xc(%ebp),%edx
085e47fe +0x020:  mov    %edx,0x154(%eax)
085e4804 +0x026:  mov    0x10(%ebp),%eax
085e4807 +0x029:  mov    %eax,-0x14(%ebp)
085e480a +0x02c:  movl   $0x0,-0x10(%ebp)
085e4811 +0x033:  jmp    085e486f <+0x91>
085e4813 +0x035:  mov    -0x10(%ebp),%edx
085e4816 +0x038:  mov    -0x10(%ebp),%ecx
085e4819 +0x03b:  mov    -0x14(%ebp),%eax
085e481c +0x03e:  movzwl 0x6(%eax,%ecx,8),%ecx
085e4821 +0x043:  mov    0x8(%ebp),%eax
085e4824 +0x046:  mov    %cx,0x7(%eax,%edx,8)
085e4829 +0x04b:  mov    -0x10(%ebp),%edx
085e482c +0x04e:  mov    -0x10(%ebp),%ecx
085e482f +0x051:  mov    -0x14(%ebp),%eax
085e4832 +0x054:  movzwl 0x4(%eax,%ecx,8),%ecx
085e4837 +0x059:  mov    0x8(%ebp),%eax
085e483a +0x05c:  mov    %cx,0x5(%eax,%edx,8)
085e483f +0x061:  mov    -0x10(%ebp),%edx
085e4842 +0x064:  mov    -0x10(%ebp),%ecx
085e4845 +0x067:  mov    -0x14(%ebp),%eax
085e4848 +0x06a:  movzwl 0x8(%eax,%ecx,8),%ecx
085e484d +0x06f:  mov    0x8(%ebp),%eax
085e4850 +0x072:  mov    %cx,0x9(%eax,%edx,8)
085e4855 +0x077:  mov    -0x10(%ebp),%edx
085e4858 +0x07a:  mov    -0x10(%ebp),%ecx
085e485b +0x07d:  mov    -0x14(%ebp),%eax
085e485e +0x080:  movzwl 0xa(%eax,%ecx,8),%ecx
085e4863 +0x085:  mov    0x8(%ebp),%eax
085e4866 +0x088:  mov    %cx,0xb(%eax,%edx,8)
085e486b +0x08d:  addl   $0x1,-0x10(%ebp)
085e486f +0x091:  cmpl   $0x23,-0x10(%ebp)
085e4873 +0x095:  setle  %al
085e4876 +0x098:  test   %al,%al
085e4878 +0x09a:  jne    085e4813 <+0x35>
085e487a +0x09c:  mov    0x8(%ebp),%eax
085e487d +0x09f:  lea    0x128(%eax),%edx
085e4883 +0x0a5:  mov    -0x14(%ebp),%eax
085e4886 +0x0a8:  add    $0x124,%eax
085e488b +0x0ad:  mov    %edx,0x4(%esp)
085e488f +0x0b1:  mov    %eax,(%esp)
085e4892 +0x0b4:  call   08a5a989 <_Z11StrToBitsetPhRSt6bitsetILj256EE>  ; StrToBitset(unsigned char*, std::bitset<256u>&)
085e4897 +0x0b9:  mov    -0x14(%ebp),%eax
085e489a +0x0bc:  movzwl 0x144(%eax),%eax
085e48a1 +0x0c3:  mov    %eax,%edx
085e48a3 +0x0c5:  mov    0x8(%ebp),%eax
085e48a6 +0x0c8:  mov    %dx,0x148(%eax)
085e48ad +0x0cf:  mov    -0x14(%ebp),%eax
085e48b0 +0x0d2:  movzwl 0x146(%eax),%eax
085e48b7 +0x0d9:  mov    %eax,%edx
085e48b9 +0x0db:  mov    0x8(%ebp),%eax
085e48bc +0x0de:  mov    %dx,0x14a(%eax)
085e48c3 +0x0e5:  mov    -0x14(%ebp),%eax
085e48c6 +0x0e8:  movzwl 0x148(%eax),%edx
085e48cd +0x0ef:  mov    0x8(%ebp),%eax
085e48d0 +0x0f2:  mov    %dx,0x14c(%eax)
085e48d7 +0x0f9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e48dc +0x0fe:  movl   $0x6,0x4(%esp)
085e48e4 +0x106:  mov    %eax,(%esp)
085e48e7 +0x109:  call   0835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>  ; CDataManager::get_kind_mission_list(int) const
085e48ec +0x10e:  mov    %eax,-0xc(%ebp)
085e48ef +0x111:  lea    -0x1c(%ebp),%eax
085e48f2 +0x114:  mov    -0xc(%ebp),%edx
085e48f5 +0x117:  mov    %edx,0x4(%esp)
085e48f9 +0x11b:  mov    %eax,(%esp)
085e48fc +0x11e:  call   085e7f62 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16ea>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16ea
085e4901 +0x123:  sub    $0x4,%esp
085e4904 +0x126:  jmp    085e4945 <+0x167>
085e4906 +0x128:  lea    -0x1c(%ebp),%eax
085e4909 +0x12b:  mov    %eax,(%esp)
085e490c +0x12e:  call   085e7fd4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x175c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x175c
085e4911 +0x133:  mov    (%eax),%eax
085e4913 +0x135:  mov    %eax,(%esp)
085e4916 +0x138:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e491b +0x13d:  mov    %eax,0x4(%esp)
085e491f +0x141:  mov    0x8(%ebp),%eax
085e4922 +0x144:  mov    %eax,(%esp)
085e4925 +0x147:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e492a +0x14c:  test   %al,%al
085e492c +0x14e:  je     085e493a <+0x15c>
085e492e +0x150:  mov    0x8(%ebp),%eax
085e4931 +0x153:  movb   $0x1,0x14e(%eax)
085e4938 +0x15a:  jmp    085e4970 <+0x192>
085e493a +0x15c:  lea    -0x1c(%ebp),%eax
085e493d +0x15f:  mov    %eax,(%esp)
085e4940 +0x162:  call   085e7fc0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1748>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1748
085e4945 +0x167:  lea    -0x18(%ebp),%eax
085e4948 +0x16a:  mov    -0xc(%ebp),%edx
085e494b +0x16d:  mov    %edx,0x4(%esp)
085e494f +0x171:  mov    %eax,(%esp)
085e4952 +0x174:  call   085e7f88 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1710>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1710
085e4957 +0x179:  sub    $0x4,%esp
085e495a +0x17c:  lea    -0x18(%ebp),%eax
085e495d +0x17f:  mov    %eax,0x4(%esp)
085e4961 +0x183:  lea    -0x1c(%ebp),%eax
085e4964 +0x186:  mov    %eax,(%esp)
085e4967 +0x189:  call   085e7fac <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1734>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1734
085e496c +0x18e:  test   %al,%al
085e496e +0x190:  jne    085e4906 <+0x128>
085e4970 +0x192:  mov    0x8(%ebp),%eax
085e4973 +0x195:  mov    %eax,(%esp)
085e4976 +0x198:  call   085e4a04 <_ZNK19CMissionList_Charac12isUserNewbieEv>  ; CMissionList_Charac::isUserNewbie() const
085e497b +0x19d:  test   %al,%al
085e497d +0x19f:  je     085e499e <+0x1c0>
085e497f +0x1a1:  mov    0xc(%ebp),%eax
085e4982 +0x1a4:  mov    %eax,0x4(%esp)
085e4986 +0x1a8:  mov    0x8(%ebp),%eax
085e4989 +0x1ab:  mov    %eax,(%esp)
085e498c +0x1ae:  call   085e4d14 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser>  ; CMissionList_Charac::MakeMissionList_forNewbies(CUser const&)
085e4991 +0x1b3:  mov    0x8(%ebp),%eax
085e4994 +0x1b6:  mov    %eax,(%esp)
085e4997 +0x1b9:  call   085e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>  ; CMissionList_Charac::Reset_DailyMission()
085e499c +0x1be:  jmp    085e49b0 <+0x1d2>
085e499e +0x1c0:  mov    0xc(%ebp),%eax
085e49a1 +0x1c3:  mov    %eax,0x4(%esp)
085e49a5 +0x1c7:  mov    0x8(%ebp),%eax
085e49a8 +0x1ca:  mov    %eax,(%esp)
085e49ab +0x1cd:  call   085e4e4c <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser>  ; CMissionList_Charac::MakeMissionList_forOldUser(CUser const&)
085e49b0 +0x1d2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085e49b7 +0x1d9:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085e49bc +0x1de:  mov    %eax,%esi
085e49be +0x1e0:  mov    0xc(%ebp),%eax
085e49c1 +0x1e3:  mov    %eax,(%esp)
085e49c4 +0x1e6:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
085e49c9 +0x1eb:  mov    %eax,%ebx
085e49cb +0x1ed:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085e49d0 +0x1f2:  mov    0x37c(%eax),%eax
085e49d6 +0x1f8:  mov    %esi,0x8(%esp)
085e49da +0x1fc:  mov    %ebx,0x4(%esp)
085e49de +0x200:  mov    %eax,(%esp)
085e49e1 +0x203:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
085e49e6 +0x208:  test   %al,%al
085e49e8 +0x20a:  je     085e49f5 <+0x217>
085e49ea +0x20c:  mov    0x8(%ebp),%eax
085e49ed +0x20f:  mov    %eax,(%esp)
085e49f0 +0x212:  call   085e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>  ; CMissionList_Charac::Reset_DailyMission()
085e49f5 +0x217:  mov    $0x1,%eax
085e49fa +0x21c:  lea    -0x8(%ebp),%esp
085e49fd +0x21f:  add    $0x0,%esp
085e4a00 +0x222:  pop    %ebx
085e4a01 +0x223:  pop    %esi
085e4a02 +0x224:  pop    %ebp
085e4a03 +0x225:  ret
```

## 反编译 C

```c
// CMissionList_Charac::loadData @ 0x85e47de

/* CMissionList_Charac::loadData(CUser*, char*) */

undefined4 __thiscall
CMissionList_Charac::loadData(CMissionList_Charac *this,CUser *param_1,char *param_2)

{
  char cVar1;
  CDataManager *this_00;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  _List_const_iterator<CMission*> local_20 [4];
  _List_const_iterator local_1c [4];
  char *local_18;
  int local_14;
  undefined4 local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  *(CUser **)(this + 0x154) = param_1;
  local_18 = param_2;
  for (local_14 = 0; local_14 < 0x24; local_14 = local_14 + 1) {
    *(undefined2 *)(this + local_14 * 8 + 7) = *(undefined2 *)(param_2 + local_14 * 8 + 6);
    *(undefined2 *)(this + local_14 * 8 + 5) = *(undefined2 *)(param_2 + local_14 * 8 + 4);
    *(undefined2 *)(this + local_14 * 8 + 9) = *(undefined2 *)(param_2 + local_14 * 8 + 8);
    *(undefined2 *)(this + local_14 * 8 + 0xb) = *(undefined2 *)(param_2 + local_14 * 8 + 10);
  }
  StrToBitset((uchar *)(param_2 + 0x124),(bitset *)(this + 0x128));
  *(undefined2 *)(this + 0x148) = *(undefined2 *)(local_18 + 0x144);
  *(undefined2 *)(this + 0x14a) = *(undefined2 *)(local_18 + 0x146);
  *(undefined2 *)(this + 0x14c) = *(undefined2 *)(local_18 + 0x148);
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::get_kind_mission_list(this_00,6);
  std::list<CMission*,std::allocator<CMission*>>::begin();
  do {
    std::list<CMission*,std::allocator<CMission*>>::end();
    cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_20,local_1c);
    if (cVar1 == '\0') {
LAB_085e4970:
      cVar1 = isUserNewbie(this);
      if (cVar1 == '\0') {
        MakeMissionList_forOldUser(this,param_1);
      }
      else {
        MakeMissionList_forNewbies(this,param_1);
        Reset_DailyMission(this);
      }
      lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar4 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
      iVar5 = G_CEnvironment();
      cVar1 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar4,lVar3);
      if (cVar1 != '\0') {
        Reset_DailyMission(this);
      }
      return 1;
    }
    puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_20);
    iVar5 = CMission::GetMissionIndex((CMission *)*puVar2);
    cVar1 = isClearMission(this,iVar5);
    if (cVar1 != '\0') {
      this[0x14e] = (CMissionList_Charac)0x1;
      goto LAB_085e4970;
    }
    std::_List_const_iterator<CMission*>::operator++(local_20);
  } while( true );
}
```
