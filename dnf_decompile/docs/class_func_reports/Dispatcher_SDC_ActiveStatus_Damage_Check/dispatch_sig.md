# dispatch_sig

`_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SDC_ActiveStatus_Damage_Check` | `0x081ea16e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ea16e  _ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ea16e, 0x081ea621]
081ea16e +0x000:  push   %ebp
081ea16f +0x001:  mov    %esp,%ebp
081ea171 +0x003:  push   %edi
081ea172 +0x004:  push   %esi
081ea173 +0x005:  push   %ebx
081ea174 +0x006:  sub    $0x47c,%esp
081ea17a +0x00c:  movl   $0x0,-0x44(%ebp)
081ea181 +0x013:  movb   $0x0,-0x55(%ebp)
081ea185 +0x017:  lea    -0x55(%ebp),%eax
081ea188 +0x01a:  mov    %eax,0x4(%esp)
081ea18c +0x01e:  mov    0x10(%ebp),%eax
081ea18f +0x021:  mov    %eax,(%esp)
081ea192 +0x024:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ea197 +0x029:  xor    $0x1,%eax
081ea19a +0x02c:  test   %al,%al
081ea19c +0x02e:  je     081ea1c7 <+0x59>
081ea19e +0x030:  movl   $0x0,0xc(%esp)
081ea1a6 +0x038:  movl   $0x0,0x8(%esp)
081ea1ae +0x040:  movl   $&_ZZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea1b6 +0x048:  movl   $0x6b36,(%esp)
081ea1bd +0x04f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea1c2 +0x054:  jmp    081ea616 <+0x4a8>
081ea1c7 +0x059:  movl   $0x1f4,-0x3c(%ebp)
081ea1ce +0x060:  movl   $0x1f4,-0x38(%ebp)
081ea1d5 +0x067:  movl   $0x1f4,-0x5c(%ebp)
081ea1dc +0x06e:  movl   $0x1f4,-0x34(%ebp)
081ea1e3 +0x075:  lea    -0x25d(%ebp),%edx
081ea1e9 +0x07b:  mov    $0x1f4,%ebx
081ea1ee +0x080:  mov    $0x0,%eax
081ea1f3 +0x085:  mov    %edx,%ecx
081ea1f5 +0x087:  and    $0x1,%ecx
081ea1f8 +0x08a:  test   %ecx,%ecx
081ea1fa +0x08c:  je     081ea204 <+0x96>
081ea1fc +0x08e:  mov    %al,(%edx)
081ea1fe +0x090:  add    $0x1,%edx
081ea201 +0x093:  sub    $0x1,%ebx
081ea204 +0x096:  mov    %edx,%ecx
081ea206 +0x098:  and    $0x2,%ecx
081ea209 +0x09b:  test   %ecx,%ecx
081ea20b +0x09d:  je     081ea216 <+0xa8>
081ea20d +0x09f:  mov    %ax,(%edx)
081ea210 +0x0a2:  add    $0x2,%edx
081ea213 +0x0a5:  sub    $0x2,%ebx
081ea216 +0x0a8:  mov    %ebx,%ecx
081ea218 +0x0aa:  shr    $0x2,%ecx
081ea21b +0x0ad:  mov    %edx,%edi
081ea21d +0x0af:  rep stos %eax,%es:(%edi)
081ea21f +0x0b1:  mov    %edi,%edx
081ea221 +0x0b3:  mov    %ebx,%ecx
081ea223 +0x0b5:  and    $0x2,%ecx
081ea226 +0x0b8:  test   %ecx,%ecx
081ea228 +0x0ba:  je     081ea230 <+0xc2>
081ea22a +0x0bc:  mov    %ax,(%edx)
081ea22d +0x0bf:  add    $0x2,%edx
081ea230 +0x0c2:  mov    %ebx,%ecx
081ea232 +0x0c4:  and    $0x1,%ecx
081ea235 +0x0c7:  test   %ecx,%ecx
081ea237 +0x0c9:  je     081ea23e <+0xd0>
081ea239 +0x0cb:  mov    %al,(%edx)
081ea23b +0x0cd:  add    $0x1,%edx
081ea23e +0x0d0:  lea    -0x451(%ebp),%edx
081ea244 +0x0d6:  mov    $0x1f4,%ebx
081ea249 +0x0db:  mov    $0x0,%eax
081ea24e +0x0e0:  mov    %edx,%ecx
081ea250 +0x0e2:  and    $0x1,%ecx
081ea253 +0x0e5:  test   %ecx,%ecx
081ea255 +0x0e7:  je     081ea25f <+0xf1>
081ea257 +0x0e9:  mov    %al,(%edx)
081ea259 +0x0eb:  add    $0x1,%edx
081ea25c +0x0ee:  sub    $0x1,%ebx
081ea25f +0x0f1:  mov    %edx,%ecx
081ea261 +0x0f3:  and    $0x2,%ecx
081ea264 +0x0f6:  test   %ecx,%ecx
081ea266 +0x0f8:  je     081ea271 <+0x103>
081ea268 +0x0fa:  mov    %ax,(%edx)
081ea26b +0x0fd:  add    $0x2,%edx
081ea26e +0x100:  sub    $0x2,%ebx
081ea271 +0x103:  mov    %ebx,%ecx
081ea273 +0x105:  shr    $0x2,%ecx
081ea276 +0x108:  mov    %edx,%edi
081ea278 +0x10a:  rep stos %eax,%es:(%edi)
081ea27a +0x10c:  mov    %edi,%edx
081ea27c +0x10e:  mov    %ebx,%ecx
081ea27e +0x110:  and    $0x2,%ecx
081ea281 +0x113:  test   %ecx,%ecx
081ea283 +0x115:  je     081ea28b <+0x11d>
081ea285 +0x117:  mov    %ax,(%edx)
081ea288 +0x11a:  add    $0x2,%edx
081ea28b +0x11d:  mov    %ebx,%ecx
081ea28d +0x11f:  and    $0x1,%ecx
081ea290 +0x122:  test   %ecx,%ecx
081ea292 +0x124:  je     081ea299 <+0x12b>
081ea294 +0x126:  mov    %al,(%edx)
081ea296 +0x128:  add    $0x1,%edx
081ea299 +0x12b:  lea    -0x451(%ebp),%eax
081ea29f +0x131:  mov    %eax,-0x44(%ebp)
081ea2a2 +0x134:  movb   $0x0,-0x3d(%ebp)
081ea2a6 +0x138:  jmp    081ea5ff <+0x491>
081ea2ab +0x13d:  movl   $0x0,-0x60(%ebp)
081ea2b2 +0x144:  lea    -0x60(%ebp),%eax
081ea2b5 +0x147:  mov    %eax,0x4(%esp)
081ea2b9 +0x14b:  mov    0x10(%ebp),%eax
081ea2bc +0x14e:  mov    %eax,(%esp)
081ea2bf +0x151:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081ea2c4 +0x156:  xor    $0x1,%eax
081ea2c7 +0x159:  test   %al,%al
081ea2c9 +0x15b:  je     081ea2f4 <+0x186>
081ea2cb +0x15d:  movl   $0x0,0xc(%esp)
081ea2d3 +0x165:  movl   $0x0,0x8(%esp)
081ea2db +0x16d:  movl   $&_ZZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea2e3 +0x175:  movl   $0x6b4a,(%esp)
081ea2ea +0x17c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea2ef +0x181:  jmp    081ea616 <+0x4a8>
081ea2f4 +0x186:  mov    -0x60(%ebp),%eax
081ea2f7 +0x189:  cmp    $0x1f4,%eax
081ea2fc +0x18e:  jle    081ea327 <+0x1b9>
081ea2fe +0x190:  movl   $0x0,0xc(%esp)
081ea306 +0x198:  movl   $0x0,0x8(%esp)
081ea30e +0x1a0:  movl   $&_ZZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea316 +0x1a8:  movl   $0x6b4d,(%esp)
081ea31d +0x1af:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea322 +0x1b4:  jmp    081ea616 <+0x4a8>
081ea327 +0x1b9:  mov    -0x60(%ebp),%edx
081ea32a +0x1bc:  lea    -0x25d(%ebp),%eax
081ea330 +0x1c2:  mov    %edx,0x8(%esp)
081ea334 +0x1c6:  mov    %eax,0x4(%esp)
081ea338 +0x1ca:  mov    0x10(%ebp),%eax
081ea33b +0x1cd:  mov    %eax,(%esp)
081ea33e +0x1d0:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081ea343 +0x1d5:  xor    $0x1,%eax
081ea346 +0x1d8:  test   %al,%al
081ea348 +0x1da:  je     081ea373 <+0x205>
081ea34a +0x1dc:  movl   $0x0,0xc(%esp)
081ea352 +0x1e4:  movl   $0x0,0x8(%esp)
081ea35a +0x1ec:  movl   $&_ZZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea362 +0x1f4:  movl   $0x6b50,(%esp)
081ea369 +0x1fb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea36e +0x200:  jmp    081ea616 <+0x4a8>
081ea373 +0x205:  mov    -0x60(%ebp),%eax
081ea376 +0x208:  mov    %eax,-0x34(%ebp)
081ea379 +0x20b:  mov    -0x34(%ebp),%eax
081ea37c +0x20e:  mov    %eax,0xc(%esp)
081ea380 +0x212:  lea    -0x25d(%ebp),%eax
081ea386 +0x218:  mov    %eax,0x8(%esp)
081ea38a +0x21c:  lea    -0x5c(%ebp),%eax
081ea38d +0x21f:  mov    %eax,0x4(%esp)
081ea391 +0x223:  lea    -0x451(%ebp),%eax
081ea397 +0x229:  mov    %eax,(%esp)
081ea39a +0x22c:  call   08775ce0 <uncompress>
081ea39f +0x231:  mov    %eax,-0x30(%ebp)
081ea3a2 +0x234:  cmpl   $0x0,-0x30(%ebp)
081ea3a6 +0x238:  je     081ea3d1 <+0x263>
081ea3a8 +0x23a:  movl   $0x0,0xc(%esp)
081ea3b0 +0x242:  movl   $0x0,0x8(%esp)
081ea3b8 +0x24a:  movl   $&_ZZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea3c0 +0x252:  movl   $0x6b59,(%esp)
081ea3c7 +0x259:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ea3cc +0x25e:  jmp    081ea616 <+0x4a8>
081ea3d1 +0x263:  movl   $0x0,-0x64(%ebp)
081ea3d8 +0x26a:  movl   $0x0,-0x68(%ebp)
081ea3df +0x271:  mov    -0x44(%ebp),%eax
081ea3e2 +0x274:  mov    0x3(%eax),%eax
081ea3e5 +0x277:  mov    %eax,-0x2c(%ebp)
081ea3e8 +0x27a:  mov    -0x44(%ebp),%eax
081ea3eb +0x27d:  mov    0x7(%eax),%eax
081ea3ee +0x280:  mov    %eax,-0x28(%ebp)
081ea3f1 +0x283:  movl   $0x0,-0x24(%ebp)
081ea3f8 +0x28a:  lea    -0x69(%ebp),%eax
081ea3fb +0x28d:  mov    %eax,(%esp)
081ea3fe +0x290:  call   0823487c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f26
081ea403 +0x295:  mov    -0x44(%ebp),%eax
081ea406 +0x298:  movzbl 0x2(%eax),%eax
081ea40a +0x29c:  movzbl %al,%ecx
081ea40d +0x29f:  mov    -0x44(%ebp),%eax
081ea410 +0x2a2:  movzbl 0x1(%eax),%eax
081ea414 +0x2a6:  movsbl %al,%edx
081ea417 +0x2a9:  lea    -0x69(%ebp),%eax
081ea41a +0x2ac:  movl   $0x0,0x18(%esp)
081ea422 +0x2b4:  mov    -0x44(%ebp),%ebx
081ea425 +0x2b7:  mov    %ebx,0x14(%esp)
081ea429 +0x2bb:  lea    -0x64(%ebp),%ebx
081ea42c +0x2be:  mov    %ebx,0x10(%esp)
081ea430 +0x2c2:  lea    -0x68(%ebp),%ebx
081ea433 +0x2c5:  mov    %ebx,0xc(%esp)
081ea437 +0x2c9:  mov    %ecx,0x8(%esp)
081ea43b +0x2cd:  mov    %edx,0x4(%esp)
081ea43f +0x2d1:  mov    %eax,(%esp)
081ea442 +0x2d4:  call   0808df82 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv>  ; SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC(char, int, int*, int*, STSDCActiveStatusSyncDataSend*, void*)
081ea447 +0x2d9:  mov    -0x64(%ebp),%eax
081ea44a +0x2dc:  cmp    -0x2c(%ebp),%eax
081ea44d +0x2df:  jne    081ea45b <+0x2ed>
081ea44f +0x2e1:  mov    -0x68(%ebp),%eax
081ea452 +0x2e4:  cmp    -0x28(%ebp),%eax
081ea455 +0x2e7:  je     081ea50e <+0x3a0>
081ea45b +0x2ed:  mov    0xc(%ebp),%eax
081ea45e +0x2f0:  mov    %eax,(%esp)
081ea461 +0x2f3:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ea466 +0x2f8:  movl   $0x0,0x14(%esp)
081ea46e +0x300:  movl   $0x0,0x10(%esp)
081ea476 +0x308:  movl   $0x1,0xc(%esp)
081ea47e +0x310:  movl   $0x25d,0x8(%esp)
081ea486 +0x318:  mov    0xc(%ebp),%edx
081ea489 +0x31b:  mov    %edx,0x4(%esp)
081ea48d +0x31f:  mov    %eax,(%esp)
081ea490 +0x322:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ea495 +0x327:  mov    -0x68(%ebp),%eax
081ea498 +0x32a:  mov    %eax,-0x464(%ebp)
081ea49e +0x330:  mov    -0x64(%ebp),%edi
081ea4a1 +0x333:  mov    -0x44(%ebp),%eax
081ea4a4 +0x336:  movzbl (%eax),%eax
081ea4a7 +0x339:  movsbl %al,%esi
081ea4aa +0x33c:  mov    -0x44(%ebp),%eax
081ea4ad +0x33f:  movzbl 0x1(%eax),%eax
081ea4b1 +0x343:  movsbl %al,%ebx
081ea4b4 +0x346:  movl   $0x0,0xc(%esp)
081ea4bc +0x34e:  movl   $0x6b6d,0x8(%esp)
081ea4c4 +0x356:  movl   $&_ZZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ea4cc +0x35e:  lea    -0x54(%ebp),%eax
081ea4cf +0x361:  mov    %eax,(%esp)
081ea4d2 +0x364:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ea4d7 +0x369:  mov    -0x28(%ebp),%eax
081ea4da +0x36c:  mov    %eax,0x1c(%esp)
081ea4de +0x370:  mov    -0x2c(%ebp),%eax
081ea4e1 +0x373:  mov    %eax,0x18(%esp)
081ea4e5 +0x377:  mov    -0x464(%ebp),%eax
081ea4eb +0x37d:  mov    %eax,0x14(%esp)
081ea4ef +0x381:  mov    %edi,0x10(%esp)
081ea4f3 +0x385:  mov    %esi,0xc(%esp)
081ea4f7 +0x389:  mov    %ebx,0x8(%esp)
081ea4fb +0x38d:  movl   $"[TYPE : %d][EVENT : %d] [Svr] Damage : %d, Duration : %d, [Client] Damage : %d, Duration : %d",0x4(%esp)
081ea503 +0x395:  lea    -0x54(%ebp),%eax
081ea506 +0x398:  mov    %eax,(%esp)
081ea509 +0x39b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ea50e +0x3a0:  mov    0xc(%ebp),%eax
081ea511 +0x3a3:  mov    %eax,(%esp)
081ea514 +0x3a6:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ea519 +0x3ab:  movswl %ax,%ebx
081ea51c +0x3ae:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ea521 +0x3b3:  mov    %ebx,0x4(%esp)
081ea525 +0x3b7:  mov    %eax,(%esp)
081ea528 +0x3ba:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ea52d +0x3bf:  mov    %eax,-0x20(%ebp)
081ea530 +0x3c2:  cmpl   $0x0,-0x20(%ebp)
081ea534 +0x3c6:  je     081ea5f0 <+0x482>
081ea53a +0x3cc:  movl   $0x0,-0x1c(%ebp)
081ea541 +0x3d3:  mov    -0x44(%ebp),%eax
081ea544 +0x3d6:  movzbl 0x1(%eax),%eax
081ea548 +0x3da:  cmp    $0xb,%al
081ea54a +0x3dc:  jne    081ea58d <+0x41f>
081ea54c +0x3de:  mov    -0x44(%ebp),%eax
081ea54f +0x3e1:  mov    0x3(%eax),%eax
081ea552 +0x3e4:  mov    %eax,-0x45c(%ebp)
081ea558 +0x3ea:  fildl  -0x45c(%ebp)
081ea55e +0x3f0:  flds   &BLEEDING_DAMAGE_IN_ACTION_RATE
081ea564 +0x3f6:  fmulp  %st,%st(1)
081ea566 +0x3f8:  fnstcw -0x45e(%ebp)
081ea56c +0x3fe:  movzwl -0x45e(%ebp),%eax
081ea573 +0x405:  mov    $0xc,%ah
081ea575 +0x407:  mov    %ax,-0x460(%ebp)
081ea57c +0x40e:  fldcw  -0x460(%ebp)
081ea582 +0x414:  fistpl -0x1c(%ebp)
081ea585 +0x417:  fldcw  -0x45e(%ebp)
081ea58b +0x41d:  jmp    081ea596 <+0x428>
081ea58d +0x41f:  mov    -0x44(%ebp),%eax
081ea590 +0x422:  mov    0x3(%eax),%eax
081ea593 +0x425:  mov    %eax,-0x1c(%ebp)
081ea596 +0x428:  mov    -0x44(%ebp),%eax
081ea599 +0x42b:  mov    0x25(%eax),%eax
081ea59c +0x42e:  mov    -0x20(%ebp),%edx
081ea59f +0x431:  add    $0xb24,%edx
081ea5a5 +0x437:  mov    %eax,0x4(%esp)
081ea5a9 +0x43b:  mov    %edx,(%esp)
081ea5ac +0x43e:  call   08308f4e <_ZN13CBattle_Field19SetDamagedPacketCntEi>  ; CBattle_Field::SetDamagedPacketCnt(int)
081ea5b1 +0x443:  mov    -0x44(%ebp),%eax
081ea5b4 +0x446:  mov    0x25(%eax),%eax
081ea5b7 +0x449:  mov    -0x20(%ebp),%edx
081ea5ba +0x44c:  lea    0xb24(%edx),%ecx
081ea5c0 +0x452:  mov    -0x1c(%ebp),%edx
081ea5c3 +0x455:  mov    %edx,0x8(%esp)
081ea5c7 +0x459:  mov    %eax,0x4(%esp)
081ea5cb +0x45d:  mov    %ecx,(%esp)
081ea5ce +0x460:  call   08308ff8 <_ZN13CBattle_Field14SetDamageValueEii>  ; CBattle_Field::SetDamageValue(int, int)
081ea5d3 +0x465:  jmp    081ea5f0 <+0x482>
081ea5d5 +0x467:  mov    %edx,%ebx
081ea5d7 +0x469:  mov    %eax,%esi
081ea5d9 +0x46b:  lea    -0x69(%ebp),%eax
081ea5dc +0x46e:  mov    %eax,(%esp)
081ea5df +0x471:  call   08234890 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f3a
081ea5e4 +0x476:  mov    %esi,%eax
081ea5e6 +0x478:  mov    %ebx,%edx
081ea5e8 +0x47a:  mov    %eax,(%esp)
081ea5eb +0x47d:  call   08ae3750 <_Unwind_Resume>
081ea5f0 +0x482:  lea    -0x69(%ebp),%eax
081ea5f3 +0x485:  mov    %eax,(%esp)
081ea5f6 +0x488:  call   08234890 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f3a
081ea5fb +0x48d:  addb   $0x1,-0x3d(%ebp)
081ea5ff +0x491:  movzbl -0x55(%ebp),%eax
081ea603 +0x495:  cmp    %al,-0x3d(%ebp)
081ea606 +0x498:  setb   %al
081ea609 +0x49b:  test   %al,%al
081ea60b +0x49d:  jne    081ea2ab <+0x13d>
081ea611 +0x4a3:  mov    $0x0,%eax
081ea616 +0x4a8:  add    $0x47c,%esp
081ea61c +0x4ae:  pop    %ebx
081ea61d +0x4af:  pop    %esi
081ea61e +0x4b0:  pop    %edi
081ea61f +0x4b1:  pop    %ebp
081ea620 +0x4b2:  ret
081ea621 +0x4b3:  nop
```

## 反编译 C

```c
// Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig @ 0x81ea16e

/* WARNING: Type propagation algorithm not settling */
/* Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig
          (Dispatcher_SDC_ActiveStatus_Damage_Check *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  CHackAnalyzer *pCVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_455;
  char local_454 [499];
  char local_261;
  char local_260 [499];
  SDCActiveStatusSyncServer local_6d;
  int local_6c;
  int local_68;
  int local_64 [2];
  byte local_59;
  cMyTrace local_58 [16];
  char *local_48;
  byte local_41;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  local_48 = (char *)0x0;
  local_59 = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_59);
  if (cVar3 == '\x01') {
    local_40 = 500;
    local_3c = 500;
    local_64[1] = 500;
    local_38 = 500;
    pcVar8 = &local_261;
    uVar9 = 500;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_261 = '\0';
      pcVar8 = local_260;
      uVar9 = 499;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (bVar10) {
      *pcVar8 = '\0';
    }
    pcVar8 = &local_455;
    uVar9 = 500;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_455 = '\0';
      pcVar8 = local_454;
      uVar9 = 499;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (bVar10) {
      *pcVar8 = '\0';
    }
    local_48 = &local_455;
    for (local_41 = 0; local_41 < local_59; local_41 = local_41 + 1) {
      local_64[0] = 0;
      cVar3 = PacketBuf::get_int(param_2,local_64);
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x6b4a,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      if (500 < local_64[0]) {
        uVar4 = LineFunc(0x6b4d,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      cVar3 = PacketBuf::get_binary(param_2,&local_261,local_64[0]);
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x6b50,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      local_38 = local_64[0];
      local_34 = uncompress(&local_455,local_64 + 1,&local_261,local_64[0]);
      if (local_34 != 0) {
        uVar4 = LineFunc(0x6b59,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      local_68 = 0;
      local_6c = 0;
      local_30 = *(int *)(local_48 + 3);
      local_2c = *(int *)(local_48 + 7);
      local_28 = 0;
      SDCActiveStatusSyncServer::SDCActiveStatusSyncServer(&local_6d);
      uVar4 = 0;
                    /* try { // try from 081ea442 to 081ea5d2 has its CatchHandler @ 081ea5d5 */
      SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC
                ((char)&local_6d,(int)local_48[1],(int *)(uint)(byte)local_48[2],&local_6c,
                 (STSDCActiveStatusSyncDataSend *)&local_68,local_48);
      if ((local_68 != local_30) || (local_6c != local_2c)) {
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x25d,1,0,0,uVar4);
        iVar2 = local_68;
        iVar6 = local_6c;
        cVar3 = *local_48;
        cVar1 = local_48[1];
        cMyTrace::cMyTrace(local_58,
                           "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                           ,0x6b6d,0);
        cMyTrace::operator()
                  (local_58,
                   "[TYPE : %d][EVENT : %d] [Svr] Damage : %d, Duration : %d, [Client] Damage : %d, Duration : %d"
                   ,(int)cVar1,(int)cVar3,iVar2,iVar6,local_30,local_2c);
      }
      CUser::GetPartyIndex(param_1);
      iVar6 = G_CGameManager();
      local_24 = CGameManager::GetParty(iVar6);
      if (local_24 != 0) {
        if (local_48[1] == '\v') {
          local_20 = (int)ROUND(BLEEDING_DAMAGE_IN_ACTION_RATE * (float)*(int *)(local_48 + 3));
        }
        else {
          local_20 = *(int *)(local_48 + 3);
        }
        CBattle_Field::SetDamagedPacketCnt(local_24 + 0xb24);
        CBattle_Field::SetDamageValue
                  ((CBattle_Field *)(local_24 + 0xb24),*(int *)(local_48 + 0x25),local_20);
      }
      SDCActiveStatusSyncServer::~SDCActiveStatusSyncServer(&local_6d);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = LineFunc(0x6b36,
                     "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar4;
}
```
