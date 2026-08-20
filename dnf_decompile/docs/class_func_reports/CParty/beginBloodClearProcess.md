# beginBloodClearProcess

`_ZN6CParty22beginBloodClearProcessEb`

`CParty::beginBloodClearProcess(bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b75d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b75d4  _ZN6CParty22beginBloodClearProcessEb
#           CParty::beginBloodClearProcess(bool)
# range [0x085b75d4, 0x085b7c9d]
085b75d4 +0x000:  push   %ebp
085b75d5 +0x001:  mov    %esp,%ebp
085b75d7 +0x003:  push   %esi
085b75d8 +0x004:  push   %ebx
085b75d9 +0x005:  sub    $0xb0,%esp
085b75df +0x00b:  mov    0xc(%ebp),%eax
085b75e2 +0x00e:  mov    %al,-0x7c(%ebp)
085b75e5 +0x011:  mov    0x8(%ebp),%eax
085b75e8 +0x014:  add    $0xb24,%eax
085b75ed +0x019:  mov    %eax,(%esp)
085b75f0 +0x01c:  call   0822cf18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25c2
085b75f5 +0x021:  cmp    $0x2,%eax
085b75f8 +0x024:  setg   %al
085b75fb +0x027:  test   %al,%al
085b75fd +0x029:  jne    085b7c90 <+0x6bc>
085b7603 +0x02f:  movl   $0x0,-0x30(%ebp)
085b760a +0x036:  movl   $0x0,-0x3c(%ebp)
085b7611 +0x03d:  movl   $0x0,-0x2c(%ebp)
085b7618 +0x044:  movl   $0x0,-0x28(%ebp)
085b761f +0x04b:  movl   $0x0,-0x24(%ebp)
085b7626 +0x052:  mov    0x8(%ebp),%eax
085b7629 +0x055:  add    $0xddc,%eax
085b762e +0x05a:  mov    %eax,(%esp)
085b7631 +0x05d:  call   0830ec5a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x83f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x83f
085b7636 +0x062:  mov    %eax,-0x30(%ebp)
085b7639 +0x065:  cmpb   $0x0,-0x7c(%ebp)
085b763d +0x069:  je     085b766c <+0x98>
085b763f +0x06b:  mov    0x8(%ebp),%eax
085b7642 +0x06e:  add    $0xb24,%eax
085b7647 +0x073:  mov    %eax,(%esp)
085b764a +0x076:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
085b764f +0x07b:  mov    %eax,-0x3c(%ebp)
085b7652 +0x07e:  mov    -0x3c(%ebp),%eax
085b7655 +0x081:  mov    0x8(%ebp),%edx
085b7658 +0x084:  add    $0xddc,%edx
085b765e +0x08a:  mov    %eax,0x4(%esp)
085b7662 +0x08e:  mov    %edx,(%esp)
085b7665 +0x091:  call   085bf0f2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x650>  ; global constructors keyed to CParty::cMember::cMember()+0x650
085b766a +0x096:  jmp    085b767f <+0xab>
085b766c +0x098:  mov    0x8(%ebp),%eax
085b766f +0x09b:  add    $0xddc,%eax
085b7674 +0x0a0:  mov    %eax,(%esp)
085b7677 +0x0a3:  call   085bf0e6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x644>  ; global constructors keyed to CParty::cMember::cMember()+0x644
085b767c +0x0a8:  mov    %eax,-0x3c(%ebp)
085b767f +0x0ab:  mov    0x8(%ebp),%eax
085b7682 +0x0ae:  add    $0xb24,%eax
085b7687 +0x0b3:  movl   $0x3,0x4(%esp)
085b768f +0x0bb:  mov    %eax,(%esp)
085b7692 +0x0be:  call   085bf0b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x616>  ; global constructors keyed to CParty::cMember::cMember()+0x616
085b7697 +0x0c3:  xor    $0x1,%eax
085b769a +0x0c6:  test   %al,%al
085b769c +0x0c8:  jne    085b7c93 <+0x6bf>
085b76a2 +0x0ce:  cmpb   $0x0,-0x7c(%ebp)
085b76a6 +0x0d2:  je     085b7700 <+0x12c>
085b76a8 +0x0d4:  mov    0x8(%ebp),%eax
085b76ab +0x0d7:  mov    0xcac(%eax),%eax
085b76b1 +0x0dd:  movzbl 0x89f(%eax),%eax
085b76b8 +0x0e4:  cmp    $0x2,%al
085b76ba +0x0e6:  jne    085b7700 <+0x12c>
085b76bc +0x0e8:  mov    0x8(%ebp),%eax
085b76bf +0x0eb:  add    $0xb24,%eax
085b76c4 +0x0f0:  mov    %eax,(%esp)
085b76c7 +0x0f3:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
085b76cc +0x0f8:  sub    $0x1,%eax
085b76cf +0x0fb:  cwtl
085b76d0 +0x0fc:  mov    0x8(%ebp),%edx
085b76d3 +0x0ff:  add    $0xb24,%edx
085b76d9 +0x105:  mov    %eax,0x4(%esp)
085b76dd +0x109:  mov    %edx,(%esp)
085b76e0 +0x10c:  call   083061b6 <_ZN13CBattle_Field22getNextRoundDifficultyEs>  ; CBattle_Field::getNextRoundDifficulty(short)
085b76e5 +0x111:  mov    %eax,-0x20(%ebp)
085b76e8 +0x114:  mov    0x8(%ebp),%eax
085b76eb +0x117:  lea    0xddc(%eax),%edx
085b76f1 +0x11d:  mov    -0x20(%ebp),%eax
085b76f4 +0x120:  mov    %eax,0x4(%esp)
085b76f8 +0x124:  mov    %edx,(%esp)
085b76fb +0x127:  call   08307096 <_ZN13CBattle_Field21CBloodClearRewardData26incUltimateRoundClearPointEi>  ; CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint(int)
085b7700 +0x12c:  movl   $0x0,-0x1c(%ebp)
085b7707 +0x133:  jmp    085b7c7f <+0x6ab>
085b770c +0x138:  mov    -0x1c(%ebp),%eax
085b770f +0x13b:  mov    %eax,0x4(%esp)
085b7713 +0x13f:  mov    0x8(%ebp),%eax
085b7716 +0x142:  mov    %eax,(%esp)
085b7719 +0x145:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b771e +0x14a:  test   %eax,%eax
085b7720 +0x14c:  je     085b773b <+0x167>
085b7722 +0x14e:  mov    -0x1c(%ebp),%eax
085b7725 +0x151:  mov    %eax,0x4(%esp)
085b7729 +0x155:  mov    0x8(%ebp),%eax
085b772c +0x158:  mov    %eax,(%esp)
085b772f +0x15b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b7734 +0x160:  xor    $0x1,%eax
085b7737 +0x163:  test   %al,%al
085b7739 +0x165:  je     085b7742 <+0x16e>
085b773b +0x167:  mov    $0x1,%eax
085b7740 +0x16c:  jmp    085b7747 <+0x173>
085b7742 +0x16e:  mov    $0x0,%eax
085b7747 +0x173:  test   %al,%al
085b7749 +0x175:  jne    085b7c7a <+0x6a6>
085b774f +0x17b:  mov    -0x1c(%ebp),%eax
085b7752 +0x17e:  mov    %eax,0x4(%esp)
085b7756 +0x182:  mov    0x8(%ebp),%eax
085b7759 +0x185:  mov    %eax,(%esp)
085b775c +0x188:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b7761 +0x18d:  movl   $0x0,0x4(%esp)
085b7769 +0x195:  mov    %eax,(%esp)
085b776c +0x198:  call   08469a5c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x13f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x13f
085b7771 +0x19d:  movzbl -0x7c(%ebp),%eax
085b7775 +0x1a1:  mov    -0x1c(%ebp),%edx
085b7778 +0x1a4:  mov    %edx,0x8(%esp)
085b777c +0x1a8:  mov    %eax,0x4(%esp)
085b7780 +0x1ac:  mov    0x8(%ebp),%eax
085b7783 +0x1af:  mov    %eax,(%esp)
085b7786 +0x1b2:  call   085b7c9e <_ZN6CParty12onBloodClearEbi>  ; CParty::onBloodClear(bool, int)
085b778b +0x1b7:  mov    -0x1c(%ebp),%edx
085b778e +0x1ba:  mov    0x8(%ebp),%ecx
085b7791 +0x1bd:  mov    %edx,%eax
085b7793 +0x1bf:  add    %eax,%eax
085b7795 +0x1c1:  add    %edx,%eax
085b7797 +0x1c3:  shl    $0x3,%eax
085b779a +0x1c6:  lea    (%ecx,%eax,1),%eax
085b779d +0x1c9:  add    $0x78,%eax
085b77a0 +0x1cc:  mov    (%eax),%eax
085b77a2 +0x1ce:  movl   $0x0,0x4(%esp)
085b77aa +0x1d6:  mov    %eax,(%esp)
085b77ad +0x1d9:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
085b77b2 +0x1de:  mov    -0x1c(%ebp),%edx
085b77b5 +0x1e1:  mov    0x8(%ebp),%ecx
085b77b8 +0x1e4:  mov    %edx,%eax
085b77ba +0x1e6:  add    %eax,%eax
085b77bc +0x1e8:  add    %edx,%eax
085b77be +0x1ea:  shl    $0x3,%eax
085b77c1 +0x1ed:  lea    (%ecx,%eax,1),%eax
085b77c4 +0x1f0:  add    $0x78,%eax
085b77c7 +0x1f3:  mov    (%eax),%eax
085b77c9 +0x1f5:  movl   $0x0,0x4(%esp)
085b77d1 +0x1fd:  mov    %eax,(%esp)
085b77d4 +0x200:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
085b77d9 +0x205:  mov    -0x1c(%ebp),%edx
085b77dc +0x208:  mov    0x8(%ebp),%ecx
085b77df +0x20b:  mov    %edx,%eax
085b77e1 +0x20d:  add    %eax,%eax
085b77e3 +0x20f:  add    %edx,%eax
085b77e5 +0x211:  shl    $0x3,%eax
085b77e8 +0x214:  lea    (%ecx,%eax,1),%eax
085b77eb +0x217:  add    $0x78,%eax
085b77ee +0x21a:  mov    (%eax),%eax
085b77f0 +0x21c:  movl   $0x0,0x4(%esp)
085b77f8 +0x224:  mov    %eax,(%esp)
085b77fb +0x227:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
085b7800 +0x22c:  mov    -0x1c(%ebp),%edx
085b7803 +0x22f:  mov    0x8(%ebp),%ecx
085b7806 +0x232:  mov    %edx,%eax
085b7808 +0x234:  add    %eax,%eax
085b780a +0x236:  add    %edx,%eax
085b780c +0x238:  shl    $0x3,%eax
085b780f +0x23b:  lea    (%ecx,%eax,1),%eax
085b7812 +0x23e:  add    $0x78,%eax
085b7815 +0x241:  mov    (%eax),%eax
085b7817 +0x243:  movl   $0x0,0x4(%esp)
085b781f +0x24b:  mov    %eax,(%esp)
085b7822 +0x24e:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
085b7827 +0x253:  movl   $0x0,-0x18(%ebp)
085b782e +0x25a:  mov    0x8(%ebp),%eax
085b7831 +0x25d:  add    $0xb24,%eax
085b7836 +0x262:  mov    %eax,(%esp)
085b7839 +0x265:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b783e +0x26a:  mov    -0x3c(%ebp),%ecx
085b7841 +0x26d:  mov    -0x30(%ebp),%edx
085b7844 +0x270:  mov    %eax,0x10(%esp)
085b7848 +0x274:  mov    %ecx,0xc(%esp)
085b784c +0x278:  mov    %edx,0x8(%esp)
085b7850 +0x27c:  mov    -0x1c(%ebp),%eax
085b7853 +0x27f:  mov    %eax,0x4(%esp)
085b7857 +0x283:  mov    0x8(%ebp),%eax
085b785a +0x286:  mov    %eax,(%esp)
085b785d +0x289:  call   085b8bae <_ZN6CParty23checkBloodRenewMyRecordEiiii>  ; CParty::checkBloodRenewMyRecord(int, int, int, int)
085b7862 +0x28e:  mov    -0x3c(%ebp),%edx
085b7865 +0x291:  mov    %edx,%eax
085b7867 +0x293:  shl    $0x2,%eax
085b786a +0x296:  add    %edx,%eax
085b786c +0x298:  add    %eax,%eax
085b786e +0x29a:  mov    %eax,%ebx
085b7870 +0x29c:  mov    0x8(%ebp),%eax
085b7873 +0x29f:  add    $0xb24,%eax
085b7878 +0x2a4:  mov    %eax,(%esp)
085b787b +0x2a7:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
085b7880 +0x2ac:  mov    %eax,-0x8c(%ebp)
085b7886 +0x2b2:  mov    %ebx,%edx
085b7888 +0x2b4:  mov    %edx,%eax
085b788a +0x2b6:  sar    $0x1f,%edx
085b788d +0x2b9:  idivl  -0x8c(%ebp)
085b7893 +0x2bf:  mov    %eax,-0x14(%ebp)
085b7896 +0x2c2:  cmpl   $0x0,-0x14(%ebp)
085b789a +0x2c6:  jne    085b78a3 <+0x2cf>
085b789c +0x2c8:  movl   $0x1,-0x14(%ebp)
085b78a3 +0x2cf:  movzbl -0x7c(%ebp),%esi
085b78a7 +0x2d3:  movl   $0xa,-0x38(%ebp)
085b78ae +0x2da:  lea    -0x3c(%ebp),%eax
085b78b1 +0x2dd:  mov    %eax,0x4(%esp)
085b78b5 +0x2e1:  lea    -0x38(%ebp),%eax
085b78b8 +0x2e4:  mov    %eax,(%esp)
085b78bb +0x2e7:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085b78c0 +0x2ec:  mov    (%eax),%eax
085b78c2 +0x2ee:  mov    %eax,%ebx
085b78c4 +0x2f0:  mov    -0x1c(%ebp),%edx
085b78c7 +0x2f3:  mov    0x8(%ebp),%ecx
085b78ca +0x2f6:  mov    %edx,%eax
085b78cc +0x2f8:  add    %eax,%eax
085b78ce +0x2fa:  add    %edx,%eax
085b78d0 +0x2fc:  shl    $0x3,%eax
085b78d3 +0x2ff:  lea    (%ecx,%eax,1),%eax
085b78d6 +0x302:  add    $0x78,%eax
085b78d9 +0x305:  mov    (%eax),%eax
085b78db +0x307:  mov    %eax,(%esp)
085b78de +0x30a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b78e3 +0x30f:  mov    %esi,0x14(%esp)
085b78e7 +0x313:  mov    %ebx,0x10(%esp)
085b78eb +0x317:  mov    %eax,0xc(%esp)
085b78ef +0x31b:  mov    -0x14(%ebp),%eax
085b78f2 +0x31e:  mov    %eax,0x8(%esp)
085b78f6 +0x322:  mov    -0x1c(%ebp),%eax
085b78f9 +0x325:  mov    %eax,0x4(%esp)
085b78fd +0x329:  mov    0x8(%ebp),%eax
085b7900 +0x32c:  mov    %eax,(%esp)
085b7903 +0x32f:  call   085b840e <_ZN6CParty23generateBloodRewardItemEiijjb>  ; CParty::generateBloodRewardItem(int, int, unsigned int, unsigned int, bool)
085b7908 +0x334:  movl   $0x0,-0x40(%ebp)
085b790f +0x33b:  mov    -0x1c(%ebp),%edx
085b7912 +0x33e:  mov    0x8(%ebp),%ecx
085b7915 +0x341:  mov    %edx,%eax
085b7917 +0x343:  add    %eax,%eax
085b7919 +0x345:  add    %edx,%eax
085b791b +0x347:  shl    $0x3,%eax
085b791e +0x34a:  lea    (%ecx,%eax,1),%eax
085b7921 +0x34d:  add    $0x78,%eax
085b7924 +0x350:  mov    (%eax),%eax
085b7926 +0x352:  mov    %eax,(%esp)
085b7929 +0x355:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b792e +0x35a:  mov    %eax,%ebx
085b7930 +0x35c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b7935 +0x361:  lea    -0x40(%ebp),%edx
085b7938 +0x364:  mov    %edx,0x8(%esp)
085b793c +0x368:  mov    %ebx,0x4(%esp)
085b7940 +0x36c:  mov    %eax,(%esp)
085b7943 +0x36f:  call   08360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>  ; CDataManager::get_mob_reward(int, unsigned int&) const
085b7948 +0x374:  mov    0x8(%ebp),%eax
085b794b +0x377:  mov    %eax,0x4(%esp)
085b794f +0x37b:  lea    -0x48(%ebp),%eax
085b7952 +0x37e:  mov    %eax,(%esp)
085b7955 +0x381:  call   08469976 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x59>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x59
085b795a +0x386:  lea    -0x64(%ebp),%eax
085b795d +0x389:  mov    %eax,(%esp)
085b7960 +0x38c:  call   084699c6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xa9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xa9
085b7965 +0x391:  mov    -0x40(%ebp),%eax
085b7968 +0x394:  mov    %eax,-0x64(%ebp)
085b796b +0x397:  lea    -0x64(%ebp),%eax
085b796e +0x39a:  mov    %eax,0x10(%esp)
085b7972 +0x39e:  mov    -0x48(%ebp),%eax
085b7975 +0x3a1:  mov    -0x44(%ebp),%edx
085b7978 +0x3a4:  mov    %eax,0x8(%esp)
085b797c +0x3a8:  mov    %edx,0xc(%esp)
085b7980 +0x3ac:  movl   $0x0,0x4(%esp)
085b7988 +0x3b4:  mov    0x8(%ebp),%eax
085b798b +0x3b7:  mov    %eax,(%esp)
085b798e +0x3ba:  call   0859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>  ; CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
085b7993 +0x3bf:  mov    -0x64(%ebp),%eax
085b7996 +0x3c2:  mov    %eax,-0x40(%ebp)
085b7999 +0x3c5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b799e +0x3ca:  add    $0x6164,%eax
085b79a3 +0x3cf:  mov    %eax,(%esp)
085b79a6 +0x3d2:  call   082f10ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe72>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe72
085b79ab +0x3d7:  mov    %eax,-0x10(%ebp)
085b79ae +0x3da:  mov    -0x1c(%ebp),%edx
085b79b1 +0x3dd:  mov    0x8(%ebp),%ecx
085b79b4 +0x3e0:  mov    %edx,%eax
085b79b6 +0x3e2:  add    %eax,%eax
085b79b8 +0x3e4:  add    %edx,%eax
085b79ba +0x3e6:  shl    $0x3,%eax
085b79bd +0x3e9:  lea    (%ecx,%eax,1),%eax
085b79c0 +0x3ec:  add    $0x78,%eax
085b79c3 +0x3ef:  mov    (%eax),%eax
085b79c5 +0x3f1:  movl   $0x1,0x4(%esp)
085b79cd +0x3f9:  mov    %eax,(%esp)
085b79d0 +0x3fc:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085b79d5 +0x401:  mov    %eax,(%esp)
085b79d8 +0x404:  call   085bfe88 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13e6>  ; global constructors keyed to CParty::cMember::cMember()+0x13e6
085b79dd +0x409:  mov    %eax,-0x68(%ebp)
085b79e0 +0x40c:  mov    -0x10(%ebp),%eax
085b79e3 +0x40f:  sub    $0x1,%eax
085b79e6 +0x412:  mov    %eax,-0x34(%ebp)
085b79e9 +0x415:  lea    -0x68(%ebp),%eax
085b79ec +0x418:  mov    %eax,0x4(%esp)
085b79f0 +0x41c:  lea    -0x34(%ebp),%eax
085b79f3 +0x41f:  mov    %eax,(%esp)
085b79f6 +0x422:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085b79fb +0x427:  mov    (%eax),%eax
085b79fd +0x429:  movswl %ax,%ecx
085b7a00 +0x42c:  mov    -0x40(%ebp),%edx
085b7a03 +0x42f:  mov    -0x3c(%ebp),%eax
085b7a06 +0x432:  mov    %ecx,0x10(%esp)
085b7a0a +0x436:  mov    %edx,0xc(%esp)
085b7a0e +0x43a:  mov    %eax,0x8(%esp)
085b7a12 +0x43e:  mov    -0x1c(%ebp),%eax
085b7a15 +0x441:  mov    %eax,0x4(%esp)
085b7a19 +0x445:  mov    0x8(%ebp),%eax
085b7a1c +0x448:  mov    %eax,(%esp)
085b7a1f +0x44b:  call   085b7ea2 <_ZN6CParty22generateBloodRewardExpEiijs>  ; CParty::generateBloodRewardExp(int, int, unsigned int, short)
085b7a24 +0x450:  mov    0x8(%ebp),%eax
085b7a27 +0x453:  lea    0xddc(%eax),%edx
085b7a2d +0x459:  mov    -0x1c(%ebp),%eax
085b7a30 +0x45c:  mov    %eax,0x4(%esp)
085b7a34 +0x460:  mov    %edx,(%esp)
085b7a37 +0x463:  call   085bf132 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x690>  ; global constructors keyed to CParty::cMember::cMember()+0x690
085b7a3c +0x468:  mov    %eax,-0xc(%ebp)
085b7a3f +0x46b:  cmpl   $0xf4240,-0xc(%ebp)
085b7a46 +0x472:  jbe    085b7aa1 <+0x4cd>
085b7a48 +0x474:  mov    -0xc(%ebp),%eax
085b7a4b +0x477:  mov    %eax,0x14(%esp)
085b7a4f +0x47b:  movl   $"BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP(%u)\n",0x10(%esp)
085b7a57 +0x483:  movl   $0x3c79,0xc(%esp)
085b7a5f +0x48b:  movl   $&_ZZN6CParty22beginBloodClearProcessEbE19__PRETTY_FUNCTION__,0x8(%esp)
085b7a67 +0x493:  movl   $"party.cpp",0x4(%esp)
085b7a6f +0x49b:  movl   $0x1,(%esp)
085b7a76 +0x4a2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b7a7b +0x4a7:  movl   $0xf4240,-0xc(%ebp)
085b7a82 +0x4ae:  mov    0x8(%ebp),%eax
085b7a85 +0x4b1:  lea    0xddc(%eax),%edx
085b7a8b +0x4b7:  mov    -0xc(%ebp),%eax
085b7a8e +0x4ba:  mov    %eax,0x8(%esp)
085b7a92 +0x4be:  mov    -0x1c(%ebp),%eax
085b7a95 +0x4c1:  mov    %eax,0x4(%esp)
085b7a99 +0x4c5:  mov    %edx,(%esp)
085b7a9c +0x4c8:  call   085bf144 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x6a2>  ; global constructors keyed to CParty::cMember::cMember()+0x6a2
085b7aa1 +0x4cd:  mov    -0x3c(%ebp),%eax
085b7aa4 +0x4d0:  test   %eax,%eax
085b7aa6 +0x4d2:  jne    085b7ab6 <+0x4e2>
085b7aa8 +0x4d4:  movl   $0x0,-0x30(%ebp)
085b7aaf +0x4db:  movl   $0x0,-0x3c(%ebp)
085b7ab6 +0x4e2:  mov    -0x1c(%ebp),%edx
085b7ab9 +0x4e5:  mov    0x8(%ebp),%ecx
085b7abc +0x4e8:  mov    %edx,%eax
085b7abe +0x4ea:  add    %eax,%eax
085b7ac0 +0x4ec:  add    %edx,%eax
085b7ac2 +0x4ee:  shl    $0x3,%eax
085b7ac5 +0x4f1:  lea    (%ecx,%eax,1),%eax
085b7ac8 +0x4f4:  add    $0x78,%eax
085b7acb +0x4f7:  mov    (%eax),%eax
085b7acd +0x4f9:  mov    %eax,(%esp)
085b7ad0 +0x4fc:  call   085bfaa0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xffe>  ; global constructors keyed to CParty::cMember::cMember()+0xffe
085b7ad5 +0x501:  mov    %eax,-0x2c(%ebp)
085b7ad8 +0x504:  mov    -0x1c(%ebp),%edx
085b7adb +0x507:  mov    0x8(%ebp),%ecx
085b7ade +0x50a:  mov    %edx,%eax
085b7ae0 +0x50c:  add    %eax,%eax
085b7ae2 +0x50e:  add    %edx,%eax
085b7ae4 +0x510:  shl    $0x3,%eax
085b7ae7 +0x513:  lea    (%ecx,%eax,1),%eax
085b7aea +0x516:  add    $0x78,%eax
085b7aed +0x519:  mov    (%eax),%eax
085b7aef +0x51b:  mov    %eax,(%esp)
085b7af2 +0x51e:  call   085bfa8e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xfec>  ; global constructors keyed to CParty::cMember::cMember()+0xfec
085b7af7 +0x523:  mov    %eax,-0x28(%ebp)
085b7afa +0x526:  cmpl   $0xffffffff,-0x28(%ebp)
085b7afe +0x52a:  jne    085b7b0c <+0x538>
085b7b00 +0x52c:  mov    -0x30(%ebp),%eax
085b7b03 +0x52f:  mov    %eax,-0x2c(%ebp)
085b7b06 +0x532:  mov    -0x3c(%ebp),%eax
085b7b09 +0x535:  mov    %eax,-0x28(%ebp)
085b7b0c +0x538:  lea    -0x74(%ebp),%eax
085b7b0f +0x53b:  mov    %eax,(%esp)
085b7b12 +0x53e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b7b17 +0x543:  movl   $0xd0,0x8(%esp)
085b7b1f +0x54b:  movl   $0x0,0x4(%esp)
085b7b27 +0x553:  lea    -0x74(%ebp),%eax
085b7b2a +0x556:  mov    %eax,(%esp)
085b7b2d +0x559:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b7b32 +0x55e:  mov    -0x30(%ebp),%eax
085b7b35 +0x561:  mov    %eax,0x4(%esp)
085b7b39 +0x565:  lea    -0x74(%ebp),%eax
085b7b3c +0x568:  mov    %eax,(%esp)
085b7b3f +0x56b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b7b44 +0x570:  mov    -0x3c(%ebp),%eax
085b7b47 +0x573:  mov    %eax,0x4(%esp)
085b7b4b +0x577:  lea    -0x74(%ebp),%eax
085b7b4e +0x57a:  mov    %eax,(%esp)
085b7b51 +0x57d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b7b56 +0x582:  mov    -0x2c(%ebp),%eax
085b7b59 +0x585:  mov    %eax,0x4(%esp)
085b7b5d +0x589:  lea    -0x74(%ebp),%eax
085b7b60 +0x58c:  mov    %eax,(%esp)
085b7b63 +0x58f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b7b68 +0x594:  mov    -0x28(%ebp),%eax
085b7b6b +0x597:  mov    %eax,0x4(%esp)
085b7b6f +0x59b:  lea    -0x74(%ebp),%eax
085b7b72 +0x59e:  mov    %eax,(%esp)
085b7b75 +0x5a1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b7b7a +0x5a6:  mov    0x8(%ebp),%eax
085b7b7d +0x5a9:  add    $0xb24,%eax
085b7b82 +0x5ae:  mov    %eax,(%esp)
085b7b85 +0x5b1:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
085b7b8a +0x5b6:  mov    %eax,0x4(%esp)
085b7b8e +0x5ba:  lea    -0x74(%ebp),%eax
085b7b91 +0x5bd:  mov    %eax,(%esp)
085b7b94 +0x5c0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b7b99 +0x5c5:  mov    0x8(%ebp),%eax
085b7b9c +0x5c8:  lea    0xddc(%eax),%edx
085b7ba2 +0x5ce:  mov    -0x1c(%ebp),%eax
085b7ba5 +0x5d1:  mov    %eax,0x4(%esp)
085b7ba9 +0x5d5:  mov    %edx,(%esp)
085b7bac +0x5d8:  call   085bf132 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x690>  ; global constructors keyed to CParty::cMember::cMember()+0x690
085b7bb1 +0x5dd:  mov    %eax,0x4(%esp)
085b7bb5 +0x5e1:  lea    -0x74(%ebp),%eax
085b7bb8 +0x5e4:  mov    %eax,(%esp)
085b7bbb +0x5e7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b7bc0 +0x5ec:  movl   $0x1,0x4(%esp)
085b7bc8 +0x5f4:  lea    -0x74(%ebp),%eax
085b7bcb +0x5f7:  mov    %eax,(%esp)
085b7bce +0x5fa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b7bd3 +0x5ff:  mov    -0x1c(%ebp),%edx
085b7bd6 +0x602:  mov    0x8(%ebp),%ecx
085b7bd9 +0x605:  mov    %edx,%eax
085b7bdb +0x607:  add    %eax,%eax
085b7bdd +0x609:  add    %edx,%eax
085b7bdf +0x60b:  shl    $0x3,%eax
085b7be2 +0x60e:  lea    (%ecx,%eax,1),%eax
085b7be5 +0x611:  add    $0x78,%eax
085b7be8 +0x614:  mov    (%eax),%eax
085b7bea +0x616:  lea    -0x74(%ebp),%edx
085b7bed +0x619:  mov    %edx,0x4(%esp)
085b7bf1 +0x61d:  mov    %eax,(%esp)
085b7bf4 +0x620:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b7bf9 +0x625:  movl   $0x23,0x4(%esp)
085b7c01 +0x62d:  mov    0x8(%ebp),%eax
085b7c04 +0x630:  mov    %eax,(%esp)
085b7c07 +0x633:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b7c0c +0x638:  mov    %eax,%esi
085b7c0e +0x63a:  mov    0x8(%ebp),%eax
085b7c11 +0x63d:  mov    %eax,(%esp)
085b7c14 +0x640:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b7c19 +0x645:  mov    %eax,%ebx
085b7c1b +0x647:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b7c20 +0x64c:  movl   $0x23,0x18(%esp)
085b7c28 +0x654:  mov    %esi,0x14(%esp)
085b7c2c +0x658:  movl   $0x8,0x10(%esp)
085b7c34 +0x660:  movl   $0x23,0xc(%esp)
085b7c3c +0x668:  mov    %ebx,0x8(%esp)
085b7c40 +0x66c:  movl   $0x1,0x4(%esp)
085b7c48 +0x674:  mov    %eax,(%esp)
085b7c4b +0x677:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
085b7c50 +0x67c:  jmp    085b7c6d <+0x699>
085b7c52 +0x67e:  mov    %edx,%ebx
085b7c54 +0x680:  mov    %eax,%esi
085b7c56 +0x682:  lea    -0x74(%ebp),%eax
085b7c59 +0x685:  mov    %eax,(%esp)
085b7c5c +0x688:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b7c61 +0x68d:  mov    %esi,%eax
085b7c63 +0x68f:  mov    %ebx,%edx
085b7c65 +0x691:  mov    %eax,(%esp)
085b7c68 +0x694:  call   08ae3750 <_Unwind_Resume>
085b7c6d +0x699:  lea    -0x74(%ebp),%eax
085b7c70 +0x69c:  mov    %eax,(%esp)
085b7c73 +0x69f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b7c78 +0x6a4:  jmp    085b7c7b <+0x6a7>
085b7c7a +0x6a6:  nop
085b7c7b +0x6a7:  addl   $0x1,-0x1c(%ebp)
085b7c7f +0x6ab:  cmpl   $0x3,-0x1c(%ebp)
085b7c83 +0x6af:  setle  %al
085b7c86 +0x6b2:  test   %al,%al
085b7c88 +0x6b4:  jne    085b770c <+0x138>
085b7c8e +0x6ba:  jmp    085b7c94 <+0x6c0>
085b7c90 +0x6bc:  nop
085b7c91 +0x6bd:  jmp    085b7c94 <+0x6c0>
085b7c93 +0x6bf:  nop
085b7c94 +0x6c0:  add    $0xb0,%esp
085b7c9a +0x6c6:  pop    %ebx
085b7c9b +0x6c7:  pop    %esi
085b7c9c +0x6c8:  pop    %ebp
085b7c9d +0x6c9:  ret
```

## 反编译 C

```c
// CParty::beginBloodClearProcess @ 0x85b75d4

/* CParty::beginBloodClearProcess(bool) */

void __thiscall CParty::beginBloodClearProcess(CParty *this,bool param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  CUser *this_00;
  uint *puVar6;
  uint uVar7;
  CDataManager *this_01;
  CCharacBloodDungeon *this_02;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TimerQueue *pTVar11;
  PacketGuard local_78 [12];
  int local_6c;
  uint local_68 [7];
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  int local_40 [3];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar5 = CBattle_Field::getBloodState((CBattle_Field *)(this + 0xb24));
  if (iVar5 < 3) {
    local_34 = 0;
    local_40[0] = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_34 = CBattle_Field::CBloodClearRewardData::getPlayTime
                         ((CBloodClearRewardData *)(this + 0xddc));
    if (param_1) {
      local_40[0] = CBattle_Field::getBloodMaxRound((CBattle_Field *)(this + 0xb24));
      CBattle_Field::CBloodClearRewardData::setCurrentBloodRound
                ((CBloodClearRewardData *)(this + 0xddc),local_40[0]);
    }
    else {
      local_40[0] = CBattle_Field::CBloodClearRewardData::getCurrentBloodRound
                              ((CBloodClearRewardData *)(this + 0xddc));
    }
    cVar3 = CBattle_Field::setBloodState((CBattle_Field *)(this + 0xb24),3);
    if (cVar3 == '\x01') {
      if ((param_1) && (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\x02')) {
        sVar4 = CBattle_Field::getBloodMaxRound((CBattle_Field *)(this + 0xb24));
        local_24 = CBattle_Field::getNextRoundDifficulty((CBattle_Field *)(this + 0xb24),sVar4 + -1)
        ;
        CBattle_Field::CBloodClearRewardData::incUltimateRoundClearPoint
                  ((CBloodClearRewardData *)(this + 0xddc),local_24);
      }
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        iVar5 = get_user(this,local_20);
        if ((iVar5 == 0) || (cVar3 = checkValidUser(this,local_20), cVar3 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          this_00 = (CUser *)get_user(this,local_20);
          CUser::setChattingMessageCount(this_00,0);
          onBloodClear(this,param_1,local_20);
          CUserCharacInfo::set_charac_party_bonus_exp
                    (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78),0);
          CUserCharacInfo::set_charac_member_bonus_exp
                    (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78),0);
          CUserCharacInfo::set_charac_fatigue_buf_bonus_exp
                    (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78),0);
          CUserCharacInfo::set_charac_seria_buf_bonus_exp
                    (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78),0);
          local_1c = 0;
          iVar5 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
          checkBloodRenewMyRecord(this,local_20,local_34,local_40[0],iVar5);
          iVar5 = local_40[0] * 10;
          local_18 = CBattle_Field::getBloodMaxRound((CBattle_Field *)(this + 0xb24));
          local_18 = iVar5 / local_18;
          if (local_18 == 0) {
            local_18 = 1;
          }
          local_40[1] = 10;
          puVar6 = (uint *)std::min<int>(local_40 + 1,local_40);
          uVar1 = *puVar6;
          uVar7 = CUserCharacInfo::get_charac_level
                            (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78));
          generateBloodRewardItem(this,local_20,local_18,uVar7,uVar1,param_1);
          local_44 = 0;
          iVar5 = CUserCharacInfo::get_charac_level
                            (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78));
          this_01 = (CDataManager *)G_CDataManager();
          CDataManager::get_mob_reward(this_01,iVar5,&local_44);
          QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_4c,this);
          QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_68);
          local_68[0] = local_44;
          set_random_reward(this,0,local_4c,local_48,local_68);
          local_44 = local_68[0];
          iVar5 = G_CDataManager();
          local_14 = std::vector<float,std::allocator<float>>::size
                               ((vector<float,std::allocator<float>> *)(iVar5 + 0x6164));
          this_02 = (CCharacBloodDungeon *)
                    CUser::GetCharacExpandData(*(CUser **)(this + local_20 * 0x18 + 0x78),1);
          local_6c = CCharacBloodDungeon::GetEnterCount(this_02);
          local_40[2] = local_14 + -1;
          piVar8 = std::min<int>(local_40 + 2,&local_6c);
          generateBloodRewardExp(this,local_20,local_40[0],local_44,(short)*piVar8);
          local_10 = CBattle_Field::CBloodClearRewardData::getRewardExp
                               ((CBloodClearRewardData *)(this + 0xddc),local_20);
          if (1000000 < local_10) {
            LogManager::logFormat
                      (1,"party.cpp","void CParty::beginBloodClearProcess(bool)",0x3c79,
                       "BLOOD_LOG : EROOR BLOOD CLEAR REWARD EXP(%u)\n",local_10);
            local_10 = 1000000;
            CBattle_Field::CBloodClearRewardData::setRewardExp
                      ((CBloodClearRewardData *)(this + 0xddc),local_20,1000000);
          }
          if (local_40[0] == 0) {
            local_34 = 0;
            local_40[0] = 0;
          }
          local_30 = CUserCharacInfo::getBloodBestTimeRecord
                               (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78));
          local_2c = CUserCharacInfo::getBloodBestRoundRecord
                               (*(CUserCharacInfo **)(this + local_20 * 0x18 + 0x78));
          if (local_2c == -1) {
            local_30 = local_34;
            local_2c = local_40[0];
          }
          PacketGuard::PacketGuard(local_78);
                    /* try { // try from 085b7b2d to 085b7c4f has its CatchHandler @ 085b7c52 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,0,0xd0);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_34);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_40[0]);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_30);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_2c);
          iVar5 = CBattle_Field::getBloodMaxRound((CBattle_Field *)(this + 0xb24));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,iVar5);
          iVar5 = CBattle_Field::CBloodClearRewardData::getRewardExp
                            ((CBloodClearRewardData *)(this + 0xddc),local_20);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,iVar5);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
          CUser::Send(*(CUser **)(this + local_20 * 0x18 + 0x78),local_78);
          uVar9 = gen_timer_key(this,0x23);
          uVar10 = GetPartyIndex(this);
          pTVar11 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar11,1,uVar10,0x23,8,uVar9,0x23);
          PacketGuard::~PacketGuard(local_78);
        }
      }
    }
  }
  return;
}
```
