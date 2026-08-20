# ItemVendingMachine

`_GLOBAL__I__ZN18ItemVendingMachineC2Ev`

`global constructors keyed to ItemVendingMachine::ItemVendingMachine()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ItemVendingMachine` | `0x0854c565` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c565  _GLOBAL__I__ZN18ItemVendingMachineC2Ev
#           global constructors keyed to ItemVendingMachine::ItemVendingMachine()
# range [0x0854c565, 0x0854c99f]
0854c565 +0x000:  push   %ebp
0854c566 +0x001:  mov    %esp,%ebp
0854c568 +0x003:  sub    $0x18,%esp
0854c56b +0x006:  movl   $0xffff,0x4(%esp)
0854c573 +0x00e:  movl   $0x1,(%esp)
0854c57a +0x015:  call   0854c525 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0854c57f +0x01a:  leave
0854c580 +0x01b:  ret
0854c581 +0x01c:  nop
0854c582 +0x01d:  push   %ebp
0854c583 +0x01e:  mov    %esp,%ebp
0854c585 +0x020:  sub    $0x4,%esp
0854c588 +0x023:  mov    0x8(%ebp),%eax
0854c58b +0x026:  mov    0x2c(%eax),%eax
0854c58e +0x029:  mov    %eax,-0x4(%ebp)
0854c591 +0x02c:  flds   -0x4(%ebp)
0854c594 +0x02f:  leave
0854c595 +0x030:  ret
0854c596 +0x031:  push   %ebp
0854c597 +0x032:  mov    %esp,%ebp
0854c599 +0x034:  mov    0x8(%ebp),%eax
0854c59c +0x037:  mov    0x4c(%eax),%eax
0854c59f +0x03a:  pop    %ebp
0854c5a0 +0x03b:  ret
0854c5a1 +0x03c:  nop
0854c5a2 +0x03d:  push   %ebp
0854c5a3 +0x03e:  mov    %esp,%ebp
0854c5a5 +0x040:  sub    $0x18,%esp
0854c5a8 +0x043:  mov    0x8(%ebp),%eax
0854c5ab +0x046:  mov    %eax,(%esp)
0854c5ae +0x049:  call   0854c606 <+0xa1>
0854c5b3 +0x04e:  leave
0854c5b4 +0x04f:  ret
0854c5b5 +0x050:  nop
0854c5b6 +0x051:  push   %ebp
0854c5b7 +0x052:  mov    %esp,%ebp
0854c5b9 +0x054:  sub    $0x18,%esp
0854c5bc +0x057:  mov    0x8(%ebp),%eax
0854c5bf +0x05a:  mov    %eax,(%esp)
0854c5c2 +0x05d:  call   0854c5de <+0x79>
0854c5c7 +0x062:  leave
0854c5c8 +0x063:  ret
0854c5c9 +0x064:  nop
0854c5ca +0x065:  push   %ebp
0854c5cb +0x066:  mov    %esp,%ebp
0854c5cd +0x068:  sub    $0x18,%esp
0854c5d0 +0x06b:  mov    0x8(%ebp),%eax
0854c5d3 +0x06e:  mov    %eax,(%esp)
0854c5d6 +0x071:  call   0854c5a2 <+0x3d>
0854c5db +0x076:  leave
0854c5dc +0x077:  ret
0854c5dd +0x078:  nop
0854c5de +0x079:  push   %ebp
0854c5df +0x07a:  mov    %esp,%ebp
0854c5e1 +0x07c:  sub    $0x18,%esp
0854c5e4 +0x07f:  mov    0x8(%ebp),%eax
0854c5e7 +0x082:  mov    %eax,(%esp)
0854c5ea +0x085:  call   0854c658 <+0xf3>
0854c5ef +0x08a:  leave
0854c5f0 +0x08b:  ret
0854c5f1 +0x08c:  nop
0854c5f2 +0x08d:  push   %ebp
0854c5f3 +0x08e:  mov    %esp,%ebp
0854c5f5 +0x090:  sub    $0x18,%esp
0854c5f8 +0x093:  mov    0x8(%ebp),%eax
0854c5fb +0x096:  mov    %eax,(%esp)
0854c5fe +0x099:  call   0854c66c <+0x107>
0854c603 +0x09e:  leave
0854c604 +0x09f:  ret
0854c605 +0x0a0:  nop
0854c606 +0x0a1:  push   %ebp
0854c607 +0x0a2:  mov    %esp,%ebp
0854c609 +0x0a4:  push   %esi
0854c60a +0x0a5:  push   %ebx
0854c60b +0x0a6:  sub    $0x10,%esp
0854c60e +0x0a9:  mov    0x8(%ebp),%eax
0854c611 +0x0ac:  mov    %eax,(%esp)
0854c614 +0x0af:  call   081ac896 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x1a2>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x1a2
0854c619 +0x0b4:  mov    %eax,0x4(%esp)
0854c61d +0x0b8:  mov    0x8(%ebp),%eax
0854c620 +0x0bb:  mov    %eax,(%esp)
0854c623 +0x0be:  call   0854c680 <+0x11b>
0854c628 +0x0c3:  jmp    0854c645 <+0xe0>
0854c62a +0x0c5:  mov    %edx,%ebx
0854c62c +0x0c7:  mov    %eax,%esi
0854c62e +0x0c9:  mov    0x8(%ebp),%eax
0854c631 +0x0cc:  mov    %eax,(%esp)
0854c634 +0x0cf:  call   0854c5f2 <+0x8d>
0854c639 +0x0d4:  mov    %esi,%eax
0854c63b +0x0d6:  mov    %ebx,%edx
0854c63d +0x0d8:  mov    %eax,(%esp)
0854c640 +0x0db:  call   08ae3750 <_Unwind_Resume>
0854c645 +0x0e0:  mov    0x8(%ebp),%eax
0854c648 +0x0e3:  mov    %eax,(%esp)
0854c64b +0x0e6:  call   0854c5f2 <+0x8d>
0854c650 +0x0eb:  add    $0x10,%esp
0854c653 +0x0ee:  pop    %ebx
0854c654 +0x0ef:  pop    %esi
0854c655 +0x0f0:  pop    %ebp
0854c656 +0x0f1:  ret
0854c657 +0x0f2:  nop
0854c658 +0x0f3:  push   %ebp
0854c659 +0x0f4:  mov    %esp,%ebp
0854c65b +0x0f6:  sub    $0x18,%esp
0854c65e +0x0f9:  mov    0x8(%ebp),%eax
0854c661 +0x0fc:  mov    %eax,(%esp)
0854c664 +0x0ff:  call   0854c6d6 <+0x171>
0854c669 +0x104:  leave
0854c66a +0x105:  ret
0854c66b +0x106:  nop
0854c66c +0x107:  push   %ebp
0854c66d +0x108:  mov    %esp,%ebp
0854c66f +0x10a:  sub    $0x18,%esp
0854c672 +0x10d:  mov    0x8(%ebp),%eax
0854c675 +0x110:  mov    %eax,(%esp)
0854c678 +0x113:  call   0854c726 <+0x1c1>
0854c67d +0x118:  leave
0854c67e +0x119:  ret
0854c67f +0x11a:  nop
0854c680 +0x11b:  push   %ebp
0854c681 +0x11c:  mov    %esp,%ebp
0854c683 +0x11e:  sub    $0x28,%esp
0854c686 +0x121:  jmp    0854c6c8 <+0x163>
0854c688 +0x123:  mov    0xc(%ebp),%eax
0854c68b +0x126:  mov    %eax,(%esp)
0854c68e +0x129:  call   081ac99e <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x2aa>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x2aa
0854c693 +0x12e:  mov    %eax,0x4(%esp)
0854c697 +0x132:  mov    0x8(%ebp),%eax
0854c69a +0x135:  mov    %eax,(%esp)
0854c69d +0x138:  call   0854c680 <+0x11b>
0854c6a2 +0x13d:  mov    0xc(%ebp),%eax
0854c6a5 +0x140:  mov    %eax,(%esp)
0854c6a8 +0x143:  call   081ac9a9 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x2b5>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x2b5
0854c6ad +0x148:  mov    %eax,-0xc(%ebp)
0854c6b0 +0x14b:  mov    0xc(%ebp),%eax
0854c6b3 +0x14e:  mov    %eax,0x4(%esp)
0854c6b7 +0x152:  mov    0x8(%ebp),%eax
0854c6ba +0x155:  mov    %eax,(%esp)
0854c6bd +0x158:  call   0854c72c <+0x1c7>
0854c6c2 +0x15d:  mov    -0xc(%ebp),%eax
0854c6c5 +0x160:  mov    %eax,0xc(%ebp)
0854c6c8 +0x163:  cmpl   $0x0,0xc(%ebp)
0854c6cc +0x167:  setne  %al
0854c6cf +0x16a:  test   %al,%al
0854c6d1 +0x16c:  jne    0854c688 <+0x123>
0854c6d3 +0x16e:  leave
0854c6d4 +0x16f:  ret
0854c6d5 +0x170:  nop
0854c6d6 +0x171:  push   %ebp
0854c6d7 +0x172:  mov    %esp,%ebp
0854c6d9 +0x174:  sub    $0x18,%esp
0854c6dc +0x177:  mov    0x8(%ebp),%eax
0854c6df +0x17a:  mov    %eax,(%esp)
0854c6e2 +0x17d:  call   0854c760 <+0x1fb>
0854c6e7 +0x182:  mov    0x8(%ebp),%eax
0854c6ea +0x185:  movl   $0x0,0x4(%eax)
0854c6f1 +0x18c:  mov    0x8(%ebp),%eax
0854c6f4 +0x18f:  movl   $0x0,0x8(%eax)
0854c6fb +0x196:  mov    0x8(%ebp),%eax
0854c6fe +0x199:  movl   $0x0,0xc(%eax)
0854c705 +0x1a0:  mov    0x8(%ebp),%eax
0854c708 +0x1a3:  movl   $0x0,0x10(%eax)
0854c70f +0x1aa:  mov    0x8(%ebp),%eax
0854c712 +0x1ad:  movl   $0x0,0x14(%eax)
0854c719 +0x1b4:  mov    0x8(%ebp),%eax
0854c71c +0x1b7:  mov    %eax,(%esp)
0854c71f +0x1ba:  call   0854c774 <+0x20f>
0854c724 +0x1bf:  leave
0854c725 +0x1c0:  ret
0854c726 +0x1c1:  push   %ebp
0854c727 +0x1c2:  mov    %esp,%ebp
0854c729 +0x1c4:  pop    %ebp
0854c72a +0x1c5:  ret
0854c72b +0x1c6:  nop
0854c72c +0x1c7:  push   %ebp
0854c72d +0x1c8:  mov    %esp,%ebp
0854c72f +0x1ca:  sub    $0x18,%esp
0854c732 +0x1cd:  mov    0x8(%ebp),%eax
0854c735 +0x1d0:  mov    %eax,(%esp)
0854c738 +0x1d3:  call   0854c7a6 <+0x241>
0854c73d +0x1d8:  mov    0xc(%ebp),%edx
0854c740 +0x1db:  mov    %edx,0x4(%esp)
0854c744 +0x1df:  mov    %eax,(%esp)
0854c747 +0x1e2:  call   0854c7da <+0x275>
0854c74c +0x1e7:  mov    0xc(%ebp),%eax
0854c74f +0x1ea:  mov    %eax,0x4(%esp)
0854c753 +0x1ee:  mov    0x8(%ebp),%eax
0854c756 +0x1f1:  mov    %eax,(%esp)
0854c759 +0x1f4:  call   0854c7ee <+0x289>
0854c75e +0x1f9:  leave
0854c75f +0x1fa:  ret
0854c760 +0x1fb:  push   %ebp
0854c761 +0x1fc:  mov    %esp,%ebp
0854c763 +0x1fe:  sub    $0x18,%esp
0854c766 +0x201:  mov    0x8(%ebp),%eax
0854c769 +0x204:  mov    %eax,(%esp)
0854c76c +0x207:  call   0854c810 <+0x2ab>
0854c771 +0x20c:  leave
0854c772 +0x20d:  ret
0854c773 +0x20e:  nop
0854c774 +0x20f:  push   %ebp
0854c775 +0x210:  mov    %esp,%ebp
0854c777 +0x212:  mov    0x8(%ebp),%eax
0854c77a +0x215:  movl   $0x0,0x4(%eax)
0854c781 +0x21c:  mov    0x8(%ebp),%eax
0854c784 +0x21f:  movl   $0x0,0x8(%eax)
0854c78b +0x226:  mov    0x8(%ebp),%eax
0854c78e +0x229:  lea    0x4(%eax),%edx
0854c791 +0x22c:  mov    0x8(%ebp),%eax
0854c794 +0x22f:  mov    %edx,0xc(%eax)
0854c797 +0x232:  mov    0x8(%ebp),%eax
0854c79a +0x235:  lea    0x4(%eax),%edx
0854c79d +0x238:  mov    0x8(%ebp),%eax
0854c7a0 +0x23b:  mov    %edx,0x10(%eax)
0854c7a3 +0x23e:  pop    %ebp
0854c7a4 +0x23f:  ret
0854c7a5 +0x240:  nop
0854c7a6 +0x241:  push   %ebp
0854c7a7 +0x242:  mov    %esp,%ebp
0854c7a9 +0x244:  mov    0x8(%ebp),%eax
0854c7ac +0x247:  pop    %ebp
0854c7ad +0x248:  ret
0854c7ae +0x249:  push   %ebp
0854c7af +0x24a:  mov    %esp,%ebp
0854c7b1 +0x24c:  sub    $0x18,%esp
0854c7b4 +0x24f:  mov    0x8(%ebp),%eax
0854c7b7 +0x252:  add    $0x4,%eax
0854c7ba +0x255:  mov    %eax,(%esp)
0854c7bd +0x258:  call   0854c816 <+0x2b1>
0854c7c2 +0x25d:  leave
0854c7c3 +0x25e:  ret
0854c7c4 +0x25f:  push   %ebp
0854c7c5 +0x260:  mov    %esp,%ebp
0854c7c7 +0x262:  sub    $0x18,%esp
0854c7ca +0x265:  mov    0x8(%ebp),%eax
0854c7cd +0x268:  add    $0x10,%eax
0854c7d0 +0x26b:  mov    %eax,(%esp)
0854c7d3 +0x26e:  call   0854c7ae <+0x249>
0854c7d8 +0x273:  leave
0854c7d9 +0x274:  ret
0854c7da +0x275:  push   %ebp
0854c7db +0x276:  mov    %esp,%ebp
0854c7dd +0x278:  sub    $0x18,%esp
0854c7e0 +0x27b:  mov    0xc(%ebp),%eax
0854c7e3 +0x27e:  mov    %eax,(%esp)
0854c7e6 +0x281:  call   0854c7c4 <+0x25f>
0854c7eb +0x286:  leave
0854c7ec +0x287:  ret
0854c7ed +0x288:  nop
0854c7ee +0x289:  push   %ebp
0854c7ef +0x28a:  mov    %esp,%ebp
0854c7f1 +0x28c:  sub    $0x18,%esp
0854c7f4 +0x28f:  mov    0x8(%ebp),%eax
0854c7f7 +0x292:  movl   $0x1,0x8(%esp)
0854c7ff +0x29a:  mov    0xc(%ebp),%edx
0854c802 +0x29d:  mov    %edx,0x4(%esp)
0854c806 +0x2a1:  mov    %eax,(%esp)
0854c809 +0x2a4:  call   0854c874 <+0x30f>
0854c80e +0x2a9:  leave
0854c80f +0x2aa:  ret
0854c810 +0x2ab:  push   %ebp
0854c811 +0x2ac:  mov    %esp,%ebp
0854c813 +0x2ae:  pop    %ebp
0854c814 +0x2af:  ret
0854c815 +0x2b0:  nop
0854c816 +0x2b1:  push   %ebp
0854c817 +0x2b2:  mov    %esp,%ebp
0854c819 +0x2b4:  push   %esi
0854c81a +0x2b5:  push   %ebx
0854c81b +0x2b6:  sub    $0x10,%esp
0854c81e +0x2b9:  mov    0x8(%ebp),%eax
0854c821 +0x2bc:  mov    %eax,(%esp)
0854c824 +0x2bf:  call   0854c90a <+0x3a5>
0854c829 +0x2c4:  mov    0x8(%ebp),%edx
0854c82c +0x2c7:  mov    0x4(%edx),%ecx
0854c82f +0x2ca:  mov    0x8(%ebp),%edx
0854c832 +0x2cd:  mov    (%edx),%edx
0854c834 +0x2cf:  mov    %eax,0x8(%esp)
0854c838 +0x2d3:  mov    %ecx,0x4(%esp)
0854c83c +0x2d7:  mov    %edx,(%esp)
0854c83f +0x2da:  call   0854c912 <+0x3ad>
0854c844 +0x2df:  jmp    0854c861 <+0x2fc>
0854c846 +0x2e1:  mov    %edx,%ebx
0854c848 +0x2e3:  mov    %eax,%esi
0854c84a +0x2e5:  mov    0x8(%ebp),%eax
0854c84d +0x2e8:  mov    %eax,(%esp)
0854c850 +0x2eb:  call   0854c89c <+0x337>
0854c855 +0x2f0:  mov    %esi,%eax
0854c857 +0x2f2:  mov    %ebx,%edx
0854c859 +0x2f4:  mov    %eax,(%esp)
0854c85c +0x2f7:  call   08ae3750 <_Unwind_Resume>
0854c861 +0x2fc:  mov    0x8(%ebp),%eax
0854c864 +0x2ff:  mov    %eax,(%esp)
0854c867 +0x302:  call   0854c89c <+0x337>
0854c86c +0x307:  add    $0x10,%esp
0854c86f +0x30a:  pop    %ebx
0854c870 +0x30b:  pop    %esi
0854c871 +0x30c:  pop    %ebp
0854c872 +0x30d:  ret
0854c873 +0x30e:  nop
0854c874 +0x30f:  push   %ebp
0854c875 +0x310:  mov    %esp,%ebp
0854c877 +0x312:  sub    $0x18,%esp
0854c87a +0x315:  mov    0xc(%ebp),%eax
0854c87d +0x318:  mov    %eax,(%esp)
0854c880 +0x31b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c885 +0x320:  leave
0854c886 +0x321:  ret
0854c887 +0x322:  nop
0854c888 +0x323:  push   %ebp
0854c889 +0x324:  mov    %esp,%ebp
0854c88b +0x326:  sub    $0x18,%esp
0854c88e +0x329:  mov    0x8(%ebp),%eax
0854c891 +0x32c:  mov    %eax,(%esp)
0854c894 +0x32f:  call   0854c92c <+0x3c7>
0854c899 +0x334:  leave
0854c89a +0x335:  ret
0854c89b +0x336:  nop
0854c89c +0x337:  push   %ebp
0854c89d +0x338:  mov    %esp,%ebp
0854c89f +0x33a:  push   %esi
0854c8a0 +0x33b:  push   %ebx
0854c8a1 +0x33c:  sub    $0x10,%esp
0854c8a4 +0x33f:  mov    0x8(%ebp),%eax
0854c8a7 +0x342:  mov    0x8(%eax),%eax
0854c8aa +0x345:  mov    %eax,%edx
0854c8ac +0x347:  mov    0x8(%ebp),%eax
0854c8af +0x34a:  mov    (%eax),%eax
0854c8b1 +0x34c:  mov    %edx,%ecx
0854c8b3 +0x34e:  sub    %eax,%ecx
0854c8b5 +0x350:  mov    %ecx,%eax
0854c8b7 +0x352:  sar    $0x2,%eax
0854c8ba +0x355:  imul   $0xaaaaaaab,%eax,%eax
0854c8c0 +0x35b:  mov    %eax,%edx
0854c8c2 +0x35d:  mov    0x8(%ebp),%eax
0854c8c5 +0x360:  mov    (%eax),%eax
0854c8c7 +0x362:  mov    %edx,0x8(%esp)
0854c8cb +0x366:  mov    %eax,0x4(%esp)
0854c8cf +0x36a:  mov    0x8(%ebp),%eax
0854c8d2 +0x36d:  mov    %eax,(%esp)
0854c8d5 +0x370:  call   0854c940 <+0x3db>
0854c8da +0x375:  jmp    0854c8f7 <+0x392>
0854c8dc +0x377:  mov    %edx,%ebx
0854c8de +0x379:  mov    %eax,%esi
0854c8e0 +0x37b:  mov    0x8(%ebp),%eax
0854c8e3 +0x37e:  mov    %eax,(%esp)
0854c8e6 +0x381:  call   0854c888 <+0x323>
0854c8eb +0x386:  mov    %esi,%eax
0854c8ed +0x388:  mov    %ebx,%edx
0854c8ef +0x38a:  mov    %eax,(%esp)
0854c8f2 +0x38d:  call   08ae3750 <_Unwind_Resume>
0854c8f7 +0x392:  mov    0x8(%ebp),%eax
0854c8fa +0x395:  mov    %eax,(%esp)
0854c8fd +0x398:  call   0854c888 <+0x323>
0854c902 +0x39d:  add    $0x10,%esp
0854c905 +0x3a0:  pop    %ebx
0854c906 +0x3a1:  pop    %esi
0854c907 +0x3a2:  pop    %ebp
0854c908 +0x3a3:  ret
0854c909 +0x3a4:  nop
0854c90a +0x3a5:  push   %ebp
0854c90b +0x3a6:  mov    %esp,%ebp
0854c90d +0x3a8:  mov    0x8(%ebp),%eax
0854c910 +0x3ab:  pop    %ebp
0854c911 +0x3ac:  ret
0854c912 +0x3ad:  push   %ebp
0854c913 +0x3ae:  mov    %esp,%ebp
0854c915 +0x3b0:  sub    $0x18,%esp
0854c918 +0x3b3:  mov    0xc(%ebp),%eax
0854c91b +0x3b6:  mov    %eax,0x4(%esp)
0854c91f +0x3ba:  mov    0x8(%ebp),%eax
0854c922 +0x3bd:  mov    %eax,(%esp)
0854c925 +0x3c0:  call   0854c967 <+0x402>
0854c92a +0x3c5:  leave
0854c92b +0x3c6:  ret
0854c92c +0x3c7:  push   %ebp
0854c92d +0x3c8:  mov    %esp,%ebp
0854c92f +0x3ca:  sub    $0x18,%esp
0854c932 +0x3cd:  mov    0x8(%ebp),%eax
0854c935 +0x3d0:  mov    %eax,(%esp)
0854c938 +0x3d3:  call   0854c982 <+0x41d>
0854c93d +0x3d8:  leave
0854c93e +0x3d9:  ret
0854c93f +0x3da:  nop
0854c940 +0x3db:  push   %ebp
0854c941 +0x3dc:  mov    %esp,%ebp
0854c943 +0x3de:  sub    $0x18,%esp
0854c946 +0x3e1:  cmpl   $0x0,0xc(%ebp)
0854c94a +0x3e5:  je     0854c965 <+0x400>
0854c94c +0x3e7:  mov    0x8(%ebp),%eax
0854c94f +0x3ea:  mov    0x10(%ebp),%edx
0854c952 +0x3ed:  mov    %edx,0x8(%esp)
0854c956 +0x3f1:  mov    0xc(%ebp),%edx
0854c959 +0x3f4:  mov    %edx,0x4(%esp)
0854c95d +0x3f8:  mov    %eax,(%esp)
0854c960 +0x3fb:  call   0854c988 <+0x423>
0854c965 +0x400:  leave
0854c966 +0x401:  ret
0854c967 +0x402:  push   %ebp
0854c968 +0x403:  mov    %esp,%ebp
0854c96a +0x405:  sub    $0x18,%esp
0854c96d +0x408:  mov    0xc(%ebp),%eax
0854c970 +0x40b:  mov    %eax,0x4(%esp)
0854c974 +0x40f:  mov    0x8(%ebp),%eax
0854c977 +0x412:  mov    %eax,(%esp)
0854c97a +0x415:  call   0854c99b <+0x436>
0854c97f +0x41a:  leave
0854c980 +0x41b:  ret
0854c981 +0x41c:  nop
0854c982 +0x41d:  push   %ebp
0854c983 +0x41e:  mov    %esp,%ebp
0854c985 +0x420:  pop    %ebp
0854c986 +0x421:  ret
0854c987 +0x422:  nop
0854c988 +0x423:  push   %ebp
0854c989 +0x424:  mov    %esp,%ebp
0854c98b +0x426:  sub    $0x18,%esp
0854c98e +0x429:  mov    0xc(%ebp),%eax
0854c991 +0x42c:  mov    %eax,(%esp)
0854c994 +0x42f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c999 +0x434:  leave
0854c99a +0x435:  ret
0854c99b +0x436:  push   %ebp
0854c99c +0x437:  mov    %esp,%ebp
0854c99e +0x439:  pop    %ebp
0854c99f +0x43a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x854c565

/* ItemVendingMachine::ItemVendingMachine() */

void ItemVendingMachine::_GLOBAL__I_ItemVendingMachine(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
