# _CheckEnableAvatarCondition

`_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t`

`ItemVendingMachine::_CheckEnableAvatarCondition(CCeraShopGoods const*, char, unsigned char, stAvatarTypeSelect_t&)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08176794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08176794  _ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t
#           ItemVendingMachine::_CheckEnableAvatarCondition(CCeraShopGoods const*, char, unsigned char, stAvatarTypeSelect_t&)
# range [0x08176794, 0x081768af]
08176794 +0x000:  push   %ebp
08176795 +0x001:  mov    %esp,%ebp
08176797 +0x003:  sub    $0x38,%esp
0817679a +0x006:  mov    0x10(%ebp),%edx
0817679d +0x009:  mov    0x14(%ebp),%eax
081767a0 +0x00c:  mov    %dl,-0x1c(%ebp)
081767a3 +0x00f:  mov    %al,-0x20(%ebp)
081767a6 +0x012:  mov    0xc(%ebp),%eax
081767a9 +0x015:  mov    %eax,(%esp)
081767ac +0x018:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
081767b1 +0x01d:  mov    (%eax),%edx
081767b3 +0x01f:  add    $0x10,%edx
081767b6 +0x022:  mov    (%edx),%edx
081767b8 +0x024:  mov    %eax,(%esp)
081767bb +0x027:  call   *%edx
081767bd +0x029:  xor    $0x1,%eax
081767c0 +0x02c:  test   %al,%al
081767c2 +0x02e:  je     081767ce <+0x3a>
081767c4 +0x030:  mov    $0x0,%eax
081767c9 +0x035:  jmp    081768ae <+0x11a>
081767ce +0x03a:  mov    0x18(%ebp),%eax
081767d1 +0x03d:  mov    %eax,(%esp)
081767d4 +0x040:  call   0898d1fc <_ZN20stAvatarTypeSelect_t4initEv>  ; stAvatarTypeSelect_t::init()
081767d9 +0x045:  mov    0xc(%ebp),%eax
081767dc +0x048:  mov    %eax,(%esp)
081767df +0x04b:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
081767e4 +0x050:  mov    %eax,-0x10(%ebp)
081767e7 +0x053:  mov    -0x10(%ebp),%eax
081767ea +0x056:  mov    %eax,(%esp)
081767ed +0x059:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
081767f2 +0x05e:  mov    %eax,-0xc(%ebp)
081767f5 +0x061:  mov    -0xc(%ebp),%eax
081767f8 +0x064:  mov    %eax,(%esp)
081767fb +0x067:  call   081521b6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1aeb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1aeb
08176800 +0x06c:  test   %al,%al
08176802 +0x06e:  jne    08176814 <+0x80>
08176804 +0x070:  mov    -0xc(%ebp),%eax
08176807 +0x073:  mov    %eax,(%esp)
0817680a +0x076:  call   0815219a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1acf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1acf
0817680f +0x07b:  cmp    -0x1c(%ebp),%al
08176812 +0x07e:  jg     0817681b <+0x87>
08176814 +0x080:  mov    $0x1,%eax
08176819 +0x085:  jmp    08176820 <+0x8c>
0817681b +0x087:  mov    $0x0,%eax
08176820 +0x08c:  test   %al,%al
08176822 +0x08e:  je     0817682e <+0x9a>
08176824 +0x090:  mov    $0x0,%eax
08176829 +0x095:  jmp    081768ae <+0x11a>
0817682e +0x09a:  cmpb   $0x63,-0x20(%ebp)
08176832 +0x09e:  jbe    0817683b <+0xa7>
08176834 +0x0a0:  mov    $0x0,%eax
08176839 +0x0a5:  jmp    081768ae <+0x11a>
0817683b +0x0a7:  movsbl -0x1c(%ebp),%eax
0817683f +0x0ab:  mov    %eax,0x4(%esp)
08176843 +0x0af:  mov    -0xc(%ebp),%eax
08176846 +0x0b2:  mov    %eax,(%esp)
08176849 +0x0b5:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
0817684e +0x0ba:  mov    0xc(%eax),%edx
08176851 +0x0bd:  mov    0x18(%ebp),%eax
08176854 +0x0c0:  mov    %edx,0xc(%eax)
08176857 +0x0c3:  movsbl -0x1c(%ebp),%eax
0817685b +0x0c7:  mov    %eax,0x4(%esp)
0817685f +0x0cb:  mov    -0xc(%ebp),%eax
08176862 +0x0ce:  mov    %eax,(%esp)
08176865 +0x0d1:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
0817686a +0x0d6:  mov    0x4(%eax),%edx
0817686d +0x0d9:  mov    0x18(%ebp),%eax
08176870 +0x0dc:  mov    %edx,0x4(%eax)
08176873 +0x0df:  movsbl -0x1c(%ebp),%eax
08176877 +0x0e3:  mov    %eax,0x4(%esp)
0817687b +0x0e7:  mov    -0xc(%ebp),%eax
0817687e +0x0ea:  mov    %eax,(%esp)
08176881 +0x0ed:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
08176886 +0x0f2:  mov    0x8(%eax),%edx
08176889 +0x0f5:  mov    0x18(%ebp),%eax
0817688c +0x0f8:  mov    %edx,0x8(%eax)
0817688f +0x0fb:  movsbl -0x1c(%ebp),%eax
08176893 +0x0ff:  mov    %eax,0x4(%esp)
08176897 +0x103:  mov    -0xc(%ebp),%eax
0817689a +0x106:  mov    %eax,(%esp)
0817689d +0x109:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
081768a2 +0x10e:  mov    (%eax),%edx
081768a4 +0x110:  mov    0x18(%ebp),%eax
081768a7 +0x113:  mov    %edx,(%eax)
081768a9 +0x115:  mov    $0x1,%eax
081768ae +0x11a:  leave
081768af +0x11b:  ret
```

## 反编译 C

```c
// ItemVendingMachine::_CheckEnableAvatarCondition @ 0x8176794

/* ItemVendingMachine::_CheckEnableAvatarCondition(CCeraShopGoods const*, char, unsigned char,
   stAvatarTypeSelect_t&) */

undefined4 __thiscall
ItemVendingMachine::_CheckEnableAvatarCondition
          (ItemVendingMachine *this,CCeraShopGoods *param_1,char param_2,uchar param_3,
          stAvatarTypeSelect_t *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  CEquipItem *this_00;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *this_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  piVar3 = (int *)CCeraShopGoods::GetRelatedItem(param_1);
  cVar2 = (**(code **)(*piVar3 + 0x10))(piVar3);
  if (cVar2 == '\x01') {
    stAvatarTypeSelect_t::init(param_4);
    this_00 = (CEquipItem *)CCeraShopGoods::GetRelatedItem(param_1);
    this_01 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
              CEquipItem::getAvatarTypeSelect(this_00);
    cVar2 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::empty();
    if ((cVar2 == '\0') &&
       (cVar2 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size
                          (this_01), param_2 < cVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else if (param_3 < 100) {
      iVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                        (this_01,(int)param_2);
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      iVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                        (this_01,(int)param_2);
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                        (this_01,(int)param_2);
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(iVar5 + 8);
      puVar6 = (undefined4 *)
               std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                         (this_01,(int)param_2);
      *(undefined4 *)param_4 = *puVar6;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0;
}
```
