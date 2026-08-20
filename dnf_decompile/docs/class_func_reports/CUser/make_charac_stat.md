# make_charac_stat

`_ZN5CUser16make_charac_statER11PacketGuard`

`CUser::make_charac_stat(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08659faa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659faa  _ZN5CUser16make_charac_statER11PacketGuard
#           CUser::make_charac_stat(PacketGuard&)
# range [0x08659faa, 0x0865a44d]
08659faa +0x000:  push   %ebp
08659fab +0x001:  mov    %esp,%ebp
08659fad +0x003:  push   %edi
08659fae +0x004:  push   %esi
08659faf +0x005:  push   %ebx
08659fb0 +0x006:  sub    $0xcc,%esp
08659fb6 +0x00c:  movb   $0x1,-0x21(%ebp)
08659fba +0x010:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08659fbf +0x015:  mov    %eax,(%esp)
08659fc2 +0x018:  call   086977da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x402f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x402f
08659fc7 +0x01d:  test   %al,%al
08659fc9 +0x01f:  je     0865a2d8 <+0x32e>
08659fcf +0x025:  mov    0x8(%ebp),%eax
08659fd2 +0x028:  mov    %eax,(%esp)
08659fd5 +0x02b:  call   084b42bc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x36f>  ; global constructors keyed to game_master::CMacro::Reset()+0x36f
08659fda +0x030:  mov    %eax,%edx
08659fdc +0x032:  lea    -0xc5(%ebp),%eax
08659fe2 +0x038:  mov    $0x52,%ebx
08659fe7 +0x03d:  mov    %eax,%ecx
08659fe9 +0x03f:  and    $0x1,%ecx
08659fec +0x042:  test   %ecx,%ecx
08659fee +0x044:  je     08659ffe <+0x54>
08659ff0 +0x046:  movzbl (%edx),%ecx
08659ff3 +0x049:  mov    %cl,(%eax)
08659ff5 +0x04b:  add    $0x1,%eax
08659ff8 +0x04e:  add    $0x1,%edx
08659ffb +0x051:  sub    $0x1,%ebx
08659ffe +0x054:  mov    %eax,%ecx
0865a000 +0x056:  and    $0x2,%ecx
0865a003 +0x059:  test   %ecx,%ecx
0865a005 +0x05b:  je     0865a016 <+0x6c>
0865a007 +0x05d:  movzwl (%edx),%ecx
0865a00a +0x060:  mov    %cx,(%eax)
0865a00d +0x063:  add    $0x2,%eax
0865a010 +0x066:  add    $0x2,%edx
0865a013 +0x069:  sub    $0x2,%ebx
0865a016 +0x06c:  mov    %ebx,%ecx
0865a018 +0x06e:  shr    $0x2,%ecx
0865a01b +0x071:  mov    %eax,%edi
0865a01d +0x073:  mov    %edx,%esi
0865a01f +0x075:  rep movsl %ds:(%esi),%es:(%edi)
0865a021 +0x077:  mov    %esi,%edx
0865a023 +0x079:  mov    %edi,%eax
0865a025 +0x07b:  mov    $0x0,%ecx
0865a02a +0x080:  mov    %ebx,%esi
0865a02c +0x082:  and    $0x2,%esi
0865a02f +0x085:  test   %esi,%esi
0865a031 +0x087:  je     0865a03e <+0x94>
0865a033 +0x089:  movzwl (%edx,%ecx,1),%esi
0865a037 +0x08d:  mov    %si,(%eax,%ecx,1)
0865a03b +0x091:  add    $0x2,%ecx
0865a03e +0x094:  and    $0x1,%ebx
0865a041 +0x097:  test   %ebx,%ebx
0865a043 +0x099:  je     0865a04c <+0xa2>
0865a045 +0x09b:  movzbl (%edx,%ecx,1),%edx
0865a049 +0x09f:  mov    %dl,(%eax,%ecx,1)
0865a04c +0x0a2:  mov    0x8(%ebp),%eax
0865a04f +0x0a5:  mov    %eax,(%esp)
0865a052 +0x0a8:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0865a057 +0x0ad:  movsbl %al,%esi
0865a05a +0x0b0:  mov    0x8(%ebp),%eax
0865a05d +0x0b3:  mov    %eax,(%esp)
0865a060 +0x0b6:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0865a065 +0x0bb:  mov    %eax,%ebx
0865a067 +0x0bd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865a06c +0x0c2:  add    $0x4df8,%eax
0865a071 +0x0c7:  mov    %esi,0x8(%esp)
0865a075 +0x0cb:  mov    %ebx,0x4(%esp)
0865a079 +0x0cf:  mov    %eax,(%esp)
0865a07c +0x0d2:  call   08693c66 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4bb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4bb
0865a081 +0x0d7:  mov    %eax,-0x20(%ebp)
0865a084 +0x0da:  cmpl   $0x0,-0x20(%ebp)
0865a088 +0x0de:  je     0865a282 <+0x2d8>
0865a08e +0x0e4:  mov    -0x20(%ebp),%eax
0865a091 +0x0e7:  mov    (%eax),%eax
0865a093 +0x0e9:  test   %eax,%eax
0865a095 +0x0eb:  je     0865a0a2 <+0xf8>
0865a097 +0x0ed:  mov    -0x20(%ebp),%eax
0865a09a +0x0f0:  mov    (%eax),%eax
0865a09c +0x0f2:  mov    %eax,-0xc5(%ebp)
0865a0a2 +0x0f8:  mov    -0x20(%ebp),%eax
0865a0a5 +0x0fb:  mov    0x4(%eax),%eax
0865a0a8 +0x0fe:  test   %eax,%eax
0865a0aa +0x100:  je     0865a0b8 <+0x10e>
0865a0ac +0x102:  mov    -0x20(%ebp),%eax
0865a0af +0x105:  mov    0x4(%eax),%eax
0865a0b2 +0x108:  mov    %eax,-0xc1(%ebp)
0865a0b8 +0x10e:  mov    -0x20(%ebp),%eax
0865a0bb +0x111:  movzwl 0x8(%eax),%eax
0865a0bf +0x115:  test   %ax,%ax
0865a0c2 +0x118:  je     0865a0d2 <+0x128>
0865a0c4 +0x11a:  mov    -0x20(%ebp),%eax
0865a0c7 +0x11d:  movzwl 0x8(%eax),%eax
0865a0cb +0x121:  mov    %ax,-0xbd(%ebp)
0865a0d2 +0x128:  mov    -0x20(%ebp),%eax
0865a0d5 +0x12b:  movzwl 0xa(%eax),%eax
0865a0d9 +0x12f:  test   %ax,%ax
0865a0dc +0x132:  je     0865a0ec <+0x142>
0865a0de +0x134:  mov    -0x20(%ebp),%eax
0865a0e1 +0x137:  movzwl 0xa(%eax),%eax
0865a0e5 +0x13b:  mov    %ax,-0xbb(%ebp)
0865a0ec +0x142:  mov    -0x20(%ebp),%eax
0865a0ef +0x145:  movzwl 0xc(%eax),%eax
0865a0f3 +0x149:  test   %ax,%ax
0865a0f6 +0x14c:  je     0865a106 <+0x15c>
0865a0f8 +0x14e:  mov    -0x20(%ebp),%eax
0865a0fb +0x151:  movzwl 0xc(%eax),%eax
0865a0ff +0x155:  mov    %ax,-0xb9(%ebp)
0865a106 +0x15c:  mov    -0x20(%ebp),%eax
0865a109 +0x15f:  movzwl 0xe(%eax),%eax
0865a10d +0x163:  test   %ax,%ax
0865a110 +0x166:  je     0865a120 <+0x176>
0865a112 +0x168:  mov    -0x20(%ebp),%eax
0865a115 +0x16b:  movzwl 0xe(%eax),%eax
0865a119 +0x16f:  mov    %ax,-0xb7(%ebp)
0865a120 +0x176:  movl   $0x0,-0x1c(%ebp)
0865a127 +0x17d:  movl   $0x0,-0x1c(%ebp)
0865a12e +0x184:  jmp    0865a161 <+0x1b7>
0865a130 +0x186:  mov    -0x1c(%ebp),%edx
0865a133 +0x189:  mov    -0x20(%ebp),%eax
0865a136 +0x18c:  add    $0x8,%edx
0865a139 +0x18f:  movzwl (%eax,%edx,2),%eax
0865a13d +0x193:  test   %ax,%ax
0865a140 +0x196:  je     0865a15d <+0x1b3>
0865a142 +0x198:  mov    -0x1c(%ebp),%edx
0865a145 +0x19b:  mov    -0x1c(%ebp),%ecx
0865a148 +0x19e:  mov    -0x20(%ebp),%eax
0865a14b +0x1a1:  add    $0x8,%ecx
0865a14e +0x1a4:  movzwl (%eax,%ecx,2),%eax
0865a152 +0x1a8:  add    $0x8,%edx
0865a155 +0x1ab:  mov    %ax,-0xc5(%ebp,%edx,2)
0865a15d +0x1b3:  addl   $0x1,-0x1c(%ebp)
0865a161 +0x1b7:  cmpl   $0x3,-0x1c(%ebp)
0865a165 +0x1bb:  setle  %al
0865a168 +0x1be:  test   %al,%al
0865a16a +0x1c0:  jne    0865a130 <+0x186>
0865a16c +0x1c2:  movl   $0x0,-0x1c(%ebp)
0865a173 +0x1c9:  jmp    0865a1a8 <+0x1fe>
0865a175 +0x1cb:  mov    -0x1c(%ebp),%edx
0865a178 +0x1ce:  mov    -0x20(%ebp),%eax
0865a17b +0x1d1:  add    $0x8,%edx
0865a17e +0x1d4:  movzwl 0x8(%eax,%edx,2),%eax
0865a183 +0x1d9:  test   %ax,%ax
0865a186 +0x1dc:  je     0865a1a4 <+0x1fa>
0865a188 +0x1de:  mov    -0x1c(%ebp),%edx
0865a18b +0x1e1:  mov    -0x1c(%ebp),%ecx
0865a18e +0x1e4:  mov    -0x20(%ebp),%eax
0865a191 +0x1e7:  add    $0x8,%ecx
0865a194 +0x1ea:  movzwl 0x8(%eax,%ecx,2),%eax
0865a199 +0x1ef:  add    $0x8,%edx
0865a19c +0x1f2:  mov    %ax,-0xbd(%ebp,%edx,2)
0865a1a4 +0x1fa:  addl   $0x1,-0x1c(%ebp)
0865a1a8 +0x1fe:  cmpl   $0x10,-0x1c(%ebp)
0865a1ac +0x202:  setle  %al
0865a1af +0x205:  test   %al,%al
0865a1b1 +0x207:  jne    0865a175 <+0x1cb>
0865a1b3 +0x209:  mov    -0x20(%ebp),%eax
0865a1b6 +0x20c:  mov    0x3c(%eax),%eax
0865a1b9 +0x20f:  test   %eax,%eax
0865a1bb +0x211:  je     0865a1c9 <+0x21f>
0865a1bd +0x213:  mov    -0x20(%ebp),%eax
0865a1c0 +0x216:  mov    0x3c(%eax),%eax
0865a1c3 +0x219:  mov    %eax,-0x8b(%ebp)
0865a1c9 +0x21f:  mov    -0x20(%ebp),%eax
0865a1cc +0x222:  movzwl 0x40(%eax),%eax
0865a1d0 +0x226:  test   %ax,%ax
0865a1d3 +0x229:  je     0865a1e3 <+0x239>
0865a1d5 +0x22b:  mov    -0x20(%ebp),%eax
0865a1d8 +0x22e:  movzwl 0x40(%eax),%eax
0865a1dc +0x232:  mov    %ax,-0x87(%ebp)
0865a1e3 +0x239:  mov    -0x20(%ebp),%eax
0865a1e6 +0x23c:  movzwl 0x42(%eax),%eax
0865a1ea +0x240:  test   %ax,%ax
0865a1ed +0x243:  je     0865a1fd <+0x253>
0865a1ef +0x245:  mov    -0x20(%ebp),%eax
0865a1f2 +0x248:  movzwl 0x42(%eax),%eax
0865a1f6 +0x24c:  mov    %ax,-0x85(%ebp)
0865a1fd +0x253:  mov    -0x20(%ebp),%eax
0865a200 +0x256:  mov    0x44(%eax),%eax
0865a203 +0x259:  test   %eax,%eax
0865a205 +0x25b:  je     0865a213 <+0x269>
0865a207 +0x25d:  mov    -0x20(%ebp),%eax
0865a20a +0x260:  mov    0x44(%eax),%eax
0865a20d +0x263:  mov    %eax,-0x83(%ebp)
0865a213 +0x269:  mov    -0x20(%ebp),%eax
0865a216 +0x26c:  movzwl 0x48(%eax),%eax
0865a21a +0x270:  test   %ax,%ax
0865a21d +0x273:  je     0865a22a <+0x280>
0865a21f +0x275:  mov    -0x20(%ebp),%eax
0865a222 +0x278:  movzwl 0x48(%eax),%eax
0865a226 +0x27c:  mov    %ax,-0x7f(%ebp)
0865a22a +0x280:  mov    -0x20(%ebp),%eax
0865a22d +0x283:  movzwl 0x4a(%eax),%eax
0865a231 +0x287:  test   %ax,%ax
0865a234 +0x28a:  je     0865a241 <+0x297>
0865a236 +0x28c:  mov    -0x20(%ebp),%eax
0865a239 +0x28f:  movzwl 0x4a(%eax),%eax
0865a23d +0x293:  mov    %ax,-0x7d(%ebp)
0865a241 +0x297:  mov    -0x20(%ebp),%eax
0865a244 +0x29a:  movzwl 0x4c(%eax),%eax
0865a248 +0x29e:  test   %ax,%ax
0865a24b +0x2a1:  je     0865a258 <+0x2ae>
0865a24d +0x2a3:  mov    -0x20(%ebp),%eax
0865a250 +0x2a6:  movzwl 0x4c(%eax),%eax
0865a254 +0x2aa:  mov    %ax,-0x7b(%ebp)
0865a258 +0x2ae:  mov    -0x20(%ebp),%eax
0865a25b +0x2b1:  movzwl 0x4e(%eax),%eax
0865a25f +0x2b5:  test   %ax,%ax
0865a262 +0x2b8:  je     0865a26f <+0x2c5>
0865a264 +0x2ba:  mov    -0x20(%ebp),%eax
0865a267 +0x2bd:  movzwl 0x4e(%eax),%eax
0865a26b +0x2c1:  mov    %ax,-0x79(%ebp)
0865a26f +0x2c5:  mov    -0x20(%ebp),%eax
0865a272 +0x2c8:  mov    0x50(%eax),%eax
0865a275 +0x2cb:  test   %eax,%eax
0865a277 +0x2cd:  je     0865a282 <+0x2d8>
0865a279 +0x2cf:  mov    -0x20(%ebp),%eax
0865a27c +0x2d2:  mov    0x50(%eax),%eax
0865a27f +0x2d5:  mov    %eax,-0x77(%ebp)
0865a282 +0x2d8:  mov    0xc(%ebp),%eax
0865a285 +0x2db:  movl   $0x53,0x4(%esp)
0865a28d +0x2e3:  mov    %eax,(%esp)
0865a290 +0x2e6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a295 +0x2eb:  lea    -0xc5(%ebp),%edx
0865a29b +0x2f1:  mov    0xc(%ebp),%eax
0865a29e +0x2f4:  movl   $0x52,0x8(%esp)
0865a2a6 +0x2fc:  mov    %edx,0x4(%esp)
0865a2aa +0x300:  mov    %eax,(%esp)
0865a2ad +0x303:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0865a2b2 +0x308:  mov    0x8(%ebp),%eax
0865a2b5 +0x30b:  mov    %eax,(%esp)
0865a2b8 +0x30e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865a2bd +0x313:  movzbl 0x75(%eax),%eax
0865a2c1 +0x317:  movzbl %al,%edx
0865a2c4 +0x31a:  mov    0xc(%ebp),%eax
0865a2c7 +0x31d:  mov    %edx,0x4(%esp)
0865a2cb +0x321:  mov    %eax,(%esp)
0865a2ce +0x324:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a2d3 +0x329:  jmp    0865a443 <+0x499>
0865a2d8 +0x32e:  mov    0x8(%ebp),%eax
0865a2db +0x331:  mov    %eax,(%esp)
0865a2de +0x334:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
0865a2e3 +0x339:  test   %al,%al
0865a2e5 +0x33b:  je     0865a3eb <+0x441>
0865a2eb +0x341:  mov    0x8(%ebp),%eax
0865a2ee +0x344:  mov    %eax,(%esp)
0865a2f1 +0x347:  call   084b42bc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x36f>  ; global constructors keyed to game_master::CMacro::Reset()+0x36f
0865a2f6 +0x34c:  mov    %eax,%edx
0865a2f8 +0x34e:  lea    -0xc5(%ebp),%eax
0865a2fe +0x354:  mov    $0x52,%ebx
0865a303 +0x359:  mov    %eax,%ecx
0865a305 +0x35b:  and    $0x1,%ecx
0865a308 +0x35e:  test   %ecx,%ecx
0865a30a +0x360:  je     0865a31a <+0x370>
0865a30c +0x362:  movzbl (%edx),%ecx
0865a30f +0x365:  mov    %cl,(%eax)
0865a311 +0x367:  add    $0x1,%eax
0865a314 +0x36a:  add    $0x1,%edx
0865a317 +0x36d:  sub    $0x1,%ebx
0865a31a +0x370:  mov    %eax,%ecx
0865a31c +0x372:  and    $0x2,%ecx
0865a31f +0x375:  test   %ecx,%ecx
0865a321 +0x377:  je     0865a332 <+0x388>
0865a323 +0x379:  movzwl (%edx),%ecx
0865a326 +0x37c:  mov    %cx,(%eax)
0865a329 +0x37f:  add    $0x2,%eax
0865a32c +0x382:  add    $0x2,%edx
0865a32f +0x385:  sub    $0x2,%ebx
0865a332 +0x388:  mov    %ebx,%ecx
0865a334 +0x38a:  shr    $0x2,%ecx
0865a337 +0x38d:  mov    %eax,%edi
0865a339 +0x38f:  mov    %edx,%esi
0865a33b +0x391:  rep movsl %ds:(%esi),%es:(%edi)
0865a33d +0x393:  mov    %esi,%edx
0865a33f +0x395:  mov    %edi,%eax
0865a341 +0x397:  mov    $0x0,%ecx
0865a346 +0x39c:  mov    %ebx,%esi
0865a348 +0x39e:  and    $0x2,%esi
0865a34b +0x3a1:  test   %esi,%esi
0865a34d +0x3a3:  je     0865a35a <+0x3b0>
0865a34f +0x3a5:  movzwl (%edx,%ecx,1),%esi
0865a353 +0x3a9:  mov    %si,(%eax,%ecx,1)
0865a357 +0x3ad:  add    $0x2,%ecx
0865a35a +0x3b0:  and    $0x1,%ebx
0865a35d +0x3b3:  test   %ebx,%ebx
0865a35f +0x3b5:  je     0865a368 <+0x3be>
0865a361 +0x3b7:  movzbl (%edx,%ecx,1),%edx
0865a365 +0x3bb:  mov    %dl,(%eax,%ecx,1)
0865a368 +0x3be:  mov    0x8(%ebp),%eax
0865a36b +0x3c1:  lea    0x7121c(%eax),%edx
0865a371 +0x3c7:  lea    -0x73(%ebp),%eax
0865a374 +0x3ca:  mov    %edx,0x4(%esp)
0865a378 +0x3ce:  mov    %eax,(%esp)
0865a37b +0x3d1:  call   08694a88 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x12dd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x12dd
0865a380 +0x3d6:  sub    $0x4,%esp
0865a383 +0x3d9:  lea    -0x73(%ebp),%eax
0865a386 +0x3dc:  mov    %eax,0x4(%esp)
0865a38a +0x3e0:  lea    -0xc5(%ebp),%eax
0865a390 +0x3e6:  mov    %eax,(%esp)
0865a393 +0x3e9:  call   08693cea <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x53f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x53f
0865a398 +0x3ee:  mov    0xc(%ebp),%eax
0865a39b +0x3f1:  movl   $0x53,0x4(%esp)
0865a3a3 +0x3f9:  mov    %eax,(%esp)
0865a3a6 +0x3fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a3ab +0x401:  lea    -0xc5(%ebp),%edx
0865a3b1 +0x407:  mov    0xc(%ebp),%eax
0865a3b4 +0x40a:  movl   $0x52,0x8(%esp)
0865a3bc +0x412:  mov    %edx,0x4(%esp)
0865a3c0 +0x416:  mov    %eax,(%esp)
0865a3c3 +0x419:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0865a3c8 +0x41e:  mov    0x8(%ebp),%eax
0865a3cb +0x421:  mov    %eax,(%esp)
0865a3ce +0x424:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865a3d3 +0x429:  movzbl 0x75(%eax),%eax
0865a3d7 +0x42d:  movzbl %al,%edx
0865a3da +0x430:  mov    0xc(%ebp),%eax
0865a3dd +0x433:  mov    %edx,0x4(%esp)
0865a3e1 +0x437:  mov    %eax,(%esp)
0865a3e4 +0x43a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a3e9 +0x43f:  jmp    0865a443 <+0x499>
0865a3eb +0x441:  mov    0xc(%ebp),%eax
0865a3ee +0x444:  movl   $0x53,0x4(%esp)
0865a3f6 +0x44c:  mov    %eax,(%esp)
0865a3f9 +0x44f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0865a3fe +0x454:  mov    0x8(%ebp),%eax
0865a401 +0x457:  mov    %eax,(%esp)
0865a404 +0x45a:  call   084b42bc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x36f>  ; global constructors keyed to game_master::CMacro::Reset()+0x36f
0865a409 +0x45f:  mov    %eax,%edx
0865a40b +0x461:  mov    0xc(%ebp),%eax
0865a40e +0x464:  movl   $0x52,0x8(%esp)
0865a416 +0x46c:  mov    %edx,0x4(%esp)
0865a41a +0x470:  mov    %eax,(%esp)
0865a41d +0x473:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0865a422 +0x478:  mov    0x8(%ebp),%eax
0865a425 +0x47b:  mov    %eax,(%esp)
0865a428 +0x47e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865a42d +0x483:  movzbl 0x75(%eax),%eax
0865a431 +0x487:  movzbl %al,%edx
0865a434 +0x48a:  mov    0xc(%ebp),%eax
0865a437 +0x48d:  mov    %edx,0x4(%esp)
0865a43b +0x491:  mov    %eax,(%esp)
0865a43e +0x494:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865a443 +0x499:  lea    -0xc(%ebp),%esp
0865a446 +0x49c:  add    $0x0,%esp
0865a449 +0x49f:  pop    %ebx
0865a44a +0x4a0:  pop    %esi
0865a44b +0x4a1:  pop    %edi
0865a44c +0x4a2:  pop    %ebp
0865a44d +0x4a3:  ret
```

## 反编译 C

```c
// CUser::make_charac_stat @ 0x8659faa

/* CUser::make_charac_stat(PacketGuard&) */

void __thiscall CUser::make_charac_stat(CUser *this,PacketGuard *param_1)

{
  char cVar1;
  GameWorld *this_00;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  undefined1 local_c9 [4];
  int local_c5;
  undefined2 auStack_c1 [4];
  undefined2 auStack_b9 [4];
  undefined2 auStack_b1 [17];
  int local_8f;
  undefined2 local_8b;
  undefined2 local_89;
  int local_87;
  undefined2 local_83;
  undefined2 local_81;
  undefined2 local_7f;
  undefined2 local_7d;
  int local_7b;
  _Additioal_info local_77 [82];
  undefined1 local_25;
  int *local_24;
  int local_20;
  
  bVar10 = 0;
  local_25 = 1;
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsCharacterStatRevisionChannel(this_00);
  if (cVar1 == '\0') {
    cVar1 = IsHavePremiumAdvantage(this);
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x53);
      pcVar5 = (char *)CUserCharacInfo::getCurCharacAddInfoR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,pcVar5,0x52);
      iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar7 + 0x75));
    }
    else {
      puVar2 = (undefined4 *)CUserCharacInfo::getCurCharacAddInfoR((CUserCharacInfo *)this);
      puVar3 = (undefined4 *)local_c9;
      uVar8 = 0x52;
      bVar9 = ((uint)puVar3 & 1) != 0;
      if (bVar9) {
        local_c9[0] = *(undefined1 *)puVar2;
        puVar3 = (undefined4 *)(local_c9 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        uVar8 = 0x51;
      }
      if (((uint)puVar3 & 2) != 0) {
        *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
        puVar2 = (undefined4 *)((int)puVar2 + 2);
        uVar8 = uVar8 - 2;
      }
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar10 * -2 + 1;
      }
      iVar7 = 0;
      if ((uVar8 & 2) != 0) {
        *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
        iVar7 = 2;
      }
      if (bVar9) {
        *(undefined1 *)((int)puVar3 + iVar7) = *(undefined1 *)((int)puVar2 + iVar7);
      }
      WongWork::CUserPremium::GetAdditionalInfo();
      _Additioal_info::operator+=((_Additioal_info *)local_c9,local_77);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x53);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,local_c9,0x52);
      iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar7 + 0x75));
    }
  }
  else {
    puVar2 = (undefined4 *)CUserCharacInfo::getCurCharacAddInfoR((CUserCharacInfo *)this);
    puVar3 = (undefined4 *)local_c9;
    uVar8 = 0x52;
    bVar9 = ((uint)puVar3 & 1) != 0;
    if (bVar9) {
      local_c9[0] = *(undefined1 *)puVar2;
      puVar3 = (undefined4 *)(local_c9 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      uVar8 = 0x51;
    }
    if (((uint)puVar3 & 2) != 0) {
      *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      puVar2 = (undefined4 *)((int)puVar2 + 2);
      uVar8 = uVar8 - 2;
    }
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar10 * -2 + 1;
    }
    iVar7 = 0;
    if ((uVar8 & 2) != 0) {
      *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
      iVar7 = 2;
    }
    if (bVar9) {
      *(undefined1 *)((int)puVar3 + iVar7) = *(undefined1 *)((int)puVar2 + iVar7);
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
    iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    iVar4 = G_CDataManager();
    local_24 = (int *)FairPvPStatScript::FindCharacStat
                                ((FairPvPStatScript *)(iVar4 + 0x4df8),iVar7,(int)cVar1);
    if (local_24 != (int *)0x0) {
      if (*local_24 != 0) {
        local_c9 = (undefined1  [4])*local_24;
      }
      if (local_24[1] != 0) {
        local_c5 = local_24[1];
      }
      if ((short)local_24[2] != 0) {
        auStack_c1[0] = (undefined2)local_24[2];
      }
      if (*(short *)((int)local_24 + 10) != 0) {
        auStack_c1[1] = *(undefined2 *)((int)local_24 + 10);
      }
      if ((short)local_24[3] != 0) {
        auStack_c1[2] = (undefined2)local_24[3];
      }
      if (*(short *)((int)local_24 + 0xe) != 0) {
        auStack_c1[3] = *(undefined2 *)((int)local_24 + 0xe);
      }
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        if (*(short *)((int)local_24 + (local_20 + 8) * 2) != 0) {
          *(undefined2 *)(local_c9 + (local_20 + 8) * 2) =
               *(undefined2 *)((int)local_24 + (local_20 + 8) * 2);
        }
      }
      for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
        if (*(short *)((int)local_24 + (local_20 + 8) * 2 + 8) != 0) {
          auStack_c1[local_20 + 8] = *(undefined2 *)((int)local_24 + (local_20 + 8) * 2 + 8);
        }
      }
      if (local_24[0xf] != 0) {
        local_8f = local_24[0xf];
      }
      if ((short)local_24[0x10] != 0) {
        local_8b = (undefined2)local_24[0x10];
      }
      if (*(short *)((int)local_24 + 0x42) != 0) {
        local_89 = *(undefined2 *)((int)local_24 + 0x42);
      }
      if (local_24[0x11] != 0) {
        local_87 = local_24[0x11];
      }
      if ((short)local_24[0x12] != 0) {
        local_83 = (undefined2)local_24[0x12];
      }
      if (*(short *)((int)local_24 + 0x4a) != 0) {
        local_81 = *(undefined2 *)((int)local_24 + 0x4a);
      }
      if ((short)local_24[0x13] != 0) {
        local_7f = (undefined2)local_24[0x13];
      }
      if (*(short *)((int)local_24 + 0x4e) != 0) {
        local_7d = *(undefined2 *)((int)local_24 + 0x4e);
      }
      if (local_24[0x14] != 0) {
        local_7b = local_24[0x14];
      }
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x53);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,local_c9,0x52);
    iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar7 + 0x75));
  }
  return;
}
```
