# Reset

`_ZN12_Charac_info5ResetEv`

`_Charac_info::Reset()`

| 类 | 地址 |
|---|---|
| `_Charac_info` | `0x086822b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086822b8  _ZN12_Charac_info5ResetEv
#           _Charac_info::Reset()
# range [0x086822b8, 0x08682a91]
086822b8 +0x000:  push   %ebp
086822b9 +0x001:  mov    %esp,%ebp
086822bb +0x003:  sub    $0x18,%esp
086822be +0x006:  mov    0x8(%ebp),%eax
086822c1 +0x009:  movl   $0x0,(%eax)
086822c7 +0x00f:  mov    0x8(%ebp),%eax
086822ca +0x012:  add    $0x4,%eax
086822cd +0x015:  movl   $0x1e,0x8(%esp)
086822d5 +0x01d:  movl   $0x0,0x4(%esp)
086822dd +0x025:  mov    %eax,(%esp)
086822e0 +0x028:  call   0807dcc0 <_init+0x5b8>
086822e5 +0x02d:  mov    0x8(%ebp),%eax
086822e8 +0x030:  movb   $0x0,0x22(%eax)
086822ec +0x034:  mov    0x8(%ebp),%eax
086822ef +0x037:  movb   $0x0,0x23(%eax)
086822f3 +0x03b:  mov    0x8(%ebp),%eax
086822f6 +0x03e:  movb   $0x0,0x26(%eax)
086822fa +0x042:  mov    0x8(%ebp),%eax
086822fd +0x045:  movw   $0x0,0x27(%eax)
08682303 +0x04b:  mov    0x8(%ebp),%eax
08682306 +0x04e:  movb   $0x0,0x29(%eax)
0868230a +0x052:  mov    0x8(%ebp),%eax
0868230d +0x055:  movb   $0x0,0x2a(%eax)
08682311 +0x059:  mov    0x8(%ebp),%eax
08682314 +0x05c:  movl   $0x0,0x2b(%eax)
0868231b +0x063:  mov    0x8(%ebp),%eax
0868231e +0x066:  movl   $0x0,0x2f(%eax)
08682325 +0x06d:  mov    0x8(%ebp),%eax
08682328 +0x070:  movw   $0x0,0x33(%eax)
0868232e +0x076:  mov    0x8(%ebp),%eax
08682331 +0x079:  movw   $0x0,0x35(%eax)
08682337 +0x07f:  mov    0x8(%ebp),%eax
0868233a +0x082:  movw   $0x0,0x37(%eax)
08682340 +0x088:  mov    0x8(%ebp),%eax
08682343 +0x08b:  add    $0x39,%eax
08682346 +0x08e:  mov    %eax,(%esp)
08682349 +0x091:  call   086947d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x102d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x102d
0868234e +0x096:  mov    0x8(%ebp),%eax
08682351 +0x099:  movw   $0x0,0x77(%eax)
08682357 +0x09f:  mov    0x8(%ebp),%eax
0868235a +0x0a2:  movw   $0x0,0x79(%eax)
08682360 +0x0a8:  mov    0x8(%ebp),%eax
08682363 +0x0ab:  movl   $0x0,0x7b(%eax)
0868236a +0x0b2:  mov    0x8(%ebp),%eax
0868236d +0x0b5:  movl   $0x0,0x7f(%eax)
08682374 +0x0bc:  mov    0x8(%ebp),%eax
08682377 +0x0bf:  add    $0x88,%eax
0868237c +0x0c4:  mov    %eax,(%esp)
0868237f +0x0c7:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
08682384 +0x0cc:  mov    0x8(%ebp),%eax
08682387 +0x0cf:  add    $0xda,%eax
0868238c +0x0d4:  mov    %eax,(%esp)
0868238f +0x0d7:  call   08509a06 <_ZN10CInventory5resetEv>  ; CInventory::reset()
08682394 +0x0dc:  mov    0x8(%ebp),%eax
08682397 +0x0df:  add    $0x892,%eax
0868239c +0x0e4:  mov    %eax,(%esp)
0868239f +0x0e7:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
086823a4 +0x0ec:  mov    0x8(%ebp),%eax
086823a7 +0x0ef:  add    $0xdaa,%eax
086823ac +0x0f4:  mov    %eax,(%esp)
086823af +0x0f7:  call   0850b0c2 <_ZN6CCargo5resetEv>  ; CCargo::reset()
086823b4 +0x0fc:  mov    0x8(%ebp),%eax
086823b7 +0x0ff:  movl   $0x0,0xdbe(%eax)
086823c1 +0x109:  mov    0x8(%ebp),%eax
086823c4 +0x10c:  movb   $0x0,0xdc2(%eax)
086823cb +0x113:  mov    0x8(%ebp),%eax
086823ce +0x116:  movl   $0x0,0xe02(%eax)
086823d8 +0x120:  mov    0x8(%ebp),%eax
086823db +0x123:  movl   $0x0,0xdf4(%eax)
086823e5 +0x12d:  mov    0x8(%ebp),%eax
086823e8 +0x130:  movl   $0x0,0xdf8(%eax)
086823f2 +0x13a:  mov    0x8(%ebp),%eax
086823f5 +0x13d:  movl   $0x0,0xdfe(%eax)
086823ff +0x147:  mov    0x8(%ebp),%eax
08682402 +0x14a:  movl   $0x0,0xe06(%eax)
0868240c +0x154:  mov    0x8(%ebp),%eax
0868240f +0x157:  movl   $0x0,0xe0a(%eax)
08682419 +0x161:  mov    0x8(%ebp),%eax
0868241c +0x164:  add    $0xe0e,%eax
08682421 +0x169:  movl   $0x14,0x8(%esp)
08682429 +0x171:  movl   $0x0,0x4(%esp)
08682431 +0x179:  mov    %eax,(%esp)
08682434 +0x17c:  call   0807dcc0 <_init+0x5b8>
08682439 +0x181:  mov    0x8(%ebp),%eax
0868243c +0x184:  movl   $0x0,0xe22(%eax)
08682446 +0x18e:  mov    0x8(%ebp),%eax
08682449 +0x191:  movl   $0x0,0xe26(%eax)
08682453 +0x19b:  mov    0x8(%ebp),%eax
08682456 +0x19e:  movl   $0x0,0xe2a(%eax)
08682460 +0x1a8:  mov    0x8(%ebp),%eax
08682463 +0x1ab:  movl   $0x0,0xe33(%eax)
0868246d +0x1b5:  mov    0x8(%ebp),%eax
08682470 +0x1b8:  movl   $0x0,0xe37(%eax)
0868247a +0x1c2:  mov    0x8(%ebp),%eax
0868247d +0x1c5:  movl   $0x0,0xe2e(%eax)
08682487 +0x1cf:  mov    0x8(%ebp),%eax
0868248a +0x1d2:  movb   $0x0,0xe32(%eax)
08682491 +0x1d9:  mov    0x8(%ebp),%eax
08682494 +0x1dc:  movb   $0x0,0xe3b(%eax)
0868249b +0x1e3:  mov    0x8(%ebp),%eax
0868249e +0x1e6:  movb   $0x0,0x83(%eax)
086824a5 +0x1ed:  mov    0x8(%ebp),%eax
086824a8 +0x1f0:  movl   $0x0,0x84(%eax)
086824b2 +0x1fa:  mov    0x8(%ebp),%eax
086824b5 +0x1fd:  movl   $0x0,0xe3c(%eax)
086824bf +0x207:  mov    0x8(%ebp),%eax
086824c2 +0x20a:  movl   $0x0,0xde9(%eax)
086824cc +0x214:  mov    0x8(%ebp),%eax
086824cf +0x217:  movw   $0x0,0xded(%eax)
086824d8 +0x220:  mov    0x8(%ebp),%eax
086824db +0x223:  movl   $0x0,0xdef(%eax)
086824e5 +0x22d:  mov    0x8(%ebp),%eax
086824e8 +0x230:  movb   $0x0,0xdf3(%eax)
086824ef +0x237:  mov    0x8(%ebp),%eax
086824f2 +0x23a:  movw   $0x0,0xdfc(%eax)
086824fb +0x243:  mov    0x8(%ebp),%eax
086824fe +0x246:  movl   $0x0,0xe41(%eax)
08682508 +0x250:  mov    0x8(%ebp),%eax
0868250b +0x253:  movl   $0x0,0xe49(%eax)
08682515 +0x25d:  mov    0x8(%ebp),%eax
08682518 +0x260:  movl   $0x0,0xe4d(%eax)
08682522 +0x26a:  mov    0x8(%ebp),%eax
08682525 +0x26d:  movl   $0x0,0xe45(%eax)
0868252f +0x277:  mov    0x8(%ebp),%eax
08682532 +0x27a:  movl   $0x0,0xe51(%eax)
0868253c +0x284:  mov    0x8(%ebp),%eax
0868253f +0x287:  movl   $0x0,0xe55(%eax)
08682549 +0x291:  mov    0x8(%ebp),%eax
0868254c +0x294:  movl   $0x0,0xe59(%eax)
08682556 +0x29e:  mov    0x8(%ebp),%eax
08682559 +0x2a1:  movl   $0x0,0xe61(%eax)
08682563 +0x2ab:  mov    0x8(%ebp),%eax
08682566 +0x2ae:  add    $0xe8d,%eax
0868256b +0x2b3:  movl   $0xc,0x8(%esp)
08682573 +0x2bb:  movl   $0x0,0x4(%esp)
0868257b +0x2c3:  mov    %eax,(%esp)
0868257e +0x2c6:  call   0807dcc0 <_init+0x5b8>
08682583 +0x2cb:  mov    0x8(%ebp),%eax
08682586 +0x2ce:  movb   $0x1,0xe90(%eax)
0868258d +0x2d5:  mov    0x8(%ebp),%eax
08682590 +0x2d8:  movb   $0x0,0x24(%eax)
08682594 +0x2dc:  mov    0x8(%ebp),%eax
08682597 +0x2df:  movb   $0x0,0xe65(%eax)
0868259e +0x2e6:  mov    0x8(%ebp),%eax
086825a1 +0x2e9:  movl   $0x0,0xe5d(%eax)
086825ab +0x2f3:  mov    0x8(%ebp),%eax
086825ae +0x2f6:  movb   $0x0,0xe66(%eax)
086825b5 +0x2fd:  mov    0x8(%ebp),%eax
086825b8 +0x300:  movb   $0x0,0xe67(%eax)
086825bf +0x307:  mov    0x8(%ebp),%eax
086825c2 +0x30a:  movl   $0x0,0xe68(%eax)
086825cc +0x314:  mov    0x8(%ebp),%eax
086825cf +0x317:  movl   $0x0,0xe6c(%eax)
086825d9 +0x321:  mov    0x8(%ebp),%eax
086825dc +0x324:  movl   $0x0,0xe71(%eax)
086825e6 +0x32e:  mov    0x8(%ebp),%eax
086825e9 +0x331:  movl   $0x0,0xe75(%eax)
086825f3 +0x33b:  mov    0x8(%ebp),%eax
086825f6 +0x33e:  movl   $0x0,0xe79(%eax)
08682600 +0x348:  mov    0x8(%ebp),%eax
08682603 +0x34b:  movl   $0x0,0xe7d(%eax)
0868260d +0x355:  mov    0x8(%ebp),%eax
08682610 +0x358:  movl   $0x0,0xe81(%eax)
0868261a +0x362:  mov    0x8(%ebp),%eax
0868261d +0x365:  movl   $0x0,0xe85(%eax)
08682627 +0x36f:  mov    0x8(%ebp),%eax
0868262a +0x372:  movl   $0x0,0xe89(%eax)
08682634 +0x37c:  mov    0x8(%ebp),%eax
08682637 +0x37f:  movb   $0x0,0xe99(%eax)
0868263e +0x386:  mov    0x8(%ebp),%eax
08682641 +0x389:  movl   $0x0,0x71(%eax)
08682648 +0x390:  mov    0x8(%ebp),%eax
0868264b +0x393:  movb   $0x0,0xeb2(%eax)
08682652 +0x39a:  mov    0x8(%ebp),%eax
08682655 +0x39d:  movb   $0x0,0xeb4(%eax)
0868265c +0x3a4:  mov    0x8(%ebp),%eax
0868265f +0x3a7:  movb   $0x0,0xeb8(%eax)
08682666 +0x3ae:  mov    0x8(%ebp),%eax
08682669 +0x3b1:  movb   $0x0,0xeb7(%eax)
08682670 +0x3b8:  mov    0x8(%ebp),%eax
08682673 +0x3bb:  add    $0xeb9,%eax
08682678 +0x3c0:  movl   $0x6,0x8(%esp)
08682680 +0x3c8:  movl   $0x0,0x4(%esp)
08682688 +0x3d0:  mov    %eax,(%esp)
0868268b +0x3d3:  call   0807dcc0 <_init+0x5b8>
08682690 +0x3d8:  mov    0x8(%ebp),%eax
08682693 +0x3db:  movb   $0x0,0xebf(%eax)
0868269a +0x3e2:  mov    0x8(%ebp),%eax
0868269d +0x3e5:  add    $0xec0,%eax
086826a2 +0x3ea:  movl   $0x3,0x8(%esp)
086826aa +0x3f2:  movl   $0x0,0x4(%esp)
086826b2 +0x3fa:  mov    %eax,(%esp)
086826b5 +0x3fd:  call   0807dcc0 <_init+0x5b8>
086826ba +0x402:  mov    0x8(%ebp),%eax
086826bd +0x405:  movb   $0x0,0xec3(%eax)
086826c4 +0x40c:  mov    0x8(%ebp),%eax
086826c7 +0x40f:  movl   $0xffffffff,0xec4(%eax)
086826d1 +0x419:  mov    0x8(%ebp),%eax
086826d4 +0x41c:  movl   $0x17d78400,0xec8(%eax)
086826de +0x426:  mov    0x8(%ebp),%eax
086826e1 +0x429:  add    $0xecc,%eax
086826e6 +0x42e:  mov    %eax,(%esp)
086826e9 +0x431:  call   0869c152 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x89a7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x89a7
086826ee +0x436:  mov    0x8(%ebp),%eax
086826f1 +0x439:  movb   $0x0,0xee4(%eax)
086826f8 +0x440:  mov    0x8(%ebp),%eax
086826fb +0x443:  mov    $0x0,%edx
08682700 +0x448:  mov    %edx,0xee5(%eax)
08682706 +0x44e:  mov    0x8(%ebp),%eax
08682709 +0x451:  movw   $0x0,0x4f(%eax)
0868270f +0x457:  mov    0x8(%ebp),%eax
08682712 +0x45a:  movb   $0x0,0xee9(%eax)
08682719 +0x461:  mov    0x8(%ebp),%eax
0868271c +0x464:  movb   $0x0,0xeea(%eax)
08682723 +0x46b:  mov    0x8(%ebp),%eax
08682726 +0x46e:  movw   $0x0,0xeeb(%eax)
0868272f +0x477:  mov    0x8(%ebp),%eax
08682732 +0x47a:  add    $0xeed,%eax
08682737 +0x47f:  movl   $0x199,0x8(%esp)
0868273f +0x487:  movl   $0x0,0x4(%esp)
08682747 +0x48f:  mov    %eax,(%esp)
0868274a +0x492:  call   0807dcc0 <_init+0x5b8>
0868274f +0x497:  mov    0x8(%ebp),%eax
08682752 +0x49a:  add    $0x55,%eax
08682755 +0x49d:  movl   $0x10,0x8(%esp)
0868275d +0x4a5:  movl   $0x0,0x4(%esp)
08682765 +0x4ad:  mov    %eax,(%esp)
08682768 +0x4b0:  call   0807dcc0 <_init+0x5b8>
0868276d +0x4b5:  mov    0x8(%ebp),%eax
08682770 +0x4b8:  movw   $0x0,0x121f(%eax)
08682779 +0x4c1:  mov    0x8(%ebp),%eax
0868277c +0x4c4:  movl   $0x0,0x1221(%eax)
08682786 +0x4ce:  mov    0x8(%ebp),%eax
08682789 +0x4d1:  movl   $0x0,0x1225(%eax)
08682793 +0x4db:  mov    0x8(%ebp),%eax
08682796 +0x4de:  movw   $0x0,0x1229(%eax)
0868279f +0x4e7:  mov    0x8(%ebp),%eax
086827a2 +0x4ea:  movb   $0x0,0x122b(%eax)
086827a9 +0x4f1:  mov    0x8(%ebp),%eax
086827ac +0x4f4:  movw   $0x0,0x122c(%eax)
086827b5 +0x4fd:  mov    0x8(%ebp),%eax
086827b8 +0x500:  movl   $0x0,0x122e(%eax)
086827c2 +0x50a:  mov    0x8(%ebp),%eax
086827c5 +0x50d:  movw   $0x0,0x1232(%eax)
086827ce +0x516:  mov    0x8(%ebp),%eax
086827d1 +0x519:  movw   $0x0,0x1234(%eax)
086827da +0x522:  mov    0x8(%ebp),%eax
086827dd +0x525:  movw   $0x0,0x1236(%eax)
086827e6 +0x52e:  mov    0x8(%ebp),%eax
086827e9 +0x531:  movb   $0x0,0x1238(%eax)
086827f0 +0x538:  mov    0x8(%ebp),%eax
086827f3 +0x53b:  movb   $0xff,0x1239(%eax)
086827fa +0x542:  mov    0x8(%ebp),%eax
086827fd +0x545:  movw   $0x0,0x123a(%eax)
08682806 +0x54e:  mov    0x8(%ebp),%eax
08682809 +0x551:  movw   $0x0,0x123c(%eax)
08682812 +0x55a:  mov    0x8(%ebp),%eax
08682815 +0x55d:  movb   $0x0,0x123e(%eax)
0868281c +0x564:  mov    0x8(%ebp),%eax
0868281f +0x567:  movb   $0x1,0x1241(%eax)
08682826 +0x56e:  mov    0x8(%ebp),%eax
08682829 +0x571:  movb   $0x0,0x1242(%eax)
08682830 +0x578:  mov    0x8(%ebp),%eax
08682833 +0x57b:  movb   $0x0,0x1243(%eax)
0868283a +0x582:  mov    0x8(%ebp),%eax
0868283d +0x585:  movb   $0x0,0x1244(%eax)
08682844 +0x58c:  mov    0x8(%ebp),%eax
08682847 +0x58f:  movb   $0xff,0x1245(%eax)
0868284e +0x596:  mov    0x8(%ebp),%eax
08682851 +0x599:  movb   $0x0,0x1246(%eax)
08682858 +0x5a0:  mov    0x8(%ebp),%eax
0868285b +0x5a3:  movl   $0x0,0x1247(%eax)
08682865 +0x5ad:  mov    0x8(%ebp),%eax
08682868 +0x5b0:  movl   $0x0,0x124b(%eax)
08682872 +0x5ba:  mov    0x8(%ebp),%eax
08682875 +0x5bd:  movb   $0x0,0x124f(%eax)
0868287c +0x5c4:  mov    0x8(%ebp),%eax
0868287f +0x5c7:  movl   $0x0,0x1250(%eax)
08682889 +0x5d1:  mov    0x8(%ebp),%eax
0868288c +0x5d4:  add    $0x1254,%eax
08682891 +0x5d9:  mov    %eax,(%esp)
08682894 +0x5dc:  call   0869ac72 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x74c7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x74c7
08682899 +0x5e1:  mov    0x8(%ebp),%eax
0868289c +0x5e4:  movw   $0x0,0x126c(%eax)
086828a5 +0x5ed:  mov    0x8(%ebp),%eax
086828a8 +0x5f0:  movb   $0x0,0x126e(%eax)
086828af +0x5f7:  mov    0x8(%ebp),%eax
086828b2 +0x5fa:  movl   $0x0,0x126f(%eax)
086828bc +0x604:  mov    0x8(%ebp),%eax
086828bf +0x607:  movb   $0x0,0x1273(%eax)
086828c6 +0x60e:  mov    0x8(%ebp),%eax
086828c9 +0x611:  movb   $0x0,0x1274(%eax)
086828d0 +0x618:  mov    0x8(%ebp),%eax
086828d3 +0x61b:  movb   $0x0,0x1275(%eax)
086828da +0x622:  mov    0x8(%ebp),%eax
086828dd +0x625:  movb   $0x0,0x1276(%eax)
086828e4 +0x62c:  mov    0x8(%ebp),%eax
086828e7 +0x62f:  movb   $0x0,0x1277(%eax)
086828ee +0x636:  mov    0x8(%ebp),%eax
086828f1 +0x639:  movb   $0x0,0x1278(%eax)
086828f8 +0x640:  mov    0x8(%ebp),%eax
086828fb +0x643:  movb   $0x0,0x1279(%eax)
08682902 +0x64a:  mov    0x8(%ebp),%eax
08682905 +0x64d:  movb   $0x0,0x127a(%eax)
0868290c +0x654:  mov    0x8(%ebp),%eax
0868290f +0x657:  add    $0xe40,%eax
08682914 +0x65c:  mov    %eax,(%esp)
08682917 +0x65f:  call   08695c6c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x24c1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x24c1
0868291c +0x664:  mov    0x8(%ebp),%eax
0868291f +0x667:  movb   $0x0,0x127b(%eax)
08682926 +0x66e:  mov    0x8(%ebp),%eax
08682929 +0x671:  movl   $0x0,0x127c(%eax)
08682933 +0x67b:  mov    0x8(%ebp),%eax
08682936 +0x67e:  movb   $0x0,0x1280(%eax)
0868293d +0x685:  mov    0x8(%ebp),%eax
08682940 +0x688:  add    $0x1281,%eax
08682945 +0x68d:  mov    %eax,(%esp)
08682948 +0x690:  call   0844d616 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x22c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x22c
0868294d +0x695:  mov    0x8(%ebp),%eax
08682950 +0x698:  movl   $0x0,0x1291(%eax)
0868295a +0x6a2:  mov    0x8(%ebp),%eax
0868295d +0x6a5:  movl   $0x0,0x128d(%eax)
08682967 +0x6af:  mov    0x8(%ebp),%eax
0868296a +0x6b2:  movl   $0x0,0x1295(%eax)
08682974 +0x6bc:  mov    0x8(%ebp),%eax
08682977 +0x6bf:  movl   $0x0,0x1299(%eax)
08682981 +0x6c9:  mov    0x8(%ebp),%eax
08682984 +0x6cc:  add    $0x129d,%eax
08682989 +0x6d1:  movl   $0x8,0x8(%esp)
08682991 +0x6d9:  movl   $0x0,0x4(%esp)
08682999 +0x6e1:  mov    %eax,(%esp)
0868299c +0x6e4:  call   0807dcc0 <_init+0x5b8>
086829a1 +0x6e9:  mov    0x8(%ebp),%eax
086829a4 +0x6ec:  add    $0x12a5,%eax
086829a9 +0x6f1:  movl   $0x8,0x8(%esp)
086829b1 +0x6f9:  movl   $0x0,0x4(%esp)
086829b9 +0x701:  mov    %eax,(%esp)
086829bc +0x704:  call   0807dcc0 <_init+0x5b8>
086829c1 +0x709:  mov    0x8(%ebp),%eax
086829c4 +0x70c:  movl   $0x0,0x12ad(%eax)
086829ce +0x716:  mov    0x8(%ebp),%eax
086829d1 +0x719:  movl   $0x0,0x12b1(%eax)
086829db +0x723:  mov    0x8(%ebp),%eax
086829de +0x726:  movw   $0x0,0x12b5(%eax)
086829e7 +0x72f:  mov    0x8(%ebp),%eax
086829ea +0x732:  add    $0x12b7,%eax
086829ef +0x737:  movl   $0x200,0x8(%esp)
086829f7 +0x73f:  movl   $0x0,0x4(%esp)
086829ff +0x747:  mov    %eax,(%esp)
08682a02 +0x74a:  call   0807dcc0 <_init+0x5b8>
08682a07 +0x74f:  mov    0x8(%ebp),%eax
08682a0a +0x752:  movb   $0x0,0x14b7(%eax)
08682a11 +0x759:  mov    0x8(%ebp),%eax
08682a14 +0x75c:  movl   $0x0,0x14b8(%eax)
08682a1e +0x766:  mov    0x8(%ebp),%eax
08682a21 +0x769:  movb   $0x0,0x14bc(%eax)
08682a28 +0x770:  mov    0x8(%ebp),%eax
08682a2b +0x773:  movb   $0x0,0x14bd(%eax)
08682a32 +0x77a:  mov    0x8(%ebp),%eax
08682a35 +0x77d:  movl   $0x0,0x14be(%eax)
08682a3f +0x787:  mov    0x8(%ebp),%eax
08682a42 +0x78a:  movl   $0x0,0x14c2(%eax)
08682a4c +0x794:  mov    0x8(%ebp),%eax
08682a4f +0x797:  movl   $0x0,0x14c6(%eax)
08682a59 +0x7a1:  mov    0x8(%ebp),%eax
08682a5c +0x7a4:  movw   $0x0,0x14ca(%eax)
08682a65 +0x7ad:  mov    0x8(%ebp),%eax
08682a68 +0x7b0:  movw   $0x0,0x14cc(%eax)
08682a71 +0x7b9:  mov    0x8(%ebp),%eax
08682a74 +0x7bc:  movb   $0x0,0x14ce(%eax)
08682a7b +0x7c3:  mov    0x8(%ebp),%eax
08682a7e +0x7c6:  movb   $0x0,0x14cf(%eax)
08682a85 +0x7cd:  mov    0x8(%ebp),%eax
08682a88 +0x7d0:  movb   $0x0,0x14d0(%eax)
08682a8f +0x7d7:  leave
08682a90 +0x7d8:  ret
08682a91 +0x7d9:  nop
```

## 反编译 C

```c
// _Charac_info::Reset @ 0x86822b8

/* _Charac_info::Reset() */

void __thiscall _Charac_info::Reset(_Charac_info *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x1e);
  this[0x22] = (_Charac_info)0x0;
  this[0x23] = (_Charac_info)0x0;
  this[0x26] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0x27) = 0;
  this[0x29] = (_Charac_info)0x0;
  this[0x2a] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x2b) = 0;
  *(undefined4 *)(this + 0x2f) = 0;
  *(undefined2 *)(this + 0x33) = 0;
  *(undefined2 *)(this + 0x35) = 0;
  *(undefined2 *)(this + 0x37) = 0;
  CommonTime::clear((CommonTime *)(this + 0x39));
  *(undefined2 *)(this + 0x77) = 0;
  *(undefined2 *)(this + 0x79) = 0;
  *(undefined4 *)(this + 0x7b) = 0;
  *(undefined4 *)(this + 0x7f) = 0;
  _Additioal_info::clear((_Additioal_info *)(this + 0x88));
  CInventory::reset((CInventory *)(this + 0xda));
  SkillSlot::clear_all_skills_both((SkillSlot *)(this + 0x892));
  CCargo::reset((CCargo *)(this + 0xdaa));
  *(undefined4 *)(this + 0xdbe) = 0;
  this[0xdc2] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xe02) = 0;
  *(undefined4 *)(this + 0xdf4) = 0;
  *(undefined4 *)(this + 0xdf8) = 0;
  *(undefined4 *)(this + 0xdfe) = 0;
  *(undefined4 *)(this + 0xe06) = 0;
  *(undefined4 *)(this + 0xe0a) = 0;
  memset(this + 0xe0e,0,0x14);
  *(undefined4 *)(this + 0xe22) = 0;
  *(undefined4 *)(this + 0xe26) = 0;
  *(undefined4 *)(this + 0xe2a) = 0;
  *(undefined4 *)(this + 0xe33) = 0;
  *(undefined4 *)(this + 0xe37) = 0;
  *(undefined4 *)(this + 0xe2e) = 0;
  this[0xe32] = (_Charac_info)0x0;
  this[0xe3b] = (_Charac_info)0x0;
  this[0x83] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0xe3c) = 0;
  *(undefined4 *)(this + 0xde9) = 0;
  *(undefined2 *)(this + 0xded) = 0;
  *(undefined4 *)(this + 0xdef) = 0;
  this[0xdf3] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xe41) = 0;
  *(undefined4 *)(this + 0xe49) = 0;
  *(undefined4 *)(this + 0xe4d) = 0;
  *(undefined4 *)(this + 0xe45) = 0;
  *(undefined4 *)(this + 0xe51) = 0;
  *(undefined4 *)(this + 0xe55) = 0;
  *(undefined4 *)(this + 0xe59) = 0;
  *(undefined4 *)(this + 0xe61) = 0;
  memset(this + 0xe8d,0,0xc);
  this[0xe90] = (_Charac_info)0x1;
  this[0x24] = (_Charac_info)0x0;
  this[0xe65] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xe5d) = 0;
  this[0xe66] = (_Charac_info)0x0;
  this[0xe67] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xe68) = 0;
  *(undefined4 *)(this + 0xe6c) = 0;
  *(undefined4 *)(this + 0xe71) = 0;
  *(undefined4 *)(this + 0xe75) = 0;
  *(undefined4 *)(this + 0xe79) = 0;
  *(undefined4 *)(this + 0xe7d) = 0;
  *(undefined4 *)(this + 0xe81) = 0;
  *(undefined4 *)(this + 0xe85) = 0;
  *(undefined4 *)(this + 0xe89) = 0;
  this[0xe99] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x71) = 0;
  this[0xeb2] = (_Charac_info)0x0;
  this[0xeb4] = (_Charac_info)0x0;
  this[0xeb8] = (_Charac_info)0x0;
  this[0xeb7] = (_Charac_info)0x0;
  memset(this + 0xeb9,0,6);
  this[0xebf] = (_Charac_info)0x0;
  memset(this + 0xec0,0,3);
  this[0xec3] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xec4) = 0xffffffff;
  *(undefined4 *)(this + 0xec8) = 400000000;
  std::
  map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>::
  clear((map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
         *)(this + 0xecc));
  this[0xee4] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0xee5) = 0;
  *(undefined2 *)(this + 0x4f) = 0;
  this[0xee9] = (_Charac_info)0x0;
  this[0xeea] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0xeeb) = 0;
  memset(this + 0xeed,0,0x199);
  memset(this + 0x55,0,0x10);
  *(undefined2 *)(this + 0x121f) = 0;
  *(undefined4 *)(this + 0x1221) = 0;
  *(undefined4 *)(this + 0x1225) = 0;
  *(undefined2 *)(this + 0x1229) = 0;
  this[0x122b] = (_Charac_info)0x0;
  *(undefined2 *)(this + 0x122c) = 0;
  *(undefined4 *)(this + 0x122e) = 0;
  *(undefined2 *)(this + 0x1232) = 0;
  *(undefined2 *)(this + 0x1234) = 0;
  *(undefined2 *)(this + 0x1236) = 0;
  this[0x1238] = (_Charac_info)0x0;
  this[0x1239] = (_Charac_info)0xff;
  *(undefined2 *)(this + 0x123a) = 0;
  *(undefined2 *)(this + 0x123c) = 0;
  this[0x123e] = (_Charac_info)0x0;
  this[0x1241] = (_Charac_info)0x1;
  this[0x1242] = (_Charac_info)0x0;
  this[0x1243] = (_Charac_info)0x0;
  this[0x1244] = (_Charac_info)0x0;
  this[0x1245] = (_Charac_info)0xff;
  this[0x1246] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x1247) = 0;
  *(undefined4 *)(this + 0x124b) = 0;
  this[0x124f] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x1250) = 0;
  std::
  map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
  ::clear((map<int,STSkillCommandData,std::less<int>,std::allocator<std::pair<int_const,STSkillCommandData>>>
           *)(this + 0x1254));
  *(undefined2 *)(this + 0x126c) = 0;
  this[0x126e] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x126f) = 0;
  this[0x1273] = (_Charac_info)0x0;
  this[0x1274] = (_Charac_info)0x0;
  this[0x1275] = (_Charac_info)0x0;
  this[0x1276] = (_Charac_info)0x0;
  this[0x1277] = (_Charac_info)0x0;
  this[0x1278] = (_Charac_info)0x0;
  this[0x1279] = (_Charac_info)0x0;
  this[0x127a] = (_Charac_info)0x0;
  tagCharacVisibleFlag::reset((tagCharacVisibleFlag *)(this + 0xe40));
  this[0x127b] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x127c) = 0;
  this[0x1280] = (_Charac_info)0x0;
  stAuraAvatarOption::reset((stAuraAvatarOption *)(this + 0x1281));
  *(undefined4 *)(this + 0x1291) = 0;
  *(undefined4 *)(this + 0x128d) = 0;
  *(undefined4 *)(this + 0x1295) = 0;
  *(undefined4 *)(this + 0x1299) = 0;
  memset(this + 0x129d,0,8);
  memset(this + 0x12a5,0,8);
  *(undefined4 *)(this + 0x12ad) = 0;
  *(undefined4 *)(this + 0x12b1) = 0;
  *(undefined2 *)(this + 0x12b5) = 0;
  memset(this + 0x12b7,0,0x200);
  this[0x14b7] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x14b8) = 0;
  this[0x14bc] = (_Charac_info)0x0;
  this[0x14bd] = (_Charac_info)0x0;
  *(undefined4 *)(this + 0x14be) = 0;
  *(undefined4 *)(this + 0x14c2) = 0;
  *(undefined4 *)(this + 0x14c6) = 0;
  *(undefined2 *)(this + 0x14ca) = 0;
  *(undefined2 *)(this + 0x14cc) = 0;
  this[0x14ce] = (_Charac_info)0x0;
  this[0x14cf] = (_Charac_info)0x0;
  this[0x14d0] = (_Charac_info)0x0;
  return;
}
```
