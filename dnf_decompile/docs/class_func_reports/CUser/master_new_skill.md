# master_new_skill

`_ZN5CUser16master_new_skillER14stBuySkillInfob`

`CUser::master_new_skill(stBuySkillInfo&, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866afa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866afa2  _ZN5CUser16master_new_skillER14stBuySkillInfob
#           CUser::master_new_skill(stBuySkillInfo&, bool)
# range [0x0866afa2, 0x0866b53d]
0866afa2 +0x000:  push   %ebp
0866afa3 +0x001:  mov    %esp,%ebp
0866afa5 +0x003:  push   %edi
0866afa6 +0x004:  push   %esi
0866afa7 +0x005:  push   %ebx
0866afa8 +0x006:  sub    $0x8c,%esp
0866afae +0x00c:  mov    0x10(%ebp),%eax
0866afb1 +0x00f:  mov    %al,-0x3c(%ebp)
0866afb4 +0x012:  mov    0xc(%ebp),%eax
0866afb7 +0x015:  movzbl 0x1(%eax),%eax
0866afbb +0x019:  cmp    $0xc7,%al
0866afbd +0x01b:  jbe    0866b155 <+0x1b3>
0866afc3 +0x021:  mov    0xc(%ebp),%eax
0866afc6 +0x024:  movzbl 0x1(%eax),%eax
0866afca +0x028:  cmp    $0xd0,%al
0866afcc +0x02a:  ja     0866b155 <+0x1b3>
0866afd2 +0x030:  mov    0x8(%ebp),%eax
0866afd5 +0x033:  mov    %eax,(%esp)
0866afd8 +0x036:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
0866afdd +0x03b:  test   %al,%al
0866afdf +0x03d:  jne    0866aff0 <+0x4e>
0866afe1 +0x03f:  mov    0x8(%ebp),%eax
0866afe4 +0x042:  mov    %eax,(%esp)
0866afe7 +0x045:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
0866afec +0x04a:  test   %al,%al
0866afee +0x04c:  je     0866aff7 <+0x55>
0866aff0 +0x04e:  mov    $0x1,%eax
0866aff5 +0x053:  jmp    0866affc <+0x5a>
0866aff7 +0x055:  mov    $0x0,%eax
0866affc +0x05a:  test   %al,%al
0866affe +0x05c:  je     0866b52e <+0x58c>
0866b004 +0x062:  mov    0x8(%ebp),%eax
0866b007 +0x065:  mov    %eax,(%esp)
0866b00a +0x068:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0866b00f +0x06d:  movzwl 0x42(%eax),%eax
0866b013 +0x071:  movzwl %ax,%ebx
0866b016 +0x074:  mov    0x8(%ebp),%eax
0866b019 +0x077:  mov    %eax,(%esp)
0866b01c +0x07a:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0866b021 +0x07f:  mov    %eax,-0x64(%ebp)
0866b024 +0x082:  mov    0x8(%ebp),%eax
0866b027 +0x085:  mov    %eax,(%esp)
0866b02a +0x088:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0866b02f +0x08d:  mov    %eax,-0x60(%ebp)
0866b032 +0x090:  mov    0x8(%ebp),%eax
0866b035 +0x093:  mov    %eax,(%esp)
0866b038 +0x096:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866b03d +0x09b:  movsbl %al,%eax
0866b040 +0x09e:  mov    %eax,-0x5c(%ebp)
0866b043 +0x0a1:  mov    0x8(%ebp),%eax
0866b046 +0x0a4:  mov    %eax,(%esp)
0866b049 +0x0a7:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866b04e +0x0ac:  movsbl %al,%eax
0866b051 +0x0af:  mov    %eax,-0x58(%ebp)
0866b054 +0x0b2:  mov    0x8(%ebp),%eax
0866b057 +0x0b5:  mov    %eax,(%esp)
0866b05a +0x0b8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866b05f +0x0bd:  mov    %eax,%edi
0866b061 +0x0bf:  mov    0xc(%ebp),%eax
0866b064 +0x0c2:  movzbl 0x1(%eax),%eax
0866b068 +0x0c6:  movzbl %al,%esi
0866b06b +0x0c9:  mov    0x8(%ebp),%eax
0866b06e +0x0cc:  mov    %eax,(%esp)
0866b071 +0x0cf:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b076 +0x0d4:  mov    %eax,%edx
0866b078 +0x0d6:  mov    %ebx,0x28(%esp)
0866b07c +0x0da:  lea    -0x36(%ebp),%eax
0866b07f +0x0dd:  mov    %eax,0x24(%esp)
0866b083 +0x0e1:  lea    -0x24(%ebp),%eax
0866b086 +0x0e4:  mov    %eax,0x20(%esp)
0866b08a +0x0e8:  lea    -0x34(%ebp),%eax
0866b08d +0x0eb:  mov    %eax,0x1c(%esp)
0866b091 +0x0ef:  mov    -0x64(%ebp),%eax
0866b094 +0x0f2:  mov    %eax,0x18(%esp)
0866b098 +0x0f6:  mov    -0x60(%ebp),%eax
0866b09b +0x0f9:  mov    %eax,0x14(%esp)
0866b09f +0x0fd:  mov    -0x5c(%ebp),%eax
0866b0a2 +0x100:  mov    %eax,0x10(%esp)
0866b0a6 +0x104:  mov    -0x58(%ebp),%eax
0866b0a9 +0x107:  mov    %eax,0xc(%esp)
0866b0ad +0x10b:  mov    %edi,0x8(%esp)
0866b0b1 +0x10f:  mov    %esi,0x4(%esp)
0866b0b5 +0x113:  mov    %edx,(%esp)
0866b0b8 +0x116:  call   086037c6 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi>  ; SkillSlot::master_new_guild_skill(int, int, int, int, STGuildDBInfoOnly const&, int, int&, int&, short&, int)
0866b0bd +0x11b:  mov    %eax,-0x20(%ebp)
0866b0c0 +0x11e:  cmpl   $0x0,-0x20(%ebp)
0866b0c4 +0x122:  js     0866b21e <+0x27c>
0866b0ca +0x128:  mov    -0x34(%ebp),%eax
0866b0cd +0x12b:  mov    %eax,-0x54(%ebp)
0866b0d0 +0x12e:  movzwl -0x36(%ebp),%eax
0866b0d4 +0x132:  cwtl
0866b0d5 +0x133:  mov    %eax,-0x50(%ebp)
0866b0d8 +0x136:  mov    -0x24(%ebp),%edx
0866b0db +0x139:  mov    %edx,-0x4c(%ebp)
0866b0de +0x13c:  mov    0xc(%ebp),%eax
0866b0e1 +0x13f:  movzbl 0x1(%eax),%eax
0866b0e5 +0x143:  movzbl %al,%edi
0866b0e8 +0x146:  mov    0x8(%ebp),%eax
0866b0eb +0x149:  mov    %eax,(%esp)
0866b0ee +0x14c:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0866b0f3 +0x151:  mov    %eax,%ebx
0866b0f5 +0x153:  movl   $0xffffffff,0x4(%esp)
0866b0fd +0x15b:  mov    0x8(%ebp),%eax
0866b100 +0x15e:  mov    %eax,(%esp)
0866b103 +0x161:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0866b108 +0x166:  mov    %eax,%esi
0866b10a +0x168:  mov    0x8(%ebp),%eax
0866b10d +0x16b:  mov    %eax,(%esp)
0866b110 +0x16e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0866b115 +0x173:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0866b11b +0x179:  mov    %eax,0x4(%esp)
0866b11f +0x17d:  mov    %edx,(%esp)
0866b122 +0x180:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0866b127 +0x185:  mov    -0x54(%ebp),%edx
0866b12a +0x188:  mov    %edx,0x18(%esp)
0866b12e +0x18c:  mov    -0x50(%ebp),%edx
0866b131 +0x18f:  mov    %edx,0x14(%esp)
0866b135 +0x193:  mov    -0x4c(%ebp),%edx
0866b138 +0x196:  mov    %edx,0x10(%esp)
0866b13c +0x19a:  mov    %edi,0xc(%esp)
0866b140 +0x19e:  mov    %ebx,0x8(%esp)
0866b144 +0x1a2:  mov    %esi,0x4(%esp)
0866b148 +0x1a6:  mov    %eax,(%esp)
0866b14b +0x1a9:  call   0846e026 <_ZN17CGuildServerProxy17SendBuyGuildSkillEjjiisj>  ; CGuildServerProxy::SendBuyGuildSkill(unsigned int, unsigned int, int, int, short, unsigned int)
0866b150 +0x1ae:  jmp    0866b21f <+0x27d>
0866b155 +0x1b3:  mov    0x8(%ebp),%eax
0866b158 +0x1b6:  mov    %eax,(%esp)
0866b15b +0x1b9:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0866b160 +0x1be:  mov    %eax,-0x1c(%ebp)
0866b163 +0x1c1:  mov    -0x1c(%ebp),%eax
0866b166 +0x1c4:  cmp    $0xffffffff,%eax
0866b169 +0x1c7:  je     0866b172 <+0x1d0>
0866b16b +0x1c9:  mov    -0x1c(%ebp),%eax
0866b16e +0x1cc:  test   %eax,%eax
0866b170 +0x1ce:  jne    0866b181 <+0x1df>
0866b172 +0x1d0:  mov    0xc(%ebp),%eax
0866b175 +0x1d3:  movzbl (%eax),%eax
0866b178 +0x1d6:  cmp    $0x1,%al
0866b17a +0x1d8:  jne    0866b191 <+0x1ef>
0866b17c +0x1da:  jmp    0866b532 <+0x590>
0866b181 +0x1df:  mov    0xc(%ebp),%eax
0866b184 +0x1e2:  movzbl (%eax),%eax
0866b187 +0x1e5:  cmp    $0x1,%al
0866b189 +0x1e7:  jne    0866b531 <+0x58f>
0866b18f +0x1ed:  jmp    0866b192 <+0x1f0>
0866b191 +0x1ef:  nop
0866b192 +0x1f0:  mov    0xc(%ebp),%eax
0866b195 +0x1f3:  movzbl 0x2(%eax),%eax
0866b199 +0x1f7:  movsbl %al,%eax
0866b19c +0x1fa:  mov    %eax,-0x48(%ebp)
0866b19f +0x1fd:  mov    0x8(%ebp),%eax
0866b1a2 +0x200:  mov    %eax,(%esp)
0866b1a5 +0x203:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
0866b1aa +0x208:  movsbl %al,%eax
0866b1ad +0x20b:  mov    %eax,-0x44(%ebp)
0866b1b0 +0x20e:  mov    0x8(%ebp),%eax
0866b1b3 +0x211:  mov    %eax,(%esp)
0866b1b6 +0x214:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866b1bb +0x219:  movsbl %al,%eax
0866b1be +0x21c:  mov    %eax,-0x40(%ebp)
0866b1c1 +0x21f:  mov    0x8(%ebp),%eax
0866b1c4 +0x222:  mov    %eax,(%esp)
0866b1c7 +0x225:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866b1cc +0x22a:  mov    %eax,%esi
0866b1ce +0x22c:  mov    0x8(%ebp),%eax
0866b1d1 +0x22f:  mov    %eax,(%esp)
0866b1d4 +0x232:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866b1d9 +0x237:  mov    %eax,%ebx
0866b1db +0x239:  mov    0xc(%ebp),%eax
0866b1de +0x23c:  movzbl 0x1(%eax),%eax
0866b1e2 +0x240:  movzbl %al,%edi
0866b1e5 +0x243:  mov    0x8(%ebp),%eax
0866b1e8 +0x246:  mov    %eax,(%esp)
0866b1eb +0x249:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866b1f0 +0x24e:  mov    -0x48(%ebp),%edx
0866b1f3 +0x251:  mov    %edx,0x18(%esp)
0866b1f7 +0x255:  mov    -0x44(%ebp),%edx
0866b1fa +0x258:  mov    %edx,0x14(%esp)
0866b1fe +0x25c:  mov    -0x40(%ebp),%edx
0866b201 +0x25f:  mov    %edx,0x10(%esp)
0866b205 +0x263:  mov    %esi,0xc(%esp)
0866b209 +0x267:  mov    %ebx,0x8(%esp)
0866b20d +0x26b:  mov    %edi,0x4(%esp)
0866b211 +0x26f:  mov    %eax,(%esp)
0866b214 +0x272:  call   08603a74 <_ZN9SkillSlot16master_new_skillEiiiiii>  ; SkillSlot::master_new_skill(int, int, int, int, int, int)
0866b219 +0x277:  mov    %eax,-0x20(%ebp)
0866b21c +0x27a:  jmp    0866b21f <+0x27d>
0866b21e +0x27c:  nop
0866b21f +0x27d:  lea    -0x30(%ebp),%eax
0866b222 +0x280:  mov    %eax,(%esp)
0866b225 +0x283:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0866b22a +0x288:  movl   $0x1f,0x8(%esp)
0866b232 +0x290:  movl   $0x1,0x4(%esp)
0866b23a +0x298:  lea    -0x30(%ebp),%eax
0866b23d +0x29b:  mov    %eax,(%esp)
0866b240 +0x29e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866b245 +0x2a3:  cmpl   $0x0,-0x20(%ebp)
0866b249 +0x2a7:  jns    0866b30a <+0x368>
0866b24f +0x2ad:  movl   $0x0,0x4(%esp)
0866b257 +0x2b5:  lea    -0x30(%ebp),%eax
0866b25a +0x2b8:  mov    %eax,(%esp)
0866b25d +0x2bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b262 +0x2c0:  mov    -0x20(%ebp),%eax
0866b265 +0x2c3:  add    $0x6,%eax
0866b268 +0x2c6:  cmp    $0x5,%eax
0866b26b +0x2c9:  ja     0866b4de <+0x53c>
0866b271 +0x2cf:  mov    &data#3edce50f(.rodata)(,%eax,4),%eax
0866b278 +0x2d6:  jmp    *%eax
0866b27a +0x2d8:  movl   $0x15,0x4(%esp)
0866b282 +0x2e0:  lea    -0x30(%ebp),%eax
0866b285 +0x2e3:  mov    %eax,(%esp)
0866b288 +0x2e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b28d +0x2eb:  jmp    0866b4df <+0x53d>
0866b292 +0x2f0:  movl   $0x16,0x4(%esp)
0866b29a +0x2f8:  lea    -0x30(%ebp),%eax
0866b29d +0x2fb:  mov    %eax,(%esp)
0866b2a0 +0x2fe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b2a5 +0x303:  jmp    0866b4df <+0x53d>
0866b2aa +0x308:  movl   $0x12,0x4(%esp)
0866b2b2 +0x310:  lea    -0x30(%ebp),%eax
0866b2b5 +0x313:  mov    %eax,(%esp)
0866b2b8 +0x316:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b2bd +0x31b:  jmp    0866b4df <+0x53d>
0866b2c2 +0x320:  movl   $0x1,0x4(%esp)
0866b2ca +0x328:  lea    -0x30(%ebp),%eax
0866b2cd +0x32b:  mov    %eax,(%esp)
0866b2d0 +0x32e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b2d5 +0x333:  jmp    0866b4df <+0x53d>
0866b2da +0x338:  movl   $0x5b,0x4(%esp)
0866b2e2 +0x340:  lea    -0x30(%ebp),%eax
0866b2e5 +0x343:  mov    %eax,(%esp)
0866b2e8 +0x346:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b2ed +0x34b:  jmp    0866b4df <+0x53d>
0866b2f2 +0x350:  movl   $0x5c,0x4(%esp)
0866b2fa +0x358:  lea    -0x30(%ebp),%eax
0866b2fd +0x35b:  mov    %eax,(%esp)
0866b300 +0x35e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b305 +0x363:  jmp    0866b4df <+0x53d>
0866b30a +0x368:  movl   $0x1,0x4(%esp)
0866b312 +0x370:  lea    -0x30(%ebp),%eax
0866b315 +0x373:  mov    %eax,(%esp)
0866b318 +0x376:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b31d +0x37b:  mov    0x8(%ebp),%eax
0866b320 +0x37e:  mov    %eax,(%esp)
0866b323 +0x381:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0866b328 +0x386:  movsbl %al,%eax
0866b32b +0x389:  mov    %eax,0x4(%esp)
0866b32f +0x38d:  lea    -0x30(%ebp),%eax
0866b332 +0x390:  mov    %eax,(%esp)
0866b335 +0x393:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b33a +0x398:  mov    0x8(%ebp),%eax
0866b33d +0x39b:  mov    %eax,(%esp)
0866b340 +0x39e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0866b345 +0x3a3:  mov    %eax,%ebx
0866b347 +0x3a5:  mov    0x8(%ebp),%eax
0866b34a +0x3a8:  mov    %eax,(%esp)
0866b34d +0x3ab:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b352 +0x3b0:  mov    %ebx,0x4(%esp)
0866b356 +0x3b4:  mov    %eax,(%esp)
0866b359 +0x3b7:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0866b35e +0x3bc:  mov    %eax,0x4(%esp)
0866b362 +0x3c0:  lea    -0x30(%ebp),%eax
0866b365 +0x3c3:  mov    %eax,(%esp)
0866b368 +0x3c6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866b36d +0x3cb:  mov    0x8(%ebp),%eax
0866b370 +0x3ce:  mov    %eax,(%esp)
0866b373 +0x3d1:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0866b378 +0x3d6:  cmp    $0xffffffff,%eax
0866b37b +0x3d9:  je     0866b38c <+0x3ea>
0866b37d +0x3db:  mov    0x8(%ebp),%eax
0866b380 +0x3de:  mov    %eax,(%esp)
0866b383 +0x3e1:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
0866b388 +0x3e6:  test   %eax,%eax
0866b38a +0x3e8:  jne    0866b393 <+0x3f1>
0866b38c +0x3ea:  mov    $0x1,%eax
0866b391 +0x3ef:  jmp    0866b398 <+0x3f6>
0866b393 +0x3f1:  mov    $0x0,%eax
0866b398 +0x3f6:  test   %al,%al
0866b39a +0x3f8:  je     0866b3c8 <+0x426>
0866b39c +0x3fa:  mov    0x8(%ebp),%eax
0866b39f +0x3fd:  mov    %eax,(%esp)
0866b3a2 +0x400:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b3a7 +0x405:  movl   $0x2,0x4(%esp)
0866b3af +0x40d:  mov    %eax,(%esp)
0866b3b2 +0x410:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b3b7 +0x415:  mov    %eax,0x4(%esp)
0866b3bb +0x419:  lea    -0x30(%ebp),%eax
0866b3be +0x41c:  mov    %eax,(%esp)
0866b3c1 +0x41f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866b3c6 +0x424:  jmp    0866b3f2 <+0x450>
0866b3c8 +0x426:  mov    0x8(%ebp),%eax
0866b3cb +0x429:  mov    %eax,(%esp)
0866b3ce +0x42c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b3d3 +0x431:  movl   $0x3,0x4(%esp)
0866b3db +0x439:  mov    %eax,(%esp)
0866b3de +0x43c:  call   086035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sfp_at_index(ENUM_SKILL_TREE_KIND) const
0866b3e3 +0x441:  mov    %eax,0x4(%esp)
0866b3e7 +0x445:  lea    -0x30(%ebp),%eax
0866b3ea +0x448:  mov    %eax,(%esp)
0866b3ed +0x44b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866b3f2 +0x450:  mov    0xc(%ebp),%eax
0866b3f5 +0x453:  movzbl 0x1(%eax),%eax
0866b3f9 +0x457:  cmp    $0xc7,%al
0866b3fb +0x459:  jbe    0866b448 <+0x4a6>
0866b3fd +0x45b:  mov    0xc(%ebp),%eax
0866b400 +0x45e:  movzbl 0x1(%eax),%eax
0866b404 +0x462:  cmp    $0xd0,%al
0866b406 +0x464:  ja     0866b448 <+0x4a6>
0866b408 +0x466:  movl   $0xff,0x4(%esp)
0866b410 +0x46e:  lea    -0x30(%ebp),%eax
0866b413 +0x471:  mov    %eax,(%esp)
0866b416 +0x474:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b41b +0x479:  mov    0xc(%ebp),%eax
0866b41e +0x47c:  movzbl 0x1(%eax),%eax
0866b422 +0x480:  movzbl %al,%eax
0866b425 +0x483:  mov    %eax,0x4(%esp)
0866b429 +0x487:  lea    -0x30(%ebp),%eax
0866b42c +0x48a:  mov    %eax,(%esp)
0866b42f +0x48d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b434 +0x492:  mov    -0x24(%ebp),%eax
0866b437 +0x495:  mov    %eax,0x4(%esp)
0866b43b +0x499:  lea    -0x30(%ebp),%eax
0866b43e +0x49c:  mov    %eax,(%esp)
0866b441 +0x49f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b446 +0x4a4:  jmp    0866b49f <+0x4fd>
0866b448 +0x4a6:  mov    -0x20(%ebp),%eax
0866b44b +0x4a9:  movsbl %al,%eax
0866b44e +0x4ac:  mov    %eax,0x4(%esp)
0866b452 +0x4b0:  lea    -0x30(%ebp),%eax
0866b455 +0x4b3:  mov    %eax,(%esp)
0866b458 +0x4b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b45d +0x4bb:  mov    0xc(%ebp),%eax
0866b460 +0x4be:  movzbl 0x1(%eax),%eax
0866b464 +0x4c2:  movzbl %al,%eax
0866b467 +0x4c5:  mov    %eax,0x4(%esp)
0866b46b +0x4c9:  lea    -0x30(%ebp),%eax
0866b46e +0x4cc:  mov    %eax,(%esp)
0866b471 +0x4cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b476 +0x4d4:  mov    0x8(%ebp),%eax
0866b479 +0x4d7:  mov    %eax,(%esp)
0866b47c +0x4da:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b481 +0x4df:  mov    -0x20(%ebp),%edx
0866b484 +0x4e2:  mov    %edx,0x4(%esp)
0866b488 +0x4e6:  mov    %eax,(%esp)
0866b48b +0x4e9:  call   086068e6 <_ZNK9SkillSlot15get_skill_levelEi>  ; SkillSlot::get_skill_level(int) const
0866b490 +0x4ee:  mov    %eax,0x4(%esp)
0866b494 +0x4f2:  lea    -0x30(%ebp),%eax
0866b497 +0x4f5:  mov    %eax,(%esp)
0866b49a +0x4f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866b49f +0x4fd:  mov    0x8(%ebp),%eax
0866b4a2 +0x500:  mov    %eax,(%esp)
0866b4a5 +0x503:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0866b4aa +0x508:  mov    -0x20(%ebp),%edx
0866b4ad +0x50b:  mov    %edx,0x4(%esp)
0866b4b1 +0x50f:  mov    %eax,(%esp)
0866b4b4 +0x512:  call   086068e6 <_ZNK9SkillSlot15get_skill_levelEi>  ; SkillSlot::get_skill_level(int) const
0866b4b9 +0x517:  mov    0xc(%ebp),%edx
0866b4bc +0x51a:  movzbl 0x1(%edx),%edx
0866b4c0 +0x51e:  movzbl %dl,%ecx
0866b4c3 +0x521:  mov    0x8(%ebp),%edx
0866b4c6 +0x524:  mov    0x796f8(%edx),%edx
0866b4cc +0x52a:  mov    %eax,0x8(%esp)
0866b4d0 +0x52e:  mov    %ecx,0x4(%esp)
0866b4d4 +0x532:  mov    %edx,(%esp)
0866b4d7 +0x535:  call   084b9f24 <_ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii>  ; HistoryLog::WriteLearnSkill(_IO_FILE*, int, int)
0866b4dc +0x53a:  jmp    0866b4df <+0x53d>
0866b4de +0x53c:  nop
0866b4df +0x53d:  movl   $0x1,0x4(%esp)
0866b4e7 +0x545:  lea    -0x30(%ebp),%eax
0866b4ea +0x548:  mov    %eax,(%esp)
0866b4ed +0x54b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866b4f2 +0x550:  lea    -0x30(%ebp),%eax
0866b4f5 +0x553:  mov    %eax,0x4(%esp)
0866b4f9 +0x557:  mov    0x8(%ebp),%eax
0866b4fc +0x55a:  mov    %eax,(%esp)
0866b4ff +0x55d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866b504 +0x562:  jmp    0866b521 <+0x57f>
0866b506 +0x564:  mov    %edx,%ebx
0866b508 +0x566:  mov    %eax,%esi
0866b50a +0x568:  lea    -0x30(%ebp),%eax
0866b50d +0x56b:  mov    %eax,(%esp)
0866b510 +0x56e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866b515 +0x573:  mov    %esi,%eax
0866b517 +0x575:  mov    %ebx,%edx
0866b519 +0x577:  mov    %eax,(%esp)
0866b51c +0x57a:  call   08ae3750 <_Unwind_Resume>
0866b521 +0x57f:  lea    -0x30(%ebp),%eax
0866b524 +0x582:  mov    %eax,(%esp)
0866b527 +0x585:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866b52c +0x58a:  jmp    0866b532 <+0x590>
0866b52e +0x58c:  nop
0866b52f +0x58d:  jmp    0866b532 <+0x590>
0866b531 +0x58f:  nop
0866b532 +0x590:  add    $0x8c,%esp
0866b538 +0x596:  pop    %ebx
0866b539 +0x597:  pop    %esi
0866b53a +0x598:  pop    %edi
0866b53b +0x599:  pop    %ebp
0866b53c +0x59a:  ret
0866b53d +0x59b:  nop
```

## 反编译 C

```c
// CUser::master_new_skill @ 0x866afa2

/* CUser::master_new_skill(stBuySkillInfo&, bool) */

void CUser::master_new_skill(stBuySkillInfo *param_1,bool param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  STGuildDBInfoOnly *pSVar8;
  int iVar9;
  SkillSlot *pSVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  CGuildServerProxy *this;
  undefined3 in_stack_00000009;
  short local_3a;
  uint local_38;
  PacketGuard local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  
  if (((byte)_param_2[1] < 200) || (0xd0 < (byte)_param_2[1])) {
    local_20 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((local_20 == -1) || (local_20 == 0)) {
      if (*_param_2 == '\x01') {
        return;
      }
    }
    else if (*_param_2 != '\x01') {
      return;
    }
    cVar4 = _param_2[2];
    cVar5 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
    cVar6 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    bVar1 = _param_2[1];
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    local_24 = SkillSlot::master_new_skill
                         (pSVar10,(uint)bVar1,iVar9,iVar7,(int)cVar6,(int)cVar5,(int)cVar4);
  }
  else {
    cVar4 = IsGuildMaster((CUser *)param_1);
    if ((cVar4 == '\0') && (cVar4 = IsSubGuildMaster((CUser *)param_1), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    iVar7 = GetGuildDBInfo((CUser *)param_1);
    uVar2 = *(ushort *)(iVar7 + 0x42);
    iVar7 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    pSVar8 = (STGuildDBInfoOnly *)GetGuildDBInfo((CUser *)param_1);
    cVar4 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
    cVar5 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    bVar1 = _param_2[1];
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    local_24 = SkillSlot::master_new_guild_skill
                         (pSVar10,(uint)bVar1,iVar9,(int)cVar5,(int)cVar4,pSVar8,iVar7,
                          (int *)&local_38,&local_28,&local_3a,(uint)uVar2);
    iVar7 = local_28;
    if (-1 < local_24) {
      bVar1 = _param_2[1];
      uVar11 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar12 = get_charac_no((CUser *)param_1,-1);
      uVar13 = GetServerGroup((CUser *)param_1);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                       (GlobalData::s_guild_proxy_mgr,uVar13);
      CGuildServerProxy::SendBuyGuildSkill(this,uVar12,uVar11,(uint)bVar1,iVar7,local_3a,local_38);
    }
  }
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0866b240 to 0866b503 has its CatchHandler @ 0866b506 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x1f);
  if (local_24 < 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
    switch(local_24) {
    case -6:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0x5c);
      break;
    case -5:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0x5b);
      break;
    case -4:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      break;
    case -3:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0x12);
      break;
    case -2:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0x16);
      break;
    case -1:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0x15);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    cVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar4);
    uVar13 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar7 = SkillSlot::get_remain_sp_at_index(pSVar10,uVar13);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,iVar7);
    iVar7 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((iVar7 == -1) ||
       (iVar7 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1), iVar7 == 0)
       ) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar7 = SkillSlot::get_remain_sfp_at_index(pSVar10,2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,iVar7);
    }
    else {
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar7 = SkillSlot::get_remain_sfp_at_index(pSVar10,3);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,iVar7);
    }
    if (((byte)_param_2[1] < 200) || (0xd0 < (byte)_param_2[1])) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)(char)local_24);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)(byte)_param_2[1]);
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar7 = SkillSlot::get_skill_level(pSVar10,local_24);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar7);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0xff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)(byte)_param_2[1]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_28);
    }
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar7 = SkillSlot::get_skill_level(pSVar10,local_24);
    HistoryLog::WriteLearnSkill(*(_IO_FILE **)(param_1 + 0x796f8),(uint)(byte)_param_2[1],iVar7);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  Send((CUser *)param_1,local_34);
  PacketGuard::~PacketGuard(local_34);
  return;
}
```
