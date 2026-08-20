# _DoGetPackageCoin

`_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR`

`WongWork::CMailBoxHelper::_DoGetPackageCoin(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08553672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08553672  _ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR
#           WongWork::CMailBoxHelper::_DoGetPackageCoin(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
# range [0x08553672, 0x085538bf]
08553672 +0x000:  push   %ebp
08553673 +0x001:  mov    %esp,%ebp
08553675 +0x003:  push   %ebx
08553676 +0x004:  sub    $0x94,%esp
0855367c +0x00a:  mov    0x14(%ebp),%eax
0855367f +0x00d:  mov    %al,-0x7c(%ebp)
08553682 +0x010:  mov    0x8(%ebp),%eax
08553685 +0x013:  mov    %eax,(%esp)
08553688 +0x016:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0855368d +0x01b:  mov    %eax,(%esp)
08553690 +0x01e:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
08553695 +0x023:  mov    %eax,-0x14(%ebp)
08553698 +0x026:  mov    0x8(%ebp),%eax
0855369b +0x029:  mov    %eax,(%esp)
0855369e +0x02c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085536a3 +0x031:  mov    %eax,(%esp)
085536a6 +0x034:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
085536ab +0x039:  mov    %eax,-0x10(%ebp)
085536ae +0x03c:  mov    0x8(%ebp),%eax
085536b1 +0x03f:  mov    %eax,(%esp)
085536b4 +0x042:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085536b9 +0x047:  mov    %eax,(%esp)
085536bc +0x04a:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
085536c1 +0x04f:  mov    %eax,-0xc(%ebp)
085536c4 +0x052:  mov    -0x10(%ebp),%eax
085536c7 +0x055:  mov    -0x14(%ebp),%edx
085536ca +0x058:  lea    (%edx,%eax,1),%eax
085536cd +0x05b:  add    -0xc(%ebp),%eax
085536d0 +0x05e:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
085536d5 +0x063:  jle    085536ea <+0x78>
085536d7 +0x065:  mov    0x18(%ebp),%eax
085536da +0x068:  movl   $0x4f,(%eax)
085536e0 +0x06e:  mov    $0x0,%eax
085536e5 +0x073:  jmp    085538bb <+0x249>
085536ea +0x078:  cmpb   $0x0,-0x7c(%ebp)
085536ee +0x07c:  je     085536fa <+0x88>
085536f0 +0x07e:  mov    $0x1,%eax
085536f5 +0x083:  jmp    085538bb <+0x249>
085536fa +0x088:  lea    -0x69(%ebp),%eax
085536fd +0x08b:  mov    0xc(%ebp),%edx
08553700 +0x08e:  mov    %edx,0x4(%esp)
08553704 +0x092:  mov    %eax,(%esp)
08553707 +0x095:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0855370c +0x09a:  sub    $0x4,%esp
0855370f +0x09d:  movzwl -0x5e(%ebp),%eax
08553713 +0x0a1:  movzwl %ax,%eax
08553716 +0x0a4:  cmp    $0x1,%eax
08553719 +0x0a7:  je     08553798 <+0x126>
0855371b +0x0a9:  cmp    $0x2,%eax
0855371e +0x0ac:  je     08553801 <+0x18f>
08553724 +0x0b2:  test   %eax,%eax
08553726 +0x0b4:  jne    08553868 <+0x1f6>
0855372c +0x0ba:  mov    0x8(%ebp),%eax
0855372f +0x0bd:  mov    %eax,(%esp)
08553732 +0x0c0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08553737 +0x0c5:  mov    %eax,(%esp)
0855373a +0x0c8:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
0855373f +0x0cd:  mov    -0x62(%ebp),%edx
08553742 +0x0d0:  lea    (%eax,%edx,1),%ebx
08553745 +0x0d3:  mov    0x8(%ebp),%eax
08553748 +0x0d6:  mov    %eax,(%esp)
0855374b +0x0d9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08553750 +0x0de:  mov    %ebx,0x4(%esp)
08553754 +0x0e2:  mov    %eax,(%esp)
08553757 +0x0e5:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
0855375c +0x0ea:  mov    -0x62(%ebp),%ebx
0855375f +0x0ed:  mov    0x8(%ebp),%eax
08553762 +0x0f0:  mov    %eax,(%esp)
08553765 +0x0f3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0855376a +0x0f8:  mov    %eax,(%esp)
0855376d +0x0fb:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08553772 +0x100:  mov    0x8(%ebp),%edx
08553775 +0x103:  add    $0x79700,%edx
0855377b +0x109:  movl   $0x0,0xc(%esp)
08553783 +0x111:  mov    %ebx,0x8(%esp)
08553787 +0x115:  mov    %eax,0x4(%esp)
0855378b +0x119:  mov    %edx,(%esp)
0855378e +0x11c:  call   08683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>  ; cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)
08553793 +0x121:  jmp    08553868 <+0x1f6>
08553798 +0x126:  mov    0x8(%ebp),%eax
0855379b +0x129:  mov    %eax,(%esp)
0855379e +0x12c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085537a3 +0x131:  mov    %eax,(%esp)
085537a6 +0x134:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
085537ab +0x139:  mov    -0x62(%ebp),%edx
085537ae +0x13c:  lea    (%eax,%edx,1),%ebx
085537b1 +0x13f:  mov    0x8(%ebp),%eax
085537b4 +0x142:  mov    %eax,(%esp)
085537b7 +0x145:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085537bc +0x14a:  mov    %ebx,0x4(%esp)
085537c0 +0x14e:  mov    %eax,(%esp)
085537c3 +0x151:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
085537c8 +0x156:  mov    -0x62(%ebp),%ebx
085537cb +0x159:  mov    0x8(%ebp),%eax
085537ce +0x15c:  mov    %eax,(%esp)
085537d1 +0x15f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085537d6 +0x164:  mov    %eax,(%esp)
085537d9 +0x167:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
085537de +0x16c:  mov    0x8(%ebp),%edx
085537e1 +0x16f:  add    $0x79700,%edx
085537e7 +0x175:  movl   $0x2,0xc(%esp)
085537ef +0x17d:  mov    %ebx,0x8(%esp)
085537f3 +0x181:  mov    %eax,0x4(%esp)
085537f7 +0x185:  mov    %edx,(%esp)
085537fa +0x188:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
085537ff +0x18d:  jmp    08553868 <+0x1f6>
08553801 +0x18f:  mov    0x8(%ebp),%eax
08553804 +0x192:  mov    %eax,(%esp)
08553807 +0x195:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0855380c +0x19a:  mov    %eax,(%esp)
0855380f +0x19d:  call   081ac72e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x3a>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x3a
08553814 +0x1a2:  mov    -0x62(%ebp),%edx
08553817 +0x1a5:  lea    (%eax,%edx,1),%ebx
0855381a +0x1a8:  mov    0x8(%ebp),%eax
0855381d +0x1ab:  mov    %eax,(%esp)
08553820 +0x1ae:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08553825 +0x1b3:  mov    %ebx,0x4(%esp)
08553829 +0x1b7:  mov    %eax,(%esp)
0855382c +0x1ba:  call   081ac73a <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x46>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x46
08553831 +0x1bf:  mov    -0x62(%ebp),%ebx
08553834 +0x1c2:  mov    0x8(%ebp),%eax
08553837 +0x1c5:  mov    %eax,(%esp)
0855383a +0x1c8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0855383f +0x1cd:  mov    %eax,(%esp)
08553842 +0x1d0:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08553847 +0x1d5:  mov    0x8(%ebp),%edx
0855384a +0x1d8:  add    $0x79700,%edx
08553850 +0x1de:  movl   $0x3,0xc(%esp)
08553858 +0x1e6:  mov    %ebx,0x8(%esp)
0855385c +0x1ea:  mov    %eax,0x4(%esp)
08553860 +0x1ee:  mov    %edx,(%esp)
08553863 +0x1f1:  call   08683bf4 <_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason)
08553868 +0x1f6:  movl   $0x1,-0x1c(%ebp)
0855386f +0x1fd:  movl   $0x0,-0x18(%ebp)
08553876 +0x204:  lea    -0x24(%ebp),%eax
08553879 +0x207:  lea    -0x1c(%ebp),%edx
0855387c +0x20a:  mov    %edx,0x8(%esp)
08553880 +0x20e:  lea    -0x18(%ebp),%edx
08553883 +0x211:  mov    %edx,0x4(%esp)
08553887 +0x215:  mov    %eax,(%esp)
0855388a +0x218:  call   0855890e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x146f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x146f
0855388f +0x21d:  sub    $0x4,%esp
08553892 +0x220:  lea    -0x24(%ebp),%eax
08553895 +0x223:  mov    %eax,0x4(%esp)
08553899 +0x227:  lea    -0x2c(%ebp),%eax
0855389c +0x22a:  mov    %eax,(%esp)
0855389f +0x22d:  call   08558958 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x14b9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x14b9
085538a4 +0x232:  lea    -0x2c(%ebp),%eax
085538a7 +0x235:  mov    %eax,0x4(%esp)
085538ab +0x239:  mov    0x10(%ebp),%eax
085538ae +0x23c:  mov    %eax,(%esp)
085538b1 +0x23f:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
085538b6 +0x244:  mov    $0x1,%eax
085538bb +0x249:  mov    -0x4(%ebp),%ebx
085538be +0x24c:  leave
085538bf +0x24d:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_DoGetPackageCoin @ 0x8553672

/* WongWork::CMailBoxHelper::_DoGetPackageCoin(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageCoin
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  CInventory *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int local_66;
  short local_62;
  pair<int,int> local_30 [8];
  ENUM_ITEMSPACE local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_18 = CInventory::GetCoin(pCVar1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_14 = CInventory::GetEventCoin(pCVar1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetPayCoin(pCVar1);
  if (local_18 + local_14 + local_10 < 0x186a1) {
    if (param_4) {
      uVar2 = 1;
    }
    else {
      CMailBox::CMail::GetPackageItem();
      if (local_62 == 1) {
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar3 = CInventory::GetEventCoin(pCVar1);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::SetEventCoin(pCVar1,iVar3 + local_66);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar2 = CInventory::GetEventCoin(pCVar1);
        cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar2,local_66,2);
      }
      else if (local_62 == 2) {
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar3 = CInventory::GetPayCoin(pCVar1);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::SetPayCoin(pCVar1,iVar3 + local_66);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar2 = CInventory::GetEventCoin(pCVar1);
        cUserHistoryLog::PayCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar2,local_66,3);
      }
      else if (local_62 == 0) {
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar3 = CInventory::GetCoin(pCVar1);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::SetCoin(pCVar1,iVar3 + local_66);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar2 = CInventory::GetEventCoin(pCVar1);
        cUserHistoryLog::CoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar2,local_66,0);
      }
      local_20 = 1;
      local_1c = 0;
      std::make_pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_28,(INVEN_SLOT *)&local_1c);
      std::pair<int,int>::pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_30,local_28);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_30);
      uVar2 = 1;
    }
  }
  else {
    *(undefined4 *)param_5 = 0x4f;
    uVar2 = 0;
  }
  return uVar2;
}
```
