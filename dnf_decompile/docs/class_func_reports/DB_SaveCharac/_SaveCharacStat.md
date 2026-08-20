# _SaveCharacStat

`_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC`

`DB_SaveCharac::_SaveCharacStat(SIG_SAVE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x084163f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084163f2  _ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC
#           DB_SaveCharac::_SaveCharacStat(SIG_SAVE_CHARAC*)
# range [0x084163f2, 0x08416903]
084163f2 +0x000:  push   %ebp
084163f3 +0x001:  mov    %esp,%ebp
084163f5 +0x003:  push   %edi
084163f6 +0x004:  push   %esi
084163f7 +0x005:  push   %ebx
084163f8 +0x006:  sub    $0x19c,%esp
084163fe +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08416403 +0x011:  movl   $0x0,0x8(%esp)
0841640b +0x019:  movl   $0x2,0x4(%esp)
08416413 +0x021:  mov    %eax,(%esp)
08416416 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841641b +0x029:  mov    %eax,-0x1c(%ebp)
0841641e +0x02c:  mov    0xc(%ebp),%eax
08416421 +0x02f:  mov    (%eax),%eax
08416423 +0x031:  mov    %eax,-0xd4(%ebp)
08416429 +0x037:  mov    0xc(%ebp),%eax
0841642c +0x03a:  mov    0xd6(%eax),%eax
08416432 +0x040:  mov    %eax,-0xd0(%ebp)
08416438 +0x046:  mov    0xc(%ebp),%eax
0841643b +0x049:  movzbl 0xd5(%eax),%eax
08416442 +0x050:  movzbl %al,%eax
08416445 +0x053:  mov    %eax,-0xcc(%ebp)
0841644b +0x059:  mov    0xc(%ebp),%eax
0841644e +0x05c:  movzbl 0x102(%eax),%eax
08416455 +0x063:  movsbl %al,%eax
08416458 +0x066:  mov    %eax,-0xc8(%ebp)
0841645e +0x06c:  mov    0xc(%ebp),%eax
08416461 +0x06f:  movzbl 0x101(%eax),%eax
08416468 +0x076:  movsbl %al,%eax
0841646b +0x079:  mov    %eax,-0xc4(%ebp)
08416471 +0x07f:  mov    0xc(%ebp),%eax
08416474 +0x082:  movzbl 0x100(%eax),%eax
0841647b +0x089:  movsbl %al,%eax
0841647e +0x08c:  mov    %eax,-0xc0(%ebp)
08416484 +0x092:  mov    0xc(%ebp),%eax
08416487 +0x095:  movzbl 0xff(%eax),%eax
0841648e +0x09c:  movsbl %al,%eax
08416491 +0x09f:  mov    %eax,-0xbc(%ebp)
08416497 +0x0a5:  mov    0xc(%ebp),%eax
0841649a +0x0a8:  mov    0xd1(%eax),%eax
084164a0 +0x0ae:  mov    %eax,-0xb8(%ebp)
084164a6 +0x0b4:  mov    0xc(%ebp),%eax
084164a9 +0x0b7:  movzwl 0xcf(%eax),%eax
084164b0 +0x0be:  cwtl
084164b1 +0x0bf:  mov    %eax,-0xb4(%ebp)
084164b7 +0x0c5:  mov    0xc(%ebp),%eax
084164ba +0x0c8:  movzbl 0xce(%eax),%eax
084164c1 +0x0cf:  movzbl %al,%eax
084164c4 +0x0d2:  mov    %eax,-0xb0(%ebp)
084164ca +0x0d8:  mov    0xc(%ebp),%eax
084164cd +0x0db:  movzbl 0xfe(%eax),%eax
084164d4 +0x0e2:  movsbl %al,%eax
084164d7 +0x0e5:  mov    %eax,-0xac(%ebp)
084164dd +0x0eb:  mov    0xc(%ebp),%eax
084164e0 +0x0ee:  movzwl 0xfb(%eax),%eax
084164e7 +0x0f5:  cwtl
084164e8 +0x0f6:  mov    %eax,-0xa8(%ebp)
084164ee +0x0fc:  mov    0xc(%ebp),%eax
084164f1 +0x0ff:  movzwl 0xcc(%eax),%eax
084164f8 +0x106:  movzwl %ax,%eax
084164fb +0x109:  mov    %eax,-0xa4(%ebp)
08416501 +0x10f:  mov    0xc(%ebp),%eax
08416504 +0x112:  mov    0xe2(%eax),%eax
0841650a +0x118:  mov    %eax,-0xa0(%ebp)
08416510 +0x11e:  mov    0xc(%ebp),%eax
08416513 +0x121:  mov    0xc8(%eax),%eax
08416519 +0x127:  mov    %eax,-0x9c(%ebp)
0841651f +0x12d:  mov    0xc(%ebp),%eax
08416522 +0x130:  mov    0xc4(%eax),%eax
08416528 +0x136:  mov    %eax,-0x98(%ebp)
0841652e +0x13c:  mov    0xc(%ebp),%eax
08416531 +0x13f:  movzbl 0xc3(%eax),%eax
08416538 +0x146:  movsbl %al,%eax
0841653b +0x149:  mov    %eax,-0x94(%ebp)
08416541 +0x14f:  mov    0xc(%ebp),%eax
08416544 +0x152:  movzwl 0xc1(%eax),%eax
0841654b +0x159:  cwtl
0841654c +0x15a:  mov    %eax,-0x90(%ebp)
08416552 +0x160:  mov    0xc(%ebp),%eax
08416555 +0x163:  add    $0x6e,%eax
08416558 +0x166:  movl   $0x10,0xc(%esp)
08416560 +0x16e:  mov    %eax,0x8(%esp)
08416564 +0x172:  movl   $0x0,0x4(%esp)
0841656c +0x17a:  mov    -0x1c(%ebp),%eax
0841656f +0x17d:  mov    %eax,(%esp)
08416572 +0x180:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416577 +0x185:  mov    %eax,-0x8c(%ebp)
0841657d +0x18b:  mov    0xc(%ebp),%eax
08416580 +0x18e:  movzwl 0xbf(%eax),%eax
08416587 +0x195:  cwtl
08416588 +0x196:  mov    %eax,-0x88(%ebp)
0841658e +0x19c:  mov    0xc(%ebp),%eax
08416591 +0x19f:  movzbl 0xaa(%eax),%eax
08416598 +0x1a6:  movsbl %al,%eax
0841659b +0x1a9:  mov    %eax,-0x84(%ebp)
084165a1 +0x1af:  mov    0xc(%ebp),%eax
084165a4 +0x1b2:  mov    0xbb(%eax),%eax
084165aa +0x1b8:  mov    %eax,-0x80(%ebp)
084165ad +0x1bb:  mov    0xc(%ebp),%eax
084165b0 +0x1be:  mov    0xaf(%eax),%eax
084165b6 +0x1c4:  mov    %eax,-0x7c(%ebp)
084165b9 +0x1c7:  mov    0xc(%ebp),%eax
084165bc +0x1ca:  mov    0xb7(%eax),%eax
084165c2 +0x1d0:  mov    %eax,-0x78(%ebp)
084165c5 +0x1d3:  mov    0xc(%ebp),%eax
084165c8 +0x1d6:  mov    0xb3(%eax),%eax
084165ce +0x1dc:  mov    %eax,-0x74(%ebp)
084165d1 +0x1df:  mov    0xc(%ebp),%eax
084165d4 +0x1e2:  mov    0xab(%eax),%eax
084165da +0x1e8:  mov    %eax,-0x70(%ebp)
084165dd +0x1eb:  mov    0xc(%ebp),%eax
084165e0 +0x1ee:  mov    0xa6(%eax),%eax
084165e6 +0x1f4:  mov    %eax,-0x6c(%ebp)
084165e9 +0x1f7:  mov    0xc(%ebp),%eax
084165ec +0x1fa:  mov    0xa2(%eax),%eax
084165f2 +0x200:  mov    %eax,-0x68(%ebp)
084165f5 +0x203:  mov    0xc(%ebp),%eax
084165f8 +0x206:  mov    0x9e(%eax),%eax
084165fe +0x20c:  mov    %eax,-0x64(%ebp)
08416601 +0x20f:  mov    0xc(%ebp),%eax
08416604 +0x212:  mov    0x9a(%eax),%eax
0841660a +0x218:  mov    %eax,-0x60(%ebp)
0841660d +0x21b:  mov    0xc(%ebp),%eax
08416610 +0x21e:  mov    0x96(%eax),%eax
08416616 +0x224:  mov    %eax,-0x5c(%ebp)
08416619 +0x227:  mov    0xc(%ebp),%eax
0841661c +0x22a:  mov    0x92(%eax),%eax
08416622 +0x230:  mov    %eax,-0x58(%ebp)
08416625 +0x233:  mov    0xc(%ebp),%eax
08416628 +0x236:  mov    0x8e(%eax),%eax
0841662e +0x23c:  mov    %eax,-0x54(%ebp)
08416631 +0x23f:  mov    0xc(%ebp),%eax
08416634 +0x242:  mov    0x8a(%eax),%eax
0841663a +0x248:  mov    %eax,-0x50(%ebp)
0841663d +0x24b:  mov    0xc(%ebp),%eax
08416640 +0x24e:  mov    0x86(%eax),%eax
08416646 +0x254:  mov    %eax,-0x4c(%ebp)
08416649 +0x257:  mov    0xc(%ebp),%eax
0841664c +0x25a:  mov    0x82(%eax),%eax
08416652 +0x260:  mov    %eax,-0x48(%ebp)
08416655 +0x263:  mov    0xc(%ebp),%eax
08416658 +0x266:  mov    0x7e(%eax),%eax
0841665b +0x269:  mov    %eax,-0x44(%ebp)
0841665e +0x26c:  mov    0xc(%ebp),%eax
08416661 +0x26f:  mov    0x6a(%eax),%eax
08416664 +0x272:  mov    %eax,-0x40(%ebp)
08416667 +0x275:  mov    0xc(%ebp),%eax
0841666a +0x278:  movzwl 0x68(%eax),%eax
0841666e +0x27c:  movzwl %ax,%eax
08416671 +0x27f:  mov    %eax,-0x3c(%ebp)
08416674 +0x282:  mov    0xc(%ebp),%eax
08416677 +0x285:  mov    0xde(%eax),%edi
0841667d +0x28b:  mov    0xc(%ebp),%eax
08416680 +0x28e:  movzwl 0x65(%eax),%eax
08416684 +0x292:  movzwl %ax,%esi
08416687 +0x295:  mov    0xc(%ebp),%eax
0841668a +0x298:  movzwl 0x63(%eax),%eax
0841668e +0x29c:  movswl %ax,%ebx
08416691 +0x29f:  mov    0xc(%ebp),%eax
08416694 +0x2a2:  movzbl 0x67(%eax),%eax
08416698 +0x2a6:  movzbl %al,%ecx
0841669b +0x2a9:  mov    0xc(%ebp),%eax
0841669e +0x2ac:  mov    0x5e(%eax),%edx
084166a1 +0x2af:  mov    0xc(%ebp),%eax
084166a4 +0x2b2:  movzbl 0x62(%eax),%eax
084166a8 +0x2b6:  movsbl %al,%eax
084166ab +0x2b9:  mov    %eax,-0xdc(%ebp)
084166b1 +0x2bf:  mov    -0xd4(%ebp),%eax
084166b7 +0x2c5:  mov    %eax,0xb8(%esp)
084166be +0x2cc:  mov    -0xd0(%ebp),%eax
084166c4 +0x2d2:  mov    %eax,0xb4(%esp)
084166cb +0x2d9:  mov    -0xcc(%ebp),%eax
084166d1 +0x2df:  mov    %eax,0xb0(%esp)
084166d8 +0x2e6:  mov    -0xc8(%ebp),%eax
084166de +0x2ec:  mov    %eax,0xac(%esp)
084166e5 +0x2f3:  mov    -0xc4(%ebp),%eax
084166eb +0x2f9:  mov    %eax,0xa8(%esp)
084166f2 +0x300:  mov    -0xc0(%ebp),%eax
084166f8 +0x306:  mov    %eax,0xa4(%esp)
084166ff +0x30d:  mov    -0xbc(%ebp),%eax
08416705 +0x313:  mov    %eax,0xa0(%esp)
0841670c +0x31a:  mov    -0xb8(%ebp),%eax
08416712 +0x320:  mov    %eax,0x9c(%esp)
08416719 +0x327:  mov    -0xb4(%ebp),%eax
0841671f +0x32d:  mov    %eax,0x98(%esp)
08416726 +0x334:  mov    -0xb0(%ebp),%eax
0841672c +0x33a:  mov    %eax,0x94(%esp)
08416733 +0x341:  mov    -0xac(%ebp),%eax
08416739 +0x347:  mov    %eax,0x90(%esp)
08416740 +0x34e:  mov    -0xa8(%ebp),%eax
08416746 +0x354:  mov    %eax,0x8c(%esp)
0841674d +0x35b:  mov    -0xa4(%ebp),%eax
08416753 +0x361:  mov    %eax,0x88(%esp)
0841675a +0x368:  mov    -0xa0(%ebp),%eax
08416760 +0x36e:  mov    %eax,0x84(%esp)
08416767 +0x375:  mov    -0x9c(%ebp),%eax
0841676d +0x37b:  mov    %eax,0x80(%esp)
08416774 +0x382:  mov    -0x98(%ebp),%eax
0841677a +0x388:  mov    %eax,0x7c(%esp)
0841677e +0x38c:  mov    -0x94(%ebp),%eax
08416784 +0x392:  mov    %eax,0x78(%esp)
08416788 +0x396:  mov    -0x90(%ebp),%eax
0841678e +0x39c:  mov    %eax,0x74(%esp)
08416792 +0x3a0:  mov    -0x8c(%ebp),%eax
08416798 +0x3a6:  mov    %eax,0x70(%esp)
0841679c +0x3aa:  mov    -0x88(%ebp),%eax
084167a2 +0x3b0:  mov    %eax,0x6c(%esp)
084167a6 +0x3b4:  mov    -0x84(%ebp),%eax
084167ac +0x3ba:  mov    %eax,0x68(%esp)
084167b0 +0x3be:  mov    -0x80(%ebp),%eax
084167b3 +0x3c1:  mov    %eax,0x64(%esp)
084167b7 +0x3c5:  mov    -0x7c(%ebp),%eax
084167ba +0x3c8:  mov    %eax,0x60(%esp)
084167be +0x3cc:  mov    -0x78(%ebp),%eax
084167c1 +0x3cf:  mov    %eax,0x5c(%esp)
084167c5 +0x3d3:  mov    -0x74(%ebp),%eax
084167c8 +0x3d6:  mov    %eax,0x58(%esp)
084167cc +0x3da:  mov    -0x70(%ebp),%eax
084167cf +0x3dd:  mov    %eax,0x54(%esp)
084167d3 +0x3e1:  mov    -0x6c(%ebp),%eax
084167d6 +0x3e4:  mov    %eax,0x50(%esp)
084167da +0x3e8:  mov    -0x68(%ebp),%eax
084167dd +0x3eb:  mov    %eax,0x4c(%esp)
084167e1 +0x3ef:  mov    -0x64(%ebp),%eax
084167e4 +0x3f2:  mov    %eax,0x48(%esp)
084167e8 +0x3f6:  mov    -0x60(%ebp),%eax
084167eb +0x3f9:  mov    %eax,0x44(%esp)
084167ef +0x3fd:  mov    -0x5c(%ebp),%eax
084167f2 +0x400:  mov    %eax,0x40(%esp)
084167f6 +0x404:  mov    -0x58(%ebp),%eax
084167f9 +0x407:  mov    %eax,0x3c(%esp)
084167fd +0x40b:  mov    -0x54(%ebp),%eax
08416800 +0x40e:  mov    %eax,0x38(%esp)
08416804 +0x412:  mov    -0x50(%ebp),%eax
08416807 +0x415:  mov    %eax,0x34(%esp)
0841680b +0x419:  mov    -0x4c(%ebp),%eax
0841680e +0x41c:  mov    %eax,0x30(%esp)
08416812 +0x420:  mov    -0x48(%ebp),%eax
08416815 +0x423:  mov    %eax,0x2c(%esp)
08416819 +0x427:  mov    -0x44(%ebp),%eax
0841681c +0x42a:  mov    %eax,0x28(%esp)
08416820 +0x42e:  mov    -0x40(%ebp),%eax
08416823 +0x431:  mov    %eax,0x24(%esp)
08416827 +0x435:  mov    -0x3c(%ebp),%eax
0841682a +0x438:  mov    %eax,0x20(%esp)
0841682e +0x43c:  mov    %edi,0x1c(%esp)
08416832 +0x440:  mov    %esi,0x18(%esp)
08416836 +0x444:  mov    %ebx,0x14(%esp)
0841683a +0x448:  mov    %ecx,0x10(%esp)
0841683e +0x44c:  mov    %edx,0xc(%esp)
08416842 +0x450:  mov    -0xdc(%ebp),%eax
08416848 +0x456:  mov    %eax,0x8(%esp)
0841684c +0x45a:  movl   $"upDate charac_stat set village=%d,exp=%d,HP=%d,fatigue=%d,premium_fatigue=%d,last_play_time=from_unixtime(%d),used_fatigue=%d,tutorial_flag=%d,trade_gold_total=%d,trade_gold_total_billion=trade_gold_total_billion+%d,trade_gold_daily=%d,help_abuse_ratio=%d,help_abuse_exp=%d,chaos_point=%d,chaos_exp=%d,chaos_mode_count=%d,chaos_kill_count=%d,chaos_die_count=%d,chaos_die_time=from_unixtime(%d),assault_count=%d,luck_point=%d,dungeon_play_count=%d,chaos_kill_time=from_unixtime(%d),expert_job_exp=%d,open_flag=%d,fatigue_battery_charging=%d,escalade_tutorial_flag='%s',power_war_point=%d,village_prev=%d,power_war_assault_count=%d,power_war_assault_victory_count=%d,last_play_time_powerwar=from_unixtime(%d),fatigue_grownup_buff=%d, emotion=%d, add_slot_flag=%d, member_dungeon_flag=%d, member_bonus_fatigue=%d, last_play_dungeon_index=%u, add_equipslot_flag=%d, channel_equipslot_switch=%d, expand_equipslot_switch=%d, visible_flags=%d, growth_power_reward=%d, chaos_respon_time=from_unixtime(%d) where charac_no = %u",0x4(%esp)
08416854 +0x462:  mov    -0x1c(%ebp),%eax
08416857 +0x465:  mov    %eax,(%esp)
0841685a +0x468:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841685f +0x46d:  movl   $0x1,0x4(%esp)
08416867 +0x475:  mov    -0x1c(%ebp),%eax
0841686a +0x478:  mov    %eax,(%esp)
0841686d +0x47b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08416872 +0x480:  mov    %al,-0x1d(%ebp)
08416875 +0x483:  movzbl -0x1d(%ebp),%eax
08416879 +0x487:  xor    $0x1,%eax
0841687c +0x48a:  test   %al,%al
0841687e +0x48c:  je     08416887 <+0x495>
08416880 +0x48e:  mov    $0x0,%eax
08416885 +0x493:  jmp    084168f8 <+0x506>
08416887 +0x495:  mov    0xc(%ebp),%eax
0841688a +0x498:  mov    0xea(%eax),%eax
08416890 +0x49e:  mov    %eax,-0x34(%ebp)
08416893 +0x4a1:  mov    0xc(%ebp),%eax
08416896 +0x4a4:  mov    0xee(%eax),%eax
0841689c +0x4aa:  mov    %eax,-0x30(%ebp)
0841689f +0x4ad:  mov    0xc(%ebp),%eax
084168a2 +0x4b0:  mov    0xf6(%eax),%eax
084168a8 +0x4b6:  mov    %eax,-0x28(%ebp)
084168ab +0x4b9:  mov    0xc(%ebp),%eax
084168ae +0x4bc:  movzbl 0xfa(%eax),%eax
084168b5 +0x4c3:  mov    %al,-0x24(%ebp)
084168b8 +0x4c6:  mov    0xc(%ebp),%eax
084168bb +0x4c9:  mov    0xf2(%eax),%eax
084168c1 +0x4cf:  mov    %eax,-0x2c(%ebp)
084168c4 +0x4d2:  mov    0xc(%ebp),%eax
084168c7 +0x4d5:  mov    0xe6(%eax),%edx
084168cd +0x4db:  mov    &_ZN10GlobalData12s_psimpleSSOE,%eax
084168d2 +0x4e0:  lea    -0x34(%ebp),%ecx
084168d5 +0x4e3:  mov    %ecx,0x8(%esp)
084168d9 +0x4e7:  mov    %edx,0x4(%esp)
084168dd +0x4eb:  mov    %eax,(%esp)
084168e0 +0x4ee:  call   08602906 <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE>  ; WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, WongWork::CSimpleSSO::stUpdateSSOExpireTime_t const&)
084168e5 +0x4f3:  xor    $0x1,%eax
084168e8 +0x4f6:  test   %al,%al
084168ea +0x4f8:  je     084168f3 <+0x501>
084168ec +0x4fa:  mov    $0x0,%eax
084168f1 +0x4ff:  jmp    084168f8 <+0x506>
084168f3 +0x501:  mov    $0x1,%eax
084168f8 +0x506:  add    $0x19c,%esp
084168fe +0x50c:  pop    %ebx
084168ff +0x50d:  pop    %esi
08416900 +0x50e:  pop    %edi
08416901 +0x50f:  pop    %ebp
08416902 +0x510:  ret
08416903 +0x511:  nop
```

## 反编译 C

```c
// DB_SaveCharac::_SaveCharacStat @ 0x84163f2

/* DB_SaveCharac::_SaveCharacStat(SIG_SAVE_CHARAC*) */

undefined4 __thiscall DB_SaveCharac::_SaveCharacStat(DB_SaveCharac *this,SIG_SAVE_CHARAC *param_1)

{
  SIG_SAVE_CHARAC SVar1;
  SIG_SAVE_CHARAC SVar2;
  SIG_SAVE_CHARAC SVar3;
  SIG_SAVE_CHARAC SVar4;
  SIG_SAVE_CHARAC SVar5;
  SIG_SAVE_CHARAC SVar6;
  SIG_SAVE_CHARAC SVar7;
  SIG_SAVE_CHARAC SVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  SIG_SAVE_CHARAC local_28;
  char local_21;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar20 = *(undefined4 *)param_1;
  uVar13 = *(undefined4 *)(param_1 + 0xd6);
  SVar1 = param_1[0xd5];
  SVar2 = param_1[0x102];
  SVar3 = param_1[0x101];
  SVar4 = param_1[0x100];
  SVar5 = param_1[0xff];
  uVar14 = *(undefined4 *)(param_1 + 0xd1);
  sVar9 = *(short *)(param_1 + 0xcf);
  SVar6 = param_1[0xce];
  SVar7 = param_1[0xfe];
  sVar10 = *(short *)(param_1 + 0xfb);
  uVar11 = *(ushort *)(param_1 + 0xcc);
  uVar15 = *(undefined4 *)(param_1 + 0xe2);
  uVar16 = *(undefined4 *)(param_1 + 200);
  uVar17 = *(undefined4 *)(param_1 + 0xc4);
  SVar8 = param_1[0xc3];
  sVar12 = *(short *)(param_1 + 0xc1);
  uVar19 = MySQL::blob_to_str(local_20,0,param_1 + 0x6e,0x10);
  MySQL::set_query(local_20,
                   "upDate charac_stat set village=%d,exp=%d,HP=%d,fatigue=%d,premium_fatigue=%d,last_play_time=from_unixtime(%d),used_fatigue=%d,tutorial_flag=%d,trade_gold_total=%d,trade_gold_total_billion=trade_gold_total_billion+%d,trade_gold_daily=%d,help_abuse_ratio=%d,help_abuse_exp=%d,chaos_point=%d,chaos_exp=%d,chaos_mode_count=%d,chaos_kill_count=%d,chaos_die_count=%d,chaos_die_time=from_unixtime(%d),assault_count=%d,luck_point=%d,dungeon_play_count=%d,chaos_kill_time=from_unixtime(%d),expert_job_exp=%d,open_flag=%d,fatigue_battery_charging=%d,escalade_tutorial_flag=\'%s\',power_war_point=%d,village_prev=%d,power_war_assault_count=%d,power_war_assault_victory_count=%d,last_play_time_powerwar=from_unixtime(%d),fatigue_grownup_buff=%d, emotion=%d, add_slot_flag=%d, member_dungeon_flag=%d, member_bonus_fatigue=%d, last_play_dungeon_index=%u, add_equipslot_flag=%d, channel_equipslot_switch=%d, expand_equipslot_switch=%d, visible_flags=%d, growth_power_reward=%d, chaos_respon_time=from_unixtime(%d) where charac_no = %u"
                   ,(int)(char)param_1[0x62],*(undefined4 *)(param_1 + 0x5e),
                   (uint)(byte)param_1[0x67],(int)*(short *)(param_1 + 99),
                   (uint)*(ushort *)(param_1 + 0x65),*(undefined4 *)(param_1 + 0xde),
                   (uint)*(ushort *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6a),
                   *(undefined4 *)(param_1 + 0x7e),*(undefined4 *)(param_1 + 0x82),
                   *(undefined4 *)(param_1 + 0x86),*(undefined4 *)(param_1 + 0x8a),
                   *(undefined4 *)(param_1 + 0x8e),*(undefined4 *)(param_1 + 0x92),
                   *(undefined4 *)(param_1 + 0x96),*(undefined4 *)(param_1 + 0x9a),
                   *(undefined4 *)(param_1 + 0x9e),*(undefined4 *)(param_1 + 0xa2),
                   *(undefined4 *)(param_1 + 0xa6),*(undefined4 *)(param_1 + 0xab),
                   *(undefined4 *)(param_1 + 0xb3),*(undefined4 *)(param_1 + 0xb7),
                   *(undefined4 *)(param_1 + 0xaf),*(undefined4 *)(param_1 + 0xbb),
                   (int)(char)param_1[0xaa],(int)*(short *)(param_1 + 0xbf),uVar19,(int)sVar12,
                   (int)(char)SVar8,uVar17,uVar16,uVar15,(uint)uVar11,(int)sVar10,(int)(char)SVar7,
                   (uint)(byte)SVar6,(int)sVar9,uVar14,(int)(char)SVar5,(int)(char)SVar4,
                   (int)(char)SVar3,(int)(char)SVar2,(uint)(byte)SVar1,uVar13,uVar20);
  local_21 = MySQL::exec(local_20,true);
  if (local_21 == '\x01') {
    local_38 = *(undefined4 *)(param_1 + 0xea);
    local_34 = *(undefined4 *)(param_1 + 0xee);
    local_2c = *(undefined4 *)(param_1 + 0xf6);
    local_28 = param_1[0xfa];
    local_30 = *(undefined4 *)(param_1 + 0xf2);
    cVar18 = WongWork::CSimpleSSO::updateSSOExpireTime
                       (GlobalData::s_psimpleSSO,*(uint *)(param_1 + 0xe6),
                        (stUpdateSSOExpireTime_t *)&local_38);
    if (cVar18 == '\x01') {
      uVar20 = 1;
    }
    else {
      uVar20 = 0;
    }
  }
  else {
    uVar20 = 0;
  }
  return uVar20;
}
```
