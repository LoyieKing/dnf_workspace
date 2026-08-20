# handleRemoveOneDayLethePremium

`_ZN8WongWork14CHandlePremium30handleRemoveOneDayLethePremiumEP5CUser`

`WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086b0594` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b0594  _ZN8WongWork14CHandlePremium30handleRemoveOneDayLethePremiumEP5CUser
#           WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*)
# range [0x086b0594, 0x086b068c]
086b0594 +0x00:  push   %ebp
086b0595 +0x01:  mov    %esp,%ebp
086b0597 +0x03:  push   %ebx
086b0598 +0x04:  sub    $0x34,%esp
086b059b +0x07:  movl   $0x21,0x4(%esp)
086b05a3 +0x0f:  mov    0x8(%ebp),%eax
086b05a6 +0x12:  mov    %eax,(%esp)
086b05a9 +0x15:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086b05ae +0x1a:  test   %al,%al
086b05b0 +0x1c:  je     086b0627 <+0x93>
086b05b2 +0x1e:  movl   $0x1,0x14(%esp)
086b05ba +0x26:  movl   $0x0,0x10(%esp)
086b05c2 +0x2e:  movl   $0x0,0xc(%esp)
086b05ca +0x36:  movl   $0x0,0x8(%esp)
086b05d2 +0x3e:  movl   $0x21,0x4(%esp)
086b05da +0x46:  mov    0x8(%ebp),%eax
086b05dd +0x49:  mov    %eax,(%esp)
086b05e0 +0x4c:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
086b05e5 +0x51:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086b05ea +0x56:  mov    0xc(%eax),%eax
086b05ed +0x59:  movl   $0xc5,0x4(%esp)
086b05f5 +0x61:  mov    %eax,(%esp)
086b05f8 +0x64:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
086b05fd +0x69:  mov    %eax,0x4(%esp)
086b0601 +0x6d:  mov    0x8(%ebp),%eax
086b0604 +0x70:  mov    %eax,(%esp)
086b0607 +0x73:  call   0864d90a <_ZN5CUser21RemoveRestrictedGoodsEi>  ; CUser::RemoveRestrictedGoods(int)
086b060c +0x78:  movl   $0x0,0x8(%esp)
086b0614 +0x80:  movl   $0x21,0x4(%esp)
086b061c +0x88:  mov    0x8(%ebp),%eax
086b061f +0x8b:  mov    %eax,(%esp)
086b0622 +0x8e:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
086b0627 +0x93:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
086b062e +0x9a:  movzbl %al,%edx
086b0631 +0x9d:  mov    0x8(%ebp),%eax
086b0634 +0xa0:  mov    %edx,0x4(%esp)
086b0638 +0xa4:  mov    %eax,(%esp)
086b063b +0xa7:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
086b0640 +0xac:  mov    0x8(%ebp),%eax
086b0643 +0xaf:  mov    %eax,(%esp)
086b0646 +0xb2:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086b064b +0xb7:  mov    %eax,%ebx
086b064d +0xb9:  movl   $0x0,0xc(%esp)
086b0655 +0xc1:  movl   $0x3b4,0x8(%esp)
086b065d +0xc9:  movl   $&_ZZN8WongWork14CHandlePremium30handleRemoveOneDayLethePremiumEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086b0665 +0xd1:  lea    -0x18(%ebp),%eax
086b0668 +0xd4:  mov    %eax,(%esp)
086b066b +0xd7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086b0670 +0xdc:  mov    %ebx,0x8(%esp)
086b0674 +0xe0:  movl   $"ONE_DAY_LETHE : PREMIUM_END, char(%s)",0x4(%esp)
086b067c +0xe8:  lea    -0x18(%ebp),%eax
086b067f +0xeb:  mov    %eax,(%esp)
086b0682 +0xee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086b0687 +0xf3:  add    $0x34,%esp
086b068a +0xf6:  pop    %ebx
086b068b +0xf7:  pop    %ebp
086b068c +0xf8:  ret
```

## 反编译 C

```c
// WongWork::CHandlePremium::handleRemoveOneDayLethePremium @ 0x86b0594

/* WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*) */

void WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  cMyTrace local_1c [20];
  
  cVar1 = CUser::isAffectedPremium(param_1,0x21);
  if (cVar1 != '\0') {
    handleSetUserPremium(param_1,0x21,0,0,0,1);
    iVar2 = G_CDataManager();
    CItemList::GetRestrictCode(*(CItemList **)(iVar2 + 0xc),0xc5);
    CUser::RemoveRestrictedGoods((int)param_1);
    handleNotifyPremiumInfo(param_1,0x21,0);
  }
  CUserCharacInfo::SetOneDayLetheFlag
            ((CUserCharacInfo *)param_1,CPremiumLetheManager::NOT_USE_LETHE_STATE);
  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  cMyTrace::cMyTrace(local_1c,
                     "static void WongWork::CHandlePremium::handleRemoveOneDayLethePremium(CUser*)",
                     0x3b4,0);
  cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : PREMIUM_END, char(%s)",uVar3);
  return;
}
```
