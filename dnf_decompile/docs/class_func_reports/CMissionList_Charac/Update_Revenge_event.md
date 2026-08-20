# Update_Revenge_event

`_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb`

`CMissionList_Charac::Update_Revenge_event(CUser&, PVP_BATTLE_MODE, bool)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e612e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e612e  _ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb
#           CMissionList_Charac::Update_Revenge_event(CUser&, PVP_BATTLE_MODE, bool)
# range [0x085e612e, 0x085e627b]
085e612e +0x000:  push   %ebp
085e612f +0x001:  mov    %esp,%ebp
085e6131 +0x003:  push   %esi
085e6132 +0x004:  push   %ebx
085e6133 +0x005:  sub    $0x50,%esp
085e6136 +0x008:  mov    0x14(%ebp),%eax
085e6139 +0x00b:  mov    %al,-0x2c(%ebp)
085e613c +0x00e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e6141 +0x013:  mov    %eax,(%esp)
085e6144 +0x016:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e6149 +0x01b:  cmp    $0xf,%eax
085e614c +0x01e:  setne  %al
085e614f +0x021:  test   %al,%al
085e6151 +0x023:  jne    085e6271 <+0x143>
085e6157 +0x029:  movl   $0x1b,0x4(%esp)
085e615f +0x031:  mov    0x8(%ebp),%eax
085e6162 +0x034:  mov    %eax,(%esp)
085e6165 +0x037:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e616a +0x03c:  test   %ax,%ax
085e616d +0x03f:  setne  %al
085e6170 +0x042:  test   %al,%al
085e6172 +0x044:  jne    085e6274 <+0x146>
085e6178 +0x04a:  cmpb   $0x0,-0x2c(%ebp)
085e617c +0x04e:  je     085e625a <+0x12c>
085e6182 +0x054:  mov    0x8(%ebp),%eax
085e6185 +0x057:  mov    %eax,(%esp)
085e6188 +0x05a:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e618d +0x05f:  lea    -0x14(%ebp),%eax
085e6190 +0x062:  mov    %eax,(%esp)
085e6193 +0x065:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e6198 +0x06a:  mov    0x10(%ebp),%eax
085e619b +0x06d:  mov    %eax,0x4(%esp)
085e619f +0x071:  lea    -0x23(%ebp),%eax
085e61a2 +0x074:  mov    %eax,(%esp)
085e61a5 +0x077:  call   085e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>  ; MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)
085e61aa +0x07c:  cmpl   $0x2,0x10(%ebp)
085e61ae +0x080:  sete   %al
085e61b1 +0x083:  movzbl %al,%eax
085e61b4 +0x086:  mov    %eax,0x4(%esp)
085e61b8 +0x08a:  mov    0x8(%ebp),%eax
085e61bb +0x08d:  mov    %eax,(%esp)
085e61be +0x090:  call   085e5194 <_ZNK19CMissionList_Charac13getIssue_modeEb>  ; CMissionList_Charac::getIssue_mode(bool) const
085e61c3 +0x095:  mov    %ax,-0x22(%ebp)
085e61c7 +0x099:  lea    -0x14(%ebp),%eax
085e61ca +0x09c:  mov    %eax,0x10(%esp)
085e61ce +0x0a0:  lea    -0x23(%ebp),%eax
085e61d1 +0x0a3:  mov    %eax,0xc(%esp)
085e61d5 +0x0a7:  mov    0xc(%ebp),%eax
085e61d8 +0x0aa:  mov    %eax,0x8(%esp)
085e61dc +0x0ae:  movl   $0xc,0x4(%esp)
085e61e4 +0x0b6:  mov    0x8(%ebp),%eax
085e61e7 +0x0b9:  mov    %eax,(%esp)
085e61ea +0x0bc:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e61ef +0x0c1:  lea    -0x14(%ebp),%eax
085e61f2 +0x0c4:  mov    %eax,0x10(%esp)
085e61f6 +0x0c8:  lea    -0x23(%ebp),%eax
085e61f9 +0x0cb:  mov    %eax,0xc(%esp)
085e61fd +0x0cf:  mov    0xc(%ebp),%eax
085e6200 +0x0d2:  mov    %eax,0x8(%esp)
085e6204 +0x0d6:  movl   $0x16,0x4(%esp)
085e620c +0x0de:  mov    0x8(%ebp),%eax
085e620f +0x0e1:  mov    %eax,(%esp)
085e6212 +0x0e4:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e6217 +0x0e9:  lea    -0x14(%ebp),%eax
085e621a +0x0ec:  mov    %eax,0x8(%esp)
085e621e +0x0f0:  mov    0xc(%ebp),%eax
085e6221 +0x0f3:  mov    %eax,0x4(%esp)
085e6225 +0x0f7:  mov    0x8(%ebp),%eax
085e6228 +0x0fa:  mov    %eax,(%esp)
085e622b +0x0fd:  call   085e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>  ; CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
085e6230 +0x102:  jmp    085e624d <+0x11f>
085e6232 +0x104:  mov    %edx,%ebx
085e6234 +0x106:  mov    %eax,%esi
085e6236 +0x108:  lea    -0x14(%ebp),%eax
085e6239 +0x10b:  mov    %eax,(%esp)
085e623c +0x10e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e6241 +0x113:  mov    %esi,%eax
085e6243 +0x115:  mov    %ebx,%edx
085e6245 +0x117:  mov    %eax,(%esp)
085e6248 +0x11a:  call   08ae3750 <_Unwind_Resume>
085e624d +0x11f:  lea    -0x14(%ebp),%eax
085e6250 +0x122:  mov    %eax,(%esp)
085e6253 +0x125:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e6258 +0x12a:  jmp    085e6275 <+0x147>
085e625a +0x12c:  mov    0x8(%ebp),%eax
085e625d +0x12f:  movw   $0x0,0x6b(%eax)
085e6263 +0x135:  mov    0x8(%ebp),%eax
085e6266 +0x138:  movw   $0x0,0xbb(%eax)
085e626f +0x141:  jmp    085e6275 <+0x147>
085e6271 +0x143:  nop
085e6272 +0x144:  jmp    085e6275 <+0x147>
085e6274 +0x146:  nop
085e6275 +0x147:  add    $0x50,%esp
085e6278 +0x14a:  pop    %ebx
085e6279 +0x14b:  pop    %esi
085e627a +0x14c:  pop    %ebp
085e627b +0x14d:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Update_Revenge_event @ 0x85e612e

/* CMissionList_Charac::Update_Revenge_event(CUser&, PVP_BATTLE_MODE, bool) */

void __thiscall
CMissionList_Charac::Update_Revenge_event
          (CMissionList_Charac *this,CUser *param_1,int param_3,char param_4)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  MissionClearCondition_Parameter local_27;
  undefined2 local_26;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::GetChannelType(this_00);
  if ((iVar2 == 0xf) && (sVar1 = getIndex_byKind(this,0x1b), sVar1 == 0)) {
    if (param_4 == '\0') {
      *(undefined2 *)(this + 0x6b) = 0;
      *(undefined2 *)(this + 0xbb) = 0;
    }
    else {
      charac_expand::CData::alter((CData *)this);
      std::vector<int,std::allocator<int>>::vector(local_18);
      MissionClearCondition_Parameter::MissionClearCondition_Parameter(&local_27,param_3);
      local_26 = getIssue_mode(this,param_3 == 2);
                    /* try { // try from 085e61ea to 085e622f has its CatchHandler @ 085e6232 */
      check_mission_kind(this,0xc,param_1,&local_27,(vector *)local_18);
      check_mission_kind(this,0x16,param_1,&local_27,(vector *)local_18);
      Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
      std::vector<int,std::allocator<int>>::~vector(local_18);
    }
  }
  return;
}
```
