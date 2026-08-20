# dispatch_sig

`_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeMemberEnterOk` | `0x084cd218` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cd218  _ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser*, char*, int)
# range [0x084cd218, 0x084cd5c9]
084cd218 +0x000:  push   %ebp
084cd219 +0x001:  mov    %esp,%ebp
084cd21b +0x003:  push   %esi
084cd21c +0x004:  push   %ebx
084cd21d +0x005:  sub    $0x50,%esp
084cd220 +0x008:  mov    0xc(%ebp),%eax
084cd223 +0x00b:  mov    %eax,(%esp)
084cd226 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cd22b +0x013:  test   %eax,%eax
084cd22d +0x015:  sete   %al
084cd230 +0x018:  test   %al,%al
084cd232 +0x01a:  je     084cd23e <+0x26>
084cd234 +0x01c:  mov    $0x0,%ebx
084cd239 +0x021:  jmp    084cd5c1 <+0x3a9>
084cd23e +0x026:  mov    0x10(%ebp),%eax
084cd241 +0x029:  mov    %eax,-0x18(%ebp)
084cd244 +0x02c:  movl   $0xffffffff,0x4(%esp)
084cd24c +0x034:  mov    0xc(%ebp),%eax
084cd24f +0x037:  mov    %eax,(%esp)
084cd252 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd257 +0x03f:  mov    %eax,%edx
084cd259 +0x041:  mov    -0x18(%ebp),%eax
084cd25c +0x044:  mov    0x11(%eax),%eax
084cd25f +0x047:  cmp    %eax,%edx
084cd261 +0x049:  setne  %al
084cd264 +0x04c:  test   %al,%al
084cd266 +0x04e:  je     084cd2bf <+0xa7>
084cd268 +0x050:  mov    -0x18(%ebp),%eax
084cd26b +0x053:  mov    0x11(%eax),%ebx
084cd26e +0x056:  movl   $0xffffffff,0x4(%esp)
084cd276 +0x05e:  mov    0xc(%ebp),%eax
084cd279 +0x061:  mov    %eax,(%esp)
084cd27c +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cd281 +0x069:  mov    %ebx,0x18(%esp)
084cd285 +0x06d:  mov    %eax,0x14(%esp)
084cd289 +0x071:  movl   $"MEMBER : Inter_MonitorNoticeMemberEnterOk::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cd291 +0x079:  movl   $0x288b,0xc(%esp)
084cd299 +0x081:  movl   $&_ZZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cd2a1 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cd2a9 +0x091:  movl   $0x1,(%esp)
084cd2b0 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cd2b5 +0x09d:  mov    $0x0,%ebx
084cd2ba +0x0a2:  jmp    084cd5c1 <+0x3a9>
084cd2bf +0x0a7:  mov    -0x18(%ebp),%eax
084cd2c2 +0x0aa:  movzbl 0xa(%eax),%eax
084cd2c6 +0x0ae:  cmp    $0x2,%al
084cd2c8 +0x0b0:  jne    084cd3d3 <+0x1bb>
084cd2ce +0x0b6:  lea    -0x30(%ebp),%eax
084cd2d1 +0x0b9:  mov    %eax,(%esp)
084cd2d4 +0x0bc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cd2d9 +0x0c1:  movl   $0x4a,0x8(%esp)
084cd2e1 +0x0c9:  movl   $0x0,0x4(%esp)
084cd2e9 +0x0d1:  lea    -0x30(%ebp),%eax
084cd2ec +0x0d4:  mov    %eax,(%esp)
084cd2ef +0x0d7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cd2f4 +0x0dc:  mov    -0x18(%ebp),%eax
084cd2f7 +0x0df:  movzbl 0xa(%eax),%eax
084cd2fb +0x0e3:  movzbl %al,%eax
084cd2fe +0x0e6:  mov    %eax,0x4(%esp)
084cd302 +0x0ea:  lea    -0x30(%ebp),%eax
084cd305 +0x0ed:  mov    %eax,(%esp)
084cd308 +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd30d +0x0f5:  mov    -0x18(%ebp),%eax
084cd310 +0x0f8:  movzbl 0xb(%eax),%eax
084cd314 +0x0fc:  movzbl %al,%eax
084cd317 +0x0ff:  mov    %eax,0x4(%esp)
084cd31b +0x103:  lea    -0x30(%ebp),%eax
084cd31e +0x106:  mov    %eax,(%esp)
084cd321 +0x109:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd326 +0x10e:  mov    -0x18(%ebp),%eax
084cd329 +0x111:  movzbl 0x15(%eax),%eax
084cd32d +0x115:  movzbl %al,%eax
084cd330 +0x118:  mov    %eax,0x4(%esp)
084cd334 +0x11c:  lea    -0x30(%ebp),%eax
084cd337 +0x11f:  mov    %eax,(%esp)
084cd33a +0x122:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd33f +0x127:  mov    -0x18(%ebp),%eax
084cd342 +0x12a:  add    $0x16,%eax
084cd345 +0x12d:  mov    %eax,(%esp)
084cd348 +0x130:  call   0807e3b0 <_init+0xca8>
084cd34d +0x135:  mov    %eax,-0x10(%ebp)
084cd350 +0x138:  mov    -0x10(%ebp),%eax
084cd353 +0x13b:  mov    %eax,0x4(%esp)
084cd357 +0x13f:  lea    -0x30(%ebp),%eax
084cd35a +0x142:  mov    %eax,(%esp)
084cd35d +0x145:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cd362 +0x14a:  mov    -0x18(%ebp),%eax
084cd365 +0x14d:  lea    0x16(%eax),%edx
084cd368 +0x150:  mov    -0x10(%ebp),%eax
084cd36b +0x153:  mov    %eax,0x8(%esp)
084cd36f +0x157:  mov    %edx,0x4(%esp)
084cd373 +0x15b:  lea    -0x30(%ebp),%eax
084cd376 +0x15e:  mov    %eax,(%esp)
084cd379 +0x161:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cd37e +0x166:  movl   $0x1,0x4(%esp)
084cd386 +0x16e:  lea    -0x30(%ebp),%eax
084cd389 +0x171:  mov    %eax,(%esp)
084cd38c +0x174:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cd391 +0x179:  lea    -0x30(%ebp),%eax
084cd394 +0x17c:  mov    %eax,0x4(%esp)
084cd398 +0x180:  mov    0xc(%ebp),%eax
084cd39b +0x183:  mov    %eax,(%esp)
084cd39e +0x186:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cd3a3 +0x18b:  mov    $0x0,%ebx
084cd3a8 +0x190:  lea    -0x30(%ebp),%eax
084cd3ab +0x193:  mov    %eax,(%esp)
084cd3ae +0x196:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd3b3 +0x19b:  jmp    084cd5c1 <+0x3a9>
084cd3b8 +0x1a0:  mov    %edx,%ebx
084cd3ba +0x1a2:  mov    %eax,%esi
084cd3bc +0x1a4:  lea    -0x30(%ebp),%eax
084cd3bf +0x1a7:  mov    %eax,(%esp)
084cd3c2 +0x1aa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd3c7 +0x1af:  mov    %esi,%eax
084cd3c9 +0x1b1:  mov    %ebx,%edx
084cd3cb +0x1b3:  mov    %eax,(%esp)
084cd3ce +0x1b6:  call   08ae3750 <_Unwind_Resume>
084cd3d3 +0x1bb:  mov    -0x18(%ebp),%eax
084cd3d6 +0x1be:  movzbl 0xa(%eax),%eax
084cd3da +0x1c2:  cmp    $0x3,%al
084cd3dc +0x1c4:  jne    084cd40d <+0x1f5>
084cd3de +0x1c6:  mov    -0x18(%ebp),%eax
084cd3e1 +0x1c9:  add    $0x16,%eax
084cd3e4 +0x1cc:  movl   $0x6,0xc(%esp)
084cd3ec +0x1d4:  movl   $0x1,0x8(%esp)
084cd3f4 +0x1dc:  mov    %eax,0x4(%esp)
084cd3f8 +0x1e0:  mov    0xc(%ebp),%eax
084cd3fb +0x1e3:  mov    %eax,(%esp)
084cd3fe +0x1e6:  call   0868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>  ; CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
084cd403 +0x1eb:  mov    $0x0,%ebx
084cd408 +0x1f0:  jmp    084cd5c1 <+0x3a9>
084cd40d +0x1f5:  mov    -0x18(%ebp),%eax
084cd410 +0x1f8:  movzbl 0xa(%eax),%eax
084cd414 +0x1fc:  cmp    $0x4,%al
084cd416 +0x1fe:  jne    084cd447 <+0x22f>
084cd418 +0x200:  mov    -0x18(%ebp),%eax
084cd41b +0x203:  add    $0x16,%eax
084cd41e +0x206:  movl   $0x6,0xc(%esp)
084cd426 +0x20e:  movl   $0x0,0x8(%esp)
084cd42e +0x216:  mov    %eax,0x4(%esp)
084cd432 +0x21a:  mov    0xc(%ebp),%eax
084cd435 +0x21d:  mov    %eax,(%esp)
084cd438 +0x220:  call   0868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>  ; CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
084cd43d +0x225:  mov    $0x0,%ebx
084cd442 +0x22a:  jmp    084cd5c1 <+0x3a9>
084cd447 +0x22f:  mov    -0x18(%ebp),%eax
084cd44a +0x232:  movzbl 0xb(%eax),%eax
084cd44e +0x236:  cmp    $0x1,%al
084cd450 +0x238:  jne    084cd4aa <+0x292>
084cd452 +0x23a:  mov    -0x18(%ebp),%eax
084cd455 +0x23d:  movzbl 0xc(%eax),%eax
084cd459 +0x241:  cmp    $0x1,%al
084cd45b +0x243:  jne    084cd4aa <+0x292>
084cd45d +0x245:  mov    -0x18(%ebp),%eax
084cd460 +0x248:  mov    0x35(%eax),%edx
084cd463 +0x24b:  mov    0xc(%ebp),%eax
084cd466 +0x24e:  mov    %edx,0x4(%esp)
084cd46a +0x252:  mov    %eax,(%esp)
084cd46d +0x255:  call   084ec0fa <_GLOBAL__I__Z7getUserj+0x30ac>  ; global constructors keyed to getUser(unsigned int)+0x30ac
084cd472 +0x25a:  mov    -0x18(%ebp),%eax
084cd475 +0x25d:  movzbl 0x34(%eax),%eax
084cd479 +0x261:  movzbl %al,%edx
084cd47c +0x264:  mov    0xc(%ebp),%eax
084cd47f +0x267:  mov    %edx,0x4(%esp)
084cd483 +0x26b:  mov    %eax,(%esp)
084cd486 +0x26e:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084cd48b +0x273:  mov    0xc(%ebp),%eax
084cd48e +0x276:  mov    %eax,(%esp)
084cd491 +0x279:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084cd496 +0x27e:  mov    %eax,-0xc(%ebp)
084cd499 +0x281:  cmpl   $0x0,-0xc(%ebp)
084cd49d +0x285:  je     084cd4aa <+0x292>
084cd49f +0x287:  mov    -0xc(%ebp),%eax
084cd4a2 +0x28a:  mov    %eax,(%esp)
084cd4a5 +0x28d:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
084cd4aa +0x292:  mov    -0x18(%ebp),%eax
084cd4ad +0x295:  mov    0x11(%eax),%edx
084cd4b0 +0x298:  mov    0xc(%ebp),%eax
084cd4b3 +0x29b:  mov    %edx,0x4(%esp)
084cd4b7 +0x29f:  mov    %eax,(%esp)
084cd4ba +0x2a2:  call   084ec0dc <_GLOBAL__I__Z7getUserj+0x308e>  ; global constructors keyed to getUser(unsigned int)+0x308e
084cd4bf +0x2a7:  lea    -0x24(%ebp),%eax
084cd4c2 +0x2aa:  mov    %eax,(%esp)
084cd4c5 +0x2ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cd4ca +0x2b2:  movl   $0x4a,0x8(%esp)
084cd4d2 +0x2ba:  movl   $0x0,0x4(%esp)
084cd4da +0x2c2:  lea    -0x24(%ebp),%eax
084cd4dd +0x2c5:  mov    %eax,(%esp)
084cd4e0 +0x2c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cd4e5 +0x2cd:  mov    -0x18(%ebp),%eax
084cd4e8 +0x2d0:  movzbl 0xa(%eax),%eax
084cd4ec +0x2d4:  movzbl %al,%eax
084cd4ef +0x2d7:  mov    %eax,0x4(%esp)
084cd4f3 +0x2db:  lea    -0x24(%ebp),%eax
084cd4f6 +0x2de:  mov    %eax,(%esp)
084cd4f9 +0x2e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd4fe +0x2e6:  mov    -0x18(%ebp),%eax
084cd501 +0x2e9:  movzbl 0xb(%eax),%eax
084cd505 +0x2ed:  movzbl %al,%eax
084cd508 +0x2f0:  mov    %eax,0x4(%esp)
084cd50c +0x2f4:  lea    -0x24(%ebp),%eax
084cd50f +0x2f7:  mov    %eax,(%esp)
084cd512 +0x2fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd517 +0x2ff:  mov    -0x18(%ebp),%eax
084cd51a +0x302:  movzbl 0x15(%eax),%eax
084cd51e +0x306:  movzbl %al,%eax
084cd521 +0x309:  mov    %eax,0x4(%esp)
084cd525 +0x30d:  lea    -0x24(%ebp),%eax
084cd528 +0x310:  mov    %eax,(%esp)
084cd52b +0x313:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cd530 +0x318:  mov    -0x18(%ebp),%eax
084cd533 +0x31b:  add    $0x16,%eax
084cd536 +0x31e:  mov    %eax,(%esp)
084cd539 +0x321:  call   0807e3b0 <_init+0xca8>
084cd53e +0x326:  mov    %eax,-0x14(%ebp)
084cd541 +0x329:  mov    -0x14(%ebp),%eax
084cd544 +0x32c:  mov    %eax,0x4(%esp)
084cd548 +0x330:  lea    -0x24(%ebp),%eax
084cd54b +0x333:  mov    %eax,(%esp)
084cd54e +0x336:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cd553 +0x33b:  mov    -0x18(%ebp),%eax
084cd556 +0x33e:  lea    0x16(%eax),%edx
084cd559 +0x341:  mov    -0x14(%ebp),%eax
084cd55c +0x344:  mov    %eax,0x8(%esp)
084cd560 +0x348:  mov    %edx,0x4(%esp)
084cd564 +0x34c:  lea    -0x24(%ebp),%eax
084cd567 +0x34f:  mov    %eax,(%esp)
084cd56a +0x352:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cd56f +0x357:  movl   $0x1,0x4(%esp)
084cd577 +0x35f:  lea    -0x24(%ebp),%eax
084cd57a +0x362:  mov    %eax,(%esp)
084cd57d +0x365:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cd582 +0x36a:  lea    -0x24(%ebp),%eax
084cd585 +0x36d:  mov    %eax,0x4(%esp)
084cd589 +0x371:  mov    0xc(%ebp),%eax
084cd58c +0x374:  mov    %eax,(%esp)
084cd58f +0x377:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cd594 +0x37c:  mov    $0x0,%ebx
084cd599 +0x381:  lea    -0x24(%ebp),%eax
084cd59c +0x384:  mov    %eax,(%esp)
084cd59f +0x387:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd5a4 +0x38c:  jmp    084cd5c1 <+0x3a9>
084cd5a6 +0x38e:  mov    %edx,%ebx
084cd5a8 +0x390:  mov    %eax,%esi
084cd5aa +0x392:  lea    -0x24(%ebp),%eax
084cd5ad +0x395:  mov    %eax,(%esp)
084cd5b0 +0x398:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cd5b5 +0x39d:  mov    %esi,%eax
084cd5b7 +0x39f:  mov    %ebx,%edx
084cd5b9 +0x3a1:  mov    %eax,(%esp)
084cd5bc +0x3a4:  call   08ae3750 <_Unwind_Resume>
084cd5c1 +0x3a9:  mov    %ebx,%eax
084cd5c3 +0x3ab:  add    $0x50,%esp
084cd5c6 +0x3ae:  pop    %ebx
084cd5c7 +0x3af:  pop    %esi
084cd5c8 +0x3b0:  pop    %ebp
084cd5c9 +0x3b1:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeMemberEnterOk::dispatch_sig @ 0x84cd218

/* Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_34 [12];
  PacketGuard local_28 [12];
  int local_1c;
  size_t local_18;
  size_t local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_1c = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_1c + 0x11)) {
      if (*(char *)(local_1c + 10) == '\x02') {
        PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084cd2ef to 084cd3a2 has its CatchHandler @ 084cd3b8 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x4a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_1c + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_1c + 0xb))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_1c + 0x15));
        local_14 = strlen((char *)(local_1c + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_34,(char *)(local_1c + 0x16),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        CUser::Send((CUser *)param_2,local_34);
        PacketGuard::~PacketGuard(local_34);
      }
      else if (*(char *)(local_1c + 10) == '\x03') {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_1c + 0x16,1,6);
      }
      else if (*(char *)(local_1c + 10) == '\x04') {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_1c + 0x16,0,6);
      }
      else {
        if ((*(char *)(local_1c + 0xb) == '\x01') && (*(char *)(local_1c + 0xc) == '\x01')) {
          CUserCharacInfo::set_connect_upper_member
                    ((CUserCharacInfo *)param_2,*(uint *)(local_1c + 0x35));
          CUserCharacInfo::set_uppermember_exp_level
                    ((CUserCharacInfo *)param_2,*(uchar *)(local_1c + 0x34));
          local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
          if (local_10 != (CParty *)0x0) {
            CParty::send_party_realtime_info(local_10);
          }
        }
        CUserCharacInfo::set_charac_memberkey((CUserCharacInfo *)param_2,*(uint *)(local_1c + 0x11))
        ;
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084cd4e0 to 084cd593 has its CatchHandler @ 084cd5a6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x4a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0xb))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0x15));
        local_18 = strlen((char *)(local_1c + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_18);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_28,(char *)(local_1c + 0x16),local_18);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send((CUser *)param_2,local_28);
        PacketGuard::~PacketGuard(local_28);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_1c + 0x11);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser*, char*, int)",
                 0x288b,
                 "MEMBER : Inter_MonitorNoticeMemberEnterOk::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```
