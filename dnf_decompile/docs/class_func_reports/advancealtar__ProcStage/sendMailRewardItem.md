# sendMailRewardItem

`_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_`

`advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812f47a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f47a  _ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_
#           advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*)
# range [0x0812f47a, 0x0812f70b]
0812f47a +0x000:  push   %ebp
0812f47b +0x001:  mov    %esp,%ebp
0812f47d +0x003:  push   %esi
0812f47e +0x004:  push   %ebx
0812f47f +0x005:  sub    $0x3f0,%esp
0812f485 +0x00b:  cmpl   $0x0,0x8(%ebp)
0812f489 +0x00f:  je     0812f6fa <+0x280>
0812f48f +0x015:  cmpl   $0x0,0x10(%ebp)
0812f493 +0x019:  je     0812f6fd <+0x283>
0812f499 +0x01f:  cmpl   $0x0,0x14(%ebp)
0812f49d +0x023:  je     0812f700 <+0x286>
0812f4a3 +0x029:  movl   $0x0,0xc(%esp)
0812f4ab +0x031:  mov    0x10(%ebp),%eax
0812f4ae +0x034:  mov    %eax,0x8(%esp)
0812f4b2 +0x038:  movl   $0x4,0x4(%esp)
0812f4ba +0x040:  movl   $&g_scriptStringManager_,(%esp)
0812f4c1 +0x047:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0812f4c6 +0x04c:  movl   $0x1e,0x8(%esp)
0812f4ce +0x054:  mov    %eax,0x4(%esp)
0812f4d2 +0x058:  lea    -0x4b(%ebp),%eax
0812f4d5 +0x05b:  mov    %eax,(%esp)
0812f4d8 +0x05e:  call   0807d8d0 <_init+0x1c8>
0812f4dd +0x063:  movl   $0x0,0xc(%esp)
0812f4e5 +0x06b:  mov    0x14(%ebp),%eax
0812f4e8 +0x06e:  mov    %eax,0x8(%esp)
0812f4ec +0x072:  movl   $0x4,0x4(%esp)
0812f4f4 +0x07a:  movl   $&g_scriptStringManager_,(%esp)
0812f4fb +0x081:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0812f500 +0x086:  movl   $0xff,0x8(%esp)
0812f508 +0x08e:  mov    %eax,0x4(%esp)
0812f50c +0x092:  lea    -0x15c(%ebp),%eax
0812f512 +0x098:  mov    %eax,(%esp)
0812f515 +0x09b:  call   0807d8d0 <_init+0x1c8>
0812f51a +0x0a0:  movl   $0x0,-0x14(%ebp)
0812f521 +0x0a7:  lea    -0x3be(%ebp),%eax
0812f527 +0x0ad:  mov    %eax,%ebx
0812f529 +0x0af:  mov    $0x9,%esi
0812f52e +0x0b4:  jmp    0812f53e <+0xc4>
0812f530 +0x0b6:  mov    %ebx,(%esp)
0812f533 +0x0b9:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0812f538 +0x0be:  add    $0x3d,%ebx
0812f53b +0x0c1:  sub    $0x1,%esi
0812f53e +0x0c4:  cmp    $0xffffffff,%esi
0812f541 +0x0c7:  setne  %al
0812f544 +0x0ca:  test   %al,%al
0812f546 +0x0cc:  jne    0812f530 <+0xb6>
0812f548 +0x0ce:  lea    -0x58(%ebp),%eax
0812f54b +0x0d1:  mov    %eax,(%esp)
0812f54e +0x0d4:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0812f553 +0x0d9:  movl   $0x0,-0x10(%ebp)
0812f55a +0x0e0:  lea    -0x5c(%ebp),%eax
0812f55d +0x0e3:  mov    0xc(%ebp),%edx
0812f560 +0x0e6:  mov    %edx,0x4(%esp)
0812f564 +0x0ea:  mov    %eax,(%esp)
0812f567 +0x0ed:  call   08135754 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x135b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x135b
0812f56c +0x0f2:  sub    $0x4,%esp
0812f56f +0x0f5:  jmp    0812f5ec <+0x172>
0812f571 +0x0f7:  addl   $0x1,-0x14(%ebp)
0812f575 +0x0fb:  lea    -0x5c(%ebp),%eax
0812f578 +0x0fe:  mov    %eax,(%esp)
0812f57b +0x101:  call   08135c5c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1863>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1863
0812f580 +0x106:  lea    0x8(%eax),%ebx
0812f583 +0x109:  lea    -0x5c(%ebp),%eax
0812f586 +0x10c:  mov    %eax,(%esp)
0812f589 +0x10f:  call   08135c5c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1863>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1863
0812f58e +0x114:  lea    0x4(%eax),%edx
0812f591 +0x117:  lea    -0x20(%ebp),%eax
0812f594 +0x11a:  mov    %ebx,0x8(%esp)
0812f598 +0x11e:  mov    %edx,0x4(%esp)
0812f59c +0x122:  mov    %eax,(%esp)
0812f59f +0x125:  call   08135c66 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x186d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x186d
0812f5a4 +0x12a:  sub    $0x4,%esp
0812f5a7 +0x12d:  lea    -0x20(%ebp),%eax
0812f5aa +0x130:  mov    %eax,0x4(%esp)
0812f5ae +0x134:  lea    -0x28(%ebp),%eax
0812f5b1 +0x137:  mov    %eax,(%esp)
0812f5b4 +0x13a:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0812f5b9 +0x13f:  lea    -0x28(%ebp),%eax
0812f5bc +0x142:  mov    %eax,0x4(%esp)
0812f5c0 +0x146:  lea    -0x58(%ebp),%eax
0812f5c3 +0x149:  mov    %eax,(%esp)
0812f5c6 +0x14c:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0812f5cb +0x151:  lea    -0x18(%ebp),%eax
0812f5ce +0x154:  movl   $0x0,0x8(%esp)
0812f5d6 +0x15c:  lea    -0x5c(%ebp),%edx
0812f5d9 +0x15f:  mov    %edx,0x4(%esp)
0812f5dd +0x163:  mov    %eax,(%esp)
0812f5e0 +0x166:  call   081357d8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13df>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13df
0812f5e5 +0x16b:  sub    $0x4,%esp
0812f5e8 +0x16e:  addl   $0x1,-0x10(%ebp)
0812f5ec +0x172:  lea    -0x2c(%ebp),%eax
0812f5ef +0x175:  mov    0xc(%ebp),%edx
0812f5f2 +0x178:  mov    %edx,0x4(%esp)
0812f5f6 +0x17c:  mov    %eax,(%esp)
0812f5f9 +0x17f:  call   08135780 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1387>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1387
0812f5fe +0x184:  sub    $0x4,%esp
0812f601 +0x187:  lea    -0x2c(%ebp),%eax
0812f604 +0x18a:  mov    %eax,0x4(%esp)
0812f608 +0x18e:  lea    -0x5c(%ebp),%eax
0812f60b +0x191:  mov    %eax,(%esp)
0812f60e +0x194:  call   081357ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13b3
0812f613 +0x199:  test   %al,%al
0812f615 +0x19b:  je     0812f624 <+0x1aa>
0812f617 +0x19d:  cmpl   $0x9,-0x10(%ebp)
0812f61b +0x1a1:  jg     0812f624 <+0x1aa>
0812f61d +0x1a3:  mov    $0x1,%eax
0812f622 +0x1a8:  jmp    0812f629 <+0x1af>
0812f624 +0x1aa:  mov    $0x0,%eax
0812f629 +0x1af:  test   %al,%al
0812f62b +0x1b1:  jne    0812f571 <+0xf7>
0812f631 +0x1b7:  movl   $0xf,-0xc(%ebp)
0812f638 +0x1be:  mov    -0x14(%ebp),%eax
0812f63b +0x1c1:  mov    %eax,0x8(%esp)
0812f63f +0x1c5:  lea    -0x3be(%ebp),%eax
0812f645 +0x1cb:  mov    %eax,0x4(%esp)
0812f649 +0x1cf:  lea    -0x58(%ebp),%eax
0812f64c +0x1d2:  mov    %eax,(%esp)
0812f64f +0x1d5:  call   08556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>  ; WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)
0812f654 +0x1da:  mov    0x8(%ebp),%eax
0812f657 +0x1dd:  mov    %eax,(%esp)
0812f65a +0x1e0:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0812f65f +0x1e5:  mov    %eax,%ebx
0812f661 +0x1e7:  lea    -0x15c(%ebp),%eax
0812f667 +0x1ed:  mov    %eax,(%esp)
0812f66a +0x1f0:  call   0807e3b0 <_init+0xca8>
0812f66f +0x1f5:  mov    %eax,%esi
0812f671 +0x1f7:  movl   $0xffffffff,0x4(%esp)
0812f679 +0x1ff:  mov    0x8(%ebp),%eax
0812f67c +0x202:  mov    %eax,(%esp)
0812f67f +0x205:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0812f684 +0x20a:  mov    %eax,%edx
0812f686 +0x20c:  mov    -0x14(%ebp),%eax
0812f689 +0x20f:  movl   $0x0,0x24(%esp)
0812f691 +0x217:  mov    %ebx,0x20(%esp)
0812f695 +0x21b:  movl   $0xf,0x1c(%esp)
0812f69d +0x223:  mov    %esi,0x18(%esp)
0812f6a1 +0x227:  lea    -0x15c(%ebp),%ecx
0812f6a7 +0x22d:  mov    %ecx,0x14(%esp)
0812f6ab +0x231:  mov    %edx,0x10(%esp)
0812f6af +0x235:  movl   $0x0,0xc(%esp)
0812f6b7 +0x23d:  mov    %eax,0x8(%esp)
0812f6bb +0x241:  lea    -0x3be(%ebp),%eax
0812f6c1 +0x247:  mov    %eax,0x4(%esp)
0812f6c5 +0x24b:  lea    -0x4b(%ebp),%eax
0812f6c8 +0x24e:  mov    %eax,(%esp)
0812f6cb +0x251:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
0812f6d0 +0x256:  jmp    0812f6ed <+0x273>
0812f6d2 +0x258:  mov    %edx,%ebx
0812f6d4 +0x25a:  mov    %eax,%esi
0812f6d6 +0x25c:  lea    -0x58(%ebp),%eax
0812f6d9 +0x25f:  mov    %eax,(%esp)
0812f6dc +0x262:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0812f6e1 +0x267:  mov    %esi,%eax
0812f6e3 +0x269:  mov    %ebx,%edx
0812f6e5 +0x26b:  mov    %eax,(%esp)
0812f6e8 +0x26e:  call   08ae3750 <_Unwind_Resume>
0812f6ed +0x273:  lea    -0x58(%ebp),%eax
0812f6f0 +0x276:  mov    %eax,(%esp)
0812f6f3 +0x279:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0812f6f8 +0x27e:  jmp    0812f701 <+0x287>
0812f6fa +0x280:  nop
0812f6fb +0x281:  jmp    0812f701 <+0x287>
0812f6fd +0x283:  nop
0812f6fe +0x284:  jmp    0812f701 <+0x287>
0812f700 +0x286:  nop
0812f701 +0x287:  lea    -0x8(%ebp),%esp
0812f704 +0x28a:  add    $0x0,%esp
0812f707 +0x28d:  pop    %ebx
0812f708 +0x28e:  pop    %esi
0812f709 +0x28f:  pop    %ebp
0812f70a +0x290:  ret
0812f70b +0x291:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::sendMailRewardItem @ 0x812f47a

/* advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem,
   std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*) */

void advancealtar::ProcStage::sendMailRewardItem
               (CUser *param_1,vector *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  Inven_Item *this;
  int iVar6;
  Inven_Item local_3c2 [610];
  char local_160 [256];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_60 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_5c [13];
  char local_4f [31];
  __normal_iterator local_30 [4];
  pair<int,int> local_2c [8];
  ulong local_24 [2];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_1c [4];
  uint local_18;
  int local_14;
  undefined4 local_10;
  
  if (((param_1 != (CUser *)0x0) && (param_3 != (char *)0x0)) && (param_4 != (char *)0x0)) {
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,param_3,
                                (bool *)0x0);
    strncpy(local_4f,pcVar2,0x1e);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,param_4,
                                (bool *)0x0);
    strncpy(local_160,pcVar2,0xff);
    local_18 = 0;
    this = local_3c2;
    for (iVar6 = 9; iVar6 != -1; iVar6 = iVar6 + -1) {
      Inven_Item::Inven_Item(this);
      this = this + 0x3d;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_5c);
    local_14 = 0;
                    /* try { // try from 0812f567 to 0812f6cf has its CatchHandler @ 0812f6d2 */
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
    while( true ) {
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
      bVar1 = __gnu_cxx::operator!=(local_60,local_30);
      if ((bVar1) && (local_14 < 10)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      local_18 = local_18 + 1;
      __gnu_cxx::
      __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
      ::operator->(local_60);
      iVar6 = __gnu_cxx::
              __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
              ::operator->(local_60);
      std::make_pair<unsigned_long_const&,int_const&>(local_24,(int *)(iVar6 + 4));
      std::pair<int,int>::pair<unsigned_long,int>(local_2c,(pair *)local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_5c,local_2c);
      __gnu_cxx::
      __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
      ::operator++(local_1c,(int)local_60);
      local_14 = local_14 + 1;
    }
    local_10 = 0xf;
    WongWork::CMailBoxHelper::MakeSystemMultiMailPostal((vector *)local_5c,local_3c2,local_18);
    uVar3 = CUser::GetServerGroup(param_1);
    sVar4 = strlen(local_160);
    uVar5 = CUser::get_charac_no(param_1,-1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
              (local_4f,local_3c2,local_18,0,uVar5,local_160,sVar4,0xf,uVar3,0);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_5c);
  }
  return;
}
```
