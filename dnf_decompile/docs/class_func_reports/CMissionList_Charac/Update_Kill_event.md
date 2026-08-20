# Update_Kill_event

`_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter`

`CMissionList_Charac::Update_Kill_event(CUser&, MissionClearCondition_Parameter const&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e58f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e58f4  _ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter
#           CMissionList_Charac::Update_Kill_event(CUser&, MissionClearCondition_Parameter const&)
# range [0x085e58f4, 0x085e59ef]
085e58f4 +0x00:  push   %ebp
085e58f5 +0x01:  mov    %esp,%ebp
085e58f7 +0x03:  push   %esi
085e58f8 +0x04:  push   %ebx
085e58f9 +0x05:  sub    $0x30,%esp
085e58fc +0x08:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e5901 +0x0d:  mov    %eax,(%esp)
085e5904 +0x10:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e5909 +0x15:  cmp    $0xf,%eax
085e590c +0x18:  setne  %al
085e590f +0x1b:  test   %al,%al
085e5911 +0x1d:  jne    085e59e8 <+0xf4>
085e5917 +0x23:  mov    0x8(%ebp),%eax
085e591a +0x26:  mov    %eax,(%esp)
085e591d +0x29:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e5922 +0x2e:  lea    -0x14(%ebp),%eax
085e5925 +0x31:  mov    %eax,(%esp)
085e5928 +0x34:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e592d +0x39:  lea    -0x14(%ebp),%eax
085e5930 +0x3c:  mov    %eax,0x10(%esp)
085e5934 +0x40:  mov    0x10(%ebp),%eax
085e5937 +0x43:  mov    %eax,0xc(%esp)
085e593b +0x47:  mov    0xc(%ebp),%eax
085e593e +0x4a:  mov    %eax,0x8(%esp)
085e5942 +0x4e:  movl   $0x5,0x4(%esp)
085e594a +0x56:  mov    0x8(%ebp),%eax
085e594d +0x59:  mov    %eax,(%esp)
085e5950 +0x5c:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5955 +0x61:  lea    -0x14(%ebp),%eax
085e5958 +0x64:  mov    %eax,0x10(%esp)
085e595c +0x68:  mov    0x10(%ebp),%eax
085e595f +0x6b:  mov    %eax,0xc(%esp)
085e5963 +0x6f:  mov    0xc(%ebp),%eax
085e5966 +0x72:  mov    %eax,0x8(%esp)
085e596a +0x76:  movl   $0xf,0x4(%esp)
085e5972 +0x7e:  mov    0x8(%ebp),%eax
085e5975 +0x81:  mov    %eax,(%esp)
085e5978 +0x84:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e597d +0x89:  lea    -0x14(%ebp),%eax
085e5980 +0x8c:  mov    %eax,0x10(%esp)
085e5984 +0x90:  mov    0x10(%ebp),%eax
085e5987 +0x93:  mov    %eax,0xc(%esp)
085e598b +0x97:  mov    0xc(%ebp),%eax
085e598e +0x9a:  mov    %eax,0x8(%esp)
085e5992 +0x9e:  movl   $0x19,0x4(%esp)
085e599a +0xa6:  mov    0x8(%ebp),%eax
085e599d +0xa9:  mov    %eax,(%esp)
085e59a0 +0xac:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e59a5 +0xb1:  lea    -0x14(%ebp),%eax
085e59a8 +0xb4:  mov    %eax,0x8(%esp)
085e59ac +0xb8:  mov    0xc(%ebp),%eax
085e59af +0xbb:  mov    %eax,0x4(%esp)
085e59b3 +0xbf:  mov    0x8(%ebp),%eax
085e59b6 +0xc2:  mov    %eax,(%esp)
085e59b9 +0xc5:  call   085e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>  ; CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
085e59be +0xca:  jmp    085e59db <+0xe7>
085e59c0 +0xcc:  mov    %edx,%ebx
085e59c2 +0xce:  mov    %eax,%esi
085e59c4 +0xd0:  lea    -0x14(%ebp),%eax
085e59c7 +0xd3:  mov    %eax,(%esp)
085e59ca +0xd6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e59cf +0xdb:  mov    %esi,%eax
085e59d1 +0xdd:  mov    %ebx,%edx
085e59d3 +0xdf:  mov    %eax,(%esp)
085e59d6 +0xe2:  call   08ae3750 <_Unwind_Resume>
085e59db +0xe7:  lea    -0x14(%ebp),%eax
085e59de +0xea:  mov    %eax,(%esp)
085e59e1 +0xed:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e59e6 +0xf2:  jmp    085e59e9 <+0xf5>
085e59e8 +0xf4:  nop
085e59e9 +0xf5:  add    $0x30,%esp
085e59ec +0xf8:  pop    %ebx
085e59ed +0xf9:  pop    %esi
085e59ee +0xfa:  pop    %ebp
085e59ef +0xfb:  ret
```

## 反编译 C

```c
// CMissionList_Charac::Update_Kill_event @ 0x85e58f4

/* CMissionList_Charac::Update_Kill_event(CUser&, MissionClearCondition_Parameter const&) */

void __thiscall
CMissionList_Charac::Update_Kill_event
          (CMissionList_Charac *this,CUser *param_1,MissionClearCondition_Parameter *param_2)

{
  GameWorld *this_00;
  int iVar1;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 0xf) {
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 085e5950 to 085e59bd has its CatchHandler @ 085e59c0 */
    check_mission_kind(this,5,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0xf,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x19,param_1,param_2,(vector *)local_18);
    Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}
```
