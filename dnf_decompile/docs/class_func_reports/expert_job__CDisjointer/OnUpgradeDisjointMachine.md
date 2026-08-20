# OnUpgradeDisjointMachine

`_ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser`

`expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d37e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d37e8  _ZN10expert_job11CDisjointer24OnUpgradeDisjointMachineEP5CUser
#           expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser*)
# range [0x085d37e8, 0x085d3aca]
085d37e8 +0x000:  push   %ebp
085d37e9 +0x001:  mov    %esp,%ebp
085d37eb +0x003:  push   %esi
085d37ec +0x004:  push   %ebx
085d37ed +0x005:  sub    $0x40,%esp
085d37f0 +0x008:  movl   $0x0,0x4(%esp)
085d37f8 +0x010:  mov    0x8(%ebp),%eax
085d37fb +0x013:  mov    %eax,(%esp)
085d37fe +0x016:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3803 +0x01b:  mov    %eax,(%esp)
085d3806 +0x01e:  call   085d3e8e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x383>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x383
085d380b +0x023:  mov    %eax,-0x18(%ebp)
085d380e +0x026:  mov    -0x18(%ebp),%eax
085d3811 +0x029:  lea    0x1(%eax),%ebx
085d3814 +0x02c:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d3819 +0x031:  mov    %eax,(%esp)
085d381c +0x034:  call   085d3c0e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x103>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x103
085d3821 +0x039:  cmp    %eax,%ebx
085d3823 +0x03b:  setge  %al
085d3826 +0x03e:  test   %al,%al
085d3828 +0x040:  je     085d3834 <+0x4c>
085d382a +0x042:  mov    $0x13,%ebx
085d382f +0x047:  jmp    085d3abf <+0x2d7>
085d3834 +0x04c:  mov    0x8(%ebp),%eax
085d3837 +0x04f:  mov    %eax,(%esp)
085d383a +0x052:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085d383f +0x057:  mov    %eax,0x4(%esp)
085d3843 +0x05b:  mov    0x8(%ebp),%eax
085d3846 +0x05e:  mov    %eax,(%esp)
085d3849 +0x061:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
085d384e +0x066:  mov    %eax,-0x14(%ebp)
085d3851 +0x069:  mov    -0x18(%ebp),%eax
085d3854 +0x06c:  add    $0x1,%eax
085d3857 +0x06f:  cmp    -0x14(%ebp),%eax
085d385a +0x072:  jl     085d3866 <+0x7e>
085d385c +0x074:  mov    $0x13,%ebx
085d3861 +0x079:  jmp    085d3abf <+0x2d7>
085d3866 +0x07e:  mov    -0x18(%ebp),%eax
085d3869 +0x081:  add    $0x2,%eax
085d386c +0x084:  mov    %al,-0x1d(%ebp)
085d386f +0x087:  call   085d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>  ; expert_job::CDisjointer::GetEtcScript()
085d3874 +0x08c:  mov    %eax,%edx
085d3876 +0x08e:  lea    -0x24(%ebp),%eax
085d3879 +0x091:  lea    -0x1d(%ebp),%ecx
085d387c +0x094:  mov    %ecx,0x8(%esp)
085d3880 +0x098:  mov    %edx,0x4(%esp)
085d3884 +0x09c:  mov    %eax,(%esp)
085d3887 +0x09f:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
085d388c +0x0a4:  sub    $0x4,%esp
085d388f +0x0a7:  call   085d1e3a <_ZN10expert_job11CDisjointer12GetEtcScriptEv>  ; expert_job::CDisjointer::GetEtcScript()
085d3894 +0x0ac:  mov    %eax,%edx
085d3896 +0x0ae:  lea    -0x1c(%ebp),%eax
085d3899 +0x0b1:  mov    %edx,0x4(%esp)
085d389d +0x0b5:  mov    %eax,(%esp)
085d38a0 +0x0b8:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
085d38a5 +0x0bd:  sub    $0x4,%esp
085d38a8 +0x0c0:  lea    -0x1c(%ebp),%eax
085d38ab +0x0c3:  mov    %eax,0x4(%esp)
085d38af +0x0c7:  lea    -0x24(%ebp),%eax
085d38b2 +0x0ca:  mov    %eax,(%esp)
085d38b5 +0x0cd:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
085d38ba +0x0d2:  test   %al,%al
085d38bc +0x0d4:  je     085d38ee <+0x106>
085d38be +0x0d6:  lea    -0x24(%ebp),%eax
085d38c1 +0x0d9:  mov    %eax,(%esp)
085d38c4 +0x0dc:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085d38c9 +0x0e1:  movzwl 0x2(%eax),%eax
085d38cd +0x0e5:  movswl %ax,%ebx
085d38d0 +0x0e8:  mov    0x8(%ebp),%eax
085d38d3 +0x0eb:  mov    %eax,(%esp)
085d38d6 +0x0ee:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085d38db +0x0f3:  cmp    %eax,%ebx
085d38dd +0x0f5:  setg   %al
085d38e0 +0x0f8:  test   %al,%al
085d38e2 +0x0fa:  je     085d38f8 <+0x110>
085d38e4 +0x0fc:  mov    $0xe,%ebx
085d38e9 +0x101:  jmp    085d3abf <+0x2d7>
085d38ee +0x106:  mov    $0x13,%ebx
085d38f3 +0x10b:  jmp    085d3abf <+0x2d7>
085d38f8 +0x110:  addl   $0x1,-0x18(%ebp)
085d38fc +0x114:  mov    -0x18(%ebp),%ebx
085d38ff +0x117:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d3904 +0x11c:  mov    %ebx,0x4(%esp)
085d3908 +0x120:  mov    %eax,(%esp)
085d390b +0x123:  call   085d3d3a <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x22f>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x22f
085d3910 +0x128:  mov    %eax,-0x10(%ebp)
085d3913 +0x12b:  cmpl   $0x0,-0x10(%ebp)
085d3917 +0x12f:  js     085d391f <+0x137>
085d3919 +0x131:  cmpl   $0x0,-0x10(%ebp)
085d391d +0x135:  jne    085d3929 <+0x141>
085d391f +0x137:  mov    $0x16,%ebx
085d3924 +0x13c:  jmp    085d3abf <+0x2d7>
085d3929 +0x141:  mov    0x8(%ebp),%eax
085d392c +0x144:  mov    %eax,(%esp)
085d392f +0x147:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d3934 +0x14c:  cmp    -0x10(%ebp),%eax
085d3937 +0x14f:  setl   %al
085d393a +0x152:  test   %al,%al
085d393c +0x154:  je     085d3948 <+0x160>
085d393e +0x156:  mov    $0x16,%ebx
085d3943 +0x15b:  jmp    085d3abf <+0x2d7>
085d3948 +0x160:  mov    0x8(%ebp),%eax
085d394b +0x163:  mov    %eax,(%esp)
085d394e +0x166:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085d3953 +0x16b:  movl   $0x1,0xc(%esp)
085d395b +0x173:  movl   $0x20,0x8(%esp)
085d3963 +0x17b:  mov    -0x10(%ebp),%edx
085d3966 +0x17e:  mov    %edx,0x4(%esp)
085d396a +0x182:  mov    %eax,(%esp)
085d396d +0x185:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085d3972 +0x18a:  movl   $0x0,0x4(%esp)
085d397a +0x192:  mov    0x8(%ebp),%eax
085d397d +0x195:  mov    %eax,(%esp)
085d3980 +0x198:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3985 +0x19d:  mov    -0x18(%ebp),%edx
085d3988 +0x1a0:  mov    %edx,0x4(%esp)
085d398c +0x1a4:  mov    %eax,(%esp)
085d398f +0x1a7:  call   085d3e9a <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x38f>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x38f
085d3994 +0x1ac:  mov    -0x18(%ebp),%eax
085d3997 +0x1af:  add    $0x1,%eax
085d399a +0x1b2:  mov    %eax,%ebx
085d399c +0x1b4:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d39a1 +0x1b9:  mov    %ebx,0x4(%esp)
085d39a5 +0x1bd:  mov    %eax,(%esp)
085d39a8 +0x1c0:  call   085d3c26 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x11b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x11b
085d39ad +0x1c5:  mov    %eax,-0xc(%ebp)
085d39b0 +0x1c8:  cmpl   $0x0,-0xc(%ebp)
085d39b4 +0x1cc:  je     085d39db <+0x1f3>
085d39b6 +0x1ce:  mov    -0xc(%ebp),%eax
085d39b9 +0x1d1:  mov    0x4(%eax),%ebx
085d39bc +0x1d4:  movl   $0x0,0x4(%esp)
085d39c4 +0x1dc:  mov    0x8(%ebp),%eax
085d39c7 +0x1df:  mov    %eax,(%esp)
085d39ca +0x1e2:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d39cf +0x1e7:  mov    %ebx,0x4(%esp)
085d39d3 +0x1eb:  mov    %eax,(%esp)
085d39d6 +0x1ee:  call   085d3e72 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x367>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x367
085d39db +0x1f3:  lea    -0x30(%ebp),%eax
085d39de +0x1f6:  mov    %eax,(%esp)
085d39e1 +0x1f9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d39e6 +0x1fe:  movl   $0xf4,0x8(%esp)
085d39ee +0x206:  movl   $0x1,0x4(%esp)
085d39f6 +0x20e:  lea    -0x30(%ebp),%eax
085d39f9 +0x211:  mov    %eax,(%esp)
085d39fc +0x214:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d3a01 +0x219:  movl   $0x1,0x4(%esp)
085d3a09 +0x221:  lea    -0x30(%ebp),%eax
085d3a0c +0x224:  mov    %eax,(%esp)
085d3a0f +0x227:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d3a14 +0x22c:  mov    0x8(%ebp),%eax
085d3a17 +0x22f:  mov    %eax,(%esp)
085d3a1a +0x232:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d3a1f +0x237:  mov    %eax,0x4(%esp)
085d3a23 +0x23b:  lea    -0x30(%ebp),%eax
085d3a26 +0x23e:  mov    %eax,(%esp)
085d3a29 +0x241:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3a2e +0x246:  mov    -0x18(%ebp),%eax
085d3a31 +0x249:  add    $0x1,%eax
085d3a34 +0x24c:  mov    %eax,0x4(%esp)
085d3a38 +0x250:  lea    -0x30(%ebp),%eax
085d3a3b +0x253:  mov    %eax,(%esp)
085d3a3e +0x256:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3a43 +0x25b:  movl   $0x0,0x4(%esp)
085d3a4b +0x263:  mov    0x8(%ebp),%eax
085d3a4e +0x266:  mov    %eax,(%esp)
085d3a51 +0x269:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3a56 +0x26e:  mov    %eax,(%esp)
085d3a59 +0x271:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d3a5e +0x276:  mov    %eax,0x4(%esp)
085d3a62 +0x27a:  lea    -0x30(%ebp),%eax
085d3a65 +0x27d:  mov    %eax,(%esp)
085d3a68 +0x280:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3a6d +0x285:  movl   $0x1,0x4(%esp)
085d3a75 +0x28d:  lea    -0x30(%ebp),%eax
085d3a78 +0x290:  mov    %eax,(%esp)
085d3a7b +0x293:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d3a80 +0x298:  lea    -0x30(%ebp),%eax
085d3a83 +0x29b:  mov    %eax,0x4(%esp)
085d3a87 +0x29f:  mov    0x8(%ebp),%eax
085d3a8a +0x2a2:  mov    %eax,(%esp)
085d3a8d +0x2a5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d3a92 +0x2aa:  mov    $0x0,%ebx
085d3a97 +0x2af:  lea    -0x30(%ebp),%eax
085d3a9a +0x2b2:  mov    %eax,(%esp)
085d3a9d +0x2b5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d3aa2 +0x2ba:  jmp    085d3abf <+0x2d7>
085d3aa4 +0x2bc:  mov    %edx,%ebx
085d3aa6 +0x2be:  mov    %eax,%esi
085d3aa8 +0x2c0:  lea    -0x30(%ebp),%eax
085d3aab +0x2c3:  mov    %eax,(%esp)
085d3aae +0x2c6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d3ab3 +0x2cb:  mov    %esi,%eax
085d3ab5 +0x2cd:  mov    %ebx,%edx
085d3ab7 +0x2cf:  mov    %eax,(%esp)
085d3aba +0x2d2:  call   08ae3750 <_Unwind_Resume>
085d3abf +0x2d7:  mov    %ebx,%eax
085d3ac1 +0x2d9:  lea    -0x8(%ebp),%esp
085d3ac4 +0x2dc:  add    $0x0,%esp
085d3ac7 +0x2df:  pop    %ebx
085d3ac8 +0x2e0:  pop    %esi
085d3ac9 +0x2e1:  pop    %ebp
085d3aca +0x2e2:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::OnUpgradeDisjointMachine @ 0x85d37e8

/* expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser*) */

undefined4 expert_job::CDisjointer::OnUpgradeDisjointMachine(CUser *param_1)

{
  short sVar1;
  char cVar2;
  CCharacExpertJob *pCVar3;
  STExpertJobScript *pSVar4;
  int iVar5;
  int iVar6;
  CInventory *pCVar7;
  uint uVar8;
  undefined4 uVar9;
  PacketGuard local_34 [12];
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_28 [7];
  char local_21;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_20 [4];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_1c = CCharacExpertJob::get_disjoint_machine_grade(pCVar3);
  iVar6 = local_1c + 1;
  pSVar4 = (STExpertJobScript *)GetScript();
  iVar5 = STExpertJobScript::GetDisjointMachineMaxGrade(pSVar4);
  if (iVar6 < iVar5) {
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
    local_18 = CUser::GetCurExpertJobLevel(param_1,iVar6);
    if ((int)(local_1c + 1) < local_18) {
      local_21 = (char)local_1c + '\x02';
      GetEtcScript();
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::find((uchar *)local_28);
      GetEtcScript();
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                        (local_28,(_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') {
        uVar9 = 0x13;
      }
      else {
        iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_28);
        sVar1 = *(short *)(iVar6 + 2);
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        if (iVar6 < sVar1) {
          uVar9 = 0xe;
        }
        else {
          uVar8 = local_1c + 1;
          local_1c = uVar8;
          pSVar4 = (STExpertJobScript *)GetScript();
          local_14 = STExpertJobScript::GetUpgradeCost(pSVar4,uVar8);
          if ((local_14 < 0) || (local_14 == 0)) {
            uVar9 = 0x16;
          }
          else {
            iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
            if (iVar6 < local_14) {
              uVar9 = 0x16;
            }
            else {
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::use_money(pCVar7,local_14,0x20,1);
              pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
              CCharacExpertJob::set_disjoint_machine_grade(pCVar3,local_1c);
              uVar8 = local_1c + 1;
              pSVar4 = (STExpertJobScript *)GetScript();
              local_10 = STExpertJobScript::_GetEnduranceRepairCost(pSVar4,uVar8);
              if (local_10 != 0) {
                iVar6 = *(int *)(local_10 + 4);
                pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
                CCharacExpertJob::set_disjoint_machine_endurance(pCVar3,iVar6);
              }
              PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085d39fc to 085d3a91 has its CatchHandler @ 085d3aa4 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xf4);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
              iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar6);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_1c + 1);
              pCVar3 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
              iVar6 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar3);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar6);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
              CUser::Send(param_1,local_34);
              uVar9 = 0;
              PacketGuard::~PacketGuard(local_34);
            }
          }
        }
      }
    }
    else {
      uVar9 = 0x13;
    }
  }
  else {
    uVar9 = 0x13;
  }
  return uVar9;
}
```
