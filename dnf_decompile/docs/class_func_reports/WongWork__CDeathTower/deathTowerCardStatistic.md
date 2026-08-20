# deathTowerCardStatistic

`_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item`

`WongWork::CDeathTower::deathTowerCardStatistic(int, CUser*, Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846966c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846966c  _ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item
#           WongWork::CDeathTower::deathTowerCardStatistic(int, CUser*, Inven_Item const*)
# range [0x0846966c, 0x084698dc]
0846966c +0x000:  push   %ebp
0846966d +0x001:  mov    %esp,%ebp
0846966f +0x003:  push   %edi
08469670 +0x004:  push   %esi
08469671 +0x005:  push   %ebx
08469672 +0x006:  sub    $0x4c,%esp
08469675 +0x009:  mov    0x8(%ebp),%eax
08469678 +0x00c:  add    $0xc,%eax
0846967b +0x00f:  mov    %eax,(%esp)
0846967e +0x012:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08469683 +0x017:  mov    %eax,(%esp)
08469686 +0x01a:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0846968b +0x01f:  cmp    $0x2af8,%eax
08469690 +0x024:  sete   %al
08469693 +0x027:  test   %al,%al
08469695 +0x029:  je     0846969d <+0x31>
08469697 +0x02b:  movb   $0x0,-0x25(%ebp)
0846969b +0x02f:  jmp    084696a1 <+0x35>
0846969d +0x031:  movb   $0x1,-0x25(%ebp)
084696a1 +0x035:  mov    0x10(%ebp),%eax
084696a4 +0x038:  mov    %eax,(%esp)
084696a7 +0x03b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084696ac +0x040:  mov    %eax,-0x24(%ebp)
084696af +0x043:  movl   $0x0,-0x20(%ebp)
084696b6 +0x04a:  jmp    084698c4 <+0x258>
084696bb +0x04f:  mov    -0x20(%ebp),%eax
084696be +0x052:  imul   $0x3d,%eax,%eax
084696c1 +0x055:  add    0x14(%ebp),%eax
084696c4 +0x058:  mov    0x2(%eax),%eax
084696c7 +0x05b:  test   %eax,%eax
084696c9 +0x05d:  jne    08469741 <+0xd5>
084696cb +0x05f:  mov    -0x20(%ebp),%eax
084696ce +0x062:  imul   $0x3d,%eax,%eax
084696d1 +0x065:  add    0x14(%ebp),%eax
084696d4 +0x068:  mov    %eax,(%esp)
084696d7 +0x06b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084696dc +0x070:  mov    %eax,%ebx
084696de +0x072:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
084696e3 +0x077:  mov    %ebx,0xc(%esp)
084696e7 +0x07b:  mov    0x10(%ebp),%edx
084696ea +0x07e:  mov    %edx,0x8(%esp)
084696ee +0x082:  movl   $0xb,0x4(%esp)
084696f6 +0x08a:  mov    %eax,(%esp)
084696f9 +0x08d:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
084696fe +0x092:  mov    -0x20(%ebp),%eax
08469701 +0x095:  imul   $0x3d,%eax,%eax
08469704 +0x098:  add    0x14(%ebp),%eax
08469707 +0x09b:  mov    %eax,(%esp)
0846970a +0x09e:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0846970f +0x0a3:  mov    %eax,%edi
08469711 +0x0a5:  mov    -0x24(%ebp),%eax
08469714 +0x0a8:  movsbl %al,%esi
08469717 +0x0ab:  movsbl -0x25(%ebp),%ebx
0846971b +0x0af:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
08469720 +0x0b4:  mov    %edi,0x10(%esp)
08469724 +0x0b8:  mov    %esi,0xc(%esp)
08469728 +0x0bc:  mov    %ebx,0x8(%esp)
0846972c +0x0c0:  movl   $0x8,0x4(%esp)
08469734 +0x0c8:  mov    %eax,(%esp)
08469737 +0x0cb:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
0846973c +0x0d0:  jmp    084698c0 <+0x254>
08469741 +0x0d5:  mov    -0x20(%ebp),%eax
08469744 +0x0d8:  imul   $0x3d,%eax,%eax
08469747 +0x0db:  add    0x14(%ebp),%eax
0846974a +0x0de:  mov    0x2(%eax),%eax
0846974d +0x0e1:  mov    %eax,%ebx
0846974f +0x0e3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08469754 +0x0e8:  mov    %ebx,0x4(%esp)
08469758 +0x0ec:  mov    %eax,(%esp)
0846975b +0x0ef:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08469760 +0x0f4:  mov    %eax,-0x1c(%ebp)
08469763 +0x0f7:  movl   $0x0,-0x2c(%ebp)
0846976a +0x0fe:  mov    0xc(%ebp),%eax
0846976d +0x101:  movswl %ax,%esi
08469770 +0x104:  mov    -0x20(%ebp),%eax
08469773 +0x107:  imul   $0x3d,%eax,%eax
08469776 +0x10a:  mov    %eax,%ebx
08469778 +0x10c:  add    0x14(%ebp),%ebx
0846977b +0x10f:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
08469780 +0x114:  lea    -0x2c(%ebp),%edx
08469783 +0x117:  mov    %edx,0x14(%esp)
08469787 +0x11b:  movl   $0x0,0x10(%esp)
0846978f +0x123:  mov    %esi,0xc(%esp)
08469793 +0x127:  mov    -0x1c(%ebp),%edx
08469796 +0x12a:  mov    %edx,0x8(%esp)
0846979a +0x12e:  mov    %ebx,0x4(%esp)
0846979e +0x132:  mov    %eax,(%esp)
084697a1 +0x135:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
084697a6 +0x13a:  cmpl   $0x0,-0x1c(%ebp)
084697aa +0x13e:  je     084697d1 <+0x165>
084697ac +0x140:  mov    -0x2c(%ebp),%eax
084697af +0x143:  mov    %eax,%ebx
084697b1 +0x145:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
084697b6 +0x14a:  mov    %ebx,0xc(%esp)
084697ba +0x14e:  mov    0x10(%ebp),%edx
084697bd +0x151:  mov    %edx,0x8(%esp)
084697c1 +0x155:  movl   $0xc,0x4(%esp)
084697c9 +0x15d:  mov    %eax,(%esp)
084697cc +0x160:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
084697d1 +0x165:  cmpl   $0x0,-0x1c(%ebp)
084697d5 +0x169:  je     084698c0 <+0x254>
084697db +0x16f:  mov    -0x1c(%ebp),%eax
084697de +0x172:  mov    (%eax),%eax
084697e0 +0x174:  add    $0xc,%eax
084697e3 +0x177:  mov    (%eax),%edx
084697e5 +0x179:  mov    -0x1c(%ebp),%eax
084697e8 +0x17c:  mov    %eax,(%esp)
084697eb +0x17f:  call   *%edx
084697ed +0x181:  cmp    $0x3,%eax
084697f0 +0x184:  sete   %al
084697f3 +0x187:  test   %al,%al
084697f5 +0x189:  je     08469858 <+0x1ec>
084697f7 +0x18b:  mov    -0x24(%ebp),%eax
084697fa +0x18e:  movsbl %al,%esi
084697fd +0x191:  movsbl -0x25(%ebp),%ebx
08469801 +0x195:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
08469806 +0x19a:  movl   $0x1,0x10(%esp)
0846980e +0x1a2:  mov    %esi,0xc(%esp)
08469812 +0x1a6:  mov    %ebx,0x8(%esp)
08469816 +0x1aa:  movl   $0x2,0x4(%esp)
0846981e +0x1b2:  mov    %eax,(%esp)
08469821 +0x1b5:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
08469826 +0x1ba:  mov    -0x2c(%ebp),%eax
08469829 +0x1bd:  mov    %eax,%edi
0846982b +0x1bf:  mov    -0x24(%ebp),%eax
0846982e +0x1c2:  movsbl %al,%esi
08469831 +0x1c5:  movsbl -0x25(%ebp),%ebx
08469835 +0x1c9:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
0846983a +0x1ce:  mov    %edi,0x10(%esp)
0846983e +0x1d2:  mov    %esi,0xc(%esp)
08469842 +0x1d6:  mov    %ebx,0x8(%esp)
08469846 +0x1da:  movl   $0x7,0x4(%esp)
0846984e +0x1e2:  mov    %eax,(%esp)
08469851 +0x1e5:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
08469856 +0x1ea:  jmp    084698c0 <+0x254>
08469858 +0x1ec:  mov    -0x1c(%ebp),%eax
0846985b +0x1ef:  mov    %eax,(%esp)
0846985e +0x1f2:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08469863 +0x1f7:  mov    %eax,%edi
08469865 +0x1f9:  mov    -0x24(%ebp),%eax
08469868 +0x1fc:  movsbl %al,%esi
0846986b +0x1ff:  movsbl -0x25(%ebp),%ebx
0846986f +0x203:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
08469874 +0x208:  mov    %edi,0x10(%esp)
08469878 +0x20c:  mov    %esi,0xc(%esp)
0846987c +0x210:  mov    %ebx,0x8(%esp)
08469880 +0x214:  movl   $0xa,0x4(%esp)
08469888 +0x21c:  mov    %eax,(%esp)
0846988b +0x21f:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
08469890 +0x224:  mov    -0x2c(%ebp),%eax
08469893 +0x227:  mov    %eax,%edi
08469895 +0x229:  mov    -0x24(%ebp),%eax
08469898 +0x22c:  movsbl %al,%esi
0846989b +0x22f:  movsbl -0x25(%ebp),%ebx
0846989f +0x233:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
084698a4 +0x238:  mov    %edi,0x10(%esp)
084698a8 +0x23c:  mov    %esi,0xc(%esp)
084698ac +0x240:  mov    %ebx,0x8(%esp)
084698b0 +0x244:  movl   $0x7,0x4(%esp)
084698b8 +0x24c:  mov    %eax,(%esp)
084698bb +0x24f:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
084698c0 +0x254:  addl   $0x1,-0x20(%ebp)
084698c4 +0x258:  mov    -0x20(%ebp),%eax
084698c7 +0x25b:  cmp    0xc(%ebp),%eax
084698ca +0x25e:  setl   %al
084698cd +0x261:  test   %al,%al
084698cf +0x263:  jne    084696bb <+0x4f>
084698d5 +0x269:  add    $0x4c,%esp
084698d8 +0x26c:  pop    %ebx
084698d9 +0x26d:  pop    %esi
084698da +0x26e:  pop    %edi
084698db +0x26f:  pop    %ebp
084698dc +0x270:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::deathTowerCardStatistic @ 0x846966c

/* WongWork::CDeathTower::deathTowerCardStatistic(int, CUser*, Inven_Item const*) */

void __thiscall
WongWork::CDeathTower::deathTowerCardStatistic
          (CDeathTower *this,int param_1,CUser *param_2,Inven_Item *param_3)

{
  char cVar1;
  CDungeon *this_00;
  int iVar2;
  undefined4 uVar3;
  CValueStatistic *pCVar4;
  CDeathTowerValueStatistic *pCVar5;
  CDataManager *this_01;
  Store *this_02;
  int iVar6;
  int local_30;
  char local_29;
  undefined4 local_28;
  int local_24;
  CItem *local_20;
  
  this_00 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
  iVar2 = CDungeon::get_index(this_00);
  local_29 = iVar2 != 11000;
  local_28 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    if (*(int *)(param_3 + local_24 * 0x3d + 2) == 0) {
      uVar3 = Inven_Item::get_add_info(param_3 + local_24 * 0x3d);
      pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar4,0xb,param_2,uVar3);
      uVar3 = Inven_Item::get_add_info(param_3 + local_24 * 0x3d);
      cVar1 = (char)local_28;
      iVar2 = (int)local_29;
      pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
      CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,8,iVar2,(int)cVar1,uVar3);
    }
    else {
      iVar2 = *(int *)(param_3 + local_24 * 0x3d + 2);
      this_01 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_01,iVar2);
      local_30 = 0;
      iVar2 = local_24 * 0x3d;
      this_02 = (Store *)G_Store();
      Store::GetSellItemPrice(this_02,param_3 + iVar2,local_20,(short)param_1,false,&local_30);
      iVar2 = local_30;
      if (local_20 != (CItem *)0x0) {
        pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar4,0xc,param_2,iVar2);
      }
      if (local_20 != (CItem *)0x0) {
        iVar2 = (**(code **)(*(int *)local_20 + 0xc))(local_20);
        if (iVar2 == 3) {
          cVar1 = (char)local_28;
          iVar2 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,2,iVar2,(int)cVar1,1);
          iVar2 = local_30;
          cVar1 = (char)local_28;
          iVar6 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,7,iVar6,(int)cVar1,iVar2);
        }
        else {
          uVar3 = CItem::get_rarity(local_20);
          cVar1 = (char)local_28;
          iVar2 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,10,iVar2,(int)cVar1,uVar3);
          iVar2 = local_30;
          cVar1 = (char)local_28;
          iVar6 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,7,iVar6,(int)cVar1,iVar2);
        }
      }
    }
  }
  return;
}
```
