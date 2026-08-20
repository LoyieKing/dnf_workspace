# OnRepairDisjointMachine

`_ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser`

`expert_job::CDisjointer::OnRepairDisjointMachine(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d35ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d35ce  _ZN10expert_job11CDisjointer23OnRepairDisjointMachineEP5CUser
#           expert_job::CDisjointer::OnRepairDisjointMachine(CUser*)
# range [0x085d35ce, 0x085d37e7]
085d35ce +0x000:  push   %ebp
085d35cf +0x001:  mov    %esp,%ebp
085d35d1 +0x003:  push   %esi
085d35d2 +0x004:  push   %ebx
085d35d3 +0x005:  sub    $0x30,%esp
085d35d6 +0x008:  movl   $0x0,-0x18(%ebp)
085d35dd +0x00f:  movl   $0x0,0x4(%esp)
085d35e5 +0x017:  mov    0x8(%ebp),%eax
085d35e8 +0x01a:  mov    %eax,(%esp)
085d35eb +0x01d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d35f0 +0x022:  mov    %eax,(%esp)
085d35f3 +0x025:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d35f8 +0x02a:  mov    %eax,-0x14(%ebp)
085d35fb +0x02d:  movl   $0x0,0x4(%esp)
085d3603 +0x035:  mov    0x8(%ebp),%eax
085d3606 +0x038:  mov    %eax,(%esp)
085d3609 +0x03b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d360e +0x040:  mov    %eax,(%esp)
085d3611 +0x043:  call   085d3e8e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x383>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x383
085d3616 +0x048:  mov    %eax,-0x10(%ebp)
085d3619 +0x04b:  mov    -0x10(%ebp),%eax
085d361c +0x04e:  lea    0x1(%eax),%ebx
085d361f +0x051:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d3624 +0x056:  mov    -0x14(%ebp),%edx
085d3627 +0x059:  mov    %edx,0x8(%esp)
085d362b +0x05d:  mov    %ebx,0x4(%esp)
085d362f +0x061:  mov    %eax,(%esp)
085d3632 +0x064:  call   085d3c74 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x169>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x169
085d3637 +0x069:  mov    %eax,-0x1c(%ebp)
085d363a +0x06c:  mov    0x8(%ebp),%eax
085d363d +0x06f:  mov    %eax,(%esp)
085d3640 +0x072:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d3645 +0x077:  mov    -0x1c(%ebp),%edx
085d3648 +0x07a:  cmp    %edx,%eax
085d364a +0x07c:  setl   %al
085d364d +0x07f:  test   %al,%al
085d364f +0x081:  je     085d3688 <+0xba>
085d3651 +0x083:  mov    0x8(%ebp),%eax
085d3654 +0x086:  mov    %eax,(%esp)
085d3657 +0x089:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d365c +0x08e:  mov    %eax,%ebx
085d365e +0x090:  mov    -0x10(%ebp),%eax
085d3661 +0x093:  lea    0x1(%eax),%esi
085d3664 +0x096:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d3669 +0x09b:  lea    -0x1c(%ebp),%edx
085d366c +0x09e:  mov    %edx,0xc(%esp)
085d3670 +0x0a2:  mov    %ebx,0x8(%esp)
085d3674 +0x0a6:  mov    %esi,0x4(%esp)
085d3678 +0x0aa:  mov    %eax,(%esp)
085d367b +0x0ad:  call   085d3cc8 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x1bd>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x1bd
085d3680 +0x0b2:  add    -0x14(%ebp),%eax
085d3683 +0x0b5:  mov    %eax,-0x18(%ebp)
085d3686 +0x0b8:  jmp    085d36b3 <+0xe5>
085d3688 +0x0ba:  mov    -0x10(%ebp),%eax
085d368b +0x0bd:  add    $0x1,%eax
085d368e +0x0c0:  mov    %eax,%ebx
085d3690 +0x0c2:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d3695 +0x0c7:  mov    %ebx,0x4(%esp)
085d3699 +0x0cb:  mov    %eax,(%esp)
085d369c +0x0ce:  call   085d3c26 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x11b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x11b
085d36a1 +0x0d3:  mov    %eax,-0xc(%ebp)
085d36a4 +0x0d6:  cmpl   $0x0,-0xc(%ebp)
085d36a8 +0x0da:  je     085d36b3 <+0xe5>
085d36aa +0x0dc:  mov    -0xc(%ebp),%eax
085d36ad +0x0df:  mov    0x4(%eax),%eax
085d36b0 +0x0e2:  mov    %eax,-0x18(%ebp)
085d36b3 +0x0e5:  cmpl   $0x0,-0x18(%ebp)
085d36b7 +0x0e9:  jg     085d36c3 <+0xf5>
085d36b9 +0x0eb:  mov    $0x16,%ebx
085d36be +0x0f0:  jmp    085d37de <+0x210>
085d36c3 +0x0f5:  mov    -0x1c(%ebp),%ebx
085d36c6 +0x0f8:  mov    0x8(%ebp),%eax
085d36c9 +0x0fb:  mov    %eax,(%esp)
085d36cc +0x0fe:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085d36d1 +0x103:  movl   $0x1,0xc(%esp)
085d36d9 +0x10b:  movl   $0x20,0x8(%esp)
085d36e1 +0x113:  mov    %ebx,0x4(%esp)
085d36e5 +0x117:  mov    %eax,(%esp)
085d36e8 +0x11a:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085d36ed +0x11f:  movl   $0x0,0x4(%esp)
085d36f5 +0x127:  mov    0x8(%ebp),%eax
085d36f8 +0x12a:  mov    %eax,(%esp)
085d36fb +0x12d:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3700 +0x132:  mov    -0x18(%ebp),%edx
085d3703 +0x135:  mov    %edx,0x4(%esp)
085d3707 +0x139:  mov    %eax,(%esp)
085d370a +0x13c:  call   085d3e72 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x367>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x367
085d370f +0x141:  lea    -0x28(%ebp),%eax
085d3712 +0x144:  mov    %eax,(%esp)
085d3715 +0x147:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d371a +0x14c:  movl   $0xf0,0x8(%esp)
085d3722 +0x154:  movl   $0x1,0x4(%esp)
085d372a +0x15c:  lea    -0x28(%ebp),%eax
085d372d +0x15f:  mov    %eax,(%esp)
085d3730 +0x162:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d3735 +0x167:  movl   $0x1,0x4(%esp)
085d373d +0x16f:  lea    -0x28(%ebp),%eax
085d3740 +0x172:  mov    %eax,(%esp)
085d3743 +0x175:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d3748 +0x17a:  mov    0x8(%ebp),%eax
085d374b +0x17d:  mov    %eax,(%esp)
085d374e +0x180:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d3753 +0x185:  mov    %eax,0x4(%esp)
085d3757 +0x189:  lea    -0x28(%ebp),%eax
085d375a +0x18c:  mov    %eax,(%esp)
085d375d +0x18f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3762 +0x194:  movl   $0x0,0x4(%esp)
085d376a +0x19c:  mov    0x8(%ebp),%eax
085d376d +0x19f:  mov    %eax,(%esp)
085d3770 +0x1a2:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3775 +0x1a7:  mov    %eax,(%esp)
085d3778 +0x1aa:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d377d +0x1af:  mov    %eax,0x4(%esp)
085d3781 +0x1b3:  lea    -0x28(%ebp),%eax
085d3784 +0x1b6:  mov    %eax,(%esp)
085d3787 +0x1b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d378c +0x1be:  movl   $0x1,0x4(%esp)
085d3794 +0x1c6:  lea    -0x28(%ebp),%eax
085d3797 +0x1c9:  mov    %eax,(%esp)
085d379a +0x1cc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d379f +0x1d1:  lea    -0x28(%ebp),%eax
085d37a2 +0x1d4:  mov    %eax,0x4(%esp)
085d37a6 +0x1d8:  mov    0x8(%ebp),%eax
085d37a9 +0x1db:  mov    %eax,(%esp)
085d37ac +0x1de:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d37b1 +0x1e3:  mov    $0x0,%ebx
085d37b6 +0x1e8:  lea    -0x28(%ebp),%eax
085d37b9 +0x1eb:  mov    %eax,(%esp)
085d37bc +0x1ee:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d37c1 +0x1f3:  jmp    085d37de <+0x210>
085d37c3 +0x1f5:  mov    %edx,%ebx
085d37c5 +0x1f7:  mov    %eax,%esi
085d37c7 +0x1f9:  lea    -0x28(%ebp),%eax
085d37ca +0x1fc:  mov    %eax,(%esp)
085d37cd +0x1ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d37d2 +0x204:  mov    %esi,%eax
085d37d4 +0x206:  mov    %ebx,%edx
085d37d6 +0x208:  mov    %eax,(%esp)
085d37d9 +0x20b:  call   08ae3750 <_Unwind_Resume>
085d37de +0x210:  mov    %ebx,%eax
085d37e0 +0x212:  add    $0x30,%esp
085d37e3 +0x215:  pop    %ebx
085d37e4 +0x216:  pop    %esi
085d37e5 +0x217:  pop    %ebp
085d37e6 +0x218:  ret
085d37e7 +0x219:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::OnRepairDisjointMachine @ 0x85d35ce

/* expert_job::CDisjointer::OnRepairDisjointMachine(CUser*) */

undefined4 expert_job::CDisjointer::OnRepairDisjointMachine(CUser *param_1)

{
  CCharacExpertJob *pCVar1;
  STExpertJobScript *pSVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_18 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar1);
  pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_14 = CCharacExpertJob::get_disjoint_machine_grade(pCVar1);
  iVar3 = local_14 + 1;
  pSVar2 = (STExpertJobScript *)GetScript();
  local_20 = STExpertJobScript::GetDisjointMachineRepairCost(pSVar2,iVar3,local_18);
  iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
  if (iVar3 < local_20) {
    iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    iVar3 = local_14 + 1;
    pSVar2 = (STExpertJobScript *)GetScript();
    local_1c = STExpertJobScript::GetDisjointMachineRepair(pSVar2,iVar3,iVar4,&local_20);
    local_1c = local_1c + local_18;
  }
  else {
    uVar5 = local_14 + 1;
    pSVar2 = (STExpertJobScript *)GetScript();
    local_10 = STExpertJobScript::_GetEnduranceRepairCost(pSVar2,uVar5);
    if (local_10 != 0) {
      local_1c = *(int *)(local_10 + 4);
    }
  }
  iVar3 = local_20;
  if (local_1c < 1) {
    uVar7 = 0x16;
  }
  else {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar6,iVar3,0x20,1);
    pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
    CCharacExpertJob::set_disjoint_machine_endurance(pCVar1,local_1c);
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085d3730 to 085d37b0 has its CatchHandler @ 085d37c3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xf0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar3);
    pCVar1 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
    iVar3 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    uVar7 = 0;
    PacketGuard::~PacketGuard(local_2c);
  }
  return uVar7;
}
```
