# Load_list

`_ZN21CChattingEmoticonList9Load_listEv`

`CChattingEmoticonList::Load_list()`

| 类 | 地址 |
|---|---|
| `CChattingEmoticonList` | `0x080e54d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e54d2  _ZN21CChattingEmoticonList9Load_listEv
#           CChattingEmoticonList::Load_list()
# range [0x080e54d2, 0x080e581b]
080e54d2 +0x000:  push   %ebp
080e54d3 +0x001:  mov    %esp,%ebp
080e54d5 +0x003:  push   %esi
080e54d6 +0x004:  push   %ebx
080e54d7 +0x005:  sub    $0xa0,%esp
080e54dd +0x00b:  movl   $0x0,-0xc(%ebp)
080e54e4 +0x012:  lea    -0x68(%ebp),%eax
080e54e7 +0x015:  movl   $&g_ChattingEmoticonScriptFileList,0x4(%esp)
080e54ef +0x01d:  mov    %eax,(%esp)
080e54f2 +0x020:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
080e54f7 +0x025:  sub    $0x4,%esp
080e54fa +0x028:  lea    -0x7c(%ebp),%eax
080e54fd +0x02b:  mov    %eax,(%esp)
080e5500 +0x02e:  call   080e602e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x164>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x164
080e5505 +0x033:  jmp    080e57b0 <+0x2de>
080e550a +0x038:  lea    -0x68(%ebp),%eax
080e550d +0x03b:  mov    %eax,(%esp)
080e5510 +0x03e:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
080e5515 +0x043:  add    $0x4,%eax
080e5518 +0x046:  mov    %eax,(%esp)
080e551b +0x049:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
080e5520 +0x04e:  mov    %eax,-0xc(%ebp)
080e5523 +0x051:  cmpl   $0x0,-0xc(%ebp)
080e5527 +0x055:  je     080e57e2 <+0x310>
080e552d +0x05b:  mov    -0xc(%ebp),%eax
080e5530 +0x05e:  mov    %eax,0x4(%esp)
080e5534 +0x062:  lea    -0x7c(%ebp),%eax
080e5537 +0x065:  mov    %eax,(%esp)
080e553a +0x068:  call   088e31b4 <_Z22ImportChattingEmoticonRN12EmoticonType14EmoticonScriptEPKc>  ; ImportChattingEmoticon(EmoticonType::EmoticonScript&, char const*)
080e553f +0x06d:  xor    $0x1,%eax
080e5542 +0x070:  test   %al,%al
080e5544 +0x072:  je     080e5563 <+0x91>
080e5546 +0x074:  mov    -0xc(%ebp),%eax
080e5549 +0x077:  mov    %eax,0x4(%esp)
080e554d +0x07b:  movl   $"Mission Script Error: %s\n",(%esp)
080e5554 +0x082:  call   0807db60 <_init+0x458>
080e5559 +0x087:  mov    $0x0,%ebx
080e555e +0x08c:  jmp    080e5805 <+0x333>
080e5563 +0x091:  lea    -0x7c(%ebp),%eax
080e5566 +0x094:  mov    %eax,0x4(%esp)
080e556a +0x098:  mov    0x8(%ebp),%eax
080e556d +0x09b:  mov    %eax,(%esp)
080e5570 +0x09e:  call   080e53a8 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE>  ; CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)
080e5575 +0x0a3:  mov    %eax,-0x80(%ebp)
080e5578 +0x0a6:  mov    -0x80(%ebp),%eax
080e557b +0x0a9:  test   %eax,%eax
080e557d +0x0ab:  jne    080e5589 <+0xb7>
080e557f +0x0ad:  mov    $0x0,%ebx
080e5584 +0x0b2:  jmp    080e5805 <+0x333>
080e5589 +0x0b7:  mov    0x8(%ebp),%edx
080e558c +0x0ba:  lea    -0x60(%ebp),%eax
080e558f +0x0bd:  mov    %edx,0x4(%esp)
080e5593 +0x0c1:  mov    %eax,(%esp)
080e5596 +0x0c4:  call   080e61f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x328>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x328
080e559b +0x0c9:  sub    $0x4,%esp
080e559e +0x0cc:  mov    -0x80(%ebp),%eax
080e55a1 +0x0cf:  mov    %eax,(%esp)
080e55a4 +0x0d2:  call   080e5f68 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x9e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x9e
080e55a9 +0x0d7:  mov    %eax,-0x58(%ebp)
080e55ac +0x0da:  mov    0x8(%ebp),%edx
080e55af +0x0dd:  lea    -0x5c(%ebp),%eax
080e55b2 +0x0e0:  lea    -0x58(%ebp),%ecx
080e55b5 +0x0e3:  mov    %ecx,0x8(%esp)
080e55b9 +0x0e7:  mov    %edx,0x4(%esp)
080e55bd +0x0eb:  mov    %eax,(%esp)
080e55c0 +0x0ee:  call   080e61c6 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2fc>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2fc
080e55c5 +0x0f3:  sub    $0x4,%esp
080e55c8 +0x0f6:  lea    -0x60(%ebp),%eax
080e55cb +0x0f9:  mov    %eax,0x4(%esp)
080e55cf +0x0fd:  lea    -0x5c(%ebp),%eax
080e55d2 +0x100:  mov    %eax,(%esp)
080e55d5 +0x103:  call   080e6218 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x34e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x34e
080e55da +0x108:  test   %al,%al
080e55dc +0x10a:  je     080e5601 <+0x12f>
080e55de +0x10c:  mov    -0x80(%ebp),%eax
080e55e1 +0x10f:  test   %eax,%eax
080e55e3 +0x111:  je     080e55f7 <+0x125>
080e55e5 +0x113:  mov    -0x80(%ebp),%eax
080e55e8 +0x116:  mov    (%eax),%eax
080e55ea +0x118:  add    $0x4,%eax
080e55ed +0x11b:  mov    (%eax),%edx
080e55ef +0x11d:  mov    -0x80(%ebp),%eax
080e55f2 +0x120:  mov    %eax,(%esp)
080e55f5 +0x123:  call   *%edx
080e55f7 +0x125:  mov    $0x0,%ebx
080e55fc +0x12a:  jmp    080e5805 <+0x333>
080e5601 +0x12f:  mov    -0x80(%ebp),%eax
080e5604 +0x132:  mov    %eax,(%esp)
080e5607 +0x135:  call   080e5f68 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x9e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x9e
080e560c +0x13a:  mov    %eax,-0x3c(%ebp)
080e560f +0x13d:  lea    -0x44(%ebp),%eax
080e5612 +0x140:  lea    -0x80(%ebp),%edx
080e5615 +0x143:  mov    %edx,0x8(%esp)
080e5619 +0x147:  lea    -0x3c(%ebp),%edx
080e561c +0x14a:  mov    %edx,0x4(%esp)
080e5620 +0x14e:  mov    %eax,(%esp)
080e5623 +0x151:  call   080e622c <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x362>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x362
080e5628 +0x156:  sub    $0x4,%esp
080e562b +0x159:  lea    -0x44(%ebp),%eax
080e562e +0x15c:  mov    %eax,0x4(%esp)
080e5632 +0x160:  lea    -0x4c(%ebp),%eax
080e5635 +0x163:  mov    %eax,(%esp)
080e5638 +0x166:  call   080e6272 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x3a8>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x3a8
080e563d +0x16b:  mov    0x8(%ebp),%edx
080e5640 +0x16e:  lea    -0x54(%ebp),%eax
080e5643 +0x171:  lea    -0x4c(%ebp),%ecx
080e5646 +0x174:  mov    %ecx,0x8(%esp)
080e564a +0x178:  mov    %edx,0x4(%esp)
080e564e +0x17c:  mov    %eax,(%esp)
080e5651 +0x17f:  call   080e62a2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x3d8>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x3d8
080e5656 +0x184:  sub    $0x4,%esp
080e5659 +0x187:  mov    0x8(%ebp),%eax
080e565c +0x18a:  lea    0x18(%eax),%edx
080e565f +0x18d:  lea    -0x84(%ebp),%eax
080e5665 +0x193:  lea    -0x7c(%ebp),%ecx
080e5668 +0x196:  add    $0x4,%ecx
080e566b +0x199:  mov    %ecx,0x8(%esp)
080e566f +0x19d:  mov    %edx,0x4(%esp)
080e5673 +0x1a1:  mov    %eax,(%esp)
080e5676 +0x1a4:  call   080e62ce <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x404>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x404
080e567b +0x1a9:  sub    $0x4,%esp
080e567e +0x1ac:  mov    0x8(%ebp),%eax
080e5681 +0x1af:  lea    0x18(%eax),%edx
080e5684 +0x1b2:  lea    -0x38(%ebp),%eax
080e5687 +0x1b5:  mov    %edx,0x4(%esp)
080e568b +0x1b9:  mov    %eax,(%esp)
080e568e +0x1bc:  call   080e62fa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x430>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x430
080e5693 +0x1c1:  sub    $0x4,%esp
080e5696 +0x1c4:  lea    -0x38(%ebp),%eax
080e5699 +0x1c7:  mov    %eax,0x4(%esp)
080e569d +0x1cb:  lea    -0x84(%ebp),%eax
080e56a3 +0x1d1:  mov    %eax,(%esp)
080e56a6 +0x1d4:  call   080e6320 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x456>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x456
080e56ab +0x1d9:  test   %al,%al
080e56ad +0x1db:  je     080e577e <+0x2ac>
080e56b3 +0x1e1:  lea    -0x90(%ebp),%eax
080e56b9 +0x1e7:  mov    %eax,(%esp)
080e56bc +0x1ea:  call   080e6334 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x46a>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x46a
080e56c1 +0x1ef:  lea    -0x1c(%ebp),%eax
080e56c4 +0x1f2:  lea    -0x90(%ebp),%edx
080e56ca +0x1f8:  mov    %edx,0x8(%esp)
080e56ce +0x1fc:  lea    -0x7c(%ebp),%edx
080e56d1 +0x1ff:  add    $0x4,%edx
080e56d4 +0x202:  mov    %edx,0x4(%esp)
080e56d8 +0x206:  mov    %eax,(%esp)
080e56db +0x209:  call   080e63a5 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x4db>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x4db
080e56e0 +0x20e:  sub    $0x4,%esp
080e56e3 +0x211:  lea    -0x1c(%ebp),%eax
080e56e6 +0x214:  mov    %eax,0x4(%esp)
080e56ea +0x218:  lea    -0x2c(%ebp),%eax
080e56ed +0x21b:  mov    %eax,(%esp)
080e56f0 +0x21e:  call   080e63ea <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x520>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x520
080e56f5 +0x223:  mov    0x8(%ebp),%eax
080e56f8 +0x226:  lea    0x18(%eax),%ecx
080e56fb +0x229:  lea    -0x34(%ebp),%eax
080e56fe +0x22c:  lea    -0x2c(%ebp),%edx
080e5701 +0x22f:  mov    %edx,0x8(%esp)
080e5705 +0x233:  mov    %ecx,0x4(%esp)
080e5709 +0x237:  mov    %eax,(%esp)
080e570c +0x23a:  call   080e6424 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x55a>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x55a
080e5711 +0x23f:  sub    $0x4,%esp
080e5714 +0x242:  lea    -0x2c(%ebp),%eax
080e5717 +0x245:  mov    %eax,(%esp)
080e571a +0x248:  call   080e60dc <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x212>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x212
080e571f +0x24d:  jmp    080e574b <+0x279>
080e5721 +0x24f:  mov    %edx,%ebx
080e5723 +0x251:  mov    %eax,%esi
080e5725 +0x253:  lea    -0x2c(%ebp),%eax
080e5728 +0x256:  mov    %eax,(%esp)
080e572b +0x259:  call   080e60dc <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x212>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x212
080e5730 +0x25e:  mov    %esi,%eax
080e5732 +0x260:  mov    %ebx,%edx
080e5734 +0x262:  jmp    080e5736 <+0x264>
080e5736 +0x264:  mov    %edx,%ebx
080e5738 +0x266:  mov    %eax,%esi
080e573a +0x268:  lea    -0x1c(%ebp),%eax
080e573d +0x26b:  mov    %eax,(%esp)
080e5740 +0x26e:  call   080e60c6 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x1fc>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x1fc
080e5745 +0x273:  mov    %esi,%eax
080e5747 +0x275:  mov    %ebx,%edx
080e5749 +0x277:  jmp    080e5758 <+0x286>
080e574b +0x279:  lea    -0x1c(%ebp),%eax
080e574e +0x27c:  mov    %eax,(%esp)
080e5751 +0x27f:  call   080e60c6 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x1fc>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x1fc
080e5756 +0x284:  jmp    080e5770 <+0x29e>
080e5758 +0x286:  mov    %edx,%ebx
080e575a +0x288:  mov    %eax,%esi
080e575c +0x28a:  lea    -0x90(%ebp),%eax
080e5762 +0x290:  mov    %eax,(%esp)
080e5765 +0x293:  call   080e6348 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x47e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x47e
080e576a +0x298:  mov    %esi,%eax
080e576c +0x29a:  mov    %ebx,%edx
080e576e +0x29c:  jmp    080e57ea <+0x318>
080e5770 +0x29e:  lea    -0x90(%ebp),%eax
080e5776 +0x2a4:  mov    %eax,(%esp)
080e5779 +0x2a7:  call   080e6348 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x47e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x47e
080e577e +0x2ac:  mov    0x8(%ebp),%eax
080e5781 +0x2af:  add    $0x18,%eax
080e5784 +0x2b2:  lea    -0x7c(%ebp),%edx
080e5787 +0x2b5:  add    $0x4,%edx
080e578a +0x2b8:  mov    %edx,0x4(%esp)
080e578e +0x2bc:  mov    %eax,(%esp)
080e5791 +0x2bf:  call   080e6450 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x586>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x586
080e5796 +0x2c4:  lea    -0x80(%ebp),%edx
080e5799 +0x2c7:  mov    %edx,0x4(%esp)
080e579d +0x2cb:  mov    %eax,(%esp)
080e57a0 +0x2ce:  call   080e659c <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x6d2>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x6d2
080e57a5 +0x2d3:  lea    -0x68(%ebp),%eax
080e57a8 +0x2d6:  mov    %eax,(%esp)
080e57ab +0x2d9:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
080e57b0 +0x2de:  lea    -0x64(%ebp),%eax
080e57b3 +0x2e1:  movl   $&g_ChattingEmoticonScriptFileList,0x4(%esp)
080e57bb +0x2e9:  mov    %eax,(%esp)
080e57be +0x2ec:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
080e57c3 +0x2f1:  sub    $0x4,%esp
080e57c6 +0x2f4:  lea    -0x64(%ebp),%eax
080e57c9 +0x2f7:  mov    %eax,0x4(%esp)
080e57cd +0x2fb:  lea    -0x68(%ebp),%eax
080e57d0 +0x2fe:  mov    %eax,(%esp)
080e57d3 +0x301:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
080e57d8 +0x306:  test   %al,%al
080e57da +0x308:  jne    080e550a <+0x38>
080e57e0 +0x30e:  jmp    080e57e3 <+0x311>
080e57e2 +0x310:  nop
080e57e3 +0x311:  mov    $0x1,%ebx
080e57e8 +0x316:  jmp    080e5805 <+0x333>
080e57ea +0x318:  mov    %edx,%ebx
080e57ec +0x31a:  mov    %eax,%esi
080e57ee +0x31c:  lea    -0x7c(%ebp),%eax
080e57f1 +0x31f:  mov    %eax,(%esp)
080e57f4 +0x322:  call   080e607a <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x1b0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x1b0
080e57f9 +0x327:  mov    %esi,%eax
080e57fb +0x329:  mov    %ebx,%edx
080e57fd +0x32b:  mov    %eax,(%esp)
080e5800 +0x32e:  call   08ae3750 <_Unwind_Resume>
080e5805 +0x333:  lea    -0x7c(%ebp),%eax
080e5808 +0x336:  mov    %eax,(%esp)
080e580b +0x339:  call   080e607a <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x1b0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x1b0
080e5810 +0x33e:  mov    %ebx,%eax
080e5812 +0x340:  lea    -0x8(%ebp),%esp
080e5815 +0x343:  add    $0x0,%esp
080e5818 +0x346:  pop    %ebx
080e5819 +0x347:  pop    %esi
080e581a +0x348:  pop    %ebp
080e581b +0x349:  ret
```

## 反编译 C

```c
// CChattingEmoticonList::Load_list @ 0x80e54d2

/* CChattingEmoticonList::Load_list() */

undefined4 __thiscall CChattingEmoticonList::Load_list(CChattingEmoticonList *this)

{
  char cVar1;
  int iVar2;
  vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>> *this_00;
  undefined4 uVar3;
  _Rb_tree_iterator *p_Var4;
  undefined4 *puVar5;
  vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>> local_94 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>
  local_88 [4];
  ChattingEmoticonBase *local_84;
  EmoticonScript local_80 [4];
  vector avStack_7c [16];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_6c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_68 [4];
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_64 [4];
  _Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> local_60 [4];
  undefined4 local_5c;
  pair local_58 [8];
  pair<int_const,ChattingEmoticonBase*> local_50 [8];
  int local_48 [2];
  ChattingEmoticonBase *local_40;
  map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
  local_3c [4];
  pair local_38 [8];
  pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
  local_30 [16];
  pair<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>> local_20 [16];
  char *local_10;
  
  local_10 = (char *)0x0;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_6c);
  EmoticonType::EmoticonScript::EmoticonScript(local_80);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_68);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_6c,
                       (_Rb_tree_iterator *)local_68);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_6c);
                    /* try { // try from 080e551b to 080e56c0 has its CatchHandler @ 080e57ea */
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = ImportChattingEmoticon(local_80,local_10);
    if (cVar1 != '\x01') {
      printf("Mission Script Error: %s\n",local_10);
      uVar3 = 0;
      goto LAB_080e5805;
    }
    local_84 = (ChattingEmoticonBase *)Factory(this,local_80);
    if (local_84 == (ChattingEmoticonBase *)0x0) {
      uVar3 = 0;
      goto LAB_080e5805;
    }
    std::
    map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
    ::end(local_64);
    local_5c = ChattingEmoticonBase::GetIndex(local_84);
    puVar5 = &local_5c;
    std::
    map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
    ::find((int *)local_60);
    p_Var4 = (_Rb_tree_iterator *)local_64;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator!=
                      (local_60,p_Var4);
    if (cVar1 != '\0') {
      if (local_84 != (ChattingEmoticonBase *)0x0) {
        (**(code **)(*(int *)local_84 + 4))(local_84,p_Var4,puVar5);
      }
      uVar3 = 0;
      goto LAB_080e5805;
    }
    local_40 = (ChattingEmoticonBase *)ChattingEmoticonBase::GetIndex(local_84);
    std::make_pair<int,ChattingEmoticonBase*&>(local_48,&local_40);
    std::pair<int_const,ChattingEmoticonBase*>::pair<int,ChattingEmoticonBase*>
              (local_50,(pair *)local_48);
    std::
    map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
    ::insert(local_58);
    std::
    map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
    ::find((int *)local_88);
    std::
    map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
    ::end(local_3c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>
            ::operator==(local_88,(_Rb_tree_iterator *)local_3c);
    if (cVar1 != '\0') {
      std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>::vector(local_94);
                    /* try { // try from 080e56db to 080e56df has its CatchHandler @ 080e5758 */
      std::make_pair<int&,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>&>
                ((int *)local_20,avStack_7c);
                    /* try { // try from 080e56f0 to 080e56f4 has its CatchHandler @ 080e5736 */
      std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
      ::pair<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
                (local_30,local_20);
                    /* try { // try from 080e570c to 080e5710 has its CatchHandler @ 080e5721 */
      std::
      map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
      ::insert(local_38);
                    /* try { // try from 080e571a to 080e571e has its CatchHandler @ 080e5736 */
      std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
      ::~pair(local_30);
                    /* try { // try from 080e5751 to 080e5755 has its CatchHandler @ 080e5758 */
      std::pair<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>::~pair
                (local_20);
                    /* try { // try from 080e5779 to 080e57c2 has its CatchHandler @ 080e57ea */
      std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>::~vector(local_94);
    }
    this_00 = (vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>> *)
              std::
              map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
              ::operator[]((map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
                            *)(this + 0x18),(int *)avStack_7c);
    std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>::push_back
              (this_00,&local_84);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_6c);
  }
  uVar3 = 1;
LAB_080e5805:
  EmoticonType::EmoticonScript::~EmoticonScript(local_80);
  return uVar3;
}
```
