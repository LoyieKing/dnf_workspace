# dispatch_sig

`_ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821c2e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821c2e6  _ZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821c2e6, 0x0821d2c3]
0821c2e6 +0x000:  push   %ebp
0821c2e7 +0x001:  mov    %esp,%ebp
0821c2e9 +0x003:  push   %esi
0821c2ea +0x004:  push   %ebx
0821c2eb +0x005:  sub    $0x1c0,%esp
0821c2f1 +0x00b:  mov    0xc(%ebp),%eax
0821c2f4 +0x00e:  mov    %eax,(%esp)
0821c2f7 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821c2fc +0x016:  cmp    $0x3,%eax
0821c2ff +0x019:  setne  %al
0821c302 +0x01c:  test   %al,%al
0821c304 +0x01e:  je     0821c310 <+0x2a>
0821c306 +0x020:  mov    $0x0,%ebx
0821c30b +0x025:  jmp    0821d2b7 <+0xfd1>
0821c310 +0x02a:  cmpl   $0x0,0xc(%ebp)
0821c314 +0x02e:  je     0821c325 <+0x3f>
0821c316 +0x030:  mov    0xc(%ebp),%eax
0821c319 +0x033:  mov    %eax,(%esp)
0821c31c +0x036:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0821c321 +0x03b:  test   %al,%al
0821c323 +0x03d:  je     0821c32c <+0x46>
0821c325 +0x03f:  mov    $0x1,%eax
0821c32a +0x044:  jmp    0821c331 <+0x4b>
0821c32c +0x046:  mov    $0x0,%eax
0821c331 +0x04b:  test   %al,%al
0821c333 +0x04d:  je     0821c33f <+0x59>
0821c335 +0x04f:  mov    $0x0,%ebx
0821c33a +0x054:  jmp    0821d2b7 <+0xfd1>
0821c33f +0x059:  movl   $0x0,-0x5c(%ebp)
0821c346 +0x060:  movl   $0x0,-0x60(%ebp)
0821c34d +0x067:  movw   $0xffff,-0x62(%ebp)
0821c353 +0x06d:  lea    -0x5c(%ebp),%eax
0821c356 +0x070:  mov    %eax,0x4(%esp)
0821c35a +0x074:  mov    0x10(%ebp),%eax
0821c35d +0x077:  mov    %eax,(%esp)
0821c360 +0x07a:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0821c365 +0x07f:  xor    $0x1,%eax
0821c368 +0x082:  test   %al,%al
0821c36a +0x084:  je     0821c397 <+0xb1>
0821c36c +0x086:  movl   $0x0,0xc(%esp)
0821c374 +0x08e:  movl   $0x0,0x8(%esp)
0821c37c +0x096:  movl   $&_ZZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821c384 +0x09e:  movl   $0xd029,(%esp)
0821c38b +0x0a5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821c390 +0x0aa:  mov    %eax,%ebx
0821c392 +0x0ac:  jmp    0821d2b7 <+0xfd1>
0821c397 +0x0b1:  lea    -0x60(%ebp),%eax
0821c39a +0x0b4:  mov    %eax,0x4(%esp)
0821c39e +0x0b8:  mov    0x10(%ebp),%eax
0821c3a1 +0x0bb:  mov    %eax,(%esp)
0821c3a4 +0x0be:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0821c3a9 +0x0c3:  xor    $0x1,%eax
0821c3ac +0x0c6:  test   %al,%al
0821c3ae +0x0c8:  je     0821c3db <+0xf5>
0821c3b0 +0x0ca:  movl   $0x0,0xc(%esp)
0821c3b8 +0x0d2:  movl   $0x0,0x8(%esp)
0821c3c0 +0x0da:  movl   $&_ZZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821c3c8 +0x0e2:  movl   $0xd02a,(%esp)
0821c3cf +0x0e9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821c3d4 +0x0ee:  mov    %eax,%ebx
0821c3d6 +0x0f0:  jmp    0821d2b7 <+0xfd1>
0821c3db +0x0f5:  lea    -0x62(%ebp),%eax
0821c3de +0x0f8:  mov    %eax,0x4(%esp)
0821c3e2 +0x0fc:  mov    0x10(%ebp),%eax
0821c3e5 +0x0ff:  mov    %eax,(%esp)
0821c3e8 +0x102:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821c3ed +0x107:  xor    $0x1,%eax
0821c3f0 +0x10a:  test   %al,%al
0821c3f2 +0x10c:  je     0821c41f <+0x139>
0821c3f4 +0x10e:  movl   $0x0,0xc(%esp)
0821c3fc +0x116:  movl   $0x0,0x8(%esp)
0821c404 +0x11e:  movl   $&_ZZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821c40c +0x126:  movl   $0xd02b,(%esp)
0821c413 +0x12d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821c418 +0x132:  mov    %eax,%ebx
0821c41a +0x134:  jmp    0821d2b7 <+0xfd1>
0821c41f +0x139:  mov    -0x5c(%ebp),%eax
0821c422 +0x13c:  mov    %eax,0x4(%esp)
0821c426 +0x140:  mov    0x8(%ebp),%eax
0821c429 +0x143:  mov    %eax,(%esp)
0821c42c +0x146:  call   0821b60a <_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj>  ; Dispatcher_UseVendingMachine::_getVendingMachine(unsigned int) const
0821c431 +0x14b:  mov    %eax,-0x54(%ebp)
0821c434 +0x14e:  cmpl   $0x0,-0x54(%ebp)
0821c438 +0x152:  jne    0821c465 <+0x17f>
0821c43a +0x154:  movl   $0x0,0xc(%esp)
0821c442 +0x15c:  movl   $0x0,0x8(%esp)
0821c44a +0x164:  movl   $&_ZZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821c452 +0x16c:  movl   $0xd02f,(%esp)
0821c459 +0x173:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821c45e +0x178:  mov    %eax,%ebx
0821c460 +0x17a:  jmp    0821d2b7 <+0xfd1>
0821c465 +0x17f:  mov    -0x60(%ebp),%eax
0821c468 +0x182:  mov    %eax,0x8(%esp)
0821c46c +0x186:  mov    -0x54(%ebp),%eax
0821c46f +0x189:  mov    %eax,0x4(%esp)
0821c473 +0x18d:  mov    0x8(%ebp),%eax
0821c476 +0x190:  mov    %eax,(%esp)
0821c479 +0x193:  call   0821b698 <_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj>  ; Dispatcher_UseVendingMachine::_getVendingMachineInfo(stVendingMachine_t const*, unsigned int) const
0821c47e +0x198:  mov    %eax,-0x50(%ebp)
0821c481 +0x19b:  cmpl   $0x0,-0x50(%ebp)
0821c485 +0x19f:  jne    0821c4b2 <+0x1cc>
0821c487 +0x1a1:  movl   $0x0,0xc(%esp)
0821c48f +0x1a9:  movl   $0x0,0x8(%esp)
0821c497 +0x1b1:  movl   $&_ZZN28Dispatcher_UseVendingMachine12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821c49f +0x1b9:  movl   $0xd033,(%esp)
0821c4a6 +0x1c0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821c4ab +0x1c5:  mov    %eax,%ebx
0821c4ad +0x1c7:  jmp    0821d2b7 <+0xfd1>
0821c4b2 +0x1cc:  movl   $0x1,-0x4c(%ebp)
0821c4b9 +0x1d3:  movl   $0x1,-0x48(%ebp)
0821c4c0 +0x1da:  movl   $0x2,-0x44(%ebp)
0821c4c7 +0x1e1:  movl   $0x0,-0x6c(%ebp)
0821c4ce +0x1e8:  movl   $0x0,-0x68(%ebp)
0821c4d5 +0x1ef:  lea    -0x15f(%ebp),%eax
0821c4db +0x1f5:  mov    %eax,%ebx
0821c4dd +0x1f7:  mov    $0x1,%esi
0821c4e2 +0x1fc:  jmp    0821c4f2 <+0x20c>
0821c4e4 +0x1fe:  mov    %ebx,(%esp)
0821c4e7 +0x201:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821c4ec +0x206:  add    $0x3d,%ebx
0821c4ef +0x209:  sub    $0x1,%esi
0821c4f2 +0x20c:  cmp    $0xffffffff,%esi
0821c4f5 +0x20f:  setne  %al
0821c4f8 +0x212:  test   %al,%al
0821c4fa +0x214:  jne    0821c4e4 <+0x1fe>
0821c4fc +0x216:  movl   $0x0,-0x38(%ebp)
0821c503 +0x21d:  jmp    0821c521 <+0x23b>
0821c505 +0x21f:  mov    -0x38(%ebp),%eax
0821c508 +0x222:  imul   $0x3d,%eax,%eax
0821c50b +0x225:  lea    -0x8(%ebp),%edx
0821c50e +0x228:  lea    (%edx,%eax,1),%eax
0821c511 +0x22b:  sub    $0x157,%eax
0821c516 +0x230:  movl   $0xffffffff,0x2(%eax)
0821c51d +0x237:  addl   $0x1,-0x38(%ebp)
0821c521 +0x23b:  cmpl   $0x1,-0x38(%ebp)
0821c525 +0x23f:  setle  %al
0821c528 +0x242:  test   %al,%al
0821c52a +0x244:  jne    0821c505 <+0x21f>
0821c52c +0x246:  movl   $0x0,-0x34(%ebp)
0821c533 +0x24d:  jmp    0821c74a <+0x464>
0821c538 +0x252:  movl   $0x0,-0x30(%ebp)
0821c53f +0x259:  cmpl   $0x2,-0x30(%ebp)
0821c543 +0x25d:  jbe    0821c571 <+0x28b>
0821c545 +0x25f:  movl   $0x4,(%esp)
0821c54c +0x266:  call   08725800 <__cxa_allocate_exception>
0821c551 +0x26b:  mov    %eax,%edx
0821c553 +0x26d:  movl   $0x1,(%edx)
0821c559 +0x273:  movl   $0x0,0x8(%esp)
0821c561 +0x27b:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821c569 +0x283:  mov    %eax,(%esp)
0821c56c +0x286:  call   08724c50 <__cxa_throw>
0821c571 +0x28b:  mov    -0x34(%ebp),%eax
0821c574 +0x28e:  imul   $0x3d,%eax,%eax
0821c577 +0x291:  lea    -0x8(%ebp),%ebx
0821c57a +0x294:  lea    (%ebx,%eax,1),%eax
0821c57d +0x297:  lea    -0x157(%eax),%ebx
0821c583 +0x29d:  lea    -0x1a8(%ebp),%eax
0821c589 +0x2a3:  mov    -0x50(%ebp),%edx
0821c58c +0x2a6:  mov    %edx,0x8(%esp)
0821c590 +0x2aa:  mov    0x8(%ebp),%edx
0821c593 +0x2ad:  mov    %edx,0x4(%esp)
0821c597 +0x2b1:  mov    %eax,(%esp)
0821c59a +0x2b4:  call   0821bf82 <_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t>  ; Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t const*) const
0821c59f +0x2b9:  sub    $0x4,%esp
0821c5a2 +0x2bc:  mov    -0x1a8(%ebp),%eax
0821c5a8 +0x2c2:  mov    %eax,(%ebx)
0821c5aa +0x2c4:  mov    -0x1a4(%ebp),%eax
0821c5b0 +0x2ca:  mov    %eax,0x4(%ebx)
0821c5b3 +0x2cd:  mov    -0x1a0(%ebp),%eax
0821c5b9 +0x2d3:  mov    %eax,0x8(%ebx)
0821c5bc +0x2d6:  mov    -0x19c(%ebp),%eax
0821c5c2 +0x2dc:  mov    %eax,0xc(%ebx)
0821c5c5 +0x2df:  mov    -0x198(%ebp),%eax
0821c5cb +0x2e5:  mov    %eax,0x10(%ebx)
0821c5ce +0x2e8:  mov    -0x194(%ebp),%eax
0821c5d4 +0x2ee:  mov    %eax,0x14(%ebx)
0821c5d7 +0x2f1:  mov    -0x190(%ebp),%eax
0821c5dd +0x2f7:  mov    %eax,0x18(%ebx)
0821c5e0 +0x2fa:  mov    -0x18c(%ebp),%eax
0821c5e6 +0x300:  mov    %eax,0x1c(%ebx)
0821c5e9 +0x303:  mov    -0x188(%ebp),%eax
0821c5ef +0x309:  mov    %eax,0x20(%ebx)
0821c5f2 +0x30c:  mov    -0x184(%ebp),%eax
0821c5f8 +0x312:  mov    %eax,0x24(%ebx)
0821c5fb +0x315:  mov    -0x180(%ebp),%eax
0821c601 +0x31b:  mov    %eax,0x28(%ebx)
0821c604 +0x31e:  mov    -0x17c(%ebp),%eax
0821c60a +0x324:  mov    %eax,0x2c(%ebx)
0821c60d +0x327:  mov    -0x178(%ebp),%eax
0821c613 +0x32d:  mov    %eax,0x30(%ebx)
0821c616 +0x330:  mov    -0x174(%ebp),%eax
0821c61c +0x336:  mov    %eax,0x34(%ebx)
0821c61f +0x339:  mov    -0x170(%ebp),%eax
0821c625 +0x33f:  mov    %eax,0x38(%ebx)
0821c628 +0x342:  movzbl -0x16c(%ebp),%eax
0821c62f +0x349:  mov    %al,0x3c(%ebx)
0821c632 +0x34c:  mov    -0x34(%ebp),%eax
0821c635 +0x34f:  imul   $0x3d,%eax,%eax
0821c638 +0x352:  lea    -0x8(%ebp),%edx
0821c63b +0x355:  lea    (%edx,%eax,1),%eax
0821c63e +0x358:  sub    $0x157,%eax
0821c643 +0x35d:  mov    0x2(%eax),%eax
0821c646 +0x360:  cmp    $0xffffffff,%eax
0821c649 +0x363:  jne    0821c677 <+0x391>
0821c64b +0x365:  movl   $0x4,(%esp)
0821c652 +0x36c:  call   08725800 <__cxa_allocate_exception>
0821c657 +0x371:  mov    %eax,%edx
0821c659 +0x373:  movl   $0x1,(%edx)
0821c65f +0x379:  movl   $0x0,0x8(%esp)
0821c667 +0x381:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821c66f +0x389:  mov    %eax,(%esp)
0821c672 +0x38c:  call   08724c50 <__cxa_throw>
0821c677 +0x391:  mov    -0x34(%ebp),%ebx
0821c67a +0x394:  mov    -0x34(%ebp),%eax
0821c67d +0x397:  imul   $0x3d,%eax,%eax
0821c680 +0x39a:  lea    -0x8(%ebp),%edx
0821c683 +0x39d:  lea    (%edx,%eax,1),%eax
0821c686 +0x3a0:  sub    $0x157,%eax
0821c68b +0x3a5:  mov    0x2(%eax),%eax
0821c68e +0x3a8:  mov    %eax,%esi
0821c690 +0x3aa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821c695 +0x3af:  mov    %esi,0x4(%esp)
0821c699 +0x3b3:  mov    %eax,(%esp)
0821c69c +0x3b6:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0821c6a1 +0x3bb:  mov    %eax,-0x6c(%ebp,%ebx,4)
0821c6a5 +0x3bf:  mov    -0x34(%ebp),%eax
0821c6a8 +0x3c2:  mov    -0x6c(%ebp,%eax,4),%eax
0821c6ac +0x3c6:  test   %eax,%eax
0821c6ae +0x3c8:  je     0821c6e7 <+0x401>
0821c6b0 +0x3ca:  mov    -0x34(%ebp),%eax
0821c6b3 +0x3cd:  mov    -0x6c(%ebp,%eax,4),%eax
0821c6b7 +0x3d1:  mov    (%eax),%eax
0821c6b9 +0x3d3:  add    $0xc,%eax
0821c6bc +0x3d6:  mov    (%eax),%edx
0821c6be +0x3d8:  mov    -0x34(%ebp),%eax
0821c6c1 +0x3db:  mov    -0x6c(%ebp,%eax,4),%eax
0821c6c5 +0x3df:  mov    %eax,(%esp)
0821c6c8 +0x3e2:  call   *%edx
0821c6ca +0x3e4:  cmp    $0x17,%eax
0821c6cd +0x3e7:  jne    0821c6e7 <+0x401>
0821c6cf +0x3e9:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
0821c6d4 +0x3ee:  mov    %eax,(%esp)
0821c6d7 +0x3f1:  call   08234fca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa674>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa674
0821c6dc +0x3f6:  test   %eax,%eax
0821c6de +0x3f8:  je     0821c6e7 <+0x401>
0821c6e0 +0x3fa:  mov    $0x1,%eax
0821c6e5 +0x3ff:  jmp    0821c6ec <+0x406>
0821c6e7 +0x401:  mov    $0x0,%eax
0821c6ec +0x406:  test   %al,%al
0821c6ee +0x408:  je     0821c724 <+0x43e>
0821c6f0 +0x40a:  mov    -0x34(%ebp),%eax
0821c6f3 +0x40d:  imul   $0x3d,%eax,%eax
0821c6f6 +0x410:  lea    -0x8(%ebp),%ebx
0821c6f9 +0x413:  lea    (%ebx,%eax,1),%eax
0821c6fc +0x416:  sub    $0x157,%eax
0821c701 +0x41b:  movl   $0xffffffff,0x2(%eax)
0821c708 +0x422:  mov    -0x34(%ebp),%eax
0821c70b +0x425:  imul   $0x3d,%eax,%eax
0821c70e +0x428:  lea    -0x8(%ebp),%edx
0821c711 +0x42b:  lea    (%edx,%eax,1),%eax
0821c714 +0x42e:  sub    $0x157,%eax
0821c719 +0x433:  movl   $0x0,0x7(%eax)
0821c720 +0x43a:  addl   $0x1,-0x30(%ebp)
0821c724 +0x43e:  mov    -0x34(%ebp),%eax
0821c727 +0x441:  imul   $0x3d,%eax,%eax
0821c72a +0x444:  lea    -0x8(%ebp),%ebx
0821c72d +0x447:  lea    (%ebx,%eax,1),%eax
0821c730 +0x44a:  sub    $0x157,%eax
0821c735 +0x44f:  mov    0x2(%eax),%eax
0821c738 +0x452:  cmp    $0xffffffff,%eax
0821c73b +0x455:  sete   %al
0821c73e +0x458:  test   %al,%al
0821c740 +0x45a:  jne    0821c53f <+0x259>
0821c746 +0x460:  addl   $0x1,-0x34(%ebp)
0821c74a +0x464:  cmpl   $0x0,-0x34(%ebp)
0821c74e +0x468:  setle  %al
0821c751 +0x46b:  test   %al,%al
0821c753 +0x46d:  jne    0821c538 <+0x252>
0821c759 +0x473:  jmp    0821c7b6 <+0x4d0>
0821c75b +0x475:  cmp    $0x1,%edx
0821c75e +0x478:  je     0821c768 <+0x482>
0821c760 +0x47a:  mov    %eax,(%esp)
0821c763 +0x47d:  call   08ae3750 <_Unwind_Resume>
0821c768 +0x482:  mov    %eax,(%esp)
0821c76b +0x485:  call   08725ce0 <__cxa_begin_catch>
0821c770 +0x48a:  mov    (%eax),%eax
0821c772 +0x48c:  mov    %eax,-0x2c(%ebp)
0821c775 +0x48f:  mov    -0x2c(%ebp),%eax
0821c778 +0x492:  movzbl %al,%eax
0821c77b +0x495:  mov    %eax,0x8(%esp)
0821c77f +0x499:  movl   $0xda,0x4(%esp)
0821c787 +0x4a1:  mov    0xc(%ebp),%eax
0821c78a +0x4a4:  mov    %eax,(%esp)
0821c78d +0x4a7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821c792 +0x4ac:  mov    $0x0,%ebx
0821c797 +0x4b1:  call   08725c30 <__cxa_end_catch>
0821c79c +0x4b6:  jmp    0821d2b7 <+0xfd1>
0821c7a1 +0x4bb:  mov    %edx,%ebx
0821c7a3 +0x4bd:  mov    %eax,%esi
0821c7a5 +0x4bf:  call   08725c30 <__cxa_end_catch>
0821c7aa +0x4c4:  mov    %esi,%eax
0821c7ac +0x4c6:  mov    %ebx,%edx
0821c7ae +0x4c8:  mov    %eax,(%esp)
0821c7b1 +0x4cb:  call   08ae3750 <_Unwind_Resume>
0821c7b6 +0x4d0:  movl   $0x0,-0x40(%ebp)
0821c7bd +0x4d7:  movl   $0x1,-0x28(%ebp)
0821c7c4 +0x4de:  jmp    0821c88e <+0x5a8>
0821c7c9 +0x4e3:  mov    -0x28(%ebp),%eax
0821c7cc +0x4e6:  imul   $0x3d,%eax,%eax
0821c7cf +0x4e9:  lea    -0x8(%ebp),%edx
0821c7d2 +0x4ec:  lea    (%edx,%eax,1),%eax
0821c7d5 +0x4ef:  lea    -0x157(%eax),%ebx
0821c7db +0x4f5:  lea    -0x1a8(%ebp),%eax
0821c7e1 +0x4fb:  mov    -0x50(%ebp),%edx
0821c7e4 +0x4fe:  mov    %edx,0x8(%esp)
0821c7e8 +0x502:  mov    0x8(%ebp),%edx
0821c7eb +0x505:  mov    %edx,0x4(%esp)
0821c7ef +0x509:  mov    %eax,(%esp)
0821c7f2 +0x50c:  call   0821c058 <_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t>  ; Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t const*) const
0821c7f7 +0x511:  sub    $0x4,%esp
0821c7fa +0x514:  mov    -0x1a8(%ebp),%eax
0821c800 +0x51a:  mov    %eax,(%ebx)
0821c802 +0x51c:  mov    -0x1a4(%ebp),%eax
0821c808 +0x522:  mov    %eax,0x4(%ebx)
0821c80b +0x525:  mov    -0x1a0(%ebp),%eax
0821c811 +0x52b:  mov    %eax,0x8(%ebx)
0821c814 +0x52e:  mov    -0x19c(%ebp),%eax
0821c81a +0x534:  mov    %eax,0xc(%ebx)
0821c81d +0x537:  mov    -0x198(%ebp),%eax
0821c823 +0x53d:  mov    %eax,0x10(%ebx)
0821c826 +0x540:  mov    -0x194(%ebp),%eax
0821c82c +0x546:  mov    %eax,0x14(%ebx)
0821c82f +0x549:  mov    -0x190(%ebp),%eax
0821c835 +0x54f:  mov    %eax,0x18(%ebx)
0821c838 +0x552:  mov    -0x18c(%ebp),%eax
0821c83e +0x558:  mov    %eax,0x1c(%ebx)
0821c841 +0x55b:  mov    -0x188(%ebp),%eax
0821c847 +0x561:  mov    %eax,0x20(%ebx)
0821c84a +0x564:  mov    -0x184(%ebp),%eax
0821c850 +0x56a:  mov    %eax,0x24(%ebx)
0821c853 +0x56d:  mov    -0x180(%ebp),%eax
0821c859 +0x573:  mov    %eax,0x28(%ebx)
0821c85c +0x576:  mov    -0x17c(%ebp),%eax
0821c862 +0x57c:  mov    %eax,0x2c(%ebx)
0821c865 +0x57f:  mov    -0x178(%ebp),%eax
0821c86b +0x585:  mov    %eax,0x30(%ebx)
0821c86e +0x588:  mov    -0x174(%ebp),%eax
0821c874 +0x58e:  mov    %eax,0x34(%ebx)
0821c877 +0x591:  mov    -0x170(%ebp),%eax
0821c87d +0x597:  mov    %eax,0x38(%ebx)
0821c880 +0x59a:  movzbl -0x16c(%ebp),%eax
0821c887 +0x5a1:  mov    %al,0x3c(%ebx)
0821c88a +0x5a4:  addl   $0x1,-0x28(%ebp)
0821c88e +0x5a8:  cmpl   $0x1,-0x28(%ebp)
0821c892 +0x5ac:  setle  %al
0821c895 +0x5af:  test   %al,%al
0821c897 +0x5b1:  jne    0821c7c9 <+0x4e3>
0821c89d +0x5b7:  mov    0xc(%ebp),%eax
0821c8a0 +0x5ba:  mov    %eax,(%esp)
0821c8a3 +0x5bd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c8a8 +0x5c2:  movl   $0x2,0x8(%esp)
0821c8b0 +0x5ca:  movl   $0x1,0x4(%esp)
0821c8b8 +0x5d2:  mov    %eax,(%esp)
0821c8bb +0x5d5:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c8c0 +0x5da:  xor    $0x1,%eax
0821c8c3 +0x5dd:  test   %al,%al
0821c8c5 +0x5df:  jne    0821c9fb <+0x715>
0821c8cb +0x5e5:  mov    0xc(%ebp),%eax
0821c8ce +0x5e8:  mov    %eax,(%esp)
0821c8d1 +0x5eb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c8d6 +0x5f0:  movl   $0x2,0x8(%esp)
0821c8de +0x5f8:  movl   $0x2,0x4(%esp)
0821c8e6 +0x600:  mov    %eax,(%esp)
0821c8e9 +0x603:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c8ee +0x608:  xor    $0x1,%eax
0821c8f1 +0x60b:  test   %al,%al
0821c8f3 +0x60d:  jne    0821c9fb <+0x715>
0821c8f9 +0x613:  mov    0xc(%ebp),%eax
0821c8fc +0x616:  mov    %eax,(%esp)
0821c8ff +0x619:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c904 +0x61e:  movl   $0x2,0x8(%esp)
0821c90c +0x626:  movl   $0x3,0x4(%esp)
0821c914 +0x62e:  mov    %eax,(%esp)
0821c917 +0x631:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c91c +0x636:  xor    $0x1,%eax
0821c91f +0x639:  test   %al,%al
0821c921 +0x63b:  jne    0821c9fb <+0x715>
0821c927 +0x641:  mov    0xc(%ebp),%eax
0821c92a +0x644:  mov    %eax,(%esp)
0821c92d +0x647:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c932 +0x64c:  movl   $0x2,0x8(%esp)
0821c93a +0x654:  movl   $0xa,0x4(%esp)
0821c942 +0x65c:  mov    %eax,(%esp)
0821c945 +0x65f:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c94a +0x664:  xor    $0x1,%eax
0821c94d +0x667:  test   %al,%al
0821c94f +0x669:  jne    0821c9fb <+0x715>
0821c955 +0x66f:  mov    0xc(%ebp),%eax
0821c958 +0x672:  mov    %eax,(%esp)
0821c95b +0x675:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c960 +0x67a:  movl   $0x2,0x8(%esp)
0821c968 +0x682:  movl   $0x9,0x4(%esp)
0821c970 +0x68a:  mov    %eax,(%esp)
0821c973 +0x68d:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c978 +0x692:  xor    $0x1,%eax
0821c97b +0x695:  test   %al,%al
0821c97d +0x697:  jne    0821c9fb <+0x715>
0821c97f +0x699:  mov    0xc(%ebp),%eax
0821c982 +0x69c:  mov    %eax,(%esp)
0821c985 +0x69f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c98a +0x6a4:  movl   $0x2,0x8(%esp)
0821c992 +0x6ac:  movl   $0x5,0x4(%esp)
0821c99a +0x6b4:  mov    %eax,(%esp)
0821c99d +0x6b7:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c9a2 +0x6bc:  xor    $0x1,%eax
0821c9a5 +0x6bf:  test   %al,%al
0821c9a7 +0x6c1:  jne    0821c9fb <+0x715>
0821c9a9 +0x6c3:  mov    0xc(%ebp),%eax
0821c9ac +0x6c6:  mov    %eax,(%esp)
0821c9af +0x6c9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c9b4 +0x6ce:  movl   $0x2,0x8(%esp)
0821c9bc +0x6d6:  movl   $0x6,0x4(%esp)
0821c9c4 +0x6de:  mov    %eax,(%esp)
0821c9c7 +0x6e1:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0821c9cc +0x6e6:  xor    $0x1,%eax
0821c9cf +0x6e9:  test   %al,%al
0821c9d1 +0x6eb:  jne    0821c9fb <+0x715>
0821c9d3 +0x6ed:  mov    0xc(%ebp),%eax
0821c9d6 +0x6f0:  mov    %eax,(%esp)
0821c9d9 +0x6f3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821c9de +0x6f8:  movl   $0x8,0x8(%esp)
0821c9e6 +0x700:  movl   $0x2,0x4(%esp)
0821c9ee +0x708:  mov    %eax,(%esp)
0821c9f1 +0x70b:  call   084fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
0821c9f6 +0x710:  cmp    $0x1,%eax
0821c9f9 +0x713:  jg     0821ca02 <+0x71c>
0821c9fb +0x715:  mov    $0x1,%eax
0821ca00 +0x71a:  jmp    0821ca07 <+0x721>
0821ca02 +0x71c:  mov    $0x0,%eax
0821ca07 +0x721:  test   %al,%al
0821ca09 +0x723:  je     0821ca37 <+0x751>
0821ca0b +0x725:  movl   $0x4,(%esp)
0821ca12 +0x72c:  call   08725800 <__cxa_allocate_exception>
0821ca17 +0x731:  mov    %eax,%edx
0821ca19 +0x733:  movl   $0x4,(%edx)
0821ca1f +0x739:  movl   $0x0,0x8(%esp)
0821ca27 +0x741:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821ca2f +0x749:  mov    %eax,(%esp)
0821ca32 +0x74c:  call   08724c50 <__cxa_throw>
0821ca37 +0x751:  mov    -0x50(%ebp),%eax
0821ca3a +0x754:  mov    0x4(%eax),%eax
0821ca3d +0x757:  test   %eax,%eax
0821ca3f +0x759:  jne    0821cabe <+0x7d8>
0821ca41 +0x75b:  mov    -0x50(%ebp),%eax
0821ca44 +0x75e:  mov    0x8(%eax),%eax
0821ca47 +0x761:  mov    %eax,%ebx
0821ca49 +0x763:  mov    0xc(%ebp),%eax
0821ca4c +0x766:  mov    %eax,(%esp)
0821ca4f +0x769:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821ca54 +0x76e:  movl   $0x1,0xc(%esp)
0821ca5c +0x776:  movl   $0x1c,0x8(%esp)
0821ca64 +0x77e:  mov    %ebx,0x4(%esp)
0821ca68 +0x782:  mov    %eax,(%esp)
0821ca6b +0x785:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
0821ca70 +0x78a:  xor    $0x1,%eax
0821ca73 +0x78d:  test   %al,%al
0821ca75 +0x78f:  je     0821caa3 <+0x7bd>
0821ca77 +0x791:  movl   $0x4,(%esp)
0821ca7e +0x798:  call   08725800 <__cxa_allocate_exception>
0821ca83 +0x79d:  mov    %eax,%edx
0821ca85 +0x79f:  movl   $0x16,(%edx)
0821ca8b +0x7a5:  movl   $0x0,0x8(%esp)
0821ca93 +0x7ad:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821ca9b +0x7b5:  mov    %eax,(%esp)
0821ca9e +0x7b8:  call   08724c50 <__cxa_throw>
0821caa3 +0x7bd:  mov    0xc(%ebp),%eax
0821caa6 +0x7c0:  mov    %eax,(%esp)
0821caa9 +0x7c3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821caae +0x7c8:  mov    %eax,(%esp)
0821cab1 +0x7cb:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0821cab6 +0x7d0:  mov    %eax,-0x40(%ebp)
0821cab9 +0x7d3:  jmp    0821ce69 <+0xb83>
0821cabe +0x7d8:  mov    -0x50(%ebp),%eax
0821cac1 +0x7db:  mov    0x4(%eax),%eax
0821cac4 +0x7de:  cmp    $0x1,%eax
0821cac7 +0x7e1:  jne    0821cb6e <+0x888>
0821cacd +0x7e7:  mov    0xc(%ebp),%eax
0821cad0 +0x7ea:  mov    %eax,(%esp)
0821cad3 +0x7ed:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821cad8 +0x7f2:  mov    %eax,(%esp)
0821cadb +0x7f5:  call   0822d660 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d0a
0821cae0 +0x7fa:  mov    -0x50(%ebp),%edx
0821cae3 +0x7fd:  mov    0x8(%edx),%edx
0821cae6 +0x800:  cmp    %edx,%eax
0821cae8 +0x802:  setb   %al
0821caeb +0x805:  test   %al,%al
0821caed +0x807:  je     0821cb1b <+0x835>
0821caef +0x809:  movl   $0x4,(%esp)
0821caf6 +0x810:  call   08725800 <__cxa_allocate_exception>
0821cafb +0x815:  mov    %eax,%edx
0821cafd +0x817:  movl   $0x16,(%edx)
0821cb03 +0x81d:  movl   $0x0,0x8(%esp)
0821cb0b +0x825:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821cb13 +0x82d:  mov    %eax,(%esp)
0821cb16 +0x830:  call   08724c50 <__cxa_throw>
0821cb1b +0x835:  movl   $0x0,-0x24(%ebp)
0821cb22 +0x83c:  jmp    0821cb43 <+0x85d>
0821cb24 +0x83e:  mov    0xc(%ebp),%eax
0821cb27 +0x841:  mov    %eax,(%esp)
0821cb2a +0x844:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821cb2f +0x849:  movl   $0x6,0x4(%esp)
0821cb37 +0x851:  mov    %eax,(%esp)
0821cb3a +0x854:  call   084faa98 <_ZN10CInventory7UseCoinE14eCoinSubReason>  ; CInventory::UseCoin(eCoinSubReason)
0821cb3f +0x859:  addl   $0x1,-0x24(%ebp)
0821cb43 +0x85d:  mov    -0x50(%ebp),%eax
0821cb46 +0x860:  mov    0x8(%eax),%eax
0821cb49 +0x863:  cmp    -0x24(%ebp),%eax
0821cb4c +0x866:  seta   %al
0821cb4f +0x869:  test   %al,%al
0821cb51 +0x86b:  jne    0821cb24 <+0x83e>
0821cb53 +0x86d:  mov    0xc(%ebp),%eax
0821cb56 +0x870:  mov    %eax,(%esp)
0821cb59 +0x873:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821cb5e +0x878:  mov    %eax,(%esp)
0821cb61 +0x87b:  call   0822d660 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d0a
0821cb66 +0x880:  mov    %eax,-0x40(%ebp)
0821cb69 +0x883:  jmp    0821ce69 <+0xb83>
0821cb6e +0x888:  mov    -0x50(%ebp),%eax
0821cb71 +0x88b:  mov    0x4(%eax),%eax
0821cb74 +0x88e:  cmp    $0x2,%eax
0821cb77 +0x891:  jne    0821cbef <+0x909>
0821cb79 +0x893:  mov    0xc(%ebp),%eax
0821cb7c +0x896:  mov    %eax,(%esp)
0821cb7f +0x899:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
0821cb84 +0x89e:  mov    -0x50(%ebp),%edx
0821cb87 +0x8a1:  mov    0x8(%edx),%edx
0821cb8a +0x8a4:  cmp    %edx,%eax
0821cb8c +0x8a6:  setb   %al
0821cb8f +0x8a9:  test   %al,%al
0821cb91 +0x8ab:  je     0821cbbf <+0x8d9>
0821cb93 +0x8ad:  movl   $0x4,(%esp)
0821cb9a +0x8b4:  call   08725800 <__cxa_allocate_exception>
0821cb9f +0x8b9:  mov    %eax,%edx
0821cba1 +0x8bb:  movl   $0x16,(%edx)
0821cba7 +0x8c1:  movl   $0x0,0x8(%esp)
0821cbaf +0x8c9:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821cbb7 +0x8d1:  mov    %eax,(%esp)
0821cbba +0x8d4:  call   08724c50 <__cxa_throw>
0821cbbf +0x8d9:  mov    -0x50(%ebp),%eax
0821cbc2 +0x8dc:  mov    0x8(%eax),%eax
0821cbc5 +0x8df:  movl   $0x4,0x8(%esp)
0821cbcd +0x8e7:  mov    %eax,0x4(%esp)
0821cbd1 +0x8eb:  mov    0xc(%ebp),%eax
0821cbd4 +0x8ee:  mov    %eax,(%esp)
0821cbd7 +0x8f1:  call   0864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>  ; CUser::UseWinPoint(int, eWPSubReason)
0821cbdc +0x8f6:  mov    0xc(%ebp),%eax
0821cbdf +0x8f9:  mov    %eax,(%esp)
0821cbe2 +0x8fc:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
0821cbe7 +0x901:  mov    %eax,-0x40(%ebp)
0821cbea +0x904:  jmp    0821ce69 <+0xb83>
0821cbef +0x909:  movzwl -0x62(%ebp),%eax
0821cbf3 +0x90d:  movswl %ax,%ebx
0821cbf6 +0x910:  mov    0xc(%ebp),%eax
0821cbf9 +0x913:  mov    %eax,(%esp)
0821cbfc +0x916:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821cc01 +0x91b:  lea    -0xe5(%ebp),%edx
0821cc07 +0x921:  mov    %ebx,0xc(%esp)
0821cc0b +0x925:  movl   $0x1,0x8(%esp)
0821cc13 +0x92d:  mov    %eax,0x4(%esp)
0821cc17 +0x931:  mov    %edx,(%esp)
0821cc1a +0x934:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0821cc1f +0x939:  sub    $0x4,%esp
0821cc22 +0x93c:  mov    -0xe3(%ebp),%edx
0821cc28 +0x942:  mov    -0x50(%ebp),%eax
0821cc2b +0x945:  mov    0x4(%eax),%eax
0821cc2e +0x948:  cmp    %eax,%edx
0821cc30 +0x94a:  je     0821cc5e <+0x978>
0821cc32 +0x94c:  movl   $0x4,(%esp)
0821cc39 +0x953:  call   08725800 <__cxa_allocate_exception>
0821cc3e +0x958:  mov    %eax,%edx
0821cc40 +0x95a:  movl   $0x11,(%edx)
0821cc46 +0x960:  movl   $0x0,0x8(%esp)
0821cc4e +0x968:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821cc56 +0x970:  mov    %eax,(%esp)
0821cc59 +0x973:  call   08724c50 <__cxa_throw>
0821cc5e +0x978:  mov    -0xde(%ebp),%edx
0821cc64 +0x97e:  mov    -0x50(%ebp),%eax
0821cc67 +0x981:  mov    0x8(%eax),%eax
0821cc6a +0x984:  cmp    %eax,%edx
0821cc6c +0x986:  jge    0821cc9a <+0x9b4>
0821cc6e +0x988:  movl   $0x4,(%esp)
0821cc75 +0x98f:  call   08725800 <__cxa_allocate_exception>
0821cc7a +0x994:  mov    %eax,%edx
0821cc7c +0x996:  movl   $0x16,(%edx)
0821cc82 +0x99c:  movl   $0x0,0x8(%esp)
0821cc8a +0x9a4:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821cc92 +0x9ac:  mov    %eax,(%esp)
0821cc95 +0x9af:  call   08724c50 <__cxa_throw>
0821cc9a +0x9b4:  mov    -0x50(%ebp),%eax
0821cc9d +0x9b7:  mov    0x8(%eax),%eax
0821cca0 +0x9ba:  mov    %eax,%esi
0821cca2 +0x9bc:  movzwl -0x62(%ebp),%eax
0821cca6 +0x9c0:  movswl %ax,%ebx
0821cca9 +0x9c3:  mov    0xc(%ebp),%eax
0821ccac +0x9c6:  mov    %eax,(%esp)
0821ccaf +0x9c9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0821ccb4 +0x9ce:  movl   $0x1,0x14(%esp)
0821ccbc +0x9d6:  movl   $0x1c,0x10(%esp)
0821ccc4 +0x9de:  mov    %esi,0xc(%esp)
0821ccc8 +0x9e2:  mov    %ebx,0x8(%esp)
0821cccc +0x9e6:  movl   $0x1,0x4(%esp)
0821ccd4 +0x9ee:  mov    %eax,(%esp)
0821ccd7 +0x9f1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0821ccdc +0x9f6:  xor    $0x1,%eax
0821ccdf +0x9f9:  test   %al,%al
0821cce1 +0x9fb:  je     0821cd0f <+0xa29>
0821cce3 +0x9fd:  movl   $0x4,(%esp)
0821ccea +0xa04:  call   08725800 <__cxa_allocate_exception>
0821ccef +0xa09:  mov    %eax,%edx
0821ccf1 +0xa0b:  movl   $0x16,(%edx)
0821ccf7 +0xa11:  movl   $0x0,0x8(%esp)
0821ccff +0xa19:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821cd07 +0xa21:  mov    %eax,(%esp)
0821cd0a +0xa24:  call   08724c50 <__cxa_throw>
0821cd0f +0xa29:  movzwl -0x62(%ebp),%eax
0821cd13 +0xa2d:  movswl %ax,%ebx
0821cd16 +0xa30:  mov    0xc(%ebp),%eax
0821cd19 +0xa33:  mov    %eax,(%esp)
0821cd1c +0xa36:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821cd21 +0xa3b:  lea    -0x1a8(%ebp),%edx
0821cd27 +0xa41:  mov    %ebx,0xc(%esp)
0821cd2b +0xa45:  movl   $0x1,0x8(%esp)
0821cd33 +0xa4d:  mov    %eax,0x4(%esp)
0821cd37 +0xa51:  mov    %edx,(%esp)
0821cd3a +0xa54:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0821cd3f +0xa59:  sub    $0x4,%esp
0821cd42 +0xa5c:  mov    -0x1a8(%ebp),%eax
0821cd48 +0xa62:  mov    %eax,-0xe5(%ebp)
0821cd4e +0xa68:  mov    -0x1a4(%ebp),%eax
0821cd54 +0xa6e:  mov    %eax,-0xe1(%ebp)
0821cd5a +0xa74:  mov    -0x1a0(%ebp),%eax
0821cd60 +0xa7a:  mov    %eax,-0xdd(%ebp)
0821cd66 +0xa80:  mov    -0x19c(%ebp),%eax
0821cd6c +0xa86:  mov    %eax,-0xd9(%ebp)
0821cd72 +0xa8c:  mov    -0x198(%ebp),%eax
0821cd78 +0xa92:  mov    %eax,-0xd5(%ebp)
0821cd7e +0xa98:  mov    -0x194(%ebp),%eax
0821cd84 +0xa9e:  mov    %eax,-0xd1(%ebp)
0821cd8a +0xaa4:  mov    -0x190(%ebp),%eax
0821cd90 +0xaaa:  mov    %eax,-0xcd(%ebp)
0821cd96 +0xab0:  mov    -0x18c(%ebp),%eax
0821cd9c +0xab6:  mov    %eax,-0xc9(%ebp)
0821cda2 +0xabc:  mov    -0x188(%ebp),%eax
0821cda8 +0xac2:  mov    %eax,-0xc5(%ebp)
0821cdae +0xac8:  mov    -0x184(%ebp),%eax
0821cdb4 +0xace:  mov    %eax,-0xc1(%ebp)
0821cdba +0xad4:  mov    -0x180(%ebp),%eax
0821cdc0 +0xada:  mov    %eax,-0xbd(%ebp)
0821cdc6 +0xae0:  mov    -0x17c(%ebp),%eax
0821cdcc +0xae6:  mov    %eax,-0xb9(%ebp)
0821cdd2 +0xaec:  mov    -0x178(%ebp),%eax
0821cdd8 +0xaf2:  mov    %eax,-0xb5(%ebp)
0821cdde +0xaf8:  mov    -0x174(%ebp),%eax
0821cde4 +0xafe:  mov    %eax,-0xb1(%ebp)
0821cdea +0xb04:  mov    -0x170(%ebp),%eax
0821cdf0 +0xb0a:  mov    %eax,-0xad(%ebp)
0821cdf6 +0xb10:  movzbl -0x16c(%ebp),%eax
0821cdfd +0xb17:  mov    %al,-0xa9(%ebp)
0821ce03 +0xb1d:  mov    -0xde(%ebp),%eax
0821ce09 +0xb23:  mov    %eax,-0x40(%ebp)
0821ce0c +0xb26:  jmp    0821ce69 <+0xb83>
0821ce0e +0xb28:  cmp    $0x1,%edx
0821ce11 +0xb2b:  je     0821ce1b <+0xb35>
0821ce13 +0xb2d:  mov    %eax,(%esp)
0821ce16 +0xb30:  call   08ae3750 <_Unwind_Resume>
0821ce1b +0xb35:  mov    %eax,(%esp)
0821ce1e +0xb38:  call   08725ce0 <__cxa_begin_catch>
0821ce23 +0xb3d:  mov    (%eax),%eax
0821ce25 +0xb3f:  mov    %eax,-0x20(%ebp)
0821ce28 +0xb42:  mov    -0x20(%ebp),%eax
0821ce2b +0xb45:  movzbl %al,%eax
0821ce2e +0xb48:  mov    %eax,0x8(%esp)
0821ce32 +0xb4c:  movl   $0xda,0x4(%esp)
0821ce3a +0xb54:  mov    0xc(%ebp),%eax
0821ce3d +0xb57:  mov    %eax,(%esp)
0821ce40 +0xb5a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821ce45 +0xb5f:  mov    $0x0,%ebx
0821ce4a +0xb64:  call   08725c30 <__cxa_end_catch>
0821ce4f +0xb69:  jmp    0821d2b7 <+0xfd1>
0821ce54 +0xb6e:  mov    %edx,%ebx
0821ce56 +0xb70:  mov    %eax,%esi
0821ce58 +0xb72:  call   08725c30 <__cxa_end_catch>
0821ce5d +0xb77:  mov    %esi,%eax
0821ce5f +0xb79:  mov    %ebx,%edx
0821ce61 +0xb7b:  mov    %eax,(%esp)
0821ce64 +0xb7e:  call   08ae3750 <_Unwind_Resume>
0821ce69 +0xb83:  call   0860f8ad <_Z34GetInstanceVendingMachineStatisticv>  ; GetInstanceVendingMachineStatistic()
0821ce6e +0xb88:  mov    %eax,(%esp)
0821ce71 +0xb8b:  call   0822d714 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dbe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dbe
0821ce76 +0xb90:  movl   $0x0,-0x1c(%ebp)
0821ce7d +0xb97:  jmp    0821ceda <+0xbf4>
0821ce7f +0xb99:  mov    -0x1c(%ebp),%edx
0821ce82 +0xb9c:  lea    -0xa8(%ebp),%eax
0821ce88 +0xba2:  shl    $0x4,%edx
0821ce8b +0xba5:  lea    (%eax,%edx,1),%ecx
0821ce8e +0xba8:  mov    -0x1c(%ebp),%eax
0821ce91 +0xbab:  imul   $0x3d,%eax,%eax
0821ce94 +0xbae:  lea    -0x8(%ebp),%ebx
0821ce97 +0xbb1:  lea    (%ebx,%eax,1),%eax
0821ce9a +0xbb4:  sub    $0x157,%eax
0821ce9f +0xbb9:  mov    0x7(%eax),%eax
0821cea2 +0xbbc:  mov    %eax,%edx
0821cea4 +0xbbe:  mov    -0x1c(%ebp),%eax
0821cea7 +0xbc1:  imul   $0x3d,%eax,%eax
0821ceaa +0xbc4:  lea    -0x8(%ebp),%ebx
0821cead +0xbc7:  lea    (%ebx,%eax,1),%eax
0821ceb0 +0xbca:  sub    $0x157,%eax
0821ceb5 +0xbcf:  mov    0x2(%eax),%eax
0821ceb8 +0xbd2:  mov    %ecx,0x10(%esp)
0821cebc +0xbd6:  mov    %edx,0xc(%esp)
0821cec0 +0xbda:  mov    %eax,0x8(%esp)
0821cec4 +0xbde:  mov    0xc(%ebp),%eax
0821cec7 +0xbe1:  mov    %eax,0x4(%esp)
0821cecb +0xbe5:  mov    0x8(%ebp),%eax
0821cece +0xbe8:  mov    %eax,(%esp)
0821ced1 +0xbeb:  call   0821b71c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE>  ; Dispatcher_UseVendingMachine::_putItemIntoUser(CUser*, unsigned long, unsigned int, Dispatcher_UseVendingMachine::stPutItemResult_t&) const
0821ced6 +0xbf0:  addl   $0x1,-0x1c(%ebp)
0821ceda +0xbf4:  cmpl   $0x1,-0x1c(%ebp)
0821cede +0xbf8:  setle  %al
0821cee1 +0xbfb:  test   %al,%al
0821cee3 +0xbfd:  jne    0821ce7f <+0xb99>
0821cee5 +0xbff:  movl   $0x0,-0x18(%ebp)
0821ceec +0xc06:  jmp    0821cfdb <+0xcf5>
0821cef1 +0xc0b:  mov    -0x18(%ebp),%eax
0821cef4 +0xc0e:  shl    $0x4,%eax
0821cef7 +0xc11:  lea    -0x8(%ebp),%edx
0821cefa +0xc14:  lea    (%edx,%eax,1),%eax
0821cefd +0xc17:  sub    $0xa0,%eax
0821cf02 +0xc1c:  movzbl 0xe(%eax),%eax
0821cf06 +0xc20:  xor    $0x1,%eax
0821cf09 +0xc23:  test   %al,%al
0821cf0b +0xc25:  je     0821cf7d <+0xc97>
0821cf0d +0xc27:  mov    -0x50(%ebp),%eax
0821cf10 +0xc2a:  lea    0x10(%eax),%edx
0821cf13 +0xc2d:  lea    -0x58(%ebp),%eax
0821cf16 +0xc30:  mov    %edx,0x4(%esp)
0821cf1a +0xc34:  mov    %eax,(%esp)
0821cf1d +0xc37:  call   08237f0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5b8
0821cf22 +0xc3c:  sub    $0x4,%esp
0821cf25 +0xc3f:  lea    -0x58(%ebp),%eax
0821cf28 +0xc42:  mov    %eax,(%esp)
0821cf2b +0xc45:  call   0823807c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd726>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd726
0821cf30 +0xc4a:  mov    (%eax),%edx
0821cf32 +0xc4c:  mov    %edx,-0x88(%ebp)
0821cf38 +0xc52:  mov    0x4(%eax),%edx
0821cf3b +0xc55:  mov    %edx,-0x84(%ebp)
0821cf41 +0xc5b:  mov    0x8(%eax),%eax
0821cf44 +0xc5e:  mov    %eax,-0x80(%ebp)
0821cf47 +0xc61:  mov    -0x18(%ebp),%edx
0821cf4a +0xc64:  lea    -0xa8(%ebp),%eax
0821cf50 +0xc6a:  shl    $0x4,%edx
0821cf53 +0xc6d:  lea    (%eax,%edx,1),%ecx
0821cf56 +0xc70:  mov    -0x80(%ebp),%edx
0821cf59 +0xc73:  mov    -0x88(%ebp),%eax
0821cf5f +0xc79:  mov    %ecx,0x10(%esp)
0821cf63 +0xc7d:  mov    %edx,0xc(%esp)
0821cf67 +0xc81:  mov    %eax,0x8(%esp)
0821cf6b +0xc85:  mov    0xc(%ebp),%eax
0821cf6e +0xc88:  mov    %eax,0x4(%esp)
0821cf72 +0xc8c:  mov    0x8(%ebp),%eax
0821cf75 +0xc8f:  mov    %eax,(%esp)
0821cf78 +0xc92:  call   0821b71c <_ZNK28Dispatcher_UseVendingMachine16_putItemIntoUserEP5CUsermjRNS_17stPutItemResult_tE>  ; Dispatcher_UseVendingMachine::_putItemIntoUser(CUser*, unsigned long, unsigned int, Dispatcher_UseVendingMachine::stPutItemResult_t&) const
0821cf7d +0xc97:  mov    -0x18(%ebp),%eax
0821cf80 +0xc9a:  shl    $0x4,%eax
0821cf83 +0xc9d:  lea    -0x8(%ebp),%ebx
0821cf86 +0xca0:  lea    (%ebx,%eax,1),%eax
0821cf89 +0xca3:  sub    $0xa0,%eax
0821cf8e +0xca8:  mov    (%eax),%eax
0821cf90 +0xcaa:  cmp    $0xffffffff,%eax
0821cf93 +0xcad:  je     0821cfd7 <+0xcf1>
0821cf95 +0xcaf:  mov    -0x18(%ebp),%eax
0821cf98 +0xcb2:  shl    $0x4,%eax
0821cf9b +0xcb5:  lea    -0x8(%ebp),%edx
0821cf9e +0xcb8:  lea    (%edx,%eax,1),%eax
0821cfa1 +0xcbb:  sub    $0x9c,%eax
0821cfa6 +0xcc0:  mov    (%eax),%eax
0821cfa8 +0xcc2:  test   %eax,%eax
0821cfaa +0xcc4:  je     0821cfd7 <+0xcf1>
0821cfac +0xcc6:  mov    -0x18(%ebp),%edx
0821cfaf +0xcc9:  lea    -0xa8(%ebp),%eax
0821cfb5 +0xccf:  shl    $0x4,%edx
0821cfb8 +0xcd2:  add    %edx,%eax
0821cfba +0xcd4:  mov    %eax,0xc(%esp)
0821cfbe +0xcd8:  mov    0xc(%ebp),%eax
0821cfc1 +0xcdb:  mov    %eax,0x8(%esp)
0821cfc5 +0xcdf:  mov    -0x50(%ebp),%eax
0821cfc8 +0xce2:  mov    %eax,0x4(%esp)
0821cfcc +0xce6:  mov    0x8(%ebp),%eax
0821cfcf +0xce9:  mov    %eax,(%esp)
0821cfd2 +0xcec:  call   0821c17c <_ZNK28Dispatcher_UseVendingMachine15_notifyItemInfoEPK22stVendingMachineInfo_tP5CUserRKNS_17stPutItemResult_tE>  ; Dispatcher_UseVendingMachine::_notifyItemInfo(stVendingMachineInfo_t const*, CUser*, Dispatcher_UseVendingMachine::stPutItemResult_t const&) const
0821cfd7 +0xcf1:  addl   $0x1,-0x18(%ebp)
0821cfdb +0xcf5:  cmpl   $0x0,-0x18(%ebp)
0821cfdf +0xcf9:  setle  %al
0821cfe2 +0xcfc:  test   %al,%al
0821cfe4 +0xcfe:  jne    0821cef1 <+0xc0b>
0821cfea +0xd04:  lea    -0x78(%ebp),%eax
0821cfed +0xd07:  mov    %eax,(%esp)
0821cff0 +0xd0a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821cff5 +0xd0f:  movl   $0xda,0x8(%esp)
0821cffd +0xd17:  movl   $0x1,0x4(%esp)
0821d005 +0xd1f:  lea    -0x78(%ebp),%eax
0821d008 +0xd22:  mov    %eax,(%esp)
0821d00b +0xd25:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821d010 +0xd2a:  movl   $0x1,0x4(%esp)
0821d018 +0xd32:  lea    -0x78(%ebp),%eax
0821d01b +0xd35:  mov    %eax,(%esp)
0821d01e +0xd38:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821d023 +0xd3d:  movzwl -0x62(%ebp),%eax
0821d027 +0xd41:  cwtl
0821d028 +0xd42:  mov    %eax,0x4(%esp)
0821d02c +0xd46:  lea    -0x78(%ebp),%eax
0821d02f +0xd49:  mov    %eax,(%esp)
0821d032 +0xd4c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821d037 +0xd51:  mov    -0x40(%ebp),%eax
0821d03a +0xd54:  mov    %eax,0x4(%esp)
0821d03e +0xd58:  lea    -0x78(%ebp),%eax
0821d041 +0xd5b:  mov    %eax,(%esp)
0821d044 +0xd5e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821d049 +0xd63:  movl   $0x0,-0x14(%ebp)
0821d050 +0xd6a:  jmp    0821d09a <+0xdb4>
0821d052 +0xd6c:  mov    -0x14(%ebp),%eax
0821d055 +0xd6f:  shl    $0x4,%eax
0821d058 +0xd72:  lea    -0x8(%ebp),%ebx
0821d05b +0xd75:  lea    (%ebx,%eax,1),%eax
0821d05e +0xd78:  sub    $0xa0,%eax
0821d063 +0xd7d:  mov    (%eax),%eax
0821d065 +0xd7f:  mov    %eax,0x4(%esp)
0821d069 +0xd83:  lea    -0x78(%ebp),%eax
0821d06c +0xd86:  mov    %eax,(%esp)
0821d06f +0xd89:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
0821d074 +0xd8e:  mov    -0x14(%ebp),%eax
0821d077 +0xd91:  shl    $0x4,%eax
0821d07a +0xd94:  lea    -0x8(%ebp),%edx
0821d07d +0xd97:  lea    (%edx,%eax,1),%eax
0821d080 +0xd9a:  sub    $0x9c,%eax
0821d085 +0xd9f:  mov    (%eax),%eax
0821d087 +0xda1:  mov    %eax,0x4(%esp)
0821d08b +0xda5:  lea    -0x78(%ebp),%eax
0821d08e +0xda8:  mov    %eax,(%esp)
0821d091 +0xdab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821d096 +0xdb0:  addl   $0x1,-0x14(%ebp)
0821d09a +0xdb4:  cmpl   $0x0,-0x14(%ebp)
0821d09e +0xdb8:  setle  %al
0821d0a1 +0xdbb:  test   %al,%al
0821d0a3 +0xdbd:  jne    0821d052 <+0xd6c>
0821d0a5 +0xdbf:  movl   $0x1,-0x10(%ebp)
0821d0ac +0xdc6:  jmp    0821d0f6 <+0xe10>
0821d0ae +0xdc8:  mov    -0x10(%ebp),%eax
0821d0b1 +0xdcb:  shl    $0x4,%eax
0821d0b4 +0xdce:  lea    -0x8(%ebp),%ebx
0821d0b7 +0xdd1:  lea    (%ebx,%eax,1),%eax
0821d0ba +0xdd4:  sub    $0xa0,%eax
0821d0bf +0xdd9:  mov    (%eax),%eax
0821d0c1 +0xddb:  mov    %eax,0x4(%esp)
0821d0c5 +0xddf:  lea    -0x78(%ebp),%eax
0821d0c8 +0xde2:  mov    %eax,(%esp)
0821d0cb +0xde5:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
0821d0d0 +0xdea:  mov    -0x10(%ebp),%eax
0821d0d3 +0xded:  shl    $0x4,%eax
0821d0d6 +0xdf0:  lea    -0x8(%ebp),%edx
0821d0d9 +0xdf3:  lea    (%edx,%eax,1),%eax
0821d0dc +0xdf6:  sub    $0x9c,%eax
0821d0e1 +0xdfb:  mov    (%eax),%eax
0821d0e3 +0xdfd:  mov    %eax,0x4(%esp)
0821d0e7 +0xe01:  lea    -0x78(%ebp),%eax
0821d0ea +0xe04:  mov    %eax,(%esp)
0821d0ed +0xe07:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821d0f2 +0xe0c:  addl   $0x1,-0x10(%ebp)
0821d0f6 +0xe10:  cmpl   $0x1,-0x10(%ebp)
0821d0fa +0xe14:  setle  %al
0821d0fd +0xe17:  test   %al,%al
0821d0ff +0xe19:  jne    0821d0ae <+0xdc8>
0821d101 +0xe1b:  lea    -0x78(%ebp),%eax
0821d104 +0xe1e:  mov    %eax,(%esp)
0821d107 +0xe21:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0821d10c +0xe26:  mov    %eax,-0x7c(%ebp)
0821d10f +0xe29:  movl   $0x0,-0x3c(%ebp)
0821d116 +0xe30:  movl   $0x0,0x4(%esp)
0821d11e +0xe38:  lea    -0x78(%ebp),%eax
0821d121 +0xe3b:  mov    %eax,(%esp)
0821d124 +0xe3e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821d129 +0xe43:  movl   $0x0,-0xc(%ebp)
0821d130 +0xe4a:  jmp    0821d21a <+0xf34>
0821d135 +0xe4f:  mov    -0xc(%ebp),%eax
0821d138 +0xe52:  shl    $0x4,%eax
0821d13b +0xe55:  lea    -0x8(%ebp),%ebx
0821d13e +0xe58:  lea    (%ebx,%eax,1),%eax
0821d141 +0xe5b:  sub    $0xa0,%eax
0821d146 +0xe60:  mov    (%eax),%eax
0821d148 +0xe62:  cmp    $0xffffffff,%eax
0821d14b +0xe65:  je     0821d20f <+0xf29>
0821d151 +0xe6b:  mov    -0xc(%ebp),%eax
0821d154 +0xe6e:  shl    $0x4,%eax
0821d157 +0xe71:  lea    -0x8(%ebp),%edx
0821d15a +0xe74:  lea    (%edx,%eax,1),%eax
0821d15d +0xe77:  sub    $0xa0,%eax
0821d162 +0xe7c:  movzwl 0xc(%eax),%eax
0821d166 +0xe80:  cmp    $0xffff,%ax
0821d16a +0xe84:  je     0821d212 <+0xf2c>
0821d170 +0xe8a:  mov    -0xc(%ebp),%eax
0821d173 +0xe8d:  shl    $0x4,%eax
0821d176 +0xe90:  lea    -0x8(%ebp),%ebx
0821d179 +0xe93:  lea    (%ebx,%eax,1),%eax
0821d17c +0xe96:  sub    $0xa0,%eax
0821d181 +0xe9b:  movzbl 0xe(%eax),%eax
0821d185 +0xe9f:  xor    $0x1,%eax
0821d188 +0xea2:  test   %al,%al
0821d18a +0xea4:  jne    0821d215 <+0xf2f>
0821d190 +0xeaa:  mov    -0xc(%ebp),%eax
0821d193 +0xead:  shl    $0x4,%eax
0821d196 +0xeb0:  lea    -0x8(%ebp),%edx
0821d199 +0xeb3:  lea    (%edx,%eax,1),%eax
0821d19c +0xeb6:  sub    $0x98,%eax
0821d1a1 +0xebb:  mov    (%eax),%eax
0821d1a3 +0xebd:  mov    %eax,0x4(%esp)
0821d1a7 +0xec1:  lea    -0x78(%ebp),%eax
0821d1aa +0xec4:  mov    %eax,(%esp)
0821d1ad +0xec7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821d1b2 +0xecc:  mov    -0xc(%ebp),%eax
0821d1b5 +0xecf:  shl    $0x4,%eax
0821d1b8 +0xed2:  lea    -0x8(%ebp),%ebx
0821d1bb +0xed5:  lea    (%ebx,%eax,1),%eax
0821d1be +0xed8:  sub    $0xa0,%eax
0821d1c3 +0xedd:  movzwl 0xc(%eax),%eax
0821d1c7 +0xee1:  movswl %ax,%esi
0821d1ca +0xee4:  mov    -0xc(%ebp),%eax
0821d1cd +0xee7:  shl    $0x4,%eax
0821d1d0 +0xeea:  lea    -0x8(%ebp),%edx
0821d1d3 +0xeed:  lea    (%edx,%eax,1),%eax
0821d1d6 +0xef0:  sub    $0x98,%eax
0821d1db +0xef5:  mov    (%eax),%eax
0821d1dd +0xef7:  mov    %eax,(%esp)
0821d1e0 +0xefa:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
0821d1e5 +0xeff:  mov    %eax,%ebx
0821d1e7 +0xf01:  mov    0xc(%ebp),%eax
0821d1ea +0xf04:  mov    %eax,(%esp)
0821d1ed +0xf07:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821d1f2 +0xf0c:  lea    -0x78(%ebp),%edx
0821d1f5 +0xf0f:  mov    %edx,0xc(%esp)
0821d1f9 +0xf13:  mov    %esi,0x8(%esp)
0821d1fd +0xf17:  mov    %ebx,0x4(%esp)
0821d201 +0xf1b:  mov    %eax,(%esp)
0821d204 +0xf1e:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0821d209 +0xf23:  addl   $0x1,-0x3c(%ebp)
0821d20d +0xf27:  jmp    0821d216 <+0xf30>
0821d20f +0xf29:  nop
0821d210 +0xf2a:  jmp    0821d216 <+0xf30>
0821d212 +0xf2c:  nop
0821d213 +0xf2d:  jmp    0821d216 <+0xf30>
0821d215 +0xf2f:  nop
0821d216 +0xf30:  addl   $0x1,-0xc(%ebp)
0821d21a +0xf34:  cmpl   $0x1,-0xc(%ebp)
0821d21e +0xf38:  setle  %al
0821d221 +0xf3b:  test   %al,%al
0821d223 +0xf3d:  jne    0821d135 <+0xe4f>
0821d229 +0xf43:  mov    -0x3c(%ebp),%eax
0821d22c +0xf46:  mov    %eax,0x8(%esp)
0821d230 +0xf4a:  lea    -0x7c(%ebp),%eax
0821d233 +0xf4d:  mov    %eax,0x4(%esp)
0821d237 +0xf51:  lea    -0x78(%ebp),%eax
0821d23a +0xf54:  mov    %eax,(%esp)
0821d23d +0xf57:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
0821d242 +0xf5c:  movl   $0x1,0x4(%esp)
0821d24a +0xf64:  lea    -0x78(%ebp),%eax
0821d24d +0xf67:  mov    %eax,(%esp)
0821d250 +0xf6a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821d255 +0xf6f:  lea    -0x78(%ebp),%eax
0821d258 +0xf72:  mov    %eax,0x4(%esp)
0821d25c +0xf76:  mov    0xc(%ebp),%eax
0821d25f +0xf79:  mov    %eax,(%esp)
0821d262 +0xf7c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821d267 +0xf81:  movl   $0x0,0xc(%esp)
0821d26f +0xf89:  movl   $0x0,0x8(%esp)
0821d277 +0xf91:  movl   $0x27,0x4(%esp)
0821d27f +0xf99:  mov    0xc(%ebp),%eax
0821d282 +0xf9c:  mov    %eax,(%esp)
0821d285 +0xf9f:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0821d28a +0xfa4:  mov    $0x0,%ebx
0821d28f +0xfa9:  lea    -0x78(%ebp),%eax
0821d292 +0xfac:  mov    %eax,(%esp)
0821d295 +0xfaf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821d29a +0xfb4:  jmp    0821d2b7 <+0xfd1>
0821d29c +0xfb6:  mov    %edx,%ebx
0821d29e +0xfb8:  mov    %eax,%esi
0821d2a0 +0xfba:  lea    -0x78(%ebp),%eax
0821d2a3 +0xfbd:  mov    %eax,(%esp)
0821d2a6 +0xfc0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821d2ab +0xfc5:  mov    %esi,%eax
0821d2ad +0xfc7:  mov    %ebx,%edx
0821d2af +0xfc9:  mov    %eax,(%esp)
0821d2b2 +0xfcc:  call   08ae3750 <_Unwind_Resume>
0821d2b7 +0xfd1:  mov    %ebx,%eax
0821d2b9 +0xfd3:  lea    -0x8(%ebp),%esp
0821d2bc +0xfd6:  add    $0x0,%esp
0821d2bf +0xfd9:  pop    %ebx
0821d2c0 +0xfda:  pop    %esi
0821d2c1 +0xfdb:  pop    %ebp
0821d2c2 +0xfdc:  ret
0821d2c3 +0xfdd:  nop
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::dispatch_sig @ 0x821c2e6

/* Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseVendingMachine::dispatch_sig
          (Dispatcher_UseVendingMachine *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  CInventory *pCVar6;
  undefined4 *puVar7;
  uint uVar8;
  CVendingMachineStatistic *this_01;
  ulong *puVar9;
  Inven_Item *this_02;
  int iVar10;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  Inven_Item local_163 [7];
  undefined1 auStack_15c [5];
  undefined4 auStack_157 [12];
  undefined1 auStack_127 [62];
  undefined2 local_e9;
  undefined2 uStack_e7;
  undefined2 uStack_e5;
  undefined1 uStack_e3;
  int iStack_e2;
  undefined1 uStack_de;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined1 local_ad;
  stPutItemResult_t local_ac [4];
  int aiStack_a8 [2];
  short sStack_a0;
  char acStack_9e [18];
  ulong local_8c;
  ulong local_88;
  uint local_84;
  int local_80;
  PacketGuard local_7c [12];
  int local_70 [2];
  short local_66;
  uint local_64;
  uint local_60;
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_5c [4];
  stVendingMachine_t *local_58;
  stVendingMachineInfo_t *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    return 0;
  }
  if ((param_1 == (CUser *)0x0) || (cVar3 = CUser::CheckInTrade(param_1), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0;
  }
  local_60 = 0;
  local_64 = 0;
  local_66 = -1;
  cVar3 = PacketBuf::get_int(param_2,&local_60);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xd029,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_64);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xd02a,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_66);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xd02b,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  local_58 = (stVendingMachine_t *)_getVendingMachine(this,local_60);
  if (local_58 == (stVendingMachine_t *)0x0) {
    uVar5 = LineFunc(0xd02f,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  local_54 = (stVendingMachineInfo_t *)_getVendingMachineInfo(this,local_58,local_64);
  if (local_54 == (stVendingMachineInfo_t *)0x0) {
    uVar5 = LineFunc(0xd033,
                     "virtual int Dispatcher_UseVendingMachine::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar5;
  }
  local_50 = 1;
  local_4c = 1;
  local_48 = 2;
  local_70[0] = 0;
  local_70[1] = 0;
  this_02 = local_163;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_02);
    this_02 = this_02 + 0x3d;
  }
  for (local_3c = 0; local_3c < 2; local_3c = local_3c + 1) {
    *(undefined4 *)(local_163 + local_3c * 0x3d + 2) = 0xffffffff;
  }
  for (local_38 = 0; local_38 < 1; local_38 = local_38 + 1) {
    local_34 = 0;
    do {
      if (2 < local_34) {
        puVar7 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0821c56c to 0821c6c9 has its CatchHandler @ 0821c75b */
        __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
      }
      iVar4 = local_38 * 0x3d;
      _getGiveItem((stVendingMachineInfo_t *)&local_1ac);
      *(undefined4 *)(local_163 + iVar4) = local_1ac;
      *(undefined4 *)(local_163 + iVar4 + 4) = local_1a8;
      *(undefined4 *)((int)auStack_157 + iVar4 + -4) = local_1a4;
      *(undefined4 *)((int)auStack_157 + iVar4) = local_1a0;
      *(undefined4 *)((int)auStack_157 + iVar4 + 4) = local_19c;
      *(undefined4 *)((int)auStack_157 + iVar4 + 8) = local_198;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0xc) = local_194;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0x10) = local_190;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0x14) = local_18c;
      *(undefined4 *)((int)auStack_157 + iVar4 + 0x18) = local_188;
      *(undefined4 *)(auStack_127 + iVar4 + -0x14) = local_184;
      *(undefined4 *)(auStack_127 + iVar4 + -0x10) = local_180;
      *(undefined4 *)(auStack_127 + iVar4 + -0xc) = local_17c;
      *(undefined4 *)(auStack_127 + iVar4 + -8) = local_178;
      *(undefined4 *)(auStack_127 + iVar4 + -4) = local_174;
      auStack_127[iVar4] = local_170;
      iVar4 = local_38;
      if (*(int *)(local_163 + local_38 * 0x3d + 2) == -1) {
        puVar7 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar7 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
      }
      iVar10 = *(int *)(local_163 + local_38 * 0x3d + 2);
      this_00 = (CDataManager *)G_CDataManager();
      iVar10 = CDataManager::find_item(this_00,iVar10);
      local_70[iVar4] = iVar10;
      if (((local_70[local_38] == 0) ||
          (iVar4 = (**(code **)(*(int *)local_70[local_38] + 0xc))(local_70[local_38]),
          iVar4 != 0x17)) ||
         (iVar4 = CGlobalEffectManager::getEffectNum(GlobalData::s_globalEffectManager_), iVar4 == 0
         )) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined4 *)(local_163 + local_38 * 0x3d + 2) = 0xffffffff;
        *(undefined4 *)((int)auStack_157 + local_38 * 0x3d + -5) = 0;
        local_34 = local_34 + 1;
      }
    } while (*(int *)(local_163 + local_38 * 0x3d + 2) == -1);
  }
  local_44 = 0;
  for (local_2c = 1; local_2c < 2; local_2c = local_2c + 1) {
    iVar4 = local_2c * 0x3d;
    _getBonusItem((stVendingMachineInfo_t *)&local_1ac);
    *(undefined4 *)(local_163 + iVar4) = local_1ac;
    *(undefined4 *)(local_163 + iVar4 + 4) = local_1a8;
    *(undefined4 *)((int)auStack_157 + iVar4 + -4) = local_1a4;
    *(undefined4 *)((int)auStack_157 + iVar4) = local_1a0;
    *(undefined4 *)((int)auStack_157 + iVar4 + 4) = local_19c;
    *(undefined4 *)((int)auStack_157 + iVar4 + 8) = local_198;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0xc) = local_194;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0x10) = local_190;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0x14) = local_18c;
    *(undefined4 *)((int)auStack_157 + iVar4 + 0x18) = local_188;
    *(undefined4 *)(auStack_127 + iVar4 + -0x14) = local_184;
    *(undefined4 *)(auStack_127 + iVar4 + -0x10) = local_180;
    *(undefined4 *)(auStack_127 + iVar4 + -0xc) = local_17c;
    *(undefined4 *)(auStack_127 + iVar4 + -8) = local_178;
    *(undefined4 *)(auStack_127 + iVar4 + -4) = local_174;
    auStack_127[iVar4] = local_170;
  }
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0821c8bb to 0821cd3e has its CatchHandler @ 0821ce0e */
  cVar3 = CInventory::check_empty_count(pCVar6,1,2);
  if (cVar3 == '\x01') {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::check_empty_count(pCVar6,2,2);
    if (cVar3 == '\x01') {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::check_empty_count(pCVar6,3,2);
      if (cVar3 == '\x01') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar3 = CInventory::check_empty_count(pCVar6,10,2);
        if (cVar3 == '\x01') {
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar3 = CInventory::check_empty_count(pCVar6,9,2);
          if (cVar3 == '\x01') {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar3 = CInventory::check_empty_count(pCVar6,5,2);
            if (cVar3 == '\x01') {
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar3 = CInventory::check_empty_count(pCVar6,6,2);
              if (cVar3 == '\x01') {
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                iVar4 = CInventory::GetRemainCapacity(pCVar6,2,8);
                if (1 < iVar4) {
                  bVar2 = false;
                  goto LAB_0821ca07;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_0821ca07:
  if (bVar2) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if (*(int *)(local_54 + 4) == 0) {
    uVar5 = *(undefined4 *)(local_54 + 8);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::use_money(pCVar6,uVar5,0x1c,1);
    if (cVar3 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_44 = CInventory::get_money(pCVar6);
  }
  else if (*(int *)(local_54 + 4) == 1) {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar8 = CInventory::getTotalCoin(pCVar6);
    if (uVar8 < *(uint *)(local_54 + 8)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    for (local_28 = 0; local_28 < *(uint *)(local_54 + 8); local_28 = local_28 + 1) {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::UseCoin(pCVar6,6);
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_44 = CInventory::getTotalCoin(pCVar6);
  }
  else if (*(int *)(local_54 + 4) == 2) {
    uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
    if (uVar8 < *(uint *)(local_54 + 8)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    CUser::UseWinPoint(param_1,*(undefined4 *)(local_54 + 8),4);
    local_44 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
  }
  else {
    iVar10 = (int)local_66;
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar5 = 1;
    CInventory::GetInvenSlot((int)&local_e9,iVar4);
    if (CONCAT22(uStack_e5,uStack_e7) != *(int *)(local_54 + 4)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,iVar10);
      *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    if (iStack_e2 < *(int *)(local_54 + 8)) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,iVar10);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    uVar5 = *(undefined4 *)(local_54 + 8);
    iVar4 = (int)local_66;
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar6,1,iVar4,uVar5,0x1c,1);
    if (cVar3 != '\x01') {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)&local_1ac,iVar4);
    local_e9 = (undefined2)local_1ac;
    uStack_e7 = (undefined2)((uint)local_1ac >> 0x10);
    uStack_e5 = (undefined2)local_1a8;
    uStack_e3 = (undefined1)((uint)local_1a8 >> 0x10);
    iStack_e2._1_3_ = (undefined3)local_1a4;
    iStack_e2 = CONCAT31(iStack_e2._1_3_,(char)((uint)local_1a8 >> 0x18));
    uStack_de = (undefined1)((uint)local_1a4 >> 0x18);
    local_dd = local_1a0;
    local_d9 = local_19c;
    local_d5 = local_198;
    local_d1 = local_194;
    local_cd = local_190;
    local_c9 = local_18c;
    local_c5 = local_188;
    local_c1 = local_184;
    local_bd = local_180;
    local_b9 = local_17c;
    local_b5 = local_178;
    local_b1 = local_174;
    local_ad = local_170;
    local_44 = iStack_e2;
  }
  this_01 = (CVendingMachineStatistic *)GetInstanceVendingMachineStatistic();
  CVendingMachineStatistic::incUseCount(this_01);
  for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
    _putItemIntoUser(this,param_1,*(ulong *)(local_163 + local_20 * 0x3d + 2),
                     *(uint *)((int)auStack_157 + local_20 * 0x3d + -5),local_ac + local_20 * 0x10);
  }
  for (local_1c = 0; local_1c < 1; local_1c = local_1c + 1) {
    if (acStack_9e[local_1c * 0x10] != '\x01') {
      std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
      puVar9 = (ulong *)__gnu_cxx::
                        __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
                        ::operator*(local_5c);
      local_8c = *puVar9;
      local_88 = puVar9[1];
      local_84 = puVar9[2];
      _putItemIntoUser(this,param_1,local_8c,local_84,local_ac + local_1c * 0x10);
    }
    if ((*(int *)(local_ac + local_1c * 0x10) != -1) && (aiStack_a8[local_1c * 4] != 0)) {
      _notifyItemInfo(this,local_54,param_1,local_ac + local_1c * 0x10);
    }
  }
  PacketGuard::PacketGuard(local_7c);
                    /* try { // try from 0821d00b to 0821d289 has its CatchHandler @ 0821d29c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_7c,1,0xda);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_7c,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_7c,(int)local_66);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_7c,local_44);
  for (local_18 = 0; local_18 < 1; local_18 = local_18 + 1) {
    InterfacePacketBuf::put_item_idx
              ((InterfacePacketBuf *)local_7c,*(ulong *)(local_ac + local_18 * 0x10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_7c,aiStack_a8[local_18 * 4]);
  }
  for (local_14 = 1; local_14 < 2; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_item_idx
              ((InterfacePacketBuf *)local_7c,*(ulong *)(local_ac + local_14 * 0x10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_7c,aiStack_a8[local_14 * 4]);
  }
  local_80 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_7c);
  local_40 = 0;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_7c,0);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    if (((*(int *)(local_ac + local_10 * 0x10) != -1) && ((&sStack_a0)[local_10 * 8] != -1)) &&
       (acStack_9e[local_10 * 0x10] == '\x01')) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_7c,aiStack_a8[local_10 * 4 + 1]);
      sVar1 = (&sStack_a0)[local_10 * 8];
      uVar5 = GetInvenTypeFromItemSpace(aiStack_a8[local_10 * 4 + 1]);
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar6,uVar5,(int)sVar1,local_7c);
      local_40 = local_40 + 1;
    }
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_7c,&local_80,local_40);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_7c,true);
  CUser::Send(param_1,local_7c);
  APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x27,0,0);
  PacketGuard::~PacketGuard(local_7c);
  return 0;
}
```
