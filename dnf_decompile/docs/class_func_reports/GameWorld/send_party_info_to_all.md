# send_party_info_to_all

`_ZN9GameWorld22send_party_info_to_allEP6CPartyi`

`GameWorld::send_party_info_to_all(CParty*, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c878a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c878a  _ZN9GameWorld22send_party_info_to_allEP6CPartyi
#           GameWorld::send_party_info_to_all(CParty*, int)
# range [0x086c878a, 0x086c8c13]
086c878a +0x000:  push   %ebp
086c878b +0x001:  mov    %esp,%ebp
086c878d +0x003:  push   %esi
086c878e +0x004:  push   %ebx
086c878f +0x005:  sub    $0x50,%esp
086c8792 +0x008:  mov    0xc(%ebp),%eax
086c8795 +0x00b:  mov    %eax,(%esp)
086c8798 +0x00e:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
086c879d +0x013:  mov    %eax,-0x28(%ebp)
086c87a0 +0x016:  cmpl   $0x0,-0x28(%ebp)
086c87a4 +0x01a:  jg     086c87de <+0x54>
086c87a6 +0x01c:  mov    -0x28(%ebp),%eax
086c87a9 +0x01f:  mov    %eax,0x14(%esp)
086c87ad +0x023:  movl   $"GameWorld::send_party_info_to_all get_member_count() is %d",0x10(%esp)
086c87b5 +0x02b:  movl   $0xc37,0xc(%esp)
086c87bd +0x033:  movl   $&_ZZN9GameWorld22send_party_info_to_allEP6CPartyiE19__PRETTY_FUNCTION__,0x8(%esp)
086c87c5 +0x03b:  movl   $"world.cpp",0x4(%esp)
086c87cd +0x043:  movl   $0x1,(%esp)
086c87d4 +0x04a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c87d9 +0x04f:  jmp    086c8c0d <+0x483>
086c87de +0x054:  lea    -0x34(%ebp),%eax
086c87e1 +0x057:  mov    %eax,(%esp)
086c87e4 +0x05a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c87e9 +0x05f:  movl   $0x9,0x8(%esp)
086c87f1 +0x067:  movl   $0x0,0x4(%esp)
086c87f9 +0x06f:  lea    -0x34(%ebp),%eax
086c87fc +0x072:  mov    %eax,(%esp)
086c87ff +0x075:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c8804 +0x07a:  movl   $0x1,0x4(%esp)
086c880c +0x082:  lea    -0x34(%ebp),%eax
086c880f +0x085:  mov    %eax,(%esp)
086c8812 +0x088:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c8817 +0x08d:  mov    0xc(%ebp),%eax
086c881a +0x090:  mov    %eax,(%esp)
086c881d +0x093:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
086c8822 +0x098:  mov    %eax,0x4(%esp)
086c8826 +0x09c:  lea    -0x34(%ebp),%eax
086c8829 +0x09f:  mov    %eax,(%esp)
086c882c +0x0a2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c8831 +0x0a7:  mov    0x10(%ebp),%eax
086c8834 +0x0aa:  mov    %eax,0x4(%esp)
086c8838 +0x0ae:  lea    -0x34(%ebp),%eax
086c883b +0x0b1:  mov    %eax,(%esp)
086c883e +0x0b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8843 +0x0b9:  cmpl   $0x0,0x10(%ebp)
086c8847 +0x0bd:  je     086c8853 <+0xc9>
086c8849 +0x0bf:  cmpl   $0x1,0x10(%ebp)
086c884d +0x0c3:  jne    086c896a <+0x1e0>
086c8853 +0x0c9:  mov    0xc(%ebp),%eax
086c8856 +0x0cc:  mov    %eax,(%esp)
086c8859 +0x0cf:  call   082a59f4 <_GLOBAL__I__ZN4CLog5this_E+0x1e1b>  ; global constructors keyed to CLog::this_+0x1e1b
086c885e +0x0d4:  movzbl %al,%eax
086c8861 +0x0d7:  mov    %eax,0x4(%esp)
086c8865 +0x0db:  lea    -0x34(%ebp),%eax
086c8868 +0x0de:  mov    %eax,(%esp)
086c886b +0x0e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8870 +0x0e6:  mov    0xc(%ebp),%eax
086c8873 +0x0e9:  mov    %eax,(%esp)
086c8876 +0x0ec:  call   082a59f4 <_GLOBAL__I__ZN4CLog5this_E+0x1e1b>  ; global constructors keyed to CLog::this_+0x1e1b
086c887b +0x0f1:  test   %al,%al
086c887d +0x0f3:  sete   %al
086c8880 +0x0f6:  test   %al,%al
086c8882 +0x0f8:  je     086c88d9 <+0x14f>
086c8884 +0x0fa:  mov    0xc(%ebp),%eax
086c8887 +0x0fd:  mov    %eax,(%esp)
086c888a +0x100:  call   082a59e6 <_GLOBAL__I__ZN4CLog5this_E+0x1e0d>  ; global constructors keyed to CLog::this_+0x1e0d
086c888f +0x105:  mov    %eax,(%esp)
086c8892 +0x108:  call   0807e3b0 <_init+0xca8>
086c8897 +0x10d:  mov    %eax,0x4(%esp)
086c889b +0x111:  lea    -0x34(%ebp),%eax
086c889e +0x114:  mov    %eax,(%esp)
086c88a1 +0x117:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c88a6 +0x11c:  mov    0xc(%ebp),%eax
086c88a9 +0x11f:  mov    %eax,(%esp)
086c88ac +0x122:  call   082a59e6 <_GLOBAL__I__ZN4CLog5this_E+0x1e0d>  ; global constructors keyed to CLog::this_+0x1e0d
086c88b1 +0x127:  mov    %eax,(%esp)
086c88b4 +0x12a:  call   0807e3b0 <_init+0xca8>
086c88b9 +0x12f:  mov    %eax,%ebx
086c88bb +0x131:  mov    0xc(%ebp),%eax
086c88be +0x134:  mov    %eax,(%esp)
086c88c1 +0x137:  call   082a59e6 <_GLOBAL__I__ZN4CLog5this_E+0x1e0d>  ; global constructors keyed to CLog::this_+0x1e0d
086c88c6 +0x13c:  mov    %ebx,0x8(%esp)
086c88ca +0x140:  mov    %eax,0x4(%esp)
086c88ce +0x144:  lea    -0x34(%ebp),%eax
086c88d1 +0x147:  mov    %eax,(%esp)
086c88d4 +0x14a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086c88d9 +0x14f:  mov    0xc(%ebp),%eax
086c88dc +0x152:  mov    %eax,(%esp)
086c88df +0x155:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
086c88e4 +0x15a:  movzbl %al,%eax
086c88e7 +0x15d:  mov    %eax,0x4(%esp)
086c88eb +0x161:  lea    -0x34(%ebp),%eax
086c88ee +0x164:  mov    %eax,(%esp)
086c88f1 +0x167:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c88f6 +0x16c:  mov    0xc(%ebp),%eax
086c88f9 +0x16f:  mov    %eax,(%esp)
086c88fc +0x172:  call   082a5a04 <_GLOBAL__I__ZN4CLog5this_E+0x1e2b>  ; global constructors keyed to CLog::this_+0x1e2b
086c8901 +0x177:  movzbl %al,%eax
086c8904 +0x17a:  mov    %eax,0x4(%esp)
086c8908 +0x17e:  lea    -0x34(%ebp),%eax
086c890b +0x181:  mov    %eax,(%esp)
086c890e +0x184:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8913 +0x189:  mov    0xc(%ebp),%eax
086c8916 +0x18c:  mov    %eax,(%esp)
086c8919 +0x18f:  call   082a5a14 <_GLOBAL__I__ZN4CLog5this_E+0x1e3b>  ; global constructors keyed to CLog::this_+0x1e3b
086c891e +0x194:  movzwl %ax,%eax
086c8921 +0x197:  mov    %eax,0x4(%esp)
086c8925 +0x19b:  lea    -0x34(%ebp),%eax
086c8928 +0x19e:  mov    %eax,(%esp)
086c892b +0x1a1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c8930 +0x1a6:  mov    0xc(%ebp),%eax
086c8933 +0x1a9:  mov    %eax,(%esp)
086c8936 +0x1ac:  call   082a5a24 <_GLOBAL__I__ZN4CLog5this_E+0x1e4b>  ; global constructors keyed to CLog::this_+0x1e4b
086c893b +0x1b1:  movzbl %al,%eax
086c893e +0x1b4:  mov    %eax,0x4(%esp)
086c8942 +0x1b8:  lea    -0x34(%ebp),%eax
086c8945 +0x1bb:  mov    %eax,(%esp)
086c8948 +0x1be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c894d +0x1c3:  mov    0xc(%ebp),%eax
086c8950 +0x1c6:  mov    %eax,(%esp)
086c8953 +0x1c9:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
086c8958 +0x1ce:  movzbl %al,%eax
086c895b +0x1d1:  mov    %eax,0x4(%esp)
086c895f +0x1d5:  lea    -0x34(%ebp),%eax
086c8962 +0x1d8:  mov    %eax,(%esp)
086c8965 +0x1db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c896a +0x1e0:  cmpl   $0x0,0x10(%ebp)
086c896e +0x1e4:  je     086c897a <+0x1f0>
086c8970 +0x1e6:  cmpl   $0x2,0x10(%ebp)
086c8974 +0x1ea:  jne    086c8aaf <+0x325>
086c897a +0x1f0:  movl   $0x0,-0x24(%ebp)
086c8981 +0x1f7:  movl   $0x0,-0x20(%ebp)
086c8988 +0x1fe:  jmp    086c8a37 <+0x2ad>
086c898d +0x203:  mov    -0x20(%ebp),%eax
086c8990 +0x206:  mov    %eax,0x4(%esp)
086c8994 +0x20a:  mov    0xc(%ebp),%eax
086c8997 +0x20d:  mov    %eax,(%esp)
086c899a +0x210:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
086c899f +0x215:  mov    %eax,-0x1c(%ebp)
086c89a2 +0x218:  cmpl   $0x0,-0x1c(%ebp)
086c89a6 +0x21c:  je     086c8a0d <+0x283>
086c89a8 +0x21e:  mov    -0x1c(%ebp),%eax
086c89ab +0x221:  mov    %eax,(%esp)
086c89ae +0x224:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c89b3 +0x229:  movzwl %ax,%eax
086c89b6 +0x22c:  mov    %eax,0x4(%esp)
086c89ba +0x230:  lea    -0x34(%ebp),%eax
086c89bd +0x233:  mov    %eax,(%esp)
086c89c0 +0x236:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c89c5 +0x23b:  mov    0xc(%ebp),%eax
086c89c8 +0x23e:  mov    %eax,(%esp)
086c89cb +0x241:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
086c89d0 +0x246:  cmp    -0x1c(%ebp),%eax
086c89d3 +0x249:  sete   %al
086c89d6 +0x24c:  test   %al,%al
086c89d8 +0x24e:  je     086c89e0 <+0x256>
086c89da +0x250:  mov    -0x20(%ebp),%eax
086c89dd +0x253:  mov    %eax,-0x24(%ebp)
086c89e0 +0x256:  mov    -0x1c(%ebp),%eax
086c89e3 +0x259:  mov    %eax,(%esp)
086c89e6 +0x25c:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
086c89eb +0x261:  mov    %al,-0x16(%ebp)
086c89ee +0x264:  cmpb   $0xff,-0x16(%ebp)
086c89f2 +0x268:  jne    086c89f8 <+0x26e>
086c89f4 +0x26a:  movb   $0x1,-0x16(%ebp)
086c89f8 +0x26e:  movsbl -0x16(%ebp),%eax
086c89fc +0x272:  mov    %eax,0x4(%esp)
086c8a00 +0x276:  lea    -0x34(%ebp),%eax
086c8a03 +0x279:  mov    %eax,(%esp)
086c8a06 +0x27c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8a0b +0x281:  jmp    086c8a33 <+0x2a9>
086c8a0d +0x283:  movl   $0xffff,0x4(%esp)
086c8a15 +0x28b:  lea    -0x34(%ebp),%eax
086c8a18 +0x28e:  mov    %eax,(%esp)
086c8a1b +0x291:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c8a20 +0x296:  movl   $0xff,0x4(%esp)
086c8a28 +0x29e:  lea    -0x34(%ebp),%eax
086c8a2b +0x2a1:  mov    %eax,(%esp)
086c8a2e +0x2a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8a33 +0x2a9:  addl   $0x1,-0x20(%ebp)
086c8a37 +0x2ad:  cmpl   $0x3,-0x20(%ebp)
086c8a3b +0x2b1:  setle  %al
086c8a3e +0x2b4:  test   %al,%al
086c8a40 +0x2b6:  jne    086c898d <+0x203>
086c8a46 +0x2bc:  mov    0xc(%ebp),%eax
086c8a49 +0x2bf:  mov    %eax,(%esp)
086c8a4c +0x2c2:  call   085b9f50 <_ZN6CParty17IsReturnUserPartyEv>  ; CParty::IsReturnUserParty()
086c8a51 +0x2c7:  movzbl %al,%eax
086c8a54 +0x2ca:  mov    %eax,0x4(%esp)
086c8a58 +0x2ce:  lea    -0x34(%ebp),%eax
086c8a5b +0x2d1:  mov    %eax,(%esp)
086c8a5e +0x2d4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8a63 +0x2d9:  mov    -0x24(%ebp),%eax
086c8a66 +0x2dc:  mov    %eax,0x4(%esp)
086c8a6a +0x2e0:  lea    -0x34(%ebp),%eax
086c8a6d +0x2e3:  mov    %eax,(%esp)
086c8a70 +0x2e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8a75 +0x2eb:  mov    0xc(%ebp),%eax
086c8a78 +0x2ee:  mov    %eax,(%esp)
086c8a7b +0x2f1:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
086c8a80 +0x2f6:  movzbl %al,%eax
086c8a83 +0x2f9:  mov    %eax,0x4(%esp)
086c8a87 +0x2fd:  lea    -0x34(%ebp),%eax
086c8a8a +0x300:  mov    %eax,(%esp)
086c8a8d +0x303:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8a92 +0x308:  mov    0xc(%ebp),%eax
086c8a95 +0x30b:  mov    %eax,(%esp)
086c8a98 +0x30e:  call   085b9fd4 <_ZN6CParty18IsEventCharacPartyEv>  ; CParty::IsEventCharacParty()
086c8a9d +0x313:  movzbl %al,%eax
086c8aa0 +0x316:  mov    %eax,0x4(%esp)
086c8aa4 +0x31a:  lea    -0x34(%ebp),%eax
086c8aa7 +0x31d:  mov    %eax,(%esp)
086c8aaa +0x320:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8aaf +0x325:  cmpl   $0x0,0x10(%ebp)
086c8ab3 +0x329:  je     086c8ac5 <+0x33b>
086c8ab5 +0x32b:  cmpl   $0x1,0x10(%ebp)
086c8ab9 +0x32f:  je     086c8ac5 <+0x33b>
086c8abb +0x331:  cmpl   $0x2,0x10(%ebp)
086c8abf +0x335:  jne    086c8bc0 <+0x436>
086c8ac5 +0x33b:  movl   $"[impossible]",0x4(%esp)
086c8acd +0x343:  mov    0x8(%ebp),%eax
086c8ad0 +0x346:  mov    %eax,(%esp)
086c8ad3 +0x349:  call   086cbbf6 <_ZN9GameWorld31is_dungeon_tag_matching_channelEPc>  ; GameWorld::is_dungeon_tag_matching_channel(char*)
086c8ad8 +0x34e:  mov    %al,-0x15(%ebp)
086c8adb +0x351:  movzbl -0x15(%ebp),%eax
086c8adf +0x355:  mov    %eax,0x4(%esp)
086c8ae3 +0x359:  lea    -0x34(%ebp),%eax
086c8ae6 +0x35c:  mov    %eax,(%esp)
086c8ae9 +0x35f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8aee +0x364:  cmpb   $0x0,-0x15(%ebp)
086c8af2 +0x368:  je     086c8bc0 <+0x436>
086c8af8 +0x36e:  movl   $0x0,-0x14(%ebp)
086c8aff +0x375:  jmp    086c8bb1 <+0x427>
086c8b04 +0x37a:  mov    -0x14(%ebp),%eax
086c8b07 +0x37d:  mov    %eax,0x4(%esp)
086c8b0b +0x381:  mov    0xc(%ebp),%eax
086c8b0e +0x384:  mov    %eax,(%esp)
086c8b11 +0x387:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
086c8b16 +0x38c:  mov    %eax,-0x10(%ebp)
086c8b19 +0x38f:  cmpl   $0x0,-0x10(%ebp)
086c8b1d +0x393:  je     086c8b9a <+0x410>
086c8b1f +0x395:  movl   $0x6,0x4(%esp)
086c8b27 +0x39d:  lea    -0x34(%ebp),%eax
086c8b2a +0x3a0:  mov    %eax,(%esp)
086c8b2d +0x3a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8b32 +0x3a8:  movl   $0x0,-0xc(%ebp)
086c8b39 +0x3af:  jmp    086c8b8d <+0x403>
086c8b3b +0x3b1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c8b40 +0x3b6:  mov    -0xc(%ebp),%edx
086c8b43 +0x3b9:  mov    %edx,0x4(%esp)
086c8b47 +0x3bd:  mov    %eax,(%esp)
086c8b4a +0x3c0:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
086c8b4f +0x3c5:  movsbl %al,%eax
086c8b52 +0x3c8:  mov    %eax,0x4(%esp)
086c8b56 +0x3cc:  lea    -0x34(%ebp),%eax
086c8b59 +0x3cf:  mov    %eax,(%esp)
086c8b5c +0x3d2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8b61 +0x3d7:  mov    -0x10(%ebp),%eax
086c8b64 +0x3da:  mov    %eax,(%esp)
086c8b67 +0x3dd:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086c8b6c +0x3e2:  mov    -0xc(%ebp),%edx
086c8b6f +0x3e5:  movzbl 0xeb9(%eax,%edx,1),%eax
086c8b77 +0x3ed:  movsbl %al,%eax
086c8b7a +0x3f0:  mov    %eax,0x4(%esp)
086c8b7e +0x3f4:  lea    -0x34(%ebp),%eax
086c8b81 +0x3f7:  mov    %eax,(%esp)
086c8b84 +0x3fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8b89 +0x3ff:  addl   $0x1,-0xc(%ebp)
086c8b8d +0x403:  cmpl   $0x5,-0xc(%ebp)
086c8b91 +0x407:  setle  %al
086c8b94 +0x40a:  test   %al,%al
086c8b96 +0x40c:  jne    086c8b3b <+0x3b1>
086c8b98 +0x40e:  jmp    086c8bad <+0x423>
086c8b9a +0x410:  movl   $0x0,0x4(%esp)
086c8ba2 +0x418:  lea    -0x34(%ebp),%eax
086c8ba5 +0x41b:  mov    %eax,(%esp)
086c8ba8 +0x41e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8bad +0x423:  addl   $0x1,-0x14(%ebp)
086c8bb1 +0x427:  cmpl   $0x3,-0x14(%ebp)
086c8bb5 +0x42b:  setle  %al
086c8bb8 +0x42e:  test   %al,%al
086c8bba +0x430:  jne    086c8b04 <+0x37a>
086c8bc0 +0x436:  movl   $0x1,0x4(%esp)
086c8bc8 +0x43e:  lea    -0x34(%ebp),%eax
086c8bcb +0x441:  mov    %eax,(%esp)
086c8bce +0x444:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c8bd3 +0x449:  lea    -0x34(%ebp),%eax
086c8bd6 +0x44c:  mov    %eax,0x4(%esp)
086c8bda +0x450:  mov    0x8(%ebp),%eax
086c8bdd +0x453:  mov    %eax,(%esp)
086c8be0 +0x456:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086c8be5 +0x45b:  jmp    086c8c02 <+0x478>
086c8be7 +0x45d:  mov    %edx,%ebx
086c8be9 +0x45f:  mov    %eax,%esi
086c8beb +0x461:  lea    -0x34(%ebp),%eax
086c8bee +0x464:  mov    %eax,(%esp)
086c8bf1 +0x467:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8bf6 +0x46c:  mov    %esi,%eax
086c8bf8 +0x46e:  mov    %ebx,%edx
086c8bfa +0x470:  mov    %eax,(%esp)
086c8bfd +0x473:  call   08ae3750 <_Unwind_Resume>
086c8c02 +0x478:  lea    -0x34(%ebp),%eax
086c8c05 +0x47b:  mov    %eax,(%esp)
086c8c08 +0x47e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8c0d +0x483:  add    $0x50,%esp
086c8c10 +0x486:  pop    %ebx
086c8c11 +0x487:  pop    %esi
086c8c12 +0x488:  pop    %ebp
086c8c13 +0x489:  ret
```

## 反编译 C

```c
// GameWorld::send_party_info_to_all @ 0x86c878a

/* GameWorld::send_party_info_to_all(CParty*, int) */

void __thiscall GameWorld::send_party_info_to_all(GameWorld *this,CParty *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  CUser *pCVar6;
  CDataManager *this_00;
  PacketGuard local_38 [12];
  int local_2c;
  int local_28;
  int local_24;
  CUser *local_20;
  char local_1a;
  byte local_19;
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  local_2c = CParty::get_member_count(param_1);
  if (local_2c < 1) {
    LogManager::logFormat
              (1,"world.cpp","void GameWorld::send_party_info_to_all(CParty*, int)",0xc37,
               "GameWorld::send_party_info_to_all get_member_count() is %d",local_2c);
  }
  else {
    PacketGuard::PacketGuard(local_38);
                    /* try { // try from 086c87ff to 086c8be4 has its CatchHandler @ 086c8be7 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,9);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,1);
    iVar2 = CParty::GetPartyIndex(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,iVar2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,param_2);
    if ((param_2 == 0) || (param_2 == 1)) {
      uVar3 = CParty::getTitleIndex(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
      cVar1 = CParty::getTitleIndex(param_1);
      if (cVar1 == '\0') {
        pcVar4 = (char *)CParty::getTitle(param_1);
        sVar5 = strlen(pcVar4);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,sVar5);
        pcVar4 = (char *)CParty::getTitle(param_1);
        sVar5 = strlen(pcVar4);
        pcVar4 = (char *)CParty::getTitle(param_1);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_38,pcVar4,sVar5);
      }
      uVar3 = CParty::IsReturnUserParty(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
      uVar3 = CParty::getUserMax(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
      uVar3 = CParty::getDungIndex(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar3 & 0xffff);
      uVar3 = CParty::getDungDiffi(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
      uVar3 = CParty::IsEventCharacParty(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
    }
    if ((param_2 == 0) || (param_2 == 2)) {
      local_28 = 0;
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        local_20 = (CUser *)CParty::get_user(param_1,local_24);
        if (local_20 == (CUser *)0x0) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,0xffff);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0xff);
        }
        else {
          uVar3 = CUser::get_unique_id(local_20);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar3 & 0xffff);
          pCVar6 = (CUser *)CParty::getManager(param_1);
          if (pCVar6 == local_20) {
            local_28 = local_24;
          }
          local_1a = CUser::getSex(local_20);
          if (local_1a == -1) {
            local_1a = '\x01';
          }
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,(int)local_1a);
        }
      }
      uVar3 = CParty::IsReturnUserParty(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,local_28);
      uVar3 = CParty::is_quick_party(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
      uVar3 = CParty::IsEventCharacParty(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
    }
    if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
      local_19 = is_dungeon_tag_matching_channel(this,"[impossible]");
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,(uint)local_19);
      if (local_19 != 0) {
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          local_14 = (CUserCharacInfo *)CParty::get_user(param_1,local_18);
          if (local_14 == (CUserCharacInfo *)0x0) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,6);
            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
              this_00 = (CDataManager *)G_CDataManager();
              cVar1 = CDataManager::get_dimensionInout(this_00,local_10);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,(int)cVar1);
              iVar2 = CUserCharacInfo::getCurCharacR(local_14);
              InterfacePacketBuf::put_byte
                        ((InterfacePacketBuf *)local_38,(int)*(char *)(iVar2 + 0xeb9 + local_10));
            }
          }
        }
      }
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
    send_all(this,local_38);
    PacketGuard::~PacketGuard(local_38);
  }
  return;
}
```
