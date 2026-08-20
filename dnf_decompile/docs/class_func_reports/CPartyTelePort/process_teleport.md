# process_teleport

`_ZN14CPartyTelePort16process_teleportEv`

`CPartyTelePort::process_teleport()`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bbbb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bbbb8  _ZN14CPartyTelePort16process_teleportEv
#           CPartyTelePort::process_teleport()
# range [0x085bbbb8, 0x085bc043]
085bbbb8 +0x000:  push   %ebp
085bbbb9 +0x001:  mov    %esp,%ebp
085bbbbb +0x003:  push   %edi
085bbbbc +0x004:  push   %esi
085bbbbd +0x005:  push   %ebx
085bbbbe +0x006:  sub    $0x9c,%esp
085bbbc4 +0x00c:  mov    0x8(%ebp),%eax
085bbbc7 +0x00f:  mov    (%eax),%eax
085bbbc9 +0x011:  test   %eax,%eax
085bbbcb +0x013:  jne    085bbbd7 <+0x1f>
085bbbcd +0x015:  mov    $0x0,%eax
085bbbd2 +0x01a:  jmp    085bc038 <+0x480>
085bbbd7 +0x01f:  mov    0x8(%ebp),%eax
085bbbda +0x022:  mov    %eax,(%esp)
085bbbdd +0x025:  call   085bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>  ; CPartyTelePort::check_cur_teleport_state()
085bbbe2 +0x02a:  mov    %al,-0x35(%ebp)
085bbbe5 +0x02d:  movl   $0x0,-0x34(%ebp)
085bbbec +0x034:  movl   $0x0,-0x5c(%ebp)
085bbbf3 +0x03b:  cmpb   $0x0,-0x35(%ebp)
085bbbf7 +0x03f:  je     085bbf58 <+0x3a0>
085bbbfd +0x045:  movl   $0x0,-0x30(%ebp)
085bbc04 +0x04c:  jmp    085bbd64 <+0x1ac>
085bbc09 +0x051:  mov    0x8(%ebp),%eax
085bbc0c +0x054:  mov    (%eax),%eax
085bbc0e +0x056:  mov    -0x30(%ebp),%edx
085bbc11 +0x059:  mov    %edx,0x4(%esp)
085bbc15 +0x05d:  mov    %eax,(%esp)
085bbc18 +0x060:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bbc1d +0x065:  xor    $0x1,%eax
085bbc20 +0x068:  test   %al,%al
085bbc22 +0x06a:  jne    085bbd5c <+0x1a4>
085bbc28 +0x070:  mov    -0x30(%ebp),%eax
085bbc2b +0x073:  mov    %eax,0x4(%esp)
085bbc2f +0x077:  mov    0x8(%ebp),%eax
085bbc32 +0x07a:  mov    %eax,(%esp)
085bbc35 +0x07d:  call   085bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>  ; CPartyTelePort::get_teleport_member_state(int)
085bbc3a +0x082:  cmp    $0x4,%al
085bbc3c +0x084:  sete   %al
085bbc3f +0x087:  test   %al,%al
085bbc41 +0x089:  jne    085bbd5f <+0x1a7>
085bbc47 +0x08f:  mov    0x8(%ebp),%eax
085bbc4a +0x092:  mov    (%eax),%eax
085bbc4c +0x094:  mov    -0x30(%ebp),%edx
085bbc4f +0x097:  mov    %edx,0x4(%esp)
085bbc53 +0x09b:  mov    %eax,(%esp)
085bbc56 +0x09e:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bbc5b +0x0a3:  mov    %eax,-0x2c(%ebp)
085bbc5e +0x0a6:  cmpl   $0x0,-0x2c(%ebp)
085bbc62 +0x0aa:  je     085bbd60 <+0x1a8>
085bbc68 +0x0b0:  mov    0x8(%ebp),%eax
085bbc6b +0x0b3:  mov    %eax,(%esp)
085bbc6e +0x0b6:  call   085bf688 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbe6>  ; global constructors keyed to CParty::cMember::cMember()+0xbe6
085bbc73 +0x0bb:  movzbl %al,%eax
085bbc76 +0x0be:  mov    %eax,-0x78(%ebp)
085bbc79 +0x0c1:  mov    0x8(%ebp),%eax
085bbc7c +0x0c4:  mov    %eax,(%esp)
085bbc7f +0x0c7:  call   085bf67c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbda>  ; global constructors keyed to CParty::cMember::cMember()+0xbda
085bbc84 +0x0cc:  cwtl
085bbc85 +0x0cd:  mov    %eax,-0x74(%ebp)
085bbc88 +0x0d0:  mov    0x8(%ebp),%eax
085bbc8b +0x0d3:  mov    %eax,(%esp)
085bbc8e +0x0d6:  call   085bf670 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbce>  ; global constructors keyed to CParty::cMember::cMember()+0xbce
085bbc93 +0x0db:  movswl %ax,%edi
085bbc96 +0x0de:  mov    0x8(%ebp),%eax
085bbc99 +0x0e1:  mov    %eax,(%esp)
085bbc9c +0x0e4:  call   085bf664 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbc2>  ; global constructors keyed to CParty::cMember::cMember()+0xbc2
085bbca1 +0x0e9:  movzbl %al,%esi
085bbca4 +0x0ec:  mov    0x8(%ebp),%eax
085bbca7 +0x0ef:  mov    %eax,(%esp)
085bbcaa +0x0f2:  call   085bf658 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbb6>  ; global constructors keyed to CParty::cMember::cMember()+0xbb6
085bbcaf +0x0f7:  movzbl %al,%ebx
085bbcb2 +0x0fa:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085bbcb7 +0x0ff:  movl   $0x0,0x20(%esp)
085bbcbf +0x107:  movl   $0x1,0x1c(%esp)
085bbcc7 +0x10f:  mov    -0x78(%ebp),%edx
085bbcca +0x112:  mov    %edx,0x18(%esp)
085bbcce +0x116:  mov    -0x74(%ebp),%edx
085bbcd1 +0x119:  mov    %edx,0x14(%esp)
085bbcd5 +0x11d:  mov    %edi,0x10(%esp)
085bbcd9 +0x121:  mov    %esi,0xc(%esp)
085bbcdd +0x125:  mov    %ebx,0x8(%esp)
085bbce1 +0x129:  mov    -0x2c(%ebp),%edx
085bbce4 +0x12c:  mov    %edx,0x4(%esp)
085bbce8 +0x130:  mov    %eax,(%esp)
085bbceb +0x133:  call   086d1002 <_ZN9GameWorld15check_move_areaEP5CUseriiiiibi>  ; GameWorld::check_move_area(CUser*, int, int, int, int, int, bool, int)
085bbcf0 +0x138:  mov    %eax,-0x34(%ebp)
085bbcf3 +0x13b:  mov    0x8(%ebp),%eax
085bbcf6 +0x13e:  mov    (%eax),%eax
085bbcf8 +0x140:  mov    %eax,(%esp)
085bbcfb +0x143:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085bbd00 +0x148:  cmp    -0x2c(%ebp),%eax
085bbd03 +0x14b:  sete   %al
085bbd06 +0x14e:  test   %al,%al
085bbd08 +0x150:  je     085bbd27 <+0x16f>
085bbd0a +0x152:  lea    -0x5c(%ebp),%eax
085bbd0d +0x155:  mov    %eax,0x8(%esp)
085bbd11 +0x159:  movl   $0x0,0x4(%esp)
085bbd19 +0x161:  mov    -0x2c(%ebp),%eax
085bbd1c +0x164:  mov    %eax,(%esp)
085bbd1f +0x167:  call   0868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>  ; CUser::is_equip_aura_avatar(char, int&)
085bbd24 +0x16c:  mov    %eax,-0x34(%ebp)
085bbd27 +0x16f:  cmpl   $0x0,-0x34(%ebp)
085bbd2b +0x173:  jle    085bbd60 <+0x1a8>
085bbd2d +0x175:  movl   $0x0,0x8(%esp)
085bbd35 +0x17d:  mov    -0x30(%ebp),%eax
085bbd38 +0x180:  mov    %eax,0x4(%esp)
085bbd3c +0x184:  mov    0x8(%ebp),%eax
085bbd3f +0x187:  mov    %eax,(%esp)
085bbd42 +0x18a:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bbd47 +0x18f:  movl   $0x2,0x4(%esp)
085bbd4f +0x197:  mov    0x8(%ebp),%eax
085bbd52 +0x19a:  mov    %eax,(%esp)
085bbd55 +0x19d:  call   0822d7fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ea4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ea4
085bbd5a +0x1a2:  jmp    085bbd73 <+0x1bb>
085bbd5c +0x1a4:  nop
085bbd5d +0x1a5:  jmp    085bbd60 <+0x1a8>
085bbd5f +0x1a7:  nop
085bbd60 +0x1a8:  addl   $0x1,-0x30(%ebp)
085bbd64 +0x1ac:  cmpl   $0x3,-0x30(%ebp)
085bbd68 +0x1b0:  setle  %al
085bbd6b +0x1b3:  test   %al,%al
085bbd6d +0x1b5:  jne    085bbc09 <+0x51>
085bbd73 +0x1bb:  mov    0x8(%ebp),%eax
085bbd76 +0x1be:  mov    %eax,(%esp)
085bbd79 +0x1c1:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
085bbd7e +0x1c6:  cmp    $0x1,%al
085bbd80 +0x1c8:  sete   %al
085bbd83 +0x1cb:  test   %al,%al
085bbd85 +0x1cd:  je     085bbf43 <+0x38b>
085bbd8b +0x1d3:  movl   $0x1,0x4(%esp)
085bbd93 +0x1db:  mov    0x8(%ebp),%eax
085bbd96 +0x1de:  mov    %eax,(%esp)
085bbd99 +0x1e1:  call   085bc2b0 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi>  ; CPartyTelePort::send_teleport_effect_at_different_place(int)
085bbd9e +0x1e6:  movl   $0x0,-0x28(%ebp)
085bbda5 +0x1ed:  jmp    085bbf1f <+0x367>
085bbdaa +0x1f2:  mov    0x8(%ebp),%eax
085bbdad +0x1f5:  mov    (%eax),%eax
085bbdaf +0x1f7:  mov    -0x28(%ebp),%edx
085bbdb2 +0x1fa:  mov    %edx,0x4(%esp)
085bbdb6 +0x1fe:  mov    %eax,(%esp)
085bbdb9 +0x201:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bbdbe +0x206:  xor    $0x1,%eax
085bbdc1 +0x209:  test   %al,%al
085bbdc3 +0x20b:  jne    085bbf17 <+0x35f>
085bbdc9 +0x211:  mov    -0x28(%ebp),%eax
085bbdcc +0x214:  mov    %eax,0x4(%esp)
085bbdd0 +0x218:  mov    0x8(%ebp),%eax
085bbdd3 +0x21b:  mov    %eax,(%esp)
085bbdd6 +0x21e:  call   085bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>  ; CPartyTelePort::get_teleport_member_state(int)
085bbddb +0x223:  cmp    $0x4,%al
085bbddd +0x225:  sete   %al
085bbde0 +0x228:  test   %al,%al
085bbde2 +0x22a:  jne    085bbf1a <+0x362>
085bbde8 +0x230:  mov    0x8(%ebp),%eax
085bbdeb +0x233:  mov    (%eax),%eax
085bbded +0x235:  mov    -0x28(%ebp),%edx
085bbdf0 +0x238:  mov    %edx,0x4(%esp)
085bbdf4 +0x23c:  mov    %eax,(%esp)
085bbdf7 +0x23f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bbdfc +0x244:  mov    %eax,-0x24(%ebp)
085bbdff +0x247:  cmpl   $0x0,-0x24(%ebp)
085bbe03 +0x24b:  je     085bbf1b <+0x363>
085bbe09 +0x251:  mov    -0x24(%ebp),%eax
085bbe0c +0x254:  movl   $0x1,0x4(%esp)
085bbe14 +0x25c:  mov    %eax,(%esp)
085bbe17 +0x25f:  call   0868be70 <_ZN15CUserCharacInfo28set_charac_visible_teleport_Eb>  ; CUserCharacInfo::set_charac_visible_teleport_(bool)
085bbe1c +0x264:  mov    0x8(%ebp),%eax
085bbe1f +0x267:  mov    %eax,(%esp)
085bbe22 +0x26a:  call   085bf688 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbe6>  ; global constructors keyed to CParty::cMember::cMember()+0xbe6
085bbe27 +0x26f:  movzbl %al,%eax
085bbe2a +0x272:  mov    %eax,-0x70(%ebp)
085bbe2d +0x275:  mov    0x8(%ebp),%eax
085bbe30 +0x278:  mov    %eax,(%esp)
085bbe33 +0x27b:  call   085bf67c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbda>  ; global constructors keyed to CParty::cMember::cMember()+0xbda
085bbe38 +0x280:  cwtl
085bbe39 +0x281:  mov    %eax,-0x6c(%ebp)
085bbe3c +0x284:  mov    0x8(%ebp),%eax
085bbe3f +0x287:  mov    %eax,(%esp)
085bbe42 +0x28a:  call   085bf670 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbce>  ; global constructors keyed to CParty::cMember::cMember()+0xbce
085bbe47 +0x28f:  movswl %ax,%edi
085bbe4a +0x292:  mov    0x8(%ebp),%eax
085bbe4d +0x295:  mov    %eax,(%esp)
085bbe50 +0x298:  call   085bf664 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbc2>  ; global constructors keyed to CParty::cMember::cMember()+0xbc2
085bbe55 +0x29d:  movzbl %al,%esi
085bbe58 +0x2a0:  mov    0x8(%ebp),%eax
085bbe5b +0x2a3:  mov    %eax,(%esp)
085bbe5e +0x2a6:  call   085bf658 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbb6>  ; global constructors keyed to CParty::cMember::cMember()+0xbb6
085bbe63 +0x2ab:  movzbl %al,%ebx
085bbe66 +0x2ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085bbe6b +0x2b3:  movl   $0x0,0x28(%esp)
085bbe73 +0x2bb:  movl   $0x0,0x24(%esp)
085bbe7b +0x2c3:  movl   $0x1,0x20(%esp)
085bbe83 +0x2cb:  movl   $0x1,0x1c(%esp)
085bbe8b +0x2d3:  mov    -0x70(%ebp),%edx
085bbe8e +0x2d6:  mov    %edx,0x18(%esp)
085bbe92 +0x2da:  mov    -0x6c(%ebp),%edx
085bbe95 +0x2dd:  mov    %edx,0x14(%esp)
085bbe99 +0x2e1:  mov    %edi,0x10(%esp)
085bbe9d +0x2e5:  mov    %esi,0xc(%esp)
085bbea1 +0x2e9:  mov    %ebx,0x8(%esp)
085bbea5 +0x2ed:  mov    -0x24(%ebp),%edx
085bbea8 +0x2f0:  mov    %edx,0x4(%esp)
085bbeac +0x2f4:  mov    %eax,(%esp)
085bbeaf +0x2f7:  call   086c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>  ; GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
085bbeb4 +0x2fc:  xor    $0x1,%eax
085bbeb7 +0x2ff:  test   %al,%al
085bbeb9 +0x301:  je     085bbf02 <+0x34a>
085bbebb +0x303:  mov    -0x24(%ebp),%eax
085bbebe +0x306:  mov    %eax,(%esp)
085bbec1 +0x309:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085bbec6 +0x30e:  mov    %eax,%ebx
085bbec8 +0x310:  movl   $0x5,0xc(%esp)
085bbed0 +0x318:  movl   $0x43f9,0x8(%esp)
085bbed8 +0x320:  movl   $&_ZZN14CPartyTelePort16process_teleportEvE19__PRETTY_FUNCTION__,0x4(%esp)
085bbee0 +0x328:  lea    -0x58(%ebp),%eax
085bbee3 +0x32b:  mov    %eax,(%esp)
085bbee6 +0x32e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085bbeeb +0x333:  mov    %ebx,0x8(%esp)
085bbeef +0x337:  movl   $"party_teleport_error:(char_no:%d)",0x4(%esp)
085bbef7 +0x33f:  lea    -0x58(%ebp),%eax
085bbefa +0x342:  mov    %eax,(%esp)
085bbefd +0x345:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085bbf02 +0x34a:  mov    -0x24(%ebp),%eax
085bbf05 +0x34d:  movl   $0x0,0x4(%esp)
085bbf0d +0x355:  mov    %eax,(%esp)
085bbf10 +0x358:  call   0868be70 <_ZN15CUserCharacInfo28set_charac_visible_teleport_Eb>  ; CUserCharacInfo::set_charac_visible_teleport_(bool)
085bbf15 +0x35d:  jmp    085bbf1b <+0x363>
085bbf17 +0x35f:  nop
085bbf18 +0x360:  jmp    085bbf1b <+0x363>
085bbf1a +0x362:  nop
085bbf1b +0x363:  addl   $0x1,-0x28(%ebp)
085bbf1f +0x367:  cmpl   $0x3,-0x28(%ebp)
085bbf23 +0x36b:  setle  %al
085bbf26 +0x36e:  test   %al,%al
085bbf28 +0x370:  jne    085bbdaa <+0x1f2>
085bbf2e +0x376:  movl   $0x2,0x4(%esp)
085bbf36 +0x37e:  mov    0x8(%ebp),%eax
085bbf39 +0x381:  mov    %eax,(%esp)
085bbf3c +0x384:  call   085bc64c <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi>  ; CPartyTelePort::send_teleport_effect_at_equal_place(int)
085bbf41 +0x389:  jmp    085bbf58 <+0x3a0>
085bbf43 +0x38b:  mov    -0x34(%ebp),%eax
085bbf46 +0x38e:  movzbl %al,%eax
085bbf49 +0x391:  mov    %eax,0x4(%esp)
085bbf4d +0x395:  mov    0x8(%ebp),%eax
085bbf50 +0x398:  mov    %eax,(%esp)
085bbf53 +0x39b:  call   085bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>  ; CPartyTelePort::send_teleport_status(unsigned char)
085bbf58 +0x3a0:  mov    0x8(%ebp),%eax
085bbf5b +0x3a3:  mov    %eax,(%esp)
085bbf5e +0x3a6:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
085bbf63 +0x3ab:  cmp    $0x1,%al
085bbf65 +0x3ad:  sete   %al
085bbf68 +0x3b0:  test   %al,%al
085bbf6a +0x3b2:  je     085bc034 <+0x47c>
085bbf70 +0x3b8:  mov    0x8(%ebp),%eax
085bbf73 +0x3bb:  mov    %eax,(%esp)
085bbf76 +0x3be:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
085bbf7b +0x3c3:  mov    0x8(%ebp),%eax
085bbf7e +0x3c6:  mov    (%eax),%eax
085bbf80 +0x3c8:  mov    %eax,(%esp)
085bbf83 +0x3cb:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085bbf88 +0x3d0:  mov    %eax,-0x20(%ebp)
085bbf8b +0x3d3:  cmpl   $0x0,-0x20(%ebp)
085bbf8f +0x3d7:  je     085bc034 <+0x47c>
085bbf95 +0x3dd:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085bbf9c +0x3e4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085bbfa1 +0x3e9:  mov    -0x5c(%ebp),%edx
085bbfa4 +0x3ec:  add    %edx,%eax
085bbfa6 +0x3ee:  mov    %eax,-0x1c(%ebp)
085bbfa9 +0x3f1:  mov    -0x20(%ebp),%eax
085bbfac +0x3f4:  mov    -0x1c(%ebp),%edx
085bbfaf +0x3f7:  mov    %edx,0x8(%esp)
085bbfb3 +0x3fb:  movl   $0x0,0x4(%esp)
085bbfbb +0x403:  mov    %eax,(%esp)
085bbfbe +0x406:  call   08284490 <_GLOBAL__I__ZN8TeleportC2Ev+0xfd>  ; global constructors keyed to Teleport::Teleport()+0xfd
085bbfc3 +0x40b:  movl   $0x0,0x4(%esp)
085bbfcb +0x413:  mov    -0x20(%ebp),%eax
085bbfce +0x416:  mov    %eax,(%esp)
085bbfd1 +0x419:  call   0868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>  ; CUser::get_aura_avatar_option_value(int)
085bbfd6 +0x41e:  mov    %eax,0x8(%esp)
085bbfda +0x422:  movl   $0x0,0x4(%esp)
085bbfe2 +0x42a:  mov    -0x20(%ebp),%eax
085bbfe5 +0x42d:  mov    %eax,(%esp)
085bbfe8 +0x430:  call   0868de0a <_ZN5CUser22UpdateAuraAvatarOptionEii>  ; CUser::UpdateAuraAvatarOption(int, int)
085bbfed +0x435:  mov    -0x20(%ebp),%eax
085bbff0 +0x438:  mov    %eax,(%esp)
085bbff3 +0x43b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085bbff8 +0x440:  mov    %eax,%ebx
085bbffa +0x442:  movl   $0x0,0xc(%esp)
085bc002 +0x44a:  movl   $0x4419,0x8(%esp)
085bc00a +0x452:  movl   $&_ZZN14CPartyTelePort16process_teleportEvE19__PRETTY_FUNCTION__,0x4(%esp)
085bc012 +0x45a:  lea    -0x48(%ebp),%eax
085bc015 +0x45d:  mov    %eax,(%esp)
085bc018 +0x460:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085bc01d +0x465:  mov    %ebx,0x8(%esp)
085bc021 +0x469:  movl   $"party_teleport_success:(char_no:%d)",0x4(%esp)
085bc029 +0x471:  lea    -0x48(%ebp),%eax
085bc02c +0x474:  mov    %eax,(%esp)
085bc02f +0x477:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085bc034 +0x47c:  movzbl -0x35(%ebp),%eax
085bc038 +0x480:  add    $0x9c,%esp
085bc03e +0x486:  pop    %ebx
085bc03f +0x487:  pop    %esi
085bc040 +0x488:  pop    %edi
085bc041 +0x489:  pop    %ebp
085bc042 +0x48a:  ret
085bc043 +0x48b:  nop
```

## 反编译 C

```c
// CPartyTelePort::process_teleport @ 0x85bbbb8

/* CPartyTelePort::process_teleport() */

char __thiscall CPartyTelePort::process_teleport(CPartyTelePort *this)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  CUser *pCVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  GameWorld *this_00;
  int iVar9;
  undefined4 uVar10;
  int local_60;
  cMyTrace local_5c [16];
  cMyTrace local_4c [19];
  char local_39;
  int local_38;
  int local_34;
  CUser *local_30;
  int local_2c;
  CUserCharacInfo *local_28;
  CUserCharacInfo *local_24;
  int local_20;
  
  if (*(int *)this == 0) {
    local_39 = '\0';
  }
  else {
    local_39 = check_cur_teleport_state(this);
    local_38 = 0;
    local_60 = 0;
    if (local_39 != '\0') {
      for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
        cVar2 = CParty::checkValidUser(*(CParty **)this,local_34);
        if (((cVar2 == '\x01') &&
            (cVar2 = get_teleport_member_state(this,local_34), cVar2 != '\x04')) &&
           (local_30 = (CUser *)CParty::get_user(*(CParty **)this,local_34),
           local_30 != (CUser *)0x0)) {
          bVar1 = (bool)get_teleport_direction(this);
          sVar3 = get_teleport_posy(this);
          sVar4 = get_teleport_posx(this);
          uVar6 = get_teleport_area_index(this);
          uVar7 = get_teleport_village(this);
          pCVar5 = (CUser *)G_GameWorld();
          local_38 = GameWorld::check_move_area
                               (pCVar5,(int)local_30,uVar7 & 0xff,uVar6 & 0xff,(int)sVar4,(int)sVar3
                                ,bVar1,1);
          pCVar5 = (CUser *)CParty::getManager(*(CParty **)this);
          if (pCVar5 == local_30) {
            local_38 = CUser::is_equip_aura_avatar(local_30,'\0',&local_60);
          }
          if (0 < local_38) {
            set_teleport_member_state(this,local_34,'\0');
            set_teleport_state(this,'\x02');
            break;
          }
        }
      }
      cVar2 = get_teleport_state(this);
      if (cVar2 == '\x01') {
        send_teleport_effect_at_different_place(this,1);
        for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
          cVar2 = CParty::checkValidUser(*(CParty **)this,local_2c);
          if (((cVar2 == '\x01') &&
              (cVar2 = get_teleport_member_state(this,local_2c), cVar2 != '\x04')) &&
             (local_28 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_2c),
             local_28 != (CUserCharacInfo *)0x0)) {
            CUserCharacInfo::set_charac_visible_teleport_(local_28,true);
            uVar6 = get_teleport_direction(this);
            sVar3 = get_teleport_posy(this);
            sVar4 = get_teleport_posx(this);
            uVar7 = get_teleport_area_index(this);
            uVar8 = get_teleport_village(this);
            this_00 = (GameWorld *)G_GameWorld();
            cVar2 = GameWorld::move_area
                              (this_00,(CUser *)local_28,uVar8 & 0xff,uVar7 & 0xff,(int)sVar4,
                               (int)sVar3,uVar6 & 0xff,true,1,0,0);
            if (cVar2 != '\x01') {
              uVar10 = CUserCharacInfo::getCurCharacNo(local_28);
              cMyTrace::cMyTrace(local_5c,"bool CPartyTelePort::process_teleport()",0x43f9,5);
              cMyTrace::operator()(local_5c,"party_teleport_error:(char_no:%d)",uVar10);
            }
            CUserCharacInfo::set_charac_visible_teleport_(local_28,false);
          }
        }
        send_teleport_effect_at_equal_place(this,2);
      }
      else {
        send_teleport_status(this,(uchar)local_38);
      }
    }
    cVar2 = get_teleport_state(this);
    if (cVar2 == '\x01') {
      reset_teleport_data(this);
      local_24 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
      if (local_24 != (CUserCharacInfo *)0x0) {
        local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20 = local_20 + local_60;
        CUserCharacInfo::set_aura_avatar_option_value(local_24,0,local_20);
        iVar9 = CUser::get_aura_avatar_option_value((CUser *)local_24,0);
        CUser::UpdateAuraAvatarOption((CUser *)local_24,0,iVar9);
        uVar10 = CUserCharacInfo::getCurCharacNo(local_24);
        cMyTrace::cMyTrace(local_4c,"bool CPartyTelePort::process_teleport()",0x4419,0);
        cMyTrace::operator()(local_4c,"party_teleport_success:(char_no:%d)",uVar10);
      }
    }
  }
  return local_39;
}
```
