# consistMap

`_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_`

`WongWork::CDeathTower::CStage::consistMap(WongWork::CDeathTower::CDungeonMgr const&, CMap const*, WongWork::CDeathTower*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08460634` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08460634  _ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_
#           WongWork::CDeathTower::CStage::consistMap(WongWork::CDeathTower::CDungeonMgr const&, CMap const*, WongWork::CDeathTower*)
# range [0x08460634, 0x084614eb]
08460634 +0x000:  push   %ebp
08460635 +0x001:  mov    %esp,%ebp
08460637 +0x003:  push   %edi
08460638 +0x004:  push   %esi
08460639 +0x005:  push   %ebx
0846063a +0x006:  sub    $0xfbc,%esp
08460640 +0x00c:  mov    0x10(%ebp),%eax
08460643 +0x00f:  mov    %eax,(%esp)
08460646 +0x012:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0846064b +0x017:  mov    0x8(%ebp),%edx
0846064e +0x01a:  mov    %eax,0x10(%edx)
08460651 +0x01d:  lea    -0xa80(%ebp),%eax
08460657 +0x023:  mov    %eax,(%esp)
0846065a +0x026:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
0846065f +0x02b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08460664 +0x030:  mov    0x869c(%eax),%eax
0846066a +0x036:  mov    %eax,(%esp)
0846066d +0x039:  call   08150880 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1b5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1b5
08460672 +0x03e:  mov    %eax,0x4(%esp)
08460676 +0x042:  lea    -0xa98(%ebp),%eax
0846067c +0x048:  mov    %eax,(%esp)
0846067f +0x04b:  call   08238cdc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe386>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe386
08460684 +0x050:  movl   $0x0,-0x3c(%ebp)
0846068b +0x057:  lea    -0xf50(%ebp),%eax
08460691 +0x05d:  mov    %eax,(%esp)
08460694 +0x060:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08460699 +0x065:  mov    0x10(%ebp),%eax
0846069c +0x068:  mov    %eax,(%esp)
0846069f +0x06b:  call   081508fc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x231>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x231
084606a4 +0x070:  mov    %eax,-0x38(%ebp)
084606a7 +0x073:  mov    -0x38(%ebp),%eax
084606aa +0x076:  mov    %eax,(%esp)
084606ad +0x079:  call   081526de <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2013>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2013
084606b2 +0x07e:  xor    $0x1,%eax
084606b5 +0x081:  test   %al,%al
084606b7 +0x083:  je     08460940 <+0x30c>
084606bd +0x089:  movl   $0x0,-0x3c(%ebp)
084606c4 +0x090:  lea    -0xad4(%ebp),%eax
084606ca +0x096:  mov    -0x38(%ebp),%edx
084606cd +0x099:  mov    %edx,0x4(%esp)
084606d1 +0x09d:  mov    %eax,(%esp)
084606d4 +0x0a0:  call   08152722 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2057>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2057
084606d9 +0x0a5:  sub    $0x4,%esp
084606dc +0x0a8:  lea    -0xad8(%ebp),%eax
084606e2 +0x0ae:  mov    -0x38(%ebp),%edx
084606e5 +0x0b1:  mov    %edx,0x4(%esp)
084606e9 +0x0b5:  mov    %eax,(%esp)
084606ec +0x0b8:  call   0815274e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2083>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2083
084606f1 +0x0bd:  sub    $0x4,%esp
084606f4 +0x0c0:  jmp    08460920 <+0x2ec>
084606f9 +0x0c5:  lea    -0xad4(%ebp),%eax
084606ff +0x0cb:  mov    %eax,(%esp)
08460702 +0x0ce:  call   081527bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20f1
08460707 +0x0d3:  mov    %eax,-0x30(%ebp)
0846070a +0x0d6:  mov    -0x30(%ebp),%eax
0846070d +0x0d9:  mov    (%eax),%eax
0846070f +0x0db:  mov    %eax,%ebx
08460711 +0x0dd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08460716 +0x0e2:  mov    0x869c(%eax),%eax
0846071c +0x0e8:  mov    %ebx,0x4(%esp)
08460720 +0x0ec:  mov    %eax,(%esp)
08460723 +0x0ef:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
08460728 +0x0f4:  mov    %eax,-0x2c(%ebp)
0846072b +0x0f7:  cmpl   $0x0,-0x2c(%ebp)
0846072f +0x0fb:  jne    0846073b <+0x107>
08460731 +0x0fd:  mov    $0x0,%ebx
08460736 +0x102:  jmp    0846147a <+0xe46>
0846073b +0x107:  mov    -0x2c(%ebp),%eax
0846073e +0x10a:  mov    %eax,(%esp)
08460741 +0x10d:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
08460746 +0x112:  mov    %eax,-0xa74(%ebp)
0846074c +0x118:  lea    -0xa74(%ebp),%eax
08460752 +0x11e:  mov    %eax,0x4(%esp)
08460756 +0x122:  lea    -0xa80(%ebp),%eax
0846075c +0x128:  mov    %eax,(%esp)
0846075f +0x12b:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
08460764 +0x130:  mov    -0x2c(%ebp),%eax
08460767 +0x133:  mov    %eax,(%esp)
0846076a +0x136:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
0846076f +0x13b:  test   %eax,%eax
08460771 +0x13d:  setne  %al
08460774 +0x140:  test   %al,%al
08460776 +0x142:  je     0846083a <+0x206>
0846077c +0x148:  mov    -0x2c(%ebp),%eax
0846077f +0x14b:  mov    %eax,(%esp)
08460782 +0x14e:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
08460787 +0x153:  mov    %eax,-0xa70(%ebp)
0846078d +0x159:  lea    -0xadc(%ebp),%eax
08460793 +0x15f:  lea    -0xa70(%ebp),%edx
08460799 +0x165:  mov    %edx,0x8(%esp)
0846079d +0x169:  lea    -0xa98(%ebp),%edx
084607a3 +0x16f:  mov    %edx,0x4(%esp)
084607a7 +0x173:  mov    %eax,(%esp)
084607aa +0x176:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084607af +0x17b:  sub    $0x4,%esp
084607b2 +0x17e:  lea    -0xa6c(%ebp),%eax
084607b8 +0x184:  lea    -0xa98(%ebp),%edx
084607be +0x18a:  mov    %edx,0x4(%esp)
084607c2 +0x18e:  mov    %eax,(%esp)
084607c5 +0x191:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084607ca +0x196:  sub    $0x4,%esp
084607cd +0x199:  lea    -0xa6c(%ebp),%eax
084607d3 +0x19f:  mov    %eax,0x4(%esp)
084607d7 +0x1a3:  lea    -0xadc(%ebp),%eax
084607dd +0x1a9:  mov    %eax,(%esp)
084607e0 +0x1ac:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084607e5 +0x1b1:  test   %al,%al
084607e7 +0x1b3:  je     0846083a <+0x206>
084607e9 +0x1b5:  lea    -0xadc(%ebp),%eax
084607ef +0x1bb:  mov    %eax,(%esp)
084607f2 +0x1be:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084607f7 +0x1c3:  mov    %eax,%ebx
084607f9 +0x1c5:  lea    -0xadc(%ebp),%eax
084607ff +0x1cb:  mov    %eax,(%esp)
08460802 +0x1ce:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08460807 +0x1d3:  mov    0x4(%eax),%eax
0846080a +0x1d6:  sub    $0x1,%eax
0846080d +0x1d9:  mov    %eax,-0xa68(%ebp)
08460813 +0x1df:  movl   $0x0,-0xa64(%ebp)
0846081d +0x1e9:  lea    -0xa68(%ebp),%eax
08460823 +0x1ef:  mov    %eax,0x4(%esp)
08460827 +0x1f3:  lea    -0xa64(%ebp),%eax
0846082d +0x1f9:  mov    %eax,(%esp)
08460830 +0x1fc:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08460835 +0x201:  mov    (%eax),%eax
08460837 +0x203:  mov    %eax,0x4(%ebx)
0846083a +0x206:  movl   $0x34c,0x8(%esp)
08460842 +0x20e:  movl   $0x0,0x4(%esp)
0846084a +0x216:  lea    -0xf50(%ebp),%eax
08460850 +0x21c:  mov    %eax,(%esp)
08460853 +0x21f:  call   0807dcc0 <_init+0x5b8>
08460858 +0x224:  mov    -0x3c(%ebp),%eax
0846085b +0x227:  mov    %eax,-0xf50(%ebp)
08460861 +0x22d:  mov    -0x30(%ebp),%eax
08460864 +0x230:  mov    (%eax),%eax
08460866 +0x232:  mov    %eax,-0xf44(%ebp)
0846086c +0x238:  mov    0x8(%ebp),%eax
0846086f +0x23b:  mov    0x48(%eax),%eax
08460872 +0x23e:  mov    %eax,-0xf4c(%ebp)
08460878 +0x244:  lea    0x1(%eax),%edx
0846087b +0x247:  mov    0x8(%ebp),%eax
0846087e +0x24a:  mov    %edx,0x48(%eax)
08460881 +0x24d:  movb   $0x5,-0xf48(%ebp)
08460888 +0x254:  mov    -0x2c(%ebp),%eax
0846088b +0x257:  mov    %eax,(%esp)
0846088e +0x25a:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
08460893 +0x25f:  mov    %al,-0xf40(%ebp)
08460899 +0x265:  mov    -0x30(%ebp),%eax
0846089c +0x268:  mov    0x10(%eax),%eax
0846089f +0x26b:  mov    %eax,-0xf24(%ebp)
084608a5 +0x271:  movb   $0x0,-0xf3f(%ebp)
084608ac +0x278:  movb   $0x0,-0xf3e(%ebp)
084608b3 +0x27f:  lea    -0xf50(%ebp),%eax
084608b9 +0x285:  mov    %eax,0x4(%esp)
084608bd +0x289:  lea    -0xa60(%ebp),%eax
084608c3 +0x28f:  mov    %eax,(%esp)
084608c6 +0x292:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
084608cb +0x297:  mov    0x8(%ebp),%eax
084608ce +0x29a:  lea    0xc(%eax),%edx
084608d1 +0x29d:  lea    -0xa60(%ebp),%eax
084608d7 +0x2a3:  mov    %eax,0x4(%esp)
084608db +0x2a7:  mov    %edx,(%esp)
084608de +0x2aa:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
084608e3 +0x2af:  jmp    08460900 <+0x2cc>
084608e5 +0x2b1:  mov    %edx,%ebx
084608e7 +0x2b3:  mov    %eax,%esi
084608e9 +0x2b5:  lea    -0xa60(%ebp),%eax
084608ef +0x2bb:  mov    %eax,(%esp)
084608f2 +0x2be:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
084608f7 +0x2c3:  mov    %esi,%eax
084608f9 +0x2c5:  mov    %ebx,%edx
084608fb +0x2c7:  jmp    08461462 <+0xe2e>
08460900 +0x2cc:  lea    -0xa60(%ebp),%eax
08460906 +0x2d2:  mov    %eax,(%esp)
08460909 +0x2d5:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0846090e +0x2da:  addl   $0x1,-0x3c(%ebp)
08460912 +0x2de:  lea    -0xad4(%ebp),%eax
08460918 +0x2e4:  mov    %eax,(%esp)
0846091b +0x2e7:  call   081527a6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20db>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20db
08460920 +0x2ec:  lea    -0xad8(%ebp),%eax
08460926 +0x2f2:  mov    %eax,0x4(%esp)
0846092a +0x2f6:  lea    -0xad4(%ebp),%eax
08460930 +0x2fc:  mov    %eax,(%esp)
08460933 +0x2ff:  call   0815277a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20af
08460938 +0x304:  test   %al,%al
0846093a +0x306:  jne    084606f9 <+0xc5>
08460940 +0x30c:  mov    0x10(%ebp),%eax
08460943 +0x30f:  mov    %eax,(%esp)
08460946 +0x312:  call   081508f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x225>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x225
0846094b +0x317:  mov    %eax,-0xa9c(%ebp)
08460951 +0x31d:  mov    -0xa9c(%ebp),%eax
08460957 +0x323:  test   %eax,%eax
08460959 +0x325:  je     08460d28 <+0x6f4>
0846095f +0x32b:  movl   $0x40,-0x3c(%ebp)
08460966 +0x332:  jmp    08460d02 <+0x6ce>
0846096b +0x337:  mov    -0xa9c(%ebp),%eax
08460971 +0x33d:  mov    %eax,(%esp)
08460974 +0x340:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08460979 +0x345:  add    $0x1,%eax
0846097c +0x348:  mov    %eax,%ebx
0846097e +0x34a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08460983 +0x34f:  mov    0x869c(%eax),%eax
08460989 +0x355:  mov    %ebx,0x4(%esp)
0846098d +0x359:  mov    %eax,(%esp)
08460990 +0x35c:  call   0834aaf4 <_ZN16CAICharacterList7getByAPEj>  ; CAICharacterList::getByAP(unsigned int)
08460995 +0x361:  mov    %eax,-0x28(%ebp)
08460998 +0x364:  cmpl   $0x0,-0x28(%ebp)
0846099c +0x368:  jne    084609a8 <+0x374>
0846099e +0x36a:  mov    $0x0,%ebx
084609a3 +0x36f:  jmp    0846147a <+0xe46>
084609a8 +0x374:  lea    -0x714(%ebp),%eax
084609ae +0x37a:  lea    -0xa80(%ebp),%edx
084609b4 +0x380:  mov    %edx,0x4(%esp)
084609b8 +0x384:  mov    %eax,(%esp)
084609bb +0x387:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
084609c0 +0x38c:  sub    $0x4,%esp
084609c3 +0x38f:  mov    -0x28(%ebp),%eax
084609c6 +0x392:  mov    %eax,(%esp)
084609c9 +0x395:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
084609ce +0x39a:  mov    %eax,-0x70c(%ebp)
084609d4 +0x3a0:  lea    -0x708(%ebp),%eax
084609da +0x3a6:  lea    -0xa80(%ebp),%edx
084609e0 +0x3ac:  mov    %edx,0x4(%esp)
084609e4 +0x3b0:  mov    %eax,(%esp)
084609e7 +0x3b3:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
084609ec +0x3b8:  sub    $0x4,%esp
084609ef +0x3bb:  lea    -0x704(%ebp),%eax
084609f5 +0x3c1:  lea    -0xa80(%ebp),%edx
084609fb +0x3c7:  mov    %edx,0x4(%esp)
084609ff +0x3cb:  mov    %eax,(%esp)
08460a02 +0x3ce:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
08460a07 +0x3d3:  sub    $0x4,%esp
08460a0a +0x3d6:  lea    -0x710(%ebp),%eax
08460a10 +0x3dc:  lea    -0x70c(%ebp),%edx
08460a16 +0x3e2:  mov    %edx,0xc(%esp)
08460a1a +0x3e6:  mov    -0x708(%ebp),%edx
08460a20 +0x3ec:  mov    %edx,0x8(%esp)
08460a24 +0x3f0:  mov    -0x704(%ebp),%edx
08460a2a +0x3f6:  mov    %edx,0x4(%esp)
08460a2e +0x3fa:  mov    %eax,(%esp)
08460a31 +0x3fd:  call   0815266b <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fa0>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fa0
08460a36 +0x402:  sub    $0x4,%esp
08460a39 +0x405:  lea    -0x714(%ebp),%eax
08460a3f +0x40b:  mov    %eax,0x4(%esp)
08460a43 +0x40f:  lea    -0x710(%ebp),%eax
08460a49 +0x415:  mov    %eax,(%esp)
08460a4c +0x418:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
08460a51 +0x41d:  test   %al,%al
08460a53 +0x41f:  je     08460b1f <+0x4eb>
08460a59 +0x425:  lea    -0x700(%ebp),%eax
08460a5f +0x42b:  lea    -0xa98(%ebp),%edx
08460a65 +0x431:  mov    %edx,0x4(%esp)
08460a69 +0x435:  mov    %eax,(%esp)
08460a6c +0x438:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
08460a71 +0x43d:  sub    $0x4,%esp
08460a74 +0x440:  lea    -0x700(%ebp),%eax
08460a7a +0x446:  mov    %eax,0x4(%esp)
08460a7e +0x44a:  lea    -0xae4(%ebp),%eax
08460a84 +0x450:  mov    %eax,(%esp)
08460a87 +0x453:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
08460a8c +0x458:  lea    -0x6fc(%ebp),%eax
08460a92 +0x45e:  lea    -0xa9c(%ebp),%edx
08460a98 +0x464:  mov    %edx,0x8(%esp)
08460a9c +0x468:  lea    -0xa98(%ebp),%edx
08460aa2 +0x46e:  mov    %edx,0x4(%esp)
08460aa6 +0x472:  mov    %eax,(%esp)
08460aa9 +0x475:  call   081527f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2125>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2125
08460aae +0x47a:  sub    $0x4,%esp
08460ab1 +0x47d:  lea    -0x6fc(%ebp),%eax
08460ab7 +0x483:  mov    %eax,0x4(%esp)
08460abb +0x487:  lea    -0xae8(%ebp),%eax
08460ac1 +0x48d:  mov    %eax,(%esp)
08460ac4 +0x490:  call   08151fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18fb
08460ac9 +0x495:  movl   $0x0,-0x24(%ebp)
08460ad0 +0x49c:  jmp    08460af4 <+0x4c0>
08460ad2 +0x49e:  lea    -0xae4(%ebp),%eax
08460ad8 +0x4a4:  mov    %eax,(%esp)
08460adb +0x4a7:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
08460ae0 +0x4ac:  mov    0x4(%eax),%eax
08460ae3 +0x4af:  add    %eax,-0x24(%ebp)
08460ae6 +0x4b2:  lea    -0xae4(%ebp),%eax
08460aec +0x4b8:  mov    %eax,(%esp)
08460aef +0x4bb:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
08460af4 +0x4c0:  lea    -0xae8(%ebp),%eax
08460afa +0x4c6:  mov    %eax,0x4(%esp)
08460afe +0x4ca:  lea    -0xae4(%ebp),%eax
08460b04 +0x4d0:  mov    %eax,(%esp)
08460b07 +0x4d3:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
08460b0c +0x4d8:  test   %al,%al
08460b0e +0x4da:  jne    08460ad2 <+0x49e>
08460b10 +0x4dc:  cmpl   $0x0,-0x24(%ebp)
08460b14 +0x4e0:  jne    08460d01 <+0x6cd>
08460b1a +0x4e6:  jmp    08460d28 <+0x6f4>
08460b1f +0x4eb:  mov    -0x28(%ebp),%eax
08460b22 +0x4ee:  mov    %eax,(%esp)
08460b25 +0x4f1:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
08460b2a +0x4f6:  mov    %eax,-0x6f8(%ebp)
08460b30 +0x4fc:  lea    -0x6f8(%ebp),%eax
08460b36 +0x502:  mov    %eax,0x4(%esp)
08460b3a +0x506:  lea    -0xa80(%ebp),%eax
08460b40 +0x50c:  mov    %eax,(%esp)
08460b43 +0x50f:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
08460b48 +0x514:  mov    -0x28(%ebp),%eax
08460b4b +0x517:  mov    %eax,(%esp)
08460b4e +0x51a:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
08460b53 +0x51f:  mov    %eax,-0x6f4(%ebp)
08460b59 +0x525:  lea    -0xae0(%ebp),%eax
08460b5f +0x52b:  lea    -0x6f4(%ebp),%edx
08460b65 +0x531:  mov    %edx,0x8(%esp)
08460b69 +0x535:  lea    -0xa98(%ebp),%edx
08460b6f +0x53b:  mov    %edx,0x4(%esp)
08460b73 +0x53f:  mov    %eax,(%esp)
08460b76 +0x542:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08460b7b +0x547:  sub    $0x4,%esp
08460b7e +0x54a:  lea    -0x6f0(%ebp),%eax
08460b84 +0x550:  lea    -0xa98(%ebp),%edx
08460b8a +0x556:  mov    %edx,0x4(%esp)
08460b8e +0x55a:  mov    %eax,(%esp)
08460b91 +0x55d:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08460b96 +0x562:  sub    $0x4,%esp
08460b99 +0x565:  lea    -0x6f0(%ebp),%eax
08460b9f +0x56b:  mov    %eax,0x4(%esp)
08460ba3 +0x56f:  lea    -0xae0(%ebp),%eax
08460ba9 +0x575:  mov    %eax,(%esp)
08460bac +0x578:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08460bb1 +0x57d:  test   %al,%al
08460bb3 +0x57f:  je     08460c06 <+0x5d2>
08460bb5 +0x581:  lea    -0xae0(%ebp),%eax
08460bbb +0x587:  mov    %eax,(%esp)
08460bbe +0x58a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08460bc3 +0x58f:  mov    %eax,%ebx
08460bc5 +0x591:  lea    -0xae0(%ebp),%eax
08460bcb +0x597:  mov    %eax,(%esp)
08460bce +0x59a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08460bd3 +0x59f:  mov    0x4(%eax),%eax
08460bd6 +0x5a2:  sub    $0x1,%eax
08460bd9 +0x5a5:  mov    %eax,-0x6ec(%ebp)
08460bdf +0x5ab:  movl   $0x0,-0x6e8(%ebp)
08460be9 +0x5b5:  lea    -0x6ec(%ebp),%eax
08460bef +0x5bb:  mov    %eax,0x4(%esp)
08460bf3 +0x5bf:  lea    -0x6e8(%ebp),%eax
08460bf9 +0x5c5:  mov    %eax,(%esp)
08460bfc +0x5c8:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08460c01 +0x5cd:  mov    (%eax),%eax
08460c03 +0x5cf:  mov    %eax,0x4(%ebx)
08460c06 +0x5d2:  mov    -0xa9c(%ebp),%ebx
08460c0c +0x5d8:  mov    -0x28(%ebp),%eax
08460c0f +0x5db:  mov    %eax,(%esp)
08460c12 +0x5de:  call   08150866 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x19b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x19b
08460c17 +0x5e3:  mov    %ebx,%edx
08460c19 +0x5e5:  sub    %eax,%edx
08460c1b +0x5e7:  mov    %edx,%eax
08460c1d +0x5e9:  mov    %eax,-0xa9c(%ebp)
08460c23 +0x5ef:  movl   $0x34c,0x8(%esp)
08460c2b +0x5f7:  movl   $0x0,0x4(%esp)
08460c33 +0x5ff:  lea    -0xf50(%ebp),%eax
08460c39 +0x605:  mov    %eax,(%esp)
08460c3c +0x608:  call   0807dcc0 <_init+0x5b8>
08460c41 +0x60d:  mov    -0x3c(%ebp),%eax
08460c44 +0x610:  mov    %eax,-0xf50(%ebp)
08460c4a +0x616:  mov    -0x28(%ebp),%eax
08460c4d +0x619:  mov    %eax,(%esp)
08460c50 +0x61c:  call   08150850 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x185>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x185
08460c55 +0x621:  mov    %eax,-0xf44(%ebp)
08460c5b +0x627:  mov    0x8(%ebp),%eax
08460c5e +0x62a:  mov    0x48(%eax),%eax
08460c61 +0x62d:  mov    %eax,-0xf4c(%ebp)
08460c67 +0x633:  lea    0x1(%eax),%edx
08460c6a +0x636:  mov    0x8(%ebp),%eax
08460c6d +0x639:  mov    %edx,0x48(%eax)
08460c70 +0x63c:  movb   $0x5,-0xf48(%ebp)
08460c77 +0x643:  mov    -0x28(%ebp),%eax
08460c7a +0x646:  mov    %eax,(%esp)
08460c7d +0x649:  call   0815085a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18f
08460c82 +0x64e:  mov    %al,-0xf40(%ebp)
08460c88 +0x654:  movl   $0x64,-0xf24(%ebp)
08460c92 +0x65e:  movb   $0x0,-0xf3f(%ebp)
08460c99 +0x665:  movb   $0x0,-0xf3e(%ebp)
08460ca0 +0x66c:  lea    -0xf50(%ebp),%eax
08460ca6 +0x672:  mov    %eax,0x4(%esp)
08460caa +0x676:  lea    -0x6e4(%ebp),%eax
08460cb0 +0x67c:  mov    %eax,(%esp)
08460cb3 +0x67f:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
08460cb8 +0x684:  mov    0x8(%ebp),%eax
08460cbb +0x687:  lea    0xc(%eax),%edx
08460cbe +0x68a:  lea    -0x6e4(%ebp),%eax
08460cc4 +0x690:  mov    %eax,0x4(%esp)
08460cc8 +0x694:  mov    %edx,(%esp)
08460ccb +0x697:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
08460cd0 +0x69c:  jmp    08460ced <+0x6b9>
08460cd2 +0x69e:  mov    %edx,%ebx
08460cd4 +0x6a0:  mov    %eax,%esi
08460cd6 +0x6a2:  lea    -0x6e4(%ebp),%eax
08460cdc +0x6a8:  mov    %eax,(%esp)
08460cdf +0x6ab:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08460ce4 +0x6b0:  mov    %esi,%eax
08460ce6 +0x6b2:  mov    %ebx,%edx
08460ce8 +0x6b4:  jmp    08461462 <+0xe2e>
08460ced +0x6b9:  lea    -0x6e4(%ebp),%eax
08460cf3 +0x6bf:  mov    %eax,(%esp)
08460cf6 +0x6c2:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08460cfb +0x6c7:  addl   $0x1,-0x3c(%ebp)
08460cff +0x6cb:  jmp    08460d02 <+0x6ce>
08460d01 +0x6cd:  nop
08460d02 +0x6ce:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08460d07 +0x6d3:  mov    0x869c(%eax),%eax
08460d0d +0x6d9:  mov    %eax,(%esp)
08460d10 +0x6dc:  call   08150872 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1a7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1a7
08460d15 +0x6e1:  mov    -0xa9c(%ebp),%edx
08460d1b +0x6e7:  cmp    %edx,%eax
08460d1d +0x6e9:  setle  %al
08460d20 +0x6ec:  test   %al,%al
08460d22 +0x6ee:  jne    0846096b <+0x337>
08460d28 +0x6f4:  movl   $0x0,-0x3c(%ebp)
08460d2f +0x6fb:  lea    -0xaa8(%ebp),%eax
08460d35 +0x701:  mov    %eax,(%esp)
08460d38 +0x704:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08460d3d +0x709:  lea    -0xab0(%ebp),%eax
08460d43 +0x70f:  mov    0x10(%ebp),%edx
08460d46 +0x712:  mov    %edx,0x4(%esp)
08460d4a +0x716:  mov    %eax,(%esp)
08460d4d +0x719:  call   08134796 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x39d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x39d
08460d52 +0x71e:  sub    $0x4,%esp
08460d55 +0x721:  lea    -0x398(%ebp),%eax
08460d5b +0x727:  lea    -0xab0(%ebp),%edx
08460d61 +0x72d:  mov    %edx,0x4(%esp)
08460d65 +0x731:  mov    %eax,(%esp)
08460d68 +0x734:  call   0815281c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2151>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2151
08460d6d +0x739:  sub    $0x4,%esp
08460d70 +0x73c:  lea    -0x398(%ebp),%eax
08460d76 +0x742:  mov    %eax,0x4(%esp)
08460d7a +0x746:  lea    -0xab4(%ebp),%eax
08460d80 +0x74c:  mov    %eax,(%esp)
08460d83 +0x74f:  call   08152842 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2177>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2177
08460d88 +0x754:  jmp    08460f81 <+0x94d>
08460d8d +0x759:  lea    -0xab4(%ebp),%eax
08460d93 +0x75f:  mov    %eax,(%esp)
08460d96 +0x762:  call   08139874 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x547b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x547b
08460d9b +0x767:  mov    %eax,-0x20(%ebp)
08460d9e +0x76a:  movl   $0x34c,0x8(%esp)
08460da6 +0x772:  movl   $0x0,0x4(%esp)
08460dae +0x77a:  lea    -0xf50(%ebp),%eax
08460db4 +0x780:  mov    %eax,(%esp)
08460db7 +0x783:  call   0807dcc0 <_init+0x5b8>
08460dbc +0x788:  mov    -0x3c(%ebp),%eax
08460dbf +0x78b:  mov    %eax,-0xf50(%ebp)
08460dc5 +0x791:  mov    -0x20(%ebp),%eax
08460dc8 +0x794:  movzbl 0x4(%eax),%eax
08460dcc +0x798:  test   %al,%al
08460dce +0x79a:  je     08460e24 <+0x7f0>
08460dd0 +0x79c:  mov    0xc(%ebp),%eax
08460dd3 +0x79f:  mov    %eax,(%esp)
08460dd6 +0x7a2:  call   08469ac0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1a3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1a3
08460ddb +0x7a7:  mov    %eax,%edx
08460ddd +0x7a9:  mov    -0x20(%ebp),%eax
08460de0 +0x7ac:  mov    0x8(%eax),%eax
08460de3 +0x7af:  lea    (%edx,%eax,1),%eax
08460de6 +0x7b2:  mov    %al,-0xf40(%ebp)
08460dec +0x7b8:  movzbl -0xf40(%ebp),%eax
08460df3 +0x7bf:  cmp    $0xc7,%al
08460df5 +0x7c1:  ja     08460e05 <+0x7d1>
08460df7 +0x7c3:  movzbl -0xf40(%ebp),%eax
08460dfe +0x7ca:  movzbl %al,%eax
08460e01 +0x7cd:  test   %eax,%eax
08460e03 +0x7cf:  jle    08460e17 <+0x7e3>
08460e05 +0x7d1:  movzbl -0xf40(%ebp),%eax
08460e0c +0x7d8:  cmp    $0xc8,%al
08460e0e +0x7da:  jbe    08460e1c <+0x7e8>
08460e10 +0x7dc:  mov    $0xffffffc8,%eax
08460e15 +0x7e1:  jmp    08460e1c <+0x7e8>
08460e17 +0x7e3:  mov    $0x1,%eax
08460e1c +0x7e8:  mov    %al,-0xf40(%ebp)
08460e22 +0x7ee:  jmp    08460e30 <+0x7fc>
08460e24 +0x7f0:  mov    -0x20(%ebp),%eax
08460e27 +0x7f3:  mov    0x8(%eax),%eax
08460e2a +0x7f6:  mov    %al,-0xf40(%ebp)
08460e30 +0x7fc:  mov    -0x20(%ebp),%eax
08460e33 +0x7ff:  mov    (%eax),%eax
08460e35 +0x801:  cmp    $0xffffffff,%eax
08460e38 +0x804:  jne    08460e60 <+0x82c>
08460e3a +0x806:  movzbl -0xf40(%ebp),%eax
08460e41 +0x80d:  movzbl %al,%ebx
08460e44 +0x810:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08460e49 +0x815:  mov    0x8(%eax),%eax
08460e4c +0x818:  mov    %ebx,0x4(%esp)
08460e50 +0x81c:  mov    %eax,(%esp)
08460e53 +0x81f:  call   0834ff20 <_ZN15CMonsterManager19get_levelrandom_mobEi>  ; CMonsterManager::get_levelrandom_mob(int)
08460e58 +0x824:  mov    %eax,-0xf44(%ebp)
08460e5e +0x82a:  jmp    08460e6b <+0x837>
08460e60 +0x82c:  mov    -0x20(%ebp),%eax
08460e63 +0x82f:  mov    (%eax),%eax
08460e65 +0x831:  mov    %eax,-0xf44(%ebp)
08460e6b +0x837:  mov    -0x20(%ebp),%eax
08460e6e +0x83a:  mov    0x10(%eax),%eax
08460e71 +0x83d:  mov    %al,-0xf3f(%ebp)
08460e77 +0x843:  mov    -0x20(%ebp),%eax
08460e7a +0x846:  mov    0x14(%eax),%eax
08460e7d +0x849:  mov    %al,-0xf3e(%ebp)
08460e83 +0x84f:  mov    -0x20(%ebp),%eax
08460e86 +0x852:  mov    0x18(%eax),%eax
08460e89 +0x855:  mov    %al,-0xf48(%ebp)
08460e8f +0x85b:  mov    0x8(%ebp),%eax
08460e92 +0x85e:  mov    0x48(%eax),%eax
08460e95 +0x861:  mov    %eax,-0xf4c(%ebp)
08460e9b +0x867:  lea    0x1(%eax),%edx
08460e9e +0x86a:  mov    0x8(%ebp),%eax
08460ea1 +0x86d:  mov    %edx,0x48(%eax)
08460ea4 +0x870:  movzbl -0xf48(%ebp),%eax
08460eab +0x877:  test   %al,%al
08460ead +0x879:  jne    08460ecb <+0x897>
08460eaf +0x87b:  lea    -0xf50(%ebp),%eax
08460eb5 +0x881:  mov    %eax,(%esp)
08460eb8 +0x884:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
08460ebd +0x889:  xor    $0x1,%eax
08460ec0 +0x88c:  test   %al,%al
08460ec2 +0x88e:  je     08460ecb <+0x897>
08460ec4 +0x890:  mov    $0x1,%eax
08460ec9 +0x895:  jmp    08460ed0 <+0x89c>
08460ecb +0x897:  mov    $0x0,%eax
08460ed0 +0x89c:  test   %al,%al
08460ed2 +0x89e:  je     08460eef <+0x8bb>
08460ed4 +0x8a0:  lea    -0xf50(%ebp),%eax
08460eda +0x8a6:  add    $0x4,%eax
08460edd +0x8a9:  mov    %eax,0x4(%esp)
08460ee1 +0x8ad:  lea    -0xaa8(%ebp),%eax
08460ee7 +0x8b3:  mov    %eax,(%esp)
08460eea +0x8b6:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08460eef +0x8bb:  mov    -0x20(%ebp),%eax
08460ef2 +0x8be:  movzbl 0x1c(%eax),%eax
08460ef6 +0x8c2:  mov    %al,-0xf3d(%ebp)
08460efc +0x8c8:  mov    -0x20(%ebp),%eax
08460eff +0x8cb:  mov    0x20(%eax),%eax
08460f02 +0x8ce:  mov    %al,-0xf3c(%ebp)
08460f08 +0x8d4:  mov    -0x20(%ebp),%eax
08460f0b +0x8d7:  mov    0x28(%eax),%eax
08460f0e +0x8da:  mov    %eax,-0xf24(%ebp)
08460f14 +0x8e0:  lea    -0xf50(%ebp),%eax
08460f1a +0x8e6:  mov    %eax,0x4(%esp)
08460f1e +0x8ea:  lea    -0x38c(%ebp),%eax
08460f24 +0x8f0:  mov    %eax,(%esp)
08460f27 +0x8f3:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
08460f2c +0x8f8:  mov    0x8(%ebp),%eax
08460f2f +0x8fb:  lea    0xc(%eax),%edx
08460f32 +0x8fe:  lea    -0x38c(%ebp),%eax
08460f38 +0x904:  mov    %eax,0x4(%esp)
08460f3c +0x908:  mov    %edx,(%esp)
08460f3f +0x90b:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
08460f44 +0x910:  jmp    08460f61 <+0x92d>
08460f46 +0x912:  mov    %edx,%ebx
08460f48 +0x914:  mov    %eax,%esi
08460f4a +0x916:  lea    -0x38c(%ebp),%eax
08460f50 +0x91c:  mov    %eax,(%esp)
08460f53 +0x91f:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08460f58 +0x924:  mov    %esi,%eax
08460f5a +0x926:  mov    %ebx,%edx
08460f5c +0x928:  jmp    08461412 <+0xdde>
08460f61 +0x92d:  lea    -0x38c(%ebp),%eax
08460f67 +0x933:  mov    %eax,(%esp)
08460f6a +0x936:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08460f6f +0x93b:  lea    -0xab4(%ebp),%eax
08460f75 +0x941:  mov    %eax,(%esp)
08460f78 +0x944:  call   08139860 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5467>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5467
08460f7d +0x949:  addl   $0x1,-0x3c(%ebp)
08460f81 +0x94d:  lea    -0x390(%ebp),%eax
08460f87 +0x953:  lea    -0xab0(%ebp),%edx
08460f8d +0x959:  mov    %edx,0x4(%esp)
08460f91 +0x95d:  mov    %eax,(%esp)
08460f94 +0x960:  call   0813ba0c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7613>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7613
08460f99 +0x965:  sub    $0x4,%esp
08460f9c +0x968:  lea    -0x390(%ebp),%eax
08460fa2 +0x96e:  mov    %eax,0x4(%esp)
08460fa6 +0x972:  lea    -0x394(%ebp),%eax
08460fac +0x978:  mov    %eax,(%esp)
08460faf +0x97b:  call   08152842 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2177>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2177
08460fb4 +0x980:  lea    -0x394(%ebp),%eax
08460fba +0x986:  mov    %eax,0x4(%esp)
08460fbe +0x98a:  lea    -0xab4(%ebp),%eax
08460fc4 +0x990:  mov    %eax,(%esp)
08460fc7 +0x993:  call   08135dd2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x19d9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x19d9
08460fcc +0x998:  test   %al,%al
08460fce +0x99a:  jne    08460d8d <+0x759>
08460fd4 +0x9a0:  lea    -0xac4(%ebp),%eax
08460fda +0x9a6:  mov    %eax,(%esp)
08460fdd +0x9a9:  call   0815088e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c3
08460fe2 +0x9ae:  mov    0xc(%ebp),%eax
08460fe5 +0x9b1:  mov    %eax,(%esp)
08460fe8 +0x9b4:  call   08469aec <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1cf>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1cf
08460fed +0x9b9:  mov    %eax,-0x34(%ebp)
08460ff0 +0x9bc:  lea    -0xb68(%ebp),%eax
08460ff6 +0x9c2:  mov    %eax,(%esp)
08460ff9 +0x9c5:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
08460ffe +0x9ca:  lea    -0xbb0(%ebp),%eax
08461004 +0x9d0:  mov    %eax,(%esp)
08461007 +0x9d3:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
0846100c +0x9d8:  mov    0xc(%ebp),%eax
0846100f +0x9db:  mov    %eax,(%esp)
08461012 +0x9de:  call   08469ad6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1b9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1b9
08461017 +0x9e3:  mov    %eax,-0xb7c(%ebp)
0846101d +0x9e9:  lea    -0xacc(%ebp),%eax
08461023 +0x9ef:  mov    0x10(%ebp),%edx
08461026 +0x9f2:  mov    %edx,0x4(%esp)
0846102a +0x9f6:  mov    %eax,(%esp)
0846102d +0x9f9:  call   081508c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fb
08461032 +0x9fe:  sub    $0x4,%esp
08461035 +0xa01:  lea    -0xad0(%ebp),%eax
0846103b +0xa07:  lea    -0xacc(%ebp),%edx
08461041 +0xa0d:  mov    %edx,0x4(%esp)
08461045 +0xa11:  mov    %eax,(%esp)
08461048 +0xa14:  call   08152852 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2187>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2187
0846104d +0xa19:  sub    $0x4,%esp
08461050 +0xa1c:  jmp    08461340 <+0xd0c>
08461055 +0xa21:  lea    -0xad0(%ebp),%eax
0846105b +0xa27:  mov    %eax,(%esp)
0846105e +0xa2a:  call   081528b0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21e5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21e5
08461063 +0xa2f:  mov    (%eax),%edx
08461065 +0xa31:  mov    %edx,-0xac4(%ebp)
0846106b +0xa37:  mov    0x4(%eax),%edx
0846106e +0xa3a:  mov    %edx,-0xac0(%ebp)
08461074 +0xa40:  mov    0x8(%eax),%edx
08461077 +0xa43:  mov    %edx,-0xabc(%ebp)
0846107d +0xa49:  mov    0xc(%eax),%eax
08461080 +0xa4c:  mov    %eax,-0xab8(%ebp)
08461086 +0xa52:  mov    -0xac4(%ebp),%eax
0846108c +0xa58:  mov    %eax,0x4(%esp)
08461090 +0xa5c:  mov    -0x34(%ebp),%eax
08461093 +0xa5f:  mov    %eax,(%esp)
08461096 +0xa62:  call   081528be <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21f3
0846109b +0xa67:  mov    %eax,-0x1c(%ebp)
0846109e +0xa6a:  mov    -0x1c(%ebp),%eax
084610a1 +0xa6d:  mov    (%eax),%eax
084610a3 +0xa6f:  cmp    $0xffffffff,%eax
084610a6 +0xa72:  je     084610b5 <+0xa81>
084610a8 +0xa74:  mov    -0x1c(%ebp),%eax
084610ab +0xa77:  mov    (%eax),%eax
084610ad +0xa79:  mov    %al,-0xb30(%ebp)
084610b3 +0xa7f:  jmp    084610fb <+0xac7>
084610b5 +0xa81:  mov    0xc(%ebp),%eax
084610b8 +0xa84:  mov    %eax,(%esp)
084610bb +0xa87:  call   08469ac0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1a3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1a3
084610c0 +0xa8c:  test   %eax,%eax
084610c2 +0xa8e:  jle    084610d6 <+0xaa2>
084610c4 +0xa90:  mov    0xc(%ebp),%eax
084610c7 +0xa93:  mov    %eax,(%esp)
084610ca +0xa96:  call   08469ac0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1a3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1a3
084610cf +0xa9b:  cmp    $0xc8,%eax
084610d4 +0xaa0:  jle    084610dd <+0xaa9>
084610d6 +0xaa2:  mov    $0x1,%eax
084610db +0xaa7:  jmp    084610e2 <+0xaae>
084610dd +0xaa9:  mov    $0x0,%eax
084610e2 +0xaae:  test   %al,%al
084610e4 +0xab0:  jne    0846133f <+0xd0b>
084610ea +0xab6:  mov    0xc(%ebp),%eax
084610ed +0xab9:  mov    %eax,(%esp)
084610f0 +0xabc:  call   08469ac0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1a3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1a3
084610f5 +0xac1:  mov    %al,-0xb30(%ebp)
084610fb +0xac7:  lea    -0xb20(%ebp),%eax
08461101 +0xacd:  mov    %eax,(%esp)
08461104 +0xad0:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
08461109 +0xad5:  mov    -0xac0(%ebp),%eax
0846110f +0xadb:  mov    %al,-0xb2f(%ebp)
08461115 +0xae1:  mov    -0x1c(%ebp),%eax
08461118 +0xae4:  add    $0x4,%eax
0846111b +0xae7:  mov    %eax,-0xb34(%ebp)
08461121 +0xaed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08461126 +0xaf2:  mov    %eax,(%esp)
08461129 +0xaf5:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0846112e +0xafa:  movl   $0x1,0x4(%esp)
08461136 +0xb02:  mov    %eax,(%esp)
08461139 +0xb05:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0846113e +0xb0a:  mov    (%eax),%edx
08461140 +0xb0c:  add    $0xc,%edx
08461143 +0xb0f:  mov    (%edx),%ecx
08461145 +0xb11:  lea    -0xb20(%ebp),%edx
0846114b +0xb17:  mov    %edx,0x8(%esp)
0846114f +0xb1b:  lea    -0xb68(%ebp),%edx
08461155 +0xb21:  mov    %edx,0x4(%esp)
08461159 +0xb25:  mov    %eax,(%esp)
0846115c +0xb28:  call   *%ecx
0846115e +0xb2a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08461163 +0xb2f:  mov    %eax,(%esp)
08461166 +0xb32:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0846116b +0xb37:  movl   $0x4,0x4(%esp)
08461173 +0xb3f:  mov    %eax,(%esp)
08461176 +0xb42:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
0846117b +0xb47:  mov    (%eax),%edx
0846117d +0xb49:  add    $0xc,%edx
08461180 +0xb4c:  mov    (%edx),%ecx
08461182 +0xb4e:  lea    -0xb20(%ebp),%edx
08461188 +0xb54:  mov    %edx,0x8(%esp)
0846118c +0xb58:  lea    -0xbb0(%ebp),%edx
08461192 +0xb5e:  mov    %edx,0x4(%esp)
08461196 +0xb62:  mov    %eax,(%esp)
08461199 +0xb65:  call   *%ecx
0846119b +0xb67:  lea    -0xaec(%ebp),%eax
084611a1 +0xb6d:  lea    -0xb20(%ebp),%edx
084611a7 +0xb73:  mov    %edx,0x4(%esp)
084611ab +0xb77:  mov    %eax,(%esp)
084611ae +0xb7a:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
084611b3 +0xb7f:  sub    $0x4,%esp
084611b6 +0xb82:  lea    -0xaf0(%ebp),%eax
084611bc +0xb88:  lea    -0xb20(%ebp),%edx
084611c2 +0xb8e:  mov    %edx,0x4(%esp)
084611c6 +0xb92:  mov    %eax,(%esp)
084611c9 +0xb95:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
084611ce +0xb9a:  sub    $0x4,%esp
084611d1 +0xb9d:  jmp    084612e9 <+0xcb5>
084611d6 +0xba2:  lea    -0xc04(%ebp),%eax
084611dc +0xba8:  mov    %eax,(%esp)
084611df +0xbab:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
084611e4 +0xbb0:  movb   $0x1,-0xc04(%ebp)
084611eb +0xbb7:  mov    0x8(%ebp),%eax
084611ee +0xbba:  mov    0x4c(%eax),%eax
084611f1 +0xbbd:  mov    %eax,-0xc00(%ebp)
084611f7 +0xbc3:  lea    0x1(%eax),%edx
084611fa +0xbc6:  mov    0x8(%ebp),%eax
084611fd +0xbc9:  mov    %edx,0x4c(%eax)
08461200 +0xbcc:  mov    -0xab8(%ebp),%eax
08461206 +0xbd2:  mov    %al,-0xc03(%ebp)
0846120c +0xbd8:  lea    -0xaec(%ebp),%eax
08461212 +0xbde:  mov    %eax,(%esp)
08461215 +0xbe1:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
0846121a +0xbe6:  mov    (%eax),%edx
0846121c +0xbe8:  mov    %edx,-0xbf4(%ebp)
08461222 +0xbee:  mov    0x4(%eax),%edx
08461225 +0xbf1:  mov    %edx,-0xbf0(%ebp)
0846122b +0xbf7:  mov    0x8(%eax),%edx
0846122e +0xbfa:  mov    %edx,-0xbec(%ebp)
08461234 +0xc00:  mov    0xc(%eax),%edx
08461237 +0xc03:  mov    %edx,-0xbe8(%ebp)
0846123d +0xc09:  mov    0x10(%eax),%edx
08461240 +0xc0c:  mov    %edx,-0xbe4(%ebp)
08461246 +0xc12:  mov    0x14(%eax),%edx
08461249 +0xc15:  mov    %edx,-0xbe0(%ebp)
0846124f +0xc1b:  mov    0x18(%eax),%edx
08461252 +0xc1e:  mov    %edx,-0xbdc(%ebp)
08461258 +0xc24:  mov    0x1c(%eax),%edx
0846125b +0xc27:  mov    %edx,-0xbd8(%ebp)
08461261 +0xc2d:  mov    0x20(%eax),%edx
08461264 +0xc30:  mov    %edx,-0xbd4(%ebp)
0846126a +0xc36:  mov    0x24(%eax),%edx
0846126d +0xc39:  mov    %edx,-0xbd0(%ebp)
08461273 +0xc3f:  mov    0x28(%eax),%edx
08461276 +0xc42:  mov    %edx,-0xbcc(%ebp)
0846127c +0xc48:  mov    0x2c(%eax),%edx
0846127f +0xc4b:  mov    %edx,-0xbc8(%ebp)
08461285 +0xc51:  mov    0x30(%eax),%edx
08461288 +0xc54:  mov    %edx,-0xbc4(%ebp)
0846128e +0xc5a:  mov    0x34(%eax),%edx
08461291 +0xc5d:  mov    %edx,-0xbc0(%ebp)
08461297 +0xc63:  mov    0x38(%eax),%edx
0846129a +0xc66:  mov    %edx,-0xbbc(%ebp)
084612a0 +0xc6c:  movzbl 0x3c(%eax),%eax
084612a4 +0xc70:  mov    %al,-0xbb8(%ebp)
084612aa +0xc76:  mov    0x8(%ebp),%eax
084612ad +0xc79:  add    $0xc,%eax
084612b0 +0xc7c:  mov    %eax,-0xf5c(%ebp)
084612b6 +0xc82:  lea    0x4(%esp),%edx
084612ba +0xc86:  lea    -0xc04(%ebp),%ebx
084612c0 +0xc8c:  mov    $0x15,%eax
084612c5 +0xc91:  mov    %edx,%edi
084612c7 +0xc93:  mov    %ebx,%esi
084612c9 +0xc95:  mov    %eax,%ecx
084612cb +0xc97:  rep movsl %ds:(%esi),%es:(%edi)
084612cd +0xc99:  mov    -0xf5c(%ebp),%eax
084612d3 +0xc9f:  mov    %eax,(%esp)
084612d6 +0xca2:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
084612db +0xca7:  lea    -0xaec(%ebp),%eax
084612e1 +0xcad:  mov    %eax,(%esp)
084612e4 +0xcb0:  call   0815293c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2271>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2271
084612e9 +0xcb5:  lea    -0xaf0(%ebp),%eax
084612ef +0xcbb:  mov    %eax,0x4(%esp)
084612f3 +0xcbf:  lea    -0xaec(%ebp),%eax
084612f9 +0xcc5:  mov    %eax,(%esp)
084612fc +0xcc8:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
08461301 +0xccd:  test   %al,%al
08461303 +0xccf:  jne    084611d6 <+0xba2>
08461309 +0xcd5:  lea    -0xad0(%ebp),%eax
0846130f +0xcdb:  mov    %eax,(%esp)
08461312 +0xcde:  call   08152952 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2287>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2287
08461317 +0xce3:  lea    -0xb20(%ebp),%eax
0846131d +0xce9:  mov    %eax,(%esp)
08461320 +0xcec:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08461325 +0xcf1:  jmp    08461340 <+0xd0c>
08461327 +0xcf3:  mov    %edx,%ebx
08461329 +0xcf5:  mov    %eax,%esi
0846132b +0xcf7:  lea    -0xb20(%ebp),%eax
08461331 +0xcfd:  mov    %eax,(%esp)
08461334 +0xd00:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08461339 +0xd05:  mov    %esi,%eax
0846133b +0xd07:  mov    %ebx,%edx
0846133d +0xd09:  jmp    084613aa <+0xd76>
0846133f +0xd0b:  nop
08461340 +0xd0c:  lea    -0x40(%ebp),%eax
08461343 +0xd0f:  lea    -0xacc(%ebp),%edx
08461349 +0xd15:  mov    %edx,0x4(%esp)
0846134d +0xd19:  mov    %eax,(%esp)
08461350 +0xd1c:  call   08152878 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21ad>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21ad
08461355 +0xd21:  sub    $0x4,%esp
08461358 +0xd24:  lea    -0x40(%ebp),%eax
0846135b +0xd27:  mov    %eax,0x4(%esp)
0846135f +0xd2b:  lea    -0xad0(%ebp),%eax
08461365 +0xd31:  mov    %eax,(%esp)
08461368 +0xd34:  call   0815289c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x21d1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x21d1
0846136d +0xd39:  test   %al,%al
0846136f +0xd3b:  je     08461388 <+0xd54>
08461371 +0xd3d:  mov    0x14(%ebp),%eax
08461374 +0xd40:  mov    (%eax),%eax
08461376 +0xd42:  mov    0xcd8(%eax),%eax
0846137c +0xd48:  cmp    $0x1,%eax
0846137f +0xd4b:  je     08461388 <+0xd54>
08461381 +0xd4d:  mov    $0x1,%eax
08461386 +0xd52:  jmp    0846138d <+0xd59>
08461388 +0xd54:  mov    $0x0,%eax
0846138d +0xd59:  test   %al,%al
0846138f +0xd5b:  jne    08461055 <+0xa21>
08461395 +0xd61:  mov    $0x1,%ebx
0846139a +0xd66:  lea    -0xacc(%ebp),%eax
084613a0 +0xd6c:  mov    %eax,(%esp)
084613a3 +0xd6f:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
084613a8 +0xd74:  jmp    084613da <+0xda6>
084613aa +0xd76:  mov    %edx,%ebx
084613ac +0xd78:  mov    %eax,%esi
084613ae +0xd7a:  lea    -0xacc(%ebp),%eax
084613b4 +0xd80:  mov    %eax,(%esp)
084613b7 +0xd83:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
084613bc +0xd88:  mov    %esi,%eax
084613be +0xd8a:  mov    %ebx,%edx
084613c0 +0xd8c:  jmp    084613c2 <+0xd8e>
084613c2 +0xd8e:  mov    %edx,%ebx
084613c4 +0xd90:  mov    %eax,%esi
084613c6 +0xd92:  lea    -0xbb0(%ebp),%eax
084613cc +0xd98:  mov    %eax,(%esp)
084613cf +0xd9b:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
084613d4 +0xda0:  mov    %esi,%eax
084613d6 +0xda2:  mov    %ebx,%edx
084613d8 +0xda4:  jmp    084613ea <+0xdb6>
084613da +0xda6:  lea    -0xbb0(%ebp),%eax
084613e0 +0xdac:  mov    %eax,(%esp)
084613e3 +0xdaf:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
084613e8 +0xdb4:  jmp    08461402 <+0xdce>
084613ea +0xdb6:  mov    %edx,%ebx
084613ec +0xdb8:  mov    %eax,%esi
084613ee +0xdba:  lea    -0xb68(%ebp),%eax
084613f4 +0xdc0:  mov    %eax,(%esp)
084613f7 +0xdc3:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
084613fc +0xdc8:  mov    %esi,%eax
084613fe +0xdca:  mov    %ebx,%edx
08461400 +0xdcc:  jmp    08461412 <+0xdde>
08461402 +0xdce:  lea    -0xb68(%ebp),%eax
08461408 +0xdd4:  mov    %eax,(%esp)
0846140b +0xdd7:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08461410 +0xddc:  jmp    0846142a <+0xdf6>
08461412 +0xdde:  mov    %edx,%ebx
08461414 +0xde0:  mov    %eax,%esi
08461416 +0xde2:  lea    -0xab0(%ebp),%eax
0846141c +0xde8:  mov    %eax,(%esp)
0846141f +0xdeb:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
08461424 +0xdf0:  mov    %esi,%eax
08461426 +0xdf2:  mov    %ebx,%edx
08461428 +0xdf4:  jmp    0846143a <+0xe06>
0846142a +0xdf6:  lea    -0xab0(%ebp),%eax
08461430 +0xdfc:  mov    %eax,(%esp)
08461433 +0xdff:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
08461438 +0xe04:  jmp    08461452 <+0xe1e>
0846143a +0xe06:  mov    %edx,%ebx
0846143c +0xe08:  mov    %eax,%esi
0846143e +0xe0a:  lea    -0xaa8(%ebp),%eax
08461444 +0xe10:  mov    %eax,(%esp)
08461447 +0xe13:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0846144c +0xe18:  mov    %esi,%eax
0846144e +0xe1a:  mov    %ebx,%edx
08461450 +0xe1c:  jmp    08461462 <+0xe2e>
08461452 +0xe1e:  lea    -0xaa8(%ebp),%eax
08461458 +0xe24:  mov    %eax,(%esp)
0846145b +0xe27:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08461460 +0xe2c:  jmp    0846147a <+0xe46>
08461462 +0xe2e:  mov    %edx,%ebx
08461464 +0xe30:  mov    %eax,%esi
08461466 +0xe32:  lea    -0xf50(%ebp),%eax
0846146c +0xe38:  mov    %eax,(%esp)
0846146f +0xe3b:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08461474 +0xe40:  mov    %esi,%eax
08461476 +0xe42:  mov    %ebx,%edx
08461478 +0xe44:  jmp    0846148a <+0xe56>
0846147a +0xe46:  lea    -0xf50(%ebp),%eax
08461480 +0xe4c:  mov    %eax,(%esp)
08461483 +0xe4f:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08461488 +0xe54:  jmp    084614a2 <+0xe6e>
0846148a +0xe56:  mov    %edx,%ebx
0846148c +0xe58:  mov    %eax,%esi
0846148e +0xe5a:  lea    -0xa98(%ebp),%eax
08461494 +0xe60:  mov    %eax,(%esp)
08461497 +0xe63:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0846149c +0xe68:  mov    %esi,%eax
0846149e +0xe6a:  mov    %ebx,%edx
084614a0 +0xe6c:  jmp    084614b2 <+0xe7e>
084614a2 +0xe6e:  lea    -0xa98(%ebp),%eax
084614a8 +0xe74:  mov    %eax,(%esp)
084614ab +0xe77:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084614b0 +0xe7c:  jmp    084614d0 <+0xe9c>
084614b2 +0xe7e:  mov    %edx,%ebx
084614b4 +0xe80:  mov    %eax,%esi
084614b6 +0xe82:  lea    -0xa80(%ebp),%eax
084614bc +0xe88:  mov    %eax,(%esp)
084614bf +0xe8b:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
084614c4 +0xe90:  mov    %esi,%eax
084614c6 +0xe92:  mov    %ebx,%edx
084614c8 +0xe94:  mov    %eax,(%esp)
084614cb +0xe97:  call   08ae3750 <_Unwind_Resume>
084614d0 +0xe9c:  lea    -0xa80(%ebp),%eax
084614d6 +0xea2:  mov    %eax,(%esp)
084614d9 +0xea5:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
084614de +0xeaa:  mov    %ebx,%eax
084614e0 +0xeac:  lea    -0xc(%ebp),%esp
084614e3 +0xeaf:  add    $0x0,%esp
084614e6 +0xeb2:  pop    %ebx
084614e7 +0xeb3:  pop    %esi
084614e8 +0xeb4:  pop    %edi
084614e9 +0xeb5:  pop    %ebp
084614ea +0xeb6:  ret
084614eb +0xeb7:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::consistMap @ 0x8460634

/* WARNING: Type propagation algorithm not settling */
/* WongWork::CDeathTower::CStage::consistMap(WongWork::CDeathTower::CDungeonMgr const&, CMap const*,
   WongWork::CDeathTower*) */

undefined4 __thiscall
WongWork::CDeathTower::CStage::consistMap
          (CStage *this,CDungeonMgr *param_1,CMap *param_2,CDeathTower *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  map *pmVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int local_fd4 [2];
  int aiStack_fc0 [27];
  int local_f54;
  int local_f50;
  char local_f4c;
  uint local_f48;
  byte local_f44;
  undefined1 local_f43;
  undefined1 local_f42;
  undefined1 local_f41;
  undefined1 local_f40;
  uint local_f28;
  undefined4 local_c08;
  int local_c04;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4 [52];
  undefined4 local_b80;
  undefined1 local_b6c [52];
  int *local_b38;
  undefined1 local_b34;
  undefined1 local_b33;
  undefined1 local_b24 [48];
  undefined1 local_af4 [4];
  undefined1 local_af0 [4];
  undefined1 local_aec [4];
  undefined1 local_ae8 [4];
  undefined1 local_ae4 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_ae0 [4];
  __normal_iterator local_adc [4];
  __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
  local_ad8 [4];
  undefined1 local_ad4 [4];
  undefined1 local_ad0 [8];
  int local_ac8;
  int local_ac4;
  int local_ac0;
  int local_abc;
  undefined1 local_ab8 [4];
  undefined1 local_ab4 [8];
  undefined1 local_aac [12];
  int local_aa0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a9c [24];
  vector<unsigned_int,std::allocator<unsigned_int>> local_a84 [12];
  uint local_a78;
  undefined4 local_a74;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a70 [4];
  int local_a6c [2];
  map_monster local_a64 [844];
  undefined1 local_718 [4];
  undefined1 local_714 [4];
  undefined4 local_710;
  int local_70c;
  undefined4 local_708;
  undefined1 local_704 [4];
  undefined1 local_700 [4];
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4 [4];
  int local_6f0 [2];
  undefined1 local_6e8 [844];
  undefined1 local_39c [4];
  undefined1 local_398 [4];
  undefined1 local_394 [4];
  undefined1 local_390 [844];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  CAICharacter *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  
  bVar14 = 0;
  piVar12 = (int *)&stack0xfffff034;
  uVar4 = CMap::get_index(param_2);
  *(undefined4 *)(this + 0x10) = uVar4;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_a84);
                    /* try { // try from 0846065f to 08460683 has its CatchHandler @ 084614b2 */
  iVar5 = G_CDataManager();
  pmVar6 = (map *)CAICharacterList::getAPCount(*(CAICharacterList **)(iVar5 + 0x869c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_a9c,pmVar6);
  local_40 = 0;
                    /* try { // try from 08460694 to 08460698 has its CatchHandler @ 0846148a */
  map_monster::map_monster((map_monster *)&local_f54);
  local_3c = CMap::getAICharacters(param_2);
                    /* try { // try from 084606ad to 084608ca has its CatchHandler @ 08461462 */
  cVar2 = std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
          empty();
  if (cVar2 != '\x01') {
    local_40 = 0;
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::begin();
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::end();
    while (bVar3 = __gnu_cxx::operator!=(local_ad8,local_adc), bVar3) {
      local_34 = (uint *)__gnu_cxx::
                         __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                         ::operator*(local_ad8);
      uVar10 = *local_34;
      iVar5 = G_CDataManager();
      local_30 = (CAICharacter *)
                 CAICharacterList::get(*(CAICharacterList **)(iVar5 + 0x869c),uVar10);
      if (local_30 == (CAICharacter *)0x0) {
        uVar4 = 0;
        goto LAB_0846147a;
      }
      local_a78 = CAICharacter::getIdx(local_30);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_a84,&local_a78);
      iVar5 = CAICharacter::getAppearancePoint(local_30);
      if (iVar5 != 0) {
        local_a74 = CAICharacter::getAppearancePoint(local_30);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_ae0);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_a70);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_ae0,(_Rb_tree_iterator *)local_a70);
        if (cVar2 != '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          local_a6c[0] = *(int *)(iVar7 + 4) + -1;
          local_a6c[1] = 0;
          piVar8 = std::max<int>(local_a6c + 1,local_a6c);
          *(int *)(iVar5 + 4) = *piVar8;
        }
      }
      memset(&local_f54,0,0x34c);
      local_f54 = local_40;
      local_f48 = *local_34;
      local_f50 = *(int *)(this + 0x48);
      *(int *)(this + 0x48) = local_f50 + 1;
      local_f4c = '\x05';
      local_f44 = CAICharacter::getLevel(local_30);
      local_f28 = local_34[4];
      local_f43 = 0;
      local_f42 = 0;
      map_monster::map_monster(local_a64,(map_monster *)&local_f54);
                    /* try { // try from 084608de to 084608e2 has its CatchHandler @ 084608e5 */
      MapInfo::Add_Mob();
                    /* try { // try from 08460909 to 08460cb7 has its CatchHandler @ 08461462 */
      map_monster::~map_monster(local_a64);
      local_40 = local_40 + 1;
      __gnu_cxx::
      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
      ::operator++(local_ad8);
    }
  }
  local_aa0 = CMap::getAPCRandomPoint(param_2);
  piVar8 = (int *)&stack0xfffff034;
  if (local_aa0 != 0) {
    local_40 = 0x40;
    piVar12 = (int *)&stack0xfffff034;
    do {
      while( true ) {
        piVar12[-1] = 0x8460d07;
        iVar5 = G_CDataManager();
        *piVar12 = *(undefined4 *)(iVar5 + 0x869c);
        piVar12[-1] = 0x8460d15;
        iVar5 = CAICharacterList::getMinAP((CAICharacterList *)*piVar12);
        piVar8 = piVar12;
        if (local_aa0 < iVar5) goto LAB_08460d28;
        *piVar12 = local_aa0;
        piVar12[-1] = 0x8460979;
        iVar5 = get_rand_int(*piVar12);
        piVar12[-1] = 0x8460983;
        iVar7 = G_CDataManager();
        uVar4 = *(undefined4 *)(iVar7 + 0x869c);
        piVar12[1] = iVar5 + 1;
        *piVar12 = uVar4;
        piVar12[-1] = 0x8460995;
        local_2c = CAICharacterList::getByAP((CAICharacterList *)*piVar12,piVar12[1]);
        if (local_2c == 0) {
          uVar4 = 0;
          goto LAB_0846147a;
        }
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)local_718;
        piVar12[-1] = 0x84609c0;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        *piVar12 = local_2c;
        piVar12[-1] = 0x84609ce;
        local_710 = CAICharacter::getIdx((CAICharacter *)*piVar12);
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_70c;
        piVar12[-1] = 0x84609ec;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_708;
        piVar12[-1] = 0x8460a07;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
        piVar12[3] = (int)&local_710;
        piVar12[2] = local_70c;
        piVar12[1] = local_708;
        *piVar12 = (int)local_714;
        piVar12[-1] = 0x8460a36;
        std::
        find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                  ();
        piVar11 = piVar12 + -1;
        *piVar12 = (int)local_718;
        piVar12[-1] = (int)local_714;
        piVar12[-2] = 0x8460a51;
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)piVar12[-1],(__normal_iterator *)*piVar12);
        if (bVar3) break;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460b2a;
        local_6fc = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        *piVar12 = (int)&local_6fc;
        piVar12[-1] = (int)local_a84;
        piVar12[-2] = 0x8460b48;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)piVar12[-1],(uint *)*piVar12
                  );
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460b53;
        local_6f8 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        piVar12[1] = (int)&local_6f8;
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x8460b7b;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)piVar12[-1]);
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_6f4;
        piVar12[-2] = 0x8460b96;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                   piVar12[-1]);
        *piVar12 = (int)local_6f4;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x8460bb1;
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_iterator *)*piVar12);
        if (cVar2 != '\0') {
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x8460bc3;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x8460bd3;
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          local_6f0[0] = *(int *)(iVar7 + 4) + -1;
          local_6f0[1] = 0;
          *piVar12 = (int)local_6f0;
          piVar12[-1] = (int)(local_6f0 + 1);
          piVar12[-2] = 0x8460c01;
          piVar8 = std::max<int>((int *)piVar12[-1],(int *)*piVar12);
          *(int *)(iVar5 + 4) = *piVar8;
        }
        iVar5 = local_aa0;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460c17;
        iVar7 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        local_aa0 = iVar5 - iVar7;
        piVar12[1] = 0x34c;
        *piVar12 = 0;
        piVar12[-1] = (int)&local_f54;
        piVar12[-2] = 0x8460c41;
        memset((void *)piVar12[-1],*piVar12,piVar12[1]);
        local_f54 = local_40;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460c55;
        local_f48 = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        local_f50 = *(int *)(this + 0x48);
        *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
        local_f4c = '\x05';
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460c82;
        local_f44 = CAICharacter::getLevel((CAICharacter *)piVar12[-1]);
        local_f28 = 100;
        local_f43 = 0;
        local_f42 = 0;
        *piVar12 = (int)&local_f54;
        piVar12[-1] = (int)local_6e8;
        piVar12[-2] = 0x8460cb8;
        map_monster::map_monster((map_monster *)piVar12[-1],(map_monster *)*piVar12);
        *piVar12 = (int)local_6e8;
        piVar12[-1] = (int)(this + 0xc);
                    /* try { // try from 08460ccb to 08460ccf has its CatchHandler @ 08460cd2 */
        piVar12[-2] = 0x8460cd0;
        MapInfo::Add_Mob();
        piVar12[-1] = (int)local_6e8;
                    /* try { // try from 08460cf6 to 08460d3c has its CatchHandler @ 08461462 */
        piVar12[-2] = 0x8460cfb;
        map_monster::~map_monster((map_monster *)piVar12[-1]);
        local_40 = local_40 + 1;
        piVar12 = piVar12 + -1;
      }
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_704;
      piVar12[-2] = 0x8460a71;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                );
      *piVar12 = (int)local_704;
      piVar12[-1] = (int)local_ae8;
      piVar12[-2] = 0x8460a8c;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      piVar12[1] = (int)&local_aa0;
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_700;
      piVar12[-2] = 0x8460aae;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                 ,(int *)*piVar12);
      *piVar12 = (int)local_700;
      piVar12[-1] = (int)local_aec;
      piVar12[-2] = 0x8460ac9;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      local_28 = 0;
      while( true ) {
        *piVar12 = (int)local_aec;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x8460b0c;
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_const_iterator *)*piVar12);
        if (cVar2 == '\0') break;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x8460ae0;
        iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
        local_28 = local_28 + *(int *)(iVar5 + 4);
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x8460af4;
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
      }
      piVar12 = piVar12 + -1;
      piVar8 = piVar11;
    } while (local_28 != 0);
  }
LAB_08460d28:
  piVar12 = piVar8;
  local_40 = 0;
  *piVar12 = (int)local_aac;
  piVar12[-1] = 0x8460d3d;
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)*piVar12);
  piVar12[1] = (int)param_2;
  *piVar12 = (int)local_ab4;
                    /* try { // try from 08460d4d to 08460d51 has its CatchHandler @ 0846143a */
  piVar12[-1] = 0x8460d52;
  CMap::get_monster_list();
  piVar12[1] = (int)local_ab4;
  *piVar12 = (int)local_39c;
                    /* try { // try from 08460d68 to 08460f2b has its CatchHandler @ 08461412 */
  piVar12[-1] = 0x8460d6d;
  std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
  piVar12[1] = (int)local_39c;
  *piVar12 = (int)local_ab8;
  piVar12[-1] = 0x8460d88;
  std::_List_const_iterator<_mapMonster>::_List_const_iterator
            ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
  while( true ) {
    piVar12[1] = (int)local_ab4;
    *piVar12 = (int)local_394;
    piVar12[-1] = 0x8460f99;
    std::list<_mapMonster,std::allocator<_mapMonster>>::end();
    piVar12[1] = (int)local_394;
    *piVar12 = (int)local_398;
    piVar12[-1] = 0x8460fb4;
    std::_List_const_iterator<_mapMonster>::_List_const_iterator
              ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
    piVar12[1] = (int)local_398;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x8460fcc;
    cVar2 = std::_List_const_iterator<_mapMonster>::operator!=
                      ((_List_const_iterator<_mapMonster> *)*piVar12,
                       (_List_const_iterator *)piVar12[1]);
    if (cVar2 == '\0') break;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x8460d9b;
    local_24 = (uint *)std::_List_const_iterator<_mapMonster>::operator*
                                 ((_List_const_iterator<_mapMonster> *)*piVar12);
    piVar12[2] = 0x34c;
    piVar12[1] = 0;
    *piVar12 = (int)&local_f54;
    piVar12[-1] = 0x8460dbc;
    memset((void *)*piVar12,piVar12[1],piVar12[2]);
    local_f54 = local_40;
    if ((char)local_24[1] == '\0') {
      local_f44 = (byte)local_24[2];
    }
    else {
      *piVar12 = (int)param_1;
      piVar12[-1] = 0x8460ddb;
      cVar2 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
      local_f44 = cVar2 + (char)local_24[2];
      if ((local_f44 < 200) && (local_f44 == 0)) {
        local_f44 = 1;
      }
      else if (200 < local_f44) {
        local_f44 = 200;
      }
    }
    if (*local_24 == 0xffffffff) {
      uVar10 = (uint)local_f44;
      piVar12[-1] = 0x8460e49;
      iVar5 = G_CDataManager();
      uVar4 = *(undefined4 *)(iVar5 + 8);
      piVar12[1] = uVar10;
      *piVar12 = uVar4;
      piVar12[-1] = 0x8460e58;
      local_f48 = CMonsterManager::get_levelrandom_mob(*piVar12);
    }
    else {
      local_f48 = *local_24;
    }
    local_f43 = (char)local_24[4];
    local_f42 = (char)local_24[5];
    uVar10 = local_24[6];
    local_f4c = (char)uVar10;
    local_f50 = *(int *)(this + 0x48);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
    if ((char)uVar10 == '\0') {
      *piVar12 = (int)&local_f54;
      piVar12[-1] = 0x8460ebd;
      cVar2 = map_monster::isNamedMonster((map_monster *)*piVar12);
      if (cVar2 == '\x01') goto LAB_08460ecb;
      bVar3 = true;
    }
    else {
LAB_08460ecb:
      bVar3 = false;
    }
    if (bVar3) {
      piVar12[1] = (int)&local_f50;
      *piVar12 = (int)local_aac;
      piVar12[-1] = 0x8460eef;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)*piVar12,(int *)piVar12[1]);
    }
    local_f41 = (char)local_24[7];
    local_f40 = (char)local_24[8];
    local_f28 = local_24[10];
    piVar12[1] = (int)&local_f54;
    *piVar12 = (int)local_390;
    piVar12[-1] = 0x8460f2c;
    map_monster::map_monster((map_monster *)*piVar12,(map_monster *)piVar12[1]);
    piVar12[1] = (int)local_390;
    *piVar12 = (int)(this + 0xc);
                    /* try { // try from 08460f3f to 08460f43 has its CatchHandler @ 08460f46 */
    piVar12[-1] = 0x8460f44;
    MapInfo::Add_Mob();
    *piVar12 = (int)local_390;
                    /* try { // try from 08460f6a to 08460ffd has its CatchHandler @ 08461412 */
    piVar12[-1] = 0x8460f6f;
    map_monster::~map_monster((map_monster *)*piVar12);
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x8460f7d;
    std::_List_const_iterator<_mapMonster>::operator++
              ((_List_const_iterator<_mapMonster> *)*piVar12);
    local_40 = local_40 + 1;
  }
  *piVar12 = (int)&local_ac8;
  piVar12[-1] = 0x8460fe2;
  _mapItem::_mapItem((_mapItem *)*piVar12);
  *piVar12 = (int)param_1;
  piVar12[-1] = 0x8460fed;
  local_38 = CDungeonMgr::getSpecialPassiveObjectItems((CDungeonMgr *)*piVar12);
  *piVar12 = (int)local_b6c;
  piVar12[-1] = 0x8460ffe;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = (int)local_bb4;
                    /* try { // try from 08461007 to 0846100b has its CatchHandler @ 084613ea */
  piVar12[-1] = 0x846100c;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = (int)param_1;
  piVar12[-1] = 0x8461017;
  local_b80 = CDungeonMgr::getObjectDropItems((CDungeonMgr *)*piVar12);
  piVar12[1] = (int)param_2;
  *piVar12 = (int)local_ad0;
                    /* try { // try from 0846102d to 08461031 has its CatchHandler @ 084613c2 */
  piVar12[-1] = 0x8461032;
  CMap::get_item_list();
  piVar12[1] = (int)local_ad0;
  *piVar12 = (int)local_ad4;
                    /* try { // try from 08461048 to 08461108 has its CatchHandler @ 084613aa */
  piVar12[-1] = 0x846104d;
  std::list<_mapItem,std::allocator<_mapItem>>::begin();
  do {
    piVar12[1] = (int)local_ad0;
    *piVar12 = (int)local_44;
                    /* try { // try from 08461350 to 08461354 has its CatchHandler @ 084613aa */
    piVar12[-1] = 0x8461355;
    std::list<_mapItem,std::allocator<_mapItem>>::end();
    piVar12[1] = (int)local_44;
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x846136d;
    cVar2 = std::_List_iterator<_mapItem>::operator!=
                      ((_List_iterator<_mapItem> *)*piVar12,(_List_iterator *)piVar12[1]);
    if ((cVar2 == '\0') || (*(int *)(*(int *)param_3 + 0xcd8) == 1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar4 = 1;
      *piVar12 = (int)local_ad0;
                    /* try { // try from 084613a3 to 084613a7 has its CatchHandler @ 084613c2 */
      piVar12[-1] = 0x84613a8;
      std::list<_mapItem,std::allocator<_mapItem>>::~list
                ((list<_mapItem,std::allocator<_mapItem>> *)*piVar12);
      *piVar12 = (int)local_bb4;
                    /* try { // try from 084613e3 to 084613e7 has its CatchHandler @ 084613ea */
      piVar12[-1] = 0x84613e8;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_b6c;
                    /* try { // try from 0846140b to 0846140f has its CatchHandler @ 08461412 */
      piVar12[-1] = 0x8461410;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_ab4;
                    /* try { // try from 08461433 to 08461437 has its CatchHandler @ 0846143a */
      piVar12[-1] = 0x8461438;
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                ((list<_mapMonster,std::allocator<_mapMonster>> *)*piVar12);
      *piVar12 = (int)local_aac;
                    /* try { // try from 0846145b to 0846145f has its CatchHandler @ 08461462 */
      piVar12[-1] = 0x8461460;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)*piVar12);
LAB_0846147a:
      *piVar12 = (int)&local_f54;
                    /* try { // try from 08461483 to 08461487 has its CatchHandler @ 0846148a */
      piVar12[-1] = 0x8461488;
      map_monster::~map_monster((map_monster *)*piVar12);
      *piVar12 = (int)local_a9c;
                    /* try { // try from 084614ab to 084614af has its CatchHandler @ 084614b2 */
      piVar12[-1] = 0x84614b0;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)*piVar12);
      *piVar12 = (int)local_a84;
      piVar12[-1] = 0x84614de;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)*piVar12);
      return uVar4;
    }
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x8461063;
    piVar8 = (int *)std::_List_iterator<_mapItem>::operator*((_List_iterator<_mapItem> *)*piVar12);
    local_ac8 = *piVar8;
    local_ac4 = piVar8[1];
    local_ac0 = piVar8[2];
    local_abc = piVar8[3];
    piVar12[1] = *piVar8;
    *piVar12 = local_38;
    piVar12[-1] = 0x846109b;
    local_20 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::at
                                ((vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>
                                  *)*piVar12,piVar12[1]);
    if (*local_20 != -1) {
      local_b34 = (char)*local_20;
      goto LAB_084610fb;
    }
    *piVar12 = (int)param_1;
    piVar12[-1] = 0x84610c0;
    iVar5 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
    if (iVar5 < 1) {
LAB_084610d6:
      bVar3 = true;
    }
    else {
      *piVar12 = (int)param_1;
      piVar12[-1] = 0x84610cf;
      iVar5 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
      if (200 < iVar5) goto LAB_084610d6;
      bVar3 = false;
    }
    if (!bVar3) {
      *piVar12 = (int)param_1;
      piVar12[-1] = 0x84610f5;
      local_b34 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
LAB_084610fb:
      *piVar12 = (int)local_b24;
      piVar12[-1] = 0x8461109;
      stGenerateResult_t::stGenerateResult_t((stGenerateResult_t *)*piVar12);
      local_b33 = (undefined1)local_ac4;
      local_b38 = local_20 + 1;
                    /* try { // try from 08461121 to 08461300 has its CatchHandler @ 08461327 */
      piVar12[-1] = 0x8461126;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x846112e;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 1;
      *piVar12 = uVar4;
      piVar12[-1] = 0x846113e;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_b6c;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x846115e;
      (*pcVar1)();
      piVar12[-1] = 0x8461163;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x846116b;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 4;
      *piVar12 = uVar4;
      piVar12[-1] = 0x846117b;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_bb4;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x846119b;
      (*pcVar1)();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af0;
      piVar12[-1] = 0x84611b3;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af4;
      piVar12[-1] = 0x84611ce;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      while( true ) {
        piVar12[1] = (int)local_af4;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x8461301;
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar12,(__normal_iterator *)piVar12[1])
        ;
        if (!bVar3) break;
        *piVar12 = (int)&local_c08;
        piVar12[-1] = 0x84611e4;
        map_item::map_item((map_item *)*piVar12);
        local_c08._0_1_ = 1;
        local_c04 = *(int *)(this + 0x4c);
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
        local_c08._1_1_ = (char)local_abc;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x846121a;
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                            *)*piVar12);
        local_bf8 = *puVar9;
        local_bf4 = puVar9[1];
        local_bf0 = puVar9[2];
        local_bec = puVar9[3];
        local_be8 = puVar9[4];
        local_be4 = puVar9[5];
        local_be0 = puVar9[6];
        local_bdc = puVar9[7];
        local_bd8 = puVar9[8];
        local_bd4 = puVar9[9];
        local_bd0 = puVar9[10];
        local_bcc = puVar9[0xb];
        local_bc8 = puVar9[0xc];
        local_bc4 = puVar9[0xd];
        local_bc0 = puVar9[0xe];
        local_bbc = *(undefined1 *)(puVar9 + 0xf);
        piVar8 = &local_c08;
        piVar13 = piVar12 + 1;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar13 = *piVar8;
          piVar8 = piVar8 + (uint)bVar14 * -2 + 1;
          piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
        }
        *piVar12 = (int)(this + 0xc);
        piVar12[-1] = 0x84612db;
        MapInfo::Add_Item();
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x84612e9;
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                      *)*piVar12);
      }
      *piVar12 = (int)local_ad4;
      piVar12[-1] = 0x8461317;
      std::_List_iterator<_mapItem>::operator++((_List_iterator<_mapItem> *)*piVar12);
      *piVar12 = (int)local_b24;
                    /* try { // try from 08461320 to 08461324 has its CatchHandler @ 084613aa */
      piVar12[-1] = 0x8461325;
      stGenerateResult_t::~stGenerateResult_t((stGenerateResult_t *)*piVar12);
    }
  } while( true );
}
```
