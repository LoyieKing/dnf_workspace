# BuyItem

`_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii`

`secretshop::CBuyItembyRecipe::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CBuyItembyRecipe` | `0x085fbb62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fbb62  _ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii
#           secretshop::CBuyItembyRecipe::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int)
# range [0x085fbb62, 0x085fbe2d]
085fbb62 +0x000:  push   %ebp
085fbb63 +0x001:  mov    %esp,%ebp
085fbb65 +0x003:  push   %ebx
085fbb66 +0x004:  sub    $0xc4,%esp
085fbb6c +0x00a:  mov    0x10(%ebp),%eax
085fbb6f +0x00d:  mov    0x14(%ebp),%edx
085fbb72 +0x010:  mov    %edx,0x4(%esp)
085fbb76 +0x014:  mov    %eax,(%esp)
085fbb79 +0x017:  call   08ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>  ; secretshop::RETAILER::GetSaleInfo(int)
085fbb7e +0x01c:  mov    %eax,-0x1c(%ebp)
085fbb81 +0x01f:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
085fbb86 +0x024:  movl   $0x43,0x8(%esp)
085fbb8e +0x02c:  mov    0xc(%ebp),%edx
085fbb91 +0x02f:  mov    %edx,0x4(%esp)
085fbb95 +0x033:  mov    %eax,(%esp)
085fbb98 +0x036:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
085fbb9d +0x03b:  mov    %eax,-0x18(%ebp)
085fbba0 +0x03e:  cmpl   $0x0,-0x18(%ebp)
085fbba4 +0x042:  je     085fbbcd <+0x6b>
085fbba6 +0x044:  mov    -0x18(%ebp),%eax
085fbba9 +0x047:  movzbl %al,%eax
085fbbac +0x04a:  mov    %eax,0x8(%esp)
085fbbb0 +0x04e:  movl   $0x129,0x4(%esp)
085fbbb8 +0x056:  mov    0xc(%ebp),%eax
085fbbbb +0x059:  mov    %eax,(%esp)
085fbbbe +0x05c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fbbc3 +0x061:  mov    $0x0,%eax
085fbbc8 +0x066:  jmp    085fbe25 <+0x2c3>
085fbbcd +0x06b:  cmpl   $0x0,-0x1c(%ebp)
085fbbd1 +0x06f:  jne    085fbbf8 <+0x96>
085fbbd3 +0x071:  movl   $0x11,0x8(%esp)
085fbbdb +0x079:  movl   $0x129,0x4(%esp)
085fbbe3 +0x081:  mov    0xc(%ebp),%eax
085fbbe6 +0x084:  mov    %eax,(%esp)
085fbbe9 +0x087:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fbbee +0x08c:  mov    $0x0,%eax
085fbbf3 +0x091:  jmp    085fbe25 <+0x2c3>
085fbbf8 +0x096:  movl   $0x0,-0x20(%ebp)
085fbbff +0x09d:  mov    0x8(%ebp),%eax
085fbc02 +0x0a0:  lea    -0x20(%ebp),%edx
085fbc05 +0x0a3:  mov    %edx,0x10(%esp)
085fbc09 +0x0a7:  mov    0x18(%ebp),%edx
085fbc0c +0x0aa:  mov    %edx,0xc(%esp)
085fbc10 +0x0ae:  mov    0x14(%ebp),%edx
085fbc13 +0x0b1:  mov    %edx,0x8(%esp)
085fbc17 +0x0b5:  mov    0x10(%ebp),%edx
085fbc1a +0x0b8:  mov    %edx,0x4(%esp)
085fbc1e +0x0bc:  mov    %eax,(%esp)
085fbc21 +0x0bf:  call   085fb7e4 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi>  ; secretshop::IBuyRule::CheckLimit(secretshop::SECRET_SHOP_INFO&, int, int, int&)
085fbc26 +0x0c4:  xor    $0x1,%eax
085fbc29 +0x0c7:  test   %al,%al
085fbc2b +0x0c9:  je     085fbc52 <+0xf0>
085fbc2d +0x0cb:  movl   $0x5f,0x8(%esp)
085fbc35 +0x0d3:  movl   $0x129,0x4(%esp)
085fbc3d +0x0db:  mov    0xc(%ebp),%eax
085fbc40 +0x0de:  mov    %eax,(%esp)
085fbc43 +0x0e1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fbc48 +0x0e6:  mov    $0x0,%eax
085fbc4d +0x0eb:  jmp    085fbe25 <+0x2c3>
085fbc52 +0x0f0:  lea    -0x28(%ebp),%eax
085fbc55 +0x0f3:  mov    %eax,(%esp)
085fbc58 +0x0f6:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
085fbc5d +0x0fb:  mov    -0x1c(%ebp),%eax
085fbc60 +0x0fe:  mov    0x10(%eax),%eax
085fbc63 +0x101:  mov    %eax,-0x28(%ebp)
085fbc66 +0x104:  mov    -0x1c(%ebp),%eax
085fbc69 +0x107:  mov    0x14(%eax),%eax
085fbc6c +0x10a:  imul   0x18(%ebp),%eax
085fbc70 +0x10e:  mov    %eax,-0x24(%ebp)
085fbc73 +0x111:  lea    -0x65(%ebp),%eax
085fbc76 +0x114:  mov    %eax,(%esp)
085fbc79 +0x117:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085fbc7e +0x11c:  mov    -0x28(%ebp),%ebx
085fbc81 +0x11f:  mov    0xc(%ebp),%eax
085fbc84 +0x122:  mov    %eax,(%esp)
085fbc87 +0x125:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085fbc8c +0x12a:  lea    -0x65(%ebp),%edx
085fbc8f +0x12d:  mov    %edx,0x8(%esp)
085fbc93 +0x131:  mov    %ebx,0x4(%esp)
085fbc97 +0x135:  mov    %eax,(%esp)
085fbc9a +0x138:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
085fbc9f +0x13d:  mov    %eax,-0x14(%ebp)
085fbca2 +0x140:  cmpl   $0xffffffff,-0x14(%ebp)
085fbca6 +0x144:  je     085fbcb2 <+0x150>
085fbca8 +0x146:  mov    -0x5e(%ebp),%edx
085fbcab +0x149:  mov    -0x24(%ebp),%eax
085fbcae +0x14c:  cmp    %eax,%edx
085fbcb0 +0x14e:  jge    085fbcd7 <+0x175>
085fbcb2 +0x150:  movl   $0xa,0x8(%esp)
085fbcba +0x158:  movl   $0x129,0x4(%esp)
085fbcc2 +0x160:  mov    0xc(%ebp),%eax
085fbcc5 +0x163:  mov    %eax,(%esp)
085fbcc8 +0x166:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fbccd +0x16b:  mov    $0x0,%eax
085fbcd2 +0x170:  jmp    085fbe25 <+0x2c3>
085fbcd7 +0x175:  lea    -0xa2(%ebp),%eax
085fbcdd +0x17b:  mov    %eax,(%esp)
085fbce0 +0x17e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085fbce5 +0x183:  mov    0x8(%ebp),%eax
085fbce8 +0x186:  lea    -0xa2(%ebp),%edx
085fbcee +0x18c:  mov    %edx,0x10(%esp)
085fbcf2 +0x190:  mov    0x18(%ebp),%edx
085fbcf5 +0x193:  mov    %edx,0xc(%esp)
085fbcf9 +0x197:  mov    0x14(%ebp),%edx
085fbcfc +0x19a:  mov    %edx,0x8(%esp)
085fbd00 +0x19e:  mov    0xc(%ebp),%edx
085fbd03 +0x1a1:  mov    %edx,0x4(%esp)
085fbd07 +0x1a5:  mov    %eax,(%esp)
085fbd0a +0x1a8:  call   085fb6c8 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item>  ; secretshop::IBuyRule::InsertItemIntoInventory(CUser*, int, int, Inven_Item&)
085fbd0f +0x1ad:  mov    %eax,-0x10(%ebp)
085fbd12 +0x1b0:  cmpl   $0x0,-0x10(%ebp)
085fbd16 +0x1b4:  jns    085fbd3d <+0x1db>
085fbd18 +0x1b6:  movl   $0x4,0x8(%esp)
085fbd20 +0x1be:  movl   $0x129,0x4(%esp)
085fbd28 +0x1c6:  mov    0xc(%ebp),%eax
085fbd2b +0x1c9:  mov    %eax,(%esp)
085fbd2e +0x1cc:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
085fbd33 +0x1d1:  mov    $0x0,%eax
085fbd38 +0x1d6:  jmp    085fbe25 <+0x2c3>
085fbd3d +0x1db:  mov    -0x24(%ebp),%ebx
085fbd40 +0x1de:  mov    0xc(%ebp),%eax
085fbd43 +0x1e1:  mov    %eax,(%esp)
085fbd46 +0x1e4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085fbd4b +0x1e9:  movl   $0x1,0x14(%esp)
085fbd53 +0x1f1:  movl   $0x1a,0x10(%esp)
085fbd5b +0x1f9:  mov    %ebx,0xc(%esp)
085fbd5f +0x1fd:  mov    -0x14(%ebp),%edx
085fbd62 +0x200:  mov    %edx,0x8(%esp)
085fbd66 +0x204:  movl   $0x1,0x4(%esp)
085fbd6e +0x20c:  mov    %eax,(%esp)
085fbd71 +0x20f:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085fbd76 +0x214:  mov    0xc(%ebp),%eax
085fbd79 +0x217:  mov    %eax,(%esp)
085fbd7c +0x21a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085fbd81 +0x21f:  mov    -0x14(%ebp),%edx
085fbd84 +0x222:  mov    %edx,0x8(%esp)
085fbd88 +0x226:  movl   $0x1,0x4(%esp)
085fbd90 +0x22e:  mov    %eax,(%esp)
085fbd93 +0x231:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
085fbd98 +0x236:  mov    %eax,-0xc(%ebp)
085fbd9b +0x239:  cmpl   $0x0,-0xc(%ebp)
085fbd9f +0x23d:  jne    085fbdaa <+0x248>
085fbda1 +0x23f:  movl   $0x0,-0x24(%ebp)
085fbda8 +0x246:  jmp    085fbdb3 <+0x251>
085fbdaa +0x248:  mov    -0xc(%ebp),%eax
085fbdad +0x24b:  mov    0x7(%eax),%eax
085fbdb0 +0x24e:  mov    %eax,-0x24(%ebp)
085fbdb3 +0x251:  mov    -0x20(%ebp),%ebx
085fbdb6 +0x254:  mov    -0x24(%ebp),%ecx
085fbdb9 +0x257:  mov    -0x28(%ebp),%edx
085fbdbc +0x25a:  mov    0x8(%ebp),%eax
085fbdbf +0x25d:  mov    %ebx,0x18(%esp)
085fbdc3 +0x261:  mov    %ecx,0x14(%esp)
085fbdc7 +0x265:  mov    %edx,0x10(%esp)
085fbdcb +0x269:  lea    -0xa2(%ebp),%edx
085fbdd1 +0x26f:  mov    %edx,0xc(%esp)
085fbdd5 +0x273:  mov    -0x10(%ebp),%edx
085fbdd8 +0x276:  mov    %edx,0x8(%esp)
085fbddc +0x27a:  mov    0xc(%ebp),%edx
085fbddf +0x27d:  mov    %edx,0x4(%esp)
085fbde3 +0x281:  mov    %eax,(%esp)
085fbde6 +0x284:  call   085fb55e <_ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii>  ; secretshop::IBuyRule::SendSecretShopBuyItem(CUser*, int, Inven_Item&, int, int, int)
085fbdeb +0x289:  mov    0x8(%ebp),%eax
085fbdee +0x28c:  lea    -0x28(%ebp),%edx
085fbdf1 +0x28f:  mov    %edx,0x8(%esp)
085fbdf5 +0x293:  mov    0xc(%ebp),%edx
085fbdf8 +0x296:  mov    %edx,0x4(%esp)
085fbdfc +0x29a:  mov    %eax,(%esp)
085fbdff +0x29d:  call   085fb8b2 <_ZN10secretshop8IBuyRule16LogCubeStatisticEP5CUserRSt4pairIiiE>  ; secretshop::IBuyRule::LogCubeStatistic(CUser*, std::pair<int, int>&)
085fbe04 +0x2a2:  mov    0x10(%ebp),%eax
085fbe07 +0x2a5:  lea    0xc(%eax),%edx
085fbe0a +0x2a8:  mov    0x18(%ebp),%eax
085fbe0d +0x2ab:  mov    %eax,0x8(%esp)
085fbe11 +0x2af:  mov    0x14(%ebp),%eax
085fbe14 +0x2b2:  mov    %eax,0x4(%esp)
085fbe18 +0x2b6:  mov    %edx,(%esp)
085fbe1b +0x2b9:  call   08ab13e8 <_ZN10secretshop7SHOPPER7BuyItemEii>  ; secretshop::SHOPPER::BuyItem(int, int)
085fbe20 +0x2be:  mov    $0x1,%eax
085fbe25 +0x2c3:  add    $0xc4,%esp
085fbe2b +0x2c9:  pop    %ebx
085fbe2c +0x2ca:  pop    %ebp
085fbe2d +0x2cb:  ret
```

## 反编译 C

```c
// secretshop::CBuyItembyRecipe::BuyItem @ 0x85fbb62

/* secretshop::CBuyItembyRecipe::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int) */

undefined4 __thiscall
secretshop::CBuyItembyRecipe::BuyItem
          (CBuyItembyRecipe *this,CUser *param_1,SECRET_SHOP_INFO *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  Inven_Item local_a6 [61];
  Inven_Item local_69 [7];
  int local_62;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = RETAILER::GetSaleInfo((int)param_2);
  local_1c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x43);
  if (local_1c == 0) {
    if (local_20 == 0) {
      CUser::SendCmdErrorPacket(param_1,0x129,0x11);
      uVar3 = 0;
    }
    else {
      local_24 = 0;
      cVar2 = IBuyRule::CheckLimit((IBuyRule *)this,param_2,param_3,param_4,&local_24);
      if (cVar2 == '\x01') {
        std::pair<int,int>::pair((pair<int,int> *)&local_2c);
        local_2c = *(int *)(local_20 + 0x10);
        local_28 = *(int *)(local_20 + 0x14) * param_4;
        Inven_Item::Inven_Item(local_69);
        iVar1 = local_2c;
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_18 = CInventory::GetInvenData(pCVar4,iVar1,local_69);
        if ((local_18 == -1) || (local_62 < local_28)) {
          CUser::SendCmdErrorPacket(param_1,0x129,10);
          uVar3 = 0;
        }
        else {
          Inven_Item::Inven_Item(local_a6);
          local_14 = IBuyRule::InsertItemIntoInventory
                               ((IBuyRule *)this,param_1,param_3,param_4,local_a6);
          iVar1 = local_28;
          if (local_14 < 0) {
            CUser::SendCmdErrorPacket(param_1,0x129,4);
            uVar3 = 0;
          }
          else {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar4,1,local_18,iVar1,0x1a,1);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_10 = CInventory::GetInvenRef(pCVar4,1,local_18);
            if (local_10 == 0) {
              local_28 = 0;
            }
            else {
              local_28 = *(int *)(local_10 + 7);
            }
            IBuyRule::SendSecretShopBuyItem
                      ((IBuyRule *)this,param_1,local_14,local_a6,local_2c,local_28,local_24);
            IBuyRule::LogCubeStatistic((IBuyRule *)this,param_1,(pair *)&local_2c);
            SHOPPER::BuyItem((SHOPPER *)(param_2 + 0xc),param_3,param_4);
            uVar3 = 1;
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x129,0x5f);
        uVar3 = 0;
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x129,local_1c & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}
```
