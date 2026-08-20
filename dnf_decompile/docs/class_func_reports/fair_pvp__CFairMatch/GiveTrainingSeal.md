# GiveTrainingSeal

`_ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb`

`fair_pvp::CFairMatch::GiveTrainingSeal(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085652c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085652c8  _ZN8fair_pvp10CFairMatch16GiveTrainingSealEP5CUserb
#           fair_pvp::CFairMatch::GiveTrainingSeal(CUser*, bool)
# range [0x085652c8, 0x085656ff]
085652c8 +0x000:  push   %ebp
085652c9 +0x001:  mov    %esp,%ebp
085652cb +0x003:  push   %esi
085652cc +0x004:  push   %ebx
085652cd +0x005:  sub    $0x70,%esp
085652d0 +0x008:  mov    0x10(%ebp),%eax
085652d3 +0x00b:  mov    %al,-0x4c(%ebp)
085652d6 +0x00e:  mov    0xc(%ebp),%eax
085652d9 +0x011:  mov    %eax,(%esp)
085652dc +0x014:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085652e1 +0x019:  test   %eax,%eax
085652e3 +0x01b:  sete   %al
085652e6 +0x01e:  test   %al,%al
085652e8 +0x020:  jne    085656f7 <+0x42f>
085652ee +0x026:  movb   $0x1,-0x11(%ebp)
085652f2 +0x02a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085652f7 +0x02f:  movzwl 0x49e0(%eax),%eax
085652fe +0x036:  movzwl %ax,%ebx
08565301 +0x039:  movl   $0x7,0x4(%esp)
08565309 +0x041:  mov    0xc(%ebp),%eax
0856530c +0x044:  mov    %eax,(%esp)
0856530f +0x047:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565314 +0x04c:  mov    %eax,(%esp)
08565317 +0x04f:  call   08568ec2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x88c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x88c
0856531c +0x054:  mov    %ebx,%edx
0856531e +0x056:  sub    %eax,%edx
08565320 +0x058:  mov    %edx,%eax
08565322 +0x05a:  mov    %eax,-0x10(%ebp)
08565325 +0x05d:  cmpl   $0x0,-0x10(%ebp)
08565329 +0x061:  jg     08565354 <+0x8c>
0856532b +0x063:  movl   $0x7,0x4(%esp)
08565333 +0x06b:  mov    0xc(%ebp),%eax
08565336 +0x06e:  mov    %eax,(%esp)
08565339 +0x071:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0856533e +0x076:  movl   $0x0,0x4(%esp)
08565346 +0x07e:  mov    %eax,(%esp)
08565349 +0x081:  call   08234fae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa658>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa658
0856534e +0x086:  movb   $0x0,-0x11(%ebp)
08565352 +0x08a:  jmp    08565376 <+0xae>
08565354 +0x08c:  movl   $0x7,0x4(%esp)
0856535c +0x094:  mov    0xc(%ebp),%eax
0856535f +0x097:  mov    %eax,(%esp)
08565362 +0x09a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565367 +0x09f:  mov    -0x10(%ebp),%edx
0856536a +0x0a2:  mov    %edx,0x4(%esp)
0856536e +0x0a6:  mov    %eax,(%esp)
08565371 +0x0a9:  call   08234fae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa658>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa658
08565376 +0x0ae:  movl   $0x0,-0x24(%ebp)
0856537d +0x0b5:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08565382 +0x0ba:  cmp    $0x1,%al
08565384 +0x0bc:  sete   %al
08565387 +0x0bf:  test   %al,%al
08565389 +0x0c1:  je     08565495 <+0x1cd>
0856538f +0x0c7:  cmpb   $0x0,-0x4c(%ebp)
08565393 +0x0cb:  je     085653af <+0xe7>
08565395 +0x0cd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0856539a +0x0d2:  movzbl 0x49d8(%eax),%eax
085653a1 +0x0d9:  movzbl %al,%edx
085653a4 +0x0dc:  mov    -0x24(%ebp),%eax
085653a7 +0x0df:  lea    (%edx,%eax,1),%eax
085653aa +0x0e2:  mov    %eax,-0x24(%ebp)
085653ad +0x0e5:  jmp    085653c7 <+0xff>
085653af +0x0e7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085653b4 +0x0ec:  movzbl 0x49d9(%eax),%eax
085653bb +0x0f3:  movzbl %al,%edx
085653be +0x0f6:  mov    -0x24(%ebp),%eax
085653c1 +0x0f9:  lea    (%edx,%eax,1),%eax
085653c4 +0x0fc:  mov    %eax,-0x24(%ebp)
085653c7 +0x0ff:  cmpb   $0x0,-0x11(%ebp)
085653cb +0x103:  je     0856546d <+0x1a5>
085653d1 +0x109:  cmpb   $0x0,-0x4c(%ebp)
085653d5 +0x10d:  je     08565422 <+0x15a>
085653d7 +0x10f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085653dc +0x114:  movzbl 0x49da(%eax),%eax
085653e3 +0x11b:  movzbl %al,%edx
085653e6 +0x11e:  mov    -0x24(%ebp),%eax
085653e9 +0x121:  lea    (%edx,%eax,1),%eax
085653ec +0x124:  mov    %eax,-0x24(%ebp)
085653ef +0x127:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085653f4 +0x12c:  movzbl 0x49da(%eax),%eax
085653fb +0x133:  movzbl %al,%ebx
085653fe +0x136:  movl   $0x7,0x4(%esp)
08565406 +0x13e:  mov    0xc(%ebp),%eax
08565409 +0x141:  mov    %eax,(%esp)
0856540c +0x144:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565411 +0x149:  mov    %ebx,0x4(%esp)
08565415 +0x14d:  mov    %eax,(%esp)
08565418 +0x150:  call   08568ede <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8a8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8a8
0856541d +0x155:  jmp    08565590 <+0x2c8>
08565422 +0x15a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08565427 +0x15f:  movzbl 0x49db(%eax),%eax
0856542e +0x166:  movzbl %al,%edx
08565431 +0x169:  mov    -0x24(%ebp),%eax
08565434 +0x16c:  lea    (%edx,%eax,1),%eax
08565437 +0x16f:  mov    %eax,-0x24(%ebp)
0856543a +0x172:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0856543f +0x177:  movzbl 0x49db(%eax),%eax
08565446 +0x17e:  movzbl %al,%ebx
08565449 +0x181:  movl   $0x7,0x4(%esp)
08565451 +0x189:  mov    0xc(%ebp),%eax
08565454 +0x18c:  mov    %eax,(%esp)
08565457 +0x18f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0856545c +0x194:  mov    %ebx,0x4(%esp)
08565460 +0x198:  mov    %eax,(%esp)
08565463 +0x19b:  call   08568ede <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8a8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8a8
08565468 +0x1a0:  jmp    08565590 <+0x2c8>
0856546d +0x1a5:  movl   $0x7,0x4(%esp)
08565475 +0x1ad:  mov    0xc(%ebp),%eax
08565478 +0x1b0:  mov    %eax,(%esp)
0856547b +0x1b3:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565480 +0x1b8:  movl   $0x0,0x4(%esp)
08565488 +0x1c0:  mov    %eax,(%esp)
0856548b +0x1c3:  call   08568ede <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8a8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8a8
08565490 +0x1c8:  jmp    08565590 <+0x2c8>
08565495 +0x1cd:  cmpb   $0x0,-0x4c(%ebp)
08565499 +0x1d1:  je     085654b5 <+0x1ed>
0856549b +0x1d3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085654a0 +0x1d8:  movzbl 0x49dc(%eax),%eax
085654a7 +0x1df:  movzbl %al,%edx
085654aa +0x1e2:  mov    -0x24(%ebp),%eax
085654ad +0x1e5:  lea    (%edx,%eax,1),%eax
085654b0 +0x1e8:  mov    %eax,-0x24(%ebp)
085654b3 +0x1eb:  jmp    085654cd <+0x205>
085654b5 +0x1ed:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085654ba +0x1f2:  movzbl 0x49dd(%eax),%eax
085654c1 +0x1f9:  movzbl %al,%edx
085654c4 +0x1fc:  mov    -0x24(%ebp),%eax
085654c7 +0x1ff:  lea    (%edx,%eax,1),%eax
085654ca +0x202:  mov    %eax,-0x24(%ebp)
085654cd +0x205:  cmpb   $0x0,-0x11(%ebp)
085654d1 +0x209:  je     0856556d <+0x2a5>
085654d7 +0x20f:  cmpb   $0x0,-0x4c(%ebp)
085654db +0x213:  je     08565525 <+0x25d>
085654dd +0x215:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085654e2 +0x21a:  movzbl 0x49de(%eax),%eax
085654e9 +0x221:  movzbl %al,%edx
085654ec +0x224:  mov    -0x24(%ebp),%eax
085654ef +0x227:  lea    (%edx,%eax,1),%eax
085654f2 +0x22a:  mov    %eax,-0x24(%ebp)
085654f5 +0x22d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085654fa +0x232:  movzbl 0x49de(%eax),%eax
08565501 +0x239:  movzbl %al,%ebx
08565504 +0x23c:  movl   $0x7,0x4(%esp)
0856550c +0x244:  mov    0xc(%ebp),%eax
0856550f +0x247:  mov    %eax,(%esp)
08565512 +0x24a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565517 +0x24f:  mov    %ebx,0x4(%esp)
0856551b +0x253:  mov    %eax,(%esp)
0856551e +0x256:  call   08568ede <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8a8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8a8
08565523 +0x25b:  jmp    08565590 <+0x2c8>
08565525 +0x25d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0856552a +0x262:  movzbl 0x49df(%eax),%eax
08565531 +0x269:  movzbl %al,%edx
08565534 +0x26c:  mov    -0x24(%ebp),%eax
08565537 +0x26f:  lea    (%edx,%eax,1),%eax
0856553a +0x272:  mov    %eax,-0x24(%ebp)
0856553d +0x275:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08565542 +0x27a:  movzbl 0x49df(%eax),%eax
08565549 +0x281:  movzbl %al,%ebx
0856554c +0x284:  movl   $0x7,0x4(%esp)
08565554 +0x28c:  mov    0xc(%ebp),%eax
08565557 +0x28f:  mov    %eax,(%esp)
0856555a +0x292:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0856555f +0x297:  mov    %ebx,0x4(%esp)
08565563 +0x29b:  mov    %eax,(%esp)
08565566 +0x29e:  call   08568ede <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8a8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8a8
0856556b +0x2a3:  jmp    08565590 <+0x2c8>
0856556d +0x2a5:  movl   $0x7,0x4(%esp)
08565575 +0x2ad:  mov    0xc(%ebp),%eax
08565578 +0x2b0:  mov    %eax,(%esp)
0856557b +0x2b3:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08565580 +0x2b8:  movl   $0x0,0x4(%esp)
08565588 +0x2c0:  mov    %eax,(%esp)
0856558b +0x2c3:  call   08568ede <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x8a8>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x8a8
08565590 +0x2c8:  mov    -0x24(%ebp),%ebx
08565593 +0x2cb:  movl   $0x7,0x4(%esp)
0856559b +0x2d3:  mov    0xc(%ebp),%eax
0856559e +0x2d6:  mov    %eax,(%esp)
085655a1 +0x2d9:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085655a6 +0x2de:  mov    %ebx,0x4(%esp)
085655aa +0x2e2:  mov    %eax,(%esp)
085655ad +0x2e5:  call   08568ece <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x898>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x898
085655b2 +0x2ea:  mov    -0x24(%ebp),%eax
085655b5 +0x2ed:  test   %eax,%eax
085655b7 +0x2ef:  jle    085656f8 <+0x430>
085655bd +0x2f5:  lea    -0x30(%ebp),%eax
085655c0 +0x2f8:  mov    %eax,(%esp)
085655c3 +0x2fb:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085655c8 +0x300:  lea    -0x3c(%ebp),%eax
085655cb +0x303:  mov    %eax,(%esp)
085655ce +0x306:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
085655d3 +0x30b:  movl   $0xcf0,-0x18(%ebp)
085655da +0x312:  lea    -0x24(%ebp),%eax
085655dd +0x315:  mov    %eax,0x8(%esp)
085655e1 +0x319:  lea    -0x18(%ebp),%eax
085655e4 +0x31c:  mov    %eax,0x4(%esp)
085655e8 +0x320:  lea    -0x20(%ebp),%eax
085655eb +0x323:  mov    %eax,(%esp)
085655ee +0x326:  call   080dae82 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x101f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x101f
085655f3 +0x32b:  lea    -0x20(%ebp),%eax
085655f6 +0x32e:  mov    %eax,0x4(%esp)
085655fa +0x332:  lea    -0x3c(%ebp),%eax
085655fd +0x335:  mov    %eax,(%esp)
08565600 +0x338:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08565605 +0x33d:  mov    0xc(%ebp),%eax
08565608 +0x340:  mov    %eax,(%esp)
0856560b +0x343:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08565610 +0x348:  movl   $"game_server_msg_172",0x1c(%esp)
08565618 +0x350:  movl   $"game_server_msg_171",0x18(%esp)
08565620 +0x358:  movl   $0x1,0x14(%esp)
08565628 +0x360:  movl   $0x8,0x10(%esp)
08565630 +0x368:  movl   $0x3,0xc(%esp)
08565638 +0x370:  lea    -0x30(%ebp),%edx
0856563b +0x373:  mov    %edx,0x8(%esp)
0856563f +0x377:  lea    -0x3c(%ebp),%edx
08565642 +0x37a:  mov    %edx,0x4(%esp)
08565646 +0x37e:  mov    %eax,(%esp)
08565649 +0x381:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
0856564e +0x386:  mov    %eax,-0xc(%ebp)
08565651 +0x389:  cmpl   $0x0,-0xc(%ebp)
08565655 +0x38d:  jle    0856566e <+0x3a6>
08565657 +0x38f:  lea    -0x30(%ebp),%eax
0856565a +0x392:  mov    %eax,(%esp)
0856565d +0x395:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08565662 +0x39a:  cmp    $0x2,%eax
08565665 +0x39d:  jbe    0856566e <+0x3a6>
08565667 +0x39f:  mov    $0x1,%eax
0856566c +0x3a4:  jmp    08565673 <+0x3ab>
0856566e +0x3a6:  mov    $0x0,%eax
08565673 +0x3ab:  test   %al,%al
08565675 +0x3ad:  je     085656c2 <+0x3fa>
08565677 +0x3af:  movl   $0x0,0x4(%esp)
0856567f +0x3b7:  lea    -0x30(%ebp),%eax
08565682 +0x3ba:  mov    %eax,(%esp)
08565685 +0x3bd:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0856568a +0x3c2:  mov    (%eax),%eax
0856568c +0x3c4:  mov    %eax,0xc(%esp)
08565690 +0x3c8:  movl   $0x0,0x8(%esp)
08565698 +0x3d0:  movl   $0x1,0x4(%esp)
085656a0 +0x3d8:  mov    0xc(%ebp),%eax
085656a3 +0x3db:  mov    %eax,(%esp)
085656a6 +0x3de:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085656ab +0x3e3:  jmp    085656c2 <+0x3fa>
085656ad +0x3e5:  mov    %edx,%ebx
085656af +0x3e7:  mov    %eax,%esi
085656b1 +0x3e9:  lea    -0x3c(%ebp),%eax
085656b4 +0x3ec:  mov    %eax,(%esp)
085656b7 +0x3ef:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085656bc +0x3f4:  mov    %esi,%eax
085656be +0x3f6:  mov    %ebx,%edx
085656c0 +0x3f8:  jmp    085656cf <+0x407>
085656c2 +0x3fa:  lea    -0x3c(%ebp),%eax
085656c5 +0x3fd:  mov    %eax,(%esp)
085656c8 +0x400:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085656cd +0x405:  jmp    085656ea <+0x422>
085656cf +0x407:  mov    %edx,%ebx
085656d1 +0x409:  mov    %eax,%esi
085656d3 +0x40b:  lea    -0x30(%ebp),%eax
085656d6 +0x40e:  mov    %eax,(%esp)
085656d9 +0x411:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085656de +0x416:  mov    %esi,%eax
085656e0 +0x418:  mov    %ebx,%edx
085656e2 +0x41a:  mov    %eax,(%esp)
085656e5 +0x41d:  call   08ae3750 <_Unwind_Resume>
085656ea +0x422:  lea    -0x30(%ebp),%eax
085656ed +0x425:  mov    %eax,(%esp)
085656f0 +0x428:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085656f5 +0x42d:  jmp    085656f8 <+0x430>
085656f7 +0x42f:  nop
085656f8 +0x430:  add    $0x70,%esp
085656fb +0x433:  pop    %ebx
085656fc +0x434:  pop    %esi
085656fd +0x435:  pop    %ebp
085656fe +0x436:  ret
085656ff +0x437:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::GiveTrainingSeal @ 0x85652c8

/* fair_pvp::CFairMatch::GiveTrainingSeal(CUser*, bool) */

void __thiscall fair_pvp::CFairMatch::GiveTrainingSeal(CFairMatch *this,CUser *param_1,bool param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  CFairPvPScore *pCVar6;
  CInventory *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_40 [12];
  vector<int,std::allocator<int>> local_34 [12];
  int local_28;
  pair<int,int> local_24 [8];
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    return;
  }
  local_15 = '\x01';
  iVar5 = G_CDataManager();
  uVar2 = *(ushort *)(iVar5 + 0x49e0);
  pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
  local_14 = CFairPvPScore::GetDailyPlayCount(pCVar6);
  local_14 = (uint)uVar2 - local_14;
  if (local_14 < 1) {
    pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    CFairPvPScore::SetRemainBonusCount(pCVar6,0);
    local_15 = '\0';
  }
  else {
    pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    CFairPvPScore::SetRemainBonusCount(pCVar6,local_14);
  }
  local_28 = 0;
  cVar4 = GetPlayCountPerOneTeam();
  if (cVar4 == '\x01') {
    if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49d8) + local_28;
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49d9) + local_28;
    }
    if (local_15 == '\0') {
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,0);
    }
    else if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49da) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49da);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49db) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49db);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
  }
  else {
    if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49dc) + local_28;
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49dd) + local_28;
    }
    if (local_15 == '\0') {
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,0);
    }
    else if (param_2) {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49de) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49de);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
    else {
      iVar5 = G_CDataManager();
      local_28 = (uint)*(byte *)(iVar5 + 0x49df) + local_28;
      iVar5 = G_CDataManager();
      bVar1 = *(byte *)(iVar5 + 0x49df);
      pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
      CFairPvPScore::SetLastTrainingSealBonusCount(pCVar6,(uint)bVar1);
    }
  }
  iVar5 = local_28;
  pCVar6 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
  CFairPvPScore::SetLastTrainingSealCount(pCVar6,iVar5);
  if (0 < local_28) {
    std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 085655ce to 085655d2 has its CatchHandler @ 085656cf */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_40);
    local_1c = 0xcf0;
                    /* try { // try from 085655ee to 085656aa has its CatchHandler @ 085656ad */
    std::pair<int,int>::pair<int,int&>(local_24,&local_1c,&local_28);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back(local_40,local_24)
    ;
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_10 = CInventory::insert_event_items
                         (pCVar7,local_40,local_34,3,8,1,"game_server_msg_171","game_server_msg_172"
                         );
    if ((local_10 < 1) || (uVar8 = std::vector<int,std::allocator<int>>::size(local_34), uVar8 < 3))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      puVar9 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_34,0);
      CUser::SendUpdateItem(param_1,1,0,*puVar9);
    }
                    /* try { // try from 085656c8 to 085656cc has its CatchHandler @ 085656cf */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_40);
    std::vector<int,std::allocator<int>>::~vector(local_34);
    return;
  }
  return;
}
```
