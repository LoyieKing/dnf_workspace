# Clear

`_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv`

`global constructors keyed to secretshop::CSecretShopStatistic::Clear()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to secretshop::CSecretShopStatistic` | `0x085fd43d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd43d  _GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv
#           global constructors keyed to secretshop::CSecretShopStatistic::Clear()
# range [0x085fd43d, 0x085fdd53]
085fd43d +0x000:  push   %ebp
085fd43e +0x001:  mov    %esp,%ebp
085fd440 +0x003:  sub    $0x18,%esp
085fd443 +0x006:  movl   $0xffff,0x4(%esp)
085fd44b +0x00e:  movl   $0x1,(%esp)
085fd452 +0x015:  call   085fd3fd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085fd457 +0x01a:  leave
085fd458 +0x01b:  ret
085fd459 +0x01c:  nop
085fd45a +0x01d:  push   %ebp
085fd45b +0x01e:  mov    %esp,%ebp
085fd45d +0x020:  mov    0x8(%ebp),%eax
085fd460 +0x023:  movl   $0x0,(%eax)
085fd466 +0x029:  mov    0x8(%ebp),%eax
085fd469 +0x02c:  movl   $0x0,0x4(%eax)
085fd470 +0x033:  mov    0x8(%ebp),%eax
085fd473 +0x036:  movl   $0x0,0x8(%eax)
085fd47a +0x03d:  mov    0x8(%ebp),%eax
085fd47d +0x040:  movl   $0x0,0xc(%eax)
085fd484 +0x047:  mov    0x8(%ebp),%eax
085fd487 +0x04a:  movl   $0x0,0x10(%eax)
085fd48e +0x051:  pop    %ebp
085fd48f +0x052:  ret
085fd490 +0x053:  push   %ebp
085fd491 +0x054:  mov    %esp,%ebp
085fd493 +0x056:  push   %esi
085fd494 +0x057:  push   %ebx
085fd495 +0x058:  sub    $0x10,%esp
085fd498 +0x05b:  mov    0x8(%ebp),%eax
085fd49b +0x05e:  movl   $0xfb2,0x8(%esp)
085fd4a3 +0x066:  movl   $0x1b69,0x4(%esp)
085fd4ab +0x06e:  mov    %eax,(%esp)
085fd4ae +0x071:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
085fd4b3 +0x076:  mov    0x8(%ebp),%eax
085fd4b6 +0x079:  movl   $0x0,0xa(%eax)
085fd4bd +0x080:  mov    0x8(%ebp),%eax
085fd4c0 +0x083:  add    $0x12,%eax
085fd4c3 +0x086:  mov    %eax,%ebx
085fd4c5 +0x088:  mov    $0xc7,%esi
085fd4ca +0x08d:  jmp    085fd4da <+0x9d>
085fd4cc +0x08f:  mov    %ebx,(%esp)
085fd4cf +0x092:  call   085fd45a <+0x1d>
085fd4d4 +0x097:  add    $0x14,%ebx
085fd4d7 +0x09a:  sub    $0x1,%esi
085fd4da +0x09d:  cmp    $0xffffffff,%esi
085fd4dd +0x0a0:  setne  %al
085fd4e0 +0x0a3:  test   %al,%al
085fd4e2 +0x0a5:  jne    085fd4cc <+0x8f>
085fd4e4 +0x0a7:  add    $0x10,%esp
085fd4e7 +0x0aa:  pop    %ebx
085fd4e8 +0x0ab:  pop    %esi
085fd4e9 +0x0ac:  pop    %ebp
085fd4ea +0x0ad:  ret
085fd4eb +0x0ae:  nop
085fd4ec +0x0af:  push   %ebp
085fd4ed +0x0b0:  mov    %esp,%ebp
085fd4ef +0x0b2:  push   %ebx
085fd4f0 +0x0b3:  sub    $0x14,%esp
085fd4f3 +0x0b6:  mov    0x8(%ebp),%ebx
085fd4f6 +0x0b9:  mov    0xc(%ebp),%eax
085fd4f9 +0x0bc:  mov    0x10(%ebp),%edx
085fd4fc +0x0bf:  mov    %edx,0x8(%esp)
085fd500 +0x0c3:  mov    %eax,0x4(%esp)
085fd504 +0x0c7:  mov    %ebx,(%esp)
085fd507 +0x0ca:  call   085fd672 <+0x235>
085fd50c +0x0cf:  sub    $0x4,%esp
085fd50f +0x0d2:  mov    %ebx,%eax
085fd511 +0x0d4:  mov    -0x4(%ebp),%ebx
085fd514 +0x0d7:  leave
085fd515 +0x0d8:  ret    $0x4
085fd518 +0x0db:  push   %ebp
085fd519 +0x0dc:  mov    %esp,%ebp
085fd51b +0x0de:  push   %ebx
085fd51c +0x0df:  sub    $0x14,%esp
085fd51f +0x0e2:  mov    0x8(%ebp),%ebx
085fd522 +0x0e5:  mov    0xc(%ebp),%eax
085fd525 +0x0e8:  mov    %eax,0x4(%esp)
085fd529 +0x0ec:  mov    %ebx,(%esp)
085fd52c +0x0ef:  call   085fd730 <+0x2f3>
085fd531 +0x0f4:  sub    $0x4,%esp
085fd534 +0x0f7:  mov    %ebx,%eax
085fd536 +0x0f9:  mov    -0x4(%ebp),%ebx
085fd539 +0x0fc:  leave
085fd53a +0x0fd:  ret    $0x4
085fd53d +0x100:  nop
085fd53e +0x101:  push   %ebp
085fd53f +0x102:  mov    %esp,%ebp
085fd541 +0x104:  mov    0x8(%ebp),%eax
085fd544 +0x107:  mov    (%eax),%edx
085fd546 +0x109:  mov    0xc(%ebp),%eax
085fd549 +0x10c:  mov    (%eax),%eax
085fd54b +0x10e:  cmp    %eax,%edx
085fd54d +0x110:  setne  %al
085fd550 +0x113:  pop    %ebp
085fd551 +0x114:  ret
085fd552 +0x115:  push   %ebp
085fd553 +0x116:  mov    %esp,%ebp
085fd555 +0x118:  mov    0x8(%ebp),%eax
085fd558 +0x11b:  mov    (%eax),%eax
085fd55a +0x11d:  add    $0x10,%eax
085fd55d +0x120:  pop    %ebp
085fd55e +0x121:  ret
085fd55f +0x122:  nop
085fd560 +0x123:  push   %ebp
085fd561 +0x124:  mov    %esp,%ebp
085fd563 +0x126:  sub    $0x18,%esp
085fd566 +0x129:  mov    0xc(%ebp),%eax
085fd569 +0x12c:  mov    %eax,(%esp)
085fd56c +0x12f:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
085fd571 +0x134:  mov    (%eax),%edx
085fd573 +0x136:  mov    0x8(%ebp),%eax
085fd576 +0x139:  mov    %edx,(%eax)
085fd578 +0x13b:  mov    0x10(%ebp),%eax
085fd57b +0x13e:  mov    %eax,(%esp)
085fd57e +0x141:  call   085fd756 <+0x319>
085fd583 +0x146:  mov    0x8(%ebp),%edx
085fd586 +0x149:  mov    (%eax),%ecx
085fd588 +0x14b:  mov    %ecx,0x4(%edx)
085fd58b +0x14e:  mov    0x4(%eax),%ecx
085fd58e +0x151:  mov    %ecx,0x8(%edx)
085fd591 +0x154:  mov    0x8(%eax),%ecx
085fd594 +0x157:  mov    %ecx,0xc(%edx)
085fd597 +0x15a:  mov    0xc(%eax),%ecx
085fd59a +0x15d:  mov    %ecx,0x10(%edx)
085fd59d +0x160:  mov    0x10(%eax),%eax
085fd5a0 +0x163:  mov    %eax,0x14(%edx)
085fd5a3 +0x166:  leave
085fd5a4 +0x167:  ret
085fd5a5 +0x168:  nop
085fd5a6 +0x169:  push   %ebp
085fd5a7 +0x16a:  mov    %esp,%ebp
085fd5a9 +0x16c:  sub    $0x18,%esp
085fd5ac +0x16f:  mov    0xc(%ebp),%eax
085fd5af +0x172:  mov    %eax,(%esp)
085fd5b2 +0x175:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
085fd5b7 +0x17a:  mov    (%eax),%edx
085fd5b9 +0x17c:  mov    0x8(%ebp),%eax
085fd5bc +0x17f:  mov    %edx,(%eax)
085fd5be +0x181:  mov    0xc(%ebp),%eax
085fd5c1 +0x184:  add    $0x4,%eax
085fd5c4 +0x187:  mov    %eax,(%esp)
085fd5c7 +0x18a:  call   085fd75e <+0x321>
085fd5cc +0x18f:  mov    0x8(%ebp),%edx
085fd5cf +0x192:  mov    (%eax),%ecx
085fd5d1 +0x194:  mov    %ecx,0x4(%edx)
085fd5d4 +0x197:  mov    0x4(%eax),%ecx
085fd5d7 +0x19a:  mov    %ecx,0x8(%edx)
085fd5da +0x19d:  mov    0x8(%eax),%ecx
085fd5dd +0x1a0:  mov    %ecx,0xc(%edx)
085fd5e0 +0x1a3:  mov    0xc(%eax),%ecx
085fd5e3 +0x1a6:  mov    %ecx,0x10(%edx)
085fd5e6 +0x1a9:  mov    0x10(%eax),%eax
085fd5e9 +0x1ac:  mov    %eax,0x14(%edx)
085fd5ec +0x1af:  leave
085fd5ed +0x1b0:  ret
085fd5ee +0x1b1:  push   %ebp
085fd5ef +0x1b2:  mov    %esp,%ebp
085fd5f1 +0x1b4:  push   %ebx
085fd5f2 +0x1b5:  sub    $0x14,%esp
085fd5f5 +0x1b8:  mov    0x8(%ebp),%ebx
085fd5f8 +0x1bb:  mov    0xc(%ebp),%eax
085fd5fb +0x1be:  mov    0x10(%ebp),%edx
085fd5fe +0x1c1:  mov    %edx,0x8(%esp)
085fd602 +0x1c5:  mov    %eax,0x4(%esp)
085fd606 +0x1c9:  mov    %ebx,(%esp)
085fd609 +0x1cc:  call   085fd766 <+0x329>
085fd60e +0x1d1:  sub    $0x4,%esp
085fd611 +0x1d4:  mov    %ebx,%eax
085fd613 +0x1d6:  mov    -0x4(%ebp),%ebx
085fd616 +0x1d9:  leave
085fd617 +0x1da:  ret    $0x4
085fd61a +0x1dd:  push   %ebp
085fd61b +0x1de:  mov    %esp,%ebp
085fd61d +0x1e0:  sub    $0x18,%esp
085fd620 +0x1e3:  mov    0x8(%ebp),%eax
085fd623 +0x1e6:  mov    %eax,(%esp)
085fd626 +0x1e9:  call   085fd936 <+0x4f9>
085fd62b +0x1ee:  leave
085fd62c +0x1ef:  ret
085fd62d +0x1f0:  nop
085fd62e +0x1f1:  push   %ebp
085fd62f +0x1f2:  mov    %esp,%ebp
085fd631 +0x1f4:  push   %ebx
085fd632 +0x1f5:  sub    $0x14,%esp
085fd635 +0x1f8:  mov    0x8(%ebp),%ebx
085fd638 +0x1fb:  mov    0xc(%ebp),%eax
085fd63b +0x1fe:  mov    %eax,0x4(%esp)
085fd63f +0x202:  mov    %ebx,(%esp)
085fd642 +0x205:  call   085fd942 <+0x505>
085fd647 +0x20a:  sub    $0x4,%esp
085fd64a +0x20d:  mov    %ebx,%eax
085fd64c +0x20f:  mov    -0x4(%ebp),%ebx
085fd64f +0x212:  leave
085fd650 +0x213:  ret    $0x4
085fd653 +0x216:  nop
085fd654 +0x217:  push   %ebp
085fd655 +0x218:  mov    %esp,%ebp
085fd657 +0x21a:  sub    $0x18,%esp
085fd65a +0x21d:  mov    0x8(%ebp),%eax
085fd65d +0x220:  mov    (%eax),%eax
085fd65f +0x222:  mov    %eax,(%esp)
085fd662 +0x225:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
085fd667 +0x22a:  mov    0x8(%ebp),%edx
085fd66a +0x22d:  mov    %eax,(%edx)
085fd66c +0x22f:  mov    0x8(%ebp),%eax
085fd66f +0x232:  leave
085fd670 +0x233:  ret
085fd671 +0x234:  nop
085fd672 +0x235:  push   %ebp
085fd673 +0x236:  mov    %esp,%ebp
085fd675 +0x238:  push   %esi
085fd676 +0x239:  push   %ebx
085fd677 +0x23a:  sub    $0x30,%esp
085fd67a +0x23d:  mov    0x8(%ebp),%ebx
085fd67d +0x240:  mov    0xc(%ebp),%eax
085fd680 +0x243:  mov    %eax,(%esp)
085fd683 +0x246:  call   085fc9aa <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xb3c>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xb3c
085fd688 +0x24b:  mov    %eax,%esi
085fd68a +0x24d:  mov    0xc(%ebp),%eax
085fd68d +0x250:  mov    %eax,(%esp)
085fd690 +0x253:  call   085fc46e <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x600>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x600
085fd695 +0x258:  lea    -0x10(%ebp),%edx
085fd698 +0x25b:  mov    0x10(%ebp),%ecx
085fd69b +0x25e:  mov    %ecx,0x10(%esp)
085fd69f +0x262:  mov    %esi,0xc(%esp)
085fd6a3 +0x266:  mov    %eax,0x8(%esp)
085fd6a7 +0x26a:  mov    0xc(%ebp),%eax
085fd6aa +0x26d:  mov    %eax,0x4(%esp)
085fd6ae +0x271:  mov    %edx,(%esp)
085fd6b1 +0x274:  call   085fd968 <+0x52b>
085fd6b6 +0x279:  sub    $0x4,%esp
085fd6b9 +0x27c:  lea    -0xc(%ebp),%eax
085fd6bc +0x27f:  mov    0xc(%ebp),%edx
085fd6bf +0x282:  mov    %edx,0x4(%esp)
085fd6c3 +0x286:  mov    %eax,(%esp)
085fd6c6 +0x289:  call   085fd730 <+0x2f3>
085fd6cb +0x28e:  sub    $0x4,%esp
085fd6ce +0x291:  lea    -0xc(%ebp),%eax
085fd6d1 +0x294:  mov    %eax,0x4(%esp)
085fd6d5 +0x298:  lea    -0x10(%ebp),%eax
085fd6d8 +0x29b:  mov    %eax,(%esp)
085fd6db +0x29e:  call   085fda06 <+0x5c9>
085fd6e0 +0x2a3:  test   %al,%al
085fd6e2 +0x2a5:  jne    085fd709 <+0x2cc>
085fd6e4 +0x2a7:  mov    -0x10(%ebp),%eax
085fd6e7 +0x2aa:  mov    %eax,(%esp)
085fd6ea +0x2ad:  call   085fd9e4 <+0x5a7>
085fd6ef +0x2b2:  mov    0xc(%ebp),%edx
085fd6f2 +0x2b5:  mov    %eax,0x8(%esp)
085fd6f6 +0x2b9:  mov    0x10(%ebp),%eax
085fd6f9 +0x2bc:  mov    %eax,0x4(%esp)
085fd6fd +0x2c0:  mov    %edx,(%esp)
085fd700 +0x2c3:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085fd705 +0x2c8:  test   %al,%al
085fd707 +0x2ca:  je     085fd71d <+0x2e0>
085fd709 +0x2cc:  mov    0xc(%ebp),%eax
085fd70c +0x2cf:  mov    %eax,0x4(%esp)
085fd710 +0x2d3:  mov    %ebx,(%esp)
085fd713 +0x2d6:  call   085fd730 <+0x2f3>
085fd718 +0x2db:  sub    $0x4,%esp
085fd71b +0x2de:  jmp    085fd722 <+0x2e5>
085fd71d +0x2e0:  mov    -0x10(%ebp),%eax
085fd720 +0x2e3:  mov    %eax,(%ebx)
085fd722 +0x2e5:  mov    %ebx,%eax
085fd724 +0x2e7:  lea    -0x8(%ebp),%esp
085fd727 +0x2ea:  add    $0x0,%esp
085fd72a +0x2ed:  pop    %ebx
085fd72b +0x2ee:  pop    %esi
085fd72c +0x2ef:  pop    %ebp
085fd72d +0x2f0:  ret    $0x4
085fd730 +0x2f3:  push   %ebp
085fd731 +0x2f4:  mov    %esp,%ebp
085fd733 +0x2f6:  push   %ebx
085fd734 +0x2f7:  sub    $0x14,%esp
085fd737 +0x2fa:  mov    0x8(%ebp),%ebx
085fd73a +0x2fd:  mov    0xc(%ebp),%eax
085fd73d +0x300:  add    $0x4,%eax
085fd740 +0x303:  mov    %eax,0x4(%esp)
085fd744 +0x307:  mov    %ebx,(%esp)
085fd747 +0x30a:  call   085fda1a <+0x5dd>
085fd74c +0x30f:  mov    %ebx,%eax
085fd74e +0x311:  add    $0x14,%esp
085fd751 +0x314:  pop    %ebx
085fd752 +0x315:  pop    %ebp
085fd753 +0x316:  ret    $0x4
085fd756 +0x319:  push   %ebp
085fd757 +0x31a:  mov    %esp,%ebp
085fd759 +0x31c:  mov    0x8(%ebp),%eax
085fd75c +0x31f:  pop    %ebp
085fd75d +0x320:  ret
085fd75e +0x321:  push   %ebp
085fd75f +0x322:  mov    %esp,%ebp
085fd761 +0x324:  mov    0x8(%ebp),%eax
085fd764 +0x327:  pop    %ebp
085fd765 +0x328:  ret
085fd766 +0x329:  push   %ebp
085fd767 +0x32a:  mov    %esp,%ebp
085fd769 +0x32c:  push   %esi
085fd76a +0x32d:  push   %ebx
085fd76b +0x32e:  sub    $0x50,%esp
085fd76e +0x331:  mov    0x8(%ebp),%ebx
085fd771 +0x334:  mov    0xc(%ebp),%eax
085fd774 +0x337:  mov    %eax,(%esp)
085fd777 +0x33a:  call   085fc46e <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x600>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x600
085fd77c +0x33f:  mov    %eax,-0x14(%ebp)
085fd77f +0x342:  mov    0xc(%ebp),%eax
085fd782 +0x345:  mov    %eax,(%esp)
085fd785 +0x348:  call   085fc9aa <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xb3c>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xb3c
085fd78a +0x34d:  mov    %eax,-0x10(%ebp)
085fd78d +0x350:  movb   $0x1,-0x9(%ebp)
085fd791 +0x354:  jmp    085fd7ef <+0x3b2>
085fd793 +0x356:  mov    -0x14(%ebp),%eax
085fd796 +0x359:  mov    %eax,-0x10(%ebp)
085fd799 +0x35c:  mov    -0x14(%ebp),%eax
085fd79c +0x35f:  mov    %eax,(%esp)
085fd79f +0x362:  call   085fda30 <+0x5f3>
085fd7a4 +0x367:  mov    %eax,%esi
085fd7a6 +0x369:  mov    0x10(%ebp),%eax
085fd7a9 +0x36c:  mov    %eax,0x4(%esp)
085fd7ad +0x370:  lea    -0x2d(%ebp),%eax
085fd7b0 +0x373:  mov    %eax,(%esp)
085fd7b3 +0x376:  call   085fda28 <+0x5eb>
085fd7b8 +0x37b:  mov    0xc(%ebp),%edx
085fd7bb +0x37e:  mov    %esi,0x8(%esp)
085fd7bf +0x382:  mov    %eax,0x4(%esp)
085fd7c3 +0x386:  mov    %edx,(%esp)
085fd7c6 +0x389:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085fd7cb +0x38e:  mov    %al,-0x9(%ebp)
085fd7ce +0x391:  cmpb   $0x0,-0x9(%ebp)
085fd7d2 +0x395:  je     085fd7e1 <+0x3a4>
085fd7d4 +0x397:  mov    -0x14(%ebp),%eax
085fd7d7 +0x39a:  mov    %eax,(%esp)
085fd7da +0x39d:  call   085fc96a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xafc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xafc
085fd7df +0x3a2:  jmp    085fd7ec <+0x3af>
085fd7e1 +0x3a4:  mov    -0x14(%ebp),%eax
085fd7e4 +0x3a7:  mov    %eax,(%esp)
085fd7e7 +0x3aa:  call   085fc95f <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xaf1>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xaf1
085fd7ec +0x3af:  mov    %eax,-0x14(%ebp)
085fd7ef +0x3b2:  cmpl   $0x0,-0x14(%ebp)
085fd7f3 +0x3b6:  setne  %al
085fd7f6 +0x3b9:  test   %al,%al
085fd7f8 +0x3bb:  jne    085fd793 <+0x356>
085fd7fa +0x3bd:  mov    -0x10(%ebp),%eax
085fd7fd +0x3c0:  mov    %eax,0x4(%esp)
085fd801 +0x3c4:  lea    -0x34(%ebp),%eax
085fd804 +0x3c7:  mov    %eax,(%esp)
085fd807 +0x3ca:  call   085fda1a <+0x5dd>
085fd80c +0x3cf:  cmpb   $0x0,-0x9(%ebp)
085fd810 +0x3d3:  je     085fd891 <+0x454>
085fd812 +0x3d5:  lea    -0x2c(%ebp),%eax
085fd815 +0x3d8:  mov    0xc(%ebp),%edx
085fd818 +0x3db:  mov    %edx,0x4(%esp)
085fd81c +0x3df:  mov    %eax,(%esp)
085fd81f +0x3e2:  call   085fd942 <+0x505>
085fd824 +0x3e7:  sub    $0x4,%esp
085fd827 +0x3ea:  lea    -0x2c(%ebp),%eax
085fd82a +0x3ed:  mov    %eax,0x4(%esp)
085fd82e +0x3f1:  lea    -0x34(%ebp),%eax
085fd831 +0x3f4:  mov    %eax,(%esp)
085fd834 +0x3f7:  call   085fda06 <+0x5c9>
085fd839 +0x3fc:  test   %al,%al
085fd83b +0x3fe:  je     085fd886 <+0x449>
085fd83d +0x400:  movb   $0x1,-0x25(%ebp)
085fd841 +0x404:  mov    -0x10(%ebp),%ecx
085fd844 +0x407:  mov    -0x14(%ebp),%edx
085fd847 +0x40a:  lea    -0x24(%ebp),%eax
085fd84a +0x40d:  mov    0x10(%ebp),%esi
085fd84d +0x410:  mov    %esi,0x10(%esp)
085fd851 +0x414:  mov    %ecx,0xc(%esp)
085fd855 +0x418:  mov    %edx,0x8(%esp)
085fd859 +0x41c:  mov    0xc(%ebp),%edx
085fd85c +0x41f:  mov    %edx,0x4(%esp)
085fd860 +0x423:  mov    %eax,(%esp)
085fd863 +0x426:  call   085fda52 <+0x615>
085fd868 +0x42b:  sub    $0x4,%esp
085fd86b +0x42e:  lea    -0x25(%ebp),%eax
085fd86e +0x431:  mov    %eax,0x8(%esp)
085fd872 +0x435:  lea    -0x24(%ebp),%eax
085fd875 +0x438:  mov    %eax,0x4(%esp)
085fd879 +0x43c:  mov    %ebx,(%esp)
085fd87c +0x43f:  call   085fdb1a <+0x6dd>
085fd881 +0x444:  jmp    085fd927 <+0x4ea>
085fd886 +0x449:  lea    -0x34(%ebp),%eax
085fd889 +0x44c:  mov    %eax,(%esp)
085fd88c +0x44f:  call   085fdb48 <+0x70b>
085fd891 +0x454:  mov    0x10(%ebp),%eax
085fd894 +0x457:  mov    %eax,0x4(%esp)
085fd898 +0x45b:  lea    -0x1e(%ebp),%eax
085fd89b +0x45e:  mov    %eax,(%esp)
085fd89e +0x461:  call   085fda28 <+0x5eb>
085fd8a3 +0x466:  mov    %eax,%esi
085fd8a5 +0x468:  mov    -0x34(%ebp),%eax
085fd8a8 +0x46b:  mov    %eax,(%esp)
085fd8ab +0x46e:  call   085fd9e4 <+0x5a7>
085fd8b0 +0x473:  mov    0xc(%ebp),%edx
085fd8b3 +0x476:  mov    %esi,0x8(%esp)
085fd8b7 +0x47a:  mov    %eax,0x4(%esp)
085fd8bb +0x47e:  mov    %edx,(%esp)
085fd8be +0x481:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085fd8c3 +0x486:  test   %al,%al
085fd8c5 +0x488:  je     085fd90d <+0x4d0>
085fd8c7 +0x48a:  movb   $0x1,-0x1d(%ebp)
085fd8cb +0x48e:  mov    -0x10(%ebp),%ecx
085fd8ce +0x491:  mov    -0x14(%ebp),%edx
085fd8d1 +0x494:  lea    -0x1c(%ebp),%eax
085fd8d4 +0x497:  mov    0x10(%ebp),%esi
085fd8d7 +0x49a:  mov    %esi,0x10(%esp)
085fd8db +0x49e:  mov    %ecx,0xc(%esp)
085fd8df +0x4a2:  mov    %edx,0x8(%esp)
085fd8e3 +0x4a6:  mov    0xc(%ebp),%edx
085fd8e6 +0x4a9:  mov    %edx,0x4(%esp)
085fd8ea +0x4ad:  mov    %eax,(%esp)
085fd8ed +0x4b0:  call   085fda52 <+0x615>
085fd8f2 +0x4b5:  sub    $0x4,%esp
085fd8f5 +0x4b8:  lea    -0x1d(%ebp),%eax
085fd8f8 +0x4bb:  mov    %eax,0x8(%esp)
085fd8fc +0x4bf:  lea    -0x1c(%ebp),%eax
085fd8ff +0x4c2:  mov    %eax,0x4(%esp)
085fd903 +0x4c6:  mov    %ebx,(%esp)
085fd906 +0x4c9:  call   085fdb1a <+0x6dd>
085fd90b +0x4ce:  jmp    085fd927 <+0x4ea>
085fd90d +0x4d0:  movb   $0x0,-0x15(%ebp)
085fd911 +0x4d4:  lea    -0x15(%ebp),%eax
085fd914 +0x4d7:  mov    %eax,0x8(%esp)
085fd918 +0x4db:  lea    -0x34(%ebp),%eax
085fd91b +0x4de:  mov    %eax,0x4(%esp)
085fd91f +0x4e2:  mov    %ebx,(%esp)
085fd922 +0x4e5:  call   085fdb66 <+0x729>
085fd927 +0x4ea:  mov    %ebx,%eax
085fd929 +0x4ec:  lea    -0x8(%ebp),%esp
085fd92c +0x4ef:  add    $0x0,%esp
085fd92f +0x4f2:  pop    %ebx
085fd930 +0x4f3:  pop    %esi
085fd931 +0x4f4:  pop    %ebp
085fd932 +0x4f5:  ret    $0x4
085fd935 +0x4f8:  nop
085fd936 +0x4f9:  push   %ebp
085fd937 +0x4fa:  mov    %esp,%ebp
085fd939 +0x4fc:  mov    0x8(%ebp),%eax
085fd93c +0x4ff:  mov    0x14(%eax),%eax
085fd93f +0x502:  pop    %ebp
085fd940 +0x503:  ret
085fd941 +0x504:  nop
085fd942 +0x505:  push   %ebp
085fd943 +0x506:  mov    %esp,%ebp
085fd945 +0x508:  push   %ebx
085fd946 +0x509:  sub    $0x14,%esp
085fd949 +0x50c:  mov    0x8(%ebp),%ebx
085fd94c +0x50f:  mov    0xc(%ebp),%eax
085fd94f +0x512:  mov    0xc(%eax),%eax
085fd952 +0x515:  mov    %eax,0x4(%esp)
085fd956 +0x519:  mov    %ebx,(%esp)
085fd959 +0x51c:  call   085fda1a <+0x5dd>
085fd95e +0x521:  mov    %ebx,%eax
085fd960 +0x523:  add    $0x14,%esp
085fd963 +0x526:  pop    %ebx
085fd964 +0x527:  pop    %ebp
085fd965 +0x528:  ret    $0x4
085fd968 +0x52b:  push   %ebp
085fd969 +0x52c:  mov    %esp,%ebp
085fd96b +0x52e:  push   %ebx
085fd96c +0x52f:  sub    $0x14,%esp
085fd96f +0x532:  mov    0x8(%ebp),%ebx
085fd972 +0x535:  jmp    085fd9c0 <+0x583>
085fd974 +0x537:  mov    0x10(%ebp),%eax
085fd977 +0x53a:  mov    %eax,(%esp)
085fd97a +0x53d:  call   085fda30 <+0x5f3>
085fd97f +0x542:  mov    0xc(%ebp),%edx
085fd982 +0x545:  mov    0x18(%ebp),%ecx
085fd985 +0x548:  mov    %ecx,0x8(%esp)
085fd989 +0x54c:  mov    %eax,0x4(%esp)
085fd98d +0x550:  mov    %edx,(%esp)
085fd990 +0x553:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085fd995 +0x558:  xor    $0x1,%eax
085fd998 +0x55b:  test   %al,%al
085fd99a +0x55d:  je     085fd9b2 <+0x575>
085fd99c +0x55f:  mov    0x10(%ebp),%eax
085fd99f +0x562:  mov    %eax,0x14(%ebp)
085fd9a2 +0x565:  mov    0x10(%ebp),%eax
085fd9a5 +0x568:  mov    %eax,(%esp)
085fd9a8 +0x56b:  call   085fc96a <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xafc>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xafc
085fd9ad +0x570:  mov    %eax,0x10(%ebp)
085fd9b0 +0x573:  jmp    085fd9c0 <+0x583>
085fd9b2 +0x575:  mov    0x10(%ebp),%eax
085fd9b5 +0x578:  mov    %eax,(%esp)
085fd9b8 +0x57b:  call   085fc95f <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xaf1>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xaf1
085fd9bd +0x580:  mov    %eax,0x10(%ebp)
085fd9c0 +0x583:  cmpl   $0x0,0x10(%ebp)
085fd9c4 +0x587:  setne  %al
085fd9c7 +0x58a:  test   %al,%al
085fd9c9 +0x58c:  jne    085fd974 <+0x537>
085fd9cb +0x58e:  mov    0x14(%ebp),%eax
085fd9ce +0x591:  mov    %eax,0x4(%esp)
085fd9d2 +0x595:  mov    %ebx,(%esp)
085fd9d5 +0x598:  call   085fda1a <+0x5dd>
085fd9da +0x59d:  mov    %ebx,%eax
085fd9dc +0x59f:  add    $0x14,%esp
085fd9df +0x5a2:  pop    %ebx
085fd9e0 +0x5a3:  pop    %ebp
085fd9e1 +0x5a4:  ret    $0x4
085fd9e4 +0x5a7:  push   %ebp
085fd9e5 +0x5a8:  mov    %esp,%ebp
085fd9e7 +0x5aa:  sub    $0x28,%esp
085fd9ea +0x5ad:  mov    0x8(%ebp),%eax
085fd9ed +0x5b0:  mov    %eax,(%esp)
085fd9f0 +0x5b3:  call   085fdb94 <+0x757>
085fd9f5 +0x5b8:  mov    %eax,0x4(%esp)
085fd9f9 +0x5bc:  lea    -0x9(%ebp),%eax
085fd9fc +0x5bf:  mov    %eax,(%esp)
085fd9ff +0x5c2:  call   085fda28 <+0x5eb>
085fda04 +0x5c7:  leave
085fda05 +0x5c8:  ret
085fda06 +0x5c9:  push   %ebp
085fda07 +0x5ca:  mov    %esp,%ebp
085fda09 +0x5cc:  mov    0x8(%ebp),%eax
085fda0c +0x5cf:  mov    (%eax),%edx
085fda0e +0x5d1:  mov    0xc(%ebp),%eax
085fda11 +0x5d4:  mov    (%eax),%eax
085fda13 +0x5d6:  cmp    %eax,%edx
085fda15 +0x5d8:  sete   %al
085fda18 +0x5db:  pop    %ebp
085fda19 +0x5dc:  ret
085fda1a +0x5dd:  push   %ebp
085fda1b +0x5de:  mov    %esp,%ebp
085fda1d +0x5e0:  mov    0xc(%ebp),%edx
085fda20 +0x5e3:  mov    0x8(%ebp),%eax
085fda23 +0x5e6:  mov    %edx,(%eax)
085fda25 +0x5e8:  pop    %ebp
085fda26 +0x5e9:  ret
085fda27 +0x5ea:  nop
085fda28 +0x5eb:  push   %ebp
085fda29 +0x5ec:  mov    %esp,%ebp
085fda2b +0x5ee:  mov    0xc(%ebp),%eax
085fda2e +0x5f1:  pop    %ebp
085fda2f +0x5f2:  ret
085fda30 +0x5f3:  push   %ebp
085fda31 +0x5f4:  mov    %esp,%ebp
085fda33 +0x5f6:  sub    $0x28,%esp
085fda36 +0x5f9:  mov    0x8(%ebp),%eax
085fda39 +0x5fc:  mov    %eax,(%esp)
085fda3c +0x5ff:  call   085fdb9f <+0x762>
085fda41 +0x604:  mov    %eax,0x4(%esp)
085fda45 +0x608:  lea    -0x9(%ebp),%eax
085fda48 +0x60b:  mov    %eax,(%esp)
085fda4b +0x60e:  call   085fda28 <+0x5eb>
085fda50 +0x613:  leave
085fda51 +0x614:  ret
085fda52 +0x615:  push   %ebp
085fda53 +0x616:  mov    %esp,%ebp
085fda55 +0x618:  push   %esi
085fda56 +0x619:  push   %ebx
085fda57 +0x61a:  sub    $0x20,%esp
085fda5a +0x61d:  mov    0x8(%ebp),%esi
085fda5d +0x620:  cmpl   $0x0,0x10(%ebp)
085fda61 +0x624:  jne    085fdaa9 <+0x66c>
085fda63 +0x626:  mov    0xc(%ebp),%eax
085fda66 +0x629:  mov    %eax,(%esp)
085fda69 +0x62c:  call   085fc9aa <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xb3c>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xb3c
085fda6e +0x631:  cmp    0x14(%ebp),%eax
085fda71 +0x634:  je     085fdaa9 <+0x66c>
085fda73 +0x636:  mov    0x14(%ebp),%eax
085fda76 +0x639:  mov    %eax,(%esp)
085fda79 +0x63c:  call   085fd9e4 <+0x5a7>
085fda7e +0x641:  mov    %eax,%ebx
085fda80 +0x643:  mov    0x18(%ebp),%eax
085fda83 +0x646:  mov    %eax,0x4(%esp)
085fda87 +0x64a:  lea    -0xe(%ebp),%eax
085fda8a +0x64d:  mov    %eax,(%esp)
085fda8d +0x650:  call   085fda28 <+0x5eb>
085fda92 +0x655:  mov    0xc(%ebp),%edx
085fda95 +0x658:  mov    %ebx,0x8(%esp)
085fda99 +0x65c:  mov    %eax,0x4(%esp)
085fda9d +0x660:  mov    %edx,(%esp)
085fdaa0 +0x663:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085fdaa5 +0x668:  test   %al,%al
085fdaa7 +0x66a:  je     085fdab0 <+0x673>
085fdaa9 +0x66c:  mov    $0x1,%eax
085fdaae +0x671:  jmp    085fdab5 <+0x678>
085fdab0 +0x673:  mov    $0x0,%eax
085fdab5 +0x678:  mov    %al,-0xd(%ebp)
085fdab8 +0x67b:  mov    0x18(%ebp),%eax
085fdabb +0x67e:  mov    %eax,0x4(%esp)
085fdabf +0x682:  mov    0xc(%ebp),%eax
085fdac2 +0x685:  mov    %eax,(%esp)
085fdac5 +0x688:  call   085fdbaa <+0x76d>
085fdaca +0x68d:  mov    %eax,-0xc(%ebp)
085fdacd +0x690:  mov    0xc(%ebp),%eax
085fdad0 +0x693:  lea    0x4(%eax),%ecx
085fdad3 +0x696:  mov    -0xc(%ebp),%edx
085fdad6 +0x699:  movzbl -0xd(%ebp),%eax
085fdada +0x69d:  mov    %ecx,0xc(%esp)
085fdade +0x6a1:  mov    0x14(%ebp),%ecx
085fdae1 +0x6a4:  mov    %ecx,0x8(%esp)
085fdae5 +0x6a8:  mov    %edx,0x4(%esp)
085fdae9 +0x6ac:  mov    %eax,(%esp)
085fdaec +0x6af:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
085fdaf1 +0x6b4:  mov    0xc(%ebp),%eax
085fdaf4 +0x6b7:  mov    0x14(%eax),%eax
085fdaf7 +0x6ba:  lea    0x1(%eax),%edx
085fdafa +0x6bd:  mov    0xc(%ebp),%eax
085fdafd +0x6c0:  mov    %edx,0x14(%eax)
085fdb00 +0x6c3:  mov    -0xc(%ebp),%eax
085fdb03 +0x6c6:  mov    %eax,0x4(%esp)
085fdb07 +0x6ca:  mov    %esi,(%esp)
085fdb0a +0x6cd:  call   085fda1a <+0x5dd>
085fdb0f +0x6d2:  mov    %esi,%eax
085fdb11 +0x6d4:  add    $0x20,%esp
085fdb14 +0x6d7:  pop    %ebx
085fdb15 +0x6d8:  pop    %esi
085fdb16 +0x6d9:  pop    %ebp
085fdb17 +0x6da:  ret    $0x4
085fdb1a +0x6dd:  push   %ebp
085fdb1b +0x6de:  mov    %esp,%ebp
085fdb1d +0x6e0:  sub    $0x18,%esp
085fdb20 +0x6e3:  mov    0xc(%ebp),%eax
085fdb23 +0x6e6:  mov    %eax,(%esp)
085fdb26 +0x6e9:  call   085fdc2b <+0x7ee>
085fdb2b +0x6ee:  mov    0x8(%ebp),%edx
085fdb2e +0x6f1:  mov    (%eax),%eax
085fdb30 +0x6f3:  mov    %eax,(%edx)
085fdb32 +0x6f5:  mov    0x10(%ebp),%eax
085fdb35 +0x6f8:  mov    %eax,(%esp)
085fdb38 +0x6fb:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085fdb3d +0x700:  movzbl (%eax),%edx
085fdb40 +0x703:  mov    0x8(%ebp),%eax
085fdb43 +0x706:  mov    %dl,0x4(%eax)
085fdb46 +0x709:  leave
085fdb47 +0x70a:  ret
085fdb48 +0x70b:  push   %ebp
085fdb49 +0x70c:  mov    %esp,%ebp
085fdb4b +0x70e:  sub    $0x18,%esp
085fdb4e +0x711:  mov    0x8(%ebp),%eax
085fdb51 +0x714:  mov    (%eax),%eax
085fdb53 +0x716:  mov    %eax,(%esp)
085fdb56 +0x719:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
085fdb5b +0x71e:  mov    0x8(%ebp),%edx
085fdb5e +0x721:  mov    %eax,(%edx)
085fdb60 +0x723:  mov    0x8(%ebp),%eax
085fdb63 +0x726:  leave
085fdb64 +0x727:  ret
085fdb65 +0x728:  nop
085fdb66 +0x729:  push   %ebp
085fdb67 +0x72a:  mov    %esp,%ebp
085fdb69 +0x72c:  sub    $0x18,%esp
085fdb6c +0x72f:  mov    0xc(%ebp),%eax
085fdb6f +0x732:  mov    %eax,(%esp)
085fdb72 +0x735:  call   085fdc33 <+0x7f6>
085fdb77 +0x73a:  mov    0x8(%ebp),%edx
085fdb7a +0x73d:  mov    (%eax),%eax
085fdb7c +0x73f:  mov    %eax,(%edx)
085fdb7e +0x741:  mov    0x10(%ebp),%eax
085fdb81 +0x744:  mov    %eax,(%esp)
085fdb84 +0x747:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085fdb89 +0x74c:  movzbl (%eax),%edx
085fdb8c +0x74f:  mov    0x8(%ebp),%eax
085fdb8f +0x752:  mov    %dl,0x4(%eax)
085fdb92 +0x755:  leave
085fdb93 +0x756:  ret
085fdb94 +0x757:  push   %ebp
085fdb95 +0x758:  mov    %esp,%ebp
085fdb97 +0x75a:  mov    0x8(%ebp),%eax
085fdb9a +0x75d:  add    $0x10,%eax
085fdb9d +0x760:  pop    %ebp
085fdb9e +0x761:  ret
085fdb9f +0x762:  push   %ebp
085fdba0 +0x763:  mov    %esp,%ebp
085fdba2 +0x765:  mov    0x8(%ebp),%eax
085fdba5 +0x768:  add    $0x10,%eax
085fdba8 +0x76b:  pop    %ebp
085fdba9 +0x76c:  ret
085fdbaa +0x76d:  push   %ebp
085fdbab +0x76e:  mov    %esp,%ebp
085fdbad +0x770:  push   %esi
085fdbae +0x771:  push   %ebx
085fdbaf +0x772:  sub    $0x20,%esp
085fdbb2 +0x775:  mov    0x8(%ebp),%eax
085fdbb5 +0x778:  mov    %eax,(%esp)
085fdbb8 +0x77b:  call   085fdc3c <+0x7ff>
085fdbbd +0x780:  mov    %eax,-0xc(%ebp)
085fdbc0 +0x783:  mov    0xc(%ebp),%eax
085fdbc3 +0x786:  mov    %eax,(%esp)
085fdbc6 +0x789:  call   085fdc5f <+0x822>
085fdbcb +0x78e:  mov    %eax,%ebx
085fdbcd +0x790:  mov    0x8(%ebp),%eax
085fdbd0 +0x793:  mov    %eax,(%esp)
085fdbd3 +0x796:  call   085fcd32 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xec4>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xec4
085fdbd8 +0x79b:  mov    %ebx,0x8(%esp)
085fdbdc +0x79f:  mov    -0xc(%ebp),%edx
085fdbdf +0x7a2:  mov    %edx,0x4(%esp)
085fdbe3 +0x7a6:  mov    %eax,(%esp)
085fdbe6 +0x7a9:  call   085fdc68 <+0x82b>
085fdbeb +0x7ae:  jmp    085fdc21 <+0x7e4>
085fdbed +0x7b0:  mov    %eax,(%esp)
085fdbf0 +0x7b3:  call   08725ce0 <__cxa_begin_catch>
085fdbf5 +0x7b8:  mov    -0xc(%ebp),%eax
085fdbf8 +0x7bb:  mov    %eax,0x4(%esp)
085fdbfc +0x7bf:  mov    0x8(%ebp),%eax
085fdbff +0x7c2:  mov    %eax,(%esp)
085fdc02 +0x7c5:  call   085fcd54 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xee6>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xee6
085fdc07 +0x7ca:  call   08724be0 <__cxa_rethrow>
085fdc0c +0x7cf:  mov    %edx,%ebx
085fdc0e +0x7d1:  mov    %eax,%esi
085fdc10 +0x7d3:  call   08725c30 <__cxa_end_catch>
085fdc15 +0x7d8:  mov    %esi,%eax
085fdc17 +0x7da:  mov    %ebx,%edx
085fdc19 +0x7dc:  mov    %eax,(%esp)
085fdc1c +0x7df:  call   08ae3750 <_Unwind_Resume>
085fdc21 +0x7e4:  mov    -0xc(%ebp),%eax
085fdc24 +0x7e7:  add    $0x20,%esp
085fdc27 +0x7ea:  pop    %ebx
085fdc28 +0x7eb:  pop    %esi
085fdc29 +0x7ec:  pop    %ebp
085fdc2a +0x7ed:  ret
085fdc2b +0x7ee:  push   %ebp
085fdc2c +0x7ef:  mov    %esp,%ebp
085fdc2e +0x7f1:  mov    0x8(%ebp),%eax
085fdc31 +0x7f4:  pop    %ebp
085fdc32 +0x7f5:  ret
085fdc33 +0x7f6:  push   %ebp
085fdc34 +0x7f7:  mov    %esp,%ebp
085fdc36 +0x7f9:  mov    0x8(%ebp),%eax
085fdc39 +0x7fc:  pop    %ebp
085fdc3a +0x7fd:  ret
085fdc3b +0x7fe:  nop
085fdc3c +0x7ff:  push   %ebp
085fdc3d +0x800:  mov    %esp,%ebp
085fdc3f +0x802:  sub    $0x18,%esp
085fdc42 +0x805:  mov    0x8(%ebp),%eax
085fdc45 +0x808:  movl   $0x0,0x8(%esp)
085fdc4d +0x810:  movl   $0x1,0x4(%esp)
085fdc55 +0x818:  mov    %eax,(%esp)
085fdc58 +0x81b:  call   085fdca8 <+0x86b>
085fdc5d +0x820:  leave
085fdc5e +0x821:  ret
085fdc5f +0x822:  push   %ebp
085fdc60 +0x823:  mov    %esp,%ebp
085fdc62 +0x825:  mov    0x8(%ebp),%eax
085fdc65 +0x828:  pop    %ebp
085fdc66 +0x829:  ret
085fdc67 +0x82a:  nop
085fdc68 +0x82b:  push   %ebp
085fdc69 +0x82c:  mov    %esp,%ebp
085fdc6b +0x82e:  push   %ebx
085fdc6c +0x82f:  sub    $0x14,%esp
085fdc6f +0x832:  mov    0x10(%ebp),%eax
085fdc72 +0x835:  mov    %eax,(%esp)
085fdc75 +0x838:  call   085fdc5f <+0x822>
085fdc7a +0x83d:  mov    %eax,%ebx
085fdc7c +0x83f:  mov    0xc(%ebp),%eax
085fdc7f +0x842:  mov    %eax,0x4(%esp)
085fdc83 +0x846:  movl   $0x28,(%esp)
085fdc8a +0x84d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085fdc8f +0x852:  mov    %eax,%edx
085fdc91 +0x854:  test   %edx,%edx
085fdc93 +0x856:  je     085fdca1 <+0x864>
085fdc95 +0x858:  mov    %ebx,0x4(%esp)
085fdc99 +0x85c:  mov    %eax,(%esp)
085fdc9c +0x85f:  call   085fdce8 <+0x8ab>
085fdca1 +0x864:  add    $0x14,%esp
085fdca4 +0x867:  pop    %ebx
085fdca5 +0x868:  pop    %ebp
085fdca6 +0x869:  ret
085fdca7 +0x86a:  nop
085fdca8 +0x86b:  push   %ebp
085fdca9 +0x86c:  mov    %esp,%ebp
085fdcab +0x86e:  sub    $0x18,%esp
085fdcae +0x871:  mov    0x8(%ebp),%eax
085fdcb1 +0x874:  mov    %eax,(%esp)
085fdcb4 +0x877:  call   085fdd48 <+0x90b>
085fdcb9 +0x87c:  cmp    0xc(%ebp),%eax
085fdcbc +0x87f:  setb   %al
085fdcbf +0x882:  movzbl %al,%eax
085fdcc2 +0x885:  test   %eax,%eax
085fdcc4 +0x887:  setne  %al
085fdcc7 +0x88a:  test   %al,%al
085fdcc9 +0x88c:  je     085fdcd0 <+0x893>
085fdccb +0x88e:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
085fdcd0 +0x893:  mov    0xc(%ebp),%edx
085fdcd3 +0x896:  mov    %edx,%eax
085fdcd5 +0x898:  shl    $0x2,%eax
085fdcd8 +0x89b:  add    %edx,%eax
085fdcda +0x89d:  shl    $0x3,%eax
085fdcdd +0x8a0:  mov    %eax,(%esp)
085fdce0 +0x8a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085fdce5 +0x8a8:  leave
085fdce6 +0x8a9:  ret
085fdce7 +0x8aa:  nop
085fdce8 +0x8ab:  push   %ebp
085fdce9 +0x8ac:  mov    %esp,%ebp
085fdceb +0x8ae:  sub    $0x18,%esp
085fdcee +0x8b1:  mov    0x8(%ebp),%eax
085fdcf1 +0x8b4:  movl   $0x0,(%eax)
085fdcf7 +0x8ba:  mov    0x8(%ebp),%eax
085fdcfa +0x8bd:  movl   $0x0,0x4(%eax)
085fdd01 +0x8c4:  mov    0x8(%ebp),%eax
085fdd04 +0x8c7:  movl   $0x0,0x8(%eax)
085fdd0b +0x8ce:  mov    0x8(%ebp),%eax
085fdd0e +0x8d1:  movl   $0x0,0xc(%eax)
085fdd15 +0x8d8:  mov    0xc(%ebp),%eax
085fdd18 +0x8db:  mov    %eax,(%esp)
085fdd1b +0x8de:  call   085fdc5f <+0x822>
085fdd20 +0x8e3:  mov    0x8(%ebp),%edx
085fdd23 +0x8e6:  mov    (%eax),%ecx
085fdd25 +0x8e8:  mov    %ecx,0x10(%edx)
085fdd28 +0x8eb:  mov    0x4(%eax),%ecx
085fdd2b +0x8ee:  mov    %ecx,0x14(%edx)
085fdd2e +0x8f1:  mov    0x8(%eax),%ecx
085fdd31 +0x8f4:  mov    %ecx,0x18(%edx)
085fdd34 +0x8f7:  mov    0xc(%eax),%ecx
085fdd37 +0x8fa:  mov    %ecx,0x1c(%edx)
085fdd3a +0x8fd:  mov    0x10(%eax),%ecx
085fdd3d +0x900:  mov    %ecx,0x20(%edx)
085fdd40 +0x903:  mov    0x14(%eax),%eax
085fdd43 +0x906:  mov    %eax,0x24(%edx)
085fdd46 +0x909:  leave
085fdd47 +0x90a:  ret
085fdd48 +0x90b:  push   %ebp
085fdd49 +0x90c:  mov    %esp,%ebp
085fdd4b +0x90e:  mov    $0x6666666,%eax
085fdd50 +0x913:  pop    %ebp
085fdd51 +0x914:  ret
085fdd52 +0x915:  nop
085fdd53 +0x916:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85fd43d

/* secretshop::CSecretShopStatistic::Clear() */

void secretshop::CSecretShopStatistic::_GLOBAL__I_Clear(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
