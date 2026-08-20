# BuyItem

`_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii`

`secretshop::CBuyItembyGold::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CBuyItembyGold` | `0x085fb8f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb8f0  _ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii
#           secretshop::CBuyItembyGold::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)
# range [0x085fb8f0, 0x085fbb61]
085fb8f0 +0x000:  push   %ebp
085fb8f1 +0x001:  mov    %esp,%ebp
085fb8f3 +0x003:  push   %ebx
085fb8f4 +0x004:  sub    $0x84,%esp
085fb8fa +0x00a:  mov    0x10(%ebp),%eax
085fb8fd +0x00d:  mov    0x14(%ebp),%edx
085fb900 +0x010:  mov    %edx,0x4(%esp)
085fb904 +0x014:  mov    %eax,(%esp)
085fb907 +0x017:  call   08ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>  ; secretshop::RETAILER::GetSaleInfo(int)
085fb90c +0x01c:  mov    %eax,-0x18(%ebp)
085fb90f +0x01f:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
085fb914 +0x024:  movl   $0x42,0x8(%esp)
085fb91c +0x02c:  mov    0xc(%ebp),%edx
085fb91f +0x02f:  mov    %edx,0x4(%esp)
085fb923 +0x033:  mov    %eax,(%esp)
085fb926 +0x036:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
085fb92b +0x03b:  mov    %eax,-0x14(%ebp)
085fb92e +0x03e:  cmpl   $0x0,-0x14(%ebp)
085fb932 +0x042:  je     085fb95b <+0x6b>
085fb934 +0x044:  mov    -0x14(%ebp),%eax
085fb937 +0x047:  movzbl %al,%eax
085fb93a +0x04a:  mov    %eax,0x8(%esp)
085fb93e +0x04e:  movl   $0x129,0x4(%esp)
085fb946 +0x056:  mov    0xc(%ebp),%eax
085fb949 +0x059:  mov    %eax,(%esp)
085fb94c +0x05c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fb951 +0x061:  mov    $0x0,%eax
085fb956 +0x066:  jmp    085fbb59 <+0x269>
085fb95b +0x06b:  cmpl   $0x0,-0x18(%ebp)
085fb95f +0x06f:  jne    085fb986 <+0x96>
085fb961 +0x071:  movl   $0x11,0x8(%esp)
085fb969 +0x079:  movl   $0x129,0x4(%esp)
085fb971 +0x081:  mov    0xc(%ebp),%eax
085fb974 +0x084:  mov    %eax,(%esp)
085fb977 +0x087:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fb97c +0x08c:  mov    $0x0,%eax
085fb981 +0x091:  jmp    085fbb59 <+0x269>
085fb986 +0x096:  movl   $0x0,-0x1c(%ebp)
085fb98d +0x09d:  mov    0x8(%ebp),%eax
085fb990 +0x0a0:  lea    -0x1c(%ebp),%edx
085fb993 +0x0a3:  mov    %edx,0x10(%esp)
085fb997 +0x0a7:  mov    0x18(%ebp),%edx
085fb99a +0x0aa:  mov    %edx,0xc(%esp)
085fb99e +0x0ae:  mov    0x14(%ebp),%edx
085fb9a1 +0x0b1:  mov    %edx,0x8(%esp)
085fb9a5 +0x0b5:  mov    0x10(%ebp),%edx
085fb9a8 +0x0b8:  mov    %edx,0x4(%esp)
085fb9ac +0x0bc:  mov    %eax,(%esp)
085fb9af +0x0bf:  call   085fb7e4 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi>  ; secretshop::IBuyRule::CheckLimit(secretshop::SECRET_SHOP_INFO&, int, int, int&)
085fb9b4 +0x0c4:  xor    $0x1,%eax
085fb9b7 +0x0c7:  test   %al,%al
085fb9b9 +0x0c9:  je     085fb9e0 <+0xf0>
085fb9bb +0x0cb:  movl   $0x5f,0x8(%esp)
085fb9c3 +0x0d3:  movl   $0x129,0x4(%esp)
085fb9cb +0x0db:  mov    0xc(%ebp),%eax
085fb9ce +0x0de:  mov    %eax,(%esp)
085fb9d1 +0x0e1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fb9d6 +0x0e6:  mov    $0x0,%eax
085fb9db +0x0eb:  jmp    085fbb59 <+0x269>
085fb9e0 +0x0f0:  mov    -0x18(%ebp),%eax
085fb9e3 +0x0f3:  mov    0x8(%eax),%eax
085fb9e6 +0x0f6:  imul   0x18(%ebp),%eax
085fb9ea +0x0fa:  mov    %eax,-0x10(%ebp)
085fb9ed +0x0fd:  mov    0xc(%ebp),%eax
085fb9f0 +0x100:  mov    %eax,(%esp)
085fb9f3 +0x103:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085fb9f8 +0x108:  cmp    -0x10(%ebp),%eax
085fb9fb +0x10b:  setl   %al
085fb9fe +0x10e:  test   %al,%al
085fba00 +0x110:  je     085fba27 <+0x137>
085fba02 +0x112:  movl   $0xa,0x8(%esp)
085fba0a +0x11a:  movl   $0x129,0x4(%esp)
085fba12 +0x122:  mov    0xc(%ebp),%eax
085fba15 +0x125:  mov    %eax,(%esp)
085fba18 +0x128:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fba1d +0x12d:  mov    $0x0,%eax
085fba22 +0x132:  jmp    085fbb59 <+0x269>
085fba27 +0x137:  lea    -0x59(%ebp),%eax
085fba2a +0x13a:  mov    %eax,(%esp)
085fba2d +0x13d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085fba32 +0x142:  mov    0x8(%ebp),%eax
085fba35 +0x145:  lea    -0x59(%ebp),%edx
085fba38 +0x148:  mov    %edx,0x10(%esp)
085fba3c +0x14c:  mov    0x18(%ebp),%edx
085fba3f +0x14f:  mov    %edx,0xc(%esp)
085fba43 +0x153:  mov    0x14(%ebp),%edx
085fba46 +0x156:  mov    %edx,0x8(%esp)
085fba4a +0x15a:  mov    0xc(%ebp),%edx
085fba4d +0x15d:  mov    %edx,0x4(%esp)
085fba51 +0x161:  mov    %eax,(%esp)
085fba54 +0x164:  call   085fb6c8 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item>  ; secretshop::IBuyRule::InsertItemIntoInventory(CUser*, int, int, Inven_Item&)
085fba59 +0x169:  mov    %eax,-0xc(%ebp)
085fba5c +0x16c:  cmpl   $0x0,-0xc(%ebp)
085fba60 +0x170:  jns    085fba87 <+0x197>
085fba62 +0x172:  movl   $0x4,0x8(%esp)
085fba6a +0x17a:  movl   $0x129,0x4(%esp)
085fba72 +0x182:  mov    0xc(%ebp),%eax
085fba75 +0x185:  mov    %eax,(%esp)
085fba78 +0x188:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fba7d +0x18d:  mov    $0x0,%eax
085fba82 +0x192:  jmp    085fbb59 <+0x269>
085fba87 +0x197:  mov    0xc(%ebp),%eax
085fba8a +0x19a:  mov    %eax,(%esp)
085fba8d +0x19d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085fba92 +0x1a2:  movl   $0x1,0xc(%esp)
085fba9a +0x1aa:  movl   $0x27,0x8(%esp)
085fbaa2 +0x1b2:  mov    -0x10(%ebp),%edx
085fbaa5 +0x1b5:  mov    %edx,0x4(%esp)
085fbaa9 +0x1b9:  mov    %eax,(%esp)
085fbaac +0x1bc:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085fbab1 +0x1c1:  mov    -0x1c(%ebp),%edx
085fbab4 +0x1c4:  mov    0x8(%ebp),%eax
085fbab7 +0x1c7:  mov    %edx,0x18(%esp)
085fbabb +0x1cb:  movl   $0x0,0x14(%esp)
085fbac3 +0x1d3:  movl   $0xffffffff,0x10(%esp)
085fbacb +0x1db:  lea    -0x59(%ebp),%edx
085fbace +0x1de:  mov    %edx,0xc(%esp)
085fbad2 +0x1e2:  mov    -0xc(%ebp),%edx
085fbad5 +0x1e5:  mov    %edx,0x8(%esp)
085fbad9 +0x1e9:  mov    0xc(%ebp),%edx
085fbadc +0x1ec:  mov    %edx,0x4(%esp)
085fbae0 +0x1f0:  mov    %eax,(%esp)
085fbae3 +0x1f3:  call   085fb55e <_ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii>  ; secretshop::IBuyRule::SendSecretShopBuyItem(CUser*, int, Inven_Item&, int, int, int)
085fbae8 +0x1f8:  mov    -0x10(%ebp),%edx
085fbaeb +0x1fb:  mov    0x8(%ebp),%eax
085fbaee +0x1fe:  mov    %edx,0x8(%esp)
085fbaf2 +0x202:  mov    0xc(%ebp),%edx
085fbaf5 +0x205:  mov    %edx,0x4(%esp)
085fbaf9 +0x209:  mov    %eax,(%esp)
085fbafc +0x20c:  call   085fb886 <_ZN10secretshop8IBuyRule17LogValueStatisticEP5CUserj>  ; secretshop::IBuyRule::LogValueStatistic(CUser*, unsigned int)
085fbb01 +0x211:  mov    0x10(%ebp),%eax
085fbb04 +0x214:  lea    0xc(%eax),%edx
085fbb07 +0x217:  mov    0x18(%ebp),%eax
085fbb0a +0x21a:  mov    %eax,0x8(%esp)
085fbb0e +0x21e:  mov    0x14(%ebp),%eax
085fbb11 +0x221:  mov    %eax,0x4(%esp)
085fbb15 +0x225:  mov    %edx,(%esp)
085fbb18 +0x228:  call   08ab13e8 <_ZN10secretshop7SHOPPER7BuyItemEii>  ; secretshop::SHOPPER::BuyItem(int, int)
085fbb1d +0x22d:  mov    0xc(%ebp),%eax
085fbb20 +0x230:  mov    %eax,(%esp)
085fbb23 +0x233:  call   0867cb90 <_ZN5CUser23getDungeonIdxAfterClearEv>  ; CUser::getDungeonIdxAfterClear()
085fbb28 +0x238:  mov    %eax,%ebx
085fbb2a +0x23a:  mov    0xc(%ebp),%eax
085fbb2d +0x23d:  mov    %eax,(%esp)
085fbb30 +0x240:  call   086885a6 <_ZN5CUser17GetSecretShopDataEv>  ; CUser::GetSecretShopData()
085fbb35 +0x245:  mov    (%eax),%edx
085fbb37 +0x247:  mov    0x8(%ebp),%eax
085fbb3a +0x24a:  mov    0x4(%eax),%eax
085fbb3d +0x24d:  mov    -0x10(%ebp),%ecx
085fbb40 +0x250:  mov    %ecx,0xc(%esp)
085fbb44 +0x254:  mov    %ebx,0x8(%esp)
085fbb48 +0x258:  mov    %edx,0x4(%esp)
085fbb4c +0x25c:  mov    %eax,(%esp)
085fbb4f +0x25f:  call   085fd108 <_ZN10secretshop20CSecretShopStatistic11RecordPriceEiii>  ; secretshop::CSecretShopStatistic::RecordPrice(int, int, int)
085fbb54 +0x264:  mov    $0x1,%eax
085fbb59 +0x269:  add    $0x84,%esp
085fbb5f +0x26f:  pop    %ebx
085fbb60 +0x270:  pop    %ebp
085fbb61 +0x271:  ret
```

## 反编译 C

```c
// secretshop::CBuyItembyGold::BuyItem @ 0x85fb8f0

/* secretshop::CBuyItembyGold::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int) */

undefined4 __thiscall
secretshop::CBuyItembyGold::BuyItem
          (CBuyItembyGold *this,CUser *param_1,SECRET_SHOP_INFO *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *pCVar4;
  int *piVar5;
  Inven_Item local_5d [61];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = RETAILER::GetSaleInfo((int)param_2);
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x42);
  if (local_18 == 0) {
    if (local_1c == 0) {
      CUser::SendCmdErrorPacket(param_1,0x129,0x11);
      uVar2 = 0;
    }
    else {
      local_20 = 0;
      cVar1 = IBuyRule::CheckLimit((IBuyRule *)this,param_2,param_3,param_4,&local_20);
      if (cVar1 == '\x01') {
        local_14 = *(int *)(local_1c + 8) * param_4;
        iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        if (iVar3 < (int)local_14) {
          CUser::SendCmdErrorPacket(param_1,0x129,10);
          uVar2 = 0;
        }
        else {
          Inven_Item::Inven_Item(local_5d);
          local_10 = IBuyRule::InsertItemIntoInventory
                               ((IBuyRule *)this,param_1,param_3,param_4,local_5d);
          if (local_10 < 0) {
            CUser::SendCmdErrorPacket(param_1,0x129,4);
            uVar2 = 0;
          }
          else {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::use_money(pCVar4,local_14,0x27,1);
            IBuyRule::SendSecretShopBuyItem
                      ((IBuyRule *)this,param_1,local_10,local_5d,-1,0,local_20);
            IBuyRule::LogValueStatistic((IBuyRule *)this,param_1,local_14);
            SHOPPER::BuyItem((SHOPPER *)(param_2 + 0xc),param_3,param_4);
            iVar3 = CUser::getDungeonIdxAfterClear(param_1);
            piVar5 = (int *)CUser::GetSecretShopData(param_1);
            CSecretShopStatistic::RecordPrice
                      (*(CSecretShopStatistic **)(this + 4),*piVar5,iVar3,local_14);
            uVar2 = 1;
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x129,0x5f);
        uVar2 = 0;
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x129,local_18 & 0xff);
    uVar2 = 0;
  }
  return uVar2;
}
```
