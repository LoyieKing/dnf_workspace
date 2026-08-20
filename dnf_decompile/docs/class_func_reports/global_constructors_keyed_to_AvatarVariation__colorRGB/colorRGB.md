# colorRGB

`_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev`

`global constructors keyed to AvatarVariation::colorRGB::colorRGB()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to AvatarVariation::colorRGB` | `0x088d499c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d499c  _GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev
#           global constructors keyed to AvatarVariation::colorRGB::colorRGB()
# range [0x088d499c, 0x088d5053]
088d499c +0x000:  push   %ebp
088d499d +0x001:  mov    %esp,%ebp
088d499f +0x003:  sub    $0x18,%esp
088d49a2 +0x006:  movl   $0xffff,0x4(%esp)
088d49aa +0x00e:  movl   $0x1,(%esp)
088d49b1 +0x015:  call   088d495c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
088d49b6 +0x01a:  leave
088d49b7 +0x01b:  ret
088d49b8 +0x01c:  push   %ebp
088d49b9 +0x01d:  mov    %esp,%ebp
088d49bb +0x01f:  sub    $0x18,%esp
088d49be +0x022:  mov    0x8(%ebp),%eax
088d49c1 +0x025:  mov    %eax,(%esp)
088d49c4 +0x028:  call   088d4aa2 <+0x106>
088d49c9 +0x02d:  leave
088d49ca +0x02e:  ret
088d49cb +0x02f:  push   %ebp
088d49cc +0x030:  mov    %esp,%ebp
088d49ce +0x032:  push   %esi
088d49cf +0x033:  push   %ebx
088d49d0 +0x034:  sub    $0x10,%esp
088d49d3 +0x037:  mov    0x8(%ebp),%esi
088d49d6 +0x03a:  mov    0x10(%ebp),%eax
088d49d9 +0x03d:  mov    %eax,(%esp)
088d49dc +0x040:  call   088d4b18 <+0x17c>
088d49e1 +0x045:  mov    %eax,%ebx
088d49e3 +0x047:  mov    0xc(%ebp),%eax
088d49e6 +0x04a:  mov    %eax,(%esp)
088d49e9 +0x04d:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
088d49ee +0x052:  mov    %ebx,0x8(%esp)
088d49f2 +0x056:  mov    %eax,0x4(%esp)
088d49f6 +0x05a:  mov    %esi,(%esp)
088d49f9 +0x05d:  call   088d4b20 <+0x184>
088d49fe +0x062:  mov    %esi,%eax
088d4a00 +0x064:  add    $0x10,%esp
088d4a03 +0x067:  pop    %ebx
088d4a04 +0x068:  pop    %esi
088d4a05 +0x069:  pop    %ebp
088d4a06 +0x06a:  ret    $0x4
088d4a09 +0x06d:  nop
088d4a0a +0x06e:  push   %ebp
088d4a0b +0x06f:  mov    %esp,%ebp
088d4a0d +0x071:  sub    $0x18,%esp
088d4a10 +0x074:  mov    0xc(%ebp),%eax
088d4a13 +0x077:  mov    %eax,(%esp)
088d4a16 +0x07a:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
088d4a1b +0x07f:  mov    (%eax),%edx
088d4a1d +0x081:  mov    0x8(%ebp),%eax
088d4a20 +0x084:  mov    %edx,(%eax)
088d4a22 +0x086:  mov    0xc(%ebp),%eax
088d4a25 +0x089:  add    $0x4,%eax
088d4a28 +0x08c:  mov    %eax,(%esp)
088d4a2b +0x08f:  call   088d4b56 <+0x1ba>
088d4a30 +0x094:  mov    0x8(%ebp),%edx
088d4a33 +0x097:  movzwl (%eax),%ecx
088d4a36 +0x09a:  mov    %cx,0x4(%edx)
088d4a3a +0x09e:  movzbl 0x2(%eax),%eax
088d4a3e +0x0a2:  mov    %al,0x6(%edx)
088d4a41 +0x0a5:  leave
088d4a42 +0x0a6:  ret
088d4a43 +0x0a7:  nop
088d4a44 +0x0a8:  push   %ebp
088d4a45 +0x0a9:  mov    %esp,%ebp
088d4a47 +0x0ab:  push   %ebx
088d4a48 +0x0ac:  sub    $0x14,%esp
088d4a4b +0x0af:  mov    0x8(%ebp),%ebx
088d4a4e +0x0b2:  mov    0xc(%ebp),%eax
088d4a51 +0x0b5:  mov    0x10(%ebp),%edx
088d4a54 +0x0b8:  mov    %edx,0x8(%esp)
088d4a58 +0x0bc:  mov    %eax,0x4(%esp)
088d4a5c +0x0c0:  mov    %ebx,(%esp)
088d4a5f +0x0c3:  call   088d4b5e <+0x1c2>
088d4a64 +0x0c8:  sub    $0x4,%esp
088d4a67 +0x0cb:  mov    %ebx,%eax
088d4a69 +0x0cd:  mov    -0x4(%ebp),%ebx
088d4a6c +0x0d0:  leave
088d4a6d +0x0d1:  ret    $0x4
088d4a70 +0x0d4:  push   %ebp
088d4a71 +0x0d5:  mov    %esp,%ebp
088d4a73 +0x0d7:  mov    0xc(%ebp),%eax
088d4a76 +0x0da:  mov    (%eax),%edx
088d4a78 +0x0dc:  mov    0x8(%ebp),%eax
088d4a7b +0x0df:  mov    %edx,(%eax)
088d4a7d +0x0e1:  pop    %ebp
088d4a7e +0x0e2:  ret
088d4a7f +0x0e3:  nop
088d4a80 +0x0e4:  push   %ebp
088d4a81 +0x0e5:  mov    %esp,%ebp
088d4a83 +0x0e7:  mov    0x8(%ebp),%eax
088d4a86 +0x0ea:  mov    (%eax),%edx
088d4a88 +0x0ec:  mov    0xc(%ebp),%eax
088d4a8b +0x0ef:  mov    (%eax),%eax
088d4a8d +0x0f1:  cmp    %eax,%edx
088d4a8f +0x0f3:  setne  %al
088d4a92 +0x0f6:  pop    %ebp
088d4a93 +0x0f7:  ret
088d4a94 +0x0f8:  push   %ebp
088d4a95 +0x0f9:  mov    %esp,%ebp
088d4a97 +0x0fb:  mov    0x8(%ebp),%eax
088d4a9a +0x0fe:  mov    (%eax),%eax
088d4a9c +0x100:  add    $0x10,%eax
088d4a9f +0x103:  pop    %ebp
088d4aa0 +0x104:  ret
088d4aa1 +0x105:  nop
088d4aa2 +0x106:  push   %ebp
088d4aa3 +0x107:  mov    %esp,%ebp
088d4aa5 +0x109:  push   %ebx
088d4aa6 +0x10a:  sub    $0x14,%esp
088d4aa9 +0x10d:  mov    0x8(%ebp),%eax
088d4aac +0x110:  mov    %eax,(%esp)
088d4aaf +0x113:  call   0823d658 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87d6
088d4ab4 +0x118:  mov    %eax,0x4(%esp)
088d4ab8 +0x11c:  mov    0x8(%ebp),%eax
088d4abb +0x11f:  mov    %eax,(%esp)
088d4abe +0x122:  call   083af4ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x494b8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x494b8
088d4ac3 +0x127:  mov    0x8(%ebp),%eax
088d4ac6 +0x12a:  mov    %eax,(%esp)
088d4ac9 +0x12d:  call   088d4d2e <+0x392>
088d4ace +0x132:  mov    %eax,%ebx
088d4ad0 +0x134:  mov    0x8(%ebp),%eax
088d4ad3 +0x137:  mov    %eax,(%esp)
088d4ad6 +0x13a:  call   0823d664 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87e2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87e2
088d4adb +0x13f:  mov    %eax,(%ebx)
088d4add +0x141:  mov    0x8(%ebp),%eax
088d4ae0 +0x144:  mov    %eax,(%esp)
088d4ae3 +0x147:  call   088d4d3a <+0x39e>
088d4ae8 +0x14c:  movl   $0x0,(%eax)
088d4aee +0x152:  mov    0x8(%ebp),%eax
088d4af1 +0x155:  mov    %eax,(%esp)
088d4af4 +0x158:  call   088d4d46 <+0x3aa>
088d4af9 +0x15d:  mov    %eax,%ebx
088d4afb +0x15f:  mov    0x8(%ebp),%eax
088d4afe +0x162:  mov    %eax,(%esp)
088d4b01 +0x165:  call   0823d664 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87e2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87e2
088d4b06 +0x16a:  mov    %eax,(%ebx)
088d4b08 +0x16c:  mov    0x8(%ebp),%eax
088d4b0b +0x16f:  movl   $0x0,0x14(%eax)
088d4b12 +0x176:  add    $0x14,%esp
088d4b15 +0x179:  pop    %ebx
088d4b16 +0x17a:  pop    %ebp
088d4b17 +0x17b:  ret
088d4b18 +0x17c:  push   %ebp
088d4b19 +0x17d:  mov    %esp,%ebp
088d4b1b +0x17f:  mov    0x8(%ebp),%eax
088d4b1e +0x182:  pop    %ebp
088d4b1f +0x183:  ret
088d4b20 +0x184:  push   %ebp
088d4b21 +0x185:  mov    %esp,%ebp
088d4b23 +0x187:  sub    $0x18,%esp
088d4b26 +0x18a:  mov    0xc(%ebp),%eax
088d4b29 +0x18d:  mov    %eax,(%esp)
088d4b2c +0x190:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
088d4b31 +0x195:  mov    (%eax),%edx
088d4b33 +0x197:  mov    0x8(%ebp),%eax
088d4b36 +0x19a:  mov    %edx,(%eax)
088d4b38 +0x19c:  mov    0x10(%ebp),%eax
088d4b3b +0x19f:  mov    %eax,(%esp)
088d4b3e +0x1a2:  call   088d4b18 <+0x17c>
088d4b43 +0x1a7:  mov    0x8(%ebp),%edx
088d4b46 +0x1aa:  movzwl (%eax),%ecx
088d4b49 +0x1ad:  mov    %cx,0x4(%edx)
088d4b4d +0x1b1:  movzbl 0x2(%eax),%eax
088d4b51 +0x1b5:  mov    %al,0x6(%edx)
088d4b54 +0x1b8:  leave
088d4b55 +0x1b9:  ret
088d4b56 +0x1ba:  push   %ebp
088d4b57 +0x1bb:  mov    %esp,%ebp
088d4b59 +0x1bd:  mov    0x8(%ebp),%eax
088d4b5c +0x1c0:  pop    %ebp
088d4b5d +0x1c1:  ret
088d4b5e +0x1c2:  push   %ebp
088d4b5f +0x1c3:  mov    %esp,%ebp
088d4b61 +0x1c5:  push   %esi
088d4b62 +0x1c6:  push   %ebx
088d4b63 +0x1c7:  sub    $0x50,%esp
088d4b66 +0x1ca:  mov    0x8(%ebp),%ebx
088d4b69 +0x1cd:  mov    0xc(%ebp),%eax
088d4b6c +0x1d0:  mov    %eax,(%esp)
088d4b6f +0x1d3:  call   0823d658 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87d6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87d6
088d4b74 +0x1d8:  mov    %eax,-0x14(%ebp)
088d4b77 +0x1db:  mov    0xc(%ebp),%eax
088d4b7a +0x1de:  mov    %eax,(%esp)
088d4b7d +0x1e1:  call   0823d664 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87e2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87e2
088d4b82 +0x1e6:  mov    %eax,-0x10(%ebp)
088d4b85 +0x1e9:  movb   $0x1,-0x9(%ebp)
088d4b89 +0x1ed:  jmp    088d4be7 <+0x24b>
088d4b8b +0x1ef:  mov    -0x14(%ebp),%eax
088d4b8e +0x1f2:  mov    %eax,-0x10(%ebp)
088d4b91 +0x1f5:  mov    -0x14(%ebp),%eax
088d4b94 +0x1f8:  mov    %eax,(%esp)
088d4b97 +0x1fb:  call   0823ec58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9dd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9dd6
088d4b9c +0x200:  mov    %eax,%esi
088d4b9e +0x202:  mov    0x10(%ebp),%eax
088d4ba1 +0x205:  mov    %eax,0x4(%esp)
088d4ba5 +0x209:  lea    -0x2d(%ebp),%eax
088d4ba8 +0x20c:  mov    %eax,(%esp)
088d4bab +0x20f:  call   0823ec9c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9e1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9e1a
088d4bb0 +0x214:  mov    0xc(%ebp),%edx
088d4bb3 +0x217:  mov    %esi,0x8(%esp)
088d4bb7 +0x21b:  mov    %eax,0x4(%esp)
088d4bbb +0x21f:  mov    %edx,(%esp)
088d4bbe +0x222:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
088d4bc3 +0x227:  mov    %al,-0x9(%ebp)
088d4bc6 +0x22a:  cmpb   $0x0,-0x9(%ebp)
088d4bca +0x22e:  je     088d4bd9 <+0x23d>
088d4bcc +0x230:  mov    -0x14(%ebp),%eax
088d4bcf +0x233:  mov    %eax,(%esp)
088d4bd2 +0x236:  call   0823ec7a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9df8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9df8
088d4bd7 +0x23b:  jmp    088d4be4 <+0x248>
088d4bd9 +0x23d:  mov    -0x14(%ebp),%eax
088d4bdc +0x240:  mov    %eax,(%esp)
088d4bdf +0x243:  call   0823ec85 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9e03>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9e03
088d4be4 +0x248:  mov    %eax,-0x14(%ebp)
088d4be7 +0x24b:  cmpl   $0x0,-0x14(%ebp)
088d4beb +0x24f:  setne  %al
088d4bee +0x252:  test   %al,%al
088d4bf0 +0x254:  jne    088d4b8b <+0x1ef>
088d4bf2 +0x256:  mov    -0x10(%ebp),%eax
088d4bf5 +0x259:  mov    %eax,0x4(%esp)
088d4bf9 +0x25d:  lea    -0x34(%ebp),%eax
088d4bfc +0x260:  mov    %eax,(%esp)
088d4bff +0x263:  call   0823d64a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87c8
088d4c04 +0x268:  cmpb   $0x0,-0x9(%ebp)
088d4c08 +0x26c:  je     088d4c89 <+0x2ed>
088d4c0a +0x26e:  lea    -0x2c(%ebp),%eax
088d4c0d +0x271:  mov    0xc(%ebp),%edx
088d4c10 +0x274:  mov    %edx,0x4(%esp)
088d4c14 +0x278:  mov    %eax,(%esp)
088d4c17 +0x27b:  call   088d4d52 <+0x3b6>
088d4c1c +0x280:  sub    $0x4,%esp
088d4c1f +0x283:  lea    -0x2c(%ebp),%eax
088d4c22 +0x286:  mov    %eax,0x4(%esp)
088d4c26 +0x28a:  lea    -0x34(%ebp),%eax
088d4c29 +0x28d:  mov    %eax,(%esp)
088d4c2c +0x290:  call   082376ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd74
088d4c31 +0x295:  test   %al,%al
088d4c33 +0x297:  je     088d4c7e <+0x2e2>
088d4c35 +0x299:  movb   $0x1,-0x25(%ebp)
088d4c39 +0x29d:  mov    -0x10(%ebp),%ecx
088d4c3c +0x2a0:  mov    -0x14(%ebp),%edx
088d4c3f +0x2a3:  lea    -0x24(%ebp),%eax
088d4c42 +0x2a6:  mov    0x10(%ebp),%esi
088d4c45 +0x2a9:  mov    %esi,0x10(%esp)
088d4c49 +0x2ad:  mov    %ecx,0xc(%esp)
088d4c4d +0x2b1:  mov    %edx,0x8(%esp)
088d4c51 +0x2b5:  mov    0xc(%ebp),%edx
088d4c54 +0x2b8:  mov    %edx,0x4(%esp)
088d4c58 +0x2bc:  mov    %eax,(%esp)
088d4c5b +0x2bf:  call   088d4d78 <+0x3dc>
088d4c60 +0x2c4:  sub    $0x4,%esp
088d4c63 +0x2c7:  lea    -0x25(%ebp),%eax
088d4c66 +0x2ca:  mov    %eax,0x8(%esp)
088d4c6a +0x2ce:  lea    -0x24(%ebp),%eax
088d4c6d +0x2d1:  mov    %eax,0x4(%esp)
088d4c71 +0x2d5:  mov    %ebx,(%esp)
088d4c74 +0x2d8:  call   088d4e40 <+0x4a4>
088d4c79 +0x2dd:  jmp    088d4d1f <+0x383>
088d4c7e +0x2e2:  lea    -0x34(%ebp),%eax
088d4c81 +0x2e5:  mov    %eax,(%esp)
088d4c84 +0x2e8:  call   088d4e6e <+0x4d2>
088d4c89 +0x2ed:  mov    0x10(%ebp),%eax
088d4c8c +0x2f0:  mov    %eax,0x4(%esp)
088d4c90 +0x2f4:  lea    -0x1e(%ebp),%eax
088d4c93 +0x2f7:  mov    %eax,(%esp)
088d4c96 +0x2fa:  call   0823ec9c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9e1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9e1a
088d4c9b +0x2ff:  mov    %eax,%esi
088d4c9d +0x301:  mov    -0x34(%ebp),%eax
088d4ca0 +0x304:  mov    %eax,(%esp)
088d4ca3 +0x307:  call   0823d6ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x886a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x886a
088d4ca8 +0x30c:  mov    0xc(%ebp),%edx
088d4cab +0x30f:  mov    %esi,0x8(%esp)
088d4caf +0x313:  mov    %eax,0x4(%esp)
088d4cb3 +0x317:  mov    %edx,(%esp)
088d4cb6 +0x31a:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
088d4cbb +0x31f:  test   %al,%al
088d4cbd +0x321:  je     088d4d05 <+0x369>
088d4cbf +0x323:  movb   $0x1,-0x1d(%ebp)
088d4cc3 +0x327:  mov    -0x10(%ebp),%ecx
088d4cc6 +0x32a:  mov    -0x14(%ebp),%edx
088d4cc9 +0x32d:  lea    -0x1c(%ebp),%eax
088d4ccc +0x330:  mov    0x10(%ebp),%esi
088d4ccf +0x333:  mov    %esi,0x10(%esp)
088d4cd3 +0x337:  mov    %ecx,0xc(%esp)
088d4cd7 +0x33b:  mov    %edx,0x8(%esp)
088d4cdb +0x33f:  mov    0xc(%ebp),%edx
088d4cde +0x342:  mov    %edx,0x4(%esp)
088d4ce2 +0x346:  mov    %eax,(%esp)
088d4ce5 +0x349:  call   088d4d78 <+0x3dc>
088d4cea +0x34e:  sub    $0x4,%esp
088d4ced +0x351:  lea    -0x1d(%ebp),%eax
088d4cf0 +0x354:  mov    %eax,0x8(%esp)
088d4cf4 +0x358:  lea    -0x1c(%ebp),%eax
088d4cf7 +0x35b:  mov    %eax,0x4(%esp)
088d4cfb +0x35f:  mov    %ebx,(%esp)
088d4cfe +0x362:  call   088d4e40 <+0x4a4>
088d4d03 +0x367:  jmp    088d4d1f <+0x383>
088d4d05 +0x369:  movb   $0x0,-0x15(%ebp)
088d4d09 +0x36d:  lea    -0x15(%ebp),%eax
088d4d0c +0x370:  mov    %eax,0x8(%esp)
088d4d10 +0x374:  lea    -0x34(%ebp),%eax
088d4d13 +0x377:  mov    %eax,0x4(%esp)
088d4d17 +0x37b:  mov    %ebx,(%esp)
088d4d1a +0x37e:  call   088d4e8c <+0x4f0>
088d4d1f +0x383:  mov    %ebx,%eax
088d4d21 +0x385:  lea    -0x8(%ebp),%esp
088d4d24 +0x388:  add    $0x0,%esp
088d4d27 +0x38b:  pop    %ebx
088d4d28 +0x38c:  pop    %esi
088d4d29 +0x38d:  pop    %ebp
088d4d2a +0x38e:  ret    $0x4
088d4d2d +0x391:  nop
088d4d2e +0x392:  push   %ebp
088d4d2f +0x393:  mov    %esp,%ebp
088d4d31 +0x395:  mov    0x8(%ebp),%eax
088d4d34 +0x398:  add    $0xc,%eax
088d4d37 +0x39b:  pop    %ebp
088d4d38 +0x39c:  ret
088d4d39 +0x39d:  nop
088d4d3a +0x39e:  push   %ebp
088d4d3b +0x39f:  mov    %esp,%ebp
088d4d3d +0x3a1:  mov    0x8(%ebp),%eax
088d4d40 +0x3a4:  add    $0x8,%eax
088d4d43 +0x3a7:  pop    %ebp
088d4d44 +0x3a8:  ret
088d4d45 +0x3a9:  nop
088d4d46 +0x3aa:  push   %ebp
088d4d47 +0x3ab:  mov    %esp,%ebp
088d4d49 +0x3ad:  mov    0x8(%ebp),%eax
088d4d4c +0x3b0:  add    $0x10,%eax
088d4d4f +0x3b3:  pop    %ebp
088d4d50 +0x3b4:  ret
088d4d51 +0x3b5:  nop
088d4d52 +0x3b6:  push   %ebp
088d4d53 +0x3b7:  mov    %esp,%ebp
088d4d55 +0x3b9:  push   %ebx
088d4d56 +0x3ba:  sub    $0x14,%esp
088d4d59 +0x3bd:  mov    0x8(%ebp),%ebx
088d4d5c +0x3c0:  mov    0xc(%ebp),%eax
088d4d5f +0x3c3:  mov    0xc(%eax),%eax
088d4d62 +0x3c6:  mov    %eax,0x4(%esp)
088d4d66 +0x3ca:  mov    %ebx,(%esp)
088d4d69 +0x3cd:  call   0823d64a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87c8
088d4d6e +0x3d2:  mov    %ebx,%eax
088d4d70 +0x3d4:  add    $0x14,%esp
088d4d73 +0x3d7:  pop    %ebx
088d4d74 +0x3d8:  pop    %ebp
088d4d75 +0x3d9:  ret    $0x4
088d4d78 +0x3dc:  push   %ebp
088d4d79 +0x3dd:  mov    %esp,%ebp
088d4d7b +0x3df:  push   %esi
088d4d7c +0x3e0:  push   %ebx
088d4d7d +0x3e1:  sub    $0x20,%esp
088d4d80 +0x3e4:  mov    0x8(%ebp),%esi
088d4d83 +0x3e7:  cmpl   $0x0,0x10(%ebp)
088d4d87 +0x3eb:  jne    088d4dcf <+0x433>
088d4d89 +0x3ed:  mov    0xc(%ebp),%eax
088d4d8c +0x3f0:  mov    %eax,(%esp)
088d4d8f +0x3f3:  call   0823d664 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87e2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87e2
088d4d94 +0x3f8:  cmp    0x14(%ebp),%eax
088d4d97 +0x3fb:  je     088d4dcf <+0x433>
088d4d99 +0x3fd:  mov    0x14(%ebp),%eax
088d4d9c +0x400:  mov    %eax,(%esp)
088d4d9f +0x403:  call   0823d6ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x886a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x886a
088d4da4 +0x408:  mov    %eax,%ebx
088d4da6 +0x40a:  mov    0x18(%ebp),%eax
088d4da9 +0x40d:  mov    %eax,0x4(%esp)
088d4dad +0x411:  lea    -0xe(%ebp),%eax
088d4db0 +0x414:  mov    %eax,(%esp)
088d4db3 +0x417:  call   0823ec9c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9e1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9e1a
088d4db8 +0x41c:  mov    0xc(%ebp),%edx
088d4dbb +0x41f:  mov    %ebx,0x8(%esp)
088d4dbf +0x423:  mov    %eax,0x4(%esp)
088d4dc3 +0x427:  mov    %edx,(%esp)
088d4dc6 +0x42a:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
088d4dcb +0x42f:  test   %al,%al
088d4dcd +0x431:  je     088d4dd6 <+0x43a>
088d4dcf +0x433:  mov    $0x1,%eax
088d4dd4 +0x438:  jmp    088d4ddb <+0x43f>
088d4dd6 +0x43a:  mov    $0x0,%eax
088d4ddb +0x43f:  mov    %al,-0xd(%ebp)
088d4dde +0x442:  mov    0x18(%ebp),%eax
088d4de1 +0x445:  mov    %eax,0x4(%esp)
088d4de5 +0x449:  mov    0xc(%ebp),%eax
088d4de8 +0x44c:  mov    %eax,(%esp)
088d4deb +0x44f:  call   088d4eba <+0x51e>
088d4df0 +0x454:  mov    %eax,-0xc(%ebp)
088d4df3 +0x457:  mov    0xc(%ebp),%eax
088d4df6 +0x45a:  lea    0x4(%eax),%ecx
088d4df9 +0x45d:  mov    -0xc(%ebp),%edx
088d4dfc +0x460:  movzbl -0xd(%ebp),%eax
088d4e00 +0x464:  mov    %ecx,0xc(%esp)
088d4e04 +0x468:  mov    0x14(%ebp),%ecx
088d4e07 +0x46b:  mov    %ecx,0x8(%esp)
088d4e0b +0x46f:  mov    %edx,0x4(%esp)
088d4e0f +0x473:  mov    %eax,(%esp)
088d4e12 +0x476:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
088d4e17 +0x47b:  mov    0xc(%ebp),%eax
088d4e1a +0x47e:  mov    0x14(%eax),%eax
088d4e1d +0x481:  lea    0x1(%eax),%edx
088d4e20 +0x484:  mov    0xc(%ebp),%eax
088d4e23 +0x487:  mov    %edx,0x14(%eax)
088d4e26 +0x48a:  mov    -0xc(%ebp),%eax
088d4e29 +0x48d:  mov    %eax,0x4(%esp)
088d4e2d +0x491:  mov    %esi,(%esp)
088d4e30 +0x494:  call   0823d64a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x87c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x87c8
088d4e35 +0x499:  mov    %esi,%eax
088d4e37 +0x49b:  add    $0x20,%esp
088d4e3a +0x49e:  pop    %ebx
088d4e3b +0x49f:  pop    %esi
088d4e3c +0x4a0:  pop    %ebp
088d4e3d +0x4a1:  ret    $0x4
088d4e40 +0x4a4:  push   %ebp
088d4e41 +0x4a5:  mov    %esp,%ebp
088d4e43 +0x4a7:  sub    $0x18,%esp
088d4e46 +0x4aa:  mov    0xc(%ebp),%eax
088d4e49 +0x4ad:  mov    %eax,(%esp)
088d4e4c +0x4b0:  call   088d4f3b <+0x59f>
088d4e51 +0x4b5:  mov    0x8(%ebp),%edx
088d4e54 +0x4b8:  mov    (%eax),%eax
088d4e56 +0x4ba:  mov    %eax,(%edx)
088d4e58 +0x4bc:  mov    0x10(%ebp),%eax
088d4e5b +0x4bf:  mov    %eax,(%esp)
088d4e5e +0x4c2:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
088d4e63 +0x4c7:  movzbl (%eax),%edx
088d4e66 +0x4ca:  mov    0x8(%ebp),%eax
088d4e69 +0x4cd:  mov    %dl,0x4(%eax)
088d4e6c +0x4d0:  leave
088d4e6d +0x4d1:  ret
088d4e6e +0x4d2:  push   %ebp
088d4e6f +0x4d3:  mov    %esp,%ebp
088d4e71 +0x4d5:  sub    $0x18,%esp
088d4e74 +0x4d8:  mov    0x8(%ebp),%eax
088d4e77 +0x4db:  mov    (%eax),%eax
088d4e79 +0x4dd:  mov    %eax,(%esp)
088d4e7c +0x4e0:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
088d4e81 +0x4e5:  mov    0x8(%ebp),%edx
088d4e84 +0x4e8:  mov    %eax,(%edx)
088d4e86 +0x4ea:  mov    0x8(%ebp),%eax
088d4e89 +0x4ed:  leave
088d4e8a +0x4ee:  ret
088d4e8b +0x4ef:  nop
088d4e8c +0x4f0:  push   %ebp
088d4e8d +0x4f1:  mov    %esp,%ebp
088d4e8f +0x4f3:  sub    $0x18,%esp
088d4e92 +0x4f6:  mov    0xc(%ebp),%eax
088d4e95 +0x4f9:  mov    %eax,(%esp)
088d4e98 +0x4fc:  call   088d4f43 <+0x5a7>
088d4e9d +0x501:  mov    0x8(%ebp),%edx
088d4ea0 +0x504:  mov    (%eax),%eax
088d4ea2 +0x506:  mov    %eax,(%edx)
088d4ea4 +0x508:  mov    0x10(%ebp),%eax
088d4ea7 +0x50b:  mov    %eax,(%esp)
088d4eaa +0x50e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
088d4eaf +0x513:  movzbl (%eax),%edx
088d4eb2 +0x516:  mov    0x8(%ebp),%eax
088d4eb5 +0x519:  mov    %dl,0x4(%eax)
088d4eb8 +0x51c:  leave
088d4eb9 +0x51d:  ret
088d4eba +0x51e:  push   %ebp
088d4ebb +0x51f:  mov    %esp,%ebp
088d4ebd +0x521:  push   %esi
088d4ebe +0x522:  push   %ebx
088d4ebf +0x523:  sub    $0x20,%esp
088d4ec2 +0x526:  mov    0x8(%ebp),%eax
088d4ec5 +0x529:  mov    %eax,(%esp)
088d4ec8 +0x52c:  call   088d4f4c <+0x5b0>
088d4ecd +0x531:  mov    %eax,-0xc(%ebp)
088d4ed0 +0x534:  mov    0xc(%ebp),%eax
088d4ed3 +0x537:  mov    %eax,(%esp)
088d4ed6 +0x53a:  call   088d4f6f <+0x5d3>
088d4edb +0x53f:  mov    %eax,%ebx
088d4edd +0x541:  mov    0x8(%ebp),%eax
088d4ee0 +0x544:  mov    %eax,(%esp)
088d4ee3 +0x547:  call   083d8910 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x728dc>  ; global constructors keyed to CServerEvent::m_nExpRate+0x728dc
088d4ee8 +0x54c:  mov    %ebx,0x8(%esp)
088d4eec +0x550:  mov    -0xc(%ebp),%edx
088d4eef +0x553:  mov    %edx,0x4(%esp)
088d4ef3 +0x557:  mov    %eax,(%esp)
088d4ef6 +0x55a:  call   088d4f78 <+0x5dc>
088d4efb +0x55f:  jmp    088d4f31 <+0x595>
088d4efd +0x561:  mov    %eax,(%esp)
088d4f00 +0x564:  call   08725ce0 <__cxa_begin_catch>
088d4f05 +0x569:  mov    -0xc(%ebp),%eax
088d4f08 +0x56c:  mov    %eax,0x4(%esp)
088d4f0c +0x570:  mov    0x8(%ebp),%eax
088d4f0f +0x573:  mov    %eax,(%esp)
088d4f12 +0x576:  call   083d8932 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x728fe>  ; global constructors keyed to CServerEvent::m_nExpRate+0x728fe
088d4f17 +0x57b:  call   08724be0 <__cxa_rethrow>
088d4f1c +0x580:  mov    %edx,%ebx
088d4f1e +0x582:  mov    %eax,%esi
088d4f20 +0x584:  call   08725c30 <__cxa_end_catch>
088d4f25 +0x589:  mov    %esi,%eax
088d4f27 +0x58b:  mov    %ebx,%edx
088d4f29 +0x58d:  mov    %eax,(%esp)
088d4f2c +0x590:  call   08ae3750 <_Unwind_Resume>
088d4f31 +0x595:  mov    -0xc(%ebp),%eax
088d4f34 +0x598:  add    $0x20,%esp
088d4f37 +0x59b:  pop    %ebx
088d4f38 +0x59c:  pop    %esi
088d4f39 +0x59d:  pop    %ebp
088d4f3a +0x59e:  ret
088d4f3b +0x59f:  push   %ebp
088d4f3c +0x5a0:  mov    %esp,%ebp
088d4f3e +0x5a2:  mov    0x8(%ebp),%eax
088d4f41 +0x5a5:  pop    %ebp
088d4f42 +0x5a6:  ret
088d4f43 +0x5a7:  push   %ebp
088d4f44 +0x5a8:  mov    %esp,%ebp
088d4f46 +0x5aa:  mov    0x8(%ebp),%eax
088d4f49 +0x5ad:  pop    %ebp
088d4f4a +0x5ae:  ret
088d4f4b +0x5af:  nop
088d4f4c +0x5b0:  push   %ebp
088d4f4d +0x5b1:  mov    %esp,%ebp
088d4f4f +0x5b3:  sub    $0x18,%esp
088d4f52 +0x5b6:  mov    0x8(%ebp),%eax
088d4f55 +0x5b9:  movl   $0x0,0x8(%esp)
088d4f5d +0x5c1:  movl   $0x1,0x4(%esp)
088d4f65 +0x5c9:  mov    %eax,(%esp)
088d4f68 +0x5cc:  call   088d4fb8 <+0x61c>
088d4f6d +0x5d1:  leave
088d4f6e +0x5d2:  ret
088d4f6f +0x5d3:  push   %ebp
088d4f70 +0x5d4:  mov    %esp,%ebp
088d4f72 +0x5d6:  mov    0x8(%ebp),%eax
088d4f75 +0x5d9:  pop    %ebp
088d4f76 +0x5da:  ret
088d4f77 +0x5db:  nop
088d4f78 +0x5dc:  push   %ebp
088d4f79 +0x5dd:  mov    %esp,%ebp
088d4f7b +0x5df:  push   %ebx
088d4f7c +0x5e0:  sub    $0x14,%esp
088d4f7f +0x5e3:  mov    0x10(%ebp),%eax
088d4f82 +0x5e6:  mov    %eax,(%esp)
088d4f85 +0x5e9:  call   088d4f6f <+0x5d3>
088d4f8a +0x5ee:  mov    %eax,%ebx
088d4f8c +0x5f0:  mov    0xc(%ebp),%eax
088d4f8f +0x5f3:  mov    %eax,0x4(%esp)
088d4f93 +0x5f7:  movl   $0x18,(%esp)
088d4f9a +0x5fe:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
088d4f9f +0x603:  mov    %eax,%edx
088d4fa1 +0x605:  test   %edx,%edx
088d4fa3 +0x607:  je     088d4fb1 <+0x615>
088d4fa5 +0x609:  mov    %ebx,0x4(%esp)
088d4fa9 +0x60d:  mov    %eax,(%esp)
088d4fac +0x610:  call   088d4ff6 <+0x65a>
088d4fb1 +0x615:  add    $0x14,%esp
088d4fb4 +0x618:  pop    %ebx
088d4fb5 +0x619:  pop    %ebp
088d4fb6 +0x61a:  ret
088d4fb7 +0x61b:  nop
088d4fb8 +0x61c:  push   %ebp
088d4fb9 +0x61d:  mov    %esp,%ebp
088d4fbb +0x61f:  sub    $0x18,%esp
088d4fbe +0x622:  mov    0x8(%ebp),%eax
088d4fc1 +0x625:  mov    %eax,(%esp)
088d4fc4 +0x628:  call   088d5048 <+0x6ac>
088d4fc9 +0x62d:  cmp    0xc(%ebp),%eax
088d4fcc +0x630:  setb   %al
088d4fcf +0x633:  movzbl %al,%eax
088d4fd2 +0x636:  test   %eax,%eax
088d4fd4 +0x638:  setne  %al
088d4fd7 +0x63b:  test   %al,%al
088d4fd9 +0x63d:  je     088d4fe0 <+0x644>
088d4fdb +0x63f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
088d4fe0 +0x644:  mov    0xc(%ebp),%edx
088d4fe3 +0x647:  mov    %edx,%eax
088d4fe5 +0x649:  add    %eax,%eax
088d4fe7 +0x64b:  add    %edx,%eax
088d4fe9 +0x64d:  shl    $0x3,%eax
088d4fec +0x650:  mov    %eax,(%esp)
088d4fef +0x653:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088d4ff4 +0x658:  leave
088d4ff5 +0x659:  ret
088d4ff6 +0x65a:  push   %ebp
088d4ff7 +0x65b:  mov    %esp,%ebp
088d4ff9 +0x65d:  sub    $0x18,%esp
088d4ffc +0x660:  mov    0x8(%ebp),%eax
088d4fff +0x663:  movl   $0x0,(%eax)
088d5005 +0x669:  mov    0x8(%ebp),%eax
088d5008 +0x66c:  movl   $0x0,0x4(%eax)
088d500f +0x673:  mov    0x8(%ebp),%eax
088d5012 +0x676:  movl   $0x0,0x8(%eax)
088d5019 +0x67d:  mov    0x8(%ebp),%eax
088d501c +0x680:  movl   $0x0,0xc(%eax)
088d5023 +0x687:  mov    0xc(%ebp),%eax
088d5026 +0x68a:  mov    %eax,(%esp)
088d5029 +0x68d:  call   088d4f6f <+0x5d3>
088d502e +0x692:  mov    0x8(%ebp),%edx
088d5031 +0x695:  mov    (%eax),%ecx
088d5033 +0x697:  mov    %ecx,0x10(%edx)
088d5036 +0x69a:  movzwl 0x4(%eax),%ecx
088d503a +0x69e:  mov    %cx,0x14(%edx)
088d503e +0x6a2:  movzbl 0x6(%eax),%eax
088d5042 +0x6a6:  mov    %al,0x16(%edx)
088d5045 +0x6a9:  leave
088d5046 +0x6aa:  ret
088d5047 +0x6ab:  nop
088d5048 +0x6ac:  push   %ebp
088d5049 +0x6ad:  mov    %esp,%ebp
088d504b +0x6af:  mov    $0xaaaaaaa,%eax
088d5050 +0x6b4:  pop    %ebp
088d5051 +0x6b5:  ret
088d5052 +0x6b6:  nop
088d5053 +0x6b7:  nop
```

## 反编译 C

```c
// <global>::global @ 0x88d499c

/* AvatarVariation::colorRGB::colorRGB() */

void AvatarVariation::colorRGB::_GLOBAL__I_colorRGB(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
