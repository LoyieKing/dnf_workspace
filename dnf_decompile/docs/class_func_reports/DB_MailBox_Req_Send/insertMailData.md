# insertMailData

`_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL`

`DB_MailBox_Req_Send::insertMailData(MySQL*, SIG_MAILBOX_SEND_NEW_MAIL const*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_Send` | `0x0841f2fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841f2fa  _ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL
#           DB_MailBox_Req_Send::insertMailData(MySQL*, SIG_MAILBOX_SEND_NEW_MAIL const*)
# range [0x0841f2fa, 0x0841f759]
0841f2fa +0x000:  push   %ebp
0841f2fb +0x001:  mov    %esp,%ebp
0841f2fd +0x003:  push   %edi
0841f2fe +0x004:  push   %esi
0841f2ff +0x005:  push   %ebx
0841f300 +0x006:  sub    $0x14c,%esp
0841f306 +0x00c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0841f30d +0x013:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0841f312 +0x018:  mov    %eax,-0x24(%ebp)
0841f315 +0x01b:  lea    -0x54(%ebp),%eax
0841f318 +0x01e:  mov    %eax,0x4(%esp)
0841f31c +0x022:  lea    -0x24(%ebp),%eax
0841f31f +0x025:  mov    %eax,(%esp)
0841f322 +0x028:  call   0807e360 <_init+0xc58>
0841f327 +0x02d:  mov    %eax,-0x20(%ebp)
0841f32a +0x030:  mov    -0x20(%ebp),%eax
0841f32d +0x033:  mov    0x8(%eax),%eax
0841f330 +0x036:  lea    0x1(%eax),%edx
0841f333 +0x039:  mov    -0x20(%ebp),%eax
0841f336 +0x03c:  mov    %edx,0x8(%eax)
0841f339 +0x03f:  mov    -0x20(%ebp),%eax
0841f33c +0x042:  movl   $0x0,0x4(%eax)
0841f343 +0x049:  mov    -0x20(%ebp),%eax
0841f346 +0x04c:  movl   $0x0,(%eax)
0841f34c +0x052:  mov    -0x20(%ebp),%eax
0841f34f +0x055:  mov    %eax,(%esp)
0841f352 +0x058:  call   0807e820 <_init+0x1118>
0841f357 +0x05d:  mov    %eax,-0x1c(%ebp)
0841f35a +0x060:  mov    0xc(%ebp),%eax
0841f35d +0x063:  movzbl 0x167(%eax),%eax
0841f364 +0x06a:  test   %al,%al
0841f366 +0x06c:  je     0841f37b <+0x81>
0841f368 +0x06e:  mov    0xc(%ebp),%eax
0841f36b +0x071:  mov    0x15b(%eax),%eax
0841f371 +0x077:  sub    $0x13c680,%eax
0841f376 +0x07c:  mov    %eax,-0x1c(%ebp)
0841f379 +0x07f:  jmp    0841f3d1 <+0xd7>
0841f37b +0x081:  mov    0xc(%ebp),%eax
0841f37e +0x084:  mov    0x15b(%eax),%eax
0841f384 +0x08a:  cmp    $0xe,%eax
0841f387 +0x08d:  ja     0841f3a6 <+0xac>
0841f389 +0x08f:  mov    -0x1c(%ebp),%edx
0841f38c +0x092:  mov    0xc(%ebp),%eax
0841f38f +0x095:  mov    0x15b(%eax),%eax
0841f395 +0x09b:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0841f39b +0x0a1:  mov    %edx,%ecx
0841f39d +0x0a3:  sub    %eax,%ecx
0841f39f +0x0a5:  mov    %ecx,%eax
0841f3a1 +0x0a7:  mov    %eax,-0x1c(%ebp)
0841f3a4 +0x0aa:  jmp    0841f3d1 <+0xd7>
0841f3a6 +0x0ac:  mov    0xc(%ebp),%eax
0841f3a9 +0x0af:  mov    0x15b(%eax),%eax
0841f3af +0x0b5:  cmp    $0xf,%eax
0841f3b2 +0x0b8:  jbe    0841f3d1 <+0xd7>
0841f3b4 +0x0ba:  mov    0xc(%ebp),%eax
0841f3b7 +0x0bd:  mov    0x15b(%eax),%eax
0841f3bd +0x0c3:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%edx
0841f3c3 +0x0c9:  mov    -0x1c(%ebp),%eax
0841f3c6 +0x0cc:  lea    (%edx,%eax,1),%eax
0841f3c9 +0x0cf:  sub    $0x13c680,%eax
0841f3ce +0x0d4:  mov    %eax,-0x1c(%ebp)
0841f3d1 +0x0d7:  mov    0xc(%ebp),%eax
0841f3d4 +0x0da:  mov    0x163(%eax),%eax
0841f3da +0x0e0:  test   %eax,%eax
0841f3dc +0x0e2:  je     0841f42b <+0x131>
0841f3de +0x0e4:  mov    0xc(%ebp),%eax
0841f3e1 +0x0e7:  mov    0x163(%eax),%edx
0841f3e7 +0x0ed:  mov    &_ZZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAILE14last_letter_id,%eax
0841f3ec +0x0f2:  cmp    %eax,%edx
0841f3ee +0x0f4:  je     0841f42b <+0x131>
0841f3f0 +0x0f6:  mov    0xc(%ebp),%eax
0841f3f3 +0x0f9:  mov    0x163(%eax),%eax
0841f3f9 +0x0ff:  mov    %eax,0xc(%esp)
0841f3fd +0x103:  movl   $0x1,0x8(%esp)
0841f405 +0x10b:  movl   $"upDate letter set stat =%d where letter_id = %d",0x4(%esp)
0841f40d +0x113:  mov    0x8(%ebp),%eax
0841f410 +0x116:  mov    %eax,(%esp)
0841f413 +0x119:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841f418 +0x11e:  movl   $0x1,0x4(%esp)
0841f420 +0x126:  mov    0x8(%ebp),%eax
0841f423 +0x129:  mov    %eax,(%esp)
0841f426 +0x12c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841f42b +0x131:  mov    0xc(%ebp),%eax
0841f42e +0x134:  mov    0x163(%eax),%eax
0841f434 +0x13a:  mov    %eax,&_ZZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAILE14last_letter_id
0841f439 +0x13f:  mov    0xc(%ebp),%eax
0841f43c +0x142:  mov    0x163(%eax),%eax
0841f442 +0x148:  mov    %eax,-0x28(%ebp)
0841f445 +0x14b:  mov    0xc(%ebp),%eax
0841f448 +0x14e:  movzwl 0x59(%eax),%eax
0841f44c +0x152:  test   %ax,%ax
0841f44f +0x155:  je     0841f4f9 <+0x1ff>
0841f455 +0x15b:  mov    -0x28(%ebp),%eax
0841f458 +0x15e:  test   %eax,%eax
0841f45a +0x160:  jne    0841f4f9 <+0x1ff>
0841f460 +0x166:  mov    0xc(%ebp),%eax
0841f463 +0x169:  lea    0x5b(%eax),%esi
0841f466 +0x16c:  mov    0xc(%ebp),%ecx
0841f469 +0x16f:  mov    0xc(%ebp),%eax
0841f46c +0x172:  mov    0x1e(%eax),%eax
0841f46f +0x175:  mov    %eax,%edx
0841f471 +0x177:  mov    0xc(%ebp),%eax
0841f474 +0x17a:  mov    0x22(%eax),%eax
0841f477 +0x17d:  movl   $0x1,0x1c(%esp)
0841f47f +0x185:  mov    -0x1c(%ebp),%ebx
0841f482 +0x188:  mov    %ebx,0x18(%esp)
0841f486 +0x18c:  lea    -0x28(%ebp),%ebx
0841f489 +0x18f:  mov    %ebx,0x14(%esp)
0841f48d +0x193:  mov    %esi,0x10(%esp)
0841f491 +0x197:  mov    %ecx,0xc(%esp)
0841f495 +0x19b:  mov    %edx,0x8(%esp)
0841f499 +0x19f:  mov    %eax,0x4(%esp)
0841f49d +0x1a3:  mov    0x8(%ebp),%eax
0841f4a0 +0x1a6:  mov    %eax,(%esp)
0841f4a3 +0x1a9:  call   0841f15a <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT>  ; DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, char const*, char const*, int&, long, ENUM_LETTER_STAT)
0841f4a8 +0x1ae:  xor    $0x1,%eax
0841f4ab +0x1b1:  test   %al,%al
0841f4ad +0x1b3:  je     0841f4db <+0x1e1>
0841f4af +0x1b5:  movl   $"InsertLetter() error",0x10(%esp)
0841f4b7 +0x1bd:  movl   $0x550c,0xc(%esp)
0841f4bf +0x1c5:  movl   $&_ZZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAILE19__PRETTY_FUNCTION__,0x8(%esp)
0841f4c7 +0x1cd:  movl   $"DBThread.cpp",0x4(%esp)
0841f4cf +0x1d5:  movl   $0x1,(%esp)
0841f4d6 +0x1dc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0841f4db +0x1e1:  mov    0xc(%ebp),%eax
0841f4de +0x1e4:  mov    0x2b(%eax),%eax
0841f4e1 +0x1e7:  test   %eax,%eax
0841f4e3 +0x1e9:  jne    0841f4f9 <+0x1ff>
0841f4e5 +0x1eb:  mov    0xc(%ebp),%eax
0841f4e8 +0x1ee:  mov    0x26(%eax),%eax
0841f4eb +0x1f1:  test   %eax,%eax
0841f4ed +0x1f3:  jne    0841f4f9 <+0x1ff>
0841f4ef +0x1f5:  mov    $0x1,%eax
0841f4f4 +0x1fa:  jmp    0841f74f <+0x455>
0841f4f9 +0x1ff:  lea    -0xab(%ebp),%edx
0841f4ff +0x205:  mov    $0x57,%ebx
0841f504 +0x20a:  mov    $0x0,%eax
0841f509 +0x20f:  mov    %edx,%ecx
0841f50b +0x211:  and    $0x1,%ecx
0841f50e +0x214:  test   %ecx,%ecx
0841f510 +0x216:  je     0841f51a <+0x220>
0841f512 +0x218:  mov    %al,(%edx)
0841f514 +0x21a:  add    $0x1,%edx
0841f517 +0x21d:  sub    $0x1,%ebx
0841f51a +0x220:  mov    %edx,%ecx
0841f51c +0x222:  and    $0x2,%ecx
0841f51f +0x225:  test   %ecx,%ecx
0841f521 +0x227:  je     0841f52c <+0x232>
0841f523 +0x229:  mov    %ax,(%edx)
0841f526 +0x22c:  add    $0x2,%edx
0841f529 +0x22f:  sub    $0x2,%ebx
0841f52c +0x232:  mov    %ebx,%ecx
0841f52e +0x234:  shr    $0x2,%ecx
0841f531 +0x237:  mov    %edx,%edi
0841f533 +0x239:  rep stos %eax,%es:(%edi)
0841f535 +0x23b:  mov    %edi,%edx
0841f537 +0x23d:  mov    %ebx,%ecx
0841f539 +0x23f:  and    $0x2,%ecx
0841f53c +0x242:  test   %ecx,%ecx
0841f53e +0x244:  je     0841f546 <+0x24c>
0841f540 +0x246:  mov    %ax,(%edx)
0841f543 +0x249:  add    $0x2,%edx
0841f546 +0x24c:  mov    %ebx,%ecx
0841f548 +0x24e:  and    $0x1,%ecx
0841f54b +0x251:  test   %ecx,%ecx
0841f54d +0x253:  je     0841f554 <+0x25a>
0841f54f +0x255:  mov    %al,(%edx)
0841f551 +0x257:  add    $0x1,%edx
0841f554 +0x25a:  mov    0xc(%ebp),%eax
0841f557 +0x25d:  mov    %eax,0x4(%esp)
0841f55b +0x261:  lea    -0xab(%ebp),%eax
0841f561 +0x267:  mov    %eax,(%esp)
0841f564 +0x26a:  call   0807def0 <_init+0x7e8>
0841f569 +0x26f:  mov    0xc(%ebp),%eax
0841f56c +0x272:  movzbl 0x57(%eax),%eax
0841f570 +0x276:  movzbl %al,%eax
0841f573 +0x279:  mov    %eax,-0xec(%ebp)
0841f579 +0x27f:  mov    0xc(%ebp),%eax
0841f57c +0x282:  movzbl 0x55(%eax),%eax
0841f580 +0x286:  movzbl %al,%eax
0841f583 +0x289:  mov    %eax,-0xe8(%ebp)
0841f589 +0x28f:  mov    0xc(%ebp),%eax
0841f58c +0x292:  add    $0x47,%eax
0841f58f +0x295:  movl   $0xe,0xc(%esp)
0841f597 +0x29d:  mov    %eax,0x8(%esp)
0841f59b +0x2a1:  movl   $0x1,0x4(%esp)
0841f5a3 +0x2a9:  mov    0x8(%ebp),%eax
0841f5a6 +0x2ac:  mov    %eax,(%esp)
0841f5a9 +0x2af:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0841f5ae +0x2b4:  mov    %eax,-0xe4(%ebp)
0841f5b4 +0x2ba:  mov    0xc(%ebp),%eax
0841f5b7 +0x2bd:  add    $0x3a,%eax
0841f5ba +0x2c0:  movl   $0xa,0xc(%esp)
0841f5c2 +0x2c8:  mov    %eax,0x8(%esp)
0841f5c6 +0x2cc:  movl   $0x0,0x4(%esp)
0841f5ce +0x2d4:  mov    0x8(%ebp),%eax
0841f5d1 +0x2d7:  mov    %eax,(%esp)
0841f5d4 +0x2da:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0841f5d9 +0x2df:  mov    %eax,-0xe0(%ebp)
0841f5df +0x2e5:  mov    0xc(%ebp),%eax
0841f5e2 +0x2e8:  mov    0x36(%eax),%eax
0841f5e5 +0x2eb:  mov    %eax,-0xdc(%ebp)
0841f5eb +0x2f1:  mov    -0x28(%ebp),%eax
0841f5ee +0x2f4:  mov    %eax,-0xd8(%ebp)
0841f5f4 +0x2fa:  mov    0xc(%ebp),%eax
0841f5f7 +0x2fd:  movzbl 0x56(%eax),%eax
0841f5fb +0x301:  movzbl %al,%eax
0841f5fe +0x304:  mov    %eax,-0xd4(%ebp)
0841f604 +0x30a:  mov    0xc(%ebp),%eax
0841f607 +0x30d:  movzbl 0x58(%eax),%eax
0841f60b +0x311:  movzbl %al,%eax
0841f60e +0x314:  mov    %eax,-0xd0(%ebp)
0841f614 +0x31a:  mov    0xc(%ebp),%eax
0841f617 +0x31d:  mov    0x26(%eax),%eax
0841f61a +0x320:  mov    %eax,-0xcc(%ebp)
0841f620 +0x326:  mov    0xc(%ebp),%eax
0841f623 +0x329:  movzwl 0x45(%eax),%eax
0841f627 +0x32d:  movzwl %ax,%eax
0841f62a +0x330:  mov    %eax,-0xc8(%ebp)
0841f630 +0x336:  mov    0xc(%ebp),%eax
0841f633 +0x339:  movzbl 0x44(%eax),%eax
0841f637 +0x33d:  movzbl %al,%eax
0841f63a +0x340:  mov    %eax,-0xc4(%ebp)
0841f640 +0x346:  mov    0xc(%ebp),%eax
0841f643 +0x349:  movzbl 0x33(%eax),%eax
0841f647 +0x34d:  movzbl %al,%eax
0841f64a +0x350:  mov    %eax,-0xc0(%ebp)
0841f650 +0x356:  mov    0xc(%ebp),%eax
0841f653 +0x359:  movzwl 0x34(%eax),%eax
0841f657 +0x35d:  movzwl %ax,%eax
0841f65a +0x360:  mov    %eax,-0xbc(%ebp)
0841f660 +0x366:  mov    0xc(%ebp),%eax
0841f663 +0x369:  mov    0x2f(%eax),%edi
0841f666 +0x36c:  mov    0xc(%ebp),%eax
0841f669 +0x36f:  mov    0x2b(%eax),%esi
0841f66c +0x372:  mov    0xc(%ebp),%eax
0841f66f +0x375:  movzbl 0x2a(%eax),%eax
0841f673 +0x379:  movzbl %al,%ebx
0841f676 +0x37c:  mov    0xc(%ebp),%eax
0841f679 +0x37f:  mov    0x22(%eax),%ecx
0841f67c +0x382:  mov    0xc(%ebp),%eax
0841f67f +0x385:  mov    0x1e(%eax),%edx
0841f682 +0x388:  mov    -0xec(%ebp),%eax
0841f688 +0x38e:  mov    %eax,0x54(%esp)
0841f68c +0x392:  mov    -0xe8(%ebp),%eax
0841f692 +0x398:  mov    %eax,0x50(%esp)
0841f696 +0x39c:  mov    -0xe4(%ebp),%eax
0841f69c +0x3a2:  mov    %eax,0x4c(%esp)
0841f6a0 +0x3a6:  mov    -0xe0(%ebp),%eax
0841f6a6 +0x3ac:  mov    %eax,0x48(%esp)
0841f6aa +0x3b0:  mov    -0xdc(%ebp),%eax
0841f6b0 +0x3b6:  mov    %eax,0x44(%esp)
0841f6b4 +0x3ba:  mov    -0xd8(%ebp),%eax
0841f6ba +0x3c0:  mov    %eax,0x40(%esp)
0841f6be +0x3c4:  mov    -0xd4(%ebp),%eax
0841f6c4 +0x3ca:  mov    %eax,0x3c(%esp)
0841f6c8 +0x3ce:  mov    -0xd0(%ebp),%eax
0841f6ce +0x3d4:  mov    %eax,0x38(%esp)
0841f6d2 +0x3d8:  lea    -0xab(%ebp),%eax
0841f6d8 +0x3de:  mov    %eax,0x34(%esp)
0841f6dc +0x3e2:  mov    -0xcc(%ebp),%eax
0841f6e2 +0x3e8:  mov    %eax,0x30(%esp)
0841f6e6 +0x3ec:  mov    -0xc8(%ebp),%eax
0841f6ec +0x3f2:  mov    %eax,0x2c(%esp)
0841f6f0 +0x3f6:  mov    -0xc4(%ebp),%eax
0841f6f6 +0x3fc:  mov    %eax,0x28(%esp)
0841f6fa +0x400:  mov    -0xc0(%ebp),%eax
0841f700 +0x406:  mov    %eax,0x24(%esp)
0841f704 +0x40a:  mov    -0xbc(%ebp),%eax
0841f70a +0x410:  mov    %eax,0x20(%esp)
0841f70e +0x414:  mov    %edi,0x1c(%esp)
0841f712 +0x418:  mov    %esi,0x18(%esp)
0841f716 +0x41c:  mov    %ebx,0x14(%esp)
0841f71a +0x420:  mov    %ecx,0x10(%esp)
0841f71e +0x424:  mov    %edx,0xc(%esp)
0841f722 +0x428:  mov    -0x1c(%ebp),%eax
0841f725 +0x42b:  mov    %eax,0x8(%esp)
0841f729 +0x42f:  movl   $"inSert into postal(occ_time,send_charac_no,receive_charac_no,seal_flag,item_id,add_info,endurance,upgrade,amplify_option,amplify_value,gold,send_charac_name,creature_flag,avata_flag,letter_id,extend_info,item_guid,random_option,seperate_upgrade,unlimit_flag) values(from_unixtime(%d),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,'%s',%d,%d,%d,%d,'%s','%s',%d,%d)",0x4(%esp)
0841f731 +0x437:  mov    0x8(%ebp),%eax
0841f734 +0x43a:  mov    %eax,(%esp)
0841f737 +0x43d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841f73c +0x442:  movl   $0x1,0x4(%esp)
0841f744 +0x44a:  mov    0x8(%ebp),%eax
0841f747 +0x44d:  mov    %eax,(%esp)
0841f74a +0x450:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841f74f +0x455:  add    $0x14c,%esp
0841f755 +0x45b:  pop    %ebx
0841f756 +0x45c:  pop    %esi
0841f757 +0x45d:  pop    %edi
0841f758 +0x45e:  pop    %ebp
0841f759 +0x45f:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_Send::insertMailData @ 0x841f2fa

/* DB_MailBox_Req_Send::insertMailData(MySQL*, SIG_MAILBOX_SEND_NEW_MAIL const*) */

undefined4 DB_MailBox_Req_Send::insertMailData(MySQL *param_1,SIG_MAILBOX_SEND_NEW_MAIL *param_2)

{
  SIG_MAILBOX_SEND_NEW_MAIL SVar1;
  SIG_MAILBOX_SEND_NEW_MAIL SVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_af;
  char local_ae [86];
  tm local_58;
  int local_2c;
  time_t local_28;
  tm *local_24;
  time_t local_20;
  
  bVar10 = 0;
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_28,&local_58);
  local_24->tm_hour = local_24->tm_hour + 1;
  local_24->tm_min = 0;
  local_24->tm_sec = 0;
  local_20 = mktime(local_24);
  if (param_2[0x167] == (SIG_MAILBOX_SEND_NEW_MAIL)0x0) {
    if (*(uint *)(param_2 + 0x15b) < 0xf) {
      local_20 = local_20 + *(int *)(param_2 + 0x15b) * -0x15180;
    }
    else if (0xf < *(uint *)(param_2 + 0x15b)) {
      local_20 = *(int *)(param_2 + 0x15b) * 0x15180 + local_20 + -0x13c680;
    }
  }
  else {
    local_20 = *(int *)(param_2 + 0x15b) + -0x13c680;
  }
  if ((*(int *)(param_2 + 0x163) != 0) &&
     (*(int *)(param_2 + 0x163) !=
      insertMailData(MySQL*,SIG_MAILBOX_SEND_NEW_MAIL_const*)::last_letter_id)) {
    MySQL::set_query(param_1,"upDate letter set stat =%d where letter_id = %d",1,
                     *(undefined4 *)(param_2 + 0x163));
    MySQL::exec(param_1,true);
  }
  insertMailData(MySQL*,SIG_MAILBOX_SEND_NEW_MAIL_const*)::last_letter_id =
       *(int *)(param_2 + 0x163);
  local_2c = *(int *)(param_2 + 0x163);
  if ((*(short *)(param_2 + 0x59) != 0) && (local_2c == 0)) {
    cVar3 = InsertLetter(param_1,*(undefined4 *)(param_2 + 0x22),*(undefined4 *)(param_2 + 0x1e),
                         param_2,param_2 + 0x5b,&local_2c,local_20,1);
    if (cVar3 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "static bool DB_MailBox_Req_Send::insertMailData(MySQL*, const SIG_MAILBOX_SEND_NEW_MAIL*)"
                 ,0x550c,"InsertLetter() error");
    }
    if ((*(int *)(param_2 + 0x2b) == 0) && (*(int *)(param_2 + 0x26) == 0)) {
      return 1;
    }
  }
  pcVar7 = &local_af;
  uVar8 = 0x57;
  bVar9 = ((uint)pcVar7 & 1) != 0;
  if (bVar9) {
    local_af = '\0';
    pcVar7 = local_ae;
    uVar8 = 0x56;
  }
  if (((uint)pcVar7 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
    uVar8 = uVar8 - 2;
  }
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
  }
  if ((uVar8 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
  }
  if (!bVar9) {
    *pcVar7 = '\0';
  }
  strcpy(&local_af,(char *)param_2);
  SVar1 = param_2[0x57];
  SVar2 = param_2[0x55];
  uVar4 = MySQL::blob_to_str(param_1,1,param_2 + 0x47,0xe);
  uVar5 = MySQL::blob_to_str(param_1,0,param_2 + 0x3a,10);
  MySQL::set_query(param_1,
                   "inSert into postal(occ_time,send_charac_no,receive_charac_no,seal_flag,item_id,add_info,endurance,upgrade,amplify_option,amplify_value,gold,send_charac_name,creature_flag,avata_flag,letter_id,extend_info,item_guid,random_option,seperate_upgrade,unlimit_flag) values(from_unixtime(%d),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\'%s\',%d,%d,%d,%d,\'%s\',\'%s\',%d,%d)"
                   ,local_20,*(undefined4 *)(param_2 + 0x1e),*(undefined4 *)(param_2 + 0x22),
                   (uint)(byte)param_2[0x2a],*(undefined4 *)(param_2 + 0x2b),
                   *(undefined4 *)(param_2 + 0x2f),(uint)*(ushort *)(param_2 + 0x34),
                   (uint)(byte)param_2[0x33],(uint)(byte)param_2[0x44],
                   (uint)*(ushort *)(param_2 + 0x45),*(undefined4 *)(param_2 + 0x26),&local_af,
                   (uint)(byte)param_2[0x58],(uint)(byte)param_2[0x56],local_2c,
                   *(undefined4 *)(param_2 + 0x36),uVar5,uVar4,(uint)(byte)SVar2,(uint)(byte)SVar1);
  uVar4 = MySQL::exec(param_1,true);
  return uVar4;
}
```
