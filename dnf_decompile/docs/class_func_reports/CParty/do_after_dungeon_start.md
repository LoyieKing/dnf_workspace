# do_after_dungeon_start

`_ZN6CParty22do_after_dungeon_startEPK8CDungeonP5CUser`

`CParty::do_after_dungeon_start(CDungeon const*, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859fcfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859fcfc  _ZN6CParty22do_after_dungeon_startEPK8CDungeonP5CUser
#           CParty::do_after_dungeon_start(CDungeon const*, CUser*)
# range [0x0859fcfc, 0x085a0755]
0859fcfc +0x000:  push   %ebp
0859fcfd +0x001:  mov    %esp,%ebp
0859fcff +0x003:  push   %edi
0859fd00 +0x004:  push   %esi
0859fd01 +0x005:  push   %ebx
0859fd02 +0x006:  sub    $0x2cc,%esp
0859fd08 +0x00c:  mov    0xc(%ebp),%eax
0859fd0b +0x00f:  mov    (%eax),%eax
0859fd0d +0x011:  mov    (%eax),%edx
0859fd0f +0x013:  mov    0x10(%ebp),%eax
0859fd12 +0x016:  mov    %eax,0x4(%esp)
0859fd16 +0x01a:  mov    0xc(%ebp),%eax
0859fd19 +0x01d:  mov    %eax,(%esp)
0859fd1c +0x020:  call   *%edx
0859fd1e +0x022:  xor    $0x1,%eax
0859fd21 +0x025:  test   %al,%al
0859fd23 +0x027:  je     0859fd2f <+0x33>
0859fd25 +0x029:  mov    $0xad,%ebx
0859fd2a +0x02e:  jmp    085a0749 <+0xa4d>
0859fd2f +0x033:  mov    0xc(%ebp),%eax
0859fd32 +0x036:  mov    %eax,(%esp)
0859fd35 +0x039:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0859fd3a +0x03e:  mov    %eax,%edx
0859fd3c +0x040:  mov    0x10(%ebp),%eax
0859fd3f +0x043:  mov    %edx,0x4(%esp)
0859fd43 +0x047:  mov    %eax,(%esp)
0859fd46 +0x04a:  call   085bfac0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x101e>  ; global constructors keyed to CParty::cMember::cMember()+0x101e
0859fd4b +0x04f:  mov    0xc(%ebp),%eax
0859fd4e +0x052:  movzbl 0x89f(%eax),%eax
0859fd55 +0x059:  cmp    $0x1,%al
0859fd57 +0x05b:  jne    085a01bc <+0x4c0>
0859fd5d +0x061:  mov    0x8(%ebp),%eax
0859fd60 +0x064:  mov    0xcd8(%eax),%eax
0859fd66 +0x06a:  cmp    $0x1,%eax
0859fd69 +0x06d:  jne    0859ff08 <+0x20c>
0859fd6f +0x073:  lea    -0x1a9(%ebp),%edx
0859fd75 +0x079:  mov    $0x100,%ebx
0859fd7a +0x07e:  mov    $0x0,%eax
0859fd7f +0x083:  mov    %edx,%ecx
0859fd81 +0x085:  and    $0x1,%ecx
0859fd84 +0x088:  test   %ecx,%ecx
0859fd86 +0x08a:  je     0859fd90 <+0x94>
0859fd88 +0x08c:  mov    %al,(%edx)
0859fd8a +0x08e:  add    $0x1,%edx
0859fd8d +0x091:  sub    $0x1,%ebx
0859fd90 +0x094:  mov    %edx,%ecx
0859fd92 +0x096:  and    $0x2,%ecx
0859fd95 +0x099:  test   %ecx,%ecx
0859fd97 +0x09b:  je     0859fda2 <+0xa6>
0859fd99 +0x09d:  mov    %ax,(%edx)
0859fd9c +0x0a0:  add    $0x2,%edx
0859fd9f +0x0a3:  sub    $0x2,%ebx
0859fda2 +0x0a6:  mov    %ebx,%ecx
0859fda4 +0x0a8:  shr    $0x2,%ecx
0859fda7 +0x0ab:  mov    %edx,%edi
0859fda9 +0x0ad:  rep stos %eax,%es:(%edi)
0859fdab +0x0af:  mov    %edi,%edx
0859fdad +0x0b1:  mov    %ebx,%ecx
0859fdaf +0x0b3:  and    $0x2,%ecx
0859fdb2 +0x0b6:  test   %ecx,%ecx
0859fdb4 +0x0b8:  je     0859fdbc <+0xc0>
0859fdb6 +0x0ba:  mov    %ax,(%edx)
0859fdb9 +0x0bd:  add    $0x2,%edx
0859fdbc +0x0c0:  mov    %ebx,%ecx
0859fdbe +0x0c2:  and    $0x1,%ecx
0859fdc1 +0x0c5:  test   %ecx,%ecx
0859fdc3 +0x0c7:  je     0859fdca <+0xce>
0859fdc5 +0x0c9:  mov    %al,(%edx)
0859fdc7 +0x0cb:  add    $0x1,%edx
0859fdca +0x0ce:  movl   $0x0,0xc(%esp)
0859fdd2 +0x0d6:  movl   $"game_server_msg_110",0x8(%esp)
0859fdda +0x0de:  movl   $0x4,0x4(%esp)
0859fde2 +0x0e6:  movl   $&g_scriptStringManager_,(%esp)
0859fde9 +0x0ed:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0859fdee +0x0f2:  movl   $0x0,0xc(%esp)
0859fdf6 +0x0fa:  mov    %eax,0x8(%esp)
0859fdfa +0x0fe:  movl   $0xff,0x4(%esp)
0859fe02 +0x106:  lea    -0x1a9(%ebp),%eax
0859fe08 +0x10c:  mov    %eax,(%esp)
0859fe0b +0x10f:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0859fe10 +0x114:  lea    -0x60(%ebp),%eax
0859fe13 +0x117:  mov    %eax,(%esp)
0859fe16 +0x11a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859fe1b +0x11f:  movl   $0xc,0x8(%esp)
0859fe23 +0x127:  movl   $0x0,0x4(%esp)
0859fe2b +0x12f:  lea    -0x60(%ebp),%eax
0859fe2e +0x132:  mov    %eax,(%esp)
0859fe31 +0x135:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859fe36 +0x13a:  movl   $0x0,0x4(%esp)
0859fe3e +0x142:  lea    -0x60(%ebp),%eax
0859fe41 +0x145:  mov    %eax,(%esp)
0859fe44 +0x148:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859fe49 +0x14d:  movl   $0x0,0x4(%esp)
0859fe51 +0x155:  lea    -0x60(%ebp),%eax
0859fe54 +0x158:  mov    %eax,(%esp)
0859fe57 +0x15b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859fe5c +0x160:  movl   $0x0,0x4(%esp)
0859fe64 +0x168:  lea    -0x60(%ebp),%eax
0859fe67 +0x16b:  mov    %eax,(%esp)
0859fe6a +0x16e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859fe6f +0x173:  lea    -0x1a9(%ebp),%eax
0859fe75 +0x179:  mov    %eax,(%esp)
0859fe78 +0x17c:  call   0807e3b0 <_init+0xca8>
0859fe7d +0x181:  mov    %eax,0x4(%esp)
0859fe81 +0x185:  lea    -0x60(%ebp),%eax
0859fe84 +0x188:  mov    %eax,(%esp)
0859fe87 +0x18b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859fe8c +0x190:  lea    -0x1a9(%ebp),%eax
0859fe92 +0x196:  mov    %eax,(%esp)
0859fe95 +0x199:  call   0807e3b0 <_init+0xca8>
0859fe9a +0x19e:  mov    %eax,0x8(%esp)
0859fe9e +0x1a2:  lea    -0x1a9(%ebp),%eax
0859fea4 +0x1a8:  mov    %eax,0x4(%esp)
0859fea8 +0x1ac:  lea    -0x60(%ebp),%eax
0859feab +0x1af:  mov    %eax,(%esp)
0859feae +0x1b2:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0859feb3 +0x1b7:  movl   $0x1,0x4(%esp)
0859febb +0x1bf:  lea    -0x60(%ebp),%eax
0859febe +0x1c2:  mov    %eax,(%esp)
0859fec1 +0x1c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859fec6 +0x1ca:  lea    -0x60(%ebp),%eax
0859fec9 +0x1cd:  mov    %eax,0x4(%esp)
0859fecd +0x1d1:  mov    0x10(%ebp),%eax
0859fed0 +0x1d4:  mov    %eax,(%esp)
0859fed3 +0x1d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0859fed8 +0x1dc:  mov    $0x0,%ebx
0859fedd +0x1e1:  lea    -0x60(%ebp),%eax
0859fee0 +0x1e4:  mov    %eax,(%esp)
0859fee3 +0x1e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859fee8 +0x1ec:  jmp    085a0749 <+0xa4d>
0859feed +0x1f1:  mov    %edx,%ebx
0859feef +0x1f3:  mov    %eax,%esi
0859fef1 +0x1f5:  lea    -0x60(%ebp),%eax
0859fef4 +0x1f8:  mov    %eax,(%esp)
0859fef7 +0x1fb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859fefc +0x200:  mov    %esi,%eax
0859fefe +0x202:  mov    %ebx,%edx
0859ff00 +0x204:  mov    %eax,(%esp)
0859ff03 +0x207:  call   08ae3750 <_Unwind_Resume>
0859ff08 +0x20c:  mov    0x10(%ebp),%eax
0859ff0b +0x20f:  mov    %eax,0x4(%esp)
0859ff0f +0x213:  mov    0x8(%ebp),%eax
0859ff12 +0x216:  mov    %eax,(%esp)
0859ff15 +0x219:  call   0859f75e <_ZN6CParty31get_blood_dungeon_admission_feeEP5CUser>  ; CParty::get_blood_dungeon_admission_fee(CUser*)
0859ff1a +0x21e:  mov    %eax,-0x38(%ebp)
0859ff1d +0x221:  mov    0x10(%ebp),%eax
0859ff20 +0x224:  mov    %eax,(%esp)
0859ff23 +0x227:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0859ff28 +0x22c:  movl   $0x1,0xc(%esp)
0859ff30 +0x234:  movl   $0x22,0x8(%esp)
0859ff38 +0x23c:  mov    -0x38(%ebp),%edx
0859ff3b +0x23f:  mov    %edx,0x4(%esp)
0859ff3f +0x243:  mov    %eax,(%esp)
0859ff42 +0x246:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0859ff47 +0x24b:  movl   $0x0,0xc(%esp)
0859ff4f +0x253:  movl   $0x0,0x8(%esp)
0859ff57 +0x25b:  movl   $0x1,0x4(%esp)
0859ff5f +0x263:  mov    0x10(%ebp),%eax
0859ff62 +0x266:  mov    %eax,(%esp)
0859ff65 +0x269:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0859ff6a +0x26e:  lea    -0x2a9(%ebp),%edx
0859ff70 +0x274:  mov    $0x100,%ebx
0859ff75 +0x279:  mov    $0x0,%eax
0859ff7a +0x27e:  mov    %edx,%ecx
0859ff7c +0x280:  and    $0x1,%ecx
0859ff7f +0x283:  test   %ecx,%ecx
0859ff81 +0x285:  je     0859ff8b <+0x28f>
0859ff83 +0x287:  mov    %al,(%edx)
0859ff85 +0x289:  add    $0x1,%edx
0859ff88 +0x28c:  sub    $0x1,%ebx
0859ff8b +0x28f:  mov    %edx,%ecx
0859ff8d +0x291:  and    $0x2,%ecx
0859ff90 +0x294:  test   %ecx,%ecx
0859ff92 +0x296:  je     0859ff9d <+0x2a1>
0859ff94 +0x298:  mov    %ax,(%edx)
0859ff97 +0x29b:  add    $0x2,%edx
0859ff9a +0x29e:  sub    $0x2,%ebx
0859ff9d +0x2a1:  mov    %ebx,%ecx
0859ff9f +0x2a3:  shr    $0x2,%ecx
0859ffa2 +0x2a6:  mov    %edx,%edi
0859ffa4 +0x2a8:  rep stos %eax,%es:(%edi)
0859ffa6 +0x2aa:  mov    %edi,%edx
0859ffa8 +0x2ac:  mov    %ebx,%ecx
0859ffaa +0x2ae:  and    $0x2,%ecx
0859ffad +0x2b1:  test   %ecx,%ecx
0859ffaf +0x2b3:  je     0859ffb7 <+0x2bb>
0859ffb1 +0x2b5:  mov    %ax,(%edx)
0859ffb4 +0x2b8:  add    $0x2,%edx
0859ffb7 +0x2bb:  mov    %ebx,%ecx
0859ffb9 +0x2bd:  and    $0x1,%ecx
0859ffbc +0x2c0:  test   %ecx,%ecx
0859ffbe +0x2c2:  je     0859ffc5 <+0x2c9>
0859ffc0 +0x2c4:  mov    %al,(%edx)
0859ffc2 +0x2c6:  add    $0x1,%edx
0859ffc5 +0x2c9:  movl   $0x0,0xc(%esp)
0859ffcd +0x2d1:  movl   $"game_server_msg_110",0x8(%esp)
0859ffd5 +0x2d9:  movl   $0x4,0x4(%esp)
0859ffdd +0x2e1:  movl   $&g_scriptStringManager_,(%esp)
0859ffe4 +0x2e8:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0859ffe9 +0x2ed:  mov    -0x38(%ebp),%edx
0859ffec +0x2f0:  mov    %edx,0xc(%esp)
0859fff0 +0x2f4:  mov    %eax,0x8(%esp)
0859fff4 +0x2f8:  movl   $0xff,0x4(%esp)
0859fffc +0x300:  lea    -0x2a9(%ebp),%eax
085a0002 +0x306:  mov    %eax,(%esp)
085a0005 +0x309:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
085a000a +0x30e:  lea    -0x54(%ebp),%eax
085a000d +0x311:  mov    %eax,(%esp)
085a0010 +0x314:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a0015 +0x319:  movl   $0xc,0x8(%esp)
085a001d +0x321:  movl   $0x0,0x4(%esp)
085a0025 +0x329:  lea    -0x54(%ebp),%eax
085a0028 +0x32c:  mov    %eax,(%esp)
085a002b +0x32f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a0030 +0x334:  movl   $0x0,0x4(%esp)
085a0038 +0x33c:  lea    -0x54(%ebp),%eax
085a003b +0x33f:  mov    %eax,(%esp)
085a003e +0x342:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a0043 +0x347:  movl   $0x0,0x4(%esp)
085a004b +0x34f:  lea    -0x54(%ebp),%eax
085a004e +0x352:  mov    %eax,(%esp)
085a0051 +0x355:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a0056 +0x35a:  movl   $0x0,0x4(%esp)
085a005e +0x362:  lea    -0x54(%ebp),%eax
085a0061 +0x365:  mov    %eax,(%esp)
085a0064 +0x368:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a0069 +0x36d:  lea    -0x2a9(%ebp),%eax
085a006f +0x373:  mov    %eax,(%esp)
085a0072 +0x376:  call   0807e3b0 <_init+0xca8>
085a0077 +0x37b:  mov    %eax,0x4(%esp)
085a007b +0x37f:  lea    -0x54(%ebp),%eax
085a007e +0x382:  mov    %eax,(%esp)
085a0081 +0x385:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a0086 +0x38a:  lea    -0x2a9(%ebp),%eax
085a008c +0x390:  mov    %eax,(%esp)
085a008f +0x393:  call   0807e3b0 <_init+0xca8>
085a0094 +0x398:  mov    %eax,0x8(%esp)
085a0098 +0x39c:  lea    -0x2a9(%ebp),%eax
085a009e +0x3a2:  mov    %eax,0x4(%esp)
085a00a2 +0x3a6:  lea    -0x54(%ebp),%eax
085a00a5 +0x3a9:  mov    %eax,(%esp)
085a00a8 +0x3ac:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
085a00ad +0x3b1:  movl   $0x1,0x4(%esp)
085a00b5 +0x3b9:  lea    -0x54(%ebp),%eax
085a00b8 +0x3bc:  mov    %eax,(%esp)
085a00bb +0x3bf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a00c0 +0x3c4:  lea    -0x54(%ebp),%eax
085a00c3 +0x3c7:  mov    %eax,0x4(%esp)
085a00c7 +0x3cb:  mov    0x10(%ebp),%eax
085a00ca +0x3ce:  mov    %eax,(%esp)
085a00cd +0x3d1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a00d2 +0x3d6:  movl   $0x1,0x4(%esp)
085a00da +0x3de:  mov    0x10(%ebp),%eax
085a00dd +0x3e1:  mov    %eax,(%esp)
085a00e0 +0x3e4:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085a00e5 +0x3e9:  mov    %eax,(%esp)
085a00e8 +0x3ec:  call   085bfe88 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13e6>  ; global constructors keyed to CParty::cMember::cMember()+0x13e6
085a00ed +0x3f1:  mov    %eax,-0x34(%ebp)
085a00f0 +0x3f4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a00f5 +0x3f9:  lea    0x68(%eax),%edx
085a00f8 +0x3fc:  mov    -0x34(%ebp),%eax
085a00fb +0x3ff:  mov    %eax,0x4(%esp)
085a00ff +0x403:  mov    %edx,(%esp)
085a0102 +0x406:  call   085bec76 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1d4>  ; global constructors keyed to CParty::cMember::cMember()+0x1d4
085a0107 +0x40b:  mov    %eax,-0x30(%ebp)
085a010a +0x40e:  mov    0x10(%ebp),%eax
085a010d +0x411:  mov    %eax,(%esp)
085a0110 +0x414:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085a0115 +0x419:  mov    %eax,%ebx
085a0117 +0x41b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a011c +0x420:  add    $0x68,%eax
085a011f +0x423:  mov    %ebx,0x4(%esp)
085a0123 +0x427:  mov    %eax,(%esp)
085a0126 +0x42a:  call   085beaf6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x54>  ; global constructors keyed to CParty::cMember::cMember()+0x54
085a012b +0x42f:  mov    %eax,-0x2c(%ebp)
085a012e +0x432:  movl   $0x1,0x4(%esp)
085a0136 +0x43a:  mov    0x10(%ebp),%eax
085a0139 +0x43d:  mov    %eax,(%esp)
085a013c +0x440:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085a0141 +0x445:  mov    %eax,(%esp)
085a0144 +0x448:  call   085bfea0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x13fe>  ; global constructors keyed to CParty::cMember::cMember()+0x13fe
085a0149 +0x44d:  movl   $0x1,0x4(%esp)
085a0151 +0x455:  mov    0x10(%ebp),%eax
085a0154 +0x458:  mov    %eax,(%esp)
085a0157 +0x45b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085a015c +0x460:  mov    -0x30(%ebp),%edx
085a015f +0x463:  mov    %edx,0x4(%esp)
085a0163 +0x467:  mov    %eax,(%esp)
085a0166 +0x46a:  call   085bfed2 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1430>  ; global constructors keyed to CParty::cMember::cMember()+0x1430
085a016b +0x46f:  mov    -0x2c(%ebp),%eax
085a016e +0x472:  mov    -0x38(%ebp),%edx
085a0171 +0x475:  mov    %edx,%ebx
085a0173 +0x477:  sub    %eax,%ebx
085a0175 +0x479:  movl   $0x1,0x4(%esp)
085a017d +0x481:  mov    0x10(%ebp),%eax
085a0180 +0x484:  mov    %eax,(%esp)
085a0183 +0x487:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085a0188 +0x48c:  mov    %ebx,0x4(%esp)
085a018c +0x490:  mov    %eax,(%esp)
085a018f +0x493:  call   085bfef6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1454>  ; global constructors keyed to CParty::cMember::cMember()+0x1454
085a0194 +0x498:  lea    -0x54(%ebp),%eax
085a0197 +0x49b:  mov    %eax,(%esp)
085a019a +0x49e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a019f +0x4a3:  jmp    085a01bc <+0x4c0>
085a01a1 +0x4a5:  mov    %edx,%ebx
085a01a3 +0x4a7:  mov    %eax,%esi
085a01a5 +0x4a9:  lea    -0x54(%ebp),%eax
085a01a8 +0x4ac:  mov    %eax,(%esp)
085a01ab +0x4af:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a01b0 +0x4b4:  mov    %esi,%eax
085a01b2 +0x4b6:  mov    %ebx,%edx
085a01b4 +0x4b8:  mov    %eax,(%esp)
085a01b7 +0x4bb:  call   08ae3750 <_Unwind_Resume>
085a01bc +0x4c0:  mov    0xc(%ebp),%eax
085a01bf +0x4c3:  mov    %eax,(%esp)
085a01c2 +0x4c6:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085a01c7 +0x4cb:  test   %al,%al
085a01c9 +0x4cd:  setg   %al
085a01cc +0x4d0:  test   %al,%al
085a01ce +0x4d2:  je     085a0293 <+0x597>
085a01d4 +0x4d8:  mov    0x8(%ebp),%eax
085a01d7 +0x4db:  mov    0xcd8(%eax),%eax
085a01dd +0x4e1:  cmp    $0x1,%eax
085a01e0 +0x4e4:  jne    085a01ec <+0x4f0>
085a01e2 +0x4e6:  mov    $0x0,%ebx
085a01e7 +0x4eb:  jmp    085a0749 <+0xa4d>
085a01ec +0x4f0:  mov    0xc(%ebp),%eax
085a01ef +0x4f3:  mov    %eax,(%esp)
085a01f2 +0x4f6:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
085a01f7 +0x4fb:  movsbl %al,%eax
085a01fa +0x4fe:  sub    $0x1,%eax
085a01fd +0x501:  mov    %eax,-0x28(%ebp)
085a0200 +0x504:  mov    0x10(%ebp),%eax
085a0203 +0x507:  mov    %eax,(%esp)
085a0206 +0x50a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085a020b +0x50f:  mov    -0x28(%ebp),%edx
085a020e +0x512:  movzbl 0xeb9(%eax,%edx,1),%eax
085a0216 +0x51a:  test   %al,%al
085a0218 +0x51c:  jg     085a0241 <+0x545>
085a021a +0x51e:  mov    0x8(%ebp),%eax
085a021d +0x521:  mov    0xcd8(%eax),%eax
085a0223 +0x527:  cmp    $0x1,%eax
085a0226 +0x52a:  je     085a0241 <+0x545>
085a0228 +0x52c:  mov    0x10(%ebp),%eax
085a022b +0x52f:  mov    %eax,(%esp)
085a022e +0x532:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
085a0233 +0x537:  xor    $0x1,%eax
085a0236 +0x53a:  test   %al,%al
085a0238 +0x53c:  je     085a0241 <+0x545>
085a023a +0x53e:  mov    $0x1,%eax
085a023f +0x543:  jmp    085a0246 <+0x54a>
085a0241 +0x545:  mov    $0x0,%eax
085a0246 +0x54a:  test   %al,%al
085a0248 +0x54c:  je     085a0254 <+0x558>
085a024a +0x54e:  mov    $0xad,%ebx
085a024f +0x553:  jmp    085a0749 <+0xa4d>
085a0254 +0x558:  mov    0x8(%ebp),%eax
085a0257 +0x55b:  mov    0xcd8(%eax),%eax
085a025d +0x561:  cmp    $0x1,%eax
085a0260 +0x564:  je     085a0293 <+0x597>
085a0262 +0x566:  mov    -0x28(%ebp),%eax
085a0265 +0x569:  movsbl %al,%edx
085a0268 +0x56c:  mov    0x10(%ebp),%eax
085a026b +0x56f:  mov    %edx,0x4(%esp)
085a026f +0x573:  mov    %eax,(%esp)
085a0272 +0x576:  call   085bfa0c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xf6a>  ; global constructors keyed to CParty::cMember::cMember()+0xf6a
085a0277 +0x57b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085a027c +0x580:  movl   $0x1,0x8(%esp)
085a0284 +0x588:  mov    0x8(%ebp),%edx
085a0287 +0x58b:  mov    %edx,0x4(%esp)
085a028b +0x58f:  mov    %eax,(%esp)
085a028e +0x592:  call   086c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>  ; GameWorld::send_party_info_to_all(CParty*, int)
085a0293 +0x597:  mov    0xc(%ebp),%eax
085a0296 +0x59a:  movzbl 0x89f(%eax),%eax
085a029d +0x5a1:  cmp    $0x2,%al
085a029f +0x5a3:  jne    085a02c2 <+0x5c6>
085a02a1 +0x5a5:  mov    0x8(%ebp),%eax
085a02a4 +0x5a8:  mov    0xcd8(%eax),%eax
085a02aa +0x5ae:  cmp    $0x1,%eax
085a02ad +0x5b1:  je     085a02c2 <+0x5c6>
085a02af +0x5b3:  mov    0x10(%ebp),%eax
085a02b2 +0x5b6:  movl   $0x2,0x4(%esp)
085a02ba +0x5be:  mov    %eax,(%esp)
085a02bd +0x5c1:  call   085bfa56 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xfb4>  ; global constructors keyed to CParty::cMember::cMember()+0xfb4
085a02c2 +0x5c6:  mov    0xc(%ebp),%eax
085a02c5 +0x5c9:  movzbl 0x89c(%eax),%eax
085a02cc +0x5d0:  test   %al,%al
085a02ce +0x5d2:  jne    085a02df <+0x5e3>
085a02d0 +0x5d4:  mov    0xc(%ebp),%eax
085a02d3 +0x5d7:  mov    %eax,(%esp)
085a02d6 +0x5da:  call   0836520a <_ZNK8CDungeon19isTournamentDungeonEv>  ; CDungeon::isTournamentDungeon() const
085a02db +0x5df:  test   %al,%al
085a02dd +0x5e1:  je     085a02e6 <+0x5ea>
085a02df +0x5e3:  mov    $0x1,%eax
085a02e4 +0x5e8:  jmp    085a02eb <+0x5ef>
085a02e6 +0x5ea:  mov    $0x0,%eax
085a02eb +0x5ef:  test   %al,%al
085a02ed +0x5f1:  je     085a0585 <+0x889>
085a02f3 +0x5f7:  mov    0x8(%ebp),%eax
085a02f6 +0x5fa:  mov    0xcd8(%eax),%eax
085a02fc +0x600:  cmp    $0x1,%eax
085a02ff +0x603:  jne    085a030b <+0x60f>
085a0301 +0x605:  mov    $0x0,%ebx
085a0306 +0x60a:  jmp    085a0749 <+0xa4d>
085a030b +0x60f:  mov    0xc(%ebp),%eax
085a030e +0x612:  mov    0x7f4(%eax),%eax
085a0314 +0x618:  cmp    $0xffffffff,%eax
085a0317 +0x61b:  jne    085a0323 <+0x627>
085a0319 +0x61d:  mov    $0x0,%ebx
085a031e +0x622:  jmp    085a0749 <+0xa4d>
085a0323 +0x627:  mov    0xc(%ebp),%eax
085a0326 +0x62a:  movzbl 0x7fc(%eax),%eax
085a032d +0x631:  xor    $0x1,%eax
085a0330 +0x634:  test   %al,%al
085a0332 +0x636:  je     085a033e <+0x642>
085a0334 +0x638:  mov    $0x0,%ebx
085a0339 +0x63d:  jmp    085a0749 <+0xa4d>
085a033e +0x642:  movl   $0x0,-0x24(%ebp)
085a0345 +0x649:  mov    0xc(%ebp),%eax
085a0348 +0x64c:  mov    %eax,(%esp)
085a034b +0x64f:  jmp    085a04c3 <+0x7c7>
085a0350 +0x654:  cmp    $0x5dc,%eax
085a0355 +0x659:  sete   %al
085a0358 +0x65c:  test   %al,%al
085a035a +0x65e:  je     085a0394 <+0x698>
085a035c +0x660:  mov    0xc(%ebp),%eax
085a035f +0x663:  mov    0x7f4(%eax),%ebx
085a0365 +0x669:  mov    0x10(%ebp),%eax
085a0368 +0x66c:  mov    %eax,(%esp)
085a036b +0x66f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a0370 +0x674:  mov    %ebx,0x4(%esp)
085a0374 +0x678:  mov    %eax,(%esp)
085a0377 +0x67b:  call   0850552a <_ZNK10CInventory32check_vilmark_dungeon_item_existEi>  ; CInventory::check_vilmark_dungeon_item_exist(int) const
085a037c +0x680:  mov    %eax,-0x24(%ebp)
085a037f +0x683:  cmpl   $0xffffffff,-0x24(%ebp)
085a0383 +0x687:  sete   %al
085a0386 +0x68a:  test   %al,%al
085a0388 +0x68c:  je     085a03cc <+0x6d0>
085a038a +0x68e:  mov    $0x11,%ebx
085a038f +0x693:  jmp    085a0749 <+0xa4d>
085a0394 +0x698:  mov    0xc(%ebp),%eax
085a0397 +0x69b:  mov    0x7f4(%eax),%ebx
085a039d +0x6a1:  mov    0x10(%ebp),%eax
085a03a0 +0x6a4:  mov    %eax,(%esp)
085a03a3 +0x6a7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a03a8 +0x6ac:  mov    %ebx,0x4(%esp)
085a03ac +0x6b0:  mov    %eax,(%esp)
085a03af +0x6b3:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
085a03b4 +0x6b8:  mov    %eax,-0x24(%ebp)
085a03b7 +0x6bb:  cmpl   $0xffffffff,-0x24(%ebp)
085a03bb +0x6bf:  sete   %al
085a03be +0x6c2:  test   %al,%al
085a03c0 +0x6c4:  je     085a03cc <+0x6d0>
085a03c2 +0x6c6:  mov    $0x11,%ebx
085a03c7 +0x6cb:  jmp    085a0749 <+0xa4d>
085a03cc +0x6d0:  mov    0x10(%ebp),%eax
085a03cf +0x6d3:  mov    %eax,(%esp)
085a03d2 +0x6d6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a03d7 +0x6db:  lea    -0xa9(%ebp),%edx
085a03dd +0x6e1:  mov    -0x24(%ebp),%ecx
085a03e0 +0x6e4:  mov    %ecx,0xc(%esp)
085a03e4 +0x6e8:  movl   $0x1,0x8(%esp)
085a03ec +0x6f0:  mov    %eax,0x4(%esp)
085a03f0 +0x6f4:  mov    %edx,(%esp)
085a03f3 +0x6f7:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a03f8 +0x6fc:  sub    $0x4,%esp
085a03fb +0x6ff:  mov    -0xa2(%ebp),%edx
085a0401 +0x705:  mov    0xc(%ebp),%eax
085a0404 +0x708:  mov    0x7f8(%eax),%eax
085a040a +0x70e:  cmp    %eax,%edx
085a040c +0x710:  jge    085a0418 <+0x71c>
085a040e +0x712:  mov    $0x11,%ebx
085a0413 +0x717:  jmp    085a0749 <+0xa4d>
085a0418 +0x71c:  mov    0xc(%ebp),%eax
085a041b +0x71f:  mov    0x7f8(%eax),%ebx
085a0421 +0x725:  mov    0x10(%ebp),%eax
085a0424 +0x728:  mov    %eax,(%esp)
085a0427 +0x72b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a042c +0x730:  movl   $0x1,0x14(%esp)
085a0434 +0x738:  movl   $0xe,0x10(%esp)
085a043c +0x740:  mov    %ebx,0xc(%esp)
085a0440 +0x744:  mov    -0x24(%ebp),%edx
085a0443 +0x747:  mov    %edx,0x8(%esp)
085a0447 +0x74b:  movl   $0x1,0x4(%esp)
085a044f +0x753:  mov    %eax,(%esp)
085a0452 +0x756:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085a0457 +0x75b:  xor    $0x1,%eax
085a045a +0x75e:  test   %al,%al
085a045c +0x760:  je     085a04c3 <+0x7c7>
085a045e +0x762:  mov    0xc(%ebp),%eax
085a0461 +0x765:  mov    0x7f8(%eax),%esi
085a0467 +0x76b:  mov    0x10(%ebp),%eax
085a046a +0x76e:  mov    %eax,(%esp)
085a046d +0x771:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a0472 +0x776:  mov    %eax,%ebx
085a0474 +0x778:  movl   $0x5,0xc(%esp)
085a047c +0x780:  movl   $0xd66,0x8(%esp)
085a0484 +0x788:  movl   $&_ZZN6CParty22do_after_dungeon_startEPK8CDungeonP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085a048c +0x790:  lea    -0x48(%ebp),%eax
085a048f +0x793:  mov    %eax,(%esp)
085a0492 +0x796:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a0497 +0x79b:  mov    %esi,0x10(%esp)
085a049b +0x79f:  mov    -0x24(%ebp),%eax
085a049e +0x7a2:  mov    %eax,0xc(%esp)
085a04a2 +0x7a6:  mov    %ebx,0x8(%esp)
085a04a6 +0x7aa:  movl   $"CParty::UseAncientDungeonItems, delete_item failed , User ch=%d , %d %d",0x4(%esp)
085a04ae +0x7b2:  lea    -0x48(%ebp),%eax
085a04b1 +0x7b5:  mov    %eax,(%esp)
085a04b4 +0x7b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a04b9 +0x7bd:  mov    $0x11,%ebx
085a04be +0x7c2:  jmp    085a0749 <+0xa4d>
085a04c3 +0x7c7:  lea    -0x6c(%ebp),%eax
085a04c6 +0x7ca:  mov    %eax,(%esp)
085a04c9 +0x7cd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a04ce +0x7d2:  movl   $0xe,0x8(%esp)
085a04d6 +0x7da:  movl   $0x0,0x4(%esp)
085a04de +0x7e2:  lea    -0x6c(%ebp),%eax
085a04e1 +0x7e5:  mov    %eax,(%esp)
085a04e4 +0x7e8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a04e9 +0x7ed:  movl   $0x0,0x4(%esp)
085a04f1 +0x7f5:  lea    -0x6c(%ebp),%eax
085a04f4 +0x7f8:  mov    %eax,(%esp)
085a04f7 +0x7fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a04fc +0x800:  movl   $0x1,0x4(%esp)
085a0504 +0x808:  lea    -0x6c(%ebp),%eax
085a0507 +0x80b:  mov    %eax,(%esp)
085a050a +0x80e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a050f +0x813:  mov    0x10(%ebp),%eax
085a0512 +0x816:  mov    %eax,(%esp)
085a0515 +0x819:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a051a +0x81e:  lea    -0x6c(%ebp),%edx
085a051d +0x821:  mov    %edx,0xc(%esp)
085a0521 +0x825:  mov    -0x24(%ebp),%edx
085a0524 +0x828:  mov    %edx,0x8(%esp)
085a0528 +0x82c:  movl   $0x1,0x4(%esp)
085a0530 +0x834:  mov    %eax,(%esp)
085a0533 +0x837:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
085a0538 +0x83c:  movl   $0x1,0x4(%esp)
085a0540 +0x844:  lea    -0x6c(%ebp),%eax
085a0543 +0x847:  mov    %eax,(%esp)
085a0546 +0x84a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a054b +0x84f:  lea    -0x6c(%ebp),%eax
085a054e +0x852:  mov    %eax,0x4(%esp)
085a0552 +0x856:  mov    0x10(%ebp),%eax
085a0555 +0x859:  mov    %eax,(%esp)
085a0558 +0x85c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a055d +0x861:  jmp    085a057a <+0x87e>
085a055f +0x863:  mov    %edx,%ebx
085a0561 +0x865:  mov    %eax,%esi
085a0563 +0x867:  lea    -0x6c(%ebp),%eax
085a0566 +0x86a:  mov    %eax,(%esp)
085a0569 +0x86d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a056e +0x872:  mov    %esi,%eax
085a0570 +0x874:  mov    %ebx,%edx
085a0572 +0x876:  mov    %eax,(%esp)
085a0575 +0x879:  call   08ae3750 <_Unwind_Resume>
085a057a +0x87e:  lea    -0x6c(%ebp),%eax
085a057d +0x881:  mov    %eax,(%esp)
085a0580 +0x884:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a0585 +0x889:  mov    0xc(%ebp),%eax
085a0588 +0x88c:  movzbl 0x85c(%eax),%eax
085a058f +0x893:  test   %al,%al
085a0591 +0x895:  je     085a06e1 <+0x9e5>
085a0597 +0x89b:  mov    0xc(%ebp),%eax
085a059a +0x89e:  mov    %eax,(%esp)
085a059d +0x8a1:  call   0834d2d4 <_ZNK8CDungeon21IsOpenScheduleDungeonEv>  ; CDungeon::IsOpenScheduleDungeon() const
085a05a2 +0x8a6:  xor    $0x1,%eax
085a05a5 +0x8a9:  test   %al,%al
085a05a7 +0x8ab:  je     085a05b3 <+0x8b7>
085a05a9 +0x8ad:  mov    $0x15,%ebx
085a05ae +0x8b2:  jmp    085a0749 <+0xa4d>
085a05b3 +0x8b7:  cmpl   $0x0,0x10(%ebp)
085a05b7 +0x8bb:  jne    085a05c3 <+0x8c7>
085a05b9 +0x8bd:  mov    $0x0,%ebx
085a05be +0x8c2:  jmp    085a0749 <+0xa4d>
085a05c3 +0x8c7:  mov    0xc(%ebp),%eax
085a05c6 +0x8ca:  mov    0x860(%eax),%eax
085a05cc +0x8d0:  cmp    $0xffffffff,%eax
085a05cf +0x8d3:  jne    085a05e9 <+0x8ed>
085a05d1 +0x8d5:  mov    0xc(%ebp),%eax
085a05d4 +0x8d8:  mov    0x7f4(%eax),%eax
085a05da +0x8de:  cmp    $0xffffffff,%eax
085a05dd +0x8e1:  jne    085a05e9 <+0x8ed>
085a05df +0x8e3:  mov    $0x0,%ebx
085a05e4 +0x8e8:  jmp    085a0749 <+0xa4d>
085a05e9 +0x8ed:  mov    0xc(%ebp),%eax
085a05ec +0x8f0:  mov    0x860(%eax),%eax
085a05f2 +0x8f6:  cmp    $0xffffffff,%eax
085a05f5 +0x8f9:  je     085a0612 <+0x916>
085a05f7 +0x8fb:  mov    0xc(%ebp),%eax
085a05fa +0x8fe:  movzbl 0x868(%eax),%eax
085a0601 +0x905:  xor    $0x1,%eax
085a0604 +0x908:  test   %al,%al
085a0606 +0x90a:  je     085a0612 <+0x916>
085a0608 +0x90c:  mov    $0x0,%ebx
085a060d +0x911:  jmp    085a0749 <+0xa4d>
085a0612 +0x916:  mov    0xc(%ebp),%eax
085a0615 +0x919:  mov    0x7f4(%eax),%eax
085a061b +0x91f:  cmp    $0xffffffff,%eax
085a061e +0x922:  je     085a063b <+0x93f>
085a0620 +0x924:  mov    0xc(%ebp),%eax
085a0623 +0x927:  movzbl 0x7fc(%eax),%eax
085a062a +0x92e:  xor    $0x1,%eax
085a062d +0x931:  test   %al,%al
085a062f +0x933:  je     085a063b <+0x93f>
085a0631 +0x935:  mov    $0x0,%ebx
085a0636 +0x93a:  jmp    085a0749 <+0xa4d>
085a063b +0x93f:  movl   $0x11,-0x20(%ebp)
085a0642 +0x946:  mov    0xc(%ebp),%eax
085a0645 +0x949:  mov    0x860(%eax),%eax
085a064b +0x94f:  cmp    $0xffffffff,%eax
085a064e +0x952:  je     085a0693 <+0x997>
085a0650 +0x954:  mov    0xc(%ebp),%eax
085a0653 +0x957:  lea    0x860(%eax),%edx
085a0659 +0x95d:  mov    0x10(%ebp),%eax
085a065c +0x960:  mov    %eax,0x8(%esp)
085a0660 +0x964:  mov    %edx,0x4(%esp)
085a0664 +0x968:  mov    0x8(%ebp),%eax
085a0667 +0x96b:  mov    %eax,(%esp)
085a066a +0x96e:  call   085a0756 <_ZN6CParty40do_after_dungeon_start_checkndelete_itemERK12RequiredItemP5CUser>  ; CParty::do_after_dungeon_start_checkndelete_item(RequiredItem const&, CUser*)
085a066f +0x973:  mov    %eax,-0x20(%ebp)
085a0672 +0x976:  cmpl   $0x0,-0x20(%ebp)
085a0676 +0x97a:  jne    085a0693 <+0x997>
085a0678 +0x97c:  movl   $0x1,0x4(%esp)
085a0680 +0x984:  mov    0x10(%ebp),%eax
085a0683 +0x987:  mov    %eax,(%esp)
085a0686 +0x98a:  call   08230844 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eee
085a068b +0x98f:  mov    -0x20(%ebp),%ebx
085a068e +0x992:  jmp    085a0749 <+0xa4d>
085a0693 +0x997:  mov    0xc(%ebp),%eax
085a0696 +0x99a:  mov    0x7f4(%eax),%eax
085a069c +0x9a0:  cmp    $0xffffffff,%eax
085a069f +0x9a3:  je     085a06dc <+0x9e0>
085a06a1 +0x9a5:  mov    0xc(%ebp),%eax
085a06a4 +0x9a8:  lea    0x7f4(%eax),%edx
085a06aa +0x9ae:  mov    0x10(%ebp),%eax
085a06ad +0x9b1:  mov    %eax,0x8(%esp)
085a06b1 +0x9b5:  mov    %edx,0x4(%esp)
085a06b5 +0x9b9:  mov    0x8(%ebp),%eax
085a06b8 +0x9bc:  mov    %eax,(%esp)
085a06bb +0x9bf:  call   085a0756 <_ZN6CParty40do_after_dungeon_start_checkndelete_itemERK12RequiredItemP5CUser>  ; CParty::do_after_dungeon_start_checkndelete_item(RequiredItem const&, CUser*)
085a06c0 +0x9c4:  mov    %eax,-0x20(%ebp)
085a06c3 +0x9c7:  cmpl   $0x0,-0x20(%ebp)
085a06c7 +0x9cb:  jne    085a06dc <+0x9e0>
085a06c9 +0x9cd:  movl   $0x1,0x4(%esp)
085a06d1 +0x9d5:  mov    0x10(%ebp),%eax
085a06d4 +0x9d8:  mov    %eax,(%esp)
085a06d7 +0x9db:  call   08230844 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eee
085a06dc +0x9e0:  mov    -0x20(%ebp),%ebx
085a06df +0x9e3:  jmp    085a0749 <+0xa4d>
085a06e1 +0x9e5:  mov    0xc(%ebp),%eax
085a06e4 +0x9e8:  movzbl 0x87a(%eax),%eax
085a06eb +0x9ef:  test   %al,%al
085a06ed +0x9f1:  je     085a0744 <+0xa48>
085a06ef +0x9f3:  mov    0x10(%ebp),%eax
085a06f2 +0x9f6:  mov    %eax,(%esp)
085a06f5 +0x9f9:  call   0822f78a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e34
085a06fa +0x9fe:  mov    %al,-0x19(%ebp)
085a06fd +0xa01:  cmpb   $0x0,-0x19(%ebp)
085a0701 +0xa05:  je     085a072a <+0xa2e>
085a0703 +0xa07:  mov    0xc(%ebp),%eax
085a0706 +0xa0a:  movzbl 0x87b(%eax),%eax
085a070d +0xa11:  cmp    -0x19(%ebp),%al
085a0710 +0xa14:  jb     085a072a <+0xa2e>
085a0712 +0xa16:  mov    0x10(%ebp),%eax
085a0715 +0xa19:  mov    %eax,(%esp)
085a0718 +0xa1c:  call   085bfbd6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1134>  ; global constructors keyed to CParty::cMember::cMember()+0x1134
085a071d +0xa21:  mov    0x10(%ebp),%eax
085a0720 +0xa24:  mov    %eax,(%esp)
085a0723 +0xa27:  call   084ec1de <_GLOBAL__I__Z7getUserj+0x3190>  ; global constructors keyed to getUser(unsigned int)+0x3190
085a0728 +0xa2c:  jmp    085a0744 <+0xa48>
085a072a +0xa2e:  mov    0x10(%ebp),%eax
085a072d +0xa31:  movl   $0x0,0x4(%esp)
085a0735 +0xa39:  mov    %eax,(%esp)
085a0738 +0xa3c:  call   0822f762 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e0c
085a073d +0xa41:  mov    $0x11,%ebx
085a0742 +0xa46:  jmp    085a0749 <+0xa4d>
085a0744 +0xa48:  mov    $0x0,%ebx
085a0749 +0xa4d:  mov    %ebx,%eax
085a074b +0xa4f:  lea    -0xc(%ebp),%esp
085a074e +0xa52:  add    $0x0,%esp
085a0751 +0xa55:  pop    %ebx
085a0752 +0xa56:  pop    %esi
085a0753 +0xa57:  pop    %edi
085a0754 +0xa58:  pop    %ebp
085a0755 +0xa59:  ret
```

## 反编译 C

```c
// CParty::do_after_dungeon_start @ 0x859fcfc

/* CParty::do_after_dungeon_start(CDungeon const*, CUser*) */

int __thiscall CParty::do_after_dungeon_start(CParty *this,CDungeon *param_1,CUser *param_2)

{
  char cVar1;
  uint uVar2;
  size_t sVar3;
  CInventory *pCVar4;
  CCharacBloodDungeon *pCVar5;
  int iVar6;
  int iVar7;
  GameWorld *this_00;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  char local_2ad;
  char local_2ac [255];
  char local_1ad;
  char local_1ac [316];
  PacketGuard local_70 [12];
  PacketGuard local_64 [12];
  PacketGuard local_58 [28];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  CDungeon local_1d;
  
  bVar11 = 0;
  cVar1 = (*(code *)**(undefined4 **)param_1)(param_1,param_2);
  if (cVar1 != '\x01') {
    return 0xad;
  }
  uVar2 = CDungeon::get_index(param_1);
  CUserCharacInfo::setCurCharacLastPlayDungeonIndex((CUserCharacInfo *)param_2,uVar2);
  if (param_1[0x89f] == (CDungeon)0x1) {
    if (*(int *)(this + 0xcd8) == 1) {
      pcVar9 = &local_1ad;
      uVar2 = 0x100;
      bVar10 = ((uint)pcVar9 & 1) != 0;
      if (bVar10) {
        local_1ad = '\0';
        pcVar9 = local_1ac;
        uVar2 = 0xff;
      }
      if (((uint)pcVar9 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
        uVar2 = uVar2 - 2;
      }
      for (uVar8 = uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if ((uVar2 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
      }
      if (bVar10) {
        *pcVar9 = '\0';
      }
      pcVar9 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_110",(bool *)0x0);
      OS_API::snprintf(&local_1ad,0xff,pcVar9,0);
      PacketGuard::PacketGuard(local_64);
                    /* try { // try from 0859fe31 to 0859fed7 has its CatchHandler @ 0859feed */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,0xc);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
      sVar3 = strlen(&local_1ad);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,sVar3);
      sVar3 = strlen(&local_1ad);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_64,&local_1ad,sVar3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
      CUser::Send(param_2,local_64);
      PacketGuard::~PacketGuard(local_64);
      return 0;
    }
    local_3c = get_blood_dungeon_admission_fee(this,param_2);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    CInventory::use_money(pCVar4,local_3c,0x22,1);
    CUser::SendUpdateItemList(param_2,1,0,0);
    pcVar9 = &local_2ad;
    uVar2 = 0x100;
    bVar10 = ((uint)pcVar9 & 1) != 0;
    if (bVar10) {
      local_2ad = '\0';
      pcVar9 = local_2ac;
      uVar2 = 0xff;
    }
    if (((uint)pcVar9 & 2) != 0) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9 = pcVar9 + 2;
      uVar2 = uVar2 - 2;
    }
    for (uVar8 = uVar2 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar2 & 2) != 0) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9 = pcVar9 + 2;
    }
    if (bVar10) {
      *pcVar9 = '\0';
    }
    pcVar9 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_110",(bool *)0x0);
    OS_API::snprintf(&local_2ad,0xff,pcVar9,local_3c);
    PacketGuard::PacketGuard(local_58);
                    /* try { // try from 085a002b to 085a0187 has its CatchHandler @ 085a01a1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
    sVar3 = strlen(&local_2ad);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_58,sVar3);
    sVar3 = strlen(&local_2ad);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_58,&local_2ad,sVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
    CUser::Send(param_2,local_58);
    pCVar5 = (CCharacBloodDungeon *)CUser::GetCharacExpandData(param_2,1);
    local_38 = CCharacBloodDungeon::GetEnterCount(pCVar5);
    iVar6 = G_CDataManager();
    local_34 = ServerParameterScript::GetLottePoint
                         ((ServerParameterScript *)(iVar6 + 0x68),local_38);
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
    iVar7 = G_CDataManager();
    local_30 = ServerParameterScript::GetPriceAverage((ServerParameterScript *)(iVar7 + 0x68),iVar6)
    ;
    pCVar5 = (CCharacBloodDungeon *)CUser::GetCharacExpandData(param_2,1);
    CCharacBloodDungeon::IncEnterCount(pCVar5);
    pCVar5 = (CCharacBloodDungeon *)CUser::GetCharacExpandData(param_2,1);
    CCharacBloodDungeon::IncPoint(pCVar5,local_34);
    iVar6 = local_3c - local_30;
    pCVar5 = (CCharacBloodDungeon *)CUser::GetCharacExpandData(param_2,1);
    CCharacBloodDungeon::IncUseGold(pCVar5,iVar6);
    PacketGuard::~PacketGuard(local_58);
  }
  cVar1 = CDungeon::get_dimension_possible(param_1);
  if ('\0' < cVar1) {
    if (*(int *)(this + 0xcd8) == 1) {
      return 0;
    }
    cVar1 = CDungeon::get_dimension_possible(param_1);
    local_2c = cVar1 + -1;
    iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (((*(char *)(iVar6 + 0xeb9 + local_2c) < '\x01') && (*(int *)(this + 0xcd8) != 1)) &&
       (cVar1 = CUser::isGMUser(param_2), cVar1 != '\x01')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      return 0xad;
    }
    if (*(int *)(this + 0xcd8) != 1) {
      CUserCharacInfo::subDemensionInoutValue((CUserCharacInfo *)param_2,(char)local_2c);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_party_info_to_all(this_00,this,1);
    }
  }
  if ((param_1[0x89f] == (CDungeon)0x2) && (*(int *)(this + 0xcd8) != 1)) {
    CUserCharacInfo::subUltimateInoutValue((CUserCharacInfo *)param_2,'\x02');
  }
  if ((param_1[0x89c] == (CDungeon)0x0) &&
     (cVar1 = CDungeon::isTournamentDungeon(param_1), cVar1 == '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (bVar10) {
    if (*(int *)(this + 0xcd8) == 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x7f4) == -1) {
      return 0;
    }
    if (param_1[0x7fc] != (CDungeon)0x1) {
      return 0;
    }
    local_28 = 0;
    PacketGuard::PacketGuard(local_70);
                    /* try { // try from 085a04e4 to 085a055c has its CatchHandler @ 085a055f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_70,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,1);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::MakeItemPacket(pCVar4,1,local_28,local_70);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_70,true);
    CUser::Send(param_2,local_70);
    PacketGuard::~PacketGuard(local_70);
  }
  if (param_1[0x85c] == (CDungeon)0x0) {
    if (param_1[0x87a] != (CDungeon)0x0) {
      local_1d = (CDungeon)CUserCharacInfo::GetCurRevengeDungeonCount((CUserCharacInfo *)param_2);
      if ((local_1d == (CDungeon)0x0) || ((byte)param_1[0x87b] < (byte)local_1d)) {
        CUserCharacInfo::SetCurRevengeDungeonCount((CUserCharacInfo *)param_2,'\0');
        return 0x11;
      }
      CUserCharacInfo::DecreaseRevengeDungeonTicket((CUserCharacInfo *)param_2);
      CUserCharacInfo::VillageAttack_DBUpdate((CUserCharacInfo *)param_2);
    }
    local_24 = 0;
  }
  else {
    cVar1 = CDungeon::IsOpenScheduleDungeon(param_1);
    if (cVar1 == '\x01') {
      if (param_2 == (CUser *)0x0) {
        local_24 = 0;
      }
      else if ((*(int *)(param_1 + 0x860) == -1) && (*(int *)(param_1 + 0x7f4) == -1)) {
        local_24 = 0;
      }
      else if ((*(int *)(param_1 + 0x860) == -1) || (param_1[0x868] == (CDungeon)0x1)) {
        if ((*(int *)(param_1 + 0x7f4) == -1) || (param_1[0x7fc] == (CDungeon)0x1)) {
          local_24 = 0x11;
          if ((*(int *)(param_1 + 0x860) == -1) ||
             (local_24 = do_after_dungeon_start_checkndelete_item
                                   (this,(RequiredItem *)(param_1 + 0x860),param_2), local_24 != 0))
          {
            if ((*(int *)(param_1 + 0x7f4) != -1) &&
               (local_24 = do_after_dungeon_start_checkndelete_item
                                     (this,(RequiredItem *)(param_1 + 0x7f4),param_2), local_24 == 0
               )) {
              CUser::SetDeleteEventDungeonInvitation(param_2,true);
            }
          }
          else {
            CUser::SetDeleteEventDungeonInvitation(param_2,true);
          }
        }
        else {
          local_24 = 0;
        }
      }
      else {
        local_24 = 0;
      }
    }
    else {
      local_24 = 0x15;
    }
  }
  return local_24;
}
```
