# dispatch_sig

`_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci`

`Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorPayTaxToUpper` | `0x084ce164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce164  _ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci
#           Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int)
# range [0x084ce164, 0x084ce547]
084ce164 +0x000:  push   %ebp
084ce165 +0x001:  mov    %esp,%ebp
084ce167 +0x003:  push   %esi
084ce168 +0x004:  push   %ebx
084ce169 +0x005:  sub    $0x70,%esp
084ce16c +0x008:  mov    0xc(%ebp),%eax
084ce16f +0x00b:  mov    %eax,(%esp)
084ce172 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ce177 +0x013:  test   %eax,%eax
084ce179 +0x015:  sete   %al
084ce17c +0x018:  test   %al,%al
084ce17e +0x01a:  je     084ce18a <+0x26>
084ce180 +0x01c:  mov    $0x0,%eax
084ce185 +0x021:  jmp    084ce541 <+0x3dd>
084ce18a +0x026:  mov    0x10(%ebp),%eax
084ce18d +0x029:  mov    %eax,-0x28(%ebp)
084ce190 +0x02c:  mov    0xc(%ebp),%eax
084ce193 +0x02f:  mov    %eax,(%esp)
084ce196 +0x032:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
084ce19b +0x037:  test   %eax,%eax
084ce19d +0x039:  sete   %al
084ce1a0 +0x03c:  test   %al,%al
084ce1a2 +0x03e:  je     084ce1f1 <+0x8d>
084ce1a4 +0x040:  movl   $0xffffffff,0x4(%esp)
084ce1ac +0x048:  mov    0xc(%ebp),%eax
084ce1af +0x04b:  mov    %eax,(%esp)
084ce1b2 +0x04e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ce1b7 +0x053:  mov    %eax,0x14(%esp)
084ce1bb +0x057:  movl   $"MEMBER : Inter_MonitorPayTaxToUpper::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)",0x10(%esp)
084ce1c3 +0x05f:  movl   $0x29e7,0xc(%esp)
084ce1cb +0x067:  movl   $&_ZZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ce1d3 +0x06f:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ce1db +0x077:  movl   $0x1,(%esp)
084ce1e2 +0x07e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ce1e7 +0x083:  mov    $0x0,%eax
084ce1ec +0x088:  jmp    084ce541 <+0x3dd>
084ce1f1 +0x08d:  movl   $0xffffffff,0x4(%esp)
084ce1f9 +0x095:  mov    0xc(%ebp),%eax
084ce1fc +0x098:  mov    %eax,(%esp)
084ce1ff +0x09b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ce204 +0x0a0:  mov    %eax,%edx
084ce206 +0x0a2:  mov    -0x28(%ebp),%eax
084ce209 +0x0a5:  mov    0xe(%eax),%eax
084ce20c +0x0a8:  cmp    %eax,%edx
084ce20e +0x0aa:  setne  %al
084ce211 +0x0ad:  test   %al,%al
084ce213 +0x0af:  je     084ce26c <+0x108>
084ce215 +0x0b1:  mov    -0x28(%ebp),%eax
084ce218 +0x0b4:  mov    0xe(%eax),%ebx
084ce21b +0x0b7:  movl   $0xffffffff,0x4(%esp)
084ce223 +0x0bf:  mov    0xc(%ebp),%eax
084ce226 +0x0c2:  mov    %eax,(%esp)
084ce229 +0x0c5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ce22e +0x0ca:  mov    %ebx,0x18(%esp)
084ce232 +0x0ce:  mov    %eax,0x14(%esp)
084ce236 +0x0d2:  movl   $"MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ce23e +0x0da:  movl   $0x29ed,0xc(%esp)
084ce246 +0x0e2:  movl   $&_ZZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ce24e +0x0ea:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ce256 +0x0f2:  movl   $0x1,(%esp)
084ce25d +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ce262 +0x0fe:  mov    $0x0,%eax
084ce267 +0x103:  jmp    084ce541 <+0x3dd>
084ce26c +0x108:  mov    -0x28(%ebp),%eax
084ce26f +0x10b:  mov    0x12(%eax),%eax
084ce272 +0x10e:  test   %eax,%eax
084ce274 +0x110:  je     084ce2ad <+0x149>
084ce276 +0x112:  mov    -0x28(%ebp),%eax
084ce279 +0x115:  mov    0x12(%eax),%eax
084ce27c +0x118:  mov    %eax,%ebx
084ce27e +0x11a:  mov    0xc(%ebp),%eax
084ce281 +0x11d:  mov    %eax,(%esp)
084ce284 +0x120:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ce289 +0x125:  movl   $0x0,0x10(%esp)
084ce291 +0x12d:  movl   $0x1,0xc(%esp)
084ce299 +0x135:  movl   $0xa,0x8(%esp)
084ce2a1 +0x13d:  mov    %ebx,0x4(%esp)
084ce2a5 +0x141:  mov    %eax,(%esp)
084ce2a8 +0x144:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084ce2ad +0x149:  movl   $0x0,-0x24(%ebp)
084ce2b4 +0x150:  movb   $0x0,-0x1d(%ebp)
084ce2b8 +0x154:  mov    -0x28(%ebp),%eax
084ce2bb +0x157:  mov    0x16(%eax),%eax
084ce2be +0x15a:  test   %eax,%eax
084ce2c0 +0x15c:  je     084ce3d8 <+0x274>
084ce2c6 +0x162:  mov    0xc(%ebp),%eax
084ce2c9 +0x165:  mov    %eax,(%esp)
084ce2cc +0x168:  call   084ebfb2 <_GLOBAL__I__Z7getUserj+0x2f64>  ; global constructors keyed to getUser(unsigned int)+0x2f64
084ce2d1 +0x16d:  mov    %ax,-0x1c(%ebp)
084ce2d5 +0x171:  mov    0xc(%ebp),%eax
084ce2d8 +0x174:  mov    %eax,(%esp)
084ce2db +0x177:  call   084ec824 <_GLOBAL__I__Z7getUserj+0x37d6>  ; global constructors keyed to getUser(unsigned int)+0x37d6
084ce2e0 +0x17c:  mov    %ax,-0x1a(%ebp)
084ce2e4 +0x180:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ce2e9 +0x185:  mov    0x48f4(%eax),%eax
084ce2ef +0x18b:  mov    %eax,-0x18(%ebp)
084ce2f2 +0x18e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ce2f7 +0x193:  mov    0x48f8(%eax),%eax
084ce2fd +0x199:  mov    %eax,-0x14(%ebp)
084ce300 +0x19c:  movl   $0x0,-0x10(%ebp)
084ce307 +0x1a3:  movswl -0x1c(%ebp),%eax
084ce30b +0x1a7:  mov    -0x18(%ebp),%edx
084ce30e +0x1aa:  mov    %edx,%ecx
084ce310 +0x1ac:  sub    %eax,%ecx
084ce312 +0x1ae:  mov    %ecx,%eax
084ce314 +0x1b0:  mov    %eax,-0x30(%ebp)
084ce317 +0x1b3:  movswl -0x1a(%ebp),%eax
084ce31b +0x1b7:  mov    -0x14(%ebp),%edx
084ce31e +0x1ba:  mov    %edx,%ecx
084ce320 +0x1bc:  sub    %eax,%ecx
084ce322 +0x1be:  mov    %ecx,%eax
084ce324 +0x1c0:  mov    %eax,-0x34(%ebp)
084ce327 +0x1c3:  lea    -0x34(%ebp),%eax
084ce32a +0x1c6:  mov    %eax,0x4(%esp)
084ce32e +0x1ca:  lea    -0x30(%ebp),%eax
084ce331 +0x1cd:  mov    %eax,(%esp)
084ce334 +0x1d0:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084ce339 +0x1d5:  mov    (%eax),%eax
084ce33b +0x1d7:  mov    %eax,-0x38(%ebp)
084ce33e +0x1da:  movl   $0x0,-0x2c(%ebp)
084ce345 +0x1e1:  lea    -0x38(%ebp),%eax
084ce348 +0x1e4:  mov    %eax,0x4(%esp)
084ce34c +0x1e8:  lea    -0x2c(%ebp),%eax
084ce34f +0x1eb:  mov    %eax,(%esp)
084ce352 +0x1ee:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
084ce357 +0x1f3:  mov    (%eax),%eax
084ce359 +0x1f5:  mov    %eax,-0x10(%ebp)
084ce35c +0x1f8:  cmpl   $0x0,-0x10(%ebp)
084ce360 +0x1fc:  jne    084ce36b <+0x207>
084ce362 +0x1fe:  movl   $0x0,-0x24(%ebp)
084ce369 +0x205:  jmp    084ce38d <+0x229>
084ce36b +0x207:  mov    -0x10(%ebp),%edx
084ce36e +0x20a:  mov    -0x28(%ebp),%eax
084ce371 +0x20d:  mov    0x16(%eax),%eax
084ce374 +0x210:  cmp    %eax,%edx
084ce376 +0x212:  jbe    084ce383 <+0x21f>
084ce378 +0x214:  mov    -0x28(%ebp),%eax
084ce37b +0x217:  mov    0x16(%eax),%eax
084ce37e +0x21a:  mov    %eax,-0x24(%ebp)
084ce381 +0x21d:  jmp    084ce38d <+0x229>
084ce383 +0x21f:  mov    -0x10(%ebp),%eax
084ce386 +0x222:  mov    %eax,-0x24(%ebp)
084ce389 +0x225:  movb   $0x1,-0x1d(%ebp)
084ce38d +0x229:  cmpl   $0x0,-0x24(%ebp)
084ce391 +0x22d:  jle    084ce3d8 <+0x274>
084ce393 +0x22f:  mov    -0x24(%ebp),%eax
084ce396 +0x232:  mov    %eax,0x4(%esp)
084ce39a +0x236:  mov    0xc(%ebp),%eax
084ce39d +0x239:  mov    %eax,(%esp)
084ce3a0 +0x23c:  call   0864f7fe <_ZN5CUser20gainCurCharacFatigueEi>  ; CUser::gainCurCharacFatigue(int)
084ce3a5 +0x241:  mov    -0x24(%ebp),%eax
084ce3a8 +0x244:  movswl %ax,%edx
084ce3ab +0x247:  mov    0xc(%ebp),%eax
084ce3ae +0x24a:  mov    %edx,0x4(%esp)
084ce3b2 +0x24e:  mov    %eax,(%esp)
084ce3b5 +0x251:  call   084ebf54 <_GLOBAL__I__Z7getUserj+0x2f06>  ; global constructors keyed to getUser(unsigned int)+0x2f06
084ce3ba +0x256:  mov    0xc(%ebp),%eax
084ce3bd +0x259:  mov    %eax,(%esp)
084ce3c0 +0x25c:  call   084ec7d4 <_GLOBAL__I__Z7getUserj+0x3786>  ; global constructors keyed to getUser(unsigned int)+0x3786
084ce3c5 +0x261:  mov    -0x24(%ebp),%eax
084ce3c8 +0x264:  cwtl
084ce3c9 +0x265:  mov    %eax,0x4(%esp)
084ce3cd +0x269:  mov    0xc(%ebp),%eax
084ce3d0 +0x26c:  mov    %eax,(%esp)
084ce3d3 +0x26f:  call   084ec7e4 <_GLOBAL__I__Z7getUserj+0x3796>  ; global constructors keyed to getUser(unsigned int)+0x3796
084ce3d8 +0x274:  mov    -0x28(%ebp),%eax
084ce3db +0x277:  mov    0x12(%eax),%eax
084ce3de +0x27a:  test   %eax,%eax
084ce3e0 +0x27c:  jne    084ce3ec <+0x288>
084ce3e2 +0x27e:  cmpl   $0x0,-0x24(%ebp)
084ce3e6 +0x282:  je     084ce53c <+0x3d8>
084ce3ec +0x288:  lea    -0x44(%ebp),%eax
084ce3ef +0x28b:  mov    %eax,(%esp)
084ce3f2 +0x28e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ce3f7 +0x293:  movl   $0x4c,0x8(%esp)
084ce3ff +0x29b:  movl   $0x0,0x4(%esp)
084ce407 +0x2a3:  lea    -0x44(%ebp),%eax
084ce40a +0x2a6:  mov    %eax,(%esp)
084ce40d +0x2a9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ce412 +0x2ae:  mov    -0x28(%ebp),%eax
084ce415 +0x2b1:  mov    0x12(%eax),%eax
084ce418 +0x2b4:  mov    %eax,0x4(%esp)
084ce41c +0x2b8:  lea    -0x44(%ebp),%eax
084ce41f +0x2bb:  mov    %eax,(%esp)
084ce422 +0x2be:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce427 +0x2c3:  mov    -0x24(%ebp),%eax
084ce42a +0x2c6:  mov    %eax,0x4(%esp)
084ce42e +0x2ca:  lea    -0x44(%ebp),%eax
084ce431 +0x2cd:  mov    %eax,(%esp)
084ce434 +0x2d0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084ce439 +0x2d5:  mov    -0x28(%ebp),%eax
084ce43c +0x2d8:  add    $0x1a,%eax
084ce43f +0x2db:  mov    %eax,(%esp)
084ce442 +0x2de:  call   0807e3b0 <_init+0xca8>
084ce447 +0x2e3:  mov    %eax,-0xc(%ebp)
084ce44a +0x2e6:  mov    -0xc(%ebp),%eax
084ce44d +0x2e9:  mov    %eax,0x4(%esp)
084ce451 +0x2ed:  lea    -0x44(%ebp),%eax
084ce454 +0x2f0:  mov    %eax,(%esp)
084ce457 +0x2f3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce45c +0x2f8:  mov    -0x28(%ebp),%eax
084ce45f +0x2fb:  lea    0x1a(%eax),%edx
084ce462 +0x2fe:  mov    -0xc(%ebp),%eax
084ce465 +0x301:  mov    %eax,0x8(%esp)
084ce469 +0x305:  mov    %edx,0x4(%esp)
084ce46d +0x309:  lea    -0x44(%ebp),%eax
084ce470 +0x30c:  mov    %eax,(%esp)
084ce473 +0x30f:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084ce478 +0x314:  movl   $0x1,0x4(%esp)
084ce480 +0x31c:  lea    -0x44(%ebp),%eax
084ce483 +0x31f:  mov    %eax,(%esp)
084ce486 +0x322:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ce48b +0x327:  lea    -0x44(%ebp),%eax
084ce48e +0x32a:  mov    %eax,0x4(%esp)
084ce492 +0x32e:  mov    0xc(%ebp),%eax
084ce495 +0x331:  mov    %eax,(%esp)
084ce498 +0x334:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ce49d +0x339:  cmpb   $0x0,-0x1d(%ebp)
084ce4a1 +0x33d:  je     084ce531 <+0x3cd>
084ce4a7 +0x343:  lea    -0x50(%ebp),%eax
084ce4aa +0x346:  mov    %eax,(%esp)
084ce4ad +0x349:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ce4b2 +0x34e:  movl   $0x128,0x8(%esp)
084ce4ba +0x356:  movl   $0x0,0x4(%esp)
084ce4c2 +0x35e:  lea    -0x50(%ebp),%eax
084ce4c5 +0x361:  mov    %eax,(%esp)
084ce4c8 +0x364:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ce4cd +0x369:  movl   $0x1,0x4(%esp)
084ce4d5 +0x371:  lea    -0x50(%ebp),%eax
084ce4d8 +0x374:  mov    %eax,(%esp)
084ce4db +0x377:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ce4e0 +0x37c:  lea    -0x50(%ebp),%eax
084ce4e3 +0x37f:  mov    %eax,0x4(%esp)
084ce4e7 +0x383:  mov    0xc(%ebp),%eax
084ce4ea +0x386:  mov    %eax,(%esp)
084ce4ed +0x389:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ce4f2 +0x38e:  jmp    084ce509 <+0x3a5>
084ce4f4 +0x390:  mov    %edx,%ebx
084ce4f6 +0x392:  mov    %eax,%esi
084ce4f8 +0x394:  lea    -0x50(%ebp),%eax
084ce4fb +0x397:  mov    %eax,(%esp)
084ce4fe +0x39a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ce503 +0x39f:  mov    %esi,%eax
084ce505 +0x3a1:  mov    %ebx,%edx
084ce507 +0x3a3:  jmp    084ce516 <+0x3b2>
084ce509 +0x3a5:  lea    -0x50(%ebp),%eax
084ce50c +0x3a8:  mov    %eax,(%esp)
084ce50f +0x3ab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ce514 +0x3b0:  jmp    084ce531 <+0x3cd>
084ce516 +0x3b2:  mov    %edx,%ebx
084ce518 +0x3b4:  mov    %eax,%esi
084ce51a +0x3b6:  lea    -0x44(%ebp),%eax
084ce51d +0x3b9:  mov    %eax,(%esp)
084ce520 +0x3bc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ce525 +0x3c1:  mov    %esi,%eax
084ce527 +0x3c3:  mov    %ebx,%edx
084ce529 +0x3c5:  mov    %eax,(%esp)
084ce52c +0x3c8:  call   08ae3750 <_Unwind_Resume>
084ce531 +0x3cd:  lea    -0x44(%ebp),%eax
084ce534 +0x3d0:  mov    %eax,(%esp)
084ce537 +0x3d3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ce53c +0x3d8:  mov    $0x0,%eax
084ce541 +0x3dd:  add    $0x70,%esp
084ce544 +0x3e0:  pop    %ebx
084ce545 +0x3e1:  pop    %esi
084ce546 +0x3e2:  pop    %ebp
084ce547 +0x3e3:  ret
```

## 反编译 C

```c
// Inter_MonitorPayTaxToUpper::dispatch_sig @ 0x84ce164

/* Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorPayTaxToUpper::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  int *piVar5;
  uint *puVar6;
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  int local_3c;
  int local_38;
  int local_34 [3];
  uint local_28;
  char local_21;
  short local_20;
  short local_1e;
  int local_1c;
  int local_18;
  uint local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_34[2] = param_3;
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int)",0x29e7,
                 "MEMBER : Inter_MonitorPayTaxToUpper::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_34[2] + 0xe)) {
        if (*(int *)(local_34[2] + 0x12) != 0) {
          uVar2 = *(undefined4 *)(local_34[2] + 0x12);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
          CInventory::gain_money(pCVar4,uVar2,10,1,0);
        }
        local_28 = 0;
        local_21 = '\0';
        if (*(int *)(local_34[2] + 0x16) != 0) {
          local_20 = CUserCharacInfo::getCurCharacMemberBonusFatigue((CUserCharacInfo *)param_2);
          local_1e = CUser::getAccountMemberBonusFatigue((CUser *)param_2);
          iVar1 = G_CDataManager();
          local_1c = *(int *)(iVar1 + 0x48f4);
          iVar1 = G_CDataManager();
          local_18 = *(int *)(iVar1 + 0x48f8);
          local_14 = 0;
          local_34[0] = local_1c - local_20;
          local_38 = local_18 - local_1e;
          piVar5 = std::min<int>(local_34,&local_38);
          local_3c = *piVar5;
          local_34[1] = 0;
          puVar6 = (uint *)std::max<int>(local_34 + 1,&local_3c);
          local_14 = *puVar6;
          if (local_14 == 0) {
            local_28 = 0;
          }
          else if (*(uint *)(local_34[2] + 0x16) < local_14) {
            local_28 = *(uint *)(local_34[2] + 0x16);
          }
          else {
            local_21 = '\x01';
            local_28 = local_14;
          }
          if (0 < (int)local_28) {
            CUser::gainCurCharacFatigue((CUser *)param_2,local_28);
            CUserCharacInfo::incCurCharacMemberBonusFatigue
                      ((CUserCharacInfo *)param_2,(short)local_28);
            CUser::EnableSaveMemberBonusFatigue((CUser *)param_2);
            CUser::incAccountMemberBonusFatigue((CUser *)param_2,(short)local_28);
          }
        }
        if ((*(int *)(local_34[2] + 0x12) != 0) || (local_28 != 0)) {
          PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084ce40d to 084ce4b1 has its CatchHandler @ 084ce516 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x4c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,*(int *)(local_34[2] + 0x12));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,local_28);
          local_10 = strlen((char *)(local_34[2] + 0x1a));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_48,(char *)(local_34[2] + 0x1a),local_10);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send((CUser *)param_2,local_48);
          if (local_21 != '\0') {
            PacketGuard::PacketGuard(local_54);
                    /* try { // try from 084ce4c8 to 084ce4f1 has its CatchHandler @ 084ce4f4 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x128);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
            CUser::Send((CUser *)param_2,local_54);
                    /* try { // try from 084ce50f to 084ce513 has its CatchHandler @ 084ce516 */
            PacketGuard::~PacketGuard(local_54);
          }
          PacketGuard::~PacketGuard(local_48);
        }
      }
      else {
        uVar2 = *(undefined4 *)(local_34[2] + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int)",0x29ed
                   ,
                   "MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}
```
