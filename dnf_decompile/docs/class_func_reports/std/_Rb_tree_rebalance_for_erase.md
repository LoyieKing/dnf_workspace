# _Rb_tree_rebalance_for_erase

`_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_`

`std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)`

| 类 | 地址 |
|---|---|
| `std` | `0x086dfc70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dfc70  _ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_
#           std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
# range [0x086dfc70, 0x086e009f]
086dfc70 +0x000:  push   %ebp
086dfc71 +0x001:  mov    %esp,%ebp
086dfc73 +0x003:  mov    0x8(%ebp),%ecx
086dfc76 +0x006:  push   %edi
086dfc77 +0x007:  push   %esi
086dfc78 +0x008:  push   %ebx
086dfc79 +0x009:  mov    0x8(%ecx),%ebx
086dfc7c +0x00c:  test   %ebx,%ebx
086dfc7e +0x00e:  mov    %ebx,%edx
086dfc80 +0x010:  je     086dfe70 <+0x200>
086dfc86 +0x016:  mov    0xc(%ecx),%edi
086dfc89 +0x019:  test   %edi,%edi
086dfc8b +0x01b:  mov    %edi,%eax
086dfc8d +0x01d:  jne    086dfc9a <+0x2a>
086dfc8f +0x01f:  jmp    086dfe73 <+0x203>
086dfc94 +0x024:  lea    0x0(%esi,%eiz,1),%esi
086dfc98 +0x028:  mov    %ebx,%eax
086dfc9a +0x02a:  mov    0x8(%eax),%ebx
086dfc9d +0x02d:  test   %ebx,%ebx
086dfc9f +0x02f:  jne    086dfc98 <+0x28>
086dfca1 +0x031:  cmp    %ecx,%eax
086dfca3 +0x033:  mov    0xc(%eax),%ebx
086dfca6 +0x036:  je     086dfe75 <+0x205>
086dfcac +0x03c:  cmp    %edi,%eax
086dfcae +0x03e:  mov    %eax,0x4(%edx)
086dfcb1 +0x041:  mov    %edx,0x8(%eax)
086dfcb4 +0x044:  mov    %edi,%edx
086dfcb6 +0x046:  je     086dfcd3 <+0x63>
086dfcb8 +0x048:  mov    0x4(%eax),%edx
086dfcbb +0x04b:  test   %ebx,%ebx
086dfcbd +0x04d:  mov    %edx,%esi
086dfcbf +0x04f:  je     086dfcc7 <+0x57>
086dfcc1 +0x051:  mov    %edx,0x4(%ebx)
086dfcc4 +0x054:  mov    0x4(%eax),%esi
086dfcc7 +0x057:  mov    %ebx,0x8(%esi)
086dfcca +0x05a:  mov    %edi,0xc(%eax)
086dfccd +0x05d:  mov    0xc(%ecx),%esi
086dfcd0 +0x060:  mov    %eax,0x4(%esi)
086dfcd3 +0x063:  mov    0xc(%ebp),%esi
086dfcd6 +0x066:  cmp    %ecx,0x4(%esi)
086dfcd9 +0x069:  je     086dff68 <+0x2f8>
086dfcdf +0x06f:  mov    0x4(%ecx),%esi
086dfce2 +0x072:  cmp    %ecx,0x8(%esi)
086dfce5 +0x075:  je     086dff80 <+0x310>
086dfceb +0x07b:  mov    %eax,0xc(%esi)
086dfcee +0x07e:  mov    %esi,0x4(%eax)
086dfcf1 +0x081:  mov    (%ecx),%edi
086dfcf3 +0x083:  mov    (%eax),%esi
086dfcf5 +0x085:  mov    %edi,(%eax)
086dfcf7 +0x087:  mov    %ecx,%eax
086dfcf9 +0x089:  mov    %esi,(%ecx)
086dfcfb +0x08b:  test   %esi,%esi
086dfcfd +0x08d:  je     086dfd20 <+0xb0>
086dfcff +0x08f:  mov    0xc(%ebp),%edi
086dfd02 +0x092:  lea    0x0(%esi),%esi
086dfd08 +0x098:  cmp    %ebx,0x4(%edi)
086dfd0b +0x09b:  je     086dff52 <+0x2e2>
086dfd11 +0x0a1:  test   %ebx,%ebx
086dfd13 +0x0a3:  je     086dfd28 <+0xb8>
086dfd15 +0x0a5:  cmpl   $0x1,(%ebx)
086dfd18 +0x0a8:  je     086dfd28 <+0xb8>
086dfd1a +0x0aa:  movl   $0x1,(%ebx)
086dfd20 +0x0b0:  pop    %ebx
086dfd21 +0x0b1:  pop    %esi
086dfd22 +0x0b2:  pop    %edi
086dfd23 +0x0b3:  pop    %ebp
086dfd24 +0x0b4:  ret
086dfd25 +0x0b5:  lea    0x0(%esi),%esi
086dfd28 +0x0b8:  mov    0x8(%edx),%ecx
086dfd2b +0x0bb:  cmp    %ebx,%ecx
086dfd2d +0x0bd:  je     086dfda8 <+0x138>
086dfd2f +0x0bf:  mov    (%ecx),%esi
086dfd31 +0x0c1:  test   %esi,%esi
086dfd33 +0x0c3:  jne    086dfd75 <+0x105>
086dfd35 +0x0c5:  mov    0xc(%ecx),%esi
086dfd38 +0x0c8:  movl   $0x1,(%ecx)
086dfd3e +0x0ce:  movl   $0x0,(%edx)
086dfd44 +0x0d4:  test   %esi,%esi
086dfd46 +0x0d6:  mov    %esi,0x8(%edx)
086dfd49 +0x0d9:  je     086dfd4e <+0xde>
086dfd4b +0x0db:  mov    %edx,0x4(%esi)
086dfd4e +0x0de:  mov    0x4(%edx),%esi
086dfd51 +0x0e1:  mov    %esi,0x4(%ecx)
086dfd54 +0x0e4:  cmp    0x4(%edi),%edx
086dfd57 +0x0e7:  je     086dfe60 <+0x1f0>
086dfd5d +0x0ed:  mov    0x4(%edx),%esi
086dfd60 +0x0f0:  cmp    0xc(%esi),%edx
086dfd63 +0x0f3:  je     086dfe68 <+0x1f8>
086dfd69 +0x0f9:  mov    %ecx,0x8(%esi)
086dfd6c +0x0fc:  mov    %edx,0xc(%ecx)
086dfd6f +0x0ff:  mov    %ecx,0x4(%edx)
086dfd72 +0x102:  mov    0x8(%edx),%ecx
086dfd75 +0x105:  mov    0xc(%ecx),%esi
086dfd78 +0x108:  test   %esi,%esi
086dfd7a +0x10a:  je     086dfd85 <+0x115>
086dfd7c +0x10c:  cmpl   $0x1,(%esi)
086dfd7f +0x10f:  jne    086dfec0 <+0x250>
086dfd85 +0x115:  mov    0x8(%ecx),%esi
086dfd88 +0x118:  test   %esi,%esi
086dfd8a +0x11a:  je     086dfd95 <+0x125>
086dfd8c +0x11c:  cmpl   $0x1,(%esi)
086dfd8f +0x11f:  jne    086dff60 <+0x2f0>
086dfd95 +0x125:  movl   $0x0,(%ecx)
086dfd9b +0x12b:  mov    0x4(%edx),%ecx
086dfd9e +0x12e:  mov    %edx,%ebx
086dfda0 +0x130:  mov    %ecx,%edx
086dfda2 +0x132:  jmp    086dfd08 <+0x98>
086dfda7 +0x137:  nop
086dfda8 +0x138:  mov    0xc(%edx),%ecx
086dfdab +0x13b:  mov    (%ecx),%esi
086dfdad +0x13d:  test   %esi,%esi
086dfdaf +0x13f:  jne    086dfdf1 <+0x181>
086dfdb1 +0x141:  mov    0x8(%ecx),%esi
086dfdb4 +0x144:  movl   $0x1,(%ecx)
086dfdba +0x14a:  movl   $0x0,(%edx)
086dfdc0 +0x150:  test   %esi,%esi
086dfdc2 +0x152:  mov    %esi,0xc(%edx)
086dfdc5 +0x155:  je     086dfdca <+0x15a>
086dfdc7 +0x157:  mov    %edx,0x4(%esi)
086dfdca +0x15a:  mov    0x4(%edx),%esi
086dfdcd +0x15d:  mov    %esi,0x4(%ecx)
086dfdd0 +0x160:  cmp    0x4(%edi),%edx
086dfdd3 +0x163:  je     086dff78 <+0x308>
086dfdd9 +0x169:  mov    0x4(%edx),%esi
086dfddc +0x16c:  cmp    0x8(%esi),%edx
086dfddf +0x16f:  je     086dff88 <+0x318>
086dfde5 +0x175:  mov    %ecx,0xc(%esi)
086dfde8 +0x178:  mov    %edx,0x8(%ecx)
086dfdeb +0x17b:  mov    %ecx,0x4(%edx)
086dfdee +0x17e:  mov    0xc(%edx),%ecx
086dfdf1 +0x181:  mov    0x8(%ecx),%esi
086dfdf4 +0x184:  test   %esi,%esi
086dfdf6 +0x186:  je     086dfe01 <+0x191>
086dfdf8 +0x188:  cmpl   $0x1,(%esi)
086dfdfb +0x18b:  jne    086dffc8 <+0x358>
086dfe01 +0x191:  mov    0xc(%ecx),%esi
086dfe04 +0x194:  test   %esi,%esi
086dfe06 +0x196:  je     086dfd95 <+0x125>
086dfe08 +0x198:  cmpl   $0x1,(%esi)
086dfe0b +0x19b:  je     086dfd95 <+0x125>
086dfe0d +0x19d:  mov    (%edx),%edi
086dfe0f +0x19f:  test   %esi,%esi
086dfe11 +0x1a1:  mov    %edi,(%ecx)
086dfe13 +0x1a3:  movl   $0x1,(%edx)
086dfe19 +0x1a9:  je     086dfe21 <+0x1b1>
086dfe1b +0x1ab:  movl   $0x1,(%esi)
086dfe21 +0x1b1:  mov    0x8(%ecx),%esi
086dfe24 +0x1b4:  test   %esi,%esi
086dfe26 +0x1b6:  mov    %esi,0xc(%edx)
086dfe29 +0x1b9:  je     086dfe2e <+0x1be>
086dfe2b +0x1bb:  mov    %edx,0x4(%esi)
086dfe2e +0x1be:  mov    0x4(%edx),%esi
086dfe31 +0x1c1:  mov    0xc(%ebp),%edi
086dfe34 +0x1c4:  mov    %esi,0x4(%ecx)
086dfe37 +0x1c7:  cmp    0x4(%edi),%edx
086dfe3a +0x1ca:  je     086e0065 <+0x3f5>
086dfe40 +0x1d0:  mov    0x4(%edx),%esi
086dfe43 +0x1d3:  cmp    0x8(%esi),%edx
086dfe46 +0x1d6:  je     086dffb6 <+0x346>
086dfe4c +0x1dc:  mov    %ecx,0xc(%esi)
086dfe4f +0x1df:  mov    %edx,0x8(%ecx)
086dfe52 +0x1e2:  mov    %ecx,0x4(%edx)
086dfe55 +0x1e5:  jmp    086dff52 <+0x2e2>
086dfe5a +0x1ea:  lea    0x0(%esi),%esi
086dfe60 +0x1f0:  mov    %ecx,0x4(%edi)
086dfe63 +0x1f3:  jmp    086dfd6c <+0xfc>
086dfe68 +0x1f8:  mov    %ecx,0xc(%esi)
086dfe6b +0x1fb:  jmp    086dfd6c <+0xfc>
086dfe70 +0x200:  mov    0xc(%ecx),%ebx
086dfe73 +0x203:  mov    %ecx,%eax
086dfe75 +0x205:  test   %ebx,%ebx
086dfe77 +0x207:  mov    0x4(%eax),%edx
086dfe7a +0x20a:  je     086dfe7f <+0x20f>
086dfe7c +0x20c:  mov    %edx,0x4(%ebx)
086dfe7f +0x20f:  mov    0xc(%ebp),%edi
086dfe82 +0x212:  cmp    %ecx,0x4(%edi)
086dfe85 +0x215:  je     086e0025 <+0x3b5>
086dfe8b +0x21b:  mov    0x4(%ecx),%esi
086dfe8e +0x21e:  cmp    %ecx,0x8(%esi)
086dfe91 +0x221:  je     086e004c <+0x3dc>
086dfe97 +0x227:  mov    %ebx,0xc(%esi)
086dfe9a +0x22a:  mov    0xc(%ebp),%esi
086dfe9d +0x22d:  cmp    %ecx,0x8(%esi)
086dfea0 +0x230:  je     086e002d <+0x3bd>
086dfea6 +0x236:  mov    0xc(%ebp),%edi
086dfea9 +0x239:  cmp    %ecx,0xc(%edi)
086dfeac +0x23c:  je     086dff90 <+0x320>
086dfeb2 +0x242:  mov    (%eax),%esi
086dfeb4 +0x244:  jmp    086dfcfb <+0x8b>
086dfeb9 +0x249:  lea    0x0(%esi,%eiz,1),%esi
086dfec0 +0x250:  mov    0x8(%ecx),%edi
086dfec3 +0x253:  test   %edi,%edi
086dfec5 +0x255:  je     086dfecc <+0x25c>
086dfec7 +0x257:  cmpl   $0x1,(%edi)
086dfeca +0x25a:  jne    086dff12 <+0x2a2>
086dfecc +0x25c:  mov    0x8(%esi),%edi
086dfecf +0x25f:  movl   $0x1,(%esi)
086dfed5 +0x265:  movl   $0x0,(%ecx)
086dfedb +0x26b:  test   %edi,%edi
086dfedd +0x26d:  mov    %edi,0xc(%ecx)
086dfee0 +0x270:  je     086dfee5 <+0x275>
086dfee2 +0x272:  mov    %ecx,0x4(%edi)
086dfee5 +0x275:  mov    0x4(%ecx),%edi
086dfee8 +0x278:  mov    %edi,0x4(%esi)
086dfeeb +0x27b:  mov    0xc(%ebp),%edi
086dfeee +0x27e:  cmp    0x4(%edi),%ecx
086dfef1 +0x281:  je     086e0054 <+0x3e4>
086dfef7 +0x287:  mov    0x4(%ecx),%edi
086dfefa +0x28a:  cmp    0x8(%edi),%ecx
086dfefd +0x28d:  je     086e005c <+0x3ec>
086dff03 +0x293:  mov    %esi,0xc(%edi)
086dff06 +0x296:  mov    %ecx,0x8(%esi)
086dff09 +0x299:  mov    %esi,0x4(%ecx)
086dff0c +0x29c:  mov    0x8(%edx),%ecx
086dff0f +0x29f:  mov    0x8(%ecx),%edi
086dff12 +0x2a2:  mov    (%edx),%esi
086dff14 +0x2a4:  test   %edi,%edi
086dff16 +0x2a6:  mov    %esi,(%ecx)
086dff18 +0x2a8:  movl   $0x1,(%edx)
086dff1e +0x2ae:  je     086dff26 <+0x2b6>
086dff20 +0x2b0:  movl   $0x1,(%edi)
086dff26 +0x2b6:  mov    0xc(%ecx),%esi
086dff29 +0x2b9:  test   %esi,%esi
086dff2b +0x2bb:  mov    %esi,0x8(%edx)
086dff2e +0x2be:  je     086dff33 <+0x2c3>
086dff30 +0x2c0:  mov    %edx,0x4(%esi)
086dff33 +0x2c3:  mov    0x4(%edx),%esi
086dff36 +0x2c6:  mov    %esi,0x4(%ecx)
086dff39 +0x2c9:  mov    0xc(%ebp),%esi
086dff3c +0x2cc:  cmp    0x4(%esi),%edx
086dff3f +0x2cf:  je     086dffbe <+0x34e>
086dff41 +0x2d1:  mov    0x4(%edx),%esi
086dff44 +0x2d4:  cmp    0xc(%esi),%edx
086dff47 +0x2d7:  je     086dffc3 <+0x353>
086dff49 +0x2d9:  mov    %ecx,0x8(%esi)
086dff4c +0x2dc:  mov    %edx,0xc(%ecx)
086dff4f +0x2df:  mov    %ecx,0x4(%edx)
086dff52 +0x2e2:  test   %ebx,%ebx
086dff54 +0x2e4:  je     086dfd20 <+0xb0>
086dff5a +0x2ea:  jmp    086dfd1a <+0xaa>
086dff5f +0x2ef:  nop
086dff60 +0x2f0:  mov    %esi,%edi
086dff62 +0x2f2:  jmp    086dff12 <+0x2a2>
086dff64 +0x2f4:  lea    0x0(%esi,%eiz,1),%esi
086dff68 +0x2f8:  mov    %eax,0x4(%esi)
086dff6b +0x2fb:  mov    0x4(%ecx),%esi
086dff6e +0x2fe:  xchg   %ax,%ax
086dff70 +0x300:  jmp    086dfcee <+0x7e>
086dff75 +0x305:  lea    0x0(%esi),%esi
086dff78 +0x308:  mov    %ecx,0x4(%edi)
086dff7b +0x30b:  jmp    086dfde8 <+0x178>
086dff80 +0x310:  mov    %eax,0x8(%esi)
086dff83 +0x313:  jmp    086dfcee <+0x7e>
086dff88 +0x318:  mov    %ecx,0x8(%esi)
086dff8b +0x31b:  jmp    086dfde8 <+0x178>
086dff90 +0x320:  mov    0x8(%ecx),%edi
086dff93 +0x323:  mov    %ebx,%esi
086dff95 +0x325:  test   %edi,%edi
086dff97 +0x327:  jne    086dffa2 <+0x332>
086dff99 +0x329:  jmp    086e007b <+0x40b>
086dff9e +0x32e:  xchg   %ax,%ax
086dffa0 +0x330:  mov    %ecx,%esi
086dffa2 +0x332:  mov    0xc(%esi),%ecx
086dffa5 +0x335:  test   %ecx,%ecx
086dffa7 +0x337:  jne    086dffa0 <+0x330>
086dffa9 +0x339:  mov    0xc(%ebp),%edi
086dffac +0x33c:  mov    %esi,0xc(%edi)
086dffaf +0x33f:  mov    (%eax),%esi
086dffb1 +0x341:  jmp    086dfcfb <+0x8b>
086dffb6 +0x346:  mov    %ecx,0x8(%esi)
086dffb9 +0x349:  jmp    086dfe4f <+0x1df>
086dffbe +0x34e:  mov    %ecx,0x4(%esi)
086dffc1 +0x351:  jmp    086dff4c <+0x2dc>
086dffc3 +0x353:  mov    %ecx,0xc(%esi)
086dffc6 +0x356:  jmp    086dff4c <+0x2dc>
086dffc8 +0x358:  mov    %esi,%edi
086dffca +0x35a:  mov    0xc(%ecx),%esi
086dffcd +0x35d:  test   %esi,%esi
086dffcf +0x35f:  je     086dffda <+0x36a>
086dffd1 +0x361:  cmpl   $0x1,(%esi)
086dffd4 +0x364:  jne    086dfe0d <+0x19d>
086dffda +0x36a:  mov    0xc(%edi),%esi
086dffdd +0x36d:  movl   $0x1,(%edi)
086dffe3 +0x373:  movl   $0x0,(%ecx)
086dffe9 +0x379:  test   %esi,%esi
086dffeb +0x37b:  mov    %esi,0x8(%ecx)
086dffee +0x37e:  je     086dfff3 <+0x383>
086dfff0 +0x380:  mov    %ecx,0x4(%esi)
086dfff3 +0x383:  mov    0x4(%ecx),%esi
086dfff6 +0x386:  mov    %esi,0x4(%edi)
086dfff9 +0x389:  mov    0xc(%ebp),%esi
086dfffc +0x38c:  cmp    0x4(%esi),%ecx
086dffff +0x38f:  je     086e008b <+0x41b>
086e0005 +0x395:  mov    0x4(%ecx),%esi
086e0008 +0x398:  cmp    0xc(%esi),%ecx
086e000b +0x39b:  je     086e0090 <+0x420>
086e0011 +0x3a1:  mov    %edi,0x8(%esi)
086e0014 +0x3a4:  mov    %ecx,0xc(%edi)
086e0017 +0x3a7:  mov    %edi,0x4(%ecx)
086e001a +0x3aa:  mov    0xc(%edx),%ecx
086e001d +0x3ad:  mov    0xc(%ecx),%esi
086e0020 +0x3b0:  jmp    086dfe0d <+0x19d>
086e0025 +0x3b5:  mov    %ebx,0x4(%edi)
086e0028 +0x3b8:  jmp    086dfe9a <+0x22a>
086e002d +0x3bd:  mov    0xc(%ecx),%esi
086e0030 +0x3c0:  mov    %ebx,%edi
086e0032 +0x3c2:  test   %esi,%esi
086e0034 +0x3c4:  jne    086e003a <+0x3ca>
086e0036 +0x3c6:  jmp    086e006d <+0x3fd>
086e0038 +0x3c8:  mov    %esi,%edi
086e003a +0x3ca:  mov    0x8(%edi),%esi
086e003d +0x3cd:  test   %esi,%esi
086e003f +0x3cf:  jne    086e0038 <+0x3c8>
086e0041 +0x3d1:  mov    0xc(%ebp),%esi
086e0044 +0x3d4:  mov    %edi,0x8(%esi)
086e0047 +0x3d7:  jmp    086dfea6 <+0x236>
086e004c +0x3dc:  mov    %ebx,0x8(%esi)
086e004f +0x3df:  jmp    086dfe9a <+0x22a>
086e0054 +0x3e4:  mov    %esi,0x4(%edi)
086e0057 +0x3e7:  jmp    086dff06 <+0x296>
086e005c +0x3ec:  mov    %esi,0x8(%edi)
086e005f +0x3ef:  nop
086e0060 +0x3f0:  jmp    086dff06 <+0x296>
086e0065 +0x3f5:  mov    %ecx,0x4(%edi)
086e0068 +0x3f8:  jmp    086dfe4f <+0x1df>
086e006d +0x3fd:  mov    0x4(%ecx),%esi
086e0070 +0x400:  mov    0xc(%ebp),%edi
086e0073 +0x403:  mov    %esi,0x8(%edi)
086e0076 +0x406:  jmp    086dfea6 <+0x236>
086e007b +0x40b:  mov    0xc(%ebp),%esi
086e007e +0x40e:  mov    0x4(%ecx),%ecx
086e0081 +0x411:  mov    %ecx,0xc(%esi)
086e0084 +0x414:  mov    (%eax),%esi
086e0086 +0x416:  jmp    086dfcfb <+0x8b>
086e008b +0x41b:  mov    %edi,0x4(%esi)
086e008e +0x41e:  jmp    086e0014 <+0x3a4>
086e0090 +0x420:  mov    %edi,0xc(%esi)
086e0093 +0x423:  jmp    086e0014 <+0x3a4>
086e0098 +0x428:  nop
086e0099 +0x429:  nop
086e009a +0x42a:  nop
086e009b +0x42b:  nop
086e009c +0x42c:  nop
086e009d +0x42d:  nop
086e009e +0x42e:  nop
086e009f +0x42f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_rebalance_for_erase @ 0x86dfc70

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&) */

_Rb_tree_node_base *
std::_Rb_tree_rebalance_for_erase(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Base_ptr p_Var2;
  _Base_ptr p_Var3;
  _Base_ptr p_Var4;
  _Base_ptr p_Var5;
  _Rb_tree_color _Var6;
  _Base_ptr p_Var7;
  
  p_Var2 = param_1->_M_left;
  p_Var1 = param_1;
  if (p_Var2 == (_Base_ptr)0x0) {
    p_Var3 = param_1->_M_right;
  }
  else {
    p_Var5 = param_1->_M_right;
    p_Var4 = p_Var5;
    p_Var3 = p_Var2;
    if (p_Var5 != (_Base_ptr)0x0) {
      do {
        p_Var1 = p_Var4;
        p_Var4 = p_Var1->_M_left;
      } while (p_Var1->_M_left != (_Base_ptr)0x0);
      p_Var3 = p_Var1->_M_right;
      if (p_Var1 != param_1) {
        p_Var2->_M_parent = p_Var1;
        p_Var1->_M_left = p_Var2;
        p_Var2 = p_Var5;
        if (p_Var1 != p_Var5) {
          p_Var2 = p_Var1->_M_parent;
          p_Var4 = p_Var2;
          if (p_Var3 != (_Base_ptr)0x0) {
            p_Var3->_M_parent = p_Var2;
            p_Var4 = p_Var1->_M_parent;
          }
          p_Var4->_M_left = p_Var3;
          p_Var1->_M_right = p_Var5;
          param_1->_M_right->_M_parent = p_Var1;
        }
        if (param_2->_M_parent == param_1) {
          param_2->_M_parent = p_Var1;
          p_Var5 = param_1->_M_parent;
        }
        else {
          p_Var5 = param_1->_M_parent;
          if (p_Var5->_M_left == param_1) {
            p_Var5->_M_left = p_Var1;
          }
          else {
            p_Var5->_M_right = p_Var1;
          }
        }
        p_Var1->_M_parent = p_Var5;
        _Var6 = p_Var1->_M_color;
        p_Var1->_M_color = param_1->_M_color;
        param_1->_M_color = _Var6;
        goto LAB_086dfcfb;
      }
    }
  }
  p_Var2 = p_Var1->_M_parent;
  if (p_Var3 != (_Base_ptr)0x0) {
    p_Var3->_M_parent = p_Var2;
  }
  if (param_2->_M_parent == param_1) {
    param_2->_M_parent = p_Var3;
  }
  else {
    p_Var5 = param_1->_M_parent;
    if (p_Var5->_M_left == param_1) {
      p_Var5->_M_left = p_Var3;
    }
    else {
      p_Var5->_M_right = p_Var3;
    }
  }
  if (param_2->_M_left == param_1) {
    p_Var5 = p_Var3;
    if (param_1->_M_right == (_Base_ptr)0x0) {
      param_2->_M_left = param_1->_M_parent;
    }
    else {
      do {
        p_Var4 = p_Var5;
        p_Var5 = p_Var4->_M_left;
      } while (p_Var5 != (_Base_ptr)0x0);
      param_2->_M_left = p_Var4;
    }
  }
  if (param_2->_M_right == param_1) {
    p_Var5 = p_Var3;
    if (param_1->_M_left == (_Base_ptr)0x0) {
      param_2->_M_right = param_1->_M_parent;
      _Var6 = p_Var1->_M_color;
      param_1 = p_Var1;
    }
    else {
      do {
        p_Var4 = p_Var5;
        p_Var5 = p_Var4->_M_right;
      } while (p_Var5 != (_Base_ptr)0x0);
      param_2->_M_right = p_Var4;
      _Var6 = p_Var1->_M_color;
      param_1 = p_Var1;
    }
  }
  else {
    _Var6 = p_Var1->_M_color;
    param_1 = p_Var1;
  }
LAB_086dfcfb:
  if (_Var6 != _S_red) {
    while (p_Var5 = p_Var2, param_2->_M_parent != p_Var3) {
      if ((p_Var3 != (_Base_ptr)0x0) && (p_Var3->_M_color != _S_black)) goto LAB_086dfd1a;
      p_Var2 = p_Var5->_M_left;
      if (p_Var2 == p_Var3) {
        p_Var2 = p_Var5->_M_right;
        if (p_Var2->_M_color == _S_red) {
          p_Var4 = p_Var2->_M_left;
          p_Var2->_M_color = _S_black;
          p_Var5->_M_color = _S_red;
          p_Var5->_M_right = p_Var4;
          if (p_Var4 != (_Base_ptr)0x0) {
            p_Var4->_M_parent = p_Var5;
          }
          p_Var2->_M_parent = p_Var5->_M_parent;
          if (p_Var5 == param_2->_M_parent) {
            param_2->_M_parent = p_Var2;
          }
          else {
            p_Var4 = p_Var5->_M_parent;
            if (p_Var5 == p_Var4->_M_left) {
              p_Var4->_M_left = p_Var2;
            }
            else {
              p_Var4->_M_right = p_Var2;
            }
          }
          p_Var2->_M_left = p_Var5;
          p_Var5->_M_parent = p_Var2;
          p_Var2 = p_Var5->_M_right;
        }
        p_Var4 = p_Var2->_M_left;
        if ((p_Var4 == (_Base_ptr)0x0) || (p_Var4->_M_color == _S_black)) {
          p_Var7 = p_Var2->_M_right;
          if ((p_Var7 == (_Base_ptr)0x0) || (p_Var7->_M_color == _S_black)) goto LAB_086dfd95;
        }
        else {
          p_Var7 = p_Var2->_M_right;
          if ((p_Var7 == (_Base_ptr)0x0) || (p_Var7->_M_color == _S_black)) {
            p_Var7 = p_Var4->_M_right;
            p_Var4->_M_color = _S_black;
            p_Var2->_M_color = _S_red;
            p_Var2->_M_left = p_Var7;
            if (p_Var7 != (_Base_ptr)0x0) {
              p_Var7->_M_parent = p_Var2;
            }
            p_Var4->_M_parent = p_Var2->_M_parent;
            if (p_Var2 == param_2->_M_parent) {
              param_2->_M_parent = p_Var4;
            }
            else {
              p_Var7 = p_Var2->_M_parent;
              if (p_Var2 == p_Var7->_M_right) {
                p_Var7->_M_right = p_Var4;
              }
              else {
                p_Var7->_M_left = p_Var4;
              }
            }
            p_Var4->_M_right = p_Var2;
            p_Var2->_M_parent = p_Var4;
            p_Var2 = p_Var5->_M_right;
            p_Var7 = p_Var2->_M_right;
          }
        }
        p_Var2->_M_color = p_Var5->_M_color;
        p_Var5->_M_color = _S_black;
        if (p_Var7 != (_Base_ptr)0x0) {
          p_Var7->_M_color = _S_black;
        }
        p_Var4 = p_Var2->_M_left;
        p_Var5->_M_right = p_Var4;
        if (p_Var4 != (_Base_ptr)0x0) {
          p_Var4->_M_parent = p_Var5;
        }
        p_Var2->_M_parent = p_Var5->_M_parent;
        if (p_Var5 == param_2->_M_parent) {
          param_2->_M_parent = p_Var2;
        }
        else {
          p_Var4 = p_Var5->_M_parent;
          if (p_Var5 == p_Var4->_M_left) {
            p_Var4->_M_left = p_Var2;
          }
          else {
            p_Var4->_M_right = p_Var2;
          }
        }
        p_Var2->_M_left = p_Var5;
        p_Var5->_M_parent = p_Var2;
        break;
      }
      if (p_Var2->_M_color == _S_red) {
        p_Var4 = p_Var2->_M_right;
        p_Var2->_M_color = _S_black;
        p_Var5->_M_color = _S_red;
        p_Var5->_M_left = p_Var4;
        if (p_Var4 != (_Base_ptr)0x0) {
          p_Var4->_M_parent = p_Var5;
        }
        p_Var2->_M_parent = p_Var5->_M_parent;
        if (p_Var5 == param_2->_M_parent) {
          param_2->_M_parent = p_Var2;
        }
        else {
          p_Var4 = p_Var5->_M_parent;
          if (p_Var5 == p_Var4->_M_right) {
            p_Var4->_M_right = p_Var2;
          }
          else {
            p_Var4->_M_left = p_Var2;
          }
        }
        p_Var2->_M_right = p_Var5;
        p_Var5->_M_parent = p_Var2;
        p_Var2 = p_Var5->_M_left;
      }
      p_Var4 = p_Var2->_M_right;
      if ((p_Var4 != (_Base_ptr)0x0) && (p_Var4->_M_color != _S_black)) {
        p_Var7 = p_Var2->_M_left;
        if ((p_Var7 == (_Base_ptr)0x0) || (p_Var7->_M_color == _S_black)) {
          p_Var7 = p_Var4->_M_left;
          p_Var4->_M_color = _S_black;
          p_Var2->_M_color = _S_red;
          p_Var2->_M_right = p_Var7;
          if (p_Var7 != (_Base_ptr)0x0) {
            p_Var7->_M_parent = p_Var2;
          }
          p_Var4->_M_parent = p_Var2->_M_parent;
          if (p_Var2 == param_2->_M_parent) {
            param_2->_M_parent = p_Var4;
          }
          else {
            p_Var7 = p_Var2->_M_parent;
            if (p_Var2 == p_Var7->_M_left) {
              p_Var7->_M_left = p_Var4;
            }
            else {
              p_Var7->_M_right = p_Var4;
            }
          }
          p_Var4->_M_left = p_Var2;
          p_Var2->_M_parent = p_Var4;
          p_Var2 = p_Var5->_M_left;
          p_Var7 = p_Var2->_M_left;
        }
LAB_086dff12:
        p_Var2->_M_color = p_Var5->_M_color;
        p_Var5->_M_color = _S_black;
        if (p_Var7 != (_Base_ptr)0x0) {
          p_Var7->_M_color = _S_black;
        }
        p_Var4 = p_Var2->_M_right;
        p_Var5->_M_left = p_Var4;
        if (p_Var4 != (_Base_ptr)0x0) {
          p_Var4->_M_parent = p_Var5;
        }
        p_Var2->_M_parent = p_Var5->_M_parent;
        if (p_Var5 == param_2->_M_parent) {
          param_2->_M_parent = p_Var2;
        }
        else {
          p_Var4 = p_Var5->_M_parent;
          if (p_Var5 == p_Var4->_M_right) {
            p_Var4->_M_right = p_Var2;
          }
          else {
            p_Var4->_M_left = p_Var2;
          }
        }
        p_Var2->_M_right = p_Var5;
        p_Var5->_M_parent = p_Var2;
        break;
      }
      p_Var7 = p_Var2->_M_left;
      if ((p_Var7 != (_Base_ptr)0x0) && (p_Var7->_M_color != _S_black)) goto LAB_086dff12;
LAB_086dfd95:
      p_Var2->_M_color = _S_red;
      p_Var2 = p_Var5->_M_parent;
      p_Var3 = p_Var5;
    }
    if (p_Var3 != (_Base_ptr)0x0) {
LAB_086dfd1a:
      p_Var3->_M_color = _S_black;
    }
  }
  return param_1;
}
```
