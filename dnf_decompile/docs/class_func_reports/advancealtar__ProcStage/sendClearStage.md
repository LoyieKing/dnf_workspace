# sendClearStage

`_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib`

`advancealtar::ProcStage::sendClearStage(std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> > const&, std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > > const&, int, bool) const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e6de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e6de  _ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib
#           advancealtar::ProcStage::sendClearStage(std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> > const&, std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > > const&, int, bool) const
# range [0x0812e6de, 0x0812e9ff]
0812e6de +0x000:  push   %ebp
0812e6df +0x001:  mov    %esp,%ebp
0812e6e1 +0x003:  push   %esi
0812e6e2 +0x004:  push   %ebx
0812e6e3 +0x005:  add    $0xffffff80,%esp
0812e6e6 +0x008:  mov    0x1c(%ebp),%eax
0812e6e9 +0x00b:  mov    %al,-0x6c(%ebp)
0812e6ec +0x00e:  mov    0x8(%ebp),%eax
0812e6ef +0x011:  mov    (%eax),%eax
0812e6f1 +0x013:  mov    %eax,(%esp)
0812e6f4 +0x016:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812e6f9 +0x01b:  mov    %eax,-0x18(%ebp)
0812e6fc +0x01e:  cmpl   $0x0,-0x18(%ebp)
0812e700 +0x022:  je     0812e9f5 <+0x317>
0812e706 +0x028:  movw   $0x0,-0x12(%ebp)
0812e70c +0x02e:  mov    -0x18(%ebp),%eax
0812e70f +0x031:  add    $0x8df60,%eax
0812e714 +0x036:  mov    %eax,(%esp)
0812e717 +0x039:  call   081348c4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4cb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4cb
0812e71c +0x03e:  mov    %eax,-0x10(%ebp)
0812e71f +0x041:  cmpl   $0x0,-0x10(%ebp)
0812e723 +0x045:  je     0812e730 <+0x52>
0812e725 +0x047:  mov    -0x10(%ebp),%eax
0812e728 +0x04a:  movzwl 0x18(%eax),%eax
0812e72c +0x04e:  mov    %ax,-0x12(%ebp)
0812e730 +0x052:  lea    -0x4c(%ebp),%eax
0812e733 +0x055:  mov    %eax,(%esp)
0812e736 +0x058:  call   08134720 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x327>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x327
0812e73b +0x05d:  mov    0x8(%ebp),%eax
0812e73e +0x060:  mov    %eax,(%esp)
0812e741 +0x063:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812e746 +0x068:  mov    %eax,-0x4c(%ebp)
0812e749 +0x06b:  mov    0x8(%ebp),%eax
0812e74c +0x06e:  mov    %eax,(%esp)
0812e74f +0x071:  call   0812eb4e <_ZNK12advancealtar9ProcStage23getClearSurvivalRoundNoEv>  ; advancealtar::ProcStage::getClearSurvivalRoundNo() const
0812e754 +0x076:  mov    %eax,-0x48(%ebp)
0812e757 +0x079:  movswl -0x12(%ebp),%eax
0812e75b +0x07d:  mov    %eax,-0x44(%ebp)
0812e75e +0x080:  movzbl -0x6c(%ebp),%eax
0812e762 +0x084:  mov    %al,-0x40(%ebp)
0812e765 +0x087:  mov    0x8(%ebp),%eax
0812e768 +0x08a:  mov    %eax,(%esp)
0812e76b +0x08d:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e770 +0x092:  mov    %eax,-0x3f(%ebp)
0812e773 +0x095:  mov    0x8(%ebp),%eax
0812e776 +0x098:  mov    0x68(%eax),%eax
0812e779 +0x09b:  mov    %eax,-0x3b(%ebp)
0812e77c +0x09e:  mov    0x18(%ebp),%eax
0812e77f +0x0a1:  mov    %eax,-0x34(%ebp)
0812e782 +0x0a4:  lea    -0x58(%ebp),%eax
0812e785 +0x0a7:  mov    %eax,(%esp)
0812e788 +0x0aa:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0812e78d +0x0af:  movl   $0x20f,0x8(%esp)
0812e795 +0x0b7:  movl   $0x0,0x4(%esp)
0812e79d +0x0bf:  lea    -0x58(%ebp),%eax
0812e7a0 +0x0c2:  mov    %eax,(%esp)
0812e7a3 +0x0c5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0812e7a8 +0x0ca:  lea    -0x4c(%ebp),%eax
0812e7ab +0x0cd:  movl   $0x1c,0x8(%esp)
0812e7b3 +0x0d5:  mov    %eax,0x4(%esp)
0812e7b7 +0x0d9:  lea    -0x58(%ebp),%eax
0812e7ba +0x0dc:  mov    %eax,(%esp)
0812e7bd +0x0df:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812e7c2 +0x0e4:  mov    0xc(%ebp),%eax
0812e7c5 +0x0e7:  mov    %eax,(%esp)
0812e7c8 +0x0ea:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
0812e7cd +0x0ef:  mov    %eax,-0xc(%ebp)
0812e7d0 +0x0f2:  mov    -0xc(%ebp),%eax
0812e7d3 +0x0f5:  mov    %eax,0x4(%esp)
0812e7d7 +0x0f9:  lea    -0x58(%ebp),%eax
0812e7da +0x0fc:  mov    %eax,(%esp)
0812e7dd +0x0ff:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0812e7e2 +0x104:  cmpl   $0x0,-0xc(%ebp)
0812e7e6 +0x108:  jle    0812e86d <+0x18f>
0812e7ec +0x10e:  lea    -0x5c(%ebp),%eax
0812e7ef +0x111:  mov    0xc(%ebp),%edx
0812e7f2 +0x114:  mov    %edx,0x4(%esp)
0812e7f6 +0x118:  mov    %eax,(%esp)
0812e7f9 +0x11b:  call   08135754 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x135b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x135b
0812e7fe +0x120:  sub    $0x4,%esp
0812e801 +0x123:  jmp    0812e842 <+0x164>
0812e803 +0x125:  lea    -0x5c(%ebp),%eax
0812e806 +0x128:  mov    %eax,(%esp)
0812e809 +0x12b:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0812e80e +0x130:  movl   $0xc,0x8(%esp)
0812e816 +0x138:  mov    %eax,0x4(%esp)
0812e81a +0x13c:  lea    -0x58(%ebp),%eax
0812e81d +0x13f:  mov    %eax,(%esp)
0812e820 +0x142:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812e825 +0x147:  lea    -0x2c(%ebp),%eax
0812e828 +0x14a:  movl   $0x0,0x8(%esp)
0812e830 +0x152:  lea    -0x5c(%ebp),%edx
0812e833 +0x155:  mov    %edx,0x4(%esp)
0812e837 +0x159:  mov    %eax,(%esp)
0812e83a +0x15c:  call   081357d8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13df>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13df
0812e83f +0x161:  sub    $0x4,%esp
0812e842 +0x164:  lea    -0x30(%ebp),%eax
0812e845 +0x167:  mov    0xc(%ebp),%edx
0812e848 +0x16a:  mov    %edx,0x4(%esp)
0812e84c +0x16e:  mov    %eax,(%esp)
0812e84f +0x171:  call   08135780 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1387>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1387
0812e854 +0x176:  sub    $0x4,%esp
0812e857 +0x179:  lea    -0x30(%ebp),%eax
0812e85a +0x17c:  mov    %eax,0x4(%esp)
0812e85e +0x180:  lea    -0x5c(%ebp),%eax
0812e861 +0x183:  mov    %eax,(%esp)
0812e864 +0x186:  call   081357ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13b3
0812e869 +0x18b:  test   %al,%al
0812e86b +0x18d:  jne    0812e803 <+0x125>
0812e86d +0x18f:  mov    0x10(%ebp),%eax
0812e870 +0x192:  mov    %eax,(%esp)
0812e873 +0x195:  call   08135816 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x141d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x141d
0812e878 +0x19a:  mov    %eax,0x4(%esp)
0812e87c +0x19e:  lea    -0x58(%ebp),%eax
0812e87f +0x1a1:  mov    %eax,(%esp)
0812e882 +0x1a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0812e887 +0x1a9:  lea    -0x60(%ebp),%eax
0812e88a +0x1ac:  mov    0x10(%ebp),%edx
0812e88d +0x1af:  mov    %edx,0x4(%esp)
0812e891 +0x1b3:  mov    %eax,(%esp)
0812e894 +0x1b6:  call   08135838 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x143f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x143f
0812e899 +0x1bb:  sub    $0x4,%esp
0812e89c +0x1be:  jmp    0812e8dd <+0x1ff>
0812e89e +0x1c0:  lea    -0x60(%ebp),%eax
0812e8a1 +0x1c3:  mov    %eax,(%esp)
0812e8a4 +0x1c6:  call   081358f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x14f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x14f7
0812e8a9 +0x1cb:  movl   $0xc,0x8(%esp)
0812e8b1 +0x1d3:  mov    %eax,0x4(%esp)
0812e8b5 +0x1d7:  lea    -0x58(%ebp),%eax
0812e8b8 +0x1da:  mov    %eax,(%esp)
0812e8bb +0x1dd:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812e8c0 +0x1e2:  lea    -0x24(%ebp),%eax
0812e8c3 +0x1e5:  movl   $0x0,0x8(%esp)
0812e8cb +0x1ed:  lea    -0x60(%ebp),%edx
0812e8ce +0x1f0:  mov    %edx,0x4(%esp)
0812e8d2 +0x1f4:  mov    %eax,(%esp)
0812e8d5 +0x1f7:  call   081358bc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x14c3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x14c3
0812e8da +0x1fc:  sub    $0x4,%esp
0812e8dd +0x1ff:  lea    -0x28(%ebp),%eax
0812e8e0 +0x202:  mov    0x10(%ebp),%edx
0812e8e3 +0x205:  mov    %edx,0x4(%esp)
0812e8e7 +0x209:  mov    %eax,(%esp)
0812e8ea +0x20c:  call   08135864 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x146b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x146b
0812e8ef +0x211:  sub    $0x4,%esp
0812e8f2 +0x214:  lea    -0x28(%ebp),%eax
0812e8f5 +0x217:  mov    %eax,0x4(%esp)
0812e8f9 +0x21b:  lea    -0x60(%ebp),%eax
0812e8fc +0x21e:  mov    %eax,(%esp)
0812e8ff +0x221:  call   08135890 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1497>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1497
0812e904 +0x226:  test   %al,%al
0812e906 +0x228:  jne    0812e89e <+0x1c0>
0812e908 +0x22a:  mov    0x14(%ebp),%eax
0812e90b +0x22d:  mov    %eax,(%esp)
0812e90e +0x230:  call   081358fa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1501>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1501
0812e913 +0x235:  mov    %eax,0x4(%esp)
0812e917 +0x239:  lea    -0x58(%ebp),%eax
0812e91a +0x23c:  mov    %eax,(%esp)
0812e91d +0x23f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0812e922 +0x244:  lea    -0x64(%ebp),%eax
0812e925 +0x247:  mov    0x14(%ebp),%edx
0812e928 +0x24a:  mov    %edx,0x4(%esp)
0812e92c +0x24e:  mov    %eax,(%esp)
0812e92f +0x251:  call   0813590e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1515>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1515
0812e934 +0x256:  sub    $0x4,%esp
0812e937 +0x259:  jmp    0812e97b <+0x29d>
0812e939 +0x25b:  lea    -0x64(%ebp),%eax
0812e93c +0x25e:  mov    %eax,(%esp)
0812e93f +0x261:  call   081359ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15b3
0812e944 +0x266:  add    $0x4,%eax
0812e947 +0x269:  movl   $0x5,0x8(%esp)
0812e94f +0x271:  mov    %eax,0x4(%esp)
0812e953 +0x275:  lea    -0x58(%ebp),%eax
0812e956 +0x278:  mov    %eax,(%esp)
0812e959 +0x27b:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812e95e +0x280:  lea    -0x1c(%ebp),%eax
0812e961 +0x283:  movl   $0x0,0x8(%esp)
0812e969 +0x28b:  lea    -0x64(%ebp),%edx
0812e96c +0x28e:  mov    %edx,0x4(%esp)
0812e970 +0x292:  mov    %eax,(%esp)
0812e973 +0x295:  call   0813596e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1575>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1575
0812e978 +0x29a:  sub    $0x4,%esp
0812e97b +0x29d:  lea    -0x20(%ebp),%eax
0812e97e +0x2a0:  mov    0x14(%ebp),%edx
0812e981 +0x2a3:  mov    %edx,0x4(%esp)
0812e985 +0x2a7:  mov    %eax,(%esp)
0812e988 +0x2aa:  call   08135934 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x153b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x153b
0812e98d +0x2af:  sub    $0x4,%esp
0812e990 +0x2b2:  lea    -0x20(%ebp),%eax
0812e993 +0x2b5:  mov    %eax,0x4(%esp)
0812e997 +0x2b9:  lea    -0x64(%ebp),%eax
0812e99a +0x2bc:  mov    %eax,(%esp)
0812e99d +0x2bf:  call   0813595a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1561>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1561
0812e9a2 +0x2c4:  test   %al,%al
0812e9a4 +0x2c6:  jne    0812e939 <+0x25b>
0812e9a6 +0x2c8:  movl   $0x1,0x4(%esp)
0812e9ae +0x2d0:  lea    -0x58(%ebp),%eax
0812e9b1 +0x2d3:  mov    %eax,(%esp)
0812e9b4 +0x2d6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812e9b9 +0x2db:  lea    -0x58(%ebp),%eax
0812e9bc +0x2de:  mov    %eax,0x4(%esp)
0812e9c0 +0x2e2:  mov    -0x18(%ebp),%eax
0812e9c3 +0x2e5:  mov    %eax,(%esp)
0812e9c6 +0x2e8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0812e9cb +0x2ed:  jmp    0812e9e8 <+0x30a>
0812e9cd +0x2ef:  mov    %edx,%ebx
0812e9cf +0x2f1:  mov    %eax,%esi
0812e9d1 +0x2f3:  lea    -0x58(%ebp),%eax
0812e9d4 +0x2f6:  mov    %eax,(%esp)
0812e9d7 +0x2f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812e9dc +0x2fe:  mov    %esi,%eax
0812e9de +0x300:  mov    %ebx,%edx
0812e9e0 +0x302:  mov    %eax,(%esp)
0812e9e3 +0x305:  call   08ae3750 <_Unwind_Resume>
0812e9e8 +0x30a:  lea    -0x58(%ebp),%eax
0812e9eb +0x30d:  mov    %eax,(%esp)
0812e9ee +0x310:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812e9f3 +0x315:  jmp    0812e9f6 <+0x318>
0812e9f5 +0x317:  nop
0812e9f6 +0x318:  lea    -0x8(%ebp),%esp
0812e9f9 +0x31b:  add    $0x0,%esp
0812e9fc +0x31e:  pop    %ebx
0812e9fd +0x31f:  pop    %esi
0812e9fe +0x320:  pop    %ebp
0812e9ff +0x321:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::sendClearStage @ 0x812e6de

/* advancealtar::ProcStage::sendClearStage(std::vector<advancealtar::_RewardItem,
   std::allocator<advancealtar::_RewardItem> > const&, std::vector<advancealtar::_BuyItem,
   std::allocator<advancealtar::_BuyItem> > const&, std::map<int, advancealtar::_Reward,
   std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > > const&, int, bool)
   const */

void __thiscall
advancealtar::ProcStage::sendClearStage
          (ProcStage *this,vector *param_1,vector *param_2,map *param_3,int param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_68 [4];
  __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
  local_64 [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_60 [4];
  PacketGuard local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44;
  undefined4 local_43;
  undefined4 local_3f;
  int local_38;
  __normal_iterator local_34 [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
  local_28 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_20 [4];
  CUser *local_1c;
  short local_16;
  int local_14;
  int local_10;
  
  local_1c = (CUser *)CharacData::getUser(*(CharacData **)this);
  if (local_1c != (CUser *)0x0) {
    local_16 = 0;
    local_14 = CharacAdvanceAltarManager::getCurrentAdvanceAltarData
                         ((CharacAdvanceAltarManager *)(local_1c + 0x8df60));
    if (local_14 != 0) {
      local_16 = *(short *)(local_14 + 0x18);
    }
    NOTIPacketStruct::_NotiAdvanceAltarClearStage::_NotiAdvanceAltarClearStage
              ((_NotiAdvanceAltarClearStage *)&local_50);
    local_50 = getStageType(this);
    local_4c = getClearSurvivalRoundNo(this);
    local_48 = (int)local_16;
    local_44 = param_5;
    local_43 = getStageIndex(this);
    local_3f = *(undefined4 *)(this + 0x68);
    local_38 = param_4;
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 0812e7a3 to 0812e9ca has its CatchHandler @ 0812e9cd */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0x20f);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,(char *)&local_50,0x1c);
    local_10 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
               size((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
                    param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,local_10);
    if (0 < local_10) {
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
      while( true ) {
        std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
        bVar1 = __gnu_cxx::operator!=(local_60,local_34);
        if (!bVar1) break;
        pcVar4 = (char *)__gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_60);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,pcVar4,0xc);
        __gnu_cxx::
        __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
        ::operator++(local_30,(int)local_60);
      }
    }
    iVar3 = std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::size
                      ((vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> *)
                       param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
    std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::begin();
    while( true ) {
      std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::end();
      bVar1 = __gnu_cxx::operator!=(local_64,local_2c);
      if (!bVar1) break;
      pcVar4 = (char *)__gnu_cxx::
                       __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
                       ::operator*(local_64);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,pcVar4,0xc);
      __gnu_cxx::
      __normal_iterator<advancealtar::_BuyItem_const*,std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>>
      ::operator++(local_28,(int)local_64);
    }
    iVar3 = std::
            map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
            ::size((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
                    *)param_3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,iVar3);
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::begin(local_68);
    while( true ) {
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::end(local_24);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                         local_68,(_Rb_tree_const_iterator *)local_24);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                         local_68);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_5c,(char *)(iVar3 + 4),5);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
                (local_20,(int)local_68);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    CUser::Send(local_1c,local_5c);
    PacketGuard::~PacketGuard(local_5c);
  }
  return;
}
```
