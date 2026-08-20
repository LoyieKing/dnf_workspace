# dispatch

`_ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream`

`DB_UpdateCreatureItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCreatureItem` | `0x084203e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084203e8  _ZN21DB_UpdateCreatureItem8dispatchEiiP6Stream
#           DB_UpdateCreatureItem::dispatch(int, int, Stream*)
# range [0x084203e8, 0x08420e19]
084203e8 +0x000:  push   %ebp
084203e9 +0x001:  mov    %esp,%ebp
084203eb +0x003:  push   %edi
084203ec +0x004:  push   %esi
084203ed +0x005:  push   %ebx
084203ee +0x006:  sub    $0x4ec,%esp
084203f4 +0x00c:  mov    0x14(%ebp),%eax
084203f7 +0x00f:  mov    %eax,(%esp)
084203fa +0x012:  call   08451a52 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4668>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4668
084203ff +0x017:  mov    %eax,-0x28(%ebp)
08420402 +0x01a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08420407 +0x01f:  movl   $0x0,0x8(%esp)
0842040f +0x027:  movl   $0x3,0x4(%esp)
08420417 +0x02f:  mov    %eax,(%esp)
0842041a +0x032:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842041f +0x037:  mov    %eax,-0x24(%ebp)
08420422 +0x03a:  mov    -0x28(%ebp),%eax
08420425 +0x03d:  mov    0x64(%eax),%eax
08420428 +0x040:  cmp    $0x3,%eax
0842042b +0x043:  je     08420506 <+0x11e>
08420431 +0x049:  cmp    $0x3,%eax
08420434 +0x04c:  jg     08420440 <+0x58>
08420436 +0x04e:  cmp    $0x1,%eax
08420439 +0x051:  je     08420457 <+0x6f>
0842043b +0x053:  jmp    0842061d <+0x235>
08420440 +0x058:  cmp    $0x4,%eax
08420443 +0x05b:  je     08420562 <+0x17a>
08420449 +0x061:  cmp    $0x5,%eax
0842044c +0x064:  je     084205b9 <+0x1d1>
08420452 +0x06a:  jmp    0842061d <+0x235>
08420457 +0x06f:  mov    -0x28(%ebp),%eax
0842045a +0x072:  mov    0x68(%eax),%eax
0842045d +0x075:  test   %eax,%eax
0842045f +0x077:  jne    084204aa <+0xc2>
08420461 +0x079:  mov    -0x28(%ebp),%eax
08420464 +0x07c:  mov    0x48(%eax),%eax
08420467 +0x07f:  mov    %eax,0xc(%esp)
0842046b +0x083:  movl   $0x1,0x8(%esp)
08420473 +0x08b:  movl   $"upDate inventory set creature_flag=%d where charac_no=%d",0x4(%esp)
0842047b +0x093:  mov    -0x24(%ebp),%eax
0842047e +0x096:  mov    %eax,(%esp)
08420481 +0x099:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08420486 +0x09e:  movl   $0x1,0x4(%esp)
0842048e +0x0a6:  mov    -0x24(%ebp),%eax
08420491 +0x0a9:  mov    %eax,(%esp)
08420494 +0x0ac:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08420499 +0x0b1:  xor    $0x1,%eax
0842049c +0x0b4:  test   %al,%al
0842049e +0x0b6:  je     084204aa <+0xc2>
084204a0 +0x0b8:  mov    $0x0,%ebx
084204a5 +0x0bd:  jmp    08420e0d <+0xa25>
084204aa +0x0c2:  mov    -0x28(%ebp),%eax
084204ad +0x0c5:  mov    0x70(%eax),%eax
084204b0 +0x0c8:  cmp    $0x1,%eax
084204b3 +0x0cb:  jne    0842060d <+0x225>
084204b9 +0x0d1:  mov    -0x28(%ebp),%eax
084204bc +0x0d4:  mov    0x6c(%eax),%eax
084204bf +0x0d7:  mov    %eax,0xc(%esp)
084204c3 +0x0db:  movl   $0x0,0x8(%esp)
084204cb +0x0e3:  movl   $"upDate inventory set creature_flag=%d where charac_no=%d",0x4(%esp)
084204d3 +0x0eb:  mov    -0x24(%ebp),%eax
084204d6 +0x0ee:  mov    %eax,(%esp)
084204d9 +0x0f1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084204de +0x0f6:  movl   $0x1,0x4(%esp)
084204e6 +0x0fe:  mov    -0x24(%ebp),%eax
084204e9 +0x101:  mov    %eax,(%esp)
084204ec +0x104:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084204f1 +0x109:  xor    $0x1,%eax
084204f4 +0x10c:  test   %al,%al
084204f6 +0x10e:  je     08420610 <+0x228>
084204fc +0x114:  mov    $0x0,%ebx
08420501 +0x119:  jmp    08420e0d <+0xa25>
08420506 +0x11e:  mov    -0x28(%ebp),%eax
08420509 +0x121:  mov    0x68(%eax),%eax
0842050c +0x124:  cmp    $0x1,%eax
0842050f +0x127:  jne    08420613 <+0x22b>
08420515 +0x12d:  mov    -0x28(%ebp),%eax
08420518 +0x130:  mov    0x6c(%eax),%eax
0842051b +0x133:  mov    %eax,0xc(%esp)
0842051f +0x137:  movl   $0x0,0x8(%esp)
08420527 +0x13f:  movl   $"upDate inventory set creature_flag=%d where charac_no=%d",0x4(%esp)
0842052f +0x147:  mov    -0x24(%ebp),%eax
08420532 +0x14a:  mov    %eax,(%esp)
08420535 +0x14d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842053a +0x152:  movl   $0x1,0x4(%esp)
08420542 +0x15a:  mov    -0x24(%ebp),%eax
08420545 +0x15d:  mov    %eax,(%esp)
08420548 +0x160:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842054d +0x165:  xor    $0x1,%eax
08420550 +0x168:  test   %al,%al
08420552 +0x16a:  je     08420616 <+0x22e>
08420558 +0x170:  mov    $0x0,%ebx
0842055d +0x175:  jmp    08420e0d <+0xa25>
08420562 +0x17a:  mov    -0x28(%ebp),%eax
08420565 +0x17d:  mov    0x68(%eax),%eax
08420568 +0x180:  test   %eax,%eax
0842056a +0x182:  jne    08420619 <+0x231>
08420570 +0x188:  mov    -0x28(%ebp),%eax
08420573 +0x18b:  mov    0x48(%eax),%eax
08420576 +0x18e:  mov    %eax,0xc(%esp)
0842057a +0x192:  movl   $0x1,0x8(%esp)
08420582 +0x19a:  movl   $"upDate inventory set creature_flag=%d where charac_no=%d",0x4(%esp)
0842058a +0x1a2:  mov    -0x24(%ebp),%eax
0842058d +0x1a5:  mov    %eax,(%esp)
08420590 +0x1a8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08420595 +0x1ad:  movl   $0x1,0x4(%esp)
0842059d +0x1b5:  mov    -0x24(%ebp),%eax
084205a0 +0x1b8:  mov    %eax,(%esp)
084205a3 +0x1bb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084205a8 +0x1c0:  xor    $0x1,%eax
084205ab +0x1c3:  test   %al,%al
084205ad +0x1c5:  je     0842061c <+0x234>
084205af +0x1c7:  mov    $0x0,%ebx
084205b4 +0x1cc:  jmp    08420e0d <+0xa25>
084205b9 +0x1d1:  mov    -0x28(%ebp),%eax
084205bc +0x1d4:  mov    0x68(%eax),%eax
084205bf +0x1d7:  cmp    $0x1,%eax
084205c2 +0x1da:  jne    0842061d <+0x235>
084205c4 +0x1dc:  mov    -0x28(%ebp),%eax
084205c7 +0x1df:  mov    0x6c(%eax),%eax
084205ca +0x1e2:  mov    %eax,0xc(%esp)
084205ce +0x1e6:  movl   $0x0,0x8(%esp)
084205d6 +0x1ee:  movl   $"upDate inventory set creature_flag=%d where charac_no=%d",0x4(%esp)
084205de +0x1f6:  mov    -0x24(%ebp),%eax
084205e1 +0x1f9:  mov    %eax,(%esp)
084205e4 +0x1fc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084205e9 +0x201:  movl   $0x1,0x4(%esp)
084205f1 +0x209:  mov    -0x24(%ebp),%eax
084205f4 +0x20c:  mov    %eax,(%esp)
084205f7 +0x20f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084205fc +0x214:  xor    $0x1,%eax
084205ff +0x217:  test   %al,%al
08420601 +0x219:  je     0842061d <+0x235>
08420603 +0x21b:  mov    $0x0,%ebx
08420608 +0x220:  jmp    08420e0d <+0xa25>
0842060d +0x225:  nop
0842060e +0x226:  jmp    0842061d <+0x235>
08420610 +0x228:  nop
08420611 +0x229:  jmp    0842061d <+0x235>
08420613 +0x22b:  nop
08420614 +0x22c:  jmp    0842061d <+0x235>
08420616 +0x22e:  nop
08420617 +0x22f:  jmp    0842061d <+0x235>
08420619 +0x231:  nop
0842061a +0x232:  jmp    0842061d <+0x235>
0842061c +0x234:  nop
0842061d +0x235:  lea    -0x4e8(%ebp),%esi
08420623 +0x23b:  mov    $0x0,%eax
08420628 +0x240:  mov    $0x100,%edx
0842062d +0x245:  mov    %esi,%edi
0842062f +0x247:  mov    %edx,%ecx
08420631 +0x249:  rep stos %eax,%es:(%edi)
08420633 +0x24b:  mov    -0x28(%ebp),%eax
08420636 +0x24e:  mov    %eax,0xc(%esp)
0842063a +0x252:  lea    -0x4e8(%ebp),%eax
08420640 +0x258:  mov    %eax,0x8(%esp)
08420644 +0x25c:  mov    -0x24(%ebp),%eax
08420647 +0x25f:  mov    %eax,0x4(%esp)
0842064b +0x263:  mov    0x8(%ebp),%eax
0842064e +0x266:  mov    %eax,(%esp)
08420651 +0x269:  call   084200a8 <_ZN21DB_UpdateCreatureItem8GetFieldEP5MySQLPcP17SIG_CREATURE_ITEM>  ; DB_UpdateCreatureItem::GetField(MySQL*, char*, SIG_CREATURE_ITEM*)
08420656 +0x26e:  mov    -0x28(%ebp),%eax
08420659 +0x271:  mov    0x30(%eax),%eax
0842065c +0x274:  mov    %eax,0xc(%esp)
08420660 +0x278:  lea    -0x4e8(%ebp),%eax
08420666 +0x27e:  mov    %eax,0x8(%esp)
0842066a +0x282:  movl   $"upDate creature_items set %s where ui_id=%d",0x4(%esp)
08420672 +0x28a:  mov    -0x24(%ebp),%eax
08420675 +0x28d:  mov    %eax,(%esp)
08420678 +0x290:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842067d +0x295:  movl   $0x1,0x4(%esp)
08420685 +0x29d:  mov    -0x24(%ebp),%eax
08420688 +0x2a0:  mov    %eax,(%esp)
0842068b +0x2a3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08420690 +0x2a8:  xor    $0x1,%eax
08420693 +0x2ab:  test   %al,%al
08420695 +0x2ad:  je     084206a1 <+0x2b9>
08420697 +0x2af:  mov    $0x0,%ebx
0842069c +0x2b4:  jmp    08420e0d <+0xa25>
084206a1 +0x2b9:  mov    -0x28(%ebp),%eax
084206a4 +0x2bc:  mov    0x64(%eax),%eax
084206a7 +0x2bf:  cmp    $0x4,%eax
084206aa +0x2c2:  je     084206bb <+0x2d3>
084206ac +0x2c4:  mov    -0x28(%ebp),%eax
084206af +0x2c7:  mov    0x64(%eax),%eax
084206b2 +0x2ca:  cmp    $0x1,%eax
084206b5 +0x2cd:  jne    08420e08 <+0xa20>
084206bb +0x2d3:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084206c0 +0x2d8:  movl   $0x5710,0x8(%esp)
084206c8 +0x2e0:  movl   $"DBThread.cpp",0x4(%esp)
084206d0 +0x2e8:  mov    %eax,(%esp)
084206d3 +0x2eb:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084206d8 +0x2f0:  movl   $0x1,0x8(%esp)
084206e0 +0x2f8:  mov    %eax,0x4(%esp)
084206e4 +0x2fc:  lea    -0xe0(%ebp),%eax
084206ea +0x302:  mov    %eax,(%esp)
084206ed +0x305:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084206f2 +0x30a:  lea    -0xe0(%ebp),%eax
084206f8 +0x310:  mov    %eax,(%esp)
084206fb +0x313:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08420700 +0x318:  movl   $0x8b,0x4(%esp)
08420708 +0x320:  mov    %eax,(%esp)
0842070b +0x323:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08420710 +0x328:  lea    -0xe0(%ebp),%eax
08420716 +0x32e:  mov    %eax,(%esp)
08420719 +0x331:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842071e +0x336:  mov    0x10(%ebp),%edx
08420721 +0x339:  mov    %edx,0x4(%esp)
08420725 +0x33d:  mov    %eax,(%esp)
08420728 +0x340:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842072d +0x345:  lea    -0xe0(%ebp),%eax
08420733 +0x34b:  mov    %eax,(%esp)
08420736 +0x34e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842073b +0x353:  mov    %eax,(%esp)
0842073e +0x356:  call   08343ade <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x5bab>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x5bab
08420743 +0x35b:  mov    %eax,-0x20(%ebp)
08420746 +0x35e:  mov    -0x20(%ebp),%edx
08420749 +0x361:  mov    -0x28(%ebp),%eax
0842074c +0x364:  mov    %eax,%esi
0842074e +0x366:  mov    $0x1d,%eax
08420753 +0x36b:  mov    %edx,%edi
08420755 +0x36d:  mov    %eax,%ecx
08420757 +0x36f:  rep movsl %ds:(%esi),%es:(%edi)
08420759 +0x371:  movl   $0x0,-0x1c(%ebp)
08420760 +0x378:  mov    -0x28(%ebp),%eax
08420763 +0x37b:  mov    0x30(%eax),%eax
08420766 +0x37e:  mov    %eax,0x8(%esp)
0842076a +0x382:  movl   $"seLect slot,it_id,name,stomach,exp,endurance,creature_type,no_charge,unix_timestamp(expire_date) from creature_items where ui_id=%d",0x4(%esp)
08420772 +0x38a:  mov    -0x24(%ebp),%eax
08420775 +0x38d:  mov    %eax,(%esp)
08420778 +0x390:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842077d +0x395:  movl   $0x1,0x4(%esp)
08420785 +0x39d:  mov    -0x24(%ebp),%eax
08420788 +0x3a0:  mov    %eax,(%esp)
0842078b +0x3a3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08420790 +0x3a8:  movzbl %al,%eax
08420793 +0x3ab:  mov    %eax,-0x1c(%ebp)
08420796 +0x3ae:  cmpl   $0x0,-0x1c(%ebp)
0842079a +0x3b2:  jne    08420808 <+0x420>
0842079c +0x3b4:  mov    -0x28(%ebp),%eax
0842079f +0x3b7:  mov    0x48(%eax),%ebx
084207a2 +0x3ba:  movl   $0x5,0xc(%esp)
084207aa +0x3c2:  movl   $0x5729,0x8(%esp)
084207b2 +0x3ca:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084207ba +0x3d2:  lea    -0xd8(%ebp),%eax
084207c0 +0x3d8:  mov    %eax,(%esp)
084207c3 +0x3db:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084207c8 +0x3e0:  mov    %ebx,0x8(%esp)
084207cc +0x3e4:  movl   $"DB_UpdateCreatureItem::dispatch, exec() ERROR charac_no=%u",0x4(%esp)
084207d4 +0x3ec:  lea    -0xd8(%ebp),%eax
084207da +0x3f2:  mov    %eax,(%esp)
084207dd +0x3f5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084207e2 +0x3fa:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084207e7 +0x3ff:  lea    -0xe0(%ebp),%edx
084207ed +0x405:  mov    %edx,0x4(%esp)
084207f1 +0x409:  mov    %eax,(%esp)
084207f4 +0x40c:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
084207f9 +0x411:  mov    $0x0,%ebx
084207fe +0x416:  mov    $0x0,%esi
08420803 +0x41b:  jmp    08420df6 <+0xa0e>
08420808 +0x420:  mov    -0x24(%ebp),%eax
0842080b +0x423:  mov    %eax,(%esp)
0842080e +0x426:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08420813 +0x42b:  movzbl %al,%eax
08420816 +0x42e:  mov    %eax,-0x1c(%ebp)
08420819 +0x431:  cmpl   $0x0,-0x1c(%ebp)
0842081d +0x435:  jne    0842088b <+0x4a3>
0842081f +0x437:  mov    -0x28(%ebp),%eax
08420822 +0x43a:  mov    0x48(%eax),%ebx
08420825 +0x43d:  movl   $0x5,0xc(%esp)
0842082d +0x445:  movl   $0x5731,0x8(%esp)
08420835 +0x44d:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842083d +0x455:  lea    -0xc8(%ebp),%eax
08420843 +0x45b:  mov    %eax,(%esp)
08420846 +0x45e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842084b +0x463:  mov    %ebx,0x8(%esp)
0842084f +0x467:  movl   $"DB_UpdateCreatureItem::dispatch, fetch() ERROR charac_no=%u",0x4(%esp)
08420857 +0x46f:  lea    -0xc8(%ebp),%eax
0842085d +0x475:  mov    %eax,(%esp)
08420860 +0x478:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420865 +0x47d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842086a +0x482:  lea    -0xe0(%ebp),%edx
08420870 +0x488:  mov    %edx,0x4(%esp)
08420874 +0x48c:  mov    %eax,(%esp)
08420877 +0x48f:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
0842087c +0x494:  mov    $0x0,%ebx
08420881 +0x499:  mov    $0x0,%esi
08420886 +0x49e:  jmp    08420df6 <+0xa0e>
0842088b +0x4a3:  mov    -0x20(%ebp),%eax
0842088e +0x4a6:  add    $0x2c,%eax
08420891 +0x4a9:  mov    %eax,0x8(%esp)
08420895 +0x4ad:  movl   $0x0,0x4(%esp)
0842089d +0x4b5:  mov    -0x24(%ebp),%eax
084208a0 +0x4b8:  mov    %eax,(%esp)
084208a3 +0x4bb:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084208a8 +0x4c0:  movzbl %al,%eax
084208ab +0x4c3:  mov    %eax,-0x1c(%ebp)
084208ae +0x4c6:  cmpl   $0x0,-0x1c(%ebp)
084208b2 +0x4ca:  jne    08420920 <+0x538>
084208b4 +0x4cc:  mov    -0x28(%ebp),%eax
084208b7 +0x4cf:  mov    0x48(%eax),%ebx
084208ba +0x4d2:  movl   $0x5,0xc(%esp)
084208c2 +0x4da:  movl   $0x5739,0x8(%esp)
084208ca +0x4e2:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084208d2 +0x4ea:  lea    -0xb8(%ebp),%eax
084208d8 +0x4f0:  mov    %eax,(%esp)
084208db +0x4f3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084208e0 +0x4f8:  mov    %ebx,0x8(%esp)
084208e4 +0x4fc:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(0) ERROR charac_no=%u",0x4(%esp)
084208ec +0x504:  lea    -0xb8(%ebp),%eax
084208f2 +0x50a:  mov    %eax,(%esp)
084208f5 +0x50d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084208fa +0x512:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084208ff +0x517:  lea    -0xe0(%ebp),%edx
08420905 +0x51d:  mov    %edx,0x4(%esp)
08420909 +0x521:  mov    %eax,(%esp)
0842090c +0x524:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420911 +0x529:  mov    $0x0,%ebx
08420916 +0x52e:  mov    $0x0,%esi
0842091b +0x533:  jmp    08420df6 <+0xa0e>
08420920 +0x538:  mov    -0x20(%ebp),%eax
08420923 +0x53b:  add    $0x8,%eax
08420926 +0x53e:  mov    %eax,0x8(%esp)
0842092a +0x542:  movl   $0x1,0x4(%esp)
08420932 +0x54a:  mov    -0x24(%ebp),%eax
08420935 +0x54d:  mov    %eax,(%esp)
08420938 +0x550:  call   0844d66a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x280>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x280
0842093d +0x555:  movzbl %al,%eax
08420940 +0x558:  mov    %eax,-0x1c(%ebp)
08420943 +0x55b:  cmpl   $0x0,-0x1c(%ebp)
08420947 +0x55f:  jne    084209b5 <+0x5cd>
08420949 +0x561:  mov    -0x28(%ebp),%eax
0842094c +0x564:  mov    0x48(%eax),%ebx
0842094f +0x567:  movl   $0x5,0xc(%esp)
08420957 +0x56f:  movl   $0x5741,0x8(%esp)
0842095f +0x577:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420967 +0x57f:  lea    -0xa8(%ebp),%eax
0842096d +0x585:  mov    %eax,(%esp)
08420970 +0x588:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420975 +0x58d:  mov    %ebx,0x8(%esp)
08420979 +0x591:  movl   $"DB_UpdateCreatureItem::dispatch, get_ushort(1) ERROR charac_no=%u",0x4(%esp)
08420981 +0x599:  lea    -0xa8(%ebp),%eax
08420987 +0x59f:  mov    %eax,(%esp)
0842098a +0x5a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842098f +0x5a7:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420994 +0x5ac:  lea    -0xe0(%ebp),%edx
0842099a +0x5b2:  mov    %edx,0x4(%esp)
0842099e +0x5b6:  mov    %eax,(%esp)
084209a1 +0x5b9:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
084209a6 +0x5be:  mov    $0x0,%ebx
084209ab +0x5c3:  mov    $0x0,%esi
084209b0 +0x5c8:  jmp    08420df6 <+0xa0e>
084209b5 +0x5cd:  mov    -0x20(%ebp),%eax
084209b8 +0x5d0:  add    $0x34,%eax
084209bb +0x5d3:  movl   $0xd,0xc(%esp)
084209c3 +0x5db:  mov    %eax,0x8(%esp)
084209c7 +0x5df:  movl   $0x2,0x4(%esp)
084209cf +0x5e7:  mov    -0x24(%ebp),%eax
084209d2 +0x5ea:  mov    %eax,(%esp)
084209d5 +0x5ed:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084209da +0x5f2:  xor    $0x1,%eax
084209dd +0x5f5:  test   %al,%al
084209df +0x5f7:  je     08420a4d <+0x665>
084209e1 +0x5f9:  mov    -0x28(%ebp),%eax
084209e4 +0x5fc:  mov    0x48(%eax),%ebx
084209e7 +0x5ff:  movl   $0x5,0xc(%esp)
084209ef +0x607:  movl   $0x5756,0x8(%esp)
084209f7 +0x60f:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084209ff +0x617:  lea    -0x98(%ebp),%eax
08420a05 +0x61d:  mov    %eax,(%esp)
08420a08 +0x620:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420a0d +0x625:  mov    %ebx,0x8(%esp)
08420a11 +0x629:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(2) ERROR charac_no=%u",0x4(%esp)
08420a19 +0x631:  lea    -0x98(%ebp),%eax
08420a1f +0x637:  mov    %eax,(%esp)
08420a22 +0x63a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420a27 +0x63f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420a2c +0x644:  lea    -0xe0(%ebp),%edx
08420a32 +0x64a:  mov    %edx,0x4(%esp)
08420a36 +0x64e:  mov    %eax,(%esp)
08420a39 +0x651:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420a3e +0x656:  mov    $0x0,%ebx
08420a43 +0x65b:  mov    $0x0,%esi
08420a48 +0x660:  jmp    08420df6 <+0xa0e>
08420a4d +0x665:  mov    -0x20(%ebp),%eax
08420a50 +0x668:  add    $0x44,%eax
08420a53 +0x66b:  mov    %eax,0x8(%esp)
08420a57 +0x66f:  movl   $0x3,0x4(%esp)
08420a5f +0x677:  mov    -0x24(%ebp),%eax
08420a62 +0x67a:  mov    %eax,(%esp)
08420a65 +0x67d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08420a6a +0x682:  movzbl %al,%eax
08420a6d +0x685:  mov    %eax,-0x1c(%ebp)
08420a70 +0x688:  cmpl   $0x0,-0x1c(%ebp)
08420a74 +0x68c:  jne    08420ae2 <+0x6fa>
08420a76 +0x68e:  mov    -0x28(%ebp),%eax
08420a79 +0x691:  mov    0x48(%eax),%ebx
08420a7c +0x694:  movl   $0x5,0xc(%esp)
08420a84 +0x69c:  movl   $0x575e,0x8(%esp)
08420a8c +0x6a4:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420a94 +0x6ac:  lea    -0x88(%ebp),%eax
08420a9a +0x6b2:  mov    %eax,(%esp)
08420a9d +0x6b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420aa2 +0x6ba:  mov    %ebx,0x8(%esp)
08420aa6 +0x6be:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(3) ERROR charac_no=%u",0x4(%esp)
08420aae +0x6c6:  lea    -0x88(%ebp),%eax
08420ab4 +0x6cc:  mov    %eax,(%esp)
08420ab7 +0x6cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420abc +0x6d4:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420ac1 +0x6d9:  lea    -0xe0(%ebp),%edx
08420ac7 +0x6df:  mov    %edx,0x4(%esp)
08420acb +0x6e3:  mov    %eax,(%esp)
08420ace +0x6e6:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420ad3 +0x6eb:  mov    $0x0,%ebx
08420ad8 +0x6f0:  mov    $0x0,%esi
08420add +0x6f5:  jmp    08420df6 <+0xa0e>
08420ae2 +0x6fa:  mov    -0x20(%ebp),%eax
08420ae5 +0x6fd:  add    $0x4c,%eax
08420ae8 +0x700:  mov    %eax,0x8(%esp)
08420aec +0x704:  movl   $0x4,0x4(%esp)
08420af4 +0x70c:  mov    -0x24(%ebp),%eax
08420af7 +0x70f:  mov    %eax,(%esp)
08420afa +0x712:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08420aff +0x717:  movzbl %al,%eax
08420b02 +0x71a:  mov    %eax,-0x1c(%ebp)
08420b05 +0x71d:  cmpl   $0x0,-0x1c(%ebp)
08420b09 +0x721:  jne    08420b71 <+0x789>
08420b0b +0x723:  mov    -0x28(%ebp),%eax
08420b0e +0x726:  mov    0x48(%eax),%ebx
08420b11 +0x729:  movl   $0x5,0xc(%esp)
08420b19 +0x731:  movl   $0x5766,0x8(%esp)
08420b21 +0x739:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420b29 +0x741:  lea    -0x78(%ebp),%eax
08420b2c +0x744:  mov    %eax,(%esp)
08420b2f +0x747:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420b34 +0x74c:  mov    %ebx,0x8(%esp)
08420b38 +0x750:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(4) ERROR charac_no=%u",0x4(%esp)
08420b40 +0x758:  lea    -0x78(%ebp),%eax
08420b43 +0x75b:  mov    %eax,(%esp)
08420b46 +0x75e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420b4b +0x763:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420b50 +0x768:  lea    -0xe0(%ebp),%edx
08420b56 +0x76e:  mov    %edx,0x4(%esp)
08420b5a +0x772:  mov    %eax,(%esp)
08420b5d +0x775:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420b62 +0x77a:  mov    $0x0,%ebx
08420b67 +0x77f:  mov    $0x0,%esi
08420b6c +0x784:  jmp    08420df6 <+0xa0e>
08420b71 +0x789:  mov    -0x20(%ebp),%eax
08420b74 +0x78c:  add    $0x14,%eax
08420b77 +0x78f:  mov    %eax,0x8(%esp)
08420b7b +0x793:  movl   $0x5,0x4(%esp)
08420b83 +0x79b:  mov    -0x24(%ebp),%eax
08420b86 +0x79e:  mov    %eax,(%esp)
08420b89 +0x7a1:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08420b8e +0x7a6:  xor    $0x1,%eax
08420b91 +0x7a9:  test   %al,%al
08420b93 +0x7ab:  je     08420bfb <+0x813>
08420b95 +0x7ad:  mov    -0x28(%ebp),%eax
08420b98 +0x7b0:  mov    0x48(%eax),%ebx
08420b9b +0x7b3:  movl   $0x5,0xc(%esp)
08420ba3 +0x7bb:  movl   $0x576d,0x8(%esp)
08420bab +0x7c3:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420bb3 +0x7cb:  lea    -0x68(%ebp),%eax
08420bb6 +0x7ce:  mov    %eax,(%esp)
08420bb9 +0x7d1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420bbe +0x7d6:  mov    %ebx,0x8(%esp)
08420bc2 +0x7da:  movl   $"DB_UpdateCreatureItem::dispatch, get_ushort(5) ERROR charac_no=%u",0x4(%esp)
08420bca +0x7e2:  lea    -0x68(%ebp),%eax
08420bcd +0x7e5:  mov    %eax,(%esp)
08420bd0 +0x7e8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420bd5 +0x7ed:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420bda +0x7f2:  lea    -0xe0(%ebp),%edx
08420be0 +0x7f8:  mov    %edx,0x4(%esp)
08420be4 +0x7fc:  mov    %eax,(%esp)
08420be7 +0x7ff:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420bec +0x804:  mov    $0x0,%ebx
08420bf1 +0x809:  mov    $0x0,%esi
08420bf6 +0x80e:  jmp    08420df6 <+0xa0e>
08420bfb +0x813:  lea    -0xe4(%ebp),%eax
08420c01 +0x819:  mov    %eax,0x8(%esp)
08420c05 +0x81d:  movl   $0x6,0x4(%esp)
08420c0d +0x825:  mov    -0x24(%ebp),%eax
08420c10 +0x828:  mov    %eax,(%esp)
08420c13 +0x82b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08420c18 +0x830:  xor    $0x1,%eax
08420c1b +0x833:  test   %al,%al
08420c1d +0x835:  je     08420c85 <+0x89d>
08420c1f +0x837:  mov    -0x28(%ebp),%eax
08420c22 +0x83a:  mov    0x48(%eax),%ebx
08420c25 +0x83d:  movl   $0x5,0xc(%esp)
08420c2d +0x845:  movl   $0x5775,0x8(%esp)
08420c35 +0x84d:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420c3d +0x855:  lea    -0x58(%ebp),%eax
08420c40 +0x858:  mov    %eax,(%esp)
08420c43 +0x85b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420c48 +0x860:  mov    %ebx,0x8(%esp)
08420c4c +0x864:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(6) ERROR charac_no=%u",0x4(%esp)
08420c54 +0x86c:  lea    -0x58(%ebp),%eax
08420c57 +0x86f:  mov    %eax,(%esp)
08420c5a +0x872:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420c5f +0x877:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420c64 +0x87c:  lea    -0xe0(%ebp),%edx
08420c6a +0x882:  mov    %edx,0x4(%esp)
08420c6e +0x886:  mov    %eax,(%esp)
08420c71 +0x889:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420c76 +0x88e:  mov    $0x0,%ebx
08420c7b +0x893:  mov    $0x0,%esi
08420c80 +0x898:  jmp    08420df6 <+0xa0e>
08420c85 +0x89d:  mov    -0xe4(%ebp),%eax
08420c8b +0x8a3:  mov    %eax,%edx
08420c8d +0x8a5:  mov    -0x20(%ebp),%eax
08420c90 +0x8a8:  mov    %dl,0x50(%eax)
08420c93 +0x8ab:  lea    -0xe8(%ebp),%eax
08420c99 +0x8b1:  mov    %eax,0x8(%esp)
08420c9d +0x8b5:  movl   $0x7,0x4(%esp)
08420ca5 +0x8bd:  mov    -0x24(%ebp),%eax
08420ca8 +0x8c0:  mov    %eax,(%esp)
08420cab +0x8c3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08420cb0 +0x8c8:  xor    $0x1,%eax
08420cb3 +0x8cb:  test   %al,%al
08420cb5 +0x8cd:  je     08420d1d <+0x935>
08420cb7 +0x8cf:  mov    -0x28(%ebp),%eax
08420cba +0x8d2:  mov    0x48(%eax),%ebx
08420cbd +0x8d5:  movl   $0x5,0xc(%esp)
08420cc5 +0x8dd:  movl   $0x577e,0x8(%esp)
08420ccd +0x8e5:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420cd5 +0x8ed:  lea    -0x48(%ebp),%eax
08420cd8 +0x8f0:  mov    %eax,(%esp)
08420cdb +0x8f3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420ce0 +0x8f8:  mov    %ebx,0x8(%esp)
08420ce4 +0x8fc:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(7) ERROR charac_no=%u",0x4(%esp)
08420cec +0x904:  lea    -0x48(%ebp),%eax
08420cef +0x907:  mov    %eax,(%esp)
08420cf2 +0x90a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420cf7 +0x90f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420cfc +0x914:  lea    -0xe0(%ebp),%edx
08420d02 +0x91a:  mov    %edx,0x4(%esp)
08420d06 +0x91e:  mov    %eax,(%esp)
08420d09 +0x921:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420d0e +0x926:  mov    $0x0,%ebx
08420d13 +0x92b:  mov    $0x0,%esi
08420d18 +0x930:  jmp    08420df6 <+0xa0e>
08420d1d +0x935:  mov    -0xe8(%ebp),%eax
08420d23 +0x93b:  mov    %eax,%edx
08420d25 +0x93d:  mov    -0x20(%ebp),%eax
08420d28 +0x940:  mov    %dl,0x52(%eax)
08420d2b +0x943:  mov    -0x20(%ebp),%eax
08420d2e +0x946:  add    $0x54,%eax
08420d31 +0x949:  mov    %eax,0x8(%esp)
08420d35 +0x94d:  movl   $0x8,0x4(%esp)
08420d3d +0x955:  mov    -0x24(%ebp),%eax
08420d40 +0x958:  mov    %eax,(%esp)
08420d43 +0x95b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08420d48 +0x960:  xor    $0x1,%eax
08420d4b +0x963:  test   %al,%al
08420d4d +0x965:  je     08420db2 <+0x9ca>
08420d4f +0x967:  mov    -0x28(%ebp),%eax
08420d52 +0x96a:  mov    0x48(%eax),%ebx
08420d55 +0x96d:  movl   $0x5,0xc(%esp)
08420d5d +0x975:  movl   $0x5794,0x8(%esp)
08420d65 +0x97d:  movl   $&_ZZN21DB_UpdateCreatureItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08420d6d +0x985:  lea    -0x38(%ebp),%eax
08420d70 +0x988:  mov    %eax,(%esp)
08420d73 +0x98b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08420d78 +0x990:  mov    %ebx,0x8(%esp)
08420d7c +0x994:  movl   $"DB_UpdateCreatureItem::dispatch, get_int(9) ERROR charac_no=%u",0x4(%esp)
08420d84 +0x99c:  lea    -0x38(%ebp),%eax
08420d87 +0x99f:  mov    %eax,(%esp)
08420d8a +0x9a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08420d8f +0x9a7:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08420d94 +0x9ac:  lea    -0xe0(%ebp),%edx
08420d9a +0x9b2:  mov    %edx,0x4(%esp)
08420d9e +0x9b6:  mov    %eax,(%esp)
08420da1 +0x9b9:  call   08101080 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0xa2>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0xa2
08420da6 +0x9be:  mov    $0x0,%ebx
08420dab +0x9c3:  mov    $0x0,%esi
08420db0 +0x9c8:  jmp    08420df6 <+0xa0e>
08420db2 +0x9ca:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08420db7 +0x9cf:  lea    -0xe0(%ebp),%edx
08420dbd +0x9d5:  mov    %edx,0x8(%esp)
08420dc1 +0x9d9:  movl   $0x1,0x4(%esp)
08420dc9 +0x9e1:  mov    %eax,(%esp)
08420dcc +0x9e4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08420dd1 +0x9e9:  mov    $0x1,%esi
08420dd6 +0x9ee:  jmp    08420df6 <+0xa0e>
08420dd8 +0x9f0:  mov    %edx,%ebx
08420dda +0x9f2:  mov    %eax,%esi
08420ddc +0x9f4:  lea    -0xe0(%ebp),%eax
08420de2 +0x9fa:  mov    %eax,(%esp)
08420de5 +0x9fd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08420dea +0xa02:  mov    %esi,%eax
08420dec +0xa04:  mov    %ebx,%edx
08420dee +0xa06:  mov    %eax,(%esp)
08420df1 +0xa09:  call   08ae3750 <_Unwind_Resume>
08420df6 +0xa0e:  lea    -0xe0(%ebp),%eax
08420dfc +0xa14:  mov    %eax,(%esp)
08420dff +0xa17:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08420e04 +0xa1c:  test   %esi,%esi
08420e06 +0xa1e:  je     08420e0d <+0xa25>
08420e08 +0xa20:  mov    $0x1,%ebx
08420e0d +0xa25:  mov    %ebx,%eax
08420e0f +0xa27:  add    $0x4ec,%esp
08420e15 +0xa2d:  pop    %ebx
08420e16 +0xa2e:  pop    %esi
08420e17 +0xa2f:  pop    %edi
08420e18 +0xa30:  pop    %ebp
08420e19 +0xa31:  ret
```

## 反编译 C

```c
// DB_UpdateCreatureItem::dispatch @ 0x84203e8

/* DB_UpdateCreatureItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateCreatureItem::dispatch(DB_UpdateCreatureItem *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  SIG_CREATURE_ITEM *pSVar7;
  char *pcVar8;
  SIG_CREATURE_ITEM *pSVar9;
  byte bVar10;
  char local_4ec [1024];
  SIG_CREATURE_ITEM local_ec [4];
  SIG_CREATURE_ITEM local_e8 [4];
  CStreamGuard local_e4 [8];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  SIG_CREATURE_ITEM *local_2c;
  MySQL *local_28;
  SIG_CREATURE_ITEM *local_24;
  uint local_20;
  
  bVar10 = 0;
  local_2c = Stream::GetOutBuffer<SIG_CREATURE_ITEM>(param_3);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  iVar5 = *(int *)(local_2c + 100);
  if (iVar5 == 3) {
    if (*(int *)(local_2c + 0x68) == 1) {
      MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",0,
                       *(undefined4 *)(local_2c + 0x6c));
      cVar2 = MySQL::exec(local_28,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  else if (iVar5 < 4) {
    if (iVar5 == 1) {
      if (*(int *)(local_2c + 0x68) == 0) {
        MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",1,
                         *(undefined4 *)(local_2c + 0x48));
        cVar2 = MySQL::exec(local_28,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      if (*(int *)(local_2c + 0x70) == 1) {
        MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",0,
                         *(undefined4 *)(local_2c + 0x6c));
        cVar2 = MySQL::exec(local_28,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
    }
  }
  else if (iVar5 == 4) {
    if (*(int *)(local_2c + 0x68) == 0) {
      MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",1,
                       *(undefined4 *)(local_2c + 0x48));
      cVar2 = MySQL::exec(local_28,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  else if ((iVar5 == 5) && (*(int *)(local_2c + 0x68) == 1)) {
    MySQL::set_query(local_28,"upDate inventory set creature_flag=%d where charac_no=%d",0,
                     *(undefined4 *)(local_2c + 0x6c));
    cVar2 = MySQL::exec(local_28,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  iVar5 = 0x100;
  pcVar8 = local_4ec;
  while( true ) {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
  }
  GetField(this,local_28,local_4ec,local_2c);
  MySQL::set_query(local_28,"upDate creature_items set %s where ui_id=%d",local_4ec,
                   *(undefined4 *)(local_2c + 0x30));
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    if ((*(int *)(local_2c + 100) == 4) || (*(int *)(local_2c + 100) == 1)) {
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5710);
      CStreamGuard::CStreamGuard(local_e4,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
                    /* try { // try from 0842070b to 08420dd0 has its CatchHandler @ 08420dd8 */
      CStreamGuard::operator<<(pCVar4,0x8b);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
      CStreamGuard::operator<<(pCVar4,param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_e4);
      local_24 = CStreamGuard::GetInBuffer<SIG_CREATURE_ITEM>(pCVar4);
      pSVar7 = local_2c;
      pSVar9 = local_24;
      for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pSVar9 = *(undefined4 *)pSVar7;
        pSVar7 = pSVar7 + (uint)bVar10 * -8 + 4;
        pSVar9 = pSVar9 + (uint)bVar10 * -8 + 4;
      }
      local_20 = 0;
      MySQL::set_query(local_28,
                       "seLect slot,it_id,name,stomach,exp,endurance,creature_type,no_charge,unix_timestamp(expire_date) from creature_items where ui_id=%d"
                       ,*(undefined4 *)(local_2c + 0x30));
      local_20 = MySQL::exec(local_28,true);
      local_20 = local_20 & 0xff;
      if (local_20 == 0) {
        uVar6 = *(undefined4 *)(local_2c + 0x48);
        cMyTrace::cMyTrace(local_dc,
                           "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",0x5729,
                           5);
        cMyTrace::operator()
                  (local_dc,"DB_UpdateCreatureItem::dispatch, exec() ERROR charac_no=%u",uVar6);
        StreamPool::Free(GlobalData::s_stream_pool,local_e4);
        unaff_EBX = 0;
        bVar1 = false;
      }
      else {
        local_20 = MySQL::fetch(local_28);
        local_20 = local_20 & 0xff;
        if (local_20 == 0) {
          uVar6 = *(undefined4 *)(local_2c + 0x48);
          cMyTrace::cMyTrace(local_cc,
                             "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",
                             0x5731,5);
          cMyTrace::operator()
                    (local_cc,"DB_UpdateCreatureItem::dispatch, fetch() ERROR charac_no=%u",uVar6);
          StreamPool::Free(GlobalData::s_stream_pool,local_e4);
          unaff_EBX = 0;
          bVar1 = false;
        }
        else {
          local_20 = MySQL::get_int(local_28,0,(int *)(local_24 + 0x2c));
          local_20 = local_20 & 0xff;
          if (local_20 == 0) {
            uVar6 = *(undefined4 *)(local_2c + 0x48);
            cMyTrace::cMyTrace(local_bc,
                               "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",
                               0x5739,5);
            cMyTrace::operator()
                      (local_bc,"DB_UpdateCreatureItem::dispatch, get_int(0) ERROR charac_no=%u",
                       uVar6);
            StreamPool::Free(GlobalData::s_stream_pool,local_e4);
            unaff_EBX = 0;
            bVar1 = false;
          }
          else {
            local_20 = MySQL::get_ulong(local_28,1,(ulong *)(local_24 + 8));
            local_20 = local_20 & 0xff;
            if (local_20 == 0) {
              uVar6 = *(undefined4 *)(local_2c + 0x48);
              cMyTrace::cMyTrace(local_ac,
                                 "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)",
                                 0x5741,5);
              cMyTrace::operator()
                        (local_ac,
                         "DB_UpdateCreatureItem::dispatch, get_ushort(1) ERROR charac_no=%u",uVar6);
              StreamPool::Free(GlobalData::s_stream_pool,local_e4);
              unaff_EBX = 0;
              bVar1 = false;
            }
            else {
              cVar2 = MySQL::get_str(local_28,2,(char *)(local_24 + 0x34),0xd);
              if (cVar2 == '\x01') {
                local_20 = MySQL::get_int(local_28,3,(int *)(local_24 + 0x44));
                local_20 = local_20 & 0xff;
                if (local_20 == 0) {
                  uVar6 = *(undefined4 *)(local_2c + 0x48);
                  cMyTrace::cMyTrace(local_8c,
                                     "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                     ,0x575e,5);
                  cMyTrace::operator()
                            (local_8c,
                             "DB_UpdateCreatureItem::dispatch, get_int(3) ERROR charac_no=%u",uVar6)
                  ;
                  StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                  unaff_EBX = 0;
                  bVar1 = false;
                }
                else {
                  local_20 = MySQL::get_int(local_28,4,(int *)(local_24 + 0x4c));
                  local_20 = local_20 & 0xff;
                  if (local_20 == 0) {
                    uVar6 = *(undefined4 *)(local_2c + 0x48);
                    cMyTrace::cMyTrace(local_7c,
                                       "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                       ,0x5766,5);
                    cMyTrace::operator()
                              (local_7c,
                               "DB_UpdateCreatureItem::dispatch, get_int(4) ERROR charac_no=%u",
                               uVar6);
                    StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                    unaff_EBX = 0;
                    bVar1 = false;
                  }
                  else {
                    cVar2 = MySQL::get_ushort(local_28,5,(ushort *)(local_24 + 0x14));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_int(local_28,6,(int *)local_e8);
                      if (cVar2 == '\x01') {
                        local_24[0x50] = local_e8[0];
                        cVar2 = MySQL::get_int(local_28,7,(int *)local_ec);
                        if (cVar2 == '\x01') {
                          local_24[0x52] = local_ec[0];
                          cVar2 = MySQL::get_int(local_28,8,(int *)(local_24 + 0x54));
                          if (cVar2 == '\x01') {
                            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e4);
                            bVar1 = true;
                          }
                          else {
                            uVar6 = *(undefined4 *)(local_2c + 0x48);
                            cMyTrace::cMyTrace(local_3c,
                                               "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                               ,0x5794,5);
                            cMyTrace::operator()
                                      (local_3c,
                                       "DB_UpdateCreatureItem::dispatch, get_int(9) ERROR charac_no=%u"
                                       ,uVar6);
                            StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                            unaff_EBX = 0;
                            bVar1 = false;
                          }
                        }
                        else {
                          uVar6 = *(undefined4 *)(local_2c + 0x48);
                          cMyTrace::cMyTrace(local_4c,
                                             "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                             ,0x577e,5);
                          cMyTrace::operator()
                                    (local_4c,
                                     "DB_UpdateCreatureItem::dispatch, get_int(7) ERROR charac_no=%u"
                                     ,uVar6);
                          StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                          unaff_EBX = 0;
                          bVar1 = false;
                        }
                      }
                      else {
                        uVar6 = *(undefined4 *)(local_2c + 0x48);
                        cMyTrace::cMyTrace(local_5c,
                                           "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                           ,0x5775,5);
                        cMyTrace::operator()
                                  (local_5c,
                                   "DB_UpdateCreatureItem::dispatch, get_int(6) ERROR charac_no=%u",
                                   uVar6);
                        StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                        unaff_EBX = 0;
                        bVar1 = false;
                      }
                    }
                    else {
                      uVar6 = *(undefined4 *)(local_2c + 0x48);
                      cMyTrace::cMyTrace(local_6c,
                                         "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                         ,0x576d,5);
                      cMyTrace::operator()
                                (local_6c,
                                 "DB_UpdateCreatureItem::dispatch, get_ushort(5) ERROR charac_no=%u"
                                 ,uVar6);
                      StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                      unaff_EBX = 0;
                      bVar1 = false;
                    }
                  }
                }
              }
              else {
                uVar6 = *(undefined4 *)(local_2c + 0x48);
                cMyTrace::cMyTrace(local_9c,
                                   "virtual bool DB_UpdateCreatureItem::dispatch(int, int, Stream*)"
                                   ,0x5756,5);
                cMyTrace::operator()
                          (local_9c,"DB_UpdateCreatureItem::dispatch, get_int(2) ERROR charac_no=%u"
                           ,uVar6);
                StreamPool::Free(GlobalData::s_stream_pool,local_e4);
                unaff_EBX = 0;
                bVar1 = false;
              }
            }
          }
        }
      }
      CStreamGuard::~CStreamGuard(local_e4);
      if (!bVar1) {
        return unaff_EBX;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
