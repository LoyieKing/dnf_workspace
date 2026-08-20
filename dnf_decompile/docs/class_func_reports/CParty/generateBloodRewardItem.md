# generateBloodRewardItem

`_ZN6CParty23generateBloodRewardItemEiijjb`

`CParty::generateBloodRewardItem(int, int, unsigned int, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b840e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b840e  _ZN6CParty23generateBloodRewardItemEiijjb
#           CParty::generateBloodRewardItem(int, int, unsigned int, unsigned int, bool)
# range [0x085b840e, 0x085b8bad]
085b840e +0x000:  push   %ebp
085b840f +0x001:  mov    %esp,%ebp
085b8411 +0x003:  push   %edi
085b8412 +0x004:  push   %esi
085b8413 +0x005:  push   %ebx
085b8414 +0x006:  sub    $0x1ec,%esp
085b841a +0x00c:  mov    0x1c(%ebp),%eax
085b841d +0x00f:  mov    %al,-0x19c(%ebp)
085b8423 +0x015:  mov    0x8(%ebp),%eax
085b8426 +0x018:  lea    0xddc(%eax),%edx
085b842c +0x01e:  mov    0x10(%ebp),%eax
085b842f +0x021:  mov    %eax,0x8(%esp)
085b8433 +0x025:  mov    0xc(%ebp),%eax
085b8436 +0x028:  mov    %eax,0x4(%esp)
085b843a +0x02c:  mov    %edx,(%esp)
085b843d +0x02f:  call   085bf15a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x6b8>  ; global constructors keyed to CParty::cMember::cMember()+0x6b8
085b8442 +0x034:  movl   $0x0,-0x38(%ebp)
085b8449 +0x03b:  jmp    085b89eb <+0x5dd>
085b844e +0x040:  lea    -0x194(%ebp),%eax
085b8454 +0x046:  mov    %eax,(%esp)
085b8457 +0x049:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
085b845c +0x04e:  lea    -0xa0(%ebp),%eax
085b8462 +0x054:  mov    %eax,(%esp)
085b8465 +0x057:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
085b846a +0x05c:  movl   $0x0,0x8(%esp)
085b8472 +0x064:  lea    -0xa0(%ebp),%eax
085b8478 +0x06a:  add    $0xc,%eax
085b847b +0x06d:  mov    %eax,0x4(%esp)
085b847f +0x071:  mov    0x8(%ebp),%eax
085b8482 +0x074:  mov    %eax,(%esp)
085b8485 +0x077:  call   085b61be <_ZN6CParty12GetLuckPointEP10CLuckPointb>  ; CParty::GetLuckPoint(CLuckPoint*, bool)
085b848a +0x07c:  movl   $0x3e8,(%esp)
085b8491 +0x083:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085b8496 +0x088:  mov    %eax,-0x34(%ebp)
085b8499 +0x08b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b849e +0x090:  mov    0x6154(%eax),%eax
085b84a4 +0x096:  imul   0x18(%ebp),%eax
085b84a8 +0x09a:  mov    %eax,-0x30(%ebp)
085b84ab +0x09d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b84b0 +0x0a2:  mov    0x6158(%eax),%eax
085b84b6 +0x0a8:  imul   0x18(%ebp),%eax
085b84ba +0x0ac:  mov    %eax,-0x2c(%ebp)
085b84bd +0x0af:  mov    -0x34(%ebp),%eax
085b84c0 +0x0b2:  cmp    -0x30(%ebp),%eax
085b84c3 +0x0b5:  jae    085b8714 <+0x306>
085b84c9 +0x0bb:  movb   $0x0,-0x15f(%ebp)
085b84d0 +0x0c2:  mov    0x14(%ebp),%eax
085b84d3 +0x0c5:  mov    %al,-0x160(%ebp)
085b84d9 +0x0cb:  movb   $0x1,-0x15e(%ebp)
085b84e0 +0x0d2:  movl   $0x1,-0x15c(%ebp)
085b84ea +0x0dc:  movw   $0x1,-0x158(%ebp)
085b84f3 +0x0e5:  movw   $0x1,-0x156(%ebp)
085b84fc +0x0ee:  movw   $0x1,-0x154(%ebp)
085b8505 +0x0f7:  movw   $0x1,-0x152(%ebp)
085b850e +0x100:  lea    -0xd0(%ebp),%eax
085b8514 +0x106:  mov    %eax,(%esp)
085b8517 +0x109:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
085b851c +0x10e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b8521 +0x113:  mov    %eax,(%esp)
085b8524 +0x116:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
085b8529 +0x11b:  movl   $0x2,0x4(%esp)
085b8531 +0x123:  mov    %eax,(%esp)
085b8534 +0x126:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
085b8539 +0x12b:  mov    (%eax),%edx
085b853b +0x12d:  add    $0xc,%edx
085b853e +0x130:  mov    (%edx),%ecx
085b8540 +0x132:  lea    -0xd0(%ebp),%edx
085b8546 +0x138:  mov    %edx,0x8(%esp)
085b854a +0x13c:  lea    -0x194(%ebp),%edx
085b8550 +0x142:  mov    %edx,0x4(%esp)
085b8554 +0x146:  mov    %eax,(%esp)
085b8557 +0x149:  call   *%ecx
085b8559 +0x14b:  lea    -0x48(%ebp),%eax
085b855c +0x14e:  lea    -0xd0(%ebp),%edx
085b8562 +0x154:  mov    %edx,0x4(%esp)
085b8566 +0x158:  mov    %eax,(%esp)
085b8569 +0x15b:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
085b856e +0x160:  sub    $0x4,%esp
085b8571 +0x163:  lea    -0x48(%ebp),%eax
085b8574 +0x166:  mov    %eax,(%esp)
085b8577 +0x169:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
085b857c +0x16e:  mov    0x8(%ebp),%edx
085b857f +0x171:  lea    0xddc(%edx),%ecx
085b8585 +0x177:  mov    -0x38(%ebp),%edx
085b8588 +0x17a:  mov    %edx,0x48(%esp)
085b858c +0x17e:  mov    0xc(%ebp),%edx
085b858f +0x181:  mov    %edx,0x44(%esp)
085b8593 +0x185:  mov    (%eax),%edx
085b8595 +0x187:  mov    %edx,0x4(%esp)
085b8599 +0x18b:  mov    0x4(%eax),%edx
085b859c +0x18e:  mov    %edx,0x8(%esp)
085b85a0 +0x192:  mov    0x8(%eax),%edx
085b85a3 +0x195:  mov    %edx,0xc(%esp)
085b85a7 +0x199:  mov    0xc(%eax),%edx
085b85aa +0x19c:  mov    %edx,0x10(%esp)
085b85ae +0x1a0:  mov    0x10(%eax),%edx
085b85b1 +0x1a3:  mov    %edx,0x14(%esp)
085b85b5 +0x1a7:  mov    0x14(%eax),%edx
085b85b8 +0x1aa:  mov    %edx,0x18(%esp)
085b85bc +0x1ae:  mov    0x18(%eax),%edx
085b85bf +0x1b1:  mov    %edx,0x1c(%esp)
085b85c3 +0x1b5:  mov    0x1c(%eax),%edx
085b85c6 +0x1b8:  mov    %edx,0x20(%esp)
085b85ca +0x1bc:  mov    0x20(%eax),%edx
085b85cd +0x1bf:  mov    %edx,0x24(%esp)
085b85d1 +0x1c3:  mov    0x24(%eax),%edx
085b85d4 +0x1c6:  mov    %edx,0x28(%esp)
085b85d8 +0x1ca:  mov    0x28(%eax),%edx
085b85db +0x1cd:  mov    %edx,0x2c(%esp)
085b85df +0x1d1:  mov    0x2c(%eax),%edx
085b85e2 +0x1d4:  mov    %edx,0x30(%esp)
085b85e6 +0x1d8:  mov    0x30(%eax),%edx
085b85e9 +0x1db:  mov    %edx,0x34(%esp)
085b85ed +0x1df:  mov    0x34(%eax),%edx
085b85f0 +0x1e2:  mov    %edx,0x38(%esp)
085b85f4 +0x1e6:  mov    0x38(%eax),%edx
085b85f7 +0x1e9:  mov    %edx,0x3c(%esp)
085b85fb +0x1ed:  movzbl 0x3c(%eax),%eax
085b85ff +0x1f1:  mov    %al,0x40(%esp)
085b8603 +0x1f5:  mov    %ecx,(%esp)
085b8606 +0x1f8:  call   085bf176 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x6d4>  ; global constructors keyed to CParty::cMember::cMember()+0x6d4
085b860b +0x1fd:  movl   $0x0,-0x28(%ebp)
085b8612 +0x204:  mov    0x8(%ebp),%eax
085b8615 +0x207:  mov    0xcac(%eax),%eax
085b861b +0x20d:  test   %eax,%eax
085b861d +0x20f:  je     085b8633 <+0x225>
085b861f +0x211:  mov    0x8(%ebp),%eax
085b8622 +0x214:  mov    0xcac(%eax),%eax
085b8628 +0x21a:  mov    %eax,(%esp)
085b862b +0x21d:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b8630 +0x222:  mov    %eax,-0x28(%ebp)
085b8633 +0x225:  lea    -0x4c(%ebp),%eax
085b8636 +0x228:  lea    -0xd0(%ebp),%edx
085b863c +0x22e:  mov    %edx,0x4(%esp)
085b8640 +0x232:  mov    %eax,(%esp)
085b8643 +0x235:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
085b8648 +0x23a:  sub    $0x4,%esp
085b864b +0x23d:  mov    0x8(%ebp),%eax
085b864e +0x240:  mov    %eax,0x4(%esp)
085b8652 +0x244:  lea    -0x54(%ebp),%eax
085b8655 +0x247:  mov    %eax,(%esp)
085b8658 +0x24a:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
085b865d +0x24f:  mov    -0x28(%ebp),%eax
085b8660 +0x252:  mov    %eax,-0x50(%ebp)
085b8663 +0x255:  lea    -0x70(%ebp),%eax
085b8666 +0x258:  mov    %eax,(%esp)
085b8669 +0x25b:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
085b866e +0x260:  lea    -0x4c(%ebp),%eax
085b8671 +0x263:  mov    %eax,(%esp)
085b8674 +0x266:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
085b8679 +0x26b:  mov    0x7(%eax),%eax
085b867c +0x26e:  mov    %eax,-0x70(%ebp)
085b867f +0x271:  lea    -0x70(%ebp),%eax
085b8682 +0x274:  mov    %eax,0x10(%esp)
085b8686 +0x278:  mov    -0x54(%ebp),%eax
085b8689 +0x27b:  mov    -0x50(%ebp),%edx
085b868c +0x27e:  mov    %eax,0x8(%esp)
085b8690 +0x282:  mov    %edx,0xc(%esp)
085b8694 +0x286:  movl   $0xb,0x4(%esp)
085b869c +0x28e:  mov    0x8(%ebp),%eax
085b869f +0x291:  mov    %eax,(%esp)
085b86a2 +0x294:  call   0859b992 <_ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
085b86a7 +0x299:  lea    -0x4c(%ebp),%eax
085b86aa +0x29c:  mov    %eax,(%esp)
085b86ad +0x29f:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
085b86b2 +0x2a4:  mov    -0x70(%ebp),%edx
085b86b5 +0x2a7:  mov    %edx,0x7(%eax)
085b86b8 +0x2aa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b86bd +0x2af:  mov    0x6160(%eax),%eax
085b86c3 +0x2b5:  mov    0x8(%ebp),%edx
085b86c6 +0x2b8:  lea    0xddc(%edx),%ecx
085b86cc +0x2be:  mov    -0x38(%ebp),%edx
085b86cf +0x2c1:  mov    %edx,0xc(%esp)
085b86d3 +0x2c5:  mov    0xc(%ebp),%edx
085b86d6 +0x2c8:  mov    %edx,0x8(%esp)
085b86da +0x2cc:  mov    %eax,0x4(%esp)
085b86de +0x2d0:  mov    %ecx,(%esp)
085b86e1 +0x2d3:  call   085bf1a8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x706>  ; global constructors keyed to CParty::cMember::cMember()+0x706
085b86e6 +0x2d8:  lea    -0xd0(%ebp),%eax
085b86ec +0x2de:  mov    %eax,(%esp)
085b86ef +0x2e1:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085b86f4 +0x2e6:  jmp    085b898a <+0x57c>
085b86f9 +0x2eb:  mov    %edx,%ebx
085b86fb +0x2ed:  mov    %eax,%esi
085b86fd +0x2ef:  lea    -0xd0(%ebp),%eax
085b8703 +0x2f5:  mov    %eax,(%esp)
085b8706 +0x2f8:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085b870b +0x2fd:  mov    %esi,%eax
085b870d +0x2ff:  mov    %ebx,%edx
085b870f +0x301:  jmp    085b8991 <+0x583>
085b8714 +0x306:  mov    -0x34(%ebp),%eax
085b8717 +0x309:  cmp    -0x2c(%ebp),%eax
085b871a +0x30c:  jae    085b898a <+0x57c>
085b8720 +0x312:  movb   $0x0,-0x15f(%ebp)
085b8727 +0x319:  mov    0x14(%ebp),%eax
085b872a +0x31c:  mov    %al,-0x160(%ebp)
085b8730 +0x322:  mov    $0x3f800000,%eax
085b8735 +0x327:  mov    %eax,-0x15c(%ebp)
085b873b +0x32d:  mov    0x8(%ebp),%eax
085b873e +0x330:  mov    0xcac(%eax),%eax
085b8744 +0x336:  mov    %eax,-0x154(%ebp)
085b874a +0x33c:  movl   $0x0,-0x158(%ebp)
085b8754 +0x346:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b8759 +0x34b:  mov    %eax,(%esp)
085b875c +0x34e:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
085b8761 +0x353:  movl   $0x2,0x4(%esp)
085b8769 +0x35b:  mov    %eax,(%esp)
085b876c +0x35e:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
085b8771 +0x363:  mov    (%eax),%edx
085b8773 +0x365:  add    $0x8,%edx
085b8776 +0x368:  mov    (%edx),%ecx
085b8778 +0x36a:  lea    -0xa0(%ebp),%edx
085b877e +0x370:  mov    %edx,0x8(%esp)
085b8782 +0x374:  lea    -0x194(%ebp),%edx
085b8788 +0x37a:  mov    %edx,0x4(%esp)
085b878c +0x37e:  mov    %eax,(%esp)
085b878f +0x381:  call   *%ecx
085b8791 +0x383:  lea    -0xa0(%ebp),%eax
085b8797 +0x389:  mov    %eax,(%esp)
085b879a +0x38c:  call   0814ad32 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xad1>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xad1
085b879f +0x391:  xor    $0x1,%eax
085b87a2 +0x394:  test   %al,%al
085b87a4 +0x396:  je     085b898a <+0x57c>
085b87aa +0x39c:  lea    -0x44(%ebp),%eax
085b87ad +0x39f:  lea    -0xa0(%ebp),%edx
085b87b3 +0x3a5:  mov    %edx,0x4(%esp)
085b87b7 +0x3a9:  mov    %eax,(%esp)
085b87ba +0x3ac:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
085b87bf +0x3b1:  sub    $0x4,%esp
085b87c2 +0x3b4:  lea    -0x44(%ebp),%eax
085b87c5 +0x3b7:  mov    %eax,(%esp)
085b87c8 +0x3ba:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
085b87cd +0x3bf:  mov    0x8(%ebp),%edx
085b87d0 +0x3c2:  lea    0xddc(%edx),%ecx
085b87d6 +0x3c8:  mov    -0x38(%ebp),%edx
085b87d9 +0x3cb:  mov    %edx,0x48(%esp)
085b87dd +0x3cf:  mov    0xc(%ebp),%edx
085b87e0 +0x3d2:  mov    %edx,0x44(%esp)
085b87e4 +0x3d6:  mov    (%eax),%edx
085b87e6 +0x3d8:  mov    %edx,0x4(%esp)
085b87ea +0x3dc:  mov    0x4(%eax),%edx
085b87ed +0x3df:  mov    %edx,0x8(%esp)
085b87f1 +0x3e3:  mov    0x8(%eax),%edx
085b87f4 +0x3e6:  mov    %edx,0xc(%esp)
085b87f8 +0x3ea:  mov    0xc(%eax),%edx
085b87fb +0x3ed:  mov    %edx,0x10(%esp)
085b87ff +0x3f1:  mov    0x10(%eax),%edx
085b8802 +0x3f4:  mov    %edx,0x14(%esp)
085b8806 +0x3f8:  mov    0x14(%eax),%edx
085b8809 +0x3fb:  mov    %edx,0x18(%esp)
085b880d +0x3ff:  mov    0x18(%eax),%edx
085b8810 +0x402:  mov    %edx,0x1c(%esp)
085b8814 +0x406:  mov    0x1c(%eax),%edx
085b8817 +0x409:  mov    %edx,0x20(%esp)
085b881b +0x40d:  mov    0x20(%eax),%edx
085b881e +0x410:  mov    %edx,0x24(%esp)
085b8822 +0x414:  mov    0x24(%eax),%edx
085b8825 +0x417:  mov    %edx,0x28(%esp)
085b8829 +0x41b:  mov    0x28(%eax),%edx
085b882c +0x41e:  mov    %edx,0x2c(%esp)
085b8830 +0x422:  mov    0x2c(%eax),%edx
085b8833 +0x425:  mov    %edx,0x30(%esp)
085b8837 +0x429:  mov    0x30(%eax),%edx
085b883a +0x42c:  mov    %edx,0x34(%esp)
085b883e +0x430:  mov    0x34(%eax),%edx
085b8841 +0x433:  mov    %edx,0x38(%esp)
085b8845 +0x437:  mov    0x38(%eax),%edx
085b8848 +0x43a:  mov    %edx,0x3c(%esp)
085b884c +0x43e:  movzbl 0x3c(%eax),%eax
085b8850 +0x442:  mov    %al,0x40(%esp)
085b8854 +0x446:  mov    %ecx,(%esp)
085b8857 +0x449:  call   085bf176 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x6d4>  ; global constructors keyed to CParty::cMember::cMember()+0x6d4
085b885c +0x44e:  lea    -0x40(%ebp),%eax
085b885f +0x451:  lea    -0xa0(%ebp),%edx
085b8865 +0x457:  mov    %edx,0x4(%esp)
085b8869 +0x45b:  mov    %eax,(%esp)
085b886c +0x45e:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
085b8871 +0x463:  sub    $0x4,%esp
085b8874 +0x466:  lea    -0x40(%ebp),%eax
085b8877 +0x469:  mov    %eax,(%esp)
085b887a +0x46c:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
085b887f +0x471:  mov    (%eax),%edx
085b8881 +0x473:  mov    %edx,-0x10d(%ebp)
085b8887 +0x479:  mov    0x4(%eax),%edx
085b888a +0x47c:  mov    %edx,-0x109(%ebp)
085b8890 +0x482:  mov    0x8(%eax),%edx
085b8893 +0x485:  mov    %edx,-0x105(%ebp)
085b8899 +0x48b:  mov    0xc(%eax),%edx
085b889c +0x48e:  mov    %edx,-0x101(%ebp)
085b88a2 +0x494:  mov    0x10(%eax),%edx
085b88a5 +0x497:  mov    %edx,-0xfd(%ebp)
085b88ab +0x49d:  mov    0x14(%eax),%edx
085b88ae +0x4a0:  mov    %edx,-0xf9(%ebp)
085b88b4 +0x4a6:  mov    0x18(%eax),%edx
085b88b7 +0x4a9:  mov    %edx,-0xf5(%ebp)
085b88bd +0x4af:  mov    0x1c(%eax),%edx
085b88c0 +0x4b2:  mov    %edx,-0xf1(%ebp)
085b88c6 +0x4b8:  mov    0x20(%eax),%edx
085b88c9 +0x4bb:  mov    %edx,-0xed(%ebp)
085b88cf +0x4c1:  mov    0x24(%eax),%edx
085b88d2 +0x4c4:  mov    %edx,-0xe9(%ebp)
085b88d8 +0x4ca:  mov    0x28(%eax),%edx
085b88db +0x4cd:  mov    %edx,-0xe5(%ebp)
085b88e1 +0x4d3:  mov    0x2c(%eax),%edx
085b88e4 +0x4d6:  mov    %edx,-0xe1(%ebp)
085b88ea +0x4dc:  mov    0x30(%eax),%edx
085b88ed +0x4df:  mov    %edx,-0xdd(%ebp)
085b88f3 +0x4e5:  mov    0x34(%eax),%edx
085b88f6 +0x4e8:  mov    %edx,-0xd9(%ebp)
085b88fc +0x4ee:  mov    0x38(%eax),%edx
085b88ff +0x4f1:  mov    %edx,-0xd5(%ebp)
085b8905 +0x4f7:  movzbl 0x3c(%eax),%eax
085b8909 +0x4fb:  mov    %al,-0xd1(%ebp)
085b890f +0x501:  mov    -0x10b(%ebp),%eax
085b8915 +0x507:  mov    %eax,%ebx
085b8917 +0x509:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b891c +0x50e:  mov    0xc(%eax),%eax
085b891f +0x511:  mov    %ebx,0x4(%esp)
085b8923 +0x515:  mov    %eax,(%esp)
085b8926 +0x518:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
085b892b +0x51d:  mov    %eax,-0x24(%ebp)
085b892e +0x520:  cmpl   $0x0,-0x24(%ebp)
085b8932 +0x524:  jne    085b893b <+0x52d>
085b8934 +0x526:  mov    $0x0,%ebx
085b8939 +0x52b:  jmp    085b89a9 <+0x59b>
085b893b +0x52d:  mov    -0x24(%ebp),%eax
085b893e +0x530:  mov    %eax,(%esp)
085b8941 +0x533:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085b8946 +0x538:  mov    %eax,%ebx
085b8948 +0x53a:  mov    -0x24(%ebp),%eax
085b894b +0x53d:  mov    %eax,(%esp)
085b894e +0x540:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085b8953 +0x545:  mov    %eax,%esi
085b8955 +0x547:  movzbl -0x10c(%ebp),%eax
085b895c +0x54e:  movzbl %al,%ecx
085b895f +0x551:  mov    0xc(%ebp),%edx
085b8962 +0x554:  mov    0x8(%ebp),%edi
085b8965 +0x557:  mov    %edx,%eax
085b8967 +0x559:  add    %eax,%eax
085b8969 +0x55b:  add    %edx,%eax
085b896b +0x55d:  shl    $0x3,%eax
085b896e +0x560:  lea    (%edi,%eax,1),%eax
085b8971 +0x563:  add    $0x78,%eax
085b8974 +0x566:  mov    (%eax),%eax
085b8976 +0x568:  mov    %ebx,0xc(%esp)
085b897a +0x56c:  mov    %esi,0x8(%esp)
085b897e +0x570:  mov    %ecx,0x4(%esp)
085b8982 +0x574:  mov    %eax,(%esp)
085b8985 +0x577:  call   08550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>  ; CLuckPoint::UseLuckPoint(CUser*, int, int, int)
085b898a +0x57c:  mov    $0x1,%ebx
085b898f +0x581:  jmp    085b89a9 <+0x59b>
085b8991 +0x583:  mov    %edx,%ebx
085b8993 +0x585:  mov    %eax,%esi
085b8995 +0x587:  lea    -0xa0(%ebp),%eax
085b899b +0x58d:  mov    %eax,(%esp)
085b899e +0x590:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085b89a3 +0x595:  mov    %esi,%eax
085b89a5 +0x597:  mov    %ebx,%edx
085b89a7 +0x599:  jmp    085b89cd <+0x5bf>
085b89a9 +0x59b:  lea    -0xa0(%ebp),%eax
085b89af +0x5a1:  mov    %eax,(%esp)
085b89b2 +0x5a4:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085b89b7 +0x5a9:  test   %ebx,%ebx
085b89b9 +0x5ab:  lea    -0x194(%ebp),%eax
085b89bf +0x5b1:  mov    %eax,(%esp)
085b89c2 +0x5b4:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
085b89c7 +0x5b9:  addl   $0x1,-0x38(%ebp)
085b89cb +0x5bd:  jmp    085b89eb <+0x5dd>
085b89cd +0x5bf:  mov    %edx,%ebx
085b89cf +0x5c1:  mov    %eax,%esi
085b89d1 +0x5c3:  lea    -0x194(%ebp),%eax
085b89d7 +0x5c9:  mov    %eax,(%esp)
085b89da +0x5cc:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
085b89df +0x5d1:  mov    %esi,%eax
085b89e1 +0x5d3:  mov    %ebx,%edx
085b89e3 +0x5d5:  mov    %eax,(%esp)
085b89e6 +0x5d8:  call   08ae3750 <_Unwind_Resume>
085b89eb +0x5dd:  mov    -0x38(%ebp),%eax
085b89ee +0x5e0:  cmp    0x10(%ebp),%eax
085b89f1 +0x5e3:  setl   %al
085b89f4 +0x5e6:  test   %al,%al
085b89f6 +0x5e8:  jne    085b844e <+0x40>
085b89fc +0x5ee:  cmpb   $0x0,-0x19c(%ebp)
085b8a03 +0x5f5:  je     085b8ba3 <+0x795>
085b8a09 +0x5fb:  mov    0x8(%ebp),%eax
085b8a0c +0x5fe:  mov    0xcac(%eax),%eax
085b8a12 +0x604:  movzbl 0x89f(%eax),%eax
085b8a19 +0x60b:  cmp    $0x2,%al
085b8a1b +0x60d:  jne    085b8ba3 <+0x795>
085b8a21 +0x613:  mov    0x8(%ebp),%eax
085b8a24 +0x616:  add    $0xddc,%eax
085b8a29 +0x61b:  mov    %eax,(%esp)
085b8a2c +0x61e:  call   083070ca <_ZN13CBattle_Field21CBloodClearRewardData21getUltimateRewardItemEv>  ; CBattle_Field::CBloodClearRewardData::getUltimateRewardItem()
085b8a31 +0x623:  mov    %eax,-0x20(%ebp)
085b8a34 +0x626:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b8a39 +0x62b:  mov    0xc(%eax),%eax
085b8a3c +0x62e:  mov    -0x20(%ebp),%edx
085b8a3f +0x631:  mov    %edx,0x4(%esp)
085b8a43 +0x635:  mov    %eax,(%esp)
085b8a46 +0x638:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
085b8a4b +0x63d:  mov    %eax,-0x1c(%ebp)
085b8a4e +0x640:  cmpl   $0x0,-0x1c(%ebp)
085b8a52 +0x644:  je     085b8ba2 <+0x794>
085b8a58 +0x64a:  lea    -0xd0(%ebp),%eax
085b8a5e +0x650:  mov    %eax,(%esp)
085b8a61 +0x653:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
085b8a66 +0x658:  lea    -0x14a(%ebp),%eax
085b8a6c +0x65e:  mov    %eax,(%esp)
085b8a6f +0x661:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085b8a74 +0x666:  mov    -0x20(%ebp),%eax
085b8a77 +0x669:  mov    %eax,-0x148(%ebp)
085b8a7d +0x66f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b8a82 +0x674:  mov    0xc(%eax),%eax
085b8a85 +0x677:  movl   $0x1,0xc(%esp)
085b8a8d +0x67f:  lea    -0x14a(%ebp),%edx
085b8a93 +0x685:  mov    %edx,0x8(%esp)
085b8a97 +0x689:  movl   $0x1,0x4(%esp)
085b8a9f +0x691:  mov    %eax,(%esp)
085b8aa2 +0x694:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085b8aa7 +0x699:  lea    -0x14a(%ebp),%eax
085b8aad +0x69f:  mov    %eax,0x4(%esp)
085b8ab1 +0x6a3:  lea    -0xd0(%ebp),%eax
085b8ab7 +0x6a9:  mov    %eax,(%esp)
085b8aba +0x6ac:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
085b8abf +0x6b1:  mov    0x10(%ebp),%eax
085b8ac2 +0x6b4:  lea    -0x1(%eax),%ebx
085b8ac5 +0x6b7:  lea    -0x3c(%ebp),%eax
085b8ac8 +0x6ba:  lea    -0xd0(%ebp),%edx
085b8ace +0x6c0:  mov    %edx,0x4(%esp)
085b8ad2 +0x6c4:  mov    %eax,(%esp)
085b8ad5 +0x6c7:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
085b8ada +0x6cc:  sub    $0x4,%esp
085b8add +0x6cf:  lea    -0x3c(%ebp),%eax
085b8ae0 +0x6d2:  mov    %eax,(%esp)
085b8ae3 +0x6d5:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
085b8ae8 +0x6da:  mov    0x8(%ebp),%edx
085b8aeb +0x6dd:  lea    0xddc(%edx),%ecx
085b8af1 +0x6e3:  mov    %ebx,0x48(%esp)
085b8af5 +0x6e7:  mov    0xc(%ebp),%edx
085b8af8 +0x6ea:  mov    %edx,0x44(%esp)
085b8afc +0x6ee:  mov    (%eax),%edx
085b8afe +0x6f0:  mov    %edx,0x4(%esp)
085b8b02 +0x6f4:  mov    0x4(%eax),%edx
085b8b05 +0x6f7:  mov    %edx,0x8(%esp)
085b8b09 +0x6fb:  mov    0x8(%eax),%edx
085b8b0c +0x6fe:  mov    %edx,0xc(%esp)
085b8b10 +0x702:  mov    0xc(%eax),%edx
085b8b13 +0x705:  mov    %edx,0x10(%esp)
085b8b17 +0x709:  mov    0x10(%eax),%edx
085b8b1a +0x70c:  mov    %edx,0x14(%esp)
085b8b1e +0x710:  mov    0x14(%eax),%edx
085b8b21 +0x713:  mov    %edx,0x18(%esp)
085b8b25 +0x717:  mov    0x18(%eax),%edx
085b8b28 +0x71a:  mov    %edx,0x1c(%esp)
085b8b2c +0x71e:  mov    0x1c(%eax),%edx
085b8b2f +0x721:  mov    %edx,0x20(%esp)
085b8b33 +0x725:  mov    0x20(%eax),%edx
085b8b36 +0x728:  mov    %edx,0x24(%esp)
085b8b3a +0x72c:  mov    0x24(%eax),%edx
085b8b3d +0x72f:  mov    %edx,0x28(%esp)
085b8b41 +0x733:  mov    0x28(%eax),%edx
085b8b44 +0x736:  mov    %edx,0x2c(%esp)
085b8b48 +0x73a:  mov    0x2c(%eax),%edx
085b8b4b +0x73d:  mov    %edx,0x30(%esp)
085b8b4f +0x741:  mov    0x30(%eax),%edx
085b8b52 +0x744:  mov    %edx,0x34(%esp)
085b8b56 +0x748:  mov    0x34(%eax),%edx
085b8b59 +0x74b:  mov    %edx,0x38(%esp)
085b8b5d +0x74f:  mov    0x38(%eax),%edx
085b8b60 +0x752:  mov    %edx,0x3c(%esp)
085b8b64 +0x756:  movzbl 0x3c(%eax),%eax
085b8b68 +0x75a:  mov    %al,0x40(%esp)
085b8b6c +0x75e:  mov    %ecx,(%esp)
085b8b6f +0x761:  call   085bf176 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x6d4>  ; global constructors keyed to CParty::cMember::cMember()+0x6d4
085b8b74 +0x766:  lea    -0xd0(%ebp),%eax
085b8b7a +0x76c:  mov    %eax,(%esp)
085b8b7d +0x76f:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085b8b82 +0x774:  jmp    085b8ba3 <+0x795>
085b8b84 +0x776:  mov    %edx,%ebx
085b8b86 +0x778:  mov    %eax,%esi
085b8b88 +0x77a:  lea    -0xd0(%ebp),%eax
085b8b8e +0x780:  mov    %eax,(%esp)
085b8b91 +0x783:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
085b8b96 +0x788:  mov    %esi,%eax
085b8b98 +0x78a:  mov    %ebx,%edx
085b8b9a +0x78c:  mov    %eax,(%esp)
085b8b9d +0x78f:  call   08ae3750 <_Unwind_Resume>
085b8ba2 +0x794:  nop
085b8ba3 +0x795:  lea    -0xc(%ebp),%esp
085b8ba6 +0x798:  add    $0x0,%esp
085b8ba9 +0x79b:  pop    %ebx
085b8baa +0x79c:  pop    %esi
085b8bab +0x79d:  pop    %edi
085b8bac +0x79e:  pop    %ebp
085b8bad +0x79f:  ret
```

## 反编译 C

```c
// CParty::generateBloodRewardItem @ 0x85b840e

/* CParty::generateBloodRewardItem(int, int, unsigned int, unsigned int, bool) */

void __thiscall
CParty::generateBloodRewardItem
          (CParty *this,int param_1,int param_2,uint param_3,uint param_4,bool param_5)

{
  undefined4 uVar1;
  char cVar2;
  CDataManager *pCVar3;
  CItemGeneratorMgr *pCVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  stGenerateRefData_t local_198 [52];
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  Inven_Item local_14e [2];
  int local_14c;
  undefined1 local_111;
  byte bStack_110;
  undefined2 uStack_10f;
  undefined2 local_10d;
  undefined2 uStack_10b;
  undefined4 local_109;
  undefined4 local_105;
  undefined4 local_101;
  undefined4 local_fd;
  undefined4 local_f9;
  undefined4 local_f5;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined4 local_e9;
  undefined4 local_e5;
  undefined4 local_e1;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined1 local_d5;
  stGenerateResult_t local_d4 [48];
  stGenerateResult_t local_a4 [12];
  CLuckPoint aCStack_98 [36];
  undefined4 local_74 [7];
  undefined4 local_58;
  undefined4 local_54;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_50 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_4c [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_48 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_44 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_40 [4];
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  CItem *local_28;
  int local_24;
  int local_20;
  
  CBattle_Field::CBloodClearRewardData::setRewardItem
            ((CBloodClearRewardData *)(this + 0xddc),param_1,param_2);
  for (local_3c = 0; local_3c < param_2; local_3c = local_3c + 1) {
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_198);
                    /* try { // try from 085b8465 to 085b8469 has its CatchHandler @ 085b89cd */
    WongWork::stGenerateResult_t::stGenerateResult_t(local_a4);
                    /* try { // try from 085b8485 to 085b851b has its CatchHandler @ 085b8991 */
    GetLuckPoint(this,aCStack_98,false);
    local_38 = get_rand_int(1000);
    iVar7 = G_CDataManager();
    local_34 = *(int *)(iVar7 + 0x6154) * param_4;
    iVar7 = G_CDataManager();
    local_30 = *(int *)(iVar7 + 0x6158) * param_4;
    if (local_38 < local_34) {
      local_163 = 0;
      local_162 = 1;
      local_160 = 1;
      local_15c = 0x10001;
      local_158 = 0x10001;
      local_164 = (char)param_3;
      WongWork::stGenerateResult_t::stGenerateResult_t(local_d4);
                    /* try { // try from 085b851c to 085b86bc has its CatchHandler @ 085b86f9 */
      pCVar3 = (CDataManager *)G_CDataManager();
      pCVar4 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar3);
      piVar5 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar4,2);
      (**(code **)(*piVar5 + 0xc))(piVar5,local_198,local_d4);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      puVar8 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_4c);
      CBattle_Field::CBloodClearRewardData::setRewarItemCopy
                (this + 0xddc,*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],puVar8[5],puVar8[6],
                 puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],puVar8[0xd],
                 puVar8[0xe],*(undefined1 *)(puVar8 + 0xf),param_1,local_3c);
      local_2c = 0;
      if (*(int *)(this + 0xcac) != 0) {
        local_2c = CDungeon::get_index(*(CDungeon **)(this + 0xcac));
      }
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_58,this);
      local_54 = local_2c;
      QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_74);
      iVar7 = __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator*(local_50);
      local_74[0] = *(undefined4 *)(iVar7 + 7);
      set_basic_reward(this,0xb,local_58,local_54,local_74);
      iVar7 = __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator*(local_50);
      *(undefined4 *)(iVar7 + 7) = local_74[0];
      iVar7 = G_CDataManager();
      CBattle_Field::CBloodClearRewardData::setRewardItemAddInfo
                ((CBloodClearRewardData *)(this + 0xddc),*(float *)(iVar7 + 0x6160),param_1,local_3c
                );
                    /* try { // try from 085b86ef to 085b86f3 has its CatchHandler @ 085b8991 */
      WongWork::stGenerateResult_t::~stGenerateResult_t(local_d4);
    }
    else if (local_38 < local_30) {
      local_163 = 0;
      local_160 = 0x3f800000;
      local_158 = *(undefined4 *)(this + 0xcac);
      local_15c = 0;
      local_164 = (char)param_3;
                    /* try { // try from 085b8754 to 085b8989 has its CatchHandler @ 085b8991 */
      pCVar3 = (CDataManager *)G_CDataManager();
      pCVar4 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar3);
      piVar5 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar4,2);
      (**(code **)(*piVar5 + 8))(piVar5,local_198,local_a4);
      cVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::empty();
      if (cVar2 != '\x01') {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        puVar8 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*(local_48);
        CBattle_Field::CBloodClearRewardData::setRewarItemCopy
                  (this + 0xddc,*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],puVar8[5],puVar8[6],
                   puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],puVar8[0xd],
                   puVar8[0xe],*(undefined1 *)(puVar8 + 0xf),param_1,local_3c);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        puVar8 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*(local_44);
        uVar1 = *puVar8;
        local_111 = (undefined1)uVar1;
        bStack_110 = (byte)((uint)uVar1 >> 8);
        uStack_10f = (undefined2)((uint)uVar1 >> 0x10);
        local_10d = (undefined2)puVar8[1];
        uStack_10b = (undefined2)((uint)puVar8[1] >> 0x10);
        local_109 = puVar8[2];
        local_105 = puVar8[3];
        local_101 = puVar8[4];
        local_fd = puVar8[5];
        local_f9 = puVar8[6];
        local_f5 = puVar8[7];
        local_f1 = puVar8[8];
        local_ed = puVar8[9];
        local_e9 = puVar8[10];
        local_e5 = puVar8[0xb];
        local_e1 = puVar8[0xc];
        local_dd = puVar8[0xd];
        local_d9 = puVar8[0xe];
        local_d5 = *(undefined1 *)(puVar8 + 0xf);
        iVar7 = CONCAT22(local_10d,uStack_10f);
        iVar6 = G_CDataManager();
        local_28 = (CItem *)CItemList::find_item(*(CItemList **)(iVar6 + 0xc),iVar7);
        if (local_28 != (CItem *)0x0) {
          iVar7 = CItem::get_grade(local_28);
          iVar6 = CItem::get_rarity(local_28);
          CLuckPoint::UseLuckPoint
                    (*(CUser **)(this + param_1 * 0x18 + 0x78),(uint)bStack_110,iVar6,iVar7);
        }
      }
    }
                    /* try { // try from 085b89b2 to 085b89b6 has its CatchHandler @ 085b89cd */
    WongWork::stGenerateResult_t::~stGenerateResult_t(local_a4);
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_198);
  }
  if ((param_5) && (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\x02')) {
    local_24 = CBattle_Field::CBloodClearRewardData::getUltimateRewardItem
                         ((CBloodClearRewardData *)(this + 0xddc));
    iVar7 = G_CDataManager();
    local_20 = CItemList::find_item(*(CItemList **)(iVar7 + 0xc),local_24);
    if (local_20 != 0) {
      WongWork::stGenerateResult_t::stGenerateResult_t(local_d4);
      Inven_Item::Inven_Item(local_14e);
      local_14c = local_24;
                    /* try { // try from 085b8a7d to 085b8ad9 has its CatchHandler @ 085b8b84 */
      iVar7 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar7 + 0xc),1,local_14e,1);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_d4,local_14e);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      puVar8 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_40);
      CBattle_Field::CBloodClearRewardData::setRewarItemCopy
                (this + 0xddc,*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],puVar8[5],puVar8[6],
                 puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],puVar8[0xd],
                 puVar8[0xe],*(undefined1 *)(puVar8 + 0xf),param_1,param_2 + -1);
      WongWork::stGenerateResult_t::~stGenerateResult_t(local_d4);
    }
  }
  return;
}
```
