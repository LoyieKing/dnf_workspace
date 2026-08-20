# CSharedServerMessageManager

`_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev`

`global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CSharedServerMessageManager` | `0x086019b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086019b4  _GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev
#           global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()
# range [0x086019b4, 0x086027e7]
086019b4 +0x000:  push   %ebp
086019b5 +0x001:  mov    %esp,%ebp
086019b7 +0x003:  sub    $0x18,%esp
086019ba +0x006:  movl   $0xffff,0x4(%esp)
086019c2 +0x00e:  movl   $0x1,(%esp)
086019c9 +0x015:  call   08601974 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086019ce +0x01a:  leave
086019cf +0x01b:  ret
086019d0 +0x01c:  push   %ebp
086019d1 +0x01d:  mov    %esp,%ebp
086019d3 +0x01f:  sub    $0x18,%esp
086019d6 +0x022:  mov    0x8(%ebp),%eax
086019d9 +0x025:  movb   $0x0,(%eax)
086019dc +0x028:  mov    0x8(%ebp),%eax
086019df +0x02b:  add    $0x4,%eax
086019e2 +0x02e:  mov    %eax,(%esp)
086019e5 +0x031:  call   08601a46 <+0x92>
086019ea +0x036:  leave
086019eb +0x037:  ret
086019ec +0x038:  push   %ebp
086019ed +0x039:  mov    %esp,%ebp
086019ef +0x03b:  mov    0x8(%ebp),%eax
086019f2 +0x03e:  movl   $0x0,(%eax)
086019f8 +0x044:  pop    %ebp
086019f9 +0x045:  ret
086019fa +0x046:  push   %ebp
086019fb +0x047:  mov    %esp,%ebp
086019fd +0x049:  pop    %ebp
086019fe +0x04a:  ret
086019ff +0x04b:  nop
08601a00 +0x04c:  push   %ebp
08601a01 +0x04d:  mov    %esp,%ebp
08601a03 +0x04f:  mov    0x8(%ebp),%eax
08601a06 +0x052:  mov    0xc(%ebp),%edx
08601a09 +0x055:  mov    %edx,(%eax)
08601a0b +0x057:  pop    %ebp
08601a0c +0x058:  ret
08601a0d +0x059:  nop
08601a0e +0x05a:  push   %ebp
08601a0f +0x05b:  mov    %esp,%ebp
08601a11 +0x05d:  mov    0x8(%ebp),%eax
08601a14 +0x060:  movb   $0x1,0x4(%eax)
08601a18 +0x064:  pop    %ebp
08601a19 +0x065:  ret
08601a1a +0x066:  push   %ebp
08601a1b +0x067:  mov    %esp,%ebp
08601a1d +0x069:  sub    $0x18,%esp
08601a20 +0x06c:  mov    0x8(%ebp),%eax
08601a23 +0x06f:  add    $0x4,%eax
08601a26 +0x072:  mov    %eax,(%esp)
08601a29 +0x075:  call   08601a62 <+0xae>
08601a2e +0x07a:  leave
08601a2f +0x07b:  ret
08601a30 +0x07c:  push   %ebp
08601a31 +0x07d:  mov    %esp,%ebp
08601a33 +0x07f:  sub    $0x18,%esp
08601a36 +0x082:  mov    0x8(%ebp),%eax
08601a39 +0x085:  add    $0x4,%eax
08601a3c +0x088:  mov    %eax,(%esp)
08601a3f +0x08b:  call   08601a76 <+0xc2>
08601a44 +0x090:  leave
08601a45 +0x091:  ret
08601a46 +0x092:  push   %ebp
08601a47 +0x093:  mov    %esp,%ebp
08601a49 +0x095:  sub    $0x18,%esp
08601a4c +0x098:  mov    0x8(%ebp),%eax
08601a4f +0x09b:  mov    (%eax),%eax
08601a51 +0x09d:  mov    %eax,0x4(%esp)
08601a55 +0x0a1:  mov    0x8(%ebp),%eax
08601a58 +0x0a4:  mov    %eax,(%esp)
08601a5b +0x0a7:  call   08601cbc <+0x308>
08601a60 +0x0ac:  leave
08601a61 +0x0ad:  ret
08601a62 +0x0ae:  push   %ebp
08601a63 +0x0af:  mov    %esp,%ebp
08601a65 +0x0b1:  sub    $0x18,%esp
08601a68 +0x0b4:  mov    0x8(%ebp),%eax
08601a6b +0x0b7:  mov    %eax,(%esp)
08601a6e +0x0ba:  call   08601d06 <+0x352>
08601a73 +0x0bf:  leave
08601a74 +0x0c0:  ret
08601a75 +0x0c1:  nop
08601a76 +0x0c2:  push   %ebp
08601a77 +0x0c3:  mov    %esp,%ebp
08601a79 +0x0c5:  push   %esi
08601a7a +0x0c6:  push   %ebx
08601a7b +0x0c7:  sub    $0x10,%esp
08601a7e +0x0ca:  mov    0x8(%ebp),%eax
08601a81 +0x0cd:  mov    %eax,(%esp)
08601a84 +0x0d0:  call   08601d88 <+0x3d4>
08601a89 +0x0d5:  mov    0x8(%ebp),%edx
08601a8c +0x0d8:  mov    0x4(%edx),%ecx
08601a8f +0x0db:  mov    0x8(%ebp),%edx
08601a92 +0x0de:  mov    (%edx),%edx
08601a94 +0x0e0:  mov    %eax,0x8(%esp)
08601a98 +0x0e4:  mov    %ecx,0x4(%esp)
08601a9c +0x0e8:  mov    %edx,(%esp)
08601a9f +0x0eb:  call   08601d90 <+0x3dc>
08601aa4 +0x0f0:  jmp    08601ac1 <+0x10d>
08601aa6 +0x0f2:  mov    %edx,%ebx
08601aa8 +0x0f4:  mov    %eax,%esi
08601aaa +0x0f6:  mov    0x8(%ebp),%eax
08601aad +0x0f9:  mov    %eax,(%esp)
08601ab0 +0x0fc:  call   08601d1a <+0x366>
08601ab5 +0x101:  mov    %esi,%eax
08601ab7 +0x103:  mov    %ebx,%edx
08601ab9 +0x105:  mov    %eax,(%esp)
08601abc +0x108:  call   08ae3750 <_Unwind_Resume>
08601ac1 +0x10d:  mov    0x8(%ebp),%eax
08601ac4 +0x110:  mov    %eax,(%esp)
08601ac7 +0x113:  call   08601d1a <+0x366>
08601acc +0x118:  add    $0x10,%esp
08601acf +0x11b:  pop    %ebx
08601ad0 +0x11c:  pop    %esi
08601ad1 +0x11d:  pop    %ebp
08601ad2 +0x11e:  ret
08601ad3 +0x11f:  nop
08601ad4 +0x120:  push   %ebp
08601ad5 +0x121:  mov    %esp,%ebp
08601ad7 +0x123:  sub    $0x28,%esp
08601ada +0x126:  mov    0x8(%ebp),%eax
08601add +0x129:  mov    0x4(%eax),%edx
08601ae0 +0x12c:  mov    0x8(%ebp),%eax
08601ae3 +0x12f:  mov    0x8(%eax),%eax
08601ae6 +0x132:  cmp    %eax,%edx
08601ae8 +0x134:  je     08601b17 <+0x163>
08601aea +0x136:  mov    0x8(%ebp),%eax
08601aed +0x139:  mov    0x4(%eax),%edx
08601af0 +0x13c:  mov    0x8(%ebp),%eax
08601af3 +0x13f:  mov    0xc(%ebp),%ecx
08601af6 +0x142:  mov    %ecx,0x8(%esp)
08601afa +0x146:  mov    %edx,0x4(%esp)
08601afe +0x14a:  mov    %eax,(%esp)
08601b01 +0x14d:  call   08601daa <+0x3f6>
08601b06 +0x152:  mov    0x8(%ebp),%eax
08601b09 +0x155:  mov    0x4(%eax),%eax
08601b0c +0x158:  lea    0x58(%eax),%edx
08601b0f +0x15b:  mov    0x8(%ebp),%eax
08601b12 +0x15e:  mov    %edx,0x4(%eax)
08601b15 +0x161:  jmp    08601b45 <+0x191>
08601b17 +0x163:  lea    -0xc(%ebp),%eax
08601b1a +0x166:  mov    0x8(%ebp),%edx
08601b1d +0x169:  mov    %edx,0x4(%esp)
08601b21 +0x16d:  mov    %eax,(%esp)
08601b24 +0x170:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
08601b29 +0x175:  sub    $0x4,%esp
08601b2c +0x178:  mov    0xc(%ebp),%eax
08601b2f +0x17b:  mov    %eax,0x8(%esp)
08601b33 +0x17f:  mov    -0xc(%ebp),%eax
08601b36 +0x182:  mov    %eax,0x4(%esp)
08601b3a +0x186:  mov    0x8(%ebp),%eax
08601b3d +0x189:  mov    %eax,(%esp)
08601b40 +0x18c:  call   08601de8 <+0x434>
08601b45 +0x191:  leave
08601b46 +0x192:  ret
08601b47 +0x193:  nop
08601b48 +0x194:  push   %ebp
08601b49 +0x195:  mov    %esp,%ebp
08601b4b +0x197:  mov    0x8(%ebp),%eax
08601b4e +0x19a:  movl   $0x0,(%eax)
08601b54 +0x1a0:  pop    %ebp
08601b55 +0x1a1:  ret
08601b56 +0x1a2:  push   %ebp
08601b57 +0x1a3:  mov    %esp,%ebp
08601b59 +0x1a5:  push   %ebx
08601b5a +0x1a6:  sub    $0x14,%esp
08601b5d +0x1a9:  mov    0x8(%ebp),%eax
08601b60 +0x1ac:  mov    %eax,(%esp)
08601b63 +0x1af:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
08601b68 +0x1b4:  mov    (%eax),%ebx
08601b6a +0x1b6:  mov    0xc(%ebp),%eax
08601b6d +0x1b9:  mov    %eax,(%esp)
08601b70 +0x1bc:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
08601b75 +0x1c1:  mov    (%eax),%eax
08601b77 +0x1c3:  cmp    %eax,%ebx
08601b79 +0x1c5:  setne  %al
08601b7c +0x1c8:  add    $0x14,%esp
08601b7f +0x1cb:  pop    %ebx
08601b80 +0x1cc:  pop    %ebp
08601b81 +0x1cd:  ret
08601b82 +0x1ce:  push   %ebp
08601b83 +0x1cf:  mov    %esp,%ebp
08601b85 +0x1d1:  mov    0x8(%ebp),%eax
08601b88 +0x1d4:  mov    (%eax),%eax
08601b8a +0x1d6:  pop    %ebp
08601b8b +0x1d7:  ret
08601b8c +0x1d8:  push   %ebp
08601b8d +0x1d9:  mov    %esp,%ebp
08601b8f +0x1db:  push   %ebx
08601b90 +0x1dc:  sub    $0x24,%esp
08601b93 +0x1df:  mov    0x8(%ebp),%ebx
08601b96 +0x1e2:  mov    0xc(%ebp),%eax
08601b99 +0x1e5:  mov    (%eax),%eax
08601b9b +0x1e7:  mov    %eax,-0xc(%ebp)
08601b9e +0x1ea:  lea    -0xc(%ebp),%edx
08601ba1 +0x1ed:  lea    0x58(%eax),%ecx
08601ba4 +0x1f0:  mov    0xc(%ebp),%eax
08601ba7 +0x1f3:  mov    %ecx,(%eax)
08601ba9 +0x1f5:  mov    %edx,0x4(%esp)
08601bad +0x1f9:  mov    %ebx,(%esp)
08601bb0 +0x1fc:  call   084f2990 <_GLOBAL__I__Z7getUserj+0x9942>  ; global constructors keyed to getUser(unsigned int)+0x9942
08601bb5 +0x201:  mov    %ebx,%eax
08601bb7 +0x203:  add    $0x24,%esp
08601bba +0x206:  pop    %ebx
08601bbb +0x207:  pop    %ebp
08601bbc +0x208:  ret    $0x4
08601bbf +0x20b:  nop
08601bc0 +0x20c:  push   %ebp
08601bc1 +0x20d:  mov    %esp,%ebp
08601bc3 +0x20f:  push   %ebx
08601bc4 +0x210:  sub    $0x34,%esp
08601bc7 +0x213:  mov    0x8(%ebp),%ebx
08601bca +0x216:  lea    -0x24(%ebp),%eax
08601bcd +0x219:  mov    0xc(%ebp),%edx
08601bd0 +0x21c:  mov    %edx,0x4(%esp)
08601bd4 +0x220:  mov    %eax,(%esp)
08601bd7 +0x223:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
08601bdc +0x228:  sub    $0x4,%esp
08601bdf +0x22b:  movl   $0x1,-0x1c(%ebp)
08601be6 +0x232:  lea    -0x20(%ebp),%eax
08601be9 +0x235:  lea    -0x1c(%ebp),%edx
08601bec +0x238:  mov    %edx,0x8(%esp)
08601bf0 +0x23c:  lea    0x10(%ebp),%edx
08601bf3 +0x23f:  mov    %edx,0x4(%esp)
08601bf7 +0x243:  mov    %eax,(%esp)
08601bfa +0x246:  call   086020b2 <+0x6fe>
08601bff +0x24b:  sub    $0x4,%esp
08601c02 +0x24e:  lea    -0x24(%ebp),%eax
08601c05 +0x251:  mov    %eax,0x4(%esp)
08601c09 +0x255:  lea    -0x20(%ebp),%eax
08601c0c +0x258:  mov    %eax,(%esp)
08601c0f +0x25b:  call   08601b56 <+0x1a2>
08601c14 +0x260:  test   %al,%al
08601c16 +0x262:  je     08601c73 <+0x2bf>
08601c18 +0x264:  lea    -0x14(%ebp),%eax
08601c1b +0x267:  mov    0xc(%ebp),%edx
08601c1e +0x26a:  mov    %edx,0x4(%esp)
08601c22 +0x26e:  mov    %eax,(%esp)
08601c25 +0x271:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
08601c2a +0x276:  sub    $0x4,%esp
08601c2d +0x279:  movl   $0x1,-0xc(%ebp)
08601c34 +0x280:  lea    -0x10(%ebp),%eax
08601c37 +0x283:  lea    -0xc(%ebp),%edx
08601c3a +0x286:  mov    %edx,0x8(%esp)
08601c3e +0x28a:  lea    0x10(%ebp),%edx
08601c41 +0x28d:  mov    %edx,0x4(%esp)
08601c45 +0x291:  mov    %eax,(%esp)
08601c48 +0x294:  call   086020b2 <+0x6fe>
08601c4d +0x299:  sub    $0x4,%esp
08601c50 +0x29c:  lea    -0x18(%ebp),%eax
08601c53 +0x29f:  mov    0x10(%ebp),%edx
08601c56 +0x2a2:  mov    %edx,0xc(%esp)
08601c5a +0x2a6:  mov    -0x14(%ebp),%edx
08601c5d +0x2a9:  mov    %edx,0x8(%esp)
08601c61 +0x2ad:  mov    -0x10(%ebp),%edx
08601c64 +0x2b0:  mov    %edx,0x4(%esp)
08601c68 +0x2b4:  mov    %eax,(%esp)
08601c6b +0x2b7:  call   086020e8 <+0x734>
08601c70 +0x2bc:  sub    $0x4,%esp
08601c73 +0x2bf:  mov    0xc(%ebp),%eax
08601c76 +0x2c2:  mov    0x4(%eax),%eax
08601c79 +0x2c5:  lea    -0x58(%eax),%edx
08601c7c +0x2c8:  mov    0xc(%ebp),%eax
08601c7f +0x2cb:  mov    %edx,0x4(%eax)
08601c82 +0x2ce:  mov    0xc(%ebp),%eax
08601c85 +0x2d1:  mov    0x4(%eax),%edx
08601c88 +0x2d4:  mov    0xc(%ebp),%eax
08601c8b +0x2d7:  mov    %edx,0x4(%esp)
08601c8f +0x2db:  mov    %eax,(%esp)
08601c92 +0x2de:  call   0860214c <+0x798>
08601c97 +0x2e3:  mov    0x10(%ebp),%eax
08601c9a +0x2e6:  mov    %eax,(%ebx)
08601c9c +0x2e8:  mov    %ebx,%eax
08601c9e +0x2ea:  mov    -0x4(%ebp),%ebx
08601ca1 +0x2ed:  leave
08601ca2 +0x2ee:  ret    $0x4
08601ca5 +0x2f1:  nop
08601ca6 +0x2f2:  push   %ebp
08601ca7 +0x2f3:  mov    %esp,%ebp
08601ca9 +0x2f5:  sub    $0x18,%esp
08601cac +0x2f8:  mov    0x8(%ebp),%eax
08601caf +0x2fb:  mov    (%eax),%eax
08601cb1 +0x2fd:  mov    %eax,(%esp)
08601cb4 +0x300:  call   08602160 <+0x7ac>
08601cb9 +0x305:  leave
08601cba +0x306:  ret
08601cbb +0x307:  nop
08601cbc +0x308:  push   %ebp
08601cbd +0x309:  mov    %esp,%ebp
08601cbf +0x30b:  sub    $0x18,%esp
08601cc2 +0x30e:  mov    0x8(%ebp),%eax
08601cc5 +0x311:  mov    %eax,(%esp)
08601cc8 +0x314:  call   08601d88 <+0x3d4>
08601ccd +0x319:  mov    0x8(%ebp),%edx
08601cd0 +0x31c:  mov    0x4(%edx),%edx
08601cd3 +0x31f:  mov    %eax,0x8(%esp)
08601cd7 +0x323:  mov    %edx,0x4(%esp)
08601cdb +0x327:  mov    0xc(%ebp),%eax
08601cde +0x32a:  mov    %eax,(%esp)
08601ce1 +0x32d:  call   08601d90 <+0x3dc>
08601ce6 +0x332:  mov    0x8(%ebp),%eax
08601ce9 +0x335:  mov    0xc(%ebp),%edx
08601cec +0x338:  mov    %edx,0x4(%eax)
08601cef +0x33b:  leave
08601cf0 +0x33c:  ret
08601cf1 +0x33d:  nop
08601cf2 +0x33e:  push   %ebp
08601cf3 +0x33f:  mov    %esp,%ebp
08601cf5 +0x341:  sub    $0x18,%esp
08601cf8 +0x344:  mov    0x8(%ebp),%eax
08601cfb +0x347:  mov    %eax,(%esp)
08601cfe +0x34a:  call   086021fa <+0x846>
08601d03 +0x34f:  leave
08601d04 +0x350:  ret
08601d05 +0x351:  nop
08601d06 +0x352:  push   %ebp
08601d07 +0x353:  mov    %esp,%ebp
08601d09 +0x355:  sub    $0x18,%esp
08601d0c +0x358:  mov    0x8(%ebp),%eax
08601d0f +0x35b:  mov    %eax,(%esp)
08601d12 +0x35e:  call   086021ca <+0x816>
08601d17 +0x363:  leave
08601d18 +0x364:  ret
08601d19 +0x365:  nop
08601d1a +0x366:  push   %ebp
08601d1b +0x367:  mov    %esp,%ebp
08601d1d +0x369:  push   %esi
08601d1e +0x36a:  push   %ebx
08601d1f +0x36b:  sub    $0x10,%esp
08601d22 +0x36e:  mov    0x8(%ebp),%eax
08601d25 +0x371:  mov    0x8(%eax),%eax
08601d28 +0x374:  mov    %eax,%edx
08601d2a +0x376:  mov    0x8(%ebp),%eax
08601d2d +0x379:  mov    (%eax),%eax
08601d2f +0x37b:  mov    %edx,%ecx
08601d31 +0x37d:  sub    %eax,%ecx
08601d33 +0x37f:  mov    %ecx,%eax
08601d35 +0x381:  sar    $0x3,%eax
08601d38 +0x384:  imul   $0xba2e8ba3,%eax,%eax
08601d3e +0x38a:  mov    %eax,%edx
08601d40 +0x38c:  mov    0x8(%ebp),%eax
08601d43 +0x38f:  mov    (%eax),%eax
08601d45 +0x391:  mov    %edx,0x8(%esp)
08601d49 +0x395:  mov    %eax,0x4(%esp)
08601d4d +0x399:  mov    0x8(%ebp),%eax
08601d50 +0x39c:  mov    %eax,(%esp)
08601d53 +0x39f:  call   0860220e <+0x85a>
08601d58 +0x3a4:  jmp    08601d75 <+0x3c1>
08601d5a +0x3a6:  mov    %edx,%ebx
08601d5c +0x3a8:  mov    %eax,%esi
08601d5e +0x3aa:  mov    0x8(%ebp),%eax
08601d61 +0x3ad:  mov    %eax,(%esp)
08601d64 +0x3b0:  call   08601cf2 <+0x33e>
08601d69 +0x3b5:  mov    %esi,%eax
08601d6b +0x3b7:  mov    %ebx,%edx
08601d6d +0x3b9:  mov    %eax,(%esp)
08601d70 +0x3bc:  call   08ae3750 <_Unwind_Resume>
08601d75 +0x3c1:  mov    0x8(%ebp),%eax
08601d78 +0x3c4:  mov    %eax,(%esp)
08601d7b +0x3c7:  call   08601cf2 <+0x33e>
08601d80 +0x3cc:  add    $0x10,%esp
08601d83 +0x3cf:  pop    %ebx
08601d84 +0x3d0:  pop    %esi
08601d85 +0x3d1:  pop    %ebp
08601d86 +0x3d2:  ret
08601d87 +0x3d3:  nop
08601d88 +0x3d4:  push   %ebp
08601d89 +0x3d5:  mov    %esp,%ebp
08601d8b +0x3d7:  mov    0x8(%ebp),%eax
08601d8e +0x3da:  pop    %ebp
08601d8f +0x3db:  ret
08601d90 +0x3dc:  push   %ebp
08601d91 +0x3dd:  mov    %esp,%ebp
08601d93 +0x3df:  sub    $0x18,%esp
08601d96 +0x3e2:  mov    0xc(%ebp),%eax
08601d99 +0x3e5:  mov    %eax,0x4(%esp)
08601d9d +0x3e9:  mov    0x8(%ebp),%eax
08601da0 +0x3ec:  mov    %eax,(%esp)
08601da3 +0x3ef:  call   08602235 <+0x881>
08601da8 +0x3f4:  leave
08601da9 +0x3f5:  ret
08601daa +0x3f6:  push   %ebp
08601dab +0x3f7:  mov    %esp,%ebp
08601dad +0x3f9:  push   %edi
08601dae +0x3fa:  push   %esi
08601daf +0x3fb:  push   %ebx
08601db0 +0x3fc:  sub    $0x1c,%esp
08601db3 +0x3ff:  mov    0xc(%ebp),%eax
08601db6 +0x402:  mov    %eax,0x4(%esp)
08601dba +0x406:  movl   $0x58,(%esp)
08601dc1 +0x40d:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08601dc6 +0x412:  mov    %eax,%edx
08601dc8 +0x414:  test   %edx,%edx
08601dca +0x416:  je     08601de0 <+0x42c>
08601dcc +0x418:  mov    %eax,%edx
08601dce +0x41a:  mov    0x10(%ebp),%eax
08601dd1 +0x41d:  mov    %eax,%ebx
08601dd3 +0x41f:  mov    $0x16,%eax
08601dd8 +0x424:  mov    %edx,%edi
08601dda +0x426:  mov    %ebx,%esi
08601ddc +0x428:  mov    %eax,%ecx
08601dde +0x42a:  rep movsl %ds:(%esi),%es:(%edi)
08601de0 +0x42c:  add    $0x1c,%esp
08601de3 +0x42f:  pop    %ebx
08601de4 +0x430:  pop    %esi
08601de5 +0x431:  pop    %edi
08601de6 +0x432:  pop    %ebp
08601de7 +0x433:  ret
08601de8 +0x434:  push   %ebp
08601de9 +0x435:  mov    %esp,%ebp
08601deb +0x437:  push   %edi
08601dec +0x438:  push   %esi
08601ded +0x439:  push   %ebx
08601dee +0x43a:  sub    $0x3c,%esp
08601df1 +0x43d:  mov    0x8(%ebp),%eax
08601df4 +0x440:  mov    0x4(%eax),%edx
08601df7 +0x443:  mov    0x8(%ebp),%eax
08601dfa +0x446:  mov    0x8(%eax),%eax
08601dfd +0x449:  cmp    %eax,%edx
08601dff +0x44b:  je     08601e9e <+0x4ea>
08601e05 +0x451:  mov    0x8(%ebp),%eax
08601e08 +0x454:  mov    0x4(%eax),%eax
08601e0b +0x457:  sub    $0x58,%eax
08601e0e +0x45a:  mov    %eax,(%esp)
08601e11 +0x45d:  call   0860224f <+0x89b>
08601e16 +0x462:  mov    0x8(%ebp),%edx
08601e19 +0x465:  mov    0x4(%edx),%ecx
08601e1c +0x468:  mov    0x8(%ebp),%edx
08601e1f +0x46b:  mov    %eax,0x8(%esp)
08601e23 +0x46f:  mov    %ecx,0x4(%esp)
08601e27 +0x473:  mov    %edx,(%esp)
08601e2a +0x476:  call   08602258 <+0x8a4>
08601e2f +0x47b:  mov    0x8(%ebp),%eax
08601e32 +0x47e:  mov    0x4(%eax),%eax
08601e35 +0x481:  lea    0x58(%eax),%edx
08601e38 +0x484:  mov    0x8(%ebp),%eax
08601e3b +0x487:  mov    %edx,0x4(%eax)
08601e3e +0x48a:  mov    0x8(%ebp),%eax
08601e41 +0x48d:  mov    0x4(%eax),%eax
08601e44 +0x490:  lea    -0x58(%eax),%esi
08601e47 +0x493:  mov    0x8(%ebp),%eax
08601e4a +0x496:  mov    0x4(%eax),%eax
08601e4d +0x499:  lea    -0xb0(%eax),%ebx
08601e53 +0x49f:  lea    0xc(%ebp),%eax
08601e56 +0x4a2:  mov    %eax,(%esp)
08601e59 +0x4a5:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
08601e5e +0x4aa:  mov    (%eax),%eax
08601e60 +0x4ac:  mov    %esi,0x8(%esp)
08601e64 +0x4b0:  mov    %ebx,0x4(%esp)
08601e68 +0x4b4:  mov    %eax,(%esp)
08601e6b +0x4b7:  call   086022b1 <+0x8fd>
08601e70 +0x4bc:  lea    0xc(%ebp),%eax
08601e73 +0x4bf:  mov    %eax,(%esp)
08601e76 +0x4c2:  call   08601b82 <+0x1ce>
08601e7b +0x4c7:  mov    %eax,%ebx
08601e7d +0x4c9:  mov    0x10(%ebp),%eax
08601e80 +0x4cc:  mov    %eax,(%esp)
08601e83 +0x4cf:  call   086022e9 <+0x935>
08601e88 +0x4d4:  mov    %ebx,%edx
08601e8a +0x4d6:  mov    %eax,%ebx
08601e8c +0x4d8:  mov    $0x16,%eax
08601e91 +0x4dd:  mov    %edx,%edi
08601e93 +0x4df:  mov    %ebx,%esi
08601e95 +0x4e1:  mov    %eax,%ecx
08601e97 +0x4e3:  rep movsl %ds:(%esi),%es:(%edi)
08601e99 +0x4e5:  jmp    086020a6 <+0x6f2>
08601e9e +0x4ea:  movl   $"vector::_M_insert_aux",0x8(%esp)
08601ea6 +0x4f2:  movl   $0x1,0x4(%esp)
08601eae +0x4fa:  mov    0x8(%ebp),%eax
08601eb1 +0x4fd:  mov    %eax,(%esp)
08601eb4 +0x500:  call   086022f2 <+0x93e>
08601eb9 +0x505:  mov    %eax,-0x28(%ebp)
08601ebc +0x508:  lea    -0x2c(%ebp),%eax
08601ebf +0x50b:  mov    0x8(%ebp),%edx
08601ec2 +0x50e:  mov    %edx,0x4(%esp)
08601ec6 +0x512:  mov    %eax,(%esp)
08601ec9 +0x515:  call   084f13fc <_GLOBAL__I__Z7getUserj+0x83ae>  ; global constructors keyed to getUser(unsigned int)+0x83ae
08601ece +0x51a:  sub    $0x4,%esp
08601ed1 +0x51d:  lea    -0x2c(%ebp),%eax
08601ed4 +0x520:  mov    %eax,0x4(%esp)
08601ed8 +0x524:  lea    0xc(%ebp),%eax
08601edb +0x527:  mov    %eax,(%esp)
08601ede +0x52a:  call   08602397 <+0x9e3>
08601ee3 +0x52f:  mov    %eax,-0x24(%ebp)
08601ee6 +0x532:  mov    0x8(%ebp),%eax
08601ee9 +0x535:  mov    -0x28(%ebp),%edx
08601eec +0x538:  mov    %edx,0x4(%esp)
08601ef0 +0x53c:  mov    %eax,(%esp)
08601ef3 +0x53f:  call   086023d0 <+0xa1c>
08601ef8 +0x544:  mov    %eax,-0x20(%ebp)
08601efb +0x547:  mov    -0x20(%ebp),%eax
08601efe +0x54a:  mov    %eax,-0x1c(%ebp)
08601f01 +0x54d:  mov    0x10(%ebp),%eax
08601f04 +0x550:  mov    %eax,(%esp)
08601f07 +0x553:  call   086022e9 <+0x935>
08601f0c +0x558:  mov    -0x24(%ebp),%edx
08601f0f +0x55b:  imul   $0x58,%edx,%edx
08601f12 +0x55e:  mov    %edx,%ecx
08601f14 +0x560:  add    -0x20(%ebp),%ecx
08601f17 +0x563:  mov    0x8(%ebp),%edx
08601f1a +0x566:  mov    %eax,0x8(%esp)
08601f1e +0x56a:  mov    %ecx,0x4(%esp)
08601f22 +0x56e:  mov    %edx,(%esp)
08601f25 +0x571:  call   08601daa <+0x3f6>
08601f2a +0x576:  movl   $0x0,-0x1c(%ebp)
08601f31 +0x57d:  mov    0x8(%ebp),%eax
08601f34 +0x580:  mov    %eax,(%esp)
08601f37 +0x583:  call   08601d88 <+0x3d4>
08601f3c +0x588:  mov    %eax,%ebx
08601f3e +0x58a:  lea    0xc(%ebp),%eax
08601f41 +0x58d:  mov    %eax,(%esp)
08601f44 +0x590:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
08601f49 +0x595:  mov    (%eax),%edx
08601f4b +0x597:  mov    0x8(%ebp),%eax
08601f4e +0x59a:  mov    (%eax),%eax
08601f50 +0x59c:  mov    %ebx,0xc(%esp)
08601f54 +0x5a0:  mov    -0x20(%ebp),%ecx
08601f57 +0x5a3:  mov    %ecx,0x8(%esp)
08601f5b +0x5a7:  mov    %edx,0x4(%esp)
08601f5f +0x5ab:  mov    %eax,(%esp)
08601f62 +0x5ae:  call   086023ff <+0xa4b>
08601f67 +0x5b3:  mov    %eax,-0x1c(%ebp)
08601f6a +0x5b6:  addl   $0x58,-0x1c(%ebp)
08601f6e +0x5ba:  mov    0x8(%ebp),%eax
08601f71 +0x5bd:  mov    %eax,(%esp)
08601f74 +0x5c0:  call   08601d88 <+0x3d4>
08601f79 +0x5c5:  mov    %eax,%ebx
08601f7b +0x5c7:  mov    0x8(%ebp),%eax
08601f7e +0x5ca:  mov    0x4(%eax),%esi
08601f81 +0x5cd:  lea    0xc(%ebp),%eax
08601f84 +0x5d0:  mov    %eax,(%esp)
08601f87 +0x5d3:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
08601f8c +0x5d8:  mov    (%eax),%eax
08601f8e +0x5da:  mov    %ebx,0xc(%esp)
08601f92 +0x5de:  mov    -0x1c(%ebp),%edx
08601f95 +0x5e1:  mov    %edx,0x8(%esp)
08601f99 +0x5e5:  mov    %esi,0x4(%esp)
08601f9d +0x5e9:  mov    %eax,(%esp)
08601fa0 +0x5ec:  call   086023ff <+0xa4b>
08601fa5 +0x5f1:  mov    %eax,-0x1c(%ebp)
08601fa8 +0x5f4:  mov    0x8(%ebp),%eax
08601fab +0x5f7:  mov    %eax,(%esp)
08601fae +0x5fa:  call   08601d88 <+0x3d4>
08601fb3 +0x5ff:  mov    0x8(%ebp),%edx
08601fb6 +0x602:  mov    0x4(%edx),%ecx
08601fb9 +0x605:  mov    0x8(%ebp),%edx
08601fbc +0x608:  mov    (%edx),%edx
08601fbe +0x60a:  mov    %eax,0x8(%esp)
08601fc2 +0x60e:  mov    %ecx,0x4(%esp)
08601fc6 +0x612:  mov    %edx,(%esp)
08601fc9 +0x615:  call   08601d90 <+0x3dc>
08601fce +0x61a:  mov    0x8(%ebp),%eax
08601fd1 +0x61d:  mov    0x8(%eax),%eax
08601fd4 +0x620:  mov    %eax,%edx
08601fd6 +0x622:  mov    0x8(%ebp),%eax
08601fd9 +0x625:  mov    (%eax),%eax
08601fdb +0x627:  mov    %edx,%ecx
08601fdd +0x629:  sub    %eax,%ecx
08601fdf +0x62b:  mov    %ecx,%eax
08601fe1 +0x62d:  sar    $0x3,%eax
08601fe4 +0x630:  imul   $0xba2e8ba3,%eax,%eax
08601fea +0x636:  mov    %eax,%ecx
08601fec +0x638:  mov    0x8(%ebp),%eax
08601fef +0x63b:  mov    (%eax),%edx
08601ff1 +0x63d:  mov    0x8(%ebp),%eax
08601ff4 +0x640:  mov    %ecx,0x8(%esp)
08601ff8 +0x644:  mov    %edx,0x4(%esp)
08601ffc +0x648:  mov    %eax,(%esp)
08601fff +0x64b:  call   0860220e <+0x85a>
08602004 +0x650:  mov    0x8(%ebp),%eax
08602007 +0x653:  mov    -0x20(%ebp),%edx
0860200a +0x656:  mov    %edx,(%eax)
0860200c +0x658:  mov    0x8(%ebp),%eax
0860200f +0x65b:  mov    -0x1c(%ebp),%edx
08602012 +0x65e:  mov    %edx,0x4(%eax)
08602015 +0x661:  mov    -0x28(%ebp),%eax
08602018 +0x664:  imul   $0x58,%eax,%eax
0860201b +0x667:  mov    %eax,%edx
0860201d +0x669:  add    -0x20(%ebp),%edx
08602020 +0x66c:  mov    0x8(%ebp),%eax
08602023 +0x66f:  mov    %edx,0x8(%eax)
08602026 +0x672:  jmp    086020a6 <+0x6f2>
08602028 +0x674:  mov    %eax,(%esp)
0860202b +0x677:  call   08725ce0 <__cxa_begin_catch>
08602030 +0x67c:  cmpl   $0x0,-0x1c(%ebp)
08602034 +0x680:  jne    08602052 <+0x69e>
08602036 +0x682:  mov    -0x24(%ebp),%eax
08602039 +0x685:  imul   $0x58,%eax,%eax
0860203c +0x688:  mov    %eax,%edx
0860203e +0x68a:  add    -0x20(%ebp),%edx
08602041 +0x68d:  mov    0x8(%ebp),%eax
08602044 +0x690:  mov    %edx,0x4(%esp)
08602048 +0x694:  mov    %eax,(%esp)
0860204b +0x697:  call   0860214c <+0x798>
08602050 +0x69c:  jmp    08602073 <+0x6bf>
08602052 +0x69e:  mov    0x8(%ebp),%eax
08602055 +0x6a1:  mov    %eax,(%esp)
08602058 +0x6a4:  call   08601d88 <+0x3d4>
0860205d +0x6a9:  mov    %eax,0x8(%esp)
08602061 +0x6ad:  mov    -0x1c(%ebp),%eax
08602064 +0x6b0:  mov    %eax,0x4(%esp)
08602068 +0x6b4:  mov    -0x20(%ebp),%eax
0860206b +0x6b7:  mov    %eax,(%esp)
0860206e +0x6ba:  call   08601d90 <+0x3dc>
08602073 +0x6bf:  mov    0x8(%ebp),%eax
08602076 +0x6c2:  mov    -0x28(%ebp),%edx
08602079 +0x6c5:  mov    %edx,0x8(%esp)
0860207d +0x6c9:  mov    -0x20(%ebp),%edx
08602080 +0x6cc:  mov    %edx,0x4(%esp)
08602084 +0x6d0:  mov    %eax,(%esp)
08602087 +0x6d3:  call   0860220e <+0x85a>
0860208c +0x6d8:  call   08724be0 <__cxa_rethrow>
08602091 +0x6dd:  mov    %edx,%ebx
08602093 +0x6df:  mov    %eax,%esi
08602095 +0x6e1:  call   08725c30 <__cxa_end_catch>
0860209a +0x6e6:  mov    %esi,%eax
0860209c +0x6e8:  mov    %ebx,%edx
0860209e +0x6ea:  mov    %eax,(%esp)
086020a1 +0x6ed:  call   08ae3750 <_Unwind_Resume>
086020a6 +0x6f2:  lea    -0xc(%ebp),%esp
086020a9 +0x6f5:  add    $0x0,%esp
086020ac +0x6f8:  pop    %ebx
086020ad +0x6f9:  pop    %esi
086020ae +0x6fa:  pop    %edi
086020af +0x6fb:  pop    %ebp
086020b0 +0x6fc:  ret
086020b1 +0x6fd:  nop
086020b2 +0x6fe:  push   %ebp
086020b3 +0x6ff:  mov    %esp,%ebp
086020b5 +0x701:  push   %ebx
086020b6 +0x702:  sub    $0x24,%esp
086020b9 +0x705:  mov    0x8(%ebp),%ebx
086020bc +0x708:  mov    0xc(%ebp),%eax
086020bf +0x70b:  mov    (%eax),%edx
086020c1 +0x70d:  mov    0x10(%ebp),%eax
086020c4 +0x710:  mov    (%eax),%eax
086020c6 +0x712:  imul   $0x58,%eax,%eax
086020c9 +0x715:  lea    (%edx,%eax,1),%eax
086020cc +0x718:  mov    %eax,-0xc(%ebp)
086020cf +0x71b:  lea    -0xc(%ebp),%eax
086020d2 +0x71e:  mov    %eax,0x4(%esp)
086020d6 +0x722:  mov    %ebx,(%esp)
086020d9 +0x725:  call   084f2990 <_GLOBAL__I__Z7getUserj+0x9942>  ; global constructors keyed to getUser(unsigned int)+0x9942
086020de +0x72a:  mov    %ebx,%eax
086020e0 +0x72c:  add    $0x24,%esp
086020e3 +0x72f:  pop    %ebx
086020e4 +0x730:  pop    %ebp
086020e5 +0x731:  ret    $0x4
086020e8 +0x734:  push   %ebp
086020e9 +0x735:  mov    %esp,%ebp
086020eb +0x737:  push   %ebx
086020ec +0x738:  sub    $0x24,%esp
086020ef +0x73b:  mov    0x8(%ebp),%ebx
086020f2 +0x73e:  lea    -0x10(%ebp),%eax
086020f5 +0x741:  mov    0x10(%ebp),%edx
086020f8 +0x744:  mov    %edx,0x4(%esp)
086020fc +0x748:  mov    %eax,(%esp)
086020ff +0x74b:  call   08602451 <+0xa9d>
08602104 +0x750:  sub    $0x4,%esp
08602107 +0x753:  lea    -0xc(%ebp),%eax
0860210a +0x756:  mov    0xc(%ebp),%edx
0860210d +0x759:  mov    %edx,0x4(%esp)
08602111 +0x75d:  mov    %eax,(%esp)
08602114 +0x760:  call   08602451 <+0xa9d>
08602119 +0x765:  sub    $0x4,%esp
0860211c +0x768:  mov    0x14(%ebp),%eax
0860211f +0x76b:  mov    %eax,0xc(%esp)
08602123 +0x76f:  mov    -0x10(%ebp),%eax
08602126 +0x772:  mov    %eax,0x8(%esp)
0860212a +0x776:  mov    -0xc(%ebp),%eax
0860212d +0x779:  mov    %eax,0x4(%esp)
08602131 +0x77d:  mov    %ebx,(%esp)
08602134 +0x780:  call   08602460 <+0xaac>
08602139 +0x785:  sub    $0x4,%esp
0860213c +0x788:  mov    %ebx,%eax
0860213e +0x78a:  mov    -0x4(%ebp),%ebx
08602141 +0x78d:  leave
08602142 +0x78e:  ret    $0x4
08602145 +0x791:  nop
08602146 +0x792:  push   %ebp
08602147 +0x793:  mov    %esp,%ebp
08602149 +0x795:  pop    %ebp
0860214a +0x796:  ret
0860214b +0x797:  nop
0860214c +0x798:  push   %ebp
0860214d +0x799:  mov    %esp,%ebp
0860214f +0x79b:  sub    $0x18,%esp
08602152 +0x79e:  mov    0xc(%ebp),%eax
08602155 +0x7a1:  mov    %eax,(%esp)
08602158 +0x7a4:  call   08602146 <+0x792>
0860215d +0x7a9:  leave
0860215e +0x7aa:  ret
0860215f +0x7ab:  nop
08602160 +0x7ac:  push   %ebp
08602161 +0x7ad:  mov    %esp,%ebp
08602163 +0x7af:  sub    $0x28,%esp
08602166 +0x7b2:  jmp    08602184 <+0x7d0>
08602168 +0x7b4:  mov    0x8(%ebp),%eax
0860216b +0x7b7:  mov    %eax,(%esp)
0860216e +0x7ba:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08602173 +0x7bf:  add    %eax,%eax
08602175 +0x7c1:  mov    %eax,0x4(%esp)
08602179 +0x7c5:  mov    0x8(%ebp),%eax
0860217c +0x7c8:  mov    %eax,(%esp)
0860217f +0x7cb:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08602184 +0x7d0:  movl   $0x4,0x4(%esp)
0860218c +0x7d8:  mov    0x8(%ebp),%eax
0860218f +0x7db:  mov    %eax,(%esp)
08602192 +0x7de:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08602197 +0x7e3:  xor    $0x1,%eax
0860219a +0x7e6:  test   %al,%al
0860219c +0x7e8:  jne    08602168 <+0x7b4>
0860219e +0x7ea:  mov    0x8(%ebp),%eax
086021a1 +0x7ed:  mov    0x8(%eax),%eax
086021a4 +0x7f0:  mov    %eax,%edx
086021a6 +0x7f2:  mov    0x8(%ebp),%eax
086021a9 +0x7f5:  mov    0xc(%eax),%eax
086021ac +0x7f8:  lea    (%edx,%eax,1),%eax
086021af +0x7fb:  mov    %eax,-0xc(%ebp)
086021b2 +0x7fe:  movl   $0x4,0x4(%esp)
086021ba +0x806:  mov    0x8(%ebp),%eax
086021bd +0x809:  mov    %eax,(%esp)
086021c0 +0x80c:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
086021c5 +0x811:  mov    -0xc(%ebp),%eax
086021c8 +0x814:  leave
086021c9 +0x815:  ret
086021ca +0x816:  push   %ebp
086021cb +0x817:  mov    %esp,%ebp
086021cd +0x819:  sub    $0x18,%esp
086021d0 +0x81c:  mov    0x8(%ebp),%eax
086021d3 +0x81f:  mov    %eax,(%esp)
086021d6 +0x822:  call   086024c0 <+0xb0c>
086021db +0x827:  mov    0x8(%ebp),%eax
086021de +0x82a:  movl   $0x0,(%eax)
086021e4 +0x830:  mov    0x8(%ebp),%eax
086021e7 +0x833:  movl   $0x0,0x4(%eax)
086021ee +0x83a:  mov    0x8(%ebp),%eax
086021f1 +0x83d:  movl   $0x0,0x8(%eax)
086021f8 +0x844:  leave
086021f9 +0x845:  ret
086021fa +0x846:  push   %ebp
086021fb +0x847:  mov    %esp,%ebp
086021fd +0x849:  sub    $0x18,%esp
08602200 +0x84c:  mov    0x8(%ebp),%eax
08602203 +0x84f:  mov    %eax,(%esp)
08602206 +0x852:  call   086024d4 <+0xb20>
0860220b +0x857:  leave
0860220c +0x858:  ret
0860220d +0x859:  nop
0860220e +0x85a:  push   %ebp
0860220f +0x85b:  mov    %esp,%ebp
08602211 +0x85d:  sub    $0x18,%esp
08602214 +0x860:  cmpl   $0x0,0xc(%ebp)
08602218 +0x864:  je     08602233 <+0x87f>
0860221a +0x866:  mov    0x8(%ebp),%eax
0860221d +0x869:  mov    0x10(%ebp),%edx
08602220 +0x86c:  mov    %edx,0x8(%esp)
08602224 +0x870:  mov    0xc(%ebp),%edx
08602227 +0x873:  mov    %edx,0x4(%esp)
0860222b +0x877:  mov    %eax,(%esp)
0860222e +0x87a:  call   086024da <+0xb26>
08602233 +0x87f:  leave
08602234 +0x880:  ret
08602235 +0x881:  push   %ebp
08602236 +0x882:  mov    %esp,%ebp
08602238 +0x884:  sub    $0x18,%esp
0860223b +0x887:  mov    0xc(%ebp),%eax
0860223e +0x88a:  mov    %eax,0x4(%esp)
08602242 +0x88e:  mov    0x8(%ebp),%eax
08602245 +0x891:  mov    %eax,(%esp)
08602248 +0x894:  call   086024ed <+0xb39>
0860224d +0x899:  leave
0860224e +0x89a:  ret
0860224f +0x89b:  push   %ebp
08602250 +0x89c:  mov    %esp,%ebp
08602252 +0x89e:  mov    0x8(%ebp),%eax
08602255 +0x8a1:  pop    %ebp
08602256 +0x8a2:  ret
08602257 +0x8a3:  nop
08602258 +0x8a4:  push   %ebp
08602259 +0x8a5:  mov    %esp,%ebp
0860225b +0x8a7:  push   %edi
0860225c +0x8a8:  push   %esi
0860225d +0x8a9:  push   %ebx
0860225e +0x8aa:  sub    $0x7c,%esp
08602261 +0x8ad:  mov    0x10(%ebp),%eax
08602264 +0x8b0:  mov    %eax,(%esp)
08602267 +0x8b3:  call   086024f2 <+0xb3e>
0860226c +0x8b8:  lea    -0x70(%ebp),%edx
0860226f +0x8bb:  mov    %eax,%ebx
08602271 +0x8bd:  mov    $0x16,%eax
08602276 +0x8c2:  mov    %edx,%edi
08602278 +0x8c4:  mov    %ebx,%esi
0860227a +0x8c6:  mov    %eax,%ecx
0860227c +0x8c8:  rep movsl %ds:(%esi),%es:(%edi)
0860227e +0x8ca:  mov    0xc(%ebp),%eax
08602281 +0x8cd:  mov    %eax,0x4(%esp)
08602285 +0x8d1:  movl   $0x58,(%esp)
0860228c +0x8d8:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08602291 +0x8dd:  mov    %eax,%edx
08602293 +0x8df:  test   %edx,%edx
08602295 +0x8e1:  je     086022a9 <+0x8f5>
08602297 +0x8e3:  mov    %eax,%edx
08602299 +0x8e5:  lea    -0x70(%ebp),%ebx
0860229c +0x8e8:  mov    $0x16,%eax
086022a1 +0x8ed:  mov    %edx,%edi
086022a3 +0x8ef:  mov    %ebx,%esi
086022a5 +0x8f1:  mov    %eax,%ecx
086022a7 +0x8f3:  rep movsl %ds:(%esi),%es:(%edi)
086022a9 +0x8f5:  add    $0x7c,%esp
086022ac +0x8f8:  pop    %ebx
086022ad +0x8f9:  pop    %esi
086022ae +0x8fa:  pop    %edi
086022af +0x8fb:  pop    %ebp
086022b0 +0x8fc:  ret
086022b1 +0x8fd:  push   %ebp
086022b2 +0x8fe:  mov    %esp,%ebp
086022b4 +0x900:  push   %ebx
086022b5 +0x901:  sub    $0x14,%esp
086022b8 +0x904:  mov    0xc(%ebp),%eax
086022bb +0x907:  mov    %eax,(%esp)
086022be +0x90a:  call   086024fa <+0xb46>
086022c3 +0x90f:  mov    %eax,%ebx
086022c5 +0x911:  mov    0x8(%ebp),%eax
086022c8 +0x914:  mov    %eax,(%esp)
086022cb +0x917:  call   086024fa <+0xb46>
086022d0 +0x91c:  mov    0x10(%ebp),%edx
086022d3 +0x91f:  mov    %edx,0x8(%esp)
086022d7 +0x923:  mov    %ebx,0x4(%esp)
086022db +0x927:  mov    %eax,(%esp)
086022de +0x92a:  call   08602502 <+0xb4e>
086022e3 +0x92f:  add    $0x14,%esp
086022e6 +0x932:  pop    %ebx
086022e7 +0x933:  pop    %ebp
086022e8 +0x934:  ret
086022e9 +0x935:  push   %ebp
086022ea +0x936:  mov    %esp,%ebp
086022ec +0x938:  mov    0x8(%ebp),%eax
086022ef +0x93b:  pop    %ebp
086022f0 +0x93c:  ret
086022f1 +0x93d:  nop
086022f2 +0x93e:  push   %ebp
086022f3 +0x93f:  mov    %esp,%ebp
086022f5 +0x941:  push   %ebx
086022f6 +0x942:  sub    $0x24,%esp
086022f9 +0x945:  mov    0x8(%ebp),%eax
086022fc +0x948:  mov    %eax,(%esp)
086022ff +0x94b:  call   08602546 <+0xb92>
08602304 +0x950:  mov    %eax,%ebx
08602306 +0x952:  mov    0x8(%ebp),%eax
08602309 +0x955:  mov    %eax,(%esp)
0860230c +0x958:  call   084f13da <_GLOBAL__I__Z7getUserj+0x838c>  ; global constructors keyed to getUser(unsigned int)+0x838c
08602311 +0x95d:  mov    %ebx,%edx
08602313 +0x95f:  sub    %eax,%edx
08602315 +0x961:  mov    0xc(%ebp),%eax
08602318 +0x964:  cmp    %eax,%edx
0860231a +0x966:  setb   %al
0860231d +0x969:  test   %al,%al
0860231f +0x96b:  je     0860232c <+0x978>
08602321 +0x96d:  mov    0x10(%ebp),%eax
08602324 +0x970:  mov    %eax,(%esp)
08602327 +0x973:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0860232c +0x978:  mov    0x8(%ebp),%eax
0860232f +0x97b:  mov    %eax,(%esp)
08602332 +0x97e:  call   084f13da <_GLOBAL__I__Z7getUserj+0x838c>  ; global constructors keyed to getUser(unsigned int)+0x838c
08602337 +0x983:  mov    %eax,%ebx
08602339 +0x985:  mov    0x8(%ebp),%eax
0860233c +0x988:  mov    %eax,(%esp)
0860233f +0x98b:  call   084f13da <_GLOBAL__I__Z7getUserj+0x838c>  ; global constructors keyed to getUser(unsigned int)+0x838c
08602344 +0x990:  mov    %eax,-0x10(%ebp)
08602347 +0x993:  lea    0xc(%ebp),%eax
0860234a +0x996:  mov    %eax,0x4(%esp)
0860234e +0x99a:  lea    -0x10(%ebp),%eax
08602351 +0x99d:  mov    %eax,(%esp)
08602354 +0x9a0:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08602359 +0x9a5:  mov    (%eax),%eax
0860235b +0x9a7:  lea    (%ebx,%eax,1),%eax
0860235e +0x9aa:  mov    %eax,-0xc(%ebp)
08602361 +0x9ad:  mov    0x8(%ebp),%eax
08602364 +0x9b0:  mov    %eax,(%esp)
08602367 +0x9b3:  call   084f13da <_GLOBAL__I__Z7getUserj+0x838c>  ; global constructors keyed to getUser(unsigned int)+0x838c
0860236c +0x9b8:  cmp    -0xc(%ebp),%eax
0860236f +0x9bb:  ja     08602381 <+0x9cd>
08602371 +0x9bd:  mov    0x8(%ebp),%eax
08602374 +0x9c0:  mov    %eax,(%esp)
08602377 +0x9c3:  call   08602546 <+0xb92>
0860237c +0x9c8:  cmp    -0xc(%ebp),%eax
0860237f +0x9cb:  jae    0860238e <+0x9da>
08602381 +0x9cd:  mov    0x8(%ebp),%eax
08602384 +0x9d0:  mov    %eax,(%esp)
08602387 +0x9d3:  call   08602546 <+0xb92>
0860238c +0x9d8:  jmp    08602391 <+0x9dd>
0860238e +0x9da:  mov    -0xc(%ebp),%eax
08602391 +0x9dd:  add    $0x24,%esp
08602394 +0x9e0:  pop    %ebx
08602395 +0x9e1:  pop    %ebp
08602396 +0x9e2:  ret
08602397 +0x9e3:  push   %ebp
08602398 +0x9e4:  mov    %esp,%ebp
0860239a +0x9e6:  push   %ebx
0860239b +0x9e7:  sub    $0x14,%esp
0860239e +0x9ea:  mov    0x8(%ebp),%eax
086023a1 +0x9ed:  mov    %eax,(%esp)
086023a4 +0x9f0:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
086023a9 +0x9f5:  mov    (%eax),%eax
086023ab +0x9f7:  mov    %eax,%ebx
086023ad +0x9f9:  mov    0xc(%ebp),%eax
086023b0 +0x9fc:  mov    %eax,(%esp)
086023b3 +0x9ff:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
086023b8 +0xa04:  mov    (%eax),%eax
086023ba +0xa06:  mov    %ebx,%edx
086023bc +0xa08:  sub    %eax,%edx
086023be +0xa0a:  mov    %edx,%eax
086023c0 +0xa0c:  sar    $0x3,%eax
086023c3 +0xa0f:  imul   $0xba2e8ba3,%eax,%eax
086023c9 +0xa15:  add    $0x14,%esp
086023cc +0xa18:  pop    %ebx
086023cd +0xa19:  pop    %ebp
086023ce +0xa1a:  ret
086023cf +0xa1b:  nop
086023d0 +0xa1c:  push   %ebp
086023d1 +0xa1d:  mov    %esp,%ebp
086023d3 +0xa1f:  sub    $0x18,%esp
086023d6 +0xa22:  cmpl   $0x0,0xc(%ebp)
086023da +0xa26:  je     086023f8 <+0xa44>
086023dc +0xa28:  mov    0x8(%ebp),%eax
086023df +0xa2b:  movl   $0x0,0x8(%esp)
086023e7 +0xa33:  mov    0xc(%ebp),%edx
086023ea +0xa36:  mov    %edx,0x4(%esp)
086023ee +0xa3a:  mov    %eax,(%esp)
086023f1 +0xa3d:  call   08602562 <+0xbae>
086023f6 +0xa42:  jmp    086023fd <+0xa49>
086023f8 +0xa44:  mov    $0x0,%eax
086023fd +0xa49:  leave
086023fe +0xa4a:  ret
086023ff +0xa4b:  push   %ebp
08602400 +0xa4c:  mov    %esp,%ebp
08602402 +0xa4e:  sub    $0x28,%esp
08602405 +0xa51:  lea    -0x10(%ebp),%eax
08602408 +0xa54:  lea    0xc(%ebp),%edx
0860240b +0xa57:  mov    %edx,0x4(%esp)
0860240f +0xa5b:  mov    %eax,(%esp)
08602412 +0xa5e:  call   0860259a <+0xbe6>
08602417 +0xa63:  sub    $0x4,%esp
0860241a +0xa66:  lea    -0xc(%ebp),%eax
0860241d +0xa69:  lea    0x8(%ebp),%edx
08602420 +0xa6c:  mov    %edx,0x4(%esp)
08602424 +0xa70:  mov    %eax,(%esp)
08602427 +0xa73:  call   0860259a <+0xbe6>
0860242c +0xa78:  sub    $0x4,%esp
0860242f +0xa7b:  mov    0x14(%ebp),%eax
08602432 +0xa7e:  mov    %eax,0xc(%esp)
08602436 +0xa82:  mov    0x10(%ebp),%eax
08602439 +0xa85:  mov    %eax,0x8(%esp)
0860243d +0xa89:  mov    -0x10(%ebp),%eax
08602440 +0xa8c:  mov    %eax,0x4(%esp)
08602444 +0xa90:  mov    -0xc(%ebp),%eax
08602447 +0xa93:  mov    %eax,(%esp)
0860244a +0xa96:  call   086025bf <+0xc0b>
0860244f +0xa9b:  leave
08602450 +0xa9c:  ret
08602451 +0xa9d:  push   %ebp
08602452 +0xa9e:  mov    %esp,%ebp
08602454 +0xaa0:  mov    0x8(%ebp),%eax
08602457 +0xaa3:  mov    0xc(%ebp),%edx
0860245a +0xaa6:  mov    %edx,(%eax)
0860245c +0xaa8:  pop    %ebp
0860245d +0xaa9:  ret    $0x4
08602460 +0xaac:  push   %ebp
08602461 +0xaad:  mov    %esp,%ebp
08602463 +0xaaf:  push   %edi
08602464 +0xab0:  push   %esi
08602465 +0xab1:  push   %ebx
08602466 +0xab2:  sub    $0x2c,%esp
08602469 +0xab5:  mov    0x8(%ebp),%edi
0860246c +0xab8:  mov    0x14(%ebp),%eax
0860246f +0xabb:  mov    %eax,(%esp)
08602472 +0xabe:  call   086025e0 <+0xc2c>
08602477 +0xac3:  mov    %eax,%esi
08602479 +0xac5:  mov    0x10(%ebp),%eax
0860247c +0xac8:  mov    %eax,(%esp)
0860247f +0xacb:  call   086025e0 <+0xc2c>
08602484 +0xad0:  mov    %eax,%ebx
08602486 +0xad2:  mov    0xc(%ebp),%eax
08602489 +0xad5:  mov    %eax,(%esp)
0860248c +0xad8:  call   086025e0 <+0xc2c>
08602491 +0xadd:  mov    %esi,0x8(%esp)
08602495 +0xae1:  mov    %ebx,0x4(%esp)
08602499 +0xae5:  mov    %eax,(%esp)
0860249c +0xae8:  call   086025f5 <+0xc41>
086024a1 +0xaed:  mov    %eax,-0x1c(%ebp)
086024a4 +0xaf0:  lea    -0x1c(%ebp),%eax
086024a7 +0xaf3:  mov    %eax,0x4(%esp)
086024ab +0xaf7:  mov    %edi,(%esp)
086024ae +0xafa:  call   084f2990 <_GLOBAL__I__Z7getUserj+0x9942>  ; global constructors keyed to getUser(unsigned int)+0x9942
086024b3 +0xaff:  mov    %edi,%eax
086024b5 +0xb01:  add    $0x2c,%esp
086024b8 +0xb04:  pop    %ebx
086024b9 +0xb05:  pop    %esi
086024ba +0xb06:  pop    %edi
086024bb +0xb07:  pop    %ebp
086024bc +0xb08:  ret    $0x4
086024bf +0xb0b:  nop
086024c0 +0xb0c:  push   %ebp
086024c1 +0xb0d:  mov    %esp,%ebp
086024c3 +0xb0f:  sub    $0x18,%esp
086024c6 +0xb12:  mov    0x8(%ebp),%eax
086024c9 +0xb15:  mov    %eax,(%esp)
086024cc +0xb18:  call   0860261a <+0xc66>
086024d1 +0xb1d:  leave
086024d2 +0xb1e:  ret
086024d3 +0xb1f:  nop
086024d4 +0xb20:  push   %ebp
086024d5 +0xb21:  mov    %esp,%ebp
086024d7 +0xb23:  pop    %ebp
086024d8 +0xb24:  ret
086024d9 +0xb25:  nop
086024da +0xb26:  push   %ebp
086024db +0xb27:  mov    %esp,%ebp
086024dd +0xb29:  sub    $0x18,%esp
086024e0 +0xb2c:  mov    0xc(%ebp),%eax
086024e3 +0xb2f:  mov    %eax,(%esp)
086024e6 +0xb32:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086024eb +0xb37:  leave
086024ec +0xb38:  ret
086024ed +0xb39:  push   %ebp
086024ee +0xb3a:  mov    %esp,%ebp
086024f0 +0xb3c:  pop    %ebp
086024f1 +0xb3d:  ret
086024f2 +0xb3e:  push   %ebp
086024f3 +0xb3f:  mov    %esp,%ebp
086024f5 +0xb41:  mov    0x8(%ebp),%eax
086024f8 +0xb44:  pop    %ebp
086024f9 +0xb45:  ret
086024fa +0xb46:  push   %ebp
086024fb +0xb47:  mov    %esp,%ebp
086024fd +0xb49:  mov    0x8(%ebp),%eax
08602500 +0xb4c:  pop    %ebp
08602501 +0xb4d:  ret
08602502 +0xb4e:  push   %ebp
08602503 +0xb4f:  mov    %esp,%ebp
08602505 +0xb51:  push   %esi
08602506 +0xb52:  push   %ebx
08602507 +0xb53:  sub    $0x10,%esp
0860250a +0xb56:  mov    0x10(%ebp),%eax
0860250d +0xb59:  mov    %eax,(%esp)
08602510 +0xb5c:  call   0860261f <+0xc6b>
08602515 +0xb61:  mov    %eax,%esi
08602517 +0xb63:  mov    0xc(%ebp),%eax
0860251a +0xb66:  mov    %eax,(%esp)
0860251d +0xb69:  call   0860261f <+0xc6b>
08602522 +0xb6e:  mov    %eax,%ebx
08602524 +0xb70:  mov    0x8(%ebp),%eax
08602527 +0xb73:  mov    %eax,(%esp)
0860252a +0xb76:  call   0860261f <+0xc6b>
0860252f +0xb7b:  mov    %esi,0x8(%esp)
08602533 +0xb7f:  mov    %ebx,0x4(%esp)
08602537 +0xb83:  mov    %eax,(%esp)
0860253a +0xb86:  call   08602627 <+0xc73>
0860253f +0xb8b:  add    $0x10,%esp
08602542 +0xb8e:  pop    %ebx
08602543 +0xb8f:  pop    %esi
08602544 +0xb90:  pop    %ebp
08602545 +0xb91:  ret
08602546 +0xb92:  push   %ebp
08602547 +0xb93:  mov    %esp,%ebp
08602549 +0xb95:  sub    $0x18,%esp
0860254c +0xb98:  mov    0x8(%ebp),%eax
0860254f +0xb9b:  mov    %eax,(%esp)
08602552 +0xb9e:  call   0860264c <+0xc98>
08602557 +0xba3:  mov    %eax,(%esp)
0860255a +0xba6:  call   08602654 <+0xca0>
0860255f +0xbab:  leave
08602560 +0xbac:  ret
08602561 +0xbad:  nop
08602562 +0xbae:  push   %ebp
08602563 +0xbaf:  mov    %esp,%ebp
08602565 +0xbb1:  sub    $0x18,%esp
08602568 +0xbb4:  mov    0x8(%ebp),%eax
0860256b +0xbb7:  mov    %eax,(%esp)
0860256e +0xbba:  call   08602654 <+0xca0>
08602573 +0xbbf:  cmp    0xc(%ebp),%eax
08602576 +0xbc2:  setb   %al
08602579 +0xbc5:  movzbl %al,%eax
0860257c +0xbc8:  test   %eax,%eax
0860257e +0xbca:  setne  %al
08602581 +0xbcd:  test   %al,%al
08602583 +0xbcf:  je     0860258a <+0xbd6>
08602585 +0xbd1:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0860258a +0xbd6:  mov    0xc(%ebp),%eax
0860258d +0xbd9:  imul   $0x58,%eax,%eax
08602590 +0xbdc:  mov    %eax,(%esp)
08602593 +0xbdf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08602598 +0xbe4:  leave
08602599 +0xbe5:  ret
0860259a +0xbe6:  push   %ebp
0860259b +0xbe7:  mov    %esp,%ebp
0860259d +0xbe9:  push   %ebx
0860259e +0xbea:  sub    $0x14,%esp
086025a1 +0xbed:  mov    0x8(%ebp),%ebx
086025a4 +0xbf0:  mov    0xc(%ebp),%eax
086025a7 +0xbf3:  mov    (%eax),%eax
086025a9 +0xbf5:  mov    %eax,0x4(%esp)
086025ad +0xbf9:  mov    %ebx,(%esp)
086025b0 +0xbfc:  call   0860265e <+0xcaa>
086025b5 +0xc01:  mov    %ebx,%eax
086025b7 +0xc03:  add    $0x14,%esp
086025ba +0xc06:  pop    %ebx
086025bb +0xc07:  pop    %ebp
086025bc +0xc08:  ret    $0x4
086025bf +0xc0b:  push   %ebp
086025c0 +0xc0c:  mov    %esp,%ebp
086025c2 +0xc0e:  sub    $0x18,%esp
086025c5 +0xc11:  mov    0x10(%ebp),%eax
086025c8 +0xc14:  mov    %eax,0x8(%esp)
086025cc +0xc18:  mov    0xc(%ebp),%eax
086025cf +0xc1b:  mov    %eax,0x4(%esp)
086025d3 +0xc1f:  mov    0x8(%ebp),%eax
086025d6 +0xc22:  mov    %eax,(%esp)
086025d9 +0xc25:  call   0860266b <+0xcb7>
086025de +0xc2a:  leave
086025df +0xc2b:  ret
086025e0 +0xc2c:  push   %ebp
086025e1 +0xc2d:  mov    %esp,%ebp
086025e3 +0xc2f:  sub    $0x18,%esp
086025e6 +0xc32:  lea    0x8(%ebp),%eax
086025e9 +0xc35:  mov    %eax,(%esp)
086025ec +0xc38:  call   084f29a0 <_GLOBAL__I__Z7getUserj+0x9952>  ; global constructors keyed to getUser(unsigned int)+0x9952
086025f1 +0xc3d:  mov    (%eax),%eax
086025f3 +0xc3f:  leave
086025f4 +0xc40:  ret
086025f5 +0xc41:  push   %ebp
086025f6 +0xc42:  mov    %esp,%ebp
086025f8 +0xc44:  sub    $0x28,%esp
086025fb +0xc47:  movb   $0x1,-0x9(%ebp)
086025ff +0xc4b:  mov    0x10(%ebp),%eax
08602602 +0xc4e:  mov    %eax,0x8(%esp)
08602606 +0xc52:  mov    0xc(%ebp),%eax
08602609 +0xc55:  mov    %eax,0x4(%esp)
0860260d +0xc59:  mov    0x8(%ebp),%eax
08602610 +0xc5c:  mov    %eax,(%esp)
08602613 +0xc5f:  call   0860268c <+0xcd8>
08602618 +0xc64:  leave
08602619 +0xc65:  ret
0860261a +0xc66:  push   %ebp
0860261b +0xc67:  mov    %esp,%ebp
0860261d +0xc69:  pop    %ebp
0860261e +0xc6a:  ret
0860261f +0xc6b:  push   %ebp
08602620 +0xc6c:  mov    %esp,%ebp
08602622 +0xc6e:  mov    0x8(%ebp),%eax
08602625 +0xc71:  pop    %ebp
08602626 +0xc72:  ret
08602627 +0xc73:  push   %ebp
08602628 +0xc74:  mov    %esp,%ebp
0860262a +0xc76:  sub    $0x28,%esp
0860262d +0xc79:  movb   $0x1,-0x9(%ebp)
08602631 +0xc7d:  mov    0x10(%ebp),%eax
08602634 +0xc80:  mov    %eax,0x8(%esp)
08602638 +0xc84:  mov    0xc(%ebp),%eax
0860263b +0xc87:  mov    %eax,0x4(%esp)
0860263f +0xc8b:  mov    0x8(%ebp),%eax
08602642 +0xc8e:  mov    %eax,(%esp)
08602645 +0xc91:  call   086026dd <+0xd29>
0860264a +0xc96:  leave
0860264b +0xc97:  ret
0860264c +0xc98:  push   %ebp
0860264d +0xc99:  mov    %esp,%ebp
0860264f +0xc9b:  mov    0x8(%ebp),%eax
08602652 +0xc9e:  pop    %ebp
08602653 +0xc9f:  ret
08602654 +0xca0:  push   %ebp
08602655 +0xca1:  mov    %esp,%ebp
08602657 +0xca3:  mov    $0x2e8ba2e,%eax
0860265c +0xca8:  pop    %ebp
0860265d +0xca9:  ret
0860265e +0xcaa:  push   %ebp
0860265f +0xcab:  mov    %esp,%ebp
08602661 +0xcad:  mov    0x8(%ebp),%eax
08602664 +0xcb0:  mov    0xc(%ebp),%edx
08602667 +0xcb3:  mov    %edx,(%eax)
08602669 +0xcb5:  pop    %ebp
0860266a +0xcb6:  ret
0860266b +0xcb7:  push   %ebp
0860266c +0xcb8:  mov    %esp,%ebp
0860266e +0xcba:  sub    $0x18,%esp
08602671 +0xcbd:  mov    0x10(%ebp),%eax
08602674 +0xcc0:  mov    %eax,0x8(%esp)
08602678 +0xcc4:  mov    0xc(%ebp),%eax
0860267b +0xcc7:  mov    %eax,0x4(%esp)
0860267f +0xccb:  mov    0x8(%ebp),%eax
08602682 +0xcce:  mov    %eax,(%esp)
08602685 +0xcd1:  call   0860272c <+0xd78>
0860268a +0xcd6:  leave
0860268b +0xcd7:  ret
0860268c +0xcd8:  push   %ebp
0860268d +0xcd9:  mov    %esp,%ebp
0860268f +0xcdb:  sub    $0x18,%esp
08602692 +0xcde:  mov    0xc(%ebp),%edx
08602695 +0xce1:  mov    0x8(%ebp),%eax
08602698 +0xce4:  mov    %edx,%ecx
0860269a +0xce6:  sub    %eax,%ecx
0860269c +0xce8:  mov    %ecx,%eax
0860269e +0xcea:  sar    $0x3,%eax
086026a1 +0xced:  imul   $0xba2e8ba3,%eax,%eax
086026a7 +0xcf3:  imul   $0x58,%eax,%eax
086026aa +0xcf6:  mov    %eax,0x8(%esp)
086026ae +0xcfa:  mov    0x8(%ebp),%eax
086026b1 +0xcfd:  mov    %eax,0x4(%esp)
086026b5 +0xd01:  mov    0x10(%ebp),%eax
086026b8 +0xd04:  mov    %eax,(%esp)
086026bb +0xd07:  call   0807d880 <_init+0x178>
086026c0 +0xd0c:  mov    0xc(%ebp),%edx
086026c3 +0xd0f:  mov    0x8(%ebp),%eax
086026c6 +0xd12:  mov    %edx,%ecx
086026c8 +0xd14:  sub    %eax,%ecx
086026ca +0xd16:  mov    %ecx,%eax
086026cc +0xd18:  sar    $0x3,%eax
086026cf +0xd1b:  imul   $0xba2e8ba3,%eax,%eax
086026d5 +0xd21:  imul   $0x58,%eax,%eax
086026d8 +0xd24:  add    0x10(%ebp),%eax
086026db +0xd27:  leave
086026dc +0xd28:  ret
086026dd +0xd29:  push   %ebp
086026de +0xd2a:  mov    %esp,%ebp
086026e0 +0xd2c:  sub    $0x28,%esp
086026e3 +0xd2f:  mov    0xc(%ebp),%edx
086026e6 +0xd32:  mov    0x8(%ebp),%eax
086026e9 +0xd35:  mov    %edx,%ecx
086026eb +0xd37:  sub    %eax,%ecx
086026ed +0xd39:  mov    %ecx,%eax
086026ef +0xd3b:  sar    $0x3,%eax
086026f2 +0xd3e:  imul   $0xba2e8ba3,%eax,%eax
086026f8 +0xd44:  mov    %eax,-0xc(%ebp)
086026fb +0xd47:  mov    -0xc(%ebp),%eax
086026fe +0xd4a:  imul   $0x58,%eax,%edx
08602701 +0xd4d:  mov    -0xc(%ebp),%eax
08602704 +0xd50:  imul   $0x58,%eax,%eax
08602707 +0xd53:  neg    %eax
08602709 +0xd55:  add    0x10(%ebp),%eax
0860270c +0xd58:  mov    %edx,0x8(%esp)
08602710 +0xd5c:  mov    0x8(%ebp),%edx
08602713 +0xd5f:  mov    %edx,0x4(%esp)
08602717 +0xd63:  mov    %eax,(%esp)
0860271a +0xd66:  call   0807d880 <_init+0x178>
0860271f +0xd6b:  mov    -0xc(%ebp),%eax
08602722 +0xd6e:  imul   $0x58,%eax,%eax
08602725 +0xd71:  neg    %eax
08602727 +0xd73:  add    0x10(%ebp),%eax
0860272a +0xd76:  leave
0860272b +0xd77:  ret
0860272c +0xd78:  push   %ebp
0860272d +0xd79:  mov    %esp,%ebp
0860272f +0xd7b:  sub    $0x18,%esp
08602732 +0xd7e:  mov    0x10(%ebp),%eax
08602735 +0xd81:  mov    %eax,0x8(%esp)
08602739 +0xd85:  mov    0xc(%ebp),%eax
0860273c +0xd88:  mov    %eax,0x4(%esp)
08602740 +0xd8c:  mov    0x8(%ebp),%eax
08602743 +0xd8f:  mov    %eax,(%esp)
08602746 +0xd92:  call   0860274d <+0xd99>
0860274b +0xd97:  leave
0860274c +0xd98:  ret
0860274d +0xd99:  push   %ebp
0860274e +0xd9a:  mov    %esp,%ebp
08602750 +0xd9c:  push   %ebx
08602751 +0xd9d:  sub    $0x14,%esp
08602754 +0xda0:  mov    0xc(%ebp),%eax
08602757 +0xda3:  mov    %eax,(%esp)
0860275a +0xda6:  call   08602785 <+0xdd1>
0860275f +0xdab:  mov    %eax,%ebx
08602761 +0xdad:  mov    0x8(%ebp),%eax
08602764 +0xdb0:  mov    %eax,(%esp)
08602767 +0xdb3:  call   08602785 <+0xdd1>
0860276c +0xdb8:  mov    0x10(%ebp),%edx
0860276f +0xdbb:  mov    %edx,0x8(%esp)
08602773 +0xdbf:  mov    %ebx,0x4(%esp)
08602777 +0xdc3:  mov    %eax,(%esp)
0860277a +0xdc6:  call   08602798 <+0xde4>
0860277f +0xdcb:  add    $0x14,%esp
08602782 +0xdce:  pop    %ebx
08602783 +0xdcf:  pop    %ebp
08602784 +0xdd0:  ret
08602785 +0xdd1:  push   %ebp
08602786 +0xdd2:  mov    %esp,%ebp
08602788 +0xdd4:  sub    $0x18,%esp
0860278b +0xdd7:  lea    0x8(%ebp),%eax
0860278e +0xdda:  mov    %eax,(%esp)
08602791 +0xddd:  call   086027dc <+0xe28>
08602796 +0xde2:  leave
08602797 +0xde3:  ret
08602798 +0xde4:  push   %ebp
08602799 +0xde5:  mov    %esp,%ebp
0860279b +0xde7:  push   %esi
0860279c +0xde8:  push   %ebx
0860279d +0xde9:  sub    $0x10,%esp
086027a0 +0xdec:  mov    0x10(%ebp),%eax
086027a3 +0xdef:  mov    %eax,(%esp)
086027a6 +0xdf2:  call   0860261f <+0xc6b>
086027ab +0xdf7:  mov    %eax,%esi
086027ad +0xdf9:  mov    0xc(%ebp),%eax
086027b0 +0xdfc:  mov    %eax,(%esp)
086027b3 +0xdff:  call   0860261f <+0xc6b>
086027b8 +0xe04:  mov    %eax,%ebx
086027ba +0xe06:  mov    0x8(%ebp),%eax
086027bd +0xe09:  mov    %eax,(%esp)
086027c0 +0xe0c:  call   0860261f <+0xc6b>
086027c5 +0xe11:  mov    %esi,0x8(%esp)
086027c9 +0xe15:  mov    %ebx,0x4(%esp)
086027cd +0xe19:  mov    %eax,(%esp)
086027d0 +0xe1c:  call   086025f5 <+0xc41>
086027d5 +0xe21:  add    $0x10,%esp
086027d8 +0xe24:  pop    %ebx
086027d9 +0xe25:  pop    %esi
086027da +0xe26:  pop    %ebp
086027db +0xe27:  ret
086027dc +0xe28:  push   %ebp
086027dd +0xe29:  mov    %esp,%ebp
086027df +0xe2b:  mov    0x8(%ebp),%eax
086027e2 +0xe2e:  mov    (%eax),%eax
086027e4 +0xe30:  pop    %ebp
086027e5 +0xe31:  ret
086027e6 +0xe32:  nop
086027e7 +0xe33:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86019b4

/* CSharedServerMessageManager::CSharedServerMessageManager() */

void CSharedServerMessageManager::_GLOBAL__I_CSharedServerMessageManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
