# AcquireCharacterMemory

`_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi`

`global constructors keyed to exchange_server::AcquireCharacterMemory(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to exchange_server` | `0x0848f322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f322  _GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi
#           global constructors keyed to exchange_server::AcquireCharacterMemory(int)
# range [0x0848f322, 0x084992ab]
0848f322 +0x0000:  push   %ebp
0848f323 +0x0001:  mov    %esp,%ebp
0848f325 +0x0003:  sub    $0x18,%esp
0848f328 +0x0006:  movl   $0xffff,0x4(%esp)
0848f330 +0x000e:  movl   $0x1,(%esp)
0848f337 +0x0015:  call   0848f2e2 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0848f33c +0x001a:  leave
0848f33d +0x001b:  ret
0848f33e +0x001c:  push   %ebp
0848f33f +0x001d:  mov    %esp,%ebp
0848f341 +0x001f:  mov    0x8(%ebp),%eax
0848f344 +0x0022:  movl   $0x0,(%eax)
0848f34a +0x0028:  pop    %ebp
0848f34b +0x0029:  ret
0848f34c +0x002a:  push   %ebp
0848f34d +0x002b:  mov    %esp,%ebp
0848f34f +0x002d:  mov    0x8(%ebp),%eax
0848f352 +0x0030:  movb   $0x0,(%eax)
0848f355 +0x0033:  mov    0x8(%ebp),%eax
0848f358 +0x0036:  movb   $0x0,0x1(%eax)
0848f35c +0x003a:  pop    %ebp
0848f35d +0x003b:  ret
0848f35e +0x003c:  push   %ebp
0848f35f +0x003d:  mov    %esp,%ebp
0848f361 +0x003f:  mov    0x8(%ebp),%eax
0848f364 +0x0042:  mov    0x10(%eax),%eax
0848f367 +0x0045:  lea    0x1(%eax),%edx
0848f36a +0x0048:  mov    0x8(%ebp),%eax
0848f36d +0x004b:  mov    %edx,0x10(%eax)
0848f370 +0x004e:  mov    0x8(%ebp),%eax
0848f373 +0x0051:  mov    0x10(%eax),%eax
0848f376 +0x0054:  test   %eax,%eax
0848f378 +0x0056:  sete   %al
0848f37b +0x0059:  test   %al,%al
0848f37d +0x005b:  je     0848f38e <+0x6c>
0848f37f +0x005d:  mov    0x8(%ebp),%eax
0848f382 +0x0060:  mov    0x14(%eax),%eax
0848f385 +0x0063:  lea    0x1(%eax),%edx
0848f388 +0x0066:  mov    0x8(%ebp),%eax
0848f38b +0x0069:  mov    %edx,0x14(%eax)
0848f38e +0x006c:  pop    %ebp
0848f38f +0x006d:  ret
0848f390 +0x006e:  push   %ebp
0848f391 +0x006f:  mov    %esp,%ebp
0848f393 +0x0071:  mov    0x8(%ebp),%eax
0848f396 +0x0074:  movzbl 0xc(%eax),%eax
0848f39a +0x0078:  pop    %ebp
0848f39b +0x0079:  ret
0848f39c +0x007a:  push   %ebp
0848f39d +0x007b:  mov    %esp,%ebp
0848f39f +0x007d:  sub    $0x18,%esp
0848f3a2 +0x0080:  mov    0x8(%ebp),%eax
0848f3a5 +0x0083:  mov    (%eax),%eax
0848f3a7 +0x0085:  mov    0x10(%ebp),%edx
0848f3aa +0x0088:  mov    %edx,0x8(%esp)
0848f3ae +0x008c:  mov    0xc(%ebp),%edx
0848f3b1 +0x008f:  mov    %edx,0x4(%esp)
0848f3b5 +0x0093:  mov    %eax,(%esp)
0848f3b8 +0x0096:  call   0858d4de <_ZN9PacketBuf11bind_packetEPci>  ; PacketBuf::bind_packet(char*, int)
0848f3bd +0x009b:  leave
0848f3be +0x009c:  ret
0848f3bf +0x009d:  nop
0848f3c0 +0x009e:  push   %ebp
0848f3c1 +0x009f:  mov    %esp,%ebp
0848f3c3 +0x00a1:  sub    $0x18,%esp
0848f3c6 +0x00a4:  mov    0x8(%ebp),%eax
0848f3c9 +0x00a7:  mov    (%eax),%eax
0848f3cb +0x00a9:  mov    0xc(%ebp),%edx
0848f3ce +0x00ac:  mov    %edx,0x4(%esp)
0848f3d2 +0x00b0:  mov    %eax,(%esp)
0848f3d5 +0x00b3:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0848f3da +0x00b8:  leave
0848f3db +0x00b9:  ret
0848f3dc +0x00ba:  push   %ebp
0848f3dd +0x00bb:  mov    %esp,%ebp
0848f3df +0x00bd:  sub    $0x18,%esp
0848f3e2 +0x00c0:  mov    0x8(%ebp),%eax
0848f3e5 +0x00c3:  mov    (%eax),%eax
0848f3e7 +0x00c5:  mov    0xc(%ebp),%edx
0848f3ea +0x00c8:  mov    %edx,0x4(%esp)
0848f3ee +0x00cc:  mov    %eax,(%esp)
0848f3f1 +0x00cf:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0848f3f6 +0x00d4:  leave
0848f3f7 +0x00d5:  ret
0848f3f8 +0x00d6:  push   %ebp
0848f3f9 +0x00d7:  mov    %esp,%ebp
0848f3fb +0x00d9:  sub    $0x18,%esp
0848f3fe +0x00dc:  mov    0x8(%ebp),%eax
0848f401 +0x00df:  mov    (%eax),%eax
0848f403 +0x00e1:  mov    0x10(%ebp),%edx
0848f406 +0x00e4:  mov    %edx,0x8(%esp)
0848f40a +0x00e8:  mov    0xc(%ebp),%edx
0848f40d +0x00eb:  mov    %edx,0x4(%esp)
0848f411 +0x00ef:  mov    %eax,(%esp)
0848f414 +0x00f2:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0848f419 +0x00f7:  leave
0848f41a +0x00f8:  ret
0848f41b +0x00f9:  nop
0848f41c +0x00fa:  push   %ebp
0848f41d +0x00fb:  mov    %esp,%ebp
0848f41f +0x00fd:  sub    $0x18,%esp
0848f422 +0x0100:  mov    0x8(%ebp),%eax
0848f425 +0x0103:  mov    (%eax),%eax
0848f427 +0x0105:  mov    0xc(%ebp),%edx
0848f42a +0x0108:  mov    %edx,0x4(%esp)
0848f42e +0x010c:  mov    %eax,(%esp)
0848f431 +0x010f:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0848f436 +0x0114:  leave
0848f437 +0x0115:  ret
0848f438 +0x0116:  push   %ebp
0848f439 +0x0117:  mov    %esp,%ebp
0848f43b +0x0119:  sub    $0x18,%esp
0848f43e +0x011c:  mov    0x8(%ebp),%eax
0848f441 +0x011f:  mov    (%eax),%eax
0848f443 +0x0121:  mov    %eax,(%esp)
0848f446 +0x0124:  call   0858da52 <_ZNK9PacketBuf7get_lenEv>  ; PacketBuf::get_len() const
0848f44b +0x0129:  leave
0848f44c +0x012a:  ret
0848f44d +0x012b:  nop
0848f44e +0x012c:  push   %ebp
0848f44f +0x012d:  mov    %esp,%ebp
0848f451 +0x012f:  sub    $0x18,%esp
0848f454 +0x0132:  mov    0x8(%ebp),%eax
0848f457 +0x0135:  mov    (%eax),%eax
0848f459 +0x0137:  mov    %eax,(%esp)
0848f45c +0x013a:  call   0848f390 <+0x6e>
0848f461 +0x013f:  leave
0848f462 +0x0140:  ret
0848f463 +0x0141:  nop
0848f464 +0x0142:  push   %ebp
0848f465 +0x0143:  mov    %esp,%ebp
0848f467 +0x0145:  sub    $0x18,%esp
0848f46a +0x0148:  movl   $0x21,0x8(%esp)
0848f472 +0x0150:  movl   $0x0,0x4(%esp)
0848f47a +0x0158:  mov    0x8(%ebp),%eax
0848f47d +0x015b:  mov    %eax,(%esp)
0848f480 +0x015e:  call   0807dcc0 <_init+0x5b8>
0848f485 +0x0163:  leave
0848f486 +0x0164:  ret
0848f487 +0x0165:  nop
0848f488 +0x0166:  push   %ebp
0848f489 +0x0167:  mov    %esp,%ebp
0848f48b +0x0169:  push   %esi
0848f48c +0x016a:  push   %ebx
0848f48d +0x016b:  sub    $0x10,%esp
0848f490 +0x016e:  mov    0x8(%ebp),%eax
0848f493 +0x0171:  mov    %eax,(%esp)
0848f496 +0x0174:  call   0848f464 <+0x142>
0848f49b +0x0179:  mov    0x8(%ebp),%eax
0848f49e +0x017c:  add    $0x21,%eax
0848f4a1 +0x017f:  mov    %eax,%ebx
0848f4a3 +0x0181:  mov    $0x31,%esi
0848f4a8 +0x0186:  jmp    0848f4b8 <+0x196>
0848f4aa +0x0188:  mov    %ebx,(%esp)
0848f4ad +0x018b:  call   08134452 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x59
0848f4b2 +0x0190:  add    $0x8,%ebx
0848f4b5 +0x0193:  sub    $0x1,%esi
0848f4b8 +0x0196:  cmp    $0xffffffff,%esi
0848f4bb +0x0199:  setne  %al
0848f4be +0x019c:  test   %al,%al
0848f4c0 +0x019e:  jne    0848f4aa <+0x188>
0848f4c2 +0x01a0:  mov    0x8(%ebp),%eax
0848f4c5 +0x01a3:  add    $0x1b1,%eax
0848f4ca +0x01a8:  mov    %eax,%ebx
0848f4cc +0x01aa:  mov    $0xb,%esi
0848f4d1 +0x01af:  jmp    0848f4e1 <+0x1bf>
0848f4d3 +0x01b1:  mov    %ebx,(%esp)
0848f4d6 +0x01b4:  call   0813449a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xa1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xa1
0848f4db +0x01b9:  add    $0xa,%ebx
0848f4de +0x01bc:  sub    $0x1,%esi
0848f4e1 +0x01bf:  cmp    $0xffffffff,%esi
0848f4e4 +0x01c2:  setne  %al
0848f4e7 +0x01c5:  test   %al,%al
0848f4e9 +0x01c7:  jne    0848f4d3 <+0x1b1>
0848f4eb +0x01c9:  mov    0x8(%ebp),%eax
0848f4ee +0x01cc:  add    $0x229,%eax
0848f4f3 +0x01d1:  mov    %eax,%ebx
0848f4f5 +0x01d3:  mov    $0x31,%esi
0848f4fa +0x01d8:  jmp    0848f50a <+0x1e8>
0848f4fc +0x01da:  mov    %ebx,(%esp)
0848f4ff +0x01dd:  call   08134476 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7d
0848f504 +0x01e2:  add    $0xc,%ebx
0848f507 +0x01e5:  sub    $0x1,%esi
0848f50a +0x01e8:  cmp    $0xffffffff,%esi
0848f50d +0x01eb:  setne  %al
0848f510 +0x01ee:  test   %al,%al
0848f512 +0x01f0:  jne    0848f4fc <+0x1da>
0848f514 +0x01f2:  mov    0x8(%ebp),%eax
0848f517 +0x01f5:  add    $0x481,%eax
0848f51c +0x01fa:  mov    %eax,%ebx
0848f51e +0x01fc:  mov    $0x1d,%esi
0848f523 +0x0201:  jmp    0848f533 <+0x211>
0848f525 +0x0203:  mov    %ebx,(%esp)
0848f528 +0x0206:  call   081344be <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xc5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xc5
0848f52d +0x020b:  add    $0x5,%ebx
0848f530 +0x020e:  sub    $0x1,%esi
0848f533 +0x0211:  cmp    $0xffffffff,%esi
0848f536 +0x0214:  setne  %al
0848f539 +0x0217:  test   %al,%al
0848f53b +0x0219:  jne    0848f525 <+0x203>
0848f53d +0x021b:  movl   $0x518,0x8(%esp)
0848f545 +0x0223:  movl   $0x0,0x4(%esp)
0848f54d +0x022b:  mov    0x8(%ebp),%eax
0848f550 +0x022e:  mov    %eax,(%esp)
0848f553 +0x0231:  call   0807dcc0 <_init+0x5b8>
0848f558 +0x0236:  add    $0x10,%esp
0848f55b +0x0239:  pop    %ebx
0848f55c +0x023a:  pop    %esi
0848f55d +0x023b:  pop    %ebp
0848f55e +0x023c:  ret
0848f55f +0x023d:  nop
0848f560 +0x023e:  push   %ebp
0848f561 +0x023f:  mov    %esp,%ebp
0848f563 +0x0241:  push   %esi
0848f564 +0x0242:  push   %ebx
0848f565 +0x0243:  sub    $0x10,%esp
0848f568 +0x0246:  mov    0x8(%ebp),%eax
0848f56b +0x0249:  add    $0x4,%eax
0848f56e +0x024c:  mov    %eax,%ebx
0848f570 +0x024e:  mov    $0x0,%esi
0848f575 +0x0253:  jmp    0848f588 <+0x266>
0848f577 +0x0255:  mov    %ebx,(%esp)
0848f57a +0x0258:  call   0848f488 <+0x166>
0848f57f +0x025d:  add    $0x518,%ebx
0848f585 +0x0263:  sub    $0x1,%esi
0848f588 +0x0266:  cmp    $0xffffffff,%esi
0848f58b +0x0269:  setne  %al
0848f58e +0x026c:  test   %al,%al
0848f590 +0x026e:  jne    0848f577 <+0x255>
0848f592 +0x0270:  movl   $0x51c,0x8(%esp)
0848f59a +0x0278:  movl   $0x0,0x4(%esp)
0848f5a2 +0x0280:  mov    0x8(%ebp),%eax
0848f5a5 +0x0283:  mov    %eax,(%esp)
0848f5a8 +0x0286:  call   0807dcc0 <_init+0x5b8>
0848f5ad +0x028b:  add    $0x10,%esp
0848f5b0 +0x028e:  pop    %ebx
0848f5b1 +0x028f:  pop    %esi
0848f5b2 +0x0290:  pop    %ebp
0848f5b3 +0x0291:  ret
0848f5b4 +0x0292:  push   %ebp
0848f5b5 +0x0293:  mov    %esp,%ebp
0848f5b7 +0x0295:  sub    $0x18,%esp
0848f5ba +0x0298:  movl   $0xb,0x8(%esp)
0848f5c2 +0x02a0:  movl   $0x0,0x4(%esp)
0848f5ca +0x02a8:  mov    0x8(%ebp),%eax
0848f5cd +0x02ab:  mov    %eax,(%esp)
0848f5d0 +0x02ae:  call   0807dcc0 <_init+0x5b8>
0848f5d5 +0x02b3:  leave
0848f5d6 +0x02b4:  ret
0848f5d7 +0x02b5:  nop
0848f5d8 +0x02b6:  push   %ebp
0848f5d9 +0x02b7:  mov    %esp,%ebp
0848f5db +0x02b9:  push   %esi
0848f5dc +0x02ba:  push   %ebx
0848f5dd +0x02bb:  sub    $0x10,%esp
0848f5e0 +0x02be:  mov    0x8(%ebp),%eax
0848f5e3 +0x02c1:  add    $0xd,%eax
0848f5e6 +0x02c4:  mov    %eax,%ebx
0848f5e8 +0x02c6:  mov    $0x12b,%esi
0848f5ed +0x02cb:  jmp    0848f5fd <+0x2db>
0848f5ef +0x02cd:  mov    %ebx,(%esp)
0848f5f2 +0x02d0:  call   0848f5b4 <+0x292>
0848f5f7 +0x02d5:  add    $0xb,%ebx
0848f5fa +0x02d8:  sub    $0x1,%esi
0848f5fd +0x02db:  cmp    $0xffffffff,%esi
0848f600 +0x02de:  setne  %al
0848f603 +0x02e1:  test   %al,%al
0848f605 +0x02e3:  jne    0848f5ef <+0x2cd>
0848f607 +0x02e5:  movl   $0xcf1,0x8(%esp)
0848f60f +0x02ed:  movl   $0x0,0x4(%esp)
0848f617 +0x02f5:  mov    0x8(%ebp),%eax
0848f61a +0x02f8:  mov    %eax,(%esp)
0848f61d +0x02fb:  call   0807dcc0 <_init+0x5b8>
0848f622 +0x0300:  add    $0x10,%esp
0848f625 +0x0303:  pop    %ebx
0848f626 +0x0304:  pop    %esi
0848f627 +0x0305:  pop    %ebp
0848f628 +0x0306:  ret
0848f629 +0x0307:  nop
0848f62a +0x0308:  push   %ebp
0848f62b +0x0309:  mov    %esp,%ebp
0848f62d +0x030b:  push   %esi
0848f62e +0x030c:  push   %ebx
0848f62f +0x030d:  sub    $0x10,%esp
0848f632 +0x0310:  mov    0x8(%ebp),%eax
0848f635 +0x0313:  mov    %eax,%ebx
0848f637 +0x0315:  mov    $0x45,%esi
0848f63c +0x031a:  jmp    0848f64c <+0x32a>
0848f63e +0x031c:  mov    %ebx,(%esp)
0848f641 +0x031f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f646 +0x0324:  add    $0x3d,%ebx
0848f649 +0x0327:  sub    $0x1,%esi
0848f64c +0x032a:  cmp    $0xffffffff,%esi
0848f64f +0x032d:  setne  %al
0848f652 +0x0330:  test   %al,%al
0848f654 +0x0332:  jne    0848f63e <+0x31c>
0848f656 +0x0334:  mov    0x8(%ebp),%eax
0848f659 +0x0337:  add    $0x10ae,%eax
0848f65e +0x033c:  mov    %eax,%ebx
0848f660 +0x033e:  mov    $0xc7,%esi
0848f665 +0x0343:  jmp    0848f675 <+0x353>
0848f667 +0x0345:  mov    %ebx,(%esp)
0848f66a +0x0348:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f66f +0x034d:  add    $0x3d,%ebx
0848f672 +0x0350:  sub    $0x1,%esi
0848f675 +0x0353:  cmp    $0xffffffff,%esi
0848f678 +0x0356:  setne  %al
0848f67b +0x0359:  test   %al,%al
0848f67d +0x035b:  jne    0848f667 <+0x345>
0848f67f +0x035d:  mov    0x8(%ebp),%eax
0848f682 +0x0360:  add    $0x4056,%eax
0848f687 +0x0365:  mov    %eax,%ebx
0848f689 +0x0367:  mov    $0x77,%esi
0848f68e +0x036c:  jmp    0848f69e <+0x37c>
0848f690 +0x036e:  mov    %ebx,(%esp)
0848f693 +0x0371:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f698 +0x0376:  add    $0x3d,%ebx
0848f69b +0x0379:  sub    $0x1,%esi
0848f69e +0x037c:  cmp    $0xffffffff,%esi
0848f6a1 +0x037f:  setne  %al
0848f6a4 +0x0382:  test   %al,%al
0848f6a6 +0x0384:  jne    0848f690 <+0x36e>
0848f6a8 +0x0386:  mov    0x8(%ebp),%eax
0848f6ab +0x0389:  add    $0x5cee,%eax
0848f6b0 +0x038e:  mov    %eax,%ebx
0848f6b2 +0x0390:  mov    $0x3b,%esi
0848f6b7 +0x0395:  jmp    0848f6c7 <+0x3a5>
0848f6b9 +0x0397:  mov    %ebx,(%esp)
0848f6bc +0x039a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f6c1 +0x039f:  add    $0x3d,%ebx
0848f6c4 +0x03a2:  sub    $0x1,%esi
0848f6c7 +0x03a5:  cmp    $0xffffffff,%esi
0848f6ca +0x03a8:  setne  %al
0848f6cd +0x03ab:  test   %al,%al
0848f6cf +0x03ad:  jne    0848f6b9 <+0x397>
0848f6d1 +0x03af:  mov    0x8(%ebp),%eax
0848f6d4 +0x03b2:  mov    %eax,(%esp)
0848f6d7 +0x03b5:  call   0848f6e4 <+0x3c2>
0848f6dc +0x03ba:  add    $0x10,%esp
0848f6df +0x03bd:  pop    %ebx
0848f6e0 +0x03be:  pop    %esi
0848f6e1 +0x03bf:  pop    %ebp
0848f6e2 +0x03c0:  ret
0848f6e3 +0x03c1:  nop
0848f6e4 +0x03c2:  push   %ebp
0848f6e5 +0x03c3:  mov    %esp,%ebp
0848f6e7 +0x03c5:  sub    $0x18,%esp
0848f6ea +0x03c8:  mov    0x8(%ebp),%eax
0848f6ed +0x03cb:  movl   $0x10ae,0x8(%esp)
0848f6f5 +0x03d3:  movl   $0x0,0x4(%esp)
0848f6fd +0x03db:  mov    %eax,(%esp)
0848f700 +0x03de:  call   0807dcc0 <_init+0x5b8>
0848f705 +0x03e3:  mov    0x8(%ebp),%eax
0848f708 +0x03e6:  add    $0x10ae,%eax
0848f70d +0x03eb:  movl   $0x2fa8,0x8(%esp)
0848f715 +0x03f3:  movl   $0x0,0x4(%esp)
0848f71d +0x03fb:  mov    %eax,(%esp)
0848f720 +0x03fe:  call   0807dcc0 <_init+0x5b8>
0848f725 +0x0403:  mov    0x8(%ebp),%eax
0848f728 +0x0406:  add    $0x4056,%eax
0848f72d +0x040b:  movl   $0x1c98,0x8(%esp)
0848f735 +0x0413:  movl   $0x0,0x4(%esp)
0848f73d +0x041b:  mov    %eax,(%esp)
0848f740 +0x041e:  call   0807dcc0 <_init+0x5b8>
0848f745 +0x0423:  mov    0x8(%ebp),%eax
0848f748 +0x0426:  add    $0x5cee,%eax
0848f74d +0x042b:  movl   $0xe4c,0x8(%esp)
0848f755 +0x0433:  movl   $0x0,0x4(%esp)
0848f75d +0x043b:  mov    %eax,(%esp)
0848f760 +0x043e:  call   0807dcc0 <_init+0x5b8>
0848f765 +0x0443:  leave
0848f766 +0x0444:  ret
0848f767 +0x0445:  nop
0848f768 +0x0446:  push   %ebp
0848f769 +0x0447:  mov    %esp,%ebp
0848f76b +0x0449:  mov    0x8(%ebp),%eax
0848f76e +0x044c:  movb   $0x0,(%eax)
0848f771 +0x044f:  pop    %ebp
0848f772 +0x0450:  ret
0848f773 +0x0451:  nop
0848f774 +0x0452:  push   %ebp
0848f775 +0x0453:  mov    %esp,%ebp
0848f777 +0x0455:  push   %esi
0848f778 +0x0456:  push   %ebx
0848f779 +0x0457:  sub    $0x10,%esp
0848f77c +0x045a:  mov    0x8(%ebp),%eax
0848f77f +0x045d:  mov    %eax,%ebx
0848f781 +0x045f:  mov    $0x15,%esi
0848f786 +0x0464:  jmp    0848f796 <+0x474>
0848f788 +0x0466:  mov    %ebx,(%esp)
0848f78b +0x0469:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f790 +0x046e:  add    $0x3d,%ebx
0848f793 +0x0471:  sub    $0x1,%esi
0848f796 +0x0474:  cmp    $0xffffffff,%esi
0848f799 +0x0477:  setne  %al
0848f79c +0x047a:  test   %al,%al
0848f79e +0x047c:  jne    0848f788 <+0x466>
0848f7a0 +0x047e:  mov    0x8(%ebp),%eax
0848f7a3 +0x0481:  add    $0x53e,%eax
0848f7a8 +0x0486:  mov    %eax,%ebx
0848f7aa +0x0488:  mov    $0x68,%esi
0848f7af +0x048d:  jmp    0848f7bf <+0x49d>
0848f7b1 +0x048f:  mov    %ebx,(%esp)
0848f7b4 +0x0492:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f7b9 +0x0497:  add    $0x3d,%ebx
0848f7bc +0x049a:  sub    $0x1,%esi
0848f7bf +0x049d:  cmp    $0xffffffff,%esi
0848f7c2 +0x04a0:  setne  %al
0848f7c5 +0x04a3:  test   %al,%al
0848f7c7 +0x04a5:  jne    0848f7b1 <+0x48f>
0848f7c9 +0x04a7:  mov    0x8(%ebp),%eax
0848f7cc +0x04aa:  mov    %eax,(%esp)
0848f7cf +0x04ad:  call   0822edd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x447a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x447a
0848f7d4 +0x04b2:  add    $0x10,%esp
0848f7d7 +0x04b5:  pop    %ebx
0848f7d8 +0x04b6:  pop    %esi
0848f7d9 +0x04b7:  pop    %ebp
0848f7da +0x04b8:  ret
0848f7db +0x04b9:  nop
0848f7dc +0x04ba:  push   %ebp
0848f7dd +0x04bb:  mov    %esp,%ebp
0848f7df +0x04bd:  push   %edi
0848f7e0 +0x04be:  push   %esi
0848f7e1 +0x04bf:  push   %ebx
0848f7e2 +0x04c0:  sub    $0x2c,%esp
0848f7e5 +0x04c3:  mov    0x8(%ebp),%eax
0848f7e8 +0x04c6:  mov    %eax,%edi
0848f7ea +0x04c8:  mov    $0x1,%esi
0848f7ef +0x04cd:  jmp    0848f821 <+0x4ff>
0848f7f1 +0x04cf:  mov    %edi,%eax
0848f7f3 +0x04d1:  mov    %eax,%ebx
0848f7f5 +0x04d3:  movl   $0xcb,-0x1c(%ebp)
0848f7fc +0x04da:  jmp    0848f80d <+0x4eb>
0848f7fe +0x04dc:  mov    %ebx,(%esp)
0848f801 +0x04df:  call   0848f34c <+0x2a>
0848f806 +0x04e4:  add    $0x2,%ebx
0848f809 +0x04e7:  subl   $0x1,-0x1c(%ebp)
0848f80d +0x04eb:  cmpl   $0xffffffff,-0x1c(%ebp)
0848f811 +0x04ef:  setne  %al
0848f814 +0x04f2:  test   %al,%al
0848f816 +0x04f4:  jne    0848f7fe <+0x4dc>
0848f818 +0x04f6:  add    $0x198,%edi
0848f81e +0x04fc:  sub    $0x1,%esi
0848f821 +0x04ff:  cmp    $0xffffffff,%esi
0848f824 +0x0502:  setne  %al
0848f827 +0x0505:  test   %al,%al
0848f829 +0x0507:  jne    0848f7f1 <+0x4cf>
0848f82b +0x0509:  mov    0x8(%ebp),%eax
0848f82e +0x050c:  mov    %eax,(%esp)
0848f831 +0x050f:  call   0822edf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x449e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x449e
0848f836 +0x0514:  add    $0x2c,%esp
0848f839 +0x0517:  pop    %ebx
0848f83a +0x0518:  pop    %esi
0848f83b +0x0519:  pop    %edi
0848f83c +0x051a:  pop    %ebp
0848f83d +0x051b:  ret
0848f83e +0x051c:  push   %ebp
0848f83f +0x051d:  mov    %esp,%ebp
0848f841 +0x051f:  sub    $0x18,%esp
0848f844 +0x0522:  movl   $0xaa,0x8(%esp)
0848f84c +0x052a:  movl   $0x0,0x4(%esp)
0848f854 +0x0532:  mov    0x8(%ebp),%eax
0848f857 +0x0535:  mov    %eax,(%esp)
0848f85a +0x0538:  call   0807dcc0 <_init+0x5b8>
0848f85f +0x053d:  leave
0848f860 +0x053e:  ret
0848f861 +0x053f:  nop
0848f862 +0x0540:  push   %ebp
0848f863 +0x0541:  mov    %esp,%ebp
0848f865 +0x0543:  sub    $0x18,%esp
0848f868 +0x0546:  mov    0x8(%ebp),%eax
0848f86b +0x0549:  mov    %eax,(%esp)
0848f86e +0x054c:  call   0848f83e <+0x51c>
0848f873 +0x0551:  leave
0848f874 +0x0552:  ret
0848f875 +0x0553:  nop
0848f876 +0x0554:  push   %ebp
0848f877 +0x0555:  mov    %esp,%ebp
0848f879 +0x0557:  sub    $0x18,%esp
0848f87c +0x055a:  mov    0x8(%ebp),%eax
0848f87f +0x055d:  mov    %eax,(%esp)
0848f882 +0x0560:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0848f887 +0x0565:  mov    0x8(%ebp),%eax
0848f88a +0x0568:  movl   $0x7fffffff,0x40(%eax)
0848f891 +0x056f:  leave
0848f892 +0x0570:  ret
0848f893 +0x0571:  nop
0848f894 +0x0572:  push   %ebp
0848f895 +0x0573:  mov    %esp,%ebp
0848f897 +0x0575:  push   %esi
0848f898 +0x0576:  push   %ebx
0848f899 +0x0577:  sub    $0x10,%esp
0848f89c +0x057a:  mov    0x8(%ebp),%eax
0848f89f +0x057d:  movl   $0x0,0x4(%eax)
0848f8a6 +0x0584:  mov    0x8(%ebp),%eax
0848f8a9 +0x0587:  add    $0x8,%eax
0848f8ac +0x058a:  mov    %eax,%ebx
0848f8ae +0x058c:  mov    $0x14,%esi
0848f8b3 +0x0591:  jmp    0848f8c3 <+0x5a1>
0848f8b5 +0x0593:  mov    %ebx,(%esp)
0848f8b8 +0x0596:  call   0848f876 <+0x554>
0848f8bd +0x059b:  add    $0x44,%ebx
0848f8c0 +0x059e:  sub    $0x1,%esi
0848f8c3 +0x05a1:  cmp    $0xffffffff,%esi
0848f8c6 +0x05a4:  setne  %al
0848f8c9 +0x05a7:  test   %al,%al
0848f8cb +0x05a9:  jne    0848f8b5 <+0x593>
0848f8cd +0x05ab:  add    $0x10,%esp
0848f8d0 +0x05ae:  pop    %ebx
0848f8d1 +0x05af:  pop    %esi
0848f8d2 +0x05b0:  pop    %ebp
0848f8d3 +0x05b1:  ret
0848f8d4 +0x05b2:  push   %ebp
0848f8d5 +0x05b3:  mov    %esp,%ebp
0848f8d7 +0x05b5:  push   %esi
0848f8d8 +0x05b6:  push   %ebx
0848f8d9 +0x05b7:  sub    $0x10,%esp
0848f8dc +0x05ba:  mov    0x8(%ebp),%eax
0848f8df +0x05bd:  add    $0x4,%eax
0848f8e2 +0x05c0:  mov    %eax,%ebx
0848f8e4 +0x05c2:  mov    $0x23,%esi
0848f8e9 +0x05c7:  jmp    0848f8f9 <+0x5d7>
0848f8eb +0x05c9:  mov    %ebx,(%esp)
0848f8ee +0x05cc:  call   0832aede <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x7b>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x7b
0848f8f3 +0x05d1:  add    $0x8,%ebx
0848f8f6 +0x05d4:  sub    $0x1,%esi
0848f8f9 +0x05d7:  cmp    $0xffffffff,%esi
0848f8fc +0x05da:  setne  %al
0848f8ff +0x05dd:  test   %al,%al
0848f901 +0x05df:  jne    0848f8eb <+0x5c9>
0848f903 +0x05e1:  mov    0x8(%ebp),%eax
0848f906 +0x05e4:  movw   $0x0,0x144(%eax)
0848f90f +0x05ed:  mov    0x8(%ebp),%eax
0848f912 +0x05f0:  movw   $0x0,0x146(%eax)
0848f91b +0x05f9:  mov    0x8(%ebp),%eax
0848f91e +0x05fc:  movw   $0x0,0x148(%eax)
0848f927 +0x0605:  add    $0x10,%esp
0848f92a +0x0608:  pop    %ebx
0848f92b +0x0609:  pop    %esi
0848f92c +0x060a:  pop    %ebp
0848f92d +0x060b:  ret
0848f92e +0x060c:  push   %ebp
0848f92f +0x060d:  mov    %esp,%ebp
0848f931 +0x060f:  sub    $0x18,%esp
0848f934 +0x0612:  mov    0x8(%ebp),%eax
0848f937 +0x0615:  mov    %eax,(%esp)
0848f93a +0x0618:  call   0848f862 <+0x540>
0848f93f +0x061d:  mov    0x8(%ebp),%eax
0848f942 +0x0620:  add    $0xaa,%eax
0848f947 +0x0625:  mov    %eax,(%esp)
0848f94a +0x0628:  call   0848f862 <+0x540>
0848f94f +0x062d:  mov    0x8(%ebp),%eax
0848f952 +0x0630:  mov    %eax,(%esp)
0848f955 +0x0633:  call   0848f83e <+0x51c>
0848f95a +0x0638:  mov    0x8(%ebp),%eax
0848f95d +0x063b:  add    $0xaa,%eax
0848f962 +0x0640:  mov    %eax,(%esp)
0848f965 +0x0643:  call   0848f83e <+0x51c>
0848f96a +0x0648:  mov    0x8(%ebp),%eax
0848f96d +0x064b:  movb   $0x0,0x154(%eax)
0848f974 +0x0652:  leave
0848f975 +0x0653:  ret
0848f976 +0x0654:  push   %ebp
0848f977 +0x0655:  mov    %esp,%ebp
0848f979 +0x0657:  mov    0x8(%ebp),%eax
0848f97c +0x065a:  movl   $0xffffffff,(%eax)
0848f982 +0x0660:  mov    0x8(%ebp),%eax
0848f985 +0x0663:  movl   $0xffffffff,0x4(%eax)
0848f98c +0x066a:  pop    %ebp
0848f98d +0x066b:  ret
0848f98e +0x066c:  push   %ebp
0848f98f +0x066d:  mov    %esp,%ebp
0848f991 +0x066f:  sub    $0x18,%esp
0848f994 +0x0672:  mov    0x8(%ebp),%eax
0848f997 +0x0675:  mov    %eax,(%esp)
0848f99a +0x0678:  call   0848f9a2 <+0x680>
0848f99f +0x067d:  leave
0848f9a0 +0x067e:  ret
0848f9a1 +0x067f:  nop
0848f9a2 +0x0680:  push   %ebp
0848f9a3 +0x0681:  mov    %esp,%ebp
0848f9a5 +0x0683:  mov    0x8(%ebp),%eax
0848f9a8 +0x0686:  movl   $0x0,(%eax)
0848f9ae +0x068c:  mov    0x8(%ebp),%eax
0848f9b1 +0x068f:  movb   $0x0,0x4(%eax)
0848f9b5 +0x0693:  mov    0x8(%ebp),%eax
0848f9b8 +0x0696:  movb   $0x0,0x5(%eax)
0848f9bc +0x069a:  mov    0x8(%ebp),%eax
0848f9bf +0x069d:  movb   $0x0,0x6(%eax)
0848f9c3 +0x06a1:  mov    0x8(%ebp),%eax
0848f9c6 +0x06a4:  movl   $0xffffffff,0x8(%eax)
0848f9cd +0x06ab:  pop    %ebp
0848f9ce +0x06ac:  ret
0848f9cf +0x06ad:  nop
0848f9d0 +0x06ae:  push   %ebp
0848f9d1 +0x06af:  mov    %esp,%ebp
0848f9d3 +0x06b1:  sub    $0x18,%esp
0848f9d6 +0x06b4:  mov    0x8(%ebp),%eax
0848f9d9 +0x06b7:  mov    %eax,(%esp)
0848f9dc +0x06ba:  call   0848f9e4 <+0x6c2>
0848f9e1 +0x06bf:  leave
0848f9e2 +0x06c0:  ret
0848f9e3 +0x06c1:  nop
0848f9e4 +0x06c2:  push   %ebp
0848f9e5 +0x06c3:  mov    %esp,%ebp
0848f9e7 +0x06c5:  mov    0x8(%ebp),%eax
0848f9ea +0x06c8:  movl   $0x0,(%eax)
0848f9f0 +0x06ce:  mov    0x8(%ebp),%eax
0848f9f3 +0x06d1:  movb   $0x0,0x4(%eax)
0848f9f7 +0x06d5:  mov    0x8(%ebp),%eax
0848f9fa +0x06d8:  movb   $0x0,0x5(%eax)
0848f9fe +0x06dc:  mov    0x8(%ebp),%eax
0848fa01 +0x06df:  movb   $0x0,0x6(%eax)
0848fa05 +0x06e3:  mov    0x8(%ebp),%eax
0848fa08 +0x06e6:  movb   $0x0,0x7(%eax)
0848fa0c +0x06ea:  pop    %ebp
0848fa0d +0x06eb:  ret
0848fa0e +0x06ec:  push   %ebp
0848fa0f +0x06ed:  mov    %esp,%ebp
0848fa11 +0x06ef:  sub    $0x10,%esp
0848fa14 +0x06f2:  mov    0x8(%ebp),%eax
0848fa17 +0x06f5:  movb   $0x0,(%eax)
0848fa1a +0x06f8:  movl   $0x0,-0x4(%ebp)
0848fa21 +0x06ff:  jmp    0848fa43 <+0x721>
0848fa23 +0x0701:  mov    -0x4(%ebp),%edx
0848fa26 +0x0704:  mov    0x8(%ebp),%eax
0848fa29 +0x0707:  movl   $0x0,0x4(%eax,%edx,8)
0848fa31 +0x070f:  mov    -0x4(%ebp),%edx
0848fa34 +0x0712:  mov    0x8(%ebp),%eax
0848fa37 +0x0715:  movl   $0x0,0x8(%eax,%edx,8)
0848fa3f +0x071d:  addl   $0x1,-0x4(%ebp)
0848fa43 +0x0721:  cmpl   $0x31,-0x4(%ebp)
0848fa47 +0x0725:  setle  %al
0848fa4a +0x0728:  test   %al,%al
0848fa4c +0x072a:  jne    0848fa23 <+0x701>
0848fa4e +0x072c:  leave
0848fa4f +0x072d:  ret
0848fa50 +0x072e:  push   %ebp
0848fa51 +0x072f:  mov    %esp,%ebp
0848fa53 +0x0731:  mov    0x8(%ebp),%eax
0848fa56 +0x0734:  movw   $0x0,(%eax)
0848fa5b +0x0739:  mov    0x8(%ebp),%eax
0848fa5e +0x073c:  movw   $0x0,0x2(%eax)
0848fa64 +0x0742:  mov    0x8(%ebp),%eax
0848fa67 +0x0745:  movw   $0x0,0x4(%eax)
0848fa6d +0x074b:  mov    0x8(%ebp),%eax
0848fa70 +0x074e:  movw   $0x0,0x6(%eax)
0848fa76 +0x0754:  mov    0x8(%ebp),%eax
0848fa79 +0x0757:  movl   $0x0,0x8(%eax)
0848fa80 +0x075e:  pop    %ebp
0848fa81 +0x075f:  ret
0848fa82 +0x0760:  push   %ebp
0848fa83 +0x0761:  mov    %esp,%ebp
0848fa85 +0x0763:  sub    $0x18,%esp
0848fa88 +0x0766:  mov    0x8(%ebp),%eax
0848fa8b +0x0769:  movl   $0x0,(%eax)
0848fa91 +0x076f:  mov    0x8(%ebp),%eax
0848fa94 +0x0772:  add    $0x4,%eax
0848fa97 +0x0775:  movl   $0x16,0x8(%esp)
0848fa9f +0x077d:  movl   $0x0,0x4(%esp)
0848faa7 +0x0785:  mov    %eax,(%esp)
0848faaa +0x0788:  call   0807dcc0 <_init+0x5b8>
0848faaf +0x078d:  leave
0848fab0 +0x078e:  ret
0848fab1 +0x078f:  nop
0848fab2 +0x0790:  push   %ebp
0848fab3 +0x0791:  mov    %esp,%ebp
0848fab5 +0x0793:  sub    $0x18,%esp
0848fab8 +0x0796:  mov    0x8(%ebp),%eax
0848fabb +0x0799:  movl   $0x0,(%eax)
0848fac1 +0x079f:  mov    0x8(%ebp),%eax
0848fac4 +0x07a2:  add    $0x4,%eax
0848fac7 +0x07a5:  movl   $0x1388,0x8(%esp)
0848facf +0x07ad:  movl   $0x0,0x4(%esp)
0848fad7 +0x07b5:  mov    %eax,(%esp)
0848fada +0x07b8:  call   0807dcc0 <_init+0x5b8>
0848fadf +0x07bd:  leave
0848fae0 +0x07be:  ret
0848fae1 +0x07bf:  nop
0848fae2 +0x07c0:  push   %ebp
0848fae3 +0x07c1:  mov    %esp,%ebp
0848fae5 +0x07c3:  sub    $0x18,%esp
0848fae8 +0x07c6:  mov    0x8(%ebp),%eax
0848faeb +0x07c9:  movl   $0x0,(%eax)
0848faf1 +0x07cf:  mov    0x8(%ebp),%eax
0848faf4 +0x07d2:  add    $0x4,%eax
0848faf7 +0x07d5:  mov    %eax,(%esp)
0848fafa +0x07d8:  call   080c8c72 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xca>  ; global constructors keyed to BestClearTime::BestClearTime()+0xca
0848faff +0x07dd:  leave
0848fb00 +0x07de:  ret
0848fb01 +0x07df:  nop
0848fb02 +0x07e0:  push   %ebp
0848fb03 +0x07e1:  mov    %esp,%ebp
0848fb05 +0x07e3:  push   %esi
0848fb06 +0x07e4:  push   %ebx
0848fb07 +0x07e5:  sub    $0x10,%esp
0848fb0a +0x07e8:  mov    0x8(%ebp),%eax
0848fb0d +0x07eb:  movl   $0x0,(%eax)
0848fb13 +0x07f1:  mov    0x8(%ebp),%eax
0848fb16 +0x07f4:  movl   $0x0,0x4(%eax)
0848fb1d +0x07fb:  mov    0x8(%ebp),%eax
0848fb20 +0x07fe:  add    $0x8,%eax
0848fb23 +0x0801:  mov    %eax,%ebx
0848fb25 +0x0803:  mov    $0x3e7,%esi
0848fb2a +0x0808:  jmp    0848fb3a <+0x818>
0848fb2c +0x080a:  mov    %ebx,(%esp)
0848fb2f +0x080d:  call   0848fae2 <+0x7c0>
0848fb34 +0x0812:  add    $0x18,%ebx
0848fb37 +0x0815:  sub    $0x1,%esi
0848fb3a +0x0818:  cmp    $0xffffffff,%esi
0848fb3d +0x081b:  setne  %al
0848fb40 +0x081e:  test   %al,%al
0848fb42 +0x0820:  jne    0848fb2c <+0x80a>
0848fb44 +0x0822:  add    $0x10,%esp
0848fb47 +0x0825:  pop    %ebx
0848fb48 +0x0826:  pop    %esi
0848fb49 +0x0827:  pop    %ebp
0848fb4a +0x0828:  ret
0848fb4b +0x0829:  nop
0848fb4c +0x082a:  push   %ebp
0848fb4d +0x082b:  mov    %esp,%ebp
0848fb4f +0x082d:  mov    0x8(%ebp),%eax
0848fb52 +0x0830:  movl   $0x0,(%eax)
0848fb58 +0x0836:  mov    0x8(%ebp),%eax
0848fb5b +0x0839:  movl   $0x0,0x4(%eax)
0848fb62 +0x0840:  pop    %ebp
0848fb63 +0x0841:  ret
0848fb64 +0x0842:  push   %ebp
0848fb65 +0x0843:  mov    %esp,%ebp
0848fb67 +0x0845:  mov    0x8(%ebp),%eax
0848fb6a +0x0848:  movl   $0x0,(%eax)
0848fb70 +0x084e:  mov    0x8(%ebp),%eax
0848fb73 +0x0851:  movl   $0x0,0x4(%eax)
0848fb7a +0x0858:  mov    0x8(%ebp),%eax
0848fb7d +0x085b:  movb   $0x0,0x8(%eax)
0848fb81 +0x085f:  pop    %ebp
0848fb82 +0x0860:  ret
0848fb83 +0x0861:  nop
0848fb84 +0x0862:  push   %ebp
0848fb85 +0x0863:  mov    %esp,%ebp
0848fb87 +0x0865:  mov    0x8(%ebp),%eax
0848fb8a +0x0868:  movb   $0x0,(%eax)
0848fb8d +0x086b:  pop    %ebp
0848fb8e +0x086c:  ret
0848fb8f +0x086d:  nop
0848fb90 +0x086e:  push   %ebp
0848fb91 +0x086f:  mov    %esp,%ebp
0848fb93 +0x0871:  sub    $0x18,%esp
0848fb96 +0x0874:  mov    0x8(%ebp),%eax
0848fb99 +0x0877:  movw   $0x0,(%eax)
0848fb9e +0x087c:  mov    0x8(%ebp),%eax
0848fba1 +0x087f:  add    $0x2,%eax
0848fba4 +0x0882:  movl   $0xc,0x8(%esp)
0848fbac +0x088a:  movl   $0x0,0x4(%esp)
0848fbb4 +0x0892:  mov    %eax,(%esp)
0848fbb7 +0x0895:  call   0807dcc0 <_init+0x5b8>
0848fbbc +0x089a:  leave
0848fbbd +0x089b:  ret
0848fbbe +0x089c:  push   %ebp
0848fbbf +0x089d:  mov    %esp,%ebp
0848fbc1 +0x089f:  push   %esi
0848fbc2 +0x08a0:  push   %ebx
0848fbc3 +0x08a1:  sub    $0x10,%esp
0848fbc6 +0x08a4:  mov    0x8(%ebp),%eax
0848fbc9 +0x08a7:  movl   $0x0,(%eax)
0848fbcf +0x08ad:  mov    0x8(%ebp),%eax
0848fbd2 +0x08b0:  movb   $0x0,0x4(%eax)
0848fbd6 +0x08b4:  mov    0x8(%ebp),%eax
0848fbd9 +0x08b7:  movb   $0x0,0x5(%eax)
0848fbdd +0x08bb:  mov    0x8(%ebp),%eax
0848fbe0 +0x08be:  movl   $0xb,0x6(%eax)
0848fbe7 +0x08c5:  mov    0x8(%ebp),%eax
0848fbea +0x08c8:  add    $0xa,%eax
0848fbed +0x08cb:  mov    %eax,%ebx
0848fbef +0x08cd:  mov    $0x5,%esi
0848fbf4 +0x08d2:  jmp    0848fc04 <+0x8e2>
0848fbf6 +0x08d4:  mov    %ebx,(%esp)
0848fbf9 +0x08d7:  call   0848fb90 <+0x86e>
0848fbfe +0x08dc:  add    $0xe,%ebx
0848fc01 +0x08df:  sub    $0x1,%esi
0848fc04 +0x08e2:  cmp    $0xffffffff,%esi
0848fc07 +0x08e5:  setne  %al
0848fc0a +0x08e8:  test   %al,%al
0848fc0c +0x08ea:  jne    0848fbf6 <+0x8d4>
0848fc0e +0x08ec:  mov    0x8(%ebp),%eax
0848fc11 +0x08ef:  add    $0x5e,%eax
0848fc14 +0x08f2:  mov    %eax,%ebx
0848fc16 +0x08f4:  mov    $0x5,%esi
0848fc1b +0x08f9:  jmp    0848fc2b <+0x909>
0848fc1d +0x08fb:  mov    %ebx,(%esp)
0848fc20 +0x08fe:  call   0848fb90 <+0x86e>
0848fc25 +0x0903:  add    $0xe,%ebx
0848fc28 +0x0906:  sub    $0x1,%esi
0848fc2b +0x0909:  cmp    $0xffffffff,%esi
0848fc2e +0x090c:  setne  %al
0848fc31 +0x090f:  test   %al,%al
0848fc33 +0x0911:  jne    0848fc1d <+0x8fb>
0848fc35 +0x0913:  mov    0x8(%ebp),%eax
0848fc38 +0x0916:  add    $0xa,%eax
0848fc3b +0x0919:  movl   $0x54,0x8(%esp)
0848fc43 +0x0921:  movl   $0x0,0x4(%esp)
0848fc4b +0x0929:  mov    %eax,(%esp)
0848fc4e +0x092c:  call   0807dcc0 <_init+0x5b8>
0848fc53 +0x0931:  mov    0x8(%ebp),%eax
0848fc56 +0x0934:  add    $0x5e,%eax
0848fc59 +0x0937:  movl   $0x54,0x8(%esp)
0848fc61 +0x093f:  movl   $0x0,0x4(%esp)
0848fc69 +0x0947:  mov    %eax,(%esp)
0848fc6c +0x094a:  call   0807dcc0 <_init+0x5b8>
0848fc71 +0x094f:  add    $0x10,%esp
0848fc74 +0x0952:  pop    %ebx
0848fc75 +0x0953:  pop    %esi
0848fc76 +0x0954:  pop    %ebp
0848fc77 +0x0955:  ret
0848fc78 +0x0956:  push   %ebp
0848fc79 +0x0957:  mov    %esp,%ebp
0848fc7b +0x0959:  mov    0x8(%ebp),%eax
0848fc7e +0x095c:  movl   $0x0,(%eax)
0848fc84 +0x0962:  mov    0x8(%ebp),%eax
0848fc87 +0x0965:  movb   $0x0,0x4(%eax)
0848fc8b +0x0969:  pop    %ebp
0848fc8c +0x096a:  ret
0848fc8d +0x096b:  nop
0848fc8e +0x096c:  push   %ebp
0848fc8f +0x096d:  mov    %esp,%ebp
0848fc91 +0x096f:  push   %esi
0848fc92 +0x0970:  push   %ebx
0848fc93 +0x0971:  sub    $0x10,%esp
0848fc96 +0x0974:  mov    0x8(%ebp),%eax
0848fc99 +0x0977:  mov    %eax,%ebx
0848fc9b +0x0979:  mov    $0x5db,%esi
0848fca0 +0x097e:  jmp    0848fcb0 <+0x98e>
0848fca2 +0x0980:  mov    %ebx,(%esp)
0848fca5 +0x0983:  call   0848fc78 <+0x956>
0848fcaa +0x0988:  add    $0x5,%ebx
0848fcad +0x098b:  sub    $0x1,%esi
0848fcb0 +0x098e:  cmp    $0xffffffff,%esi
0848fcb3 +0x0991:  setne  %al
0848fcb6 +0x0994:  test   %al,%al
0848fcb8 +0x0996:  jne    0848fca2 <+0x980>
0848fcba +0x0998:  mov    0x8(%ebp),%eax
0848fcbd +0x099b:  add    $0x1d4c,%eax
0848fcc2 +0x09a0:  mov    %eax,%ebx
0848fcc4 +0x09a2:  mov    $0x176f,%esi
0848fcc9 +0x09a7:  jmp    0848fcd9 <+0x9b7>
0848fccb +0x09a9:  mov    %ebx,(%esp)
0848fcce +0x09ac:  call   0848fc78 <+0x956>
0848fcd3 +0x09b1:  add    $0x5,%ebx
0848fcd6 +0x09b4:  sub    $0x1,%esi
0848fcd9 +0x09b7:  cmp    $0xffffffff,%esi
0848fcdc +0x09ba:  setne  %al
0848fcdf +0x09bd:  test   %al,%al
0848fce1 +0x09bf:  jne    0848fccb <+0x9a9>
0848fce3 +0x09c1:  mov    0x8(%ebp),%eax
0848fce6 +0x09c4:  add    $0x927c,%eax
0848fceb +0x09c9:  mov    %eax,%ebx
0848fced +0x09cb:  mov    $0x5db,%esi
0848fcf2 +0x09d0:  jmp    0848fd02 <+0x9e0>
0848fcf4 +0x09d2:  mov    %ebx,(%esp)
0848fcf7 +0x09d5:  call   0848fc78 <+0x956>
0848fcfc +0x09da:  add    $0x5,%ebx
0848fcff +0x09dd:  sub    $0x1,%esi
0848fd02 +0x09e0:  cmp    $0xffffffff,%esi
0848fd05 +0x09e3:  setne  %al
0848fd08 +0x09e6:  test   %al,%al
0848fd0a +0x09e8:  jne    0848fcf4 <+0x9d2>
0848fd0c +0x09ea:  mov    0x8(%ebp),%eax
0848fd0f +0x09ed:  movl   $0x1d4c,0x8(%esp)
0848fd17 +0x09f5:  movl   $0x0,0x4(%esp)
0848fd1f +0x09fd:  mov    %eax,(%esp)
0848fd22 +0x0a00:  call   0807dcc0 <_init+0x5b8>
0848fd27 +0x0a05:  mov    0x8(%ebp),%eax
0848fd2a +0x0a08:  add    $0x1d4c,%eax
0848fd2f +0x0a0d:  movl   $0x7530,0x8(%esp)
0848fd37 +0x0a15:  movl   $0x0,0x4(%esp)
0848fd3f +0x0a1d:  mov    %eax,(%esp)
0848fd42 +0x0a20:  call   0807dcc0 <_init+0x5b8>
0848fd47 +0x0a25:  mov    0x8(%ebp),%eax
0848fd4a +0x0a28:  add    $0x927c,%eax
0848fd4f +0x0a2d:  movl   $0x1d4c,0x8(%esp)
0848fd57 +0x0a35:  movl   $0x0,0x4(%esp)
0848fd5f +0x0a3d:  mov    %eax,(%esp)
0848fd62 +0x0a40:  call   0807dcc0 <_init+0x5b8>
0848fd67 +0x0a45:  mov    0x8(%ebp),%eax
0848fd6a +0x0a48:  movl   $0x0,0xafc8(%eax)
0848fd74 +0x0a52:  add    $0x10,%esp
0848fd77 +0x0a55:  pop    %ebx
0848fd78 +0x0a56:  pop    %esi
0848fd79 +0x0a57:  pop    %ebp
0848fd7a +0x0a58:  ret
0848fd7b +0x0a59:  nop
0848fd7c +0x0a5a:  push   %ebp
0848fd7d +0x0a5b:  mov    %esp,%ebp
0848fd7f +0x0a5d:  mov    0xc(%ebp),%eax
0848fd82 +0x0a60:  cmp    $0xc,%eax
0848fd85 +0x0a63:  je     0848feaf <+0xb8d>
0848fd8b +0x0a69:  cmp    $0xc,%eax
0848fd8e +0x0a6c:  jg     0848fdbf <+0xa9d>
0848fd90 +0x0a6e:  cmp    $0x8,%eax
0848fd93 +0x0a71:  je     0848fe1b <+0xaf9>
0848fd99 +0x0a77:  cmp    $0x8,%eax
0848fd9c +0x0a7a:  jg     0848fda8 <+0xa86>
0848fd9e +0x0a7c:  cmp    $0x7,%eax
0848fda1 +0x0a7f:  je     0848fdfb <+0xad9>
0848fda3 +0x0a81:  jmp    0848ff5c <+0xc3a>
0848fda8 +0x0a86:  cmp    $0xa,%eax
0848fdab +0x0a89:  je     0848fe65 <+0xb43>
0848fdb1 +0x0a8f:  cmp    $0xb,%eax
0848fdb4 +0x0a92:  je     0848fe8a <+0xb68>
0848fdba +0x0a98:  jmp    0848ff5c <+0xc3a>
0848fdbf +0x0a9d:  cmp    $0x20,%eax
0848fdc2 +0x0aa0:  je     0848ff3a <+0xc18>
0848fdc8 +0x0aa6:  cmp    $0x20,%eax
0848fdcb +0x0aa9:  jg     0848fde4 <+0xac2>
0848fdcd +0x0aab:  cmp    $0x11,%eax
0848fdd0 +0x0aae:  je     0848fed4 <+0xbb2>
0848fdd6 +0x0ab4:  cmp    $0x19,%eax
0848fdd9 +0x0ab7:  je     0848ff18 <+0xbf6>
0848fddf +0x0abd:  jmp    0848ff5c <+0xc3a>
0848fde4 +0x0ac2:  cmp    $0xb3,%eax
0848fde9 +0x0ac7:  je     0848fe40 <+0xb1e>
0848fdeb +0x0ac9:  cmp    $0x282,%eax
0848fdf0 +0x0ace:  je     0848fef6 <+0xbd4>
0848fdf6 +0x0ad4:  jmp    0848ff5c <+0xc3a>
0848fdfb +0x0ad9:  mov    0x8(%ebp),%eax
0848fdfe +0x0adc:  movzbl 0x3f850(%eax),%edx
0848fe05 +0x0ae3:  mov    0x14(%ebp),%eax
0848fe08 +0x0ae6:  mov    %dl,(%eax)
0848fe0a +0x0ae8:  mov    0x10(%ebp),%eax
0848fe0d +0x0aeb:  movl   $0x703,(%eax)
0848fe13 +0x0af1:  mov    0x8(%ebp),%eax
0848fe16 +0x0af4:  jmp    0848ff61 <+0xc3f>
0848fe1b +0x0af9:  mov    0x8(%ebp),%eax
0848fe1e +0x0afc:  movzbl 0x3f851(%eax),%edx
0848fe25 +0x0b03:  mov    0x14(%ebp),%eax
0848fe28 +0x0b06:  mov    %dl,(%eax)
0848fe2a +0x0b08:  mov    0x10(%ebp),%eax
0848fe2d +0x0b0b:  movl   $&_ZL14gUnicodeBuffer+0xaf20,(%eax)
0848fe33 +0x0b11:  mov    0x8(%ebp),%eax
0848fe36 +0x0b14:  add    $0x703,%eax
0848fe3b +0x0b19:  jmp    0848ff61 <+0xc3f>
0848fe40 +0x0b1e:  mov    0x8(%ebp),%eax
0848fe43 +0x0b21:  movzbl 0x3f857(%eax),%edx
0848fe4a +0x0b28:  mov    0x14(%ebp),%eax
0848fe4d +0x0b2b:  mov    %dl,(%eax)
0848fe4f +0x0b2d:  mov    0x10(%ebp),%eax
0848fe52 +0x0b30:  movl   $0x10,(%eax)
0848fe58 +0x0b36:  mov    0x8(%ebp),%eax
0848fe5b +0x0b39:  add    $&_ZL14gUnicodeBuffer+0x145d7,%eax
0848fe60 +0x0b3e:  jmp    0848ff61 <+0xc3f>
0848fe65 +0x0b43:  mov    0x8(%ebp),%eax
0848fe68 +0x0b46:  movzbl 0x3f853(%eax),%edx
0848fe6f +0x0b4d:  mov    0x14(%ebp),%eax
0848fe72 +0x0b50:  mov    %dl,(%eax)
0848fe74 +0x0b52:  mov    0x10(%ebp),%eax
0848fe77 +0x0b55:  movl   $0x7608,(%eax)
0848fe7d +0x0b5b:  mov    0x8(%ebp),%eax
0848fe80 +0x0b5e:  add    $&_ZL14gUnicodeBuffer+0xb623,%eax
0848fe85 +0x0b63:  jmp    0848ff61 <+0xc3f>
0848fe8a +0x0b68:  mov    0x8(%ebp),%eax
0848fe8d +0x0b6b:  movzbl 0x3f854(%eax),%edx
0848fe94 +0x0b72:  mov    0x14(%ebp),%eax
0848fe97 +0x0b75:  mov    %dl,(%eax)
0848fe99 +0x0b77:  mov    0x10(%ebp),%eax
0848fe9c +0x0b7a:  movl   $0x19c,(%eax)
0848fea2 +0x0b80:  mov    0x8(%ebp),%eax
0848fea5 +0x0b83:  add    $&_ZL14gUnicodeBuffer+0x12c2b,%eax
0848feaa +0x0b88:  jmp    0848ff61 <+0xc3f>
0848feaf +0x0b8d:  mov    0x8(%ebp),%eax
0848feb2 +0x0b90:  movzbl 0x3f855(%eax),%edx
0848feb9 +0x0b97:  mov    0x14(%ebp),%eax
0848febc +0x0b9a:  mov    %dl,(%eax)
0848febe +0x0b9c:  mov    0x10(%ebp),%eax
0848fec1 +0x0b9f:  movl   $0x1810,(%eax)
0848fec7 +0x0ba5:  mov    0x8(%ebp),%eax
0848feca +0x0ba8:  add    $&_ZL14gUnicodeBuffer+0x12dc7,%eax
0848fecf +0x0bad:  jmp    0848ff61 <+0xc3f>
0848fed4 +0x0bb2:  mov    0x8(%ebp),%eax
0848fed7 +0x0bb5:  movzbl 0x3f858(%eax),%edx
0848fede +0x0bbc:  mov    0x14(%ebp),%eax
0848fee1 +0x0bbf:  mov    %dl,(%eax)
0848fee3 +0x0bc1:  mov    0x10(%ebp),%eax
0848fee6 +0x0bc4:  movl   $0xcf1,(%eax)
0848feec +0x0bca:  mov    0x8(%ebp),%eax
0848feef +0x0bcd:  add    $&_ZL14gUnicodeBuffer+0x145e7,%eax
0848fef4 +0x0bd2:  jmp    0848ff61 <+0xc3f>
0848fef6 +0x0bd4:  mov    0x8(%ebp),%eax
0848fef9 +0x0bd7:  movzbl 0x3f859(%eax),%edx
0848ff00 +0x0bde:  mov    0x14(%ebp),%eax
0848ff03 +0x0be1:  mov    %dl,(%eax)
0848ff05 +0x0be3:  mov    0x10(%ebp),%eax
0848ff08 +0x0be6:  movl   $0xafcc,(%eax)
0848ff0e +0x0bec:  mov    0x8(%ebp),%eax
0848ff11 +0x0bef:  add    $&_ZL12gTCharBuffer+0x2354,%eax
0848ff16 +0x0bf4:  jmp    0848ff61 <+0xc3f>
0848ff18 +0x0bf6:  mov    0x8(%ebp),%eax
0848ff1b +0x0bf9:  movzbl 0x3f85a(%eax),%edx
0848ff22 +0x0c00:  mov    0x14(%ebp),%eax
0848ff25 +0x0c03:  mov    %dl,(%eax)
0848ff27 +0x0c05:  mov    0x10(%ebp),%eax
0848ff2a +0x0c08:  movl   $0x51c,(%eax)
0848ff30 +0x0c0e:  mov    0x8(%ebp),%eax
0848ff33 +0x0c11:  add    $&_ZL14gUnicodeBuffer+0x152d8,%eax
0848ff38 +0x0c16:  jmp    0848ff61 <+0xc3f>
0848ff3a +0x0c18:  mov    0x8(%ebp),%eax
0848ff3d +0x0c1b:  movzbl 0x3f85b(%eax),%edx
0848ff44 +0x0c22:  mov    0x14(%ebp),%eax
0848ff47 +0x0c25:  mov    %dl,(%eax)
0848ff49 +0x0c27:  mov    0x10(%ebp),%eax
0848ff4c +0x0c2a:  movl   $&_ZL14gUnicodeBuffer+0xa634,(%eax)
0848ff52 +0x0c30:  mov    0x8(%ebp),%eax
0848ff55 +0x0c33:  add    $&_ZL14gUnicodeBuffer+0x157f4,%eax
0848ff5a +0x0c38:  jmp    0848ff61 <+0xc3f>
0848ff5c +0x0c3a:  mov    $0x0,%eax
0848ff61 +0x0c3f:  pop    %ebp
0848ff62 +0x0c40:  ret
0848ff63 +0x0c41:  nop
0848ff64 +0x0c42:  push   %ebp
0848ff65 +0x0c43:  mov    %esp,%ebp
0848ff67 +0x0c45:  mov    0x8(%ebp),%eax
0848ff6a +0x0c48:  mov    0x10(%eax),%eax
0848ff6d +0x0c4b:  pop    %ebp
0848ff6e +0x0c4c:  ret
0848ff6f +0x0c4d:  nop
0848ff70 +0x0c4e:  push   %ebp
0848ff71 +0x0c4f:  mov    %esp,%ebp
0848ff73 +0x0c51:  mov    0x8(%ebp),%eax
0848ff76 +0x0c54:  mov    0xc(%eax),%eax
0848ff79 +0x0c57:  pop    %ebp
0848ff7a +0x0c58:  ret
0848ff7b +0x0c59:  nop
0848ff7c +0x0c5a:  push   %ebp
0848ff7d +0x0c5b:  mov    %esp,%ebp
0848ff7f +0x0c5d:  push   %esi
0848ff80 +0x0c5e:  push   %ebx
0848ff81 +0x0c5f:  sub    $0x10,%esp
0848ff84 +0x0c62:  mov    0x8(%ebp),%eax
0848ff87 +0x0c65:  mov    %eax,%ebx
0848ff89 +0x0c67:  mov    $0xcb,%esi
0848ff8e +0x0c6c:  jmp    0848ff9e <+0xc7c>
0848ff90 +0x0c6e:  mov    %ebx,(%esp)
0848ff93 +0x0c71:  call   0848f34c <+0x2a>
0848ff98 +0x0c76:  add    $0x2,%ebx
0848ff9b +0x0c79:  sub    $0x1,%esi
0848ff9e +0x0c7c:  cmp    $0xffffffff,%esi
0848ffa1 +0x0c7f:  setne  %al
0848ffa4 +0x0c82:  test   %al,%al
0848ffa6 +0x0c84:  jne    0848ff90 <+0xc6e>
0848ffa8 +0x0c86:  add    $0x10,%esp
0848ffab +0x0c89:  pop    %ebx
0848ffac +0x0c8a:  pop    %esi
0848ffad +0x0c8b:  pop    %ebp
0848ffae +0x0c8c:  ret
0848ffaf +0x0c8d:  nop
0848ffb0 +0x0c8e:  push   %ebp
0848ffb1 +0x0c8f:  mov    %esp,%ebp
0848ffb3 +0x0c91:  mov    0x8(%ebp),%eax
0848ffb6 +0x0c94:  mov    0x851a4(%eax),%eax
0848ffbc +0x0c9a:  pop    %ebp
0848ffbd +0x0c9b:  ret
0848ffbe +0x0c9c:  push   %ebp
0848ffbf +0x0c9d:  mov    %esp,%ebp
0848ffc1 +0x0c9f:  mov    0x8(%ebp),%eax
0848ffc4 +0x0ca2:  mov    0xc(%ebp),%edx
0848ffc7 +0x0ca5:  mov    %edx,0x851a4(%eax)
0848ffcd +0x0cab:  pop    %ebp
0848ffce +0x0cac:  ret
0848ffcf +0x0cad:  nop
0848ffd0 +0x0cae:  push   %ebp
0848ffd1 +0x0caf:  mov    %esp,%ebp
0848ffd3 +0x0cb1:  sub    $0x851b8,%esp
0848ffd9 +0x0cb7:  mov    0x8(%ebp),%eax
0848ffdc +0x0cba:  mov    %eax,(%esp)
0848ffdf +0x0cbd:  call   08493f20 <+0x4bfe>
0848ffe4 +0x0cc2:  lea    -0x851a8(%ebp),%eax
0848ffea +0x0cc8:  mov    %eax,(%esp)
0848ffed +0x0ccb:  call   08493f20 <+0x4bfe>
0848fff2 +0x0cd0:  lea    -0x851a8(%ebp),%eax
0848fff8 +0x0cd6:  mov    %eax,(%esp)
0848fffb +0x0cd9:  call   08493fbe <+0x4c9c>
08490000 +0x0cde:  mov    0x8(%ebp),%eax
08490003 +0x0ce1:  movl   $0x0,0x851a0(%eax)
0849000d +0x0ceb:  mov    0x8(%ebp),%eax
08490010 +0x0cee:  movl   $0x0,0x851a4(%eax)
0849001a +0x0cf8:  mov    0x8(%ebp),%eax
0849001d +0x0cfb:  movb   $0x1,0xc(%eax)
08490021 +0x0cff:  leave
08490022 +0x0d00:  ret
08490023 +0x0d01:  nop
08490024 +0x0d02:  push   %ebp
08490025 +0x0d03:  mov    %esp,%ebp
08490027 +0x0d05:  sub    $0x18,%esp
0849002a +0x0d08:  mov    0x8(%ebp),%eax
0849002d +0x0d0b:  mov    %eax,(%esp)
08490030 +0x0d0e:  call   08493fd6 <+0x4cb4>
08490035 +0x0d13:  leave
08490036 +0x0d14:  ret
08490037 +0x0d15:  nop
08490038 +0x0d16:  push   %ebp
08490039 +0x0d17:  mov    %esp,%ebp
0849003b +0x0d19:  mov    0x8(%ebp),%eax
0849003e +0x0d1c:  mov    0xc(%ebp),%edx
08490041 +0x0d1f:  mov    %edx,0x851a0(%eax)
08490047 +0x0d25:  pop    %ebp
08490048 +0x0d26:  ret
08490049 +0x0d27:  nop
0849004a +0x0d28:  push   %ebp
0849004b +0x0d29:  mov    %esp,%ebp
0849004d +0x0d2b:  mov    0x8(%ebp),%eax
08490050 +0x0d2e:  mov    0x851a0(%eax),%eax
08490056 +0x0d34:  mov    %eax,%edx
08490058 +0x0d36:  or     0xc(%ebp),%edx
0849005b +0x0d39:  mov    0x8(%ebp),%eax
0849005e +0x0d3c:  mov    %edx,0x851a0(%eax)
08490064 +0x0d42:  pop    %ebp
08490065 +0x0d43:  ret
08490066 +0x0d44:  push   %ebp
08490067 +0x0d45:  mov    %esp,%ebp
08490069 +0x0d47:  mov    0x8(%ebp),%eax
0849006c +0x0d4a:  mov    0x851a0(%eax),%eax
08490072 +0x0d50:  pop    %ebp
08490073 +0x0d51:  ret
08490074 +0x0d52:  push   %ebp
08490075 +0x0d53:  mov    %esp,%ebp
08490077 +0x0d55:  push   %esi
08490078 +0x0d56:  push   %ebx
08490079 +0x0d57:  sub    $0x60,%esp
0849007c +0x0d5a:  mov    0x8(%ebp),%eax
0849007f +0x0d5d:  mov    0x18(%eax),%edx
08490082 +0x0d60:  mov    0xc(%ebp),%eax
08490085 +0x0d63:  lea    (%edx,%eax,1),%eax
08490088 +0x0d66:  mov    %eax,-0x24(%ebp)
0849008b +0x0d69:  call   086b1b2f <_Z11get_ms_tickv>  ; get_ms_tick()
08490090 +0x0d6e:  mov    %eax,-0x20(%ebp)
08490093 +0x0d71:  mov    %edx,-0x1c(%ebp)
08490096 +0x0d74:  mov    0x8(%ebp),%ecx
08490099 +0x0d77:  mov    -0x20(%ebp),%eax
0849009c +0x0d7a:  mov    -0x1c(%ebp),%edx
0849009f +0x0d7d:  mov    %eax,0x4(%ecx)
084900a2 +0x0d80:  mov    %edx,0x8(%ecx)
084900a5 +0x0d83:  cmpl   $0xc,-0x24(%ebp)
084900a9 +0x0d87:  jg     084900b5 <+0xd93>
084900ab +0x0d89:  mov    $0x1,%ebx
084900b0 +0x0d8e:  jmp    08490305 <+0xfe3>
084900b5 +0x0d93:  movl   $0x0,-0x10(%ebp)
084900bc +0x0d9a:  jmp    084900bf <+0xd9d>
084900be +0x0d9c:  nop
084900bf +0x0d9d:  mov    0x8(%ebp),%eax
084900c2 +0x0da0:  mov    0x18(%eax),%eax
084900c5 +0x0da3:  test   %eax,%eax
084900c7 +0x0da5:  je     084900df <+0xdbd>
084900c9 +0x0da7:  mov    0x8(%ebp),%eax
084900cc +0x0daa:  mov    0x2c(%eax),%edx
084900cf +0x0dad:  mov    0x8(%ebp),%eax
084900d2 +0x0db0:  mov    0x18(%eax),%eax
084900d5 +0x0db3:  neg    %eax
084900d7 +0x0db5:  add    %eax,%edx
084900d9 +0x0db7:  mov    0x8(%ebp),%eax
084900dc +0x0dba:  mov    %edx,0x2c(%eax)
084900df +0x0dbd:  mov    0x8(%ebp),%eax
084900e2 +0x0dc0:  mov    0x2c(%eax),%eax
084900e5 +0x0dc3:  movl   $0xd,0x8(%esp)
084900ed +0x0dcb:  mov    %eax,0x4(%esp)
084900f1 +0x0dcf:  lea    -0x41(%ebp),%eax
084900f4 +0x0dd2:  mov    %eax,(%esp)
084900f7 +0x0dd5:  call   0807d8a0 <_init+0x198>
084900fc +0x0dda:  mov    -0x3e(%ebp),%eax
084900ff +0x0ddd:  mov    %eax,-0x14(%ebp)
08490102 +0x0de0:  cmpl   $0xc,-0x14(%ebp)
08490106 +0x0de4:  jbe    08490111 <+0xdef>
08490108 +0x0de6:  cmpl   $&_ZL14gUnicodeBuffer+0xcdec,-0x14(%ebp)
0849010f +0x0ded:  jbe    08490155 <+0xe33>
08490111 +0x0def:  mov    -0x14(%ebp),%eax
08490114 +0x0df2:  mov    %eax,0x18(%esp)
08490118 +0x0df6:  mov    0xc(%ebp),%eax
0849011b +0x0df9:  mov    %eax,0x14(%esp)
0849011f +0x0dfd:  movl   $"Recv Size[%d], Parsing Packet Size[%d] is Too Large",0x10(%esp)
08490127 +0x0e05:  movl   $0x18d,0xc(%esp)
0849012f +0x0e0d:  movl   $&_ZZN15exchange_server8CSession7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
08490137 +0x0e15:  movl   $"ExchangeServerNetwork.h",0x4(%esp)
0849013f +0x0e1d:  movl   $0x1,(%esp)
08490146 +0x0e24:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0849014b +0x0e29:  mov    $0x0,%ebx
08490150 +0x0e2e:  jmp    08490305 <+0xfe3>
08490155 +0x0e33:  mov    -0x24(%ebp),%eax
08490158 +0x0e36:  cmp    -0x14(%ebp),%eax
0849015b +0x0e39:  jb     08490218 <+0xef6>
08490161 +0x0e3f:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
08490166 +0x0e44:  test   %eax,%eax
08490168 +0x0e46:  je     084901d4 <+0xeb2>
0849016a +0x0e48:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
0849016f +0x0e4d:  mov    (%eax),%eax
08490171 +0x0e4f:  mov    (%eax),%ebx
08490173 +0x0e51:  mov    -0x14(%ebp),%ecx
08490176 +0x0e54:  mov    0x8(%ebp),%eax
08490179 +0x0e57:  mov    0x2c(%eax),%edx
0849017c +0x0e5a:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
08490181 +0x0e5f:  mov    %ecx,0xc(%esp)
08490185 +0x0e63:  mov    %edx,0x8(%esp)
08490189 +0x0e67:  mov    0x8(%ebp),%edx
0849018c +0x0e6a:  mov    %edx,0x4(%esp)
08490190 +0x0e6e:  mov    %eax,(%esp)
08490193 +0x0e71:  call   *%ebx
08490195 +0x0e73:  mov    %eax,-0xc(%ebp)
08490198 +0x0e76:  cmpl   $0x0,-0xc(%ebp)
0849019c +0x0e7a:  je     084901d4 <+0xeb2>
0849019e +0x0e7c:  movl   $0x0,0xc(%esp)
084901a6 +0x0e84:  movl   $0x197,0x8(%esp)
084901ae +0x0e8c:  movl   $&_ZZN15exchange_server8CSession7ParsingEiE19__PRETTY_FUNCTION__,0x4(%esp)
084901b6 +0x0e94:  lea    -0x34(%ebp),%eax
084901b9 +0x0e97:  mov    %eax,(%esp)
084901bc +0x0e9a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084901c1 +0x0e9f:  movl   $"DispatchPacket() error line number(%d)",0x4(%esp)
084901c9 +0x0ea7:  lea    -0x34(%ebp),%eax
084901cc +0x0eaa:  mov    %eax,(%esp)
084901cf +0x0ead:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084901d4 +0x0eb2:  mov    -0x24(%ebp),%eax
084901d7 +0x0eb5:  sub    -0x14(%ebp),%eax
084901da +0x0eb8:  mov    %eax,-0x24(%ebp)
084901dd +0x0ebb:  mov    0x8(%ebp),%eax
084901e0 +0x0ebe:  mov    0x2c(%eax),%eax
084901e3 +0x0ec1:  mov    %eax,%edx
084901e5 +0x0ec3:  add    -0x14(%ebp),%edx
084901e8 +0x0ec6:  mov    0x8(%ebp),%eax
084901eb +0x0ec9:  mov    %edx,0x2c(%eax)
084901ee +0x0ecc:  mov    0x8(%ebp),%eax
084901f1 +0x0ecf:  movl   $0x0,0x18(%eax)
084901f8 +0x0ed6:  cmpl   $0x0,-0x24(%ebp)
084901fc +0x0eda:  jne    0849020c <+0xeea>
084901fe +0x0edc:  mov    0x8(%ebp),%eax
08490201 +0x0edf:  lea    0x30(%eax),%edx
08490204 +0x0ee2:  mov    0x8(%ebp),%eax
08490207 +0x0ee5:  mov    %edx,0x2c(%eax)
0849020a +0x0ee8:  jmp    08490219 <+0xef7>
0849020c +0x0eea:  cmpl   $0x5,-0x24(%ebp)
08490210 +0x0eee:  jg     084900be <+0xd9c>
08490216 +0x0ef4:  jmp    08490219 <+0xef7>
08490218 +0x0ef6:  nop
08490219 +0x0ef7:  cmpl   $0x0,-0x24(%ebp)
0849021d +0x0efb:  jle    08490300 <+0xfde>
08490223 +0x0f01:  cmpl   $&_ZL14gUnicodeBuffer+0xcdec,-0x24(%ebp)
0849022a +0x0f08:  jle    08490269 <+0xf47>
0849022c +0x0f0a:  mov    -0x24(%ebp),%eax
0849022f +0x0f0d:  mov    %eax,0x14(%esp)
08490233 +0x0f11:  movl   $"[PARSING LENGTH EXCEPTION] parsinglength > MAX_SESSION_BUFFER_SIZE , memmove : parsinglength = %d",0x10(%esp)
0849023b +0x0f19:  movl   $0x1b7,0xc(%esp)
08490243 +0x0f21:  movl   $&_ZZN15exchange_server8CSession7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
0849024b +0x0f29:  movl   $"ExchangeServerNetwork.h",0x4(%esp)
08490253 +0x0f31:  movl   $0x1,(%esp)
0849025a +0x0f38:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0849025f +0x0f3d:  mov    $0x0,%ebx
08490264 +0x0f42:  jmp    08490305 <+0xfe3>
08490269 +0x0f47:  mov    -0x24(%ebp),%edx
0849026c +0x0f4a:  mov    0x8(%ebp),%eax
0849026f +0x0f4d:  mov    0x2c(%eax),%eax
08490272 +0x0f50:  mov    0x8(%ebp),%ecx
08490275 +0x0f53:  add    $0x30,%ecx
08490278 +0x0f56:  mov    %edx,0x8(%esp)
0849027c +0x0f5a:  mov    %eax,0x4(%esp)
08490280 +0x0f5e:  mov    %ecx,(%esp)
08490283 +0x0f61:  call   0807d880 <_init+0x178>
08490288 +0x0f66:  mov    -0x24(%ebp),%edx
0849028b +0x0f69:  mov    0x8(%ebp),%eax
0849028e +0x0f6c:  mov    %edx,0x18(%eax)
08490291 +0x0f6f:  mov    0x8(%ebp),%eax
08490294 +0x0f72:  lea    0x30(%eax),%edx
08490297 +0x0f75:  mov    -0x24(%ebp),%eax
0849029a +0x0f78:  add    %eax,%edx
0849029c +0x0f7a:  mov    0x8(%ebp),%eax
0849029f +0x0f7d:  mov    %edx,0x2c(%eax)
084902a2 +0x0f80:  jmp    08490300 <+0xfde>
084902a4 +0x0f82:  mov    %eax,(%esp)
084902a7 +0x0f85:  call   08725ce0 <__cxa_begin_catch>
084902ac +0x0f8a:  mov    -0x24(%ebp),%eax
084902af +0x0f8d:  mov    %eax,0x14(%esp)
084902b3 +0x0f91:  movl   $"[PARSING EXCEPTION] memmove : parsinglength = %d",0x10(%esp)
084902bb +0x0f99:  movl   $0x1c1,0xc(%esp)
084902c3 +0x0fa1:  movl   $&_ZZN15exchange_server8CSession7ParsingEiE19__PRETTY_FUNCTION__,0x8(%esp)
084902cb +0x0fa9:  movl   $"ExchangeServerNetwork.h",0x4(%esp)
084902d3 +0x0fb1:  movl   $0x1,(%esp)
084902da +0x0fb8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084902df +0x0fbd:  mov    $0x0,%ebx
084902e4 +0x0fc2:  call   08725c30 <__cxa_end_catch>
084902e9 +0x0fc7:  jmp    08490305 <+0xfe3>
084902eb +0x0fc9:  mov    %edx,%ebx
084902ed +0x0fcb:  mov    %eax,%esi
084902ef +0x0fcd:  call   08725c30 <__cxa_end_catch>
084902f4 +0x0fd2:  mov    %esi,%eax
084902f6 +0x0fd4:  mov    %ebx,%edx
084902f8 +0x0fd6:  mov    %eax,(%esp)
084902fb +0x0fd9:  call   08ae3750 <_Unwind_Resume>
08490300 +0x0fde:  mov    $0x1,%ebx
08490305 +0x0fe3:  mov    %ebx,%eax
08490307 +0x0fe5:  add    $0x60,%esp
0849030a +0x0fe8:  pop    %ebx
0849030b +0x0fe9:  pop    %esi
0849030c +0x0fea:  pop    %ebp
0849030d +0x0feb:  ret
0849030e +0x0fec:  push   %ebp
0849030f +0x0fed:  mov    %esp,%ebp
08490311 +0x0fef:  sub    $0x28,%esp
08490314 +0x0ff2:  mov    0x8(%ebp),%eax
08490317 +0x0ff5:  mov    %eax,(%esp)
0849031a +0x0ff8:  call   08493fe0 <+0x4cbe>
0849031f +0x0ffd:  mov    %eax,-0xc(%ebp)
08490322 +0x1000:  cmpl   $0x0,-0xc(%ebp)
08490326 +0x1004:  jle    0849034f <+0x102d>
08490328 +0x1006:  mov    -0xc(%ebp),%eax
0849032b +0x1009:  mov    %eax,0x4(%esp)
0849032f +0x100d:  mov    0x8(%ebp),%eax
08490332 +0x1010:  mov    %eax,(%esp)
08490335 +0x1013:  call   08490074 <+0xd52>
0849033a +0x1018:  xor    $0x1,%eax
0849033d +0x101b:  test   %al,%al
0849033f +0x101d:  je     08490348 <+0x1026>
08490341 +0x101f:  mov    $0x0,%eax
08490346 +0x1024:  jmp    08490361 <+0x103f>
08490348 +0x1026:  mov    $0x1,%eax
0849034d +0x102b:  jmp    08490361 <+0x103f>
0849034f +0x102d:  cmpl   $0x0,-0xc(%ebp)
08490353 +0x1031:  jns    0849035c <+0x103a>
08490355 +0x1033:  mov    $0x0,%eax
0849035a +0x1038:  jmp    08490361 <+0x103f>
0849035c +0x103a:  mov    $0x1,%eax
08490361 +0x103f:  leave
08490362 +0x1040:  ret
08490363 +0x1041:  nop
08490364 +0x1042:  push   %ebp
08490365 +0x1043:  mov    %esp,%ebp
08490367 +0x1045:  push   %esi
08490368 +0x1046:  push   %ebx
08490369 +0x1047:  sub    $0x20,%esp
0849036c +0x104a:  mov    0x8(%ebp),%eax
0849036f +0x104d:  mov    %eax,(%esp)
08490372 +0x1050:  call   08494134 <+0x4e12>
08490377 +0x1055:  shr    $0x1f,%eax
0849037a +0x1058:  test   %al,%al
0849037c +0x105a:  je     084903e1 <+0x10bf>
0849037e +0x105c:  call   0807dd70 <_init+0x668>
08490383 +0x1061:  mov    (%eax),%eax
08490385 +0x1063:  mov    %eax,(%esp)
08490388 +0x1066:  call   0807d730 <_init+0x28>
0849038d +0x106b:  mov    %eax,%esi
0849038f +0x106d:  mov    0x8(%ebp),%eax
08490392 +0x1070:  mov    %eax,(%esp)
08490395 +0x1073:  call   08490024 <+0xd02>
0849039a +0x1078:  mov    %eax,%ebx
0849039c +0x107a:  movl   $0x0,0xc(%esp)
084903a4 +0x1082:  movl   $0x1e4,0x8(%esp)
084903ac +0x108a:  movl   $&_ZZN15exchange_server8CSession6OnSendEvE19__PRETTY_FUNCTION__,0x4(%esp)
084903b4 +0x1092:  lea    -0x18(%ebp),%eax
084903b7 +0x1095:  mov    %eax,(%esp)
084903ba +0x1098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084903bf +0x109d:  mov    %esi,0xc(%esp)
084903c3 +0x10a1:  mov    %ebx,0x8(%esp)
084903c7 +0x10a5:  movl   $"OnSend() Socket[%d] Error(%s)",0x4(%esp)
084903cf +0x10ad:  lea    -0x18(%ebp),%eax
084903d2 +0x10b0:  mov    %eax,(%esp)
084903d5 +0x10b3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084903da +0x10b8:  mov    $0xffffffff,%eax
084903df +0x10bd:  jmp    084903e7 <+0x10c5>
084903e1 +0x10bf:  mov    0x8(%ebp),%eax
084903e4 +0x10c2:  mov    0x18(%eax),%eax
084903e7 +0x10c5:  add    $0x20,%esp
084903ea +0x10c8:  pop    %ebx
084903eb +0x10c9:  pop    %esi
084903ec +0x10ca:  pop    %ebp
084903ed +0x10cb:  ret
084903ee +0x10cc:  push   %ebp
084903ef +0x10cd:  mov    %esp,%ebp
084903f1 +0x10cf:  push   %esi
084903f2 +0x10d0:  push   %ebx
084903f3 +0x10d1:  sub    $0x20,%esp
084903f6 +0x10d4:  call   0807dd70 <_init+0x668>
084903fb +0x10d9:  mov    (%eax),%eax
084903fd +0x10db:  mov    %eax,(%esp)
08490400 +0x10de:  call   0807d730 <_init+0x28>
08490405 +0x10e3:  mov    %eax,%esi
08490407 +0x10e5:  mov    0x8(%ebp),%eax
0849040a +0x10e8:  mov    %eax,(%esp)
0849040d +0x10eb:  call   08490024 <+0xd02>
08490412 +0x10f0:  mov    %eax,%ebx
08490414 +0x10f2:  movl   $0x0,0xc(%esp)
0849041c +0x10fa:  movl   $0x1ec,0x8(%esp)
08490424 +0x1102:  movl   $&_ZZN15exchange_server8CSession7OnErrorEvE19__PRETTY_FUNCTION__,0x4(%esp)
0849042c +0x110a:  lea    -0x18(%ebp),%eax
0849042f +0x110d:  mov    %eax,(%esp)
08490432 +0x1110:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08490437 +0x1115:  mov    %esi,0xc(%esp)
0849043b +0x1119:  mov    %ebx,0x8(%esp)
0849043f +0x111d:  movl   $"ExchangeServer OnError() Socket[%d] Error(%s)",0x4(%esp)
08490447 +0x1125:  lea    -0x18(%ebp),%eax
0849044a +0x1128:  mov    %eax,(%esp)
0849044d +0x112b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08490452 +0x1130:  mov    $0x0,%eax
08490457 +0x1135:  add    $0x20,%esp
0849045a +0x1138:  pop    %ebx
0849045b +0x1139:  pop    %esi
0849045c +0x113a:  pop    %ebp
0849045d +0x113b:  ret
0849045e +0x113c:  push   %ebp
0849045f +0x113d:  mov    %esp,%ebp
08490461 +0x113f:  push   %esi
08490462 +0x1140:  push   %ebx
08490463 +0x1141:  sub    $0x70,%esp
08490466 +0x1144:  movl   $0x10,-0x54(%ebp)
0849046d +0x114b:  lea    -0x54(%ebp),%esi
08490470 +0x114e:  lea    -0x50(%ebp),%ebx
08490473 +0x1151:  mov    0x8(%ebp),%eax
08490476 +0x1154:  mov    %eax,(%esp)
08490479 +0x1157:  call   08490024 <+0xd02>
0849047e +0x115c:  mov    %esi,0x8(%esp)
08490482 +0x1160:  mov    %ebx,0x4(%esp)
08490486 +0x1164:  mov    %eax,(%esp)
08490489 +0x1167:  call   0807deb0 <_init+0x7a8>
0849048e +0x116c:  mov    %eax,-0x10(%ebp)
08490491 +0x116f:  cmpl   $0x0,-0x10(%ebp)
08490495 +0x1173:  jns    084904f3 <+0x11d1>
08490497 +0x1175:  call   0807dd70 <_init+0x668>
0849049c +0x117a:  mov    (%eax),%eax
0849049e +0x117c:  mov    %eax,(%esp)
084904a1 +0x117f:  call   0807d730 <_init+0x28>
084904a6 +0x1184:  mov    %eax,%ebx
084904a8 +0x1186:  movl   $0x0,0xc(%esp)
084904b0 +0x118e:  movl   $0x1f7,0x8(%esp)
084904b8 +0x1196:  movl   $&_ZZN15exchange_server8CSession8OnAcceptEvE19__PRETTY_FUNCTION__,0x4(%esp)
084904c0 +0x119e:  lea    -0x40(%ebp),%eax
084904c3 +0x11a1:  mov    %eax,(%esp)
084904c6 +0x11a4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084904cb +0x11a9:  mov    %ebx,0xc(%esp)
084904cf +0x11ad:  mov    -0x10(%ebp),%eax
084904d2 +0x11b0:  mov    %eax,0x8(%esp)
084904d6 +0x11b4:  movl   $"Accept Socket[%d] Error(%s)",0x4(%esp)
084904de +0x11bc:  lea    -0x40(%ebp),%eax
084904e1 +0x11bf:  mov    %eax,(%esp)
084904e4 +0x11c2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084904e9 +0x11c7:  mov    $0x0,%eax
084904ee +0x11cc:  jmp    084905cb <+0x12a9>
084904f3 +0x11d1:  movzwl -0x4e(%ebp),%eax
084904f7 +0x11d5:  movzwl %ax,%eax
084904fa +0x11d8:  mov    %eax,(%esp)
084904fd +0x11db:  call   0807de90 <_init+0x788>
08490502 +0x11e0:  movzwl %ax,%esi
08490505 +0x11e3:  mov    -0x4c(%ebp),%eax
08490508 +0x11e6:  mov    %eax,(%esp)
0849050b +0x11e9:  call   0807ddc0 <_init+0x6b8>
08490510 +0x11ee:  mov    %eax,%ebx
08490512 +0x11f0:  movl   $0x0,0xc(%esp)
0849051a +0x11f8:  movl   $0x1fa,0x8(%esp)
08490522 +0x1200:  movl   $&_ZZN15exchange_server8CSession8OnAcceptEvE19__PRETTY_FUNCTION__,0x4(%esp)
0849052a +0x1208:  lea    -0x30(%ebp),%eax
0849052d +0x120b:  mov    %eax,(%esp)
08490530 +0x120e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08490535 +0x1213:  mov    -0x10(%ebp),%eax
08490538 +0x1216:  mov    %eax,0x10(%esp)
0849053c +0x121a:  mov    %esi,0xc(%esp)
08490540 +0x121e:  mov    %ebx,0x8(%esp)
08490544 +0x1222:  movl   $"Accepted other game server ip(%s), port(%d), sock(%d)",0x4(%esp)
0849054c +0x122a:  lea    -0x30(%ebp),%eax
0849054f +0x122d:  mov    %eax,(%esp)
08490552 +0x1230:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08490557 +0x1235:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
0849055c +0x123a:  mov    (%eax),%eax
0849055e +0x123c:  add    $0x8,%eax
08490561 +0x123f:  mov    (%eax),%edx
08490563 +0x1241:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
08490568 +0x1246:  mov    %eax,(%esp)
0849056b +0x1249:  call   *%edx
0849056d +0x124b:  mov    %eax,-0xc(%ebp)
08490570 +0x124e:  cmpl   $0x0,-0xc(%ebp)
08490574 +0x1252:  je     08490592 <+0x1270>
08490576 +0x1254:  mov    -0xc(%ebp),%eax
08490579 +0x1257:  movl   $0x0,0x8(%esp)
08490581 +0x125f:  mov    -0x10(%ebp),%edx
08490584 +0x1262:  mov    %edx,0x4(%esp)
08490588 +0x1266:  mov    %eax,(%esp)
0849058b +0x1269:  call   084943e0 <+0x50be>
08490590 +0x126e:  jmp    084905c8 <+0x12a6>
08490592 +0x1270:  movl   $0x0,0xc(%esp)
0849059a +0x1278:  movl   $0x202,0x8(%esp)
084905a2 +0x1280:  movl   $&_ZZN15exchange_server8CSession8OnAcceptEvE19__PRETTY_FUNCTION__,0x4(%esp)
084905aa +0x1288:  lea    -0x20(%ebp),%eax
084905ad +0x128b:  mov    %eax,(%esp)
084905b0 +0x128e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084905b5 +0x1293:  movl   $"session_pool_.Acquire() error",0x4(%esp)
084905bd +0x129b:  lea    -0x20(%ebp),%eax
084905c0 +0x129e:  mov    %eax,(%esp)
084905c3 +0x12a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084905c8 +0x12a6:  mov    -0xc(%ebp),%eax
084905cb +0x12a9:  add    $0x70,%esp
084905ce +0x12ac:  pop    %ebx
084905cf +0x12ad:  pop    %esi
084905d0 +0x12ae:  pop    %ebp
084905d1 +0x12af:  ret
084905d2 +0x12b0:  push   %ebp
084905d3 +0x12b1:  mov    %esp,%ebp
084905d5 +0x12b3:  push   %esi
084905d6 +0x12b4:  push   %ebx
084905d7 +0x12b5:  sub    $0x20,%esp
084905da +0x12b8:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
084905df +0x12bd:  mov    (%eax),%eax
084905e1 +0x12bf:  add    $0x10,%eax
084905e4 +0x12c2:  mov    (%eax),%edx
084905e6 +0x12c4:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
084905eb +0x12c9:  mov    %eax,(%esp)
084905ee +0x12cc:  call   *%edx
084905f0 +0x12ce:  cmp    $0x1,%eax
084905f3 +0x12d1:  sete   %al
084905f6 +0x12d4:  test   %al,%al
084905f8 +0x12d6:  je     084906c2 <+0x13a0>
084905fe +0x12dc:  lea    -0x14(%ebp),%eax
08490601 +0x12df:  mov    %eax,(%esp)
08490604 +0x12e2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08490609 +0x12e7:  lea    -0x14(%ebp),%eax
0849060c +0x12ea:  mov    %eax,(%esp)
0849060f +0x12ed:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08490614 +0x12f2:  movl   $0x82,0x8(%esp)
0849061c +0x12fa:  movl   $0x1,0x4(%esp)
08490624 +0x1302:  lea    -0x14(%ebp),%eax
08490627 +0x1305:  mov    %eax,(%esp)
0849062a +0x1308:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849062f +0x130d:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08490634 +0x1312:  mov    %eax,0x4(%esp)
08490638 +0x1316:  lea    -0x14(%ebp),%eax
0849063b +0x1319:  mov    %eax,(%esp)
0849063e +0x131c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08490643 +0x1321:  call   0848f28e <_ZN15exchange_server11GetServerIPEv>  ; exchange_server::GetServerIP()
08490648 +0x1326:  mov    %eax,(%esp)
0849064b +0x1329:  call   0807e530 <_init+0xe28>
08490650 +0x132e:  mov    %eax,0x4(%esp)
08490654 +0x1332:  lea    -0x14(%ebp),%eax
08490657 +0x1335:  mov    %eax,(%esp)
0849065a +0x1338:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849065f +0x133d:  call   0848f2a3 <_ZN15exchange_server13GetServerPORTEv>  ; exchange_server::GetServerPORT()
08490664 +0x1342:  mov    %eax,0x4(%esp)
08490668 +0x1346:  lea    -0x14(%ebp),%eax
0849066b +0x1349:  mov    %eax,(%esp)
0849066e +0x134c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08490673 +0x1351:  movl   $0x0,0x4(%esp)
0849067b +0x1359:  lea    -0x14(%ebp),%eax
0849067e +0x135c:  mov    %eax,(%esp)
08490681 +0x135f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08490686 +0x1364:  lea    -0x14(%ebp),%eax
08490689 +0x1367:  mov    %eax,0x4(%esp)
0849068d +0x136b:  mov    0x8(%ebp),%eax
08490690 +0x136e:  mov    %eax,(%esp)
08490693 +0x1371:  call   084906d0 <+0x13ae>
08490698 +0x1376:  mov    %eax,%ebx
0849069a +0x1378:  lea    -0x14(%ebp),%eax
0849069d +0x137b:  mov    %eax,(%esp)
084906a0 +0x137e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084906a5 +0x1383:  jmp    084906c7 <+0x13a5>
084906a7 +0x1385:  mov    %edx,%ebx
084906a9 +0x1387:  mov    %eax,%esi
084906ab +0x1389:  lea    -0x14(%ebp),%eax
084906ae +0x138c:  mov    %eax,(%esp)
084906b1 +0x138f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084906b6 +0x1394:  mov    %esi,%eax
084906b8 +0x1396:  mov    %ebx,%edx
084906ba +0x1398:  mov    %eax,(%esp)
084906bd +0x139b:  call   08ae3750 <_Unwind_Resume>
084906c2 +0x13a0:  mov    $0x1,%ebx
084906c7 +0x13a5:  mov    %ebx,%eax
084906c9 +0x13a7:  add    $0x20,%esp
084906cc +0x13aa:  pop    %ebx
084906cd +0x13ab:  pop    %esi
084906ce +0x13ac:  pop    %ebp
084906cf +0x13ad:  ret
084906d0 +0x13ae:  push   %ebp
084906d1 +0x13af:  mov    %esp,%ebp
084906d3 +0x13b1:  push   %ebx
084906d4 +0x13b2:  sub    $0x34,%esp
084906d7 +0x13b5:  mov    0xc(%ebp),%eax
084906da +0x13b8:  mov    %eax,(%esp)
084906dd +0x13bb:  call   0848f44e <+0x12c>
084906e2 +0x13c0:  test   %al,%al
084906e4 +0x13c2:  je     08490729 <+0x1407>
084906e6 +0x13c4:  mov    0xc(%ebp),%eax
084906e9 +0x13c7:  mov    %eax,(%esp)
084906ec +0x13ca:  call   0848f438 <+0x116>
084906f1 +0x13cf:  mov    %eax,%ebx
084906f3 +0x13d1:  mov    0xc(%ebp),%eax
084906f6 +0x13d4:  movl   $0x0,0x4(%esp)
084906fe +0x13dc:  mov    %eax,(%esp)
08490701 +0x13df:  call   0848f41c <+0xfa>
08490706 +0x13e4:  mov    0x8(%ebp),%edx
08490709 +0x13e7:  mov    %ebx,0x8(%esp)
0849070d +0x13eb:  mov    %eax,0x4(%esp)
08490711 +0x13ef:  mov    %edx,(%esp)
08490714 +0x13f2:  call   08494434 <+0x5112>
08490719 +0x13f7:  mov    %eax,-0xc(%ebp)
0849071c +0x13fa:  cmpl   $0x0,-0xc(%ebp)
08490720 +0x13fe:  jns    0849075c <+0x143a>
08490722 +0x1400:  mov    $0x0,%eax
08490727 +0x1405:  jmp    08490761 <+0x143f>
08490729 +0x1407:  movl   $"Packet.is_finallized return false",0x10(%esp)
08490731 +0x140f:  movl   $0x228,0xc(%esp)
08490739 +0x1417:  movl   $&_ZZN15exchange_server8CSession4SendER11PacketGuardE19__PRETTY_FUNCTION__,0x8(%esp)
08490741 +0x141f:  movl   $"ExchangeServerNetwork.h",0x4(%esp)
08490749 +0x1427:  movl   $0x1,(%esp)
08490750 +0x142e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08490755 +0x1433:  mov    $0x0,%eax
0849075a +0x1438:  jmp    08490761 <+0x143f>
0849075c +0x143a:  mov    $0x1,%eax
08490761 +0x143f:  add    $0x34,%esp
08490764 +0x1442:  pop    %ebx
08490765 +0x1443:  pop    %ebp
08490766 +0x1444:  ret
08490767 +0x1445:  push   %ebp
08490768 +0x1446:  mov    %esp,%ebp
0849076a +0x1448:  push   %ebx
0849076b +0x1449:  sub    $0x34,%esp
0849076e +0x144c:  mov    0xc(%ebp),%eax
08490771 +0x144f:  mov    %eax,0x8(%esp)
08490775 +0x1453:  mov    0x8(%ebp),%eax
08490778 +0x1456:  mov    %eax,0x4(%esp)
0849077c +0x145a:  lea    -0x20(%ebp),%eax
0849077f +0x145d:  mov    %eax,(%esp)
08490782 +0x1460:  call   08494666 <+0x5344>
08490787 +0x1465:  xor    $0x1,%eax
0849078a +0x1468:  test   %al,%al
0849078c +0x146a:  je     084907e0 <+0x14be>
0849078e +0x146c:  call   0807dd70 <_init+0x668>
08490793 +0x1471:  mov    (%eax),%eax
08490795 +0x1473:  mov    %eax,(%esp)
08490798 +0x1476:  call   0807d730 <_init+0x28>
0849079d +0x147b:  mov    %eax,%ebx
0849079f +0x147d:  movl   $0x0,0xc(%esp)
084907a7 +0x1485:  movl   $0x236,0x8(%esp)
084907af +0x148d:  movl   $&_ZZN15exchange_server8CSession6ListenEiPKcE19__PRETTY_FUNCTION__,0x4(%esp)
084907b7 +0x1495:  lea    -0x1c(%ebp),%eax
084907ba +0x1498:  mov    %eax,(%esp)
084907bd +0x149b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084907c2 +0x14a0:  mov    %ebx,0x8(%esp)
084907c6 +0x14a4:  movl   $"CreateListenSocket failed - %s",0x4(%esp)
084907ce +0x14ac:  lea    -0x1c(%ebp),%eax
084907d1 +0x14af:  mov    %eax,(%esp)
084907d4 +0x14b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084907d9 +0x14b7:  mov    $0x0,%eax
084907de +0x14bc:  jmp    08490823 <+0x1501>
084907e0 +0x14be:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
084907e5 +0x14c3:  mov    (%eax),%eax
084907e7 +0x14c5:  add    $0x8,%eax
084907ea +0x14c8:  mov    (%eax),%edx
084907ec +0x14ca:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
084907f1 +0x14cf:  mov    %eax,(%esp)
084907f4 +0x14d2:  call   *%edx
084907f6 +0x14d4:  mov    %eax,-0xc(%ebp)
084907f9 +0x14d7:  cmpl   $0x0,-0xc(%ebp)
084907fd +0x14db:  je     0849081e <+0x14fc>
084907ff +0x14dd:  mov    -0x20(%ebp),%edx
08490802 +0x14e0:  mov    -0xc(%ebp),%eax
08490805 +0x14e3:  movl   $0x1,0x8(%esp)
0849080d +0x14eb:  mov    %edx,0x4(%esp)
08490811 +0x14ef:  mov    %eax,(%esp)
08490814 +0x14f2:  call   084943e0 <+0x50be>
08490819 +0x14f7:  mov    -0xc(%ebp),%eax
0849081c +0x14fa:  jmp    08490823 <+0x1501>
0849081e +0x14fc:  mov    $0x0,%eax
08490823 +0x1501:  add    $0x34,%esp
08490826 +0x1504:  pop    %ebx
08490827 +0x1505:  pop    %ebp
08490828 +0x1506:  ret
08490829 +0x1507:  push   %ebp
0849082a +0x1508:  mov    %esp,%ebp
0849082c +0x150a:  push   %ebx
0849082d +0x150b:  sub    $0x34,%esp
08490830 +0x150e:  mov    0xc(%ebp),%eax
08490833 +0x1511:  mov    %eax,0x8(%esp)
08490837 +0x1515:  mov    0x8(%ebp),%eax
0849083a +0x1518:  mov    %eax,0x4(%esp)
0849083e +0x151c:  lea    -0x24(%ebp),%eax
08490841 +0x151f:  mov    %eax,(%esp)
08490844 +0x1522:  call   084947b1 <+0x548f>
08490849 +0x1527:  mov    %eax,-0x10(%ebp)
0849084c +0x152a:  cmpl   $0x0,-0x10(%ebp)
08490850 +0x152e:  setne  %al
08490853 +0x1531:  test   %al,%al
08490855 +0x1533:  je     084908a9 <+0x1587>
08490857 +0x1535:  call   0807dd70 <_init+0x668>
0849085c +0x153a:  mov    (%eax),%eax
0849085e +0x153c:  mov    %eax,(%esp)
08490861 +0x153f:  call   0807d730 <_init+0x28>
08490866 +0x1544:  mov    %eax,%ebx
08490868 +0x1546:  movl   $0x0,0xc(%esp)
08490870 +0x154e:  movl   $0x24b,0x8(%esp)
08490878 +0x1556:  movl   $&_ZZN15exchange_server8CSession7ConnectEPKciE19__PRETTY_FUNCTION__,0x4(%esp)
08490880 +0x155e:  lea    -0x20(%ebp),%eax
08490883 +0x1561:  mov    %eax,(%esp)
08490886 +0x1564:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849088b +0x1569:  mov    %ebx,0x8(%esp)
0849088f +0x156d:  movl   $"CreateConnectionSocket failed - %s",0x4(%esp)
08490897 +0x1575:  lea    -0x20(%ebp),%eax
0849089a +0x1578:  mov    %eax,(%esp)
0849089d +0x157b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084908a2 +0x1580:  mov    $0x0,%eax
084908a7 +0x1585:  jmp    084908ec <+0x15ca>
084908a9 +0x1587:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
084908ae +0x158c:  mov    (%eax),%eax
084908b0 +0x158e:  add    $0x8,%eax
084908b3 +0x1591:  mov    (%eax),%edx
084908b5 +0x1593:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
084908ba +0x1598:  mov    %eax,(%esp)
084908bd +0x159b:  call   *%edx
084908bf +0x159d:  mov    %eax,-0xc(%ebp)
084908c2 +0x15a0:  cmpl   $0x0,-0xc(%ebp)
084908c6 +0x15a4:  je     084908e7 <+0x15c5>
084908c8 +0x15a6:  mov    -0x24(%ebp),%edx
084908cb +0x15a9:  mov    -0xc(%ebp),%eax
084908ce +0x15ac:  movl   $0x1,0x8(%esp)
084908d6 +0x15b4:  mov    %edx,0x4(%esp)
084908da +0x15b8:  mov    %eax,(%esp)
084908dd +0x15bb:  call   084943e0 <+0x50be>
084908e2 +0x15c0:  mov    -0xc(%ebp),%eax
084908e5 +0x15c3:  jmp    084908ec <+0x15ca>
084908e7 +0x15c5:  mov    $0x0,%eax
084908ec +0x15ca:  add    $0x34,%esp
084908ef +0x15cd:  pop    %ebx
084908f0 +0x15ce:  pop    %ebp
084908f1 +0x15cf:  ret
084908f2 +0x15d0:  push   %ebp
084908f3 +0x15d1:  mov    %esp,%ebp
084908f5 +0x15d3:  push   %ebx
084908f6 +0x15d4:  sub    $0x24,%esp
084908f9 +0x15d7:  movl   $0x0,0xc(%esp)
08490901 +0x15df:  movl   $0x25e,0x8(%esp)
08490909 +0x15e7:  movl   $&_ZZN15exchange_server8CSession10DisconnectEvE19__PRETTY_FUNCTION__,0x4(%esp)
08490911 +0x15ef:  lea    -0x18(%ebp),%eax
08490914 +0x15f2:  mov    %eax,(%esp)
08490917 +0x15f5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849091c +0x15fa:  movl   $"Disconnect Exchange Server",0x4(%esp)
08490924 +0x1602:  lea    -0x18(%ebp),%eax
08490927 +0x1605:  mov    %eax,(%esp)
0849092a +0x1608:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849092f +0x160d:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
08490934 +0x1612:  test   %eax,%eax
08490936 +0x1614:  je     0849095e <+0x163c>
08490938 +0x1616:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
0849093d +0x161b:  mov    (%eax),%eax
0849093f +0x161d:  add    $0x4,%eax
08490942 +0x1620:  mov    (%eax),%ebx
08490944 +0x1622:  mov    0x8(%ebp),%eax
08490947 +0x1625:  mov    %eax,(%esp)
0849094a +0x1628:  call   0848ffb0 <+0xc8e>
0849094f +0x162d:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%edx
08490955 +0x1633:  mov    %eax,0x4(%esp)
08490959 +0x1637:  mov    %edx,(%esp)
0849095c +0x163a:  call   *%ebx
0849095e +0x163c:  mov    0x8(%ebp),%eax
08490961 +0x163f:  mov    %eax,(%esp)
08490964 +0x1642:  call   084948b4 <+0x5592>
08490969 +0x1647:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
0849096e +0x164c:  mov    (%eax),%eax
08490970 +0x164e:  add    $0xc,%eax
08490973 +0x1651:  mov    (%eax),%ecx
08490975 +0x1653:  mov    &_ZN15exchange_server8CSession16exchange_server_E,%eax
0849097a +0x1658:  mov    0x8(%ebp),%edx
0849097d +0x165b:  mov    %edx,0x4(%esp)
08490981 +0x165f:  mov    %eax,(%esp)
08490984 +0x1662:  call   *%ecx
08490986 +0x1664:  mov    $0x1,%eax
0849098b +0x1669:  add    $0x24,%esp
0849098e +0x166c:  pop    %ebx
0849098f +0x166d:  pop    %ebp
08490990 +0x166e:  ret
08490991 +0x166f:  nop
08490992 +0x1670:  push   %ebp
08490993 +0x1671:  mov    %esp,%ebp
08490995 +0x1673:  sub    $0x38,%esp
08490998 +0x1676:  movl   $0x0,(%esp)
0849099f +0x167d:  call   0807d750 <_init+0x48>
084909a4 +0x1682:  mov    %eax,-0x10(%ebp)
084909a7 +0x1685:  movb   $0x0,-0x9(%ebp)
084909ab +0x1689:  mov    0x8(%ebp),%eax
084909ae +0x168c:  lea    0x48(%eax),%edx
084909b1 +0x168f:  lea    -0x1c(%ebp),%eax
084909b4 +0x1692:  mov    %edx,0x4(%esp)
084909b8 +0x1696:  mov    %eax,(%esp)
084909bb +0x1699:  call   08494928 <+0x5606>
084909c0 +0x169e:  sub    $0x4,%esp
084909c3 +0x16a1:  jmp    08490a52 <+0x1730>
084909c8 +0x16a6:  lea    -0x1c(%ebp),%eax
084909cb +0x16a9:  mov    %eax,(%esp)
084909ce +0x16ac:  call   08494988 <+0x5666>
084909d3 +0x16b1:  mov    0x4(%eax),%eax
084909d6 +0x16b4:  mov    &_ZL12gTCharBuffer+0x2350(%eax),%eax
084909dc +0x16ba:  mov    -0x10(%ebp),%edx
084909df +0x16bd:  mov    %edx,%ecx
084909e1 +0x16bf:  sub    %eax,%ecx
084909e3 +0x16c1:  mov    %ecx,%eax
084909e5 +0x16c3:  cmp    $0x1d,%eax
084909e8 +0x16c6:  setg   %al
084909eb +0x16c9:  test   %al,%al
084909ed +0x16cb:  je     08490a47 <+0x1725>
084909ef +0x16cd:  lea    -0x1c(%ebp),%eax
084909f2 +0x16d0:  mov    %eax,(%esp)
084909f5 +0x16d3:  call   08494988 <+0x5666>
084909fa +0x16d8:  mov    0x4(%eax),%eax
084909fd +0x16db:  mov    0x8(%ebp),%edx
08490a00 +0x16de:  add    $0x18,%edx
08490a03 +0x16e1:  mov    %eax,0x4(%esp)
08490a07 +0x16e5:  mov    %edx,(%esp)
08490a0a +0x16e8:  call   08494996 <+0x5674>
08490a0f +0x16ed:  lea    -0x14(%ebp),%eax
08490a12 +0x16f0:  movl   $0x0,0x8(%esp)
08490a1a +0x16f8:  lea    -0x1c(%ebp),%edx
08490a1d +0x16fb:  mov    %edx,0x4(%esp)
08490a21 +0x16ff:  mov    %eax,(%esp)
08490a24 +0x1702:  call   08494aee <+0x57cc>
08490a29 +0x1707:  sub    $0x4,%esp
08490a2c +0x170a:  mov    0x8(%ebp),%eax
08490a2f +0x170d:  lea    0x48(%eax),%edx
08490a32 +0x1710:  mov    -0x14(%ebp),%eax
08490a35 +0x1713:  mov    %eax,0x4(%esp)
08490a39 +0x1717:  mov    %edx,(%esp)
08490a3c +0x171a:  call   08494b2c <+0x580a>
08490a41 +0x171f:  movb   $0x1,-0x9(%ebp)
08490a45 +0x1723:  jmp    08490a52 <+0x1730>
08490a47 +0x1725:  lea    -0x1c(%ebp),%eax
08490a4a +0x1728:  mov    %eax,(%esp)
08490a4d +0x172b:  call   08494b46 <+0x5824>
08490a52 +0x1730:  mov    0x8(%ebp),%eax
08490a55 +0x1733:  lea    0x48(%eax),%edx
08490a58 +0x1736:  lea    -0x18(%ebp),%eax
08490a5b +0x1739:  mov    %edx,0x4(%esp)
08490a5f +0x173d:  mov    %eax,(%esp)
08490a62 +0x1740:  call   0849494e <+0x562c>
08490a67 +0x1745:  sub    $0x4,%esp
08490a6a +0x1748:  lea    -0x18(%ebp),%eax
08490a6d +0x174b:  mov    %eax,0x4(%esp)
08490a71 +0x174f:  lea    -0x1c(%ebp),%eax
08490a74 +0x1752:  mov    %eax,(%esp)
08490a77 +0x1755:  call   08494974 <+0x5652>
08490a7c +0x175a:  test   %al,%al
08490a7e +0x175c:  jne    084909c8 <+0x16a6>
08490a84 +0x1762:  movzbl -0x9(%ebp),%eax
08490a88 +0x1766:  leave
08490a89 +0x1767:  ret
08490a8a +0x1768:  push   %ebp
08490a8b +0x1769:  mov    %esp,%ebp
08490a8d +0x176b:  push   %esi
08490a8e +0x176c:  push   %ebx
08490a8f +0x176d:  sub    $0x20,%esp
08490a92 +0x1770:  mov    0x8(%ebp),%eax
08490a95 +0x1773:  mov    %eax,0x4(%esp)
08490a99 +0x1777:  lea    -0x14(%ebp),%eax
08490a9c +0x177a:  mov    %eax,(%esp)
08490a9f +0x177d:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08490aa4 +0x1782:  movl   $0x0,-0xc(%ebp)
08490aab +0x1789:  mov    0x8(%ebp),%eax
08490aae +0x178c:  lea    0x48(%eax),%ecx
08490ab1 +0x178f:  lea    -0x18(%ebp),%eax
08490ab4 +0x1792:  lea    0xc(%ebp),%edx
08490ab7 +0x1795:  mov    %edx,0x8(%esp)
08490abb +0x1799:  mov    %ecx,0x4(%esp)
08490abf +0x179d:  mov    %eax,(%esp)
08490ac2 +0x17a0:  call   08494b64 <+0x5842>
08490ac7 +0x17a5:  sub    $0x4,%esp
08490aca +0x17a8:  mov    0x8(%ebp),%eax
08490acd +0x17ab:  lea    0x48(%eax),%edx
08490ad0 +0x17ae:  lea    -0x10(%ebp),%eax
08490ad3 +0x17b1:  mov    %edx,0x4(%esp)
08490ad7 +0x17b5:  mov    %eax,(%esp)
08490ada +0x17b8:  call   0849494e <+0x562c>
08490adf +0x17bd:  sub    $0x4,%esp
08490ae2 +0x17c0:  lea    -0x10(%ebp),%eax
08490ae5 +0x17c3:  mov    %eax,0x4(%esp)
08490ae9 +0x17c7:  lea    -0x18(%ebp),%eax
08490aec +0x17ca:  mov    %eax,(%esp)
08490aef +0x17cd:  call   08494974 <+0x5652>
08490af4 +0x17d2:  test   %al,%al
08490af6 +0x17d4:  je     08490b41 <+0x181f>
08490af8 +0x17d6:  lea    -0x18(%ebp),%eax
08490afb +0x17d9:  mov    %eax,(%esp)
08490afe +0x17dc:  call   08494988 <+0x5666>
08490b03 +0x17e1:  mov    0x4(%eax),%eax
08490b06 +0x17e4:  mov    %eax,-0xc(%ebp)
08490b09 +0x17e7:  movl   $0x3f85c,0x8(%esp)
08490b11 +0x17ef:  movl   $0x0,0x4(%esp)
08490b19 +0x17f7:  mov    -0xc(%ebp),%eax
08490b1c +0x17fa:  mov    %eax,(%esp)
08490b1f +0x17fd:  call   0807dcc0 <_init+0x5b8>
08490b24 +0x1802:  movl   $0x0,(%esp)
08490b2b +0x1809:  call   0807d750 <_init+0x48>
08490b30 +0x180e:  mov    -0xc(%ebp),%edx
08490b33 +0x1811:  mov    %eax,&_ZL12gTCharBuffer+0x2350(%edx)
08490b39 +0x1817:  mov    -0xc(%ebp),%ebx
08490b3c +0x181a:  jmp    08490bdd <+0x18bb>
08490b41 +0x181f:  mov    0x8(%ebp),%eax
08490b44 +0x1822:  add    $0x18,%eax
08490b47 +0x1825:  mov    %eax,(%esp)
08490b4a +0x1828:  call   08494b90 <+0x586e>
08490b4f +0x182d:  test   %eax,%eax
08490b51 +0x182f:  sete   %al
08490b54 +0x1832:  test   %al,%al
08490b56 +0x1834:  je     08490b71 <+0x184f>
08490b58 +0x1836:  mov    0x8(%ebp),%eax
08490b5b +0x1839:  mov    %eax,(%esp)
08490b5e +0x183c:  call   08490992 <+0x1670>
08490b63 +0x1841:  xor    $0x1,%eax
08490b66 +0x1844:  test   %al,%al
08490b68 +0x1846:  je     08490b71 <+0x184f>
08490b6a +0x1848:  mov    $0x0,%ebx
08490b6f +0x184d:  jmp    08490bdd <+0x18bb>
08490b71 +0x184f:  mov    0x8(%ebp),%eax
08490b74 +0x1852:  add    $0x18,%eax
08490b77 +0x1855:  mov    %eax,(%esp)
08490b7a +0x1858:  call   08494ba6 <+0x5884>
08490b7f +0x185d:  mov    %eax,-0xc(%ebp)
08490b82 +0x1860:  cmpl   $0x0,-0xc(%ebp)
08490b86 +0x1864:  setne  %al
08490b89 +0x1867:  test   %al,%al
08490b8b +0x1869:  je     08490bbd <+0x189b>
08490b8d +0x186b:  movl   $0x3f85c,0x8(%esp)
08490b95 +0x1873:  movl   $0x0,0x4(%esp)
08490b9d +0x187b:  mov    -0xc(%ebp),%eax
08490ba0 +0x187e:  mov    %eax,(%esp)
08490ba3 +0x1881:  call   0807dcc0 <_init+0x5b8>
08490ba8 +0x1886:  movl   $0x0,(%esp)
08490baf +0x188d:  call   0807d750 <_init+0x48>
08490bb4 +0x1892:  mov    -0xc(%ebp),%edx
08490bb7 +0x1895:  mov    %eax,&_ZL12gTCharBuffer+0x2350(%edx)
08490bbd +0x189b:  mov    -0xc(%ebp),%ebx
08490bc0 +0x189e:  jmp    08490bdd <+0x18bb>
08490bc2 +0x18a0:  mov    %edx,%ebx
08490bc4 +0x18a2:  mov    %eax,%esi
08490bc6 +0x18a4:  lea    -0x14(%ebp),%eax
08490bc9 +0x18a7:  mov    %eax,(%esp)
08490bcc +0x18aa:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490bd1 +0x18af:  mov    %esi,%eax
08490bd3 +0x18b1:  mov    %ebx,%edx
08490bd5 +0x18b3:  mov    %eax,(%esp)
08490bd8 +0x18b6:  call   08ae3750 <_Unwind_Resume>
08490bdd +0x18bb:  lea    -0x14(%ebp),%eax
08490be0 +0x18be:  mov    %eax,(%esp)
08490be3 +0x18c1:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490be8 +0x18c6:  mov    %ebx,%eax
08490bea +0x18c8:  lea    -0x8(%ebp),%esp
08490bed +0x18cb:  add    $0x0,%esp
08490bf0 +0x18ce:  pop    %ebx
08490bf1 +0x18cf:  pop    %esi
08490bf2 +0x18d0:  pop    %ebp
08490bf3 +0x18d1:  ret
08490bf4 +0x18d2:  push   %ebp
08490bf5 +0x18d3:  mov    %esp,%ebp
08490bf7 +0x18d5:  push   %esi
08490bf8 +0x18d6:  push   %ebx
08490bf9 +0x18d7:  sub    $0x40,%esp
08490bfc +0x18da:  mov    0x8(%ebp),%eax
08490bff +0x18dd:  mov    %eax,0x4(%esp)
08490c03 +0x18e1:  lea    -0x1c(%ebp),%eax
08490c06 +0x18e4:  mov    %eax,(%esp)
08490c09 +0x18e7:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08490c0e +0x18ec:  mov    0x8(%ebp),%eax
08490c11 +0x18ef:  lea    0x18(%eax),%edx
08490c14 +0x18f2:  mov    0xc(%ebp),%eax
08490c17 +0x18f5:  mov    %eax,0x4(%esp)
08490c1b +0x18f9:  mov    %edx,(%esp)
08490c1e +0x18fc:  call   08494996 <+0x5674>
08490c23 +0x1901:  mov    0x8(%ebp),%eax
08490c26 +0x1904:  add    $0x18,%eax
08490c29 +0x1907:  mov    %eax,(%esp)
08490c2c +0x190a:  call   08494b90 <+0x586e>
08490c31 +0x190f:  mov    $0x3e8,%edx
08490c36 +0x1914:  mov    %edx,%ecx
08490c38 +0x1916:  sub    %eax,%ecx
08490c3a +0x1918:  mov    %ecx,%eax
08490c3c +0x191a:  mov    %eax,%ebx
08490c3e +0x191c:  mov    0x8(%ebp),%eax
08490c41 +0x191f:  add    $0x48,%eax
08490c44 +0x1922:  mov    %eax,(%esp)
08490c47 +0x1925:  call   08494cd4 <+0x59b2>
08490c4c +0x192a:  cmp    %eax,%ebx
08490c4e +0x192c:  setne  %al
08490c51 +0x192f:  test   %al,%al
08490c53 +0x1931:  je     08490cdc <+0x19ba>
08490c59 +0x1937:  mov    0x8(%ebp),%eax
08490c5c +0x193a:  add    $0x48,%eax
08490c5f +0x193d:  mov    %eax,(%esp)
08490c62 +0x1940:  call   08494cd4 <+0x59b2>
08490c67 +0x1945:  mov    %eax,%esi
08490c69 +0x1947:  mov    0x8(%ebp),%eax
08490c6c +0x194a:  add    $0x18,%eax
08490c6f +0x194d:  mov    %eax,(%esp)
08490c72 +0x1950:  call   08494b90 <+0x586e>
08490c77 +0x1955:  mov    %eax,%ebx
08490c79 +0x1957:  movl   $0x0,0xc(%esp)
08490c81 +0x195f:  movl   $0x4e,0x8(%esp)
08490c89 +0x1967:  movl   $&_ZZN15exchange_server18CCacheCharacterMgr13FreeCharacterEP20CACHE_CHARACTER_TYPEE19__PRETTY_FUNCTION__,0x4(%esp)
08490c91 +0x196f:  lea    -0x18(%ebp),%eax
08490c94 +0x1972:  mov    %eax,(%esp)
08490c97 +0x1975:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08490c9c +0x197a:  mov    %esi,0x10(%esp)
08490ca0 +0x197e:  mov    %ebx,0xc(%esp)
08490ca4 +0x1982:  movl   $0x3e8,0x8(%esp)
08490cac +0x198a:  movl   $"FreeCharacter() error (%d,%d,%d)",0x4(%esp)
08490cb4 +0x1992:  lea    -0x18(%ebp),%eax
08490cb7 +0x1995:  mov    %eax,(%esp)
08490cba +0x1998:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08490cbf +0x199d:  jmp    08490cdc <+0x19ba>
08490cc1 +0x199f:  mov    %edx,%ebx
08490cc3 +0x19a1:  mov    %eax,%esi
08490cc5 +0x19a3:  lea    -0x1c(%ebp),%eax
08490cc8 +0x19a6:  mov    %eax,(%esp)
08490ccb +0x19a9:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490cd0 +0x19ae:  mov    %esi,%eax
08490cd2 +0x19b0:  mov    %ebx,%edx
08490cd4 +0x19b2:  mov    %eax,(%esp)
08490cd7 +0x19b5:  call   08ae3750 <_Unwind_Resume>
08490cdc +0x19ba:  lea    -0x1c(%ebp),%eax
08490cdf +0x19bd:  mov    %eax,(%esp)
08490ce2 +0x19c0:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490ce7 +0x19c5:  add    $0x40,%esp
08490cea +0x19c8:  pop    %ebx
08490ceb +0x19c9:  pop    %esi
08490cec +0x19ca:  pop    %ebp
08490ced +0x19cb:  ret
08490cee +0x19cc:  push   %ebp
08490cef +0x19cd:  mov    %esp,%ebp
08490cf1 +0x19cf:  push   %esi
08490cf2 +0x19d0:  push   %ebx
08490cf3 +0x19d1:  sub    $0x30,%esp
08490cf6 +0x19d4:  mov    0x14(%ebp),%eax
08490cf9 +0x19d7:  mov    %al,-0x1c(%ebp)
08490cfc +0x19da:  mov    0x8(%ebp),%eax
08490cff +0x19dd:  mov    %eax,0x4(%esp)
08490d03 +0x19e1:  lea    -0x10(%ebp),%eax
08490d06 +0x19e4:  mov    %eax,(%esp)
08490d09 +0x19e7:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08490d0e +0x19ec:  mov    0x8(%ebp),%eax
08490d11 +0x19ef:  lea    0x48(%eax),%ecx
08490d14 +0x19f2:  lea    -0x14(%ebp),%eax
08490d17 +0x19f5:  lea    0xc(%ebp),%edx
08490d1a +0x19f8:  mov    %edx,0x8(%esp)
08490d1e +0x19fc:  mov    %ecx,0x4(%esp)
08490d22 +0x1a00:  mov    %eax,(%esp)
08490d25 +0x1a03:  call   08494b64 <+0x5842>
08490d2a +0x1a08:  sub    $0x4,%esp
08490d2d +0x1a0b:  mov    0x8(%ebp),%eax
08490d30 +0x1a0e:  lea    0x48(%eax),%edx
08490d33 +0x1a11:  lea    -0xc(%ebp),%eax
08490d36 +0x1a14:  mov    %edx,0x4(%esp)
08490d3a +0x1a18:  mov    %eax,(%esp)
08490d3d +0x1a1b:  call   0849494e <+0x562c>
08490d42 +0x1a20:  sub    $0x4,%esp
08490d45 +0x1a23:  lea    -0xc(%ebp),%eax
08490d48 +0x1a26:  mov    %eax,0x4(%esp)
08490d4c +0x1a2a:  lea    -0x14(%ebp),%eax
08490d4f +0x1a2d:  mov    %eax,(%esp)
08490d52 +0x1a30:  call   08494974 <+0x5652>
08490d57 +0x1a35:  test   %al,%al
08490d59 +0x1a37:  je     08490d90 <+0x1a6e>
08490d5b +0x1a39:  lea    -0x14(%ebp),%eax
08490d5e +0x1a3c:  mov    %eax,(%esp)
08490d61 +0x1a3f:  call   08494988 <+0x5666>
08490d66 +0x1a44:  mov    0x4(%eax),%edx
08490d69 +0x1a47:  mov    0x10(%ebp),%eax
08490d6c +0x1a4a:  mov    %edx,(%eax)
08490d6e +0x1a4c:  cmpb   $0x0,-0x1c(%ebp)
08490d72 +0x1a50:  je     08490d89 <+0x1a67>
08490d74 +0x1a52:  mov    0x8(%ebp),%eax
08490d77 +0x1a55:  lea    0x48(%eax),%edx
08490d7a +0x1a58:  mov    -0x14(%ebp),%eax
08490d7d +0x1a5b:  mov    %eax,0x4(%esp)
08490d81 +0x1a5f:  mov    %edx,(%esp)
08490d84 +0x1a62:  call   08494b2c <+0x580a>
08490d89 +0x1a67:  mov    $0x1,%ebx
08490d8e +0x1a6c:  jmp    08490db2 <+0x1a90>
08490d90 +0x1a6e:  mov    $0x0,%ebx
08490d95 +0x1a73:  jmp    08490db2 <+0x1a90>
08490d97 +0x1a75:  mov    %edx,%ebx
08490d99 +0x1a77:  mov    %eax,%esi
08490d9b +0x1a79:  lea    -0x10(%ebp),%eax
08490d9e +0x1a7c:  mov    %eax,(%esp)
08490da1 +0x1a7f:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490da6 +0x1a84:  mov    %esi,%eax
08490da8 +0x1a86:  mov    %ebx,%edx
08490daa +0x1a88:  mov    %eax,(%esp)
08490dad +0x1a8b:  call   08ae3750 <_Unwind_Resume>
08490db2 +0x1a90:  lea    -0x10(%ebp),%eax
08490db5 +0x1a93:  mov    %eax,(%esp)
08490db8 +0x1a96:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490dbd +0x1a9b:  mov    %ebx,%eax
08490dbf +0x1a9d:  lea    -0x8(%ebp),%esp
08490dc2 +0x1aa0:  add    $0x0,%esp
08490dc5 +0x1aa3:  pop    %ebx
08490dc6 +0x1aa4:  pop    %esi
08490dc7 +0x1aa5:  pop    %ebp
08490dc8 +0x1aa6:  ret
08490dc9 +0x1aa7:  nop
08490dca +0x1aa8:  push   %ebp
08490dcb +0x1aa9:  mov    %esp,%ebp
08490dcd +0x1aab:  push   %esi
08490dce +0x1aac:  push   %ebx
08490dcf +0x1aad:  sub    $0x30,%esp
08490dd2 +0x1ab0:  mov    0x8(%ebp),%eax
08490dd5 +0x1ab3:  mov    %eax,0x4(%esp)
08490dd9 +0x1ab7:  lea    -0x1c(%ebp),%eax
08490ddc +0x1aba:  mov    %eax,(%esp)
08490ddf +0x1abd:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08490de4 +0x1ac2:  lea    -0x10(%ebp),%eax
08490de7 +0x1ac5:  lea    0x10(%ebp),%edx
08490dea +0x1ac8:  mov    %edx,0x8(%esp)
08490dee +0x1acc:  lea    0xc(%ebp),%edx
08490df1 +0x1acf:  mov    %edx,0x4(%esp)
08490df5 +0x1ad3:  mov    %eax,(%esp)
08490df8 +0x1ad6:  call   08494ce7 <+0x59c5>
08490dfd +0x1adb:  sub    $0x4,%esp
08490e00 +0x1ade:  lea    -0x10(%ebp),%eax
08490e03 +0x1ae1:  mov    %eax,0x4(%esp)
08490e07 +0x1ae5:  lea    -0x18(%ebp),%eax
08490e0a +0x1ae8:  mov    %eax,(%esp)
08490e0d +0x1aeb:  call   08494d26 <+0x5a04>
08490e12 +0x1af0:  mov    0x8(%ebp),%eax
08490e15 +0x1af3:  lea    0x48(%eax),%ecx
08490e18 +0x1af6:  lea    -0x24(%ebp),%eax
08490e1b +0x1af9:  lea    -0x18(%ebp),%edx
08490e1e +0x1afc:  mov    %edx,0x8(%esp)
08490e22 +0x1b00:  mov    %ecx,0x4(%esp)
08490e26 +0x1b04:  mov    %eax,(%esp)
08490e29 +0x1b07:  call   08494d56 <+0x5a34>
08490e2e +0x1b0c:  sub    $0x4,%esp
08490e31 +0x1b0f:  movzbl -0x20(%ebp),%eax
08490e35 +0x1b13:  xor    $0x1,%eax
08490e38 +0x1b16:  test   %al,%al
08490e3a +0x1b18:  je     08490e4d <+0x1b2b>
08490e3c +0x1b1a:  lea    -0x24(%ebp),%eax
08490e3f +0x1b1d:  mov    %eax,(%esp)
08490e42 +0x1b20:  call   08494988 <+0x5666>
08490e47 +0x1b25:  mov    0x10(%ebp),%edx
08490e4a +0x1b28:  mov    %edx,0x4(%eax)
08490e4d +0x1b2b:  mov    $0x1,%ebx
08490e52 +0x1b30:  lea    -0x1c(%ebp),%eax
08490e55 +0x1b33:  mov    %eax,(%esp)
08490e58 +0x1b36:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490e5d +0x1b3b:  mov    %ebx,%eax
08490e5f +0x1b3d:  lea    -0x8(%ebp),%esp
08490e62 +0x1b40:  add    $0x0,%esp
08490e65 +0x1b43:  pop    %ebx
08490e66 +0x1b44:  pop    %esi
08490e67 +0x1b45:  pop    %ebp
08490e68 +0x1b46:  ret
08490e69 +0x1b47:  mov    %edx,%ebx
08490e6b +0x1b49:  mov    %eax,%esi
08490e6d +0x1b4b:  lea    -0x1c(%ebp),%eax
08490e70 +0x1b4e:  mov    %eax,(%esp)
08490e73 +0x1b51:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08490e78 +0x1b56:  mov    %esi,%eax
08490e7a +0x1b58:  mov    %ebx,%edx
08490e7c +0x1b5a:  mov    %eax,(%esp)
08490e7f +0x1b5d:  call   08ae3750 <_Unwind_Resume>
08490e84 +0x1b62:  push   %ebp
08490e85 +0x1b63:  mov    %esp,%ebp
08490e87 +0x1b65:  sub    $0x18,%esp
08490e8a +0x1b68:  mov    0x8(%ebp),%eax
08490e8d +0x1b6b:  mov    %eax,(%esp)
08490e90 +0x1b6e:  call   08495008 <+0x5ce6>
08490e95 +0x1b73:  leave
08490e96 +0x1b74:  ret
08490e97 +0x1b75:  nop
08490e98 +0x1b76:  push   %ebp
08490e99 +0x1b77:  mov    %esp,%ebp
08490e9b +0x1b79:  push   %esi
08490e9c +0x1b7a:  push   %ebx
08490e9d +0x1b7b:  sub    $0x10,%esp
08490ea0 +0x1b7e:  mov    0x8(%ebp),%eax
08490ea3 +0x1b81:  mov    %eax,(%esp)
08490ea6 +0x1b84:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
08490eab +0x1b89:  mov    0x8(%ebp),%eax
08490eae +0x1b8c:  add    $0x18,%eax
08490eb1 +0x1b8f:  mov    %eax,(%esp)
08490eb4 +0x1b92:  call   08494daa <+0x5a88>
08490eb9 +0x1b97:  mov    0x8(%ebp),%eax
08490ebc +0x1b9a:  add    $0x48,%eax
08490ebf +0x1b9d:  mov    %eax,(%esp)
08490ec2 +0x1ba0:  call   08494fe0 <+0x5cbe>
08490ec7 +0x1ba5:  jmp    08490efc <+0x1bda>
08490ec9 +0x1ba7:  mov    %edx,%ebx
08490ecb +0x1ba9:  mov    %eax,%esi
08490ecd +0x1bab:  mov    0x8(%ebp),%eax
08490ed0 +0x1bae:  add    $0x18,%eax
08490ed3 +0x1bb1:  mov    %eax,(%esp)
08490ed6 +0x1bb4:  call   08494f58 <+0x5c36>
08490edb +0x1bb9:  mov    %esi,%eax
08490edd +0x1bbb:  mov    %ebx,%edx
08490edf +0x1bbd:  jmp    08490ee1 <+0x1bbf>
08490ee1 +0x1bbf:  mov    %edx,%ebx
08490ee3 +0x1bc1:  mov    %eax,%esi
08490ee5 +0x1bc3:  mov    0x8(%ebp),%eax
08490ee8 +0x1bc6:  mov    %eax,(%esp)
08490eeb +0x1bc9:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08490ef0 +0x1bce:  mov    %esi,%eax
08490ef2 +0x1bd0:  mov    %ebx,%edx
08490ef4 +0x1bd2:  mov    %eax,(%esp)
08490ef7 +0x1bd5:  call   08ae3750 <_Unwind_Resume>
08490efc +0x1bda:  add    $0x10,%esp
08490eff +0x1bdd:  pop    %ebx
08490f00 +0x1bde:  pop    %esi
08490f01 +0x1bdf:  pop    %ebp
08490f02 +0x1be0:  ret
08490f03 +0x1be1:  nop
08490f04 +0x1be2:  push   %ebp
08490f05 +0x1be3:  mov    %esp,%ebp
08490f07 +0x1be5:  push   %esi
08490f08 +0x1be6:  push   %ebx
08490f09 +0x1be7:  sub    $0x10,%esp
08490f0c +0x1bea:  mov    0x8(%ebp),%eax
08490f0f +0x1bed:  add    $0x48,%eax
08490f12 +0x1bf0:  mov    %eax,(%esp)
08490f15 +0x1bf3:  call   08490e84 <+0x1b62>
08490f1a +0x1bf8:  jmp    08490f34 <+0x1c12>
08490f1c +0x1bfa:  mov    %edx,%ebx
08490f1e +0x1bfc:  mov    %eax,%esi
08490f20 +0x1bfe:  mov    0x8(%ebp),%eax
08490f23 +0x1c01:  add    $0x18,%eax
08490f26 +0x1c04:  mov    %eax,(%esp)
08490f29 +0x1c07:  call   08494f58 <+0x5c36>
08490f2e +0x1c0c:  mov    %esi,%eax
08490f30 +0x1c0e:  mov    %ebx,%edx
08490f32 +0x1c10:  jmp    08490f44 <+0x1c22>
08490f34 +0x1c12:  mov    0x8(%ebp),%eax
08490f37 +0x1c15:  add    $0x18,%eax
08490f3a +0x1c18:  mov    %eax,(%esp)
08490f3d +0x1c1b:  call   08494f58 <+0x5c36>
08490f42 +0x1c20:  jmp    08490f5f <+0x1c3d>
08490f44 +0x1c22:  mov    %edx,%ebx
08490f46 +0x1c24:  mov    %eax,%esi
08490f48 +0x1c26:  mov    0x8(%ebp),%eax
08490f4b +0x1c29:  mov    %eax,(%esp)
08490f4e +0x1c2c:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08490f53 +0x1c31:  mov    %esi,%eax
08490f55 +0x1c33:  mov    %ebx,%edx
08490f57 +0x1c35:  mov    %eax,(%esp)
08490f5a +0x1c38:  call   08ae3750 <_Unwind_Resume>
08490f5f +0x1c3d:  mov    0x8(%ebp),%eax
08490f62 +0x1c40:  mov    %eax,(%esp)
08490f65 +0x1c43:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08490f6a +0x1c48:  add    $0x10,%esp
08490f6d +0x1c4b:  pop    %ebx
08490f6e +0x1c4c:  pop    %esi
08490f6f +0x1c4d:  pop    %ebp
08490f70 +0x1c4e:  ret
08490f71 +0x1c4f:  push   %ebp
08490f72 +0x1c50:  mov    %esp,%ebp
08490f74 +0x1c52:  push   %edi
08490f75 +0x1c53:  push   %esi
08490f76 +0x1c54:  push   %ebx
08490f77 +0x1c55:  sub    $0x1c,%esp
08490f7a +0x1c58:  mov    $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,%eax
08490f7f +0x1c5d:  movzbl (%eax),%eax
08490f82 +0x1c60:  test   %al,%al
08490f84 +0x1c62:  jne    08490ff7 <+0x1cd5>
08490f86 +0x1c64:  movl   $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
08490f8d +0x1c6b:  call   08725330 <__cxa_guard_acquire>
08490f92 +0x1c70:  test   %eax,%eax
08490f94 +0x1c72:  setne  %al
08490f97 +0x1c75:  test   %al,%al
08490f99 +0x1c77:  je     08490ff7 <+0x1cd5>
08490f9b +0x1c79:  mov    $0x0,%ebx
08490fa0 +0x1c7e:  movl   $&_ZZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
08490fa7 +0x1c85:  call   08490e98 <+0x1b76>
08490fac +0x1c8a:  movl   $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
08490fb3 +0x1c91:  call   08725250 <__cxa_guard_release>
08490fb8 +0x1c96:  mov    $&_ZN15exchange_server18CCacheCharacterMgrD1Ev,%eax
08490fbd +0x1c9b:  movl   $&__dso_handle,0x8(%esp)
08490fc5 +0x1ca3:  movl   $&_ZZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,0x4(%esp)
08490fcd +0x1cab:  mov    %eax,(%esp)
08490fd0 +0x1cae:  call   0807ddd0 <_init+0x6c8>
08490fd5 +0x1cb3:  jmp    08490ff7 <+0x1cd5>
08490fd7 +0x1cb5:  mov    %edx,%esi
08490fd9 +0x1cb7:  mov    %eax,%edi
08490fdb +0x1cb9:  test   %bl,%bl
08490fdd +0x1cbb:  jne    08490feb <+0x1cc9>
08490fdf +0x1cbd:  movl   $&_ZGVZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,(%esp)
08490fe6 +0x1cc4:  call   087252c0 <__cxa_guard_abort>
08490feb +0x1cc9:  mov    %edi,%eax
08490fed +0x1ccb:  mov    %esi,%edx
08490fef +0x1ccd:  mov    %eax,(%esp)
08490ff2 +0x1cd0:  call   08ae3750 <_Unwind_Resume>
08490ff7 +0x1cd5:  mov    $&_ZZN15exchange_server28GetInstanceCacheCharacterMgrEvE8instance,%eax
08490ffc +0x1cda:  add    $0x1c,%esp
08490fff +0x1cdd:  pop    %ebx
08491000 +0x1cde:  pop    %esi
08491001 +0x1cdf:  pop    %edi
08491002 +0x1ce0:  pop    %ebp
08491003 +0x1ce1:  ret
08491004 +0x1ce2:  push   %ebp
08491005 +0x1ce3:  mov    %esp,%ebp
08491007 +0x1ce5:  mov    0x8(%ebp),%eax
0849100a +0x1ce8:  movl   $0x0,(%eax)
08491010 +0x1cee:  mov    0x8(%ebp),%eax
08491013 +0x1cf1:  movw   $0x0,0x4(%eax)
08491019 +0x1cf7:  mov    0x8(%ebp),%eax
0849101c +0x1cfa:  movl   $0x0,0x8(%eax)
08491023 +0x1d01:  mov    0x8(%ebp),%eax
08491026 +0x1d04:  movl   $0x0,0xc(%eax)
0849102d +0x1d0b:  pop    %ebp
0849102e +0x1d0c:  ret
0849102f +0x1d0d:  nop
08491030 +0x1d0e:  push   %ebp
08491031 +0x1d0f:  mov    %esp,%ebp
08491033 +0x1d11:  mov    0x8(%ebp),%eax
08491036 +0x1d14:  mov    0x68(%eax),%eax
08491039 +0x1d17:  pop    %ebp
0849103a +0x1d18:  ret
0849103b +0x1d19:  nop
0849103c +0x1d1a:  push   %ebp
0849103d +0x1d1b:  mov    %esp,%ebp
0849103f +0x1d1d:  mov    0x8(%ebp),%eax
08491042 +0x1d20:  mov    0xc(%ebp),%edx
08491045 +0x1d23:  mov    %edx,0x68(%eax)
08491048 +0x1d26:  pop    %ebp
08491049 +0x1d27:  ret
0849104a +0x1d28:  push   %ebp
0849104b +0x1d29:  mov    %esp,%ebp
0849104d +0x1d2b:  sub    $0x18,%esp
08491050 +0x1d2e:  mov    0x8(%ebp),%eax
08491053 +0x1d31:  add    $0x6c,%eax
08491056 +0x1d34:  mov    %eax,(%esp)
08491059 +0x1d37:  call   0849505a <+0x5d38>
0849105e +0x1d3c:  leave
0849105f +0x1d3d:  ret
08491060 +0x1d3e:  push   %ebp
08491061 +0x1d3f:  mov    %esp,%ebp
08491063 +0x1d41:  sub    $0x18,%esp
08491066 +0x1d44:  mov    0x8(%ebp),%eax
08491069 +0x1d47:  lea    0x6c(%eax),%edx
0849106c +0x1d4a:  mov    0xc(%ebp),%eax
0849106f +0x1d4d:  mov    %eax,0x4(%esp)
08491073 +0x1d51:  mov    %edx,(%esp)
08491076 +0x1d54:  call   08495188 <+0x5e66>
0849107b +0x1d59:  leave
0849107c +0x1d5a:  ret
0849107d +0x1d5b:  nop
0849107e +0x1d5c:  push   %ebp
0849107f +0x1d5d:  mov    %esp,%ebp
08491081 +0x1d5f:  sub    $0x18,%esp
08491084 +0x1d62:  mov    0x8(%ebp),%eax
08491087 +0x1d65:  movb   $0x0,0x38(%eax)
0849108b +0x1d69:  mov    0x8(%ebp),%eax
0849108e +0x1d6c:  movb   $0x0,0x39(%eax)
08491092 +0x1d70:  movl   $0x0,(%esp)
08491099 +0x1d77:  call   0807d750 <_init+0x48>
0849109e +0x1d7c:  mov    0x8(%ebp),%edx
084910a1 +0x1d7f:  mov    %eax,0x3c(%edx)
084910a4 +0x1d82:  leave
084910a5 +0x1d83:  ret
084910a6 +0x1d84:  push   %ebp
084910a7 +0x1d85:  mov    %esp,%ebp
084910a9 +0x1d87:  sub    $0x18,%esp
084910ac +0x1d8a:  mov    0x8(%ebp),%eax
084910af +0x1d8d:  add    $0xc,%eax
084910b2 +0x1d90:  movl   $0xa,0x4(%esp)
084910ba +0x1d98:  mov    %eax,(%esp)
084910bd +0x1d9b:  call   084952e0 <+0x5fbe>
084910c2 +0x1da0:  mov    $0x1,%eax
084910c7 +0x1da5:  leave
084910c8 +0x1da6:  ret
084910c9 +0x1da7:  nop
084910ca +0x1da8:  push   %ebp
084910cb +0x1da9:  mov    %esp,%ebp
084910cd +0x1dab:  sub    $0x28,%esp
084910d0 +0x1dae:  movl   $0x0,-0xc(%ebp)
084910d7 +0x1db5:  mov    0x8(%ebp),%eax
084910da +0x1db8:  lea    0x50(%eax),%edx
084910dd +0x1dbb:  lea    -0x10(%ebp),%eax
084910e0 +0x1dbe:  mov    %edx,0x4(%esp)
084910e4 +0x1dc2:  mov    %eax,(%esp)
084910e7 +0x1dc5:  call   084952fa <+0x5fd8>
084910ec +0x1dca:  sub    $0x4,%esp
084910ef +0x1dcd:  mov    0x8(%ebp),%eax
084910f2 +0x1dd0:  lea    0x50(%eax),%edx
084910f5 +0x1dd3:  lea    -0x14(%ebp),%eax
084910f8 +0x1dd6:  mov    %edx,0x4(%esp)
084910fc +0x1dda:  mov    %eax,(%esp)
084910ff +0x1ddd:  call   08495320 <+0x5ffe>
08491104 +0x1de2:  sub    $0x4,%esp
08491107 +0x1de5:  jmp    08491130 <+0x1e0e>
08491109 +0x1de7:  lea    -0x10(%ebp),%eax
0849110c +0x1dea:  mov    %eax,(%esp)
0849110f +0x1ded:  call   08495378 <+0x6056>
08491114 +0x1df2:  mov    0xc(%eax),%eax
08491117 +0x1df5:  cmp    0xc(%ebp),%eax
0849111a +0x1df8:  sete   %al
0849111d +0x1dfb:  test   %al,%al
0849111f +0x1dfd:  je     08491125 <+0x1e03>
08491121 +0x1dff:  addl   $0x1,-0xc(%ebp)
08491125 +0x1e03:  lea    -0x10(%ebp),%eax
08491128 +0x1e06:  mov    %eax,(%esp)
0849112b +0x1e09:  call   0849535a <+0x6038>
08491130 +0x1e0e:  lea    -0x14(%ebp),%eax
08491133 +0x1e11:  mov    %eax,0x4(%esp)
08491137 +0x1e15:  lea    -0x10(%ebp),%eax
0849113a +0x1e18:  mov    %eax,(%esp)
0849113d +0x1e1b:  call   08495346 <+0x6024>
08491142 +0x1e20:  test   %al,%al
08491144 +0x1e22:  jne    08491109 <+0x1de7>
08491146 +0x1e24:  mov    -0xc(%ebp),%eax
08491149 +0x1e27:  leave
0849114a +0x1e28:  ret
0849114b +0x1e29:  nop
0849114c +0x1e2a:  push   %ebp
0849114d +0x1e2b:  mov    %esp,%ebp
0849114f +0x1e2d:  sub    $0x28,%esp
08491152 +0x1e30:  movl   $0x0,0xc(%esp)
0849115a +0x1e38:  movl   $0xf6,0x8(%esp)
08491162 +0x1e40:  movl   $&_ZZN15exchange_server15CExchangeServer9SetMasterEvE19__PRETTY_FUNCTION__,0x4(%esp)
0849116a +0x1e48:  lea    -0x18(%ebp),%eax
0849116d +0x1e4b:  mov    %eax,(%esp)
08491170 +0x1e4e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08491175 +0x1e53:  movl   $"SetMaster()",0x4(%esp)
0849117d +0x1e5b:  lea    -0x18(%ebp),%eax
08491180 +0x1e5e:  mov    %eax,(%esp)
08491183 +0x1e61:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08491188 +0x1e66:  movl   $0x0,0x4(%esp)
08491190 +0x1e6e:  mov    0x8(%ebp),%eax
08491193 +0x1e71:  mov    %eax,(%esp)
08491196 +0x1e74:  call   0849103c <+0x1d1a>
0849119b +0x1e79:  mov    0x8(%ebp),%eax
0849119e +0x1e7c:  movb   $0x1,0x38(%eax)
084911a2 +0x1e80:  leave
084911a3 +0x1e81:  ret
084911a4 +0x1e82:  push   %ebp
084911a5 +0x1e83:  mov    %esp,%ebp
084911a7 +0x1e85:  sub    $0x28,%esp
084911aa +0x1e88:  movl   $0x0,0xc(%esp)
084911b2 +0x1e90:  movl   $0xfe,0x8(%esp)
084911ba +0x1e98:  movl   $&_ZZN15exchange_server15CExchangeServer8SetSlaveEvE19__PRETTY_FUNCTION__,0x4(%esp)
084911c2 +0x1ea0:  lea    -0x18(%ebp),%eax
084911c5 +0x1ea3:  mov    %eax,(%esp)
084911c8 +0x1ea6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084911cd +0x1eab:  movl   $"SetSlave()",0x4(%esp)
084911d5 +0x1eb3:  lea    -0x18(%ebp),%eax
084911d8 +0x1eb6:  mov    %eax,(%esp)
084911db +0x1eb9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084911e0 +0x1ebe:  movl   $0x1,0x4(%esp)
084911e8 +0x1ec6:  mov    0x8(%ebp),%eax
084911eb +0x1ec9:  mov    %eax,(%esp)
084911ee +0x1ecc:  call   0849103c <+0x1d1a>
084911f3 +0x1ed1:  mov    0x8(%ebp),%eax
084911f6 +0x1ed4:  movb   $0x0,0x38(%eax)
084911fa +0x1ed8:  leave
084911fb +0x1ed9:  ret
084911fc +0x1eda:  push   %ebp
084911fd +0x1edb:  mov    %esp,%ebp
084911ff +0x1edd:  sub    $0x28,%esp
08491202 +0x1ee0:  mov    0x8(%ebp),%eax
08491205 +0x1ee3:  lea    0x50(%eax),%ecx
08491208 +0x1ee6:  lea    -0x10(%ebp),%eax
0849120b +0x1ee9:  lea    0xc(%ebp),%edx
0849120e +0x1eec:  mov    %edx,0x8(%esp)
08491212 +0x1ef0:  mov    %ecx,0x4(%esp)
08491216 +0x1ef4:  mov    %eax,(%esp)
08491219 +0x1ef7:  call   08495386 <+0x6064>
0849121e +0x1efc:  sub    $0x4,%esp
08491221 +0x1eff:  mov    0x8(%ebp),%eax
08491224 +0x1f02:  lea    0x50(%eax),%edx
08491227 +0x1f05:  lea    -0xc(%ebp),%eax
0849122a +0x1f08:  mov    %edx,0x4(%esp)
0849122e +0x1f0c:  mov    %eax,(%esp)
08491231 +0x1f0f:  call   08495320 <+0x5ffe>
08491236 +0x1f14:  sub    $0x4,%esp
08491239 +0x1f17:  lea    -0xc(%ebp),%eax
0849123c +0x1f1a:  mov    %eax,0x4(%esp)
08491240 +0x1f1e:  lea    -0x10(%ebp),%eax
08491243 +0x1f21:  mov    %eax,(%esp)
08491246 +0x1f24:  call   08495346 <+0x6024>
0849124b +0x1f29:  test   %al,%al
0849124d +0x1f2b:  je     0849128f <+0x1f6d>
0849124f +0x1f2d:  lea    -0x10(%ebp),%eax
08491252 +0x1f30:  mov    %eax,(%esp)
08491255 +0x1f33:  call   08495378 <+0x6056>
0849125a +0x1f38:  mov    0x10(%eax),%eax
0849125d +0x1f3b:  test   %eax,%eax
0849125f +0x1f3d:  setne  %al
08491262 +0x1f40:  test   %al,%al
08491264 +0x1f42:  je     0849128f <+0x1f6d>
08491266 +0x1f44:  lea    -0x10(%ebp),%eax
08491269 +0x1f47:  mov    %eax,(%esp)
0849126c +0x1f4a:  call   08495378 <+0x6056>
08491271 +0x1f4f:  mov    0x10(%eax),%eax
08491274 +0x1f52:  mov    0x8(%ebp),%edx
08491277 +0x1f55:  lea    0xc(%edx),%ecx
0849127a +0x1f58:  mov    0x10(%ebp),%edx
0849127d +0x1f5b:  mov    %edx,0x8(%esp)
08491281 +0x1f5f:  mov    %eax,0x4(%esp)
08491285 +0x1f63:  mov    %ecx,(%esp)
08491288 +0x1f66:  call   084953b2 <+0x6090>
0849128d +0x1f6b:  jmp    08491294 <+0x1f72>
0849128f +0x1f6d:  mov    $0x0,%eax
08491294 +0x1f72:  leave
08491295 +0x1f73:  ret
08491296 +0x1f74:  push   %ebp
08491297 +0x1f75:  mov    %esp,%ebp
08491299 +0x1f77:  push   %ebx
0849129a +0x1f78:  sub    $0x34,%esp
0849129d +0x1f7b:  mov    0xc(%ebp),%eax
084912a0 +0x1f7e:  mov    %eax,0x4(%esp)
084912a4 +0x1f82:  mov    0x10(%ebp),%eax
084912a7 +0x1f85:  mov    %eax,(%esp)
084912aa +0x1f88:  call   0848ffbe <+0xc9c>
084912af +0x1f8d:  mov    0x8(%ebp),%eax
084912b2 +0x1f90:  lea    0x50(%eax),%ecx
084912b5 +0x1f93:  lea    -0x20(%ebp),%eax
084912b8 +0x1f96:  lea    0xc(%ebp),%edx
084912bb +0x1f99:  mov    %edx,0x8(%esp)
084912bf +0x1f9d:  mov    %ecx,0x4(%esp)
084912c3 +0x1fa1:  mov    %eax,(%esp)
084912c6 +0x1fa4:  call   08495386 <+0x6064>
084912cb +0x1fa9:  sub    $0x4,%esp
084912ce +0x1fac:  mov    0x8(%ebp),%eax
084912d1 +0x1faf:  lea    0x50(%eax),%edx
084912d4 +0x1fb2:  lea    -0x1c(%ebp),%eax
084912d7 +0x1fb5:  mov    %edx,0x4(%esp)
084912db +0x1fb9:  mov    %eax,(%esp)
084912de +0x1fbc:  call   08495320 <+0x5ffe>
084912e3 +0x1fc1:  sub    $0x4,%esp
084912e6 +0x1fc4:  lea    -0x1c(%ebp),%eax
084912e9 +0x1fc7:  mov    %eax,0x4(%esp)
084912ed +0x1fcb:  lea    -0x20(%ebp),%eax
084912f0 +0x1fce:  mov    %eax,(%esp)
084912f3 +0x1fd1:  call   08495346 <+0x6024>
084912f8 +0x1fd6:  test   %al,%al
084912fa +0x1fd8:  je     08491314 <+0x1ff2>
084912fc +0x1fda:  lea    -0x20(%ebp),%eax
084912ff +0x1fdd:  mov    %eax,(%esp)
08491302 +0x1fe0:  call   08495378 <+0x6056>
08491307 +0x1fe5:  mov    0x10(%ebp),%edx
0849130a +0x1fe8:  mov    %edx,0x10(%eax)
0849130d +0x1feb:  mov    $0x1,%eax
08491312 +0x1ff0:  jmp    08491356 <+0x2034>
08491314 +0x1ff2:  mov    0xc(%ebp),%ebx
08491317 +0x1ff5:  movl   $0x0,0xc(%esp)
0849131f +0x1ffd:  movl   $0x11b,0x8(%esp)
08491327 +0x2005:  movl   $&_ZZN15exchange_server15CExchangeServer29AttachSessionInExchangeServerEiPNS_8CSessionEE19__PRETTY_FUNCTION__,0x4(%esp)
0849132f +0x200d:  lea    -0x18(%ebp),%eax
08491332 +0x2010:  mov    %eax,(%esp)
08491335 +0x2013:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849133a +0x2018:  mov    %ebx,0x8(%esp)
0849133e +0x201c:  movl   $"AttachSessionInExchangeServer() channel_no(%d) failed",0x4(%esp)
08491346 +0x2024:  lea    -0x18(%ebp),%eax
08491349 +0x2027:  mov    %eax,(%esp)
0849134c +0x202a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08491351 +0x202f:  mov    $0x0,%eax
08491356 +0x2034:  mov    -0x4(%ebp),%ebx
08491359 +0x2037:  leave
0849135a +0x2038:  ret
0849135b +0x2039:  nop
0849135c +0x203a:  push   %ebp
0849135d +0x203b:  mov    %esp,%ebp
0849135f +0x203d:  push   %ebx
08491360 +0x203e:  sub    $0x64,%esp
08491363 +0x2041:  mov    0x8(%ebp),%eax
08491366 +0x2044:  lea    0x50(%eax),%ecx
08491369 +0x2047:  lea    -0x50(%ebp),%eax
0849136c +0x204a:  lea    0xc(%ebp),%edx
0849136f +0x204d:  mov    %edx,0x8(%esp)
08491373 +0x2051:  mov    %ecx,0x4(%esp)
08491377 +0x2055:  mov    %eax,(%esp)
0849137a +0x2058:  call   08495386 <+0x6064>
0849137f +0x205d:  sub    $0x4,%esp
08491382 +0x2060:  mov    0x8(%ebp),%eax
08491385 +0x2063:  lea    0x50(%eax),%edx
08491388 +0x2066:  lea    -0x4c(%ebp),%eax
0849138b +0x2069:  mov    %edx,0x4(%esp)
0849138f +0x206d:  mov    %eax,(%esp)
08491392 +0x2070:  call   08495320 <+0x5ffe>
08491397 +0x2075:  sub    $0x4,%esp
0849139a +0x2078:  lea    -0x4c(%ebp),%eax
0849139d +0x207b:  mov    %eax,0x4(%esp)
084913a1 +0x207f:  lea    -0x50(%ebp),%eax
084913a4 +0x2082:  mov    %eax,(%esp)
084913a7 +0x2085:  call   08495404 <+0x60e2>
084913ac +0x208a:  test   %al,%al
084913ae +0x208c:  je     08491404 <+0x20e2>
084913b0 +0x208e:  lea    -0x2c(%ebp),%eax
084913b3 +0x2091:  mov    0x10(%ebp),%edx
084913b6 +0x2094:  mov    %edx,0x8(%esp)
084913ba +0x2098:  lea    0xc(%ebp),%edx
084913bd +0x209b:  mov    %edx,0x4(%esp)
084913c1 +0x209f:  mov    %eax,(%esp)
084913c4 +0x20a2:  call   08495418 <+0x60f6>
084913c9 +0x20a7:  sub    $0x4,%esp
084913cc +0x20aa:  lea    -0x2c(%ebp),%eax
084913cf +0x20ad:  mov    %eax,0x4(%esp)
084913d3 +0x20b1:  lea    -0x40(%ebp),%eax
084913d6 +0x20b4:  mov    %eax,(%esp)
084913d9 +0x20b7:  call   08495456 <+0x6134>
084913de +0x20bc:  mov    0x8(%ebp),%eax
084913e1 +0x20bf:  lea    0x50(%eax),%ecx
084913e4 +0x20c2:  lea    -0x48(%ebp),%eax
084913e7 +0x20c5:  lea    -0x40(%ebp),%edx
084913ea +0x20c8:  mov    %edx,0x8(%esp)
084913ee +0x20cc:  mov    %ecx,0x4(%esp)
084913f2 +0x20d0:  mov    %eax,(%esp)
084913f5 +0x20d3:  call   08495498 <+0x6176>
084913fa +0x20d8:  sub    $0x4,%esp
084913fd +0x20db:  mov    $0x1,%eax
08491402 +0x20e0:  jmp    08491446 <+0x2124>
08491404 +0x20e2:  mov    0xc(%ebp),%ebx
08491407 +0x20e5:  movl   $0x0,0xc(%esp)
0849140f +0x20ed:  movl   $0x128,0x8(%esp)
08491417 +0x20f5:  movl   $&_ZZN15exchange_server15CExchangeServer22RegisterExchangeServerEiRNS_18ExchangeServerInfoEE19__PRETTY_FUNCTION__,0x4(%esp)
0849141f +0x20fd:  lea    -0x18(%ebp),%eax
08491422 +0x2100:  mov    %eax,(%esp)
08491425 +0x2103:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849142a +0x2108:  mov    %ebx,0x8(%esp)
0849142e +0x210c:  movl   $"RegisterExchangeServer() channel_no(%d) failed",0x4(%esp)
08491436 +0x2114:  lea    -0x18(%ebp),%eax
08491439 +0x2117:  mov    %eax,(%esp)
0849143c +0x211a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08491441 +0x211f:  mov    $0x0,%eax
08491446 +0x2124:  mov    -0x4(%ebp),%ebx
08491449 +0x2127:  leave
0849144a +0x2128:  ret
0849144b +0x2129:  nop
0849144c +0x212a:  push   %ebp
0849144d +0x212b:  mov    %esp,%ebp
0849144f +0x212d:  push   %ebx
08491450 +0x212e:  sub    $0x34,%esp
08491453 +0x2131:  mov    0x8(%ebp),%eax
08491456 +0x2134:  lea    0x50(%eax),%ecx
08491459 +0x2137:  lea    -0x20(%ebp),%eax
0849145c +0x213a:  lea    0xc(%ebp),%edx
0849145f +0x213d:  mov    %edx,0x8(%esp)
08491463 +0x2141:  mov    %ecx,0x4(%esp)
08491467 +0x2145:  mov    %eax,(%esp)
0849146a +0x2148:  call   08495386 <+0x6064>
0849146f +0x214d:  sub    $0x4,%esp
08491472 +0x2150:  mov    0x8(%ebp),%eax
08491475 +0x2153:  lea    0x50(%eax),%edx
08491478 +0x2156:  lea    -0x1c(%ebp),%eax
0849147b +0x2159:  mov    %edx,0x4(%esp)
0849147f +0x215d:  mov    %eax,(%esp)
08491482 +0x2160:  call   08495320 <+0x5ffe>
08491487 +0x2165:  sub    $0x4,%esp
0849148a +0x2168:  lea    -0x1c(%ebp),%eax
0849148d +0x216b:  mov    %eax,0x4(%esp)
08491491 +0x216f:  lea    -0x20(%ebp),%eax
08491494 +0x2172:  mov    %eax,(%esp)
08491497 +0x2175:  call   08495346 <+0x6024>
0849149c +0x217a:  test   %al,%al
0849149e +0x217c:  je     084914e3 <+0x21c1>
084914a0 +0x217e:  mov    0x8(%ebp),%eax
084914a3 +0x2181:  lea    0x50(%eax),%edx
084914a6 +0x2184:  mov    -0x20(%ebp),%eax
084914a9 +0x2187:  mov    %eax,0x4(%esp)
084914ad +0x218b:  mov    %edx,(%esp)
084914b0 +0x218e:  call   084954c4 <+0x61a2>
084914b5 +0x2193:  movl   $0x1,0x4(%esp)
084914bd +0x219b:  mov    0x8(%ebp),%eax
084914c0 +0x219e:  mov    %eax,(%esp)
084914c3 +0x21a1:  call   084910ca <+0x1da8>
084914c8 +0x21a6:  test   %eax,%eax
084914ca +0x21a8:  sete   %al
084914cd +0x21ab:  test   %al,%al
084914cf +0x21ad:  je     084914dc <+0x21ba>
084914d1 +0x21af:  mov    0x8(%ebp),%eax
084914d4 +0x21b2:  mov    %eax,(%esp)
084914d7 +0x21b5:  call   0849114c <+0x1e2a>
084914dc +0x21ba:  mov    $0x1,%eax
084914e1 +0x21bf:  jmp    08491525 <+0x2203>
084914e3 +0x21c1:  mov    0xc(%ebp),%ebx
084914e6 +0x21c4:  movl   $0x0,0xc(%esp)
084914ee +0x21cc:  movl   $0x13b,0x8(%esp)
084914f6 +0x21d4:  movl   $&_ZZN15exchange_server15CExchangeServer24UnregisterExchangeServerEiE19__PRETTY_FUNCTION__,0x4(%esp)
084914fe +0x21dc:  lea    -0x18(%ebp),%eax
08491501 +0x21df:  mov    %eax,(%esp)
08491504 +0x21e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08491509 +0x21e7:  mov    %ebx,0x8(%esp)
0849150d +0x21eb:  movl   $"UnregisterExchangeServer() channel_no(%d) failed",0x4(%esp)
08491515 +0x21f3:  lea    -0x18(%ebp),%eax
08491518 +0x21f6:  mov    %eax,(%esp)
0849151b +0x21f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08491520 +0x21fe:  mov    $0x0,%eax
08491525 +0x2203:  mov    -0x4(%ebp),%ebx
08491528 +0x2206:  leave
08491529 +0x2207:  ret
0849152a +0x2208:  push   %ebp
0849152b +0x2209:  mov    %esp,%ebp
0849152d +0x220b:  push   %esi
0849152e +0x220c:  push   %ebx
0849152f +0x220d:  sub    $0x20,%esp
08491532 +0x2210:  lea    -0x14(%ebp),%eax
08491535 +0x2213:  mov    %eax,(%esp)
08491538 +0x2216:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849153d +0x221b:  lea    -0x14(%ebp),%eax
08491540 +0x221e:  mov    %eax,(%esp)
08491543 +0x2221:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08491548 +0x2226:  movl   $0x84,0x8(%esp)
08491550 +0x222e:  movl   $0x1,0x4(%esp)
08491558 +0x2236:  lea    -0x14(%ebp),%eax
0849155b +0x2239:  mov    %eax,(%esp)
0849155e +0x223c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08491563 +0x2241:  mov    0xc(%ebp),%eax
08491566 +0x2244:  mov    %eax,0x4(%esp)
0849156a +0x2248:  lea    -0x14(%ebp),%eax
0849156d +0x224b:  mov    %eax,(%esp)
08491570 +0x224e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08491575 +0x2253:  mov    0x10(%ebp),%eax
08491578 +0x2256:  mov    %eax,0x4(%esp)
0849157c +0x225a:  lea    -0x14(%ebp),%eax
0849157f +0x225d:  mov    %eax,(%esp)
08491582 +0x2260:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08491587 +0x2265:  mov    0x14(%ebp),%eax
0849158a +0x2268:  mov    %eax,0x4(%esp)
0849158e +0x226c:  lea    -0x14(%ebp),%eax
08491591 +0x226f:  mov    %eax,(%esp)
08491594 +0x2272:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08491599 +0x2277:  mov    0x18(%ebp),%eax
0849159c +0x227a:  mov    %eax,0x4(%esp)
084915a0 +0x227e:  lea    -0x14(%ebp),%eax
084915a3 +0x2281:  mov    %eax,(%esp)
084915a6 +0x2284:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084915ab +0x2289:  mov    0x20(%ebp),%eax
084915ae +0x228c:  mov    %eax,0x4(%esp)
084915b2 +0x2290:  lea    -0x14(%ebp),%eax
084915b5 +0x2293:  mov    %eax,(%esp)
084915b8 +0x2296:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084915bd +0x229b:  mov    0x1c(%ebp),%eax
084915c0 +0x229e:  mov    0x20(%ebp),%edx
084915c3 +0x22a1:  mov    %edx,0x8(%esp)
084915c7 +0x22a5:  mov    %eax,0x4(%esp)
084915cb +0x22a9:  lea    -0x14(%ebp),%eax
084915ce +0x22ac:  mov    %eax,(%esp)
084915d1 +0x22af:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084915d6 +0x22b4:  movl   $0x0,0x4(%esp)
084915de +0x22bc:  lea    -0x14(%ebp),%eax
084915e1 +0x22bf:  mov    %eax,(%esp)
084915e4 +0x22c2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084915e9 +0x22c7:  lea    -0x14(%ebp),%eax
084915ec +0x22ca:  mov    %eax,0x8(%esp)
084915f0 +0x22ce:  mov    0x14(%ebp),%eax
084915f3 +0x22d1:  mov    %eax,0x4(%esp)
084915f7 +0x22d5:  mov    0x8(%ebp),%eax
084915fa +0x22d8:  mov    %eax,(%esp)
084915fd +0x22db:  call   084911fc <+0x1eda>
08491602 +0x22e0:  test   %al,%al
08491604 +0x22e2:  je     0849160d <+0x22eb>
08491606 +0x22e4:  mov    $0x1,%ebx
0849160b +0x22e9:  jmp    0849162f <+0x230d>
0849160d +0x22eb:  mov    $0x0,%ebx
08491612 +0x22f0:  jmp    0849162f <+0x230d>
08491614 +0x22f2:  mov    %edx,%ebx
08491616 +0x22f4:  mov    %eax,%esi
08491618 +0x22f6:  lea    -0x14(%ebp),%eax
0849161b +0x22f9:  mov    %eax,(%esp)
0849161e +0x22fc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08491623 +0x2301:  mov    %esi,%eax
08491625 +0x2303:  mov    %ebx,%edx
08491627 +0x2305:  mov    %eax,(%esp)
0849162a +0x2308:  call   08ae3750 <_Unwind_Resume>
0849162f +0x230d:  lea    -0x14(%ebp),%eax
08491632 +0x2310:  mov    %eax,(%esp)
08491635 +0x2313:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849163a +0x2318:  mov    %ebx,%eax
0849163c +0x231a:  add    $0x20,%esp
0849163f +0x231d:  pop    %ebx
08491640 +0x231e:  pop    %esi
08491641 +0x231f:  pop    %ebp
08491642 +0x2320:  ret
08491643 +0x2321:  nop
08491644 +0x2322:  push   %ebp
08491645 +0x2323:  mov    %esp,%ebp
08491647 +0x2325:  push   %esi
08491648 +0x2326:  push   %ebx
08491649 +0x2327:  sub    $0x20,%esp
0849164c +0x232a:  lea    -0x14(%ebp),%eax
0849164f +0x232d:  mov    %eax,(%esp)
08491652 +0x2330:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08491657 +0x2335:  lea    -0x14(%ebp),%eax
0849165a +0x2338:  mov    %eax,(%esp)
0849165d +0x233b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08491662 +0x2340:  movl   $0x85,0x8(%esp)
0849166a +0x2348:  movl   $0x1,0x4(%esp)
08491672 +0x2350:  lea    -0x14(%ebp),%eax
08491675 +0x2353:  mov    %eax,(%esp)
08491678 +0x2356:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849167d +0x235b:  mov    0x20(%ebp),%eax
08491680 +0x235e:  mov    %eax,0x4(%esp)
08491684 +0x2362:  lea    -0x14(%ebp),%eax
08491687 +0x2365:  mov    %eax,(%esp)
0849168a +0x2368:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849168f +0x236d:  mov    0xc(%ebp),%eax
08491692 +0x2370:  mov    %eax,0x4(%esp)
08491696 +0x2374:  lea    -0x14(%ebp),%eax
08491699 +0x2377:  mov    %eax,(%esp)
0849169c +0x237a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084916a1 +0x237f:  mov    0x10(%ebp),%eax
084916a4 +0x2382:  mov    %eax,0x4(%esp)
084916a8 +0x2386:  lea    -0x14(%ebp),%eax
084916ab +0x2389:  mov    %eax,(%esp)
084916ae +0x238c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084916b3 +0x2391:  mov    0x18(%ebp),%eax
084916b6 +0x2394:  mov    %eax,0x4(%esp)
084916ba +0x2398:  lea    -0x14(%ebp),%eax
084916bd +0x239b:  mov    %eax,(%esp)
084916c0 +0x239e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084916c5 +0x23a3:  mov    0x14(%ebp),%eax
084916c8 +0x23a6:  mov    0x18(%ebp),%edx
084916cb +0x23a9:  mov    %edx,0x8(%esp)
084916cf +0x23ad:  mov    %eax,0x4(%esp)
084916d3 +0x23b1:  lea    -0x14(%ebp),%eax
084916d6 +0x23b4:  mov    %eax,(%esp)
084916d9 +0x23b7:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084916de +0x23bc:  movl   $0x0,0x4(%esp)
084916e6 +0x23c4:  lea    -0x14(%ebp),%eax
084916e9 +0x23c7:  mov    %eax,(%esp)
084916ec +0x23ca:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084916f1 +0x23cf:  mov    0x8(%ebp),%eax
084916f4 +0x23d2:  lea    0xc(%eax),%edx
084916f7 +0x23d5:  lea    -0x14(%ebp),%eax
084916fa +0x23d8:  mov    %eax,0x8(%esp)
084916fe +0x23dc:  mov    0x1c(%ebp),%eax
08491701 +0x23df:  mov    %eax,0x4(%esp)
08491705 +0x23e3:  mov    %edx,(%esp)
08491708 +0x23e6:  call   084953b2 <+0x6090>
0849170d +0x23eb:  mov    %eax,%ebx
0849170f +0x23ed:  lea    -0x14(%ebp),%eax
08491712 +0x23f0:  mov    %eax,(%esp)
08491715 +0x23f3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849171a +0x23f8:  mov    %ebx,%eax
0849171c +0x23fa:  add    $0x20,%esp
0849171f +0x23fd:  pop    %ebx
08491720 +0x23fe:  pop    %esi
08491721 +0x23ff:  pop    %ebp
08491722 +0x2400:  ret
08491723 +0x2401:  mov    %edx,%ebx
08491725 +0x2403:  mov    %eax,%esi
08491727 +0x2405:  lea    -0x14(%ebp),%eax
0849172a +0x2408:  mov    %eax,(%esp)
0849172d +0x240b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08491732 +0x2410:  mov    %esi,%eax
08491734 +0x2412:  mov    %ebx,%edx
08491736 +0x2414:  mov    %eax,(%esp)
08491739 +0x2417:  call   08ae3750 <_Unwind_Resume>
0849173e +0x241c:  push   %ebp
0849173f +0x241d:  mov    %esp,%ebp
08491741 +0x241f:  sub    $0x38,%esp
08491744 +0x2422:  mov    0x18(%ebp),%eax
08491747 +0x2425:  mov    %eax,0x10(%esp)
0849174b +0x2429:  mov    0x14(%ebp),%eax
0849174e +0x242c:  mov    %eax,0xc(%esp)
08491752 +0x2430:  mov    0x10(%ebp),%eax
08491755 +0x2433:  mov    %eax,0x8(%esp)
08491759 +0x2437:  mov    0xc(%ebp),%eax
0849175c +0x243a:  mov    %eax,0x4(%esp)
08491760 +0x243e:  mov    0x8(%ebp),%eax
08491763 +0x2441:  mov    %eax,(%esp)
08491766 +0x2444:  call   0849176e <+0x244c>
0849176b +0x2449:  leave
0849176c +0x244a:  ret
0849176d +0x244b:  nop
0849176e +0x244c:  push   %ebp
0849176f +0x244d:  mov    %esp,%ebp
08491771 +0x244f:  push   %esi
08491772 +0x2450:  push   %ebx
08491773 +0x2451:  sub    $0x20,%esp
08491776 +0x2454:  movl   $0x1,0x4(%esp)
0849177e +0x245c:  lea    -0x14(%ebp),%eax
08491781 +0x245f:  mov    %eax,(%esp)
08491784 +0x2462:  call   080de62c <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x1c>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x1c
08491789 +0x2467:  mov    0x18(%ebp),%eax
0849178c +0x246a:  add    $0x8,%eax
0849178f +0x246d:  mov    %eax,-0xc(%ebp)
08491792 +0x2470:  cmpl   $0xfff,-0xc(%ebp)
08491799 +0x2477:  jg     084917c9 <+0x24a7>
0849179b +0x2479:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
084917a0 +0x247e:  movl   $0x17a,0x8(%esp)
084917a8 +0x2486:  movl   $"ExchangeServer.cpp",0x4(%esp)
084917b0 +0x248e:  mov    %eax,(%esp)
084917b3 +0x2491:  call   0828ff74 <_ZN15SmallStreamPool7AcquireEPKci>  ; SmallStreamPool::Acquire(char const*, int)
084917b8 +0x2496:  mov    %eax,0x4(%esp)
084917bc +0x249a:  lea    -0x14(%ebp),%eax
084917bf +0x249d:  mov    %eax,(%esp)
084917c2 +0x24a0:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
084917c7 +0x24a5:  jmp    08491835 <+0x2513>
084917c9 +0x24a7:  cmpl   $0xfff,-0xc(%ebp)
084917d0 +0x24ae:  jle    08491809 <+0x24e7>
084917d2 +0x24b0:  cmpl   $0x3fff,-0xc(%ebp)
084917d9 +0x24b7:  jg     08491809 <+0x24e7>
084917db +0x24b9:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084917e0 +0x24be:  movl   $0x17e,0x8(%esp)
084917e8 +0x24c6:  movl   $"ExchangeServer.cpp",0x4(%esp)
084917f0 +0x24ce:  mov    %eax,(%esp)
084917f3 +0x24d1:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084917f8 +0x24d6:  mov    %eax,0x4(%esp)
084917fc +0x24da:  lea    -0x14(%ebp),%eax
084917ff +0x24dd:  mov    %eax,(%esp)
08491802 +0x24e0:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08491807 +0x24e5:  jmp    08491835 <+0x2513>
08491809 +0x24e7:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0849180e +0x24ec:  movl   $0x182,0x8(%esp)
08491816 +0x24f4:  movl   $"ExchangeServer.cpp",0x4(%esp)
0849181e +0x24fc:  mov    %eax,(%esp)
08491821 +0x24ff:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
08491826 +0x2504:  mov    %eax,0x4(%esp)
0849182a +0x2508:  lea    -0x14(%ebp),%eax
0849182d +0x250b:  mov    %eax,(%esp)
08491830 +0x250e:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08491835 +0x2513:  lea    -0x14(%ebp),%eax
08491838 +0x2516:  mov    %eax,(%esp)
0849183b +0x2519:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08491840 +0x251e:  mov    0xc(%ebp),%edx
08491843 +0x2521:  mov    %edx,0x4(%esp)
08491847 +0x2525:  mov    %eax,(%esp)
0849184a +0x2528:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0849184f +0x252d:  lea    -0x14(%ebp),%eax
08491852 +0x2530:  mov    %eax,(%esp)
08491855 +0x2533:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0849185a +0x2538:  mov    0x10(%ebp),%edx
0849185d +0x253b:  mov    %edx,0x4(%esp)
08491861 +0x253f:  mov    %eax,(%esp)
08491864 +0x2542:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08491869 +0x2547:  lea    -0x14(%ebp),%eax
0849186c +0x254a:  mov    %eax,(%esp)
0849186f +0x254d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08491874 +0x2552:  mov    0x18(%ebp),%edx
08491877 +0x2555:  mov    %edx,0x8(%esp)
0849187b +0x2559:  mov    0x14(%ebp),%edx
0849187e +0x255c:  mov    %edx,0x4(%esp)
08491882 +0x2560:  mov    %eax,(%esp)
08491885 +0x2563:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0849188a +0x2568:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0849188f +0x256d:  lea    -0x14(%ebp),%edx
08491892 +0x2570:  mov    %edx,0x8(%esp)
08491896 +0x2574:  movl   $0x1,0x4(%esp)
0849189e +0x257c:  mov    %eax,(%esp)
084918a1 +0x257f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084918a6 +0x2584:  mov    %eax,%ebx
084918a8 +0x2586:  lea    -0x14(%ebp),%eax
084918ab +0x2589:  mov    %eax,(%esp)
084918ae +0x258c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084918b3 +0x2591:  mov    %ebx,%eax
084918b5 +0x2593:  add    $0x20,%esp
084918b8 +0x2596:  pop    %ebx
084918b9 +0x2597:  pop    %esi
084918ba +0x2598:  pop    %ebp
084918bb +0x2599:  ret
084918bc +0x259a:  mov    %edx,%ebx
084918be +0x259c:  mov    %eax,%esi
084918c0 +0x259e:  lea    -0x14(%ebp),%eax
084918c3 +0x25a1:  mov    %eax,(%esp)
084918c6 +0x25a4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084918cb +0x25a9:  mov    %esi,%eax
084918cd +0x25ab:  mov    %ebx,%edx
084918cf +0x25ad:  mov    %eax,(%esp)
084918d2 +0x25b0:  call   08ae3750 <_Unwind_Resume>
084918d7 +0x25b5:  nop
084918d8 +0x25b6:  push   %ebp
084918d9 +0x25b7:  mov    %esp,%ebp
084918db +0x25b9:  push   %ebx
084918dc +0x25ba:  sub    $0x74,%esp
084918df +0x25bd:  mov    0x1c(%ebp),%eax
084918e2 +0x25c0:  mov    %al,-0x4c(%ebp)
084918e5 +0x25c3:  movb   $0x0,-0xd(%ebp)
084918e9 +0x25c7:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
084918ee +0x25cc:  cmp    0x14(%ebp),%eax
084918f1 +0x25cf:  sete   %al
084918f4 +0x25d2:  test   %al,%al
084918f6 +0x25d4:  je     08491aac <+0x278a>
084918fc +0x25da:  movl   $0x0,-0x34(%ebp)
08491903 +0x25e1:  movzbl -0x4c(%ebp),%ebx
08491907 +0x25e5:  call   08490f71 <+0x1c4f>
0849190c +0x25ea:  mov    %ebx,0xc(%esp)
08491910 +0x25ee:  lea    -0x34(%ebp),%edx
08491913 +0x25f1:  mov    %edx,0x8(%esp)
08491917 +0x25f5:  mov    0x18(%ebp),%edx
0849191a +0x25f8:  mov    %edx,0x4(%esp)
0849191e +0x25fc:  mov    %eax,(%esp)
08491921 +0x25ff:  call   08490cee <+0x19cc>
08491926 +0x2604:  test   %al,%al
08491928 +0x2606:  je     08491a5a <+0x2738>
0849192e +0x260c:  movl   $0x0,-0xc(%ebp)
08491935 +0x2613:  movl   $0x0,-0x38(%ebp)
0849193c +0x261a:  movb   $0x0,-0x39(%ebp)
08491940 +0x261e:  mov    0xc(%ebp),%edx
08491943 +0x2621:  mov    -0x34(%ebp),%eax
08491946 +0x2624:  lea    -0x39(%ebp),%ecx
08491949 +0x2627:  mov    %ecx,0xc(%esp)
0849194d +0x262b:  lea    -0x38(%ebp),%ecx
08491950 +0x262e:  mov    %ecx,0x8(%esp)
08491954 +0x2632:  mov    %edx,0x4(%esp)
08491958 +0x2636:  mov    %eax,(%esp)
0849195b +0x2639:  call   0848fd7c <+0xa5a>
08491960 +0x263e:  mov    %eax,-0xc(%ebp)
08491963 +0x2641:  cmpl   $0x0,-0xc(%ebp)
08491967 +0x2645:  je     08491978 <+0x2656>
08491969 +0x2647:  movzbl -0x39(%ebp),%eax
0849196d +0x264b:  test   %al,%al
0849196f +0x264d:  je     08491978 <+0x2656>
08491971 +0x264f:  mov    $0x1,%eax
08491976 +0x2654:  jmp    0849197d <+0x265b>
08491978 +0x2656:  mov    $0x0,%eax
0849197d +0x265b:  test   %al,%al
0849197f +0x265d:  je     084919ec <+0x26ca>
08491981 +0x265f:  cmpl   $0x0,0x20(%ebp)
08491985 +0x2663:  je     084919bf <+0x269d>
08491987 +0x2665:  mov    -0x38(%ebp),%eax
0849198a +0x2668:  movl   $0x0,0x18(%esp)
08491992 +0x2670:  mov    0x20(%ebp),%edx
08491995 +0x2673:  mov    %edx,0x14(%esp)
08491999 +0x2677:  mov    %eax,0x10(%esp)
0849199d +0x267b:  mov    -0xc(%ebp),%eax
084919a0 +0x267e:  mov    %eax,0xc(%esp)
084919a4 +0x2682:  mov    0x10(%ebp),%eax
084919a7 +0x2685:  mov    %eax,0x8(%esp)
084919ab +0x2689:  mov    0xc(%ebp),%eax
084919ae +0x268c:  mov    %eax,0x4(%esp)
084919b2 +0x2690:  mov    0x8(%ebp),%eax
084919b5 +0x2693:  mov    %eax,(%esp)
084919b8 +0x2696:  call   08491644 <+0x2322>
084919bd +0x269b:  jmp    084919e6 <+0x26c4>
084919bf +0x269d:  mov    -0x38(%ebp),%eax
084919c2 +0x26a0:  mov    %eax,0x10(%esp)
084919c6 +0x26a4:  mov    -0xc(%ebp),%eax
084919c9 +0x26a7:  mov    %eax,0xc(%esp)
084919cd +0x26ab:  mov    0x10(%ebp),%eax
084919d0 +0x26ae:  mov    %eax,0x8(%esp)
084919d4 +0x26b2:  mov    0xc(%ebp),%eax
084919d7 +0x26b5:  mov    %eax,0x4(%esp)
084919db +0x26b9:  mov    0x8(%ebp),%eax
084919de +0x26bc:  mov    %eax,(%esp)
084919e1 +0x26bf:  call   0849173e <+0x241c>
084919e6 +0x26c4:  movb   $0x1,-0xd(%ebp)
084919ea +0x26c8:  jmp    08491a3e <+0x271c>
084919ec +0x26ca:  movl   $0x0,0xc(%esp)
084919f4 +0x26d2:  movl   $0x1bf,0x8(%esp)
084919fc +0x26da:  movl   $&_ZZN15exchange_server15CExchangeServer20ReturnCacheCharacterEiiiibPNS_8CSessionEE19__PRETTY_FUNCTION__,0x4(%esp)
08491a04 +0x26e2:  lea    -0x30(%ebp),%eax
08491a07 +0x26e5:  mov    %eax,(%esp)
08491a0a +0x26e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08491a0f +0x26ed:  mov    0x18(%ebp),%eax
08491a12 +0x26f0:  mov    %eax,0x14(%esp)
08491a16 +0x26f4:  mov    0x14(%ebp),%eax
08491a19 +0x26f7:  mov    %eax,0x10(%esp)
08491a1d +0x26fb:  mov    0x10(%ebp),%eax
08491a20 +0x26fe:  mov    %eax,0xc(%esp)
08491a24 +0x2702:  mov    0xc(%ebp),%eax
08491a27 +0x2705:  mov    %eax,0x8(%esp)
08491a2b +0x2709:  movl   $"GetMemberPosition() invalid information  type(%d), idx(%d), channel_no(%d), charac_no(%d)",0x4(%esp)
08491a33 +0x2711:  lea    -0x30(%ebp),%eax
08491a36 +0x2714:  mov    %eax,(%esp)
08491a39 +0x2717:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08491a3e +0x271c:  cmpb   $0x0,-0x4c(%ebp)
08491a42 +0x2720:  je     08491aac <+0x278a>
08491a44 +0x2722:  mov    -0x34(%ebp),%ebx
08491a47 +0x2725:  call   08490f71 <+0x1c4f>
08491a4c +0x272a:  mov    %ebx,0x4(%esp)
08491a50 +0x272e:  mov    %eax,(%esp)
08491a53 +0x2731:  call   08490bf4 <+0x18d2>
08491a58 +0x2736:  jmp    08491aac <+0x278a>
08491a5a +0x2738:  movl   $0x0,0xc(%esp)
08491a62 +0x2740:  movl   $0x1d6,0x8(%esp)
08491a6a +0x2748:  movl   $&_ZZN15exchange_server15CExchangeServer20ReturnCacheCharacterEiiiibPNS_8CSessionEE19__PRETTY_FUNCTION__,0x4(%esp)
08491a72 +0x2750:  lea    -0x20(%ebp),%eax
08491a75 +0x2753:  mov    %eax,(%esp)
08491a78 +0x2756:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08491a7d +0x275b:  mov    0x18(%ebp),%eax
08491a80 +0x275e:  mov    %eax,0x14(%esp)
08491a84 +0x2762:  mov    0x14(%ebp),%eax
08491a87 +0x2765:  mov    %eax,0x10(%esp)
08491a8b +0x2769:  mov    0x10(%ebp),%eax
08491a8e +0x276c:  mov    %eax,0xc(%esp)
08491a92 +0x2770:  mov    0xc(%ebp),%eax
08491a95 +0x2773:  mov    %eax,0x8(%esp)
08491a99 +0x2777:  movl   $"GetCacheCharacter() false  type(%d), idx(%d), channel_no(%d), charac_no(%d)",0x4(%esp)
08491aa1 +0x277f:  lea    -0x20(%ebp),%eax
08491aa4 +0x2782:  mov    %eax,(%esp)
08491aa7 +0x2785:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08491aac +0x278a:  movzbl -0xd(%ebp),%eax
08491ab0 +0x278e:  add    $0x74,%esp
08491ab3 +0x2791:  pop    %ebx
08491ab4 +0x2792:  pop    %ebp
08491ab5 +0x2793:  ret
08491ab6 +0x2794:  push   %ebp
08491ab7 +0x2795:  mov    %esp,%ebp
08491ab9 +0x2797:  push   %esi
08491aba +0x2798:  push   %ebx
08491abb +0x2799:  sub    $0x20,%esp
08491abe +0x279c:  cmpl   $0x20,0xc(%ebp)
08491ac2 +0x27a0:  jne    08491ad1 <+0x27af>
08491ac4 +0x27a2:  call   0823470f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9db9>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9db9
08491ac9 +0x27a7:  mov    %eax,(%esp)
08491acc +0x27aa:  call   0848f35e <+0x3c>
08491ad1 +0x27af:  movl   $0x1,0x4(%esp)
08491ad9 +0x27b7:  lea    -0x14(%ebp),%eax
08491adc +0x27ba:  mov    %eax,(%esp)
08491adf +0x27bd:  call   080de62c <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x1c>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x1c
08491ae4 +0x27c2:  mov    0x18(%ebp),%eax
08491ae7 +0x27c5:  add    $0x8,%eax
08491aea +0x27c8:  mov    %eax,-0xc(%ebp)
08491aed +0x27cb:  cmpl   $0xfff,-0xc(%ebp)
08491af4 +0x27d2:  jg     08491b24 <+0x2802>
08491af6 +0x27d4:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
08491afb +0x27d9:  movl   $0x1ec,0x8(%esp)
08491b03 +0x27e1:  movl   $"ExchangeServer.cpp",0x4(%esp)
08491b0b +0x27e9:  mov    %eax,(%esp)
08491b0e +0x27ec:  call   0828ff74 <_ZN15SmallStreamPool7AcquireEPKci>  ; SmallStreamPool::Acquire(char const*, int)
08491b13 +0x27f1:  mov    %eax,0x4(%esp)
08491b17 +0x27f5:  lea    -0x14(%ebp),%eax
08491b1a +0x27f8:  mov    %eax,(%esp)
08491b1d +0x27fb:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08491b22 +0x2800:  jmp    08491b90 <+0x286e>
08491b24 +0x2802:  cmpl   $0xfff,-0xc(%ebp)
08491b2b +0x2809:  jle    08491b64 <+0x2842>
08491b2d +0x280b:  cmpl   $0x3fff,-0xc(%ebp)
08491b34 +0x2812:  jg     08491b64 <+0x2842>
08491b36 +0x2814:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08491b3b +0x2819:  movl   $0x1f0,0x8(%esp)
08491b43 +0x2821:  movl   $"ExchangeServer.cpp",0x4(%esp)
08491b4b +0x2829:  mov    %eax,(%esp)
08491b4e +0x282c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08491b53 +0x2831:  mov    %eax,0x4(%esp)
08491b57 +0x2835:  lea    -0x14(%ebp),%eax
08491b5a +0x2838:  mov    %eax,(%esp)
08491b5d +0x283b:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08491b62 +0x2840:  jmp    08491b90 <+0x286e>
08491b64 +0x2842:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08491b69 +0x2847:  movl   $0x1f4,0x8(%esp)
08491b71 +0x284f:  movl   $"ExchangeServer.cpp",0x4(%esp)
08491b79 +0x2857:  mov    %eax,(%esp)
08491b7c +0x285a:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
08491b81 +0x285f:  mov    %eax,0x4(%esp)
08491b85 +0x2863:  lea    -0x14(%ebp),%eax
08491b88 +0x2866:  mov    %eax,(%esp)
08491b8b +0x2869:  call   080de644 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x34>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x34
08491b90 +0x286e:  lea    -0x14(%ebp),%eax
08491b93 +0x2871:  mov    %eax,(%esp)
08491b96 +0x2874:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08491b9b +0x2879:  mov    0xc(%ebp),%edx
08491b9e +0x287c:  mov    %edx,0x4(%esp)
08491ba2 +0x2880:  mov    %eax,(%esp)
08491ba5 +0x2883:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08491baa +0x2888:  lea    -0x14(%ebp),%eax
08491bad +0x288b:  mov    %eax,(%esp)
08491bb0 +0x288e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08491bb5 +0x2893:  mov    0x10(%ebp),%edx
08491bb8 +0x2896:  mov    %edx,0x4(%esp)
08491bbc +0x289a:  mov    %eax,(%esp)
08491bbf +0x289d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08491bc4 +0x28a2:  lea    -0x14(%ebp),%eax
08491bc7 +0x28a5:  mov    %eax,(%esp)
08491bca +0x28a8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08491bcf +0x28ad:  mov    0x18(%ebp),%edx
08491bd2 +0x28b0:  mov    %edx,0x8(%esp)
08491bd6 +0x28b4:  mov    0x14(%ebp),%edx
08491bd9 +0x28b7:  mov    %edx,0x4(%esp)
08491bdd +0x28bb:  mov    %eax,(%esp)
08491be0 +0x28be:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08491be5 +0x28c3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08491bea +0x28c8:  lea    -0x14(%ebp),%edx
08491bed +0x28cb:  mov    %edx,0x8(%esp)
08491bf1 +0x28cf:  movl   $0x2,0x4(%esp)
08491bf9 +0x28d7:  mov    %eax,(%esp)
08491bfc +0x28da:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08491c01 +0x28df:  mov    %eax,%ebx
08491c03 +0x28e1:  lea    -0x14(%ebp),%eax
08491c06 +0x28e4:  mov    %eax,(%esp)
08491c09 +0x28e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08491c0e +0x28ec:  mov    %ebx,%eax
08491c10 +0x28ee:  add    $0x20,%esp
08491c13 +0x28f1:  pop    %ebx
08491c14 +0x28f2:  pop    %esi
08491c15 +0x28f3:  pop    %ebp
08491c16 +0x28f4:  ret
08491c17 +0x28f5:  mov    %edx,%ebx
08491c19 +0x28f7:  mov    %eax,%esi
08491c1b +0x28f9:  lea    -0x14(%ebp),%eax
08491c1e +0x28fc:  mov    %eax,(%esp)
08491c21 +0x28ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08491c26 +0x2904:  mov    %esi,%eax
08491c28 +0x2906:  mov    %ebx,%edx
08491c2a +0x2908:  mov    %eax,(%esp)
08491c2d +0x290b:  call   08ae3750 <_Unwind_Resume>
08491c32 +0x2910:  push   %ebp
08491c33 +0x2911:  mov    %esp,%ebp
08491c35 +0x2913:  sub    $0x38,%esp
08491c38 +0x2916:  mov    0x18(%ebp),%eax
08491c3b +0x2919:  mov    %eax,0x10(%esp)
08491c3f +0x291d:  mov    0x14(%ebp),%eax
08491c42 +0x2920:  mov    %eax,0xc(%esp)
08491c46 +0x2924:  mov    0x10(%ebp),%eax
08491c49 +0x2927:  mov    %eax,0x8(%esp)
08491c4d +0x292b:  mov    0xc(%ebp),%eax
08491c50 +0x292e:  mov    %eax,0x4(%esp)
08491c54 +0x2932:  mov    0x8(%ebp),%eax
08491c57 +0x2935:  mov    %eax,(%esp)
08491c5a +0x2938:  call   08491ab6 <+0x2794>
08491c5f +0x293d:  leave
08491c60 +0x293e:  ret
08491c61 +0x293f:  nop
08491c62 +0x2940:  push   %ebp
08491c63 +0x2941:  mov    %esp,%ebp
08491c65 +0x2943:  sub    $0x18,%esp
08491c68 +0x2946:  mov    0x8(%ebp),%eax
08491c6b +0x2949:  add    $0xc,%eax
08491c6e +0x294c:  mov    %eax,(%esp)
08491c71 +0x294f:  call   0822ec4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42f6
08491c76 +0x2954:  mov    0x8(%ebp),%eax
08491c79 +0x2957:  add    $0x68b,%eax
08491c7e +0x295c:  mov    %eax,(%esp)
08491c81 +0x295f:  call   0822edae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4458>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4458
08491c86 +0x2964:  leave
08491c87 +0x2965:  ret
08491c88 +0x2966:  push   %ebp
08491c89 +0x2967:  mov    %esp,%ebp
08491c8b +0x2969:  push   %esi
08491c8c +0x296a:  push   %ebx
08491c8d +0x296b:  sub    $0x10,%esp
08491c90 +0x296e:  mov    0x8(%ebp),%eax
08491c93 +0x2971:  add    $0x4,%eax
08491c96 +0x2974:  mov    %eax,%ebx
08491c98 +0x2976:  mov    $0x23,%esi
08491c9d +0x297b:  jmp    08491cad <+0x298b>
08491c9f +0x297d:  mov    %ebx,(%esp)
08491ca2 +0x2980:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08491ca7 +0x2985:  add    $0x3d,%ebx
08491caa +0x2988:  sub    $0x1,%esi
08491cad +0x298b:  cmp    $0xffffffff,%esi
08491cb0 +0x298e:  setne  %al
08491cb3 +0x2991:  test   %al,%al
08491cb5 +0x2993:  jne    08491c9f <+0x297d>
08491cb7 +0x2995:  add    $0x10,%esp
08491cba +0x2998:  pop    %ebx
08491cbb +0x2999:  pop    %esi
08491cbc +0x299a:  pop    %ebp
08491cbd +0x299b:  ret
08491cbe +0x299c:  push   %ebp
08491cbf +0x299d:  mov    %esp,%ebp
08491cc1 +0x299f:  push   %esi
08491cc2 +0x29a0:  push   %ebx
08491cc3 +0x29a1:  sub    $0x10,%esp
08491cc6 +0x29a4:  mov    0x8(%ebp),%eax
08491cc9 +0x29a7:  mov    %eax,%ebx
08491ccb +0x29a9:  mov    $0x0,%esi
08491cd0 +0x29ae:  jmp    08491ce0 <+0x29be>
08491cd2 +0x29b0:  mov    %ebx,(%esp)
08491cd5 +0x29b3:  call   0848f98e <+0x66c>
08491cda +0x29b8:  add    $0xc,%ebx
08491cdd +0x29bb:  sub    $0x1,%esi
08491ce0 +0x29be:  cmp    $0xffffffff,%esi
08491ce3 +0x29c1:  setne  %al
08491ce6 +0x29c4:  test   %al,%al
08491ce8 +0x29c6:  jne    08491cd2 <+0x29b0>
08491cea +0x29c8:  add    $0x10,%esp
08491ced +0x29cb:  pop    %ebx
08491cee +0x29cc:  pop    %esi
08491cef +0x29cd:  pop    %ebp
08491cf0 +0x29ce:  ret
08491cf1 +0x29cf:  nop
08491cf2 +0x29d0:  push   %ebp
08491cf3 +0x29d1:  mov    %esp,%ebp
08491cf5 +0x29d3:  push   %esi
08491cf6 +0x29d4:  push   %ebx
08491cf7 +0x29d5:  sub    $0x10,%esp
08491cfa +0x29d8:  mov    0x8(%ebp),%eax
08491cfd +0x29db:  mov    %eax,%ebx
08491cff +0x29dd:  mov    $0xa,%esi
08491d04 +0x29e2:  jmp    08491d14 <+0x29f2>
08491d06 +0x29e4:  mov    %ebx,(%esp)
08491d09 +0x29e7:  call   0848f9d0 <+0x6ae>
08491d0e +0x29ec:  add    $0x8,%ebx
08491d11 +0x29ef:  sub    $0x1,%esi
08491d14 +0x29f2:  cmp    $0xffffffff,%esi
08491d17 +0x29f5:  setne  %al
08491d1a +0x29f8:  test   %al,%al
08491d1c +0x29fa:  jne    08491d06 <+0x29e4>
08491d1e +0x29fc:  add    $0x10,%esp
08491d21 +0x29ff:  pop    %ebx
08491d22 +0x2a00:  pop    %esi
08491d23 +0x2a01:  pop    %ebp
08491d24 +0x2a02:  ret
08491d25 +0x2a03:  nop
08491d26 +0x2a04:  push   %ebp
08491d27 +0x2a05:  mov    %esp,%ebp
08491d29 +0x2a07:  push   %esi
08491d2a +0x2a08:  push   %ebx
08491d2b +0x2a09:  sub    $0x10,%esp
08491d2e +0x2a0c:  mov    0x8(%ebp),%eax
08491d31 +0x2a0f:  add    $0xc,%eax
08491d34 +0x2a12:  mov    %eax,(%esp)
08491d37 +0x2a15:  call   0848f774 <+0x452>
08491d3c +0x2a1a:  mov    0x8(%ebp),%eax
08491d3f +0x2a1d:  add    $0x4044,%eax
08491d44 +0x2a22:  mov    %eax,%ebx
08491d46 +0x2a24:  mov    $0x68,%esi
08491d4b +0x2a29:  jmp    08491d5b <+0x2a39>
08491d4d +0x2a2b:  mov    %ebx,(%esp)
08491d50 +0x2a2e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08491d55 +0x2a33:  add    $0x3d,%ebx
08491d58 +0x2a36:  sub    $0x1,%esi
08491d5b +0x2a39:  cmp    $0xffffffff,%esi
08491d5e +0x2a3c:  setne  %al
08491d61 +0x2a3f:  test   %al,%al
08491d63 +0x2a41:  jne    08491d4d <+0x2a2b>
08491d65 +0x2a43:  mov    0x8(%ebp),%eax
08491d68 +0x2a46:  add    $0x5949,%eax
08491d6d +0x2a4b:  mov    %eax,%ebx
08491d6f +0x2a4d:  mov    $0x137,%esi
08491d74 +0x2a52:  jmp    08491d84 <+0x2a62>
08491d76 +0x2a54:  mov    %ebx,(%esp)
08491d79 +0x2a57:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08491d7e +0x2a5c:  add    $0x3d,%ebx
08491d81 +0x2a5f:  sub    $0x1,%esi
08491d84 +0x2a62:  cmp    $0xffffffff,%esi
08491d87 +0x2a65:  setne  %al
08491d8a +0x2a68:  test   %al,%al
08491d8c +0x2a6a:  jne    08491d76 <+0x2a54>
08491d8e +0x2a6c:  mov    0x8(%ebp),%eax
08491d91 +0x2a6f:  add    $0xa3a1,%eax
08491d96 +0x2a74:  mov    %eax,%ebx
08491d98 +0x2a76:  mov    $0x15,%esi
08491d9d +0x2a7b:  jmp    08491dad <+0x2a8b>
08491d9f +0x2a7d:  mov    %ebx,(%esp)
08491da2 +0x2a80:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08491da7 +0x2a85:  add    $0x3d,%ebx
08491daa +0x2a88:  sub    $0x1,%esi
08491dad +0x2a8b:  cmp    $0xffffffff,%esi
08491db0 +0x2a8e:  setne  %al
08491db3 +0x2a91:  test   %al,%al
08491db5 +0x2a93:  jne    08491d9f <+0x2a7d>
08491db7 +0x2a95:  mov    0x8(%ebp),%eax
08491dba +0x2a98:  add    $0xa8e4,%eax
08491dbf +0x2a9d:  mov    %eax,%ebx
08491dc1 +0x2a9f:  mov    $0x97,%esi
08491dc6 +0x2aa4:  jmp    08491dd6 <+0x2ab4>
08491dc8 +0x2aa6:  mov    %ebx,(%esp)
08491dcb +0x2aa9:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08491dd0 +0x2aae:  add    $0x3d,%ebx
08491dd3 +0x2ab1:  sub    $0x1,%esi
08491dd6 +0x2ab4:  cmp    $0xffffffff,%esi
08491dd9 +0x2ab7:  setne  %al
08491ddc +0x2aba:  test   %al,%al
08491dde +0x2abc:  jne    08491dc8 <+0x2aa6>
08491de0 +0x2abe:  mov    0x8(%ebp),%eax
08491de3 +0x2ac1:  add    $0xeed1,%eax
08491de8 +0x2ac6:  mov    %eax,%ebx
08491dea +0x2ac8:  mov    $0xf1,%esi
08491def +0x2acd:  jmp    08491dff <+0x2add>
08491df1 +0x2acf:  mov    %ebx,(%esp)
08491df4 +0x2ad2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08491df9 +0x2ad7:  add    $0x3d,%ebx
08491dfc +0x2ada:  sub    $0x1,%esi
08491dff +0x2add:  cmp    $0xffffffff,%esi
08491e02 +0x2ae0:  setne  %al
08491e05 +0x2ae3:  test   %al,%al
08491e07 +0x2ae5:  jne    08491df1 <+0x2acf>
08491e09 +0x2ae7:  mov    0x8(%ebp),%eax
08491e0c +0x2aea:  add    $&_ZL14gUnicodeBuffer+0xa258,%eax
08491e11 +0x2aef:  mov    %eax,%ebx
08491e13 +0x2af1:  mov    $0x63,%esi
08491e18 +0x2af6:  jmp    08491e28 <+0x2b06>
08491e1a +0x2af8:  mov    %ebx,(%esp)
08491e1d +0x2afb:  call   0844d406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c
08491e22 +0x2b00:  add    $0x8,%ebx
08491e25 +0x2b03:  sub    $0x1,%esi
08491e28 +0x2b06:  cmp    $0xffffffff,%esi
08491e2b +0x2b09:  setne  %al
08491e2e +0x2b0c:  test   %al,%al
08491e30 +0x2b0e:  jne    08491e1a <+0x2af8>
08491e32 +0x2b10:  mov    0x8(%ebp),%eax
08491e35 +0x2b13:  add    $&_ZL14gUnicodeBuffer+0xa578,%eax
08491e3a +0x2b18:  mov    %eax,(%esp)
08491e3d +0x2b1b:  call   08491c88 <+0x2966>
08491e42 +0x2b20:  mov    0x8(%ebp),%eax
08491e45 +0x2b23:  add    $&_ZL14gUnicodeBuffer+0xae18,%eax
08491e4a +0x2b28:  mov    %eax,%ebx
08491e4c +0x2b2a:  mov    $0x13,%esi
08491e51 +0x2b2f:  jmp    08491e61 <+0x2b3f>
08491e53 +0x2b31:  mov    %ebx,(%esp)
08491e56 +0x2b34:  call   0848f976 <+0x654>
08491e5b +0x2b39:  add    $0x8,%ebx
08491e5e +0x2b3c:  sub    $0x1,%esi
08491e61 +0x2b3f:  cmp    $0xffffffff,%esi
08491e64 +0x2b42:  setne  %al
08491e67 +0x2b45:  test   %al,%al
08491e69 +0x2b47:  jne    08491e53 <+0x2b31>
08491e6b +0x2b49:  mov    0x8(%ebp),%eax
08491e6e +0x2b4c:  add    $&_ZL14gUnicodeBuffer+0xaeb8,%eax
08491e73 +0x2b51:  mov    %eax,(%esp)
08491e76 +0x2b54:  call   08491cbe <+0x299c>
08491e7b +0x2b59:  mov    0x8(%ebp),%eax
08491e7e +0x2b5c:  add    $&_ZL14gUnicodeBuffer+0xaec4,%eax
08491e83 +0x2b61:  mov    %eax,(%esp)
08491e86 +0x2b64:  call   08491cf2 <+0x29d0>
08491e8b +0x2b69:  add    $0x10,%esp
08491e8e +0x2b6c:  pop    %ebx
08491e8f +0x2b6d:  pop    %esi
08491e90 +0x2b6e:  pop    %ebp
08491e91 +0x2b6f:  ret
08491e92 +0x2b70:  push   %ebp
08491e93 +0x2b71:  mov    %esp,%ebp
08491e95 +0x2b73:  push   %esi
08491e96 +0x2b74:  push   %ebx
08491e97 +0x2b75:  sub    $0x10,%esp
08491e9a +0x2b78:  mov    0x8(%ebp),%eax
08491e9d +0x2b7b:  add    $0xb0,%eax
08491ea2 +0x2b80:  mov    %eax,%ebx
08491ea4 +0x2b82:  mov    $0x752f,%esi
08491ea9 +0x2b87:  jmp    08491eb9 <+0x2b97>
08491eab +0x2b89:  mov    %ebx,(%esp)
08491eae +0x2b8c:  call   0848f768 <+0x446>
08491eb3 +0x2b91:  add    $0x1,%ebx
08491eb6 +0x2b94:  sub    $0x1,%esi
08491eb9 +0x2b97:  cmp    $0xffffffff,%esi
08491ebc +0x2b9a:  setne  %al
08491ebf +0x2b9d:  test   %al,%al
08491ec1 +0x2b9f:  jne    08491eab <+0x2b89>
08491ec3 +0x2ba1:  add    $0x10,%esp
08491ec6 +0x2ba4:  pop    %ebx
08491ec7 +0x2ba5:  pop    %esi
08491ec8 +0x2ba6:  pop    %ebp
08491ec9 +0x2ba7:  ret
08491eca +0x2ba8:  push   %ebp
08491ecb +0x2ba9:  mov    %esp,%ebp
08491ecd +0x2bab:  sub    $0x18,%esp
08491ed0 +0x2bae:  mov    0x8(%ebp),%eax
08491ed3 +0x2bb1:  add    $0x4,%eax
08491ed6 +0x2bb4:  mov    %eax,(%esp)
08491ed9 +0x2bb7:  call   0848fa0e <+0x6ec>
08491ede +0x2bbc:  leave
08491edf +0x2bbd:  ret
08491ee0 +0x2bbe:  push   %ebp
08491ee1 +0x2bbf:  mov    %esp,%ebp
08491ee3 +0x2bc1:  push   %esi
08491ee4 +0x2bc2:  push   %ebx
08491ee5 +0x2bc3:  sub    $0x10,%esp
08491ee8 +0x2bc6:  mov    0x8(%ebp),%eax
08491eeb +0x2bc9:  add    $0xc,%eax
08491eee +0x2bcc:  mov    %eax,%ebx
08491ef0 +0x2bce:  mov    $0xcb,%esi
08491ef5 +0x2bd3:  jmp    08491f05 <+0x2be3>
08491ef7 +0x2bd5:  mov    %ebx,(%esp)
08491efa +0x2bd8:  call   0848f34c <+0x2a>
08491eff +0x2bdd:  add    $0x2,%ebx
08491f02 +0x2be0:  sub    $0x1,%esi
08491f05 +0x2be3:  cmp    $0xffffffff,%esi
08491f08 +0x2be6:  setne  %al
08491f0b +0x2be9:  test   %al,%al
08491f0d +0x2beb:  jne    08491ef7 <+0x2bd5>
08491f0f +0x2bed:  mov    0x8(%ebp),%eax
08491f12 +0x2bf0:  add    $0x1a8,%eax
08491f17 +0x2bf5:  mov    %eax,%ebx
08491f19 +0x2bf7:  mov    $0xcb,%esi
08491f1e +0x2bfc:  jmp    08491f2e <+0x2c0c>
08491f20 +0x2bfe:  mov    %ebx,(%esp)
08491f23 +0x2c01:  call   0848f34c <+0x2a>
08491f28 +0x2c06:  add    $0x2,%ebx
08491f2b +0x2c09:  sub    $0x1,%esi
08491f2e +0x2c0c:  cmp    $0xffffffff,%esi
08491f31 +0x2c0f:  setne  %al
08491f34 +0x2c12:  test   %al,%al
08491f36 +0x2c14:  jne    08491f20 <+0x2bfe>
08491f38 +0x2c16:  mov    0x8(%ebp),%eax
08491f3b +0x2c19:  add    $0x348,%eax
08491f40 +0x2c1e:  mov    %eax,%ebx
08491f42 +0x2c20:  mov    $0x31,%esi
08491f47 +0x2c25:  jmp    08491f57 <+0x2c35>
08491f49 +0x2c27:  mov    %ebx,(%esp)
08491f4c +0x2c2a:  call   0822da04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x30ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x30ae
08491f51 +0x2c2f:  add    $0x4,%ebx
08491f54 +0x2c32:  sub    $0x1,%esi
08491f57 +0x2c35:  cmp    $0xffffffff,%esi
08491f5a +0x2c38:  setne  %al
08491f5d +0x2c3b:  test   %al,%al
08491f5f +0x2c3d:  jne    08491f49 <+0x2c27>
08491f61 +0x2c3f:  add    $0x10,%esp
08491f64 +0x2c42:  pop    %ebx
08491f65 +0x2c43:  pop    %esi
08491f66 +0x2c44:  pop    %ebp
08491f67 +0x2c45:  ret
08491f68 +0x2c46:  push   %ebp
08491f69 +0x2c47:  mov    %esp,%ebp
08491f6b +0x2c49:  sub    $0x18,%esp
08491f6e +0x2c4c:  mov    0x8(%ebp),%eax
08491f71 +0x2c4f:  add    $0xc,%eax
08491f74 +0x2c52:  movl   $0x0,0x4(%esp)
08491f7c +0x2c5a:  mov    %eax,(%esp)
08491f7f +0x2c5d:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
08491f84 +0x2c62:  leave
08491f85 +0x2c63:  ret
08491f86 +0x2c64:  push   %ebp
08491f87 +0x2c65:  mov    %esp,%ebp
08491f89 +0x2c67:  push   %edi
08491f8a +0x2c68:  push   %esi
08491f8b +0x2c69:  push   %ebx
08491f8c +0x2c6a:  sub    $0x2c,%esp
08491f8f +0x2c6d:  mov    0x8(%ebp),%eax
08491f92 +0x2c70:  add    $0x10,%eax
08491f95 +0x2c73:  mov    %eax,(%esp)
08491f98 +0x2c76:  call   0848f7dc <+0x4ba>
08491f9d +0x2c7b:  mov    0x8(%ebp),%eax
08491fa0 +0x2c7e:  add    $0x340,%eax
08491fa5 +0x2c83:  mov    %eax,(%esp)
08491fa8 +0x2c86:  call   085d58da <_ZN13PvpResultTypeC1Ev>  ; PvpResultType::PvpResultType()
08491fad +0x2c8b:  mov    0x8(%ebp),%eax
08491fb0 +0x2c8e:  lea    0x3c8(%eax),%esi
08491fb6 +0x2c94:  mov    %esi,%edi
08491fb8 +0x2c96:  mov    $0x63,%ebx
08491fbd +0x2c9b:  jmp    08491fcd <+0x2cab>
08491fbf +0x2c9d:  mov    %edi,(%esp)
08491fc2 +0x2ca0:  call   084b73d4 <_ZN14GameResultTypeC1Ev>  ; GameResultType::GameResultType()
08491fc7 +0x2ca5:  add    $0x50,%edi
08491fca +0x2ca8:  sub    $0x1,%ebx
08491fcd +0x2cab:  cmp    $0xffffffff,%ebx
08491fd0 +0x2cae:  setne  %al
08491fd3 +0x2cb1:  test   %al,%al
08491fd5 +0x2cb3:  jne    08491fbf <+0x2c9d>
08491fd7 +0x2cb5:  jmp    08492013 <+0x2cf1>
08491fd9 +0x2cb7:  mov    %edx,%edi
08491fdb +0x2cb9:  mov    %eax,-0x1c(%ebp)
08491fde +0x2cbc:  test   %esi,%esi
08491fe0 +0x2cbe:  je     08492009 <+0x2ce7>
08491fe2 +0x2cc0:  mov    $0x63,%eax
08491fe7 +0x2cc5:  sub    %ebx,%eax
08491fe9 +0x2cc7:  mov    %eax,%edx
08491feb +0x2cc9:  mov    %edx,%eax
08491fed +0x2ccb:  shl    $0x2,%eax
08491ff0 +0x2cce:  add    %edx,%eax
08491ff2 +0x2cd0:  shl    $0x4,%eax
08491ff5 +0x2cd3:  lea    (%esi,%eax,1),%ebx
08491ff8 +0x2cd6:  cmp    %esi,%ebx
08491ffa +0x2cd8:  je     08492009 <+0x2ce7>
08491ffc +0x2cda:  sub    $0x50,%ebx
08491fff +0x2cdd:  mov    %ebx,(%esp)
08492002 +0x2ce0:  call   084b7416 <_ZN14GameResultTypeD1Ev>  ; GameResultType::~GameResultType()
08492007 +0x2ce5:  jmp    08491ff8 <+0x2cd6>
08492009 +0x2ce7:  mov    -0x1c(%ebp),%eax
0849200c +0x2cea:  mov    %edi,%edx
0849200e +0x2cec:  jmp    084921cf <+0x2ead>
08492013 +0x2cf1:  mov    0x8(%ebp),%eax
08492016 +0x2cf4:  add    $0x2308,%eax
0849201b +0x2cf9:  mov    %eax,(%esp)
0849201e +0x2cfc:  call   08491eca <+0x2ba8>
08492023 +0x2d01:  mov    0x8(%ebp),%eax
08492026 +0x2d04:  add    $0x24a0,%eax
0849202b +0x2d09:  mov    %eax,(%esp)
0849202e +0x2d0c:  call   08491eca <+0x2ba8>
08492033 +0x2d11:  mov    0x8(%ebp),%eax
08492036 +0x2d14:  add    $0x29fd,%eax
0849203b +0x2d19:  mov    %eax,(%esp)
0849203e +0x2d1c:  call   0848ff7c <+0xc5a>
08492043 +0x2d21:  mov    0x8(%ebp),%eax
08492046 +0x2d24:  add    $0x2b97,%eax
0849204b +0x2d29:  mov    %eax,(%esp)
0849204e +0x2d2c:  call   0848ff7c <+0xc5a>
08492053 +0x2d31:  mov    0x8(%ebp),%eax
08492056 +0x2d34:  add    $0x3e70,%eax
0849205b +0x2d39:  mov    %eax,%ebx
0849205d +0x2d3b:  mov    $0x31,%esi
08492062 +0x2d40:  jmp    08492072 <+0x2d50>
08492064 +0x2d42:  mov    %ebx,(%esp)
08492067 +0x2d45:  call   0848fa50 <+0x72e>
0849206c +0x2d4a:  add    $0xc,%ebx
0849206f +0x2d4d:  sub    $0x1,%esi
08492072 +0x2d50:  cmp    $0xffffffff,%esi
08492075 +0x2d53:  setne  %al
08492078 +0x2d56:  test   %al,%al
0849207a +0x2d58:  jne    08492064 <+0x2d42>
0849207c +0x2d5a:  mov    0x8(%ebp),%eax
0849207f +0x2d5d:  add    $0x40ce,%eax
08492084 +0x2d62:  mov    %eax,(%esp)
08492087 +0x2d65:  call   0848f894 <+0x572>
0849208c +0x2d6a:  mov    0x8(%ebp),%eax
0849208f +0x2d6d:  add    $0x466a,%eax
08492094 +0x2d72:  mov    %eax,(%esp)
08492097 +0x2d75:  call   0848f62a <+0x308>
0849209c +0x2d7a:  mov    0x8(%ebp),%eax
0849209f +0x2d7d:  add    $0xb1a4,%eax
084920a4 +0x2d82:  mov    %eax,(%esp)
084920a7 +0x2d85:  call   0828d8d8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x85>  ; global constructors keyed to CAchievement::CAchievement()+0x85
084920ac +0x2d8a:  mov    0x8(%ebp),%eax
084920af +0x2d8d:  add    $0xc9af,%eax
084920b4 +0x2d92:  mov    %eax,(%esp)
084920b7 +0x2d95:  call   0848fb64 <+0x842>
084920bc +0x2d9a:  mov    0x8(%ebp),%eax
084920bf +0x2d9d:  add    $0xc9bc,%eax
084920c4 +0x2da2:  mov    %eax,(%esp)
084920c7 +0x2da5:  call   084954de <+0x61bc>
084920cc +0x2daa:  mov    0x8(%ebp),%eax
084920cf +0x2dad:  add    $0xc9c0,%eax
084920d4 +0x2db2:  mov    %eax,(%esp)
084920d7 +0x2db5:  call   08491ee0 <+0x2bbe>
084920dc +0x2dba:  mov    0x8(%ebp),%eax
084920df +0x2dbd:  add    $0xcdd5,%eax
084920e4 +0x2dc2:  mov    %eax,(%esp)
084920e7 +0x2dc5:  call   0848f8d4 <+0x5b2>
084920ec +0x2dca:  mov    0x8(%ebp),%eax
084920ef +0x2dcd:  add    $0xd5a7,%eax
084920f4 +0x2dd2:  mov    %eax,(%esp)
084920f7 +0x2dd5:  call   0848f92e <+0x60c>
084920fc +0x2dda:  mov    0x8(%ebp),%eax
084920ff +0x2ddd:  add    $0xd6fc,%eax
08492104 +0x2de2:  mov    %eax,(%esp)
08492107 +0x2de5:  call   0848fa82 <+0x760>
0849210c +0x2dea:  mov    0x8(%ebp),%eax
0849210f +0x2ded:  add    $0xd718,%eax
08492114 +0x2df2:  mov    %eax,(%esp)
08492117 +0x2df5:  call   08491f68 <+0x2c46>
0849211c +0x2dfa:  mov    0x8(%ebp),%eax
0849211f +0x2dfd:  add    $0xd73c,%eax
08492124 +0x2e02:  mov    %eax,(%esp)
08492127 +0x2e05:  call   0848fab2 <+0x790>
0849212c +0x2e0a:  mov    0x8(%ebp),%eax
0849212f +0x2e0d:  add    $0xeac8,%eax
08492134 +0x2e12:  mov    %eax,(%esp)
08492137 +0x2e15:  call   0822abec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x296>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x296
0849213c +0x2e1a:  mov    0x8(%ebp),%eax
0849213f +0x2e1d:  add    $0xecc8,%eax
08492144 +0x2e22:  mov    %eax,(%esp)
08492147 +0x2e25:  call   0848fb4c <+0x82a>
0849214c +0x2e2a:  mov    0x8(%ebp),%eax
0849214f +0x2e2d:  add    $0xecd0,%eax
08492154 +0x2e32:  mov    %eax,(%esp)
08492157 +0x2e35:  call   0848fb02 <+0x7e0>
0849215c +0x2e3a:  mov    0x8(%ebp),%eax
0849215f +0x2e3d:  add    $&_ZL14gUnicodeBuffer+0xa56d,%eax
08492164 +0x2e42:  mov    %eax,(%esp)
08492167 +0x2e45:  call   0848fb84 <+0x862>
0849216c +0x2e4a:  mov    0x8(%ebp),%eax
0849216f +0x2e4d:  add    $&_ZL14gUnicodeBuffer+0xa57e,%eax
08492174 +0x2e52:  mov    %eax,(%esp)
08492177 +0x2e55:  call   0848fbbe <+0x89c>
0849217c +0x2e5a:  mov    0x8(%ebp),%eax
0849217f +0x2e5d:  add    $&_ZL14gUnicodeBuffer+0xa630,%eax
08492184 +0x2e62:  mov    %eax,(%esp)
08492187 +0x2e65:  call   0822ee18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44c2
0849218c +0x2e6a:  add    $0x2c,%esp
0849218f +0x2e6d:  pop    %ebx
08492190 +0x2e6e:  pop    %esi
08492191 +0x2e6f:  pop    %edi
08492192 +0x2e70:  pop    %ebp
08492193 +0x2e71:  ret
08492194 +0x2e72:  mov    %edx,%esi
08492196 +0x2e74:  mov    %eax,%edi
08492198 +0x2e76:  mov    0x8(%ebp),%eax
0849219b +0x2e79:  add    $0x3c8,%eax
084921a0 +0x2e7e:  test   %eax,%eax
084921a2 +0x2e80:  je     084921cb <+0x2ea9>
084921a4 +0x2e82:  mov    0x8(%ebp),%eax
084921a7 +0x2e85:  add    $0x3c8,%eax
084921ac +0x2e8a:  lea    0x1f40(%eax),%ebx
084921b2 +0x2e90:  mov    0x8(%ebp),%eax
084921b5 +0x2e93:  add    $0x3c8,%eax
084921ba +0x2e98:  cmp    %eax,%ebx
084921bc +0x2e9a:  je     084921cb <+0x2ea9>
084921be +0x2e9c:  sub    $0x50,%ebx
084921c1 +0x2e9f:  mov    %ebx,(%esp)
084921c4 +0x2ea2:  call   084b7416 <_ZN14GameResultTypeD1Ev>  ; GameResultType::~GameResultType()
084921c9 +0x2ea7:  jmp    084921b2 <+0x2e90>
084921cb +0x2ea9:  mov    %edi,%eax
084921cd +0x2eab:  mov    %esi,%edx
084921cf +0x2ead:  mov    %edx,%ebx
084921d1 +0x2eaf:  mov    %eax,%esi
084921d3 +0x2eb1:  mov    0x8(%ebp),%eax
084921d6 +0x2eb4:  add    $0x340,%eax
084921db +0x2eb9:  mov    %eax,(%esp)
084921de +0x2ebc:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
084921e3 +0x2ec1:  mov    %esi,%eax
084921e5 +0x2ec3:  mov    %ebx,%edx
084921e7 +0x2ec5:  mov    %eax,(%esp)
084921ea +0x2ec8:  call   08ae3750 <_Unwind_Resume>
084921ef +0x2ecd:  nop
084921f0 +0x2ece:  push   %ebp
084921f1 +0x2ecf:  mov    %esp,%ebp
084921f3 +0x2ed1:  push   %esi
084921f4 +0x2ed2:  push   %ebx
084921f5 +0x2ed3:  sub    $0x10,%esp
084921f8 +0x2ed6:  mov    0x8(%ebp),%eax
084921fb +0x2ed9:  add    $0x3c8,%eax
08492200 +0x2ede:  test   %eax,%eax
08492202 +0x2ee0:  je     0849224b <+0x2f29>
08492204 +0x2ee2:  mov    0x8(%ebp),%eax
08492207 +0x2ee5:  add    $0x3c8,%eax
0849220c +0x2eea:  lea    0x1f40(%eax),%ebx
08492212 +0x2ef0:  mov    0x8(%ebp),%eax
08492215 +0x2ef3:  add    $0x3c8,%eax
0849221a +0x2ef8:  cmp    %eax,%ebx
0849221c +0x2efa:  je     0849224b <+0x2f29>
0849221e +0x2efc:  sub    $0x50,%ebx
08492221 +0x2eff:  mov    %ebx,(%esp)
08492224 +0x2f02:  call   084b7416 <_ZN14GameResultTypeD1Ev>  ; GameResultType::~GameResultType()
08492229 +0x2f07:  jmp    08492212 <+0x2ef0>
0849222b +0x2f09:  mov    %edx,%ebx
0849222d +0x2f0b:  mov    %eax,%esi
0849222f +0x2f0d:  mov    0x8(%ebp),%eax
08492232 +0x2f10:  add    $0x340,%eax
08492237 +0x2f15:  mov    %eax,(%esp)
0849223a +0x2f18:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
0849223f +0x2f1d:  mov    %esi,%eax
08492241 +0x2f1f:  mov    %ebx,%edx
08492243 +0x2f21:  mov    %eax,(%esp)
08492246 +0x2f24:  call   08ae3750 <_Unwind_Resume>
0849224b +0x2f29:  mov    0x8(%ebp),%eax
0849224e +0x2f2c:  add    $0x340,%eax
08492253 +0x2f31:  mov    %eax,(%esp)
08492256 +0x2f34:  call   085d58e0 <_ZN13PvpResultTypeD1Ev>  ; PvpResultType::~PvpResultType()
0849225b +0x2f39:  add    $0x10,%esp
0849225e +0x2f3c:  pop    %ebx
0849225f +0x2f3d:  pop    %esi
08492260 +0x2f3e:  pop    %ebp
08492261 +0x2f3f:  ret
08492262 +0x2f40:  push   %ebp
08492263 +0x2f41:  mov    %esp,%ebp
08492265 +0x2f43:  sub    $0x18,%esp
08492268 +0x2f46:  mov    0x8(%ebp),%eax
0849226b +0x2f49:  mov    %eax,(%esp)
0849226e +0x2f4c:  call   08491c62 <+0x2940>
08492273 +0x2f51:  mov    0x8(%ebp),%eax
08492276 +0x2f54:  add    $0x703,%eax
0849227b +0x2f59:  mov    %eax,(%esp)
0849227e +0x2f5c:  call   08491d26 <+0x2a04>
08492283 +0x2f61:  mov    0x8(%ebp),%eax
08492286 +0x2f64:  add    $&_ZL14gUnicodeBuffer+0xb623,%eax
0849228b +0x2f69:  mov    %eax,(%esp)
0849228e +0x2f6c:  call   08491e92 <+0x2b70>
08492293 +0x2f71:  mov    0x8(%ebp),%eax
08492296 +0x2f74:  add    $&_ZL14gUnicodeBuffer+0x145e7,%eax
0849229b +0x2f79:  mov    %eax,(%esp)
0849229e +0x2f7c:  call   0848f5d8 <+0x2b6>
084922a3 +0x2f81:  mov    0x8(%ebp),%eax
084922a6 +0x2f84:  add    $&_ZL14gUnicodeBuffer+0x152d8,%eax
084922ab +0x2f89:  mov    %eax,(%esp)
084922ae +0x2f8c:  call   0848f560 <+0x23e>
084922b3 +0x2f91:  mov    0x8(%ebp),%eax
084922b6 +0x2f94:  add    $&_ZL14gUnicodeBuffer+0x157f4,%eax
084922bb +0x2f99:  mov    %eax,(%esp)
084922be +0x2f9c:  call   08491f86 <+0x2c64>
084922c3 +0x2fa1:  mov    0x8(%ebp),%eax
084922c6 +0x2fa4:  add    $&_ZL12gTCharBuffer+0x2354,%eax
084922cb +0x2fa9:  mov    %eax,(%esp)
084922ce +0x2fac:  call   0848fc8e <+0x96c>
084922d3 +0x2fb1:  leave
084922d4 +0x2fb2:  ret
084922d5 +0x2fb3:  nop
084922d6 +0x2fb4:  push   %ebp
084922d7 +0x2fb5:  mov    %esp,%ebp
084922d9 +0x2fb7:  sub    $0x18,%esp
084922dc +0x2fba:  mov    0x8(%ebp),%eax
084922df +0x2fbd:  add    $&_ZL14gUnicodeBuffer+0x157f4,%eax
084922e4 +0x2fc2:  mov    %eax,(%esp)
084922e7 +0x2fc5:  call   084921f0 <+0x2ece>
084922ec +0x2fca:  leave
084922ed +0x2fcb:  ret
084922ee +0x2fcc:  push   %ebp
084922ef +0x2fcd:  mov    %esp,%ebp
084922f1 +0x2fcf:  push   %edi
084922f2 +0x2fd0:  push   %esi
084922f3 +0x2fd1:  push   %ebx
084922f4 +0x2fd2:  sub    $0x3f8ec,%esp
084922fa +0x2fd8:  movl   $0x0,-0x44(%ebp)
08492301 +0x2fdf:  movl   $0x0,-0x48(%ebp)
08492308 +0x2fe6:  movl   $0x0,-0x4c(%ebp)
0849230f +0x2fed:  movl   $0x0,-0x50(%ebp)
08492316 +0x2ff4:  movb   $0x0,-0x1d(%ebp)
0849231a +0x2ff8:  mov    0x10(%ebp),%eax
0849231d +0x2ffb:  lea    -0x44(%ebp),%edx
08492320 +0x2ffe:  mov    %edx,0x4(%esp)
08492324 +0x3002:  mov    %eax,(%esp)
08492327 +0x3005:  call   0848f3dc <+0xba>
0849232c +0x300a:  xor    $0x1,%eax
0849232f +0x300d:  test   %al,%al
08492331 +0x300f:  je     0849233d <+0x301b>
08492333 +0x3011:  mov    $0x235,%ebx
08492338 +0x3016:  jmp    084925db <+0x32b9>
0849233d +0x301b:  mov    0x10(%ebp),%eax
08492340 +0x301e:  lea    -0x48(%ebp),%edx
08492343 +0x3021:  mov    %edx,0x4(%esp)
08492347 +0x3025:  mov    %eax,(%esp)
0849234a +0x3028:  call   0848f3dc <+0xba>
0849234f +0x302d:  xor    $0x1,%eax
08492352 +0x3030:  test   %al,%al
08492354 +0x3032:  je     08492360 <+0x303e>
08492356 +0x3034:  mov    $0x236,%ebx
0849235b +0x3039:  jmp    084925db <+0x32b9>
08492360 +0x303e:  mov    0x10(%ebp),%eax
08492363 +0x3041:  lea    -0x4c(%ebp),%edx
08492366 +0x3044:  mov    %edx,0x4(%esp)
0849236a +0x3048:  mov    %eax,(%esp)
0849236d +0x304b:  call   0848f3dc <+0xba>
08492372 +0x3050:  xor    $0x1,%eax
08492375 +0x3053:  test   %al,%al
08492377 +0x3055:  je     08492383 <+0x3061>
08492379 +0x3057:  mov    $0x237,%ebx
0849237e +0x305c:  jmp    084925db <+0x32b9>
08492383 +0x3061:  mov    0x10(%ebp),%eax
08492386 +0x3064:  lea    -0x50(%ebp),%edx
08492389 +0x3067:  mov    %edx,0x4(%esp)
0849238d +0x306b:  mov    %eax,(%esp)
08492390 +0x306e:  call   0848f3dc <+0xba>
08492395 +0x3073:  xor    $0x1,%eax
08492398 +0x3076:  test   %al,%al
0849239a +0x3078:  je     084923a6 <+0x3084>
0849239c +0x307a:  mov    $0x238,%ebx
084923a1 +0x307f:  jmp    084925db <+0x32b9>
084923a6 +0x3084:  lea    -0x3f8b5(%ebp),%eax
084923ac +0x308a:  mov    %eax,(%esp)
084923af +0x308d:  call   08492262 <+0x2f40>
084923b4 +0x3092:  movl   $0x0,-0x1c(%ebp)
084923bb +0x3099:  movl   $0x0,-0x54(%ebp)
084923c2 +0x30a0:  movl   $0x0,-0x58(%ebp)
084923c9 +0x30a7:  movb   $0x0,-0x59(%ebp)
084923cd +0x30ab:  mov    -0x44(%ebp),%eax
084923d0 +0x30ae:  lea    -0x59(%ebp),%edx
084923d3 +0x30b1:  mov    %edx,0xc(%esp)
084923d7 +0x30b5:  lea    -0x54(%ebp),%edx
084923da +0x30b8:  mov    %edx,0x8(%esp)
084923de +0x30bc:  mov    %eax,0x4(%esp)
084923e2 +0x30c0:  lea    -0x3f8b5(%ebp),%eax
084923e8 +0x30c6:  mov    %eax,(%esp)
084923eb +0x30c9:  call   0848fd7c <+0xa5a>
084923f0 +0x30ce:  mov    %eax,-0x1c(%ebp)
084923f3 +0x30d1:  cmpl   $0x0,-0x1c(%ebp)
084923f7 +0x30d5:  setne  %al
084923fa +0x30d8:  test   %al,%al
084923fc +0x30da:  je     0849244b <+0x3129>
084923fe +0x30dc:  mov    0x10(%ebp),%eax
08492401 +0x30df:  lea    -0x58(%ebp),%edx
08492404 +0x30e2:  mov    %edx,0x4(%esp)
08492408 +0x30e6:  mov    %eax,(%esp)
0849240b +0x30e9:  call   0848f3dc <+0xba>
08492410 +0x30ee:  xor    $0x1,%eax
08492413 +0x30f1:  test   %al,%al
08492415 +0x30f3:  je     08492421 <+0x30ff>
08492417 +0x30f5:  mov    $0x241,%ebx
0849241c +0x30fa:  jmp    084925cd <+0x32ab>
08492421 +0x30ff:  mov    -0x58(%ebp),%ecx
08492424 +0x3102:  mov    -0x1c(%ebp),%edx
08492427 +0x3105:  mov    0x10(%ebp),%eax
0849242a +0x3108:  mov    %ecx,0x8(%esp)
0849242e +0x310c:  mov    %edx,0x4(%esp)
08492432 +0x3110:  mov    %eax,(%esp)
08492435 +0x3113:  call   0848f3f8 <+0xd6>
0849243a +0x3118:  xor    $0x1,%eax
0849243d +0x311b:  test   %al,%al
0849243f +0x311d:  je     0849244b <+0x3129>
08492441 +0x311f:  mov    $0x24d,%ebx
08492446 +0x3124:  jmp    084925cd <+0x32ab>
0849244b +0x3129:  mov    0xc(%ebp),%eax
0849244e +0x312c:  mov    %eax,(%esp)
08492451 +0x312f:  call   0848ffb0 <+0xc8e>
08492456 +0x3134:  mov    %eax,%ebx
08492458 +0x3136:  mov    -0x50(%ebp),%eax
0849245b +0x3139:  mov    %eax,-0x3f8c8(%ebp)
08492461 +0x313f:  mov    -0x4c(%ebp),%eax
08492464 +0x3142:  mov    %eax,-0x3f8c4(%ebp)
0849246a +0x3148:  mov    -0x54(%ebp),%eax
0849246d +0x314b:  mov    %eax,-0x3f8c0(%ebp)
08492473 +0x3151:  mov    -0x58(%ebp),%eax
08492476 +0x3154:  mov    %eax,-0x3f8bc(%ebp)
0849247c +0x315a:  mov    -0x48(%ebp),%edi
0849247f +0x315d:  mov    -0x44(%ebp),%esi
08492482 +0x3160:  movl   $0x0,0xc(%esp)
0849248a +0x3168:  movl   $0x253,0x8(%esp)
08492492 +0x3170:  movl   $&_ZZN15exchange_server15CExchangeServer22OnRecvPacketCharacInfoEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
0849249a +0x3178:  lea    -0x40(%ebp),%eax
0849249d +0x317b:  mov    %eax,(%esp)
084924a0 +0x317e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084924a5 +0x3183:  mov    %ebx,0x20(%esp)
084924a9 +0x3187:  mov    -0x3f8c8(%ebp),%eax
084924af +0x318d:  mov    %eax,0x1c(%esp)
084924b3 +0x3191:  mov    -0x3f8c4(%ebp),%eax
084924b9 +0x3197:  mov    %eax,0x18(%esp)
084924bd +0x319b:  mov    -0x3f8c0(%ebp),%eax
084924c3 +0x31a1:  mov    %eax,0x14(%esp)
084924c7 +0x31a5:  mov    -0x3f8bc(%ebp),%eax
084924cd +0x31ab:  mov    %eax,0x10(%esp)
084924d1 +0x31af:  mov    %edi,0xc(%esp)
084924d5 +0x31b3:  mov    %esi,0x8(%esp)
084924d9 +0x31b7:  movl   $"OnRecvPacketCharacInfo() type(%d), idx(%d), msg len(%d), member_size(%d), channel_no(%d), charac_no(%d), from_channel_no(%d)",0x4(%esp)
084924e1 +0x31bf:  lea    -0x40(%ebp),%eax
084924e4 +0x31c2:  mov    %eax,(%esp)
084924e7 +0x31c5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084924ec +0x31ca:  mov    -0x44(%ebp),%eax
084924ef +0x31cd:  cmp    $0x20,%eax
084924f2 +0x31d0:  jne    084924f8 <+0x31d6>
084924f4 +0x31d2:  movb   $0x1,-0x1d(%ebp)
084924f8 +0x31d6:  movzbl -0x1d(%ebp),%esi
084924fc +0x31da:  mov    -0x50(%ebp),%ebx
084924ff +0x31dd:  mov    -0x4c(%ebp),%ecx
08492502 +0x31e0:  mov    -0x48(%ebp),%edx
08492505 +0x31e3:  mov    -0x44(%ebp),%eax
08492508 +0x31e6:  mov    0xc(%ebp),%edi
0849250b +0x31e9:  mov    %edi,0x18(%esp)
0849250f +0x31ed:  mov    %esi,0x14(%esp)
08492513 +0x31f1:  mov    %ebx,0x10(%esp)
08492517 +0x31f5:  mov    %ecx,0xc(%esp)
0849251b +0x31f9:  mov    %edx,0x8(%esp)
0849251f +0x31fd:  mov    %eax,0x4(%esp)
08492523 +0x3201:  mov    0x8(%ebp),%eax
08492526 +0x3204:  mov    %eax,(%esp)
08492529 +0x3207:  call   084918d8 <+0x25b6>
0849252e +0x320c:  xor    $0x1,%eax
08492531 +0x320f:  test   %al,%al
08492533 +0x3211:  je     084925a8 <+0x3286>
08492535 +0x3213:  mov    -0x54(%ebp),%ecx
08492538 +0x3216:  mov    -0x48(%ebp),%edx
0849253b +0x3219:  mov    -0x44(%ebp),%eax
0849253e +0x321c:  movl   $0x15,0x18(%esp)
08492546 +0x3224:  mov    0xc(%ebp),%ebx
08492549 +0x3227:  mov    %ebx,0x14(%esp)
0849254d +0x322b:  mov    %ecx,0x10(%esp)
08492551 +0x322f:  mov    -0x1c(%ebp),%ecx
08492554 +0x3232:  mov    %ecx,0xc(%esp)
08492558 +0x3236:  mov    %edx,0x8(%esp)
0849255c +0x323a:  mov    %eax,0x4(%esp)
08492560 +0x323e:  mov    0x8(%ebp),%eax
08492563 +0x3241:  mov    %eax,(%esp)
08492566 +0x3244:  call   08491644 <+0x2322>
0849256b +0x3249:  xor    $0x1,%eax
0849256e +0x324c:  test   %al,%al
08492570 +0x324e:  je     084925a8 <+0x3286>
08492572 +0x3250:  movl   $0x0,0xc(%esp)
0849257a +0x3258:  movl   $0x25d,0x8(%esp)
08492582 +0x3260:  movl   $&_ZZN15exchange_server15CExchangeServer22OnRecvPacketCharacInfoEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
0849258a +0x3268:  lea    -0x30(%ebp),%eax
0849258d +0x326b:  mov    %eax,(%esp)
08492590 +0x326e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492595 +0x3273:  movl   $"SendResponseCharacInfo() error",0x4(%esp)
0849259d +0x327b:  lea    -0x30(%ebp),%eax
084925a0 +0x327e:  mov    %eax,(%esp)
084925a3 +0x3281:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084925a8 +0x3286:  mov    $0x0,%ebx
084925ad +0x328b:  jmp    084925cd <+0x32ab>
084925af +0x328d:  mov    %edx,%ebx
084925b1 +0x328f:  mov    %eax,%esi
084925b3 +0x3291:  lea    -0x3f8b5(%ebp),%eax
084925b9 +0x3297:  mov    %eax,(%esp)
084925bc +0x329a:  call   084922d6 <+0x2fb4>
084925c1 +0x329f:  mov    %esi,%eax
084925c3 +0x32a1:  mov    %ebx,%edx
084925c5 +0x32a3:  mov    %eax,(%esp)
084925c8 +0x32a6:  call   08ae3750 <_Unwind_Resume>
084925cd +0x32ab:  lea    -0x3f8b5(%ebp),%eax
084925d3 +0x32b1:  mov    %eax,(%esp)
084925d6 +0x32b4:  call   084922d6 <+0x2fb4>
084925db +0x32b9:  mov    %ebx,%eax
084925dd +0x32bb:  add    $0x3f8ec,%esp
084925e3 +0x32c1:  pop    %ebx
084925e4 +0x32c2:  pop    %esi
084925e5 +0x32c3:  pop    %edi
084925e6 +0x32c4:  pop    %ebp
084925e7 +0x32c5:  ret
084925e8 +0x32c6:  push   %ebp
084925e9 +0x32c7:  mov    %esp,%ebp
084925eb +0x32c9:  push   %edi
084925ec +0x32ca:  push   %esi
084925ed +0x32cb:  push   %ebx
084925ee +0x32cc:  sub    $0x3f8cc,%esp
084925f4 +0x32d2:  movl   $0x0,-0x38(%ebp)
084925fb +0x32d9:  movl   $0x0,-0x3c(%ebp)
08492602 +0x32e0:  movl   $0x0,-0x24(%ebp)
08492609 +0x32e7:  movl   $0x0,-0x20(%ebp)
08492610 +0x32ee:  movl   $0x0,-0x40(%ebp)
08492617 +0x32f5:  mov    0x10(%ebp),%eax
0849261a +0x32f8:  lea    -0x40(%ebp),%edx
0849261d +0x32fb:  mov    %edx,0x4(%esp)
08492621 +0x32ff:  mov    %eax,(%esp)
08492624 +0x3302:  call   0848f3dc <+0xba>
08492629 +0x3307:  xor    $0x1,%eax
0849262c +0x330a:  test   %al,%al
0849262e +0x330c:  je     0849263a <+0x3318>
08492630 +0x330e:  mov    $0x26c,%ebx
08492635 +0x3313:  jmp    08492846 <+0x3524>
0849263a +0x3318:  mov    0x10(%ebp),%eax
0849263d +0x331b:  lea    -0x38(%ebp),%edx
08492640 +0x331e:  mov    %edx,0x4(%esp)
08492644 +0x3322:  mov    %eax,(%esp)
08492647 +0x3325:  call   0848f3dc <+0xba>
0849264c +0x332a:  xor    $0x1,%eax
0849264f +0x332d:  test   %al,%al
08492651 +0x332f:  je     0849265d <+0x333b>
08492653 +0x3331:  mov    $0x26d,%ebx
08492658 +0x3336:  jmp    08492846 <+0x3524>
0849265d +0x333b:  mov    0x10(%ebp),%eax
08492660 +0x333e:  lea    -0x3c(%ebp),%edx
08492663 +0x3341:  mov    %edx,0x4(%esp)
08492667 +0x3345:  mov    %eax,(%esp)
0849266a +0x3348:  call   0848f3dc <+0xba>
0849266f +0x334d:  xor    $0x1,%eax
08492672 +0x3350:  test   %al,%al
08492674 +0x3352:  je     08492680 <+0x335e>
08492676 +0x3354:  mov    $0x26e,%ebx
0849267b +0x3359:  jmp    08492846 <+0x3524>
08492680 +0x335e:  lea    -0x3f8a5(%ebp),%eax
08492686 +0x3364:  mov    %eax,(%esp)
08492689 +0x3367:  call   08492262 <+0x2f40>
0849268e +0x336c:  movl   $0x0,-0x1c(%ebp)
08492695 +0x3373:  movl   $0x0,-0x44(%ebp)
0849269c +0x337a:  movl   $0x0,-0x48(%ebp)
084926a3 +0x3381:  movb   $0x0,-0x49(%ebp)
084926a7 +0x3385:  mov    -0x38(%ebp),%eax
084926aa +0x3388:  lea    -0x49(%ebp),%edx
084926ad +0x338b:  mov    %edx,0xc(%esp)
084926b1 +0x338f:  lea    -0x44(%ebp),%edx
084926b4 +0x3392:  mov    %edx,0x8(%esp)
084926b8 +0x3396:  mov    %eax,0x4(%esp)
084926bc +0x339a:  lea    -0x3f8a5(%ebp),%eax
084926c2 +0x33a0:  mov    %eax,(%esp)
084926c5 +0x33a3:  call   0848fd7c <+0xa5a>
084926ca +0x33a8:  mov    %eax,-0x1c(%ebp)
084926cd +0x33ab:  cmpl   $0x0,-0x1c(%ebp)
084926d1 +0x33af:  setne  %al
084926d4 +0x33b2:  test   %al,%al
084926d6 +0x33b4:  je     08492725 <+0x3403>
084926d8 +0x33b6:  mov    0x10(%ebp),%eax
084926db +0x33b9:  lea    -0x48(%ebp),%edx
084926de +0x33bc:  mov    %edx,0x4(%esp)
084926e2 +0x33c0:  mov    %eax,(%esp)
084926e5 +0x33c3:  call   0848f3dc <+0xba>
084926ea +0x33c8:  xor    $0x1,%eax
084926ed +0x33cb:  test   %al,%al
084926ef +0x33cd:  je     084926fb <+0x33d9>
084926f1 +0x33cf:  mov    $0x27a,%ebx
084926f6 +0x33d4:  jmp    08492838 <+0x3516>
084926fb +0x33d9:  mov    -0x48(%ebp),%ecx
084926fe +0x33dc:  mov    -0x1c(%ebp),%edx
08492701 +0x33df:  mov    0x10(%ebp),%eax
08492704 +0x33e2:  mov    %ecx,0x8(%esp)
08492708 +0x33e6:  mov    %edx,0x4(%esp)
0849270c +0x33ea:  mov    %eax,(%esp)
0849270f +0x33ed:  call   0848f3f8 <+0xd6>
08492714 +0x33f2:  xor    $0x1,%eax
08492717 +0x33f5:  test   %al,%al
08492719 +0x33f7:  je     08492725 <+0x3403>
0849271b +0x33f9:  mov    $0x282,%ebx
08492720 +0x33fe:  jmp    08492838 <+0x3516>
08492725 +0x3403:  mov    0xc(%ebp),%eax
08492728 +0x3406:  mov    %eax,(%esp)
0849272b +0x3409:  call   0848ffb0 <+0xc8e>
08492730 +0x340e:  mov    %eax,%ebx
08492732 +0x3410:  mov    -0x44(%ebp),%eax
08492735 +0x3413:  mov    %eax,-0x3f8b4(%ebp)
0849273b +0x3419:  mov    -0x48(%ebp),%eax
0849273e +0x341c:  mov    %eax,-0x3f8b0(%ebp)
08492744 +0x3422:  mov    -0x3c(%ebp),%eax
08492747 +0x3425:  mov    %eax,-0x3f8ac(%ebp)
0849274d +0x342b:  mov    -0x38(%ebp),%edi
08492750 +0x342e:  mov    -0x40(%ebp),%esi
08492753 +0x3431:  movl   $0x0,0xc(%esp)
0849275b +0x3439:  movl   $0x28a,0x8(%esp)
08492763 +0x3441:  movl   $&_ZZN15exchange_server15CExchangeServer25OnRecvPacketCharacInfoRetEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
0849276b +0x3449:  lea    -0x34(%ebp),%eax
0849276e +0x344c:  mov    %eax,(%esp)
08492771 +0x344f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492776 +0x3454:  mov    %ebx,0x1c(%esp)
0849277a +0x3458:  mov    -0x3f8b4(%ebp),%eax
08492780 +0x345e:  mov    %eax,0x18(%esp)
08492784 +0x3462:  mov    -0x3f8b0(%ebp),%eax
0849278a +0x3468:  mov    %eax,0x14(%esp)
0849278e +0x346c:  mov    -0x3f8ac(%ebp),%eax
08492794 +0x3472:  mov    %eax,0x10(%esp)
08492798 +0x3476:  mov    %edi,0xc(%esp)
0849279c +0x347a:  mov    %esi,0x8(%esp)
084927a0 +0x347e:  movl   $"OnRecvPacketCharacInfoRet() ret(%d) type(%d), idx(%d), msg len(%d), member_size(%d), from_channel(%d)",0x4(%esp)
084927a8 +0x3486:  lea    -0x34(%ebp),%eax
084927ab +0x3489:  mov    %eax,(%esp)
084927ae +0x348c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084927b3 +0x3491:  mov    -0x40(%ebp),%eax
084927b6 +0x3494:  test   %eax,%eax
084927b8 +0x3496:  jne    084927ec <+0x34ca>
084927ba +0x3498:  mov    -0x44(%ebp),%ecx
084927bd +0x349b:  mov    -0x3c(%ebp),%edx
084927c0 +0x349e:  mov    -0x38(%ebp),%eax
084927c3 +0x34a1:  mov    %ecx,0x10(%esp)
084927c7 +0x34a5:  mov    -0x1c(%ebp),%ecx
084927ca +0x34a8:  mov    %ecx,0xc(%esp)
084927ce +0x34ac:  mov    %edx,0x8(%esp)
084927d2 +0x34b0:  mov    %eax,0x4(%esp)
084927d6 +0x34b4:  mov    0x8(%ebp),%eax
084927d9 +0x34b7:  mov    %eax,(%esp)
084927dc +0x34ba:  call   0849173e <+0x241c>
084927e1 +0x34bf:  test   %al,%al
084927e3 +0x34c1:  je     084927ec <+0x34ca>
084927e5 +0x34c3:  mov    $0x0,%ebx
084927ea +0x34c8:  jmp    08492838 <+0x3516>
084927ec +0x34ca:  mov    -0x44(%ebp),%ecx
084927ef +0x34cd:  mov    -0x3c(%ebp),%edx
084927f2 +0x34d0:  mov    -0x38(%ebp),%eax
084927f5 +0x34d3:  mov    %ecx,0x10(%esp)
084927f9 +0x34d7:  mov    -0x1c(%ebp),%ecx
084927fc +0x34da:  mov    %ecx,0xc(%esp)
08492800 +0x34de:  mov    %edx,0x8(%esp)
08492804 +0x34e2:  mov    %eax,0x4(%esp)
08492808 +0x34e6:  mov    0x8(%ebp),%eax
0849280b +0x34e9:  mov    %eax,(%esp)
0849280e +0x34ec:  call   08491c32 <+0x2910>
08492813 +0x34f1:  mov    $0x0,%ebx
08492818 +0x34f6:  jmp    08492838 <+0x3516>
0849281a +0x34f8:  mov    %edx,%ebx
0849281c +0x34fa:  mov    %eax,%esi
0849281e +0x34fc:  lea    -0x3f8a5(%ebp),%eax
08492824 +0x3502:  mov    %eax,(%esp)
08492827 +0x3505:  call   084922d6 <+0x2fb4>
0849282c +0x350a:  mov    %esi,%eax
0849282e +0x350c:  mov    %ebx,%edx
08492830 +0x350e:  mov    %eax,(%esp)
08492833 +0x3511:  call   08ae3750 <_Unwind_Resume>
08492838 +0x3516:  lea    -0x3f8a5(%ebp),%eax
0849283e +0x351c:  mov    %eax,(%esp)
08492841 +0x351f:  call   084922d6 <+0x2fb4>
08492846 +0x3524:  mov    %ebx,%eax
08492848 +0x3526:  add    $0x3f8cc,%esp
0849284e +0x352c:  pop    %ebx
0849284f +0x352d:  pop    %esi
08492850 +0x352e:  pop    %edi
08492851 +0x352f:  pop    %ebp
08492852 +0x3530:  ret
08492853 +0x3531:  nop
08492854 +0x3532:  push   %ebp
08492855 +0x3533:  mov    %esp,%ebp
08492857 +0x3535:  push   %edi
08492858 +0x3536:  push   %esi
08492859 +0x3537:  push   %ebx
0849285a +0x3538:  sub    $0x9c,%esp
08492860 +0x353e:  lea    -0x5c(%ebp),%eax
08492863 +0x3541:  mov    %eax,(%esp)
08492866 +0x3544:  call   08491004 <+0x1ce2>
0849286b +0x3549:  mov    0x10(%ebp),%eax
0849286e +0x354c:  lea    -0x4c(%ebp),%edx
08492871 +0x354f:  mov    %edx,0x4(%esp)
08492875 +0x3553:  mov    %eax,(%esp)
08492878 +0x3556:  call   0848f3dc <+0xba>
0849287d +0x355b:  xor    $0x1,%eax
08492880 +0x355e:  test   %al,%al
08492882 +0x3560:  je     0849288e <+0x356c>
08492884 +0x3562:  mov    $0x29d,%eax
08492889 +0x3567:  jmp    08492c53 <+0x3931>
0849288e +0x356c:  mov    0x10(%ebp),%eax
08492891 +0x356f:  lea    -0x5c(%ebp),%edx
08492894 +0x3572:  mov    %edx,0x4(%esp)
08492898 +0x3576:  mov    %eax,(%esp)
0849289b +0x3579:  call   0848f3dc <+0xba>
084928a0 +0x357e:  xor    $0x1,%eax
084928a3 +0x3581:  test   %al,%al
084928a5 +0x3583:  je     084928b1 <+0x358f>
084928a7 +0x3585:  mov    $0x29e,%eax
084928ac +0x358a:  jmp    08492c53 <+0x3931>
084928b1 +0x358f:  mov    0x10(%ebp),%eax
084928b4 +0x3592:  lea    -0x5c(%ebp),%edx
084928b7 +0x3595:  add    $0x4,%edx
084928ba +0x3598:  mov    %edx,0x4(%esp)
084928be +0x359c:  mov    %eax,(%esp)
084928c1 +0x359f:  call   0848f3c0 <+0x9e>
084928c6 +0x35a4:  xor    $0x1,%eax
084928c9 +0x35a7:  test   %al,%al
084928cb +0x35a9:  je     084928d7 <+0x35b5>
084928cd +0x35ab:  mov    $0x29f,%eax
084928d2 +0x35b0:  jmp    08492c53 <+0x3931>
084928d7 +0x35b5:  movl   $0x2,-0x54(%ebp)
084928de +0x35bc:  mov    -0x5c(%ebp),%eax
084928e1 +0x35bf:  mov    %eax,-0x60(%ebp)
084928e4 +0x35c2:  movzwl -0x58(%ebp),%eax
084928e8 +0x35c6:  movswl %ax,%edi
084928eb +0x35c9:  mov    -0x60(%ebp),%eax
084928ee +0x35cc:  mov    %eax,(%esp)
084928f1 +0x35cf:  call   0807ddc0 <_init+0x6b8>
084928f6 +0x35d4:  mov    %eax,%ebx
084928f8 +0x35d6:  mov    -0x4c(%ebp),%esi
084928fb +0x35d9:  movl   $0x0,0xc(%esp)
08492903 +0x35e1:  movl   $0x2a5,0x8(%esp)
0849290b +0x35e9:  movl   $&_ZZN15exchange_server15CExchangeServer22OnRecvPacketServerInfoEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492913 +0x35f1:  lea    -0x48(%ebp),%eax
08492916 +0x35f4:  mov    %eax,(%esp)
08492919 +0x35f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849291e +0x35fc:  mov    %edi,0x10(%esp)
08492922 +0x3600:  mov    %ebx,0xc(%esp)
08492926 +0x3604:  mov    %esi,0x8(%esp)
0849292a +0x3608:  movl   $"channel no(%d), server ip(%s), port(%d)",0x4(%esp)
08492932 +0x3610:  lea    -0x48(%ebp),%eax
08492935 +0x3613:  mov    %eax,(%esp)
08492938 +0x3616:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849293d +0x361b:  mov    0x8(%ebp),%eax
08492940 +0x361e:  mov    (%eax),%eax
08492942 +0x3620:  add    $0x10,%eax
08492945 +0x3623:  mov    (%eax),%edx
08492947 +0x3625:  mov    0x8(%ebp),%eax
0849294a +0x3628:  mov    %eax,(%esp)
0849294d +0x362b:  call   *%edx
0849294f +0x362d:  test   %eax,%eax
08492951 +0x362f:  sete   %al
08492954 +0x3632:  test   %al,%al
08492956 +0x3634:  je     08492ac5 <+0x37a3>
0849295c +0x363a:  lea    -0x6c(%ebp),%eax
0849295f +0x363d:  mov    %eax,(%esp)
08492962 +0x3640:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08492967 +0x3645:  lea    -0x6c(%ebp),%eax
0849296a +0x3648:  mov    %eax,(%esp)
0849296d +0x364b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08492972 +0x3650:  movl   $0x83,0x8(%esp)
0849297a +0x3658:  movl   $0x1,0x4(%esp)
08492982 +0x3660:  lea    -0x6c(%ebp),%eax
08492985 +0x3663:  mov    %eax,(%esp)
08492988 +0x3666:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849298d +0x366b:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08492992 +0x3670:  mov    %eax,0x4(%esp)
08492996 +0x3674:  lea    -0x6c(%ebp),%eax
08492999 +0x3677:  mov    %eax,(%esp)
0849299c +0x367a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084929a1 +0x367f:  mov    0x8(%ebp),%eax
084929a4 +0x3682:  add    $0x50,%eax
084929a7 +0x3685:  mov    %eax,(%esp)
084929aa +0x3688:  call   084954f2 <+0x61d0>
084929af +0x368d:  mov    %eax,0x4(%esp)
084929b3 +0x3691:  lea    -0x6c(%ebp),%eax
084929b6 +0x3694:  mov    %eax,(%esp)
084929b9 +0x3697:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084929be +0x369c:  mov    0x8(%ebp),%eax
084929c1 +0x369f:  lea    0x50(%eax),%edx
084929c4 +0x36a2:  lea    -0x70(%ebp),%eax
084929c7 +0x36a5:  mov    %edx,0x4(%esp)
084929cb +0x36a9:  mov    %eax,(%esp)
084929ce +0x36ac:  call   084952fa <+0x5fd8>
084929d3 +0x36b1:  sub    $0x4,%esp
084929d6 +0x36b4:  mov    0x8(%ebp),%eax
084929d9 +0x36b7:  lea    0x50(%eax),%edx
084929dc +0x36ba:  lea    -0x74(%ebp),%eax
084929df +0x36bd:  mov    %edx,0x4(%esp)
084929e3 +0x36c1:  mov    %eax,(%esp)
084929e6 +0x36c4:  call   08495320 <+0x5ffe>
084929eb +0x36c9:  sub    $0x4,%esp
084929ee +0x36cc:  jmp    08492a53 <+0x3731>
084929f0 +0x36ce:  lea    -0x70(%ebp),%eax
084929f3 +0x36d1:  mov    %eax,(%esp)
084929f6 +0x36d4:  call   08495378 <+0x6056>
084929fb +0x36d9:  mov    (%eax),%eax
084929fd +0x36db:  mov    %eax,0x4(%esp)
08492a01 +0x36df:  lea    -0x6c(%ebp),%eax
08492a04 +0x36e2:  mov    %eax,(%esp)
08492a07 +0x36e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08492a0c +0x36ea:  lea    -0x70(%ebp),%eax
08492a0f +0x36ed:  mov    %eax,(%esp)
08492a12 +0x36f0:  call   08495378 <+0x6056>
08492a17 +0x36f5:  mov    0x4(%eax),%eax
08492a1a +0x36f8:  mov    %eax,0x4(%esp)
08492a1e +0x36fc:  lea    -0x6c(%ebp),%eax
08492a21 +0x36ff:  mov    %eax,(%esp)
08492a24 +0x3702:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08492a29 +0x3707:  lea    -0x70(%ebp),%eax
08492a2c +0x370a:  mov    %eax,(%esp)
08492a2f +0x370d:  call   08495378 <+0x6056>
08492a34 +0x3712:  movzwl 0x8(%eax),%eax
08492a38 +0x3716:  cwtl
08492a39 +0x3717:  mov    %eax,0x4(%esp)
08492a3d +0x371b:  lea    -0x6c(%ebp),%eax
08492a40 +0x371e:  mov    %eax,(%esp)
08492a43 +0x3721:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08492a48 +0x3726:  lea    -0x70(%ebp),%eax
08492a4b +0x3729:  mov    %eax,(%esp)
08492a4e +0x372c:  call   0849535a <+0x6038>
08492a53 +0x3731:  lea    -0x74(%ebp),%eax
08492a56 +0x3734:  mov    %eax,0x4(%esp)
08492a5a +0x3738:  lea    -0x70(%ebp),%eax
08492a5d +0x373b:  mov    %eax,(%esp)
08492a60 +0x373e:  call   08495346 <+0x6024>
08492a65 +0x3743:  test   %al,%al
08492a67 +0x3745:  jne    084929f0 <+0x36ce>
08492a69 +0x3747:  movl   $0x0,0x4(%esp)
08492a71 +0x374f:  lea    -0x6c(%ebp),%eax
08492a74 +0x3752:  mov    %eax,(%esp)
08492a77 +0x3755:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08492a7c +0x375a:  mov    0x8(%ebp),%eax
08492a7f +0x375d:  lea    0xc(%eax),%edx
08492a82 +0x3760:  lea    -0x6c(%ebp),%eax
08492a85 +0x3763:  mov    %eax,0x8(%esp)
08492a89 +0x3767:  mov    0xc(%ebp),%eax
08492a8c +0x376a:  mov    %eax,0x4(%esp)
08492a90 +0x376e:  mov    %edx,(%esp)
08492a93 +0x3771:  call   084953b2 <+0x6090>
08492a98 +0x3776:  jmp    08492ab5 <+0x3793>
08492a9a +0x3778:  mov    %edx,%ebx
08492a9c +0x377a:  mov    %eax,%esi
08492a9e +0x377c:  lea    -0x6c(%ebp),%eax
08492aa1 +0x377f:  mov    %eax,(%esp)
08492aa4 +0x3782:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08492aa9 +0x3787:  mov    %esi,%eax
08492aab +0x3789:  mov    %ebx,%edx
08492aad +0x378b:  mov    %eax,(%esp)
08492ab0 +0x378e:  call   08ae3750 <_Unwind_Resume>
08492ab5 +0x3793:  lea    -0x6c(%ebp),%eax
08492ab8 +0x3796:  mov    %eax,(%esp)
08492abb +0x3799:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08492ac0 +0x379e:  jmp    08492b94 <+0x3872>
08492ac5 +0x37a3:  mov    0x8(%ebp),%eax
08492ac8 +0x37a6:  mov    (%eax),%eax
08492aca +0x37a8:  add    $0x10,%eax
08492acd +0x37ab:  mov    (%eax),%edx
08492acf +0x37ad:  mov    0x8(%ebp),%eax
08492ad2 +0x37b0:  mov    %eax,(%esp)
08492ad5 +0x37b3:  call   *%edx
08492ad7 +0x37b5:  cmp    $0x1,%eax
08492ada +0x37b8:  sete   %al
08492add +0x37bb:  test   %al,%al
08492adf +0x37bd:  je     08492b94 <+0x3872>
08492ae5 +0x37c3:  lea    -0x80(%ebp),%eax
08492ae8 +0x37c6:  mov    %eax,(%esp)
08492aeb +0x37c9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08492af0 +0x37ce:  lea    -0x80(%ebp),%eax
08492af3 +0x37d1:  mov    %eax,(%esp)
08492af6 +0x37d4:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08492afb +0x37d9:  movl   $0x83,0x8(%esp)
08492b03 +0x37e1:  movl   $0x1,0x4(%esp)
08492b0b +0x37e9:  lea    -0x80(%ebp),%eax
08492b0e +0x37ec:  mov    %eax,(%esp)
08492b11 +0x37ef:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08492b16 +0x37f4:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08492b1b +0x37f9:  mov    %eax,0x4(%esp)
08492b1f +0x37fd:  lea    -0x80(%ebp),%eax
08492b22 +0x3800:  mov    %eax,(%esp)
08492b25 +0x3803:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08492b2a +0x3808:  movl   $0x0,0x4(%esp)
08492b32 +0x3810:  lea    -0x80(%ebp),%eax
08492b35 +0x3813:  mov    %eax,(%esp)
08492b38 +0x3816:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08492b3d +0x381b:  movl   $0x0,0x4(%esp)
08492b45 +0x3823:  lea    -0x80(%ebp),%eax
08492b48 +0x3826:  mov    %eax,(%esp)
08492b4b +0x3829:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08492b50 +0x382e:  mov    0x8(%ebp),%eax
08492b53 +0x3831:  lea    0xc(%eax),%edx
08492b56 +0x3834:  lea    -0x80(%ebp),%eax
08492b59 +0x3837:  mov    %eax,0x8(%esp)
08492b5d +0x383b:  mov    0xc(%ebp),%eax
08492b60 +0x383e:  mov    %eax,0x4(%esp)
08492b64 +0x3842:  mov    %edx,(%esp)
08492b67 +0x3845:  call   084953b2 <+0x6090>
08492b6c +0x384a:  jmp    08492b89 <+0x3867>
08492b6e +0x384c:  mov    %edx,%ebx
08492b70 +0x384e:  mov    %eax,%esi
08492b72 +0x3850:  lea    -0x80(%ebp),%eax
08492b75 +0x3853:  mov    %eax,(%esp)
08492b78 +0x3856:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08492b7d +0x385b:  mov    %esi,%eax
08492b7f +0x385d:  mov    %ebx,%edx
08492b81 +0x385f:  mov    %eax,(%esp)
08492b84 +0x3862:  call   08ae3750 <_Unwind_Resume>
08492b89 +0x3867:  lea    -0x80(%ebp),%eax
08492b8c +0x386a:  mov    %eax,(%esp)
08492b8f +0x386d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08492b94 +0x3872:  mov    -0x4c(%ebp),%eax
08492b97 +0x3875:  lea    -0x5c(%ebp),%edx
08492b9a +0x3878:  mov    %edx,0x8(%esp)
08492b9e +0x387c:  mov    %eax,0x4(%esp)
08492ba2 +0x3880:  mov    0x8(%ebp),%eax
08492ba5 +0x3883:  mov    %eax,(%esp)
08492ba8 +0x3886:  call   0849135c <+0x203a>
08492bad +0x388b:  xor    $0x1,%eax
08492bb0 +0x388e:  test   %al,%al
08492bb2 +0x3890:  je     08492bf1 <+0x38cf>
08492bb4 +0x3892:  mov    -0x4c(%ebp),%ebx
08492bb7 +0x3895:  movl   $0x0,0xc(%esp)
08492bbf +0x389d:  movl   $0x2c6,0x8(%esp)
08492bc7 +0x38a5:  movl   $&_ZZN15exchange_server15CExchangeServer22OnRecvPacketServerInfoEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492bcf +0x38ad:  lea    -0x38(%ebp),%eax
08492bd2 +0x38b0:  mov    %eax,(%esp)
08492bd5 +0x38b3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492bda +0x38b8:  mov    %ebx,0x8(%esp)
08492bde +0x38bc:  movl   $"RegisterExchangeServer! failed (%d)",0x4(%esp)
08492be6 +0x38c4:  lea    -0x38(%ebp),%eax
08492be9 +0x38c7:  mov    %eax,(%esp)
08492bec +0x38ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492bf1 +0x38cf:  mov    -0x4c(%ebp),%eax
08492bf4 +0x38d2:  mov    0xc(%ebp),%edx
08492bf7 +0x38d5:  mov    %edx,0x8(%esp)
08492bfb +0x38d9:  mov    %eax,0x4(%esp)
08492bff +0x38dd:  mov    0x8(%ebp),%eax
08492c02 +0x38e0:  mov    %eax,(%esp)
08492c05 +0x38e3:  call   08491296 <+0x1f74>
08492c0a +0x38e8:  xor    $0x1,%eax
08492c0d +0x38eb:  test   %al,%al
08492c0f +0x38ed:  je     08492c4e <+0x392c>
08492c11 +0x38ef:  mov    -0x4c(%ebp),%ebx
08492c14 +0x38f2:  movl   $0x0,0xc(%esp)
08492c1c +0x38fa:  movl   $0x2cb,0x8(%esp)
08492c24 +0x3902:  movl   $&_ZZN15exchange_server15CExchangeServer22OnRecvPacketServerInfoEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492c2c +0x390a:  lea    -0x28(%ebp),%eax
08492c2f +0x390d:  mov    %eax,(%esp)
08492c32 +0x3910:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492c37 +0x3915:  mov    %ebx,0x8(%esp)
08492c3b +0x3919:  movl   $"AttachSessionInExchangeServer! failed (%d)",0x4(%esp)
08492c43 +0x3921:  lea    -0x28(%ebp),%eax
08492c46 +0x3924:  mov    %eax,(%esp)
08492c49 +0x3927:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492c4e +0x392c:  mov    $0x0,%eax
08492c53 +0x3931:  lea    -0xc(%ebp),%esp
08492c56 +0x3934:  add    $0x0,%esp
08492c59 +0x3937:  pop    %ebx
08492c5a +0x3938:  pop    %esi
08492c5b +0x3939:  pop    %edi
08492c5c +0x393a:  pop    %ebp
08492c5d +0x393b:  ret
08492c5e +0x393c:  push   %ebp
08492c5f +0x393d:  mov    %esp,%ebp
08492c61 +0x393f:  push   %edi
08492c62 +0x3940:  push   %esi
08492c63 +0x3941:  push   %ebx
08492c64 +0x3942:  sub    $0xac,%esp
08492c6a +0x3948:  movl   $0x0,-0x74(%ebp)
08492c71 +0x394f:  movl   $0x0,-0x78(%ebp)
08492c78 +0x3956:  movl   $0x0,-0x7c(%ebp)
08492c7f +0x395d:  lea    -0x8c(%ebp),%eax
08492c85 +0x3963:  mov    %eax,(%esp)
08492c88 +0x3966:  call   08491004 <+0x1ce2>
08492c8d +0x396b:  mov    0x10(%ebp),%eax
08492c90 +0x396e:  lea    -0x7c(%ebp),%edx
08492c93 +0x3971:  mov    %edx,0x4(%esp)
08492c97 +0x3975:  mov    %eax,(%esp)
08492c9a +0x3978:  call   0848f3dc <+0xba>
08492c9f +0x397d:  xor    $0x1,%eax
08492ca2 +0x3980:  test   %al,%al
08492ca4 +0x3982:  je     08492cb0 <+0x398e>
08492ca6 +0x3984:  mov    $0x2d9,%eax
08492cab +0x3989:  jmp    08492ff7 <+0x3cd5>
08492cb0 +0x398e:  mov    0x10(%ebp),%eax
08492cb3 +0x3991:  lea    -0x74(%ebp),%edx
08492cb6 +0x3994:  mov    %edx,0x4(%esp)
08492cba +0x3998:  mov    %eax,(%esp)
08492cbd +0x399b:  call   0848f3dc <+0xba>
08492cc2 +0x39a0:  xor    $0x1,%eax
08492cc5 +0x39a3:  test   %al,%al
08492cc7 +0x39a5:  je     08492cd3 <+0x39b1>
08492cc9 +0x39a7:  mov    $0x2da,%eax
08492cce +0x39ac:  jmp    08492ff7 <+0x3cd5>
08492cd3 +0x39b1:  mov    -0x74(%ebp),%esi
08492cd6 +0x39b4:  mov    -0x7c(%ebp),%ebx
08492cd9 +0x39b7:  movl   $0x0,0xc(%esp)
08492ce1 +0x39bf:  movl   $0x2dc,0x8(%esp)
08492ce9 +0x39c7:  movl   $&_ZZN15exchange_server15CExchangeServer25OnRecvPacketServerInfoRetEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492cf1 +0x39cf:  lea    -0x70(%ebp),%eax
08492cf4 +0x39d2:  mov    %eax,(%esp)
08492cf7 +0x39d5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492cfc +0x39da:  mov    %esi,0xc(%esp)
08492d00 +0x39de:  mov    %ebx,0x8(%esp)
08492d04 +0x39e2:  movl   $"channel no(%d), server count(%d)",0x4(%esp)
08492d0c +0x39ea:  lea    -0x70(%ebp),%eax
08492d0f +0x39ed:  mov    %eax,(%esp)
08492d12 +0x39f0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492d17 +0x39f5:  movl   $0x0,-0x1c(%ebp)
08492d1e +0x39fc:  jmp    08492f79 <+0x3c57>
08492d23 +0x3a01:  mov    0x10(%ebp),%eax
08492d26 +0x3a04:  lea    -0x78(%ebp),%edx
08492d29 +0x3a07:  mov    %edx,0x4(%esp)
08492d2d +0x3a0b:  mov    %eax,(%esp)
08492d30 +0x3a0e:  call   0848f3dc <+0xba>
08492d35 +0x3a13:  xor    $0x1,%eax
08492d38 +0x3a16:  test   %al,%al
08492d3a +0x3a18:  je     08492d46 <+0x3a24>
08492d3c +0x3a1a:  mov    $0x2e0,%eax
08492d41 +0x3a1f:  jmp    08492ff7 <+0x3cd5>
08492d46 +0x3a24:  mov    0x10(%ebp),%eax
08492d49 +0x3a27:  lea    -0x8c(%ebp),%edx
08492d4f +0x3a2d:  mov    %edx,0x4(%esp)
08492d53 +0x3a31:  mov    %eax,(%esp)
08492d56 +0x3a34:  call   0848f3dc <+0xba>
08492d5b +0x3a39:  xor    $0x1,%eax
08492d5e +0x3a3c:  test   %al,%al
08492d60 +0x3a3e:  je     08492d6c <+0x3a4a>
08492d62 +0x3a40:  mov    $0x2e1,%eax
08492d67 +0x3a45:  jmp    08492ff7 <+0x3cd5>
08492d6c +0x3a4a:  mov    0x10(%ebp),%eax
08492d6f +0x3a4d:  lea    -0x8c(%ebp),%edx
08492d75 +0x3a53:  add    $0x4,%edx
08492d78 +0x3a56:  mov    %edx,0x4(%esp)
08492d7c +0x3a5a:  mov    %eax,(%esp)
08492d7f +0x3a5d:  call   0848f3c0 <+0x9e>
08492d84 +0x3a62:  xor    $0x1,%eax
08492d87 +0x3a65:  test   %al,%al
08492d89 +0x3a67:  je     08492d95 <+0x3a73>
08492d8b +0x3a69:  mov    $0x2e2,%eax
08492d90 +0x3a6e:  jmp    08492ff7 <+0x3cd5>
08492d95 +0x3a73:  movl   $0x1,-0x84(%ebp)
08492d9f +0x3a7d:  mov    -0x8c(%ebp),%eax
08492da5 +0x3a83:  mov    %eax,-0x90(%ebp)
08492dab +0x3a89:  movzwl -0x88(%ebp),%eax
08492db2 +0x3a90:  movswl %ax,%edi
08492db5 +0x3a93:  mov    -0x90(%ebp),%eax
08492dbb +0x3a99:  mov    %eax,(%esp)
08492dbe +0x3a9c:  call   0807ddc0 <_init+0x6b8>
08492dc3 +0x3aa1:  mov    %eax,%ebx
08492dc5 +0x3aa3:  mov    -0x78(%ebp),%esi
08492dc8 +0x3aa6:  movl   $0x0,0xc(%esp)
08492dd0 +0x3aae:  movl   $0x2e8,0x8(%esp)
08492dd8 +0x3ab6:  movl   $&_ZZN15exchange_server15CExchangeServer25OnRecvPacketServerInfoRetEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492de0 +0x3abe:  lea    -0x60(%ebp),%eax
08492de3 +0x3ac1:  mov    %eax,(%esp)
08492de6 +0x3ac4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492deb +0x3ac9:  mov    %edi,0x10(%esp)
08492def +0x3acd:  mov    %ebx,0xc(%esp)
08492df3 +0x3ad1:  mov    %esi,0x8(%esp)
08492df7 +0x3ad5:  movl   $"channel no(%d), server ip(%s), port(%d)",0x4(%esp)
08492dff +0x3add:  lea    -0x60(%ebp),%eax
08492e02 +0x3ae0:  mov    %eax,(%esp)
08492e05 +0x3ae3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492e0a +0x3ae8:  mov    0x8(%ebp),%eax
08492e0d +0x3aeb:  mov    0x40(%eax),%edx
08492e10 +0x3aee:  mov    -0x8c(%ebp),%eax
08492e16 +0x3af4:  cmp    %eax,%edx
08492e18 +0x3af6:  jne    08492e31 <+0x3b0f>
08492e1a +0x3af8:  mov    0x8(%ebp),%eax
08492e1d +0x3afb:  movzwl 0x44(%eax),%edx
08492e21 +0x3aff:  movzwl -0x88(%ebp),%eax
08492e28 +0x3b06:  cmp    %ax,%dx
08492e2b +0x3b09:  je     08492f15 <+0x3bf3>
08492e31 +0x3b0f:  mov    0x8(%ebp),%eax
08492e34 +0x3b12:  lea    0x50(%eax),%ecx
08492e37 +0x3b15:  lea    -0x94(%ebp),%eax
08492e3d +0x3b1b:  lea    -0x78(%ebp),%edx
08492e40 +0x3b1e:  mov    %edx,0x8(%esp)
08492e44 +0x3b22:  mov    %ecx,0x4(%esp)
08492e48 +0x3b26:  mov    %eax,(%esp)
08492e4b +0x3b29:  call   08495386 <+0x6064>
08492e50 +0x3b2e:  sub    $0x4,%esp
08492e53 +0x3b31:  mov    0x8(%ebp),%eax
08492e56 +0x3b34:  lea    0x50(%eax),%edx
08492e59 +0x3b37:  lea    -0x50(%ebp),%eax
08492e5c +0x3b3a:  mov    %edx,0x4(%esp)
08492e60 +0x3b3e:  mov    %eax,(%esp)
08492e63 +0x3b41:  call   08495320 <+0x5ffe>
08492e68 +0x3b46:  sub    $0x4,%esp
08492e6b +0x3b49:  lea    -0x50(%ebp),%eax
08492e6e +0x3b4c:  mov    %eax,0x4(%esp)
08492e72 +0x3b50:  lea    -0x94(%ebp),%eax
08492e78 +0x3b56:  mov    %eax,(%esp)
08492e7b +0x3b59:  call   08495404 <+0x60e2>
08492e80 +0x3b5e:  test   %al,%al
08492e82 +0x3b60:  je     08492f15 <+0x3bf3>
08492e88 +0x3b66:  movzwl -0x88(%ebp),%eax
08492e8f +0x3b6d:  movswl %ax,%ebx
08492e92 +0x3b70:  mov    -0x90(%ebp),%eax
08492e98 +0x3b76:  mov    %eax,(%esp)
08492e9b +0x3b79:  call   0807ddc0 <_init+0x6b8>
08492ea0 +0x3b7e:  mov    0x8(%ebp),%edx
08492ea3 +0x3b81:  add    $0xc,%edx
08492ea6 +0x3b84:  mov    %ebx,0x8(%esp)
08492eaa +0x3b88:  mov    %eax,0x4(%esp)
08492eae +0x3b8c:  mov    %edx,(%esp)
08492eb1 +0x3b8f:  call   08495506 <+0x61e4>
08492eb6 +0x3b94:  xor    $0x1,%eax
08492eb9 +0x3b97:  test   %al,%al
08492ebb +0x3b99:  je     08492f15 <+0x3bf3>
08492ebd +0x3b9b:  movzwl -0x88(%ebp),%eax
08492ec4 +0x3ba2:  movswl %ax,%esi
08492ec7 +0x3ba5:  mov    -0x90(%ebp),%eax
08492ecd +0x3bab:  mov    %eax,(%esp)
08492ed0 +0x3bae:  call   0807ddc0 <_init+0x6b8>
08492ed5 +0x3bb3:  mov    %eax,%ebx
08492ed7 +0x3bb5:  movl   $0x0,0xc(%esp)
08492edf +0x3bbd:  movl   $0x2f2,0x8(%esp)
08492ee7 +0x3bc5:  movl   $&_ZZN15exchange_server15CExchangeServer25OnRecvPacketServerInfoRetEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492eef +0x3bcd:  lea    -0x4c(%ebp),%eax
08492ef2 +0x3bd0:  mov    %eax,(%esp)
08492ef5 +0x3bd3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492efa +0x3bd8:  mov    %esi,0xc(%esp)
08492efe +0x3bdc:  mov    %ebx,0x8(%esp)
08492f02 +0x3be0:  movl   $"cannot connect other game server! (%s,%d)",0x4(%esp)
08492f0a +0x3be8:  lea    -0x4c(%ebp),%eax
08492f0d +0x3beb:  mov    %eax,(%esp)
08492f10 +0x3bee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492f15 +0x3bf3:  mov    -0x78(%ebp),%eax
08492f18 +0x3bf6:  lea    -0x8c(%ebp),%edx
08492f1e +0x3bfc:  mov    %edx,0x8(%esp)
08492f22 +0x3c00:  mov    %eax,0x4(%esp)
08492f26 +0x3c04:  mov    0x8(%ebp),%eax
08492f29 +0x3c07:  mov    %eax,(%esp)
08492f2c +0x3c0a:  call   0849135c <+0x203a>
08492f31 +0x3c0f:  xor    $0x1,%eax
08492f34 +0x3c12:  test   %al,%al
08492f36 +0x3c14:  je     08492f75 <+0x3c53>
08492f38 +0x3c16:  mov    -0x78(%ebp),%ebx
08492f3b +0x3c19:  movl   $0x0,0xc(%esp)
08492f43 +0x3c21:  movl   $0x301,0x8(%esp)
08492f4b +0x3c29:  movl   $&_ZZN15exchange_server15CExchangeServer25OnRecvPacketServerInfoRetEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492f53 +0x3c31:  lea    -0x3c(%ebp),%eax
08492f56 +0x3c34:  mov    %eax,(%esp)
08492f59 +0x3c37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492f5e +0x3c3c:  mov    %ebx,0x8(%esp)
08492f62 +0x3c40:  movl   $"RegisterExchangeServer! failed (%d)",0x4(%esp)
08492f6a +0x3c48:  lea    -0x3c(%ebp),%eax
08492f6d +0x3c4b:  mov    %eax,(%esp)
08492f70 +0x3c4e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492f75 +0x3c53:  addl   $0x1,-0x1c(%ebp)
08492f79 +0x3c57:  mov    -0x74(%ebp),%eax
08492f7c +0x3c5a:  cmp    %eax,-0x1c(%ebp)
08492f7f +0x3c5d:  setl   %al
08492f82 +0x3c60:  test   %al,%al
08492f84 +0x3c62:  jne    08492d23 <+0x3a01>
08492f8a +0x3c68:  mov    -0x7c(%ebp),%eax
08492f8d +0x3c6b:  mov    0xc(%ebp),%edx
08492f90 +0x3c6e:  mov    %edx,0x8(%esp)
08492f94 +0x3c72:  mov    %eax,0x4(%esp)
08492f98 +0x3c76:  mov    0x8(%ebp),%eax
08492f9b +0x3c79:  mov    %eax,(%esp)
08492f9e +0x3c7c:  call   08491296 <+0x1f74>
08492fa3 +0x3c81:  xor    $0x1,%eax
08492fa6 +0x3c84:  test   %al,%al
08492fa8 +0x3c86:  je     08492fe7 <+0x3cc5>
08492faa +0x3c88:  mov    -0x7c(%ebp),%ebx
08492fad +0x3c8b:  movl   $0x0,0xc(%esp)
08492fb5 +0x3c93:  movl   $0x307,0x8(%esp)
08492fbd +0x3c9b:  movl   $&_ZZN15exchange_server15CExchangeServer25OnRecvPacketServerInfoRetEPNS_8CSessionER11PacketGuardE19__PRETTY_FUNCTION__,0x4(%esp)
08492fc5 +0x3ca3:  lea    -0x2c(%ebp),%eax
08492fc8 +0x3ca6:  mov    %eax,(%esp)
08492fcb +0x3ca9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08492fd0 +0x3cae:  mov    %ebx,0x8(%esp)
08492fd4 +0x3cb2:  movl   $"AttachSessionInExchangeServer! failed (%d)",0x4(%esp)
08492fdc +0x3cba:  lea    -0x2c(%ebp),%eax
08492fdf +0x3cbd:  mov    %eax,(%esp)
08492fe2 +0x3cc0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08492fe7 +0x3cc5:  mov    0x8(%ebp),%eax
08492fea +0x3cc8:  mov    %eax,(%esp)
08492fed +0x3ccb:  call   084911a4 <+0x1e82>
08492ff2 +0x3cd0:  mov    $0x0,%eax
08492ff7 +0x3cd5:  lea    -0xc(%ebp),%esp
08492ffa +0x3cd8:  add    $0x0,%esp
08492ffd +0x3cdb:  pop    %ebx
08492ffe +0x3cdc:  pop    %esi
08492fff +0x3cdd:  pop    %edi
08493000 +0x3cde:  pop    %ebp
08493001 +0x3cdf:  ret
08493002 +0x3ce0:  push   %ebp
08493003 +0x3ce1:  mov    %esp,%ebp
08493005 +0x3ce3:  push   %esi
08493006 +0x3ce4:  push   %ebx
08493007 +0x3ce5:  sub    $0x50,%esp
0849300a +0x3ce8:  lea    -0x3c(%ebp),%eax
0849300d +0x3ceb:  mov    %eax,(%esp)
08493010 +0x3cee:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08493015 +0x3cf3:  mov    0x10(%ebp),%eax
08493018 +0x3cf6:  movzbl (%eax),%eax
0849301b +0x3cf9:  movsbl %al,%eax
0849301e +0x3cfc:  mov    %eax,-0x10(%ebp)
08493021 +0x3cff:  mov    0x10(%ebp),%eax
08493024 +0x3d02:  add    $0x1,%eax
08493027 +0x3d05:  movzbl (%eax),%eax
0849302a +0x3d08:  mov    %al,-0x9(%ebp)
0849302d +0x3d0b:  mov    0x14(%ebp),%eax
08493030 +0x3d0e:  mov    %eax,0x8(%esp)
08493034 +0x3d12:  mov    0x10(%ebp),%eax
08493037 +0x3d15:  mov    %eax,0x4(%esp)
0849303b +0x3d19:  lea    -0x3c(%ebp),%eax
0849303e +0x3d1c:  mov    %eax,(%esp)
08493041 +0x3d1f:  call   0848f39c <+0x7a>
08493046 +0x3d24:  xor    $0x1,%eax
08493049 +0x3d27:  test   %al,%al
0849304b +0x3d29:  je     08493057 <+0x3d35>
0849304d +0x3d2b:  mov    $0x315,%ebx
08493052 +0x3d30:  jmp    084931ca <+0x3ea8>
08493057 +0x3d35:  movl   $0xf,0x4(%esp)
0849305f +0x3d3d:  lea    -0x3c(%ebp),%eax
08493062 +0x3d40:  mov    %eax,(%esp)
08493065 +0x3d43:  call   0822b7b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe5a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe5a
0849306a +0x3d48:  mov    -0x10(%ebp),%eax
0849306d +0x3d4b:  cmp    $0x1,%eax
08493070 +0x3d4e:  jne    0849316b <+0x3e49>
08493076 +0x3d54:  movzbl -0x9(%ebp),%eax
0849307a +0x3d58:  cmp    $0x83,%eax
0849307f +0x3d5d:  je     0849310b <+0x3de9>
08493085 +0x3d63:  cmp    $0x83,%eax
0849308a +0x3d68:  jg     08493098 <+0x3d76>
0849308c +0x3d6a:  cmp    $0x82,%eax
08493091 +0x3d6f:  je     084930eb <+0x3dc9>
08493093 +0x3d71:  jmp    0849312b <+0x3e09>
08493098 +0x3d76:  cmp    $0x84,%eax
0849309d +0x3d7b:  je     084930ab <+0x3d89>
0849309f +0x3d7d:  cmp    $0x85,%eax
084930a4 +0x3d82:  je     084930cb <+0x3da9>
084930a6 +0x3d84:  jmp    0849312b <+0x3e09>
084930ab +0x3d89:  lea    -0x3c(%ebp),%eax
084930ae +0x3d8c:  mov    %eax,0x8(%esp)
084930b2 +0x3d90:  mov    0xc(%ebp),%eax
084930b5 +0x3d93:  mov    %eax,0x4(%esp)
084930b9 +0x3d97:  mov    0x8(%ebp),%eax
084930bc +0x3d9a:  mov    %eax,(%esp)
084930bf +0x3d9d:  call   084922ee <+0x2fcc>
084930c4 +0x3da2:  mov    %eax,%ebx
084930c6 +0x3da4:  jmp    084931ca <+0x3ea8>
084930cb +0x3da9:  lea    -0x3c(%ebp),%eax
084930ce +0x3dac:  mov    %eax,0x8(%esp)
084930d2 +0x3db0:  mov    0xc(%ebp),%eax
084930d5 +0x3db3:  mov    %eax,0x4(%esp)
084930d9 +0x3db7:  mov    0x8(%ebp),%eax
084930dc +0x3dba:  mov    %eax,(%esp)
084930df +0x3dbd:  call   084925e8 <+0x32c6>
084930e4 +0x3dc2:  mov    %eax,%ebx
084930e6 +0x3dc4:  jmp    084931ca <+0x3ea8>
084930eb +0x3dc9:  lea    -0x3c(%ebp),%eax
084930ee +0x3dcc:  mov    %eax,0x8(%esp)
084930f2 +0x3dd0:  mov    0xc(%ebp),%eax
084930f5 +0x3dd3:  mov    %eax,0x4(%esp)
084930f9 +0x3dd7:  mov    0x8(%ebp),%eax
084930fc +0x3dda:  mov    %eax,(%esp)
084930ff +0x3ddd:  call   08492854 <+0x3532>
08493104 +0x3de2:  mov    %eax,%ebx
08493106 +0x3de4:  jmp    084931ca <+0x3ea8>
0849310b +0x3de9:  lea    -0x3c(%ebp),%eax
0849310e +0x3dec:  mov    %eax,0x8(%esp)
08493112 +0x3df0:  mov    0xc(%ebp),%eax
08493115 +0x3df3:  mov    %eax,0x4(%esp)
08493119 +0x3df7:  mov    0x8(%ebp),%eax
0849311c +0x3dfa:  mov    %eax,(%esp)
0849311f +0x3dfd:  call   08492c5e <+0x393c>
08493124 +0x3e02:  mov    %eax,%ebx
08493126 +0x3e04:  jmp    084931ca <+0x3ea8>
0849312b +0x3e09:  movzbl -0x9(%ebp),%ebx
0849312f +0x3e0d:  movl   $0x0,0xc(%esp)
08493137 +0x3e15:  movl   $0x328,0x8(%esp)
0849313f +0x3e1d:  movl   $&_ZZN15exchange_server15CExchangeServer14DispatchPacketEPNS_8CSessionEPciE19__PRETTY_FUNCTION__,0x4(%esp)
08493147 +0x3e25:  lea    -0x30(%ebp),%eax
0849314a +0x3e28:  mov    %eax,(%esp)
0849314d +0x3e2b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493152 +0x3e30:  mov    %ebx,0x8(%esp)
08493156 +0x3e34:  movl   $"unknown packet code %d",0x4(%esp)
0849315e +0x3e3c:  lea    -0x30(%ebp),%eax
08493161 +0x3e3f:  mov    %eax,(%esp)
08493164 +0x3e42:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493169 +0x3e47:  jmp    084931a8 <+0x3e86>
0849316b +0x3e49:  mov    -0x10(%ebp),%ebx
0849316e +0x3e4c:  movl   $0x0,0xc(%esp)
08493176 +0x3e54:  movl   $0x330,0x8(%esp)
0849317e +0x3e5c:  movl   $&_ZZN15exchange_server15CExchangeServer14DispatchPacketEPNS_8CSessionEPciE19__PRETTY_FUNCTION__,0x4(%esp)
08493186 +0x3e64:  lea    -0x20(%ebp),%eax
08493189 +0x3e67:  mov    %eax,(%esp)
0849318c +0x3e6a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493191 +0x3e6f:  mov    %ebx,0x8(%esp)
08493195 +0x3e73:  movl   $"unknown packet type %d",0x4(%esp)
0849319d +0x3e7b:  lea    -0x20(%ebp),%eax
084931a0 +0x3e7e:  mov    %eax,(%esp)
084931a3 +0x3e81:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084931a8 +0x3e86:  mov    $0x0,%ebx
084931ad +0x3e8b:  jmp    084931ca <+0x3ea8>
084931af +0x3e8d:  mov    %edx,%ebx
084931b1 +0x3e8f:  mov    %eax,%esi
084931b3 +0x3e91:  lea    -0x3c(%ebp),%eax
084931b6 +0x3e94:  mov    %eax,(%esp)
084931b9 +0x3e97:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084931be +0x3e9c:  mov    %esi,%eax
084931c0 +0x3e9e:  mov    %ebx,%edx
084931c2 +0x3ea0:  mov    %eax,(%esp)
084931c5 +0x3ea3:  call   08ae3750 <_Unwind_Resume>
084931ca +0x3ea8:  lea    -0x3c(%ebp),%eax
084931cd +0x3eab:  mov    %eax,(%esp)
084931d0 +0x3eae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084931d5 +0x3eb3:  mov    %ebx,%eax
084931d7 +0x3eb5:  add    $0x50,%esp
084931da +0x3eb8:  pop    %ebx
084931db +0x3eb9:  pop    %esi
084931dc +0x3eba:  pop    %ebp
084931dd +0x3ebb:  ret
084931de +0x3ebc:  push   %ebp
084931df +0x3ebd:  mov    %esp,%ebp
084931e1 +0x3ebf:  push   %edi
084931e2 +0x3ec0:  push   %esi
084931e3 +0x3ec1:  push   %ebx
084931e4 +0x3ec2:  sub    $0x8c,%esp
084931ea +0x3ec8:  mov    0x8(%ebp),%eax
084931ed +0x3ecb:  movb   $0x1,0x39(%eax)
084931f1 +0x3ecf:  mov    0xc(%ebp),%eax
084931f4 +0x3ed2:  mov    %eax,(%esp)
084931f7 +0x3ed5:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
084931fc +0x3eda:  mov    %eax,-0x20(%ebp)
084931ff +0x3edd:  mov    -0x20(%ebp),%eax
08493202 +0x3ee0:  mov    %eax,-0x1c(%ebp)
08493205 +0x3ee3:  mov    -0x1c(%ebp),%eax
08493208 +0x3ee6:  mov    0x10(%eax),%eax
0849320b +0x3ee9:  mov    %eax,-0x74(%ebp)
0849320e +0x3eec:  mov    -0x1c(%ebp),%eax
08493211 +0x3eef:  mov    0x10(%eax),%eax
08493214 +0x3ef2:  mov    %eax,%edx
08493216 +0x3ef4:  mov    0x8(%ebp),%eax
08493219 +0x3ef7:  mov    %edx,0x40(%eax)
0849321c +0x3efa:  mov    -0x1c(%ebp),%eax
0849321f +0x3efd:  movzwl 0xe(%eax),%edx
08493223 +0x3f01:  mov    0x8(%ebp),%eax
08493226 +0x3f04:  mov    %dx,0x44(%eax)
0849322a +0x3f08:  mov    -0x1c(%ebp),%eax
0849322d +0x3f0b:  mov    0xa(%eax),%edi
08493230 +0x3f0e:  mov    -0x1c(%ebp),%eax
08493233 +0x3f11:  movzwl 0xe(%eax),%eax
08493237 +0x3f15:  movswl %ax,%esi
0849323a +0x3f18:  mov    -0x74(%ebp),%eax
0849323d +0x3f1b:  mov    %eax,(%esp)
08493240 +0x3f1e:  call   0807ddc0 <_init+0x6b8>
08493245 +0x3f23:  mov    %eax,%ebx
08493247 +0x3f25:  movl   $0x0,0xc(%esp)
0849324f +0x3f2d:  movl   $0x343,0x8(%esp)
08493257 +0x3f35:  movl   $&_ZZN15exchange_server15CExchangeServer23OnRecvMessageServerInfoEP6StreamiiE19__PRETTY_FUNCTION__,0x4(%esp)
0849325f +0x3f3d:  lea    -0x70(%ebp),%eax
08493262 +0x3f40:  mov    %eax,(%esp)
08493265 +0x3f43:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849326a +0x3f48:  mov    %edi,0x10(%esp)
0849326e +0x3f4c:  mov    %esi,0xc(%esp)
08493272 +0x3f50:  mov    %ebx,0x8(%esp)
08493276 +0x3f54:  movl   $"Exchange Server IP:%s, PORT:%d, Channel No:%d",0x4(%esp)
0849327e +0x3f5c:  lea    -0x70(%ebp),%eax
08493281 +0x3f5f:  mov    %eax,(%esp)
08493284 +0x3f62:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493289 +0x3f67:  mov    -0x1c(%ebp),%eax
0849328c +0x3f6a:  mov    0xa(%eax),%ebx
0849328f +0x3f6d:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08493294 +0x3f72:  cmp    %eax,%ebx
08493296 +0x3f74:  sete   %al
08493299 +0x3f77:  test   %al,%al
0849329b +0x3f79:  je     0849335b <+0x4039>
084932a1 +0x3f7f:  movl   $0x0,0xc(%esp)
084932a9 +0x3f87:  movl   $0x347,0x8(%esp)
084932b1 +0x3f8f:  movl   $&_ZZN15exchange_server15CExchangeServer23OnRecvMessageServerInfoEP6StreamiiE19__PRETTY_FUNCTION__,0x4(%esp)
084932b9 +0x3f97:  lea    -0x60(%ebp),%eax
084932bc +0x3f9a:  mov    %eax,(%esp)
084932bf +0x3f9d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084932c4 +0x3fa2:  movl   $"This is Exchange Master Server",0x4(%esp)
084932cc +0x3faa:  lea    -0x60(%ebp),%eax
084932cf +0x3fad:  mov    %eax,(%esp)
084932d2 +0x3fb0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084932d7 +0x3fb5:  mov    0x8(%ebp),%eax
084932da +0x3fb8:  movb   $0x1,0x38(%eax)
084932de +0x3fbc:  mov    -0x1c(%ebp),%eax
084932e1 +0x3fbf:  movzwl 0xe(%eax),%edx
084932e5 +0x3fc3:  mov    0x8(%ebp),%eax
084932e8 +0x3fc6:  movzwl 0x8(%eax),%eax
084932ec +0x3fca:  cmp    %ax,%dx
084932ef +0x3fcd:  je     08493343 <+0x4021>
084932f1 +0x3fcf:  mov    0x8(%ebp),%eax
084932f4 +0x3fd2:  movzwl 0x8(%eax),%eax
084932f8 +0x3fd6:  movswl %ax,%esi
084932fb +0x3fd9:  mov    -0x1c(%ebp),%eax
084932fe +0x3fdc:  movzwl 0xe(%eax),%eax
08493302 +0x3fe0:  movswl %ax,%ebx
08493305 +0x3fe3:  movl   $0x0,0xc(%esp)
0849330d +0x3feb:  movl   $0x34b,0x8(%esp)
08493315 +0x3ff3:  movl   $&_ZZN15exchange_server15CExchangeServer23OnRecvMessageServerInfoEP6StreamiiE19__PRETTY_FUNCTION__,0x4(%esp)
0849331d +0x3ffb:  lea    -0x50(%ebp),%eax
08493320 +0x3ffe:  mov    %eax,(%esp)
08493323 +0x4001:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493328 +0x4006:  mov    %esi,0xc(%esp)
0849332c +0x400a:  mov    %ebx,0x8(%esp)
08493330 +0x400e:  movl   $"different server port (%d,%d) ",0x4(%esp)
08493338 +0x4016:  lea    -0x50(%ebp),%eax
0849333b +0x4019:  mov    %eax,(%esp)
0849333e +0x401c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493343 +0x4021:  movl   $0x0,0x4(%esp)
0849334b +0x4029:  mov    0x8(%ebp),%eax
0849334e +0x402c:  mov    %eax,(%esp)
08493351 +0x402f:  call   0849103c <+0x1d1a>
08493356 +0x4034:  jmp    0849340c <+0x40ea>
0849335b +0x4039:  movl   $0x0,0xc(%esp)
08493363 +0x4041:  movl   $0x351,0x8(%esp)
0849336b +0x4049:  movl   $&_ZZN15exchange_server15CExchangeServer23OnRecvMessageServerInfoEP6StreamiiE19__PRETTY_FUNCTION__,0x4(%esp)
08493373 +0x4051:  lea    -0x40(%ebp),%eax
08493376 +0x4054:  mov    %eax,(%esp)
08493379 +0x4057:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849337e +0x405c:  movl   $"This is Exchange Slave Server",0x4(%esp)
08493386 +0x4064:  lea    -0x40(%ebp),%eax
08493389 +0x4067:  mov    %eax,(%esp)
0849338c +0x406a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493391 +0x406f:  mov    -0x1c(%ebp),%eax
08493394 +0x4072:  movzwl 0xe(%eax),%eax
08493398 +0x4076:  movswl %ax,%ebx
0849339b +0x4079:  mov    -0x74(%ebp),%eax
0849339e +0x407c:  mov    %eax,(%esp)
084933a1 +0x407f:  call   0807ddc0 <_init+0x6b8>
084933a6 +0x4084:  mov    0x8(%ebp),%edx
084933a9 +0x4087:  add    $0xc,%edx
084933ac +0x408a:  mov    %ebx,0x8(%esp)
084933b0 +0x408e:  mov    %eax,0x4(%esp)
084933b4 +0x4092:  mov    %edx,(%esp)
084933b7 +0x4095:  call   08495506 <+0x61e4>
084933bc +0x409a:  xor    $0x1,%eax
084933bf +0x409d:  test   %al,%al
084933c1 +0x409f:  je     084933f9 <+0x40d7>
084933c3 +0x40a1:  movl   $0x0,0xc(%esp)
084933cb +0x40a9:  movl   $0x354,0x8(%esp)
084933d3 +0x40b1:  movl   $&_ZZN15exchange_server15CExchangeServer23OnRecvMessageServerInfoEP6StreamiiE19__PRETTY_FUNCTION__,0x4(%esp)
084933db +0x40b9:  lea    -0x30(%ebp),%eax
084933de +0x40bc:  mov    %eax,(%esp)
084933e1 +0x40bf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084933e6 +0x40c4:  movl   $"cannot connect to other game server!",0x4(%esp)
084933ee +0x40cc:  lea    -0x30(%ebp),%eax
084933f1 +0x40cf:  mov    %eax,(%esp)
084933f4 +0x40d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084933f9 +0x40d7:  movl   $0x1,0x4(%esp)
08493401 +0x40df:  mov    0x8(%ebp),%eax
08493404 +0x40e2:  mov    %eax,(%esp)
08493407 +0x40e5:  call   0849103c <+0x1d1a>
0849340c +0x40ea:  mov    $0x0,%eax
08493411 +0x40ef:  add    $0x8c,%esp
08493417 +0x40f5:  pop    %ebx
08493418 +0x40f6:  pop    %esi
08493419 +0x40f7:  pop    %edi
0849341a +0x40f8:  pop    %ebp
0849341b +0x40f9:  ret
0849341c +0x40fa:  push   %ebp
0849341d +0x40fb:  mov    %esp,%ebp
0849341f +0x40fd:  push   %ebx
08493420 +0x40fe:  sub    $0x34,%esp
08493423 +0x4101:  movb   $0x0,-0x9(%ebp)
08493427 +0x4105:  lea    -0x10(%ebp),%eax
0849342a +0x4108:  mov    %eax,0x4(%esp)
0849342e +0x410c:  mov    0xc(%ebp),%eax
08493431 +0x410f:  mov    %eax,(%esp)
08493434 +0x4112:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08493439 +0x4117:  lea    -0x14(%ebp),%eax
0849343c +0x411a:  mov    %eax,0x4(%esp)
08493440 +0x411e:  mov    0xc(%ebp),%eax
08493443 +0x4121:  mov    %eax,(%esp)
08493446 +0x4124:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0849344b +0x4129:  cmpl   $0x20,0x10(%ebp)
0849344f +0x412d:  jne    08493455 <+0x4133>
08493451 +0x412f:  movb   $0x1,-0x9(%ebp)
08493455 +0x4133:  movzbl -0x9(%ebp),%ecx
08493459 +0x4137:  mov    -0x14(%ebp),%edx
0849345c +0x413a:  mov    -0x10(%ebp),%eax
0849345f +0x413d:  movl   $0x0,0x18(%esp)
08493467 +0x4145:  mov    %ecx,0x14(%esp)
0849346b +0x4149:  mov    %edx,0x10(%esp)
0849346f +0x414d:  mov    %eax,0xc(%esp)
08493473 +0x4151:  mov    0x14(%ebp),%eax
08493476 +0x4154:  mov    %eax,0x8(%esp)
0849347a +0x4158:  mov    0x10(%ebp),%eax
0849347d +0x415b:  mov    %eax,0x4(%esp)
08493481 +0x415f:  mov    0x8(%ebp),%eax
08493484 +0x4162:  mov    %eax,(%esp)
08493487 +0x4165:  call   084918d8 <+0x25b6>
0849348c +0x416a:  test   %al,%al
0849348e +0x416c:  je     0849349a <+0x4178>
08493490 +0x416e:  mov    $0x0,%eax
08493495 +0x4173:  jmp    0849352a <+0x4208>
0849349a +0x4178:  mov    0xc(%ebp),%eax
0849349d +0x417b:  mov    %eax,(%esp)
084934a0 +0x417e:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
084934a5 +0x4183:  mov    %eax,%ebx
084934a7 +0x4185:  mov    0xc(%ebp),%eax
084934aa +0x4188:  mov    %eax,(%esp)
084934ad +0x418b:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
084934b2 +0x4190:  mov    -0x14(%ebp),%ecx
084934b5 +0x4193:  mov    -0x10(%ebp),%edx
084934b8 +0x4196:  mov    %ebx,0x18(%esp)
084934bc +0x419a:  mov    %eax,0x14(%esp)
084934c0 +0x419e:  mov    %ecx,0x10(%esp)
084934c4 +0x41a2:  mov    %edx,0xc(%esp)
084934c8 +0x41a6:  mov    0x14(%ebp),%eax
084934cb +0x41a9:  mov    %eax,0x8(%esp)
084934cf +0x41ad:  mov    0x10(%ebp),%eax
084934d2 +0x41b0:  mov    %eax,0x4(%esp)
084934d6 +0x41b4:  mov    0x8(%ebp),%eax
084934d9 +0x41b7:  mov    %eax,(%esp)
084934dc +0x41ba:  call   0849152a <+0x2208>
084934e1 +0x41bf:  test   %al,%al
084934e3 +0x41c1:  je     084934ec <+0x41ca>
084934e5 +0x41c3:  mov    $0x0,%eax
084934ea +0x41c8:  jmp    0849352a <+0x4208>
084934ec +0x41ca:  mov    0xc(%ebp),%eax
084934ef +0x41cd:  mov    %eax,(%esp)
084934f2 +0x41d0:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
084934f7 +0x41d5:  mov    %eax,%ebx
084934f9 +0x41d7:  mov    0xc(%ebp),%eax
084934fc +0x41da:  mov    %eax,(%esp)
084934ff +0x41dd:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
08493504 +0x41e2:  mov    %ebx,0x10(%esp)
08493508 +0x41e6:  mov    %eax,0xc(%esp)
0849350c +0x41ea:  mov    0x14(%ebp),%eax
0849350f +0x41ed:  mov    %eax,0x8(%esp)
08493513 +0x41f1:  mov    0x10(%ebp),%eax
08493516 +0x41f4:  mov    %eax,0x4(%esp)
0849351a +0x41f8:  mov    0x8(%ebp),%eax
0849351d +0x41fb:  mov    %eax,(%esp)
08493520 +0x41fe:  call   08491c32 <+0x2910>
08493525 +0x4203:  mov    $0x0,%eax
0849352a +0x4208:  add    $0x34,%esp
0849352d +0x420b:  pop    %ebx
0849352e +0x420c:  pop    %ebp
0849352f +0x420d:  ret
08493530 +0x420e:  push   %ebp
08493531 +0x420f:  mov    %esp,%ebp
08493533 +0x4211:  push   %ebx
08493534 +0x4212:  sub    $0x34,%esp
08493537 +0x4215:  lea    -0x1c(%ebp),%eax
0849353a +0x4218:  mov    %eax,0x4(%esp)
0849353e +0x421c:  mov    0xc(%ebp),%eax
08493541 +0x421f:  mov    %eax,(%esp)
08493544 +0x4222:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08493549 +0x4227:  lea    -0x20(%ebp),%eax
0849354c +0x422a:  mov    %eax,0x4(%esp)
08493550 +0x422e:  mov    0xc(%ebp),%eax
08493553 +0x4231:  mov    %eax,(%esp)
08493556 +0x4234:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0849355b +0x4239:  mov    -0x1c(%ebp),%eax
0849355e +0x423c:  cmp    $0x19,%eax
08493561 +0x423f:  je     084935c0 <+0x429e>
08493563 +0x4241:  cmp    $0x19,%eax
08493566 +0x4244:  jg     08493579 <+0x4257>
08493568 +0x4246:  cmp    $0x7,%eax
0849356b +0x4249:  jl     084935e2 <+0x42c0>
0849356d +0x424b:  cmp    $0xc,%eax
08493570 +0x424e:  jle    084935c0 <+0x429e>
08493572 +0x4250:  cmp    $0x11,%eax
08493575 +0x4253:  je     084935c0 <+0x429e>
08493577 +0x4255:  jmp    084935e2 <+0x42c0>
08493579 +0x4257:  cmp    $0xb3,%eax
0849357e +0x425c:  je     084935c0 <+0x429e>
08493580 +0x425e:  cmp    $0xb3,%eax
08493585 +0x4263:  jg     0849358e <+0x426c>
08493587 +0x4265:  cmp    $0x20,%eax
0849358a +0x4268:  je     084935c0 <+0x429e>
0849358c +0x426a:  jmp    084935e2 <+0x42c0>
0849358e +0x426c:  cmp    $0xb8,%eax
08493593 +0x4271:  je     0849359e <+0x427c>
08493595 +0x4273:  cmp    $0x282,%eax
0849359a +0x4278:  je     084935c0 <+0x429e>
0849359c +0x427a:  jmp    084935e2 <+0x42c0>
0849359e +0x427c:  mov    -0x20(%ebp),%edx
084935a1 +0x427f:  mov    -0x1c(%ebp),%eax
084935a4 +0x4282:  mov    %edx,0xc(%esp)
084935a8 +0x4286:  mov    %eax,0x8(%esp)
084935ac +0x428a:  mov    0xc(%ebp),%eax
084935af +0x428d:  mov    %eax,0x4(%esp)
084935b3 +0x4291:  mov    0x8(%ebp),%eax
084935b6 +0x4294:  mov    %eax,(%esp)
084935b9 +0x4297:  call   084931de <+0x3ebc>
084935be +0x429c:  jmp    0849361f <+0x42fd>
084935c0 +0x429e:  mov    -0x20(%ebp),%edx
084935c3 +0x42a1:  mov    -0x1c(%ebp),%eax
084935c6 +0x42a4:  mov    %edx,0xc(%esp)
084935ca +0x42a8:  mov    %eax,0x8(%esp)
084935ce +0x42ac:  mov    0xc(%ebp),%eax
084935d1 +0x42af:  mov    %eax,0x4(%esp)
084935d5 +0x42b3:  mov    0x8(%ebp),%eax
084935d8 +0x42b6:  mov    %eax,(%esp)
084935db +0x42b9:  call   0849341c <+0x40fa>
084935e0 +0x42be:  jmp    0849361f <+0x42fd>
084935e2 +0x42c0:  mov    -0x1c(%ebp),%ebx
084935e5 +0x42c3:  movl   $0x0,0xc(%esp)
084935ed +0x42cb:  movl   $0x39d,0x8(%esp)
084935f5 +0x42d3:  movl   $&_ZZN15exchange_server15CExchangeServer15DispatchMessageEP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
084935fd +0x42db:  lea    -0x18(%ebp),%eax
08493600 +0x42de:  mov    %eax,(%esp)
08493603 +0x42e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493608 +0x42e6:  mov    %ebx,0x8(%esp)
0849360c +0x42ea:  movl   $"unknown message type %d",0x4(%esp)
08493614 +0x42f2:  lea    -0x18(%ebp),%eax
08493617 +0x42f5:  mov    %eax,(%esp)
0849361a +0x42f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849361f +0x42fd:  mov    $0x1,%eax
08493624 +0x4302:  add    $0x34,%esp
08493627 +0x4305:  pop    %ebx
08493628 +0x4306:  pop    %ebp
08493629 +0x4307:  ret
0849362a +0x4308:  push   %ebp
0849362b +0x4309:  mov    %esp,%ebp
0849362d +0x430b:  sub    $0x18,%esp
08493630 +0x430e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08493635 +0x4313:  movl   $0x5,0x4(%esp)
0849363d +0x431b:  mov    %eax,(%esp)
08493640 +0x431e:  call   085710ae <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE>  ; MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX)
08493645 +0x4323:  leave
08493646 +0x4324:  ret
08493647 +0x4325:  nop
08493648 +0x4326:  push   %ebp
08493649 +0x4327:  mov    %esp,%ebp
0849364b +0x4329:  sub    $0x58,%esp
0849364e +0x432c:  cmpl   $0x0,0xc(%ebp)
08493652 +0x4330:  jne    0849365e <+0x433c>
08493654 +0x4332:  mov    $0x0,%eax
08493659 +0x4337:  jmp    084937b8 <+0x4496>
0849365e +0x433c:  mov    0xc(%ebp),%eax
08493661 +0x433f:  mov    %eax,(%esp)
08493664 +0x4342:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
08493669 +0x4347:  mov    %eax,-0xc(%ebp)
0849366c +0x434a:  mov    0xc(%ebp),%eax
0849366f +0x434d:  mov    0x20(%eax),%eax
08493672 +0x4350:  cmp    $0x1,%eax
08493675 +0x4353:  je     08493689 <+0x4367>
08493677 +0x4355:  cmp    $0x2,%eax
0849367a +0x4358:  je     08493752 <+0x4430>
08493680 +0x435e:  test   %eax,%eax
08493682 +0x4360:  je     084936ef <+0x43cd>
08493684 +0x4362:  jmp    084937b3 <+0x4491>
08493689 +0x4367:  cmpl   $0xfff,-0xc(%ebp)
08493690 +0x436e:  jle    084936d6 <+0x43b4>
08493692 +0x4370:  movl   $0x5,0xc(%esp)
0849369a +0x4378:  movl   $0x3b5,0x8(%esp)
084936a2 +0x4380:  movl   $&_ZZN15exchange_server15CExchangeServer11FreeMessageEP6StreamiE19__PRETTY_FUNCTION__,0x4(%esp)
084936aa +0x4388:  lea    -0x3c(%ebp),%eax
084936ad +0x438b:  mov    %eax,(%esp)
084936b0 +0x438e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084936b5 +0x4393:  mov    -0xc(%ebp),%eax
084936b8 +0x4396:  mov    %eax,0xc(%esp)
084936bc +0x439a:  mov    0x10(%ebp),%eax
084936bf +0x439d:  mov    %eax,0x8(%esp)
084936c3 +0x43a1:  movl   $"Small Stream Size over code(%d), size(%u)",0x4(%esp)
084936cb +0x43a9:  lea    -0x3c(%ebp),%eax
084936ce +0x43ac:  mov    %eax,(%esp)
084936d1 +0x43af:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084936d6 +0x43b4:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
084936db +0x43b9:  mov    0xc(%ebp),%edx
084936de +0x43bc:  mov    %edx,0x4(%esp)
084936e2 +0x43c0:  mov    %eax,(%esp)
084936e5 +0x43c3:  call   08290004 <_ZN15SmallStreamPool4FreeEP6Stream>  ; SmallStreamPool::Free(Stream*)
084936ea +0x43c8:  jmp    084937b3 <+0x4491>
084936ef +0x43cd:  cmpl   $0x3fff,-0xc(%ebp)
084936f6 +0x43d4:  jle    0849373c <+0x441a>
084936f8 +0x43d6:  movl   $0x5,0xc(%esp)
08493700 +0x43de:  movl   $0x3c0,0x8(%esp)
08493708 +0x43e6:  movl   $&_ZZN15exchange_server15CExchangeServer11FreeMessageEP6StreamiE19__PRETTY_FUNCTION__,0x4(%esp)
08493710 +0x43ee:  lea    -0x2c(%ebp),%eax
08493713 +0x43f1:  mov    %eax,(%esp)
08493716 +0x43f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849371b +0x43f9:  mov    -0xc(%ebp),%eax
0849371e +0x43fc:  mov    %eax,0xc(%esp)
08493722 +0x4400:  mov    0x10(%ebp),%eax
08493725 +0x4403:  mov    %eax,0x8(%esp)
08493729 +0x4407:  movl   $"Default Stream Size over code(%d), size(%u)",0x4(%esp)
08493731 +0x440f:  lea    -0x2c(%ebp),%eax
08493734 +0x4412:  mov    %eax,(%esp)
08493737 +0x4415:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849373c +0x441a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08493741 +0x441f:  mov    0xc(%ebp),%edx
08493744 +0x4422:  mov    %edx,0x4(%esp)
08493748 +0x4426:  mov    %eax,(%esp)
0849374b +0x4429:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
08493750 +0x442e:  jmp    084937b3 <+0x4491>
08493752 +0x4430:  cmpl   $0x3ffff,-0xc(%ebp)
08493759 +0x4437:  jle    0849379f <+0x447d>
0849375b +0x4439:  movl   $0x5,0xc(%esp)
08493763 +0x4441:  movl   $0x3cb,0x8(%esp)
0849376b +0x4449:  movl   $&_ZZN15exchange_server15CExchangeServer11FreeMessageEP6StreamiE19__PRETTY_FUNCTION__,0x4(%esp)
08493773 +0x4451:  lea    -0x1c(%ebp),%eax
08493776 +0x4454:  mov    %eax,(%esp)
08493779 +0x4457:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849377e +0x445c:  mov    -0xc(%ebp),%eax
08493781 +0x445f:  mov    %eax,0xc(%esp)
08493785 +0x4463:  mov    0x10(%ebp),%eax
08493788 +0x4466:  mov    %eax,0x8(%esp)
0849378c +0x446a:  movl   $"Big Stream Size over code(%d), size(%u)",0x4(%esp)
08493794 +0x4472:  lea    -0x1c(%ebp),%eax
08493797 +0x4475:  mov    %eax,(%esp)
0849379a +0x4478:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849379f +0x447d:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
084937a4 +0x4482:  mov    0xc(%ebp),%edx
084937a7 +0x4485:  mov    %edx,0x4(%esp)
084937ab +0x4489:  mov    %eax,(%esp)
084937ae +0x448c:  call   08290304 <_ZN13BigStreamPool4FreeEP6Stream>  ; BigStreamPool::Free(Stream*)
084937b3 +0x4491:  mov    $0x1,%eax
084937b8 +0x4496:  leave
084937b9 +0x4497:  ret
084937ba +0x4498:  push   %ebp
084937bb +0x4499:  mov    %esp,%ebp
084937bd +0x449b:  push   %edi
084937be +0x449c:  push   %esi
084937bf +0x449d:  push   %ebx
084937c0 +0x449e:  sub    $0x2c,%esp
084937c3 +0x44a1:  mov    0x8(%ebp),%eax
084937c6 +0x44a4:  movzbl 0x38(%eax),%eax
084937ca +0x44a8:  test   %al,%al
084937cc +0x44aa:  jne    084937dc <+0x44ba>
084937ce +0x44ac:  mov    0x8(%ebp),%eax
084937d1 +0x44af:  movzbl 0x39(%eax),%eax
084937d5 +0x44b3:  xor    $0x1,%eax
084937d8 +0x44b6:  test   %al,%al
084937da +0x44b8:  je     08493848 <+0x4526>
084937dc +0x44ba:  movl   $0x0,(%esp)
084937e3 +0x44c1:  call   0807d750 <_init+0x48>
084937e8 +0x44c6:  mov    %eax,-0x1c(%ebp)
084937eb +0x44c9:  mov    0x8(%ebp),%eax
084937ee +0x44cc:  mov    0x3c(%eax),%eax
084937f1 +0x44cf:  mov    -0x1c(%ebp),%edx
084937f4 +0x44d2:  mov    %edx,%ecx
084937f6 +0x44d4:  sub    %eax,%ecx
084937f8 +0x44d6:  mov    %ecx,%eax
084937fa +0x44d8:  cmp    $0x9,%eax
084937fd +0x44db:  jle    08493848 <+0x4526>
084937ff +0x44dd:  mov    0x8(%ebp),%eax
08493802 +0x44e0:  movzwl 0x8(%eax),%eax
08493806 +0x44e4:  movswl %ax,%edi
08493809 +0x44e7:  mov    0x8(%ebp),%eax
0849380c +0x44ea:  mov    0x4(%eax),%esi
0849380f +0x44ed:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08493814 +0x44f2:  mov    %eax,%ebx
08493816 +0x44f4:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0849381b +0x44f9:  movl   $0x0,0x4(%esp)
08493823 +0x4501:  mov    %eax,(%esp)
08493826 +0x4504:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0849382b +0x4509:  mov    %edi,0xc(%esp)
0849382f +0x450d:  mov    %esi,0x8(%esp)
08493833 +0x4511:  mov    %ebx,0x4(%esp)
08493837 +0x4515:  mov    %eax,(%esp)
0849383a +0x4518:  call   08471124 <_ZN19CMonitorServerProxy22SendExchangeServerInfoEiis>  ; CMonitorServerProxy::SendExchangeServerInfo(int, int, short)
0849383f +0x451d:  mov    0x8(%ebp),%eax
08493842 +0x4520:  mov    -0x1c(%ebp),%edx
08493845 +0x4523:  mov    %edx,0x3c(%eax)
08493848 +0x4526:  mov    $0x1,%eax
0849384d +0x452b:  add    $0x2c,%esp
08493850 +0x452e:  pop    %ebx
08493851 +0x452f:  pop    %esi
08493852 +0x4530:  pop    %edi
08493853 +0x4531:  pop    %ebp
08493854 +0x4532:  ret
08493855 +0x4533:  nop
08493856 +0x4534:  push   %ebp
08493857 +0x4535:  mov    %esp,%ebp
08493859 +0x4537:  push   %ebx
0849385a +0x4538:  sub    $0x84,%esp
08493860 +0x453e:  call   0848f28e <_ZN15exchange_server11GetServerIPEv>  ; exchange_server::GetServerIP()
08493865 +0x4543:  mov    %eax,(%esp)
08493868 +0x4546:  call   0807e530 <_init+0xe28>
0849386d +0x454b:  mov    %eax,%edx
0849386f +0x454d:  mov    0x8(%ebp),%eax
08493872 +0x4550:  mov    %edx,0x4(%eax)
08493875 +0x4553:  call   0848f2a3 <_ZN15exchange_server13GetServerPORTEv>  ; exchange_server::GetServerPORT()
0849387a +0x4558:  mov    %eax,%edx
0849387c +0x455a:  mov    0x8(%ebp),%eax
0849387f +0x455d:  mov    %dx,0x8(%eax)
08493883 +0x4561:  call   0848f28e <_ZN15exchange_server11GetServerIPEv>  ; exchange_server::GetServerIP()
08493888 +0x4566:  mov    0x8(%ebp),%edx
0849388b +0x4569:  movzwl 0x8(%edx),%edx
0849388f +0x456d:  movswl %dx,%edx
08493892 +0x4570:  mov    0x8(%ebp),%ecx
08493895 +0x4573:  add    $0xc,%ecx
08493898 +0x4576:  mov    %eax,0x8(%esp)
0849389c +0x457a:  mov    %edx,0x4(%esp)
084938a0 +0x457e:  mov    %ecx,(%esp)
084938a3 +0x4581:  call   08495570 <+0x624e>
084938a8 +0x4586:  xor    $0x1,%eax
084938ab +0x4589:  test   %al,%al
084938ad +0x458b:  je     084938ef <+0x45cd>
084938af +0x458d:  movl   $0x0,0xc(%esp)
084938b7 +0x4595:  movl   $0x40a,0x8(%esp)
084938bf +0x459d:  movl   $&_ZZN15exchange_server15CExchangeServer20PreparePassiveSocketEvE19__PRETTY_FUNCTION__,0x4(%esp)
084938c7 +0x45a5:  lea    -0x60(%ebp),%eax
084938ca +0x45a8:  mov    %eax,(%esp)
084938cd +0x45ab:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084938d2 +0x45b0:  movl   $"TryListen failed!",0x4(%esp)
084938da +0x45b8:  lea    -0x60(%ebp),%eax
084938dd +0x45bb:  mov    %eax,(%esp)
084938e0 +0x45be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084938e5 +0x45c3:  mov    $0x0,%eax
084938ea +0x45c8:  jmp    08493a7e <+0x475c>
084938ef +0x45cd:  lea    -0x70(%ebp),%eax
084938f2 +0x45d0:  mov    %eax,(%esp)
084938f5 +0x45d3:  call   08491004 <+0x1ce2>
084938fa +0x45d8:  call   0848f28e <_ZN15exchange_server11GetServerIPEv>  ; exchange_server::GetServerIP()
084938ff +0x45dd:  mov    %eax,(%esp)
08493902 +0x45e0:  call   0807e530 <_init+0xe28>
08493907 +0x45e5:  mov    %eax,-0x70(%ebp)
0849390a +0x45e8:  mov    0x8(%ebp),%eax
0849390d +0x45eb:  movzwl 0x8(%eax),%eax
08493911 +0x45ef:  mov    %ax,-0x6c(%ebp)
08493915 +0x45f3:  movl   $0x0,-0x68(%ebp)
0849391c +0x45fa:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08493921 +0x45ff:  lea    -0x70(%ebp),%edx
08493924 +0x4602:  mov    %edx,0x8(%esp)
08493928 +0x4606:  mov    %eax,0x4(%esp)
0849392c +0x460a:  mov    0x8(%ebp),%eax
0849392f +0x460d:  mov    %eax,(%esp)
08493932 +0x4610:  call   0849135c <+0x203a>
08493937 +0x4615:  xor    $0x1,%eax
0849393a +0x4618:  test   %al,%al
0849393c +0x461a:  je     0849397f <+0x465d>
0849393e +0x461c:  call   0848f27b <_ZN15exchange_server18GetServerChannelNoEv>  ; exchange_server::GetServerChannelNo()
08493943 +0x4621:  mov    %eax,%ebx
08493945 +0x4623:  movl   $0x0,0xc(%esp)
0849394d +0x462b:  movl   $0x416,0x8(%esp)
08493955 +0x4633:  movl   $&_ZZN15exchange_server15CExchangeServer20PreparePassiveSocketEvE19__PRETTY_FUNCTION__,0x4(%esp)
0849395d +0x463b:  lea    -0x50(%ebp),%eax
08493960 +0x463e:  mov    %eax,(%esp)
08493963 +0x4641:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493968 +0x4646:  mov    %ebx,0x8(%esp)
0849396c +0x464a:  movl   $"RegisterExchangeServer! failed (%d)",0x4(%esp)
08493974 +0x4652:  lea    -0x50(%ebp),%eax
08493977 +0x4655:  mov    %eax,(%esp)
0849397a +0x4658:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849397f +0x465d:  movl   $0x10,-0x10(%ebp)
08493986 +0x4664:  movl   $&_ZL14gUnicodeBuffer+0xaf3d,-0xc(%ebp)
0849398d +0x466b:  cmpl   $&_ZL14gUnicodeBuffer+0xcdec,-0xc(%ebp)
08493994 +0x4672:  jle    084939db <+0x46b9>
08493996 +0x4674:  movl   $0x0,0xc(%esp)
0849399e +0x467c:  movl   $0x420,0x8(%esp)
084939a6 +0x4684:  movl   $&_ZZN15exchange_server15CExchangeServer20PreparePassiveSocketEvE19__PRETTY_FUNCTION__,0x4(%esp)
084939ae +0x468c:  lea    -0x40(%ebp),%eax
084939b1 +0x468f:  mov    %eax,(%esp)
084939b4 +0x4692:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084939b9 +0x4697:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0xc(%esp)
084939c1 +0x469f:  mov    -0xc(%ebp),%eax
084939c4 +0x46a2:  mov    %eax,0x8(%esp)
084939c8 +0x46a6:  movl   $"RegisterExchangeServer! failed packet size over! (%d/%d)",0x4(%esp)
084939d0 +0x46ae:  lea    -0x40(%ebp),%eax
084939d3 +0x46b1:  mov    %eax,(%esp)
084939d6 +0x46b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084939db +0x46b9:  cmpl   $&_ZL14gUnicodeBuffer+0xcdec,-0xc(%ebp)
084939e2 +0x46c0:  jle    08493a2a <+0x4708>
084939e4 +0x46c2:  movl   $0x0,0xc(%esp)
084939ec +0x46ca:  movl   $0x426,0x8(%esp)
084939f4 +0x46d2:  movl   $&_ZZN15exchange_server15CExchangeServer20PreparePassiveSocketEvE19__PRETTY_FUNCTION__,0x4(%esp)
084939fc +0x46da:  lea    -0x30(%ebp),%eax
084939ff +0x46dd:  mov    %eax,(%esp)
08493a02 +0x46e0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493a07 +0x46e5:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0xc(%esp)
08493a0f +0x46ed:  movl   $0x3f869,0x8(%esp)
08493a17 +0x46f5:  movl   $"RegisterExchangeServer! failed recv buffer size over! (%d/%d)",0x4(%esp)
08493a1f +0x46fd:  lea    -0x30(%ebp),%eax
08493a22 +0x4700:  mov    %eax,(%esp)
08493a25 +0x4703:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493a2a +0x4708:  cmpl   $0x6ddd0,-0xc(%ebp)
08493a31 +0x470f:  jle    08493a79 <+0x4757>
08493a33 +0x4711:  movl   $0x0,0xc(%esp)
08493a3b +0x4719:  movl   $0x42c,0x8(%esp)
08493a43 +0x4721:  movl   $&_ZZN15exchange_server15CExchangeServer20PreparePassiveSocketEvE19__PRETTY_FUNCTION__,0x4(%esp)
08493a4b +0x4729:  lea    -0x20(%ebp),%eax
08493a4e +0x472c:  mov    %eax,(%esp)
08493a51 +0x472f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493a56 +0x4734:  movl   $0x6ddd0,0xc(%esp)
08493a5e +0x473c:  movl   $0x3f86b,0x8(%esp)
08493a66 +0x4744:  movl   $"RegisterExchangeServer! failed send buffer size over! (%d/%d)",0x4(%esp)
08493a6e +0x474c:  lea    -0x20(%ebp),%eax
08493a71 +0x474f:  mov    %eax,(%esp)
08493a74 +0x4752:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493a79 +0x4757:  mov    $0x1,%eax
08493a7e +0x475c:  add    $0x84,%esp
08493a84 +0x4762:  pop    %ebx
08493a85 +0x4763:  pop    %ebp
08493a86 +0x4764:  ret
08493a87 +0x4765:  nop
08493a88 +0x4766:  push   %ebp
08493a89 +0x4767:  mov    %esp,%ebp
08493a8b +0x4769:  mov    0x8(%ebp),%eax
08493a8e +0x476c:  movl   $&_ZTVN15exchange_server15IExchangeServerE+0x8,(%eax)
08493a94 +0x4772:  pop    %ebp
08493a95 +0x4773:  ret
08493a96 +0x4774:  push   %ebp
08493a97 +0x4775:  mov    %esp,%ebp
08493a99 +0x4777:  sub    $0x18,%esp
08493a9c +0x477a:  mov    0x8(%ebp),%eax
08493a9f +0x477d:  mov    %eax,(%esp)
08493aa2 +0x4780:  call   0857c0cc <_ZN12EpollHandlerD1Ev>  ; EpollHandler::~EpollHandler()
08493aa7 +0x4785:  leave
08493aa8 +0x4786:  ret
08493aa9 +0x4787:  nop
08493aaa +0x4788:  push   %ebp
08493aab +0x4789:  mov    %esp,%ebp
08493aad +0x478b:  sub    $0x18,%esp
08493ab0 +0x478e:  mov    0x8(%ebp),%eax
08493ab3 +0x4791:  mov    %eax,(%esp)
08493ab6 +0x4794:  call   084955c0 <+0x629e>
08493abb +0x4799:  leave
08493abc +0x479a:  ret
08493abd +0x479b:  nop
08493abe +0x479c:  push   %ebp
08493abf +0x479d:  mov    %esp,%ebp
08493ac1 +0x479f:  sub    $0x18,%esp
08493ac4 +0x47a2:  mov    0x8(%ebp),%eax
08493ac7 +0x47a5:  mov    %eax,(%esp)
08493aca +0x47a8:  call   08493a96 <+0x4774>
08493acf +0x47ad:  leave
08493ad0 +0x47ae:  ret
08493ad1 +0x47af:  nop
08493ad2 +0x47b0:  push   %ebp
08493ad3 +0x47b1:  mov    %esp,%ebp
08493ad5 +0x47b3:  sub    $0x18,%esp
08493ad8 +0x47b6:  mov    0x8(%ebp),%eax
08493adb +0x47b9:  mov    %eax,(%esp)
08493ade +0x47bc:  call   084955fc <+0x62da>
08493ae3 +0x47c1:  leave
08493ae4 +0x47c2:  ret
08493ae5 +0x47c3:  nop
08493ae6 +0x47c4:  push   %ebp
08493ae7 +0x47c5:  mov    %esp,%ebp
08493ae9 +0x47c7:  push   %esi
08493aea +0x47c8:  push   %ebx
08493aeb +0x47c9:  sub    $0x10,%esp
08493aee +0x47cc:  mov    0x8(%ebp),%eax
08493af1 +0x47cf:  mov    %eax,(%esp)
08493af4 +0x47d2:  call   08493a88 <+0x4766>
08493af9 +0x47d7:  mov    0x8(%ebp),%eax
08493afc +0x47da:  movl   $&_ZTVN15exchange_server15CExchangeServerE+0x8,(%eax)
08493b02 +0x47e0:  mov    0x8(%ebp),%eax
08493b05 +0x47e3:  add    $0xc,%eax
08493b08 +0x47e6:  mov    %eax,(%esp)
08493b0b +0x47e9:  call   08493aaa <+0x4788>
08493b10 +0x47ee:  mov    0x8(%ebp),%eax
08493b13 +0x47f1:  add    $0x40,%eax
08493b16 +0x47f4:  mov    %eax,(%esp)
08493b19 +0x47f7:  call   08491004 <+0x1ce2>
08493b1e +0x47fc:  mov    0x8(%ebp),%eax
08493b21 +0x47ff:  add    $0x50,%eax
08493b24 +0x4802:  mov    %eax,(%esp)
08493b27 +0x4805:  call   084955d4 <+0x62b2>
08493b2c +0x480a:  mov    0x8(%ebp),%eax
08493b2f +0x480d:  add    $0x6c,%eax
08493b32 +0x4810:  mov    %eax,(%esp)
08493b35 +0x4813:  call   0849568a <+0x6368>
08493b3a +0x4818:  mov    0x8(%ebp),%eax
08493b3d +0x481b:  mov    %eax,(%esp)
08493b40 +0x481e:  call   0849107e <+0x1d5c>
08493b45 +0x4823:  add    $0x10,%esp
08493b48 +0x4826:  pop    %ebx
08493b49 +0x4827:  pop    %esi
08493b4a +0x4828:  pop    %ebp
08493b4b +0x4829:  ret
08493b4c +0x482a:  mov    %edx,%ebx
08493b4e +0x482c:  mov    %eax,%esi
08493b50 +0x482e:  mov    0x8(%ebp),%eax
08493b53 +0x4831:  add    $0x50,%eax
08493b56 +0x4834:  mov    %eax,(%esp)
08493b59 +0x4837:  call   08493ad2 <+0x47b0>
08493b5e +0x483c:  mov    %esi,%eax
08493b60 +0x483e:  mov    %ebx,%edx
08493b62 +0x4840:  jmp    08493b64 <+0x4842>
08493b64 +0x4842:  mov    %edx,%ebx
08493b66 +0x4844:  mov    %eax,%esi
08493b68 +0x4846:  mov    0x8(%ebp),%eax
08493b6b +0x4849:  add    $0xc,%eax
08493b6e +0x484c:  mov    %eax,(%esp)
08493b71 +0x484f:  call   08493abe <+0x479c>
08493b76 +0x4854:  mov    %esi,%eax
08493b78 +0x4856:  mov    %ebx,%edx
08493b7a +0x4858:  mov    %eax,(%esp)
08493b7d +0x485b:  call   08ae3750 <_Unwind_Resume>
08493b82 +0x4860:  push   %ebp
08493b83 +0x4861:  mov    %esp,%ebp
08493b85 +0x4863:  push   %esi
08493b86 +0x4864:  push   %ebx
08493b87 +0x4865:  sub    $0x10,%esp
08493b8a +0x4868:  mov    0x8(%ebp),%eax
08493b8d +0x486b:  movl   $&_ZTVN15exchange_server15CExchangeServerE+0x8,(%eax)
08493b93 +0x4871:  mov    0x8(%ebp),%eax
08493b96 +0x4874:  add    $0x6c,%eax
08493b99 +0x4877:  mov    %eax,(%esp)
08493b9c +0x487a:  call   08495838 <+0x6516>
08493ba1 +0x487f:  jmp    08493bbb <+0x4899>
08493ba3 +0x4881:  mov    %edx,%ebx
08493ba5 +0x4883:  mov    %eax,%esi
08493ba7 +0x4885:  mov    0x8(%ebp),%eax
08493baa +0x4888:  add    $0x50,%eax
08493bad +0x488b:  mov    %eax,(%esp)
08493bb0 +0x488e:  call   08493ad2 <+0x47b0>
08493bb5 +0x4893:  mov    %esi,%eax
08493bb7 +0x4895:  mov    %ebx,%edx
08493bb9 +0x4897:  jmp    08493bcb <+0x48a9>
08493bbb +0x4899:  mov    0x8(%ebp),%eax
08493bbe +0x489c:  add    $0x50,%eax
08493bc1 +0x489f:  mov    %eax,(%esp)
08493bc4 +0x48a2:  call   08493ad2 <+0x47b0>
08493bc9 +0x48a7:  jmp    08493be9 <+0x48c7>
08493bcb +0x48a9:  mov    %edx,%ebx
08493bcd +0x48ab:  mov    %eax,%esi
08493bcf +0x48ad:  mov    0x8(%ebp),%eax
08493bd2 +0x48b0:  add    $0xc,%eax
08493bd5 +0x48b3:  mov    %eax,(%esp)
08493bd8 +0x48b6:  call   08493abe <+0x479c>
08493bdd +0x48bb:  mov    %esi,%eax
08493bdf +0x48bd:  mov    %ebx,%edx
08493be1 +0x48bf:  mov    %eax,(%esp)
08493be4 +0x48c2:  call   08ae3750 <_Unwind_Resume>
08493be9 +0x48c7:  mov    0x8(%ebp),%eax
08493bec +0x48ca:  add    $0xc,%eax
08493bef +0x48cd:  mov    %eax,(%esp)
08493bf2 +0x48d0:  call   08493abe <+0x479c>
08493bf7 +0x48d5:  add    $0x10,%esp
08493bfa +0x48d8:  pop    %ebx
08493bfb +0x48d9:  pop    %esi
08493bfc +0x48da:  pop    %ebp
08493bfd +0x48db:  ret
08493bfe +0x48dc:  push   %ebp
08493bff +0x48dd:  mov    %esp,%ebp
08493c01 +0x48df:  sub    $0x68,%esp
08493c04 +0x48e2:  movl   $0x0,0xc(%esp)
08493c0c +0x48ea:  movl   $0x451,0x8(%esp)
08493c14 +0x48f2:  movl   $&_ZZN15exchange_server21CExchangeServerThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
08493c1c +0x48fa:  lea    -0x50(%ebp),%eax
08493c1f +0x48fd:  mov    %eax,(%esp)
08493c22 +0x4900:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493c27 +0x4905:  movl   $0x3f85c,0x8(%esp)
08493c2f +0x490d:  movl   $"Exchange Server Thread start! %d",0x4(%esp)
08493c37 +0x4915:  lea    -0x50(%ebp),%eax
08493c3a +0x4918:  mov    %eax,(%esp)
08493c3d +0x491b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493c42 +0x4920:  mov    0x8(%ebp),%eax
08493c45 +0x4923:  add    $0xc,%eax
08493c48 +0x4926:  mov    %eax,(%esp)
08493c4b +0x4929:  call   08493856 <+0x4534>
08493c50 +0x492e:  xor    $0x1,%eax
08493c53 +0x4931:  test   %al,%al
08493c55 +0x4933:  je     08493d6b <+0x4a49>
08493c5b +0x4939:  movl   $0x0,0xc(%esp)
08493c63 +0x4941:  movl   $0x459,0x8(%esp)
08493c6b +0x4949:  movl   $&_ZZN15exchange_server21CExchangeServerThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
08493c73 +0x4951:  lea    -0x40(%ebp),%eax
08493c76 +0x4954:  mov    %eax,(%esp)
08493c79 +0x4957:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493c7e +0x495c:  movl   $"\n\n\n\n\n\nExchange Server starting error!\n\n\n\n\n\nShudown~~",0x4(%esp)
08493c86 +0x4964:  lea    -0x40(%ebp),%eax
08493c89 +0x4967:  mov    %eax,(%esp)
08493c8c +0x496a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493c91 +0x496f:  movl   $0xffffffff,(%esp)
08493c98 +0x4976:  call   0807e1c0 <_init+0xab8>
08493c9d +0x497b:  mov    0x8(%ebp),%eax
08493ca0 +0x497e:  add    $0xc,%eax
08493ca3 +0x4981:  mov    %eax,(%esp)
08493ca6 +0x4984:  call   084937ba <+0x4498>
08493cab +0x4989:  xor    $0x1,%eax
08493cae +0x498c:  test   %al,%al
08493cb0 +0x498e:  je     08493ced <+0x49cb>
08493cb2 +0x4990:  movl   $0x0,0xc(%esp)
08493cba +0x4998:  movl   $0x469,0x8(%esp)
08493cc2 +0x49a0:  movl   $&_ZZN15exchange_server21CExchangeServerThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
08493cca +0x49a8:  lea    -0x30(%ebp),%eax
08493ccd +0x49ab:  mov    %eax,(%esp)
08493cd0 +0x49ae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493cd5 +0x49b3:  movl   $"SendExchangeServerInfo failed!",0x4(%esp)
08493cdd +0x49bb:  lea    -0x30(%ebp),%eax
08493ce0 +0x49be:  mov    %eax,(%esp)
08493ce3 +0x49c1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493ce8 +0x49c6:  jmp    08493db3 <+0x4a91>
08493ced +0x49cb:  movl   $0x0,-0x10(%ebp)
08493cf4 +0x49d2:  mov    0x8(%ebp),%eax
08493cf7 +0x49d5:  add    $0xc,%eax
08493cfa +0x49d8:  mov    %eax,(%esp)
08493cfd +0x49db:  call   0849362a <+0x4308>
08493d02 +0x49e0:  mov    %eax,-0x10(%ebp)
08493d05 +0x49e3:  cmpl   $0x0,-0x10(%ebp)
08493d09 +0x49e7:  setne  %al
08493d0c +0x49ea:  test   %al,%al
08493d0e +0x49ec:  je     08493d51 <+0x4a2f>
08493d10 +0x49ee:  mov    -0x10(%ebp),%eax
08493d13 +0x49f1:  mov    %eax,(%esp)
08493d16 +0x49f4:  call   0861c8b0 <_ZN6Stream10get_bufferEv>  ; Stream::get_buffer()
08493d1b +0x49f9:  mov    (%eax),%eax
08493d1d +0x49fb:  mov    %eax,-0xc(%ebp)
08493d20 +0x49fe:  mov    0x8(%ebp),%eax
08493d23 +0x4a01:  lea    0xc(%eax),%edx
08493d26 +0x4a04:  mov    -0x10(%ebp),%eax
08493d29 +0x4a07:  mov    %eax,0x4(%esp)
08493d2d +0x4a0b:  mov    %edx,(%esp)
08493d30 +0x4a0e:  call   08493530 <+0x420e>
08493d35 +0x4a13:  mov    0x8(%ebp),%eax
08493d38 +0x4a16:  lea    0xc(%eax),%edx
08493d3b +0x4a19:  mov    -0xc(%ebp),%eax
08493d3e +0x4a1c:  mov    %eax,0x8(%esp)
08493d42 +0x4a20:  mov    -0x10(%ebp),%eax
08493d45 +0x4a23:  mov    %eax,0x4(%esp)
08493d49 +0x4a27:  mov    %edx,(%esp)
08493d4c +0x4a2a:  call   08493648 <+0x4326>
08493d51 +0x4a2f:  mov    0x8(%ebp),%eax
08493d54 +0x4a32:  add    $0xc,%eax
08493d57 +0x4a35:  mov    %eax,(%esp)
08493d5a +0x4a38:  call   084910a6 <+0x1d84>
08493d5f +0x4a3d:  movl   $0xa,(%esp)
08493d66 +0x4a44:  call   0858c4e0 <_ZN6OS_API5SleepEi>  ; OS_API::Sleep(int)
08493d6b +0x4a49:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
08493d72 +0x4a50:  xor    $0x1,%eax
08493d75 +0x4a53:  test   %al,%al
08493d77 +0x4a55:  jne    08493c9d <+0x497b>
08493d7d +0x4a5b:  movl   $0x0,0xc(%esp)
08493d85 +0x4a63:  movl   $0x482,0x8(%esp)
08493d8d +0x4a6b:  movl   $&_ZZN15exchange_server21CExchangeServerThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
08493d95 +0x4a73:  lea    -0x20(%ebp),%eax
08493d98 +0x4a76:  mov    %eax,(%esp)
08493d9b +0x4a79:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08493da0 +0x4a7e:  movl   $"Exchange Server Thread End!",0x4(%esp)
08493da8 +0x4a86:  lea    -0x20(%ebp),%eax
08493dab +0x4a89:  mov    %eax,(%esp)
08493dae +0x4a8c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08493db3 +0x4a91:  leave
08493db4 +0x4a92:  ret
08493db5 +0x4a93:  nop
08493db6 +0x4a94:  push   %ebp
08493db7 +0x4a95:  mov    %esp,%ebp
08493db9 +0x4a97:  push   %esi
08493dba +0x4a98:  push   %ebx
08493dbb +0x4a99:  sub    $0x10,%esp
08493dbe +0x4a9c:  mov    0x8(%ebp),%eax
08493dc1 +0x4a9f:  movl   $&_ZTVN15exchange_server21CExchangeServerThreadE+0x8,(%eax)
08493dc7 +0x4aa5:  mov    0x8(%ebp),%eax
08493dca +0x4aa8:  add    $0xc,%eax
08493dcd +0x4aab:  mov    %eax,(%esp)
08493dd0 +0x4aae:  call   08493b82 <+0x4860>
08493dd5 +0x4ab3:  jmp    08493df2 <+0x4ad0>
08493dd7 +0x4ab5:  mov    %edx,%ebx
08493dd9 +0x4ab7:  mov    %eax,%esi
08493ddb +0x4ab9:  mov    0x8(%ebp),%eax
08493dde +0x4abc:  mov    %eax,(%esp)
08493de1 +0x4abf:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
08493de6 +0x4ac4:  mov    %esi,%eax
08493de8 +0x4ac6:  mov    %ebx,%edx
08493dea +0x4ac8:  mov    %eax,(%esp)
08493ded +0x4acb:  call   08ae3750 <_Unwind_Resume>
08493df2 +0x4ad0:  mov    0x8(%ebp),%eax
08493df5 +0x4ad3:  mov    %eax,(%esp)
08493df8 +0x4ad6:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
08493dfd +0x4adb:  mov    $0x0,%eax
08493e02 +0x4ae0:  test   %al,%al
08493e04 +0x4ae2:  je     08493e11 <+0x4aef>
08493e06 +0x4ae4:  mov    0x8(%ebp),%eax
08493e09 +0x4ae7:  mov    %eax,(%esp)
08493e0c +0x4aea:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08493e11 +0x4aef:  add    $0x10,%esp
08493e14 +0x4af2:  pop    %ebx
08493e15 +0x4af3:  pop    %esi
08493e16 +0x4af4:  pop    %ebp
08493e17 +0x4af5:  ret
08493e18 +0x4af6:  push   %ebp
08493e19 +0x4af7:  mov    %esp,%ebp
08493e1b +0x4af9:  sub    $0x18,%esp
08493e1e +0x4afc:  mov    0x8(%ebp),%eax
08493e21 +0x4aff:  mov    %eax,(%esp)
08493e24 +0x4b02:  call   08493db6 <+0x4a94>
08493e29 +0x4b07:  mov    0x8(%ebp),%eax
08493e2c +0x4b0a:  mov    %eax,(%esp)
08493e2f +0x4b0d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08493e34 +0x4b12:  leave
08493e35 +0x4b13:  ret
08493e36 +0x4b14:  push   %ebp
08493e37 +0x4b15:  mov    %esp,%ebp
08493e39 +0x4b17:  push   %esi
08493e3a +0x4b18:  push   %ebx
08493e3b +0x4b19:  sub    $0x10,%esp
08493e3e +0x4b1c:  mov    0x8(%ebp),%eax
08493e41 +0x4b1f:  mov    %eax,(%esp)
08493e44 +0x4b22:  call   08630b38 <_ZN15ThreadInterfaceC1Ev>  ; ThreadInterface::ThreadInterface()
08493e49 +0x4b27:  mov    0x8(%ebp),%eax
08493e4c +0x4b2a:  movl   $&_ZTVN15exchange_server21CExchangeServerThreadE+0x8,(%eax)
08493e52 +0x4b30:  mov    0x8(%ebp),%eax
08493e55 +0x4b33:  add    $0xc,%eax
08493e58 +0x4b36:  mov    %eax,(%esp)
08493e5b +0x4b39:  call   08493ae6 <+0x47c4>
08493e60 +0x4b3e:  mov    0x8(%ebp),%eax
08493e63 +0x4b41:  add    $0xc,%eax
08493e66 +0x4b44:  mov    %eax,&_ZN15exchange_server8CSession16exchange_server_E
08493e6b +0x4b49:  add    $0x10,%esp
08493e6e +0x4b4c:  pop    %ebx
08493e6f +0x4b4d:  pop    %esi
08493e70 +0x4b4e:  pop    %ebp
08493e71 +0x4b4f:  ret
08493e72 +0x4b50:  mov    %edx,%ebx
08493e74 +0x4b52:  mov    %eax,%esi
08493e76 +0x4b54:  mov    0x8(%ebp),%eax
08493e79 +0x4b57:  mov    %eax,(%esp)
08493e7c +0x4b5a:  call   08630b46 <_ZN15ThreadInterfaceD1Ev>  ; ThreadInterface::~ThreadInterface()
08493e81 +0x4b5f:  mov    %esi,%eax
08493e83 +0x4b61:  mov    %ebx,%edx
08493e85 +0x4b63:  mov    %eax,(%esp)
08493e88 +0x4b66:  call   08ae3750 <_Unwind_Resume>
08493e8d +0x4b6b:  push   %ebp
08493e8e +0x4b6c:  mov    %esp,%ebp
08493e90 +0x4b6e:  push   %edi
08493e91 +0x4b6f:  push   %esi
08493e92 +0x4b70:  push   %ebx
08493e93 +0x4b71:  sub    $0x1c,%esp
08493e96 +0x4b74:  mov    $&_ZGVZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,%eax
08493e9b +0x4b79:  movzbl (%eax),%eax
08493e9e +0x4b7c:  test   %al,%al
08493ea0 +0x4b7e:  jne    08493f13 <+0x4bf1>
08493ea2 +0x4b80:  movl   $&_ZGVZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,(%esp)
08493ea9 +0x4b87:  call   08725330 <__cxa_guard_acquire>
08493eae +0x4b8c:  test   %eax,%eax
08493eb0 +0x4b8e:  setne  %al
08493eb3 +0x4b91:  test   %al,%al
08493eb5 +0x4b93:  je     08493f13 <+0x4bf1>
08493eb7 +0x4b95:  mov    $0x0,%ebx
08493ebc +0x4b9a:  movl   $&_ZZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,(%esp)
08493ec3 +0x4ba1:  call   08493e36 <+0x4b14>
08493ec8 +0x4ba6:  movl   $&_ZGVZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,(%esp)
08493ecf +0x4bad:  call   08725250 <__cxa_guard_release>
08493ed4 +0x4bb2:  mov    $&_ZN15exchange_server21CExchangeServerThreadD1Ev,%eax
08493ed9 +0x4bb7:  movl   $&__dso_handle,0x8(%esp)
08493ee1 +0x4bbf:  movl   $&_ZZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,0x4(%esp)
08493ee9 +0x4bc7:  mov    %eax,(%esp)
08493eec +0x4bca:  call   0807ddd0 <_init+0x6c8>
08493ef1 +0x4bcf:  jmp    08493f13 <+0x4bf1>
08493ef3 +0x4bd1:  mov    %edx,%esi
08493ef5 +0x4bd3:  mov    %eax,%edi
08493ef7 +0x4bd5:  test   %bl,%bl
08493ef9 +0x4bd7:  jne    08493f07 <+0x4be5>
08493efb +0x4bd9:  movl   $&_ZGVZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,(%esp)
08493f02 +0x4be0:  call   087252c0 <__cxa_guard_abort>
08493f07 +0x4be5:  mov    %edi,%eax
08493f09 +0x4be7:  mov    %esi,%edx
08493f0b +0x4be9:  mov    %eax,(%esp)
08493f0e +0x4bec:  call   08ae3750 <_Unwind_Resume>
08493f13 +0x4bf1:  mov    $&_ZZN15exchange_server31GetInstanceExchangeServerThreadEvE8instance,%eax
08493f18 +0x4bf6:  add    $0x1c,%esp
08493f1b +0x4bf9:  pop    %ebx
08493f1c +0x4bfa:  pop    %esi
08493f1d +0x4bfb:  pop    %edi
08493f1e +0x4bfc:  pop    %ebp
08493f1f +0x4bfd:  ret
08493f20 +0x4bfe:  push   %ebp
08493f21 +0x4bff:  mov    %esp,%ebp
08493f23 +0x4c01:  sub    $0x18,%esp
08493f26 +0x4c04:  mov    0x8(%ebp),%eax
08493f29 +0x4c07:  movl   $0xffffffff,(%eax)
08493f2f +0x4c0d:  mov    0x8(%ebp),%eax
08493f32 +0x4c10:  movl   $0x0,0x10(%eax)
08493f39 +0x4c17:  mov    0x8(%ebp),%eax
08493f3c +0x4c1a:  movb   $0x0,0x14(%eax)
08493f40 +0x4c1e:  mov    0x8(%ebp),%eax
08493f43 +0x4c21:  movl   $0x0,0x18(%eax)
08493f4a +0x4c28:  mov    0x8(%ebp),%eax
08493f4d +0x4c2b:  movb   $0x0,0x29(%eax)
08493f51 +0x4c2f:  mov    0x8(%ebp),%eax
08493f54 +0x4c32:  movl   $0x0,&_ZL14gUnicodeBuffer+0xce1c(%eax)
08493f5e +0x4c3c:  mov    0x8(%ebp),%eax
08493f61 +0x4c3f:  movb   $0x0,0x85120(%eax)
08493f68 +0x4c46:  mov    0x8(%ebp),%eax
08493f6b +0x4c49:  movl   $0x0,0x85124(%eax)
08493f75 +0x4c53:  mov    0x8(%ebp),%eax
08493f78 +0x4c56:  movw   $0x0,0x85138(%eax)
08493f81 +0x4c5f:  mov    0x8(%ebp),%eax
08493f84 +0x4c62:  movl   $0x0,0x85140(%eax)
08493f8e +0x4c6c:  mov    0x8(%ebp),%eax
08493f91 +0x4c6f:  add    $0x85188,%eax
08493f96 +0x4c74:  mov    %eax,(%esp)
08493f99 +0x4c77:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
08493f9e +0x4c7c:  mov    0x8(%ebp),%eax
08493fa1 +0x4c7f:  lea    0x30(%eax),%edx
08493fa4 +0x4c82:  mov    0x8(%ebp),%eax
08493fa7 +0x4c85:  mov    %edx,0x2c(%eax)
08493faa +0x4c88:  mov    0x8(%ebp),%eax
08493fad +0x4c8b:  lea    &_ZL14gUnicodeBuffer+0xce24(%eax),%edx
08493fb3 +0x4c91:  mov    0x8(%ebp),%eax
08493fb6 +0x4c94:  mov    %edx,&_ZL14gUnicodeBuffer+0xce20(%eax)
08493fbc +0x4c9a:  leave
08493fbd +0x4c9b:  ret
08493fbe +0x4c9c:  push   %ebp
08493fbf +0x4c9d:  mov    %esp,%ebp
08493fc1 +0x4c9f:  sub    $0x18,%esp
08493fc4 +0x4ca2:  mov    0x8(%ebp),%eax
08493fc7 +0x4ca5:  add    $0x85188,%eax
08493fcc +0x4caa:  mov    %eax,(%esp)
08493fcf +0x4cad:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08493fd4 +0x4cb2:  leave
08493fd5 +0x4cb3:  ret
08493fd6 +0x4cb4:  push   %ebp
08493fd7 +0x4cb5:  mov    %esp,%ebp
08493fd9 +0x4cb7:  mov    0x8(%ebp),%eax
08493fdc +0x4cba:  mov    (%eax),%eax
08493fde +0x4cbc:  pop    %ebp
08493fdf +0x4cbd:  ret
08493fe0 +0x4cbe:  push   %ebp
08493fe1 +0x4cbf:  mov    %esp,%ebp
08493fe3 +0x4cc1:  push   %edi
08493fe4 +0x4cc2:  push   %esi
08493fe5 +0x4cc3:  push   %ebx
08493fe6 +0x4cc4:  sub    $0x4c,%esp
08493fe9 +0x4cc7:  mov    0x8(%ebp),%eax
08493fec +0x4cca:  mov    (%eax),%eax
08493fee +0x4ccc:  test   %eax,%eax
08493ff0 +0x4cce:  jns    08493ffc <+0x4cda>
08493ff2 +0x4cd0:  mov    $0x0,%eax
08493ff7 +0x4cd5:  jmp    0849412c <+0x4e0a>
08493ffc +0x4cda:  call   0807dd70 <_init+0x668>
08494001 +0x4cdf:  movl   $0x0,(%eax)
08494007 +0x4ce5:  mov    0x8(%ebp),%eax
0849400a +0x4ce8:  mov    0x18(%eax),%eax
0849400d +0x4ceb:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
08494012 +0x4cf0:  mov    %edx,%ecx
08494014 +0x4cf2:  sub    %eax,%ecx
08494016 +0x4cf4:  mov    %ecx,%eax
08494018 +0x4cf6:  mov    %eax,-0x20(%ebp)
0849401b +0x4cf9:  cmpl   $0x0,-0x20(%ebp)
0849401f +0x4cfd:  jne    08494045 <+0x4d23>
08494021 +0x4cff:  mov    0x8(%ebp),%eax
08494024 +0x4d02:  lea    0x30(%eax),%edx
08494027 +0x4d05:  mov    0x8(%ebp),%eax
0849402a +0x4d08:  mov    %edx,0x2c(%eax)
0849402d +0x4d0b:  mov    0x8(%ebp),%eax
08494030 +0x4d0e:  movl   $0x0,0x18(%eax)
08494037 +0x4d15:  movl   $&_ZL14gUnicodeBuffer+0xcdec,-0x20(%ebp)
0849403e +0x4d1c:  mov    0x8(%ebp),%eax
08494041 +0x4d1f:  movb   $0x0,0x29(%eax)
08494045 +0x4d23:  mov    -0x20(%ebp),%ecx
08494048 +0x4d26:  mov    0x8(%ebp),%eax
0849404b +0x4d29:  mov    0x2c(%eax),%edx
0849404e +0x4d2c:  mov    0x8(%ebp),%eax
08494051 +0x4d2f:  mov    (%eax),%eax
08494053 +0x4d31:  mov    %ecx,0x8(%esp)
08494057 +0x4d35:  mov    %edx,0x4(%esp)
0849405b +0x4d39:  mov    %eax,(%esp)
0849405e +0x4d3c:  call   0807de60 <_init+0x758>
08494063 +0x4d41:  mov    %eax,-0x1c(%ebp)
08494066 +0x4d44:  mov    -0x1c(%ebp),%eax
08494069 +0x4d47:  shr    $0x1f,%eax
0849406c +0x4d4a:  test   %al,%al
0849406e +0x4d4c:  je     0849411c <+0x4dfa>
08494074 +0x4d52:  call   0807dd70 <_init+0x668>
08494079 +0x4d57:  mov    (%eax),%eax
0849407b +0x4d59:  cmp    $0xb,%eax
0849407e +0x4d5c:  je     084940af <+0x4d8d>
08494080 +0x4d5e:  call   0807dd70 <_init+0x668>
08494085 +0x4d63:  mov    (%eax),%eax
08494087 +0x4d65:  cmp    $0x4,%eax
0849408a +0x4d68:  je     084940af <+0x4d8d>
0849408c +0x4d6a:  call   0807dd70 <_init+0x668>
08494091 +0x4d6f:  mov    (%eax),%eax
08494093 +0x4d71:  cmp    $0xb,%eax
08494096 +0x4d74:  je     084940af <+0x4d8d>
08494098 +0x4d76:  call   0807dd70 <_init+0x668>
0849409d +0x4d7b:  mov    (%eax),%eax
0849409f +0x4d7d:  test   %eax,%eax
084940a1 +0x4d7f:  je     084940af <+0x4d8d>
084940a3 +0x4d81:  call   0807dd70 <_init+0x668>
084940a8 +0x4d86:  mov    (%eax),%eax
084940aa +0x4d88:  cmp    $0x73,%eax
084940ad +0x4d8b:  jne    084940b6 <+0x4d94>
084940af +0x4d8d:  mov    $0x0,%eax
084940b4 +0x4d92:  jmp    0849412c <+0x4e0a>
084940b6 +0x4d94:  call   0807dd70 <_init+0x668>
084940bb +0x4d99:  mov    (%eax),%eax
084940bd +0x4d9b:  mov    %eax,(%esp)
084940c0 +0x4d9e:  call   0807d730 <_init+0x28>
084940c5 +0x4da3:  mov    %eax,%ebx
084940c7 +0x4da5:  call   0807dd70 <_init+0x668>
084940cc +0x4daa:  mov    (%eax),%edi
084940ce +0x4dac:  mov    0x8(%ebp),%eax
084940d1 +0x4daf:  mov    (%eax),%esi
084940d3 +0x4db1:  movl   $0x0,0xc(%esp)
084940db +0x4db9:  movl   $0x210,0x8(%esp)
084940e3 +0x4dc1:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11recv_packetEvE12__FUNCTION__,0x4(%esp)
084940eb +0x4dc9:  lea    -0x30(%ebp),%eax
084940ee +0x4dcc:  mov    %eax,(%esp)
084940f1 +0x4dcf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084940f6 +0x4dd4:  mov    %ebx,0x10(%esp)
084940fa +0x4dd8:  mov    %edi,0xc(%esp)
084940fe +0x4ddc:  mov    %esi,0x8(%esp)
08494102 +0x4de0:  movl   $"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
0849410a +0x4de8:  lea    -0x30(%ebp),%eax
0849410d +0x4deb:  mov    %eax,(%esp)
08494110 +0x4dee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08494115 +0x4df3:  mov    $0xffffffff,%eax
0849411a +0x4df8:  jmp    0849412c <+0x4e0a>
0849411c +0x4dfa:  cmpl   $0x0,-0x1c(%ebp)
08494120 +0x4dfe:  jne    08494129 <+0x4e07>
08494122 +0x4e00:  mov    $0xffffffff,%eax
08494127 +0x4e05:  jmp    0849412c <+0x4e0a>
08494129 +0x4e07:  mov    -0x1c(%ebp),%eax
0849412c +0x4e0a:  add    $0x4c,%esp
0849412f +0x4e0d:  pop    %ebx
08494130 +0x4e0e:  pop    %esi
08494131 +0x4e0f:  pop    %edi
08494132 +0x4e10:  pop    %ebp
08494133 +0x4e11:  ret
08494134 +0x4e12:  push   %ebp
08494135 +0x4e13:  mov    %esp,%ebp
08494137 +0x4e15:  push   %edi
08494138 +0x4e16:  push   %esi
08494139 +0x4e17:  push   %ebx
0849413a +0x4e18:  sub    $0x4c,%esp
0849413d +0x4e1b:  movl   $0x0,-0x1c(%ebp)
08494144 +0x4e22:  mov    0x8(%ebp),%eax
08494147 +0x4e25:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
0849414d +0x4e2b:  test   %eax,%eax
0849414f +0x4e2d:  jne    0849415b <+0x4e39>
08494151 +0x4e2f:  mov    $0x0,%eax
08494156 +0x4e34:  jmp    084943d7 <+0x50b5>
0849415b +0x4e39:  mov    0x8(%ebp),%eax
0849415e +0x4e3c:  mov    %eax,(%esp)
08494161 +0x4e3f:  call   0849589e <+0x657c>
08494166 +0x4e44:  mov    0x8(%ebp),%eax
08494169 +0x4e47:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
0849416f +0x4e4d:  mov    0x8(%ebp),%eax
08494172 +0x4e50:  lea    &_ZL14gUnicodeBuffer+0xce24(%eax),%ecx
08494178 +0x4e56:  mov    0x8(%ebp),%eax
0849417b +0x4e59:  mov    (%eax),%eax
0849417d +0x4e5b:  mov    %edx,0x8(%esp)
08494181 +0x4e5f:  mov    %ecx,0x4(%esp)
08494185 +0x4e63:  mov    %eax,(%esp)
08494188 +0x4e66:  call   0807e830 <_init+0x1128>
0849418d +0x4e6b:  mov    %eax,-0x1c(%ebp)
08494190 +0x4e6e:  cmpl   $0x0,-0x1c(%ebp)
08494194 +0x4e72:  setle  %al
08494197 +0x4e75:  test   %al,%al
08494199 +0x4e77:  je     08494263 <+0x4f41>
0849419f +0x4e7d:  call   0807dd70 <_init+0x668>
084941a4 +0x4e82:  mov    (%eax),%eax
084941a6 +0x4e84:  cmp    $0xb,%eax
084941a9 +0x4e87:  je     084941da <+0x4eb8>
084941ab +0x4e89:  call   0807dd70 <_init+0x668>
084941b0 +0x4e8e:  mov    (%eax),%eax
084941b2 +0x4e90:  cmp    $0x4,%eax
084941b5 +0x4e93:  je     084941da <+0x4eb8>
084941b7 +0x4e95:  call   0807dd70 <_init+0x668>
084941bc +0x4e9a:  mov    (%eax),%eax
084941be +0x4e9c:  cmp    $0xb,%eax
084941c1 +0x4e9f:  je     084941da <+0x4eb8>
084941c3 +0x4ea1:  call   0807dd70 <_init+0x668>
084941c8 +0x4ea6:  mov    (%eax),%eax
084941ca +0x4ea8:  test   %eax,%eax
084941cc +0x4eaa:  je     084941da <+0x4eb8>
084941ce +0x4eac:  call   0807dd70 <_init+0x668>
084941d3 +0x4eb1:  mov    (%eax),%eax
084941d5 +0x4eb3:  cmp    $0x73,%eax
084941d8 +0x4eb6:  jne    084941ef <+0x4ecd>
084941da +0x4eb8:  mov    0x8(%ebp),%eax
084941dd +0x4ebb:  mov    %eax,(%esp)
084941e0 +0x4ebe:  call   084958b6 <+0x6594>
084941e5 +0x4ec3:  mov    $0x0,%eax
084941ea +0x4ec8:  jmp    084943d7 <+0x50b5>
084941ef +0x4ecd:  call   0807dd70 <_init+0x668>
084941f4 +0x4ed2:  mov    (%eax),%eax
084941f6 +0x4ed4:  mov    %eax,(%esp)
084941f9 +0x4ed7:  call   0807d730 <_init+0x28>
084941fe +0x4edc:  mov    %eax,%ebx
08494200 +0x4ede:  call   0807dd70 <_init+0x668>
08494205 +0x4ee3:  mov    (%eax),%edi
08494207 +0x4ee5:  mov    0x8(%ebp),%eax
0849420a +0x4ee8:  mov    (%eax),%esi
0849420c +0x4eea:  movl   $0x0,0xc(%esp)
08494214 +0x4ef2:  movl   $0x2af,0x8(%esp)
0849421c +0x4efa:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11send_packetEvE12__FUNCTION__,0x4(%esp)
08494224 +0x4f02:  lea    -0x2c(%ebp),%eax
08494227 +0x4f05:  mov    %eax,(%esp)
0849422a +0x4f08:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849422f +0x4f0d:  mov    %ebx,0x10(%esp)
08494233 +0x4f11:  mov    %edi,0xc(%esp)
08494237 +0x4f15:  mov    %esi,0x8(%esp)
0849423b +0x4f19:  movl   $"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",0x4(%esp)
08494243 +0x4f21:  lea    -0x2c(%ebp),%eax
08494246 +0x4f24:  mov    %eax,(%esp)
08494249 +0x4f27:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849424e +0x4f2c:  mov    0x8(%ebp),%eax
08494251 +0x4f2f:  mov    %eax,(%esp)
08494254 +0x4f32:  call   084958b6 <+0x6594>
08494259 +0x4f37:  mov    $0xffffffff,%eax
0849425e +0x4f3c:  jmp    084943d7 <+0x50b5>
08494263 +0x4f41:  cmpl   $0x0,-0x1c(%ebp)
08494267 +0x4f45:  jle    084943c9 <+0x50a7>
0849426d +0x4f4b:  mov    0x8(%ebp),%eax
08494270 +0x4f4e:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
08494276 +0x4f54:  cmp    -0x1c(%ebp),%eax
08494279 +0x4f57:  jle    0849434a <+0x5028>
0849427f +0x4f5d:  mov    0x8(%ebp),%eax
08494282 +0x4f60:  lea    &_ZL14gUnicodeBuffer+0xce24(%eax),%edx
08494288 +0x4f66:  mov    -0x1c(%ebp),%eax
0849428b +0x4f69:  add    %eax,%edx
0849428d +0x4f6b:  mov    0x8(%ebp),%eax
08494290 +0x4f6e:  mov    %edx,&_ZL14gUnicodeBuffer+0xce20(%eax)
08494296 +0x4f74:  mov    0x8(%ebp),%eax
08494299 +0x4f77:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
0849429f +0x4f7d:  mov    -0x1c(%ebp),%eax
084942a2 +0x4f80:  sub    %eax,%edx
084942a4 +0x4f82:  mov    0x8(%ebp),%eax
084942a7 +0x4f85:  mov    %edx,&_ZL14gUnicodeBuffer+0xce1c(%eax)
084942ad +0x4f8b:  mov    0x8(%ebp),%eax
084942b0 +0x4f8e:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
084942b6 +0x4f94:  cmp    $0x6ddd0,%eax
084942bb +0x4f99:  jbe    08494300 <+0x4fde>
084942bd +0x4f9b:  mov    0x8(%ebp),%eax
084942c0 +0x4f9e:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
084942c6 +0x4fa4:  mov    %eax,0x14(%esp)
084942ca +0x4fa8:  movl   $"m_remain_sendlen < MAX_SEND_BUF :  m_remain_sendlen:%d]",0x10(%esp)
084942d2 +0x4fb0:  movl   $0x2d1,0xc(%esp)
084942da +0x4fb8:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11send_packetEvE12__FUNCTION__,0x8(%esp)
084942e2 +0x4fc0:  movl   $"Network.h",0x4(%esp)
084942ea +0x4fc8:  movl   $0x1,(%esp)
084942f1 +0x4fcf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084942f6 +0x4fd4:  mov    $0xffffffff,%eax
084942fb +0x4fd9:  jmp    084943d7 <+0x50b5>
08494300 +0x4fde:  mov    0x8(%ebp),%eax
08494303 +0x4fe1:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
08494309 +0x4fe7:  mov    0x8(%ebp),%eax
0849430c +0x4fea:  mov    &_ZL14gUnicodeBuffer+0xce20(%eax),%eax
08494312 +0x4ff0:  mov    0x8(%ebp),%ecx
08494315 +0x4ff3:  add    $&_ZL14gUnicodeBuffer+0xce24,%ecx
0849431b +0x4ff9:  mov    %edx,0x8(%esp)
0849431f +0x4ffd:  mov    %eax,0x4(%esp)
08494323 +0x5001:  mov    %ecx,(%esp)
08494326 +0x5004:  call   0807d880 <_init+0x178>
0849432b +0x5009:  mov    0x8(%ebp),%eax
0849432e +0x500c:  lea    &_ZL14gUnicodeBuffer+0xce24(%eax),%edx
08494334 +0x5012:  mov    0x8(%ebp),%eax
08494337 +0x5015:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
0849433d +0x501b:  add    %eax,%edx
0849433f +0x501d:  mov    0x8(%ebp),%eax
08494342 +0x5020:  mov    %edx,&_ZL14gUnicodeBuffer+0xce20(%eax)
08494348 +0x5026:  jmp    084943c9 <+0x50a7>
0849434a +0x5028:  mov    0x8(%ebp),%eax
0849434d +0x502b:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
08494353 +0x5031:  cmp    -0x1c(%ebp),%eax
08494356 +0x5034:  jge    084943aa <+0x5088>
08494358 +0x5036:  mov    0x8(%ebp),%eax
0849435b +0x5039:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
08494361 +0x503f:  mov    -0x1c(%ebp),%edx
08494364 +0x5042:  mov    %edx,0x18(%esp)
08494368 +0x5046:  mov    %eax,0x14(%esp)
0849436c +0x504a:  movl   $"offset error[Remain_Data: %d Send:%d]",0x10(%esp)
08494374 +0x5052:  movl   $0x2db,0xc(%esp)
0849437c +0x505a:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11send_packetEvE12__FUNCTION__,0x8(%esp)
08494384 +0x5062:  movl   $"Network.h",0x4(%esp)
0849438c +0x506a:  movl   $0x1,(%esp)
08494393 +0x5071:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08494398 +0x5076:  mov    0x8(%ebp),%eax
0849439b +0x5079:  mov    %eax,(%esp)
0849439e +0x507c:  call   084958b6 <+0x6594>
084943a3 +0x5081:  mov    $0xffffffff,%eax
084943a8 +0x5086:  jmp    084943d7 <+0x50b5>
084943aa +0x5088:  mov    0x8(%ebp),%eax
084943ad +0x508b:  lea    &_ZL14gUnicodeBuffer+0xce24(%eax),%edx
084943b3 +0x5091:  mov    0x8(%ebp),%eax
084943b6 +0x5094:  mov    %edx,&_ZL14gUnicodeBuffer+0xce20(%eax)
084943bc +0x509a:  mov    0x8(%ebp),%eax
084943bf +0x509d:  movl   $0x0,&_ZL14gUnicodeBuffer+0xce1c(%eax)
084943c9 +0x50a7:  mov    0x8(%ebp),%eax
084943cc +0x50aa:  mov    %eax,(%esp)
084943cf +0x50ad:  call   084958b6 <+0x6594>
084943d4 +0x50b2:  mov    -0x1c(%ebp),%eax
084943d7 +0x50b5:  add    $0x4c,%esp
084943da +0x50b8:  pop    %ebx
084943db +0x50b9:  pop    %esi
084943dc +0x50ba:  pop    %edi
084943dd +0x50bb:  pop    %ebp
084943de +0x50bc:  ret
084943df +0x50bd:  nop
084943e0 +0x50be:  push   %ebp
084943e1 +0x50bf:  mov    %esp,%ebp
084943e3 +0x50c1:  sub    $0x28,%esp
084943e6 +0x50c4:  mov    0x10(%ebp),%eax
084943e9 +0x50c7:  mov    %al,-0xc(%ebp)
084943ec +0x50ca:  mov    0x8(%ebp),%eax
084943ef +0x50cd:  mov    0xc(%ebp),%edx
084943f2 +0x50d0:  mov    %edx,(%eax)
084943f4 +0x50d2:  movzbl -0xc(%ebp),%eax
084943f8 +0x50d6:  xor    $0x1,%eax
084943fb +0x50d9:  test   %al,%al
084943fd +0x50db:  je     0849440c <+0x50ea>
084943ff +0x50dd:  mov    0x8(%ebp),%eax
08494402 +0x50e0:  mov    (%eax),%eax
08494404 +0x50e2:  mov    %eax,(%esp)
08494407 +0x50e5:  call   084958ce <+0x65ac>
0849440c +0x50ea:  mov    0x8(%ebp),%eax
0849440f +0x50ed:  add    $0x85128,%eax
08494414 +0x50f2:  movl   $0x10,0x8(%esp)
0849441c +0x50fa:  movl   $0x0,0x4(%esp)
08494424 +0x5102:  mov    %eax,(%esp)
08494427 +0x5105:  call   0807dcc0 <_init+0x5b8>
0849442c +0x510a:  mov    $0x1,%eax
08494431 +0x510f:  leave
08494432 +0x5110:  ret
08494433 +0x5111:  nop
08494434 +0x5112:  push   %ebp
08494435 +0x5113:  mov    %esp,%ebp
08494437 +0x5115:  sub    $0x38,%esp
0849443a +0x5118:  mov    0x8(%ebp),%eax
0849443d +0x511b:  mov    (%eax),%eax
0849443f +0x511d:  test   %eax,%eax
08494441 +0x511f:  jns    0849444d <+0x512b>
08494443 +0x5121:  mov    $0xffffffff,%eax
08494448 +0x5126:  jmp    08494664 <+0x5342>
0849444d +0x512b:  cmpl   $0x0,0x10(%ebp)
08494451 +0x512f:  jg     084944ad <+0x518b>
08494453 +0x5131:  mov    0xc(%ebp),%eax
08494456 +0x5134:  add    $0x1,%eax
08494459 +0x5137:  movzbl (%eax),%eax
0849445c +0x513a:  movsbl %al,%edx
0849445f +0x513d:  mov    0xc(%ebp),%eax
08494462 +0x5140:  movzbl (%eax),%eax
08494465 +0x5143:  movsbl %al,%eax
08494468 +0x5146:  mov    0x10(%ebp),%ecx
0849446b +0x5149:  mov    %ecx,0x1c(%esp)
0849446f +0x514d:  mov    %edx,0x18(%esp)
08494473 +0x5151:  mov    %eax,0x14(%esp)
08494477 +0x5155:  movl   $"!!!Send Packet[(%d,%d) Size(%d) Error\n",0x10(%esp)
0849447f +0x515d:  movl   $0x25b,0xc(%esp)
08494487 +0x5165:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11send_packetEPciE12__FUNCTION__,0x8(%esp)
0849448f +0x516d:  movl   $"Network.h",0x4(%esp)
08494497 +0x5175:  movl   $0x1,(%esp)
0849449e +0x517c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084944a3 +0x5181:  mov    $0xffffffff,%eax
084944a8 +0x5186:  jmp    08494664 <+0x5342>
084944ad +0x518b:  movl   $0x0,-0xc(%ebp)
084944b4 +0x5192:  call   0807dd70 <_init+0x668>
084944b9 +0x5197:  movl   $0x0,(%eax)
084944bf +0x519d:  mov    0x8(%ebp),%eax
084944c2 +0x51a0:  mov    %eax,(%esp)
084944c5 +0x51a3:  call   0849589e <+0x657c>
084944ca +0x51a8:  mov    0x8(%ebp),%eax
084944cd +0x51ab:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
084944d3 +0x51b1:  mov    0x10(%ebp),%eax
084944d6 +0x51b4:  add    %eax,%edx
084944d8 +0x51b6:  mov    0x8(%ebp),%eax
084944db +0x51b9:  mov    %edx,&_ZL14gUnicodeBuffer+0xce1c(%eax)
084944e1 +0x51bf:  mov    0x8(%ebp),%eax
084944e4 +0x51c2:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%eax
084944ea +0x51c8:  cmp    $0x6ddd0,%eax
084944ef +0x51cd:  jbe    0849456d <+0x524b>
084944f1 +0x51cf:  mov    0x8(%ebp),%eax
084944f4 +0x51d2:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
084944fa +0x51d8:  mov    0x10(%ebp),%eax
084944fd +0x51db:  sub    %eax,%edx
084944ff +0x51dd:  mov    0x8(%ebp),%eax
08494502 +0x51e0:  mov    %edx,&_ZL14gUnicodeBuffer+0xce1c(%eax)
08494508 +0x51e6:  mov    0x8(%ebp),%eax
0849450b +0x51e9:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
08494511 +0x51ef:  mov    0xc(%ebp),%eax
08494514 +0x51f2:  add    $0x1,%eax
08494517 +0x51f5:  movzbl (%eax),%eax
0849451a +0x51f8:  movsbl %al,%eax
0849451d +0x51fb:  mov    0x10(%ebp),%ecx
08494520 +0x51fe:  mov    %ecx,0x1c(%esp)
08494524 +0x5202:  mov    %edx,0x18(%esp)
08494528 +0x5206:  mov    %eax,0x14(%esp)
0849452c +0x520a:  movl   $"!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]",0x10(%esp)
08494534 +0x5212:  movl   $0x26e,0xc(%esp)
0849453c +0x521a:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11send_packetEPciE12__FUNCTION__,0x8(%esp)
08494544 +0x5222:  movl   $"Network.h",0x4(%esp)
0849454c +0x522a:  movl   $0x1,(%esp)
08494553 +0x5231:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08494558 +0x5236:  mov    0x8(%ebp),%eax
0849455b +0x5239:  mov    %eax,(%esp)
0849455e +0x523c:  call   084958b6 <+0x6594>
08494563 +0x5241:  mov    $0xffffffff,%eax
08494568 +0x5246:  jmp    08494664 <+0x5342>
0849456d +0x524b:  mov    0x8(%ebp),%eax
08494570 +0x524e:  mov    &_ZL14gUnicodeBuffer+0xce20(%eax),%eax
08494576 +0x5254:  mov    0x8(%ebp),%edx
08494579 +0x5257:  add    $&_ZL14gUnicodeBuffer+0xce24,%edx
0849457f +0x525d:  cmp    %edx,%eax
08494581 +0x525f:  jb     0849459f <+0x527d>
08494583 +0x5261:  mov    0x8(%ebp),%eax
08494586 +0x5264:  mov    &_ZL14gUnicodeBuffer+0xce20(%eax),%eax
0849458c +0x526a:  mov    0x8(%ebp),%edx
0849458f +0x526d:  add    $&_ZL14gUnicodeBuffer+0xce24,%edx
08494595 +0x5273:  add    $0x6ddd0,%edx
0849459b +0x5279:  cmp    %edx,%eax
0849459d +0x527b:  jb     08494618 <+0x52f6>
0849459f +0x527d:  mov    0x8(%ebp),%eax
084945a2 +0x5280:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
084945a8 +0x5286:  mov    0x10(%ebp),%eax
084945ab +0x5289:  sub    %eax,%edx
084945ad +0x528b:  mov    0x8(%ebp),%eax
084945b0 +0x528e:  mov    %edx,&_ZL14gUnicodeBuffer+0xce1c(%eax)
084945b6 +0x5294:  mov    0x8(%ebp),%eax
084945b9 +0x5297:  mov    &_ZL14gUnicodeBuffer+0xce1c(%eax),%edx
084945bf +0x529d:  mov    0xc(%ebp),%eax
084945c2 +0x52a0:  add    $0x1,%eax
084945c5 +0x52a3:  movzbl (%eax),%eax
084945c8 +0x52a6:  movsbl %al,%eax
084945cb +0x52a9:  mov    0x10(%ebp),%ecx
084945ce +0x52ac:  mov    %ecx,0x1c(%esp)
084945d2 +0x52b0:  mov    %edx,0x18(%esp)
084945d6 +0x52b4:  mov    %eax,0x14(%esp)
084945da +0x52b8:  movl   $"!!!Send Packet Buffer error P_TYPE[%d] Size:Remain[%d] Last[%d]",0x10(%esp)
084945e2 +0x52c0:  movl   $0x277,0xc(%esp)
084945ea +0x52c8:  movl   $&_ZZN8CNetworkILi95000ELi450000EE11send_packetEPciE12__FUNCTION__,0x8(%esp)
084945f2 +0x52d0:  movl   $"Network.h",0x4(%esp)
084945fa +0x52d8:  movl   $0x1,(%esp)
08494601 +0x52df:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08494606 +0x52e4:  mov    0x8(%ebp),%eax
08494609 +0x52e7:  mov    %eax,(%esp)
0849460c +0x52ea:  call   084958b6 <+0x6594>
08494611 +0x52ef:  mov    $0xffffffff,%eax
08494616 +0x52f4:  jmp    08494664 <+0x5342>
08494618 +0x52f6:  mov    0x10(%ebp),%edx
0849461b +0x52f9:  mov    0x8(%ebp),%eax
0849461e +0x52fc:  mov    &_ZL14gUnicodeBuffer+0xce20(%eax),%eax
08494624 +0x5302:  mov    %edx,0x8(%esp)
08494628 +0x5306:  mov    0xc(%ebp),%edx
0849462b +0x5309:  mov    %edx,0x4(%esp)
0849462f +0x530d:  mov    %eax,(%esp)
08494632 +0x5310:  call   0807d8a0 <_init+0x198>
08494637 +0x5315:  mov    0x8(%ebp),%eax
0849463a +0x5318:  mov    &_ZL14gUnicodeBuffer+0xce20(%eax),%edx
08494640 +0x531e:  mov    0x10(%ebp),%eax
08494643 +0x5321:  add    %eax,%edx
08494645 +0x5323:  mov    0x8(%ebp),%eax
08494648 +0x5326:  mov    %edx,&_ZL14gUnicodeBuffer+0xce20(%eax)
0849464e +0x532c:  mov    0x8(%ebp),%eax
08494651 +0x532f:  mov    %eax,(%esp)
08494654 +0x5332:  call   084958b6 <+0x6594>
08494659 +0x5337:  mov    0x8(%ebp),%eax
0849465c +0x533a:  mov    %eax,(%esp)
0849465f +0x533d:  call   08494134 <+0x4e12>
08494664 +0x5342:  leave
08494665 +0x5343:  ret
08494666 +0x5344:  push   %ebp
08494667 +0x5345:  mov    %esp,%ebp
08494669 +0x5347:  sub    $0x48,%esp
0849466c +0x534a:  movl   $0xea60,-0x10(%ebp)
08494673 +0x5351:  movl   $0x0,-0xc(%ebp)
0849467a +0x5358:  movl   $0x0,0x8(%esp)
08494682 +0x5360:  movl   $0x1,0x4(%esp)
0849468a +0x5368:  movl   $0x2,(%esp)
08494691 +0x536f:  call   0807dab0 <_init+0x3a8>
08494696 +0x5374:  mov    0x8(%ebp),%edx
08494699 +0x5377:  mov    %eax,(%edx)
0849469b +0x5379:  mov    0x8(%ebp),%eax
0849469e +0x537c:  mov    (%eax),%eax
084946a0 +0x537e:  test   %eax,%eax
084946a2 +0x5380:  jns    084946ae <+0x538c>
084946a4 +0x5382:  mov    $0x0,%eax
084946a9 +0x5387:  jmp    084947af <+0x548d>
084946ae +0x538c:  movl   $0x10,0x8(%esp)
084946b6 +0x5394:  movl   $0x0,0x4(%esp)
084946be +0x539c:  lea    -0x20(%ebp),%eax
084946c1 +0x539f:  mov    %eax,(%esp)
084946c4 +0x53a2:  call   0807dcc0 <_init+0x5b8>
084946c9 +0x53a7:  movw   $0x2,-0x20(%ebp)
084946cf +0x53ad:  cmpl   $0x0,0x10(%ebp)
084946d3 +0x53b1:  je     084946e5 <+0x53c3>
084946d5 +0x53b3:  mov    0x10(%ebp),%eax
084946d8 +0x53b6:  mov    %eax,(%esp)
084946db +0x53b9:  call   0807e530 <_init+0xe28>
084946e0 +0x53be:  mov    %eax,-0x1c(%ebp)
084946e3 +0x53c1:  jmp    084946f4 <+0x53d2>
084946e5 +0x53c3:  movl   $0x0,(%esp)
084946ec +0x53ca:  call   0807db10 <_init+0x408>
084946f1 +0x53cf:  mov    %eax,-0x1c(%ebp)
084946f4 +0x53d2:  mov    0xc(%ebp),%eax
084946f7 +0x53d5:  movzwl %ax,%eax
084946fa +0x53d8:  mov    %eax,(%esp)
084946fd +0x53db:  call   0807e680 <_init+0xf78>
08494702 +0x53e0:  mov    %ax,-0x1e(%ebp)
08494706 +0x53e4:  mov    0x8(%ebp),%eax
08494709 +0x53e7:  mov    (%eax),%eax
0849470b +0x53e9:  movl   $0x4,0x10(%esp)
08494713 +0x53f1:  lea    -0x10(%ebp),%edx
08494716 +0x53f4:  mov    %edx,0xc(%esp)
0849471a +0x53f8:  movl   $0x2,0x8(%esp)
08494722 +0x5400:  movl   $0x1,0x4(%esp)
0849472a +0x5408:  mov    %eax,(%esp)
0849472d +0x540b:  call   0807e2a0 <_init+0xb98>
08494732 +0x5410:  mov    %eax,-0xc(%ebp)
08494735 +0x5413:  cmpl   $0x0,-0xc(%ebp)
08494739 +0x5417:  jns    08494742 <+0x5420>
0849473b +0x5419:  mov    $0x0,%eax
08494740 +0x541e:  jmp    084947af <+0x548d>
08494742 +0x5420:  lea    -0x20(%ebp),%edx
08494745 +0x5423:  mov    0x8(%ebp),%eax
08494748 +0x5426:  mov    (%eax),%eax
0849474a +0x5428:  movl   $0x10,0x8(%esp)
08494752 +0x5430:  mov    %edx,0x4(%esp)
08494756 +0x5434:  mov    %eax,(%esp)
08494759 +0x5437:  call   0807e750 <_init+0x1048>
0849475e +0x543c:  shr    $0x1f,%eax
08494761 +0x543f:  test   %al,%al
08494763 +0x5441:  je     0849476c <+0x544a>
08494765 +0x5443:  mov    $0x0,%eax
0849476a +0x5448:  jmp    084947af <+0x548d>
0849476c +0x544a:  mov    0x8(%ebp),%eax
0849476f +0x544d:  mov    (%eax),%eax
08494771 +0x544f:  movl   $0x400,0x4(%esp)
08494779 +0x5457:  mov    %eax,(%esp)
0849477c +0x545a:  call   0807d770 <_init+0x68>
08494781 +0x545f:  shr    $0x1f,%eax
08494784 +0x5462:  test   %al,%al
08494786 +0x5464:  je     0849478f <+0x546d>
08494788 +0x5466:  mov    $0x0,%eax
0849478d +0x546b:  jmp    084947af <+0x548d>
0849478f +0x546d:  mov    0x8(%ebp),%eax
08494792 +0x5470:  mov    (%eax),%eax
08494794 +0x5472:  mov    %eax,(%esp)
08494797 +0x5475:  call   084958ce <+0x65ac>
0849479c +0x547a:  xor    $0x1,%eax
0849479f +0x547d:  test   %al,%al
084947a1 +0x547f:  je     084947aa <+0x5488>
084947a3 +0x5481:  mov    $0x0,%eax
084947a8 +0x5486:  jmp    084947af <+0x548d>
084947aa +0x5488:  mov    $0x1,%eax
084947af +0x548d:  leave
084947b0 +0x548e:  ret
084947b1 +0x548f:  push   %ebp
084947b2 +0x5490:  mov    %esp,%ebp
084947b4 +0x5492:  sub    $0x38,%esp
084947b7 +0x5495:  movl   $0x0,-0xc(%ebp)
084947be +0x549c:  movl   $0x0,0x8(%esp)
084947c6 +0x54a4:  movl   $0x1,0x4(%esp)
084947ce +0x54ac:  movl   $0x2,(%esp)
084947d5 +0x54b3:  call   0807dab0 <_init+0x3a8>
084947da +0x54b8:  mov    0x8(%ebp),%edx
084947dd +0x54bb:  mov    %eax,(%edx)
084947df +0x54bd:  mov    0x8(%ebp),%eax
084947e2 +0x54c0:  mov    (%eax),%eax
084947e4 +0x54c2:  test   %eax,%eax
084947e6 +0x54c4:  jns    084947f2 <+0x54d0>
084947e8 +0x54c6:  mov    $0x1,%eax
084947ed +0x54cb:  jmp    084948b1 <+0x558f>
084947f2 +0x54d0:  mov    0x8(%ebp),%eax
084947f5 +0x54d3:  mov    (%eax),%eax
084947f7 +0x54d5:  mov    %eax,(%esp)
084947fa +0x54d8:  call   084958ce <+0x65ac>
084947ff +0x54dd:  xor    $0x1,%eax
08494802 +0x54e0:  test   %al,%al
08494804 +0x54e2:  je     08494810 <+0x54ee>
08494806 +0x54e4:  mov    $0x2,%eax
0849480b +0x54e9:  jmp    084948b1 <+0x558f>
08494810 +0x54ee:  movl   $0x10,0x8(%esp)
08494818 +0x54f6:  movl   $0x0,0x4(%esp)
08494820 +0x54fe:  lea    -0x1c(%ebp),%eax
08494823 +0x5501:  mov    %eax,(%esp)
08494826 +0x5504:  call   0807dcc0 <_init+0x5b8>
0849482b +0x5509:  movw   $0x2,-0x1c(%ebp)
08494831 +0x550f:  mov    0xc(%ebp),%eax
08494834 +0x5512:  mov    %eax,(%esp)
08494837 +0x5515:  call   0807e530 <_init+0xe28>
0849483c +0x551a:  mov    %eax,-0x18(%ebp)
0849483f +0x551d:  mov    0x10(%ebp),%eax
08494842 +0x5520:  movzwl %ax,%eax
08494845 +0x5523:  mov    %eax,(%esp)
08494848 +0x5526:  call   0807e680 <_init+0xf78>
0849484d +0x552b:  mov    %ax,-0x1a(%ebp)
08494851 +0x552f:  lea    -0x1c(%ebp),%edx
08494854 +0x5532:  mov    0x8(%ebp),%eax
08494857 +0x5535:  mov    (%eax),%eax
08494859 +0x5537:  movl   $0x10,0x8(%esp)
08494861 +0x553f:  mov    %edx,0x4(%esp)
08494865 +0x5543:  mov    %eax,(%esp)
08494868 +0x5546:  call   0807e230 <_init+0xb28>
0849486d +0x554b:  mov    %eax,-0xc(%ebp)
08494870 +0x554e:  cmpl   $0x0,-0xc(%ebp)
08494874 +0x5552:  jns    084948ac <+0x558a>
08494876 +0x5554:  call   0807dd70 <_init+0x668>
0849487b +0x5559:  mov    (%eax),%eax
0849487d +0x555b:  cmp    $0x73,%eax
08494880 +0x555e:  je     084948ac <+0x558a>
08494882 +0x5560:  call   0807dd70 <_init+0x668>
08494887 +0x5565:  mov    (%eax),%eax
08494889 +0x5567:  cmp    $0xb,%eax
0849488c +0x556a:  je     084948ac <+0x558a>
0849488e +0x556c:  call   0807dd70 <_init+0x668>
08494893 +0x5571:  mov    (%eax),%eax
08494895 +0x5573:  cmp    $0x4,%eax
08494898 +0x5576:  je     084948ac <+0x558a>
0849489a +0x5578:  call   0807dd70 <_init+0x668>
0849489f +0x557d:  mov    (%eax),%eax
084948a1 +0x557f:  test   %eax,%eax
084948a3 +0x5581:  je     084948ac <+0x558a>
084948a5 +0x5583:  mov    $0x3,%eax
084948aa +0x5588:  jmp    084948b1 <+0x558f>
084948ac +0x558a:  mov    $0x0,%eax
084948b1 +0x558f:  leave
084948b2 +0x5590:  ret
084948b3 +0x5591:  nop
084948b4 +0x5592:  push   %ebp
084948b5 +0x5593:  mov    %esp,%ebp
084948b7 +0x5595:  sub    $0x18,%esp
084948ba +0x5598:  mov    0x8(%ebp),%eax
084948bd +0x559b:  movl   $0x0,0x4(%eax)
084948c4 +0x55a2:  movl   $0x0,0x8(%eax)
084948cb +0x55a9:  mov    0x8(%ebp),%eax
084948ce +0x55ac:  mov    (%eax),%eax
084948d0 +0x55ae:  movl   $0x0,0x4(%esp)
084948d8 +0x55b6:  mov    %eax,(%esp)
084948db +0x55b9:  call   0807dd90 <_init+0x688>
084948e0 +0x55be:  mov    0x8(%ebp),%eax
084948e3 +0x55c1:  mov    (%eax),%eax
084948e5 +0x55c3:  mov    %eax,(%esp)
084948e8 +0x55c6:  call   0807d860 <_init+0x158>
084948ed +0x55cb:  mov    0x8(%ebp),%eax
084948f0 +0x55ce:  movl   $0xffffffff,(%eax)
084948f6 +0x55d4:  mov    0x8(%ebp),%eax
084948f9 +0x55d7:  movb   $0x0,0x85120(%eax)
08494900 +0x55de:  mov    0x8(%ebp),%eax
08494903 +0x55e1:  movl   $0x0,0x85124(%eax)
0849490d +0x55eb:  mov    0x8(%ebp),%eax
08494910 +0x55ee:  movw   $0x0,0x85138(%eax)
08494919 +0x55f7:  mov    0x8(%ebp),%eax
0849491c +0x55fa:  movl   $0x0,0x85140(%eax)
08494926 +0x5604:  leave
08494927 +0x5605:  ret
08494928 +0x5606:  push   %ebp
08494929 +0x5607:  mov    %esp,%ebp
0849492b +0x5609:  push   %ebx
0849492c +0x560a:  sub    $0x14,%esp
0849492f +0x560d:  mov    0x8(%ebp),%ebx
08494932 +0x5610:  mov    0xc(%ebp),%eax
08494935 +0x5613:  mov    %eax,0x4(%esp)
08494939 +0x5617:  mov    %ebx,(%esp)
0849493c +0x561a:  call   08495926 <+0x6604>
08494941 +0x561f:  sub    $0x4,%esp
08494944 +0x5622:  mov    %ebx,%eax
08494946 +0x5624:  mov    -0x4(%ebp),%ebx
08494949 +0x5627:  leave
0849494a +0x5628:  ret    $0x4
0849494d +0x562b:  nop
0849494e +0x562c:  push   %ebp
0849494f +0x562d:  mov    %esp,%ebp
08494951 +0x562f:  push   %ebx
08494952 +0x5630:  sub    $0x14,%esp
08494955 +0x5633:  mov    0x8(%ebp),%ebx
08494958 +0x5636:  mov    0xc(%ebp),%eax
0849495b +0x5639:  mov    %eax,0x4(%esp)
0849495f +0x563d:  mov    %ebx,(%esp)
08494962 +0x5640:  call   0849594c <+0x662a>
08494967 +0x5645:  sub    $0x4,%esp
0849496a +0x5648:  mov    %ebx,%eax
0849496c +0x564a:  mov    -0x4(%ebp),%ebx
0849496f +0x564d:  leave
08494970 +0x564e:  ret    $0x4
08494973 +0x5651:  nop
08494974 +0x5652:  push   %ebp
08494975 +0x5653:  mov    %esp,%ebp
08494977 +0x5655:  mov    0x8(%ebp),%eax
0849497a +0x5658:  mov    (%eax),%edx
0849497c +0x565a:  mov    0xc(%ebp),%eax
0849497f +0x565d:  mov    (%eax),%eax
08494981 +0x565f:  cmp    %eax,%edx
08494983 +0x5661:  setne  %al
08494986 +0x5664:  pop    %ebp
08494987 +0x5665:  ret
08494988 +0x5666:  push   %ebp
08494989 +0x5667:  mov    %esp,%ebp
0849498b +0x5669:  mov    0x8(%ebp),%eax
0849498e +0x566c:  mov    (%eax),%eax
08494990 +0x566e:  add    $0x10,%eax
08494993 +0x5671:  pop    %ebp
08494994 +0x5672:  ret
08494995 +0x5673:  nop
08494996 +0x5674:  push   %ebp
08494997 +0x5675:  mov    %esp,%ebp
08494999 +0x5677:  push   %esi
0849499a +0x5678:  push   %ebx
0849499b +0x5679:  sub    $0x50,%esp
0849499e +0x567c:  cmpl   $0x0,0xc(%ebp)
084949a2 +0x5680:  jne    084949ea <+0x56c8>
084949a4 +0x5682:  movl   $0x5,0xc(%esp)
084949ac +0x568a:  movl   $0xa0,0x8(%esp)
084949b4 +0x5692:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
084949bc +0x569a:  lea    -0x38(%ebp),%eax
084949bf +0x569d:  mov    %eax,(%esp)
084949c2 +0x56a0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084949c7 +0x56a5:  movl   $0xa0,0xc(%esp)
084949cf +0x56ad:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EE4FreeEPS0_E12__FUNCTION__,0x8(%esp)
084949d7 +0x56b5:  movl   $"[%s][%d]",0x4(%esp)
084949df +0x56bd:  lea    -0x38(%ebp),%eax
084949e2 +0x56c0:  mov    %eax,(%esp)
084949e5 +0x56c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084949ea +0x56c8:  mov    0xc(%ebp),%eax
084949ed +0x56cb:  mov    %eax,-0x3c(%ebp)
084949f0 +0x56ce:  mov    0x8(%ebp),%eax
084949f3 +0x56d1:  lea    0x4(%eax),%edx
084949f6 +0x56d4:  lea    -0x3c(%ebp),%eax
084949f9 +0x56d7:  mov    %eax,0x4(%esp)
084949fd +0x56db:  mov    %edx,(%esp)
08494a00 +0x56de:  call   08495972 <+0x6650>
08494a05 +0x56e3:  mov    -0x3c(%ebp),%eax
08494a08 +0x56e6:  mov    0x3f85c(%eax),%eax
08494a0e +0x56ec:  cmp    $0x8f21,%eax
08494a13 +0x56f1:  je     08494a69 <+0x5747>
08494a15 +0x56f3:  mov    -0x3c(%ebp),%esi
08494a18 +0x56f6:  mov    -0x3c(%ebp),%eax
08494a1b +0x56f9:  mov    0x3f85c(%eax),%ebx
08494a21 +0x56ff:  movl   $0x0,0xc(%esp)
08494a29 +0x5707:  movl   $0xaa,0x8(%esp)
08494a31 +0x570f:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
08494a39 +0x5717:  lea    -0x28(%ebp),%eax
08494a3c +0x571a:  mov    %eax,(%esp)
08494a3f +0x571d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08494a44 +0x5722:  mov    %esi,0xc(%esp)
08494a48 +0x5726:  mov    %ebx,0x8(%esp)
08494a4c +0x572a:  movl   $"STATIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
08494a54 +0x5732:  lea    -0x28(%ebp),%eax
08494a57 +0x5735:  mov    %eax,(%esp)
08494a5a +0x5738:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08494a5f +0x573d:  mov    0x8(%ebp),%eax
08494a62 +0x5740:  movl   $0x5,0x2c(%eax)
08494a69 +0x5747:  mov    -0x3c(%ebp),%eax
08494a6c +0x574a:  movzbl 0x3f860(%eax),%eax
08494a73 +0x5751:  cmp    $0x1,%al
08494a75 +0x5753:  je     08494ad4 <+0x57b2>
08494a77 +0x5755:  mov    -0x3c(%ebp),%esi
08494a7a +0x5758:  mov    -0x3c(%ebp),%eax
08494a7d +0x575b:  movzbl 0x3f860(%eax),%eax
08494a84 +0x5762:  movsbl %al,%ebx
08494a87 +0x5765:  movl   $0x0,0xc(%esp)
08494a8f +0x576d:  movl   $0xb0,0x8(%esp)
08494a97 +0x5775:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EE4FreeEPS0_E12__FUNCTION__,0x4(%esp)
08494a9f +0x577d:  lea    -0x18(%ebp),%eax
08494aa2 +0x5780:  mov    %eax,(%esp)
08494aa5 +0x5783:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08494aaa +0x5788:  mov    %esi,0xc(%esp)
08494aae +0x578c:  mov    %ebx,0x8(%esp)
08494ab2 +0x5790:  movl   $"STATIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
08494aba +0x5798:  lea    -0x18(%ebp),%eax
08494abd +0x579b:  mov    %eax,(%esp)
08494ac0 +0x579e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08494ac5 +0x57a3:  mov    0x8(%ebp),%eax
08494ac8 +0x57a6:  movl   $0x6,0x2c(%eax)
08494acf +0x57ad:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
08494ad4 +0x57b2:  mov    -0x3c(%ebp),%eax
08494ad7 +0x57b5:  movzbl 0x3f860(%eax),%edx
08494ade +0x57bc:  sub    $0x1,%edx
08494ae1 +0x57bf:  mov    %dl,0x3f860(%eax)
08494ae7 +0x57c5:  add    $0x50,%esp
08494aea +0x57c8:  pop    %ebx
08494aeb +0x57c9:  pop    %esi
08494aec +0x57ca:  pop    %ebp
08494aed +0x57cb:  ret
08494aee +0x57cc:  push   %ebp
08494aef +0x57cd:  mov    %esp,%ebp
08494af1 +0x57cf:  push   %ebx
08494af2 +0x57d0:  sub    $0x14,%esp
08494af5 +0x57d3:  mov    0x8(%ebp),%ebx
08494af8 +0x57d6:  mov    0xc(%ebp),%eax
08494afb +0x57d9:  movl   $0x4,0x8(%esp)
08494b03 +0x57e1:  mov    %eax,0x4(%esp)
08494b07 +0x57e5:  mov    %ebx,(%esp)
08494b0a +0x57e8:  call   0807d880 <_init+0x178>
08494b0f +0x57ed:  mov    0xc(%ebp),%eax
08494b12 +0x57f0:  mov    (%eax),%eax
08494b14 +0x57f2:  mov    %eax,(%esp)
08494b17 +0x57f5:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08494b1c +0x57fa:  mov    0xc(%ebp),%edx
08494b1f +0x57fd:  mov    %eax,(%edx)
08494b21 +0x57ff:  mov    %ebx,%eax
08494b23 +0x5801:  add    $0x14,%esp
08494b26 +0x5804:  pop    %ebx
08494b27 +0x5805:  pop    %ebp
08494b28 +0x5806:  ret    $0x4
08494b2b +0x5809:  nop
08494b2c +0x580a:  push   %ebp
08494b2d +0x580b:  mov    %esp,%ebp
08494b2f +0x580d:  sub    $0x18,%esp
08494b32 +0x5810:  mov    0x8(%ebp),%eax
08494b35 +0x5813:  mov    0xc(%ebp),%edx
08494b38 +0x5816:  mov    %edx,0x4(%esp)
08494b3c +0x581a:  mov    %eax,(%esp)
08494b3f +0x581d:  call   0849598c <+0x666a>
08494b44 +0x5822:  leave
08494b45 +0x5823:  ret
08494b46 +0x5824:  push   %ebp
08494b47 +0x5825:  mov    %esp,%ebp
08494b49 +0x5827:  sub    $0x18,%esp
08494b4c +0x582a:  mov    0x8(%ebp),%eax
08494b4f +0x582d:  mov    (%eax),%eax
08494b51 +0x582f:  mov    %eax,(%esp)
08494b54 +0x5832:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08494b59 +0x5837:  mov    0x8(%ebp),%edx
08494b5c +0x583a:  mov    %eax,(%edx)
08494b5e +0x583c:  mov    0x8(%ebp),%eax
08494b61 +0x583f:  leave
08494b62 +0x5840:  ret
08494b63 +0x5841:  nop
08494b64 +0x5842:  push   %ebp
08494b65 +0x5843:  mov    %esp,%ebp
08494b67 +0x5845:  push   %ebx
08494b68 +0x5846:  sub    $0x14,%esp
08494b6b +0x5849:  mov    0x8(%ebp),%ebx
08494b6e +0x584c:  mov    0xc(%ebp),%eax
08494b71 +0x584f:  mov    0x10(%ebp),%edx
08494b74 +0x5852:  mov    %edx,0x8(%esp)
08494b78 +0x5856:  mov    %eax,0x4(%esp)
08494b7c +0x585a:  mov    %ebx,(%esp)
08494b7f +0x585d:  call   084959ce <+0x66ac>
08494b84 +0x5862:  sub    $0x4,%esp
08494b87 +0x5865:  mov    %ebx,%eax
08494b89 +0x5867:  mov    -0x4(%ebp),%ebx
08494b8c +0x586a:  leave
08494b8d +0x586b:  ret    $0x4
08494b90 +0x586e:  push   %ebp
08494b91 +0x586f:  mov    %esp,%ebp
08494b93 +0x5871:  sub    $0x18,%esp
08494b96 +0x5874:  mov    0x8(%ebp),%eax
08494b99 +0x5877:  add    $0x4,%eax
08494b9c +0x587a:  mov    %eax,(%esp)
08494b9f +0x587d:  call   08495a8c <+0x676a>
08494ba4 +0x5882:  leave
08494ba5 +0x5883:  ret
08494ba6 +0x5884:  push   %ebp
08494ba7 +0x5885:  mov    %esp,%ebp
08494ba9 +0x5887:  push   %ebx
08494baa +0x5888:  sub    $0x44,%esp
08494bad +0x588b:  mov    0x8(%ebp),%eax
08494bb0 +0x588e:  add    $0x4,%eax
08494bb3 +0x5891:  mov    %eax,(%esp)
08494bb6 +0x5894:  call   08495aa0 <+0x677e>
08494bbb +0x5899:  test   %al,%al
08494bbd +0x589b:  je     08494bc9 <+0x58a7>
08494bbf +0x589d:  mov    $0x0,%eax
08494bc4 +0x58a2:  jmp    08494ccd <+0x59ab>
08494bc9 +0x58a7:  mov    0x8(%ebp),%eax
08494bcc +0x58aa:  add    $0x4,%eax
08494bcf +0x58ad:  mov    %eax,(%esp)
08494bd2 +0x58b0:  call   08495ab4 <+0x6792>
08494bd7 +0x58b5:  mov    (%eax),%eax
08494bd9 +0x58b7:  mov    %eax,-0xc(%ebp)
08494bdc +0x58ba:  mov    0x8(%ebp),%eax
08494bdf +0x58bd:  add    $0x4,%eax
08494be2 +0x58c0:  mov    %eax,(%esp)
08494be5 +0x58c3:  call   08495ac8 <+0x67a6>
08494bea +0x58c8:  mov    -0xc(%ebp),%eax
08494bed +0x58cb:  mov    0x3f85c(%eax),%eax
08494bf3 +0x58d1:  cmp    $0x8f21,%eax
08494bf8 +0x58d6:  je     08494c4e <+0x592c>
08494bfa +0x58d8:  mov    -0xc(%ebp),%eax
08494bfd +0x58db:  mov    0x3f85c(%eax),%ebx
08494c03 +0x58e1:  movl   $0x0,0xc(%esp)
08494c0b +0x58e9:  movl   $0x89,0x8(%esp)
08494c13 +0x58f1:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EE7AcquireEvE12__FUNCTION__,0x4(%esp)
08494c1b +0x58f9:  lea    -0x2c(%ebp),%eax
08494c1e +0x58fc:  mov    %eax,(%esp)
08494c21 +0x58ff:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08494c26 +0x5904:  mov    -0xc(%ebp),%eax
08494c29 +0x5907:  mov    %eax,0xc(%esp)
08494c2d +0x590b:  mov    %ebx,0x8(%esp)
08494c31 +0x590f:  movl   $"STATIC MEMORY_POOL Acquire error dummy(%x), node(%x)",0x4(%esp)
08494c39 +0x5917:  lea    -0x2c(%ebp),%eax
08494c3c +0x591a:  mov    %eax,(%esp)
08494c3f +0x591d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08494c44 +0x5922:  mov    0x8(%ebp),%eax
08494c47 +0x5925:  movl   $0x3,0x2c(%eax)
08494c4e +0x592c:  mov    -0xc(%ebp),%eax
08494c51 +0x592f:  movzbl 0x3f860(%eax),%eax
08494c58 +0x5936:  test   %al,%al
08494c5a +0x5938:  je     08494cb4 <+0x5992>
08494c5c +0x593a:  mov    -0xc(%ebp),%eax
08494c5f +0x593d:  movzbl 0x3f860(%eax),%eax
08494c66 +0x5944:  movsbl %al,%ebx
08494c69 +0x5947:  movl   $0x0,0xc(%esp)
08494c71 +0x594f:  movl   $0x8f,0x8(%esp)
08494c79 +0x5957:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EE7AcquireEvE12__FUNCTION__,0x4(%esp)
08494c81 +0x595f:  lea    -0x1c(%ebp),%eax
08494c84 +0x5962:  mov    %eax,(%esp)
08494c87 +0x5965:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08494c8c +0x596a:  mov    -0xc(%ebp),%eax
08494c8f +0x596d:  mov    %eax,0xc(%esp)
08494c93 +0x5971:  mov    %ebx,0x8(%esp)
08494c97 +0x5975:  movl   $"STATIC MEMORY_POOL Acquire error reference count(%d), node(%x)",0x4(%esp)
08494c9f +0x597d:  lea    -0x1c(%ebp),%eax
08494ca2 +0x5980:  mov    %eax,(%esp)
08494ca5 +0x5983:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08494caa +0x5988:  mov    0x8(%ebp),%eax
08494cad +0x598b:  movl   $0x4,0x2c(%eax)
08494cb4 +0x5992:  mov    -0xc(%ebp),%eax
08494cb7 +0x5995:  movzbl 0x3f860(%eax),%eax
08494cbe +0x599c:  lea    0x1(%eax),%edx
08494cc1 +0x599f:  mov    -0xc(%ebp),%eax
08494cc4 +0x59a2:  mov    %dl,0x3f860(%eax)
08494cca +0x59a8:  mov    -0xc(%ebp),%eax
08494ccd +0x59ab:  add    $0x44,%esp
08494cd0 +0x59ae:  pop    %ebx
08494cd1 +0x59af:  pop    %ebp
08494cd2 +0x59b0:  ret
08494cd3 +0x59b1:  nop
08494cd4 +0x59b2:  push   %ebp
08494cd5 +0x59b3:  mov    %esp,%ebp
08494cd7 +0x59b5:  sub    $0x18,%esp
08494cda +0x59b8:  mov    0x8(%ebp),%eax
08494cdd +0x59bb:  mov    %eax,(%esp)
08494ce0 +0x59be:  call   08495adc <+0x67ba>
08494ce5 +0x59c3:  leave
08494ce6 +0x59c4:  ret
08494ce7 +0x59c5:  push   %ebp
08494ce8 +0x59c6:  mov    %esp,%ebp
08494cea +0x59c8:  push   %esi
08494ceb +0x59c9:  push   %ebx
08494cec +0x59ca:  sub    $0x10,%esp
08494cef +0x59cd:  mov    0x8(%ebp),%esi
08494cf2 +0x59d0:  mov    0x10(%ebp),%eax
08494cf5 +0x59d3:  mov    %eax,(%esp)
08494cf8 +0x59d6:  call   08495ae7 <+0x67c5>
08494cfd +0x59db:  mov    %eax,%ebx
08494cff +0x59dd:  mov    0xc(%ebp),%eax
08494d02 +0x59e0:  mov    %eax,(%esp)
08494d05 +0x59e3:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
08494d0a +0x59e8:  mov    %ebx,0x8(%esp)
08494d0e +0x59ec:  mov    %eax,0x4(%esp)
08494d12 +0x59f0:  mov    %esi,(%esp)
08494d15 +0x59f3:  call   08495af0 <+0x67ce>
08494d1a +0x59f8:  mov    %esi,%eax
08494d1c +0x59fa:  add    $0x10,%esp
08494d1f +0x59fd:  pop    %ebx
08494d20 +0x59fe:  pop    %esi
08494d21 +0x59ff:  pop    %ebp
08494d22 +0x5a00:  ret    $0x4
08494d25 +0x5a03:  nop
08494d26 +0x5a04:  push   %ebp
08494d27 +0x5a05:  mov    %esp,%ebp
08494d29 +0x5a07:  sub    $0x18,%esp
08494d2c +0x5a0a:  mov    0xc(%ebp),%eax
08494d2f +0x5a0d:  mov    %eax,(%esp)
08494d32 +0x5a10:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
08494d37 +0x5a15:  mov    (%eax),%edx
08494d39 +0x5a17:  mov    0x8(%ebp),%eax
08494d3c +0x5a1a:  mov    %edx,(%eax)
08494d3e +0x5a1c:  mov    0xc(%ebp),%eax
08494d41 +0x5a1f:  add    $0x4,%eax
08494d44 +0x5a22:  mov    %eax,(%esp)
08494d47 +0x5a25:  call   08495b1d <+0x67fb>
08494d4c +0x5a2a:  mov    (%eax),%edx
08494d4e +0x5a2c:  mov    0x8(%ebp),%eax
08494d51 +0x5a2f:  mov    %edx,0x4(%eax)
08494d54 +0x5a32:  leave
08494d55 +0x5a33:  ret
08494d56 +0x5a34:  push   %ebp
08494d57 +0x5a35:  mov    %esp,%ebp
08494d59 +0x5a37:  push   %ebx
08494d5a +0x5a38:  sub    $0x14,%esp
08494d5d +0x5a3b:  mov    0x8(%ebp),%ebx
08494d60 +0x5a3e:  mov    0xc(%ebp),%eax
08494d63 +0x5a41:  mov    0x10(%ebp),%edx
08494d66 +0x5a44:  mov    %edx,0x8(%esp)
08494d6a +0x5a48:  mov    %eax,0x4(%esp)
08494d6e +0x5a4c:  mov    %ebx,(%esp)
08494d71 +0x5a4f:  call   08495b26 <+0x6804>
08494d76 +0x5a54:  sub    $0x4,%esp
08494d79 +0x5a57:  mov    %ebx,%eax
08494d7b +0x5a59:  mov    -0x4(%ebp),%ebx
08494d7e +0x5a5c:  leave
08494d7f +0x5a5d:  ret    $0x4
08494d82 +0x5a60:  push   %ebp
08494d83 +0x5a61:  mov    %esp,%ebp
08494d85 +0x5a63:  sub    $0x18,%esp
08494d88 +0x5a66:  mov    0x8(%ebp),%eax
08494d8b +0x5a69:  mov    %eax,(%esp)
08494d8e +0x5a6c:  call   08495d0a <+0x69e8>
08494d93 +0x5a71:  leave
08494d94 +0x5a72:  ret
08494d95 +0x5a73:  nop
08494d96 +0x5a74:  push   %ebp
08494d97 +0x5a75:  mov    %esp,%ebp
08494d99 +0x5a77:  sub    $0x18,%esp
08494d9c +0x5a7a:  mov    0x8(%ebp),%eax
08494d9f +0x5a7d:  mov    %eax,(%esp)
08494da2 +0x5a80:  call   084922d6 <+0x2fb4>
08494da7 +0x5a85:  leave
08494da8 +0x5a86:  ret
08494da9 +0x5a87:  nop
08494daa +0x5a88:  push   %ebp
08494dab +0x5a89:  mov    %esp,%ebp
08494dad +0x5a8b:  push   %edi
08494dae +0x5a8c:  push   %esi
08494daf +0x5a8d:  push   %ebx
08494db0 +0x5a8e:  sub    $0x6c,%esp
08494db3 +0x5a91:  lea    -0x58(%ebp),%eax
08494db6 +0x5a94:  mov    %eax,(%esp)
08494db9 +0x5a97:  call   08495cf6 <+0x69d4>
08494dbe +0x5a9c:  mov    0x8(%ebp),%eax
08494dc1 +0x5a9f:  lea    0x4(%eax),%edx
08494dc4 +0x5aa2:  lea    -0x58(%ebp),%eax
08494dc7 +0x5aa5:  mov    %eax,0x4(%esp)
08494dcb +0x5aa9:  mov    %edx,(%esp)
08494dce +0x5aac:  call   08495d98 <+0x6a76>
08494dd3 +0x5ab1:  jmp    08494df0 <+0x5ace>
08494dd5 +0x5ab3:  mov    %edx,%ebx
08494dd7 +0x5ab5:  mov    %eax,%esi
08494dd9 +0x5ab7:  lea    -0x58(%ebp),%eax
08494ddc +0x5aba:  mov    %eax,(%esp)
08494ddf +0x5abd:  call   08495d0a <+0x69e8>
08494de4 +0x5ac2:  mov    %esi,%eax
08494de6 +0x5ac4:  mov    %ebx,%edx
08494de8 +0x5ac6:  mov    %eax,(%esp)
08494deb +0x5ac9:  call   08ae3750 <_Unwind_Resume>
08494df0 +0x5ace:  lea    -0x58(%ebp),%eax
08494df3 +0x5ad1:  mov    %eax,(%esp)
08494df6 +0x5ad4:  call   08495d0a <+0x69e8>
08494dfb +0x5ad9:  movl   $0xf8246a4,(%esp)
08494e02 +0x5ae0:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08494e07 +0x5ae5:  mov    %eax,%ebx
08494e09 +0x5ae7:  mov    %ebx,%eax
08494e0b +0x5ae9:  movl   $0x3e8,(%eax)
08494e11 +0x5aef:  mov    %ebx,%eax
08494e13 +0x5af1:  lea    0x4(%eax),%edi
08494e16 +0x5af4:  mov    %edi,-0x64(%ebp)
08494e19 +0x5af7:  mov    $0x3e7,%esi
08494e1e +0x5afc:  jmp    08494e35 <+0x5b13>
08494e20 +0x5afe:  mov    -0x64(%ebp),%eax
08494e23 +0x5b01:  mov    %eax,(%esp)
08494e26 +0x5b04:  call   08495dba <+0x6a98>
08494e2b +0x5b09:  addl   $0x3f864,-0x64(%ebp)
08494e32 +0x5b10:  sub    $0x1,%esi
08494e35 +0x5b13:  cmp    $0xffffffff,%esi
08494e38 +0x5b16:  setne  %al
08494e3b +0x5b19:  test   %al,%al
08494e3d +0x5b1b:  jne    08494e20 <+0x5afe>
08494e3f +0x5b1d:  jmp    08494e8a <+0x5b68>
08494e41 +0x5b1f:  mov    %edx,-0x5c(%ebp)
08494e44 +0x5b22:  mov    %eax,-0x60(%ebp)
08494e47 +0x5b25:  test   %edi,%edi
08494e49 +0x5b27:  je     08494e6f <+0x5b4d>
08494e4b +0x5b29:  mov    $0x3e7,%eax
08494e50 +0x5b2e:  sub    %esi,%eax
08494e52 +0x5b30:  imul   $0x3f864,%eax,%eax
08494e58 +0x5b36:  lea    (%edi,%eax,1),%esi
08494e5b +0x5b39:  cmp    %edi,%esi
08494e5d +0x5b3b:  je     08494e6f <+0x5b4d>
08494e5f +0x5b3d:  sub    $0x3f864,%esi
08494e65 +0x5b43:  mov    %esi,(%esp)
08494e68 +0x5b46:  call   08494d96 <+0x5a74>
08494e6d +0x5b4b:  jmp    08494e5b <+0x5b39>
08494e6f +0x5b4d:  mov    -0x60(%ebp),%eax
08494e72 +0x5b50:  mov    -0x5c(%ebp),%edx
08494e75 +0x5b53:  mov    %edx,%esi
08494e77 +0x5b55:  mov    %eax,%edi
08494e79 +0x5b57:  mov    %ebx,(%esp)
08494e7c +0x5b5a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08494e81 +0x5b5f:  mov    %edi,%eax
08494e83 +0x5b61:  mov    %esi,%edx
08494e85 +0x5b63:  jmp    08494f39 <+0x5c17>
08494e8a +0x5b68:  mov    %ebx,%eax
08494e8c +0x5b6a:  lea    0x4(%eax),%edx
08494e8f +0x5b6d:  mov    0x8(%ebp),%eax
08494e92 +0x5b70:  mov    %edx,(%eax)
08494e94 +0x5b72:  mov    0x8(%ebp),%eax
08494e97 +0x5b75:  mov    (%eax),%eax
08494e99 +0x5b77:  test   %eax,%eax
08494e9b +0x5b79:  jne    08494ee3 <+0x5bc1>
08494e9d +0x5b7b:  movl   $0x5,0xc(%esp)
08494ea5 +0x5b83:  movl   $0x6c,0x8(%esp)
08494ead +0x5b8b:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EEC1EvE12__FUNCTION__,0x4(%esp)
08494eb5 +0x5b93:  lea    -0x30(%ebp),%eax
08494eb8 +0x5b96:  mov    %eax,(%esp)
08494ebb +0x5b99:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08494ec0 +0x5b9e:  movl   $0x6c,0xc(%esp)
08494ec8 +0x5ba6:  movl   $&_ZZN10StaticPoolI20CACHE_CHARACTER_TYPELi1000EEC1EvE12__FUNCTION__,0x8(%esp)
08494ed0 +0x5bae:  movl   $"[%s][%d]",0x4(%esp)
08494ed8 +0x5bb6:  lea    -0x30(%ebp),%eax
08494edb +0x5bb9:  mov    %eax,(%esp)
08494ede +0x5bbc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08494ee3 +0x5bc1:  movl   $0x0,-0x1c(%ebp)
08494eea +0x5bc8:  jmp    08494f19 <+0x5bf7>
08494eec +0x5bca:  mov    0x8(%ebp),%eax
08494eef +0x5bcd:  mov    (%eax),%edx
08494ef1 +0x5bcf:  mov    -0x1c(%ebp),%eax
08494ef4 +0x5bd2:  imul   $0x3f864,%eax,%eax
08494efa +0x5bd8:  lea    (%edx,%eax,1),%eax
08494efd +0x5bdb:  mov    %eax,-0x20(%ebp)
08494f00 +0x5bde:  mov    0x8(%ebp),%eax
08494f03 +0x5be1:  lea    0x4(%eax),%edx
08494f06 +0x5be4:  lea    -0x20(%ebp),%eax
08494f09 +0x5be7:  mov    %eax,0x4(%esp)
08494f0d +0x5beb:  mov    %edx,(%esp)
08494f10 +0x5bee:  call   08495e00 <+0x6ade>
08494f15 +0x5bf3:  addl   $0x1,-0x1c(%ebp)
08494f19 +0x5bf7:  cmpl   $0x3e7,-0x1c(%ebp)
08494f20 +0x5bfe:  setle  %al
08494f23 +0x5c01:  test   %al,%al
08494f25 +0x5c03:  jne    08494eec <+0x5bca>
08494f27 +0x5c05:  mov    0x8(%ebp),%eax
08494f2a +0x5c08:  movl   $0x0,0x2c(%eax)
08494f31 +0x5c0f:  add    $0x6c,%esp
08494f34 +0x5c12:  pop    %ebx
08494f35 +0x5c13:  pop    %esi
08494f36 +0x5c14:  pop    %edi
08494f37 +0x5c15:  pop    %ebp
08494f38 +0x5c16:  ret
08494f39 +0x5c17:  mov    %edx,%ebx
08494f3b +0x5c19:  mov    %eax,%esi
08494f3d +0x5c1b:  mov    0x8(%ebp),%eax
08494f40 +0x5c1e:  add    $0x4,%eax
08494f43 +0x5c21:  mov    %eax,(%esp)
08494f46 +0x5c24:  call   08494d82 <+0x5a60>
08494f4b +0x5c29:  mov    %esi,%eax
08494f4d +0x5c2b:  mov    %ebx,%edx
08494f4f +0x5c2d:  mov    %eax,(%esp)
08494f52 +0x5c30:  call   08ae3750 <_Unwind_Resume>
08494f57 +0x5c35:  nop
08494f58 +0x5c36:  push   %ebp
08494f59 +0x5c37:  mov    %esp,%ebp
08494f5b +0x5c39:  push   %esi
08494f5c +0x5c3a:  push   %ebx
08494f5d +0x5c3b:  sub    $0x10,%esp
08494f60 +0x5c3e:  mov    0x8(%ebp),%eax
08494f63 +0x5c41:  mov    (%eax),%eax
08494f65 +0x5c43:  test   %eax,%eax
08494f67 +0x5c45:  je     08494fca <+0x5ca8>
08494f69 +0x5c47:  mov    0x8(%ebp),%eax
08494f6c +0x5c4a:  mov    (%eax),%edx
08494f6e +0x5c4c:  mov    0x8(%ebp),%eax
08494f71 +0x5c4f:  mov    (%eax),%eax
08494f73 +0x5c51:  sub    $0x4,%eax
08494f76 +0x5c54:  mov    (%eax),%eax
08494f78 +0x5c56:  imul   $0x3f864,%eax,%eax
08494f7e +0x5c5c:  lea    (%edx,%eax,1),%ebx
08494f81 +0x5c5f:  mov    0x8(%ebp),%eax
08494f84 +0x5c62:  mov    (%eax),%eax
08494f86 +0x5c64:  cmp    %eax,%ebx
08494f88 +0x5c66:  je     08494f9a <+0x5c78>
08494f8a +0x5c68:  sub    $0x3f864,%ebx
08494f90 +0x5c6e:  mov    %ebx,(%esp)
08494f93 +0x5c71:  call   08494d96 <+0x5a74>
08494f98 +0x5c76:  jmp    08494f81 <+0x5c5f>
08494f9a +0x5c78:  mov    0x8(%ebp),%eax
08494f9d +0x5c7b:  mov    (%eax),%eax
08494f9f +0x5c7d:  sub    $0x4,%eax
08494fa2 +0x5c80:  mov    %eax,(%esp)
08494fa5 +0x5c83:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08494faa +0x5c88:  jmp    08494fca <+0x5ca8>
08494fac +0x5c8a:  mov    %edx,%ebx
08494fae +0x5c8c:  mov    %eax,%esi
08494fb0 +0x5c8e:  mov    0x8(%ebp),%eax
08494fb3 +0x5c91:  add    $0x4,%eax
08494fb6 +0x5c94:  mov    %eax,(%esp)
08494fb9 +0x5c97:  call   08494d82 <+0x5a60>
08494fbe +0x5c9c:  mov    %esi,%eax
08494fc0 +0x5c9e:  mov    %ebx,%edx
08494fc2 +0x5ca0:  mov    %eax,(%esp)
08494fc5 +0x5ca3:  call   08ae3750 <_Unwind_Resume>
08494fca +0x5ca8:  mov    0x8(%ebp),%eax
08494fcd +0x5cab:  add    $0x4,%eax
08494fd0 +0x5cae:  mov    %eax,(%esp)
08494fd3 +0x5cb1:  call   08494d82 <+0x5a60>
08494fd8 +0x5cb6:  add    $0x10,%esp
08494fdb +0x5cb9:  pop    %ebx
08494fdc +0x5cba:  pop    %esi
08494fdd +0x5cbb:  pop    %ebp
08494fde +0x5cbc:  ret
08494fdf +0x5cbd:  nop
08494fe0 +0x5cbe:  push   %ebp
08494fe1 +0x5cbf:  mov    %esp,%ebp
08494fe3 +0x5cc1:  sub    $0x18,%esp
08494fe6 +0x5cc4:  mov    0x8(%ebp),%eax
08494fe9 +0x5cc7:  mov    %eax,(%esp)
08494fec +0x5cca:  call   08495e2a <+0x6b08>
08494ff1 +0x5ccf:  leave
08494ff2 +0x5cd0:  ret
08494ff3 +0x5cd1:  nop
08494ff4 +0x5cd2:  push   %ebp
08494ff5 +0x5cd3:  mov    %esp,%ebp
08494ff7 +0x5cd5:  sub    $0x18,%esp
08494ffa +0x5cd8:  mov    0x8(%ebp),%eax
08494ffd +0x5cdb:  mov    %eax,(%esp)
08495000 +0x5cde:  call   08495e3e <+0x6b1c>
08495005 +0x5ce3:  leave
08495006 +0x5ce4:  ret
08495007 +0x5ce5:  nop
08495008 +0x5ce6:  push   %ebp
08495009 +0x5ce7:  mov    %esp,%ebp
0849500b +0x5ce9:  push   %esi
0849500c +0x5cea:  push   %ebx
0849500d +0x5ceb:  sub    $0x10,%esp
08495010 +0x5cee:  mov    0x8(%ebp),%eax
08495013 +0x5cf1:  mov    %eax,(%esp)
08495016 +0x5cf4:  call   08495ea8 <+0x6b86>
0849501b +0x5cf9:  mov    %eax,0x4(%esp)
0849501f +0x5cfd:  mov    0x8(%ebp),%eax
08495022 +0x5d00:  mov    %eax,(%esp)
08495025 +0x5d03:  call   08495e52 <+0x6b30>
0849502a +0x5d08:  jmp    08495047 <+0x5d25>
0849502c +0x5d0a:  mov    %edx,%ebx
0849502e +0x5d0c:  mov    %eax,%esi
08495030 +0x5d0e:  mov    0x8(%ebp),%eax
08495033 +0x5d11:  mov    %eax,(%esp)
08495036 +0x5d14:  call   08494ff4 <+0x5cd2>
0849503b +0x5d19:  mov    %esi,%eax
0849503d +0x5d1b:  mov    %ebx,%edx
0849503f +0x5d1d:  mov    %eax,(%esp)
08495042 +0x5d20:  call   08ae3750 <_Unwind_Resume>
08495047 +0x5d25:  mov    0x8(%ebp),%eax
0849504a +0x5d28:  mov    %eax,(%esp)
0849504d +0x5d2b:  call   08494ff4 <+0x5cd2>
08495052 +0x5d30:  add    $0x10,%esp
08495055 +0x5d33:  pop    %ebx
08495056 +0x5d34:  pop    %esi
08495057 +0x5d35:  pop    %ebp
08495058 +0x5d36:  ret
08495059 +0x5d37:  nop
0849505a +0x5d38:  push   %ebp
0849505b +0x5d39:  mov    %esp,%ebp
0849505d +0x5d3b:  push   %ebx
0849505e +0x5d3c:  sub    $0x44,%esp
08495061 +0x5d3f:  mov    0x8(%ebp),%eax
08495064 +0x5d42:  add    $0x4,%eax
08495067 +0x5d45:  mov    %eax,(%esp)
0849506a +0x5d48:  call   08495eb4 <+0x6b92>
0849506f +0x5d4d:  test   %al,%al
08495071 +0x5d4f:  je     0849507d <+0x5d5b>
08495073 +0x5d51:  mov    $0x0,%eax
08495078 +0x5d56:  jmp    08495181 <+0x5e5f>
0849507d +0x5d5b:  mov    0x8(%ebp),%eax
08495080 +0x5d5e:  add    $0x4,%eax
08495083 +0x5d61:  mov    %eax,(%esp)
08495086 +0x5d64:  call   08495ec8 <+0x6ba6>
0849508b +0x5d69:  mov    (%eax),%eax
0849508d +0x5d6b:  mov    %eax,-0xc(%ebp)
08495090 +0x5d6e:  mov    0x8(%ebp),%eax
08495093 +0x5d71:  add    $0x4,%eax
08495096 +0x5d74:  mov    %eax,(%esp)
08495099 +0x5d77:  call   08495edc <+0x6bba>
0849509e +0x5d7c:  mov    -0xc(%ebp),%eax
084950a1 +0x5d7f:  mov    0x851a8(%eax),%eax
084950a7 +0x5d85:  cmp    $0x8f21,%eax
084950ac +0x5d8a:  je     08495102 <+0x5de0>
084950ae +0x5d8c:  mov    -0xc(%ebp),%eax
084950b1 +0x5d8f:  mov    0x851a8(%eax),%ebx
084950b7 +0x5d95:  movl   $0x0,0xc(%esp)
084950bf +0x5d9d:  movl   $0x89,0x8(%esp)
084950c7 +0x5da5:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EE7AcquireEvE12__FUNCTION__,0x4(%esp)
084950cf +0x5dad:  lea    -0x2c(%ebp),%eax
084950d2 +0x5db0:  mov    %eax,(%esp)
084950d5 +0x5db3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084950da +0x5db8:  mov    -0xc(%ebp),%eax
084950dd +0x5dbb:  mov    %eax,0xc(%esp)
084950e1 +0x5dbf:  mov    %ebx,0x8(%esp)
084950e5 +0x5dc3:  movl   $"STATIC MEMORY_POOL Acquire error dummy(%x), node(%x)",0x4(%esp)
084950ed +0x5dcb:  lea    -0x2c(%ebp),%eax
084950f0 +0x5dce:  mov    %eax,(%esp)
084950f3 +0x5dd1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084950f8 +0x5dd6:  mov    0x8(%ebp),%eax
084950fb +0x5dd9:  movl   $0x3,0x2c(%eax)
08495102 +0x5de0:  mov    -0xc(%ebp),%eax
08495105 +0x5de3:  movzbl 0x851ac(%eax),%eax
0849510c +0x5dea:  test   %al,%al
0849510e +0x5dec:  je     08495168 <+0x5e46>
08495110 +0x5dee:  mov    -0xc(%ebp),%eax
08495113 +0x5df1:  movzbl 0x851ac(%eax),%eax
0849511a +0x5df8:  movsbl %al,%ebx
0849511d +0x5dfb:  movl   $0x0,0xc(%esp)
08495125 +0x5e03:  movl   $0x8f,0x8(%esp)
0849512d +0x5e0b:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EE7AcquireEvE12__FUNCTION__,0x4(%esp)
08495135 +0x5e13:  lea    -0x1c(%ebp),%eax
08495138 +0x5e16:  mov    %eax,(%esp)
0849513b +0x5e19:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08495140 +0x5e1e:  mov    -0xc(%ebp),%eax
08495143 +0x5e21:  mov    %eax,0xc(%esp)
08495147 +0x5e25:  mov    %ebx,0x8(%esp)
0849514b +0x5e29:  movl   $"STATIC MEMORY_POOL Acquire error reference count(%d), node(%x)",0x4(%esp)
08495153 +0x5e31:  lea    -0x1c(%ebp),%eax
08495156 +0x5e34:  mov    %eax,(%esp)
08495159 +0x5e37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0849515e +0x5e3c:  mov    0x8(%ebp),%eax
08495161 +0x5e3f:  movl   $0x4,0x2c(%eax)
08495168 +0x5e46:  mov    -0xc(%ebp),%eax
0849516b +0x5e49:  movzbl 0x851ac(%eax),%eax
08495172 +0x5e50:  lea    0x1(%eax),%edx
08495175 +0x5e53:  mov    -0xc(%ebp),%eax
08495178 +0x5e56:  mov    %dl,0x851ac(%eax)
0849517e +0x5e5c:  mov    -0xc(%ebp),%eax
08495181 +0x5e5f:  add    $0x44,%esp
08495184 +0x5e62:  pop    %ebx
08495185 +0x5e63:  pop    %ebp
08495186 +0x5e64:  ret
08495187 +0x5e65:  nop
08495188 +0x5e66:  push   %ebp
08495189 +0x5e67:  mov    %esp,%ebp
0849518b +0x5e69:  push   %esi
0849518c +0x5e6a:  push   %ebx
0849518d +0x5e6b:  sub    $0x50,%esp
08495190 +0x5e6e:  cmpl   $0x0,0xc(%ebp)
08495194 +0x5e72:  jne    084951dc <+0x5eba>
08495196 +0x5e74:  movl   $0x5,0xc(%esp)
0849519e +0x5e7c:  movl   $0xa0,0x8(%esp)
084951a6 +0x5e84:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
084951ae +0x5e8c:  lea    -0x38(%ebp),%eax
084951b1 +0x5e8f:  mov    %eax,(%esp)
084951b4 +0x5e92:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084951b9 +0x5e97:  movl   $0xa0,0xc(%esp)
084951c1 +0x5e9f:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EE4FreeEPS1_E12__FUNCTION__,0x8(%esp)
084951c9 +0x5ea7:  movl   $"[%s][%d]",0x4(%esp)
084951d1 +0x5eaf:  lea    -0x38(%ebp),%eax
084951d4 +0x5eb2:  mov    %eax,(%esp)
084951d7 +0x5eb5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084951dc +0x5eba:  mov    0xc(%ebp),%eax
084951df +0x5ebd:  mov    %eax,-0x3c(%ebp)
084951e2 +0x5ec0:  mov    0x8(%ebp),%eax
084951e5 +0x5ec3:  lea    0x4(%eax),%edx
084951e8 +0x5ec6:  lea    -0x3c(%ebp),%eax
084951eb +0x5ec9:  mov    %eax,0x4(%esp)
084951ef +0x5ecd:  mov    %edx,(%esp)
084951f2 +0x5ed0:  call   08495ef0 <+0x6bce>
084951f7 +0x5ed5:  mov    -0x3c(%ebp),%eax
084951fa +0x5ed8:  mov    0x851a8(%eax),%eax
08495200 +0x5ede:  cmp    $0x8f21,%eax
08495205 +0x5ee3:  je     0849525b <+0x5f39>
08495207 +0x5ee5:  mov    -0x3c(%ebp),%esi
0849520a +0x5ee8:  mov    -0x3c(%ebp),%eax
0849520d +0x5eeb:  mov    0x851a8(%eax),%ebx
08495213 +0x5ef1:  movl   $0x0,0xc(%esp)
0849521b +0x5ef9:  movl   $0xaa,0x8(%esp)
08495223 +0x5f01:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
0849522b +0x5f09:  lea    -0x28(%ebp),%eax
0849522e +0x5f0c:  mov    %eax,(%esp)
08495231 +0x5f0f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08495236 +0x5f14:  mov    %esi,0xc(%esp)
0849523a +0x5f18:  mov    %ebx,0x8(%esp)
0849523e +0x5f1c:  movl   $"STATIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
08495246 +0x5f24:  lea    -0x28(%ebp),%eax
08495249 +0x5f27:  mov    %eax,(%esp)
0849524c +0x5f2a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08495251 +0x5f2f:  mov    0x8(%ebp),%eax
08495254 +0x5f32:  movl   $0x5,0x2c(%eax)
0849525b +0x5f39:  mov    -0x3c(%ebp),%eax
0849525e +0x5f3c:  movzbl 0x851ac(%eax),%eax
08495265 +0x5f43:  cmp    $0x1,%al
08495267 +0x5f45:  je     084952c6 <+0x5fa4>
08495269 +0x5f47:  mov    -0x3c(%ebp),%esi
0849526c +0x5f4a:  mov    -0x3c(%ebp),%eax
0849526f +0x5f4d:  movzbl 0x851ac(%eax),%eax
08495276 +0x5f54:  movsbl %al,%ebx
08495279 +0x5f57:  movl   $0x0,0xc(%esp)
08495281 +0x5f5f:  movl   $0xb0,0x8(%esp)
08495289 +0x5f67:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
08495291 +0x5f6f:  lea    -0x18(%ebp),%eax
08495294 +0x5f72:  mov    %eax,(%esp)
08495297 +0x5f75:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0849529c +0x5f7a:  mov    %esi,0xc(%esp)
084952a0 +0x5f7e:  mov    %ebx,0x8(%esp)
084952a4 +0x5f82:  movl   $"STATIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
084952ac +0x5f8a:  lea    -0x18(%ebp),%eax
084952af +0x5f8d:  mov    %eax,(%esp)
084952b2 +0x5f90:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084952b7 +0x5f95:  mov    0x8(%ebp),%eax
084952ba +0x5f98:  movl   $0x6,0x2c(%eax)
084952c1 +0x5f9f:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
084952c6 +0x5fa4:  mov    -0x3c(%ebp),%eax
084952c9 +0x5fa7:  movzbl 0x851ac(%eax),%edx
084952d0 +0x5fae:  sub    $0x1,%edx
084952d3 +0x5fb1:  mov    %dl,0x851ac(%eax)
084952d9 +0x5fb7:  add    $0x50,%esp
084952dc +0x5fba:  pop    %ebx
084952dd +0x5fbb:  pop    %esi
084952de +0x5fbc:  pop    %ebp
084952df +0x5fbd:  ret
084952e0 +0x5fbe:  push   %ebp
084952e1 +0x5fbf:  mov    %esp,%ebp
084952e3 +0x5fc1:  sub    $0x18,%esp
084952e6 +0x5fc4:  mov    0x8(%ebp),%eax
084952e9 +0x5fc7:  mov    0xc(%ebp),%edx
084952ec +0x5fca:  mov    %edx,0x4(%esp)
084952f0 +0x5fce:  mov    %eax,(%esp)
084952f3 +0x5fd1:  call   08495f0a <+0x6be8>
084952f8 +0x5fd6:  leave
084952f9 +0x5fd7:  ret
084952fa +0x5fd8:  push   %ebp
084952fb +0x5fd9:  mov    %esp,%ebp
084952fd +0x5fdb:  push   %ebx
084952fe +0x5fdc:  sub    $0x14,%esp
08495301 +0x5fdf:  mov    0x8(%ebp),%ebx
08495304 +0x5fe2:  mov    0xc(%ebp),%eax
08495307 +0x5fe5:  mov    %eax,0x4(%esp)
0849530b +0x5fe9:  mov    %ebx,(%esp)
0849530e +0x5fec:  call   0849612c <+0x6e0a>
08495313 +0x5ff1:  sub    $0x4,%esp
08495316 +0x5ff4:  mov    %ebx,%eax
08495318 +0x5ff6:  mov    -0x4(%ebp),%ebx
0849531b +0x5ff9:  leave
0849531c +0x5ffa:  ret    $0x4
0849531f +0x5ffd:  nop
08495320 +0x5ffe:  push   %ebp
08495321 +0x5fff:  mov    %esp,%ebp
08495323 +0x6001:  push   %ebx
08495324 +0x6002:  sub    $0x14,%esp
08495327 +0x6005:  mov    0x8(%ebp),%ebx
0849532a +0x6008:  mov    0xc(%ebp),%eax
0849532d +0x600b:  mov    %eax,0x4(%esp)
08495331 +0x600f:  mov    %ebx,(%esp)
08495334 +0x6012:  call   08496152 <+0x6e30>
08495339 +0x6017:  sub    $0x4,%esp
0849533c +0x601a:  mov    %ebx,%eax
0849533e +0x601c:  mov    -0x4(%ebp),%ebx
08495341 +0x601f:  leave
08495342 +0x6020:  ret    $0x4
08495345 +0x6023:  nop
08495346 +0x6024:  push   %ebp
08495347 +0x6025:  mov    %esp,%ebp
08495349 +0x6027:  mov    0x8(%ebp),%eax
0849534c +0x602a:  mov    (%eax),%edx
0849534e +0x602c:  mov    0xc(%ebp),%eax
08495351 +0x602f:  mov    (%eax),%eax
08495353 +0x6031:  cmp    %eax,%edx
08495355 +0x6033:  setne  %al
08495358 +0x6036:  pop    %ebp
08495359 +0x6037:  ret
0849535a +0x6038:  push   %ebp
0849535b +0x6039:  mov    %esp,%ebp
0849535d +0x603b:  sub    $0x18,%esp
08495360 +0x603e:  mov    0x8(%ebp),%eax
08495363 +0x6041:  mov    (%eax),%eax
08495365 +0x6043:  mov    %eax,(%esp)
08495368 +0x6046:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
0849536d +0x604b:  mov    0x8(%ebp),%edx
08495370 +0x604e:  mov    %eax,(%edx)
08495372 +0x6050:  mov    0x8(%ebp),%eax
08495375 +0x6053:  leave
08495376 +0x6054:  ret
08495377 +0x6055:  nop
08495378 +0x6056:  push   %ebp
08495379 +0x6057:  mov    %esp,%ebp
0849537b +0x6059:  mov    0x8(%ebp),%eax
0849537e +0x605c:  mov    (%eax),%eax
08495380 +0x605e:  add    $0x10,%eax
08495383 +0x6061:  pop    %ebp
08495384 +0x6062:  ret
08495385 +0x6063:  nop
08495386 +0x6064:  push   %ebp
08495387 +0x6065:  mov    %esp,%ebp
08495389 +0x6067:  push   %ebx
0849538a +0x6068:  sub    $0x14,%esp
0849538d +0x606b:  mov    0x8(%ebp),%ebx
08495390 +0x606e:  mov    0xc(%ebp),%eax
08495393 +0x6071:  mov    0x10(%ebp),%edx
08495396 +0x6074:  mov    %edx,0x8(%esp)
0849539a +0x6078:  mov    %eax,0x4(%esp)
0849539e +0x607c:  mov    %ebx,(%esp)
084953a1 +0x607f:  call   08496178 <+0x6e56>
084953a6 +0x6084:  sub    $0x4,%esp
084953a9 +0x6087:  mov    %ebx,%eax
084953ab +0x6089:  mov    -0x4(%ebp),%ebx
084953ae +0x608c:  leave
084953af +0x608d:  ret    $0x4
084953b2 +0x6090:  push   %ebp
084953b3 +0x6091:  mov    %esp,%ebp
084953b5 +0x6093:  sub    $0x18,%esp
084953b8 +0x6096:  mov    0x10(%ebp),%eax
084953bb +0x6099:  mov    %eax,0x4(%esp)
084953bf +0x609d:  mov    0xc(%ebp),%eax
084953c2 +0x60a0:  mov    %eax,(%esp)
084953c5 +0x60a3:  call   084906d0 <+0x13ae>
084953ca +0x60a8:  xor    $0x1,%eax
084953cd +0x60ab:  test   %al,%al
084953cf +0x60ad:  je     084953ea <+0x60c8>
084953d1 +0x60af:  mov    0xc(%ebp),%eax
084953d4 +0x60b2:  mov    %eax,0x4(%esp)
084953d8 +0x60b6:  mov    0x8(%ebp),%eax
084953db +0x60b9:  mov    %eax,(%esp)
084953de +0x60bc:  call   08496236 <+0x6f14>
084953e3 +0x60c1:  mov    $0x0,%eax
084953e8 +0x60c6:  jmp    08495402 <+0x60e0>
084953ea +0x60c8:  movl   $0x2,0x4(%esp)
084953f2 +0x60d0:  mov    0xc(%ebp),%eax
084953f5 +0x60d3:  mov    %eax,(%esp)
084953f8 +0x60d6:  call   0849004a <+0xd28>
084953fd +0x60db:  mov    $0x1,%eax
08495402 +0x60e0:  leave
08495403 +0x60e1:  ret
08495404 +0x60e2:  push   %ebp
08495405 +0x60e3:  mov    %esp,%ebp
08495407 +0x60e5:  mov    0x8(%ebp),%eax
0849540a +0x60e8:  mov    (%eax),%edx
0849540c +0x60ea:  mov    0xc(%ebp),%eax
0849540f +0x60ed:  mov    (%eax),%eax
08495411 +0x60ef:  cmp    %eax,%edx
08495413 +0x60f1:  sete   %al
08495416 +0x60f4:  pop    %ebp
08495417 +0x60f5:  ret
08495418 +0x60f6:  push   %ebp
08495419 +0x60f7:  mov    %esp,%ebp
0849541b +0x60f9:  push   %esi
0849541c +0x60fa:  push   %ebx
0849541d +0x60fb:  sub    $0x10,%esp
08495420 +0x60fe:  mov    0x8(%ebp),%esi
08495423 +0x6101:  mov    0x10(%ebp),%eax
08495426 +0x6104:  mov    %eax,(%esp)
08495429 +0x6107:  call   0849625b <+0x6f39>
0849542e +0x610c:  mov    %eax,%ebx
08495430 +0x610e:  mov    0xc(%ebp),%eax
08495433 +0x6111:  mov    %eax,(%esp)
08495436 +0x6114:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
0849543b +0x6119:  mov    %ebx,0x8(%esp)
0849543f +0x611d:  mov    %eax,0x4(%esp)
08495443 +0x6121:  mov    %esi,(%esp)
08495446 +0x6124:  call   08496264 <+0x6f42>
0849544b +0x6129:  mov    %esi,%eax
0849544d +0x612b:  add    $0x10,%esp
08495450 +0x612e:  pop    %ebx
08495451 +0x612f:  pop    %esi
08495452 +0x6130:  pop    %ebp
08495453 +0x6131:  ret    $0x4
08495456 +0x6134:  push   %ebp
08495457 +0x6135:  mov    %esp,%ebp
08495459 +0x6137:  sub    $0x18,%esp
0849545c +0x613a:  mov    0xc(%ebp),%eax
0849545f +0x613d:  mov    %eax,(%esp)
08495462 +0x6140:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
08495467 +0x6145:  mov    (%eax),%edx
08495469 +0x6147:  mov    0x8(%ebp),%eax
0849546c +0x614a:  mov    %edx,(%eax)
0849546e +0x614c:  mov    0xc(%ebp),%eax
08495471 +0x614f:  add    $0x4,%eax
08495474 +0x6152:  mov    %eax,(%esp)
08495477 +0x6155:  call   084962a3 <+0x6f81>
0849547c +0x615a:  mov    0x8(%ebp),%edx
0849547f +0x615d:  mov    (%eax),%ecx
08495481 +0x615f:  mov    %ecx,0x4(%edx)
08495484 +0x6162:  mov    0x4(%eax),%ecx
08495487 +0x6165:  mov    %ecx,0x8(%edx)
0849548a +0x6168:  mov    0x8(%eax),%ecx
0849548d +0x616b:  mov    %ecx,0xc(%edx)
08495490 +0x616e:  mov    0xc(%eax),%eax
08495493 +0x6171:  mov    %eax,0x10(%edx)
08495496 +0x6174:  leave
08495497 +0x6175:  ret
08495498 +0x6176:  push   %ebp
08495499 +0x6177:  mov    %esp,%ebp
0849549b +0x6179:  push   %ebx
0849549c +0x617a:  sub    $0x14,%esp
0849549f +0x617d:  mov    0x8(%ebp),%ebx
084954a2 +0x6180:  mov    0xc(%ebp),%eax
084954a5 +0x6183:  mov    0x10(%ebp),%edx
084954a8 +0x6186:  mov    %edx,0x8(%esp)
084954ac +0x618a:  mov    %eax,0x4(%esp)
084954b0 +0x618e:  mov    %ebx,(%esp)
084954b3 +0x6191:  call   084962ac <+0x6f8a>
084954b8 +0x6196:  sub    $0x4,%esp
084954bb +0x6199:  mov    %ebx,%eax
084954bd +0x619b:  mov    -0x4(%ebp),%ebx
084954c0 +0x619e:  leave
084954c1 +0x619f:  ret    $0x4
084954c4 +0x61a2:  push   %ebp
084954c5 +0x61a3:  mov    %esp,%ebp
084954c7 +0x61a5:  sub    $0x18,%esp
084954ca +0x61a8:  mov    0x8(%ebp),%eax
084954cd +0x61ab:  mov    0xc(%ebp),%edx
084954d0 +0x61ae:  mov    %edx,0x4(%esp)
084954d4 +0x61b2:  mov    %eax,(%esp)
084954d7 +0x61b5:  call   0849647c <+0x715a>
084954dc +0x61ba:  leave
084954dd +0x61bb:  ret
084954de +0x61bc:  push   %ebp
084954df +0x61bd:  mov    %esp,%ebp
084954e1 +0x61bf:  sub    $0x18,%esp
084954e4 +0x61c2:  mov    0x8(%ebp),%eax
084954e7 +0x61c5:  mov    %eax,(%esp)
084954ea +0x61c8:  call   0848f33e <+0x1c>
084954ef +0x61cd:  leave
084954f0 +0x61ce:  ret
084954f1 +0x61cf:  nop
084954f2 +0x61d0:  push   %ebp
084954f3 +0x61d1:  mov    %esp,%ebp
084954f5 +0x61d3:  sub    $0x18,%esp
084954f8 +0x61d6:  mov    0x8(%ebp),%eax
084954fb +0x61d9:  mov    %eax,(%esp)
084954fe +0x61dc:  call   084964be <+0x719c>
08495503 +0x61e1:  leave
08495504 +0x61e2:  ret
08495505 +0x61e3:  nop
08495506 +0x61e4:  push   %ebp
08495507 +0x61e5:  mov    %esp,%ebp
08495509 +0x61e7:  sub    $0x28,%esp
0849550c +0x61ea:  mov    0x10(%ebp),%eax
0849550f +0x61ed:  mov    %eax,0x4(%esp)
08495513 +0x61f1:  mov    0xc(%ebp),%eax
08495516 +0x61f4:  mov    %eax,(%esp)
08495519 +0x61f7:  call   08490829 <+0x1507>
0849551e +0x61fc:  mov    %eax,-0xc(%ebp)
08495521 +0x61ff:  cmpl   $0x0,-0xc(%ebp)
08495525 +0x6203:  jne    0849552e <+0x620c>
08495527 +0x6205:  mov    $0x0,%eax
0849552c +0x620a:  jmp    0849556e <+0x624c>
0849552e +0x620c:  mov    0x8(%ebp),%eax
08495531 +0x620f:  movl   $0x14,0x8(%esp)
08495539 +0x6217:  mov    -0xc(%ebp),%edx
0849553c +0x621a:  mov    %edx,0x4(%esp)
08495540 +0x621e:  mov    %eax,(%esp)
08495543 +0x6221:  call   084964ca <+0x71a8>
08495548 +0x6226:  xor    $0x1,%eax
0849554b +0x6229:  test   %al,%al
0849554d +0x622b:  je     08495556 <+0x6234>
0849554f +0x622d:  mov    $0x0,%eax
08495554 +0x6232:  jmp    0849556e <+0x624c>
08495556 +0x6234:  movl   $0x10,0x4(%esp)
0849555e +0x623c:  mov    -0xc(%ebp),%eax
08495561 +0x623f:  mov    %eax,(%esp)
08495564 +0x6242:  call   0849004a <+0xd28>
08495569 +0x6247:  mov    $0x1,%eax
0849556e +0x624c:  leave
0849556f +0x624d:  ret
08495570 +0x624e:  push   %ebp
08495571 +0x624f:  mov    %esp,%ebp
08495573 +0x6251:  sub    $0x28,%esp
08495576 +0x6254:  movl   $0x0,-0xc(%ebp)
0849557d +0x625b:  mov    0x10(%ebp),%eax
08495580 +0x625e:  mov    %eax,0x4(%esp)
08495584 +0x6262:  mov    0xc(%ebp),%eax
08495587 +0x6265:  mov    %eax,(%esp)
0849558a +0x6268:  call   08490767 <+0x1445>
0849558f +0x626d:  mov    %eax,-0xc(%ebp)
08495592 +0x6270:  cmpl   $0x0,-0xc(%ebp)
08495596 +0x6274:  sete   %al
08495599 +0x6277:  test   %al,%al
0849559b +0x6279:  je     084955a4 <+0x6282>
0849559d +0x627b:  mov    $0x0,%eax
084955a2 +0x6280:  jmp    084955be <+0x629c>
084955a4 +0x6282:  mov    0x8(%ebp),%eax
084955a7 +0x6285:  movl   $0x8,0x8(%esp)
084955af +0x628d:  mov    -0xc(%ebp),%edx
084955b2 +0x6290:  mov    %edx,0x4(%esp)
084955b6 +0x6294:  mov    %eax,(%esp)
084955b9 +0x6297:  call   084964ca <+0x71a8>
084955be +0x629c:  leave
084955bf +0x629d:  ret
084955c0 +0x629e:  push   %ebp
084955c1 +0x629f:  mov    %esp,%ebp
084955c3 +0x62a1:  sub    $0x18,%esp
084955c6 +0x62a4:  mov    0x8(%ebp),%eax
084955c9 +0x62a7:  mov    %eax,(%esp)
084955cc +0x62aa:  call   0857c084 <_ZN12EpollHandlerC1Ev>  ; EpollHandler::EpollHandler()
084955d1 +0x62af:  leave
084955d2 +0x62b0:  ret
084955d3 +0x62b1:  nop
084955d4 +0x62b2:  push   %ebp
084955d5 +0x62b3:  mov    %esp,%ebp
084955d7 +0x62b5:  sub    $0x18,%esp
084955da +0x62b8:  mov    0x8(%ebp),%eax
084955dd +0x62bb:  mov    %eax,(%esp)
084955e0 +0x62be:  call   08496512 <+0x71f0>
084955e5 +0x62c3:  leave
084955e6 +0x62c4:  ret
084955e7 +0x62c5:  nop
084955e8 +0x62c6:  push   %ebp
084955e9 +0x62c7:  mov    %esp,%ebp
084955eb +0x62c9:  sub    $0x18,%esp
084955ee +0x62cc:  mov    0x8(%ebp),%eax
084955f1 +0x62cf:  mov    %eax,(%esp)
084955f4 +0x62d2:  call   08496526 <+0x7204>
084955f9 +0x62d7:  leave
084955fa +0x62d8:  ret
084955fb +0x62d9:  nop
084955fc +0x62da:  push   %ebp
084955fd +0x62db:  mov    %esp,%ebp
084955ff +0x62dd:  push   %esi
08495600 +0x62de:  push   %ebx
08495601 +0x62df:  sub    $0x10,%esp
08495604 +0x62e2:  mov    0x8(%ebp),%eax
08495607 +0x62e5:  mov    %eax,(%esp)
0849560a +0x62e8:  call   08496590 <+0x726e>
0849560f +0x62ed:  mov    %eax,0x4(%esp)
08495613 +0x62f1:  mov    0x8(%ebp),%eax
08495616 +0x62f4:  mov    %eax,(%esp)
08495619 +0x62f7:  call   0849653a <+0x7218>
0849561e +0x62fc:  jmp    0849563b <+0x6319>
08495620 +0x62fe:  mov    %edx,%ebx
08495622 +0x6300:  mov    %eax,%esi
08495624 +0x6302:  mov    0x8(%ebp),%eax
08495627 +0x6305:  mov    %eax,(%esp)
0849562a +0x6308:  call   084955e8 <+0x62c6>
0849562f +0x630d:  mov    %esi,%eax
08495631 +0x630f:  mov    %ebx,%edx
08495633 +0x6311:  mov    %eax,(%esp)
08495636 +0x6314:  call   08ae3750 <_Unwind_Resume>
0849563b +0x6319:  mov    0x8(%ebp),%eax
0849563e +0x631c:  mov    %eax,(%esp)
08495641 +0x631f:  call   084955e8 <+0x62c6>
08495646 +0x6324:  add    $0x10,%esp
08495649 +0x6327:  pop    %ebx
0849564a +0x6328:  pop    %esi
0849564b +0x6329:  pop    %ebp
0849564c +0x632a:  ret
0849564d +0x632b:  nop
0849564e +0x632c:  push   %ebp
0849564f +0x632d:  mov    %esp,%ebp
08495651 +0x632f:  sub    $0x18,%esp
08495654 +0x6332:  mov    0x8(%ebp),%eax
08495657 +0x6335:  mov    %eax,(%esp)
0849565a +0x6338:  call   084965b0 <+0x728e>
0849565f +0x633d:  leave
08495660 +0x633e:  ret
08495661 +0x633f:  nop
08495662 +0x6340:  push   %ebp
08495663 +0x6341:  mov    %esp,%ebp
08495665 +0x6343:  sub    $0x18,%esp
08495668 +0x6346:  mov    0x8(%ebp),%eax
0849566b +0x6349:  mov    %eax,(%esp)
0849566e +0x634c:  call   08493fbe <+0x4c9c>
08495673 +0x6351:  leave
08495674 +0x6352:  ret
08495675 +0x6353:  nop
08495676 +0x6354:  push   %ebp
08495677 +0x6355:  mov    %esp,%ebp
08495679 +0x6357:  sub    $0x18,%esp
0849567c +0x635a:  mov    0x8(%ebp),%eax
0849567f +0x635d:  mov    %eax,(%esp)
08495682 +0x6360:  call   08495662 <+0x6340>
08495687 +0x6365:  leave
08495688 +0x6366:  ret
08495689 +0x6367:  nop
0849568a +0x6368:  push   %ebp
0849568b +0x6369:  mov    %esp,%ebp
0849568d +0x636b:  push   %edi
0849568e +0x636c:  push   %esi
0849568f +0x636d:  push   %ebx
08495690 +0x636e:  sub    $0x6c,%esp
08495693 +0x6371:  lea    -0x58(%ebp),%eax
08495696 +0x6374:  mov    %eax,(%esp)
08495699 +0x6377:  call   0849659c <+0x727a>
0849569e +0x637c:  mov    0x8(%ebp),%eax
084956a1 +0x637f:  lea    0x4(%eax),%edx
084956a4 +0x6382:  lea    -0x58(%ebp),%eax
084956a7 +0x6385:  mov    %eax,0x4(%esp)
084956ab +0x6389:  mov    %edx,(%esp)
084956ae +0x638c:  call   0849663e <+0x731c>
084956b3 +0x6391:  jmp    084956d0 <+0x63ae>
084956b5 +0x6393:  mov    %edx,%ebx
084956b7 +0x6395:  mov    %eax,%esi
084956b9 +0x6397:  lea    -0x58(%ebp),%eax
084956bc +0x639a:  mov    %eax,(%esp)
084956bf +0x639d:  call   084965b0 <+0x728e>
084956c4 +0x63a2:  mov    %esi,%eax
084956c6 +0x63a4:  mov    %ebx,%edx
084956c8 +0x63a6:  mov    %eax,(%esp)
084956cb +0x63a9:  call   08ae3750 <_Unwind_Resume>
084956d0 +0x63ae:  lea    -0x58(%ebp),%eax
084956d3 +0x63b1:  mov    %eax,(%esp)
084956d6 +0x63b4:  call   084965b0 <+0x728e>
084956db +0x63b9:  movl   $0x9bfba44,(%esp)
084956e2 +0x63c0:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
084956e7 +0x63c5:  mov    %eax,%ebx
084956e9 +0x63c7:  mov    %ebx,%eax
084956eb +0x63c9:  movl   $0x12c,(%eax)
084956f1 +0x63cf:  mov    %ebx,%eax
084956f3 +0x63d1:  lea    0x4(%eax),%edi
084956f6 +0x63d4:  mov    %edi,-0x64(%ebp)
084956f9 +0x63d7:  mov    $0x12b,%esi
084956fe +0x63dc:  jmp    08495715 <+0x63f3>
08495700 +0x63de:  mov    -0x64(%ebp),%eax
08495703 +0x63e1:  mov    %eax,(%esp)
08495706 +0x63e4:  call   08496660 <+0x733e>
0849570b +0x63e9:  addl   $0x851b0,-0x64(%ebp)
08495712 +0x63f0:  sub    $0x1,%esi
08495715 +0x63f3:  cmp    $0xffffffff,%esi
08495718 +0x63f6:  setne  %al
0849571b +0x63f9:  test   %al,%al
0849571d +0x63fb:  jne    08495700 <+0x63de>
0849571f +0x63fd:  jmp    0849576a <+0x6448>
08495721 +0x63ff:  mov    %edx,-0x5c(%ebp)
08495724 +0x6402:  mov    %eax,-0x60(%ebp)
08495727 +0x6405:  test   %edi,%edi
08495729 +0x6407:  je     0849574f <+0x642d>
0849572b +0x6409:  mov    $0x12b,%eax
08495730 +0x640e:  sub    %esi,%eax
08495732 +0x6410:  imul   $0x851b0,%eax,%eax
08495738 +0x6416:  lea    (%edi,%eax,1),%esi
0849573b +0x6419:  cmp    %edi,%esi
0849573d +0x641b:  je     0849574f <+0x642d>
0849573f +0x641d:  sub    $0x851b0,%esi
08495745 +0x6423:  mov    %esi,(%esp)
08495748 +0x6426:  call   08495676 <+0x6354>
0849574d +0x642b:  jmp    0849573b <+0x6419>
0849574f +0x642d:  mov    -0x60(%ebp),%eax
08495752 +0x6430:  mov    -0x5c(%ebp),%edx
08495755 +0x6433:  mov    %edx,%esi
08495757 +0x6435:  mov    %eax,%edi
08495759 +0x6437:  mov    %ebx,(%esp)
0849575c +0x643a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08495761 +0x643f:  mov    %edi,%eax
08495763 +0x6441:  mov    %esi,%edx
08495765 +0x6443:  jmp    08495819 <+0x64f7>
0849576a +0x6448:  mov    %ebx,%eax
0849576c +0x644a:  lea    0x4(%eax),%edx
0849576f +0x644d:  mov    0x8(%ebp),%eax
08495772 +0x6450:  mov    %edx,(%eax)
08495774 +0x6452:  mov    0x8(%ebp),%eax
08495777 +0x6455:  mov    (%eax),%eax
08495779 +0x6457:  test   %eax,%eax
0849577b +0x6459:  jne    084957c3 <+0x64a1>
0849577d +0x645b:  movl   $0x5,0xc(%esp)
08495785 +0x6463:  movl   $0x6c,0x8(%esp)
0849578d +0x646b:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EEC1EvE12__FUNCTION__,0x4(%esp)
08495795 +0x6473:  lea    -0x30(%ebp),%eax
08495798 +0x6476:  mov    %eax,(%esp)
0849579b +0x6479:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084957a0 +0x647e:  movl   $0x6c,0xc(%esp)
084957a8 +0x6486:  movl   $&_ZZN10StaticPoolIN15exchange_server8CSessionELi300EEC1EvE12__FUNCTION__,0x8(%esp)
084957b0 +0x648e:  movl   $"[%s][%d]",0x4(%esp)
084957b8 +0x6496:  lea    -0x30(%ebp),%eax
084957bb +0x6499:  mov    %eax,(%esp)
084957be +0x649c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084957c3 +0x64a1:  movl   $0x0,-0x1c(%ebp)
084957ca +0x64a8:  jmp    084957f9 <+0x64d7>
084957cc +0x64aa:  mov    0x8(%ebp),%eax
084957cf +0x64ad:  mov    (%eax),%edx
084957d1 +0x64af:  mov    -0x1c(%ebp),%eax
084957d4 +0x64b2:  imul   $0x851b0,%eax,%eax
084957da +0x64b8:  lea    (%edx,%eax,1),%eax
084957dd +0x64bb:  mov    %eax,-0x20(%ebp)
084957e0 +0x64be:  mov    0x8(%ebp),%eax
084957e3 +0x64c1:  lea    0x4(%eax),%edx
084957e6 +0x64c4:  lea    -0x20(%ebp),%eax
084957e9 +0x64c7:  mov    %eax,0x4(%esp)
084957ed +0x64cb:  mov    %edx,(%esp)
084957f0 +0x64ce:  call   0849668a <+0x7368>
084957f5 +0x64d3:  addl   $0x1,-0x1c(%ebp)
084957f9 +0x64d7:  cmpl   $0x12b,-0x1c(%ebp)
08495800 +0x64de:  setle  %al
08495803 +0x64e1:  test   %al,%al
08495805 +0x64e3:  jne    084957cc <+0x64aa>
08495807 +0x64e5:  mov    0x8(%ebp),%eax
0849580a +0x64e8:  movl   $0x0,0x2c(%eax)
08495811 +0x64ef:  add    $0x6c,%esp
08495814 +0x64f2:  pop    %ebx
08495815 +0x64f3:  pop    %esi
08495816 +0x64f4:  pop    %edi
08495817 +0x64f5:  pop    %ebp
08495818 +0x64f6:  ret
08495819 +0x64f7:  mov    %edx,%ebx
0849581b +0x64f9:  mov    %eax,%esi
0849581d +0x64fb:  mov    0x8(%ebp),%eax
08495820 +0x64fe:  add    $0x4,%eax
08495823 +0x6501:  mov    %eax,(%esp)
08495826 +0x6504:  call   0849564e <+0x632c>
0849582b +0x6509:  mov    %esi,%eax
0849582d +0x650b:  mov    %ebx,%edx
0849582f +0x650d:  mov    %eax,(%esp)
08495832 +0x6510:  call   08ae3750 <_Unwind_Resume>
08495837 +0x6515:  nop
08495838 +0x6516:  push   %ebp
08495839 +0x6517:  mov    %esp,%ebp
0849583b +0x6519:  push   %ebx
0849583c +0x651a:  sub    $0x14,%esp
0849583f +0x651d:  mov    0x8(%ebp),%eax
08495842 +0x6520:  mov    (%eax),%eax
08495844 +0x6522:  test   %eax,%eax
08495846 +0x6524:  je     08495889 <+0x6567>
08495848 +0x6526:  mov    0x8(%ebp),%eax
0849584b +0x6529:  mov    (%eax),%edx
0849584d +0x652b:  mov    0x8(%ebp),%eax
08495850 +0x652e:  mov    (%eax),%eax
08495852 +0x6530:  sub    $0x4,%eax
08495855 +0x6533:  mov    (%eax),%eax
08495857 +0x6535:  imul   $0x851b0,%eax,%eax
0849585d +0x653b:  lea    (%edx,%eax,1),%ebx
08495860 +0x653e:  mov    0x8(%ebp),%eax
08495863 +0x6541:  mov    (%eax),%eax
08495865 +0x6543:  cmp    %eax,%ebx
08495867 +0x6545:  je     08495879 <+0x6557>
08495869 +0x6547:  sub    $0x851b0,%ebx
0849586f +0x654d:  mov    %ebx,(%esp)
08495872 +0x6550:  call   08495676 <+0x6354>
08495877 +0x6555:  jmp    08495860 <+0x653e>
08495879 +0x6557:  mov    0x8(%ebp),%eax
0849587c +0x655a:  mov    (%eax),%eax
0849587e +0x655c:  sub    $0x4,%eax
08495881 +0x655f:  mov    %eax,(%esp)
08495884 +0x6562:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08495889 +0x6567:  mov    0x8(%ebp),%eax
0849588c +0x656a:  add    $0x4,%eax
0849588f +0x656d:  mov    %eax,(%esp)
08495892 +0x6570:  call   0849564e <+0x632c>
08495897 +0x6575:  add    $0x14,%esp
0849589a +0x6578:  pop    %ebx
0849589b +0x6579:  pop    %ebp
0849589c +0x657a:  ret
0849589d +0x657b:  nop
0849589e +0x657c:  push   %ebp
0849589f +0x657d:  mov    %esp,%ebp
084958a1 +0x657f:  sub    $0x18,%esp
084958a4 +0x6582:  mov    0x8(%ebp),%eax
084958a7 +0x6585:  add    $0x85188,%eax
084958ac +0x658a:  mov    %eax,(%esp)
084958af +0x658d:  call   0810539e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x1d>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x1d
084958b4 +0x6592:  leave
084958b5 +0x6593:  ret
084958b6 +0x6594:  push   %ebp
084958b7 +0x6595:  mov    %esp,%ebp
084958b9 +0x6597:  sub    $0x18,%esp
084958bc +0x659a:  mov    0x8(%ebp),%eax
084958bf +0x659d:  add    $0x85188,%eax
084958c4 +0x65a2:  mov    %eax,(%esp)
084958c7 +0x65a5:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
084958cc +0x65aa:  leave
084958cd +0x65ab:  ret
084958ce +0x65ac:  push   %ebp
084958cf +0x65ad:  mov    %esp,%ebp
084958d1 +0x65af:  sub    $0x28,%esp
084958d4 +0x65b2:  movl   $0x0,0x8(%esp)
084958dc +0x65ba:  movl   $0x3,0x4(%esp)
084958e4 +0x65c2:  mov    0x8(%ebp),%eax
084958e7 +0x65c5:  mov    %eax,(%esp)
084958ea +0x65c8:  call   0807e470 <_init+0xd68>
084958ef +0x65cd:  mov    %eax,-0x10(%ebp)
084958f2 +0x65d0:  mov    -0x10(%ebp),%eax
084958f5 +0x65d3:  or     $0x8,%ah
084958f8 +0x65d6:  mov    %eax,0x8(%esp)
084958fc +0x65da:  movl   $0x4,0x4(%esp)
08495904 +0x65e2:  mov    0x8(%ebp),%eax
08495907 +0x65e5:  mov    %eax,(%esp)
0849590a +0x65e8:  call   0807e470 <_init+0xd68>
0849590f +0x65ed:  mov    %eax,-0xc(%ebp)
08495912 +0x65f0:  cmpl   $0x0,-0xc(%ebp)
08495916 +0x65f4:  jns    0849591f <+0x65fd>
08495918 +0x65f6:  mov    $0x0,%eax
0849591d +0x65fb:  jmp    08495924 <+0x6602>
0849591f +0x65fd:  mov    $0x1,%eax
08495924 +0x6602:  leave
08495925 +0x6603:  ret
08495926 +0x6604:  push   %ebp
08495927 +0x6605:  mov    %esp,%ebp
08495929 +0x6607:  push   %ebx
0849592a +0x6608:  sub    $0x14,%esp
0849592d +0x660b:  mov    0x8(%ebp),%ebx
08495930 +0x660e:  mov    0xc(%ebp),%eax
08495933 +0x6611:  mov    0xc(%eax),%eax
08495936 +0x6614:  mov    %eax,0x4(%esp)
0849593a +0x6618:  mov    %ebx,(%esp)
0849593d +0x661b:  call   084966b4 <+0x7392>
08495942 +0x6620:  mov    %ebx,%eax
08495944 +0x6622:  add    $0x14,%esp
08495947 +0x6625:  pop    %ebx
08495948 +0x6626:  pop    %ebp
08495949 +0x6627:  ret    $0x4
0849594c +0x662a:  push   %ebp
0849594d +0x662b:  mov    %esp,%ebp
0849594f +0x662d:  push   %ebx
08495950 +0x662e:  sub    $0x14,%esp
08495953 +0x6631:  mov    0x8(%ebp),%ebx
08495956 +0x6634:  mov    0xc(%ebp),%eax
08495959 +0x6637:  add    $0x4,%eax
0849595c +0x663a:  mov    %eax,0x4(%esp)
08495960 +0x663e:  mov    %ebx,(%esp)
08495963 +0x6641:  call   084966b4 <+0x7392>
08495968 +0x6646:  mov    %ebx,%eax
0849596a +0x6648:  add    $0x14,%esp
0849596d +0x664b:  pop    %ebx
0849596e +0x664c:  pop    %ebp
0849596f +0x664d:  ret    $0x4
08495972 +0x6650:  push   %ebp
08495973 +0x6651:  mov    %esp,%ebp
08495975 +0x6653:  sub    $0x18,%esp
08495978 +0x6656:  mov    0x8(%ebp),%eax
0849597b +0x6659:  mov    0xc(%ebp),%edx
0849597e +0x665c:  mov    %edx,0x4(%esp)
08495982 +0x6660:  mov    %eax,(%esp)
08495985 +0x6663:  call   084966c2 <+0x73a0>
0849598a +0x6668:  leave
0849598b +0x6669:  ret
0849598c +0x666a:  push   %ebp
0849598d +0x666b:  mov    %esp,%ebp
0849598f +0x666d:  sub    $0x28,%esp
08495992 +0x6670:  mov    0x8(%ebp),%eax
08495995 +0x6673:  lea    0x4(%eax),%edx
08495998 +0x6676:  mov    0xc(%ebp),%eax
0849599b +0x6679:  mov    %edx,0x4(%esp)
0849599f +0x667d:  mov    %eax,(%esp)
084959a2 +0x6680:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
084959a7 +0x6685:  mov    %eax,-0xc(%ebp)
084959aa +0x6688:  mov    -0xc(%ebp),%eax
084959ad +0x668b:  mov    %eax,0x4(%esp)
084959b1 +0x668f:  mov    0x8(%ebp),%eax
084959b4 +0x6692:  mov    %eax,(%esp)
084959b7 +0x6695:  call   0849671c <+0x73fa>
084959bc +0x669a:  mov    0x8(%ebp),%eax
084959bf +0x669d:  mov    0x14(%eax),%eax
084959c2 +0x66a0:  lea    -0x1(%eax),%edx
084959c5 +0x66a3:  mov    0x8(%ebp),%eax
084959c8 +0x66a6:  mov    %edx,0x14(%eax)
084959cb +0x66a9:  leave
084959cc +0x66aa:  ret
084959cd +0x66ab:  nop
084959ce +0x66ac:  push   %ebp
084959cf +0x66ad:  mov    %esp,%ebp
084959d1 +0x66af:  push   %esi
084959d2 +0x66b0:  push   %ebx
084959d3 +0x66b1:  sub    $0x30,%esp
084959d6 +0x66b4:  mov    0x8(%ebp),%ebx
084959d9 +0x66b7:  mov    0xc(%ebp),%eax
084959dc +0x66ba:  mov    %eax,(%esp)
084959df +0x66bd:  call   08496750 <+0x742e>
084959e4 +0x66c2:  mov    %eax,%esi
084959e6 +0x66c4:  mov    0xc(%ebp),%eax
084959e9 +0x66c7:  mov    %eax,(%esp)
084959ec +0x66ca:  call   08495ea8 <+0x6b86>
084959f1 +0x66cf:  lea    -0x10(%ebp),%edx
084959f4 +0x66d2:  mov    0x10(%ebp),%ecx
084959f7 +0x66d5:  mov    %ecx,0x10(%esp)
084959fb +0x66d9:  mov    %esi,0xc(%esp)
084959ff +0x66dd:  mov    %eax,0x8(%esp)
08495a03 +0x66e1:  mov    0xc(%ebp),%eax
08495a06 +0x66e4:  mov    %eax,0x4(%esp)
08495a0a +0x66e8:  mov    %edx,(%esp)
08495a0d +0x66eb:  call   0849675c <+0x743a>
08495a12 +0x66f0:  sub    $0x4,%esp
08495a15 +0x66f3:  lea    -0xc(%ebp),%eax
08495a18 +0x66f6:  mov    0xc(%ebp),%edx
08495a1b +0x66f9:  mov    %edx,0x4(%esp)
08495a1f +0x66fd:  mov    %eax,(%esp)
08495a22 +0x6700:  call   0849594c <+0x662a>
08495a27 +0x6705:  sub    $0x4,%esp
08495a2a +0x6708:  lea    -0xc(%ebp),%eax
08495a2d +0x670b:  mov    %eax,0x4(%esp)
08495a31 +0x670f:  lea    -0x10(%ebp),%eax
08495a34 +0x6712:  mov    %eax,(%esp)
08495a37 +0x6715:  call   084967fa <+0x74d8>
08495a3c +0x671a:  test   %al,%al
08495a3e +0x671c:  jne    08495a65 <+0x6743>
08495a40 +0x671e:  mov    -0x10(%ebp),%eax
08495a43 +0x6721:  mov    %eax,(%esp)
08495a46 +0x6724:  call   084967d8 <+0x74b6>
08495a4b +0x6729:  mov    0xc(%ebp),%edx
08495a4e +0x672c:  mov    %eax,0x8(%esp)
08495a52 +0x6730:  mov    0x10(%ebp),%eax
08495a55 +0x6733:  mov    %eax,0x4(%esp)
08495a59 +0x6737:  mov    %edx,(%esp)
08495a5c +0x673a:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08495a61 +0x673f:  test   %al,%al
08495a63 +0x6741:  je     08495a79 <+0x6757>
08495a65 +0x6743:  mov    0xc(%ebp),%eax
08495a68 +0x6746:  mov    %eax,0x4(%esp)
08495a6c +0x674a:  mov    %ebx,(%esp)
08495a6f +0x674d:  call   0849594c <+0x662a>
08495a74 +0x6752:  sub    $0x4,%esp
08495a77 +0x6755:  jmp    08495a7e <+0x675c>
08495a79 +0x6757:  mov    -0x10(%ebp),%eax
08495a7c +0x675a:  mov    %eax,(%ebx)
08495a7e +0x675c:  mov    %ebx,%eax
08495a80 +0x675e:  lea    -0x8(%ebp),%esp
08495a83 +0x6761:  add    $0x0,%esp
08495a86 +0x6764:  pop    %ebx
08495a87 +0x6765:  pop    %esi
08495a88 +0x6766:  pop    %ebp
08495a89 +0x6767:  ret    $0x4
08495a8c +0x676a:  push   %ebp
08495a8d +0x676b:  mov    %esp,%ebp
08495a8f +0x676d:  sub    $0x18,%esp
08495a92 +0x6770:  mov    0x8(%ebp),%eax
08495a95 +0x6773:  mov    %eax,(%esp)
08495a98 +0x6776:  call   0849680e <+0x74ec>
08495a9d +0x677b:  leave
08495a9e +0x677c:  ret
08495a9f +0x677d:  nop
08495aa0 +0x677e:  push   %ebp
08495aa1 +0x677f:  mov    %esp,%ebp
08495aa3 +0x6781:  sub    $0x18,%esp
08495aa6 +0x6784:  mov    0x8(%ebp),%eax
08495aa9 +0x6787:  mov    %eax,(%esp)
08495aac +0x678a:  call   0849682e <+0x750c>
08495ab1 +0x678f:  leave
08495ab2 +0x6790:  ret
08495ab3 +0x6791:  nop
08495ab4 +0x6792:  push   %ebp
08495ab5 +0x6793:  mov    %esp,%ebp
08495ab7 +0x6795:  sub    $0x18,%esp
08495aba +0x6798:  mov    0x8(%ebp),%eax
08495abd +0x679b:  mov    %eax,(%esp)
08495ac0 +0x679e:  call   0849684e <+0x752c>
08495ac5 +0x67a3:  leave
08495ac6 +0x67a4:  ret
08495ac7 +0x67a5:  nop
08495ac8 +0x67a6:  push   %ebp
08495ac9 +0x67a7:  mov    %esp,%ebp
08495acb +0x67a9:  sub    $0x18,%esp
08495ace +0x67ac:  mov    0x8(%ebp),%eax
08495ad1 +0x67af:  mov    %eax,(%esp)
08495ad4 +0x67b2:  call   08496876 <+0x7554>
08495ad9 +0x67b7:  leave
08495ada +0x67b8:  ret
08495adb +0x67b9:  nop
08495adc +0x67ba:  push   %ebp
08495add +0x67bb:  mov    %esp,%ebp
08495adf +0x67bd:  mov    0x8(%ebp),%eax
08495ae2 +0x67c0:  mov    0x14(%eax),%eax
08495ae5 +0x67c3:  pop    %ebp
08495ae6 +0x67c4:  ret
08495ae7 +0x67c5:  push   %ebp
08495ae8 +0x67c6:  mov    %esp,%ebp
08495aea +0x67c8:  mov    0x8(%ebp),%eax
08495aed +0x67cb:  pop    %ebp
08495aee +0x67cc:  ret
08495aef +0x67cd:  nop
08495af0 +0x67ce:  push   %ebp
08495af1 +0x67cf:  mov    %esp,%ebp
08495af3 +0x67d1:  sub    $0x18,%esp
08495af6 +0x67d4:  mov    0xc(%ebp),%eax
08495af9 +0x67d7:  mov    %eax,(%esp)
08495afc +0x67da:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
08495b01 +0x67df:  mov    (%eax),%edx
08495b03 +0x67e1:  mov    0x8(%ebp),%eax
08495b06 +0x67e4:  mov    %edx,(%eax)
08495b08 +0x67e6:  mov    0x10(%ebp),%eax
08495b0b +0x67e9:  mov    %eax,(%esp)
08495b0e +0x67ec:  call   08495ae7 <+0x67c5>
08495b13 +0x67f1:  mov    (%eax),%edx
08495b15 +0x67f3:  mov    0x8(%ebp),%eax
08495b18 +0x67f6:  mov    %edx,0x4(%eax)
08495b1b +0x67f9:  leave
08495b1c +0x67fa:  ret
08495b1d +0x67fb:  push   %ebp
08495b1e +0x67fc:  mov    %esp,%ebp
08495b20 +0x67fe:  mov    0x8(%ebp),%eax
08495b23 +0x6801:  pop    %ebp
08495b24 +0x6802:  ret
08495b25 +0x6803:  nop
08495b26 +0x6804:  push   %ebp
08495b27 +0x6805:  mov    %esp,%ebp
08495b29 +0x6807:  push   %esi
08495b2a +0x6808:  push   %ebx
08495b2b +0x6809:  sub    $0x50,%esp
08495b2e +0x680c:  mov    0x8(%ebp),%ebx
08495b31 +0x680f:  mov    0xc(%ebp),%eax
08495b34 +0x6812:  mov    %eax,(%esp)
08495b37 +0x6815:  call   08495ea8 <+0x6b86>
08495b3c +0x681a:  mov    %eax,-0x14(%ebp)
08495b3f +0x681d:  mov    0xc(%ebp),%eax
08495b42 +0x6820:  mov    %eax,(%esp)
08495b45 +0x6823:  call   08496750 <+0x742e>
08495b4a +0x6828:  mov    %eax,-0x10(%ebp)
08495b4d +0x682b:  movb   $0x1,-0x9(%ebp)
08495b51 +0x682f:  jmp    08495baf <+0x688d>
08495b53 +0x6831:  mov    -0x14(%ebp),%eax
08495b56 +0x6834:  mov    %eax,-0x10(%ebp)
08495b59 +0x6837:  mov    -0x14(%ebp),%eax
08495b5c +0x683a:  mov    %eax,(%esp)
08495b5f +0x683d:  call   084968ca <+0x75a8>
08495b64 +0x6842:  mov    %eax,%esi
08495b66 +0x6844:  mov    0x10(%ebp),%eax
08495b69 +0x6847:  mov    %eax,0x4(%esp)
08495b6d +0x684b:  lea    -0x2d(%ebp),%eax
08495b70 +0x684e:  mov    %eax,(%esp)
08495b73 +0x6851:  call   084968c2 <+0x75a0>
08495b78 +0x6856:  mov    0xc(%ebp),%edx
08495b7b +0x6859:  mov    %esi,0x8(%esp)
08495b7f +0x685d:  mov    %eax,0x4(%esp)
08495b83 +0x6861:  mov    %edx,(%esp)
08495b86 +0x6864:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08495b8b +0x6869:  mov    %al,-0x9(%ebp)
08495b8e +0x686c:  cmpb   $0x0,-0x9(%ebp)
08495b92 +0x6870:  je     08495ba1 <+0x687f>
08495b94 +0x6872:  mov    -0x14(%ebp),%eax
08495b97 +0x6875:  mov    %eax,(%esp)
08495b9a +0x6878:  call   084968f7 <+0x75d5>
08495b9f +0x687d:  jmp    08495bac <+0x688a>
08495ba1 +0x687f:  mov    -0x14(%ebp),%eax
08495ba4 +0x6882:  mov    %eax,(%esp)
08495ba7 +0x6885:  call   084968ec <+0x75ca>
08495bac +0x688a:  mov    %eax,-0x14(%ebp)
08495baf +0x688d:  cmpl   $0x0,-0x14(%ebp)
08495bb3 +0x6891:  setne  %al
08495bb6 +0x6894:  test   %al,%al
08495bb8 +0x6896:  jne    08495b53 <+0x6831>
08495bba +0x6898:  mov    -0x10(%ebp),%eax
08495bbd +0x689b:  mov    %eax,0x4(%esp)
08495bc1 +0x689f:  lea    -0x34(%ebp),%eax
08495bc4 +0x68a2:  mov    %eax,(%esp)
08495bc7 +0x68a5:  call   084966b4 <+0x7392>
08495bcc +0x68aa:  cmpb   $0x0,-0x9(%ebp)
08495bd0 +0x68ae:  je     08495c51 <+0x692f>
08495bd2 +0x68b0:  lea    -0x2c(%ebp),%eax
08495bd5 +0x68b3:  mov    0xc(%ebp),%edx
08495bd8 +0x68b6:  mov    %edx,0x4(%esp)
08495bdc +0x68ba:  mov    %eax,(%esp)
08495bdf +0x68bd:  call   08495926 <+0x6604>
08495be4 +0x68c2:  sub    $0x4,%esp
08495be7 +0x68c5:  lea    -0x2c(%ebp),%eax
08495bea +0x68c8:  mov    %eax,0x4(%esp)
08495bee +0x68cc:  lea    -0x34(%ebp),%eax
08495bf1 +0x68cf:  mov    %eax,(%esp)
08495bf4 +0x68d2:  call   084967fa <+0x74d8>
08495bf9 +0x68d7:  test   %al,%al
08495bfb +0x68d9:  je     08495c46 <+0x6924>
08495bfd +0x68db:  movb   $0x1,-0x25(%ebp)
08495c01 +0x68df:  mov    -0x10(%ebp),%ecx
08495c04 +0x68e2:  mov    -0x14(%ebp),%edx
08495c07 +0x68e5:  lea    -0x24(%ebp),%eax
08495c0a +0x68e8:  mov    0x10(%ebp),%esi
08495c0d +0x68eb:  mov    %esi,0x10(%esp)
08495c11 +0x68ef:  mov    %ecx,0xc(%esp)
08495c15 +0x68f3:  mov    %edx,0x8(%esp)
08495c19 +0x68f7:  mov    0xc(%ebp),%edx
08495c1c +0x68fa:  mov    %edx,0x4(%esp)
08495c20 +0x68fe:  mov    %eax,(%esp)
08495c23 +0x6901:  call   08496902 <+0x75e0>
08495c28 +0x6906:  sub    $0x4,%esp
08495c2b +0x6909:  lea    -0x25(%ebp),%eax
08495c2e +0x690c:  mov    %eax,0x8(%esp)
08495c32 +0x6910:  lea    -0x24(%ebp),%eax
08495c35 +0x6913:  mov    %eax,0x4(%esp)
08495c39 +0x6917:  mov    %ebx,(%esp)
08495c3c +0x691a:  call   084969ca <+0x76a8>
08495c41 +0x691f:  jmp    08495ce7 <+0x69c5>
08495c46 +0x6924:  lea    -0x34(%ebp),%eax
08495c49 +0x6927:  mov    %eax,(%esp)
08495c4c +0x692a:  call   084969f8 <+0x76d6>
08495c51 +0x692f:  mov    0x10(%ebp),%eax
08495c54 +0x6932:  mov    %eax,0x4(%esp)
08495c58 +0x6936:  lea    -0x1e(%ebp),%eax
08495c5b +0x6939:  mov    %eax,(%esp)
08495c5e +0x693c:  call   084968c2 <+0x75a0>
08495c63 +0x6941:  mov    %eax,%esi
08495c65 +0x6943:  mov    -0x34(%ebp),%eax
08495c68 +0x6946:  mov    %eax,(%esp)
08495c6b +0x6949:  call   084967d8 <+0x74b6>
08495c70 +0x694e:  mov    0xc(%ebp),%edx
08495c73 +0x6951:  mov    %esi,0x8(%esp)
08495c77 +0x6955:  mov    %eax,0x4(%esp)
08495c7b +0x6959:  mov    %edx,(%esp)
08495c7e +0x695c:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08495c83 +0x6961:  test   %al,%al
08495c85 +0x6963:  je     08495ccd <+0x69ab>
08495c87 +0x6965:  movb   $0x1,-0x1d(%ebp)
08495c8b +0x6969:  mov    -0x10(%ebp),%ecx
08495c8e +0x696c:  mov    -0x14(%ebp),%edx
08495c91 +0x696f:  lea    -0x1c(%ebp),%eax
08495c94 +0x6972:  mov    0x10(%ebp),%esi
08495c97 +0x6975:  mov    %esi,0x10(%esp)
08495c9b +0x6979:  mov    %ecx,0xc(%esp)
08495c9f +0x697d:  mov    %edx,0x8(%esp)
08495ca3 +0x6981:  mov    0xc(%ebp),%edx
08495ca6 +0x6984:  mov    %edx,0x4(%esp)
08495caa +0x6988:  mov    %eax,(%esp)
08495cad +0x698b:  call   08496902 <+0x75e0>
08495cb2 +0x6990:  sub    $0x4,%esp
08495cb5 +0x6993:  lea    -0x1d(%ebp),%eax
08495cb8 +0x6996:  mov    %eax,0x8(%esp)
08495cbc +0x699a:  lea    -0x1c(%ebp),%eax
08495cbf +0x699d:  mov    %eax,0x4(%esp)
08495cc3 +0x69a1:  mov    %ebx,(%esp)
08495cc6 +0x69a4:  call   084969ca <+0x76a8>
08495ccb +0x69a9:  jmp    08495ce7 <+0x69c5>
08495ccd +0x69ab:  movb   $0x0,-0x15(%ebp)
08495cd1 +0x69af:  lea    -0x15(%ebp),%eax
08495cd4 +0x69b2:  mov    %eax,0x8(%esp)
08495cd8 +0x69b6:  lea    -0x34(%ebp),%eax
08495cdb +0x69b9:  mov    %eax,0x4(%esp)
08495cdf +0x69bd:  mov    %ebx,(%esp)
08495ce2 +0x69c0:  call   08496a16 <+0x76f4>
08495ce7 +0x69c5:  mov    %ebx,%eax
08495ce9 +0x69c7:  lea    -0x8(%ebp),%esp
08495cec +0x69ca:  add    $0x0,%esp
08495cef +0x69cd:  pop    %ebx
08495cf0 +0x69ce:  pop    %esi
08495cf1 +0x69cf:  pop    %ebp
08495cf2 +0x69d0:  ret    $0x4
08495cf5 +0x69d3:  nop
08495cf6 +0x69d4:  push   %ebp
08495cf7 +0x69d5:  mov    %esp,%ebp
08495cf9 +0x69d7:  sub    $0x18,%esp
08495cfc +0x69da:  mov    0x8(%ebp),%eax
08495cff +0x69dd:  mov    %eax,(%esp)
08495d02 +0x69e0:  call   08496a58 <+0x7736>
08495d07 +0x69e5:  leave
08495d08 +0x69e6:  ret
08495d09 +0x69e7:  nop
08495d0a +0x69e8:  push   %ebp
08495d0b +0x69e9:  mov    %esp,%ebp
08495d0d +0x69eb:  push   %esi
08495d0e +0x69ec:  push   %ebx
08495d0f +0x69ed:  sub    $0x30,%esp
08495d12 +0x69f0:  mov    0x8(%ebp),%eax
08495d15 +0x69f3:  mov    %eax,(%esp)
08495d18 +0x69f6:  call   08496b76 <+0x7854>
08495d1d +0x69fb:  mov    %eax,%ebx
08495d1f +0x69fd:  lea    -0x28(%ebp),%eax
08495d22 +0x6a00:  mov    0x8(%ebp),%edx
08495d25 +0x6a03:  mov    %edx,0x4(%esp)
08495d29 +0x6a07:  mov    %eax,(%esp)
08495d2c +0x6a0a:  call   08496b4c <+0x782a>
08495d31 +0x6a0f:  sub    $0x4,%esp
08495d34 +0x6a12:  lea    -0x18(%ebp),%eax
08495d37 +0x6a15:  mov    0x8(%ebp),%edx
08495d3a +0x6a18:  mov    %edx,0x4(%esp)
08495d3e +0x6a1c:  mov    %eax,(%esp)
08495d41 +0x6a1f:  call   08496b22 <+0x7800>
08495d46 +0x6a24:  sub    $0x4,%esp
08495d49 +0x6a27:  mov    %ebx,0xc(%esp)
08495d4d +0x6a2b:  lea    -0x28(%ebp),%eax
08495d50 +0x6a2e:  mov    %eax,0x8(%esp)
08495d54 +0x6a32:  lea    -0x18(%ebp),%eax
08495d57 +0x6a35:  mov    %eax,0x4(%esp)
08495d5b +0x6a39:  mov    0x8(%ebp),%eax
08495d5e +0x6a3c:  mov    %eax,(%esp)
08495d61 +0x6a3f:  call   08496bb2 <+0x7890>
08495d66 +0x6a44:  jmp    08495d83 <+0x6a61>
08495d68 +0x6a46:  mov    %edx,%ebx
08495d6a +0x6a48:  mov    %eax,%esi
08495d6c +0x6a4a:  mov    0x8(%ebp),%eax
08495d6f +0x6a4d:  mov    %eax,(%esp)
08495d72 +0x6a50:  call   08496aa2 <+0x7780>
08495d77 +0x6a55:  mov    %esi,%eax
08495d79 +0x6a57:  mov    %ebx,%edx
08495d7b +0x6a59:  mov    %eax,(%esp)
08495d7e +0x6a5c:  call   08ae3750 <_Unwind_Resume>
08495d83 +0x6a61:  mov    0x8(%ebp),%eax
08495d86 +0x6a64:  mov    %eax,(%esp)
08495d89 +0x6a67:  call   08496aa2 <+0x7780>
08495d8e +0x6a6c:  lea    -0x8(%ebp),%esp
08495d91 +0x6a6f:  add    $0x0,%esp
08495d94 +0x6a72:  pop    %ebx
08495d95 +0x6a73:  pop    %esi
08495d96 +0x6a74:  pop    %ebp
08495d97 +0x6a75:  ret
08495d98 +0x6a76:  push   %ebp
08495d99 +0x6a77:  mov    %esp,%ebp
08495d9b +0x6a79:  sub    $0x18,%esp
08495d9e +0x6a7c:  mov    0xc(%ebp),%eax
08495da1 +0x6a7f:  mov    %eax,(%esp)
08495da4 +0x6a82:  call   08496bba <+0x7898>
08495da9 +0x6a87:  mov    0x8(%ebp),%edx
08495dac +0x6a8a:  mov    %eax,0x4(%esp)
08495db0 +0x6a8e:  mov    %edx,(%esp)
08495db3 +0x6a91:  call   08496bc2 <+0x78a0>
08495db8 +0x6a96:  leave
08495db9 +0x6a97:  ret
08495dba +0x6a98:  push   %ebp
08495dbb +0x6a99:  mov    %esp,%ebp
08495dbd +0x6a9b:  sub    $0x18,%esp
08495dc0 +0x6a9e:  mov    0x8(%ebp),%eax
08495dc3 +0x6aa1:  mov    $0x3f85c,%edx
08495dc8 +0x6aa6:  mov    %edx,0x8(%esp)
08495dcc +0x6aaa:  movl   $0x0,0x4(%esp)
08495dd4 +0x6ab2:  mov    %eax,(%esp)
08495dd7 +0x6ab5:  call   0807dcc0 <_init+0x5b8>
08495ddc +0x6aba:  mov    0x8(%ebp),%eax
08495ddf +0x6abd:  mov    %eax,(%esp)
08495de2 +0x6ac0:  call   08492262 <+0x2f40>
08495de7 +0x6ac5:  mov    0x8(%ebp),%eax
08495dea +0x6ac8:  movl   $0x8f21,0x3f85c(%eax)
08495df4 +0x6ad2:  mov    0x8(%ebp),%eax
08495df7 +0x6ad5:  movb   $0x0,0x3f860(%eax)
08495dfe +0x6adc:  leave
08495dff +0x6add:  ret
08495e00 +0x6ade:  push   %ebp
08495e01 +0x6adf:  mov    %esp,%ebp
08495e03 +0x6ae1:  sub    $0x28,%esp
08495e06 +0x6ae4:  mov    0xc(%ebp),%eax
08495e09 +0x6ae7:  mov    %eax,(%esp)
08495e0c +0x6aea:  call   08496be4 <+0x78c2>
08495e11 +0x6aef:  mov    (%eax),%eax
08495e13 +0x6af1:  mov    %eax,-0xc(%ebp)
08495e16 +0x6af4:  mov    0x8(%ebp),%eax
08495e19 +0x6af7:  lea    -0xc(%ebp),%edx
08495e1c +0x6afa:  mov    %edx,0x4(%esp)
08495e20 +0x6afe:  mov    %eax,(%esp)
08495e23 +0x6b01:  call   08496bec <+0x78ca>
08495e28 +0x6b06:  leave
08495e29 +0x6b07:  ret
08495e2a +0x6b08:  push   %ebp
08495e2b +0x6b09:  mov    %esp,%ebp
08495e2d +0x6b0b:  sub    $0x18,%esp
08495e30 +0x6b0e:  mov    0x8(%ebp),%eax
08495e33 +0x6b11:  mov    %eax,(%esp)
08495e36 +0x6b14:  call   08496c16 <+0x78f4>
08495e3b +0x6b19:  leave
08495e3c +0x6b1a:  ret
08495e3d +0x6b1b:  nop
08495e3e +0x6b1c:  push   %ebp
08495e3f +0x6b1d:  mov    %esp,%ebp
08495e41 +0x6b1f:  sub    $0x18,%esp
08495e44 +0x6b22:  mov    0x8(%ebp),%eax
08495e47 +0x6b25:  mov    %eax,(%esp)
08495e4a +0x6b28:  call   08496c66 <+0x7944>
08495e4f +0x6b2d:  leave
08495e50 +0x6b2e:  ret
08495e51 +0x6b2f:  nop
08495e52 +0x6b30:  push   %ebp
08495e53 +0x6b31:  mov    %esp,%ebp
08495e55 +0x6b33:  sub    $0x28,%esp
08495e58 +0x6b36:  jmp    08495e9a <+0x6b78>
08495e5a +0x6b38:  mov    0xc(%ebp),%eax
08495e5d +0x6b3b:  mov    %eax,(%esp)
08495e60 +0x6b3e:  call   084968ec <+0x75ca>
08495e65 +0x6b43:  mov    %eax,0x4(%esp)
08495e69 +0x6b47:  mov    0x8(%ebp),%eax
08495e6c +0x6b4a:  mov    %eax,(%esp)
08495e6f +0x6b4d:  call   08495e52 <+0x6b30>
08495e74 +0x6b52:  mov    0xc(%ebp),%eax
08495e77 +0x6b55:  mov    %eax,(%esp)
08495e7a +0x6b58:  call   084968f7 <+0x75d5>
08495e7f +0x6b5d:  mov    %eax,-0xc(%ebp)
08495e82 +0x6b60:  mov    0xc(%ebp),%eax
08495e85 +0x6b63:  mov    %eax,0x4(%esp)
08495e89 +0x6b67:  mov    0x8(%ebp),%eax
08495e8c +0x6b6a:  mov    %eax,(%esp)
08495e8f +0x6b6d:  call   0849671c <+0x73fa>
08495e94 +0x6b72:  mov    -0xc(%ebp),%eax
08495e97 +0x6b75:  mov    %eax,0xc(%ebp)
08495e9a +0x6b78:  cmpl   $0x0,0xc(%ebp)
08495e9e +0x6b7c:  setne  %al
08495ea1 +0x6b7f:  test   %al,%al
08495ea3 +0x6b81:  jne    08495e5a <+0x6b38>
08495ea5 +0x6b83:  leave
08495ea6 +0x6b84:  ret
08495ea7 +0x6b85:  nop
08495ea8 +0x6b86:  push   %ebp
08495ea9 +0x6b87:  mov    %esp,%ebp
08495eab +0x6b89:  mov    0x8(%ebp),%eax
08495eae +0x6b8c:  mov    0x8(%eax),%eax
08495eb1 +0x6b8f:  pop    %ebp
08495eb2 +0x6b90:  ret
08495eb3 +0x6b91:  nop
08495eb4 +0x6b92:  push   %ebp
08495eb5 +0x6b93:  mov    %esp,%ebp
08495eb7 +0x6b95:  sub    $0x18,%esp
08495eba +0x6b98:  mov    0x8(%ebp),%eax
08495ebd +0x6b9b:  mov    %eax,(%esp)
08495ec0 +0x6b9e:  call   08496c6c <+0x794a>
08495ec5 +0x6ba3:  leave
08495ec6 +0x6ba4:  ret
08495ec7 +0x6ba5:  nop
08495ec8 +0x6ba6:  push   %ebp
08495ec9 +0x6ba7:  mov    %esp,%ebp
08495ecb +0x6ba9:  sub    $0x18,%esp
08495ece +0x6bac:  mov    0x8(%ebp),%eax
08495ed1 +0x6baf:  mov    %eax,(%esp)
08495ed4 +0x6bb2:  call   08496c8c <+0x796a>
08495ed9 +0x6bb7:  leave
08495eda +0x6bb8:  ret
08495edb +0x6bb9:  nop
08495edc +0x6bba:  push   %ebp
08495edd +0x6bbb:  mov    %esp,%ebp
08495edf +0x6bbd:  sub    $0x18,%esp
08495ee2 +0x6bc0:  mov    0x8(%ebp),%eax
08495ee5 +0x6bc3:  mov    %eax,(%esp)
08495ee8 +0x6bc6:  call   08496cb4 <+0x7992>
08495eed +0x6bcb:  leave
08495eee +0x6bcc:  ret
08495eef +0x6bcd:  nop
08495ef0 +0x6bce:  push   %ebp
08495ef1 +0x6bcf:  mov    %esp,%ebp
08495ef3 +0x6bd1:  sub    $0x18,%esp
08495ef6 +0x6bd4:  mov    0x8(%ebp),%eax
08495ef9 +0x6bd7:  mov    0xc(%ebp),%edx
08495efc +0x6bda:  mov    %edx,0x4(%esp)
08495f00 +0x6bde:  mov    %eax,(%esp)
08495f03 +0x6be1:  call   08496d00 <+0x79de>
08495f08 +0x6be6:  leave
08495f09 +0x6be7:  ret
08495f0a +0x6be8:  push   %ebp
08495f0b +0x6be9:  mov    %esp,%ebp
08495f0d +0x6beb:  sub    $0x48,%esp
08495f10 +0x6bee:  mov    0x8(%ebp),%eax
08495f13 +0x6bf1:  mov    %eax,(%esp)
08495f16 +0x6bf4:  call   0848ff70 <+0xc4e>
08495f1b +0x6bf9:  mov    %eax,-0x2c(%ebp)
08495f1e +0x6bfc:  mov    0x8(%ebp),%eax
08495f21 +0x6bff:  mov    %eax,(%esp)
08495f24 +0x6c02:  call   0848ff64 <+0xc42>
08495f29 +0x6c07:  mov    %eax,-0x28(%ebp)
08495f2c +0x6c0a:  mov    0xc(%ebp),%eax
08495f2f +0x6c0d:  mov    %eax,0xc(%esp)
08495f33 +0x6c11:  movl   $0x258,0x8(%esp)
08495f3b +0x6c19:  mov    -0x2c(%ebp),%eax
08495f3e +0x6c1c:  mov    %eax,0x4(%esp)
08495f42 +0x6c20:  mov    -0x28(%ebp),%eax
08495f45 +0x6c23:  mov    %eax,(%esp)
08495f48 +0x6c26:  call   0807dc00 <_init+0x4f8>
08495f4d +0x6c2b:  mov    %eax,-0x24(%ebp)
08495f50 +0x6c2e:  cmpl   $0x0,-0x24(%ebp)
08495f54 +0x6c32:  jns    08495f77 <+0x6c55>
08495f56 +0x6c34:  call   0807dd70 <_init+0x668>
08495f5b +0x6c39:  mov    (%eax),%eax
08495f5d +0x6c3b:  cmp    $0x4,%eax
08495f60 +0x6c3e:  je     08495f77 <+0x6c55>
08495f62 +0x6c40:  call   0807dd70 <_init+0x668>
08495f67 +0x6c45:  mov    (%eax),%eax
08495f69 +0x6c47:  test   %eax,%eax
08495f6b +0x6c49:  je     08495f77 <+0x6c55>
08495f6d +0x6c4b:  mov    $0x0,%eax
08495f72 +0x6c50:  jmp    0849612a <+0x6e08>
08495f77 +0x6c55:  movb   $0x1,-0x1d(%ebp)
08495f7b +0x6c59:  movl   $0x0,-0x1c(%ebp)
08495f82 +0x6c60:  jmp    08496114 <+0x6df2>
08495f87 +0x6c65:  mov    -0x1c(%ebp),%edx
08495f8a +0x6c68:  mov    %edx,%eax
08495f8c +0x6c6a:  add    %eax,%eax
08495f8e +0x6c6c:  add    %edx,%eax
08495f90 +0x6c6e:  shl    $0x2,%eax
08495f93 +0x6c71:  add    -0x2c(%ebp),%eax
08495f96 +0x6c74:  mov    0x4(%eax),%eax
08495f99 +0x6c77:  mov    %eax,-0x18(%ebp)
08495f9c +0x6c7a:  movl   $0x0,-0x14(%ebp)
08495fa3 +0x6c81:  movb   $0x1,-0x1d(%ebp)
08495fa7 +0x6c85:  mov    -0x1c(%ebp),%edx
08495faa +0x6c88:  mov    %edx,%eax
08495fac +0x6c8a:  add    %eax,%eax
08495fae +0x6c8c:  add    %edx,%eax
08495fb0 +0x6c8e:  shl    $0x2,%eax
08495fb3 +0x6c91:  add    -0x2c(%ebp),%eax
08495fb6 +0x6c94:  mov    (%eax),%eax
08495fb8 +0x6c96:  and    $0x1,%eax
08495fbb +0x6c99:  test   %al,%al
08495fbd +0x6c9b:  je     08496032 <+0x6d10>
08495fbf +0x6c9d:  mov    -0x18(%ebp),%eax
08495fc2 +0x6ca0:  mov    %eax,(%esp)
08495fc5 +0x6ca3:  call   08490066 <+0xd44>
08495fca +0x6ca8:  and    $0x8,%eax
08495fcd +0x6cab:  test   %eax,%eax
08495fcf +0x6cad:  setne  %al
08495fd2 +0x6cb0:  test   %al,%al
08495fd4 +0x6cb2:  je     08496012 <+0x6cf0>
08495fd6 +0x6cb4:  movl   $0x0,-0x10(%ebp)
08495fdd +0x6cbb:  mov    -0x18(%ebp),%eax
08495fe0 +0x6cbe:  mov    %eax,(%esp)
08495fe3 +0x6cc1:  call   0849045e <+0x113c>
08495fe8 +0x6cc6:  mov    %eax,-0x10(%ebp)
08495feb +0x6cc9:  cmpl   $0x0,-0x10(%ebp)
08495fef +0x6ccd:  setne  %al
08495ff2 +0x6cd0:  test   %al,%al
08495ff4 +0x6cd2:  je     08496032 <+0x6d10>
08495ff6 +0x6cd4:  movl   $0x7,0x8(%esp)
08495ffe +0x6cdc:  mov    -0x10(%ebp),%eax
08496001 +0x6cdf:  mov    %eax,0x4(%esp)
08496005 +0x6ce3:  mov    0x8(%ebp),%eax
08496008 +0x6ce6:  mov    %eax,(%esp)
0849600b +0x6ce9:  call   084964ca <+0x71a8>
08496010 +0x6cee:  jmp    08496032 <+0x6d10>
08496012 +0x6cf0:  mov    -0x18(%ebp),%eax
08496015 +0x6cf3:  mov    %eax,(%esp)
08496018 +0x6cf6:  call   08490066 <+0xd44>
0849601d +0x6cfb:  and    $0x1,%eax
08496020 +0x6cfe:  test   %al,%al
08496022 +0x6d00:  je     08496032 <+0x6d10>
08496024 +0x6d02:  mov    -0x18(%ebp),%eax
08496027 +0x6d05:  mov    %eax,(%esp)
0849602a +0x6d08:  call   0849030e <+0xfec>
0849602f +0x6d0d:  mov    %al,-0x1d(%ebp)
08496032 +0x6d10:  mov    -0x1c(%ebp),%edx
08496035 +0x6d13:  mov    %edx,%eax
08496037 +0x6d15:  add    %eax,%eax
08496039 +0x6d17:  add    %edx,%eax
0849603b +0x6d19:  shl    $0x2,%eax
0849603e +0x6d1c:  add    -0x2c(%ebp),%eax
08496041 +0x6d1f:  mov    (%eax),%eax
08496043 +0x6d21:  and    $0x4,%eax
08496046 +0x6d24:  test   %eax,%eax
08496048 +0x6d26:  je     084960c2 <+0x6da0>
0849604a +0x6d28:  movl   $0x0,-0xc(%ebp)
08496051 +0x6d2f:  mov    -0x18(%ebp),%eax
08496054 +0x6d32:  mov    %eax,(%esp)
08496057 +0x6d35:  call   08490066 <+0xd44>
0849605c +0x6d3a:  and    $0x10,%eax
0849605f +0x6d3d:  test   %eax,%eax
08496061 +0x6d3f:  setne  %al
08496064 +0x6d42:  test   %al,%al
08496066 +0x6d44:  je     08496093 <+0x6d71>
08496068 +0x6d46:  mov    -0x18(%ebp),%eax
0849606b +0x6d49:  mov    %eax,(%esp)
0849606e +0x6d4c:  call   084905d2 <+0x12b0>
08496073 +0x6d51:  mov    %al,-0x1d(%ebp)
08496076 +0x6d54:  movzbl -0x1d(%ebp),%eax
0849607a +0x6d58:  test   %al,%al
0849607c +0x6d5a:  je     084960c2 <+0x6da0>
0849607e +0x6d5c:  movl   $0x7,0x4(%esp)
08496086 +0x6d64:  mov    -0x18(%ebp),%eax
08496089 +0x6d67:  mov    %eax,(%esp)
0849608c +0x6d6a:  call   08490038 <+0xd16>
08496091 +0x6d6f:  jmp    084960c2 <+0x6da0>
08496093 +0x6d71:  mov    -0x18(%ebp),%eax
08496096 +0x6d74:  mov    %eax,(%esp)
08496099 +0x6d77:  call   08490066 <+0xd44>
0849609e +0x6d7c:  and    $0x2,%eax
084960a1 +0x6d7f:  test   %eax,%eax
084960a3 +0x6d81:  setne  %al
084960a6 +0x6d84:  test   %al,%al
084960a8 +0x6d86:  je     084960c2 <+0x6da0>
084960aa +0x6d88:  mov    -0x18(%ebp),%eax
084960ad +0x6d8b:  mov    %eax,(%esp)
084960b0 +0x6d8e:  call   08490364 <+0x1042>
084960b5 +0x6d93:  mov    %eax,-0xc(%ebp)
084960b8 +0x6d96:  cmpl   $0x0,-0xc(%ebp)
084960bc +0x6d9a:  jns    084960c2 <+0x6da0>
084960be +0x6d9c:  movb   $0x0,-0x1d(%ebp)
084960c2 +0x6da0:  mov    -0x1c(%ebp),%edx
084960c5 +0x6da3:  mov    %edx,%eax
084960c7 +0x6da5:  add    %eax,%eax
084960c9 +0x6da7:  add    %edx,%eax
084960cb +0x6da9:  shl    $0x2,%eax
084960ce +0x6dac:  add    -0x2c(%ebp),%eax
084960d1 +0x6daf:  mov    (%eax),%eax
084960d3 +0x6db1:  and    $0x18,%eax
084960d6 +0x6db4:  test   %eax,%eax
084960d8 +0x6db6:  je     084960e8 <+0x6dc6>
084960da +0x6db8:  mov    -0x18(%ebp),%eax
084960dd +0x6dbb:  mov    %eax,(%esp)
084960e0 +0x6dbe:  call   084903ee <+0x10cc>
084960e5 +0x6dc3:  mov    %al,-0x1d(%ebp)
084960e8 +0x6dc6:  movzbl -0x1d(%ebp),%eax
084960ec +0x6dca:  xor    $0x1,%eax
084960ef +0x6dcd:  test   %al,%al
084960f1 +0x6dcf:  je     08496110 <+0x6dee>
084960f3 +0x6dd1:  mov    -0x18(%ebp),%eax
084960f6 +0x6dd4:  mov    %eax,0x4(%esp)
084960fa +0x6dd8:  mov    0x8(%ebp),%eax
084960fd +0x6ddb:  mov    %eax,(%esp)
08496100 +0x6dde:  call   08496d5a <+0x7a38>
08496105 +0x6de3:  mov    -0x18(%ebp),%eax
08496108 +0x6de6:  mov    %eax,(%esp)
0849610b +0x6de9:  call   084908f2 <+0x15d0>
08496110 +0x6dee:  addl   $0x1,-0x1c(%ebp)
08496114 +0x6df2:  mov    -0x1c(%ebp),%eax
08496117 +0x6df5:  cmp    -0x24(%ebp),%eax
0849611a +0x6df8:  setl   %al
0849611d +0x6dfb:  test   %al,%al
0849611f +0x6dfd:  jne    08495f87 <+0x6c65>
08496125 +0x6e03:  mov    $0x1,%eax
0849612a +0x6e08:  leave
0849612b +0x6e09:  ret
0849612c +0x6e0a:  push   %ebp
0849612d +0x6e0b:  mov    %esp,%ebp
0849612f +0x6e0d:  push   %ebx
08496130 +0x6e0e:  sub    $0x14,%esp
08496133 +0x6e11:  mov    0x8(%ebp),%ebx
08496136 +0x6e14:  mov    0xc(%ebp),%eax
08496139 +0x6e17:  mov    0xc(%eax),%eax
0849613c +0x6e1a:  mov    %eax,0x4(%esp)
08496140 +0x6e1e:  mov    %ebx,(%esp)
08496143 +0x6e21:  call   08496d82 <+0x7a60>
08496148 +0x6e26:  mov    %ebx,%eax
0849614a +0x6e28:  add    $0x14,%esp
0849614d +0x6e2b:  pop    %ebx
0849614e +0x6e2c:  pop    %ebp
0849614f +0x6e2d:  ret    $0x4
08496152 +0x6e30:  push   %ebp
08496153 +0x6e31:  mov    %esp,%ebp
08496155 +0x6e33:  push   %ebx
08496156 +0x6e34:  sub    $0x14,%esp
08496159 +0x6e37:  mov    0x8(%ebp),%ebx
0849615c +0x6e3a:  mov    0xc(%ebp),%eax
0849615f +0x6e3d:  add    $0x4,%eax
08496162 +0x6e40:  mov    %eax,0x4(%esp)
08496166 +0x6e44:  mov    %ebx,(%esp)
08496169 +0x6e47:  call   08496d82 <+0x7a60>
0849616e +0x6e4c:  mov    %ebx,%eax
08496170 +0x6e4e:  add    $0x14,%esp
08496173 +0x6e51:  pop    %ebx
08496174 +0x6e52:  pop    %ebp
08496175 +0x6e53:  ret    $0x4
08496178 +0x6e56:  push   %ebp
08496179 +0x6e57:  mov    %esp,%ebp
0849617b +0x6e59:  push   %esi
0849617c +0x6e5a:  push   %ebx
0849617d +0x6e5b:  sub    $0x30,%esp
08496180 +0x6e5e:  mov    0x8(%ebp),%ebx
08496183 +0x6e61:  mov    0xc(%ebp),%eax
08496186 +0x6e64:  mov    %eax,(%esp)
08496189 +0x6e67:  call   08496d90 <+0x7a6e>
0849618e +0x6e6c:  mov    %eax,%esi
08496190 +0x6e6e:  mov    0xc(%ebp),%eax
08496193 +0x6e71:  mov    %eax,(%esp)
08496196 +0x6e74:  call   08496590 <+0x726e>
0849619b +0x6e79:  lea    -0x10(%ebp),%edx
0849619e +0x6e7c:  mov    0x10(%ebp),%ecx
084961a1 +0x6e7f:  mov    %ecx,0x10(%esp)
084961a5 +0x6e83:  mov    %esi,0xc(%esp)
084961a9 +0x6e87:  mov    %eax,0x8(%esp)
084961ad +0x6e8b:  mov    0xc(%ebp),%eax
084961b0 +0x6e8e:  mov    %eax,0x4(%esp)
084961b4 +0x6e92:  mov    %edx,(%esp)
084961b7 +0x6e95:  call   08496d9c <+0x7a7a>
084961bc +0x6e9a:  sub    $0x4,%esp
084961bf +0x6e9d:  lea    -0xc(%ebp),%eax
084961c2 +0x6ea0:  mov    0xc(%ebp),%edx
084961c5 +0x6ea3:  mov    %edx,0x4(%esp)
084961c9 +0x6ea7:  mov    %eax,(%esp)
084961cc +0x6eaa:  call   08496152 <+0x6e30>
084961d1 +0x6eaf:  sub    $0x4,%esp
084961d4 +0x6eb2:  lea    -0xc(%ebp),%eax
084961d7 +0x6eb5:  mov    %eax,0x4(%esp)
084961db +0x6eb9:  lea    -0x10(%ebp),%eax
084961de +0x6ebc:  mov    %eax,(%esp)
084961e1 +0x6ebf:  call   08495404 <+0x60e2>
084961e6 +0x6ec4:  test   %al,%al
084961e8 +0x6ec6:  jne    0849620f <+0x6eed>
084961ea +0x6ec8:  mov    -0x10(%ebp),%eax
084961ed +0x6ecb:  mov    %eax,(%esp)
084961f0 +0x6ece:  call   08496e18 <+0x7af6>
084961f5 +0x6ed3:  mov    0xc(%ebp),%edx
084961f8 +0x6ed6:  mov    %eax,0x8(%esp)
084961fc +0x6eda:  mov    0x10(%ebp),%eax
084961ff +0x6edd:  mov    %eax,0x4(%esp)
08496203 +0x6ee1:  mov    %edx,(%esp)
08496206 +0x6ee4:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0849620b +0x6ee9:  test   %al,%al
0849620d +0x6eeb:  je     08496223 <+0x6f01>
0849620f +0x6eed:  mov    0xc(%ebp),%eax
08496212 +0x6ef0:  mov    %eax,0x4(%esp)
08496216 +0x6ef4:  mov    %ebx,(%esp)
08496219 +0x6ef7:  call   08496152 <+0x6e30>
0849621e +0x6efc:  sub    $0x4,%esp
08496221 +0x6eff:  jmp    08496228 <+0x6f06>
08496223 +0x6f01:  mov    -0x10(%ebp),%eax
08496226 +0x6f04:  mov    %eax,(%ebx)
08496228 +0x6f06:  mov    %ebx,%eax
0849622a +0x6f08:  lea    -0x8(%ebp),%esp
0849622d +0x6f0b:  add    $0x0,%esp
08496230 +0x6f0e:  pop    %ebx
08496231 +0x6f0f:  pop    %esi
08496232 +0x6f10:  pop    %ebp
08496233 +0x6f11:  ret    $0x4
08496236 +0x6f14:  push   %ebp
08496237 +0x6f15:  mov    %esp,%ebp
08496239 +0x6f17:  sub    $0x18,%esp
0849623c +0x6f1a:  mov    0x8(%ebp),%eax
0849623f +0x6f1d:  mov    0xc(%ebp),%edx
08496242 +0x6f20:  mov    %edx,0x4(%esp)
08496246 +0x6f24:  mov    %eax,(%esp)
08496249 +0x6f27:  call   08496d5a <+0x7a38>
0849624e +0x6f2c:  mov    0xc(%ebp),%eax
08496251 +0x6f2f:  mov    %eax,(%esp)
08496254 +0x6f32:  call   084908f2 <+0x15d0>
08496259 +0x6f37:  leave
0849625a +0x6f38:  ret
0849625b +0x6f39:  push   %ebp
0849625c +0x6f3a:  mov    %esp,%ebp
0849625e +0x6f3c:  mov    0x8(%ebp),%eax
08496261 +0x6f3f:  pop    %ebp
08496262 +0x6f40:  ret
08496263 +0x6f41:  nop
08496264 +0x6f42:  push   %ebp
08496265 +0x6f43:  mov    %esp,%ebp
08496267 +0x6f45:  sub    $0x18,%esp
0849626a +0x6f48:  mov    0xc(%ebp),%eax
0849626d +0x6f4b:  mov    %eax,(%esp)
08496270 +0x6f4e:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
08496275 +0x6f53:  mov    (%eax),%edx
08496277 +0x6f55:  mov    0x8(%ebp),%eax
0849627a +0x6f58:  mov    %edx,(%eax)
0849627c +0x6f5a:  mov    0x10(%ebp),%eax
0849627f +0x6f5d:  mov    %eax,(%esp)
08496282 +0x6f60:  call   0849625b <+0x6f39>
08496287 +0x6f65:  mov    0x8(%ebp),%edx
0849628a +0x6f68:  mov    (%eax),%ecx
0849628c +0x6f6a:  mov    %ecx,0x4(%edx)
0849628f +0x6f6d:  mov    0x4(%eax),%ecx
08496292 +0x6f70:  mov    %ecx,0x8(%edx)
08496295 +0x6f73:  mov    0x8(%eax),%ecx
08496298 +0x6f76:  mov    %ecx,0xc(%edx)
0849629b +0x6f79:  mov    0xc(%eax),%eax
0849629e +0x6f7c:  mov    %eax,0x10(%edx)
084962a1 +0x6f7f:  leave
084962a2 +0x6f80:  ret
084962a3 +0x6f81:  push   %ebp
084962a4 +0x6f82:  mov    %esp,%ebp
084962a6 +0x6f84:  mov    0x8(%ebp),%eax
084962a9 +0x6f87:  pop    %ebp
084962aa +0x6f88:  ret
084962ab +0x6f89:  nop
084962ac +0x6f8a:  push   %ebp
084962ad +0x6f8b:  mov    %esp,%ebp
084962af +0x6f8d:  push   %esi
084962b0 +0x6f8e:  push   %ebx
084962b1 +0x6f8f:  sub    $0x50,%esp
084962b4 +0x6f92:  mov    0x8(%ebp),%ebx
084962b7 +0x6f95:  mov    0xc(%ebp),%eax
084962ba +0x6f98:  mov    %eax,(%esp)
084962bd +0x6f9b:  call   08496590 <+0x726e>
084962c2 +0x6fa0:  mov    %eax,-0x14(%ebp)
084962c5 +0x6fa3:  mov    0xc(%ebp),%eax
084962c8 +0x6fa6:  mov    %eax,(%esp)
084962cb +0x6fa9:  call   08496d90 <+0x7a6e>
084962d0 +0x6fae:  mov    %eax,-0x10(%ebp)
084962d3 +0x6fb1:  movb   $0x1,-0x9(%ebp)
084962d7 +0x6fb5:  jmp    08496335 <+0x7013>
084962d9 +0x6fb7:  mov    -0x14(%ebp),%eax
084962dc +0x6fba:  mov    %eax,-0x10(%ebp)
084962df +0x6fbd:  mov    -0x14(%ebp),%eax
084962e2 +0x6fc0:  mov    %eax,(%esp)
084962e5 +0x6fc3:  call   08496e42 <+0x7b20>
084962ea +0x6fc8:  mov    %eax,%esi
084962ec +0x6fca:  mov    0x10(%ebp),%eax
084962ef +0x6fcd:  mov    %eax,0x4(%esp)
084962f3 +0x6fd1:  lea    -0x2d(%ebp),%eax
084962f6 +0x6fd4:  mov    %eax,(%esp)
084962f9 +0x6fd7:  call   08496e3a <+0x7b18>
084962fe +0x6fdc:  mov    0xc(%ebp),%edx
08496301 +0x6fdf:  mov    %esi,0x8(%esp)
08496305 +0x6fe3:  mov    %eax,0x4(%esp)
08496309 +0x6fe7:  mov    %edx,(%esp)
0849630c +0x6fea:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08496311 +0x6fef:  mov    %al,-0x9(%ebp)
08496314 +0x6ff2:  cmpb   $0x0,-0x9(%ebp)
08496318 +0x6ff6:  je     08496327 <+0x7005>
0849631a +0x6ff8:  mov    -0x14(%ebp),%eax
0849631d +0x6ffb:  mov    %eax,(%esp)
08496320 +0x6ffe:  call   08496e6f <+0x7b4d>
08496325 +0x7003:  jmp    08496332 <+0x7010>
08496327 +0x7005:  mov    -0x14(%ebp),%eax
0849632a +0x7008:  mov    %eax,(%esp)
0849632d +0x700b:  call   08496e64 <+0x7b42>
08496332 +0x7010:  mov    %eax,-0x14(%ebp)
08496335 +0x7013:  cmpl   $0x0,-0x14(%ebp)
08496339 +0x7017:  setne  %al
0849633c +0x701a:  test   %al,%al
0849633e +0x701c:  jne    084962d9 <+0x6fb7>
08496340 +0x701e:  mov    -0x10(%ebp),%eax
08496343 +0x7021:  mov    %eax,0x4(%esp)
08496347 +0x7025:  lea    -0x34(%ebp),%eax
0849634a +0x7028:  mov    %eax,(%esp)
0849634d +0x702b:  call   08496d82 <+0x7a60>
08496352 +0x7030:  cmpb   $0x0,-0x9(%ebp)
08496356 +0x7034:  je     084963d7 <+0x70b5>
08496358 +0x7036:  lea    -0x2c(%ebp),%eax
0849635b +0x7039:  mov    0xc(%ebp),%edx
0849635e +0x703c:  mov    %edx,0x4(%esp)
08496362 +0x7040:  mov    %eax,(%esp)
08496365 +0x7043:  call   0849612c <+0x6e0a>
0849636a +0x7048:  sub    $0x4,%esp
0849636d +0x704b:  lea    -0x2c(%ebp),%eax
08496370 +0x704e:  mov    %eax,0x4(%esp)
08496374 +0x7052:  lea    -0x34(%ebp),%eax
08496377 +0x7055:  mov    %eax,(%esp)
0849637a +0x7058:  call   08495404 <+0x60e2>
0849637f +0x705d:  test   %al,%al
08496381 +0x705f:  je     084963cc <+0x70aa>
08496383 +0x7061:  movb   $0x1,-0x25(%ebp)
08496387 +0x7065:  mov    -0x10(%ebp),%ecx
0849638a +0x7068:  mov    -0x14(%ebp),%edx
0849638d +0x706b:  lea    -0x24(%ebp),%eax
08496390 +0x706e:  mov    0x10(%ebp),%esi
08496393 +0x7071:  mov    %esi,0x10(%esp)
08496397 +0x7075:  mov    %ecx,0xc(%esp)
0849639b +0x7079:  mov    %edx,0x8(%esp)
0849639f +0x707d:  mov    0xc(%ebp),%edx
084963a2 +0x7080:  mov    %edx,0x4(%esp)
084963a6 +0x7084:  mov    %eax,(%esp)
084963a9 +0x7087:  call   08496e7a <+0x7b58>
084963ae +0x708c:  sub    $0x4,%esp
084963b1 +0x708f:  lea    -0x25(%ebp),%eax
084963b4 +0x7092:  mov    %eax,0x8(%esp)
084963b8 +0x7096:  lea    -0x24(%ebp),%eax
084963bb +0x7099:  mov    %eax,0x4(%esp)
084963bf +0x709d:  mov    %ebx,(%esp)
084963c2 +0x70a0:  call   08496f42 <+0x7c20>
084963c7 +0x70a5:  jmp    0849646d <+0x714b>
084963cc +0x70aa:  lea    -0x34(%ebp),%eax
084963cf +0x70ad:  mov    %eax,(%esp)
084963d2 +0x70b0:  call   08496f70 <+0x7c4e>
084963d7 +0x70b5:  mov    0x10(%ebp),%eax
084963da +0x70b8:  mov    %eax,0x4(%esp)
084963de +0x70bc:  lea    -0x1e(%ebp),%eax
084963e1 +0x70bf:  mov    %eax,(%esp)
084963e4 +0x70c2:  call   08496e3a <+0x7b18>
084963e9 +0x70c7:  mov    %eax,%esi
084963eb +0x70c9:  mov    -0x34(%ebp),%eax
084963ee +0x70cc:  mov    %eax,(%esp)
084963f1 +0x70cf:  call   08496e18 <+0x7af6>
084963f6 +0x70d4:  mov    0xc(%ebp),%edx
084963f9 +0x70d7:  mov    %esi,0x8(%esp)
084963fd +0x70db:  mov    %eax,0x4(%esp)
08496401 +0x70df:  mov    %edx,(%esp)
08496404 +0x70e2:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08496409 +0x70e7:  test   %al,%al
0849640b +0x70e9:  je     08496453 <+0x7131>
0849640d +0x70eb:  movb   $0x1,-0x1d(%ebp)
08496411 +0x70ef:  mov    -0x10(%ebp),%ecx
08496414 +0x70f2:  mov    -0x14(%ebp),%edx
08496417 +0x70f5:  lea    -0x1c(%ebp),%eax
0849641a +0x70f8:  mov    0x10(%ebp),%esi
0849641d +0x70fb:  mov    %esi,0x10(%esp)
08496421 +0x70ff:  mov    %ecx,0xc(%esp)
08496425 +0x7103:  mov    %edx,0x8(%esp)
08496429 +0x7107:  mov    0xc(%ebp),%edx
0849642c +0x710a:  mov    %edx,0x4(%esp)
08496430 +0x710e:  mov    %eax,(%esp)
08496433 +0x7111:  call   08496e7a <+0x7b58>
08496438 +0x7116:  sub    $0x4,%esp
0849643b +0x7119:  lea    -0x1d(%ebp),%eax
0849643e +0x711c:  mov    %eax,0x8(%esp)
08496442 +0x7120:  lea    -0x1c(%ebp),%eax
08496445 +0x7123:  mov    %eax,0x4(%esp)
08496449 +0x7127:  mov    %ebx,(%esp)
0849644c +0x712a:  call   08496f42 <+0x7c20>
08496451 +0x712f:  jmp    0849646d <+0x714b>
08496453 +0x7131:  movb   $0x0,-0x15(%ebp)
08496457 +0x7135:  lea    -0x15(%ebp),%eax
0849645a +0x7138:  mov    %eax,0x8(%esp)
0849645e +0x713c:  lea    -0x34(%ebp),%eax
08496461 +0x713f:  mov    %eax,0x4(%esp)
08496465 +0x7143:  mov    %ebx,(%esp)
08496468 +0x7146:  call   08496f8e <+0x7c6c>
0849646d +0x714b:  mov    %ebx,%eax
0849646f +0x714d:  lea    -0x8(%ebp),%esp
08496472 +0x7150:  add    $0x0,%esp
08496475 +0x7153:  pop    %ebx
08496476 +0x7154:  pop    %esi
08496477 +0x7155:  pop    %ebp
08496478 +0x7156:  ret    $0x4
0849647b +0x7159:  nop
0849647c +0x715a:  push   %ebp
0849647d +0x715b:  mov    %esp,%ebp
0849647f +0x715d:  sub    $0x28,%esp
08496482 +0x7160:  mov    0x8(%ebp),%eax
08496485 +0x7163:  lea    0x4(%eax),%edx
08496488 +0x7166:  mov    0xc(%ebp),%eax
0849648b +0x7169:  mov    %edx,0x4(%esp)
0849648f +0x716d:  mov    %eax,(%esp)
08496492 +0x7170:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08496497 +0x7175:  mov    %eax,-0xc(%ebp)
0849649a +0x7178:  mov    -0xc(%ebp),%eax
0849649d +0x717b:  mov    %eax,0x4(%esp)
084964a1 +0x717f:  mov    0x8(%ebp),%eax
084964a4 +0x7182:  mov    %eax,(%esp)
084964a7 +0x7185:  call   08496fbc <+0x7c9a>
084964ac +0x718a:  mov    0x8(%ebp),%eax
084964af +0x718d:  mov    0x14(%eax),%eax
084964b2 +0x7190:  lea    -0x1(%eax),%edx
084964b5 +0x7193:  mov    0x8(%ebp),%eax
084964b8 +0x7196:  mov    %edx,0x14(%eax)
084964bb +0x7199:  leave
084964bc +0x719a:  ret
084964bd +0x719b:  nop
084964be +0x719c:  push   %ebp
084964bf +0x719d:  mov    %esp,%ebp
084964c1 +0x719f:  mov    0x8(%ebp),%eax
084964c4 +0x71a2:  mov    0x14(%eax),%eax
084964c7 +0x71a5:  pop    %ebp
084964c8 +0x71a6:  ret
084964c9 +0x71a7:  nop
084964ca +0x71a8:  push   %ebp
084964cb +0x71a9:  mov    %esp,%ebp
084964cd +0x71ab:  sub    $0x18,%esp
084964d0 +0x71ae:  mov    0x10(%ebp),%eax
084964d3 +0x71b1:  mov    %eax,0x4(%esp)
084964d7 +0x71b5:  mov    0xc(%ebp),%eax
084964da +0x71b8:  mov    %eax,(%esp)
084964dd +0x71bb:  call   08490038 <+0xd16>
084964e2 +0x71c0:  mov    0xc(%ebp),%eax
084964e5 +0x71c3:  mov    %eax,(%esp)
084964e8 +0x71c6:  call   08490024 <+0xd02>
084964ed +0x71cb:  mov    0x8(%ebp),%edx
084964f0 +0x71ce:  movl   $0x0,0xc(%esp)
084964f8 +0x71d6:  mov    %eax,0x8(%esp)
084964fc +0x71da:  mov    0xc(%ebp),%eax
084964ff +0x71dd:  mov    %eax,0x4(%esp)
08496503 +0x71e1:  mov    %edx,(%esp)
08496506 +0x71e4:  call   0857c1c6 <_ZN12EpollHandler8SetEpollEPvib>  ; EpollHandler::SetEpoll(void*, int, bool)
0849650b +0x71e9:  test   %eax,%eax
0849650d +0x71eb:  sete   %al
08496510 +0x71ee:  leave
08496511 +0x71ef:  ret
08496512 +0x71f0:  push   %ebp
08496513 +0x71f1:  mov    %esp,%ebp
08496515 +0x71f3:  sub    $0x18,%esp
08496518 +0x71f6:  mov    0x8(%ebp),%eax
0849651b +0x71f9:  mov    %eax,(%esp)
0849651e +0x71fc:  call   08496ff0 <+0x7cce>
08496523 +0x7201:  leave
08496524 +0x7202:  ret
08496525 +0x7203:  nop
08496526 +0x7204:  push   %ebp
08496527 +0x7205:  mov    %esp,%ebp
08496529 +0x7207:  sub    $0x18,%esp
0849652c +0x720a:  mov    0x8(%ebp),%eax
0849652f +0x720d:  mov    %eax,(%esp)
08496532 +0x7210:  call   08497040 <+0x7d1e>
08496537 +0x7215:  leave
08496538 +0x7216:  ret
08496539 +0x7217:  nop
0849653a +0x7218:  push   %ebp
0849653b +0x7219:  mov    %esp,%ebp
0849653d +0x721b:  sub    $0x28,%esp
08496540 +0x721e:  jmp    08496582 <+0x7260>
08496542 +0x7220:  mov    0xc(%ebp),%eax
08496545 +0x7223:  mov    %eax,(%esp)
08496548 +0x7226:  call   08496e64 <+0x7b42>
0849654d +0x722b:  mov    %eax,0x4(%esp)
08496551 +0x722f:  mov    0x8(%ebp),%eax
08496554 +0x7232:  mov    %eax,(%esp)
08496557 +0x7235:  call   0849653a <+0x7218>
0849655c +0x723a:  mov    0xc(%ebp),%eax
0849655f +0x723d:  mov    %eax,(%esp)
08496562 +0x7240:  call   08496e6f <+0x7b4d>
08496567 +0x7245:  mov    %eax,-0xc(%ebp)
0849656a +0x7248:  mov    0xc(%ebp),%eax
0849656d +0x724b:  mov    %eax,0x4(%esp)
08496571 +0x724f:  mov    0x8(%ebp),%eax
08496574 +0x7252:  mov    %eax,(%esp)
08496577 +0x7255:  call   08496fbc <+0x7c9a>
0849657c +0x725a:  mov    -0xc(%ebp),%eax
0849657f +0x725d:  mov    %eax,0xc(%ebp)
08496582 +0x7260:  cmpl   $0x0,0xc(%ebp)
08496586 +0x7264:  setne  %al
08496589 +0x7267:  test   %al,%al
0849658b +0x7269:  jne    08496542 <+0x7220>
0849658d +0x726b:  leave
0849658e +0x726c:  ret
0849658f +0x726d:  nop
08496590 +0x726e:  push   %ebp
08496591 +0x726f:  mov    %esp,%ebp
08496593 +0x7271:  mov    0x8(%ebp),%eax
08496596 +0x7274:  mov    0x8(%eax),%eax
08496599 +0x7277:  pop    %ebp
0849659a +0x7278:  ret
0849659b +0x7279:  nop
0849659c +0x727a:  push   %ebp
0849659d +0x727b:  mov    %esp,%ebp
0849659f +0x727d:  sub    $0x18,%esp
084965a2 +0x7280:  mov    0x8(%ebp),%eax
084965a5 +0x7283:  mov    %eax,(%esp)
084965a8 +0x7286:  call   0849705a <+0x7d38>
084965ad +0x728b:  leave
084965ae +0x728c:  ret
084965af +0x728d:  nop
084965b0 +0x728e:  push   %ebp
084965b1 +0x728f:  mov    %esp,%ebp
084965b3 +0x7291:  push   %esi
084965b4 +0x7292:  push   %ebx
084965b5 +0x7293:  sub    $0x30,%esp
084965b8 +0x7296:  mov    0x8(%ebp),%eax
084965bb +0x7299:  mov    %eax,(%esp)
084965be +0x729c:  call   08497178 <+0x7e56>
084965c3 +0x72a1:  mov    %eax,%ebx
084965c5 +0x72a3:  lea    -0x28(%ebp),%eax
084965c8 +0x72a6:  mov    0x8(%ebp),%edx
084965cb +0x72a9:  mov    %edx,0x4(%esp)
084965cf +0x72ad:  mov    %eax,(%esp)
084965d2 +0x72b0:  call   0849714e <+0x7e2c>
084965d7 +0x72b5:  sub    $0x4,%esp
084965da +0x72b8:  lea    -0x18(%ebp),%eax
084965dd +0x72bb:  mov    0x8(%ebp),%edx
084965e0 +0x72be:  mov    %edx,0x4(%esp)
084965e4 +0x72c2:  mov    %eax,(%esp)
084965e7 +0x72c5:  call   08497124 <+0x7e02>
084965ec +0x72ca:  sub    $0x4,%esp
084965ef +0x72cd:  mov    %ebx,0xc(%esp)
084965f3 +0x72d1:  lea    -0x28(%ebp),%eax
084965f6 +0x72d4:  mov    %eax,0x8(%esp)
084965fa +0x72d8:  lea    -0x18(%ebp),%eax
084965fd +0x72db:  mov    %eax,0x4(%esp)
08496601 +0x72df:  mov    0x8(%ebp),%eax
08496604 +0x72e2:  mov    %eax,(%esp)
08496607 +0x72e5:  call   084971b4 <+0x7e92>
0849660c +0x72ea:  jmp    08496629 <+0x7307>
0849660e +0x72ec:  mov    %edx,%ebx
08496610 +0x72ee:  mov    %eax,%esi
08496612 +0x72f0:  mov    0x8(%ebp),%eax
08496615 +0x72f3:  mov    %eax,(%esp)
08496618 +0x72f6:  call   084970a4 <+0x7d82>
0849661d +0x72fb:  mov    %esi,%eax
0849661f +0x72fd:  mov    %ebx,%edx
08496621 +0x72ff:  mov    %eax,(%esp)
08496624 +0x7302:  call   08ae3750 <_Unwind_Resume>
08496629 +0x7307:  mov    0x8(%ebp),%eax
0849662c +0x730a:  mov    %eax,(%esp)
0849662f +0x730d:  call   084970a4 <+0x7d82>
08496634 +0x7312:  lea    -0x8(%ebp),%esp
08496637 +0x7315:  add    $0x0,%esp
0849663a +0x7318:  pop    %ebx
0849663b +0x7319:  pop    %esi
0849663c +0x731a:  pop    %ebp
0849663d +0x731b:  ret
0849663e +0x731c:  push   %ebp
0849663f +0x731d:  mov    %esp,%ebp
08496641 +0x731f:  sub    $0x18,%esp
08496644 +0x7322:  mov    0xc(%ebp),%eax
08496647 +0x7325:  mov    %eax,(%esp)
0849664a +0x7328:  call   084971bc <+0x7e9a>
0849664f +0x732d:  mov    0x8(%ebp),%edx
08496652 +0x7330:  mov    %eax,0x4(%esp)
08496656 +0x7334:  mov    %edx,(%esp)
08496659 +0x7337:  call   084971c4 <+0x7ea2>
0849665e +0x733c:  leave
0849665f +0x733d:  ret
08496660 +0x733e:  push   %ebp
08496661 +0x733f:  mov    %esp,%ebp
08496663 +0x7341:  sub    $0x18,%esp
08496666 +0x7344:  mov    0x8(%ebp),%eax
08496669 +0x7347:  mov    %eax,(%esp)
0849666c +0x734a:  call   0848ffd0 <+0xcae>
08496671 +0x734f:  mov    0x8(%ebp),%eax
08496674 +0x7352:  movl   $0x8f21,0x851a8(%eax)
0849667e +0x735c:  mov    0x8(%ebp),%eax
08496681 +0x735f:  movb   $0x0,0x851ac(%eax)
08496688 +0x7366:  leave
08496689 +0x7367:  ret
0849668a +0x7368:  push   %ebp
0849668b +0x7369:  mov    %esp,%ebp
0849668d +0x736b:  sub    $0x28,%esp
08496690 +0x736e:  mov    0xc(%ebp),%eax
08496693 +0x7371:  mov    %eax,(%esp)
08496696 +0x7374:  call   084971e6 <+0x7ec4>
0849669b +0x7379:  mov    (%eax),%eax
0849669d +0x737b:  mov    %eax,-0xc(%ebp)
084966a0 +0x737e:  mov    0x8(%ebp),%eax
084966a3 +0x7381:  lea    -0xc(%ebp),%edx
084966a6 +0x7384:  mov    %edx,0x4(%esp)
084966aa +0x7388:  mov    %eax,(%esp)
084966ad +0x738b:  call   084971ee <+0x7ecc>
084966b2 +0x7390:  leave
084966b3 +0x7391:  ret
084966b4 +0x7392:  push   %ebp
084966b5 +0x7393:  mov    %esp,%ebp
084966b7 +0x7395:  mov    0xc(%ebp),%edx
084966ba +0x7398:  mov    0x8(%ebp),%eax
084966bd +0x739b:  mov    %edx,(%eax)
084966bf +0x739d:  pop    %ebp
084966c0 +0x739e:  ret
084966c1 +0x739f:  nop
084966c2 +0x73a0:  push   %ebp
084966c3 +0x73a1:  mov    %esp,%ebp
084966c5 +0x73a3:  sub    $0x18,%esp
084966c8 +0x73a6:  mov    0x8(%ebp),%eax
084966cb +0x73a9:  mov    0x18(%eax),%edx
084966ce +0x73ac:  mov    0x8(%ebp),%eax
084966d1 +0x73af:  mov    0x20(%eax),%eax
084966d4 +0x73b2:  sub    $0x4,%eax
084966d7 +0x73b5:  cmp    %eax,%edx
084966d9 +0x73b7:  je     08496708 <+0x73e6>
084966db +0x73b9:  mov    0x8(%ebp),%eax
084966de +0x73bc:  mov    0x18(%eax),%edx
084966e1 +0x73bf:  mov    0x8(%ebp),%eax
084966e4 +0x73c2:  mov    0xc(%ebp),%ecx
084966e7 +0x73c5:  mov    %ecx,0x8(%esp)
084966eb +0x73c9:  mov    %edx,0x4(%esp)
084966ef +0x73cd:  mov    %eax,(%esp)
084966f2 +0x73d0:  call   08497218 <+0x7ef6>
084966f7 +0x73d5:  mov    0x8(%ebp),%eax
084966fa +0x73d8:  mov    0x18(%eax),%eax
084966fd +0x73db:  lea    0x4(%eax),%edx
08496700 +0x73de:  mov    0x8(%ebp),%eax
08496703 +0x73e1:  mov    %edx,0x18(%eax)
08496706 +0x73e4:  jmp    0849671a <+0x73f8>
08496708 +0x73e6:  mov    0xc(%ebp),%eax
0849670b +0x73e9:  mov    %eax,0x4(%esp)
0849670f +0x73ed:  mov    0x8(%ebp),%eax
08496712 +0x73f0:  mov    %eax,(%esp)
08496715 +0x73f3:  call   08497240 <+0x7f1e>
0849671a +0x73f8:  leave
0849671b +0x73f9:  ret
0849671c +0x73fa:  push   %ebp
0849671d +0x73fb:  mov    %esp,%ebp
0849671f +0x73fd:  sub    $0x18,%esp
08496722 +0x7400:  mov    0x8(%ebp),%eax
08496725 +0x7403:  mov    %eax,(%esp)
08496728 +0x7406:  call   08497300 <+0x7fde>
0849672d +0x740b:  mov    0xc(%ebp),%edx
08496730 +0x740e:  mov    %edx,0x4(%esp)
08496734 +0x7412:  mov    %eax,(%esp)
08496737 +0x7415:  call   0849730e <+0x7fec>
0849673c +0x741a:  mov    0xc(%ebp),%eax
0849673f +0x741d:  mov    %eax,0x4(%esp)
08496743 +0x7421:  mov    0x8(%ebp),%eax
08496746 +0x7424:  mov    %eax,(%esp)
08496749 +0x7427:  call   08497322 <+0x8000>
0849674e +0x742c:  leave
0849674f +0x742d:  ret
08496750 +0x742e:  push   %ebp
08496751 +0x742f:  mov    %esp,%ebp
08496753 +0x7431:  mov    0x8(%ebp),%eax
08496756 +0x7434:  add    $0x4,%eax
08496759 +0x7437:  pop    %ebp
0849675a +0x7438:  ret
0849675b +0x7439:  nop
0849675c +0x743a:  push   %ebp
0849675d +0x743b:  mov    %esp,%ebp
0849675f +0x743d:  push   %ebx
08496760 +0x743e:  sub    $0x14,%esp
08496763 +0x7441:  mov    0x8(%ebp),%ebx
08496766 +0x7444:  jmp    084967b4 <+0x7492>
08496768 +0x7446:  mov    0x10(%ebp),%eax
0849676b +0x7449:  mov    %eax,(%esp)
0849676e +0x744c:  call   084968ca <+0x75a8>
08496773 +0x7451:  mov    0xc(%ebp),%edx
08496776 +0x7454:  mov    0x18(%ebp),%ecx
08496779 +0x7457:  mov    %ecx,0x8(%esp)
0849677d +0x745b:  mov    %eax,0x4(%esp)
08496781 +0x745f:  mov    %edx,(%esp)
08496784 +0x7462:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08496789 +0x7467:  xor    $0x1,%eax
0849678c +0x746a:  test   %al,%al
0849678e +0x746c:  je     084967a6 <+0x7484>
08496790 +0x746e:  mov    0x10(%ebp),%eax
08496793 +0x7471:  mov    %eax,0x14(%ebp)
08496796 +0x7474:  mov    0x10(%ebp),%eax
08496799 +0x7477:  mov    %eax,(%esp)
0849679c +0x747a:  call   084968f7 <+0x75d5>
084967a1 +0x747f:  mov    %eax,0x10(%ebp)
084967a4 +0x7482:  jmp    084967b4 <+0x7492>
084967a6 +0x7484:  mov    0x10(%ebp),%eax
084967a9 +0x7487:  mov    %eax,(%esp)
084967ac +0x748a:  call   084968ec <+0x75ca>
084967b1 +0x748f:  mov    %eax,0x10(%ebp)
084967b4 +0x7492:  cmpl   $0x0,0x10(%ebp)
084967b8 +0x7496:  setne  %al
084967bb +0x7499:  test   %al,%al
084967bd +0x749b:  jne    08496768 <+0x7446>
084967bf +0x749d:  mov    0x14(%ebp),%eax
084967c2 +0x74a0:  mov    %eax,0x4(%esp)
084967c6 +0x74a4:  mov    %ebx,(%esp)
084967c9 +0x74a7:  call   084966b4 <+0x7392>
084967ce +0x74ac:  mov    %ebx,%eax
084967d0 +0x74ae:  add    $0x14,%esp
084967d3 +0x74b1:  pop    %ebx
084967d4 +0x74b2:  pop    %ebp
084967d5 +0x74b3:  ret    $0x4
084967d8 +0x74b6:  push   %ebp
084967d9 +0x74b7:  mov    %esp,%ebp
084967db +0x74b9:  sub    $0x28,%esp
084967de +0x74bc:  mov    0x8(%ebp),%eax
084967e1 +0x74bf:  mov    %eax,(%esp)
084967e4 +0x74c2:  call   08497344 <+0x8022>
084967e9 +0x74c7:  mov    %eax,0x4(%esp)
084967ed +0x74cb:  lea    -0x9(%ebp),%eax
084967f0 +0x74ce:  mov    %eax,(%esp)
084967f3 +0x74d1:  call   084968c2 <+0x75a0>
084967f8 +0x74d6:  leave
084967f9 +0x74d7:  ret
084967fa +0x74d8:  push   %ebp
084967fb +0x74d9:  mov    %esp,%ebp
084967fd +0x74db:  mov    0x8(%ebp),%eax
08496800 +0x74de:  mov    (%eax),%edx
08496802 +0x74e0:  mov    0xc(%ebp),%eax
08496805 +0x74e3:  mov    (%eax),%eax
08496807 +0x74e5:  cmp    %eax,%edx
08496809 +0x74e7:  sete   %al
0849680c +0x74ea:  pop    %ebp
0849680d +0x74eb:  ret
0849680e +0x74ec:  push   %ebp
0849680f +0x74ed:  mov    %esp,%ebp
08496811 +0x74ef:  sub    $0x18,%esp
08496814 +0x74f2:  mov    0x8(%ebp),%eax
08496817 +0x74f5:  lea    0x8(%eax),%edx
0849681a +0x74f8:  mov    0x8(%ebp),%eax
0849681d +0x74fb:  add    $0x18,%eax
08496820 +0x74fe:  mov    %edx,0x4(%esp)
08496824 +0x7502:  mov    %eax,(%esp)
08496827 +0x7505:  call   0849734f <+0x802d>
0849682c +0x750a:  leave
0849682d +0x750b:  ret
0849682e +0x750c:  push   %ebp
0849682f +0x750d:  mov    %esp,%ebp
08496831 +0x750f:  sub    $0x18,%esp
08496834 +0x7512:  mov    0x8(%ebp),%eax
08496837 +0x7515:  lea    0x8(%eax),%edx
0849683a +0x7518:  mov    0x8(%ebp),%eax
0849683d +0x751b:  add    $0x18,%eax
08496840 +0x751e:  mov    %edx,0x4(%esp)
08496844 +0x7522:  mov    %eax,(%esp)
08496847 +0x7525:  call   084973b2 <+0x8090>
0849684c +0x752a:  leave
0849684d +0x752b:  ret
0849684e +0x752c:  push   %ebp
0849684f +0x752d:  mov    %esp,%ebp
08496851 +0x752f:  sub    $0x28,%esp
08496854 +0x7532:  lea    -0x18(%ebp),%eax
08496857 +0x7535:  mov    0x8(%ebp),%edx
0849685a +0x7538:  mov    %edx,0x4(%esp)
0849685e +0x753c:  mov    %eax,(%esp)
08496861 +0x753f:  call   08496b22 <+0x7800>
08496866 +0x7544:  sub    $0x4,%esp
08496869 +0x7547:  lea    -0x18(%ebp),%eax
0849686c +0x754a:  mov    %eax,(%esp)
0849686f +0x754d:  call   084973c6 <+0x80a4>
08496874 +0x7552:  leave
08496875 +0x7553:  ret
08496876 +0x7554:  push   %ebp
08496877 +0x7555:  mov    %esp,%ebp
08496879 +0x7557:  sub    $0x18,%esp
0849687c +0x755a:  mov    0x8(%ebp),%eax
0849687f +0x755d:  mov    0x8(%eax),%edx
08496882 +0x7560:  mov    0x8(%ebp),%eax
08496885 +0x7563:  mov    0x10(%eax),%eax
08496888 +0x7566:  sub    $0x4,%eax
0849688b +0x7569:  cmp    %eax,%edx
0849688d +0x756b:  je     084968b5 <+0x7593>
0849688f +0x756d:  mov    0x8(%ebp),%eax
08496892 +0x7570:  mov    0x8(%eax),%edx
08496895 +0x7573:  mov    0x8(%ebp),%eax
08496898 +0x7576:  mov    %edx,0x4(%esp)
0849689c +0x757a:  mov    %eax,(%esp)
0849689f +0x757d:  call   084973d0 <+0x80ae>
084968a4 +0x7582:  mov    0x8(%ebp),%eax
084968a7 +0x7585:  mov    0x8(%eax),%eax
084968aa +0x7588:  lea    0x4(%eax),%edx
084968ad +0x758b:  mov    0x8(%ebp),%eax
084968b0 +0x758e:  mov    %edx,0x8(%eax)
084968b3 +0x7591:  jmp    084968c0 <+0x759e>
084968b5 +0x7593:  mov    0x8(%ebp),%eax
084968b8 +0x7596:  mov    %eax,(%esp)
084968bb +0x7599:  call   084973d6 <+0x80b4>
084968c0 +0x759e:  leave
084968c1 +0x759f:  ret
084968c2 +0x75a0:  push   %ebp
084968c3 +0x75a1:  mov    %esp,%ebp
084968c5 +0x75a3:  mov    0xc(%ebp),%eax
084968c8 +0x75a6:  pop    %ebp
084968c9 +0x75a7:  ret
084968ca +0x75a8:  push   %ebp
084968cb +0x75a9:  mov    %esp,%ebp
084968cd +0x75ab:  sub    $0x28,%esp
084968d0 +0x75ae:  mov    0x8(%ebp),%eax
084968d3 +0x75b1:  mov    %eax,(%esp)
084968d6 +0x75b4:  call   0849742f <+0x810d>
084968db +0x75b9:  mov    %eax,0x4(%esp)
084968df +0x75bd:  lea    -0x9(%ebp),%eax
084968e2 +0x75c0:  mov    %eax,(%esp)
084968e5 +0x75c3:  call   084968c2 <+0x75a0>
084968ea +0x75c8:  leave
084968eb +0x75c9:  ret
084968ec +0x75ca:  push   %ebp
084968ed +0x75cb:  mov    %esp,%ebp
084968ef +0x75cd:  mov    0x8(%ebp),%eax
084968f2 +0x75d0:  mov    0xc(%eax),%eax
084968f5 +0x75d3:  pop    %ebp
084968f6 +0x75d4:  ret
084968f7 +0x75d5:  push   %ebp
084968f8 +0x75d6:  mov    %esp,%ebp
084968fa +0x75d8:  mov    0x8(%ebp),%eax
084968fd +0x75db:  mov    0x8(%eax),%eax
08496900 +0x75de:  pop    %ebp
08496901 +0x75df:  ret
08496902 +0x75e0:  push   %ebp
08496903 +0x75e1:  mov    %esp,%ebp
08496905 +0x75e3:  push   %esi
08496906 +0x75e4:  push   %ebx
08496907 +0x75e5:  sub    $0x20,%esp
0849690a +0x75e8:  mov    0x8(%ebp),%esi
0849690d +0x75eb:  cmpl   $0x0,0x10(%ebp)
08496911 +0x75ef:  jne    08496959 <+0x7637>
08496913 +0x75f1:  mov    0xc(%ebp),%eax
08496916 +0x75f4:  mov    %eax,(%esp)
08496919 +0x75f7:  call   08496750 <+0x742e>
0849691e +0x75fc:  cmp    0x14(%ebp),%eax
08496921 +0x75ff:  je     08496959 <+0x7637>
08496923 +0x7601:  mov    0x14(%ebp),%eax
08496926 +0x7604:  mov    %eax,(%esp)
08496929 +0x7607:  call   084967d8 <+0x74b6>
0849692e +0x760c:  mov    %eax,%ebx
08496930 +0x760e:  mov    0x18(%ebp),%eax
08496933 +0x7611:  mov    %eax,0x4(%esp)
08496937 +0x7615:  lea    -0xe(%ebp),%eax
0849693a +0x7618:  mov    %eax,(%esp)
0849693d +0x761b:  call   084968c2 <+0x75a0>
08496942 +0x7620:  mov    0xc(%ebp),%edx
08496945 +0x7623:  mov    %ebx,0x8(%esp)
08496949 +0x7627:  mov    %eax,0x4(%esp)
0849694d +0x762b:  mov    %edx,(%esp)
08496950 +0x762e:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08496955 +0x7633:  test   %al,%al
08496957 +0x7635:  je     08496960 <+0x763e>
08496959 +0x7637:  mov    $0x1,%eax
0849695e +0x763c:  jmp    08496965 <+0x7643>
08496960 +0x763e:  mov    $0x0,%eax
08496965 +0x7643:  mov    %al,-0xd(%ebp)
08496968 +0x7646:  mov    0x18(%ebp),%eax
0849696b +0x7649:  mov    %eax,0x4(%esp)
0849696f +0x764d:  mov    0xc(%ebp),%eax
08496972 +0x7650:  mov    %eax,(%esp)
08496975 +0x7653:  call   0849743a <+0x8118>
0849697a +0x7658:  mov    %eax,-0xc(%ebp)
0849697d +0x765b:  mov    0xc(%ebp),%eax
08496980 +0x765e:  lea    0x4(%eax),%ecx
08496983 +0x7661:  mov    -0xc(%ebp),%edx
08496986 +0x7664:  movzbl -0xd(%ebp),%eax
0849698a +0x7668:  mov    %ecx,0xc(%esp)
0849698e +0x766c:  mov    0x14(%ebp),%ecx
08496991 +0x766f:  mov    %ecx,0x8(%esp)
08496995 +0x7673:  mov    %edx,0x4(%esp)
08496999 +0x7677:  mov    %eax,(%esp)
0849699c +0x767a:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
084969a1 +0x767f:  mov    0xc(%ebp),%eax
084969a4 +0x7682:  mov    0x14(%eax),%eax
084969a7 +0x7685:  lea    0x1(%eax),%edx
084969aa +0x7688:  mov    0xc(%ebp),%eax
084969ad +0x768b:  mov    %edx,0x14(%eax)
084969b0 +0x768e:  mov    -0xc(%ebp),%eax
084969b3 +0x7691:  mov    %eax,0x4(%esp)
084969b7 +0x7695:  mov    %esi,(%esp)
084969ba +0x7698:  call   084966b4 <+0x7392>
084969bf +0x769d:  mov    %esi,%eax
084969c1 +0x769f:  add    $0x20,%esp
084969c4 +0x76a2:  pop    %ebx
084969c5 +0x76a3:  pop    %esi
084969c6 +0x76a4:  pop    %ebp
084969c7 +0x76a5:  ret    $0x4
084969ca +0x76a8:  push   %ebp
084969cb +0x76a9:  mov    %esp,%ebp
084969cd +0x76ab:  sub    $0x18,%esp
084969d0 +0x76ae:  mov    0xc(%ebp),%eax
084969d3 +0x76b1:  mov    %eax,(%esp)
084969d6 +0x76b4:  call   084974bb <+0x8199>
084969db +0x76b9:  mov    0x8(%ebp),%edx
084969de +0x76bc:  mov    (%eax),%eax
084969e0 +0x76be:  mov    %eax,(%edx)
084969e2 +0x76c0:  mov    0x10(%ebp),%eax
084969e5 +0x76c3:  mov    %eax,(%esp)
084969e8 +0x76c6:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
084969ed +0x76cb:  movzbl (%eax),%edx
084969f0 +0x76ce:  mov    0x8(%ebp),%eax
084969f3 +0x76d1:  mov    %dl,0x4(%eax)
084969f6 +0x76d4:  leave
084969f7 +0x76d5:  ret
084969f8 +0x76d6:  push   %ebp
084969f9 +0x76d7:  mov    %esp,%ebp
084969fb +0x76d9:  sub    $0x18,%esp
084969fe +0x76dc:  mov    0x8(%ebp),%eax
08496a01 +0x76df:  mov    (%eax),%eax
08496a03 +0x76e1:  mov    %eax,(%esp)
08496a06 +0x76e4:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08496a0b +0x76e9:  mov    0x8(%ebp),%edx
08496a0e +0x76ec:  mov    %eax,(%edx)
08496a10 +0x76ee:  mov    0x8(%ebp),%eax
08496a13 +0x76f1:  leave
08496a14 +0x76f2:  ret
08496a15 +0x76f3:  nop
08496a16 +0x76f4:  push   %ebp
08496a17 +0x76f5:  mov    %esp,%ebp
08496a19 +0x76f7:  sub    $0x18,%esp
08496a1c +0x76fa:  mov    0xc(%ebp),%eax
08496a1f +0x76fd:  mov    %eax,(%esp)
08496a22 +0x7700:  call   084974c3 <+0x81a1>
08496a27 +0x7705:  mov    0x8(%ebp),%edx
08496a2a +0x7708:  mov    (%eax),%eax
08496a2c +0x770a:  mov    %eax,(%edx)
08496a2e +0x770c:  mov    0x10(%ebp),%eax
08496a31 +0x770f:  mov    %eax,(%esp)
08496a34 +0x7712:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08496a39 +0x7717:  movzbl (%eax),%edx
08496a3c +0x771a:  mov    0x8(%ebp),%eax
08496a3f +0x771d:  mov    %dl,0x4(%eax)
08496a42 +0x7720:  leave
08496a43 +0x7721:  ret
08496a44 +0x7722:  push   %ebp
08496a45 +0x7723:  mov    %esp,%ebp
08496a47 +0x7725:  sub    $0x18,%esp
08496a4a +0x7728:  mov    0x8(%ebp),%eax
08496a4d +0x772b:  mov    %eax,(%esp)
08496a50 +0x772e:  call   0849750e <+0x81ec>
08496a55 +0x7733:  leave
08496a56 +0x7734:  ret
08496a57 +0x7735:  nop
08496a58 +0x7736:  push   %ebp
08496a59 +0x7737:  mov    %esp,%ebp
08496a5b +0x7739:  push   %esi
08496a5c +0x773a:  push   %ebx
08496a5d +0x773b:  sub    $0x10,%esp
08496a60 +0x773e:  mov    0x8(%ebp),%eax
08496a63 +0x7741:  mov    %eax,(%esp)
08496a66 +0x7744:  call   084974cc <+0x81aa>
08496a6b +0x7749:  movl   $0x0,0x4(%esp)
08496a73 +0x7751:  mov    0x8(%ebp),%eax
08496a76 +0x7754:  mov    %eax,(%esp)
08496a79 +0x7757:  call   08497522 <+0x8200>
08496a7e +0x775c:  jmp    08496a9b <+0x7779>
08496a80 +0x775e:  mov    %edx,%ebx
08496a82 +0x7760:  mov    %eax,%esi
08496a84 +0x7762:  mov    0x8(%ebp),%eax
08496a87 +0x7765:  mov    %eax,(%esp)
08496a8a +0x7768:  call   08496a44 <+0x7722>
08496a8f +0x776d:  mov    %esi,%eax
08496a91 +0x776f:  mov    %ebx,%edx
08496a93 +0x7771:  mov    %eax,(%esp)
08496a96 +0x7774:  call   08ae3750 <_Unwind_Resume>
08496a9b +0x7779:  add    $0x10,%esp
08496a9e +0x777c:  pop    %ebx
08496a9f +0x777d:  pop    %esi
08496aa0 +0x777e:  pop    %ebp
08496aa1 +0x777f:  ret
08496aa2 +0x7780:  push   %ebp
08496aa3 +0x7781:  mov    %esp,%ebp
08496aa5 +0x7783:  push   %esi
08496aa6 +0x7784:  push   %ebx
08496aa7 +0x7785:  sub    $0x10,%esp
08496aaa +0x7788:  mov    0x8(%ebp),%eax
08496aad +0x778b:  mov    (%eax),%eax
08496aaf +0x778d:  test   %eax,%eax
08496ab1 +0x778f:  je     08496b10 <+0x77ee>
08496ab3 +0x7791:  mov    0x8(%ebp),%eax
08496ab6 +0x7794:  mov    0x24(%eax),%eax
08496ab9 +0x7797:  lea    0x4(%eax),%edx
08496abc +0x779a:  mov    0x8(%ebp),%eax
08496abf +0x779d:  mov    0x14(%eax),%eax
08496ac2 +0x77a0:  mov    %edx,0x8(%esp)
08496ac6 +0x77a4:  mov    %eax,0x4(%esp)
08496aca +0x77a8:  mov    0x8(%ebp),%eax
08496acd +0x77ab:  mov    %eax,(%esp)
08496ad0 +0x77ae:  call   08497692 <+0x8370>
08496ad5 +0x77b3:  mov    0x8(%ebp),%eax
08496ad8 +0x77b6:  mov    0x4(%eax),%edx
08496adb +0x77b9:  mov    0x8(%ebp),%eax
08496ade +0x77bc:  mov    (%eax),%eax
08496ae0 +0x77be:  mov    %edx,0x8(%esp)
08496ae4 +0x77c2:  mov    %eax,0x4(%esp)
08496ae8 +0x77c6:  mov    0x8(%ebp),%eax
08496aeb +0x77c9:  mov    %eax,(%esp)
08496aee +0x77cc:  call   084976c8 <+0x83a6>
08496af3 +0x77d1:  jmp    08496b10 <+0x77ee>
08496af5 +0x77d3:  mov    %edx,%ebx
08496af7 +0x77d5:  mov    %eax,%esi
08496af9 +0x77d7:  mov    0x8(%ebp),%eax
08496afc +0x77da:  mov    %eax,(%esp)
08496aff +0x77dd:  call   08496a44 <+0x7722>
08496b04 +0x77e2:  mov    %esi,%eax
08496b06 +0x77e4:  mov    %ebx,%edx
08496b08 +0x77e6:  mov    %eax,(%esp)
08496b0b +0x77e9:  call   08ae3750 <_Unwind_Resume>
08496b10 +0x77ee:  mov    0x8(%ebp),%eax
08496b13 +0x77f1:  mov    %eax,(%esp)
08496b16 +0x77f4:  call   08496a44 <+0x7722>
08496b1b +0x77f9:  add    $0x10,%esp
08496b1e +0x77fc:  pop    %ebx
08496b1f +0x77fd:  pop    %esi
08496b20 +0x77fe:  pop    %ebp
08496b21 +0x77ff:  ret
08496b22 +0x7800:  push   %ebp
08496b23 +0x7801:  mov    %esp,%ebp
08496b25 +0x7803:  push   %ebx
08496b26 +0x7804:  sub    $0x14,%esp
08496b29 +0x7807:  mov    0x8(%ebp),%ebx
08496b2c +0x780a:  mov    %ebx,%eax
08496b2e +0x780c:  mov    0xc(%ebp),%edx
08496b31 +0x780f:  add    $0x8,%edx
08496b34 +0x7812:  mov    %edx,0x4(%esp)
08496b38 +0x7816:  mov    %eax,(%esp)
08496b3b +0x7819:  call   08496b7e <+0x785c>
08496b40 +0x781e:  mov    %ebx,%eax
08496b42 +0x7820:  mov    %ebx,%eax
08496b44 +0x7822:  add    $0x14,%esp
08496b47 +0x7825:  pop    %ebx
08496b48 +0x7826:  pop    %ebp
08496b49 +0x7827:  ret    $0x4
08496b4c +0x782a:  push   %ebp
08496b4d +0x782b:  mov    %esp,%ebp
08496b4f +0x782d:  push   %ebx
08496b50 +0x782e:  sub    $0x14,%esp
08496b53 +0x7831:  mov    0x8(%ebp),%ebx
08496b56 +0x7834:  mov    %ebx,%eax
08496b58 +0x7836:  mov    0xc(%ebp),%edx
08496b5b +0x7839:  add    $0x18,%edx
08496b5e +0x783c:  mov    %edx,0x4(%esp)
08496b62 +0x7840:  mov    %eax,(%esp)
08496b65 +0x7843:  call   08496b7e <+0x785c>
08496b6a +0x7848:  mov    %ebx,%eax
08496b6c +0x784a:  mov    %ebx,%eax
08496b6e +0x784c:  add    $0x14,%esp
08496b71 +0x784f:  pop    %ebx
08496b72 +0x7850:  pop    %ebp
08496b73 +0x7851:  ret    $0x4
08496b76 +0x7854:  push   %ebp
08496b77 +0x7855:  mov    %esp,%ebp
08496b79 +0x7857:  mov    0x8(%ebp),%eax
08496b7c +0x785a:  pop    %ebp
08496b7d +0x785b:  ret
08496b7e +0x785c:  push   %ebp
08496b7f +0x785d:  mov    %esp,%ebp
08496b81 +0x785f:  mov    0xc(%ebp),%eax
08496b84 +0x7862:  mov    (%eax),%edx
08496b86 +0x7864:  mov    0x8(%ebp),%eax
08496b89 +0x7867:  mov    %edx,(%eax)
08496b8b +0x7869:  mov    0xc(%ebp),%eax
08496b8e +0x786c:  mov    0x4(%eax),%edx
08496b91 +0x786f:  mov    0x8(%ebp),%eax
08496b94 +0x7872:  mov    %edx,0x4(%eax)
08496b97 +0x7875:  mov    0xc(%ebp),%eax
08496b9a +0x7878:  mov    0x8(%eax),%edx
08496b9d +0x787b:  mov    0x8(%ebp),%eax
08496ba0 +0x787e:  mov    %edx,0x8(%eax)
08496ba3 +0x7881:  mov    0xc(%ebp),%eax
08496ba6 +0x7884:  mov    0xc(%eax),%edx
08496ba9 +0x7887:  mov    0x8(%ebp),%eax
08496bac +0x788a:  mov    %edx,0xc(%eax)
08496baf +0x788d:  pop    %ebp
08496bb0 +0x788e:  ret
08496bb1 +0x788f:  nop
08496bb2 +0x7890:  push   %ebp
08496bb3 +0x7891:  mov    %esp,%ebp
08496bb5 +0x7893:  sub    $0x20,%esp
08496bb8 +0x7896:  leave
08496bb9 +0x7897:  ret
08496bba +0x7898:  push   %ebp
08496bbb +0x7899:  mov    %esp,%ebp
08496bbd +0x789b:  mov    0x8(%ebp),%eax
08496bc0 +0x789e:  pop    %ebp
08496bc1 +0x789f:  ret
08496bc2 +0x78a0:  push   %ebp
08496bc3 +0x78a1:  mov    %esp,%ebp
08496bc5 +0x78a3:  sub    $0x18,%esp
08496bc8 +0x78a6:  mov    0xc(%ebp),%eax
08496bcb +0x78a9:  mov    %eax,(%esp)
08496bce +0x78ac:  call   08497709 <+0x83e7>
08496bd3 +0x78b1:  mov    0x8(%ebp),%edx
08496bd6 +0x78b4:  mov    %eax,0x4(%esp)
08496bda +0x78b8:  mov    %edx,(%esp)
08496bdd +0x78bb:  call   08497712 <+0x83f0>
08496be2 +0x78c0:  leave
08496be3 +0x78c1:  ret
08496be4 +0x78c2:  push   %ebp
08496be5 +0x78c3:  mov    %esp,%ebp
08496be7 +0x78c5:  mov    0x8(%ebp),%eax
08496bea +0x78c8:  pop    %ebp
08496beb +0x78c9:  ret
08496bec +0x78ca:  push   %ebp
08496bed +0x78cb:  mov    %esp,%ebp
08496bef +0x78cd:  sub    $0x28,%esp
08496bf2 +0x78d0:  mov    0xc(%ebp),%eax
08496bf5 +0x78d3:  mov    %eax,(%esp)
08496bf8 +0x78d6:  call   08496be4 <+0x78c2>
08496bfd +0x78db:  mov    (%eax),%eax
08496bff +0x78dd:  mov    %eax,-0xc(%ebp)
08496c02 +0x78e0:  lea    -0xc(%ebp),%eax
08496c05 +0x78e3:  mov    %eax,0x4(%esp)
08496c09 +0x78e7:  mov    0x8(%ebp),%eax
08496c0c +0x78ea:  mov    %eax,(%esp)
08496c0f +0x78ed:  call   084977ce <+0x84ac>
08496c14 +0x78f2:  leave
08496c15 +0x78f3:  ret
08496c16 +0x78f4:  push   %ebp
08496c17 +0x78f5:  mov    %esp,%ebp
08496c19 +0x78f7:  sub    $0x18,%esp
08496c1c +0x78fa:  mov    0x8(%ebp),%eax
08496c1f +0x78fd:  mov    %eax,(%esp)
08496c22 +0x7900:  call   08497848 <+0x8526>
08496c27 +0x7905:  mov    0x8(%ebp),%eax
08496c2a +0x7908:  movl   $0x0,0x4(%eax)
08496c31 +0x790f:  mov    0x8(%ebp),%eax
08496c34 +0x7912:  movl   $0x0,0x8(%eax)
08496c3b +0x7919:  mov    0x8(%ebp),%eax
08496c3e +0x791c:  movl   $0x0,0xc(%eax)
08496c45 +0x7923:  mov    0x8(%ebp),%eax
08496c48 +0x7926:  movl   $0x0,0x10(%eax)
08496c4f +0x792d:  mov    0x8(%ebp),%eax
08496c52 +0x7930:  movl   $0x0,0x14(%eax)
08496c59 +0x7937:  mov    0x8(%ebp),%eax
08496c5c +0x793a:  mov    %eax,(%esp)
08496c5f +0x793d:  call   0849785c <+0x853a>
08496c64 +0x7942:  leave
08496c65 +0x7943:  ret
08496c66 +0x7944:  push   %ebp
08496c67 +0x7945:  mov    %esp,%ebp
08496c69 +0x7947:  pop    %ebp
08496c6a +0x7948:  ret
08496c6b +0x7949:  nop
08496c6c +0x794a:  push   %ebp
08496c6d +0x794b:  mov    %esp,%ebp
08496c6f +0x794d:  sub    $0x18,%esp
08496c72 +0x7950:  mov    0x8(%ebp),%eax
08496c75 +0x7953:  lea    0x8(%eax),%edx
08496c78 +0x7956:  mov    0x8(%ebp),%eax
08496c7b +0x7959:  add    $0x18,%eax
08496c7e +0x795c:  mov    %edx,0x4(%esp)
08496c82 +0x7960:  mov    %eax,(%esp)
08496c85 +0x7963:  call   0849788d <+0x856b>
08496c8a +0x7968:  leave
08496c8b +0x7969:  ret
08496c8c +0x796a:  push   %ebp
08496c8d +0x796b:  mov    %esp,%ebp
08496c8f +0x796d:  sub    $0x28,%esp
08496c92 +0x7970:  lea    -0x18(%ebp),%eax
08496c95 +0x7973:  mov    0x8(%ebp),%edx
08496c98 +0x7976:  mov    %edx,0x4(%esp)
08496c9c +0x797a:  mov    %eax,(%esp)
08496c9f +0x797d:  call   08497124 <+0x7e02>
08496ca4 +0x7982:  sub    $0x4,%esp
08496ca7 +0x7985:  lea    -0x18(%ebp),%eax
08496caa +0x7988:  mov    %eax,(%esp)
08496cad +0x798b:  call   084978a2 <+0x8580>
08496cb2 +0x7990:  leave
08496cb3 +0x7991:  ret
08496cb4 +0x7992:  push   %ebp
08496cb5 +0x7993:  mov    %esp,%ebp
08496cb7 +0x7995:  sub    $0x18,%esp
08496cba +0x7998:  mov    0x8(%ebp),%eax
08496cbd +0x799b:  mov    0x8(%eax),%edx
08496cc0 +0x799e:  mov    0x8(%ebp),%eax
08496cc3 +0x79a1:  mov    0x10(%eax),%eax
08496cc6 +0x79a4:  sub    $0x4,%eax
08496cc9 +0x79a7:  cmp    %eax,%edx
08496ccb +0x79a9:  je     08496cf3 <+0x79d1>
08496ccd +0x79ab:  mov    0x8(%ebp),%eax
08496cd0 +0x79ae:  mov    0x8(%eax),%edx
08496cd3 +0x79b1:  mov    0x8(%ebp),%eax
08496cd6 +0x79b4:  mov    %edx,0x4(%esp)
08496cda +0x79b8:  mov    %eax,(%esp)
08496cdd +0x79bb:  call   084978ac <+0x858a>
08496ce2 +0x79c0:  mov    0x8(%ebp),%eax
08496ce5 +0x79c3:  mov    0x8(%eax),%eax
08496ce8 +0x79c6:  lea    0x4(%eax),%edx
08496ceb +0x79c9:  mov    0x8(%ebp),%eax
08496cee +0x79cc:  mov    %edx,0x8(%eax)
08496cf1 +0x79cf:  jmp    08496cfe <+0x79dc>
08496cf3 +0x79d1:  mov    0x8(%ebp),%eax
08496cf6 +0x79d4:  mov    %eax,(%esp)
08496cf9 +0x79d7:  call   084978b2 <+0x8590>
08496cfe +0x79dc:  leave
08496cff +0x79dd:  ret
08496d00 +0x79de:  push   %ebp
08496d01 +0x79df:  mov    %esp,%ebp
08496d03 +0x79e1:  sub    $0x18,%esp
08496d06 +0x79e4:  mov    0x8(%ebp),%eax
08496d09 +0x79e7:  mov    0x18(%eax),%edx
08496d0c +0x79ea:  mov    0x8(%ebp),%eax
08496d0f +0x79ed:  mov    0x20(%eax),%eax
08496d12 +0x79f0:  sub    $0x4,%eax
08496d15 +0x79f3:  cmp    %eax,%edx
08496d17 +0x79f5:  je     08496d46 <+0x7a24>
08496d19 +0x79f7:  mov    0x8(%ebp),%eax
08496d1c +0x79fa:  mov    0x18(%eax),%edx
08496d1f +0x79fd:  mov    0x8(%ebp),%eax
08496d22 +0x7a00:  mov    0xc(%ebp),%ecx
08496d25 +0x7a03:  mov    %ecx,0x8(%esp)
08496d29 +0x7a07:  mov    %edx,0x4(%esp)
08496d2d +0x7a0b:  mov    %eax,(%esp)
08496d30 +0x7a0e:  call   0849790c <+0x85ea>
08496d35 +0x7a13:  mov    0x8(%ebp),%eax
08496d38 +0x7a16:  mov    0x18(%eax),%eax
08496d3b +0x7a19:  lea    0x4(%eax),%edx
08496d3e +0x7a1c:  mov    0x8(%ebp),%eax
08496d41 +0x7a1f:  mov    %edx,0x18(%eax)
08496d44 +0x7a22:  jmp    08496d58 <+0x7a36>
08496d46 +0x7a24:  mov    0xc(%ebp),%eax
08496d49 +0x7a27:  mov    %eax,0x4(%esp)
08496d4d +0x7a2b:  mov    0x8(%ebp),%eax
08496d50 +0x7a2e:  mov    %eax,(%esp)
08496d53 +0x7a31:  call   08497934 <+0x8612>
08496d58 +0x7a36:  leave
08496d59 +0x7a37:  ret
08496d5a +0x7a38:  push   %ebp
08496d5b +0x7a39:  mov    %esp,%ebp
08496d5d +0x7a3b:  sub    $0x18,%esp
08496d60 +0x7a3e:  mov    0xc(%ebp),%eax
08496d63 +0x7a41:  mov    %eax,(%esp)
08496d66 +0x7a44:  call   08490024 <+0xd02>
08496d6b +0x7a49:  mov    0x8(%ebp),%edx
08496d6e +0x7a4c:  mov    %eax,0x4(%esp)
08496d72 +0x7a50:  mov    %edx,(%esp)
08496d75 +0x7a53:  call   0857c258 <_ZN12EpollHandler10ResetEpollEi>  ; EpollHandler::ResetEpoll(int)
08496d7a +0x7a58:  test   %eax,%eax
08496d7c +0x7a5a:  sete   %al
08496d7f +0x7a5d:  leave
08496d80 +0x7a5e:  ret
08496d81 +0x7a5f:  nop
08496d82 +0x7a60:  push   %ebp
08496d83 +0x7a61:  mov    %esp,%ebp
08496d85 +0x7a63:  mov    0xc(%ebp),%edx
08496d88 +0x7a66:  mov    0x8(%ebp),%eax
08496d8b +0x7a69:  mov    %edx,(%eax)
08496d8d +0x7a6b:  pop    %ebp
08496d8e +0x7a6c:  ret
08496d8f +0x7a6d:  nop
08496d90 +0x7a6e:  push   %ebp
08496d91 +0x7a6f:  mov    %esp,%ebp
08496d93 +0x7a71:  mov    0x8(%ebp),%eax
08496d96 +0x7a74:  add    $0x4,%eax
08496d99 +0x7a77:  pop    %ebp
08496d9a +0x7a78:  ret
08496d9b +0x7a79:  nop
08496d9c +0x7a7a:  push   %ebp
08496d9d +0x7a7b:  mov    %esp,%ebp
08496d9f +0x7a7d:  push   %ebx
08496da0 +0x7a7e:  sub    $0x14,%esp
08496da3 +0x7a81:  mov    0x8(%ebp),%ebx
08496da6 +0x7a84:  jmp    08496df4 <+0x7ad2>
08496da8 +0x7a86:  mov    0x10(%ebp),%eax
08496dab +0x7a89:  mov    %eax,(%esp)
08496dae +0x7a8c:  call   08496e42 <+0x7b20>
08496db3 +0x7a91:  mov    0xc(%ebp),%edx
08496db6 +0x7a94:  mov    0x18(%ebp),%ecx
08496db9 +0x7a97:  mov    %ecx,0x8(%esp)
08496dbd +0x7a9b:  mov    %eax,0x4(%esp)
08496dc1 +0x7a9f:  mov    %edx,(%esp)
08496dc4 +0x7aa2:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08496dc9 +0x7aa7:  xor    $0x1,%eax
08496dcc +0x7aaa:  test   %al,%al
08496dce +0x7aac:  je     08496de6 <+0x7ac4>
08496dd0 +0x7aae:  mov    0x10(%ebp),%eax
08496dd3 +0x7ab1:  mov    %eax,0x14(%ebp)
08496dd6 +0x7ab4:  mov    0x10(%ebp),%eax
08496dd9 +0x7ab7:  mov    %eax,(%esp)
08496ddc +0x7aba:  call   08496e6f <+0x7b4d>
08496de1 +0x7abf:  mov    %eax,0x10(%ebp)
08496de4 +0x7ac2:  jmp    08496df4 <+0x7ad2>
08496de6 +0x7ac4:  mov    0x10(%ebp),%eax
08496de9 +0x7ac7:  mov    %eax,(%esp)
08496dec +0x7aca:  call   08496e64 <+0x7b42>
08496df1 +0x7acf:  mov    %eax,0x10(%ebp)
08496df4 +0x7ad2:  cmpl   $0x0,0x10(%ebp)
08496df8 +0x7ad6:  setne  %al
08496dfb +0x7ad9:  test   %al,%al
08496dfd +0x7adb:  jne    08496da8 <+0x7a86>
08496dff +0x7add:  mov    0x14(%ebp),%eax
08496e02 +0x7ae0:  mov    %eax,0x4(%esp)
08496e06 +0x7ae4:  mov    %ebx,(%esp)
08496e09 +0x7ae7:  call   08496d82 <+0x7a60>
08496e0e +0x7aec:  mov    %ebx,%eax
08496e10 +0x7aee:  add    $0x14,%esp
08496e13 +0x7af1:  pop    %ebx
08496e14 +0x7af2:  pop    %ebp
08496e15 +0x7af3:  ret    $0x4
08496e18 +0x7af6:  push   %ebp
08496e19 +0x7af7:  mov    %esp,%ebp
08496e1b +0x7af9:  sub    $0x28,%esp
08496e1e +0x7afc:  mov    0x8(%ebp),%eax
08496e21 +0x7aff:  mov    %eax,(%esp)
08496e24 +0x7b02:  call   084979f3 <+0x86d1>
08496e29 +0x7b07:  mov    %eax,0x4(%esp)
08496e2d +0x7b0b:  lea    -0x9(%ebp),%eax
08496e30 +0x7b0e:  mov    %eax,(%esp)
08496e33 +0x7b11:  call   08496e3a <+0x7b18>
08496e38 +0x7b16:  leave
08496e39 +0x7b17:  ret
08496e3a +0x7b18:  push   %ebp
08496e3b +0x7b19:  mov    %esp,%ebp
08496e3d +0x7b1b:  mov    0xc(%ebp),%eax
08496e40 +0x7b1e:  pop    %ebp
08496e41 +0x7b1f:  ret
08496e42 +0x7b20:  push   %ebp
08496e43 +0x7b21:  mov    %esp,%ebp
08496e45 +0x7b23:  sub    $0x28,%esp
08496e48 +0x7b26:  mov    0x8(%ebp),%eax
08496e4b +0x7b29:  mov    %eax,(%esp)
08496e4e +0x7b2c:  call   084979fe <+0x86dc>
08496e53 +0x7b31:  mov    %eax,0x4(%esp)
08496e57 +0x7b35:  lea    -0x9(%ebp),%eax
08496e5a +0x7b38:  mov    %eax,(%esp)
08496e5d +0x7b3b:  call   08496e3a <+0x7b18>
08496e62 +0x7b40:  leave
08496e63 +0x7b41:  ret
08496e64 +0x7b42:  push   %ebp
08496e65 +0x7b43:  mov    %esp,%ebp
08496e67 +0x7b45:  mov    0x8(%ebp),%eax
08496e6a +0x7b48:  mov    0xc(%eax),%eax
08496e6d +0x7b4b:  pop    %ebp
08496e6e +0x7b4c:  ret
08496e6f +0x7b4d:  push   %ebp
08496e70 +0x7b4e:  mov    %esp,%ebp
08496e72 +0x7b50:  mov    0x8(%ebp),%eax
08496e75 +0x7b53:  mov    0x8(%eax),%eax
08496e78 +0x7b56:  pop    %ebp
08496e79 +0x7b57:  ret
08496e7a +0x7b58:  push   %ebp
08496e7b +0x7b59:  mov    %esp,%ebp
08496e7d +0x7b5b:  push   %esi
08496e7e +0x7b5c:  push   %ebx
08496e7f +0x7b5d:  sub    $0x20,%esp
08496e82 +0x7b60:  mov    0x8(%ebp),%esi
08496e85 +0x7b63:  cmpl   $0x0,0x10(%ebp)
08496e89 +0x7b67:  jne    08496ed1 <+0x7baf>
08496e8b +0x7b69:  mov    0xc(%ebp),%eax
08496e8e +0x7b6c:  mov    %eax,(%esp)
08496e91 +0x7b6f:  call   08496d90 <+0x7a6e>
08496e96 +0x7b74:  cmp    0x14(%ebp),%eax
08496e99 +0x7b77:  je     08496ed1 <+0x7baf>
08496e9b +0x7b79:  mov    0x14(%ebp),%eax
08496e9e +0x7b7c:  mov    %eax,(%esp)
08496ea1 +0x7b7f:  call   08496e18 <+0x7af6>
08496ea6 +0x7b84:  mov    %eax,%ebx
08496ea8 +0x7b86:  mov    0x18(%ebp),%eax
08496eab +0x7b89:  mov    %eax,0x4(%esp)
08496eaf +0x7b8d:  lea    -0xe(%ebp),%eax
08496eb2 +0x7b90:  mov    %eax,(%esp)
08496eb5 +0x7b93:  call   08496e3a <+0x7b18>
08496eba +0x7b98:  mov    0xc(%ebp),%edx
08496ebd +0x7b9b:  mov    %ebx,0x8(%esp)
08496ec1 +0x7b9f:  mov    %eax,0x4(%esp)
08496ec5 +0x7ba3:  mov    %edx,(%esp)
08496ec8 +0x7ba6:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08496ecd +0x7bab:  test   %al,%al
08496ecf +0x7bad:  je     08496ed8 <+0x7bb6>
08496ed1 +0x7baf:  mov    $0x1,%eax
08496ed6 +0x7bb4:  jmp    08496edd <+0x7bbb>
08496ed8 +0x7bb6:  mov    $0x0,%eax
08496edd +0x7bbb:  mov    %al,-0xd(%ebp)
08496ee0 +0x7bbe:  mov    0x18(%ebp),%eax
08496ee3 +0x7bc1:  mov    %eax,0x4(%esp)
08496ee7 +0x7bc5:  mov    0xc(%ebp),%eax
08496eea +0x7bc8:  mov    %eax,(%esp)
08496eed +0x7bcb:  call   08497a0a <+0x86e8>
08496ef2 +0x7bd0:  mov    %eax,-0xc(%ebp)
08496ef5 +0x7bd3:  mov    0xc(%ebp),%eax
08496ef8 +0x7bd6:  lea    0x4(%eax),%ecx
08496efb +0x7bd9:  mov    -0xc(%ebp),%edx
08496efe +0x7bdc:  movzbl -0xd(%ebp),%eax
08496f02 +0x7be0:  mov    %ecx,0xc(%esp)
08496f06 +0x7be4:  mov    0x14(%ebp),%ecx
08496f09 +0x7be7:  mov    %ecx,0x8(%esp)
08496f0d +0x7beb:  mov    %edx,0x4(%esp)
08496f11 +0x7bef:  mov    %eax,(%esp)
08496f14 +0x7bf2:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08496f19 +0x7bf7:  mov    0xc(%ebp),%eax
08496f1c +0x7bfa:  mov    0x14(%eax),%eax
08496f1f +0x7bfd:  lea    0x1(%eax),%edx
08496f22 +0x7c00:  mov    0xc(%ebp),%eax
08496f25 +0x7c03:  mov    %edx,0x14(%eax)
08496f28 +0x7c06:  mov    -0xc(%ebp),%eax
08496f2b +0x7c09:  mov    %eax,0x4(%esp)
08496f2f +0x7c0d:  mov    %esi,(%esp)
08496f32 +0x7c10:  call   08496d82 <+0x7a60>
08496f37 +0x7c15:  mov    %esi,%eax
08496f39 +0x7c17:  add    $0x20,%esp
08496f3c +0x7c1a:  pop    %ebx
08496f3d +0x7c1b:  pop    %esi
08496f3e +0x7c1c:  pop    %ebp
08496f3f +0x7c1d:  ret    $0x4
08496f42 +0x7c20:  push   %ebp
08496f43 +0x7c21:  mov    %esp,%ebp
08496f45 +0x7c23:  sub    $0x18,%esp
08496f48 +0x7c26:  mov    0xc(%ebp),%eax
08496f4b +0x7c29:  mov    %eax,(%esp)
08496f4e +0x7c2c:  call   08497a8b <+0x8769>
08496f53 +0x7c31:  mov    0x8(%ebp),%edx
08496f56 +0x7c34:  mov    (%eax),%eax
08496f58 +0x7c36:  mov    %eax,(%edx)
08496f5a +0x7c38:  mov    0x10(%ebp),%eax
08496f5d +0x7c3b:  mov    %eax,(%esp)
08496f60 +0x7c3e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08496f65 +0x7c43:  movzbl (%eax),%edx
08496f68 +0x7c46:  mov    0x8(%ebp),%eax
08496f6b +0x7c49:  mov    %dl,0x4(%eax)
08496f6e +0x7c4c:  leave
08496f6f +0x7c4d:  ret
08496f70 +0x7c4e:  push   %ebp
08496f71 +0x7c4f:  mov    %esp,%ebp
08496f73 +0x7c51:  sub    $0x18,%esp
08496f76 +0x7c54:  mov    0x8(%ebp),%eax
08496f79 +0x7c57:  mov    (%eax),%eax
08496f7b +0x7c59:  mov    %eax,(%esp)
08496f7e +0x7c5c:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08496f83 +0x7c61:  mov    0x8(%ebp),%edx
08496f86 +0x7c64:  mov    %eax,(%edx)
08496f88 +0x7c66:  mov    0x8(%ebp),%eax
08496f8b +0x7c69:  leave
08496f8c +0x7c6a:  ret
08496f8d +0x7c6b:  nop
08496f8e +0x7c6c:  push   %ebp
08496f8f +0x7c6d:  mov    %esp,%ebp
08496f91 +0x7c6f:  sub    $0x18,%esp
08496f94 +0x7c72:  mov    0xc(%ebp),%eax
08496f97 +0x7c75:  mov    %eax,(%esp)
08496f9a +0x7c78:  call   08497a93 <+0x8771>
08496f9f +0x7c7d:  mov    0x8(%ebp),%edx
08496fa2 +0x7c80:  mov    (%eax),%eax
08496fa4 +0x7c82:  mov    %eax,(%edx)
08496fa6 +0x7c84:  mov    0x10(%ebp),%eax
08496fa9 +0x7c87:  mov    %eax,(%esp)
08496fac +0x7c8a:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08496fb1 +0x7c8f:  movzbl (%eax),%edx
08496fb4 +0x7c92:  mov    0x8(%ebp),%eax
08496fb7 +0x7c95:  mov    %dl,0x4(%eax)
08496fba +0x7c98:  leave
08496fbb +0x7c99:  ret
08496fbc +0x7c9a:  push   %ebp
08496fbd +0x7c9b:  mov    %esp,%ebp
08496fbf +0x7c9d:  sub    $0x18,%esp
08496fc2 +0x7ca0:  mov    0x8(%ebp),%eax
08496fc5 +0x7ca3:  mov    %eax,(%esp)
08496fc8 +0x7ca6:  call   08497a9c <+0x877a>
08496fcd +0x7cab:  mov    0xc(%ebp),%edx
08496fd0 +0x7cae:  mov    %edx,0x4(%esp)
08496fd4 +0x7cb2:  mov    %eax,(%esp)
08496fd7 +0x7cb5:  call   08497aaa <+0x8788>
08496fdc +0x7cba:  mov    0xc(%ebp),%eax
08496fdf +0x7cbd:  mov    %eax,0x4(%esp)
08496fe3 +0x7cc1:  mov    0x8(%ebp),%eax
08496fe6 +0x7cc4:  mov    %eax,(%esp)
08496fe9 +0x7cc7:  call   08497abe <+0x879c>
08496fee +0x7ccc:  leave
08496fef +0x7ccd:  ret
08496ff0 +0x7cce:  push   %ebp
08496ff1 +0x7ccf:  mov    %esp,%ebp
08496ff3 +0x7cd1:  sub    $0x18,%esp
08496ff6 +0x7cd4:  mov    0x8(%ebp),%eax
08496ff9 +0x7cd7:  mov    %eax,(%esp)
08496ffc +0x7cda:  call   08497ae0 <+0x87be>
08497001 +0x7cdf:  mov    0x8(%ebp),%eax
08497004 +0x7ce2:  movl   $0x0,0x4(%eax)
0849700b +0x7ce9:  mov    0x8(%ebp),%eax
0849700e +0x7cec:  movl   $0x0,0x8(%eax)
08497015 +0x7cf3:  mov    0x8(%ebp),%eax
08497018 +0x7cf6:  movl   $0x0,0xc(%eax)
0849701f +0x7cfd:  mov    0x8(%ebp),%eax
08497022 +0x7d00:  movl   $0x0,0x10(%eax)
08497029 +0x7d07:  mov    0x8(%ebp),%eax
0849702c +0x7d0a:  movl   $0x0,0x14(%eax)
08497033 +0x7d11:  mov    0x8(%ebp),%eax
08497036 +0x7d14:  mov    %eax,(%esp)
08497039 +0x7d17:  call   08497af4 <+0x87d2>
0849703e +0x7d1c:  leave
0849703f +0x7d1d:  ret
08497040 +0x7d1e:  push   %ebp
08497041 +0x7d1f:  mov    %esp,%ebp
08497043 +0x7d21:  pop    %ebp
08497044 +0x7d22:  ret
08497045 +0x7d23:  nop
08497046 +0x7d24:  push   %ebp
08497047 +0x7d25:  mov    %esp,%ebp
08497049 +0x7d27:  sub    $0x18,%esp
0849704c +0x7d2a:  mov    0x8(%ebp),%eax
0849704f +0x7d2d:  mov    %eax,(%esp)
08497052 +0x7d30:  call   08497b68 <+0x8846>
08497057 +0x7d35:  leave
08497058 +0x7d36:  ret
08497059 +0x7d37:  nop
0849705a +0x7d38:  push   %ebp
0849705b +0x7d39:  mov    %esp,%ebp
0849705d +0x7d3b:  push   %esi
0849705e +0x7d3c:  push   %ebx
0849705f +0x7d3d:  sub    $0x10,%esp
08497062 +0x7d40:  mov    0x8(%ebp),%eax
08497065 +0x7d43:  mov    %eax,(%esp)
08497068 +0x7d46:  call   08497b26 <+0x8804>
0849706d +0x7d4b:  movl   $0x0,0x4(%esp)
08497075 +0x7d53:  mov    0x8(%ebp),%eax
08497078 +0x7d56:  mov    %eax,(%esp)
0849707b +0x7d59:  call   08497b7c <+0x885a>
08497080 +0x7d5e:  jmp    0849709d <+0x7d7b>
08497082 +0x7d60:  mov    %edx,%ebx
08497084 +0x7d62:  mov    %eax,%esi
08497086 +0x7d64:  mov    0x8(%ebp),%eax
08497089 +0x7d67:  mov    %eax,(%esp)
0849708c +0x7d6a:  call   08497046 <+0x7d24>
08497091 +0x7d6f:  mov    %esi,%eax
08497093 +0x7d71:  mov    %ebx,%edx
08497095 +0x7d73:  mov    %eax,(%esp)
08497098 +0x7d76:  call   08ae3750 <_Unwind_Resume>
0849709d +0x7d7b:  add    $0x10,%esp
084970a0 +0x7d7e:  pop    %ebx
084970a1 +0x7d7f:  pop    %esi
084970a2 +0x7d80:  pop    %ebp
084970a3 +0x7d81:  ret
084970a4 +0x7d82:  push   %ebp
084970a5 +0x7d83:  mov    %esp,%ebp
084970a7 +0x7d85:  push   %esi
084970a8 +0x7d86:  push   %ebx
084970a9 +0x7d87:  sub    $0x10,%esp
084970ac +0x7d8a:  mov    0x8(%ebp),%eax
084970af +0x7d8d:  mov    (%eax),%eax
084970b1 +0x7d8f:  test   %eax,%eax
084970b3 +0x7d91:  je     08497112 <+0x7df0>
084970b5 +0x7d93:  mov    0x8(%ebp),%eax
084970b8 +0x7d96:  mov    0x24(%eax),%eax
084970bb +0x7d99:  lea    0x4(%eax),%edx
084970be +0x7d9c:  mov    0x8(%ebp),%eax
084970c1 +0x7d9f:  mov    0x14(%eax),%eax
084970c4 +0x7da2:  mov    %edx,0x8(%esp)
084970c8 +0x7da6:  mov    %eax,0x4(%esp)
084970cc +0x7daa:  mov    0x8(%ebp),%eax
084970cf +0x7dad:  mov    %eax,(%esp)
084970d2 +0x7db0:  call   08497cec <+0x89ca>
084970d7 +0x7db5:  mov    0x8(%ebp),%eax
084970da +0x7db8:  mov    0x4(%eax),%edx
084970dd +0x7dbb:  mov    0x8(%ebp),%eax
084970e0 +0x7dbe:  mov    (%eax),%eax
084970e2 +0x7dc0:  mov    %edx,0x8(%esp)
084970e6 +0x7dc4:  mov    %eax,0x4(%esp)
084970ea +0x7dc8:  mov    0x8(%ebp),%eax
084970ed +0x7dcb:  mov    %eax,(%esp)
084970f0 +0x7dce:  call   08497d22 <+0x8a00>
084970f5 +0x7dd3:  jmp    08497112 <+0x7df0>
084970f7 +0x7dd5:  mov    %edx,%ebx
084970f9 +0x7dd7:  mov    %eax,%esi
084970fb +0x7dd9:  mov    0x8(%ebp),%eax
084970fe +0x7ddc:  mov    %eax,(%esp)
08497101 +0x7ddf:  call   08497046 <+0x7d24>
08497106 +0x7de4:  mov    %esi,%eax
08497108 +0x7de6:  mov    %ebx,%edx
0849710a +0x7de8:  mov    %eax,(%esp)
0849710d +0x7deb:  call   08ae3750 <_Unwind_Resume>
08497112 +0x7df0:  mov    0x8(%ebp),%eax
08497115 +0x7df3:  mov    %eax,(%esp)
08497118 +0x7df6:  call   08497046 <+0x7d24>
0849711d +0x7dfb:  add    $0x10,%esp
08497120 +0x7dfe:  pop    %ebx
08497121 +0x7dff:  pop    %esi
08497122 +0x7e00:  pop    %ebp
08497123 +0x7e01:  ret
08497124 +0x7e02:  push   %ebp
08497125 +0x7e03:  mov    %esp,%ebp
08497127 +0x7e05:  push   %ebx
08497128 +0x7e06:  sub    $0x14,%esp
0849712b +0x7e09:  mov    0x8(%ebp),%ebx
0849712e +0x7e0c:  mov    %ebx,%eax
08497130 +0x7e0e:  mov    0xc(%ebp),%edx
08497133 +0x7e11:  add    $0x8,%edx
08497136 +0x7e14:  mov    %edx,0x4(%esp)
0849713a +0x7e18:  mov    %eax,(%esp)
0849713d +0x7e1b:  call   08497180 <+0x7e5e>
08497142 +0x7e20:  mov    %ebx,%eax
08497144 +0x7e22:  mov    %ebx,%eax
08497146 +0x7e24:  add    $0x14,%esp
08497149 +0x7e27:  pop    %ebx
0849714a +0x7e28:  pop    %ebp
0849714b +0x7e29:  ret    $0x4
0849714e +0x7e2c:  push   %ebp
0849714f +0x7e2d:  mov    %esp,%ebp
08497151 +0x7e2f:  push   %ebx
08497152 +0x7e30:  sub    $0x14,%esp
08497155 +0x7e33:  mov    0x8(%ebp),%ebx
08497158 +0x7e36:  mov    %ebx,%eax
0849715a +0x7e38:  mov    0xc(%ebp),%edx
0849715d +0x7e3b:  add    $0x18,%edx
08497160 +0x7e3e:  mov    %edx,0x4(%esp)
08497164 +0x7e42:  mov    %eax,(%esp)
08497167 +0x7e45:  call   08497180 <+0x7e5e>
0849716c +0x7e4a:  mov    %ebx,%eax
0849716e +0x7e4c:  mov    %ebx,%eax
08497170 +0x7e4e:  add    $0x14,%esp
08497173 +0x7e51:  pop    %ebx
08497174 +0x7e52:  pop    %ebp
08497175 +0x7e53:  ret    $0x4
08497178 +0x7e56:  push   %ebp
08497179 +0x7e57:  mov    %esp,%ebp
0849717b +0x7e59:  mov    0x8(%ebp),%eax
0849717e +0x7e5c:  pop    %ebp
0849717f +0x7e5d:  ret
08497180 +0x7e5e:  push   %ebp
08497181 +0x7e5f:  mov    %esp,%ebp
08497183 +0x7e61:  mov    0xc(%ebp),%eax
08497186 +0x7e64:  mov    (%eax),%edx
08497188 +0x7e66:  mov    0x8(%ebp),%eax
0849718b +0x7e69:  mov    %edx,(%eax)
0849718d +0x7e6b:  mov    0xc(%ebp),%eax
08497190 +0x7e6e:  mov    0x4(%eax),%edx
08497193 +0x7e71:  mov    0x8(%ebp),%eax
08497196 +0x7e74:  mov    %edx,0x4(%eax)
08497199 +0x7e77:  mov    0xc(%ebp),%eax
0849719c +0x7e7a:  mov    0x8(%eax),%edx
0849719f +0x7e7d:  mov    0x8(%ebp),%eax
084971a2 +0x7e80:  mov    %edx,0x8(%eax)
084971a5 +0x7e83:  mov    0xc(%ebp),%eax
084971a8 +0x7e86:  mov    0xc(%eax),%edx
084971ab +0x7e89:  mov    0x8(%ebp),%eax
084971ae +0x7e8c:  mov    %edx,0xc(%eax)
084971b1 +0x7e8f:  pop    %ebp
084971b2 +0x7e90:  ret
084971b3 +0x7e91:  nop
084971b4 +0x7e92:  push   %ebp
084971b5 +0x7e93:  mov    %esp,%ebp
084971b7 +0x7e95:  sub    $0x20,%esp
084971ba +0x7e98:  leave
084971bb +0x7e99:  ret
084971bc +0x7e9a:  push   %ebp
084971bd +0x7e9b:  mov    %esp,%ebp
084971bf +0x7e9d:  mov    0x8(%ebp),%eax
084971c2 +0x7ea0:  pop    %ebp
084971c3 +0x7ea1:  ret
084971c4 +0x7ea2:  push   %ebp
084971c5 +0x7ea3:  mov    %esp,%ebp
084971c7 +0x7ea5:  sub    $0x18,%esp
084971ca +0x7ea8:  mov    0xc(%ebp),%eax
084971cd +0x7eab:  mov    %eax,(%esp)
084971d0 +0x7eae:  call   08497d63 <+0x8a41>
084971d5 +0x7eb3:  mov    0x8(%ebp),%edx
084971d8 +0x7eb6:  mov    %eax,0x4(%esp)
084971dc +0x7eba:  mov    %edx,(%esp)
084971df +0x7ebd:  call   08497d6c <+0x8a4a>
084971e4 +0x7ec2:  leave
084971e5 +0x7ec3:  ret
084971e6 +0x7ec4:  push   %ebp
084971e7 +0x7ec5:  mov    %esp,%ebp
084971e9 +0x7ec7:  mov    0x8(%ebp),%eax
084971ec +0x7eca:  pop    %ebp
084971ed +0x7ecb:  ret
084971ee +0x7ecc:  push   %ebp
084971ef +0x7ecd:  mov    %esp,%ebp
084971f1 +0x7ecf:  sub    $0x28,%esp
084971f4 +0x7ed2:  mov    0xc(%ebp),%eax
084971f7 +0x7ed5:  mov    %eax,(%esp)
084971fa +0x7ed8:  call   084971e6 <+0x7ec4>
084971ff +0x7edd:  mov    (%eax),%eax
08497201 +0x7edf:  mov    %eax,-0xc(%ebp)
08497204 +0x7ee2:  lea    -0xc(%ebp),%eax
08497207 +0x7ee5:  mov    %eax,0x4(%esp)
0849720b +0x7ee9:  mov    0x8(%ebp),%eax
0849720e +0x7eec:  mov    %eax,(%esp)
08497211 +0x7eef:  call   08497e28 <+0x8b06>
08497216 +0x7ef4:  leave
08497217 +0x7ef5:  ret
08497218 +0x7ef6:  push   %ebp
08497219 +0x7ef7:  mov    %esp,%ebp
0849721b +0x7ef9:  sub    $0x18,%esp
0849721e +0x7efc:  mov    0xc(%ebp),%eax
08497221 +0x7eff:  mov    %eax,0x4(%esp)
08497225 +0x7f03:  movl   $0x4,(%esp)
0849722c +0x7f0a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08497231 +0x7f0f:  mov    %eax,%edx
08497233 +0x7f11:  test   %edx,%edx
08497235 +0x7f13:  je     0849723e <+0x7f1c>
08497237 +0x7f15:  mov    0x10(%ebp),%edx
0849723a +0x7f18:  mov    (%edx),%edx
0849723c +0x7f1a:  mov    %edx,(%eax)
0849723e +0x7f1c:  leave
0849723f +0x7f1d:  ret
08497240 +0x7f1e:  push   %ebp
08497241 +0x7f1f:  mov    %esp,%ebp
08497243 +0x7f21:  push   %esi
08497244 +0x7f22:  push   %ebx
08497245 +0x7f23:  sub    $0x10,%esp
08497248 +0x7f26:  movl   $0x1,0x4(%esp)
08497250 +0x7f2e:  mov    0x8(%ebp),%eax
08497253 +0x7f31:  mov    %eax,(%esp)
08497256 +0x7f34:  call   08497ea2 <+0x8b80>
0849725b +0x7f39:  mov    0x8(%ebp),%eax
0849725e +0x7f3c:  mov    0x24(%eax),%eax
08497261 +0x7f3f:  lea    0x4(%eax),%ebx
08497264 +0x7f42:  mov    0x8(%ebp),%eax
08497267 +0x7f45:  mov    %eax,(%esp)
0849726a +0x7f48:  call   08497ef8 <+0x8bd6>
0849726f +0x7f4d:  mov    %eax,(%ebx)
08497271 +0x7f4f:  mov    0xc(%ebp),%eax
08497274 +0x7f52:  mov    %eax,(%esp)
08497277 +0x7f55:  call   08497f23 <+0x8c01>
0849727c +0x7f5a:  mov    0x8(%ebp),%edx
0849727f +0x7f5d:  mov    0x18(%edx),%ecx
08497282 +0x7f60:  mov    0x8(%ebp),%edx
08497285 +0x7f63:  mov    %eax,0x8(%esp)
08497289 +0x7f67:  mov    %ecx,0x4(%esp)
0849728d +0x7f6b:  mov    %edx,(%esp)
08497290 +0x7f6e:  call   08497218 <+0x7ef6>
08497295 +0x7f73:  mov    0x8(%ebp),%eax
08497298 +0x7f76:  mov    0x24(%eax),%eax
0849729b +0x7f79:  lea    0x4(%eax),%edx
0849729e +0x7f7c:  mov    0x8(%ebp),%eax
084972a1 +0x7f7f:  add    $0x18,%eax
084972a4 +0x7f82:  mov    %edx,0x4(%esp)
084972a8 +0x7f86:  mov    %eax,(%esp)
084972ab +0x7f89:  call   08497f2c <+0x8c0a>
084972b0 +0x7f8e:  mov    0x8(%ebp),%eax
084972b3 +0x7f91:  mov    0x1c(%eax),%edx
084972b6 +0x7f94:  mov    0x8(%ebp),%eax
084972b9 +0x7f97:  mov    %edx,0x18(%eax)
084972bc +0x7f9a:  add    $0x10,%esp
084972bf +0x7f9d:  pop    %ebx
084972c0 +0x7f9e:  pop    %esi
084972c1 +0x7f9f:  pop    %ebp
084972c2 +0x7fa0:  ret
084972c3 +0x7fa1:  mov    %eax,(%esp)
084972c6 +0x7fa4:  call   08725ce0 <__cxa_begin_catch>
084972cb +0x7fa9:  mov    0x8(%ebp),%eax
084972ce +0x7fac:  mov    0x24(%eax),%eax
084972d1 +0x7faf:  add    $0x4,%eax
084972d4 +0x7fb2:  mov    (%eax),%edx
084972d6 +0x7fb4:  mov    0x8(%ebp),%eax
084972d9 +0x7fb7:  mov    %edx,0x4(%esp)
084972dd +0x7fbb:  mov    %eax,(%esp)
084972e0 +0x7fbe:  call   08497f64 <+0x8c42>
084972e5 +0x7fc3:  call   08724be0 <__cxa_rethrow>
084972ea +0x7fc8:  mov    %edx,%ebx
084972ec +0x7fca:  mov    %eax,%esi
084972ee +0x7fcc:  call   08725c30 <__cxa_end_catch>
084972f3 +0x7fd1:  mov    %esi,%eax
084972f5 +0x7fd3:  mov    %ebx,%edx
084972f7 +0x7fd5:  mov    %eax,(%esp)
084972fa +0x7fd8:  call   08ae3750 <_Unwind_Resume>
084972ff +0x7fdd:  nop
08497300 +0x7fde:  push   %ebp
08497301 +0x7fdf:  mov    %esp,%ebp
08497303 +0x7fe1:  mov    0x8(%ebp),%eax
08497306 +0x7fe4:  pop    %ebp
08497307 +0x7fe5:  ret
08497308 +0x7fe6:  push   %ebp
08497309 +0x7fe7:  mov    %esp,%ebp
0849730b +0x7fe9:  pop    %ebp
0849730c +0x7fea:  ret
0849730d +0x7feb:  nop
0849730e +0x7fec:  push   %ebp
0849730f +0x7fed:  mov    %esp,%ebp
08497311 +0x7fef:  sub    $0x18,%esp
08497314 +0x7ff2:  mov    0xc(%ebp),%eax
08497317 +0x7ff5:  mov    %eax,(%esp)
0849731a +0x7ff8:  call   08497308 <+0x7fe6>
0849731f +0x7ffd:  leave
08497320 +0x7ffe:  ret
08497321 +0x7fff:  nop
08497322 +0x8000:  push   %ebp
08497323 +0x8001:  mov    %esp,%ebp
08497325 +0x8003:  sub    $0x18,%esp
08497328 +0x8006:  mov    0x8(%ebp),%eax
0849732b +0x8009:  movl   $0x1,0x8(%esp)
08497333 +0x8011:  mov    0xc(%ebp),%edx
08497336 +0x8014:  mov    %edx,0x4(%esp)
0849733a +0x8018:  mov    %eax,(%esp)
0849733d +0x801b:  call   08497f8e <+0x8c6c>
08497342 +0x8020:  leave
08497343 +0x8021:  ret
08497344 +0x8022:  push   %ebp
08497345 +0x8023:  mov    %esp,%ebp
08497347 +0x8025:  mov    0x8(%ebp),%eax
0849734a +0x8028:  add    $0x10,%eax
0849734d +0x802b:  pop    %ebp
0849734e +0x802c:  ret
0849734f +0x802d:  push   %ebp
08497350 +0x802e:  mov    %esp,%ebp
08497352 +0x8030:  push   %ebx
08497353 +0x8031:  sub    $0x4,%esp
08497356 +0x8034:  call   08497fa1 <+0x8c7f>
0849735b +0x8039:  mov    %eax,%edx
0849735d +0x803b:  mov    0x8(%ebp),%eax
08497360 +0x803e:  mov    0xc(%eax),%eax
08497363 +0x8041:  mov    %eax,%ecx
08497365 +0x8043:  mov    0xc(%ebp),%eax
08497368 +0x8046:  mov    0xc(%eax),%eax
0849736b +0x8049:  mov    %ecx,%ebx
0849736d +0x804b:  sub    %eax,%ebx
0849736f +0x804d:  mov    %ebx,%eax
08497371 +0x804f:  sar    $0x2,%eax
08497374 +0x8052:  sub    $0x1,%eax
08497377 +0x8055:  imul   %eax,%edx
0849737a +0x8058:  mov    0x8(%ebp),%eax
0849737d +0x805b:  mov    (%eax),%eax
0849737f +0x805d:  mov    %eax,%ecx
08497381 +0x805f:  mov    0x8(%ebp),%eax
08497384 +0x8062:  mov    0x4(%eax),%eax
08497387 +0x8065:  mov    %ecx,%ebx
08497389 +0x8067:  sub    %eax,%ebx
0849738b +0x8069:  mov    %ebx,%eax
0849738d +0x806b:  sar    $0x2,%eax
08497390 +0x806e:  lea    (%edx,%eax,1),%ecx
08497393 +0x8071:  mov    0xc(%ebp),%eax
08497396 +0x8074:  mov    0x8(%eax),%eax
08497399 +0x8077:  mov    %eax,%edx
0849739b +0x8079:  mov    0xc(%ebp),%eax
0849739e +0x807c:  mov    (%eax),%eax
084973a0 +0x807e:  mov    %edx,%ebx
084973a2 +0x8080:  sub    %eax,%ebx
084973a4 +0x8082:  mov    %ebx,%eax
084973a6 +0x8084:  sar    $0x2,%eax
084973a9 +0x8087:  lea    (%ecx,%eax,1),%eax
084973ac +0x808a:  add    $0x4,%esp
084973af +0x808d:  pop    %ebx
084973b0 +0x808e:  pop    %ebp
084973b1 +0x808f:  ret
084973b2 +0x8090:  push   %ebp
084973b3 +0x8091:  mov    %esp,%ebp
084973b5 +0x8093:  mov    0x8(%ebp),%eax
084973b8 +0x8096:  mov    (%eax),%edx
084973ba +0x8098:  mov    0xc(%ebp),%eax
084973bd +0x809b:  mov    (%eax),%eax
084973bf +0x809d:  cmp    %eax,%edx
084973c1 +0x809f:  sete   %al
084973c4 +0x80a2:  pop    %ebp
084973c5 +0x80a3:  ret
084973c6 +0x80a4:  push   %ebp
084973c7 +0x80a5:  mov    %esp,%ebp
084973c9 +0x80a7:  mov    0x8(%ebp),%eax
084973cc +0x80aa:  mov    (%eax),%eax
084973ce +0x80ac:  pop    %ebp
084973cf +0x80ad:  ret
084973d0 +0x80ae:  push   %ebp
084973d1 +0x80af:  mov    %esp,%ebp
084973d3 +0x80b1:  pop    %ebp
084973d4 +0x80b2:  ret
084973d5 +0x80b3:  nop
084973d6 +0x80b4:  push   %ebp
084973d7 +0x80b5:  mov    %esp,%ebp
084973d9 +0x80b7:  sub    $0x18,%esp
084973dc +0x80ba:  mov    0x8(%ebp),%eax
084973df +0x80bd:  mov    0x8(%eax),%edx
084973e2 +0x80c0:  mov    0x8(%ebp),%eax
084973e5 +0x80c3:  mov    %edx,0x4(%esp)
084973e9 +0x80c7:  mov    %eax,(%esp)
084973ec +0x80ca:  call   084973d0 <+0x80ae>
084973f1 +0x80cf:  mov    0x8(%ebp),%eax
084973f4 +0x80d2:  mov    0xc(%eax),%edx
084973f7 +0x80d5:  mov    0x8(%ebp),%eax
084973fa +0x80d8:  mov    %edx,0x4(%esp)
084973fe +0x80dc:  mov    %eax,(%esp)
08497401 +0x80df:  call   08497f64 <+0x8c42>
08497406 +0x80e4:  mov    0x8(%ebp),%eax
08497409 +0x80e7:  mov    0x14(%eax),%eax
0849740c +0x80ea:  lea    0x4(%eax),%edx
0849740f +0x80ed:  mov    0x8(%ebp),%eax
08497412 +0x80f0:  add    $0x8,%eax
08497415 +0x80f3:  mov    %edx,0x4(%esp)
08497419 +0x80f7:  mov    %eax,(%esp)
0849741c +0x80fa:  call   08497f2c <+0x8c0a>
08497421 +0x80ff:  mov    0x8(%ebp),%eax
08497424 +0x8102:  mov    0xc(%eax),%edx
08497427 +0x8105:  mov    0x8(%ebp),%eax
0849742a +0x8108:  mov    %edx,0x8(%eax)
0849742d +0x810b:  leave
0849742e +0x810c:  ret
0849742f +0x810d:  push   %ebp
08497430 +0x810e:  mov    %esp,%ebp
08497432 +0x8110:  mov    0x8(%ebp),%eax
08497435 +0x8113:  add    $0x10,%eax
08497438 +0x8116:  pop    %ebp
08497439 +0x8117:  ret
0849743a +0x8118:  push   %ebp
0849743b +0x8119:  mov    %esp,%ebp
0849743d +0x811b:  push   %esi
0849743e +0x811c:  push   %ebx
0849743f +0x811d:  sub    $0x20,%esp
08497442 +0x8120:  mov    0x8(%ebp),%eax
08497445 +0x8123:  mov    %eax,(%esp)
08497448 +0x8126:  call   08497fb6 <+0x8c94>
0849744d +0x812b:  mov    %eax,-0xc(%ebp)
08497450 +0x812e:  mov    0xc(%ebp),%eax
08497453 +0x8131:  mov    %eax,(%esp)
08497456 +0x8134:  call   08497fd9 <+0x8cb7>
0849745b +0x8139:  mov    %eax,%ebx
0849745d +0x813b:  mov    0x8(%ebp),%eax
08497460 +0x813e:  mov    %eax,(%esp)
08497463 +0x8141:  call   08497300 <+0x7fde>
08497468 +0x8146:  mov    %ebx,0x8(%esp)
0849746c +0x814a:  mov    -0xc(%ebp),%edx
0849746f +0x814d:  mov    %edx,0x4(%esp)
08497473 +0x8151:  mov    %eax,(%esp)
08497476 +0x8154:  call   08497fe2 <+0x8cc0>
0849747b +0x8159:  jmp    084974b1 <+0x818f>
0849747d +0x815b:  mov    %eax,(%esp)
08497480 +0x815e:  call   08725ce0 <__cxa_begin_catch>
08497485 +0x8163:  mov    -0xc(%ebp),%eax
08497488 +0x8166:  mov    %eax,0x4(%esp)
0849748c +0x816a:  mov    0x8(%ebp),%eax
0849748f +0x816d:  mov    %eax,(%esp)
08497492 +0x8170:  call   08497322 <+0x8000>
08497497 +0x8175:  call   08724be0 <__cxa_rethrow>
0849749c +0x817a:  mov    %edx,%ebx
0849749e +0x817c:  mov    %eax,%esi
084974a0 +0x817e:  call   08725c30 <__cxa_end_catch>
084974a5 +0x8183:  mov    %esi,%eax
084974a7 +0x8185:  mov    %ebx,%edx
084974a9 +0x8187:  mov    %eax,(%esp)
084974ac +0x818a:  call   08ae3750 <_Unwind_Resume>
084974b1 +0x818f:  mov    -0xc(%ebp),%eax
084974b4 +0x8192:  add    $0x20,%esp
084974b7 +0x8195:  pop    %ebx
084974b8 +0x8196:  pop    %esi
084974b9 +0x8197:  pop    %ebp
084974ba +0x8198:  ret
084974bb +0x8199:  push   %ebp
084974bc +0x819a:  mov    %esp,%ebp
084974be +0x819c:  mov    0x8(%ebp),%eax
084974c1 +0x819f:  pop    %ebp
084974c2 +0x81a0:  ret
084974c3 +0x81a1:  push   %ebp
084974c4 +0x81a2:  mov    %esp,%ebp
084974c6 +0x81a4:  mov    0x8(%ebp),%eax
084974c9 +0x81a7:  pop    %ebp
084974ca +0x81a8:  ret
084974cb +0x81a9:  nop
084974cc +0x81aa:  push   %ebp
084974cd +0x81ab:  mov    %esp,%ebp
084974cf +0x81ad:  sub    $0x18,%esp
084974d2 +0x81b0:  mov    0x8(%ebp),%eax
084974d5 +0x81b3:  mov    %eax,(%esp)
084974d8 +0x81b6:  call   08498022 <+0x8d00>
084974dd +0x81bb:  mov    0x8(%ebp),%eax
084974e0 +0x81be:  movl   $0x0,(%eax)
084974e6 +0x81c4:  mov    0x8(%ebp),%eax
084974e9 +0x81c7:  movl   $0x0,0x4(%eax)
084974f0 +0x81ce:  mov    0x8(%ebp),%eax
084974f3 +0x81d1:  add    $0x8,%eax
084974f6 +0x81d4:  mov    %eax,(%esp)
084974f9 +0x81d7:  call   08498036 <+0x8d14>
084974fe +0x81dc:  mov    0x8(%ebp),%eax
08497501 +0x81df:  add    $0x18,%eax
08497504 +0x81e2:  mov    %eax,(%esp)
08497507 +0x81e5:  call   08498036 <+0x8d14>
0849750c +0x81ea:  leave
0849750d +0x81eb:  ret
0849750e +0x81ec:  push   %ebp
0849750f +0x81ed:  mov    %esp,%ebp
08497511 +0x81ef:  sub    $0x18,%esp
08497514 +0x81f2:  mov    0x8(%ebp),%eax
08497517 +0x81f5:  mov    %eax,(%esp)
0849751a +0x81f8:  call   08498062 <+0x8d40>
0849751f +0x81fd:  leave
08497520 +0x81fe:  ret
08497521 +0x81ff:  nop
08497522 +0x8200:  push   %ebp
08497523 +0x8201:  mov    %esp,%ebp
08497525 +0x8203:  push   %esi
08497526 +0x8204:  push   %ebx
08497527 +0x8205:  sub    $0x40,%esp
0849752a +0x8208:  movl   $0x4,(%esp)
08497531 +0x820f:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08497536 +0x8214:  mov    %eax,-0x2c(%ebp)
08497539 +0x8217:  mov    0xc(%ebp),%eax
0849753c +0x821a:  mov    $0x0,%edx
08497541 +0x821f:  divl   -0x2c(%ebp)
08497544 +0x8222:  add    $0x1,%eax
08497547 +0x8225:  mov    %eax,-0x14(%ebp)
0849754a +0x8228:  mov    -0x14(%ebp),%eax
0849754d +0x822b:  add    $0x2,%eax
08497550 +0x822e:  mov    %eax,-0x1c(%ebp)
08497553 +0x8231:  movl   $0x8,-0x18(%ebp)
0849755a +0x8238:  lea    -0x1c(%ebp),%eax
0849755d +0x823b:  mov    %eax,0x4(%esp)
08497561 +0x823f:  lea    -0x18(%ebp),%eax
08497564 +0x8242:  mov    %eax,(%esp)
08497567 +0x8245:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0849756c +0x824a:  mov    (%eax),%edx
0849756e +0x824c:  mov    0x8(%ebp),%eax
08497571 +0x824f:  mov    %edx,0x4(%eax)
08497574 +0x8252:  mov    0x8(%ebp),%eax
08497577 +0x8255:  mov    0x4(%eax),%eax
0849757a +0x8258:  mov    %eax,0x4(%esp)
0849757e +0x825c:  mov    0x8(%ebp),%eax
08497581 +0x825f:  mov    %eax,(%esp)
08497584 +0x8262:  call   08498068 <+0x8d46>
08497589 +0x8267:  mov    0x8(%ebp),%edx
0849758c +0x826a:  mov    %eax,(%edx)
0849758e +0x826c:  mov    0x8(%ebp),%eax
08497591 +0x826f:  mov    (%eax),%edx
08497593 +0x8271:  mov    0x8(%ebp),%eax
08497596 +0x8274:  mov    0x4(%eax),%eax
08497599 +0x8277:  sub    -0x14(%ebp),%eax
0849759c +0x827a:  shr    %eax
0849759e +0x827c:  shl    $0x2,%eax
084975a1 +0x827f:  lea    (%edx,%eax,1),%eax
084975a4 +0x8282:  mov    %eax,-0x10(%ebp)
084975a7 +0x8285:  mov    -0x14(%ebp),%eax
084975aa +0x8288:  shl    $0x2,%eax
084975ad +0x828b:  add    -0x10(%ebp),%eax
084975b0 +0x828e:  mov    %eax,-0xc(%ebp)
084975b3 +0x8291:  mov    -0xc(%ebp),%eax
084975b6 +0x8294:  mov    %eax,0x8(%esp)
084975ba +0x8298:  mov    -0x10(%ebp),%eax
084975bd +0x829b:  mov    %eax,0x4(%esp)
084975c1 +0x829f:  mov    0x8(%ebp),%eax
084975c4 +0x82a2:  mov    %eax,(%esp)
084975c7 +0x82a5:  call   084980d4 <+0x8db2>
084975cc +0x82aa:  jmp    08497621 <+0x82ff>
084975ce +0x82ac:  mov    %eax,(%esp)
084975d1 +0x82af:  call   08725ce0 <__cxa_begin_catch>
084975d6 +0x82b4:  mov    0x8(%ebp),%eax
084975d9 +0x82b7:  mov    0x4(%eax),%edx
084975dc +0x82ba:  mov    0x8(%ebp),%eax
084975df +0x82bd:  mov    (%eax),%eax
084975e1 +0x82bf:  mov    %edx,0x8(%esp)
084975e5 +0x82c3:  mov    %eax,0x4(%esp)
084975e9 +0x82c7:  mov    0x8(%ebp),%eax
084975ec +0x82ca:  mov    %eax,(%esp)
084975ef +0x82cd:  call   084976c8 <+0x83a6>
084975f4 +0x82d2:  mov    0x8(%ebp),%eax
084975f7 +0x82d5:  movl   $0x0,(%eax)
084975fd +0x82db:  mov    0x8(%ebp),%eax
08497600 +0x82de:  movl   $0x0,0x4(%eax)
08497607 +0x82e5:  call   08724be0 <__cxa_rethrow>
0849760c +0x82ea:  mov    %edx,%ebx
0849760e +0x82ec:  mov    %eax,%esi
08497610 +0x82ee:  call   08725c30 <__cxa_end_catch>
08497615 +0x82f3:  mov    %esi,%eax
08497617 +0x82f5:  mov    %ebx,%edx
08497619 +0x82f7:  mov    %eax,(%esp)
0849761c +0x82fa:  call   08ae3750 <_Unwind_Resume>
08497621 +0x82ff:  mov    0x8(%ebp),%eax
08497624 +0x8302:  lea    0x8(%eax),%edx
08497627 +0x8305:  mov    -0x10(%ebp),%eax
0849762a +0x8308:  mov    %eax,0x4(%esp)
0849762e +0x830c:  mov    %edx,(%esp)
08497631 +0x830f:  call   08497f2c <+0x8c0a>
08497636 +0x8314:  mov    -0xc(%ebp),%eax
08497639 +0x8317:  lea    -0x4(%eax),%edx
0849763c +0x831a:  mov    0x8(%ebp),%eax
0849763f +0x831d:  add    $0x18,%eax
08497642 +0x8320:  mov    %edx,0x4(%esp)
08497646 +0x8324:  mov    %eax,(%esp)
08497649 +0x8327:  call   08497f2c <+0x8c0a>
0849764e +0x832c:  mov    0x8(%ebp),%eax
08497651 +0x832f:  mov    0xc(%eax),%edx
08497654 +0x8332:  mov    0x8(%ebp),%eax
08497657 +0x8335:  mov    %edx,0x8(%eax)
0849765a +0x8338:  mov    0x8(%ebp),%eax
0849765d +0x833b:  mov    0x1c(%eax),%ebx
08497660 +0x833e:  movl   $0x4,(%esp)
08497667 +0x8345:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
0849766c +0x834a:  mov    %eax,-0x2c(%ebp)
0849766f +0x834d:  mov    0xc(%ebp),%eax
08497672 +0x8350:  mov    $0x0,%edx
08497677 +0x8355:  divl   -0x2c(%ebp)
0849767a +0x8358:  mov    %edx,%ecx
0849767c +0x835a:  mov    %ecx,%eax
0849767e +0x835c:  shl    $0x2,%eax
08497681 +0x835f:  lea    (%ebx,%eax,1),%edx
08497684 +0x8362:  mov    0x8(%ebp),%eax
08497687 +0x8365:  mov    %edx,0x18(%eax)
0849768a +0x8368:  add    $0x40,%esp
0849768d +0x836b:  pop    %ebx
0849768e +0x836c:  pop    %esi
0849768f +0x836d:  pop    %ebp
08497690 +0x836e:  ret
08497691 +0x836f:  nop
08497692 +0x8370:  push   %ebp
08497693 +0x8371:  mov    %esp,%ebp
08497695 +0x8373:  sub    $0x28,%esp
08497698 +0x8376:  mov    0xc(%ebp),%eax
0849769b +0x8379:  mov    %eax,-0xc(%ebp)
0849769e +0x837c:  jmp    084976b8 <+0x8396>
084976a0 +0x837e:  mov    -0xc(%ebp),%eax
084976a3 +0x8381:  mov    (%eax),%eax
084976a5 +0x8383:  mov    %eax,0x4(%esp)
084976a9 +0x8387:  mov    0x8(%ebp),%eax
084976ac +0x838a:  mov    %eax,(%esp)
084976af +0x838d:  call   08497f64 <+0x8c42>
084976b4 +0x8392:  addl   $0x4,-0xc(%ebp)
084976b8 +0x8396:  mov    -0xc(%ebp),%eax
084976bb +0x8399:  cmp    0x10(%ebp),%eax
084976be +0x839c:  setb   %al
084976c1 +0x839f:  test   %al,%al
084976c3 +0x83a1:  jne    084976a0 <+0x837e>
084976c5 +0x83a3:  leave
084976c6 +0x83a4:  ret
084976c7 +0x83a5:  nop
084976c8 +0x83a6:  push   %ebp
084976c9 +0x83a7:  mov    %esp,%ebp
084976cb +0x83a9:  sub    $0x28,%esp
084976ce +0x83ac:  lea    -0x9(%ebp),%eax
084976d1 +0x83af:  mov    0x8(%ebp),%edx
084976d4 +0x83b2:  mov    %edx,0x4(%esp)
084976d8 +0x83b6:  mov    %eax,(%esp)
084976db +0x83b9:  call   0849814a <+0x8e28>
084976e0 +0x83be:  sub    $0x4,%esp
084976e3 +0x83c1:  lea    -0x9(%ebp),%eax
084976e6 +0x83c4:  mov    0x10(%ebp),%edx
084976e9 +0x83c7:  mov    %edx,0x8(%esp)
084976ed +0x83cb:  mov    0xc(%ebp),%edx
084976f0 +0x83ce:  mov    %edx,0x4(%esp)
084976f4 +0x83d2:  mov    %eax,(%esp)
084976f7 +0x83d5:  call   08498190 <+0x8e6e>
084976fc +0x83da:  lea    -0x9(%ebp),%eax
084976ff +0x83dd:  mov    %eax,(%esp)
08497702 +0x83e0:  call   0849817c <+0x8e5a>
08497707 +0x83e5:  leave
08497708 +0x83e6:  ret
08497709 +0x83e7:  push   %ebp
0849770a +0x83e8:  mov    %esp,%ebp
0849770c +0x83ea:  mov    0x8(%ebp),%eax
0849770f +0x83ed:  pop    %ebp
08497710 +0x83ee:  ret
08497711 +0x83ef:  nop
08497712 +0x83f0:  push   %ebp
08497713 +0x83f1:  mov    %esp,%ebp
08497715 +0x83f3:  push   %esi
08497716 +0x83f4:  push   %ebx
08497717 +0x83f5:  sub    $0x10,%esp
0849771a +0x83f8:  mov    0xc(%ebp),%eax
0849771d +0x83fb:  mov    %eax,(%esp)
08497720 +0x83fe:  call   08496b76 <+0x7854>
08497725 +0x8403:  mov    0x8(%ebp),%edx
08497728 +0x8406:  mov    %eax,0x4(%esp)
0849772c +0x840a:  mov    %edx,(%esp)
0849772f +0x840d:  call   084981a4 <+0x8e82>
08497734 +0x8412:  movl   $0x0,0x4(%esp)
0849773c +0x841a:  mov    0x8(%ebp),%eax
0849773f +0x841d:  mov    %eax,(%esp)
08497742 +0x8420:  call   08497522 <+0x8200>
08497747 +0x8425:  mov    0xc(%ebp),%eax
0849774a +0x8428:  mov    (%eax),%eax
0849774c +0x842a:  test   %eax,%eax
0849774e +0x842c:  je     084977c7 <+0x84a5>
08497750 +0x842e:  mov    0xc(%ebp),%eax
08497753 +0x8431:  lea    0x8(%eax),%edx
08497756 +0x8434:  mov    0x8(%ebp),%eax
08497759 +0x8437:  add    $0x8,%eax
0849775c +0x843a:  mov    %edx,0x4(%esp)
08497760 +0x843e:  mov    %eax,(%esp)
08497763 +0x8441:  call   084981ed <+0x8ecb>
08497768 +0x8446:  mov    0xc(%ebp),%eax
0849776b +0x8449:  lea    0x18(%eax),%edx
0849776e +0x844c:  mov    0x8(%ebp),%eax
08497771 +0x844f:  add    $0x18,%eax
08497774 +0x8452:  mov    %edx,0x4(%esp)
08497778 +0x8456:  mov    %eax,(%esp)
0849777b +0x8459:  call   084981ed <+0x8ecb>
08497780 +0x845e:  mov    0xc(%ebp),%edx
08497783 +0x8461:  mov    0x8(%ebp),%eax
08497786 +0x8464:  mov    %edx,0x4(%esp)
0849778a +0x8468:  mov    %eax,(%esp)
0849778d +0x846b:  call   08498257 <+0x8f35>
08497792 +0x8470:  mov    0xc(%ebp),%eax
08497795 +0x8473:  lea    0x4(%eax),%edx
08497798 +0x8476:  mov    0x8(%ebp),%eax
0849779b +0x8479:  add    $0x4,%eax
0849779e +0x847c:  mov    %edx,0x4(%esp)
084977a2 +0x8480:  mov    %eax,(%esp)
084977a5 +0x8483:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
084977aa +0x8488:  jmp    084977c7 <+0x84a5>
084977ac +0x848a:  mov    %edx,%ebx
084977ae +0x848c:  mov    %eax,%esi
084977b0 +0x848e:  mov    0x8(%ebp),%eax
084977b3 +0x8491:  mov    %eax,(%esp)
084977b6 +0x8494:  call   08496a44 <+0x7722>
084977bb +0x8499:  mov    %esi,%eax
084977bd +0x849b:  mov    %ebx,%edx
084977bf +0x849d:  mov    %eax,(%esp)
084977c2 +0x84a0:  call   08ae3750 <_Unwind_Resume>
084977c7 +0x84a5:  add    $0x10,%esp
084977ca +0x84a8:  pop    %ebx
084977cb +0x84a9:  pop    %esi
084977cc +0x84aa:  pop    %ebp
084977cd +0x84ab:  ret
084977ce +0x84ac:  push   %ebp
084977cf +0x84ad:  mov    %esp,%ebp
084977d1 +0x84af:  sub    $0x28,%esp
084977d4 +0x84b2:  mov    0x8(%ebp),%eax
084977d7 +0x84b5:  mov    0x18(%eax),%edx
084977da +0x84b8:  mov    0x8(%ebp),%eax
084977dd +0x84bb:  mov    0x20(%eax),%eax
084977e0 +0x84be:  sub    $0x4,%eax
084977e3 +0x84c1:  cmp    %eax,%edx
084977e5 +0x84c3:  je     08497824 <+0x8502>
084977e7 +0x84c5:  mov    0xc(%ebp),%eax
084977ea +0x84c8:  mov    %eax,(%esp)
084977ed +0x84cb:  call   08498293 <+0x8f71>
084977f2 +0x84d0:  mov    (%eax),%eax
084977f4 +0x84d2:  mov    %eax,-0x10(%ebp)
084977f7 +0x84d5:  mov    0x8(%ebp),%eax
084977fa +0x84d8:  mov    0x18(%eax),%edx
084977fd +0x84db:  mov    0x8(%ebp),%eax
08497800 +0x84de:  lea    -0x10(%ebp),%ecx
08497803 +0x84e1:  mov    %ecx,0x8(%esp)
08497807 +0x84e5:  mov    %edx,0x4(%esp)
0849780b +0x84e9:  mov    %eax,(%esp)
0849780e +0x84ec:  call   0849829c <+0x8f7a>
08497813 +0x84f1:  mov    0x8(%ebp),%eax
08497816 +0x84f4:  mov    0x18(%eax),%eax
08497819 +0x84f7:  lea    0x4(%eax),%edx
0849781c +0x84fa:  mov    0x8(%ebp),%eax
0849781f +0x84fd:  mov    %edx,0x18(%eax)
08497822 +0x8500:  jmp    08497846 <+0x8524>
08497824 +0x8502:  mov    0xc(%ebp),%eax
08497827 +0x8505:  mov    %eax,(%esp)
0849782a +0x8508:  call   08498293 <+0x8f71>
0849782f +0x850d:  mov    (%eax),%eax
08497831 +0x850f:  mov    %eax,-0xc(%ebp)
08497834 +0x8512:  lea    -0xc(%ebp),%eax
08497837 +0x8515:  mov    %eax,0x4(%esp)
0849783b +0x8519:  mov    0x8(%ebp),%eax
0849783e +0x851c:  mov    %eax,(%esp)
08497841 +0x851f:  call   084982d2 <+0x8fb0>
08497846 +0x8524:  leave
08497847 +0x8525:  ret
08497848 +0x8526:  push   %ebp
08497849 +0x8527:  mov    %esp,%ebp
0849784b +0x8529:  sub    $0x18,%esp
0849784e +0x852c:  mov    0x8(%ebp),%eax
08497851 +0x852f:  mov    %eax,(%esp)
08497854 +0x8532:  call   0849835c <+0x903a>
08497859 +0x8537:  leave
0849785a +0x8538:  ret
0849785b +0x8539:  nop
0849785c +0x853a:  push   %ebp
0849785d +0x853b:  mov    %esp,%ebp
0849785f +0x853d:  mov    0x8(%ebp),%eax
08497862 +0x8540:  movl   $0x0,0x4(%eax)
08497869 +0x8547:  mov    0x8(%ebp),%eax
0849786c +0x854a:  movl   $0x0,0x8(%eax)
08497873 +0x8551:  mov    0x8(%ebp),%eax
08497876 +0x8554:  lea    0x4(%eax),%edx
08497879 +0x8557:  mov    0x8(%ebp),%eax
0849787c +0x855a:  mov    %edx,0xc(%eax)
0849787f +0x855d:  mov    0x8(%ebp),%eax
08497882 +0x8560:  lea    0x4(%eax),%edx
08497885 +0x8563:  mov    0x8(%ebp),%eax
08497888 +0x8566:  mov    %edx,0x10(%eax)
0849788b +0x8569:  pop    %ebp
0849788c +0x856a:  ret
0849788d +0x856b:  push   %ebp
0849788e +0x856c:  mov    %esp,%ebp
08497890 +0x856e:  mov    0x8(%ebp),%eax
08497893 +0x8571:  mov    (%eax),%edx
08497895 +0x8573:  mov    0xc(%ebp),%eax
08497898 +0x8576:  mov    (%eax),%eax
0849789a +0x8578:  cmp    %eax,%edx
0849789c +0x857a:  sete   %al
0849789f +0x857d:  pop    %ebp
084978a0 +0x857e:  ret
084978a1 +0x857f:  nop
084978a2 +0x8580:  push   %ebp
084978a3 +0x8581:  mov    %esp,%ebp
084978a5 +0x8583:  mov    0x8(%ebp),%eax
084978a8 +0x8586:  mov    (%eax),%eax
084978aa +0x8588:  pop    %ebp
084978ab +0x8589:  ret
084978ac +0x858a:  push   %ebp
084978ad +0x858b:  mov    %esp,%ebp
084978af +0x858d:  pop    %ebp
084978b0 +0x858e:  ret
084978b1 +0x858f:  nop
084978b2 +0x8590:  push   %ebp
084978b3 +0x8591:  mov    %esp,%ebp
084978b5 +0x8593:  sub    $0x18,%esp
084978b8 +0x8596:  mov    0x8(%ebp),%eax
084978bb +0x8599:  mov    0x8(%eax),%edx
084978be +0x859c:  mov    0x8(%ebp),%eax
084978c1 +0x859f:  mov    %edx,0x4(%esp)
084978c5 +0x85a3:  mov    %eax,(%esp)
084978c8 +0x85a6:  call   084978ac <+0x858a>
084978cd +0x85ab:  mov    0x8(%ebp),%eax
084978d0 +0x85ae:  mov    0xc(%eax),%edx
084978d3 +0x85b1:  mov    0x8(%ebp),%eax
084978d6 +0x85b4:  mov    %edx,0x4(%esp)
084978da +0x85b8:  mov    %eax,(%esp)
084978dd +0x85bb:  call   08498362 <+0x9040>
084978e2 +0x85c0:  mov    0x8(%ebp),%eax
084978e5 +0x85c3:  mov    0x14(%eax),%eax
084978e8 +0x85c6:  lea    0x4(%eax),%edx
084978eb +0x85c9:  mov    0x8(%ebp),%eax
084978ee +0x85cc:  add    $0x8,%eax
084978f1 +0x85cf:  mov    %edx,0x4(%esp)
084978f5 +0x85d3:  mov    %eax,(%esp)
084978f8 +0x85d6:  call   0849838c <+0x906a>
084978fd +0x85db:  mov    0x8(%ebp),%eax
08497900 +0x85de:  mov    0xc(%eax),%edx
08497903 +0x85e1:  mov    0x8(%ebp),%eax
08497906 +0x85e4:  mov    %edx,0x8(%eax)
08497909 +0x85e7:  leave
0849790a +0x85e8:  ret
0849790b +0x85e9:  nop
0849790c +0x85ea:  push   %ebp
0849790d +0x85eb:  mov    %esp,%ebp
0849790f +0x85ed:  sub    $0x18,%esp
08497912 +0x85f0:  mov    0xc(%ebp),%eax
08497915 +0x85f3:  mov    %eax,0x4(%esp)
08497919 +0x85f7:  movl   $0x4,(%esp)
08497920 +0x85fe:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08497925 +0x8603:  mov    %eax,%edx
08497927 +0x8605:  test   %edx,%edx
08497929 +0x8607:  je     08497932 <+0x8610>
0849792b +0x8609:  mov    0x10(%ebp),%edx
0849792e +0x860c:  mov    (%edx),%edx
08497930 +0x860e:  mov    %edx,(%eax)
08497932 +0x8610:  leave
08497933 +0x8611:  ret
08497934 +0x8612:  push   %ebp
08497935 +0x8613:  mov    %esp,%ebp
08497937 +0x8615:  push   %esi
08497938 +0x8616:  push   %ebx
08497939 +0x8617:  sub    $0x10,%esp
0849793c +0x861a:  movl   $0x1,0x4(%esp)
08497944 +0x8622:  mov    0x8(%ebp),%eax
08497947 +0x8625:  mov    %eax,(%esp)
0849794a +0x8628:  call   084983c4 <+0x90a2>
0849794f +0x862d:  mov    0x8(%ebp),%eax
08497952 +0x8630:  mov    0x24(%eax),%eax
08497955 +0x8633:  lea    0x4(%eax),%ebx
08497958 +0x8636:  mov    0x8(%ebp),%eax
0849795b +0x8639:  mov    %eax,(%esp)
0849795e +0x863c:  call   0849841a <+0x90f8>
08497963 +0x8641:  mov    %eax,(%ebx)
08497965 +0x8643:  mov    0xc(%ebp),%eax
08497968 +0x8646:  mov    %eax,(%esp)
0849796b +0x8649:  call   08498445 <+0x9123>
08497970 +0x864e:  mov    0x8(%ebp),%edx
08497973 +0x8651:  mov    0x18(%edx),%ecx
08497976 +0x8654:  mov    0x8(%ebp),%edx
08497979 +0x8657:  mov    %eax,0x8(%esp)
0849797d +0x865b:  mov    %ecx,0x4(%esp)
08497981 +0x865f:  mov    %edx,(%esp)
08497984 +0x8662:  call   0849790c <+0x85ea>
08497989 +0x8667:  mov    0x8(%ebp),%eax
0849798c +0x866a:  mov    0x24(%eax),%eax
0849798f +0x866d:  lea    0x4(%eax),%edx
08497992 +0x8670:  mov    0x8(%ebp),%eax
08497995 +0x8673:  add    $0x18,%eax
08497998 +0x8676:  mov    %edx,0x4(%esp)
0849799c +0x867a:  mov    %eax,(%esp)
0849799f +0x867d:  call   0849838c <+0x906a>
084979a4 +0x8682:  mov    0x8(%ebp),%eax
084979a7 +0x8685:  mov    0x1c(%eax),%edx
084979aa +0x8688:  mov    0x8(%ebp),%eax
084979ad +0x868b:  mov    %edx,0x18(%eax)
084979b0 +0x868e:  add    $0x10,%esp
084979b3 +0x8691:  pop    %ebx
084979b4 +0x8692:  pop    %esi
084979b5 +0x8693:  pop    %ebp
084979b6 +0x8694:  ret
084979b7 +0x8695:  mov    %eax,(%esp)
084979ba +0x8698:  call   08725ce0 <__cxa_begin_catch>
084979bf +0x869d:  mov    0x8(%ebp),%eax
084979c2 +0x86a0:  mov    0x24(%eax),%eax
084979c5 +0x86a3:  add    $0x4,%eax
084979c8 +0x86a6:  mov    (%eax),%edx
084979ca +0x86a8:  mov    0x8(%ebp),%eax
084979cd +0x86ab:  mov    %edx,0x4(%esp)
084979d1 +0x86af:  mov    %eax,(%esp)
084979d4 +0x86b2:  call   08498362 <+0x9040>
084979d9 +0x86b7:  call   08724be0 <__cxa_rethrow>
084979de +0x86bc:  mov    %edx,%ebx
084979e0 +0x86be:  mov    %eax,%esi
084979e2 +0x86c0:  call   08725c30 <__cxa_end_catch>
084979e7 +0x86c5:  mov    %esi,%eax
084979e9 +0x86c7:  mov    %ebx,%edx
084979eb +0x86c9:  mov    %eax,(%esp)
084979ee +0x86cc:  call   08ae3750 <_Unwind_Resume>
084979f3 +0x86d1:  push   %ebp
084979f4 +0x86d2:  mov    %esp,%ebp
084979f6 +0x86d4:  mov    0x8(%ebp),%eax
084979f9 +0x86d7:  add    $0x10,%eax
084979fc +0x86da:  pop    %ebp
084979fd +0x86db:  ret
084979fe +0x86dc:  push   %ebp
084979ff +0x86dd:  mov    %esp,%ebp
08497a01 +0x86df:  mov    0x8(%ebp),%eax
08497a04 +0x86e2:  add    $0x10,%eax
08497a07 +0x86e5:  pop    %ebp
08497a08 +0x86e6:  ret
08497a09 +0x86e7:  nop
08497a0a +0x86e8:  push   %ebp
08497a0b +0x86e9:  mov    %esp,%ebp
08497a0d +0x86eb:  push   %esi
08497a0e +0x86ec:  push   %ebx
08497a0f +0x86ed:  sub    $0x20,%esp
08497a12 +0x86f0:  mov    0x8(%ebp),%eax
08497a15 +0x86f3:  mov    %eax,(%esp)
08497a18 +0x86f6:  call   0849844e <+0x912c>
08497a1d +0x86fb:  mov    %eax,-0xc(%ebp)
08497a20 +0x86fe:  mov    0xc(%ebp),%eax
08497a23 +0x8701:  mov    %eax,(%esp)
08497a26 +0x8704:  call   08498471 <+0x914f>
08497a2b +0x8709:  mov    %eax,%ebx
08497a2d +0x870b:  mov    0x8(%ebp),%eax
08497a30 +0x870e:  mov    %eax,(%esp)
08497a33 +0x8711:  call   08497a9c <+0x877a>
08497a38 +0x8716:  mov    %ebx,0x8(%esp)
08497a3c +0x871a:  mov    -0xc(%ebp),%edx
08497a3f +0x871d:  mov    %edx,0x4(%esp)
08497a43 +0x8721:  mov    %eax,(%esp)
08497a46 +0x8724:  call   0849847a <+0x9158>
08497a4b +0x8729:  jmp    08497a81 <+0x875f>
08497a4d +0x872b:  mov    %eax,(%esp)
08497a50 +0x872e:  call   08725ce0 <__cxa_begin_catch>
08497a55 +0x8733:  mov    -0xc(%ebp),%eax
08497a58 +0x8736:  mov    %eax,0x4(%esp)
08497a5c +0x873a:  mov    0x8(%ebp),%eax
08497a5f +0x873d:  mov    %eax,(%esp)
08497a62 +0x8740:  call   08497abe <+0x879c>
08497a67 +0x8745:  call   08724be0 <__cxa_rethrow>
08497a6c +0x874a:  mov    %edx,%ebx
08497a6e +0x874c:  mov    %eax,%esi
08497a70 +0x874e:  call   08725c30 <__cxa_end_catch>
08497a75 +0x8753:  mov    %esi,%eax
08497a77 +0x8755:  mov    %ebx,%edx
08497a79 +0x8757:  mov    %eax,(%esp)
08497a7c +0x875a:  call   08ae3750 <_Unwind_Resume>
08497a81 +0x875f:  mov    -0xc(%ebp),%eax
08497a84 +0x8762:  add    $0x20,%esp
08497a87 +0x8765:  pop    %ebx
08497a88 +0x8766:  pop    %esi
08497a89 +0x8767:  pop    %ebp
08497a8a +0x8768:  ret
08497a8b +0x8769:  push   %ebp
08497a8c +0x876a:  mov    %esp,%ebp
08497a8e +0x876c:  mov    0x8(%ebp),%eax
08497a91 +0x876f:  pop    %ebp
08497a92 +0x8770:  ret
08497a93 +0x8771:  push   %ebp
08497a94 +0x8772:  mov    %esp,%ebp
08497a96 +0x8774:  mov    0x8(%ebp),%eax
08497a99 +0x8777:  pop    %ebp
08497a9a +0x8778:  ret
08497a9b +0x8779:  nop
08497a9c +0x877a:  push   %ebp
08497a9d +0x877b:  mov    %esp,%ebp
08497a9f +0x877d:  mov    0x8(%ebp),%eax
08497aa2 +0x8780:  pop    %ebp
08497aa3 +0x8781:  ret
08497aa4 +0x8782:  push   %ebp
08497aa5 +0x8783:  mov    %esp,%ebp
08497aa7 +0x8785:  pop    %ebp
08497aa8 +0x8786:  ret
08497aa9 +0x8787:  nop
08497aaa +0x8788:  push   %ebp
08497aab +0x8789:  mov    %esp,%ebp
08497aad +0x878b:  sub    $0x18,%esp
08497ab0 +0x878e:  mov    0xc(%ebp),%eax
08497ab3 +0x8791:  mov    %eax,(%esp)
08497ab6 +0x8794:  call   08497aa4 <+0x8782>
08497abb +0x8799:  leave
08497abc +0x879a:  ret
08497abd +0x879b:  nop
08497abe +0x879c:  push   %ebp
08497abf +0x879d:  mov    %esp,%ebp
08497ac1 +0x879f:  sub    $0x18,%esp
08497ac4 +0x87a2:  mov    0x8(%ebp),%eax
08497ac7 +0x87a5:  movl   $0x1,0x8(%esp)
08497acf +0x87ad:  mov    0xc(%ebp),%edx
08497ad2 +0x87b0:  mov    %edx,0x4(%esp)
08497ad6 +0x87b4:  mov    %eax,(%esp)
08497ad9 +0x87b7:  call   084984ba <+0x9198>
08497ade +0x87bc:  leave
08497adf +0x87bd:  ret
08497ae0 +0x87be:  push   %ebp
08497ae1 +0x87bf:  mov    %esp,%ebp
08497ae3 +0x87c1:  sub    $0x18,%esp
08497ae6 +0x87c4:  mov    0x8(%ebp),%eax
08497ae9 +0x87c7:  mov    %eax,(%esp)
08497aec +0x87ca:  call   084984ce <+0x91ac>
08497af1 +0x87cf:  leave
08497af2 +0x87d0:  ret
08497af3 +0x87d1:  nop
08497af4 +0x87d2:  push   %ebp
08497af5 +0x87d3:  mov    %esp,%ebp
08497af7 +0x87d5:  mov    0x8(%ebp),%eax
08497afa +0x87d8:  movl   $0x0,0x4(%eax)
08497b01 +0x87df:  mov    0x8(%ebp),%eax
08497b04 +0x87e2:  movl   $0x0,0x8(%eax)
08497b0b +0x87e9:  mov    0x8(%ebp),%eax
08497b0e +0x87ec:  lea    0x4(%eax),%edx
08497b11 +0x87ef:  mov    0x8(%ebp),%eax
08497b14 +0x87f2:  mov    %edx,0xc(%eax)
08497b17 +0x87f5:  mov    0x8(%ebp),%eax
08497b1a +0x87f8:  lea    0x4(%eax),%edx
08497b1d +0x87fb:  mov    0x8(%ebp),%eax
08497b20 +0x87fe:  mov    %edx,0x10(%eax)
08497b23 +0x8801:  pop    %ebp
08497b24 +0x8802:  ret
08497b25 +0x8803:  nop
08497b26 +0x8804:  push   %ebp
08497b27 +0x8805:  mov    %esp,%ebp
08497b29 +0x8807:  sub    $0x18,%esp
08497b2c +0x880a:  mov    0x8(%ebp),%eax
08497b2f +0x880d:  mov    %eax,(%esp)
08497b32 +0x8810:  call   084984d4 <+0x91b2>
08497b37 +0x8815:  mov    0x8(%ebp),%eax
08497b3a +0x8818:  movl   $0x0,(%eax)
08497b40 +0x881e:  mov    0x8(%ebp),%eax
08497b43 +0x8821:  movl   $0x0,0x4(%eax)
08497b4a +0x8828:  mov    0x8(%ebp),%eax
08497b4d +0x882b:  add    $0x8,%eax
08497b50 +0x882e:  mov    %eax,(%esp)
08497b53 +0x8831:  call   084984e8 <+0x91c6>
08497b58 +0x8836:  mov    0x8(%ebp),%eax
08497b5b +0x8839:  add    $0x18,%eax
08497b5e +0x883c:  mov    %eax,(%esp)
08497b61 +0x883f:  call   084984e8 <+0x91c6>
08497b66 +0x8844:  leave
08497b67 +0x8845:  ret
08497b68 +0x8846:  push   %ebp
08497b69 +0x8847:  mov    %esp,%ebp
08497b6b +0x8849:  sub    $0x18,%esp
08497b6e +0x884c:  mov    0x8(%ebp),%eax
08497b71 +0x884f:  mov    %eax,(%esp)
08497b74 +0x8852:  call   08498514 <+0x91f2>
08497b79 +0x8857:  leave
08497b7a +0x8858:  ret
08497b7b +0x8859:  nop
08497b7c +0x885a:  push   %ebp
08497b7d +0x885b:  mov    %esp,%ebp
08497b7f +0x885d:  push   %esi
08497b80 +0x885e:  push   %ebx
08497b81 +0x885f:  sub    $0x40,%esp
08497b84 +0x8862:  movl   $0x4,(%esp)
08497b8b +0x8869:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08497b90 +0x886e:  mov    %eax,-0x2c(%ebp)
08497b93 +0x8871:  mov    0xc(%ebp),%eax
08497b96 +0x8874:  mov    $0x0,%edx
08497b9b +0x8879:  divl   -0x2c(%ebp)
08497b9e +0x887c:  add    $0x1,%eax
08497ba1 +0x887f:  mov    %eax,-0x14(%ebp)
08497ba4 +0x8882:  mov    -0x14(%ebp),%eax
08497ba7 +0x8885:  add    $0x2,%eax
08497baa +0x8888:  mov    %eax,-0x1c(%ebp)
08497bad +0x888b:  movl   $0x8,-0x18(%ebp)
08497bb4 +0x8892:  lea    -0x1c(%ebp),%eax
08497bb7 +0x8895:  mov    %eax,0x4(%esp)
08497bbb +0x8899:  lea    -0x18(%ebp),%eax
08497bbe +0x889c:  mov    %eax,(%esp)
08497bc1 +0x889f:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08497bc6 +0x88a4:  mov    (%eax),%edx
08497bc8 +0x88a6:  mov    0x8(%ebp),%eax
08497bcb +0x88a9:  mov    %edx,0x4(%eax)
08497bce +0x88ac:  mov    0x8(%ebp),%eax
08497bd1 +0x88af:  mov    0x4(%eax),%eax
08497bd4 +0x88b2:  mov    %eax,0x4(%esp)
08497bd8 +0x88b6:  mov    0x8(%ebp),%eax
08497bdb +0x88b9:  mov    %eax,(%esp)
08497bde +0x88bc:  call   0849851a <+0x91f8>
08497be3 +0x88c1:  mov    0x8(%ebp),%edx
08497be6 +0x88c4:  mov    %eax,(%edx)
08497be8 +0x88c6:  mov    0x8(%ebp),%eax
08497beb +0x88c9:  mov    (%eax),%edx
08497bed +0x88cb:  mov    0x8(%ebp),%eax
08497bf0 +0x88ce:  mov    0x4(%eax),%eax
08497bf3 +0x88d1:  sub    -0x14(%ebp),%eax
08497bf6 +0x88d4:  shr    %eax
08497bf8 +0x88d6:  shl    $0x2,%eax
08497bfb +0x88d9:  lea    (%edx,%eax,1),%eax
08497bfe +0x88dc:  mov    %eax,-0x10(%ebp)
08497c01 +0x88df:  mov    -0x14(%ebp),%eax
08497c04 +0x88e2:  shl    $0x2,%eax
08497c07 +0x88e5:  add    -0x10(%ebp),%eax
08497c0a +0x88e8:  mov    %eax,-0xc(%ebp)
08497c0d +0x88eb:  mov    -0xc(%ebp),%eax
08497c10 +0x88ee:  mov    %eax,0x8(%esp)
08497c14 +0x88f2:  mov    -0x10(%ebp),%eax
08497c17 +0x88f5:  mov    %eax,0x4(%esp)
08497c1b +0x88f9:  mov    0x8(%ebp),%eax
08497c1e +0x88fc:  mov    %eax,(%esp)
08497c21 +0x88ff:  call   08498586 <+0x9264>
08497c26 +0x8904:  jmp    08497c7b <+0x8959>
08497c28 +0x8906:  mov    %eax,(%esp)
08497c2b +0x8909:  call   08725ce0 <__cxa_begin_catch>
08497c30 +0x890e:  mov    0x8(%ebp),%eax
08497c33 +0x8911:  mov    0x4(%eax),%edx
08497c36 +0x8914:  mov    0x8(%ebp),%eax
08497c39 +0x8917:  mov    (%eax),%eax
08497c3b +0x8919:  mov    %edx,0x8(%esp)
08497c3f +0x891d:  mov    %eax,0x4(%esp)
08497c43 +0x8921:  mov    0x8(%ebp),%eax
08497c46 +0x8924:  mov    %eax,(%esp)
08497c49 +0x8927:  call   08497d22 <+0x8a00>
08497c4e +0x892c:  mov    0x8(%ebp),%eax
08497c51 +0x892f:  movl   $0x0,(%eax)
08497c57 +0x8935:  mov    0x8(%ebp),%eax
08497c5a +0x8938:  movl   $0x0,0x4(%eax)
08497c61 +0x893f:  call   08724be0 <__cxa_rethrow>
08497c66 +0x8944:  mov    %edx,%ebx
08497c68 +0x8946:  mov    %eax,%esi
08497c6a +0x8948:  call   08725c30 <__cxa_end_catch>
08497c6f +0x894d:  mov    %esi,%eax
08497c71 +0x894f:  mov    %ebx,%edx
08497c73 +0x8951:  mov    %eax,(%esp)
08497c76 +0x8954:  call   08ae3750 <_Unwind_Resume>
08497c7b +0x8959:  mov    0x8(%ebp),%eax
08497c7e +0x895c:  lea    0x8(%eax),%edx
08497c81 +0x895f:  mov    -0x10(%ebp),%eax
08497c84 +0x8962:  mov    %eax,0x4(%esp)
08497c88 +0x8966:  mov    %edx,(%esp)
08497c8b +0x8969:  call   0849838c <+0x906a>
08497c90 +0x896e:  mov    -0xc(%ebp),%eax
08497c93 +0x8971:  lea    -0x4(%eax),%edx
08497c96 +0x8974:  mov    0x8(%ebp),%eax
08497c99 +0x8977:  add    $0x18,%eax
08497c9c +0x897a:  mov    %edx,0x4(%esp)
08497ca0 +0x897e:  mov    %eax,(%esp)
08497ca3 +0x8981:  call   0849838c <+0x906a>
08497ca8 +0x8986:  mov    0x8(%ebp),%eax
08497cab +0x8989:  mov    0xc(%eax),%edx
08497cae +0x898c:  mov    0x8(%ebp),%eax
08497cb1 +0x898f:  mov    %edx,0x8(%eax)
08497cb4 +0x8992:  mov    0x8(%ebp),%eax
08497cb7 +0x8995:  mov    0x1c(%eax),%ebx
08497cba +0x8998:  movl   $0x4,(%esp)
08497cc1 +0x899f:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08497cc6 +0x89a4:  mov    %eax,-0x2c(%ebp)
08497cc9 +0x89a7:  mov    0xc(%ebp),%eax
08497ccc +0x89aa:  mov    $0x0,%edx
08497cd1 +0x89af:  divl   -0x2c(%ebp)
08497cd4 +0x89b2:  mov    %edx,%ecx
08497cd6 +0x89b4:  mov    %ecx,%eax
08497cd8 +0x89b6:  shl    $0x2,%eax
08497cdb +0x89b9:  lea    (%ebx,%eax,1),%edx
08497cde +0x89bc:  mov    0x8(%ebp),%eax
08497ce1 +0x89bf:  mov    %edx,0x18(%eax)
08497ce4 +0x89c2:  add    $0x40,%esp
08497ce7 +0x89c5:  pop    %ebx
08497ce8 +0x89c6:  pop    %esi
08497ce9 +0x89c7:  pop    %ebp
08497cea +0x89c8:  ret
08497ceb +0x89c9:  nop
08497cec +0x89ca:  push   %ebp
08497ced +0x89cb:  mov    %esp,%ebp
08497cef +0x89cd:  sub    $0x28,%esp
08497cf2 +0x89d0:  mov    0xc(%ebp),%eax
08497cf5 +0x89d3:  mov    %eax,-0xc(%ebp)
08497cf8 +0x89d6:  jmp    08497d12 <+0x89f0>
08497cfa +0x89d8:  mov    -0xc(%ebp),%eax
08497cfd +0x89db:  mov    (%eax),%eax
08497cff +0x89dd:  mov    %eax,0x4(%esp)
08497d03 +0x89e1:  mov    0x8(%ebp),%eax
08497d06 +0x89e4:  mov    %eax,(%esp)
08497d09 +0x89e7:  call   08498362 <+0x9040>
08497d0e +0x89ec:  addl   $0x4,-0xc(%ebp)
08497d12 +0x89f0:  mov    -0xc(%ebp),%eax
08497d15 +0x89f3:  cmp    0x10(%ebp),%eax
08497d18 +0x89f6:  setb   %al
08497d1b +0x89f9:  test   %al,%al
08497d1d +0x89fb:  jne    08497cfa <+0x89d8>
08497d1f +0x89fd:  leave
08497d20 +0x89fe:  ret
08497d21 +0x89ff:  nop
08497d22 +0x8a00:  push   %ebp
08497d23 +0x8a01:  mov    %esp,%ebp
08497d25 +0x8a03:  sub    $0x28,%esp
08497d28 +0x8a06:  lea    -0x9(%ebp),%eax
08497d2b +0x8a09:  mov    0x8(%ebp),%edx
08497d2e +0x8a0c:  mov    %edx,0x4(%esp)
08497d32 +0x8a10:  mov    %eax,(%esp)
08497d35 +0x8a13:  call   084985fc <+0x92da>
08497d3a +0x8a18:  sub    $0x4,%esp
08497d3d +0x8a1b:  lea    -0x9(%ebp),%eax
08497d40 +0x8a1e:  mov    0x10(%ebp),%edx
08497d43 +0x8a21:  mov    %edx,0x8(%esp)
08497d47 +0x8a25:  mov    0xc(%ebp),%edx
08497d4a +0x8a28:  mov    %edx,0x4(%esp)
08497d4e +0x8a2c:  mov    %eax,(%esp)
08497d51 +0x8a2f:  call   08498642 <+0x9320>
08497d56 +0x8a34:  lea    -0x9(%ebp),%eax
08497d59 +0x8a37:  mov    %eax,(%esp)
08497d5c +0x8a3a:  call   0849862e <+0x930c>
08497d61 +0x8a3f:  leave
08497d62 +0x8a40:  ret
08497d63 +0x8a41:  push   %ebp
08497d64 +0x8a42:  mov    %esp,%ebp
08497d66 +0x8a44:  mov    0x8(%ebp),%eax
08497d69 +0x8a47:  pop    %ebp
08497d6a +0x8a48:  ret
08497d6b +0x8a49:  nop
08497d6c +0x8a4a:  push   %ebp
08497d6d +0x8a4b:  mov    %esp,%ebp
08497d6f +0x8a4d:  push   %esi
08497d70 +0x8a4e:  push   %ebx
08497d71 +0x8a4f:  sub    $0x10,%esp
08497d74 +0x8a52:  mov    0xc(%ebp),%eax
08497d77 +0x8a55:  mov    %eax,(%esp)
08497d7a +0x8a58:  call   08497178 <+0x7e56>
08497d7f +0x8a5d:  mov    0x8(%ebp),%edx
08497d82 +0x8a60:  mov    %eax,0x4(%esp)
08497d86 +0x8a64:  mov    %edx,(%esp)
08497d89 +0x8a67:  call   08498656 <+0x9334>
08497d8e +0x8a6c:  movl   $0x0,0x4(%esp)
08497d96 +0x8a74:  mov    0x8(%ebp),%eax
08497d99 +0x8a77:  mov    %eax,(%esp)
08497d9c +0x8a7a:  call   08497b7c <+0x885a>
08497da1 +0x8a7f:  mov    0xc(%ebp),%eax
08497da4 +0x8a82:  mov    (%eax),%eax
08497da6 +0x8a84:  test   %eax,%eax
08497da8 +0x8a86:  je     08497e21 <+0x8aff>
08497daa +0x8a88:  mov    0xc(%ebp),%eax
08497dad +0x8a8b:  lea    0x8(%eax),%edx
08497db0 +0x8a8e:  mov    0x8(%ebp),%eax
08497db3 +0x8a91:  add    $0x8,%eax
08497db6 +0x8a94:  mov    %edx,0x4(%esp)
08497dba +0x8a98:  mov    %eax,(%esp)
08497dbd +0x8a9b:  call   0849869f <+0x937d>
08497dc2 +0x8aa0:  mov    0xc(%ebp),%eax
08497dc5 +0x8aa3:  lea    0x18(%eax),%edx
08497dc8 +0x8aa6:  mov    0x8(%ebp),%eax
08497dcb +0x8aa9:  add    $0x18,%eax
08497dce +0x8aac:  mov    %edx,0x4(%esp)
08497dd2 +0x8ab0:  mov    %eax,(%esp)
08497dd5 +0x8ab3:  call   0849869f <+0x937d>
08497dda +0x8ab8:  mov    0xc(%ebp),%edx
08497ddd +0x8abb:  mov    0x8(%ebp),%eax
08497de0 +0x8abe:  mov    %edx,0x4(%esp)
08497de4 +0x8ac2:  mov    %eax,(%esp)
08497de7 +0x8ac5:  call   08498709 <+0x93e7>
08497dec +0x8aca:  mov    0xc(%ebp),%eax
08497def +0x8acd:  lea    0x4(%eax),%edx
08497df2 +0x8ad0:  mov    0x8(%ebp),%eax
08497df5 +0x8ad3:  add    $0x4,%eax
08497df8 +0x8ad6:  mov    %edx,0x4(%esp)
08497dfc +0x8ada:  mov    %eax,(%esp)
08497dff +0x8add:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
08497e04 +0x8ae2:  jmp    08497e21 <+0x8aff>
08497e06 +0x8ae4:  mov    %edx,%ebx
08497e08 +0x8ae6:  mov    %eax,%esi
08497e0a +0x8ae8:  mov    0x8(%ebp),%eax
08497e0d +0x8aeb:  mov    %eax,(%esp)
08497e10 +0x8aee:  call   08497046 <+0x7d24>
08497e15 +0x8af3:  mov    %esi,%eax
08497e17 +0x8af5:  mov    %ebx,%edx
08497e19 +0x8af7:  mov    %eax,(%esp)
08497e1c +0x8afa:  call   08ae3750 <_Unwind_Resume>
08497e21 +0x8aff:  add    $0x10,%esp
08497e24 +0x8b02:  pop    %ebx
08497e25 +0x8b03:  pop    %esi
08497e26 +0x8b04:  pop    %ebp
08497e27 +0x8b05:  ret
08497e28 +0x8b06:  push   %ebp
08497e29 +0x8b07:  mov    %esp,%ebp
08497e2b +0x8b09:  sub    $0x28,%esp
08497e2e +0x8b0c:  mov    0x8(%ebp),%eax
08497e31 +0x8b0f:  mov    0x18(%eax),%edx
08497e34 +0x8b12:  mov    0x8(%ebp),%eax
08497e37 +0x8b15:  mov    0x20(%eax),%eax
08497e3a +0x8b18:  sub    $0x4,%eax
08497e3d +0x8b1b:  cmp    %eax,%edx
08497e3f +0x8b1d:  je     08497e7e <+0x8b5c>
08497e41 +0x8b1f:  mov    0xc(%ebp),%eax
08497e44 +0x8b22:  mov    %eax,(%esp)
08497e47 +0x8b25:  call   08498745 <+0x9423>
08497e4c +0x8b2a:  mov    (%eax),%eax
08497e4e +0x8b2c:  mov    %eax,-0x10(%ebp)
08497e51 +0x8b2f:  mov    0x8(%ebp),%eax
08497e54 +0x8b32:  mov    0x18(%eax),%edx
08497e57 +0x8b35:  mov    0x8(%ebp),%eax
08497e5a +0x8b38:  lea    -0x10(%ebp),%ecx
08497e5d +0x8b3b:  mov    %ecx,0x8(%esp)
08497e61 +0x8b3f:  mov    %edx,0x4(%esp)
08497e65 +0x8b43:  mov    %eax,(%esp)
08497e68 +0x8b46:  call   0849874e <+0x942c>
08497e6d +0x8b4b:  mov    0x8(%ebp),%eax
08497e70 +0x8b4e:  mov    0x18(%eax),%eax
08497e73 +0x8b51:  lea    0x4(%eax),%edx
08497e76 +0x8b54:  mov    0x8(%ebp),%eax
08497e79 +0x8b57:  mov    %edx,0x18(%eax)
08497e7c +0x8b5a:  jmp    08497ea0 <+0x8b7e>
08497e7e +0x8b5c:  mov    0xc(%ebp),%eax
08497e81 +0x8b5f:  mov    %eax,(%esp)
08497e84 +0x8b62:  call   08498745 <+0x9423>
08497e89 +0x8b67:  mov    (%eax),%eax
08497e8b +0x8b69:  mov    %eax,-0xc(%ebp)
08497e8e +0x8b6c:  lea    -0xc(%ebp),%eax
08497e91 +0x8b6f:  mov    %eax,0x4(%esp)
08497e95 +0x8b73:  mov    0x8(%ebp),%eax
08497e98 +0x8b76:  mov    %eax,(%esp)
08497e9b +0x8b79:  call   08498784 <+0x9462>
08497ea0 +0x8b7e:  leave
08497ea1 +0x8b7f:  ret
08497ea2 +0x8b80:  push   %ebp
08497ea3 +0x8b81:  mov    %esp,%ebp
08497ea5 +0x8b83:  push   %esi
08497ea6 +0x8b84:  push   %ebx
08497ea7 +0x8b85:  sub    $0x10,%esp
08497eaa +0x8b88:  mov    0xc(%ebp),%eax
08497ead +0x8b8b:  lea    0x1(%eax),%ebx
08497eb0 +0x8b8e:  mov    0x8(%ebp),%eax
08497eb3 +0x8b91:  mov    0x4(%eax),%edx
08497eb6 +0x8b94:  mov    0x8(%ebp),%eax
08497eb9 +0x8b97:  mov    0x24(%eax),%eax
08497ebc +0x8b9a:  mov    %eax,%ecx
08497ebe +0x8b9c:  mov    0x8(%ebp),%eax
08497ec1 +0x8b9f:  mov    (%eax),%eax
08497ec3 +0x8ba1:  mov    %ecx,%esi
08497ec5 +0x8ba3:  sub    %eax,%esi
08497ec7 +0x8ba5:  mov    %esi,%eax
08497ec9 +0x8ba7:  sar    $0x2,%eax
08497ecc +0x8baa:  mov    %edx,%ecx
08497ece +0x8bac:  sub    %eax,%ecx
08497ed0 +0x8bae:  mov    %ecx,%eax
08497ed2 +0x8bb0:  cmp    %eax,%ebx
08497ed4 +0x8bb2:  jbe    08497ef0 <+0x8bce>
08497ed6 +0x8bb4:  movl   $0x0,0x8(%esp)
08497ede +0x8bbc:  mov    0xc(%ebp),%eax
08497ee1 +0x8bbf:  mov    %eax,0x4(%esp)
08497ee5 +0x8bc3:  mov    0x8(%ebp),%eax
08497ee8 +0x8bc6:  mov    %eax,(%esp)
08497eeb +0x8bc9:  call   0849880e <+0x94ec>
08497ef0 +0x8bce:  add    $0x10,%esp
08497ef3 +0x8bd1:  pop    %ebx
08497ef4 +0x8bd2:  pop    %esi
08497ef5 +0x8bd3:  pop    %ebp
08497ef6 +0x8bd4:  ret
08497ef7 +0x8bd5:  nop
08497ef8 +0x8bd6:  push   %ebp
08497ef9 +0x8bd7:  mov    %esp,%ebp
08497efb +0x8bd9:  sub    $0x18,%esp
08497efe +0x8bdc:  movl   $0x4,(%esp)
08497f05 +0x8be3:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08497f0a +0x8be8:  mov    0x8(%ebp),%edx
08497f0d +0x8beb:  movl   $0x0,0x8(%esp)
08497f15 +0x8bf3:  mov    %eax,0x4(%esp)
08497f19 +0x8bf7:  mov    %edx,(%esp)
08497f1c +0x8bfa:  call   084989de <+0x96bc>
08497f21 +0x8bff:  leave
08497f22 +0x8c00:  ret
08497f23 +0x8c01:  push   %ebp
08497f24 +0x8c02:  mov    %esp,%ebp
08497f26 +0x8c04:  mov    0x8(%ebp),%eax
08497f29 +0x8c07:  pop    %ebp
08497f2a +0x8c08:  ret
08497f2b +0x8c09:  nop
08497f2c +0x8c0a:  push   %ebp
08497f2d +0x8c0b:  mov    %esp,%ebp
08497f2f +0x8c0d:  push   %ebx
08497f30 +0x8c0e:  sub    $0x4,%esp
08497f33 +0x8c11:  mov    0x8(%ebp),%eax
08497f36 +0x8c14:  mov    0xc(%ebp),%edx
08497f39 +0x8c17:  mov    %edx,0xc(%eax)
08497f3c +0x8c1a:  mov    0xc(%ebp),%eax
08497f3f +0x8c1d:  mov    (%eax),%edx
08497f41 +0x8c1f:  mov    0x8(%ebp),%eax
08497f44 +0x8c22:  mov    %edx,0x4(%eax)
08497f47 +0x8c25:  mov    0x8(%ebp),%eax
08497f4a +0x8c28:  mov    0x4(%eax),%ebx
08497f4d +0x8c2b:  call   08497fa1 <+0x8c7f>
08497f52 +0x8c30:  shl    $0x2,%eax
08497f55 +0x8c33:  lea    (%ebx,%eax,1),%edx
08497f58 +0x8c36:  mov    0x8(%ebp),%eax
08497f5b +0x8c39:  mov    %edx,0x8(%eax)
08497f5e +0x8c3c:  add    $0x4,%esp
08497f61 +0x8c3f:  pop    %ebx
08497f62 +0x8c40:  pop    %ebp
08497f63 +0x8c41:  ret
08497f64 +0x8c42:  push   %ebp
08497f65 +0x8c43:  mov    %esp,%ebp
08497f67 +0x8c45:  sub    $0x18,%esp
08497f6a +0x8c48:  movl   $0x4,(%esp)
08497f71 +0x8c4f:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08497f76 +0x8c54:  mov    0x8(%ebp),%edx
08497f79 +0x8c57:  mov    %eax,0x8(%esp)
08497f7d +0x8c5b:  mov    0xc(%ebp),%eax
08497f80 +0x8c5e:  mov    %eax,0x4(%esp)
08497f84 +0x8c62:  mov    %edx,(%esp)
08497f87 +0x8c65:  call   08498a16 <+0x96f4>
08497f8c +0x8c6a:  leave
08497f8d +0x8c6b:  ret
08497f8e +0x8c6c:  push   %ebp
08497f8f +0x8c6d:  mov    %esp,%ebp
08497f91 +0x8c6f:  sub    $0x18,%esp
08497f94 +0x8c72:  mov    0xc(%ebp),%eax
08497f97 +0x8c75:  mov    %eax,(%esp)
08497f9a +0x8c78:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08497f9f +0x8c7d:  leave
08497fa0 +0x8c7e:  ret
08497fa1 +0x8c7f:  push   %ebp
08497fa2 +0x8c80:  mov    %esp,%ebp
08497fa4 +0x8c82:  sub    $0x18,%esp
08497fa7 +0x8c85:  movl   $0x4,(%esp)
08497fae +0x8c8c:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08497fb3 +0x8c91:  leave
08497fb4 +0x8c92:  ret
08497fb5 +0x8c93:  nop
08497fb6 +0x8c94:  push   %ebp
08497fb7 +0x8c95:  mov    %esp,%ebp
08497fb9 +0x8c97:  sub    $0x18,%esp
08497fbc +0x8c9a:  mov    0x8(%ebp),%eax
08497fbf +0x8c9d:  movl   $0x0,0x8(%esp)
08497fc7 +0x8ca5:  movl   $0x1,0x4(%esp)
08497fcf +0x8cad:  mov    %eax,(%esp)
08497fd2 +0x8cb0:  call   08498a2a <+0x9708>
08497fd7 +0x8cb5:  leave
08497fd8 +0x8cb6:  ret
08497fd9 +0x8cb7:  push   %ebp
08497fda +0x8cb8:  mov    %esp,%ebp
08497fdc +0x8cba:  mov    0x8(%ebp),%eax
08497fdf +0x8cbd:  pop    %ebp
08497fe0 +0x8cbe:  ret
08497fe1 +0x8cbf:  nop
08497fe2 +0x8cc0:  push   %ebp
08497fe3 +0x8cc1:  mov    %esp,%ebp
08497fe5 +0x8cc3:  push   %ebx
08497fe6 +0x8cc4:  sub    $0x14,%esp
08497fe9 +0x8cc7:  mov    0x10(%ebp),%eax
08497fec +0x8cca:  mov    %eax,(%esp)
08497fef +0x8ccd:  call   08497fd9 <+0x8cb7>
08497ff4 +0x8cd2:  mov    %eax,%ebx
08497ff6 +0x8cd4:  mov    0xc(%ebp),%eax
08497ff9 +0x8cd7:  mov    %eax,0x4(%esp)
08497ffd +0x8cdb:  movl   $0x18,(%esp)
08498004 +0x8ce2:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08498009 +0x8ce7:  mov    %eax,%edx
0849800b +0x8ce9:  test   %edx,%edx
0849800d +0x8ceb:  je     0849801b <+0x8cf9>
0849800f +0x8ced:  mov    %ebx,0x4(%esp)
08498013 +0x8cf1:  mov    %eax,(%esp)
08498016 +0x8cf4:  call   08498a68 <+0x9746>
0849801b +0x8cf9:  add    $0x14,%esp
0849801e +0x8cfc:  pop    %ebx
0849801f +0x8cfd:  pop    %ebp
08498020 +0x8cfe:  ret
08498021 +0x8cff:  nop
08498022 +0x8d00:  push   %ebp
08498023 +0x8d01:  mov    %esp,%ebp
08498025 +0x8d03:  sub    $0x18,%esp
08498028 +0x8d06:  mov    0x8(%ebp),%eax
0849802b +0x8d09:  mov    %eax,(%esp)
0849802e +0x8d0c:  call   08498ab0 <+0x978e>
08498033 +0x8d11:  leave
08498034 +0x8d12:  ret
08498035 +0x8d13:  nop
08498036 +0x8d14:  push   %ebp
08498037 +0x8d15:  mov    %esp,%ebp
08498039 +0x8d17:  mov    0x8(%ebp),%eax
0849803c +0x8d1a:  movl   $0x0,(%eax)
08498042 +0x8d20:  mov    0x8(%ebp),%eax
08498045 +0x8d23:  movl   $0x0,0x4(%eax)
0849804c +0x8d2a:  mov    0x8(%ebp),%eax
0849804f +0x8d2d:  movl   $0x0,0x8(%eax)
08498056 +0x8d34:  mov    0x8(%ebp),%eax
08498059 +0x8d37:  movl   $0x0,0xc(%eax)
08498060 +0x8d3e:  pop    %ebp
08498061 +0x8d3f:  ret
08498062 +0x8d40:  push   %ebp
08498063 +0x8d41:  mov    %esp,%ebp
08498065 +0x8d43:  pop    %ebp
08498066 +0x8d44:  ret
08498067 +0x8d45:  nop
08498068 +0x8d46:  push   %ebp
08498069 +0x8d47:  mov    %esp,%ebp
0849806b +0x8d49:  push   %esi
0849806c +0x8d4a:  push   %ebx
0849806d +0x8d4b:  sub    $0x20,%esp
08498070 +0x8d4e:  lea    -0x9(%ebp),%eax
08498073 +0x8d51:  mov    0x8(%ebp),%edx
08498076 +0x8d54:  mov    %edx,0x4(%esp)
0849807a +0x8d58:  mov    %eax,(%esp)
0849807d +0x8d5b:  call   0849814a <+0x8e28>
08498082 +0x8d60:  sub    $0x4,%esp
08498085 +0x8d63:  lea    -0x9(%ebp),%eax
08498088 +0x8d66:  movl   $0x0,0x8(%esp)
08498090 +0x8d6e:  mov    0xc(%ebp),%edx
08498093 +0x8d71:  mov    %edx,0x4(%esp)
08498097 +0x8d75:  mov    %eax,(%esp)
0849809a +0x8d78:  call   08498ab6 <+0x9794>
0849809f +0x8d7d:  mov    %eax,%ebx
084980a1 +0x8d7f:  lea    -0x9(%ebp),%eax
084980a4 +0x8d82:  mov    %eax,(%esp)
084980a7 +0x8d85:  call   0849817c <+0x8e5a>
084980ac +0x8d8a:  mov    %ebx,%eax
084980ae +0x8d8c:  lea    -0x8(%ebp),%esp
084980b1 +0x8d8f:  add    $0x0,%esp
084980b4 +0x8d92:  pop    %ebx
084980b5 +0x8d93:  pop    %esi
084980b6 +0x8d94:  pop    %ebp
084980b7 +0x8d95:  ret
084980b8 +0x8d96:  mov    %edx,%ebx
084980ba +0x8d98:  mov    %eax,%esi
084980bc +0x8d9a:  lea    -0x9(%ebp),%eax
084980bf +0x8d9d:  mov    %eax,(%esp)
084980c2 +0x8da0:  call   0849817c <+0x8e5a>
084980c7 +0x8da5:  mov    %esi,%eax
084980c9 +0x8da7:  mov    %ebx,%edx
084980cb +0x8da9:  mov    %eax,(%esp)
084980ce +0x8dac:  call   08ae3750 <_Unwind_Resume>
084980d3 +0x8db1:  nop
084980d4 +0x8db2:  push   %ebp
084980d5 +0x8db3:  mov    %esp,%ebp
084980d7 +0x8db5:  push   %esi
084980d8 +0x8db6:  push   %ebx
084980d9 +0x8db7:  sub    $0x20,%esp
084980dc +0x8dba:  mov    0xc(%ebp),%eax
084980df +0x8dbd:  mov    %eax,-0xc(%ebp)
084980e2 +0x8dc0:  jmp    084980f8 <+0x8dd6>
084980e4 +0x8dc2:  mov    0x8(%ebp),%eax
084980e7 +0x8dc5:  mov    %eax,(%esp)
084980ea +0x8dc8:  call   08497ef8 <+0x8bd6>
084980ef +0x8dcd:  mov    -0xc(%ebp),%edx
084980f2 +0x8dd0:  mov    %eax,(%edx)
084980f4 +0x8dd2:  addl   $0x4,-0xc(%ebp)
084980f8 +0x8dd6:  mov    -0xc(%ebp),%eax
084980fb +0x8dd9:  cmp    0x10(%ebp),%eax
084980fe +0x8ddc:  setb   %al
08498101 +0x8ddf:  test   %al,%al
08498103 +0x8de1:  jne    084980e4 <+0x8dc2>
08498105 +0x8de3:  jmp    08498142 <+0x8e20>
08498107 +0x8de5:  mov    %eax,(%esp)
0849810a +0x8de8:  call   08725ce0 <__cxa_begin_catch>
0849810f +0x8ded:  mov    -0xc(%ebp),%eax
08498112 +0x8df0:  mov    %eax,0x8(%esp)
08498116 +0x8df4:  mov    0xc(%ebp),%eax
08498119 +0x8df7:  mov    %eax,0x4(%esp)
0849811d +0x8dfb:  mov    0x8(%ebp),%eax
08498120 +0x8dfe:  mov    %eax,(%esp)
08498123 +0x8e01:  call   08497692 <+0x8370>
08498128 +0x8e06:  call   08724be0 <__cxa_rethrow>
0849812d +0x8e0b:  mov    %edx,%ebx
0849812f +0x8e0d:  mov    %eax,%esi
08498131 +0x8e0f:  call   08725c30 <__cxa_end_catch>
08498136 +0x8e14:  mov    %esi,%eax
08498138 +0x8e16:  mov    %ebx,%edx
0849813a +0x8e18:  mov    %eax,(%esp)
0849813d +0x8e1b:  call   08ae3750 <_Unwind_Resume>
08498142 +0x8e20:  add    $0x20,%esp
08498145 +0x8e23:  pop    %ebx
08498146 +0x8e24:  pop    %esi
08498147 +0x8e25:  pop    %ebp
08498148 +0x8e26:  ret
08498149 +0x8e27:  nop
0849814a +0x8e28:  push   %ebp
0849814b +0x8e29:  mov    %esp,%ebp
0849814d +0x8e2b:  push   %esi
0849814e +0x8e2c:  push   %ebx
0849814f +0x8e2d:  sub    $0x10,%esp
08498152 +0x8e30:  mov    0x8(%ebp),%ebx
08498155 +0x8e33:  mov    %ebx,%esi
08498157 +0x8e35:  mov    0xc(%ebp),%eax
0849815a +0x8e38:  mov    %eax,(%esp)
0849815d +0x8e3b:  call   08498aee <+0x97cc>
08498162 +0x8e40:  mov    %eax,0x4(%esp)
08498166 +0x8e44:  mov    %esi,(%esp)
08498169 +0x8e47:  call   08498af6 <+0x97d4>
0849816e +0x8e4c:  mov    %ebx,%eax
08498170 +0x8e4e:  mov    %ebx,%eax
08498172 +0x8e50:  add    $0x10,%esp
08498175 +0x8e53:  pop    %ebx
08498176 +0x8e54:  pop    %esi
08498177 +0x8e55:  pop    %ebp
08498178 +0x8e56:  ret    $0x4
0849817b +0x8e59:  nop
0849817c +0x8e5a:  push   %ebp
0849817d +0x8e5b:  mov    %esp,%ebp
0849817f +0x8e5d:  sub    $0x18,%esp
08498182 +0x8e60:  mov    0x8(%ebp),%eax
08498185 +0x8e63:  mov    %eax,(%esp)
08498188 +0x8e66:  call   08498b0a <+0x97e8>
0849818d +0x8e6b:  leave
0849818e +0x8e6c:  ret
0849818f +0x8e6d:  nop
08498190 +0x8e6e:  push   %ebp
08498191 +0x8e6f:  mov    %esp,%ebp
08498193 +0x8e71:  sub    $0x18,%esp
08498196 +0x8e74:  mov    0xc(%ebp),%eax
08498199 +0x8e77:  mov    %eax,(%esp)
0849819c +0x8e7a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084981a1 +0x8e7f:  leave
084981a2 +0x8e80:  ret
084981a3 +0x8e81:  nop
084981a4 +0x8e82:  push   %ebp
084981a5 +0x8e83:  mov    %esp,%ebp
084981a7 +0x8e85:  sub    $0x18,%esp
084981aa +0x8e88:  mov    0x8(%ebp),%eax
084981ad +0x8e8b:  mov    0xc(%ebp),%edx
084981b0 +0x8e8e:  mov    %edx,0x4(%esp)
084981b4 +0x8e92:  mov    %eax,(%esp)
084981b7 +0x8e95:  call   08498b10 <+0x97ee>
084981bc +0x8e9a:  mov    0x8(%ebp),%eax
084981bf +0x8e9d:  movl   $0x0,(%eax)
084981c5 +0x8ea3:  mov    0x8(%ebp),%eax
084981c8 +0x8ea6:  movl   $0x0,0x4(%eax)
084981cf +0x8ead:  mov    0x8(%ebp),%eax
084981d2 +0x8eb0:  add    $0x8,%eax
084981d5 +0x8eb3:  mov    %eax,(%esp)
084981d8 +0x8eb6:  call   08498036 <+0x8d14>
084981dd +0x8ebb:  mov    0x8(%ebp),%eax
084981e0 +0x8ebe:  add    $0x18,%eax
084981e3 +0x8ec1:  mov    %eax,(%esp)
084981e6 +0x8ec4:  call   08498036 <+0x8d14>
084981eb +0x8ec9:  leave
084981ec +0x8eca:  ret
084981ed +0x8ecb:  push   %ebp
084981ee +0x8ecc:  mov    %esp,%ebp
084981f0 +0x8ece:  sub    $0x28,%esp
084981f3 +0x8ed1:  mov    0x8(%ebp),%eax
084981f6 +0x8ed4:  mov    %eax,(%esp)
084981f9 +0x8ed7:  call   08498b2a <+0x9808>
084981fe +0x8edc:  mov    %eax,0x4(%esp)
08498202 +0x8ee0:  lea    -0x18(%ebp),%eax
08498205 +0x8ee3:  mov    %eax,(%esp)
08498208 +0x8ee6:  call   08496b7e <+0x785c>
0849820d +0x8eeb:  mov    0xc(%ebp),%eax
08498210 +0x8eee:  mov    %eax,(%esp)
08498213 +0x8ef1:  call   08498b2a <+0x9808>
08498218 +0x8ef6:  mov    0x8(%ebp),%edx
0849821b +0x8ef9:  mov    (%eax),%ecx
0849821d +0x8efb:  mov    %ecx,(%edx)
0849821f +0x8efd:  mov    0x4(%eax),%ecx
08498222 +0x8f00:  mov    %ecx,0x4(%edx)
08498225 +0x8f03:  mov    0x8(%eax),%ecx
08498228 +0x8f06:  mov    %ecx,0x8(%edx)
0849822b +0x8f09:  mov    0xc(%eax),%eax
0849822e +0x8f0c:  mov    %eax,0xc(%edx)
08498231 +0x8f0f:  lea    -0x18(%ebp),%eax
08498234 +0x8f12:  mov    %eax,(%esp)
08498237 +0x8f15:  call   08498b2a <+0x9808>
0849823c +0x8f1a:  mov    0xc(%ebp),%edx
0849823f +0x8f1d:  mov    (%eax),%ecx
08498241 +0x8f1f:  mov    %ecx,(%edx)
08498243 +0x8f21:  mov    0x4(%eax),%ecx
08498246 +0x8f24:  mov    %ecx,0x4(%edx)
08498249 +0x8f27:  mov    0x8(%eax),%ecx
0849824c +0x8f2a:  mov    %ecx,0x8(%edx)
0849824f +0x8f2d:  mov    0xc(%eax),%eax
08498252 +0x8f30:  mov    %eax,0xc(%edx)
08498255 +0x8f33:  leave
08498256 +0x8f34:  ret
08498257 +0x8f35:  push   %ebp
08498258 +0x8f36:  mov    %esp,%ebp
0849825a +0x8f38:  sub    $0x28,%esp
0849825d +0x8f3b:  mov    0x8(%ebp),%eax
08498260 +0x8f3e:  mov    %eax,(%esp)
08498263 +0x8f41:  call   08498b32 <+0x9810>
08498268 +0x8f46:  mov    (%eax),%eax
0849826a +0x8f48:  mov    %eax,-0xc(%ebp)
0849826d +0x8f4b:  mov    0xc(%ebp),%eax
08498270 +0x8f4e:  mov    %eax,(%esp)
08498273 +0x8f51:  call   08498b32 <+0x9810>
08498278 +0x8f56:  mov    (%eax),%edx
0849827a +0x8f58:  mov    0x8(%ebp),%eax
0849827d +0x8f5b:  mov    %edx,(%eax)
0849827f +0x8f5d:  lea    -0xc(%ebp),%eax
08498282 +0x8f60:  mov    %eax,(%esp)
08498285 +0x8f63:  call   08498b32 <+0x9810>
0849828a +0x8f68:  mov    (%eax),%edx
0849828c +0x8f6a:  mov    0xc(%ebp),%eax
0849828f +0x8f6d:  mov    %edx,(%eax)
08498291 +0x8f6f:  leave
08498292 +0x8f70:  ret
08498293 +0x8f71:  push   %ebp
08498294 +0x8f72:  mov    %esp,%ebp
08498296 +0x8f74:  mov    0x8(%ebp),%eax
08498299 +0x8f77:  pop    %ebp
0849829a +0x8f78:  ret
0849829b +0x8f79:  nop
0849829c +0x8f7a:  push   %ebp
0849829d +0x8f7b:  mov    %esp,%ebp
0849829f +0x8f7d:  push   %ebx
084982a0 +0x8f7e:  sub    $0x14,%esp
084982a3 +0x8f81:  mov    0x10(%ebp),%eax
084982a6 +0x8f84:  mov    %eax,(%esp)
084982a9 +0x8f87:  call   08498293 <+0x8f71>
084982ae +0x8f8c:  mov    (%eax),%ebx
084982b0 +0x8f8e:  mov    0xc(%ebp),%eax
084982b3 +0x8f91:  mov    %eax,0x4(%esp)
084982b7 +0x8f95:  movl   $0x4,(%esp)
084982be +0x8f9c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084982c3 +0x8fa1:  mov    %eax,%edx
084982c5 +0x8fa3:  test   %edx,%edx
084982c7 +0x8fa5:  je     084982cb <+0x8fa9>
084982c9 +0x8fa7:  mov    %ebx,(%eax)
084982cb +0x8fa9:  add    $0x14,%esp
084982ce +0x8fac:  pop    %ebx
084982cf +0x8fad:  pop    %ebp
084982d0 +0x8fae:  ret
084982d1 +0x8faf:  nop
084982d2 +0x8fb0:  push   %ebp
084982d3 +0x8fb1:  mov    %esp,%ebp
084982d5 +0x8fb3:  push   %ebx
084982d6 +0x8fb4:  sub    $0x24,%esp
084982d9 +0x8fb7:  movl   $0x1,0x4(%esp)
084982e1 +0x8fbf:  mov    0x8(%ebp),%eax
084982e4 +0x8fc2:  mov    %eax,(%esp)
084982e7 +0x8fc5:  call   08497ea2 <+0x8b80>
084982ec +0x8fca:  mov    0x8(%ebp),%eax
084982ef +0x8fcd:  mov    0x24(%eax),%eax
084982f2 +0x8fd0:  lea    0x4(%eax),%ebx
084982f5 +0x8fd3:  mov    0x8(%ebp),%eax
084982f8 +0x8fd6:  mov    %eax,(%esp)
084982fb +0x8fd9:  call   08497ef8 <+0x8bd6>
08498300 +0x8fde:  mov    %eax,(%ebx)
08498302 +0x8fe0:  mov    0xc(%ebp),%eax
08498305 +0x8fe3:  mov    %eax,(%esp)
08498308 +0x8fe6:  call   08498293 <+0x8f71>
0849830d +0x8feb:  mov    (%eax),%eax
0849830f +0x8fed:  mov    %eax,-0xc(%ebp)
08498312 +0x8ff0:  mov    0x8(%ebp),%eax
08498315 +0x8ff3:  mov    0x18(%eax),%edx
08498318 +0x8ff6:  mov    0x8(%ebp),%eax
0849831b +0x8ff9:  lea    -0xc(%ebp),%ecx
0849831e +0x8ffc:  mov    %ecx,0x8(%esp)
08498322 +0x9000:  mov    %edx,0x4(%esp)
08498326 +0x9004:  mov    %eax,(%esp)
08498329 +0x9007:  call   0849829c <+0x8f7a>
0849832e +0x900c:  mov    0x8(%ebp),%eax
08498331 +0x900f:  mov    0x24(%eax),%eax
08498334 +0x9012:  lea    0x4(%eax),%edx
08498337 +0x9015:  mov    0x8(%ebp),%eax
0849833a +0x9018:  add    $0x18,%eax
0849833d +0x901b:  mov    %edx,0x4(%esp)
08498341 +0x901f:  mov    %eax,(%esp)
08498344 +0x9022:  call   08497f2c <+0x8c0a>
08498349 +0x9027:  mov    0x8(%ebp),%eax
0849834c +0x902a:  mov    0x1c(%eax),%edx
0849834f +0x902d:  mov    0x8(%ebp),%eax
08498352 +0x9030:  mov    %edx,0x18(%eax)
08498355 +0x9033:  add    $0x24,%esp
08498358 +0x9036:  pop    %ebx
08498359 +0x9037:  pop    %ebp
0849835a +0x9038:  ret
0849835b +0x9039:  nop
0849835c +0x903a:  push   %ebp
0849835d +0x903b:  mov    %esp,%ebp
0849835f +0x903d:  pop    %ebp
08498360 +0x903e:  ret
08498361 +0x903f:  nop
08498362 +0x9040:  push   %ebp
08498363 +0x9041:  mov    %esp,%ebp
08498365 +0x9043:  sub    $0x18,%esp
08498368 +0x9046:  movl   $0x4,(%esp)
0849836f +0x904d:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08498374 +0x9052:  mov    0x8(%ebp),%edx
08498377 +0x9055:  mov    %eax,0x8(%esp)
0849837b +0x9059:  mov    0xc(%ebp),%eax
0849837e +0x905c:  mov    %eax,0x4(%esp)
08498382 +0x9060:  mov    %edx,(%esp)
08498385 +0x9063:  call   08498b3a <+0x9818>
0849838a +0x9068:  leave
0849838b +0x9069:  ret
0849838c +0x906a:  push   %ebp
0849838d +0x906b:  mov    %esp,%ebp
0849838f +0x906d:  push   %ebx
08498390 +0x906e:  sub    $0x4,%esp
08498393 +0x9071:  mov    0x8(%ebp),%eax
08498396 +0x9074:  mov    0xc(%ebp),%edx
08498399 +0x9077:  mov    %edx,0xc(%eax)
0849839c +0x907a:  mov    0xc(%ebp),%eax
0849839f +0x907d:  mov    (%eax),%edx
084983a1 +0x907f:  mov    0x8(%ebp),%eax
084983a4 +0x9082:  mov    %edx,0x4(%eax)
084983a7 +0x9085:  mov    0x8(%ebp),%eax
084983aa +0x9088:  mov    0x4(%eax),%ebx
084983ad +0x908b:  call   08498b4d <+0x982b>
084983b2 +0x9090:  shl    $0x2,%eax
084983b5 +0x9093:  lea    (%ebx,%eax,1),%edx
084983b8 +0x9096:  mov    0x8(%ebp),%eax
084983bb +0x9099:  mov    %edx,0x8(%eax)
084983be +0x909c:  add    $0x4,%esp
084983c1 +0x909f:  pop    %ebx
084983c2 +0x90a0:  pop    %ebp
084983c3 +0x90a1:  ret
084983c4 +0x90a2:  push   %ebp
084983c5 +0x90a3:  mov    %esp,%ebp
084983c7 +0x90a5:  push   %esi
084983c8 +0x90a6:  push   %ebx
084983c9 +0x90a7:  sub    $0x10,%esp
084983cc +0x90aa:  mov    0xc(%ebp),%eax
084983cf +0x90ad:  lea    0x1(%eax),%ebx
084983d2 +0x90b0:  mov    0x8(%ebp),%eax
084983d5 +0x90b3:  mov    0x4(%eax),%edx
084983d8 +0x90b6:  mov    0x8(%ebp),%eax
084983db +0x90b9:  mov    0x24(%eax),%eax
084983de +0x90bc:  mov    %eax,%ecx
084983e0 +0x90be:  mov    0x8(%ebp),%eax
084983e3 +0x90c1:  mov    (%eax),%eax
084983e5 +0x90c3:  mov    %ecx,%esi
084983e7 +0x90c5:  sub    %eax,%esi
084983e9 +0x90c7:  mov    %esi,%eax
084983eb +0x90c9:  sar    $0x2,%eax
084983ee +0x90cc:  mov    %edx,%ecx
084983f0 +0x90ce:  sub    %eax,%ecx
084983f2 +0x90d0:  mov    %ecx,%eax
084983f4 +0x90d2:  cmp    %eax,%ebx
084983f6 +0x90d4:  jbe    08498412 <+0x90f0>
084983f8 +0x90d6:  movl   $0x0,0x8(%esp)
08498400 +0x90de:  mov    0xc(%ebp),%eax
08498403 +0x90e1:  mov    %eax,0x4(%esp)
08498407 +0x90e5:  mov    0x8(%ebp),%eax
0849840a +0x90e8:  mov    %eax,(%esp)
0849840d +0x90eb:  call   08498b62 <+0x9840>
08498412 +0x90f0:  add    $0x10,%esp
08498415 +0x90f3:  pop    %ebx
08498416 +0x90f4:  pop    %esi
08498417 +0x90f5:  pop    %ebp
08498418 +0x90f6:  ret
08498419 +0x90f7:  nop
0849841a +0x90f8:  push   %ebp
0849841b +0x90f9:  mov    %esp,%ebp
0849841d +0x90fb:  sub    $0x18,%esp
08498420 +0x90fe:  movl   $0x4,(%esp)
08498427 +0x9105:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
0849842c +0x910a:  mov    0x8(%ebp),%edx
0849842f +0x910d:  movl   $0x0,0x8(%esp)
08498437 +0x9115:  mov    %eax,0x4(%esp)
0849843b +0x9119:  mov    %edx,(%esp)
0849843e +0x911c:  call   08498d32 <+0x9a10>
08498443 +0x9121:  leave
08498444 +0x9122:  ret
08498445 +0x9123:  push   %ebp
08498446 +0x9124:  mov    %esp,%ebp
08498448 +0x9126:  mov    0x8(%ebp),%eax
0849844b +0x9129:  pop    %ebp
0849844c +0x912a:  ret
0849844d +0x912b:  nop
0849844e +0x912c:  push   %ebp
0849844f +0x912d:  mov    %esp,%ebp
08498451 +0x912f:  sub    $0x18,%esp
08498454 +0x9132:  mov    0x8(%ebp),%eax
08498457 +0x9135:  movl   $0x0,0x8(%esp)
0849845f +0x913d:  movl   $0x1,0x4(%esp)
08498467 +0x9145:  mov    %eax,(%esp)
0849846a +0x9148:  call   08498d6a <+0x9a48>
0849846f +0x914d:  leave
08498470 +0x914e:  ret
08498471 +0x914f:  push   %ebp
08498472 +0x9150:  mov    %esp,%ebp
08498474 +0x9152:  mov    0x8(%ebp),%eax
08498477 +0x9155:  pop    %ebp
08498478 +0x9156:  ret
08498479 +0x9157:  nop
0849847a +0x9158:  push   %ebp
0849847b +0x9159:  mov    %esp,%ebp
0849847d +0x915b:  push   %ebx
0849847e +0x915c:  sub    $0x14,%esp
08498481 +0x915f:  mov    0x10(%ebp),%eax
08498484 +0x9162:  mov    %eax,(%esp)
08498487 +0x9165:  call   08498471 <+0x914f>
0849848c +0x916a:  mov    %eax,%ebx
0849848e +0x916c:  mov    0xc(%ebp),%eax
08498491 +0x916f:  mov    %eax,0x4(%esp)
08498495 +0x9173:  movl   $0x24,(%esp)
0849849c +0x917a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084984a1 +0x917f:  mov    %eax,%edx
084984a3 +0x9181:  test   %edx,%edx
084984a5 +0x9183:  je     084984b3 <+0x9191>
084984a7 +0x9185:  mov    %ebx,0x4(%esp)
084984ab +0x9189:  mov    %eax,(%esp)
084984ae +0x918c:  call   08498daa <+0x9a88>
084984b3 +0x9191:  add    $0x14,%esp
084984b6 +0x9194:  pop    %ebx
084984b7 +0x9195:  pop    %ebp
084984b8 +0x9196:  ret
084984b9 +0x9197:  nop
084984ba +0x9198:  push   %ebp
084984bb +0x9199:  mov    %esp,%ebp
084984bd +0x919b:  sub    $0x18,%esp
084984c0 +0x919e:  mov    0xc(%ebp),%eax
084984c3 +0x91a1:  mov    %eax,(%esp)
084984c6 +0x91a4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084984cb +0x91a9:  leave
084984cc +0x91aa:  ret
084984cd +0x91ab:  nop
084984ce +0x91ac:  push   %ebp
084984cf +0x91ad:  mov    %esp,%ebp
084984d1 +0x91af:  pop    %ebp
084984d2 +0x91b0:  ret
084984d3 +0x91b1:  nop
084984d4 +0x91b2:  push   %ebp
084984d5 +0x91b3:  mov    %esp,%ebp
084984d7 +0x91b5:  sub    $0x18,%esp
084984da +0x91b8:  mov    0x8(%ebp),%eax
084984dd +0x91bb:  mov    %eax,(%esp)
084984e0 +0x91be:  call   08498e04 <+0x9ae2>
084984e5 +0x91c3:  leave
084984e6 +0x91c4:  ret
084984e7 +0x91c5:  nop
084984e8 +0x91c6:  push   %ebp
084984e9 +0x91c7:  mov    %esp,%ebp
084984eb +0x91c9:  mov    0x8(%ebp),%eax
084984ee +0x91cc:  movl   $0x0,(%eax)
084984f4 +0x91d2:  mov    0x8(%ebp),%eax
084984f7 +0x91d5:  movl   $0x0,0x4(%eax)
084984fe +0x91dc:  mov    0x8(%ebp),%eax
08498501 +0x91df:  movl   $0x0,0x8(%eax)
08498508 +0x91e6:  mov    0x8(%ebp),%eax
0849850b +0x91e9:  movl   $0x0,0xc(%eax)
08498512 +0x91f0:  pop    %ebp
08498513 +0x91f1:  ret
08498514 +0x91f2:  push   %ebp
08498515 +0x91f3:  mov    %esp,%ebp
08498517 +0x91f5:  pop    %ebp
08498518 +0x91f6:  ret
08498519 +0x91f7:  nop
0849851a +0x91f8:  push   %ebp
0849851b +0x91f9:  mov    %esp,%ebp
0849851d +0x91fb:  push   %esi
0849851e +0x91fc:  push   %ebx
0849851f +0x91fd:  sub    $0x20,%esp
08498522 +0x9200:  lea    -0x9(%ebp),%eax
08498525 +0x9203:  mov    0x8(%ebp),%edx
08498528 +0x9206:  mov    %edx,0x4(%esp)
0849852c +0x920a:  mov    %eax,(%esp)
0849852f +0x920d:  call   084985fc <+0x92da>
08498534 +0x9212:  sub    $0x4,%esp
08498537 +0x9215:  lea    -0x9(%ebp),%eax
0849853a +0x9218:  movl   $0x0,0x8(%esp)
08498542 +0x9220:  mov    0xc(%ebp),%edx
08498545 +0x9223:  mov    %edx,0x4(%esp)
08498549 +0x9227:  mov    %eax,(%esp)
0849854c +0x922a:  call   08498e0a <+0x9ae8>
08498551 +0x922f:  mov    %eax,%ebx
08498553 +0x9231:  lea    -0x9(%ebp),%eax
08498556 +0x9234:  mov    %eax,(%esp)
08498559 +0x9237:  call   0849862e <+0x930c>
0849855e +0x923c:  mov    %ebx,%eax
08498560 +0x923e:  lea    -0x8(%ebp),%esp
08498563 +0x9241:  add    $0x0,%esp
08498566 +0x9244:  pop    %ebx
08498567 +0x9245:  pop    %esi
08498568 +0x9246:  pop    %ebp
08498569 +0x9247:  ret
0849856a +0x9248:  mov    %edx,%ebx
0849856c +0x924a:  mov    %eax,%esi
0849856e +0x924c:  lea    -0x9(%ebp),%eax
08498571 +0x924f:  mov    %eax,(%esp)
08498574 +0x9252:  call   0849862e <+0x930c>
08498579 +0x9257:  mov    %esi,%eax
0849857b +0x9259:  mov    %ebx,%edx
0849857d +0x925b:  mov    %eax,(%esp)
08498580 +0x925e:  call   08ae3750 <_Unwind_Resume>
08498585 +0x9263:  nop
08498586 +0x9264:  push   %ebp
08498587 +0x9265:  mov    %esp,%ebp
08498589 +0x9267:  push   %esi
0849858a +0x9268:  push   %ebx
0849858b +0x9269:  sub    $0x20,%esp
0849858e +0x926c:  mov    0xc(%ebp),%eax
08498591 +0x926f:  mov    %eax,-0xc(%ebp)
08498594 +0x9272:  jmp    084985aa <+0x9288>
08498596 +0x9274:  mov    0x8(%ebp),%eax
08498599 +0x9277:  mov    %eax,(%esp)
0849859c +0x927a:  call   0849841a <+0x90f8>
084985a1 +0x927f:  mov    -0xc(%ebp),%edx
084985a4 +0x9282:  mov    %eax,(%edx)
084985a6 +0x9284:  addl   $0x4,-0xc(%ebp)
084985aa +0x9288:  mov    -0xc(%ebp),%eax
084985ad +0x928b:  cmp    0x10(%ebp),%eax
084985b0 +0x928e:  setb   %al
084985b3 +0x9291:  test   %al,%al
084985b5 +0x9293:  jne    08498596 <+0x9274>
084985b7 +0x9295:  jmp    084985f4 <+0x92d2>
084985b9 +0x9297:  mov    %eax,(%esp)
084985bc +0x929a:  call   08725ce0 <__cxa_begin_catch>
084985c1 +0x929f:  mov    -0xc(%ebp),%eax
084985c4 +0x92a2:  mov    %eax,0x8(%esp)
084985c8 +0x92a6:  mov    0xc(%ebp),%eax
084985cb +0x92a9:  mov    %eax,0x4(%esp)
084985cf +0x92ad:  mov    0x8(%ebp),%eax
084985d2 +0x92b0:  mov    %eax,(%esp)
084985d5 +0x92b3:  call   08497cec <+0x89ca>
084985da +0x92b8:  call   08724be0 <__cxa_rethrow>
084985df +0x92bd:  mov    %edx,%ebx
084985e1 +0x92bf:  mov    %eax,%esi
084985e3 +0x92c1:  call   08725c30 <__cxa_end_catch>
084985e8 +0x92c6:  mov    %esi,%eax
084985ea +0x92c8:  mov    %ebx,%edx
084985ec +0x92ca:  mov    %eax,(%esp)
084985ef +0x92cd:  call   08ae3750 <_Unwind_Resume>
084985f4 +0x92d2:  add    $0x20,%esp
084985f7 +0x92d5:  pop    %ebx
084985f8 +0x92d6:  pop    %esi
084985f9 +0x92d7:  pop    %ebp
084985fa +0x92d8:  ret
084985fb +0x92d9:  nop
084985fc +0x92da:  push   %ebp
084985fd +0x92db:  mov    %esp,%ebp
084985ff +0x92dd:  push   %esi
08498600 +0x92de:  push   %ebx
08498601 +0x92df:  sub    $0x10,%esp
08498604 +0x92e2:  mov    0x8(%ebp),%ebx
08498607 +0x92e5:  mov    %ebx,%esi
08498609 +0x92e7:  mov    0xc(%ebp),%eax
0849860c +0x92ea:  mov    %eax,(%esp)
0849860f +0x92ed:  call   08498e42 <+0x9b20>
08498614 +0x92f2:  mov    %eax,0x4(%esp)
08498618 +0x92f6:  mov    %esi,(%esp)
0849861b +0x92f9:  call   08498e4a <+0x9b28>
08498620 +0x92fe:  mov    %ebx,%eax
08498622 +0x9300:  mov    %ebx,%eax
08498624 +0x9302:  add    $0x10,%esp
08498627 +0x9305:  pop    %ebx
08498628 +0x9306:  pop    %esi
08498629 +0x9307:  pop    %ebp
0849862a +0x9308:  ret    $0x4
0849862d +0x930b:  nop
0849862e +0x930c:  push   %ebp
0849862f +0x930d:  mov    %esp,%ebp
08498631 +0x930f:  sub    $0x18,%esp
08498634 +0x9312:  mov    0x8(%ebp),%eax
08498637 +0x9315:  mov    %eax,(%esp)
0849863a +0x9318:  call   08498e5e <+0x9b3c>
0849863f +0x931d:  leave
08498640 +0x931e:  ret
08498641 +0x931f:  nop
08498642 +0x9320:  push   %ebp
08498643 +0x9321:  mov    %esp,%ebp
08498645 +0x9323:  sub    $0x18,%esp
08498648 +0x9326:  mov    0xc(%ebp),%eax
0849864b +0x9329:  mov    %eax,(%esp)
0849864e +0x932c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08498653 +0x9331:  leave
08498654 +0x9332:  ret
08498655 +0x9333:  nop
08498656 +0x9334:  push   %ebp
08498657 +0x9335:  mov    %esp,%ebp
08498659 +0x9337:  sub    $0x18,%esp
0849865c +0x933a:  mov    0x8(%ebp),%eax
0849865f +0x933d:  mov    0xc(%ebp),%edx
08498662 +0x9340:  mov    %edx,0x4(%esp)
08498666 +0x9344:  mov    %eax,(%esp)
08498669 +0x9347:  call   08498e64 <+0x9b42>
0849866e +0x934c:  mov    0x8(%ebp),%eax
08498671 +0x934f:  movl   $0x0,(%eax)
08498677 +0x9355:  mov    0x8(%ebp),%eax
0849867a +0x9358:  movl   $0x0,0x4(%eax)
08498681 +0x935f:  mov    0x8(%ebp),%eax
08498684 +0x9362:  add    $0x8,%eax
08498687 +0x9365:  mov    %eax,(%esp)
0849868a +0x9368:  call   084984e8 <+0x91c6>
0849868f +0x936d:  mov    0x8(%ebp),%eax
08498692 +0x9370:  add    $0x18,%eax
08498695 +0x9373:  mov    %eax,(%esp)
08498698 +0x9376:  call   084984e8 <+0x91c6>
0849869d +0x937b:  leave
0849869e +0x937c:  ret
0849869f +0x937d:  push   %ebp
084986a0 +0x937e:  mov    %esp,%ebp
084986a2 +0x9380:  sub    $0x28,%esp
084986a5 +0x9383:  mov    0x8(%ebp),%eax
084986a8 +0x9386:  mov    %eax,(%esp)
084986ab +0x9389:  call   08498e7e <+0x9b5c>
084986b0 +0x938e:  mov    %eax,0x4(%esp)
084986b4 +0x9392:  lea    -0x18(%ebp),%eax
084986b7 +0x9395:  mov    %eax,(%esp)
084986ba +0x9398:  call   08497180 <+0x7e5e>
084986bf +0x939d:  mov    0xc(%ebp),%eax
084986c2 +0x93a0:  mov    %eax,(%esp)
084986c5 +0x93a3:  call   08498e7e <+0x9b5c>
084986ca +0x93a8:  mov    0x8(%ebp),%edx
084986cd +0x93ab:  mov    (%eax),%ecx
084986cf +0x93ad:  mov    %ecx,(%edx)
084986d1 +0x93af:  mov    0x4(%eax),%ecx
084986d4 +0x93b2:  mov    %ecx,0x4(%edx)
084986d7 +0x93b5:  mov    0x8(%eax),%ecx
084986da +0x93b8:  mov    %ecx,0x8(%edx)
084986dd +0x93bb:  mov    0xc(%eax),%eax
084986e0 +0x93be:  mov    %eax,0xc(%edx)
084986e3 +0x93c1:  lea    -0x18(%ebp),%eax
084986e6 +0x93c4:  mov    %eax,(%esp)
084986e9 +0x93c7:  call   08498e7e <+0x9b5c>
084986ee +0x93cc:  mov    0xc(%ebp),%edx
084986f1 +0x93cf:  mov    (%eax),%ecx
084986f3 +0x93d1:  mov    %ecx,(%edx)
084986f5 +0x93d3:  mov    0x4(%eax),%ecx
084986f8 +0x93d6:  mov    %ecx,0x4(%edx)
084986fb +0x93d9:  mov    0x8(%eax),%ecx
084986fe +0x93dc:  mov    %ecx,0x8(%edx)
08498701 +0x93df:  mov    0xc(%eax),%eax
08498704 +0x93e2:  mov    %eax,0xc(%edx)
08498707 +0x93e5:  leave
08498708 +0x93e6:  ret
08498709 +0x93e7:  push   %ebp
0849870a +0x93e8:  mov    %esp,%ebp
0849870c +0x93ea:  sub    $0x28,%esp
0849870f +0x93ed:  mov    0x8(%ebp),%eax
08498712 +0x93f0:  mov    %eax,(%esp)
08498715 +0x93f3:  call   08498e86 <+0x9b64>
0849871a +0x93f8:  mov    (%eax),%eax
0849871c +0x93fa:  mov    %eax,-0xc(%ebp)
0849871f +0x93fd:  mov    0xc(%ebp),%eax
08498722 +0x9400:  mov    %eax,(%esp)
08498725 +0x9403:  call   08498e86 <+0x9b64>
0849872a +0x9408:  mov    (%eax),%edx
0849872c +0x940a:  mov    0x8(%ebp),%eax
0849872f +0x940d:  mov    %edx,(%eax)
08498731 +0x940f:  lea    -0xc(%ebp),%eax
08498734 +0x9412:  mov    %eax,(%esp)
08498737 +0x9415:  call   08498e86 <+0x9b64>
0849873c +0x941a:  mov    (%eax),%edx
0849873e +0x941c:  mov    0xc(%ebp),%eax
08498741 +0x941f:  mov    %edx,(%eax)
08498743 +0x9421:  leave
08498744 +0x9422:  ret
08498745 +0x9423:  push   %ebp
08498746 +0x9424:  mov    %esp,%ebp
08498748 +0x9426:  mov    0x8(%ebp),%eax
0849874b +0x9429:  pop    %ebp
0849874c +0x942a:  ret
0849874d +0x942b:  nop
0849874e +0x942c:  push   %ebp
0849874f +0x942d:  mov    %esp,%ebp
08498751 +0x942f:  push   %ebx
08498752 +0x9430:  sub    $0x14,%esp
08498755 +0x9433:  mov    0x10(%ebp),%eax
08498758 +0x9436:  mov    %eax,(%esp)
0849875b +0x9439:  call   08498745 <+0x9423>
08498760 +0x943e:  mov    (%eax),%ebx
08498762 +0x9440:  mov    0xc(%ebp),%eax
08498765 +0x9443:  mov    %eax,0x4(%esp)
08498769 +0x9447:  movl   $0x4,(%esp)
08498770 +0x944e:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08498775 +0x9453:  mov    %eax,%edx
08498777 +0x9455:  test   %edx,%edx
08498779 +0x9457:  je     0849877d <+0x945b>
0849877b +0x9459:  mov    %ebx,(%eax)
0849877d +0x945b:  add    $0x14,%esp
08498780 +0x945e:  pop    %ebx
08498781 +0x945f:  pop    %ebp
08498782 +0x9460:  ret
08498783 +0x9461:  nop
08498784 +0x9462:  push   %ebp
08498785 +0x9463:  mov    %esp,%ebp
08498787 +0x9465:  push   %ebx
08498788 +0x9466:  sub    $0x24,%esp
0849878b +0x9469:  movl   $0x1,0x4(%esp)
08498793 +0x9471:  mov    0x8(%ebp),%eax
08498796 +0x9474:  mov    %eax,(%esp)
08498799 +0x9477:  call   084983c4 <+0x90a2>
0849879e +0x947c:  mov    0x8(%ebp),%eax
084987a1 +0x947f:  mov    0x24(%eax),%eax
084987a4 +0x9482:  lea    0x4(%eax),%ebx
084987a7 +0x9485:  mov    0x8(%ebp),%eax
084987aa +0x9488:  mov    %eax,(%esp)
084987ad +0x948b:  call   0849841a <+0x90f8>
084987b2 +0x9490:  mov    %eax,(%ebx)
084987b4 +0x9492:  mov    0xc(%ebp),%eax
084987b7 +0x9495:  mov    %eax,(%esp)
084987ba +0x9498:  call   08498745 <+0x9423>
084987bf +0x949d:  mov    (%eax),%eax
084987c1 +0x949f:  mov    %eax,-0xc(%ebp)
084987c4 +0x94a2:  mov    0x8(%ebp),%eax
084987c7 +0x94a5:  mov    0x18(%eax),%edx
084987ca +0x94a8:  mov    0x8(%ebp),%eax
084987cd +0x94ab:  lea    -0xc(%ebp),%ecx
084987d0 +0x94ae:  mov    %ecx,0x8(%esp)
084987d4 +0x94b2:  mov    %edx,0x4(%esp)
084987d8 +0x94b6:  mov    %eax,(%esp)
084987db +0x94b9:  call   0849874e <+0x942c>
084987e0 +0x94be:  mov    0x8(%ebp),%eax
084987e3 +0x94c1:  mov    0x24(%eax),%eax
084987e6 +0x94c4:  lea    0x4(%eax),%edx
084987e9 +0x94c7:  mov    0x8(%ebp),%eax
084987ec +0x94ca:  add    $0x18,%eax
084987ef +0x94cd:  mov    %edx,0x4(%esp)
084987f3 +0x94d1:  mov    %eax,(%esp)
084987f6 +0x94d4:  call   0849838c <+0x906a>
084987fb +0x94d9:  mov    0x8(%ebp),%eax
084987fe +0x94dc:  mov    0x1c(%eax),%edx
08498801 +0x94df:  mov    0x8(%ebp),%eax
08498804 +0x94e2:  mov    %edx,0x18(%eax)
08498807 +0x94e5:  add    $0x24,%esp
0849880a +0x94e8:  pop    %ebx
0849880b +0x94e9:  pop    %ebp
0849880c +0x94ea:  ret
0849880d +0x94eb:  nop
0849880e +0x94ec:  push   %ebp
0849880f +0x94ed:  mov    %esp,%ebp
08498811 +0x94ef:  push   %ebx
08498812 +0x94f0:  sub    $0x44,%esp
08498815 +0x94f3:  mov    0x10(%ebp),%eax
08498818 +0x94f6:  mov    %al,-0x2c(%ebp)
0849881b +0x94f9:  mov    0x8(%ebp),%eax
0849881e +0x94fc:  mov    0x24(%eax),%eax
08498821 +0x94ff:  mov    %eax,%edx
08498823 +0x9501:  mov    0x8(%ebp),%eax
08498826 +0x9504:  mov    0x14(%eax),%eax
08498829 +0x9507:  mov    %edx,%ecx
0849882b +0x9509:  sub    %eax,%ecx
0849882d +0x950b:  mov    %ecx,%eax
0849882f +0x950d:  sar    $0x2,%eax
08498832 +0x9510:  add    $0x1,%eax
08498835 +0x9513:  mov    %eax,-0x1c(%ebp)
08498838 +0x9516:  mov    0xc(%ebp),%eax
0849883b +0x9519:  add    -0x1c(%ebp),%eax
0849883e +0x951c:  mov    %eax,-0x18(%ebp)
08498841 +0x951f:  mov    0x8(%ebp),%eax
08498844 +0x9522:  mov    0x4(%eax),%eax
08498847 +0x9525:  mov    -0x18(%ebp),%edx
0849884a +0x9528:  add    %edx,%edx
0849884c +0x952a:  cmp    %edx,%eax
0849884e +0x952c:  jbe    084988e8 <+0x95c6>
08498854 +0x9532:  mov    0x8(%ebp),%eax
08498857 +0x9535:  mov    (%eax),%edx
08498859 +0x9537:  mov    0x8(%ebp),%eax
0849885c +0x953a:  mov    0x4(%eax),%eax
0849885f +0x953d:  sub    -0x18(%ebp),%eax
08498862 +0x9540:  shr    %eax
08498864 +0x9542:  lea    0x0(,%eax,4),%ecx
0849886b +0x9549:  cmpb   $0x0,-0x2c(%ebp)
0849886f +0x954d:  je     08498879 <+0x9557>
08498871 +0x954f:  mov    0xc(%ebp),%eax
08498874 +0x9552:  shl    $0x2,%eax
08498877 +0x9555:  jmp    0849887e <+0x955c>
08498879 +0x9557:  mov    $0x0,%eax
0849887e +0x955c:  lea    (%ecx,%eax,1),%eax
08498881 +0x955f:  lea    (%edx,%eax,1),%eax
08498884 +0x9562:  mov    %eax,-0x14(%ebp)
08498887 +0x9565:  mov    0x8(%ebp),%eax
0849888a +0x9568:  mov    0x14(%eax),%eax
0849888d +0x956b:  cmp    -0x14(%ebp),%eax
08498890 +0x956e:  jbe    084988b9 <+0x9597>
08498892 +0x9570:  mov    0x8(%ebp),%eax
08498895 +0x9573:  mov    0x24(%eax),%eax
08498898 +0x9576:  lea    0x4(%eax),%ecx
0849889b +0x9579:  mov    0x8(%ebp),%eax
0849889e +0x957c:  mov    0x14(%eax),%eax
084988a1 +0x957f:  mov    -0x14(%ebp),%edx
084988a4 +0x9582:  mov    %edx,0x8(%esp)
084988a8 +0x9586:  mov    %ecx,0x4(%esp)
084988ac +0x958a:  mov    %eax,(%esp)
084988af +0x958d:  call   08498e8e <+0x9b6c>
084988b4 +0x9592:  jmp    084989a5 <+0x9683>
084988b9 +0x9597:  mov    -0x1c(%ebp),%eax
084988bc +0x959a:  shl    $0x2,%eax
084988bf +0x959d:  mov    %eax,%edx
084988c1 +0x959f:  add    -0x14(%ebp),%edx
084988c4 +0x95a2:  mov    0x8(%ebp),%eax
084988c7 +0x95a5:  mov    0x24(%eax),%eax
084988ca +0x95a8:  lea    0x4(%eax),%ecx
084988cd +0x95ab:  mov    0x8(%ebp),%eax
084988d0 +0x95ae:  mov    0x14(%eax),%eax
084988d3 +0x95b1:  mov    %edx,0x8(%esp)
084988d7 +0x95b5:  mov    %ecx,0x4(%esp)
084988db +0x95b9:  mov    %eax,(%esp)
084988de +0x95bc:  call   08498ec6 <+0x9ba4>
084988e3 +0x95c1:  jmp    084989a5 <+0x9683>
084988e8 +0x95c6:  mov    0x8(%ebp),%eax
084988eb +0x95c9:  mov    0x4(%eax),%ebx
084988ee +0x95cc:  mov    0x8(%ebp),%eax
084988f1 +0x95cf:  lea    0x4(%eax),%edx
084988f4 +0x95d2:  lea    0xc(%ebp),%eax
084988f7 +0x95d5:  mov    %eax,0x4(%esp)
084988fb +0x95d9:  mov    %edx,(%esp)
084988fe +0x95dc:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08498903 +0x95e1:  mov    (%eax),%eax
08498905 +0x95e3:  lea    (%ebx,%eax,1),%eax
08498908 +0x95e6:  add    $0x2,%eax
0849890b +0x95e9:  mov    %eax,-0x10(%ebp)
0849890e +0x95ec:  mov    0x8(%ebp),%eax
08498911 +0x95ef:  mov    -0x10(%ebp),%edx
08498914 +0x95f2:  mov    %edx,0x4(%esp)
08498918 +0x95f6:  mov    %eax,(%esp)
0849891b +0x95f9:  call   08498068 <+0x8d46>
08498920 +0x95fe:  mov    %eax,-0xc(%ebp)
08498923 +0x9601:  mov    -0x18(%ebp),%eax
08498926 +0x9604:  mov    -0x10(%ebp),%edx
08498929 +0x9607:  mov    %edx,%ecx
0849892b +0x9609:  sub    %eax,%ecx
0849892d +0x960b:  mov    %ecx,%eax
0849892f +0x960d:  shr    %eax
08498931 +0x960f:  lea    0x0(,%eax,4),%edx
08498938 +0x9616:  cmpb   $0x0,-0x2c(%ebp)
0849893c +0x961a:  je     08498946 <+0x9624>
0849893e +0x961c:  mov    0xc(%ebp),%eax
08498941 +0x961f:  shl    $0x2,%eax
08498944 +0x9622:  jmp    0849894b <+0x9629>
08498946 +0x9624:  mov    $0x0,%eax
0849894b +0x9629:  lea    (%edx,%eax,1),%eax
0849894e +0x962c:  add    -0xc(%ebp),%eax
08498951 +0x962f:  mov    %eax,-0x14(%ebp)
08498954 +0x9632:  mov    0x8(%ebp),%eax
08498957 +0x9635:  mov    0x24(%eax),%eax
0849895a +0x9638:  lea    0x4(%eax),%ecx
0849895d +0x963b:  mov    0x8(%ebp),%eax
08498960 +0x963e:  mov    0x14(%eax),%eax
08498963 +0x9641:  mov    -0x14(%ebp),%edx
08498966 +0x9644:  mov    %edx,0x8(%esp)
0849896a +0x9648:  mov    %ecx,0x4(%esp)
0849896e +0x964c:  mov    %eax,(%esp)
08498971 +0x964f:  call   08498e8e <+0x9b6c>
08498976 +0x9654:  mov    0x8(%ebp),%eax
08498979 +0x9657:  mov    0x4(%eax),%ecx
0849897c +0x965a:  mov    0x8(%ebp),%eax
0849897f +0x965d:  mov    (%eax),%edx
08498981 +0x965f:  mov    0x8(%ebp),%eax
08498984 +0x9662:  mov    %ecx,0x8(%esp)
08498988 +0x9666:  mov    %edx,0x4(%esp)
0849898c +0x966a:  mov    %eax,(%esp)
0849898f +0x966d:  call   084976c8 <+0x83a6>
08498994 +0x9672:  mov    0x8(%ebp),%eax
08498997 +0x9675:  mov    -0xc(%ebp),%edx
0849899a +0x9678:  mov    %edx,(%eax)
0849899c +0x967a:  mov    0x8(%ebp),%eax
0849899f +0x967d:  mov    -0x10(%ebp),%edx
084989a2 +0x9680:  mov    %edx,0x4(%eax)
084989a5 +0x9683:  mov    0x8(%ebp),%eax
084989a8 +0x9686:  lea    0x8(%eax),%edx
084989ab +0x9689:  mov    -0x14(%ebp),%eax
084989ae +0x968c:  mov    %eax,0x4(%esp)
084989b2 +0x9690:  mov    %edx,(%esp)
084989b5 +0x9693:  call   08497f2c <+0x8c0a>
084989ba +0x9698:  mov    -0x1c(%ebp),%eax
084989bd +0x969b:  sub    $0x1,%eax
084989c0 +0x969e:  shl    $0x2,%eax
084989c3 +0x96a1:  add    -0x14(%ebp),%eax
084989c6 +0x96a4:  mov    0x8(%ebp),%edx
084989c9 +0x96a7:  add    $0x18,%edx
084989cc +0x96aa:  mov    %eax,0x4(%esp)
084989d0 +0x96ae:  mov    %edx,(%esp)
084989d3 +0x96b1:  call   08497f2c <+0x8c0a>
084989d8 +0x96b6:  add    $0x44,%esp
084989db +0x96b9:  pop    %ebx
084989dc +0x96ba:  pop    %ebp
084989dd +0x96bb:  ret
084989de +0x96bc:  push   %ebp
084989df +0x96bd:  mov    %esp,%ebp
084989e1 +0x96bf:  sub    $0x18,%esp
084989e4 +0x96c2:  mov    0x8(%ebp),%eax
084989e7 +0x96c5:  mov    %eax,(%esp)
084989ea +0x96c8:  call   08498efe <+0x9bdc>
084989ef +0x96cd:  cmp    0xc(%ebp),%eax
084989f2 +0x96d0:  setb   %al
084989f5 +0x96d3:  movzbl %al,%eax
084989f8 +0x96d6:  test   %eax,%eax
084989fa +0x96d8:  setne  %al
084989fd +0x96db:  test   %al,%al
084989ff +0x96dd:  je     08498a06 <+0x96e4>
08498a01 +0x96df:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08498a06 +0x96e4:  mov    0xc(%ebp),%eax
08498a09 +0x96e7:  shl    $0x2,%eax
08498a0c +0x96ea:  mov    %eax,(%esp)
08498a0f +0x96ed:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08498a14 +0x96f2:  leave
08498a15 +0x96f3:  ret
08498a16 +0x96f4:  push   %ebp
08498a17 +0x96f5:  mov    %esp,%ebp
08498a19 +0x96f7:  sub    $0x18,%esp
08498a1c +0x96fa:  mov    0xc(%ebp),%eax
08498a1f +0x96fd:  mov    %eax,(%esp)
08498a22 +0x9700:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08498a27 +0x9705:  leave
08498a28 +0x9706:  ret
08498a29 +0x9707:  nop
08498a2a +0x9708:  push   %ebp
08498a2b +0x9709:  mov    %esp,%ebp
08498a2d +0x970b:  sub    $0x18,%esp
08498a30 +0x970e:  mov    0x8(%ebp),%eax
08498a33 +0x9711:  mov    %eax,(%esp)
08498a36 +0x9714:  call   08498f08 <+0x9be6>
08498a3b +0x9719:  cmp    0xc(%ebp),%eax
08498a3e +0x971c:  setb   %al
08498a41 +0x971f:  movzbl %al,%eax
08498a44 +0x9722:  test   %eax,%eax
08498a46 +0x9724:  setne  %al
08498a49 +0x9727:  test   %al,%al
08498a4b +0x9729:  je     08498a52 <+0x9730>
08498a4d +0x972b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08498a52 +0x9730:  mov    0xc(%ebp),%edx
08498a55 +0x9733:  mov    %edx,%eax
08498a57 +0x9735:  add    %eax,%eax
08498a59 +0x9737:  add    %edx,%eax
08498a5b +0x9739:  shl    $0x3,%eax
08498a5e +0x973c:  mov    %eax,(%esp)
08498a61 +0x973f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08498a66 +0x9744:  leave
08498a67 +0x9745:  ret
08498a68 +0x9746:  push   %ebp
08498a69 +0x9747:  mov    %esp,%ebp
08498a6b +0x9749:  sub    $0x18,%esp
08498a6e +0x974c:  mov    0x8(%ebp),%eax
08498a71 +0x974f:  movl   $0x0,(%eax)
08498a77 +0x9755:  mov    0x8(%ebp),%eax
08498a7a +0x9758:  movl   $0x0,0x4(%eax)
08498a81 +0x975f:  mov    0x8(%ebp),%eax
08498a84 +0x9762:  movl   $0x0,0x8(%eax)
08498a8b +0x9769:  mov    0x8(%ebp),%eax
08498a8e +0x976c:  movl   $0x0,0xc(%eax)
08498a95 +0x9773:  mov    0xc(%ebp),%eax
08498a98 +0x9776:  mov    %eax,(%esp)
08498a9b +0x9779:  call   08497fd9 <+0x8cb7>
08498aa0 +0x977e:  mov    0x8(%ebp),%ecx
08498aa3 +0x9781:  mov    0x4(%eax),%edx
08498aa6 +0x9784:  mov    (%eax),%eax
08498aa8 +0x9786:  mov    %eax,0x10(%ecx)
08498aab +0x9789:  mov    %edx,0x14(%ecx)
08498aae +0x978c:  leave
08498aaf +0x978d:  ret
08498ab0 +0x978e:  push   %ebp
08498ab1 +0x978f:  mov    %esp,%ebp
08498ab3 +0x9791:  pop    %ebp
08498ab4 +0x9792:  ret
08498ab5 +0x9793:  nop
08498ab6 +0x9794:  push   %ebp
08498ab7 +0x9795:  mov    %esp,%ebp
08498ab9 +0x9797:  sub    $0x18,%esp
08498abc +0x979a:  mov    0x8(%ebp),%eax
08498abf +0x979d:  mov    %eax,(%esp)
08498ac2 +0x97a0:  call   08498f12 <+0x9bf0>
08498ac7 +0x97a5:  cmp    0xc(%ebp),%eax
08498aca +0x97a8:  setb   %al
08498acd +0x97ab:  movzbl %al,%eax
08498ad0 +0x97ae:  test   %eax,%eax
08498ad2 +0x97b0:  setne  %al
08498ad5 +0x97b3:  test   %al,%al
08498ad7 +0x97b5:  je     08498ade <+0x97bc>
08498ad9 +0x97b7:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08498ade +0x97bc:  mov    0xc(%ebp),%eax
08498ae1 +0x97bf:  shl    $0x2,%eax
08498ae4 +0x97c2:  mov    %eax,(%esp)
08498ae7 +0x97c5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08498aec +0x97ca:  leave
08498aed +0x97cb:  ret
08498aee +0x97cc:  push   %ebp
08498aef +0x97cd:  mov    %esp,%ebp
08498af1 +0x97cf:  mov    0x8(%ebp),%eax
08498af4 +0x97d2:  pop    %ebp
08498af5 +0x97d3:  ret
08498af6 +0x97d4:  push   %ebp
08498af7 +0x97d5:  mov    %esp,%ebp
08498af9 +0x97d7:  sub    $0x18,%esp
08498afc +0x97da:  mov    0x8(%ebp),%eax
08498aff +0x97dd:  mov    %eax,(%esp)
08498b02 +0x97e0:  call   08498f1c <+0x9bfa>
08498b07 +0x97e5:  leave
08498b08 +0x97e6:  ret
08498b09 +0x97e7:  nop
08498b0a +0x97e8:  push   %ebp
08498b0b +0x97e9:  mov    %esp,%ebp
08498b0d +0x97eb:  pop    %ebp
08498b0e +0x97ec:  ret
08498b0f +0x97ed:  nop
08498b10 +0x97ee:  push   %ebp
08498b11 +0x97ef:  mov    %esp,%ebp
08498b13 +0x97f1:  sub    $0x18,%esp
08498b16 +0x97f4:  mov    0xc(%ebp),%edx
08498b19 +0x97f7:  mov    0x8(%ebp),%eax
08498b1c +0x97fa:  mov    %edx,0x4(%esp)
08498b20 +0x97fe:  mov    %eax,(%esp)
08498b23 +0x9801:  call   08498f22 <+0x9c00>
08498b28 +0x9806:  leave
08498b29 +0x9807:  ret
08498b2a +0x9808:  push   %ebp
08498b2b +0x9809:  mov    %esp,%ebp
08498b2d +0x980b:  mov    0x8(%ebp),%eax
08498b30 +0x980e:  pop    %ebp
08498b31 +0x980f:  ret
08498b32 +0x9810:  push   %ebp
08498b33 +0x9811:  mov    %esp,%ebp
08498b35 +0x9813:  mov    0x8(%ebp),%eax
08498b38 +0x9816:  pop    %ebp
08498b39 +0x9817:  ret
08498b3a +0x9818:  push   %ebp
08498b3b +0x9819:  mov    %esp,%ebp
08498b3d +0x981b:  sub    $0x18,%esp
08498b40 +0x981e:  mov    0xc(%ebp),%eax
08498b43 +0x9821:  mov    %eax,(%esp)
08498b46 +0x9824:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08498b4b +0x9829:  leave
08498b4c +0x982a:  ret
08498b4d +0x982b:  push   %ebp
08498b4e +0x982c:  mov    %esp,%ebp
08498b50 +0x982e:  sub    $0x18,%esp
08498b53 +0x9831:  movl   $0x4,(%esp)
08498b5a +0x9838:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08498b5f +0x983d:  leave
08498b60 +0x983e:  ret
08498b61 +0x983f:  nop
08498b62 +0x9840:  push   %ebp
08498b63 +0x9841:  mov    %esp,%ebp
08498b65 +0x9843:  push   %ebx
08498b66 +0x9844:  sub    $0x44,%esp
08498b69 +0x9847:  mov    0x10(%ebp),%eax
08498b6c +0x984a:  mov    %al,-0x2c(%ebp)
08498b6f +0x984d:  mov    0x8(%ebp),%eax
08498b72 +0x9850:  mov    0x24(%eax),%eax
08498b75 +0x9853:  mov    %eax,%edx
08498b77 +0x9855:  mov    0x8(%ebp),%eax
08498b7a +0x9858:  mov    0x14(%eax),%eax
08498b7d +0x985b:  mov    %edx,%ecx
08498b7f +0x985d:  sub    %eax,%ecx
08498b81 +0x985f:  mov    %ecx,%eax
08498b83 +0x9861:  sar    $0x2,%eax
08498b86 +0x9864:  add    $0x1,%eax
08498b89 +0x9867:  mov    %eax,-0x1c(%ebp)
08498b8c +0x986a:  mov    0xc(%ebp),%eax
08498b8f +0x986d:  add    -0x1c(%ebp),%eax
08498b92 +0x9870:  mov    %eax,-0x18(%ebp)
08498b95 +0x9873:  mov    0x8(%ebp),%eax
08498b98 +0x9876:  mov    0x4(%eax),%eax
08498b9b +0x9879:  mov    -0x18(%ebp),%edx
08498b9e +0x987c:  add    %edx,%edx
08498ba0 +0x987e:  cmp    %edx,%eax
08498ba2 +0x9880:  jbe    08498c3c <+0x991a>
08498ba8 +0x9886:  mov    0x8(%ebp),%eax
08498bab +0x9889:  mov    (%eax),%edx
08498bad +0x988b:  mov    0x8(%ebp),%eax
08498bb0 +0x988e:  mov    0x4(%eax),%eax
08498bb3 +0x9891:  sub    -0x18(%ebp),%eax
08498bb6 +0x9894:  shr    %eax
08498bb8 +0x9896:  lea    0x0(,%eax,4),%ecx
08498bbf +0x989d:  cmpb   $0x0,-0x2c(%ebp)
08498bc3 +0x98a1:  je     08498bcd <+0x98ab>
08498bc5 +0x98a3:  mov    0xc(%ebp),%eax
08498bc8 +0x98a6:  shl    $0x2,%eax
08498bcb +0x98a9:  jmp    08498bd2 <+0x98b0>
08498bcd +0x98ab:  mov    $0x0,%eax
08498bd2 +0x98b0:  lea    (%ecx,%eax,1),%eax
08498bd5 +0x98b3:  lea    (%edx,%eax,1),%eax
08498bd8 +0x98b6:  mov    %eax,-0x14(%ebp)
08498bdb +0x98b9:  mov    0x8(%ebp),%eax
08498bde +0x98bc:  mov    0x14(%eax),%eax
08498be1 +0x98bf:  cmp    -0x14(%ebp),%eax
08498be4 +0x98c2:  jbe    08498c0d <+0x98eb>
08498be6 +0x98c4:  mov    0x8(%ebp),%eax
08498be9 +0x98c7:  mov    0x24(%eax),%eax
08498bec +0x98ca:  lea    0x4(%eax),%ecx
08498bef +0x98cd:  mov    0x8(%ebp),%eax
08498bf2 +0x98d0:  mov    0x14(%eax),%eax
08498bf5 +0x98d3:  mov    -0x14(%ebp),%edx
08498bf8 +0x98d6:  mov    %edx,0x8(%esp)
08498bfc +0x98da:  mov    %ecx,0x4(%esp)
08498c00 +0x98de:  mov    %eax,(%esp)
08498c03 +0x98e1:  call   08498f27 <+0x9c05>
08498c08 +0x98e6:  jmp    08498cf9 <+0x99d7>
08498c0d +0x98eb:  mov    -0x1c(%ebp),%eax
08498c10 +0x98ee:  shl    $0x2,%eax
08498c13 +0x98f1:  mov    %eax,%edx
08498c15 +0x98f3:  add    -0x14(%ebp),%edx
08498c18 +0x98f6:  mov    0x8(%ebp),%eax
08498c1b +0x98f9:  mov    0x24(%eax),%eax
08498c1e +0x98fc:  lea    0x4(%eax),%ecx
08498c21 +0x98ff:  mov    0x8(%ebp),%eax
08498c24 +0x9902:  mov    0x14(%eax),%eax
08498c27 +0x9905:  mov    %edx,0x8(%esp)
08498c2b +0x9909:  mov    %ecx,0x4(%esp)
08498c2f +0x990d:  mov    %eax,(%esp)
08498c32 +0x9910:  call   08498f5f <+0x9c3d>
08498c37 +0x9915:  jmp    08498cf9 <+0x99d7>
08498c3c +0x991a:  mov    0x8(%ebp),%eax
08498c3f +0x991d:  mov    0x4(%eax),%ebx
08498c42 +0x9920:  mov    0x8(%ebp),%eax
08498c45 +0x9923:  lea    0x4(%eax),%edx
08498c48 +0x9926:  lea    0xc(%ebp),%eax
08498c4b +0x9929:  mov    %eax,0x4(%esp)
08498c4f +0x992d:  mov    %edx,(%esp)
08498c52 +0x9930:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08498c57 +0x9935:  mov    (%eax),%eax
08498c59 +0x9937:  lea    (%ebx,%eax,1),%eax
08498c5c +0x993a:  add    $0x2,%eax
08498c5f +0x993d:  mov    %eax,-0x10(%ebp)
08498c62 +0x9940:  mov    0x8(%ebp),%eax
08498c65 +0x9943:  mov    -0x10(%ebp),%edx
08498c68 +0x9946:  mov    %edx,0x4(%esp)
08498c6c +0x994a:  mov    %eax,(%esp)
08498c6f +0x994d:  call   0849851a <+0x91f8>
08498c74 +0x9952:  mov    %eax,-0xc(%ebp)
08498c77 +0x9955:  mov    -0x18(%ebp),%eax
08498c7a +0x9958:  mov    -0x10(%ebp),%edx
08498c7d +0x995b:  mov    %edx,%ecx
08498c7f +0x995d:  sub    %eax,%ecx
08498c81 +0x995f:  mov    %ecx,%eax
08498c83 +0x9961:  shr    %eax
08498c85 +0x9963:  lea    0x0(,%eax,4),%edx
08498c8c +0x996a:  cmpb   $0x0,-0x2c(%ebp)
08498c90 +0x996e:  je     08498c9a <+0x9978>
08498c92 +0x9970:  mov    0xc(%ebp),%eax
08498c95 +0x9973:  shl    $0x2,%eax
08498c98 +0x9976:  jmp    08498c9f <+0x997d>
08498c9a +0x9978:  mov    $0x0,%eax
08498c9f +0x997d:  lea    (%edx,%eax,1),%eax
08498ca2 +0x9980:  add    -0xc(%ebp),%eax
08498ca5 +0x9983:  mov    %eax,-0x14(%ebp)
08498ca8 +0x9986:  mov    0x8(%ebp),%eax
08498cab +0x9989:  mov    0x24(%eax),%eax
08498cae +0x998c:  lea    0x4(%eax),%ecx
08498cb1 +0x998f:  mov    0x8(%ebp),%eax
08498cb4 +0x9992:  mov    0x14(%eax),%eax
08498cb7 +0x9995:  mov    -0x14(%ebp),%edx
08498cba +0x9998:  mov    %edx,0x8(%esp)
08498cbe +0x999c:  mov    %ecx,0x4(%esp)
08498cc2 +0x99a0:  mov    %eax,(%esp)
08498cc5 +0x99a3:  call   08498f27 <+0x9c05>
08498cca +0x99a8:  mov    0x8(%ebp),%eax
08498ccd +0x99ab:  mov    0x4(%eax),%ecx
08498cd0 +0x99ae:  mov    0x8(%ebp),%eax
08498cd3 +0x99b1:  mov    (%eax),%edx
08498cd5 +0x99b3:  mov    0x8(%ebp),%eax
08498cd8 +0x99b6:  mov    %ecx,0x8(%esp)
08498cdc +0x99ba:  mov    %edx,0x4(%esp)
08498ce0 +0x99be:  mov    %eax,(%esp)
08498ce3 +0x99c1:  call   08497d22 <+0x8a00>
08498ce8 +0x99c6:  mov    0x8(%ebp),%eax
08498ceb +0x99c9:  mov    -0xc(%ebp),%edx
08498cee +0x99cc:  mov    %edx,(%eax)
08498cf0 +0x99ce:  mov    0x8(%ebp),%eax
08498cf3 +0x99d1:  mov    -0x10(%ebp),%edx
08498cf6 +0x99d4:  mov    %edx,0x4(%eax)
08498cf9 +0x99d7:  mov    0x8(%ebp),%eax
08498cfc +0x99da:  lea    0x8(%eax),%edx
08498cff +0x99dd:  mov    -0x14(%ebp),%eax
08498d02 +0x99e0:  mov    %eax,0x4(%esp)
08498d06 +0x99e4:  mov    %edx,(%esp)
08498d09 +0x99e7:  call   0849838c <+0x906a>
08498d0e +0x99ec:  mov    -0x1c(%ebp),%eax
08498d11 +0x99ef:  sub    $0x1,%eax
08498d14 +0x99f2:  shl    $0x2,%eax
08498d17 +0x99f5:  add    -0x14(%ebp),%eax
08498d1a +0x99f8:  mov    0x8(%ebp),%edx
08498d1d +0x99fb:  add    $0x18,%edx
08498d20 +0x99fe:  mov    %eax,0x4(%esp)
08498d24 +0x9a02:  mov    %edx,(%esp)
08498d27 +0x9a05:  call   0849838c <+0x906a>
08498d2c +0x9a0a:  add    $0x44,%esp
08498d2f +0x9a0d:  pop    %ebx
08498d30 +0x9a0e:  pop    %ebp
08498d31 +0x9a0f:  ret
08498d32 +0x9a10:  push   %ebp
08498d33 +0x9a11:  mov    %esp,%ebp
08498d35 +0x9a13:  sub    $0x18,%esp
08498d38 +0x9a16:  mov    0x8(%ebp),%eax
08498d3b +0x9a19:  mov    %eax,(%esp)
08498d3e +0x9a1c:  call   08498f98 <+0x9c76>
08498d43 +0x9a21:  cmp    0xc(%ebp),%eax
08498d46 +0x9a24:  setb   %al
08498d49 +0x9a27:  movzbl %al,%eax
08498d4c +0x9a2a:  test   %eax,%eax
08498d4e +0x9a2c:  setne  %al
08498d51 +0x9a2f:  test   %al,%al
08498d53 +0x9a31:  je     08498d5a <+0x9a38>
08498d55 +0x9a33:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08498d5a +0x9a38:  mov    0xc(%ebp),%eax
08498d5d +0x9a3b:  shl    $0x2,%eax
08498d60 +0x9a3e:  mov    %eax,(%esp)
08498d63 +0x9a41:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08498d68 +0x9a46:  leave
08498d69 +0x9a47:  ret
08498d6a +0x9a48:  push   %ebp
08498d6b +0x9a49:  mov    %esp,%ebp
08498d6d +0x9a4b:  sub    $0x18,%esp
08498d70 +0x9a4e:  mov    0x8(%ebp),%eax
08498d73 +0x9a51:  mov    %eax,(%esp)
08498d76 +0x9a54:  call   08498fa2 <+0x9c80>
08498d7b +0x9a59:  cmp    0xc(%ebp),%eax
08498d7e +0x9a5c:  setb   %al
08498d81 +0x9a5f:  movzbl %al,%eax
08498d84 +0x9a62:  test   %eax,%eax
08498d86 +0x9a64:  setne  %al
08498d89 +0x9a67:  test   %al,%al
08498d8b +0x9a69:  je     08498d92 <+0x9a70>
08498d8d +0x9a6b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08498d92 +0x9a70:  mov    0xc(%ebp),%edx
08498d95 +0x9a73:  mov    %edx,%eax
08498d97 +0x9a75:  shl    $0x3,%eax
08498d9a +0x9a78:  add    %edx,%eax
08498d9c +0x9a7a:  shl    $0x2,%eax
08498d9f +0x9a7d:  mov    %eax,(%esp)
08498da2 +0x9a80:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08498da7 +0x9a85:  leave
08498da8 +0x9a86:  ret
08498da9 +0x9a87:  nop
08498daa +0x9a88:  push   %ebp
08498dab +0x9a89:  mov    %esp,%ebp
08498dad +0x9a8b:  sub    $0x18,%esp
08498db0 +0x9a8e:  mov    0x8(%ebp),%eax
08498db3 +0x9a91:  movl   $0x0,(%eax)
08498db9 +0x9a97:  mov    0x8(%ebp),%eax
08498dbc +0x9a9a:  movl   $0x0,0x4(%eax)
08498dc3 +0x9aa1:  mov    0x8(%ebp),%eax
08498dc6 +0x9aa4:  movl   $0x0,0x8(%eax)
08498dcd +0x9aab:  mov    0x8(%ebp),%eax
08498dd0 +0x9aae:  movl   $0x0,0xc(%eax)
08498dd7 +0x9ab5:  mov    0xc(%ebp),%eax
08498dda +0x9ab8:  mov    %eax,(%esp)
08498ddd +0x9abb:  call   08498471 <+0x914f>
08498de2 +0x9ac0:  mov    0x8(%ebp),%edx
08498de5 +0x9ac3:  mov    (%eax),%ecx
08498de7 +0x9ac5:  mov    %ecx,0x10(%edx)
08498dea +0x9ac8:  mov    0x4(%eax),%ecx
08498ded +0x9acb:  mov    %ecx,0x14(%edx)
08498df0 +0x9ace:  mov    0x8(%eax),%ecx
08498df3 +0x9ad1:  mov    %ecx,0x18(%edx)
08498df6 +0x9ad4:  mov    0xc(%eax),%ecx
08498df9 +0x9ad7:  mov    %ecx,0x1c(%edx)
08498dfc +0x9ada:  mov    0x10(%eax),%eax
08498dff +0x9add:  mov    %eax,0x20(%edx)
08498e02 +0x9ae0:  leave
08498e03 +0x9ae1:  ret
08498e04 +0x9ae2:  push   %ebp
08498e05 +0x9ae3:  mov    %esp,%ebp
08498e07 +0x9ae5:  pop    %ebp
08498e08 +0x9ae6:  ret
08498e09 +0x9ae7:  nop
08498e0a +0x9ae8:  push   %ebp
08498e0b +0x9ae9:  mov    %esp,%ebp
08498e0d +0x9aeb:  sub    $0x18,%esp
08498e10 +0x9aee:  mov    0x8(%ebp),%eax
08498e13 +0x9af1:  mov    %eax,(%esp)
08498e16 +0x9af4:  call   08498fac <+0x9c8a>
08498e1b +0x9af9:  cmp    0xc(%ebp),%eax
08498e1e +0x9afc:  setb   %al
08498e21 +0x9aff:  movzbl %al,%eax
08498e24 +0x9b02:  test   %eax,%eax
08498e26 +0x9b04:  setne  %al
08498e29 +0x9b07:  test   %al,%al
08498e2b +0x9b09:  je     08498e32 <+0x9b10>
08498e2d +0x9b0b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08498e32 +0x9b10:  mov    0xc(%ebp),%eax
08498e35 +0x9b13:  shl    $0x2,%eax
08498e38 +0x9b16:  mov    %eax,(%esp)
08498e3b +0x9b19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08498e40 +0x9b1e:  leave
08498e41 +0x9b1f:  ret
08498e42 +0x9b20:  push   %ebp
08498e43 +0x9b21:  mov    %esp,%ebp
08498e45 +0x9b23:  mov    0x8(%ebp),%eax
08498e48 +0x9b26:  pop    %ebp
08498e49 +0x9b27:  ret
08498e4a +0x9b28:  push   %ebp
08498e4b +0x9b29:  mov    %esp,%ebp
08498e4d +0x9b2b:  sub    $0x18,%esp
08498e50 +0x9b2e:  mov    0x8(%ebp),%eax
08498e53 +0x9b31:  mov    %eax,(%esp)
08498e56 +0x9b34:  call   08498fb6 <+0x9c94>
08498e5b +0x9b39:  leave
08498e5c +0x9b3a:  ret
08498e5d +0x9b3b:  nop
08498e5e +0x9b3c:  push   %ebp
08498e5f +0x9b3d:  mov    %esp,%ebp
08498e61 +0x9b3f:  pop    %ebp
08498e62 +0x9b40:  ret
08498e63 +0x9b41:  nop
08498e64 +0x9b42:  push   %ebp
08498e65 +0x9b43:  mov    %esp,%ebp
08498e67 +0x9b45:  sub    $0x18,%esp
08498e6a +0x9b48:  mov    0xc(%ebp),%edx
08498e6d +0x9b4b:  mov    0x8(%ebp),%eax
08498e70 +0x9b4e:  mov    %edx,0x4(%esp)
08498e74 +0x9b52:  mov    %eax,(%esp)
08498e77 +0x9b55:  call   08498fbc <+0x9c9a>
08498e7c +0x9b5a:  leave
08498e7d +0x9b5b:  ret
08498e7e +0x9b5c:  push   %ebp
08498e7f +0x9b5d:  mov    %esp,%ebp
08498e81 +0x9b5f:  mov    0x8(%ebp),%eax
08498e84 +0x9b62:  pop    %ebp
08498e85 +0x9b63:  ret
08498e86 +0x9b64:  push   %ebp
08498e87 +0x9b65:  mov    %esp,%ebp
08498e89 +0x9b67:  mov    0x8(%ebp),%eax
08498e8c +0x9b6a:  pop    %ebp
08498e8d +0x9b6b:  ret
08498e8e +0x9b6c:  push   %ebp
08498e8f +0x9b6d:  mov    %esp,%ebp
08498e91 +0x9b6f:  push   %ebx
08498e92 +0x9b70:  sub    $0x14,%esp
08498e95 +0x9b73:  mov    0xc(%ebp),%eax
08498e98 +0x9b76:  mov    %eax,(%esp)
08498e9b +0x9b79:  call   08498fc1 <+0x9c9f>
08498ea0 +0x9b7e:  mov    %eax,%ebx
08498ea2 +0x9b80:  mov    0x8(%ebp),%eax
08498ea5 +0x9b83:  mov    %eax,(%esp)
08498ea8 +0x9b86:  call   08498fc1 <+0x9c9f>
08498ead +0x9b8b:  mov    0x10(%ebp),%edx
08498eb0 +0x9b8e:  mov    %edx,0x8(%esp)
08498eb4 +0x9b92:  mov    %ebx,0x4(%esp)
08498eb8 +0x9b96:  mov    %eax,(%esp)
08498ebb +0x9b99:  call   08498fc9 <+0x9ca7>
08498ec0 +0x9b9e:  add    $0x14,%esp
08498ec3 +0x9ba1:  pop    %ebx
08498ec4 +0x9ba2:  pop    %ebp
08498ec5 +0x9ba3:  ret
08498ec6 +0x9ba4:  push   %ebp
08498ec7 +0x9ba5:  mov    %esp,%ebp
08498ec9 +0x9ba7:  push   %ebx
08498eca +0x9ba8:  sub    $0x14,%esp
08498ecd +0x9bab:  mov    0xc(%ebp),%eax
08498ed0 +0x9bae:  mov    %eax,(%esp)
08498ed3 +0x9bb1:  call   08498fc1 <+0x9c9f>
08498ed8 +0x9bb6:  mov    %eax,%ebx
08498eda +0x9bb8:  mov    0x8(%ebp),%eax
08498edd +0x9bbb:  mov    %eax,(%esp)
08498ee0 +0x9bbe:  call   08498fc1 <+0x9c9f>
08498ee5 +0x9bc3:  mov    0x10(%ebp),%edx
08498ee8 +0x9bc6:  mov    %edx,0x8(%esp)
08498eec +0x9bca:  mov    %ebx,0x4(%esp)
08498ef0 +0x9bce:  mov    %eax,(%esp)
08498ef3 +0x9bd1:  call   0849900d <+0x9ceb>
08498ef8 +0x9bd6:  add    $0x14,%esp
08498efb +0x9bd9:  pop    %ebx
08498efc +0x9bda:  pop    %ebp
08498efd +0x9bdb:  ret
08498efe +0x9bdc:  push   %ebp
08498eff +0x9bdd:  mov    %esp,%ebp
08498f01 +0x9bdf:  mov    $0x3fffffff,%eax
08498f06 +0x9be4:  pop    %ebp
08498f07 +0x9be5:  ret
08498f08 +0x9be6:  push   %ebp
08498f09 +0x9be7:  mov    %esp,%ebp
08498f0b +0x9be9:  mov    $0xaaaaaaa,%eax
08498f10 +0x9bee:  pop    %ebp
08498f11 +0x9bef:  ret
08498f12 +0x9bf0:  push   %ebp
08498f13 +0x9bf1:  mov    %esp,%ebp
08498f15 +0x9bf3:  mov    $0x3fffffff,%eax
08498f1a +0x9bf8:  pop    %ebp
08498f1b +0x9bf9:  ret
08498f1c +0x9bfa:  push   %ebp
08498f1d +0x9bfb:  mov    %esp,%ebp
08498f1f +0x9bfd:  pop    %ebp
08498f20 +0x9bfe:  ret
08498f21 +0x9bff:  nop
08498f22 +0x9c00:  push   %ebp
08498f23 +0x9c01:  mov    %esp,%ebp
08498f25 +0x9c03:  pop    %ebp
08498f26 +0x9c04:  ret
08498f27 +0x9c05:  push   %ebp
08498f28 +0x9c06:  mov    %esp,%ebp
08498f2a +0x9c08:  push   %ebx
08498f2b +0x9c09:  sub    $0x14,%esp
08498f2e +0x9c0c:  mov    0xc(%ebp),%eax
08498f31 +0x9c0f:  mov    %eax,(%esp)
08498f34 +0x9c12:  call   08499051 <+0x9d2f>
08498f39 +0x9c17:  mov    %eax,%ebx
08498f3b +0x9c19:  mov    0x8(%ebp),%eax
08498f3e +0x9c1c:  mov    %eax,(%esp)
08498f41 +0x9c1f:  call   08499051 <+0x9d2f>
08498f46 +0x9c24:  mov    0x10(%ebp),%edx
08498f49 +0x9c27:  mov    %edx,0x8(%esp)
08498f4d +0x9c2b:  mov    %ebx,0x4(%esp)
08498f51 +0x9c2f:  mov    %eax,(%esp)
08498f54 +0x9c32:  call   08499059 <+0x9d37>
08498f59 +0x9c37:  add    $0x14,%esp
08498f5c +0x9c3a:  pop    %ebx
08498f5d +0x9c3b:  pop    %ebp
08498f5e +0x9c3c:  ret
08498f5f +0x9c3d:  push   %ebp
08498f60 +0x9c3e:  mov    %esp,%ebp
08498f62 +0x9c40:  push   %ebx
08498f63 +0x9c41:  sub    $0x14,%esp
08498f66 +0x9c44:  mov    0xc(%ebp),%eax
08498f69 +0x9c47:  mov    %eax,(%esp)
08498f6c +0x9c4a:  call   08499051 <+0x9d2f>
08498f71 +0x9c4f:  mov    %eax,%ebx
08498f73 +0x9c51:  mov    0x8(%ebp),%eax
08498f76 +0x9c54:  mov    %eax,(%esp)
08498f79 +0x9c57:  call   08499051 <+0x9d2f>
08498f7e +0x9c5c:  mov    0x10(%ebp),%edx
08498f81 +0x9c5f:  mov    %edx,0x8(%esp)
08498f85 +0x9c63:  mov    %ebx,0x4(%esp)
08498f89 +0x9c67:  mov    %eax,(%esp)
08498f8c +0x9c6a:  call   0849909d <+0x9d7b>
08498f91 +0x9c6f:  add    $0x14,%esp
08498f94 +0x9c72:  pop    %ebx
08498f95 +0x9c73:  pop    %ebp
08498f96 +0x9c74:  ret
08498f97 +0x9c75:  nop
08498f98 +0x9c76:  push   %ebp
08498f99 +0x9c77:  mov    %esp,%ebp
08498f9b +0x9c79:  mov    $0x3fffffff,%eax
08498fa0 +0x9c7e:  pop    %ebp
08498fa1 +0x9c7f:  ret
08498fa2 +0x9c80:  push   %ebp
08498fa3 +0x9c81:  mov    %esp,%ebp
08498fa5 +0x9c83:  mov    $0x71c71c7,%eax
08498faa +0x9c88:  pop    %ebp
08498fab +0x9c89:  ret
08498fac +0x9c8a:  push   %ebp
08498fad +0x9c8b:  mov    %esp,%ebp
08498faf +0x9c8d:  mov    $0x3fffffff,%eax
08498fb4 +0x9c92:  pop    %ebp
08498fb5 +0x9c93:  ret
08498fb6 +0x9c94:  push   %ebp
08498fb7 +0x9c95:  mov    %esp,%ebp
08498fb9 +0x9c97:  pop    %ebp
08498fba +0x9c98:  ret
08498fbb +0x9c99:  nop
08498fbc +0x9c9a:  push   %ebp
08498fbd +0x9c9b:  mov    %esp,%ebp
08498fbf +0x9c9d:  pop    %ebp
08498fc0 +0x9c9e:  ret
08498fc1 +0x9c9f:  push   %ebp
08498fc2 +0x9ca0:  mov    %esp,%ebp
08498fc4 +0x9ca2:  mov    0x8(%ebp),%eax
08498fc7 +0x9ca5:  pop    %ebp
08498fc8 +0x9ca6:  ret
08498fc9 +0x9ca7:  push   %ebp
08498fca +0x9ca8:  mov    %esp,%ebp
08498fcc +0x9caa:  push   %esi
08498fcd +0x9cab:  push   %ebx
08498fce +0x9cac:  sub    $0x10,%esp
08498fd1 +0x9caf:  mov    0x10(%ebp),%eax
08498fd4 +0x9cb2:  mov    %eax,(%esp)
08498fd7 +0x9cb5:  call   084990e1 <+0x9dbf>
08498fdc +0x9cba:  mov    %eax,%esi
08498fde +0x9cbc:  mov    0xc(%ebp),%eax
08498fe1 +0x9cbf:  mov    %eax,(%esp)
08498fe4 +0x9cc2:  call   084990e1 <+0x9dbf>
08498fe9 +0x9cc7:  mov    %eax,%ebx
08498feb +0x9cc9:  mov    0x8(%ebp),%eax
08498fee +0x9ccc:  mov    %eax,(%esp)
08498ff1 +0x9ccf:  call   084990e1 <+0x9dbf>
08498ff6 +0x9cd4:  mov    %esi,0x8(%esp)
08498ffa +0x9cd8:  mov    %ebx,0x4(%esp)
08498ffe +0x9cdc:  mov    %eax,(%esp)
08499001 +0x9cdf:  call   084990e9 <+0x9dc7>
08499006 +0x9ce4:  add    $0x10,%esp
08499009 +0x9ce7:  pop    %ebx
0849900a +0x9ce8:  pop    %esi
0849900b +0x9ce9:  pop    %ebp
0849900c +0x9cea:  ret
0849900d +0x9ceb:  push   %ebp
0849900e +0x9cec:  mov    %esp,%ebp
08499010 +0x9cee:  push   %esi
08499011 +0x9cef:  push   %ebx
08499012 +0x9cf0:  sub    $0x10,%esp
08499015 +0x9cf3:  mov    0x10(%ebp),%eax
08499018 +0x9cf6:  mov    %eax,(%esp)
0849901b +0x9cf9:  call   084990e1 <+0x9dbf>
08499020 +0x9cfe:  mov    %eax,%esi
08499022 +0x9d00:  mov    0xc(%ebp),%eax
08499025 +0x9d03:  mov    %eax,(%esp)
08499028 +0x9d06:  call   084990e1 <+0x9dbf>
0849902d +0x9d0b:  mov    %eax,%ebx
0849902f +0x9d0d:  mov    0x8(%ebp),%eax
08499032 +0x9d10:  mov    %eax,(%esp)
08499035 +0x9d13:  call   084990e1 <+0x9dbf>
0849903a +0x9d18:  mov    %esi,0x8(%esp)
0849903e +0x9d1c:  mov    %ebx,0x4(%esp)
08499042 +0x9d20:  mov    %eax,(%esp)
08499045 +0x9d23:  call   0849910e <+0x9dec>
0849904a +0x9d28:  add    $0x10,%esp
0849904d +0x9d2b:  pop    %ebx
0849904e +0x9d2c:  pop    %esi
0849904f +0x9d2d:  pop    %ebp
08499050 +0x9d2e:  ret
08499051 +0x9d2f:  push   %ebp
08499052 +0x9d30:  mov    %esp,%ebp
08499054 +0x9d32:  mov    0x8(%ebp),%eax
08499057 +0x9d35:  pop    %ebp
08499058 +0x9d36:  ret
08499059 +0x9d37:  push   %ebp
0849905a +0x9d38:  mov    %esp,%ebp
0849905c +0x9d3a:  push   %esi
0849905d +0x9d3b:  push   %ebx
0849905e +0x9d3c:  sub    $0x10,%esp
08499061 +0x9d3f:  mov    0x10(%ebp),%eax
08499064 +0x9d42:  mov    %eax,(%esp)
08499067 +0x9d45:  call   08499133 <+0x9e11>
0849906c +0x9d4a:  mov    %eax,%esi
0849906e +0x9d4c:  mov    0xc(%ebp),%eax
08499071 +0x9d4f:  mov    %eax,(%esp)
08499074 +0x9d52:  call   08499133 <+0x9e11>
08499079 +0x9d57:  mov    %eax,%ebx
0849907b +0x9d59:  mov    0x8(%ebp),%eax
0849907e +0x9d5c:  mov    %eax,(%esp)
08499081 +0x9d5f:  call   08499133 <+0x9e11>
08499086 +0x9d64:  mov    %esi,0x8(%esp)
0849908a +0x9d68:  mov    %ebx,0x4(%esp)
0849908e +0x9d6c:  mov    %eax,(%esp)
08499091 +0x9d6f:  call   0849913b <+0x9e19>
08499096 +0x9d74:  add    $0x10,%esp
08499099 +0x9d77:  pop    %ebx
0849909a +0x9d78:  pop    %esi
0849909b +0x9d79:  pop    %ebp
0849909c +0x9d7a:  ret
0849909d +0x9d7b:  push   %ebp
0849909e +0x9d7c:  mov    %esp,%ebp
084990a0 +0x9d7e:  push   %esi
084990a1 +0x9d7f:  push   %ebx
084990a2 +0x9d80:  sub    $0x10,%esp
084990a5 +0x9d83:  mov    0x10(%ebp),%eax
084990a8 +0x9d86:  mov    %eax,(%esp)
084990ab +0x9d89:  call   08499133 <+0x9e11>
084990b0 +0x9d8e:  mov    %eax,%esi
084990b2 +0x9d90:  mov    0xc(%ebp),%eax
084990b5 +0x9d93:  mov    %eax,(%esp)
084990b8 +0x9d96:  call   08499133 <+0x9e11>
084990bd +0x9d9b:  mov    %eax,%ebx
084990bf +0x9d9d:  mov    0x8(%ebp),%eax
084990c2 +0x9da0:  mov    %eax,(%esp)
084990c5 +0x9da3:  call   08499133 <+0x9e11>
084990ca +0x9da8:  mov    %esi,0x8(%esp)
084990ce +0x9dac:  mov    %ebx,0x4(%esp)
084990d2 +0x9db0:  mov    %eax,(%esp)
084990d5 +0x9db3:  call   08499160 <+0x9e3e>
084990da +0x9db8:  add    $0x10,%esp
084990dd +0x9dbb:  pop    %ebx
084990de +0x9dbc:  pop    %esi
084990df +0x9dbd:  pop    %ebp
084990e0 +0x9dbe:  ret
084990e1 +0x9dbf:  push   %ebp
084990e2 +0x9dc0:  mov    %esp,%ebp
084990e4 +0x9dc2:  mov    0x8(%ebp),%eax
084990e7 +0x9dc5:  pop    %ebp
084990e8 +0x9dc6:  ret
084990e9 +0x9dc7:  push   %ebp
084990ea +0x9dc8:  mov    %esp,%ebp
084990ec +0x9dca:  sub    $0x28,%esp
084990ef +0x9dcd:  movb   $0x1,-0x9(%ebp)
084990f3 +0x9dd1:  mov    0x10(%ebp),%eax
084990f6 +0x9dd4:  mov    %eax,0x8(%esp)
084990fa +0x9dd8:  mov    0xc(%ebp),%eax
084990fd +0x9ddb:  mov    %eax,0x4(%esp)
08499101 +0x9ddf:  mov    0x8(%ebp),%eax
08499104 +0x9de2:  mov    %eax,(%esp)
08499107 +0x9de5:  call   08499185 <+0x9e63>
0849910c +0x9dea:  leave
0849910d +0x9deb:  ret
0849910e +0x9dec:  push   %ebp
0849910f +0x9ded:  mov    %esp,%ebp
08499111 +0x9def:  sub    $0x28,%esp
08499114 +0x9df2:  movb   $0x1,-0x9(%ebp)
08499118 +0x9df6:  mov    0x10(%ebp),%eax
0849911b +0x9df9:  mov    %eax,0x8(%esp)
0849911f +0x9dfd:  mov    0xc(%ebp),%eax
08499122 +0x9e00:  mov    %eax,0x4(%esp)
08499126 +0x9e04:  mov    0x8(%ebp),%eax
08499129 +0x9e07:  mov    %eax,(%esp)
0849912c +0x9e0a:  call   084991ca <+0x9ea8>
08499131 +0x9e0f:  leave
08499132 +0x9e10:  ret
08499133 +0x9e11:  push   %ebp
08499134 +0x9e12:  mov    %esp,%ebp
08499136 +0x9e14:  mov    0x8(%ebp),%eax
08499139 +0x9e17:  pop    %ebp
0849913a +0x9e18:  ret
0849913b +0x9e19:  push   %ebp
0849913c +0x9e1a:  mov    %esp,%ebp
0849913e +0x9e1c:  sub    $0x28,%esp
08499141 +0x9e1f:  movb   $0x1,-0x9(%ebp)
08499145 +0x9e23:  mov    0x10(%ebp),%eax
08499148 +0x9e26:  mov    %eax,0x8(%esp)
0849914c +0x9e2a:  mov    0xc(%ebp),%eax
0849914f +0x9e2d:  mov    %eax,0x4(%esp)
08499153 +0x9e31:  mov    0x8(%ebp),%eax
08499156 +0x9e34:  mov    %eax,(%esp)
08499159 +0x9e37:  call   08499217 <+0x9ef5>
0849915e +0x9e3c:  leave
0849915f +0x9e3d:  ret
08499160 +0x9e3e:  push   %ebp
08499161 +0x9e3f:  mov    %esp,%ebp
08499163 +0x9e41:  sub    $0x28,%esp
08499166 +0x9e44:  movb   $0x1,-0x9(%ebp)
0849916a +0x9e48:  mov    0x10(%ebp),%eax
0849916d +0x9e4b:  mov    %eax,0x8(%esp)
08499171 +0x9e4f:  mov    0xc(%ebp),%eax
08499174 +0x9e52:  mov    %eax,0x4(%esp)
08499178 +0x9e56:  mov    0x8(%ebp),%eax
0849917b +0x9e59:  mov    %eax,(%esp)
0849917e +0x9e5c:  call   0849925c <+0x9f3a>
08499183 +0x9e61:  leave
08499184 +0x9e62:  ret
08499185 +0x9e63:  push   %ebp
08499186 +0x9e64:  mov    %esp,%ebp
08499188 +0x9e66:  sub    $0x18,%esp
0849918b +0x9e69:  mov    0xc(%ebp),%edx
0849918e +0x9e6c:  mov    0x8(%ebp),%eax
08499191 +0x9e6f:  mov    %edx,%ecx
08499193 +0x9e71:  sub    %eax,%ecx
08499195 +0x9e73:  mov    %ecx,%eax
08499197 +0x9e75:  sar    $0x2,%eax
0849919a +0x9e78:  shl    $0x2,%eax
0849919d +0x9e7b:  mov    %eax,0x8(%esp)
084991a1 +0x9e7f:  mov    0x8(%ebp),%eax
084991a4 +0x9e82:  mov    %eax,0x4(%esp)
084991a8 +0x9e86:  mov    0x10(%ebp),%eax
084991ab +0x9e89:  mov    %eax,(%esp)
084991ae +0x9e8c:  call   0807d880 <_init+0x178>
084991b3 +0x9e91:  mov    0xc(%ebp),%edx
084991b6 +0x9e94:  mov    0x8(%ebp),%eax
084991b9 +0x9e97:  mov    %edx,%ecx
084991bb +0x9e99:  sub    %eax,%ecx
084991bd +0x9e9b:  mov    %ecx,%eax
084991bf +0x9e9d:  sar    $0x2,%eax
084991c2 +0x9ea0:  shl    $0x2,%eax
084991c5 +0x9ea3:  add    0x10(%ebp),%eax
084991c8 +0x9ea6:  leave
084991c9 +0x9ea7:  ret
084991ca +0x9ea8:  push   %ebp
084991cb +0x9ea9:  mov    %esp,%ebp
084991cd +0x9eab:  sub    $0x28,%esp
084991d0 +0x9eae:  mov    0xc(%ebp),%edx
084991d3 +0x9eb1:  mov    0x8(%ebp),%eax
084991d6 +0x9eb4:  mov    %edx,%ecx
084991d8 +0x9eb6:  sub    %eax,%ecx
084991da +0x9eb8:  mov    %ecx,%eax
084991dc +0x9eba:  sar    $0x2,%eax
084991df +0x9ebd:  mov    %eax,-0xc(%ebp)
084991e2 +0x9ec0:  mov    -0xc(%ebp),%eax
084991e5 +0x9ec3:  lea    0x0(,%eax,4),%edx
084991ec +0x9eca:  mov    -0xc(%ebp),%eax
084991ef +0x9ecd:  shl    $0x2,%eax
084991f2 +0x9ed0:  neg    %eax
084991f4 +0x9ed2:  add    0x10(%ebp),%eax
084991f7 +0x9ed5:  mov    %edx,0x8(%esp)
084991fb +0x9ed9:  mov    0x8(%ebp),%edx
084991fe +0x9edc:  mov    %edx,0x4(%esp)
08499202 +0x9ee0:  mov    %eax,(%esp)
08499205 +0x9ee3:  call   0807d880 <_init+0x178>
0849920a +0x9ee8:  mov    -0xc(%ebp),%eax
0849920d +0x9eeb:  shl    $0x2,%eax
08499210 +0x9eee:  neg    %eax
08499212 +0x9ef0:  add    0x10(%ebp),%eax
08499215 +0x9ef3:  leave
08499216 +0x9ef4:  ret
08499217 +0x9ef5:  push   %ebp
08499218 +0x9ef6:  mov    %esp,%ebp
0849921a +0x9ef8:  sub    $0x18,%esp
0849921d +0x9efb:  mov    0xc(%ebp),%edx
08499220 +0x9efe:  mov    0x8(%ebp),%eax
08499223 +0x9f01:  mov    %edx,%ecx
08499225 +0x9f03:  sub    %eax,%ecx
08499227 +0x9f05:  mov    %ecx,%eax
08499229 +0x9f07:  sar    $0x2,%eax
0849922c +0x9f0a:  shl    $0x2,%eax
0849922f +0x9f0d:  mov    %eax,0x8(%esp)
08499233 +0x9f11:  mov    0x8(%ebp),%eax
08499236 +0x9f14:  mov    %eax,0x4(%esp)
0849923a +0x9f18:  mov    0x10(%ebp),%eax
0849923d +0x9f1b:  mov    %eax,(%esp)
08499240 +0x9f1e:  call   0807d880 <_init+0x178>
08499245 +0x9f23:  mov    0xc(%ebp),%edx
08499248 +0x9f26:  mov    0x8(%ebp),%eax
0849924b +0x9f29:  mov    %edx,%ecx
0849924d +0x9f2b:  sub    %eax,%ecx
0849924f +0x9f2d:  mov    %ecx,%eax
08499251 +0x9f2f:  sar    $0x2,%eax
08499254 +0x9f32:  shl    $0x2,%eax
08499257 +0x9f35:  add    0x10(%ebp),%eax
0849925a +0x9f38:  leave
0849925b +0x9f39:  ret
0849925c +0x9f3a:  push   %ebp
0849925d +0x9f3b:  mov    %esp,%ebp
0849925f +0x9f3d:  sub    $0x28,%esp
08499262 +0x9f40:  mov    0xc(%ebp),%edx
08499265 +0x9f43:  mov    0x8(%ebp),%eax
08499268 +0x9f46:  mov    %edx,%ecx
0849926a +0x9f48:  sub    %eax,%ecx
0849926c +0x9f4a:  mov    %ecx,%eax
0849926e +0x9f4c:  sar    $0x2,%eax
08499271 +0x9f4f:  mov    %eax,-0xc(%ebp)
08499274 +0x9f52:  mov    -0xc(%ebp),%eax
08499277 +0x9f55:  lea    0x0(,%eax,4),%edx
0849927e +0x9f5c:  mov    -0xc(%ebp),%eax
08499281 +0x9f5f:  shl    $0x2,%eax
08499284 +0x9f62:  neg    %eax
08499286 +0x9f64:  add    0x10(%ebp),%eax
08499289 +0x9f67:  mov    %edx,0x8(%esp)
0849928d +0x9f6b:  mov    0x8(%ebp),%edx
08499290 +0x9f6e:  mov    %edx,0x4(%esp)
08499294 +0x9f72:  mov    %eax,(%esp)
08499297 +0x9f75:  call   0807d880 <_init+0x178>
0849929c +0x9f7a:  mov    -0xc(%ebp),%eax
0849929f +0x9f7d:  shl    $0x2,%eax
084992a2 +0x9f80:  neg    %eax
084992a4 +0x9f82:  add    0x10(%ebp),%eax
084992a7 +0x9f85:  leave
084992a8 +0x9f86:  ret
084992a9 +0x9f87:  nop
084992aa +0x9f88:  nop
084992ab +0x9f89:  nop
```

## 反编译 C

```c
// <global>::global @ 0x848f322

/* exchange_server::AcquireCharacterMemory(int) */

void exchange_server::_GLOBAL__I_AcquireCharacterMemory(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
