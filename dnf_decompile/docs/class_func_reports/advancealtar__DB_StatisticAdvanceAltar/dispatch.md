# dispatch

`_ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream`

`advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_StatisticAdvanceAltar` | `0x081412b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081412b2  _ZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6Stream
#           advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*)
# range [0x081412b2, 0x08141780]
081412b2 +0x000:  push   %ebp
081412b3 +0x001:  mov    %esp,%ebp
081412b5 +0x003:  push   %edi
081412b6 +0x004:  push   %esi
081412b7 +0x005:  push   %ebx
081412b8 +0x006:  sub    $0xbc,%esp
081412be +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
081412c3 +0x011:  movl   $0x0,0x8(%esp)
081412cb +0x019:  movl   $0x4,0x4(%esp)
081412d3 +0x021:  mov    %eax,(%esp)
081412d6 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081412db +0x029:  mov    %eax,-0x30(%ebp)
081412de +0x02c:  lea    -0x90(%ebp),%eax
081412e4 +0x032:  mov    %eax,(%esp)
081412e7 +0x035:  call   086b1fc0 <_Z19__GetCurrentDNFDateR2tm>  ; __GetCurrentDNFDate(tm&)
081412ec +0x03a:  movl   $0x0,-0x5c(%ebp)
081412f3 +0x041:  movl   $0x0,-0x58(%ebp)
081412fa +0x048:  movl   $0x0,-0x54(%ebp)
08141301 +0x04f:  mov    -0x84(%ebp),%eax
08141307 +0x055:  mov    -0x80(%ebp),%edx
0814130a +0x058:  lea    0x1(%edx),%ecx
0814130d +0x05b:  mov    -0x7c(%ebp),%edx
08141310 +0x05e:  add    $0x76c,%edx
08141316 +0x064:  mov    %eax,0x10(%esp)
0814131a +0x068:  mov    %ecx,0xc(%esp)
0814131e +0x06c:  mov    %edx,0x8(%esp)
08141322 +0x070:  movl   $"%04d-%02d-%02d",0x4(%esp)
0814132a +0x078:  lea    -0x5c(%ebp),%eax
0814132d +0x07b:  mov    %eax,(%esp)
08141330 +0x07e:  call   0807e440 <_init+0xd38>
08141335 +0x083:  movl   $0x0,-0x60(%ebp)
0814133c +0x08a:  lea    -0x60(%ebp),%eax
0814133f +0x08d:  mov    %eax,0x4(%esp)
08141343 +0x091:  mov    0x14(%ebp),%eax
08141346 +0x094:  mov    %eax,(%esp)
08141349 +0x097:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0814134e +0x09c:  movl   $0x0,-0x2c(%ebp)
08141355 +0x0a3:  jmp    081414dc <+0x22a>
0814135a +0x0a8:  mov    0x14(%ebp),%eax
0814135d +0x0ab:  mov    %eax,(%esp)
08141360 +0x0ae:  call   081427e0 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xb34>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xb34
08141365 +0x0b3:  mov    %eax,-0x28(%ebp)
08141368 +0x0b6:  cmpl   $0x0,-0x28(%ebp)
0814136c +0x0ba:  jne    0814139a <+0xe8>
0814136e +0x0bc:  movl   $0x4,(%esp)
08141375 +0x0c3:  call   08725800 <__cxa_allocate_exception>
0814137a +0x0c8:  mov    %eax,%edx
0814137c +0x0ca:  movl   $0x624,(%edx)
08141382 +0x0d0:  movl   $0x0,0x8(%esp)
0814138a +0x0d8:  movl   $&_ZTIi,0x4(%esp)
08141392 +0x0e0:  mov    %eax,(%esp)
08141395 +0x0e3:  call   08724c50 <__cxa_throw>
0814139a +0x0e8:  mov    -0x28(%ebp),%eax
0814139d +0x0eb:  mov    0xc(%eax),%eax
081413a0 +0x0ee:  mov    %eax,-0xa4(%ebp)
081413a6 +0x0f4:  mov    -0x28(%ebp),%eax
081413a9 +0x0f7:  mov    0x8(%eax),%edi
081413ac +0x0fa:  mov    -0x28(%ebp),%eax
081413af +0x0fd:  mov    0x4(%eax),%esi
081413b2 +0x100:  mov    -0x28(%ebp),%eax
081413b5 +0x103:  mov    (%eax),%ebx
081413b7 +0x105:  movl   $0x0,0xc(%esp)
081413bf +0x10d:  movl   $0x626,0x8(%esp)
081413c7 +0x115:  movl   $&_ZZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
081413cf +0x11d:  lea    -0x50(%ebp),%eax
081413d2 +0x120:  mov    %eax,(%esp)
081413d5 +0x123:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081413da +0x128:  mov    -0xa4(%ebp),%eax
081413e0 +0x12e:  mov    %eax,0x14(%esp)
081413e4 +0x132:  mov    %edi,0x10(%esp)
081413e8 +0x136:  mov    %esi,0xc(%esp)
081413ec +0x13a:  mov    %ebx,0x8(%esp)
081413f0 +0x13e:  movl   $"[AdvanceAltar] %u,%u,%u,%u",0x4(%esp)
081413f8 +0x146:  lea    -0x50(%ebp),%eax
081413fb +0x149:  mov    %eax,(%esp)
081413fe +0x14c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08141403 +0x151:  mov    -0x28(%ebp),%eax
08141406 +0x154:  mov    (%eax),%ebx
08141408 +0x156:  mov    -0x28(%ebp),%eax
0814140b +0x159:  mov    0xc(%eax),%ecx
0814140e +0x15c:  mov    -0x28(%ebp),%eax
08141411 +0x15f:  mov    0x8(%eax),%edx
08141414 +0x162:  mov    -0x28(%ebp),%eax
08141417 +0x165:  mov    0x4(%eax),%eax
0814141a +0x168:  mov    %ebx,0x18(%esp)
0814141e +0x16c:  lea    -0x5c(%ebp),%ebx
08141421 +0x16f:  mov    %ebx,0x14(%esp)
08141425 +0x173:  mov    %ecx,0x10(%esp)
08141429 +0x177:  mov    %edx,0xc(%esp)
0814142d +0x17b:  mov    %eax,0x8(%esp)
08141431 +0x17f:  movl   $" upDate log_advance_alter_entrance  set entrance_count = entrance_count + %u  , success_count = success_count + %u  , obtain_star = obtain_star + %u  where occ_date = '%s' and stage_id = %u",0x4(%esp)
08141439 +0x187:  mov    -0x30(%ebp),%eax
0814143c +0x18a:  mov    %eax,(%esp)
0814143f +0x18d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08141444 +0x192:  movl   $0x1,0x4(%esp)
0814144c +0x19a:  mov    -0x30(%ebp),%eax
0814144f +0x19d:  mov    %eax,(%esp)
08141452 +0x1a0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08141457 +0x1a5:  xor    $0x1,%eax
0814145a +0x1a8:  test   %al,%al
0814145c +0x1aa:  jne    0814146f <+0x1bd>
0814145e +0x1ac:  mov    -0x30(%ebp),%eax
08141461 +0x1af:  mov    %eax,(%esp)
08141464 +0x1b2:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08141469 +0x1b7:  or     %edx,%eax
0814146b +0x1b9:  test   %eax,%eax
0814146d +0x1bb:  jne    08141476 <+0x1c4>
0814146f +0x1bd:  mov    $0x1,%eax
08141474 +0x1c2:  jmp    0814147b <+0x1c9>
08141476 +0x1c4:  mov    $0x0,%eax
0814147b +0x1c9:  test   %al,%al
0814147d +0x1cb:  je     081414d8 <+0x226>
0814147f +0x1cd:  mov    -0x28(%ebp),%eax
08141482 +0x1d0:  mov    0xc(%eax),%ebx
08141485 +0x1d3:  mov    -0x28(%ebp),%eax
08141488 +0x1d6:  mov    0x8(%eax),%ecx
0814148b +0x1d9:  mov    -0x28(%ebp),%eax
0814148e +0x1dc:  mov    0x4(%eax),%edx
08141491 +0x1df:  mov    -0x28(%ebp),%eax
08141494 +0x1e2:  mov    (%eax),%eax
08141496 +0x1e4:  mov    %ebx,0x18(%esp)
0814149a +0x1e8:  mov    %ecx,0x14(%esp)
0814149e +0x1ec:  mov    %edx,0x10(%esp)
081414a2 +0x1f0:  mov    %eax,0xc(%esp)
081414a6 +0x1f4:  lea    -0x5c(%ebp),%eax
081414a9 +0x1f7:  mov    %eax,0x8(%esp)
081414ad +0x1fb:  movl   $" inSert into log_advance_alter_entrance(occ_date,  stage_id, entrance_count, success_count, obtain_star)  values('%s', %u, %u, %u, %u) ",0x4(%esp)
081414b5 +0x203:  mov    -0x30(%ebp),%eax
081414b8 +0x206:  mov    %eax,(%esp)
081414bb +0x209:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081414c0 +0x20e:  movl   $0x1,0x4(%esp)
081414c8 +0x216:  mov    -0x30(%ebp),%eax
081414cb +0x219:  mov    %eax,(%esp)
081414ce +0x21c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081414d3 +0x221:  xor    $0x1,%eax
081414d6 +0x224:  test   %al,%al
081414d8 +0x226:  addl   $0x1,-0x2c(%ebp)
081414dc +0x22a:  mov    -0x60(%ebp),%eax
081414df +0x22d:  cmp    %eax,-0x2c(%ebp)
081414e2 +0x230:  setl   %al
081414e5 +0x233:  test   %al,%al
081414e7 +0x235:  jne    0814135a <+0xa8>
081414ed +0x23b:  movl   $0x0,-0x64(%ebp)
081414f4 +0x242:  lea    -0x64(%ebp),%eax
081414f7 +0x245:  mov    %eax,0x4(%esp)
081414fb +0x249:  mov    0x14(%ebp),%eax
081414fe +0x24c:  mov    %eax,(%esp)
08141501 +0x24f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08141506 +0x254:  movl   $0x0,-0x24(%ebp)
0814150d +0x25b:  jmp    081416ee <+0x43c>
08141512 +0x260:  mov    0x14(%ebp),%eax
08141515 +0x263:  mov    %eax,(%esp)
08141518 +0x266:  call   08142834 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xb88>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xb88
0814151d +0x26b:  mov    %eax,-0x20(%ebp)
08141520 +0x26e:  cmpl   $0x0,-0x20(%ebp)
08141524 +0x272:  jne    08141552 <+0x2a0>
08141526 +0x274:  movl   $0x4,(%esp)
0814152d +0x27b:  call   08725800 <__cxa_allocate_exception>
08141532 +0x280:  mov    %eax,%edx
08141534 +0x282:  movl   $0x64d,(%edx)
0814153a +0x288:  movl   $0x0,0x8(%esp)
08141542 +0x290:  movl   $&_ZTIi,0x4(%esp)
0814154a +0x298:  mov    %eax,(%esp)
0814154d +0x29b:  call   08724c50 <__cxa_throw>
08141552 +0x2a0:  mov    -0x20(%ebp),%eax
08141555 +0x2a3:  movzwl 0xc(%eax),%eax
08141559 +0x2a7:  movzwl %ax,%eax
0814155c +0x2aa:  mov    %eax,-0xa0(%ebp)
08141562 +0x2b0:  mov    -0x20(%ebp),%eax
08141565 +0x2b3:  movzwl 0xa(%eax),%eax
08141569 +0x2b7:  movzwl %ax,%eax
0814156c +0x2ba:  mov    %eax,-0x9c(%ebp)
08141572 +0x2c0:  mov    -0x20(%ebp),%eax
08141575 +0x2c3:  movzwl 0x8(%eax),%eax
08141579 +0x2c7:  movzwl %ax,%edi
0814157c +0x2ca:  mov    -0x20(%ebp),%eax
0814157f +0x2cd:  mov    0x4(%eax),%esi
08141582 +0x2d0:  mov    -0x20(%ebp),%eax
08141585 +0x2d3:  movzwl (%eax),%eax
08141588 +0x2d6:  movzwl %ax,%ebx
0814158b +0x2d9:  movl   $0x0,0xc(%esp)
08141593 +0x2e1:  movl   $0x64f,0x8(%esp)
0814159b +0x2e9:  movl   $&_ZZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
081415a3 +0x2f1:  lea    -0x40(%ebp),%eax
081415a6 +0x2f4:  mov    %eax,(%esp)
081415a9 +0x2f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081415ae +0x2fc:  mov    -0xa0(%ebp),%eax
081415b4 +0x302:  mov    %eax,0x18(%esp)
081415b8 +0x306:  mov    -0x9c(%ebp),%eax
081415be +0x30c:  mov    %eax,0x14(%esp)
081415c2 +0x310:  mov    %edi,0x10(%esp)
081415c6 +0x314:  mov    %esi,0xc(%esp)
081415ca +0x318:  mov    %ebx,0x8(%esp)
081415ce +0x31c:  movl   $"[AdvanceAltar] %u,%u,%u,%u,%u",0x4(%esp)
081415d6 +0x324:  lea    -0x40(%ebp),%eax
081415d9 +0x327:  mov    %eax,(%esp)
081415dc +0x32a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081415e1 +0x32f:  mov    -0x20(%ebp),%eax
081415e4 +0x332:  movzwl 0x8(%eax),%eax
081415e8 +0x336:  movzwl %ax,%esi
081415eb +0x339:  mov    -0x20(%ebp),%eax
081415ee +0x33c:  mov    0x4(%eax),%ebx
081415f1 +0x33f:  mov    -0x20(%ebp),%eax
081415f4 +0x342:  movzwl (%eax),%eax
081415f7 +0x345:  movzwl %ax,%ecx
081415fa +0x348:  mov    -0x20(%ebp),%eax
081415fd +0x34b:  movzwl 0xc(%eax),%eax
08141601 +0x34f:  movzwl %ax,%edx
08141604 +0x352:  mov    -0x20(%ebp),%eax
08141607 +0x355:  movzwl 0xa(%eax),%eax
0814160b +0x359:  movzwl %ax,%eax
0814160e +0x35c:  mov    %esi,0x1c(%esp)
08141612 +0x360:  mov    %ebx,0x18(%esp)
08141616 +0x364:  mov    %ecx,0x14(%esp)
0814161a +0x368:  lea    -0x5c(%ebp),%ecx
0814161d +0x36b:  mov    %ecx,0x10(%esp)
08141621 +0x36f:  mov    %edx,0xc(%esp)
08141625 +0x373:  mov    %eax,0x8(%esp)
08141629 +0x377:  movl   $" upDate log_advance_alter_layer_stat  set use_count = use_count + %u, use_star = use_star + %u  where occ_date = '%s' and item_type = %u and item_id = %u and item_level = %u",0x4(%esp)
08141631 +0x37f:  mov    -0x30(%ebp),%eax
08141634 +0x382:  mov    %eax,(%esp)
08141637 +0x385:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0814163c +0x38a:  movl   $0x1,0x4(%esp)
08141644 +0x392:  mov    -0x30(%ebp),%eax
08141647 +0x395:  mov    %eax,(%esp)
0814164a +0x398:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0814164f +0x39d:  xor    $0x1,%eax
08141652 +0x3a0:  test   %al,%al
08141654 +0x3a2:  jne    08141667 <+0x3b5>
08141656 +0x3a4:  mov    -0x30(%ebp),%eax
08141659 +0x3a7:  mov    %eax,(%esp)
0814165c +0x3aa:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08141661 +0x3af:  or     %edx,%eax
08141663 +0x3b1:  test   %eax,%eax
08141665 +0x3b3:  jne    0814166e <+0x3bc>
08141667 +0x3b5:  mov    $0x1,%eax
0814166c +0x3ba:  jmp    08141673 <+0x3c1>
0814166e +0x3bc:  mov    $0x0,%eax
08141673 +0x3c1:  test   %al,%al
08141675 +0x3c3:  je     081416ea <+0x438>
08141677 +0x3c5:  mov    -0x20(%ebp),%eax
0814167a +0x3c8:  movzwl 0xc(%eax),%eax
0814167e +0x3cc:  movzwl %ax,%esi
08141681 +0x3cf:  mov    -0x20(%ebp),%eax
08141684 +0x3d2:  movzwl 0xa(%eax),%eax
08141688 +0x3d6:  movzwl %ax,%ebx
0814168b +0x3d9:  mov    -0x20(%ebp),%eax
0814168e +0x3dc:  movzwl 0x8(%eax),%eax
08141692 +0x3e0:  movzwl %ax,%ecx
08141695 +0x3e3:  mov    -0x20(%ebp),%eax
08141698 +0x3e6:  mov    0x4(%eax),%edx
0814169b +0x3e9:  mov    -0x20(%ebp),%eax
0814169e +0x3ec:  movzwl (%eax),%eax
081416a1 +0x3ef:  movzwl %ax,%eax
081416a4 +0x3f2:  mov    %esi,0x1c(%esp)
081416a8 +0x3f6:  mov    %ebx,0x18(%esp)
081416ac +0x3fa:  mov    %ecx,0x14(%esp)
081416b0 +0x3fe:  mov    %edx,0x10(%esp)
081416b4 +0x402:  mov    %eax,0xc(%esp)
081416b8 +0x406:  lea    -0x5c(%ebp),%eax
081416bb +0x409:  mov    %eax,0x8(%esp)
081416bf +0x40d:  movl   $" inSert into log_advance_alter_layer_stat(occ_date,  item_type, item_id, item_level, use_count, use_star) values('%s', %u, %u, %u, %u, %u)",0x4(%esp)
081416c7 +0x415:  mov    -0x30(%ebp),%eax
081416ca +0x418:  mov    %eax,(%esp)
081416cd +0x41b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081416d2 +0x420:  movl   $0x1,0x4(%esp)
081416da +0x428:  mov    -0x30(%ebp),%eax
081416dd +0x42b:  mov    %eax,(%esp)
081416e0 +0x42e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081416e5 +0x433:  xor    $0x1,%eax
081416e8 +0x436:  test   %al,%al
081416ea +0x438:  addl   $0x1,-0x24(%ebp)
081416ee +0x43c:  mov    -0x64(%ebp),%eax
081416f1 +0x43f:  cmp    %eax,-0x24(%ebp)
081416f4 +0x442:  setl   %al
081416f7 +0x445:  test   %al,%al
081416f9 +0x447:  jne    08141512 <+0x260>
081416ff +0x44d:  mov    $0x1,%ebx
08141704 +0x452:  jmp    08141774 <+0x4c2>
08141706 +0x454:  cmp    $0x1,%edx
08141709 +0x457:  je     08141713 <+0x461>
0814170b +0x459:  mov    %eax,(%esp)
0814170e +0x45c:  call   08ae3750 <_Unwind_Resume>
08141713 +0x461:  mov    %eax,(%esp)
08141716 +0x464:  call   08725ce0 <__cxa_begin_catch>
0814171b +0x469:  mov    (%eax),%eax
0814171d +0x46b:  mov    %eax,-0x1c(%ebp)
08141720 +0x46e:  mov    -0x1c(%ebp),%eax
08141723 +0x471:  mov    %eax,0x14(%esp)
08141727 +0x475:  movl   $"[AdvanceAltar] query error line(%u)",0x10(%esp)
0814172f +0x47d:  movl   $0x674,0xc(%esp)
08141737 +0x485:  movl   $&_ZZN12advancealtar24DB_StatisticAdvanceAltar8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0814173f +0x48d:  movl   $"localglobal/global_AdvanceAltar_Dispatcher.cpp",0x4(%esp)
08141747 +0x495:  movl   $0x1,(%esp)
0814174e +0x49c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08141753 +0x4a1:  mov    $0x0,%ebx
08141758 +0x4a6:  call   08725c30 <__cxa_end_catch>
0814175d +0x4ab:  jmp    08141774 <+0x4c2>
0814175f +0x4ad:  mov    %edx,%ebx
08141761 +0x4af:  mov    %eax,%esi
08141763 +0x4b1:  call   08725c30 <__cxa_end_catch>
08141768 +0x4b6:  mov    %esi,%eax
0814176a +0x4b8:  mov    %ebx,%edx
0814176c +0x4ba:  mov    %eax,(%esp)
0814176f +0x4bd:  call   08ae3750 <_Unwind_Resume>
08141774 +0x4c2:  mov    %ebx,%eax
08141776 +0x4c4:  add    $0xbc,%esp
0814177c +0x4ca:  pop    %ebx
0814177d +0x4cb:  pop    %esi
0814177e +0x4cc:  pop    %edi
0814177f +0x4cd:  pop    %ebp
08141780 +0x4ce:  ret
```

## 反编译 C

```c
// advancealtar::DB_StatisticAdvanceAltar::dispatch @ 0x81412b2

/* advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*) */

undefined4 advancealtar::DB_StatisticAdvanceAltar::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  char cVar10;
  undefined4 *puVar11;
  longlong lVar12;
  Stream *in_stack_00000010;
  tm local_94;
  int local_68;
  int local_64;
  char local_60 [12];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  MySQL *local_34;
  int local_30;
  STAdvanceAltarEntranceData *local_2c;
  int local_28;
  STAdvanceAltarLayerStatData *local_24;
  
                    /* try { // try from 081412d6 to 081416e4 has its CatchHandler @ 08141706 */
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  __GetCurrentDNFDate(&local_94);
  local_60[0] = '\0';
  local_60[1] = '\0';
  local_60[2] = '\0';
  local_60[3] = '\0';
  local_60[4] = '\0';
  local_60[5] = '\0';
  local_60[6] = '\0';
  local_60[7] = '\0';
  local_60[8] = '\0';
  local_60[9] = '\0';
  local_60[10] = '\0';
  local_60[0xb] = '\0';
  sprintf(local_60,"%04d-%02d-%02d",local_94.tm_year + 0x76c,local_94.tm_mon + 1,local_94.tm_mday);
  local_64 = 0;
  Stream::operator>>(in_stack_00000010,&local_64);
  for (local_30 = 0; local_30 < local_64; local_30 = local_30 + 1) {
    local_2c = Stream::GetOutBuffer<STAdvanceAltarEntranceData>(in_stack_00000010);
    if (local_2c == (STAdvanceAltarEntranceData *)0x0) {
      puVar11 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar11 = 0x624;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar11,&int::typeinfo,0);
    }
    uVar8 = *(undefined4 *)(local_2c + 0xc);
    uVar5 = *(undefined4 *)(local_2c + 8);
    uVar6 = *(undefined4 *)(local_2c + 4);
    uVar7 = *(undefined4 *)local_2c;
    cMyTrace::cMyTrace(local_54,
                       "virtual bool advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*)"
                       ,0x626,0);
    cMyTrace::operator()(local_54,"[AdvanceAltar] %u,%u,%u,%u",uVar7,uVar6,uVar5,uVar8);
    MySQL::set_query(local_34,
                     " upDate log_advance_alter_entrance  set entrance_count = entrance_count + %u  , success_count = success_count + %u  , obtain_star = obtain_star + %u  where occ_date = \'%s\' and stage_id = %u"
                     ,*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_2c + 8),
                     *(undefined4 *)(local_2c + 0xc),local_60,*(undefined4 *)local_2c);
    cVar10 = MySQL::exec(local_34,true);
    if (cVar10 == '\x01') {
      lVar12 = MySQL::getAffectedRowCount(local_34);
      if (lVar12 == 0) goto LAB_0814146f;
      bVar9 = false;
    }
    else {
LAB_0814146f:
      bVar9 = true;
    }
    if (bVar9) {
      MySQL::set_query(local_34,
                       " inSert into log_advance_alter_entrance(occ_date,  stage_id, entrance_count, success_count, obtain_star)  values(\'%s\', %u, %u, %u, %u) "
                       ,local_60,*(undefined4 *)local_2c,*(undefined4 *)(local_2c + 4),
                       *(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
      MySQL::exec(local_34,true);
    }
  }
  local_68 = 0;
  Stream::operator>>(in_stack_00000010,&local_68);
  local_28 = 0;
  do {
    if (local_68 <= local_28) {
      return 1;
    }
    local_24 = Stream::GetOutBuffer<STAdvanceAltarLayerStatData>(in_stack_00000010);
    if (local_24 == (STAdvanceAltarLayerStatData *)0x0) {
      puVar11 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar11 = 0x64d;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar11,&int::typeinfo,0);
    }
    uVar1 = *(ushort *)(local_24 + 0xc);
    uVar2 = *(ushort *)(local_24 + 10);
    uVar3 = *(ushort *)(local_24 + 8);
    uVar8 = *(undefined4 *)(local_24 + 4);
    uVar4 = *(ushort *)local_24;
    cMyTrace::cMyTrace(local_44,
                       "virtual bool advancealtar::DB_StatisticAdvanceAltar::dispatch(int, int, Stream*)"
                       ,0x64f,0);
    cMyTrace::operator()
              (local_44,"[AdvanceAltar] %u,%u,%u,%u,%u",(uint)uVar4,uVar8,(uint)uVar3,(uint)uVar2,
               (uint)uVar1);
    MySQL::set_query(local_34,
                     " upDate log_advance_alter_layer_stat  set use_count = use_count + %u, use_star = use_star + %u  where occ_date = \'%s\' and item_type = %u and item_id = %u and item_level = %u"
                     ,(uint)*(ushort *)(local_24 + 10),(uint)*(ushort *)(local_24 + 0xc),local_60,
                     (uint)*(ushort *)local_24,*(undefined4 *)(local_24 + 4),
                     (uint)*(ushort *)(local_24 + 8));
    cVar10 = MySQL::exec(local_34,true);
    if (cVar10 == '\x01') {
      lVar12 = MySQL::getAffectedRowCount(local_34);
      if (lVar12 == 0) goto LAB_08141667;
      bVar9 = false;
    }
    else {
LAB_08141667:
      bVar9 = true;
    }
    if (bVar9) {
      MySQL::set_query(local_34,
                       " inSert into log_advance_alter_layer_stat(occ_date,  item_type, item_id, item_level, use_count, use_star) values(\'%s\', %u, %u, %u, %u, %u)"
                       ,local_60,(uint)*(ushort *)local_24,*(undefined4 *)(local_24 + 4),
                       (uint)*(ushort *)(local_24 + 8),(uint)*(ushort *)(local_24 + 10),
                       (uint)*(ushort *)(local_24 + 0xc));
      MySQL::exec(local_34,true);
    }
    local_28 = local_28 + 1;
  } while( true );
}
```
