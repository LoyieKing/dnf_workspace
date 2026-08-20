# DoGetGoldItem

`_ZN5CUser13DoGetGoldItemEiRSt6vectorISt4pairIiiESaIS2_EEbR10ENUM_ERROR`

`CUser::DoGetGoldItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086928c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086928c2  _ZN5CUser13DoGetGoldItemEiRSt6vectorISt4pairIiiESaIS2_EEbR10ENUM_ERROR
#           CUser::DoGetGoldItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
# range [0x086928c2, 0x08692a07]
086928c2 +0x000:  push   %ebp
086928c3 +0x001:  mov    %esp,%ebp
086928c5 +0x003:  push   %esi
086928c6 +0x004:  push   %ebx
086928c7 +0x005:  sub    $0x50,%esp
086928ca +0x008:  mov    0x14(%ebp),%eax
086928cd +0x00b:  mov    %al,-0x2c(%ebp)
086928d0 +0x00e:  movl   $0x0,-0x10(%ebp)
086928d7 +0x015:  cmpl   $0x28d291,0xc(%ebp)
086928de +0x01c:  jg     086928f3 <+0x31>
086928e0 +0x01e:  mov    0xc(%ebp),%eax
086928e3 +0x021:  sub    $0x28d287,%eax
086928e8 +0x026:  imul   $0xf4240,%eax,%eax
086928ee +0x02c:  mov    %eax,-0x10(%ebp)
086928f1 +0x02f:  jmp    08692904 <+0x42>
086928f3 +0x031:  mov    0xc(%ebp),%eax
086928f6 +0x034:  imul   $0x989680,%eax,%eax
086928fc +0x03a:  sub    $0x549a800,%eax
08692901 +0x03f:  mov    %eax,-0x10(%ebp)
08692904 +0x042:  cmpb   $0x0,-0x2c(%ebp)
08692908 +0x046:  je     08692978 <+0xb6>
0869290a +0x048:  movl   $0x7fffffff,-0xc(%ebp)
08692911 +0x04f:  mov    0x8(%ebp),%eax
08692914 +0x052:  mov    %eax,(%esp)
08692917 +0x055:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0869291c +0x05a:  mov    %eax,%esi
0869291e +0x05c:  mov    0x8(%ebp),%eax
08692921 +0x05f:  mov    %eax,(%esp)
08692924 +0x062:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08692929 +0x067:  mov    %eax,%ebx
0869292b +0x069:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08692930 +0x06e:  mov    %esi,0x8(%esp)
08692934 +0x072:  mov    %ebx,0x4(%esp)
08692938 +0x076:  mov    %eax,(%esp)
0869293b +0x079:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
08692940 +0x07e:  mov    %eax,-0xc(%ebp)
08692943 +0x081:  mov    0x8(%ebp),%eax
08692946 +0x084:  mov    %eax,(%esp)
08692949 +0x087:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0869294e +0x08c:  mov    -0xc(%ebp),%edx
08692951 +0x08f:  mov    %edx,%ecx
08692953 +0x091:  sub    %eax,%ecx
08692955 +0x093:  mov    %ecx,%eax
08692957 +0x095:  cmp    -0x10(%ebp),%eax
0869295a +0x098:  setl   %al
0869295d +0x09b:  test   %al,%al
0869295f +0x09d:  je     086929f8 <+0x136>
08692965 +0x0a3:  mov    0x18(%ebp),%eax
08692968 +0x0a6:  movl   $0xa,(%eax)
0869296e +0x0ac:  mov    $0x0,%eax
08692973 +0x0b1:  jmp    086929fd <+0x13b>
08692978 +0x0b6:  mov    0x8(%ebp),%eax
0869297b +0x0b9:  mov    %eax,(%esp)
0869297e +0x0bc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08692983 +0x0c1:  movl   $0x0,0x10(%esp)
0869298b +0x0c9:  movl   $0x1,0xc(%esp)
08692993 +0x0d1:  movl   $0xe,0x8(%esp)
0869299b +0x0d9:  mov    -0x10(%ebp),%edx
0869299e +0x0dc:  mov    %edx,0x4(%esp)
086929a2 +0x0e0:  mov    %eax,(%esp)
086929a5 +0x0e3:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
086929aa +0x0e8:  movl   $0x0,-0x18(%ebp)
086929b1 +0x0ef:  movl   $0x0,-0x14(%ebp)
086929b8 +0x0f6:  lea    -0x20(%ebp),%eax
086929bb +0x0f9:  lea    -0x18(%ebp),%edx
086929be +0x0fc:  mov    %edx,0x8(%esp)
086929c2 +0x100:  lea    -0x14(%ebp),%edx
086929c5 +0x103:  mov    %edx,0x4(%esp)
086929c9 +0x107:  mov    %eax,(%esp)
086929cc +0x10a:  call   0855890e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x146f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x146f
086929d1 +0x10f:  sub    $0x4,%esp
086929d4 +0x112:  lea    -0x20(%ebp),%eax
086929d7 +0x115:  mov    %eax,0x4(%esp)
086929db +0x119:  lea    -0x28(%ebp),%eax
086929de +0x11c:  mov    %eax,(%esp)
086929e1 +0x11f:  call   08558958 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x14b9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x14b9
086929e6 +0x124:  lea    -0x28(%ebp),%eax
086929e9 +0x127:  mov    %eax,0x4(%esp)
086929ed +0x12b:  mov    0x10(%ebp),%eax
086929f0 +0x12e:  mov    %eax,(%esp)
086929f3 +0x131:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
086929f8 +0x136:  mov    $0x1,%eax
086929fd +0x13b:  lea    -0x8(%ebp),%esp
08692a00 +0x13e:  add    $0x0,%esp
08692a03 +0x141:  pop    %ebx
08692a04 +0x142:  pop    %esi
08692a05 +0x143:  pop    %ebp
08692a06 +0x144:  ret
08692a07 +0x145:  nop
```

## 反编译 C

```c
// CUser::DoGetGoldItem @ 0x86928c2

/* CUser::DoGetGoldItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >&, bool, ENUM_ERROR&) */

undefined4 __thiscall
CUser::DoGetGoldItem(CUser *this,int param_1,vector *param_2,bool param_3,ENUM_ERROR *param_4)

{
  char *pcVar1;
  int iVar2;
  CDataManager *this_00;
  CInventory *pCVar3;
  pair<int,int> local_2c [8];
  ENUM_ITEMSPACE local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  if (param_1 < 0x28d292) {
    local_14 = (param_1 + -0x28d287) * 1000000;
  }
  else {
    local_14 = param_1 * 10000000 + -0x549a800;
  }
  if (param_3) {
    local_10 = 0x7fffffff;
    pcVar1 = (char *)get_acc_name(this);
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = CDataManager::GetMoneyLimitPerLevel(this_00,iVar2,pcVar1);
    iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)this);
    if (local_10 - iVar2 < local_14) {
      *(undefined4 *)param_4 = 10;
      return 0;
    }
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::gain_money(pCVar3,local_14,0xe,1,0);
    local_1c = 0;
    local_18 = 0;
    std::make_pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_24,(INVEN_SLOT *)&local_18);
    std::pair<int,int>::pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_2c,local_24);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_2c);
  }
  return 1;
}
```
