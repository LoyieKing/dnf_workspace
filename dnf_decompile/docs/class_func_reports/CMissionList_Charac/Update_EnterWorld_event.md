# Update_EnterWorld_event

`_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser`

`CMissionList_Charac::Update_EnterWorld_event(CUser&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e600a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e600a  _ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser
#           CMissionList_Charac::Update_EnterWorld_event(CUser&)
# range [0x085e600a, 0x085e612d]
085e600a +0x000:  push   %ebp
085e600b +0x001:  mov    %esp,%ebp
085e600d +0x003:  push   %esi
085e600e +0x004:  push   %ebx
085e600f +0x005:  sub    $0x40,%esp
085e6012 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e6017 +0x00d:  mov    %eax,(%esp)
085e601a +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e601f +0x015:  cmp    $0xf,%eax
085e6022 +0x018:  je     085e603d <+0x33>
085e6024 +0x01a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e6029 +0x01f:  mov    %eax,(%esp)
085e602c +0x022:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e6031 +0x027:  cmp    $0x10,%eax
085e6034 +0x02a:  je     085e603d <+0x33>
085e6036 +0x02c:  mov    $0x1,%eax
085e603b +0x031:  jmp    085e6042 <+0x38>
085e603d +0x033:  mov    $0x0,%eax
085e6042 +0x038:  test   %al,%al
085e6044 +0x03a:  jne    085e6126 <+0x11c>
085e604a +0x040:  mov    0x8(%ebp),%eax
085e604d +0x043:  mov    %eax,(%esp)
085e6050 +0x046:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e6055 +0x04b:  lea    -0x14(%ebp),%eax
085e6058 +0x04e:  mov    %eax,(%esp)
085e605b +0x051:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e6060 +0x056:  movl   $0x2,0x4(%esp)
085e6068 +0x05e:  lea    -0x23(%ebp),%eax
085e606b +0x061:  mov    %eax,(%esp)
085e606e +0x064:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085e6073 +0x069:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085e6078 +0x06e:  mov    %eax,(%esp)
085e607b +0x071:  call   085e68a8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x30>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x30
085e6080 +0x076:  mov    %eax,-0x18(%ebp)
085e6083 +0x079:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e6088 +0x07e:  mov    %eax,(%esp)
085e608b +0x081:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e6090 +0x086:  mov    %eax,-0x1c(%ebp)
085e6093 +0x089:  lea    -0x14(%ebp),%eax
085e6096 +0x08c:  mov    %eax,0x10(%esp)
085e609a +0x090:  lea    -0x23(%ebp),%eax
085e609d +0x093:  mov    %eax,0xc(%esp)
085e60a1 +0x097:  mov    0xc(%ebp),%eax
085e60a4 +0x09a:  mov    %eax,0x8(%esp)
085e60a8 +0x09e:  movl   $0x7,0x4(%esp)
085e60b0 +0x0a6:  mov    0x8(%ebp),%eax
085e60b3 +0x0a9:  mov    %eax,(%esp)
085e60b6 +0x0ac:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e60bb +0x0b1:  lea    -0x14(%ebp),%eax
085e60be +0x0b4:  mov    %eax,0x10(%esp)
085e60c2 +0x0b8:  lea    -0x23(%ebp),%eax
085e60c5 +0x0bb:  mov    %eax,0xc(%esp)
085e60c9 +0x0bf:  mov    0xc(%ebp),%eax
085e60cc +0x0c2:  mov    %eax,0x8(%esp)
085e60d0 +0x0c6:  movl   $0x1e,0x4(%esp)
085e60d8 +0x0ce:  mov    0x8(%ebp),%eax
085e60db +0x0d1:  mov    %eax,(%esp)
085e60de +0x0d4:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e60e3 +0x0d9:  lea    -0x14(%ebp),%eax
085e60e6 +0x0dc:  mov    %eax,0x8(%esp)
085e60ea +0x0e0:  mov    0xc(%ebp),%eax
085e60ed +0x0e3:  mov    %eax,0x4(%esp)
085e60f1 +0x0e7:  mov    0x8(%ebp),%eax
085e60f4 +0x0ea:  mov    %eax,(%esp)
085e60f7 +0x0ed:  call   085e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>  ; CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
085e60fc +0x0f2:  jmp    085e6119 <+0x10f>
085e60fe +0x0f4:  mov    %edx,%ebx
085e6100 +0x0f6:  mov    %eax,%esi
085e6102 +0x0f8:  lea    -0x14(%ebp),%eax
085e6105 +0x0fb:  mov    %eax,(%esp)
085e6108 +0x0fe:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e610d +0x103:  mov    %esi,%eax
085e610f +0x105:  mov    %ebx,%edx
085e6111 +0x107:  mov    %eax,(%esp)
085e6114 +0x10a:  call   08ae3750 <_Unwind_Resume>
085e6119 +0x10f:  lea    -0x14(%ebp),%eax
085e611c +0x112:  mov    %eax,(%esp)
085e611f +0x115:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e6124 +0x11a:  jmp    085e6127 <+0x11d>
085e6126 +0x11c:  nop
085e6127 +0x11d:  add    $0x40,%esp
085e612a +0x120:  pop    %ebx
085e612b +0x121:  pop    %esi
085e612c +0x122:  pop    %ebp
085e612d +0x123:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Update_EnterWorld_event @ 0x85e600a

/* CMissionList_Charac::Update_EnterWorld_event(CUser&) */

void __thiscall
CMissionList_Charac::Update_EnterWorld_event(CMissionList_Charac *this,CUser *param_1)

{
  bool bVar1;
  GameWorld *pGVar2;
  int iVar3;
  CDataManager *this_00;
  MissionClearCondition_Parameter local_27 [7];
  undefined4 local_20;
  undefined4 local_1c;
  vector<int,std::allocator<int>> local_18 [12];
  
  pGVar2 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar2);
  if (iVar3 != 0xf) {
    pGVar2 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar2);
    if (iVar3 != 0x10) {
      bVar1 = true;
      goto LAB_085e6042;
    }
  }
  bVar1 = false;
LAB_085e6042:
  if (!bVar1) {
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::vector(local_18);
    MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_27,2);
                    /* try { // try from 085e6073 to 085e60fb has its CatchHandler @ 085e60fe */
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = CDataManager::GetPvPChannelType(this_00);
    pGVar2 = (GameWorld *)G_GameWorld();
    local_20 = GameWorld::GetChannelType(pGVar2);
    check_mission_kind(this,7,param_1,local_27,(vector *)local_18);
    check_mission_kind(this,0x1e,param_1,local_27,(vector *)local_18);
    Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}
```
