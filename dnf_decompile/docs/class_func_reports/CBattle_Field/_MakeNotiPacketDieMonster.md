# _MakeNotiPacketDieMonster

`_ZN13CBattle_Field25_MakeNotiPacketDieMonsterER11PacketGuardRSt4listI8map_itemSaIS3_EEitRK11map_monsterRS7_`

`CBattle_Field::_MakeNotiPacketDieMonster(PacketGuard&, std::list<map_item, std::allocator<map_item> >&, int, unsigned short, map_monster const&, map_monster&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830b8cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830b8cc  _ZN13CBattle_Field25_MakeNotiPacketDieMonsterER11PacketGuardRSt4listI8map_itemSaIS3_EEitRK11map_monsterRS7_
#           CBattle_Field::_MakeNotiPacketDieMonster(PacketGuard&, std::list<map_item, std::allocator<map_item> >&, int, unsigned short, map_monster const&, map_monster&)
# range [0x0830b8cc, 0x0830bc77]
0830b8cc +0x000:  push   %ebp
0830b8cd +0x001:  mov    %esp,%ebp
0830b8cf +0x003:  push   %ebx
0830b8d0 +0x004:  sub    $0x64,%esp
0830b8d3 +0x007:  mov    0x18(%ebp),%eax
0830b8d6 +0x00a:  mov    %ax,-0x4c(%ebp)
0830b8da +0x00e:  mov    0xc(%ebp),%eax
0830b8dd +0x011:  movl   $0x26,0x8(%esp)
0830b8e5 +0x019:  movl   $0x0,0x4(%esp)
0830b8ed +0x021:  mov    %eax,(%esp)
0830b8f0 +0x024:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0830b8f5 +0x029:  mov    0xc(%ebp),%eax
0830b8f8 +0x02c:  mov    0x14(%ebp),%edx
0830b8fb +0x02f:  mov    %edx,0x4(%esp)
0830b8ff +0x033:  mov    %eax,(%esp)
0830b902 +0x036:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830b907 +0x03b:  mov    0x10(%ebp),%eax
0830b90a +0x03e:  mov    %eax,(%esp)
0830b90d +0x041:  call   08311e2c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a11>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a11
0830b912 +0x046:  mov    %eax,%edx
0830b914 +0x048:  mov    0xc(%ebp),%eax
0830b917 +0x04b:  mov    %edx,0x4(%esp)
0830b91b +0x04f:  mov    %eax,(%esp)
0830b91e +0x052:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830b923 +0x057:  lea    -0x3a(%ebp),%eax
0830b926 +0x05a:  mov    %eax,(%esp)
0830b929 +0x05d:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0830b92e +0x062:  lea    -0x40(%ebp),%eax
0830b931 +0x065:  mov    0x10(%ebp),%edx
0830b934 +0x068:  mov    %edx,0x4(%esp)
0830b938 +0x06c:  mov    %eax,(%esp)
0830b93b +0x06f:  call   08152b88 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24bd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24bd
0830b940 +0x074:  sub    $0x4,%esp
0830b943 +0x077:  jmp    0830bb81 <+0x2b5>
0830b948 +0x07c:  lea    -0x40(%ebp),%eax
0830b94b +0x07f:  mov    %eax,(%esp)
0830b94e +0x082:  call   08311ebc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3aa1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3aa1
0830b953 +0x087:  mov    %eax,-0x14(%ebp)
0830b956 +0x08a:  mov    -0x14(%ebp),%eax
0830b959 +0x08d:  mov    0x4(%eax),%edx
0830b95c +0x090:  mov    0xc(%ebp),%eax
0830b95f +0x093:  mov    %edx,0x4(%esp)
0830b963 +0x097:  mov    %eax,(%esp)
0830b966 +0x09a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830b96b +0x09f:  mov    -0x14(%ebp),%eax
0830b96e +0x0a2:  mov    0x12(%eax),%eax
0830b971 +0x0a5:  mov    %eax,%edx
0830b973 +0x0a7:  mov    0xc(%ebp),%eax
0830b976 +0x0aa:  mov    %edx,0x4(%esp)
0830b97a +0x0ae:  mov    %eax,(%esp)
0830b97d +0x0b1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0830b982 +0x0b6:  mov    -0x14(%ebp),%eax
0830b985 +0x0b9:  add    $0x10,%eax
0830b988 +0x0bc:  mov    %eax,(%esp)
0830b98b +0x0bf:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0830b990 +0x0c4:  movzbl %al,%edx
0830b993 +0x0c7:  mov    0xc(%ebp),%eax
0830b996 +0x0ca:  mov    %edx,0x4(%esp)
0830b99a +0x0ce:  mov    %eax,(%esp)
0830b99d +0x0d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830b9a2 +0x0d6:  mov    -0x14(%ebp),%eax
0830b9a5 +0x0d9:  add    $0x10,%eax
0830b9a8 +0x0dc:  mov    %eax,(%esp)
0830b9ab +0x0df:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0830b9b0 +0x0e4:  test   %al,%al
0830b9b2 +0x0e6:  je     0830ba5f <+0x193>
0830b9b8 +0x0ec:  mov    -0x14(%ebp),%eax
0830b9bb +0x0ef:  mov    0x12(%eax),%eax
0830b9be +0x0f2:  mov    %eax,%ebx
0830b9c0 +0x0f4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830b9c5 +0x0f9:  mov    %ebx,0x4(%esp)
0830b9c9 +0x0fd:  mov    %eax,(%esp)
0830b9cc +0x100:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0830b9d1 +0x105:  mov    %eax,-0x10(%ebp)
0830b9d4 +0x108:  cmpl   $0x0,-0x10(%ebp)
0830b9d8 +0x10c:  jne    0830b9fc <+0x130>
0830b9da +0x10e:  mov    -0x14(%ebp),%eax
0830b9dd +0x111:  add    $0x10,%eax
0830b9e0 +0x114:  mov    %eax,(%esp)
0830b9e3 +0x117:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0830b9e8 +0x11c:  mov    0xc(%ebp),%edx
0830b9eb +0x11f:  mov    %eax,0x4(%esp)
0830b9ef +0x123:  mov    %edx,(%esp)
0830b9f2 +0x126:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0830b9f7 +0x12b:  jmp    0830ba7c <+0x1b0>
0830b9fc +0x130:  mov    -0x10(%ebp),%eax
0830b9ff +0x133:  mov    %eax,-0xc(%ebp)
0830ba02 +0x136:  mov    -0x14(%ebp),%eax
0830ba05 +0x139:  movzwl 0x1b(%eax),%eax
0830ba09 +0x13d:  movzbl %al,%edx
0830ba0c +0x140:  mov    -0x10(%ebp),%eax
0830ba0f +0x143:  mov    %edx,0x4(%esp)
0830ba13 +0x147:  mov    %eax,(%esp)
0830ba16 +0x14a:  call   08151120 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa55>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa55
0830ba1b +0x14f:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0830ba21 +0x155:  mov    %eax,%edx
0830ba23 +0x157:  mov    0xc(%ebp),%eax
0830ba26 +0x15a:  mov    %edx,0x4(%esp)
0830ba2a +0x15e:  mov    %eax,(%esp)
0830ba2d +0x161:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0830ba32 +0x166:  lea    -0x3a(%ebp),%eax
0830ba35 +0x169:  mov    %eax,(%esp)
0830ba38 +0x16c:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
0830ba3d +0x171:  mov    -0x14(%ebp),%eax
0830ba40 +0x174:  movzwl 0x1b(%eax),%eax
0830ba44 +0x178:  movzwl %ax,%eax
0830ba47 +0x17b:  lea    -0x3a(%ebp),%edx
0830ba4a +0x17e:  mov    %edx,0x8(%esp)
0830ba4e +0x182:  mov    %eax,0x4(%esp)
0830ba52 +0x186:  mov    -0xc(%ebp),%eax
0830ba55 +0x189:  mov    %eax,(%esp)
0830ba58 +0x18c:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
0830ba5d +0x191:  jmp    0830ba7c <+0x1b0>
0830ba5f +0x193:  mov    -0x14(%ebp),%eax
0830ba62 +0x196:  add    $0x10,%eax
0830ba65 +0x199:  mov    %eax,(%esp)
0830ba68 +0x19c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0830ba6d +0x1a1:  mov    0xc(%ebp),%edx
0830ba70 +0x1a4:  mov    %eax,0x4(%esp)
0830ba74 +0x1a8:  mov    %edx,(%esp)
0830ba77 +0x1ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0830ba7c +0x1b0:  mov    -0x14(%ebp),%eax
0830ba7f +0x1b3:  movzwl 0x1b(%eax),%eax
0830ba83 +0x1b7:  movzwl %ax,%edx
0830ba86 +0x1ba:  mov    0xc(%ebp),%eax
0830ba89 +0x1bd:  mov    %edx,0x4(%esp)
0830ba8d +0x1c1:  mov    %eax,(%esp)
0830ba90 +0x1c4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830ba95 +0x1c9:  mov    -0x14(%ebp),%eax
0830ba98 +0x1cc:  add    $0x21,%eax
0830ba9b +0x1cf:  mov    %eax,(%esp)
0830ba9e +0x1d2:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0830baa3 +0x1d7:  movzbl %al,%edx
0830baa6 +0x1da:  mov    0xc(%ebp),%eax
0830baa9 +0x1dd:  mov    %edx,0x4(%esp)
0830baad +0x1e1:  mov    %eax,(%esp)
0830bab0 +0x1e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bab5 +0x1e9:  mov    -0x14(%ebp),%eax
0830bab8 +0x1ec:  add    $0x21,%eax
0830babb +0x1ef:  mov    %eax,(%esp)
0830babe +0x1f2:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0830bac3 +0x1f7:  movzwl %ax,%edx
0830bac6 +0x1fa:  mov    0xc(%ebp),%eax
0830bac9 +0x1fd:  mov    %edx,0x4(%esp)
0830bacd +0x201:  mov    %eax,(%esp)
0830bad0 +0x204:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830bad5 +0x209:  mov    -0x14(%ebp),%eax
0830bad8 +0x20c:  lea    0x10(%eax),%edx
0830badb +0x20f:  mov    0xc(%ebp),%eax
0830bade +0x212:  mov    %edx,0x4(%esp)
0830bae2 +0x216:  mov    %eax,(%esp)
0830bae5 +0x219:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0830baea +0x21e:  mov    -0x14(%ebp),%eax
0830baed +0x221:  add    $0x10,%eax
0830baf0 +0x224:  mov    %eax,(%esp)
0830baf3 +0x227:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0830baf8 +0x22c:  test   %al,%al
0830bafa +0x22e:  je     0830bb3e <+0x272>
0830bafc +0x230:  mov    0xc(%ebp),%eax
0830baff +0x233:  movl   $0x1,0x4(%esp)
0830bb07 +0x23b:  mov    %eax,(%esp)
0830bb0a +0x23e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bb0f +0x243:  mov    0xc(%ebp),%eax
0830bb12 +0x246:  movl   $0x1e,0x4(%esp)
0830bb1a +0x24e:  mov    %eax,(%esp)
0830bb1d +0x251:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0830bb22 +0x256:  lea    -0x3a(%ebp),%edx
0830bb25 +0x259:  mov    0xc(%ebp),%eax
0830bb28 +0x25c:  movl   $0x1e,0x8(%esp)
0830bb30 +0x264:  mov    %edx,0x4(%esp)
0830bb34 +0x268:  mov    %eax,(%esp)
0830bb37 +0x26b:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0830bb3c +0x270:  jmp    0830bb51 <+0x285>
0830bb3e +0x272:  mov    0xc(%ebp),%eax
0830bb41 +0x275:  movl   $0x0,0x4(%esp)
0830bb49 +0x27d:  mov    %eax,(%esp)
0830bb4c +0x280:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bb51 +0x285:  movzwl -0x4c(%ebp),%edx
0830bb55 +0x289:  mov    0xc(%ebp),%eax
0830bb58 +0x28c:  mov    %edx,0x4(%esp)
0830bb5c +0x290:  mov    %eax,(%esp)
0830bb5f +0x293:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0830bb64 +0x298:  lea    -0x18(%ebp),%eax
0830bb67 +0x29b:  movl   $0x0,0x8(%esp)
0830bb6f +0x2a3:  lea    -0x40(%ebp),%edx
0830bb72 +0x2a6:  mov    %edx,0x4(%esp)
0830bb76 +0x2aa:  mov    %eax,(%esp)
0830bb79 +0x2ad:  call   08311e84 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a69>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a69
0830bb7e +0x2b2:  sub    $0x4,%esp
0830bb81 +0x2b5:  lea    -0x1c(%ebp),%eax
0830bb84 +0x2b8:  mov    0x10(%ebp),%edx
0830bb87 +0x2bb:  mov    %edx,0x4(%esp)
0830bb8b +0x2bf:  mov    %eax,(%esp)
0830bb8e +0x2c2:  call   08152bbe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x24f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x24f3
0830bb93 +0x2c7:  sub    $0x4,%esp
0830bb96 +0x2ca:  lea    -0x1c(%ebp),%eax
0830bb99 +0x2cd:  mov    %eax,0x4(%esp)
0830bb9d +0x2d1:  lea    -0x40(%ebp),%eax
0830bba0 +0x2d4:  mov    %eax,(%esp)
0830bba3 +0x2d7:  call   08311e70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3a55>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3a55
0830bba8 +0x2dc:  test   %al,%al
0830bbaa +0x2de:  jne    0830b948 <+0x7c>
0830bbb0 +0x2e4:  mov    0xc(%ebp),%eax
0830bbb3 +0x2e7:  movl   $0x0,0x4(%esp)
0830bbbb +0x2ef:  mov    %eax,(%esp)
0830bbbe +0x2f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bbc3 +0x2f7:  mov    0x1c(%ebp),%eax
0830bbc6 +0x2fa:  movzbl 0x8(%eax),%eax
0830bbca +0x2fe:  movsbl %al,%eax
0830bbcd +0x301:  mov    %eax,0x4(%esp)
0830bbd1 +0x305:  mov    0x8(%ebp),%eax
0830bbd4 +0x308:  mov    %eax,(%esp)
0830bbd7 +0x30b:  call   0830a812 <_ZNK13CBattle_Field34convertAPCRoleType2MonsterRoleTypeEc>  ; CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const
0830bbdc +0x310:  test   %al,%al
0830bbde +0x312:  setne  %al
0830bbe1 +0x315:  test   %al,%al
0830bbe3 +0x317:  je     0830bbff <+0x333>
0830bbe5 +0x319:  mov    0x8(%ebp),%eax
0830bbe8 +0x31c:  mov    0x1a8(%eax),%edx
0830bbee +0x322:  mov    0xc(%ebp),%eax
0830bbf1 +0x325:  mov    %edx,0x4(%esp)
0830bbf5 +0x329:  mov    %eax,(%esp)
0830bbf8 +0x32c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bbfd +0x331:  jmp    0830bc12 <+0x346>
0830bbff +0x333:  mov    0xc(%ebp),%eax
0830bc02 +0x336:  movl   $0xffffffff,0x4(%esp)
0830bc0a +0x33e:  mov    %eax,(%esp)
0830bc0d +0x341:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bc12 +0x346:  mov    0x20(%ebp),%eax
0830bc15 +0x349:  movzbl 0x34(%eax),%eax
0830bc19 +0x34d:  movzbl %al,%edx
0830bc1c +0x350:  mov    0xc(%ebp),%eax
0830bc1f +0x353:  mov    %edx,0x4(%esp)
0830bc23 +0x357:  mov    %eax,(%esp)
0830bc26 +0x35a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bc2b +0x35f:  mov    0x20(%ebp),%eax
0830bc2e +0x362:  movzbl 0x34(%eax),%eax
0830bc32 +0x366:  test   %al,%al
0830bc34 +0x368:  je     0830bc60 <+0x394>
0830bc36 +0x36a:  mov    0x8(%ebp),%eax
0830bc39 +0x36d:  mov    0xc(%eax),%edx
0830bc3c +0x370:  mov    0xc(%ebp),%eax
0830bc3f +0x373:  mov    %edx,0x4(%esp)
0830bc43 +0x377:  mov    %eax,(%esp)
0830bc46 +0x37a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bc4b +0x37f:  mov    0x8(%ebp),%eax
0830bc4e +0x382:  mov    0x10(%eax),%edx
0830bc51 +0x385:  mov    0xc(%ebp),%eax
0830bc54 +0x388:  mov    %edx,0x4(%esp)
0830bc58 +0x38c:  mov    %eax,(%esp)
0830bc5b +0x38f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0830bc60 +0x394:  mov    0xc(%ebp),%eax
0830bc63 +0x397:  movl   $0x1,0x4(%esp)
0830bc6b +0x39f:  mov    %eax,(%esp)
0830bc6e +0x3a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0830bc73 +0x3a7:  mov    -0x4(%ebp),%ebx
0830bc76 +0x3aa:  leave
0830bc77 +0x3ab:  ret
```

## 反编译 C

```c
// CBattle_Field::_MakeNotiPacketDieMonster @ 0x830b8cc

/* CBattle_Field::_MakeNotiPacketDieMonster(PacketGuard&, std::list<map_item,
   std::allocator<map_item> >&, int, unsigned short, map_monster const&, map_monster&) */

void __thiscall
CBattle_Field::_MakeNotiPacketDieMonster
          (CBattle_Field *this,PacketGuard *param_1,list *param_2,int param_3,ushort param_4,
          map_monster *param_5,map_monster *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  CDataManager *this_00;
  _List_iterator<map_item> local_44 [6];
  stAvatarEmblemInfo_t local_3e [30];
  _List_iterator local_20 [4];
  _List_iterator<map_item> local_1c [4];
  int local_18;
  CEquipItem *local_14;
  CEquipItem *local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x26);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_3);
  iVar2 = std::list<map_item,std::allocator<map_item>>::size();
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  stAvatarEmblemInfo_t::init(local_3e);
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_44,local_20);
    if (cVar1 == '\0') break;
    local_18 = std::_List_iterator<map_item>::operator*(local_44);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(local_18 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(local_18 + 0x12));
    uVar3 = Inven_Item::GetItemAttr((Inven_Item *)(local_18 + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar3 & 0xff);
    cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_18 + 0x10));
    if (cVar1 == '\0') {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(local_18 + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
    }
    else {
      iVar2 = *(int *)(local_18 + 0x12);
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = (CEquipItem *)CDataManager::find_item(this_00,iVar2);
      if (local_14 == (CEquipItem *)0x0) {
        iVar2 = Inven_Item::get_add_info((Inven_Item *)(local_18 + 0x10));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
      }
      else {
        local_10 = local_14;
        iVar2 = CEquipItem::getAvatarPeriod(local_14,(uchar)*(undefined2 *)(local_18 + 0x1b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2 * 0x15180);
        stAvatarEmblemInfo_t::init(local_3e);
        CEquipItem::getAvatarSocket(local_10,(uint)*(ushort *)(local_18 + 0x1b),local_3e);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(local_18 + 0x1b));
    uVar3 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_18 + 0x21));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar3 & 0xff);
    uVar3 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_18 + 0x21));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_1,(Inven_Item *)(local_18 + 0x10));
    cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_18 + 0x10));
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x1e);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)local_3e,0x1e);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)param_4);
    std::_List_iterator<map_item>::operator++(local_1c,(int)local_44);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  cVar1 = convertAPCRoleType2MonsterRoleType(this,(char)param_5[8]);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,-1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x1a8));
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)param_6[0x34]);
  if (param_6[0x34] != (map_monster)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x10));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
