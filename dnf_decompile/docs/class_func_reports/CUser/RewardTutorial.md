# RewardTutorial

`_ZN5CUser14RewardTutorialEj`

`CUser::RewardTutorial(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086475d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086475d8  _ZN5CUser14RewardTutorialEj
#           CUser::RewardTutorial(unsigned int)
# range [0x086475d8, 0x0864781d]
086475d8 +0x000:  push   %ebp
086475d9 +0x001:  mov    %esp,%ebp
086475db +0x003:  push   %esi
086475dc +0x004:  push   %ebx
086475dd +0x005:  sub    $0x60,%esp
086475e0 +0x008:  lea    -0x2c(%ebp),%eax
086475e3 +0x00b:  mov    %eax,(%esp)
086475e6 +0x00e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
086475eb +0x013:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086475f0 +0x018:  lea    0x68(%eax),%edx
086475f3 +0x01b:  mov    0xc(%ebp),%eax
086475f6 +0x01e:  mov    %eax,0x4(%esp)
086475fa +0x022:  mov    %edx,(%esp)
086475fd +0x025:  call   08a8c5f2 <_ZN21ServerParameterScript25GetEscaladeTutorialRewardEj>  ; ServerParameterScript::GetEscaladeTutorialReward(unsigned int)
08647602 +0x02a:  mov    %eax,-0x10(%ebp)
08647605 +0x02d:  cmpl   $0x0,-0x10(%ebp)
08647609 +0x031:  je     08647808 <+0x230>
0864760f +0x037:  mov    0x8(%ebp),%eax
08647612 +0x03a:  mov    %eax,(%esp)
08647615 +0x03d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864761a +0x042:  movl   $"",0x1c(%esp)
08647622 +0x04a:  movl   $"",0x18(%esp)
0864762a +0x052:  movl   $0x1,0x14(%esp)
08647632 +0x05a:  movl   $0x8,0x10(%esp)
0864763a +0x062:  movl   $0x3,0xc(%esp)
08647642 +0x06a:  lea    -0x2c(%ebp),%edx
08647645 +0x06d:  mov    %edx,0x8(%esp)
08647649 +0x071:  mov    -0x10(%ebp),%edx
0864764c +0x074:  mov    %edx,0x4(%esp)
08647650 +0x078:  mov    %eax,(%esp)
08647653 +0x07b:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
08647658 +0x080:  mov    %eax,-0xc(%ebp)
0864765b +0x083:  lea    -0x38(%ebp),%eax
0864765e +0x086:  mov    %eax,(%esp)
08647661 +0x089:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08647666 +0x08e:  movl   $0x92,0x8(%esp)
0864766e +0x096:  movl   $0x1,0x4(%esp)
08647676 +0x09e:  lea    -0x38(%ebp),%eax
08647679 +0x0a1:  mov    %eax,(%esp)
0864767c +0x0a4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08647681 +0x0a9:  movl   $0x1,0x4(%esp)
08647689 +0x0b1:  lea    -0x38(%ebp),%eax
0864768c +0x0b4:  mov    %eax,(%esp)
0864768f +0x0b7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08647694 +0x0bc:  mov    -0xc(%ebp),%eax
08647697 +0x0bf:  mov    %eax,0x4(%esp)
0864769b +0x0c3:  lea    -0x38(%ebp),%eax
0864769e +0x0c6:  mov    %eax,(%esp)
086476a1 +0x0c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086476a6 +0x0ce:  cmpl   $0x0,-0xc(%ebp)
086476aa +0x0d2:  jle    086477a4 <+0x1cc>
086476b0 +0x0d8:  lea    -0x3c(%ebp),%eax
086476b3 +0x0db:  lea    -0x2c(%ebp),%edx
086476b6 +0x0de:  mov    %edx,0x4(%esp)
086476ba +0x0e2:  mov    %eax,(%esp)
086476bd +0x0e5:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
086476c2 +0x0ea:  sub    $0x4,%esp
086476c5 +0x0ed:  jmp    08647775 <+0x19d>
086476ca +0x0f2:  lea    -0x3c(%ebp),%eax
086476cd +0x0f5:  mov    %eax,(%esp)
086476d0 +0x0f8:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086476d5 +0x0fd:  mov    (%eax),%eax
086476d7 +0x0ff:  mov    %eax,0x4(%esp)
086476db +0x103:  lea    -0x38(%ebp),%eax
086476de +0x106:  mov    %eax,(%esp)
086476e1 +0x109:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086476e6 +0x10e:  lea    -0x1c(%ebp),%eax
086476e9 +0x111:  movl   $0x0,0x8(%esp)
086476f1 +0x119:  lea    -0x3c(%ebp),%edx
086476f4 +0x11c:  mov    %edx,0x4(%esp)
086476f8 +0x120:  mov    %eax,(%esp)
086476fb +0x123:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08647700 +0x128:  sub    $0x4,%esp
08647703 +0x12b:  lea    -0x3c(%ebp),%eax
08647706 +0x12e:  mov    %eax,(%esp)
08647709 +0x131:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0864770e +0x136:  mov    (%eax),%eax
08647710 +0x138:  mov    %eax,0x4(%esp)
08647714 +0x13c:  lea    -0x38(%ebp),%eax
08647717 +0x13f:  mov    %eax,(%esp)
0864771a +0x142:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0864771f +0x147:  lea    -0x18(%ebp),%eax
08647722 +0x14a:  movl   $0x0,0x8(%esp)
0864772a +0x152:  lea    -0x3c(%ebp),%edx
0864772d +0x155:  mov    %edx,0x4(%esp)
08647731 +0x159:  mov    %eax,(%esp)
08647734 +0x15c:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08647739 +0x161:  sub    $0x4,%esp
0864773c +0x164:  lea    -0x3c(%ebp),%eax
0864773f +0x167:  mov    %eax,(%esp)
08647742 +0x16a:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08647747 +0x16f:  mov    (%eax),%eax
08647749 +0x171:  mov    %eax,0x4(%esp)
0864774d +0x175:  lea    -0x38(%ebp),%eax
08647750 +0x178:  mov    %eax,(%esp)
08647753 +0x17b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08647758 +0x180:  lea    -0x14(%ebp),%eax
0864775b +0x183:  movl   $0x0,0x8(%esp)
08647763 +0x18b:  lea    -0x3c(%ebp),%edx
08647766 +0x18e:  mov    %edx,0x4(%esp)
0864776a +0x192:  mov    %eax,(%esp)
0864776d +0x195:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08647772 +0x19a:  sub    $0x4,%esp
08647775 +0x19d:  lea    -0x20(%ebp),%eax
08647778 +0x1a0:  lea    -0x2c(%ebp),%edx
0864777b +0x1a3:  mov    %edx,0x4(%esp)
0864777f +0x1a7:  mov    %eax,(%esp)
08647782 +0x1aa:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08647787 +0x1af:  sub    $0x4,%esp
0864778a +0x1b2:  lea    -0x20(%ebp),%eax
0864778d +0x1b5:  mov    %eax,0x4(%esp)
08647791 +0x1b9:  lea    -0x3c(%ebp),%eax
08647794 +0x1bc:  mov    %eax,(%esp)
08647797 +0x1bf:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0864779c +0x1c4:  test   %al,%al
0864779e +0x1c6:  jne    086476ca <+0xf2>
086477a4 +0x1cc:  movl   $0x1,0x4(%esp)
086477ac +0x1d4:  lea    -0x38(%ebp),%eax
086477af +0x1d7:  mov    %eax,(%esp)
086477b2 +0x1da:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086477b7 +0x1df:  lea    -0x38(%ebp),%eax
086477ba +0x1e2:  mov    %eax,0x4(%esp)
086477be +0x1e6:  mov    0x8(%ebp),%eax
086477c1 +0x1e9:  mov    %eax,(%esp)
086477c4 +0x1ec:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086477c9 +0x1f1:  jmp    086477e0 <+0x208>
086477cb +0x1f3:  mov    %edx,%ebx
086477cd +0x1f5:  mov    %eax,%esi
086477cf +0x1f7:  lea    -0x38(%ebp),%eax
086477d2 +0x1fa:  mov    %eax,(%esp)
086477d5 +0x1fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086477da +0x202:  mov    %esi,%eax
086477dc +0x204:  mov    %ebx,%edx
086477de +0x206:  jmp    086477ed <+0x215>
086477e0 +0x208:  lea    -0x38(%ebp),%eax
086477e3 +0x20b:  mov    %eax,(%esp)
086477e6 +0x20e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086477eb +0x213:  jmp    08647808 <+0x230>
086477ed +0x215:  mov    %edx,%ebx
086477ef +0x217:  mov    %eax,%esi
086477f1 +0x219:  lea    -0x2c(%ebp),%eax
086477f4 +0x21c:  mov    %eax,(%esp)
086477f7 +0x21f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
086477fc +0x224:  mov    %esi,%eax
086477fe +0x226:  mov    %ebx,%edx
08647800 +0x228:  mov    %eax,(%esp)
08647803 +0x22b:  call   08ae3750 <_Unwind_Resume>
08647808 +0x230:  lea    -0x2c(%ebp),%eax
0864780b +0x233:  mov    %eax,(%esp)
0864780e +0x236:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08647813 +0x23b:  lea    -0x8(%ebp),%esp
08647816 +0x23e:  add    $0x0,%esp
08647819 +0x241:  pop    %ebx
0864781a +0x242:  pop    %esi
0864781b +0x243:  pop    %ebp
0864781c +0x244:  ret
0864781d +0x245:  nop
```

## 反编译 C

```c
// CUser::RewardTutorial @ 0x86475d8

/* CUser::RewardTutorial(unsigned int) */

void __thiscall CUser::RewardTutorial(CUser *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  CInventory *pCVar3;
  int *piVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_40 [4];
  PacketGuard local_3c [12];
  vector<int,std::allocator<int>> local_30 [12];
  __normal_iterator local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  int local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 086475eb to 08647665 has its CatchHandler @ 086477ed */
  iVar2 = G_CDataManager();
  local_14 = ServerParameterScript::GetEscaladeTutorialReward
                       ((ServerParameterScript *)(iVar2 + 0x68),param_1);
  if (local_14 != 0) {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_10 = CInventory::insert_event_items
                         (pCVar3,local_14,local_30,3,8,1,&DAT_08cedf41,&DAT_08cedf41);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0864767c to 086477c8 has its CatchHandler @ 086477cb */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x92);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_10);
    if (0 < local_10) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_40,local_24);
        if (!bVar1) break;
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_40);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,*piVar4);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_20,(int)local_40);
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_40);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*piVar4);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_1c,(int)local_40);
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_40);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*piVar4);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_18,(int)local_40);
      }
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    Send(this,local_3c);
                    /* try { // try from 086477e6 to 086477ea has its CatchHandler @ 086477ed */
    PacketGuard::~PacketGuard(local_3c);
  }
  std::vector<int,std::allocator<int>>::~vector(local_30);
  return;
}
```
