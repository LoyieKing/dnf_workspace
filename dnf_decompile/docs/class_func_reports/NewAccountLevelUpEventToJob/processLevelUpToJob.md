# processLevelUpToJob

`_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb`

`NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool)`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b82a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b82a4  _ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb
#           NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool)
# range [0x081b82a4, 0x081b87b8]
081b82a4 +0x000:  push   %ebp
081b82a5 +0x001:  mov    %esp,%ebp
081b82a7 +0x003:  push   %edi
081b82a8 +0x004:  push   %esi
081b82a9 +0x005:  push   %ebx
081b82aa +0x006:  sub    $0x1ec,%esp
081b82b0 +0x00c:  mov    0x10(%ebp),%eax
081b82b3 +0x00f:  mov    %al,-0x1bc(%ebp)
081b82b9 +0x015:  mov    0xc(%ebp),%eax
081b82bc +0x018:  mov    %eax,(%esp)
081b82bf +0x01b:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081b82c4 +0x020:  movsbl %al,%esi
081b82c7 +0x023:  mov    0xc(%ebp),%eax
081b82ca +0x026:  mov    %eax,(%esp)
081b82cd +0x029:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b82d2 +0x02e:  mov    %eax,%ebx
081b82d4 +0x030:  mov    0xc(%ebp),%eax
081b82d7 +0x033:  mov    %eax,(%esp)
081b82da +0x036:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081b82df +0x03b:  mov    %esi,0xc(%esp)
081b82e3 +0x03f:  mov    %ebx,0x8(%esp)
081b82e7 +0x043:  mov    %eax,0x4(%esp)
081b82eb +0x047:  lea    -0x54(%ebp),%eax
081b82ee +0x04a:  mov    %eax,(%esp)
081b82f1 +0x04d:  call   081b8896 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x9d>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x9d
081b82f6 +0x052:  lea    -0x60(%ebp),%eax
081b82f9 +0x055:  mov    %eax,(%esp)
081b82fc +0x058:  call   081b8c00 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x407>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x407
081b8301 +0x05d:  cmpb   $0x0,-0x1bc(%ebp)
081b8308 +0x064:  je     081b833c <+0x98>
081b830a +0x066:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b830f +0x06b:  lea    0xb5f8(%eax),%edx
081b8315 +0x071:  lea    -0x60(%ebp),%eax
081b8318 +0x074:  mov    %eax,0x8(%esp)
081b831c +0x078:  lea    -0x54(%ebp),%eax
081b831f +0x07b:  mov    %eax,0x4(%esp)
081b8323 +0x07f:  mov    %edx,(%esp)
081b8326 +0x082:  call   081b895a <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x161>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x161
081b832b +0x087:  xor    $0x1,%eax
081b832e +0x08a:  test   %al,%al
081b8330 +0x08c:  je     081b838b <+0xe7>
081b8332 +0x08e:  mov    $0x0,%ebx
081b8337 +0x093:  jmp    081b87a1 <+0x4fd>
081b833c +0x098:  lea    -0x68(%ebp),%eax
081b833f +0x09b:  mov    %eax,(%esp)
081b8342 +0x09e:  call   081b88bc <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0xc3>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0xc3
081b8347 +0x0a3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b834c +0x0a8:  lea    0xb5f8(%eax),%edx
081b8352 +0x0ae:  lea    -0x68(%ebp),%eax
081b8355 +0x0b1:  mov    %eax,0x8(%esp)
081b8359 +0x0b5:  lea    -0x54(%ebp),%eax
081b835c +0x0b8:  mov    %eax,0x4(%esp)
081b8360 +0x0bc:  mov    %edx,(%esp)
081b8363 +0x0bf:  call   081b89de <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x1e5>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x1e5
081b8368 +0x0c4:  xor    $0x1,%eax
081b836b +0x0c7:  test   %al,%al
081b836d +0x0c9:  je     081b8379 <+0xd5>
081b836f +0x0cb:  mov    $0x0,%ebx
081b8374 +0x0d0:  jmp    081b87a1 <+0x4fd>
081b8379 +0x0d5:  lea    -0x68(%ebp),%eax
081b837c +0x0d8:  mov    %eax,0x4(%esp)
081b8380 +0x0dc:  lea    -0x60(%ebp),%eax
081b8383 +0x0df:  mov    %eax,(%esp)
081b8386 +0x0e2:  call   081b8a52 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x259>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x259
081b838b +0x0e7:  mov    0xc(%ebp),%eax
081b838e +0x0ea:  mov    %eax,(%esp)
081b8391 +0x0ed:  call   08691e5c <_ZN5CUser32getCharacLevelUpGift_AccountOnceEv>  ; CUser::getCharacLevelUpGift_AccountOnce()
081b8396 +0x0f2:  mov    %eax,-0x20(%ebp)
081b8399 +0x0f5:  mov    -0x20(%ebp),%eax
081b839c +0x0f8:  mov    %eax,(%esp)
081b839f +0x0fb:  call   081b8c72 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x479>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x479
081b83a4 +0x100:  xor    $0x1,%eax
081b83a7 +0x103:  test   %al,%al
081b83a9 +0x105:  je     081b8499 <+0x1f5>
081b83af +0x10b:  mov    0xc(%ebp),%eax
081b83b2 +0x10e:  mov    %eax,(%esp)
081b83b5 +0x111:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b83ba +0x116:  mov    %eax,-0x50(%ebp)
081b83bd +0x119:  mov    -0x20(%ebp),%edx
081b83c0 +0x11c:  lea    -0x6c(%ebp),%eax
081b83c3 +0x11f:  lea    -0x50(%ebp),%ecx
081b83c6 +0x122:  mov    %ecx,0x8(%esp)
081b83ca +0x126:  mov    %edx,0x4(%esp)
081b83ce +0x12a:  mov    %eax,(%esp)
081b83d1 +0x12d:  call   081b8c86 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x48d>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x48d
081b83d6 +0x132:  sub    $0x4,%esp
081b83d9 +0x135:  mov    0xc(%ebp),%eax
081b83dc +0x138:  mov    %eax,(%esp)
081b83df +0x13b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b83e4 +0x140:  mov    %eax,-0x4c(%ebp)
081b83e7 +0x143:  mov    -0x20(%ebp),%edx
081b83ea +0x146:  lea    -0x70(%ebp),%eax
081b83ed +0x149:  lea    -0x4c(%ebp),%ecx
081b83f0 +0x14c:  mov    %ecx,0x8(%esp)
081b83f4 +0x150:  mov    %edx,0x4(%esp)
081b83f8 +0x154:  mov    %eax,(%esp)
081b83fb +0x157:  call   081b8cb2 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x4b9>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x4b9
081b8400 +0x15c:  sub    $0x4,%esp
081b8403 +0x15f:  mov    -0x6c(%ebp),%eax
081b8406 +0x162:  mov    %eax,-0x74(%ebp)
081b8409 +0x165:  jmp    081b847f <+0x1db>
081b840b +0x167:  mov    -0x20(%ebp),%edx
081b840e +0x16a:  lea    -0x48(%ebp),%eax
081b8411 +0x16d:  mov    %edx,0x4(%esp)
081b8415 +0x171:  mov    %eax,(%esp)
081b8418 +0x174:  call   081b8cde <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x4e5>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x4e5
081b841d +0x179:  sub    $0x4,%esp
081b8420 +0x17c:  lea    -0x48(%ebp),%eax
081b8423 +0x17f:  mov    %eax,0x4(%esp)
081b8427 +0x183:  lea    -0x74(%ebp),%eax
081b842a +0x186:  mov    %eax,(%esp)
081b842d +0x189:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
081b8432 +0x18e:  test   %al,%al
081b8434 +0x190:  je     081b8462 <+0x1be>
081b8436 +0x192:  lea    -0x74(%ebp),%eax
081b8439 +0x195:  mov    %eax,(%esp)
081b843c +0x198:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
081b8441 +0x19d:  mov    0x4(%eax),%ebx
081b8444 +0x1a0:  mov    0xc(%ebp),%eax
081b8447 +0x1a3:  mov    %eax,(%esp)
081b844a +0x1a6:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081b844f +0x1ab:  cmp    %eax,%ebx
081b8451 +0x1ad:  sete   %al
081b8454 +0x1b0:  test   %al,%al
081b8456 +0x1b2:  je     081b8462 <+0x1be>
081b8458 +0x1b4:  mov    $0x0,%ebx
081b845d +0x1b9:  jmp    081b87a1 <+0x4fd>
081b8462 +0x1be:  lea    -0x44(%ebp),%eax
081b8465 +0x1c1:  movl   $0x0,0x8(%esp)
081b846d +0x1c9:  lea    -0x74(%ebp),%edx
081b8470 +0x1cc:  mov    %edx,0x4(%esp)
081b8474 +0x1d0:  mov    %eax,(%esp)
081b8477 +0x1d3:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
081b847c +0x1d8:  sub    $0x4,%esp
081b847f +0x1db:  lea    -0x70(%ebp),%eax
081b8482 +0x1de:  mov    %eax,0x4(%esp)
081b8486 +0x1e2:  lea    -0x74(%ebp),%eax
081b8489 +0x1e5:  mov    %eax,(%esp)
081b848c +0x1e8:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
081b8491 +0x1ed:  test   %al,%al
081b8493 +0x1ef:  jne    081b840b <+0x167>
081b8499 +0x1f5:  mov    0xc(%ebp),%eax
081b849c +0x1f8:  mov    %eax,(%esp)
081b849f +0x1fb:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081b84a4 +0x200:  mov    %eax,-0x2c(%ebp)
081b84a7 +0x203:  mov    0xc(%ebp),%eax
081b84aa +0x206:  mov    %eax,(%esp)
081b84ad +0x209:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b84b2 +0x20e:  mov    %eax,-0x28(%ebp)
081b84b5 +0x211:  lea    -0x34(%ebp),%eax
081b84b8 +0x214:  lea    -0x2c(%ebp),%edx
081b84bb +0x217:  mov    %edx,0x8(%esp)
081b84bf +0x21b:  lea    -0x28(%ebp),%edx
081b84c2 +0x21e:  mov    %edx,0x4(%esp)
081b84c6 +0x222:  mov    %eax,(%esp)
081b84c9 +0x225:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
081b84ce +0x22a:  sub    $0x4,%esp
081b84d1 +0x22d:  lea    -0x34(%ebp),%eax
081b84d4 +0x230:  mov    %eax,0x4(%esp)
081b84d8 +0x234:  lea    -0x3c(%ebp),%eax
081b84db +0x237:  mov    %eax,(%esp)
081b84de +0x23a:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
081b84e3 +0x23f:  mov    -0x20(%ebp),%edx
081b84e6 +0x242:  lea    -0x40(%ebp),%eax
081b84e9 +0x245:  lea    -0x3c(%ebp),%ecx
081b84ec +0x248:  mov    %ecx,0x8(%esp)
081b84f0 +0x24c:  mov    %edx,0x4(%esp)
081b84f4 +0x250:  mov    %eax,(%esp)
081b84f7 +0x253:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
081b84fc +0x258:  sub    $0x4,%esp
081b84ff +0x25b:  mov    0xc(%ebp),%eax
081b8502 +0x25e:  mov    %eax,(%esp)
081b8505 +0x261:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081b850a +0x266:  cwtl
081b850b +0x267:  mov    %eax,-0x1c0(%ebp)
081b8511 +0x26d:  mov    0xc(%ebp),%eax
081b8514 +0x270:  mov    %eax,(%esp)
081b8517 +0x273:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b851c +0x278:  movswl %ax,%edi
081b851f +0x27b:  mov    0xc(%ebp),%eax
081b8522 +0x27e:  mov    %eax,(%esp)
081b8525 +0x281:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081b852a +0x286:  mov    %eax,%esi
081b852c +0x288:  mov    0xc(%ebp),%eax
081b852f +0x28b:  mov    %eax,(%esp)
081b8532 +0x28e:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
081b8537 +0x293:  movswl %ax,%ebx
081b853a +0x296:  mov    0xc(%ebp),%eax
081b853d +0x299:  mov    %eax,(%esp)
081b8540 +0x29c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081b8545 +0x2a1:  mov    -0x1c0(%ebp),%edx
081b854b +0x2a7:  mov    %edx,0x10(%esp)
081b854f +0x2ab:  mov    %edi,0xc(%esp)
081b8553 +0x2af:  mov    %esi,0x8(%esp)
081b8557 +0x2b3:  mov    %ebx,0x4(%esp)
081b855b +0x2b7:  mov    %eax,(%esp)
081b855e +0x2ba:  call   08449f66 <_ZN39DB_EventAccountCharacterLevelUpOnceGift11makeRequestEjsiss>  ; DB_EventAccountCharacterLevelUpOnceGift::makeRequest(unsigned int, short, int, short, short)
081b8563 +0x2bf:  lea    -0x1b5(%ebp),%edx
081b8569 +0x2c5:  mov    $0x100,%ebx
081b856e +0x2ca:  mov    $0x0,%eax
081b8573 +0x2cf:  mov    %edx,%ecx
081b8575 +0x2d1:  and    $0x1,%ecx
081b8578 +0x2d4:  test   %ecx,%ecx
081b857a +0x2d6:  je     081b8584 <+0x2e0>
081b857c +0x2d8:  mov    %al,(%edx)
081b857e +0x2da:  add    $0x1,%edx
081b8581 +0x2dd:  sub    $0x1,%ebx
081b8584 +0x2e0:  mov    %edx,%ecx
081b8586 +0x2e2:  and    $0x2,%ecx
081b8589 +0x2e5:  test   %ecx,%ecx
081b858b +0x2e7:  je     081b8596 <+0x2f2>
081b858d +0x2e9:  mov    %ax,(%edx)
081b8590 +0x2ec:  add    $0x2,%edx
081b8593 +0x2ef:  sub    $0x2,%ebx
081b8596 +0x2f2:  mov    %ebx,%ecx
081b8598 +0x2f4:  shr    $0x2,%ecx
081b859b +0x2f7:  mov    %edx,%edi
081b859d +0x2f9:  rep stos %eax,%es:(%edi)
081b859f +0x2fb:  mov    %edi,%edx
081b85a1 +0x2fd:  mov    %ebx,%ecx
081b85a3 +0x2ff:  and    $0x2,%ecx
081b85a6 +0x302:  test   %ecx,%ecx
081b85a8 +0x304:  je     081b85b0 <+0x30c>
081b85aa +0x306:  mov    %ax,(%edx)
081b85ad +0x309:  add    $0x2,%edx
081b85b0 +0x30c:  mov    %ebx,%ecx
081b85b2 +0x30e:  and    $0x1,%ecx
081b85b5 +0x311:  test   %ecx,%ecx
081b85b7 +0x313:  je     081b85be <+0x31a>
081b85b9 +0x315:  mov    %al,(%edx)
081b85bb +0x317:  add    $0x1,%edx
081b85be +0x31a:  mov    0xc(%ebp),%eax
081b85c1 +0x31d:  mov    %eax,(%esp)
081b85c4 +0x320:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081b85c9 +0x325:  mov    %eax,%ebx
081b85cb +0x327:  movl   $0x0,0xc(%esp)
081b85d3 +0x32f:  movl   $"game_server_msg_286",0x8(%esp)
081b85db +0x337:  movl   $0x4,0x4(%esp)
081b85e3 +0x33f:  movl   $&g_scriptStringManager_,(%esp)
081b85ea +0x346:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081b85ef +0x34b:  mov    %ebx,0xc(%esp)
081b85f3 +0x34f:  mov    %eax,0x8(%esp)
081b85f7 +0x353:  movl   $0xff,0x4(%esp)
081b85ff +0x35b:  lea    -0x1b5(%ebp),%eax
081b8605 +0x361:  mov    %eax,(%esp)
081b8608 +0x364:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081b860d +0x369:  lea    -0x78(%ebp),%eax
081b8610 +0x36c:  lea    -0x60(%ebp),%edx
081b8613 +0x36f:  mov    %edx,0x4(%esp)
081b8617 +0x373:  mov    %eax,(%esp)
081b861a +0x376:  call   081b8db8 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x5bf>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x5bf
081b861f +0x37b:  sub    $0x4,%esp
081b8622 +0x37e:  jmp    081b8750 <+0x4ac>
081b8627 +0x383:  lea    -0x78(%ebp),%eax
081b862a +0x386:  mov    %eax,(%esp)
081b862d +0x389:  call   081b8e44 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x64b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x64b
081b8632 +0x38e:  mov    %eax,-0x1c(%ebp)
081b8635 +0x391:  lea    -0xb5(%ebp),%eax
081b863b +0x397:  mov    %eax,(%esp)
081b863e +0x39a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081b8643 +0x39f:  mov    -0x1c(%ebp),%eax
081b8646 +0x3a2:  mov    (%eax),%eax
081b8648 +0x3a4:  mov    %eax,-0xb3(%ebp)
081b864e +0x3aa:  mov    -0x1c(%ebp),%eax
081b8651 +0x3ad:  mov    0x4(%eax),%ebx
081b8654 +0x3b0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b8659 +0x3b5:  mov    0xc(%eax),%eax
081b865c +0x3b8:  mov    %ebx,0xc(%esp)
081b8660 +0x3bc:  lea    -0xb5(%ebp),%edx
081b8666 +0x3c2:  mov    %edx,0x8(%esp)
081b866a +0x3c6:  movl   $0x0,0x4(%esp)
081b8672 +0x3ce:  mov    %eax,(%esp)
081b8675 +0x3d1:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
081b867a +0x3d6:  mov    0xc(%ebp),%eax
081b867d +0x3d9:  mov    %eax,(%esp)
081b8680 +0x3dc:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
081b8685 +0x3e1:  mov    %eax,%esi
081b8687 +0x3e3:  lea    -0x1b5(%ebp),%eax
081b868d +0x3e9:  mov    %eax,(%esp)
081b8690 +0x3ec:  call   0807e3b0 <_init+0xca8>
081b8695 +0x3f1:  mov    %eax,%edi
081b8697 +0x3f3:  mov    0xc(%ebp),%eax
081b869a +0x3f6:  mov    %eax,(%esp)
081b869d +0x3f9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081b86a2 +0x3fe:  mov    %eax,%ebx
081b86a4 +0x400:  movl   $0x0,0xc(%esp)
081b86ac +0x408:  movl   $"game_server_msg_285",0x8(%esp)
081b86b4 +0x410:  movl   $0x4,0x4(%esp)
081b86bc +0x418:  movl   $&g_scriptStringManager_,(%esp)
081b86c3 +0x41f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081b86c8 +0x424:  movl   $0x0,0x24(%esp)
081b86d0 +0x42c:  movl   $0x0,0x20(%esp)
081b86d8 +0x434:  mov    %esi,0x1c(%esp)
081b86dc +0x438:  movl   $0x0,0x18(%esp)
081b86e4 +0x440:  mov    %edi,0x14(%esp)
081b86e8 +0x444:  lea    -0x1b5(%ebp),%edx
081b86ee +0x44a:  mov    %edx,0x10(%esp)
081b86f2 +0x44e:  mov    %ebx,0xc(%esp)
081b86f6 +0x452:  movl   $0x0,0x8(%esp)
081b86fe +0x45a:  lea    -0xb5(%ebp),%edx
081b8704 +0x460:  mov    %edx,0x4(%esp)
081b8708 +0x464:  mov    %eax,(%esp)
081b870b +0x467:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081b8710 +0x46c:  test   %eax,%eax
081b8712 +0x46e:  setne  %al
081b8715 +0x471:  test   %al,%al
081b8717 +0x473:  je     081b8745 <+0x4a1>
081b8719 +0x475:  movl   $"NewAccountLevelUpEventToJob Event Start!",0x10(%esp)
081b8721 +0x47d:  movl   $0x7f,0xc(%esp)
081b8729 +0x485:  movl   $&_ZZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserbE19__PRETTY_FUNCTION__,0x8(%esp)
081b8731 +0x48d:  movl   $"NewAccountLevelUpEventToJob.cpp",0x4(%esp)
081b8739 +0x495:  movl   $0x1,(%esp)
081b8740 +0x49c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081b8745 +0x4a1:  lea    -0x78(%ebp),%eax
081b8748 +0x4a4:  mov    %eax,(%esp)
081b874b +0x4a7:  call   081b8e2e <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x635>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x635
081b8750 +0x4ac:  lea    -0x24(%ebp),%eax
081b8753 +0x4af:  lea    -0x60(%ebp),%edx
081b8756 +0x4b2:  mov    %edx,0x4(%esp)
081b875a +0x4b6:  mov    %eax,(%esp)
081b875d +0x4b9:  call   081b8ddc <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x5e3>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x5e3
081b8762 +0x4be:  sub    $0x4,%esp
081b8765 +0x4c1:  lea    -0x24(%ebp),%eax
081b8768 +0x4c4:  mov    %eax,0x4(%esp)
081b876c +0x4c8:  lea    -0x78(%ebp),%eax
081b876f +0x4cb:  mov    %eax,(%esp)
081b8772 +0x4ce:  call   081b8e02 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x609>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x609
081b8777 +0x4d3:  test   %al,%al
081b8779 +0x4d5:  jne    081b8627 <+0x383>
081b877f +0x4db:  mov    $0x1,%ebx
081b8784 +0x4e0:  jmp    081b87a1 <+0x4fd>
081b8786 +0x4e2:  mov    %edx,%ebx
081b8788 +0x4e4:  mov    %eax,%esi
081b878a +0x4e6:  lea    -0x60(%ebp),%eax
081b878d +0x4e9:  mov    %eax,(%esp)
081b8790 +0x4ec:  call   081b8c14 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x41b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x41b
081b8795 +0x4f1:  mov    %esi,%eax
081b8797 +0x4f3:  mov    %ebx,%edx
081b8799 +0x4f5:  mov    %eax,(%esp)
081b879c +0x4f8:  call   08ae3750 <_Unwind_Resume>
081b87a1 +0x4fd:  lea    -0x60(%ebp),%eax
081b87a4 +0x500:  mov    %eax,(%esp)
081b87a7 +0x503:  call   081b8c14 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x41b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x41b
081b87ac +0x508:  mov    %ebx,%eax
081b87ae +0x50a:  lea    -0xc(%ebp),%esp
081b87b1 +0x50d:  add    $0x0,%esp
081b87b4 +0x510:  pop    %ebx
081b87b5 +0x511:  pop    %esi
081b87b6 +0x512:  pop    %edi
081b87b7 +0x513:  pop    %ebp
081b87b8 +0x514:  ret
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::processLevelUpToJob @ 0x81b82a4

/* NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool) */

undefined4 __thiscall
NewAccountLevelUpEventToJob::processLevelUpToJob
          (NewAccountLevelUpEventToJob *this,CUser *param_1,bool param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  bool bVar14;
  byte bVar15;
  char local_1b9;
  char local_1b8 [255];
  Inven_Item local_b9 [2];
  undefined4 local_b7;
  __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
  local_7c [4];
  undefined4 local_78;
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  undefined4 local_70;
  LevelUpRewardItemData local_6c [8];
  vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>> local_64 [12];
  LevelUpRewardItemTableKey local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  pair local_44 [4];
  pair<int_const,int> local_40 [8];
  int local_38 [2];
  undefined4 local_30;
  int local_2c;
  __normal_iterator local_28 [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *local_24;
  undefined4 *local_20;
  
  bVar15 = 0;
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  LevelUpRewardItemTableKey::LevelUpRewardItemTableKey(local_58,iVar6,iVar5,(int)cVar1);
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::vector(local_64);
  if (param_2) {
                    /* try { // try from 081b830a to 081b8776 has its CatchHandler @ 081b8786 */
    iVar5 = G_CDataManager();
    cVar1 = stLevelUpRewardItemScript::get_data_when_growup
                      ((stLevelUpRewardItemScript *)(iVar5 + 0xb5f8),local_58,(vector *)local_64);
    if (cVar1 != '\x01') {
      uVar13 = 0;
      goto LAB_081b87a1;
    }
  }
  else {
    LevelUpRewardItemData::LevelUpRewardItemData(local_6c);
    iVar5 = G_CDataManager();
    cVar1 = stLevelUpRewardItemScript::get_data
                      ((stLevelUpRewardItemScript *)(iVar5 + 0xb5f8),local_58,local_6c);
    if (cVar1 != '\x01') {
      uVar13 = 0;
      goto LAB_081b87a1;
    }
    std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::push_back
              (local_64,local_6c);
  }
  local_24 = (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             CUser::getCharacLevelUpGift_AccountOnce(param_1);
  cVar1 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    (local_24);
  if (cVar1 != '\x01') {
    local_54 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
              ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
               &local_70,(int *)local_24);
    local_50 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
              (local_74,(int *)local_24);
    local_78 = local_70;
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_78,
                         (_Rb_tree_iterator *)local_74);
      if (cVar1 == '\0') break;
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_4c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_78,
                         (_Rb_tree_iterator *)local_4c);
      if (cVar1 != '\0') {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_78);
        iVar5 = *(int *)(iVar5 + 4);
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        if (iVar5 == iVar6) {
          uVar13 = 0;
          goto LAB_081b87a1;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_48,(int)&local_78);
    }
  }
  local_30 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_2c = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  std::make_pair<int,int>(local_38,&local_2c);
  std::pair<int_const,int>::pair<int,int>(local_40,(pair *)local_38);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_44);
  sVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  sVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  sVar4 = CUser::GetServerGroupToPvP(param_1);
  uVar7 = CUser::get_acc_id(param_1);
  DB_EventAccountCharacterLevelUpOnceGift::makeRequest(uVar7,sVar4,iVar5,sVar3,sVar2);
  pcVar12 = &local_1b9;
  uVar7 = 0x100;
  bVar14 = ((uint)pcVar12 & 1) != 0;
  if (bVar14) {
    local_1b9 = '\0';
    pcVar12 = local_1b8;
    uVar7 = 0xff;
  }
  if (((uint)pcVar12 & 2) != 0) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12 = pcVar12 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + ((uint)bVar15 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12 = pcVar12 + 2;
  }
  if (bVar14) {
    *pcVar12 = '\0';
  }
  uVar13 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pcVar12 = (char *)RDARScriptStringManager::findString
                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                               "game_server_msg_286",(bool *)0x0);
  OS_API::snprintf(&local_1b9,0xff,pcVar12,uVar13);
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::begin();
  while( true ) {
    std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::end();
    bVar14 = __gnu_cxx::operator!=(local_7c,local_28);
    if (!bVar14) break;
    local_20 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
               ::operator*(local_7c);
    Inven_Item::Inven_Item(local_b9);
    local_b7 = *local_20;
    uVar13 = local_20[1];
    iVar5 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar5 + 0xc),0,local_b9,uVar13);
    uVar13 = CUser::GetServerGroupToPvP(param_1);
    sVar8 = strlen(&local_1b9);
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar10 = RDARScriptStringManager::findString
                       ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_285",
                        (bool *)0x0);
    iVar5 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar10,local_b9,0,uVar9,&local_1b9,sVar8,0,uVar13,0,0);
    if (iVar5 != 0) {
      LogManager::logFormat
                (1,"NewAccountLevelUpEventToJob.cpp",
                 "bool NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool)",0x7f,
                 "NewAccountLevelUpEventToJob Event Start!");
    }
    __gnu_cxx::
    __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
    ::operator++(local_7c);
  }
  uVar13 = 1;
LAB_081b87a1:
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::~vector(local_64);
  return uVar13;
}
```
