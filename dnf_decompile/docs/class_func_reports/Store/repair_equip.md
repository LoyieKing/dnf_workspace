# repair_equip

`_ZN5Store12repair_equipEP5CUsercstRt`

`Store::repair_equip(CUser*, char, short, unsigned short, unsigned short&)`

| 类 | 地址 |
|---|---|
| `Store` | `0x08619cec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08619cec  _ZN5Store12repair_equipEP5CUsercstRt
#           Store::repair_equip(CUser*, char, short, unsigned short, unsigned short&)
# range [0x08619cec, 0x0861b031]
08619cec +0x0000:  push   %ebp
08619ced +0x0001:  mov    %esp,%ebp
08619cef +0x0003:  push   %edi
08619cf0 +0x0004:  push   %esi
08619cf1 +0x0005:  push   %ebx
08619cf2 +0x0006:  sub    $0x1bc,%esp
08619cf8 +0x000c:  mov    0x10(%ebp),%ecx
08619cfb +0x000f:  mov    0x14(%ebp),%edx
08619cfe +0x0012:  mov    0x18(%ebp),%eax
08619d01 +0x0015:  mov    %cl,-0x11c(%ebp)
08619d07 +0x001b:  mov    %dx,-0x120(%ebp)
08619d0e +0x0022:  mov    %ax,-0x124(%ebp)
08619d15 +0x0029:  mov    0xc(%ebp),%eax
08619d18 +0x002c:  mov    %eax,(%esp)
08619d1b +0x002f:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08619d20 +0x0034:  test   %al,%al
08619d22 +0x0036:  je     08619d2e <+0x42>
08619d24 +0x0038:  mov    $0x13,%ebx
08619d29 +0x003d:  jmp    0861b025 <+0x1339>
08619d2e +0x0042:  lea    -0xd5(%ebp),%eax
08619d34 +0x0048:  mov    %eax,(%esp)
08619d37 +0x004b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08619d3c +0x0050:  movl   $0x0,-0x58(%ebp)
08619d43 +0x0057:  cmpw   $0xffff,-0x120(%ebp)
08619d4b +0x005f:  je     0861a6d8 <+0x9ec>
08619d51 +0x0065:  movsbl -0x11c(%ebp),%eax
08619d58 +0x006c:  cmp    $0x2,%eax
08619d5b +0x006f:  je     08619e6b <+0x17f>
08619d61 +0x0075:  cmp    $0x3,%eax
08619d64 +0x0078:  je     08619f5c <+0x270>
08619d6a +0x007e:  test   %eax,%eax
08619d6c +0x0080:  jne    0861a052 <+0x366>
08619d72 +0x0086:  movswl -0x120(%ebp),%ebx
08619d79 +0x008d:  mov    0xc(%ebp),%eax
08619d7c +0x0090:  mov    %eax,(%esp)
08619d7f +0x0093:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08619d84 +0x0098:  lea    -0x168(%ebp),%edx
08619d8a +0x009e:  mov    %ebx,0xc(%esp)
08619d8e +0x00a2:  movl   $0x1,0x8(%esp)
08619d96 +0x00aa:  mov    %eax,0x4(%esp)
08619d9a +0x00ae:  mov    %edx,(%esp)
08619d9d +0x00b1:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08619da2 +0x00b6:  sub    $0x4,%esp
08619da5 +0x00b9:  mov    -0x168(%ebp),%eax
08619dab +0x00bf:  mov    %eax,-0xd5(%ebp)
08619db1 +0x00c5:  mov    -0x164(%ebp),%eax
08619db7 +0x00cb:  mov    %eax,-0xd1(%ebp)
08619dbd +0x00d1:  mov    -0x160(%ebp),%eax
08619dc3 +0x00d7:  mov    %eax,-0xcd(%ebp)
08619dc9 +0x00dd:  mov    -0x15c(%ebp),%eax
08619dcf +0x00e3:  mov    %eax,-0xc9(%ebp)
08619dd5 +0x00e9:  mov    -0x158(%ebp),%eax
08619ddb +0x00ef:  mov    %eax,-0xc5(%ebp)
08619de1 +0x00f5:  mov    -0x154(%ebp),%eax
08619de7 +0x00fb:  mov    %eax,-0xc1(%ebp)
08619ded +0x0101:  mov    -0x150(%ebp),%eax
08619df3 +0x0107:  mov    %eax,-0xbd(%ebp)
08619df9 +0x010d:  mov    -0x14c(%ebp),%eax
08619dff +0x0113:  mov    %eax,-0xb9(%ebp)
08619e05 +0x0119:  mov    -0x148(%ebp),%eax
08619e0b +0x011f:  mov    %eax,-0xb5(%ebp)
08619e11 +0x0125:  mov    -0x144(%ebp),%eax
08619e17 +0x012b:  mov    %eax,-0xb1(%ebp)
08619e1d +0x0131:  mov    -0x140(%ebp),%eax
08619e23 +0x0137:  mov    %eax,-0xad(%ebp)
08619e29 +0x013d:  mov    -0x13c(%ebp),%eax
08619e2f +0x0143:  mov    %eax,-0xa9(%ebp)
08619e35 +0x0149:  mov    -0x138(%ebp),%eax
08619e3b +0x014f:  mov    %eax,-0xa5(%ebp)
08619e41 +0x0155:  mov    -0x134(%ebp),%eax
08619e47 +0x015b:  mov    %eax,-0xa1(%ebp)
08619e4d +0x0161:  mov    -0x130(%ebp),%eax
08619e53 +0x0167:  mov    %eax,-0x9d(%ebp)
08619e59 +0x016d:  movzbl -0x12c(%ebp),%eax
08619e60 +0x0174:  mov    %al,-0x99(%ebp)
08619e66 +0x017a:  jmp    0861a05c <+0x370>
08619e6b +0x017f:  movswl -0x120(%ebp),%ebx
08619e72 +0x0186:  mov    0xc(%ebp),%eax
08619e75 +0x0189:  mov    %eax,(%esp)
08619e78 +0x018c:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08619e7d +0x0191:  lea    -0x168(%ebp),%edx
08619e83 +0x0197:  mov    %ebx,0x8(%esp)
08619e87 +0x019b:  mov    %eax,0x4(%esp)
08619e8b +0x019f:  mov    %edx,(%esp)
08619e8e +0x01a2:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
08619e93 +0x01a7:  sub    $0x4,%esp
08619e96 +0x01aa:  mov    -0x168(%ebp),%eax
08619e9c +0x01b0:  mov    %eax,-0xd5(%ebp)
08619ea2 +0x01b6:  mov    -0x164(%ebp),%eax
08619ea8 +0x01bc:  mov    %eax,-0xd1(%ebp)
08619eae +0x01c2:  mov    -0x160(%ebp),%eax
08619eb4 +0x01c8:  mov    %eax,-0xcd(%ebp)
08619eba +0x01ce:  mov    -0x15c(%ebp),%eax
08619ec0 +0x01d4:  mov    %eax,-0xc9(%ebp)
08619ec6 +0x01da:  mov    -0x158(%ebp),%eax
08619ecc +0x01e0:  mov    %eax,-0xc5(%ebp)
08619ed2 +0x01e6:  mov    -0x154(%ebp),%eax
08619ed8 +0x01ec:  mov    %eax,-0xc1(%ebp)
08619ede +0x01f2:  mov    -0x150(%ebp),%eax
08619ee4 +0x01f8:  mov    %eax,-0xbd(%ebp)
08619eea +0x01fe:  mov    -0x14c(%ebp),%eax
08619ef0 +0x0204:  mov    %eax,-0xb9(%ebp)
08619ef6 +0x020a:  mov    -0x148(%ebp),%eax
08619efc +0x0210:  mov    %eax,-0xb5(%ebp)
08619f02 +0x0216:  mov    -0x144(%ebp),%eax
08619f08 +0x021c:  mov    %eax,-0xb1(%ebp)
08619f0e +0x0222:  mov    -0x140(%ebp),%eax
08619f14 +0x0228:  mov    %eax,-0xad(%ebp)
08619f1a +0x022e:  mov    -0x13c(%ebp),%eax
08619f20 +0x0234:  mov    %eax,-0xa9(%ebp)
08619f26 +0x023a:  mov    -0x138(%ebp),%eax
08619f2c +0x0240:  mov    %eax,-0xa5(%ebp)
08619f32 +0x0246:  mov    -0x134(%ebp),%eax
08619f38 +0x024c:  mov    %eax,-0xa1(%ebp)
08619f3e +0x0252:  mov    -0x130(%ebp),%eax
08619f44 +0x0258:  mov    %eax,-0x9d(%ebp)
08619f4a +0x025e:  movzbl -0x12c(%ebp),%eax
08619f51 +0x0265:  mov    %al,-0x99(%ebp)
08619f57 +0x026b:  jmp    0861a05c <+0x370>
08619f5c +0x0270:  movswl -0x120(%ebp),%ebx
08619f63 +0x0277:  mov    0xc(%ebp),%eax
08619f66 +0x027a:  mov    %eax,(%esp)
08619f69 +0x027d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08619f6e +0x0282:  lea    -0x168(%ebp),%edx
08619f74 +0x0288:  mov    %ebx,0xc(%esp)
08619f78 +0x028c:  movl   $0x0,0x8(%esp)
08619f80 +0x0294:  mov    %eax,0x4(%esp)
08619f84 +0x0298:  mov    %edx,(%esp)
08619f87 +0x029b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08619f8c +0x02a0:  sub    $0x4,%esp
08619f8f +0x02a3:  mov    -0x168(%ebp),%eax
08619f95 +0x02a9:  mov    %eax,-0xd5(%ebp)
08619f9b +0x02af:  mov    -0x164(%ebp),%eax
08619fa1 +0x02b5:  mov    %eax,-0xd1(%ebp)
08619fa7 +0x02bb:  mov    -0x160(%ebp),%eax
08619fad +0x02c1:  mov    %eax,-0xcd(%ebp)
08619fb3 +0x02c7:  mov    -0x15c(%ebp),%eax
08619fb9 +0x02cd:  mov    %eax,-0xc9(%ebp)
08619fbf +0x02d3:  mov    -0x158(%ebp),%eax
08619fc5 +0x02d9:  mov    %eax,-0xc5(%ebp)
08619fcb +0x02df:  mov    -0x154(%ebp),%eax
08619fd1 +0x02e5:  mov    %eax,-0xc1(%ebp)
08619fd7 +0x02eb:  mov    -0x150(%ebp),%eax
08619fdd +0x02f1:  mov    %eax,-0xbd(%ebp)
08619fe3 +0x02f7:  mov    -0x14c(%ebp),%eax
08619fe9 +0x02fd:  mov    %eax,-0xb9(%ebp)
08619fef +0x0303:  mov    -0x148(%ebp),%eax
08619ff5 +0x0309:  mov    %eax,-0xb5(%ebp)
08619ffb +0x030f:  mov    -0x144(%ebp),%eax
0861a001 +0x0315:  mov    %eax,-0xb1(%ebp)
0861a007 +0x031b:  mov    -0x140(%ebp),%eax
0861a00d +0x0321:  mov    %eax,-0xad(%ebp)
0861a013 +0x0327:  mov    -0x13c(%ebp),%eax
0861a019 +0x032d:  mov    %eax,-0xa9(%ebp)
0861a01f +0x0333:  mov    -0x138(%ebp),%eax
0861a025 +0x0339:  mov    %eax,-0xa5(%ebp)
0861a02b +0x033f:  mov    -0x134(%ebp),%eax
0861a031 +0x0345:  mov    %eax,-0xa1(%ebp)
0861a037 +0x034b:  mov    -0x130(%ebp),%eax
0861a03d +0x0351:  mov    %eax,-0x9d(%ebp)
0861a043 +0x0357:  movzbl -0x12c(%ebp),%eax
0861a04a +0x035e:  mov    %al,-0x99(%ebp)
0861a050 +0x0364:  jmp    0861a05c <+0x370>
0861a052 +0x0366:  mov    $0x11,%ebx
0861a057 +0x036b:  jmp    0861b025 <+0x1339>
0861a05c +0x0370:  mov    -0xd3(%ebp),%eax
0861a062 +0x0376:  test   %eax,%eax
0861a064 +0x0378:  je     0861a071 <+0x385>
0861a066 +0x037a:  movzbl -0xd4(%ebp),%eax
0861a06d +0x0381:  cmp    $0x1,%al
0861a06f +0x0383:  je     0861a07b <+0x38f>
0861a071 +0x0385:  mov    $0x11,%ebx
0861a076 +0x038a:  jmp    0861b025 <+0x1339>
0861a07b +0x038f:  movzwl -0xca(%ebp),%edx
0861a082 +0x0396:  mov    0x1c(%ebp),%eax
0861a085 +0x0399:  mov    %dx,(%eax)
0861a088 +0x039c:  mov    -0xd3(%ebp),%eax
0861a08e +0x03a2:  mov    %eax,%ebx
0861a090 +0x03a4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0861a095 +0x03a9:  mov    %ebx,0x4(%esp)
0861a099 +0x03ad:  mov    %eax,(%esp)
0861a09c +0x03b0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0861a0a1 +0x03b5:  mov    %eax,-0x54(%ebp)
0861a0a4 +0x03b8:  cmpl   $0x0,-0x54(%ebp)
0861a0a8 +0x03bc:  jne    0861a0b4 <+0x3c8>
0861a0aa +0x03be:  mov    $0x11,%ebx
0861a0af +0x03c3:  jmp    0861b025 <+0x1339>
0861a0b4 +0x03c8:  mov    -0x54(%ebp),%eax
0861a0b7 +0x03cb:  mov    %eax,-0x50(%ebp)
0861a0ba +0x03ce:  mov    -0x50(%ebp),%eax
0861a0bd +0x03d1:  mov    %eax,(%esp)
0861a0c0 +0x03d4:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861a0c5 +0x03d9:  test   %eax,%eax
0861a0c7 +0x03db:  sete   %al
0861a0ca +0x03de:  test   %al,%al
0861a0cc +0x03e0:  je     0861a0d8 <+0x3ec>
0861a0ce +0x03e2:  mov    $0x11,%ebx
0861a0d3 +0x03e7:  jmp    0861b025 <+0x1339>
0861a0d8 +0x03ec:  lea    -0x112(%ebp),%eax
0861a0de +0x03f2:  mov    %eax,(%esp)
0861a0e1 +0x03f5:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0861a0e6 +0x03fa:  cmpw   $0xffff,-0x124(%ebp)
0861a0ee +0x0402:  je     0861a22b <+0x53f>
0861a0f4 +0x0408:  movzwl -0x124(%ebp),%ebx
0861a0fb +0x040f:  mov    0xc(%ebp),%eax
0861a0fe +0x0412:  mov    %eax,(%esp)
0861a101 +0x0415:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0861a106 +0x041a:  lea    -0x168(%ebp),%edx
0861a10c +0x0420:  mov    %ebx,0xc(%esp)
0861a110 +0x0424:  movl   $0x1,0x8(%esp)
0861a118 +0x042c:  mov    %eax,0x4(%esp)
0861a11c +0x0430:  mov    %edx,(%esp)
0861a11f +0x0433:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0861a124 +0x0438:  sub    $0x4,%esp
0861a127 +0x043b:  mov    -0x168(%ebp),%eax
0861a12d +0x0441:  mov    %eax,-0x112(%ebp)
0861a133 +0x0447:  mov    -0x164(%ebp),%eax
0861a139 +0x044d:  mov    %eax,-0x10e(%ebp)
0861a13f +0x0453:  mov    -0x160(%ebp),%eax
0861a145 +0x0459:  mov    %eax,-0x10a(%ebp)
0861a14b +0x045f:  mov    -0x15c(%ebp),%eax
0861a151 +0x0465:  mov    %eax,-0x106(%ebp)
0861a157 +0x046b:  mov    -0x158(%ebp),%eax
0861a15d +0x0471:  mov    %eax,-0x102(%ebp)
0861a163 +0x0477:  mov    -0x154(%ebp),%eax
0861a169 +0x047d:  mov    %eax,-0xfe(%ebp)
0861a16f +0x0483:  mov    -0x150(%ebp),%eax
0861a175 +0x0489:  mov    %eax,-0xfa(%ebp)
0861a17b +0x048f:  mov    -0x14c(%ebp),%eax
0861a181 +0x0495:  mov    %eax,-0xf6(%ebp)
0861a187 +0x049b:  mov    -0x148(%ebp),%eax
0861a18d +0x04a1:  mov    %eax,-0xf2(%ebp)
0861a193 +0x04a7:  mov    -0x144(%ebp),%eax
0861a199 +0x04ad:  mov    %eax,-0xee(%ebp)
0861a19f +0x04b3:  mov    -0x140(%ebp),%eax
0861a1a5 +0x04b9:  mov    %eax,-0xea(%ebp)
0861a1ab +0x04bf:  mov    -0x13c(%ebp),%eax
0861a1b1 +0x04c5:  mov    %eax,-0xe6(%ebp)
0861a1b7 +0x04cb:  mov    -0x138(%ebp),%eax
0861a1bd +0x04d1:  mov    %eax,-0xe2(%ebp)
0861a1c3 +0x04d7:  mov    -0x134(%ebp),%eax
0861a1c9 +0x04dd:  mov    %eax,-0xde(%ebp)
0861a1cf +0x04e3:  mov    -0x130(%ebp),%eax
0861a1d5 +0x04e9:  mov    %eax,-0xda(%ebp)
0861a1db +0x04ef:  movzbl -0x12c(%ebp),%eax
0861a1e2 +0x04f6:  mov    %al,-0xd6(%ebp)
0861a1e8 +0x04fc:  mov    -0x110(%ebp),%eax
0861a1ee +0x0502:  test   %eax,%eax
0861a1f0 +0x0504:  je     0861a1fd <+0x511>
0861a1f2 +0x0506:  movzbl -0x111(%ebp),%eax
0861a1f9 +0x050d:  cmp    $0x2,%al
0861a1fb +0x050f:  je     0861a207 <+0x51b>
0861a1fd +0x0511:  mov    $0x15,%ebx
0861a202 +0x0516:  jmp    0861b025 <+0x1339>
0861a207 +0x051b:  mov    -0x110(%ebp),%eax
0861a20d +0x0521:  cmp    $0x1f77,%eax
0861a212 +0x0526:  je     0861a22b <+0x53f>
0861a214 +0x0528:  mov    -0x110(%ebp),%eax
0861a21a +0x052e:  cmp    $0x201f,%eax
0861a21f +0x0533:  je     0861a22b <+0x53f>
0861a221 +0x0535:  mov    $0x15,%ebx
0861a226 +0x053a:  jmp    0861b025 <+0x1339>
0861a22b +0x053f:  mov    0xc(%ebp),%eax
0861a22e +0x0542:  mov    %eax,(%esp)
0861a231 +0x0545:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861a236 +0x054a:  mov    %eax,0x4(%esp)
0861a23a +0x054e:  mov    -0x50(%ebp),%eax
0861a23d +0x0551:  mov    %eax,(%esp)
0861a240 +0x0554:  call   085137b8 <_ZNK10CEquipItem14getGrowthGradeEi>  ; CEquipItem::getGrowthGrade(int) const
0861a245 +0x0559:  mov    %eax,-0x4c(%ebp)
0861a248 +0x055c:  mov    0xc(%ebp),%eax
0861a24b +0x055f:  mov    %eax,(%esp)
0861a24e +0x0562:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861a253 +0x0567:  mov    %eax,0x4(%esp)
0861a257 +0x056b:  mov    -0x50(%ebp),%eax
0861a25a +0x056e:  mov    %eax,(%esp)
0861a25d +0x0571:  call   0851381c <_ZNK10CEquipItem19getGrowthRepairCostEi>  ; CEquipItem::getGrowthRepairCost(int) const
0861a262 +0x0576:  mov    %eax,-0x48(%ebp)
0861a265 +0x0579:  lea    -0xd5(%ebp),%eax
0861a26b +0x057f:  add    $0x11,%eax
0861a26e +0x0582:  mov    %eax,(%esp)
0861a271 +0x0585:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0861a276 +0x058a:  movzbl %al,%esi
0861a279 +0x058d:  lea    -0xd5(%ebp),%eax
0861a27f +0x0593:  mov    %eax,(%esp)
0861a282 +0x0596:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0861a287 +0x059b:  movzbl %al,%ebx
0861a28a +0x059e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0861a28f +0x05a3:  mov    %esi,0x8(%esp)
0861a293 +0x05a7:  mov    %ebx,0x4(%esp)
0861a297 +0x05ab:  mov    %eax,(%esp)
0861a29a +0x05ae:  call   083635d4 <_ZN12CDataManager28getUpgradeItemRepairCostRateEib>  ; CDataManager::getUpgradeItemRepairCostRate(int, bool)
0861a29f +0x05b3:  fstps  -0x178(%ebp)
0861a2a5 +0x05b9:  mov    -0x50(%ebp),%eax
0861a2a8 +0x05bc:  mov    %eax,(%esp)
0861a2ab +0x05bf:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861a2b0 +0x05c4:  movzwl -0xca(%ebp),%edx
0861a2b7 +0x05cb:  movzwl %dx,%edx
0861a2ba +0x05ce:  flds   -0x178(%ebp)
0861a2c0 +0x05d4:  fstps  0x14(%esp)
0861a2c4 +0x05d8:  movl   $0x0,0x10(%esp)
0861a2cc +0x05e0:  mov    -0x4c(%ebp),%ecx
0861a2cf +0x05e3:  mov    %ecx,0xc(%esp)
0861a2d3 +0x05e7:  mov    %eax,0x8(%esp)
0861a2d7 +0x05eb:  mov    %edx,0x4(%esp)
0861a2db +0x05ef:  mov    -0x48(%ebp),%eax
0861a2de +0x05f2:  mov    %eax,(%esp)
0861a2e1 +0x05f5:  call   0898c8fc <_Z23getEquipmentRepairPriceiiiibf>  ; getEquipmentRepairPrice(int, int, int, int, bool, float)
0861a2e6 +0x05fa:  mov    %eax,-0x58(%ebp)
0861a2e9 +0x05fd:  cmpw   $0xffff,-0x124(%ebp)
0861a2f1 +0x0605:  je     0861a37f <+0x693>
0861a2f7 +0x060b:  mov    -0x110(%ebp),%eax
0861a2fd +0x0611:  cmp    $0x1f77,%eax
0861a302 +0x0616:  je     0861a311 <+0x625>
0861a304 +0x0618:  mov    -0x110(%ebp),%eax
0861a30a +0x061e:  cmp    $0x201f,%eax
0861a30f +0x0623:  jne    0861a37f <+0x693>
0861a311 +0x0625:  movzwl -0x124(%ebp),%ebx
0861a318 +0x062c:  mov    0xc(%ebp),%eax
0861a31b +0x062f:  mov    %eax,(%esp)
0861a31e +0x0632:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0861a323 +0x0637:  movl   $0x0,0xc(%esp)
0861a32b +0x063f:  movl   $0x1,0x8(%esp)
0861a333 +0x0647:  mov    %ebx,0x4(%esp)
0861a337 +0x064b:  mov    %eax,(%esp)
0861a33a +0x064e:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
0861a33f +0x0653:  test   %eax,%eax
0861a341 +0x0655:  setne  %al
0861a344 +0x0658:  test   %al,%al
0861a346 +0x065a:  je     0861a352 <+0x666>
0861a348 +0x065c:  mov    $0x16,%ebx
0861a34d +0x0661:  jmp    0861b025 <+0x1339>
0861a352 +0x0666:  movzwl -0x124(%ebp),%eax
0861a359 +0x066d:  mov    %eax,0xc(%esp)
0861a35d +0x0671:  movl   $0x0,0x8(%esp)
0861a365 +0x0679:  movl   $0x1,0x4(%esp)
0861a36d +0x0681:  mov    0xc(%ebp),%eax
0861a370 +0x0684:  mov    %eax,(%esp)
0861a373 +0x0687:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0861a378 +0x068c:  movl   $0x0,-0x58(%ebp)
0861a37f +0x0693:  mov    0xc(%ebp),%eax
0861a382 +0x0696:  mov    %eax,(%esp)
0861a385 +0x0699:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0861a38a +0x069e:  movl   $0x1,0xc(%esp)
0861a392 +0x06a6:  movl   $0x1,0x8(%esp)
0861a39a +0x06ae:  mov    -0x58(%ebp),%edx
0861a39d +0x06b1:  mov    %edx,0x4(%esp)
0861a3a1 +0x06b5:  mov    %eax,(%esp)
0861a3a4 +0x06b8:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0861a3a9 +0x06bd:  xor    $0x1,%eax
0861a3ac +0x06c0:  test   %al,%al
0861a3ae +0x06c2:  je     0861a3ba <+0x6ce>
0861a3b0 +0x06c4:  mov    $0xa,%ebx
0861a3b5 +0x06c9:  jmp    0861b025 <+0x1339>
0861a3ba +0x06ce:  mov    -0x58(%ebp),%ebx
0861a3bd +0x06d1:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0861a3c2 +0x06d6:  mov    %ebx,0xc(%esp)
0861a3c6 +0x06da:  mov    0xc(%ebp),%edx
0861a3c9 +0x06dd:  mov    %edx,0x8(%esp)
0861a3cd +0x06e1:  movl   $0x14,0x4(%esp)
0861a3d5 +0x06e9:  mov    %eax,(%esp)
0861a3d8 +0x06ec:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
0861a3dd +0x06f1:  mov    0xc(%ebp),%eax
0861a3e0 +0x06f4:  mov    %eax,(%esp)
0861a3e3 +0x06f7:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0861a3e8 +0x06fc:  cmp    $0xa,%eax
0861a3eb +0x06ff:  sete   %al
0861a3ee +0x0702:  test   %al,%al
0861a3f0 +0x0704:  je     0861a46d <+0x781>
0861a3f2 +0x0706:  mov    0xc(%ebp),%eax
0861a3f5 +0x0709:  mov    %eax,(%esp)
0861a3f8 +0x070c:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
0861a3fd +0x0711:  mov    %eax,-0x40(%ebp)
0861a400 +0x0714:  cmpl   $0x0,-0x40(%ebp)
0861a404 +0x0718:  je     0861a46d <+0x781>
0861a406 +0x071a:  mov    -0x40(%ebp),%eax
0861a409 +0x071d:  mov    %eax,(%esp)
0861a40c +0x0720:  call   08234612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cbc
0861a411 +0x0725:  mov    %eax,(%esp)
0861a414 +0x0728:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0861a419 +0x072d:  mov    %eax,(%esp)
0861a41c +0x0730:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0861a421 +0x0735:  cmp    $0x2af8,%eax
0861a426 +0x073a:  sete   %al
0861a429 +0x073d:  test   %al,%al
0861a42b +0x073f:  je     0861a433 <+0x747>
0861a42d +0x0741:  movb   $0x0,-0x41(%ebp)
0861a431 +0x0745:  jmp    0861a437 <+0x74b>
0861a433 +0x0747:  movb   $0x1,-0x41(%ebp)
0861a437 +0x074b:  mov    -0x58(%ebp),%edi
0861a43a +0x074e:  mov    0xc(%ebp),%eax
0861a43d +0x0751:  mov    %eax,(%esp)
0861a440 +0x0754:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861a445 +0x0759:  movsbl %al,%esi
0861a448 +0x075c:  movsbl -0x41(%ebp),%ebx
0861a44c +0x0760:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
0861a451 +0x0765:  mov    %edi,0x10(%esp)
0861a455 +0x0769:  mov    %esi,0xc(%esp)
0861a459 +0x076d:  mov    %ebx,0x8(%esp)
0861a45d +0x0771:  movl   $0x9,0x4(%esp)
0861a465 +0x0779:  mov    %eax,(%esp)
0861a468 +0x077c:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
0861a46d +0x0781:  mov    -0x50(%ebp),%eax
0861a470 +0x0784:  mov    %eax,(%esp)
0861a473 +0x0787:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861a478 +0x078c:  mov    %ax,-0xca(%ebp)
0861a47f +0x0793:  movsbl -0x11c(%ebp),%eax
0861a486 +0x079a:  cmp    $0x2,%eax
0861a489 +0x079d:  je     0861a592 <+0x8a6>
0861a48f +0x07a3:  cmp    $0x3,%eax
0861a492 +0x07a6:  je     0861a5e6 <+0x8fa>
0861a498 +0x07ac:  test   %eax,%eax
0861a49a +0x07ae:  jne    0861b01f <+0x1333>
0861a4a0 +0x07b4:  movswl -0x120(%ebp),%ebx
0861a4a7 +0x07bb:  mov    0xc(%ebp),%eax
0861a4aa +0x07be:  mov    %eax,(%esp)
0861a4ad +0x07c1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0861a4b2 +0x07c6:  mov    -0xd5(%ebp),%edx
0861a4b8 +0x07cc:  mov    %edx,0xc(%esp)
0861a4bc +0x07d0:  mov    -0xd1(%ebp),%edx
0861a4c2 +0x07d6:  mov    %edx,0x10(%esp)
0861a4c6 +0x07da:  mov    -0xcd(%ebp),%edx
0861a4cc +0x07e0:  mov    %edx,0x14(%esp)
0861a4d0 +0x07e4:  mov    -0xc9(%ebp),%edx
0861a4d6 +0x07ea:  mov    %edx,0x18(%esp)
0861a4da +0x07ee:  mov    -0xc5(%ebp),%edx
0861a4e0 +0x07f4:  mov    %edx,0x1c(%esp)
0861a4e4 +0x07f8:  mov    -0xc1(%ebp),%edx
0861a4ea +0x07fe:  mov    %edx,0x20(%esp)
0861a4ee +0x0802:  mov    -0xbd(%ebp),%edx
0861a4f4 +0x0808:  mov    %edx,0x24(%esp)
0861a4f8 +0x080c:  mov    -0xb9(%ebp),%edx
0861a4fe +0x0812:  mov    %edx,0x28(%esp)
0861a502 +0x0816:  mov    -0xb5(%ebp),%edx
0861a508 +0x081c:  mov    %edx,0x2c(%esp)
0861a50c +0x0820:  mov    -0xb1(%ebp),%edx
0861a512 +0x0826:  mov    %edx,0x30(%esp)
0861a516 +0x082a:  mov    -0xad(%ebp),%edx
0861a51c +0x0830:  mov    %edx,0x34(%esp)
0861a520 +0x0834:  mov    -0xa9(%ebp),%edx
0861a526 +0x083a:  mov    %edx,0x38(%esp)
0861a52a +0x083e:  mov    -0xa5(%ebp),%edx
0861a530 +0x0844:  mov    %edx,0x3c(%esp)
0861a534 +0x0848:  mov    -0xa1(%ebp),%edx
0861a53a +0x084e:  mov    %edx,0x40(%esp)
0861a53e +0x0852:  mov    -0x9d(%ebp),%edx
0861a544 +0x0858:  mov    %edx,0x44(%esp)
0861a548 +0x085c:  movzbl -0x99(%ebp),%edx
0861a54f +0x0863:  mov    %dl,0x48(%esp)
0861a553 +0x0867:  mov    %ebx,0x8(%esp)
0861a557 +0x086b:  movl   $0x1,0x4(%esp)
0861a55f +0x0873:  mov    %eax,(%esp)
0861a562 +0x0876:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0861a567 +0x087b:  movswl -0x120(%ebp),%eax
0861a56e +0x0882:  mov    %eax,0xc(%esp)
0861a572 +0x0886:  movl   $0x0,0x8(%esp)
0861a57a +0x088e:  movl   $0x1,0x4(%esp)
0861a582 +0x0896:  mov    0xc(%ebp),%eax
0861a585 +0x0899:  mov    %eax,(%esp)
0861a588 +0x089c:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0861a58d +0x08a1:  jmp    0861b020 <+0x1334>
0861a592 +0x08a6:  movswl -0x120(%ebp),%ebx
0861a599 +0x08ad:  mov    0xc(%ebp),%eax
0861a59c +0x08b0:  mov    %eax,(%esp)
0861a59f +0x08b3:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0861a5a4 +0x08b8:  lea    -0xd5(%ebp),%edx
0861a5aa +0x08be:  mov    %edx,0x8(%esp)
0861a5ae +0x08c2:  mov    %ebx,0x4(%esp)
0861a5b2 +0x08c6:  mov    %eax,(%esp)
0861a5b5 +0x08c9:  call   0850bb00 <_ZN6CCargo11update_itemEiRK10Inven_Item>  ; CCargo::update_item(int, Inven_Item const&)
0861a5ba +0x08ce:  movswl -0x120(%ebp),%eax
0861a5c1 +0x08d5:  mov    %eax,0xc(%esp)
0861a5c5 +0x08d9:  movl   $0x2,0x8(%esp)
0861a5cd +0x08e1:  movl   $0x1,0x4(%esp)
0861a5d5 +0x08e9:  mov    0xc(%ebp),%eax
0861a5d8 +0x08ec:  mov    %eax,(%esp)
0861a5db +0x08ef:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0861a5e0 +0x08f4:  nop
0861a5e1 +0x08f5:  jmp    0861b020 <+0x1334>
0861a5e6 +0x08fa:  movswl -0x120(%ebp),%ebx
0861a5ed +0x0901:  mov    0xc(%ebp),%eax
0861a5f0 +0x0904:  mov    %eax,(%esp)
0861a5f3 +0x0907:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0861a5f8 +0x090c:  mov    -0xd5(%ebp),%edx
0861a5fe +0x0912:  mov    %edx,0xc(%esp)
0861a602 +0x0916:  mov    -0xd1(%ebp),%edx
0861a608 +0x091c:  mov    %edx,0x10(%esp)
0861a60c +0x0920:  mov    -0xcd(%ebp),%edx
0861a612 +0x0926:  mov    %edx,0x14(%esp)
0861a616 +0x092a:  mov    -0xc9(%ebp),%edx
0861a61c +0x0930:  mov    %edx,0x18(%esp)
0861a620 +0x0934:  mov    -0xc5(%ebp),%edx
0861a626 +0x093a:  mov    %edx,0x1c(%esp)
0861a62a +0x093e:  mov    -0xc1(%ebp),%edx
0861a630 +0x0944:  mov    %edx,0x20(%esp)
0861a634 +0x0948:  mov    -0xbd(%ebp),%edx
0861a63a +0x094e:  mov    %edx,0x24(%esp)
0861a63e +0x0952:  mov    -0xb9(%ebp),%edx
0861a644 +0x0958:  mov    %edx,0x28(%esp)
0861a648 +0x095c:  mov    -0xb5(%ebp),%edx
0861a64e +0x0962:  mov    %edx,0x2c(%esp)
0861a652 +0x0966:  mov    -0xb1(%ebp),%edx
0861a658 +0x096c:  mov    %edx,0x30(%esp)
0861a65c +0x0970:  mov    -0xad(%ebp),%edx
0861a662 +0x0976:  mov    %edx,0x34(%esp)
0861a666 +0x097a:  mov    -0xa9(%ebp),%edx
0861a66c +0x0980:  mov    %edx,0x38(%esp)
0861a670 +0x0984:  mov    -0xa5(%ebp),%edx
0861a676 +0x098a:  mov    %edx,0x3c(%esp)
0861a67a +0x098e:  mov    -0xa1(%ebp),%edx
0861a680 +0x0994:  mov    %edx,0x40(%esp)
0861a684 +0x0998:  mov    -0x9d(%ebp),%edx
0861a68a +0x099e:  mov    %edx,0x44(%esp)
0861a68e +0x09a2:  movzbl -0x99(%ebp),%edx
0861a695 +0x09a9:  mov    %dl,0x48(%esp)
0861a699 +0x09ad:  mov    %ebx,0x8(%esp)
0861a69d +0x09b1:  movl   $0x0,0x4(%esp)
0861a6a5 +0x09b9:  mov    %eax,(%esp)
0861a6a8 +0x09bc:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0861a6ad +0x09c1:  movswl -0x120(%ebp),%eax
0861a6b4 +0x09c8:  mov    %eax,0xc(%esp)
0861a6b8 +0x09cc:  movl   $0x3,0x8(%esp)
0861a6c0 +0x09d4:  movl   $0x1,0x4(%esp)
0861a6c8 +0x09dc:  mov    0xc(%ebp),%eax
0861a6cb +0x09df:  mov    %eax,(%esp)
0861a6ce +0x09e2:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0861a6d3 +0x09e7:  jmp    0861b020 <+0x1334>
0861a6d8 +0x09ec:  lea    -0x84(%ebp),%eax
0861a6de +0x09f2:  mov    %eax,(%esp)
0861a6e1 +0x09f5:  call   0861b0ae <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x3c>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x3c
0861a6e6 +0x09fa:  movl   $0x3,-0x3c(%ebp)
0861a6ed +0x0a01:  jmp    0861a964 <+0xc78>
0861a6f2 +0x0a06:  mov    0xc(%ebp),%eax
0861a6f5 +0x0a09:  mov    %eax,(%esp)
0861a6f8 +0x0a0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0861a6fd +0x0a11:  lea    -0x168(%ebp),%edx
0861a703 +0x0a17:  mov    -0x3c(%ebp),%ecx
0861a706 +0x0a1a:  mov    %ecx,0xc(%esp)
0861a70a +0x0a1e:  movl   $0x1,0x8(%esp)
0861a712 +0x0a26:  mov    %eax,0x4(%esp)
0861a716 +0x0a2a:  mov    %edx,(%esp)
0861a719 +0x0a2d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0861a71e +0x0a32:  sub    $0x4,%esp
0861a721 +0x0a35:  mov    -0x168(%ebp),%eax
0861a727 +0x0a3b:  mov    %eax,-0xd5(%ebp)
0861a72d +0x0a41:  mov    -0x164(%ebp),%eax
0861a733 +0x0a47:  mov    %eax,-0xd1(%ebp)
0861a739 +0x0a4d:  mov    -0x160(%ebp),%eax
0861a73f +0x0a53:  mov    %eax,-0xcd(%ebp)
0861a745 +0x0a59:  mov    -0x15c(%ebp),%eax
0861a74b +0x0a5f:  mov    %eax,-0xc9(%ebp)
0861a751 +0x0a65:  mov    -0x158(%ebp),%eax
0861a757 +0x0a6b:  mov    %eax,-0xc5(%ebp)
0861a75d +0x0a71:  mov    -0x154(%ebp),%eax
0861a763 +0x0a77:  mov    %eax,-0xc1(%ebp)
0861a769 +0x0a7d:  mov    -0x150(%ebp),%eax
0861a76f +0x0a83:  mov    %eax,-0xbd(%ebp)
0861a775 +0x0a89:  mov    -0x14c(%ebp),%eax
0861a77b +0x0a8f:  mov    %eax,-0xb9(%ebp)
0861a781 +0x0a95:  mov    -0x148(%ebp),%eax
0861a787 +0x0a9b:  mov    %eax,-0xb5(%ebp)
0861a78d +0x0aa1:  mov    -0x144(%ebp),%eax
0861a793 +0x0aa7:  mov    %eax,-0xb1(%ebp)
0861a799 +0x0aad:  mov    -0x140(%ebp),%eax
0861a79f +0x0ab3:  mov    %eax,-0xad(%ebp)
0861a7a5 +0x0ab9:  mov    -0x13c(%ebp),%eax
0861a7ab +0x0abf:  mov    %eax,-0xa9(%ebp)
0861a7b1 +0x0ac5:  mov    -0x138(%ebp),%eax
0861a7b7 +0x0acb:  mov    %eax,-0xa5(%ebp)
0861a7bd +0x0ad1:  mov    -0x134(%ebp),%eax
0861a7c3 +0x0ad7:  mov    %eax,-0xa1(%ebp)
0861a7c9 +0x0add:  mov    -0x130(%ebp),%eax
0861a7cf +0x0ae3:  mov    %eax,-0x9d(%ebp)
0861a7d5 +0x0ae9:  movzbl -0x12c(%ebp),%eax
0861a7dc +0x0af0:  mov    %al,-0x99(%ebp)
0861a7e2 +0x0af6:  mov    -0xd3(%ebp),%eax
0861a7e8 +0x0afc:  test   %eax,%eax
0861a7ea +0x0afe:  je     0861a960 <+0xc74>
0861a7f0 +0x0b04:  movzbl -0xd4(%ebp),%eax
0861a7f7 +0x0b0b:  cmp    $0x1,%al
0861a7f9 +0x0b0d:  jne    0861a95c <+0xc70>
0861a7ff +0x0b13:  mov    -0xd3(%ebp),%eax
0861a805 +0x0b19:  mov    %eax,%esi
0861a807 +0x0b1b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0861a80c +0x0b20:  mov    0xc(%eax),%eax
0861a80f +0x0b23:  mov    %esi,0x4(%esp)
0861a813 +0x0b27:  mov    %eax,(%esp)
0861a816 +0x0b2a:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
0861a81b +0x0b2f:  mov    %eax,-0x54(%ebp)
0861a81e +0x0b32:  cmpl   $0x0,-0x54(%ebp)
0861a822 +0x0b36:  je     0861a95f <+0xc73>
0861a828 +0x0b3c:  mov    -0x54(%ebp),%eax
0861a82b +0x0b3f:  mov    %eax,-0x50(%ebp)
0861a82e +0x0b42:  mov    0xc(%ebp),%eax
0861a831 +0x0b45:  mov    %eax,(%esp)
0861a834 +0x0b48:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861a839 +0x0b4d:  mov    %eax,0x4(%esp)
0861a83d +0x0b51:  mov    -0x50(%ebp),%eax
0861a840 +0x0b54:  mov    %eax,(%esp)
0861a843 +0x0b57:  call   085137b8 <_ZNK10CEquipItem14getGrowthGradeEi>  ; CEquipItem::getGrowthGrade(int) const
0861a848 +0x0b5c:  mov    %eax,-0x38(%ebp)
0861a84b +0x0b5f:  mov    0xc(%ebp),%eax
0861a84e +0x0b62:  mov    %eax,(%esp)
0861a851 +0x0b65:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861a856 +0x0b6a:  mov    %eax,0x4(%esp)
0861a85a +0x0b6e:  mov    -0x50(%ebp),%eax
0861a85d +0x0b71:  mov    %eax,(%esp)
0861a860 +0x0b74:  call   0851381c <_ZNK10CEquipItem19getGrowthRepairCostEi>  ; CEquipItem::getGrowthRepairCost(int) const
0861a865 +0x0b79:  mov    %eax,-0x34(%ebp)
0861a868 +0x0b7c:  lea    -0xd5(%ebp),%eax
0861a86e +0x0b82:  add    $0x11,%eax
0861a871 +0x0b85:  mov    %eax,(%esp)
0861a874 +0x0b88:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0861a879 +0x0b8d:  movzbl %al,%edi
0861a87c +0x0b90:  lea    -0xd5(%ebp),%eax
0861a882 +0x0b96:  mov    %eax,(%esp)
0861a885 +0x0b99:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0861a88a +0x0b9e:  movzbl %al,%esi
0861a88d +0x0ba1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0861a892 +0x0ba6:  mov    %edi,0x8(%esp)
0861a896 +0x0baa:  mov    %esi,0x4(%esp)
0861a89a +0x0bae:  mov    %eax,(%esp)
0861a89d +0x0bb1:  call   083635d4 <_ZN12CDataManager28getUpgradeItemRepairCostRateEib>  ; CDataManager::getUpgradeItemRepairCostRate(int, bool)
0861a8a2 +0x0bb6:  fstps  -0x174(%ebp)
0861a8a8 +0x0bbc:  mov    -0x50(%ebp),%eax
0861a8ab +0x0bbf:  mov    %eax,(%esp)
0861a8ae +0x0bc2:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861a8b3 +0x0bc7:  movzwl -0xca(%ebp),%edx
0861a8ba +0x0bce:  movzwl %dx,%edx
0861a8bd +0x0bd1:  flds   -0x174(%ebp)
0861a8c3 +0x0bd7:  fstps  0x14(%esp)
0861a8c7 +0x0bdb:  movl   $0x0,0x10(%esp)
0861a8cf +0x0be3:  mov    -0x38(%ebp),%ecx
0861a8d2 +0x0be6:  mov    %ecx,0xc(%esp)
0861a8d6 +0x0bea:  mov    %eax,0x8(%esp)
0861a8da +0x0bee:  mov    %edx,0x4(%esp)
0861a8de +0x0bf2:  mov    -0x34(%ebp),%eax
0861a8e1 +0x0bf5:  mov    %eax,(%esp)
0861a8e4 +0x0bf8:  call   0898c8fc <_Z23getEquipmentRepairPriceiiiibf>  ; getEquipmentRepairPrice(int, int, int, int, bool, float)
0861a8e9 +0x0bfd:  add    %eax,-0x58(%ebp)
0861a8ec +0x0c00:  mov    -0x50(%ebp),%eax
0861a8ef +0x0c03:  mov    %eax,(%esp)
0861a8f2 +0x0c06:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861a8f7 +0x0c0b:  test   %eax,%eax
0861a8f9 +0x0c0d:  je     0861a91b <+0xc2f>
0861a8fb +0x0c0f:  movzwl -0xca(%ebp),%eax
0861a902 +0x0c16:  movzwl %ax,%esi
0861a905 +0x0c19:  mov    -0x50(%ebp),%eax
0861a908 +0x0c1c:  mov    %eax,(%esp)
0861a90b +0x0c1f:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861a910 +0x0c24:  cmp    %eax,%esi
0861a912 +0x0c26:  je     0861a91b <+0xc2f>
0861a914 +0x0c28:  mov    $0x1,%eax
0861a919 +0x0c2d:  jmp    0861a920 <+0xc34>
0861a91b +0x0c2f:  mov    $0x0,%eax
0861a920 +0x0c34:  test   %al,%al
0861a922 +0x0c36:  je     0861a960 <+0xc74>
0861a924 +0x0c38:  mov    -0x50(%ebp),%eax
0861a927 +0x0c3b:  mov    %eax,0xc(%esp)
0861a92b +0x0c3f:  mov    -0x3c(%ebp),%eax
0861a92e +0x0c42:  mov    %eax,0x8(%esp)
0861a932 +0x0c46:  movl   $0x1,0x4(%esp)
0861a93a +0x0c4e:  lea    -0x78(%ebp),%eax
0861a93d +0x0c51:  mov    %eax,(%esp)
0861a940 +0x0c54:  call   0861b08e <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x1c>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x1c
0861a945 +0x0c59:  lea    -0x78(%ebp),%eax
0861a948 +0x0c5c:  mov    %eax,0x4(%esp)
0861a94c +0x0c60:  lea    -0x84(%ebp),%eax
0861a952 +0x0c66:  mov    %eax,(%esp)
0861a955 +0x0c69:  call   0861b120 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0xae>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0xae
0861a95a +0x0c6e:  jmp    0861a960 <+0xc74>
0861a95c +0x0c70:  nop
0861a95d +0x0c71:  jmp    0861a960 <+0xc74>
0861a95f +0x0c73:  nop
0861a960 +0x0c74:  addl   $0x1,-0x3c(%ebp)
0861a964 +0x0c78:  cmpl   $0x8,-0x3c(%ebp)
0861a968 +0x0c7c:  setle  %al
0861a96b +0x0c7f:  test   %al,%al
0861a96d +0x0c81:  jne    0861a6f2 <+0xa06>
0861a973 +0x0c87:  movl   $0xa,-0x30(%ebp)
0861a97a +0x0c8e:  jmp    0861abee <+0xf02>
0861a97f +0x0c93:  mov    0xc(%ebp),%eax
0861a982 +0x0c96:  mov    %eax,(%esp)
0861a985 +0x0c99:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0861a98a +0x0c9e:  lea    -0x168(%ebp),%edx
0861a990 +0x0ca4:  mov    -0x30(%ebp),%ecx
0861a993 +0x0ca7:  mov    %ecx,0xc(%esp)
0861a997 +0x0cab:  movl   $0x0,0x8(%esp)
0861a99f +0x0cb3:  mov    %eax,0x4(%esp)
0861a9a3 +0x0cb7:  mov    %edx,(%esp)
0861a9a6 +0x0cba:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0861a9ab +0x0cbf:  sub    $0x4,%esp
0861a9ae +0x0cc2:  mov    -0x168(%ebp),%eax
0861a9b4 +0x0cc8:  mov    %eax,-0xd5(%ebp)
0861a9ba +0x0cce:  mov    -0x164(%ebp),%eax
0861a9c0 +0x0cd4:  mov    %eax,-0xd1(%ebp)
0861a9c6 +0x0cda:  mov    -0x160(%ebp),%eax
0861a9cc +0x0ce0:  mov    %eax,-0xcd(%ebp)
0861a9d2 +0x0ce6:  mov    -0x15c(%ebp),%eax
0861a9d8 +0x0cec:  mov    %eax,-0xc9(%ebp)
0861a9de +0x0cf2:  mov    -0x158(%ebp),%eax
0861a9e4 +0x0cf8:  mov    %eax,-0xc5(%ebp)
0861a9ea +0x0cfe:  mov    -0x154(%ebp),%eax
0861a9f0 +0x0d04:  mov    %eax,-0xc1(%ebp)
0861a9f6 +0x0d0a:  mov    -0x150(%ebp),%eax
0861a9fc +0x0d10:  mov    %eax,-0xbd(%ebp)
0861aa02 +0x0d16:  mov    -0x14c(%ebp),%eax
0861aa08 +0x0d1c:  mov    %eax,-0xb9(%ebp)
0861aa0e +0x0d22:  mov    -0x148(%ebp),%eax
0861aa14 +0x0d28:  mov    %eax,-0xb5(%ebp)
0861aa1a +0x0d2e:  mov    -0x144(%ebp),%eax
0861aa20 +0x0d34:  mov    %eax,-0xb1(%ebp)
0861aa26 +0x0d3a:  mov    -0x140(%ebp),%eax
0861aa2c +0x0d40:  mov    %eax,-0xad(%ebp)
0861aa32 +0x0d46:  mov    -0x13c(%ebp),%eax
0861aa38 +0x0d4c:  mov    %eax,-0xa9(%ebp)
0861aa3e +0x0d52:  mov    -0x138(%ebp),%eax
0861aa44 +0x0d58:  mov    %eax,-0xa5(%ebp)
0861aa4a +0x0d5e:  mov    -0x134(%ebp),%eax
0861aa50 +0x0d64:  mov    %eax,-0xa1(%ebp)
0861aa56 +0x0d6a:  mov    -0x130(%ebp),%eax
0861aa5c +0x0d70:  mov    %eax,-0x9d(%ebp)
0861aa62 +0x0d76:  movzbl -0x12c(%ebp),%eax
0861aa69 +0x0d7d:  mov    %al,-0x99(%ebp)
0861aa6f +0x0d83:  mov    -0xd3(%ebp),%eax
0861aa75 +0x0d89:  test   %eax,%eax
0861aa77 +0x0d8b:  je     0861abea <+0xefe>
0861aa7d +0x0d91:  movzbl -0xd4(%ebp),%eax
0861aa84 +0x0d98:  cmp    $0x1,%al
0861aa86 +0x0d9a:  jne    0861abe6 <+0xefa>
0861aa8c +0x0da0:  mov    -0xd3(%ebp),%eax
0861aa92 +0x0da6:  mov    %eax,%esi
0861aa94 +0x0da8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0861aa99 +0x0dad:  mov    %esi,0x4(%esp)
0861aa9d +0x0db1:  mov    %eax,(%esp)
0861aaa0 +0x0db4:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0861aaa5 +0x0db9:  mov    %eax,-0x54(%ebp)
0861aaa8 +0x0dbc:  cmpl   $0x0,-0x54(%ebp)
0861aaac +0x0dc0:  je     0861abe9 <+0xefd>
0861aab2 +0x0dc6:  mov    -0x54(%ebp),%eax
0861aab5 +0x0dc9:  mov    %eax,-0x50(%ebp)
0861aab8 +0x0dcc:  mov    0xc(%ebp),%eax
0861aabb +0x0dcf:  mov    %eax,(%esp)
0861aabe +0x0dd2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861aac3 +0x0dd7:  mov    %eax,0x4(%esp)
0861aac7 +0x0ddb:  mov    -0x50(%ebp),%eax
0861aaca +0x0dde:  mov    %eax,(%esp)
0861aacd +0x0de1:  call   085137b8 <_ZNK10CEquipItem14getGrowthGradeEi>  ; CEquipItem::getGrowthGrade(int) const
0861aad2 +0x0de6:  mov    %eax,-0x2c(%ebp)
0861aad5 +0x0de9:  mov    0xc(%ebp),%eax
0861aad8 +0x0dec:  mov    %eax,(%esp)
0861aadb +0x0def:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861aae0 +0x0df4:  mov    %eax,0x4(%esp)
0861aae4 +0x0df8:  mov    -0x50(%ebp),%eax
0861aae7 +0x0dfb:  mov    %eax,(%esp)
0861aaea +0x0dfe:  call   0851381c <_ZNK10CEquipItem19getGrowthRepairCostEi>  ; CEquipItem::getGrowthRepairCost(int) const
0861aaef +0x0e03:  mov    %eax,-0x28(%ebp)
0861aaf2 +0x0e06:  lea    -0xd5(%ebp),%eax
0861aaf8 +0x0e0c:  add    $0x11,%eax
0861aafb +0x0e0f:  mov    %eax,(%esp)
0861aafe +0x0e12:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0861ab03 +0x0e17:  movzbl %al,%edi
0861ab06 +0x0e1a:  lea    -0xd5(%ebp),%eax
0861ab0c +0x0e20:  mov    %eax,(%esp)
0861ab0f +0x0e23:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0861ab14 +0x0e28:  movzbl %al,%esi
0861ab17 +0x0e2b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0861ab1c +0x0e30:  mov    %edi,0x8(%esp)
0861ab20 +0x0e34:  mov    %esi,0x4(%esp)
0861ab24 +0x0e38:  mov    %eax,(%esp)
0861ab27 +0x0e3b:  call   083635d4 <_ZN12CDataManager28getUpgradeItemRepairCostRateEib>  ; CDataManager::getUpgradeItemRepairCostRate(int, bool)
0861ab2c +0x0e40:  fstps  -0x170(%ebp)
0861ab32 +0x0e46:  mov    -0x50(%ebp),%eax
0861ab35 +0x0e49:  mov    %eax,(%esp)
0861ab38 +0x0e4c:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861ab3d +0x0e51:  movzwl -0xca(%ebp),%edx
0861ab44 +0x0e58:  movzwl %dx,%edx
0861ab47 +0x0e5b:  flds   -0x170(%ebp)
0861ab4d +0x0e61:  fstps  0x14(%esp)
0861ab51 +0x0e65:  movl   $0x0,0x10(%esp)
0861ab59 +0x0e6d:  mov    -0x2c(%ebp),%ecx
0861ab5c +0x0e70:  mov    %ecx,0xc(%esp)
0861ab60 +0x0e74:  mov    %eax,0x8(%esp)
0861ab64 +0x0e78:  mov    %edx,0x4(%esp)
0861ab68 +0x0e7c:  mov    -0x28(%ebp),%eax
0861ab6b +0x0e7f:  mov    %eax,(%esp)
0861ab6e +0x0e82:  call   0898c8fc <_Z23getEquipmentRepairPriceiiiibf>  ; getEquipmentRepairPrice(int, int, int, int, bool, float)
0861ab73 +0x0e87:  add    %eax,-0x58(%ebp)
0861ab76 +0x0e8a:  mov    -0x50(%ebp),%eax
0861ab79 +0x0e8d:  mov    %eax,(%esp)
0861ab7c +0x0e90:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861ab81 +0x0e95:  test   %eax,%eax
0861ab83 +0x0e97:  je     0861aba5 <+0xeb9>
0861ab85 +0x0e99:  movzwl -0xca(%ebp),%eax
0861ab8c +0x0ea0:  movzwl %ax,%esi
0861ab8f +0x0ea3:  mov    -0x50(%ebp),%eax
0861ab92 +0x0ea6:  mov    %eax,(%esp)
0861ab95 +0x0ea9:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861ab9a +0x0eae:  cmp    %eax,%esi
0861ab9c +0x0eb0:  je     0861aba5 <+0xeb9>
0861ab9e +0x0eb2:  mov    $0x1,%eax
0861aba3 +0x0eb7:  jmp    0861abaa <+0xebe>
0861aba5 +0x0eb9:  mov    $0x0,%eax
0861abaa +0x0ebe:  test   %al,%al
0861abac +0x0ec0:  je     0861abea <+0xefe>
0861abae +0x0ec2:  mov    -0x50(%ebp),%eax
0861abb1 +0x0ec5:  mov    %eax,0xc(%esp)
0861abb5 +0x0ec9:  mov    -0x30(%ebp),%eax
0861abb8 +0x0ecc:  mov    %eax,0x8(%esp)
0861abbc +0x0ed0:  movl   $0x0,0x4(%esp)
0861abc4 +0x0ed8:  lea    -0x6c(%ebp),%eax
0861abc7 +0x0edb:  mov    %eax,(%esp)
0861abca +0x0ede:  call   0861b08e <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x1c>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x1c
0861abcf +0x0ee3:  lea    -0x6c(%ebp),%eax
0861abd2 +0x0ee6:  mov    %eax,0x4(%esp)
0861abd6 +0x0eea:  lea    -0x84(%ebp),%eax
0861abdc +0x0ef0:  mov    %eax,(%esp)
0861abdf +0x0ef3:  call   0861b120 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0xae>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0xae
0861abe4 +0x0ef8:  jmp    0861abea <+0xefe>
0861abe6 +0x0efa:  nop
0861abe7 +0x0efb:  jmp    0861abea <+0xefe>
0861abe9 +0x0efd:  nop
0861abea +0x0efe:  addl   $0x1,-0x30(%ebp)
0861abee +0x0f02:  cmpl   $0x15,-0x30(%ebp)
0861abf2 +0x0f06:  setle  %al
0861abf5 +0x0f09:  test   %al,%al
0861abf7 +0x0f0b:  jne    0861a97f <+0xc93>
0861abfd +0x0f11:  mov    0xc(%ebp),%eax
0861ac00 +0x0f14:  mov    %eax,(%esp)
0861ac03 +0x0f17:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0861ac08 +0x0f1c:  movl   $0x1,0xc(%esp)
0861ac10 +0x0f24:  movl   $0x1,0x8(%esp)
0861ac18 +0x0f2c:  mov    -0x58(%ebp),%edx
0861ac1b +0x0f2f:  mov    %edx,0x4(%esp)
0861ac1f +0x0f33:  mov    %eax,(%esp)
0861ac22 +0x0f36:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0861ac27 +0x0f3b:  xor    $0x1,%eax
0861ac2a +0x0f3e:  test   %al,%al
0861ac2c +0x0f40:  je     0861ac3d <+0xf51>
0861ac2e +0x0f42:  mov    $0xa,%ebx
0861ac33 +0x0f47:  mov    $0x0,%esi
0861ac38 +0x0f4c:  jmp    0861b00b <+0x131f>
0861ac3d +0x0f51:  mov    -0x58(%ebp),%esi
0861ac40 +0x0f54:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0861ac45 +0x0f59:  mov    %esi,0xc(%esp)
0861ac49 +0x0f5d:  mov    0xc(%ebp),%edx
0861ac4c +0x0f60:  mov    %edx,0x8(%esp)
0861ac50 +0x0f64:  movl   $0x14,0x4(%esp)
0861ac58 +0x0f6c:  mov    %eax,(%esp)
0861ac5b +0x0f6f:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
0861ac60 +0x0f74:  mov    0xc(%ebp),%eax
0861ac63 +0x0f77:  mov    %eax,(%esp)
0861ac66 +0x0f7a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0861ac6b +0x0f7f:  cmp    $0xa,%eax
0861ac6e +0x0f82:  sete   %al
0861ac71 +0x0f85:  test   %al,%al
0861ac73 +0x0f87:  je     0861ad00 <+0x1014>
0861ac79 +0x0f8d:  mov    0xc(%ebp),%eax
0861ac7c +0x0f90:  mov    %eax,(%esp)
0861ac7f +0x0f93:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
0861ac84 +0x0f98:  mov    %eax,-0x20(%ebp)
0861ac87 +0x0f9b:  cmpl   $0x0,-0x20(%ebp)
0861ac8b +0x0f9f:  je     0861ad00 <+0x1014>
0861ac8d +0x0fa1:  mov    -0x20(%ebp),%eax
0861ac90 +0x0fa4:  mov    %eax,(%esp)
0861ac93 +0x0fa7:  call   08234612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9cbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9cbc
0861ac98 +0x0fac:  mov    %eax,(%esp)
0861ac9b +0x0faf:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
0861aca0 +0x0fb4:  mov    %eax,(%esp)
0861aca3 +0x0fb7:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0861aca8 +0x0fbc:  cmp    $0x2af8,%eax
0861acad +0x0fc1:  sete   %al
0861acb0 +0x0fc4:  test   %al,%al
0861acb2 +0x0fc6:  je     0861acba <+0xfce>
0861acb4 +0x0fc8:  movb   $0x0,-0x21(%ebp)
0861acb8 +0x0fcc:  jmp    0861acbe <+0xfd2>
0861acba +0x0fce:  movb   $0x1,-0x21(%ebp)
0861acbe +0x0fd2:  mov    -0x58(%ebp),%eax
0861acc1 +0x0fd5:  mov    %eax,-0x16c(%ebp)
0861acc7 +0x0fdb:  mov    0xc(%ebp),%eax
0861acca +0x0fde:  mov    %eax,(%esp)
0861accd +0x0fe1:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0861acd2 +0x0fe6:  movsbl %al,%edi
0861acd5 +0x0fe9:  movsbl -0x21(%ebp),%esi
0861acd9 +0x0fed:  call   0860f337 <_Z35GetInstanceDeathTowerValueStatisticv>  ; GetInstanceDeathTowerValueStatistic()
0861acde +0x0ff2:  mov    -0x16c(%ebp),%edx
0861ace4 +0x0ff8:  mov    %edx,0x10(%esp)
0861ace8 +0x0ffc:  mov    %edi,0xc(%esp)
0861acec +0x1000:  mov    %esi,0x8(%esp)
0861acf0 +0x1004:  movl   $0x9,0x4(%esp)
0861acf8 +0x100c:  mov    %eax,(%esp)
0861acfb +0x100f:  call   0860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>  ; CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)
0861ad00 +0x1014:  lea    -0x60(%ebp),%eax
0861ad03 +0x1017:  lea    -0x84(%ebp),%edx
0861ad09 +0x101d:  mov    %edx,0x4(%esp)
0861ad0d +0x1021:  mov    %eax,(%esp)
0861ad10 +0x1024:  call   0861b142 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0xd0>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0xd0
0861ad15 +0x1029:  sub    $0x4,%esp
0861ad18 +0x102c:  lea    -0x60(%ebp),%eax
0861ad1b +0x102f:  mov    %eax,0x4(%esp)
0861ad1f +0x1033:  lea    -0x88(%ebp),%eax
0861ad25 +0x1039:  mov    %eax,(%esp)
0861ad28 +0x103c:  call   0861b166 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0xf4>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0xf4
0861ad2d +0x1041:  lea    -0x5c(%ebp),%eax
0861ad30 +0x1044:  lea    -0x84(%ebp),%edx
0861ad36 +0x104a:  mov    %edx,0x4(%esp)
0861ad3a +0x104e:  mov    %eax,(%esp)
0861ad3d +0x1051:  call   0861b180 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x10e>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x10e
0861ad42 +0x1056:  sub    $0x4,%esp
0861ad45 +0x1059:  lea    -0x5c(%ebp),%eax
0861ad48 +0x105c:  mov    %eax,0x4(%esp)
0861ad4c +0x1060:  lea    -0x8c(%ebp),%eax
0861ad52 +0x1066:  mov    %eax,(%esp)
0861ad55 +0x1069:  call   0861b166 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0xf4>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0xf4
0861ad5a +0x106e:  jmp    0861af8c <+0x12a0>
0861ad5f +0x1073:  lea    -0x88(%ebp),%eax
0861ad65 +0x1079:  mov    %eax,(%esp)
0861ad68 +0x107c:  call   0861b1e8 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x176>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x176
0861ad6d +0x1081:  mov    (%eax),%edx
0861ad6f +0x1083:  mov    %edx,-0x98(%ebp)
0861ad75 +0x1089:  mov    0x4(%eax),%edx
0861ad78 +0x108c:  mov    %edx,-0x94(%ebp)
0861ad7e +0x1092:  mov    0x8(%eax),%eax
0861ad81 +0x1095:  mov    %eax,-0x90(%ebp)
0861ad87 +0x109b:  mov    -0x94(%ebp),%edi
0861ad8d +0x10a1:  mov    -0x98(%ebp),%eax
0861ad93 +0x10a7:  mov    %eax,%esi
0861ad95 +0x10a9:  mov    0xc(%ebp),%eax
0861ad98 +0x10ac:  mov    %eax,(%esp)
0861ad9b +0x10af:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0861ada0 +0x10b4:  lea    -0x168(%ebp),%edx
0861ada6 +0x10ba:  mov    %edi,0xc(%esp)
0861adaa +0x10be:  mov    %esi,0x8(%esp)
0861adae +0x10c2:  mov    %eax,0x4(%esp)
0861adb2 +0x10c6:  mov    %edx,(%esp)
0861adb5 +0x10c9:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0861adba +0x10ce:  sub    $0x4,%esp
0861adbd +0x10d1:  mov    -0x168(%ebp),%eax
0861adc3 +0x10d7:  mov    %eax,-0xd5(%ebp)
0861adc9 +0x10dd:  mov    -0x164(%ebp),%eax
0861adcf +0x10e3:  mov    %eax,-0xd1(%ebp)
0861add5 +0x10e9:  mov    -0x160(%ebp),%eax
0861addb +0x10ef:  mov    %eax,-0xcd(%ebp)
0861ade1 +0x10f5:  mov    -0x15c(%ebp),%eax
0861ade7 +0x10fb:  mov    %eax,-0xc9(%ebp)
0861aded +0x1101:  mov    -0x158(%ebp),%eax
0861adf3 +0x1107:  mov    %eax,-0xc5(%ebp)
0861adf9 +0x110d:  mov    -0x154(%ebp),%eax
0861adff +0x1113:  mov    %eax,-0xc1(%ebp)
0861ae05 +0x1119:  mov    -0x150(%ebp),%eax
0861ae0b +0x111f:  mov    %eax,-0xbd(%ebp)
0861ae11 +0x1125:  mov    -0x14c(%ebp),%eax
0861ae17 +0x112b:  mov    %eax,-0xb9(%ebp)
0861ae1d +0x1131:  mov    -0x148(%ebp),%eax
0861ae23 +0x1137:  mov    %eax,-0xb5(%ebp)
0861ae29 +0x113d:  mov    -0x144(%ebp),%eax
0861ae2f +0x1143:  mov    %eax,-0xb1(%ebp)
0861ae35 +0x1149:  mov    -0x140(%ebp),%eax
0861ae3b +0x114f:  mov    %eax,-0xad(%ebp)
0861ae41 +0x1155:  mov    -0x13c(%ebp),%eax
0861ae47 +0x115b:  mov    %eax,-0xa9(%ebp)
0861ae4d +0x1161:  mov    -0x138(%ebp),%eax
0861ae53 +0x1167:  mov    %eax,-0xa5(%ebp)
0861ae59 +0x116d:  mov    -0x134(%ebp),%eax
0861ae5f +0x1173:  mov    %eax,-0xa1(%ebp)
0861ae65 +0x1179:  mov    -0x130(%ebp),%eax
0861ae6b +0x117f:  mov    %eax,-0x9d(%ebp)
0861ae71 +0x1185:  movzbl -0x12c(%ebp),%eax
0861ae78 +0x118c:  mov    %al,-0x99(%ebp)
0861ae7e +0x1192:  mov    -0xd3(%ebp),%eax
0861ae84 +0x1198:  test   %eax,%eax
0861ae86 +0x119a:  je     0861af7a <+0x128e>
0861ae8c +0x11a0:  movzbl -0xd4(%ebp),%eax
0861ae93 +0x11a7:  cmp    $0x1,%al
0861ae95 +0x11a9:  jne    0861af7d <+0x1291>
0861ae9b +0x11af:  mov    -0x90(%ebp),%eax
0861aea1 +0x11b5:  mov    %eax,(%esp)
0861aea4 +0x11b8:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0861aea9 +0x11bd:  mov    %ax,-0xca(%ebp)
0861aeb0 +0x11c4:  mov    -0x94(%ebp),%edi
0861aeb6 +0x11ca:  mov    -0x98(%ebp),%esi
0861aebc +0x11d0:  mov    0xc(%ebp),%eax
0861aebf +0x11d3:  mov    %eax,(%esp)
0861aec2 +0x11d6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0861aec7 +0x11db:  mov    -0xd5(%ebp),%edx
0861aecd +0x11e1:  mov    %edx,0xc(%esp)
0861aed1 +0x11e5:  mov    -0xd1(%ebp),%edx
0861aed7 +0x11eb:  mov    %edx,0x10(%esp)
0861aedb +0x11ef:  mov    -0xcd(%ebp),%edx
0861aee1 +0x11f5:  mov    %edx,0x14(%esp)
0861aee5 +0x11f9:  mov    -0xc9(%ebp),%edx
0861aeeb +0x11ff:  mov    %edx,0x18(%esp)
0861aeef +0x1203:  mov    -0xc5(%ebp),%edx
0861aef5 +0x1209:  mov    %edx,0x1c(%esp)
0861aef9 +0x120d:  mov    -0xc1(%ebp),%edx
0861aeff +0x1213:  mov    %edx,0x20(%esp)
0861af03 +0x1217:  mov    -0xbd(%ebp),%edx
0861af09 +0x121d:  mov    %edx,0x24(%esp)
0861af0d +0x1221:  mov    -0xb9(%ebp),%edx
0861af13 +0x1227:  mov    %edx,0x28(%esp)
0861af17 +0x122b:  mov    -0xb5(%ebp),%edx
0861af1d +0x1231:  mov    %edx,0x2c(%esp)
0861af21 +0x1235:  mov    -0xb1(%ebp),%edx
0861af27 +0x123b:  mov    %edx,0x30(%esp)
0861af2b +0x123f:  mov    -0xad(%ebp),%edx
0861af31 +0x1245:  mov    %edx,0x34(%esp)
0861af35 +0x1249:  mov    -0xa9(%ebp),%edx
0861af3b +0x124f:  mov    %edx,0x38(%esp)
0861af3f +0x1253:  mov    -0xa5(%ebp),%edx
0861af45 +0x1259:  mov    %edx,0x3c(%esp)
0861af49 +0x125d:  mov    -0xa1(%ebp),%edx
0861af4f +0x1263:  mov    %edx,0x40(%esp)
0861af53 +0x1267:  mov    -0x9d(%ebp),%edx
0861af59 +0x126d:  mov    %edx,0x44(%esp)
0861af5d +0x1271:  movzbl -0x99(%ebp),%edx
0861af64 +0x1278:  mov    %dl,0x48(%esp)
0861af68 +0x127c:  mov    %edi,0x8(%esp)
0861af6c +0x1280:  mov    %esi,0x4(%esp)
0861af70 +0x1284:  mov    %eax,(%esp)
0861af73 +0x1287:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0861af78 +0x128c:  jmp    0861af7e <+0x1292>
0861af7a +0x128e:  nop
0861af7b +0x128f:  jmp    0861af7e <+0x1292>
0861af7d +0x1291:  nop
0861af7e +0x1292:  lea    -0x88(%ebp),%eax
0861af84 +0x1298:  mov    %eax,(%esp)
0861af87 +0x129b:  call   0861b1d2 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x160>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x160
0861af8c +0x12a0:  lea    -0x8c(%ebp),%eax
0861af92 +0x12a6:  mov    %eax,0x4(%esp)
0861af96 +0x12aa:  lea    -0x88(%ebp),%eax
0861af9c +0x12b0:  mov    %eax,(%esp)
0861af9f +0x12b3:  call   0861b1a6 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x134>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x134
0861afa4 +0x12b8:  test   %al,%al
0861afa6 +0x12ba:  jne    0861ad5f <+0x1073>
0861afac +0x12c0:  movl   $0xa,-0x1c(%ebp)
0861afb3 +0x12c7:  jmp    0861afdb <+0x12ef>
0861afb5 +0x12c9:  mov    -0x1c(%ebp),%eax
0861afb8 +0x12cc:  mov    %eax,0xc(%esp)
0861afbc +0x12d0:  movl   $0x3,0x8(%esp)
0861afc4 +0x12d8:  movl   $0x1,0x4(%esp)
0861afcc +0x12e0:  mov    0xc(%ebp),%eax
0861afcf +0x12e3:  mov    %eax,(%esp)
0861afd2 +0x12e6:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0861afd7 +0x12eb:  addl   $0x1,-0x1c(%ebp)
0861afdb +0x12ef:  cmpl   $0x15,-0x1c(%ebp)
0861afdf +0x12f3:  setle  %al
0861afe2 +0x12f6:  test   %al,%al
0861afe4 +0x12f8:  jne    0861afb5 <+0x12c9>
0861afe6 +0x12fa:  mov    $0x1,%esi
0861afeb +0x12ff:  jmp    0861b00b <+0x131f>
0861afed +0x1301:  mov    %edx,%ebx
0861afef +0x1303:  mov    %eax,%esi
0861aff1 +0x1305:  lea    -0x84(%ebp),%eax
0861aff7 +0x130b:  mov    %eax,(%esp)
0861affa +0x130e:  call   0861b0c2 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x50>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x50
0861afff +0x1313:  mov    %esi,%eax
0861b001 +0x1315:  mov    %ebx,%edx
0861b003 +0x1317:  mov    %eax,(%esp)
0861b006 +0x131a:  call   08ae3750 <_Unwind_Resume>
0861b00b +0x131f:  lea    -0x84(%ebp),%eax
0861b011 +0x1325:  mov    %eax,(%esp)
0861b014 +0x1328:  call   0861b0c2 <_GLOBAL__I__ZN5Store13user_buy_itemEP5CUserii+0x50>  ; global constructors keyed to Store::user_buy_item(CUser*, int, int)+0x50
0861b019 +0x132d:  test   %esi,%esi
0861b01b +0x132f:  je     0861b025 <+0x1339>
0861b01d +0x1331:  jmp    0861b020 <+0x1334>
0861b01f +0x1333:  nop
0861b020 +0x1334:  mov    $0x0,%ebx
0861b025 +0x1339:  mov    %ebx,%eax
0861b027 +0x133b:  lea    -0xc(%ebp),%esp
0861b02a +0x133e:  add    $0x0,%esp
0861b02d +0x1341:  pop    %ebx
0861b02e +0x1342:  pop    %esi
0861b02f +0x1343:  pop    %edi
0861b030 +0x1344:  pop    %ebp
0861b031 +0x1345:  ret
```

## 反编译 C

```c
// Store::repair_equip @ 0x8619cec

/* Store::repair_equip(CUser*, char, short, unsigned short, unsigned short&) */

undefined4 __thiscall
Store::repair_equip(Store *this,CUser *param_1,char param_2,short param_3,ushort param_4,
                   ushort *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  CDataManager *pCVar7;
  uint uVar8;
  CInventory *pCVar9;
  CValueStatistic *pCVar10;
  CDungeonMgr *pCVar11;
  CDungeon *pCVar12;
  int iVar13;
  CDeathTowerValueStatistic *pCVar14;
  undefined4 uVar15;
  CCargo *this_00;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 unaff_EBX;
  longdouble lVar18;
  undefined1 local_16c [8];
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  ushort local_128;
  short local_124;
  char local_120;
  Inven_Item local_116;
  char cStack_115;
  undefined2 uStack_114;
  undefined2 local_112;
  undefined2 uStack_110;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  undefined1 local_da;
  Inven_Item local_d9;
  char cStack_d8;
  undefined2 uStack_d7;
  undefined2 local_d5;
  undefined2 uStack_d3;
  undefined4 local_d1;
  undefined4 uStack_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  CEquipItem *local_94;
  __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
  local_90 [4];
  __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
  local_8c [4];
  vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>> local_88 [12];
  tagRepairItemInfo local_7c [12];
  tagRepairItemInfo local_70 [12];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  int local_5c;
  CEquipItem *local_58;
  CEquipItem *local_54;
  int local_50;
  int local_4c;
  char local_45;
  CDeathTower *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  char local_25;
  CDeathTower *local_24;
  int local_20;
  
  local_120 = param_2;
  local_124 = param_3;
  local_128 = param_4;
  cVar3 = CUser::CheckInTrade(param_1);
  if (cVar3 != '\0') {
    return 0x13;
  }
  Inven_Item::Inven_Item(&local_d9);
  local_5c = 0;
  if (local_124 == -1) {
    std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::vector(local_88);
    for (local_40 = 3; local_40 < 9; local_40 = local_40 + 1) {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    /* try { // try from 0861a719 to 0861afd6 has its CatchHandler @ 0861afed */
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
      if ((CONCAT22(local_d5,uStack_d7) != 0) && (cStack_d8 == '\x01')) {
        iVar6 = CONCAT22(local_d5,uStack_d7);
        iVar13 = G_CDataManager();
        local_58 = (CEquipItem *)CItemList::find_item(*(CItemList **)(iVar13 + 0xc),iVar6);
        if (local_58 != (CEquipItem *)0x0) {
          local_54 = local_58;
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_3c = CEquipItem::getGrowthGrade(local_54,iVar6);
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_38 = CEquipItem::getGrowthRepairCost(local_54,iVar6);
          bVar4 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_c9 + 1));
          uVar8 = Inven_Item::GetUpgrade(&local_d9);
          pCVar7 = (CDataManager *)G_CDataManager();
          lVar18 = (longdouble)CDataManager::getUpgradeItemRepairCostRate(pCVar7,uVar8 & 0xff,bVar4)
          ;
          iVar6 = CEquipItem::get_endurance(local_54);
          iVar6 = getEquipmentRepairPrice
                            (local_38,(uint)CONCAT11((undefined1)uStack_cd,local_d1._3_1_),iVar6,
                             local_3c,false,(float)lVar18);
          local_5c = local_5c + iVar6;
          iVar6 = CEquipItem::get_endurance(local_54);
          if (iVar6 == 0) {
LAB_0861a91b:
            bVar4 = false;
          }
          else {
            uVar1 = CONCAT11((undefined1)uStack_cd,local_d1._3_1_);
            uVar8 = CEquipItem::get_endurance(local_54);
            if (uVar1 == uVar8) goto LAB_0861a91b;
            bVar4 = true;
          }
          if (bVar4) {
            tagRepairItemInfo::tagRepairItemInfo(local_7c,1,local_40,local_54);
            std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::push_back
                      (local_88,local_7c);
          }
        }
      }
    }
    for (local_34 = 10; local_34 < 0x16; local_34 = local_34 + 1) {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
      if ((CONCAT22(local_d5,uStack_d7) != 0) && (cStack_d8 == '\x01')) {
        iVar6 = CONCAT22(local_d5,uStack_d7);
        pCVar7 = (CDataManager *)G_CDataManager();
        local_58 = (CEquipItem *)CDataManager::find_item(pCVar7,iVar6);
        if (local_58 != (CEquipItem *)0x0) {
          local_54 = local_58;
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_30 = CEquipItem::getGrowthGrade(local_54,iVar6);
          iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          local_2c = CEquipItem::getGrowthRepairCost(local_54,iVar6);
          bVar4 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_c9 + 1));
          uVar8 = Inven_Item::GetUpgrade(&local_d9);
          pCVar7 = (CDataManager *)G_CDataManager();
          lVar18 = (longdouble)CDataManager::getUpgradeItemRepairCostRate(pCVar7,uVar8 & 0xff,bVar4)
          ;
          iVar6 = CEquipItem::get_endurance(local_54);
          iVar6 = getEquipmentRepairPrice
                            (local_2c,(uint)CONCAT11((undefined1)uStack_cd,local_d1._3_1_),iVar6,
                             local_30,false,(float)lVar18);
          local_5c = local_5c + iVar6;
          iVar6 = CEquipItem::get_endurance(local_54);
          if (iVar6 == 0) {
LAB_0861aba5:
            bVar4 = false;
          }
          else {
            uVar1 = CONCAT11((undefined1)uStack_cd,local_d1._3_1_);
            uVar8 = CEquipItem::get_endurance(local_54);
            if (uVar1 == uVar8) goto LAB_0861aba5;
            bVar4 = true;
          }
          if (bVar4) {
            tagRepairItemInfo::tagRepairItemInfo(local_70,0,local_34,local_54);
            std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::push_back
                      (local_88,local_70);
          }
        }
      }
    }
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::use_money(pCVar9,local_5c,1,1);
    iVar6 = local_5c;
    if (cVar3 == '\x01') {
      pCVar10 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar10,0x14,param_1,iVar6);
      iVar6 = CUser::get_state(param_1);
      if ((iVar6 == 10) &&
         (local_24 = (CDeathTower *)CUser::getDeathTower(param_1), local_24 != (CDeathTower *)0x0))
      {
        pCVar11 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_24);
        pCVar12 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar11);
        iVar13 = CDungeon::get_index(pCVar12);
        iVar6 = local_5c;
        local_25 = iVar13 != 11000;
        cVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        iVar13 = (int)local_25;
        pCVar14 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
        CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar14,9,iVar13,(int)cVar3,iVar6);
      }
      std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::begin();
      __gnu_cxx::
      __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
      ::__normal_iterator<tagRepairItemInfo*>(local_8c,local_64);
      std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::end();
      __gnu_cxx::
      __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
      ::__normal_iterator<tagRepairItemInfo*>(local_90,local_60);
      while (bVar4 = __gnu_cxx::operator!=(local_8c,local_90), bVar4) {
        puVar16 = (undefined4 *)
                  __gnu_cxx::
                  __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
                  ::operator*(local_8c);
        local_9c = *puVar16;
        local_98 = puVar16[1];
        local_94 = (CEquipItem *)puVar16[2];
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_16c,iVar6);
        local_d9 = SUB41(local_16c._0_4_,0);
        cStack_d8 = SUB41(local_16c._0_4_,1);
        uStack_d7 = SUB42(local_16c._0_4_,2);
        local_d5 = (undefined2)local_16c._4_4_;
        uStack_d3 = SUB42(local_16c._4_4_,2);
        local_d1 = local_164;
        uStack_cd = local_160;
        local_c9 = local_15c;
        local_c5 = local_158;
        local_c1 = local_154;
        local_bd = local_150;
        local_b9 = local_14c;
        local_b5 = local_148;
        local_b1 = local_144;
        local_ad = local_140;
        local_a9 = local_13c;
        local_a5 = local_138;
        local_a1 = local_134;
        local_9d = local_130;
        if ((CONCAT22(local_d5,uStack_d7) != 0) && (cStack_d8 == '\x01')) {
          uVar5 = CEquipItem::get_endurance(local_94);
          uVar2 = local_98;
          uVar15 = local_9c;
          local_d1._3_1_ = (undefined1)uVar5;
          uStack_cd._0_1_ = (undefined1)((ushort)uVar5 >> 8);
          uVar17 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::update_item
                    (uVar17,uVar15,uVar2,CONCAT22(uStack_d7,CONCAT11(cStack_d8,local_d9)),
                     CONCAT22(uStack_d3,local_d5),local_d1,uStack_cd,local_c9,local_c5,local_c1,
                     local_bd,local_b9,local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,
                     local_9d);
        }
        __gnu_cxx::
        __normal_iterator<tagRepairItemInfo_const*,std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>>
        ::operator++(local_8c);
      }
      for (local_20 = 10; local_20 < 0x16; local_20 = local_20 + 1) {
        CUser::SendUpdateItem(param_1,1,3,local_20);
      }
      bVar4 = true;
    }
    else {
      unaff_EBX = 10;
      bVar4 = false;
    }
    std::vector<tagRepairItemInfo,std::allocator<tagRepairItemInfo>>::~vector(local_88);
    if (!bVar4) {
      return unaff_EBX;
    }
  }
  else {
    if (local_120 == '\x02') {
      CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      CCargo::get_cargo_slot((int)local_16c);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
    }
    else if (local_120 == '\x03') {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
    }
    else {
      if (local_120 != '\0') {
        return 0x11;
      }
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_d9 = SUB41(local_16c._0_4_,0);
      cStack_d8 = SUB41(local_16c._0_4_,1);
      uStack_d7 = SUB42(local_16c._0_4_,2);
      local_d5 = (undefined2)local_16c._4_4_;
      uStack_d3 = SUB42(local_16c._4_4_,2);
      local_d1 = local_164;
      uStack_cd = local_160;
      local_c9 = local_15c;
      local_c5 = local_158;
      local_c1 = local_154;
      local_bd = local_150;
      local_b9 = local_14c;
      local_b5 = local_148;
      local_b1 = local_144;
      local_ad = local_140;
      local_a9 = local_13c;
      local_a5 = local_138;
      local_a1 = local_134;
      local_9d = local_130;
    }
    if ((CONCAT22(local_d5,uStack_d7) == 0) || (cStack_d8 != '\x01')) {
      return 0x11;
    }
    *param_5 = CONCAT11((undefined1)uStack_cd,local_d1._3_1_);
    iVar6 = CONCAT22(local_d5,uStack_d7);
    local_164 = local_d1;
    local_160 = uStack_cd;
    local_15c = local_c9;
    local_158 = local_c5;
    local_154 = local_c1;
    local_150 = local_bd;
    local_14c = local_b9;
    local_148 = local_b5;
    local_144 = local_b1;
    local_140 = local_ad;
    local_13c = local_a9;
    local_138 = local_a5;
    local_134 = local_a1;
    local_130 = local_9d;
    pCVar7 = (CDataManager *)G_CDataManager();
    local_58 = (CEquipItem *)CDataManager::find_item(pCVar7,iVar6);
    if (local_58 == (CEquipItem *)0x0) {
      return 0x11;
    }
    local_54 = local_58;
    iVar6 = CEquipItem::get_endurance(local_58);
    if (iVar6 == 0) {
      return 0x11;
    }
    Inven_Item::Inven_Item(&local_116);
    if (local_128 != 0xffff) {
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_16c,iVar6);
      local_116 = SUB41(local_16c._0_4_,0);
      cStack_115 = SUB41(local_16c._0_4_,1);
      uStack_114 = SUB42(local_16c._0_4_,2);
      local_112 = (undefined2)local_16c._4_4_;
      uStack_110 = SUB42(local_16c._4_4_,2);
      local_10e = local_164;
      local_10a = local_160;
      local_106 = local_15c;
      local_102 = local_158;
      local_fe = local_154;
      local_fa = local_150;
      local_f6 = local_14c;
      local_f2 = local_148;
      local_ee = local_144;
      local_ea = local_140;
      local_e6 = local_13c;
      local_e2 = local_138;
      local_de = local_134;
      local_da = local_130;
      if ((CONCAT22(local_112,uStack_114) == 0) || (cStack_115 != '\x02')) {
        return 0x15;
      }
      if ((CONCAT22(local_112,uStack_114) != 0x1f77) && (CONCAT22(local_112,uStack_114) != 0x201f))
      {
        return 0x15;
      }
    }
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_50 = CEquipItem::getGrowthGrade(local_54,iVar6);
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_4c = CEquipItem::getGrowthRepairCost(local_54,iVar6);
    bVar4 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_c9 + 1));
    uVar8 = Inven_Item::GetUpgrade(&local_d9);
    pCVar7 = (CDataManager *)G_CDataManager();
    lVar18 = (longdouble)CDataManager::getUpgradeItemRepairCostRate(pCVar7,uVar8 & 0xff,bVar4);
    iVar6 = CEquipItem::get_endurance(local_54);
    local_5c = getEquipmentRepairPrice
                         (local_4c,(uint)CONCAT11((undefined1)uStack_cd,local_d1._3_1_),iVar6,
                          local_50,false,(float)lVar18);
    if ((local_128 != 0xffff) &&
       ((CONCAT22(local_112,uStack_114) == 0x1f77 || (CONCAT22(local_112,uStack_114) == 0x201f)))) {
      uVar8 = (uint)local_128;
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar6 = CInventory::use_item(pCVar9,uVar8,1,0);
      if (iVar6 != 0) {
        return 0x16;
      }
      CUser::SendUpdateItem(param_1,1,0,local_128);
      local_5c = 0;
    }
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::use_money(pCVar9,local_5c,1,1);
    iVar6 = local_5c;
    if (cVar3 != '\x01') {
      return 10;
    }
    pCVar10 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar10,0x14,param_1,iVar6);
    iVar6 = CUser::get_state(param_1);
    if ((iVar6 == 10) &&
       (local_44 = (CDeathTower *)CUser::getDeathTower(param_1), local_44 != (CDeathTower *)0x0)) {
      pCVar11 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_44);
      pCVar12 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar11);
      iVar13 = CDungeon::get_index(pCVar12);
      iVar6 = local_5c;
      local_45 = iVar13 != 11000;
      cVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar13 = (int)local_45;
      pCVar14 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
      CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar14,9,iVar13,(int)cVar3,iVar6);
    }
    uVar5 = CEquipItem::get_endurance(local_54);
    local_d1._3_1_ = (undefined1)uVar5;
    uStack_cd._0_1_ = (undefined1)((ushort)uVar5 >> 8);
    if (local_120 == '\x02') {
      iVar6 = (int)local_124;
      this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
      CCargo::update_item(this_00,iVar6,&local_d9);
      CUser::SendUpdateItem(param_1,1,2,(int)local_124);
    }
    else if (local_120 == '\x03') {
      iVar6 = (int)local_124;
      uVar15 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar15,0,iVar6,CONCAT22(uStack_d7,CONCAT11(cStack_d8,local_d9)),
                 CONCAT22(uStack_d3,local_d5),local_d1,uStack_cd,local_c9,local_c5,local_c1,local_bd
                 ,local_b9,local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d);
      CUser::SendUpdateItem(param_1,1,3,(int)local_124);
    }
    else if (local_120 == '\0') {
      iVar6 = (int)local_124;
      uVar15 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar15,1,iVar6,CONCAT22(uStack_d7,CONCAT11(cStack_d8,local_d9)),
                 CONCAT22(uStack_d3,local_d5),local_d1,uStack_cd,local_c9,local_c5,local_c1,local_bd
                 ,local_b9,local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d);
      CUser::SendUpdateItem(param_1,1,0,(int)local_124);
    }
  }
  return 0;
}
```
