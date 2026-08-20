# Update_Win_event

`_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb`

`CMissionList_Charac::Update_Win_event(CUser&, MissionClearCondition_Parameter const&, bool&)`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e59f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e59f0  _ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb
#           CMissionList_Charac::Update_Win_event(CUser&, MissionClearCondition_Parameter const&, bool&)
# range [0x085e59f0, 0x085e5ca9]
085e59f0 +0x000:  push   %ebp
085e59f1 +0x001:  mov    %esp,%ebp
085e59f3 +0x003:  push   %esi
085e59f4 +0x004:  push   %ebx
085e59f5 +0x005:  sub    $0x30,%esp
085e59f8 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085e59fd +0x00d:  mov    %eax,(%esp)
085e5a00 +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085e5a05 +0x015:  cmp    $0xf,%eax
085e5a08 +0x018:  setne  %al
085e5a0b +0x01b:  test   %al,%al
085e5a0d +0x01d:  jne    085e5c9b <+0x2ab>
085e5a13 +0x023:  mov    0x14(%ebp),%eax
085e5a16 +0x026:  mov    %eax,0xc(%esp)
085e5a1a +0x02a:  mov    0x10(%ebp),%eax
085e5a1d +0x02d:  mov    %eax,0x8(%esp)
085e5a21 +0x031:  mov    0xc(%ebp),%eax
085e5a24 +0x034:  mov    %eax,0x4(%esp)
085e5a28 +0x038:  mov    0x8(%ebp),%eax
085e5a2b +0x03b:  mov    %eax,(%esp)
085e5a2e +0x03e:  call   085e7130 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8b8>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8b8
085e5a33 +0x043:  mov    0x8(%ebp),%eax
085e5a36 +0x046:  mov    %eax,(%esp)
085e5a39 +0x049:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085e5a3e +0x04e:  mov    0x14(%ebp),%eax
085e5a41 +0x051:  movzbl (%eax),%eax
085e5a44 +0x054:  test   %al,%al
085e5a46 +0x056:  jne    085e5c9e <+0x2ae>
085e5a4c +0x05c:  movl   $0x1b,0x4(%esp)
085e5a54 +0x064:  mov    0x8(%ebp),%eax
085e5a57 +0x067:  mov    %eax,(%esp)
085e5a5a +0x06a:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e5a5f +0x06f:  test   %ax,%ax
085e5a62 +0x072:  setne  %al
085e5a65 +0x075:  test   %al,%al
085e5a67 +0x077:  jne    085e5ca1 <+0x2b1>
085e5a6d +0x07d:  lea    -0x14(%ebp),%eax
085e5a70 +0x080:  mov    %eax,(%esp)
085e5a73 +0x083:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085e5a78 +0x088:  lea    -0x14(%ebp),%eax
085e5a7b +0x08b:  mov    %eax,0x10(%esp)
085e5a7f +0x08f:  mov    0x10(%ebp),%eax
085e5a82 +0x092:  mov    %eax,0xc(%esp)
085e5a86 +0x096:  mov    0xc(%ebp),%eax
085e5a89 +0x099:  mov    %eax,0x8(%esp)
085e5a8d +0x09d:  movl   $0x2,0x4(%esp)
085e5a95 +0x0a5:  mov    0x8(%ebp),%eax
085e5a98 +0x0a8:  mov    %eax,(%esp)
085e5a9b +0x0ab:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5aa0 +0x0b0:  lea    -0x14(%ebp),%eax
085e5aa3 +0x0b3:  mov    %eax,0x10(%esp)
085e5aa7 +0x0b7:  mov    0x10(%ebp),%eax
085e5aaa +0x0ba:  mov    %eax,0xc(%esp)
085e5aae +0x0be:  mov    0xc(%ebp),%eax
085e5ab1 +0x0c1:  mov    %eax,0x8(%esp)
085e5ab5 +0x0c5:  movl   $0x4,0x4(%esp)
085e5abd +0x0cd:  mov    0x8(%ebp),%eax
085e5ac0 +0x0d0:  mov    %eax,(%esp)
085e5ac3 +0x0d3:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5ac8 +0x0d8:  lea    -0x14(%ebp),%eax
085e5acb +0x0db:  mov    %eax,0x10(%esp)
085e5acf +0x0df:  mov    0x10(%ebp),%eax
085e5ad2 +0x0e2:  mov    %eax,0xc(%esp)
085e5ad6 +0x0e6:  mov    0xc(%ebp),%eax
085e5ad9 +0x0e9:  mov    %eax,0x8(%esp)
085e5add +0x0ed:  movl   $0x9,0x4(%esp)
085e5ae5 +0x0f5:  mov    0x8(%ebp),%eax
085e5ae8 +0x0f8:  mov    %eax,(%esp)
085e5aeb +0x0fb:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5af0 +0x100:  lea    -0x14(%ebp),%eax
085e5af3 +0x103:  mov    %eax,0x10(%esp)
085e5af7 +0x107:  mov    0x10(%ebp),%eax
085e5afa +0x10a:  mov    %eax,0xc(%esp)
085e5afe +0x10e:  mov    0xc(%ebp),%eax
085e5b01 +0x111:  mov    %eax,0x8(%esp)
085e5b05 +0x115:  movl   $0xa,0x4(%esp)
085e5b0d +0x11d:  mov    0x8(%ebp),%eax
085e5b10 +0x120:  mov    %eax,(%esp)
085e5b13 +0x123:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5b18 +0x128:  lea    -0x14(%ebp),%eax
085e5b1b +0x12b:  mov    %eax,0x10(%esp)
085e5b1f +0x12f:  mov    0x10(%ebp),%eax
085e5b22 +0x132:  mov    %eax,0xc(%esp)
085e5b26 +0x136:  mov    0xc(%ebp),%eax
085e5b29 +0x139:  mov    %eax,0x8(%esp)
085e5b2d +0x13d:  movl   $0xc,0x4(%esp)
085e5b35 +0x145:  mov    0x8(%ebp),%eax
085e5b38 +0x148:  mov    %eax,(%esp)
085e5b3b +0x14b:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5b40 +0x150:  lea    -0x14(%ebp),%eax
085e5b43 +0x153:  mov    %eax,0x10(%esp)
085e5b47 +0x157:  mov    0x10(%ebp),%eax
085e5b4a +0x15a:  mov    %eax,0xc(%esp)
085e5b4e +0x15e:  mov    0xc(%ebp),%eax
085e5b51 +0x161:  mov    %eax,0x8(%esp)
085e5b55 +0x165:  movl   $0xe,0x4(%esp)
085e5b5d +0x16d:  mov    0x8(%ebp),%eax
085e5b60 +0x170:  mov    %eax,(%esp)
085e5b63 +0x173:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5b68 +0x178:  lea    -0x14(%ebp),%eax
085e5b6b +0x17b:  mov    %eax,0x10(%esp)
085e5b6f +0x17f:  mov    0x10(%ebp),%eax
085e5b72 +0x182:  mov    %eax,0xc(%esp)
085e5b76 +0x186:  mov    0xc(%ebp),%eax
085e5b79 +0x189:  mov    %eax,0x8(%esp)
085e5b7d +0x18d:  movl   $0x11,0x4(%esp)
085e5b85 +0x195:  mov    0x8(%ebp),%eax
085e5b88 +0x198:  mov    %eax,(%esp)
085e5b8b +0x19b:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5b90 +0x1a0:  lea    -0x14(%ebp),%eax
085e5b93 +0x1a3:  mov    %eax,0x10(%esp)
085e5b97 +0x1a7:  mov    0x10(%ebp),%eax
085e5b9a +0x1aa:  mov    %eax,0xc(%esp)
085e5b9e +0x1ae:  mov    0xc(%ebp),%eax
085e5ba1 +0x1b1:  mov    %eax,0x8(%esp)
085e5ba5 +0x1b5:  movl   $0x13,0x4(%esp)
085e5bad +0x1bd:  mov    0x8(%ebp),%eax
085e5bb0 +0x1c0:  mov    %eax,(%esp)
085e5bb3 +0x1c3:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5bb8 +0x1c8:  lea    -0x14(%ebp),%eax
085e5bbb +0x1cb:  mov    %eax,0x10(%esp)
085e5bbf +0x1cf:  mov    0x10(%ebp),%eax
085e5bc2 +0x1d2:  mov    %eax,0xc(%esp)
085e5bc6 +0x1d6:  mov    0xc(%ebp),%eax
085e5bc9 +0x1d9:  mov    %eax,0x8(%esp)
085e5bcd +0x1dd:  movl   $0x14,0x4(%esp)
085e5bd5 +0x1e5:  mov    0x8(%ebp),%eax
085e5bd8 +0x1e8:  mov    %eax,(%esp)
085e5bdb +0x1eb:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5be0 +0x1f0:  lea    -0x14(%ebp),%eax
085e5be3 +0x1f3:  mov    %eax,0x10(%esp)
085e5be7 +0x1f7:  mov    0x10(%ebp),%eax
085e5bea +0x1fa:  mov    %eax,0xc(%esp)
085e5bee +0x1fe:  mov    0xc(%ebp),%eax
085e5bf1 +0x201:  mov    %eax,0x8(%esp)
085e5bf5 +0x205:  movl   $0x16,0x4(%esp)
085e5bfd +0x20d:  mov    0x8(%ebp),%eax
085e5c00 +0x210:  mov    %eax,(%esp)
085e5c03 +0x213:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5c08 +0x218:  lea    -0x14(%ebp),%eax
085e5c0b +0x21b:  mov    %eax,0x10(%esp)
085e5c0f +0x21f:  mov    0x10(%ebp),%eax
085e5c12 +0x222:  mov    %eax,0xc(%esp)
085e5c16 +0x226:  mov    0xc(%ebp),%eax
085e5c19 +0x229:  mov    %eax,0x8(%esp)
085e5c1d +0x22d:  movl   $0x18,0x4(%esp)
085e5c25 +0x235:  mov    0x8(%ebp),%eax
085e5c28 +0x238:  mov    %eax,(%esp)
085e5c2b +0x23b:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5c30 +0x240:  lea    -0x14(%ebp),%eax
085e5c33 +0x243:  mov    %eax,0x10(%esp)
085e5c37 +0x247:  mov    0x10(%ebp),%eax
085e5c3a +0x24a:  mov    %eax,0xc(%esp)
085e5c3e +0x24e:  mov    0xc(%ebp),%eax
085e5c41 +0x251:  mov    %eax,0x8(%esp)
085e5c45 +0x255:  movl   $0x1a,0x4(%esp)
085e5c4d +0x25d:  mov    0x8(%ebp),%eax
085e5c50 +0x260:  mov    %eax,(%esp)
085e5c53 +0x263:  call   085e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>  ; CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter const&, std::vector<int, std::allocator<int> >&)
085e5c58 +0x268:  lea    -0x14(%ebp),%eax
085e5c5b +0x26b:  mov    %eax,0x8(%esp)
085e5c5f +0x26f:  mov    0xc(%ebp),%eax
085e5c62 +0x272:  mov    %eax,0x4(%esp)
085e5c66 +0x276:  mov    0x8(%ebp),%eax
085e5c69 +0x279:  mov    %eax,(%esp)
085e5c6c +0x27c:  call   085e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>  ; CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> > const&)
085e5c71 +0x281:  jmp    085e5c8e <+0x29e>
085e5c73 +0x283:  mov    %edx,%ebx
085e5c75 +0x285:  mov    %eax,%esi
085e5c77 +0x287:  lea    -0x14(%ebp),%eax
085e5c7a +0x28a:  mov    %eax,(%esp)
085e5c7d +0x28d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e5c82 +0x292:  mov    %esi,%eax
085e5c84 +0x294:  mov    %ebx,%edx
085e5c86 +0x296:  mov    %eax,(%esp)
085e5c89 +0x299:  call   08ae3750 <_Unwind_Resume>
085e5c8e +0x29e:  lea    -0x14(%ebp),%eax
085e5c91 +0x2a1:  mov    %eax,(%esp)
085e5c94 +0x2a4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085e5c99 +0x2a9:  jmp    085e5ca2 <+0x2b2>
085e5c9b +0x2ab:  nop
085e5c9c +0x2ac:  jmp    085e5ca2 <+0x2b2>
085e5c9e +0x2ae:  nop
085e5c9f +0x2af:  jmp    085e5ca2 <+0x2b2>
085e5ca1 +0x2b1:  nop
085e5ca2 +0x2b2:  add    $0x30,%esp
085e5ca5 +0x2b5:  pop    %ebx
085e5ca6 +0x2b6:  pop    %esi
085e5ca7 +0x2b7:  pop    %ebp
085e5ca8 +0x2b8:  ret
085e5ca9 +0x2b9:  nop
```

## 反编译 C

```c
// CMissionList_Charac::Update_Win_event @ 0x85e59f0

/* CMissionList_Charac::Update_Win_event(CUser&, MissionClearCondition_Parameter const&, bool&) */

void __thiscall
CMissionList_Charac::Update_Win_event
          (CMissionList_Charac *this,CUser *param_1,MissionClearCondition_Parameter *param_2,
          bool *param_3)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::GetChannelType(this_00);
  if (iVar2 == 0xf) {
    Update_Within_Mission_event(this,param_1,param_2,param_3);
    charac_expand::CData::alter((CData *)this);
    if ((*param_3 == false) && (sVar1 = getIndex_byKind(this,0x1b), sVar1 == 0)) {
      std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 085e5a9b to 085e5c70 has its CatchHandler @ 085e5c73 */
      check_mission_kind(this,2,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,4,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,9,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,10,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0xc,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0xe,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x11,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x13,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x14,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x16,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x18,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x1a,param_1,param_2,(vector *)local_18);
      Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
      std::vector<int,std::allocator<int>>::~vector(local_18);
    }
  }
  return;
}
```
