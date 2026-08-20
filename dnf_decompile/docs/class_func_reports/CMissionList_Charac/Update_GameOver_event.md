# Update_GameOver_event

`_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter`

`CMissionList_Charac::Update_GameOver_event(CUser&, MissionClearCondition_Parameter const&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e5e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e5e4a  _ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter
#           CMissionList_Charac::Update_GameOver_event(CUser&, MissionClearCondition_Parameter const&)
# range [0x085e5e4a, 0x085e6009]
085e5e4a +0x000:  push   %ebp
085e5e4b +0x001:  mov    %esp,%ebp
085e5e4d +0x003:  push   %esi
085e5e4e +0x004:  push   %ebx
085e5e4f +0x005:  sub    $0x30,%esp
085e5e52 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e5e57 +0x00d:  mov    %eax,(%esp)
085e5e5a +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e5e5f +0x015:  cmp    $0xf,%eax
085e5e62 +0x018:  setne  %al
085e5e65 +0x01b:  test   %al,%al
085e5e67 +0x01d:  jne    085e5fff <+0x1b5>
085e5e6d +0x023:  movl   $0x1b,0x4(%esp)
085e5e75 +0x02b:  mov    0x8(%ebp),%eax
085e5e78 +0x02e:  mov    %eax,(%esp)
085e5e7b +0x031:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e5e80 +0x036:  test   %ax,%ax
085e5e83 +0x039:  setne  %al
085e5e86 +0x03c:  test   %al,%al
085e5e88 +0x03e:  jne    085e6002 <+0x1b8>
085e5e8e +0x044:  mov    0x8(%ebp),%eax
085e5e91 +0x047:  mov    %eax,(%esp)
085e5e94 +0x04a:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e5e99 +0x04f:  lea    -0x14(%ebp),%eax
085e5e9c +0x052:  mov    %eax,(%esp)
085e5e9f +0x055:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e5ea4 +0x05a:  lea    -0x14(%ebp),%eax
085e5ea7 +0x05d:  mov    %eax,0x10(%esp)
085e5eab +0x061:  mov    0x10(%ebp),%eax
085e5eae +0x064:  mov    %eax,0xc(%esp)
085e5eb2 +0x068:  mov    0xc(%ebp),%eax
085e5eb5 +0x06b:  mov    %eax,0x8(%esp)
085e5eb9 +0x06f:  movl   $0x1,0x4(%esp)
085e5ec1 +0x077:  mov    0x8(%ebp),%eax
085e5ec4 +0x07a:  mov    %eax,(%esp)
085e5ec7 +0x07d:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5ecc +0x082:  lea    -0x14(%ebp),%eax
085e5ecf +0x085:  mov    %eax,0x10(%esp)
085e5ed3 +0x089:  mov    0x10(%ebp),%eax
085e5ed6 +0x08c:  mov    %eax,0xc(%esp)
085e5eda +0x090:  mov    0xc(%ebp),%eax
085e5edd +0x093:  mov    %eax,0x8(%esp)
085e5ee1 +0x097:  movl   $0x3,0x4(%esp)
085e5ee9 +0x09f:  mov    0x8(%ebp),%eax
085e5eec +0x0a2:  mov    %eax,(%esp)
085e5eef +0x0a5:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5ef4 +0x0aa:  lea    -0x14(%ebp),%eax
085e5ef7 +0x0ad:  mov    %eax,0x10(%esp)
085e5efb +0x0b1:  mov    0x10(%ebp),%eax
085e5efe +0x0b4:  mov    %eax,0xc(%esp)
085e5f02 +0x0b8:  mov    0xc(%ebp),%eax
085e5f05 +0x0bb:  mov    %eax,0x8(%esp)
085e5f09 +0x0bf:  movl   $0x8,0x4(%esp)
085e5f11 +0x0c7:  mov    0x8(%ebp),%eax
085e5f14 +0x0ca:  mov    %eax,(%esp)
085e5f17 +0x0cd:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5f1c +0x0d2:  lea    -0x14(%ebp),%eax
085e5f1f +0x0d5:  mov    %eax,0x10(%esp)
085e5f23 +0x0d9:  mov    0x10(%ebp),%eax
085e5f26 +0x0dc:  mov    %eax,0xc(%esp)
085e5f2a +0x0e0:  mov    0xc(%ebp),%eax
085e5f2d +0x0e3:  mov    %eax,0x8(%esp)
085e5f31 +0x0e7:  movl   $0xd,0x4(%esp)
085e5f39 +0x0ef:  mov    0x8(%ebp),%eax
085e5f3c +0x0f2:  mov    %eax,(%esp)
085e5f3f +0x0f5:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5f44 +0x0fa:  lea    -0x14(%ebp),%eax
085e5f47 +0x0fd:  mov    %eax,0x10(%esp)
085e5f4b +0x101:  mov    0x10(%ebp),%eax
085e5f4e +0x104:  mov    %eax,0xc(%esp)
085e5f52 +0x108:  mov    0xc(%ebp),%eax
085e5f55 +0x10b:  mov    %eax,0x8(%esp)
085e5f59 +0x10f:  movl   $0x10,0x4(%esp)
085e5f61 +0x117:  mov    0x8(%ebp),%eax
085e5f64 +0x11a:  mov    %eax,(%esp)
085e5f67 +0x11d:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5f6c +0x122:  lea    -0x14(%ebp),%eax
085e5f6f +0x125:  mov    %eax,0x10(%esp)
085e5f73 +0x129:  mov    0x10(%ebp),%eax
085e5f76 +0x12c:  mov    %eax,0xc(%esp)
085e5f7a +0x130:  mov    0xc(%ebp),%eax
085e5f7d +0x133:  mov    %eax,0x8(%esp)
085e5f81 +0x137:  movl   $0x12,0x4(%esp)
085e5f89 +0x13f:  mov    0x8(%ebp),%eax
085e5f8c +0x142:  mov    %eax,(%esp)
085e5f8f +0x145:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5f94 +0x14a:  lea    -0x14(%ebp),%eax
085e5f97 +0x14d:  mov    %eax,0x10(%esp)
085e5f9b +0x151:  mov    0x10(%ebp),%eax
085e5f9e +0x154:  mov    %eax,0xc(%esp)
085e5fa2 +0x158:  mov    0xc(%ebp),%eax
085e5fa5 +0x15b:  mov    %eax,0x8(%esp)
085e5fa9 +0x15f:  movl   $0x17,0x4(%esp)
085e5fb1 +0x167:  mov    0x8(%ebp),%eax
085e5fb4 +0x16a:  mov    %eax,(%esp)
085e5fb7 +0x16d:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5fbc +0x172:  lea    -0x14(%ebp),%eax
085e5fbf +0x175:  mov    %eax,0x8(%esp)
085e5fc3 +0x179:  mov    0xc(%ebp),%eax
085e5fc6 +0x17c:  mov    %eax,0x4(%esp)
085e5fca +0x180:  mov    0x8(%ebp),%eax
085e5fcd +0x183:  mov    %eax,(%esp)
085e5fd0 +0x186:  call   085e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>  ; CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
085e5fd5 +0x18b:  jmp    085e5ff2 <+0x1a8>
085e5fd7 +0x18d:  mov    %edx,%ebx
085e5fd9 +0x18f:  mov    %eax,%esi
085e5fdb +0x191:  lea    -0x14(%ebp),%eax
085e5fde +0x194:  mov    %eax,(%esp)
085e5fe1 +0x197:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e5fe6 +0x19c:  mov    %esi,%eax
085e5fe8 +0x19e:  mov    %ebx,%edx
085e5fea +0x1a0:  mov    %eax,(%esp)
085e5fed +0x1a3:  call   08ae3750 <_Unwind_Resume>
085e5ff2 +0x1a8:  lea    -0x14(%ebp),%eax
085e5ff5 +0x1ab:  mov    %eax,(%esp)
085e5ff8 +0x1ae:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e5ffd +0x1b3:  jmp    085e6003 <+0x1b9>
085e5fff +0x1b5:  nop
085e6000 +0x1b6:  jmp    085e6003 <+0x1b9>
085e6002 +0x1b8:  nop
085e6003 +0x1b9:  add    $0x30,%esp
085e6006 +0x1bc:  pop    %ebx
085e6007 +0x1bd:  pop    %esi
085e6008 +0x1be:  pop    %ebp
085e6009 +0x1bf:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Update_GameOver_event @ 0x85e5e4a

/* CMissionList_Charac::Update_GameOver_event(CUser&, MissionClearCondition_Parameter const&) */

void __thiscall
CMissionList_Charac::Update_GameOver_event
          (CMissionList_Charac *this,CUser *param_1,MissionClearCondition_Parameter *param_2)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::GetChannelType(this_00);
  if ((iVar2 == 0xf) && (sVar1 = getIndex_byKind(this,0x1b), sVar1 == 0)) {
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 085e5ec7 to 085e5fd4 has its CatchHandler @ 085e5fd7 */
    check_mission_kind(this,1,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,3,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,8,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0xd,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x10,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x12,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x17,param_1,param_2,(vector *)local_18);
    Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}
```
