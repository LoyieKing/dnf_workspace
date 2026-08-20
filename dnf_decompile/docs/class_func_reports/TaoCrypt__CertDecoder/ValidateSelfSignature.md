# ValidateSelfSignature

`_ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv`

`TaoCrypt::CertDecoder::ValidateSelfSignature()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087567a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087567a0  _ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv
#           TaoCrypt::CertDecoder::ValidateSelfSignature()
# range [0x087567a0, 0x08756bef]
087567a0 +0x000:  push   %ebp
087567a1 +0x001:  xor    %eax,%eax
087567a3 +0x003:  mov    %esp,%ebp
087567a5 +0x005:  sub    $0x48,%esp
087567a8 +0x008:  mov    %esi,-0x8(%ebp)
087567ab +0x00b:  mov    0x8(%ebp),%esi
087567ae +0x00e:  mov    %ebx,-0xc(%ebp)
087567b1 +0x011:  mov    %edi,-0x4(%ebp)
087567b4 +0x014:  call   08722df8 <__i686.get_pc_thunk.bx>
087567b9 +0x019:  add    $0xc163df,%ebx
087567bf +0x01f:  mov    0xc(%esi),%edx
087567c2 +0x022:  mov    0x8(%esi),%edi
087567c5 +0x025:  test   %edx,%edx
087567c7 +0x027:  mov    %edx,-0x2c(%ebp)
087567ca +0x02a:  je     087567dc <+0x3c>
087567cc +0x02c:  mov    %edx,(%esp)
087567cf +0x02f:  movb   $0x0,0x4(%esp)
087567d4 +0x034:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087567d9 +0x039:  mov    -0x2c(%ebp),%edx
087567dc +0x03c:  mov    %edx,0x8(%esp)
087567e0 +0x040:  mov    %edi,0x4(%esp)
087567e4 +0x044:  mov    %eax,-0x28(%ebp)
087567e7 +0x047:  mov    %eax,(%esp)
087567ea +0x04a:  call   0807d8a0 <_init+0x198>
087567ef +0x04f:  lea    -0x2c(%ebp),%eax
087567f2 +0x052:  mov    %esi,(%esp)
087567f5 +0x055:  movl   $0x0,-0x20(%ebp)
087567fc +0x05c:  movl   $0x0,-0x1c(%ebp)
08756803 +0x063:  mov    %eax,0x4(%esp)
08756807 +0x067:  call   08755f50 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE>  ; TaoCrypt::CertDecoder::ConfirmSignature(TaoCrypt::Source&)
0875680c +0x06c:  mov    -0x28(%ebp),%esi
0875680f +0x06f:  movl   $0x0,0x4(%esp)
08756817 +0x077:  mov    %esi,(%esp)
0875681a +0x07a:  mov    %eax,%edi
0875681c +0x07c:  mov    -0x2c(%ebp),%eax
0875681f +0x07f:  mov    %eax,0x8(%esp)
08756823 +0x083:  call   0807dcc0 <_init+0x5b8>
08756828 +0x088:  mov    %esi,(%esp)
0875682b +0x08b:  movb   $0x0,0x4(%esp)
08756830 +0x090:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756835 +0x095:  mov    %edi,%eax
08756837 +0x097:  mov    -0xc(%ebp),%ebx
0875683a +0x09a:  mov    -0x8(%ebp),%esi
0875683d +0x09d:  mov    -0x4(%ebp),%edi
08756840 +0x0a0:  mov    %ebp,%esp
08756842 +0x0a2:  pop    %ebp
08756843 +0x0a3:  ret
08756844 +0x0a4:  nop
08756845 +0x0a5:  nop
08756846 +0x0a6:  nop
08756847 +0x0a7:  nop
08756848 +0x0a8:  nop
08756849 +0x0a9:  nop
0875684a +0x0aa:  nop
0875684b +0x0ab:  nop
0875684c +0x0ac:  nop
0875684d +0x0ad:  nop
0875684e +0x0ae:  nop
0875684f +0x0af:  nop
08756850 +0x0b0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756855 +0x0b5:  add    $0xc16343,%ecx
0875685b +0x0bb:  push   %ebp
0875685c +0x0bc:  mov    %esp,%ebp
0875685e +0x0be:  mov    -0x354(%ecx),%eax
08756864 +0x0c4:  lea    0x8(%eax),%edx
08756867 +0x0c7:  mov    0x8(%ebp),%eax
0875686a +0x0ca:  mov    %edx,(%eax)
0875686c +0x0cc:  pop    %ebp
0875686d +0x0cd:  ret
0875686e +0x0ce:  nop
0875686f +0x0cf:  nop
08756870 +0x0d0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756875 +0x0d5:  add    $0xc16323,%ecx
0875687b +0x0db:  push   %ebp
0875687c +0x0dc:  mov    %esp,%ebp
0875687e +0x0de:  mov    -0x354(%ecx),%eax
08756884 +0x0e4:  lea    0x8(%eax),%edx
08756887 +0x0e7:  mov    0x8(%ebp),%eax
0875688a +0x0ea:  mov    %edx,(%eax)
0875688c +0x0ec:  pop    %ebp
0875688d +0x0ed:  ret
0875688e +0x0ee:  nop
0875688f +0x0ef:  nop
08756890 +0x0f0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756895 +0x0f5:  add    $0xc16303,%ecx
0875689b +0x0fb:  push   %ebp
0875689c +0x0fc:  mov    %esp,%ebp
0875689e +0x0fe:  mov    -0x2b8(%ecx),%eax
087568a4 +0x104:  lea    0x8(%eax),%edx
087568a7 +0x107:  mov    0x8(%ebp),%eax
087568aa +0x10a:  mov    %edx,(%eax)
087568ac +0x10c:  pop    %ebp
087568ad +0x10d:  ret
087568ae +0x10e:  nop
087568af +0x10f:  nop
087568b0 +0x110:  call   087245c4 <__i686.get_pc_thunk.cx>
087568b5 +0x115:  add    $0xc162e3,%ecx
087568bb +0x11b:  push   %ebp
087568bc +0x11c:  mov    %esp,%ebp
087568be +0x11e:  mov    -0x2b8(%ecx),%eax
087568c4 +0x124:  lea    0x8(%eax),%edx
087568c7 +0x127:  mov    0x8(%ebp),%eax
087568ca +0x12a:  mov    %edx,(%eax)
087568cc +0x12c:  pop    %ebp
087568cd +0x12d:  ret
087568ce +0x12e:  nop
087568cf +0x12f:  nop
087568d0 +0x130:  call   087245c4 <__i686.get_pc_thunk.cx>
087568d5 +0x135:  add    $0xc162c3,%ecx
087568db +0x13b:  push   %ebp
087568dc +0x13c:  mov    %esp,%ebp
087568de +0x13e:  mov    -0x3c(%ecx),%eax
087568e4 +0x144:  lea    0x8(%eax),%edx
087568e7 +0x147:  mov    0x8(%ebp),%eax
087568ea +0x14a:  mov    %edx,(%eax)
087568ec +0x14c:  pop    %ebp
087568ed +0x14d:  ret
087568ee +0x14e:  nop
087568ef +0x14f:  nop
087568f0 +0x150:  call   087245c4 <__i686.get_pc_thunk.cx>
087568f5 +0x155:  add    $0xc162a3,%ecx
087568fb +0x15b:  push   %ebp
087568fc +0x15c:  mov    %esp,%ebp
087568fe +0x15e:  mov    -0x3c(%ecx),%eax
08756904 +0x164:  lea    0x8(%eax),%edx
08756907 +0x167:  mov    0x8(%ebp),%eax
0875690a +0x16a:  mov    %edx,(%eax)
0875690c +0x16c:  pop    %ebp
0875690d +0x16d:  ret
0875690e +0x16e:  nop
0875690f +0x16f:  nop
08756910 +0x170:  call   087245c4 <__i686.get_pc_thunk.cx>
08756915 +0x175:  add    $0xc16283,%ecx
0875691b +0x17b:  push   %ebp
0875691c +0x17c:  mov    %esp,%ebp
0875691e +0x17e:  mov    -0x2b8(%ecx),%eax
08756924 +0x184:  lea    0x8(%eax),%edx
08756927 +0x187:  mov    0x8(%ebp),%eax
0875692a +0x18a:  mov    %edx,(%eax)
0875692c +0x18c:  pop    %ebp
0875692d +0x18d:  ret
0875692e +0x18e:  nop
0875692f +0x18f:  nop
08756930 +0x190:  call   087245c4 <__i686.get_pc_thunk.cx>
08756935 +0x195:  add    $0xc16263,%ecx
0875693b +0x19b:  push   %ebp
0875693c +0x19c:  mov    %esp,%ebp
0875693e +0x19e:  mov    -0x2b8(%ecx),%eax
08756944 +0x1a4:  lea    0x8(%eax),%edx
08756947 +0x1a7:  mov    0x8(%ebp),%eax
0875694a +0x1aa:  mov    %edx,(%eax)
0875694c +0x1ac:  pop    %ebp
0875694d +0x1ad:  ret
0875694e +0x1ae:  nop
0875694f +0x1af:  nop
08756950 +0x1b0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756955 +0x1b5:  add    $0xc16243,%ecx
0875695b +0x1bb:  push   %ebp
0875695c +0x1bc:  mov    %esp,%ebp
0875695e +0x1be:  mov    -0x354(%ecx),%eax
08756964 +0x1c4:  lea    0x8(%eax),%edx
08756967 +0x1c7:  mov    0x8(%ebp),%eax
0875696a +0x1ca:  mov    %edx,(%eax)
0875696c +0x1cc:  pop    %ebp
0875696d +0x1cd:  ret
0875696e +0x1ce:  nop
0875696f +0x1cf:  nop
08756970 +0x1d0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756975 +0x1d5:  add    $0xc16223,%ecx
0875697b +0x1db:  push   %ebp
0875697c +0x1dc:  mov    %esp,%ebp
0875697e +0x1de:  mov    -0x354(%ecx),%eax
08756984 +0x1e4:  lea    0x8(%eax),%edx
08756987 +0x1e7:  mov    0x8(%ebp),%eax
0875698a +0x1ea:  mov    %edx,(%eax)
0875698c +0x1ec:  pop    %ebp
0875698d +0x1ed:  ret
0875698e +0x1ee:  nop
0875698f +0x1ef:  nop
08756990 +0x1f0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756995 +0x1f5:  add    $0xc16203,%ecx
0875699b +0x1fb:  push   %ebp
0875699c +0x1fc:  mov    %esp,%ebp
0875699e +0x1fe:  mov    -0x354(%ecx),%eax
087569a4 +0x204:  lea    0x8(%eax),%edx
087569a7 +0x207:  mov    0x8(%ebp),%eax
087569aa +0x20a:  mov    %edx,(%eax)
087569ac +0x20c:  pop    %ebp
087569ad +0x20d:  ret
087569ae +0x20e:  nop
087569af +0x20f:  nop
087569b0 +0x210:  call   087245c4 <__i686.get_pc_thunk.cx>
087569b5 +0x215:  add    $0xc161e3,%ecx
087569bb +0x21b:  push   %ebp
087569bc +0x21c:  mov    %esp,%ebp
087569be +0x21e:  mov    -0x354(%ecx),%eax
087569c4 +0x224:  lea    0x8(%eax),%edx
087569c7 +0x227:  mov    0x8(%ebp),%eax
087569ca +0x22a:  mov    %edx,(%eax)
087569cc +0x22c:  pop    %ebp
087569cd +0x22d:  ret
087569ce +0x22e:  nop
087569cf +0x22f:  nop
087569d0 +0x230:  call   087245c4 <__i686.get_pc_thunk.cx>
087569d5 +0x235:  add    $0xc161c3,%ecx
087569db +0x23b:  push   %ebp
087569dc +0x23c:  mov    %esp,%ebp
087569de +0x23e:  mov    -0x354(%ecx),%eax
087569e4 +0x244:  lea    0x8(%eax),%edx
087569e7 +0x247:  mov    0x8(%ebp),%eax
087569ea +0x24a:  mov    %edx,(%eax)
087569ec +0x24c:  pop    %ebp
087569ed +0x24d:  ret
087569ee +0x24e:  nop
087569ef +0x24f:  nop
087569f0 +0x250:  call   087245c4 <__i686.get_pc_thunk.cx>
087569f5 +0x255:  add    $0xc161a3,%ecx
087569fb +0x25b:  push   %ebp
087569fc +0x25c:  mov    %esp,%ebp
087569fe +0x25e:  mov    -0x354(%ecx),%eax
08756a04 +0x264:  lea    0x8(%eax),%edx
08756a07 +0x267:  mov    0x8(%ebp),%eax
08756a0a +0x26a:  mov    %edx,(%eax)
08756a0c +0x26c:  pop    %ebp
08756a0d +0x26d:  ret
08756a0e +0x26e:  nop
08756a0f +0x26f:  nop
08756a10 +0x270:  call   087245c4 <__i686.get_pc_thunk.cx>
08756a15 +0x275:  add    $0xc16183,%ecx
08756a1b +0x27b:  push   %ebp
08756a1c +0x27c:  mov    %esp,%ebp
08756a1e +0x27e:  mov    -0x354(%ecx),%eax
08756a24 +0x284:  lea    0x8(%eax),%edx
08756a27 +0x287:  mov    0x8(%ebp),%eax
08756a2a +0x28a:  mov    %edx,(%eax)
08756a2c +0x28c:  pop    %ebp
08756a2d +0x28d:  ret
08756a2e +0x28e:  nop
08756a2f +0x28f:  nop
08756a30 +0x290:  call   087245c4 <__i686.get_pc_thunk.cx>
08756a35 +0x295:  add    $0xc16163,%ecx
08756a3b +0x29b:  push   %ebp
08756a3c +0x29c:  mov    %esp,%ebp
08756a3e +0x29e:  mov    -0x354(%ecx),%eax
08756a44 +0x2a4:  lea    0x8(%eax),%edx
08756a47 +0x2a7:  mov    0x8(%ebp),%eax
08756a4a +0x2aa:  mov    %edx,(%eax)
08756a4c +0x2ac:  pop    %ebp
08756a4d +0x2ad:  ret
08756a4e +0x2ae:  nop
08756a4f +0x2af:  nop
08756a50 +0x2b0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756a55 +0x2b5:  add    $0xc16143,%ecx
08756a5b +0x2bb:  push   %ebp
08756a5c +0x2bc:  mov    %esp,%ebp
08756a5e +0x2be:  mov    -0x354(%ecx),%eax
08756a64 +0x2c4:  lea    0x8(%eax),%edx
08756a67 +0x2c7:  mov    0x8(%ebp),%eax
08756a6a +0x2ca:  mov    %edx,(%eax)
08756a6c +0x2cc:  pop    %ebp
08756a6d +0x2cd:  ret
08756a6e +0x2ce:  nop
08756a6f +0x2cf:  nop
08756a70 +0x2d0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756a75 +0x2d5:  add    $0xc16123,%ecx
08756a7b +0x2db:  push   %ebp
08756a7c +0x2dc:  mov    %esp,%ebp
08756a7e +0x2de:  mov    -0x354(%ecx),%eax
08756a84 +0x2e4:  lea    0x8(%eax),%edx
08756a87 +0x2e7:  mov    0x8(%ebp),%eax
08756a8a +0x2ea:  mov    %edx,(%eax)
08756a8c +0x2ec:  pop    %ebp
08756a8d +0x2ed:  ret
08756a8e +0x2ee:  nop
08756a8f +0x2ef:  nop
08756a90 +0x2f0:  call   087245c4 <__i686.get_pc_thunk.cx>
08756a95 +0x2f5:  add    $0xc16103,%ecx
08756a9b +0x2fb:  push   %ebp
08756a9c +0x2fc:  mov    %esp,%ebp
08756a9e +0x2fe:  mov    -0x354(%ecx),%eax
08756aa4 +0x304:  lea    0x8(%eax),%edx
08756aa7 +0x307:  mov    0x8(%ebp),%eax
08756aaa +0x30a:  mov    %edx,(%eax)
08756aac +0x30c:  pop    %ebp
08756aad +0x30d:  ret
08756aae +0x30e:  nop
08756aaf +0x30f:  nop
08756ab0 +0x310:  call   087245c4 <__i686.get_pc_thunk.cx>
08756ab5 +0x315:  add    $0xc160e3,%ecx
08756abb +0x31b:  push   %ebp
08756abc +0x31c:  mov    %esp,%ebp
08756abe +0x31e:  mov    -0x354(%ecx),%eax
08756ac4 +0x324:  lea    0x8(%eax),%edx
08756ac7 +0x327:  mov    0x8(%ebp),%eax
08756aca +0x32a:  mov    %edx,(%eax)
08756acc +0x32c:  pop    %ebp
08756acd +0x32d:  ret
08756ace +0x32e:  nop
08756acf +0x32f:  nop
08756ad0 +0x330:  push   %ebp
08756ad1 +0x331:  mov    %esp,%ebp
08756ad3 +0x333:  sub    $0x18,%esp
08756ad6 +0x336:  mov    0x8(%ebp),%eax
08756ad9 +0x339:  mov    %ebx,-0x8(%ebp)
08756adc +0x33c:  mov    %esi,-0x4(%ebp)
08756adf +0x33f:  call   08722df8 <__i686.get_pc_thunk.bx>
08756ae4 +0x344:  add    $0xc160b4,%ebx
08756aea +0x34a:  mov    (%eax),%esi
08756aec +0x34c:  test   %esi,%esi
08756aee +0x34e:  je     08756af7 <+0x357>
08756af0 +0x350:  mov    (%esi),%eax
08756af2 +0x352:  mov    %esi,(%esp)
08756af5 +0x355:  call   *(%eax)
08756af7 +0x357:  mov    %esi,(%esp)
08756afa +0x35a:  movb   $0x0,0x4(%esp)
08756aff +0x35f:  call   087676f0 <_ZdlPvN8TaoCrypt5new_tE>  ; operator delete(void*, TaoCrypt::new_t)
08756b04 +0x364:  mov    -0x8(%ebp),%ebx
08756b07 +0x367:  mov    -0x4(%ebp),%esi
08756b0a +0x36a:  mov    %ebp,%esp
08756b0c +0x36c:  pop    %ebp
08756b0d +0x36d:  ret
08756b0e +0x36e:  nop
08756b0f +0x36f:  nop
08756b10 +0x370:  push   %ebp
08756b11 +0x371:  mov    %esp,%ebp
08756b13 +0x373:  push   %edi
08756b14 +0x374:  push   %esi
08756b15 +0x375:  push   %ebx
08756b16 +0x376:  sub    $0x3c,%esp
08756b19 +0x379:  mov    0x8(%ebp),%esi
08756b1c +0x37c:  call   08722df8 <__i686.get_pc_thunk.bx>
08756b21 +0x381:  add    $0xc16077,%ebx
08756b27 +0x387:  mov    (%esi),%eax
08756b29 +0x389:  mov    %eax,(%esp)
08756b2c +0x38c:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
08756b31 +0x391:  sub    $0x1,%eax
08756b34 +0x394:  shr    $0x3,%eax
08756b37 +0x397:  cmp    $0xa,%eax
08756b3a +0x39a:  jbe    08756bc8 <+0x428>
08756b40 +0x3a0:  sub    $0xa,%eax
08756b43 +0x3a3:  mov    %eax,-0x24(%ebp)
08756b46 +0x3a6:  movb   $0x0,0x4(%esp)
08756b4b +0x3ab:  mov    %eax,(%esp)
08756b4e +0x3ae:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08756b53 +0x3b3:  mov    %eax,%edi
08756b55 +0x3b5:  mov    -0x24(%ebp),%eax
08756b58 +0x3b8:  mov    %edi,-0x20(%ebp)
08756b5b +0x3bb:  movl   $0x0,0x4(%esp)
08756b63 +0x3c3:  mov    %edi,(%esp)
08756b66 +0x3c6:  mov    %eax,-0x2c(%ebp)
08756b69 +0x3c9:  mov    %eax,0x8(%esp)
08756b6d +0x3cd:  call   0807dcc0 <_init+0x5b8>
08756b72 +0x3d2:  mov    0x14(%ebp),%eax
08756b75 +0x3d5:  mov    %edi,0x8(%esp)
08756b79 +0x3d9:  mov    %edi,-0x30(%ebp)
08756b7c +0x3dc:  mov    %eax,0x4(%esp)
08756b80 +0x3e0:  mov    (%esi),%eax
08756b82 +0x3e2:  xor    %esi,%esi
08756b84 +0x3e4:  mov    %eax,(%esp)
08756b87 +0x3e7:  call   08767e50 <_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh>  ; TaoCrypt::SSL_Decrypt(TaoCrypt::RSA_PublicKey const&, unsigned char const*, unsigned char*)
08756b8c +0x3ec:  mov    -0x30(%ebp),%edx
08756b8f +0x3ef:  cmp    0x10(%ebp),%eax
08756b92 +0x3f2:  je     08756bd8 <+0x438>
08756b94 +0x3f4:  mov    -0x2c(%ebp),%eax
08756b97 +0x3f7:  mov    %edx,(%esp)
08756b9a +0x3fa:  mov    %edx,-0x30(%ebp)
08756b9d +0x3fd:  movl   $0x0,0x4(%esp)
08756ba5 +0x405:  mov    %eax,0x8(%esp)
08756ba9 +0x409:  call   0807dcc0 <_init+0x5b8>
08756bae +0x40e:  mov    -0x30(%ebp),%edx
08756bb1 +0x411:  movb   $0x0,0x4(%esp)
08756bb6 +0x416:  mov    %edx,(%esp)
08756bb9 +0x419:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08756bbe +0x41e:  add    $0x3c,%esp
08756bc1 +0x421:  mov    %esi,%eax
08756bc3 +0x423:  pop    %ebx
08756bc4 +0x424:  pop    %esi
08756bc5 +0x425:  pop    %edi
08756bc6 +0x426:  pop    %ebp
08756bc7 +0x427:  ret
08756bc8 +0x428:  movl   $0x0,-0x24(%ebp)
08756bcf +0x42f:  xor    %edi,%edi
08756bd1 +0x431:  jmp    08756b55 <+0x3b5>
08756bd3 +0x433:  nop
08756bd4 +0x434:  lea    0x0(%esi,%eiz,1),%esi
08756bd8 +0x438:  mov    0x10(%ebp),%eax
08756bdb +0x43b:  mov    %edx,%esi
08756bdd +0x43d:  mov    0xc(%ebp),%edi
08756be0 +0x440:  cmp    %eax,%eax
08756be2 +0x442:  mov    %eax,%ecx
08756be4 +0x444:  repz cmpsb %es:(%edi),%ds:(%esi)
08756be6 +0x446:  sete   %al
08756be9 +0x449:  mov    %eax,%esi
08756beb +0x44b:  jmp    08756b94 <+0x3f4>
08756bed +0x44d:  nop
08756bee +0x44e:  nop
08756bef +0x44f:  nop
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::ValidateSelfSignature @ 0x87567a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ValidateSelfSignature() */

undefined4 __thiscall TaoCrypt::CertDecoder::ValidateSelfSignature(CertDecoder *this)

{
  void *pvVar1;
  undefined4 uVar2;
  uint in_stack_ffffffb8;
  uint uVar3;
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_2c = (void *)0x0;
  local_30 = *(size_t *)(this + 0xc);
  pvVar1 = *(void **)(this + 8);
  if (local_30 != 0) {
    local_2c = operator_new__(local_30,in_stack_ffffffb8 & 0xffffff00);
  }
  memcpy(local_2c,pvVar1,local_30);
  local_24 = 0;
  local_20 = 0;
  uVar2 = ConfirmSignature(this,(Source *)&local_30);
  pvVar1 = local_2c;
  uVar3 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar3 & 0xffffff00);
  return uVar2;
}
```
