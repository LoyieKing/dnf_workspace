# Gcd

`_ZNK8TaoCrypt23AbstractEuclideanDomain3GcdERKNS_7IntegerES3_`

`TaoCrypt::AbstractEuclideanDomain::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractEuclideanDomain` | `0x087a54e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a54e0  _ZNK8TaoCrypt23AbstractEuclideanDomain3GcdERKNS_7IntegerES3_
#           TaoCrypt::AbstractEuclideanDomain::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a54e0, 0x087a58ef]
087a54e0 +0x000:  push   %ebp
087a54e1 +0x001:  mov    %esp,%ebp
087a54e3 +0x003:  push   %edi
087a54e4 +0x004:  push   %esi
087a54e5 +0x005:  push   %ebx
087a54e6 +0x006:  sub    $0x4c,%esp
087a54e9 +0x009:  mov    0x8(%ebp),%esi
087a54ec +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a54f1 +0x011:  add    $0xbc76a7,%ebx
087a54f7 +0x017:  movb   $0x0,0x4(%esp)
087a54fc +0x01c:  movl   $0x30,(%esp)
087a5503 +0x023:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a5508 +0x028:  mov    %eax,%edi
087a550a +0x02a:  lea    -0x28(%ebp),%eax
087a550d +0x02d:  mov    %eax,-0x2c(%ebp)
087a5510 +0x030:  mov    %eax,(%esp)
087a5513 +0x033:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a5518 +0x038:  mov    -0x2c(%ebp),%edx
087a551b +0x03b:  mov    %edi,(%esp)
087a551e +0x03e:  mov    %edx,0x4(%esp)
087a5522 +0x042:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a5527 +0x047:  lea    0x10(%edi),%eax
087a552a +0x04a:  mov    %eax,-0x40(%ebp)
087a552d +0x04d:  mov    -0x2c(%ebp),%edx
087a5530 +0x050:  mov    %eax,(%esp)
087a5533 +0x053:  mov    %edx,0x4(%esp)
087a5537 +0x057:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a553c +0x05c:  lea    0x20(%edi),%eax
087a553f +0x05f:  mov    %eax,-0x44(%ebp)
087a5542 +0x062:  mov    -0x2c(%ebp),%edx
087a5545 +0x065:  mov    %eax,(%esp)
087a5548 +0x068:  mov    %edx,0x4(%esp)
087a554c +0x06c:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a5551 +0x071:  mov    -0x28(%ebp),%eax
087a5554 +0x074:  mov    -0x24(%ebp),%edx
087a5557 +0x077:  movl   $0x0,0x4(%esp)
087a555f +0x07f:  shl    $0x2,%eax
087a5562 +0x082:  mov    %edx,(%esp)
087a5565 +0x085:  mov    %edx,-0x48(%ebp)
087a5568 +0x088:  mov    %eax,0x8(%esp)
087a556c +0x08c:  call   0807dcc0 <_init+0x5b8>
087a5571 +0x091:  mov    -0x48(%ebp),%edx
087a5574 +0x094:  movb   $0x0,0x4(%esp)
087a5579 +0x099:  mov    %edx,(%esp)
087a557c +0x09c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a5581 +0x0a1:  mov    0x10(%ebp),%eax
087a5584 +0x0a4:  mov    %edi,(%esp)
087a5587 +0x0a7:  mov    %eax,0x4(%esp)
087a558b +0x0ab:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a5590 +0x0b0:  mov    0xc(%ebp),%eax
087a5593 +0x0b3:  mov    %eax,0x4(%esp)
087a5597 +0x0b7:  mov    -0x40(%ebp),%eax
087a559a +0x0ba:  mov    %eax,(%esp)
087a559d +0x0bd:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a55a2 +0x0c2:  movl   $0x2,-0x38(%ebp)
087a55a9 +0x0c9:  movl   $0x1,-0x30(%ebp)
087a55b0 +0x0d0:  movl   $0x0,-0x34(%ebp)
087a55b7 +0x0d7:  mov    %edi,-0x2c(%ebp)
087a55ba +0x0da:  jmp    087a5600 <+0x120>
087a55bc +0x0dc:  lea    0x0(%esi,%eiz,1),%esi
087a55c0 +0x0e0:  mov    -0x34(%ebp),%eax
087a55c3 +0x0e3:  mov    (%esi),%edx
087a55c5 +0x0e5:  mov    %edi,0x8(%esp)
087a55c9 +0x0e9:  mov    %esi,(%esp)
087a55cc +0x0ec:  shl    $0x4,%eax
087a55cf +0x0ef:  add    -0x2c(%ebp),%eax
087a55d2 +0x0f2:  mov    %eax,0x4(%esp)
087a55d6 +0x0f6:  call   *0x64(%edx)
087a55d9 +0x0f9:  mov    %eax,0x4(%esp)
087a55dd +0x0fd:  mov    -0x38(%ebp),%eax
087a55e0 +0x100:  shl    $0x4,%eax
087a55e3 +0x103:  add    -0x2c(%ebp),%eax
087a55e6 +0x106:  mov    %eax,(%esp)
087a55e9 +0x109:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a55ee +0x10e:  mov    -0x38(%ebp),%edx
087a55f1 +0x111:  mov    -0x30(%ebp),%eax
087a55f4 +0x114:  mov    %edx,-0x30(%ebp)
087a55f7 +0x117:  mov    -0x34(%ebp),%edx
087a55fa +0x11a:  mov    %eax,-0x34(%ebp)
087a55fd +0x11d:  mov    %edx,-0x38(%ebp)
087a5600 +0x120:  mov    (%esi),%eax
087a5602 +0x122:  mov    0x8(%eax),%edx
087a5605 +0x125:  mov    %esi,(%esp)
087a5608 +0x128:  mov    %edx,-0x3c(%ebp)
087a560b +0x12b:  call   *0xc(%eax)
087a560e +0x12e:  mov    -0x30(%ebp),%edi
087a5611 +0x131:  mov    %esi,(%esp)
087a5614 +0x134:  shl    $0x4,%edi
087a5617 +0x137:  add    -0x2c(%ebp),%edi
087a561a +0x13a:  mov    %eax,0x8(%esp)
087a561e +0x13e:  mov    %edi,0x4(%esp)
087a5622 +0x142:  call   *-0x3c(%ebp)
087a5625 +0x145:  test   %al,%al
087a5627 +0x147:  je     087a55c0 <+0xe0>
087a5629 +0x149:  mov    -0x34(%ebp),%eax
087a562c +0x14c:  add    $0xc,%esi
087a562f +0x14f:  mov    -0x2c(%ebp),%edi
087a5632 +0x152:  mov    %esi,(%esp)
087a5635 +0x155:  xor    %esi,%esi
087a5637 +0x157:  shl    $0x4,%eax
087a563a +0x15a:  lea    (%edi,%eax,1),%eax
087a563d +0x15d:  mov    %eax,0x4(%esp)
087a5641 +0x161:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a5646 +0x166:  mov    %eax,-0x2c(%ebp)
087a5649 +0x169:  mov    (%edi),%eax
087a564b +0x16b:  mov    0x4(%edi),%edx
087a564e +0x16e:  movl   $0x0,0x4(%esp)
087a5656 +0x176:  shl    $0x2,%eax
087a5659 +0x179:  mov    %edx,(%esp)
087a565c +0x17c:  mov    %edx,-0x48(%ebp)
087a565f +0x17f:  mov    %eax,0x8(%esp)
087a5663 +0x183:  call   0807dcc0 <_init+0x5b8>
087a5668 +0x188:  mov    -0x48(%ebp),%edx
087a566b +0x18b:  mov    %esi,%eax
087a566d +0x18d:  mov    %al,0x4(%esp)
087a5671 +0x191:  mov    %edx,(%esp)
087a5674 +0x194:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a5679 +0x199:  mov    -0x40(%ebp),%eax
087a567c +0x19c:  mov    0x4(%eax),%edx
087a567f +0x19f:  mov    0x10(%edi),%eax
087a5682 +0x1a2:  movl   $0x0,0x4(%esp)
087a568a +0x1aa:  mov    %edx,(%esp)
087a568d +0x1ad:  shl    $0x2,%eax
087a5690 +0x1b0:  mov    %edx,-0x48(%ebp)
087a5693 +0x1b3:  mov    %eax,0x8(%esp)
087a5697 +0x1b7:  call   0807dcc0 <_init+0x5b8>
087a569c +0x1bc:  mov    -0x48(%ebp),%edx
087a569f +0x1bf:  mov    %esi,%eax
087a56a1 +0x1c1:  mov    %al,0x4(%esp)
087a56a5 +0x1c5:  mov    %edx,(%esp)
087a56a8 +0x1c8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a56ad +0x1cd:  mov    -0x44(%ebp),%eax
087a56b0 +0x1d0:  mov    0x4(%eax),%edx
087a56b3 +0x1d3:  mov    0x20(%edi),%eax
087a56b6 +0x1d6:  movl   $0x0,0x4(%esp)
087a56be +0x1de:  mov    %edx,(%esp)
087a56c1 +0x1e1:  shl    $0x2,%eax
087a56c4 +0x1e4:  mov    %edx,-0x48(%ebp)
087a56c7 +0x1e7:  mov    %eax,0x8(%esp)
087a56cb +0x1eb:  call   0807dcc0 <_init+0x5b8>
087a56d0 +0x1f0:  mov    -0x48(%ebp),%edx
087a56d3 +0x1f3:  mov    %esi,%eax
087a56d5 +0x1f5:  mov    %al,0x4(%esp)
087a56d9 +0x1f9:  mov    %edx,(%esp)
087a56dc +0x1fc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a56e1 +0x201:  mov    %edi,(%esp)
087a56e4 +0x204:  movb   $0x0,0x4(%esp)
087a56e9 +0x209:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a56ee +0x20e:  mov    -0x2c(%ebp),%eax
087a56f1 +0x211:  add    $0x4c,%esp
087a56f4 +0x214:  pop    %ebx
087a56f5 +0x215:  pop    %esi
087a56f6 +0x216:  pop    %edi
087a56f7 +0x217:  pop    %ebp
087a56f8 +0x218:  ret
087a56f9 +0x219:  nop
087a56fa +0x21a:  nop
087a56fb +0x21b:  nop
087a56fc +0x21c:  nop
087a56fd +0x21d:  nop
087a56fe +0x21e:  nop
087a56ff +0x21f:  nop
087a5700 +0x220:  call   087245c4 <__i686.get_pc_thunk.cx>
087a5705 +0x225:  add    $0xbc7493,%ecx
087a570b +0x22b:  push   %ebp
087a570c +0x22c:  mov    %esp,%ebp
087a570e +0x22e:  mov    -0x194(%ecx),%eax
087a5714 +0x234:  lea    0x8(%eax),%edx
087a5717 +0x237:  mov    0x8(%ebp),%eax
087a571a +0x23a:  mov    %edx,(%eax)
087a571c +0x23c:  pop    %ebp
087a571d +0x23d:  ret
087a571e +0x23e:  nop
087a571f +0x23f:  nop
087a5720 +0x240:  call   087245c4 <__i686.get_pc_thunk.cx>
087a5725 +0x245:  add    $0xbc7473,%ecx
087a572b +0x24b:  push   %ebp
087a572c +0x24c:  mov    %esp,%ebp
087a572e +0x24e:  mov    0x8(%ebp),%eax
087a5731 +0x251:  mov    -0x194(%ecx),%edx
087a5737 +0x257:  add    $0x8,%edx
087a573a +0x25a:  mov    %edx,0x4(%eax)
087a573d +0x25d:  mov    %edx,(%eax)
087a573f +0x25f:  pop    %ebp
087a5740 +0x260:  ret
087a5741 +0x261:  nop
087a5742 +0x262:  nop
087a5743 +0x263:  nop
087a5744 +0x264:  nop
087a5745 +0x265:  nop
087a5746 +0x266:  nop
087a5747 +0x267:  nop
087a5748 +0x268:  nop
087a5749 +0x269:  nop
087a574a +0x26a:  nop
087a574b +0x26b:  nop
087a574c +0x26c:  nop
087a574d +0x26d:  nop
087a574e +0x26e:  nop
087a574f +0x26f:  nop
087a5750 +0x270:  push   %ebp
087a5751 +0x271:  mov    %esp,%ebp
087a5753 +0x273:  push   %ebx
087a5754 +0x274:  call   08722df8 <__i686.get_pc_thunk.bx>
087a5759 +0x279:  add    $0xbc743f,%ebx
087a575f +0x27f:  sub    $0x14,%esp
087a5762 +0x282:  mov    -0x194(%ebx),%eax
087a5768 +0x288:  lea    0x8(%eax),%edx
087a576b +0x28b:  mov    0x8(%ebp),%eax
087a576e +0x28e:  mov    %edx,(%eax)
087a5770 +0x290:  lea    -0x65cc78(%ebx),%eax
087a5776 +0x296:  mov    %eax,0xc(%esp)
087a577a +0x29a:  lea    -0x65ce70(%ebx),%eax
087a5780 +0x2a0:  mov    %eax,0x4(%esp)
087a5784 +0x2a4:  lea    -0x66862b(%ebx),%eax
087a578a +0x2aa:  movl   $0x58,0x8(%esp)
087a5792 +0x2b2:  mov    %eax,(%esp)
087a5795 +0x2b5:  call   0807dc50 <_init+0x548>
087a579a +0x2ba:  nop
087a579b +0x2bb:  nop
087a579c +0x2bc:  nop
087a579d +0x2bd:  nop
087a579e +0x2be:  nop
087a579f +0x2bf:  nop
087a57a0 +0x2c0:  push   %ebp
087a57a1 +0x2c1:  mov    %esp,%ebp
087a57a3 +0x2c3:  push   %ebx
087a57a4 +0x2c4:  call   08722df8 <__i686.get_pc_thunk.bx>
087a57a9 +0x2c9:  add    $0xbc73ef,%ebx
087a57af +0x2cf:  sub    $0x14,%esp
087a57b2 +0x2d2:  mov    0x8(%ebp),%eax
087a57b5 +0x2d5:  mov    -0x194(%ebx),%edx
087a57bb +0x2db:  add    $0x8,%edx
087a57be +0x2de:  mov    %edx,0x4(%eax)
087a57c1 +0x2e1:  mov    %edx,(%eax)
087a57c3 +0x2e3:  lea    -0x65cc78(%ebx),%eax
087a57c9 +0x2e9:  mov    %eax,0xc(%esp)
087a57cd +0x2ed:  lea    -0x65ce70(%ebx),%eax
087a57d3 +0x2f3:  mov    %eax,0x4(%esp)
087a57d7 +0x2f7:  lea    -0x66862b(%ebx),%eax
087a57dd +0x2fd:  movl   $0x58,0x8(%esp)
087a57e5 +0x305:  mov    %eax,(%esp)
087a57e8 +0x308:  call   0807dc50 <_init+0x548>
087a57ed +0x30d:  nop
087a57ee +0x30e:  nop
087a57ef +0x30f:  nop
087a57f0 +0x310:  push   %ebp
087a57f1 +0x311:  mov    %esp,%ebp
087a57f3 +0x313:  sub    $0x28,%esp
087a57f6 +0x316:  mov    %ebx,-0xc(%ebp)
087a57f9 +0x319:  call   08722df8 <__i686.get_pc_thunk.bx>
087a57fe +0x31e:  add    $0xbc739a,%ebx
087a5804 +0x324:  mov    %esi,-0x8(%ebp)
087a5807 +0x327:  mov    0x8(%ebp),%esi
087a580a +0x32a:  mov    %edi,-0x4(%ebp)
087a580d +0x32d:  mov    0x10(%esi),%edi
087a5810 +0x330:  mov    -0x398(%ebx),%eax
087a5816 +0x336:  add    $0x8,%eax
087a5819 +0x339:  mov    %eax,(%esi)
087a581b +0x33b:  mov    0xc(%esi),%eax
087a581e +0x33e:  mov    %edi,(%esp)
087a5821 +0x341:  movl   $0x0,0x4(%esp)
087a5829 +0x349:  shl    $0x2,%eax
087a582c +0x34c:  mov    %eax,0x8(%esp)
087a5830 +0x350:  call   0807dcc0 <_init+0x5b8>
087a5835 +0x355:  mov    %edi,(%esp)
087a5838 +0x358:  movb   $0x0,0x4(%esp)
087a583d +0x35d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a5842 +0x362:  mov    -0x194(%ebx),%eax
087a5848 +0x368:  add    $0x8,%eax
087a584b +0x36b:  mov    %eax,0x4(%esi)
087a584e +0x36e:  mov    %eax,(%esi)
087a5850 +0x370:  mov    -0xc(%ebp),%ebx
087a5853 +0x373:  mov    -0x8(%ebp),%esi
087a5856 +0x376:  mov    -0x4(%ebp),%edi
087a5859 +0x379:  mov    %ebp,%esp
087a585b +0x37b:  pop    %ebp
087a585c +0x37c:  ret
087a585d +0x37d:  nop
087a585e +0x37e:  nop
087a585f +0x37f:  nop
087a5860 +0x380:  push   %ebp
087a5861 +0x381:  mov    %esp,%ebp
087a5863 +0x383:  sub    $0x28,%esp
087a5866 +0x386:  mov    %ebx,-0xc(%ebp)
087a5869 +0x389:  call   08722df8 <__i686.get_pc_thunk.bx>
087a586e +0x38e:  add    $0xbc732a,%ebx
087a5874 +0x394:  mov    %esi,-0x8(%ebp)
087a5877 +0x397:  mov    0x8(%ebp),%esi
087a587a +0x39a:  mov    %edi,-0x4(%ebp)
087a587d +0x39d:  mov    0x10(%esi),%edi
087a5880 +0x3a0:  mov    -0x398(%ebx),%eax
087a5886 +0x3a6:  add    $0x8,%eax
087a5889 +0x3a9:  mov    %eax,(%esi)
087a588b +0x3ab:  mov    0xc(%esi),%eax
087a588e +0x3ae:  movl   $0x0,0x4(%esp)
087a5896 +0x3b6:  mov    %edi,(%esp)
087a5899 +0x3b9:  shl    $0x2,%eax
087a589c +0x3bc:  mov    %eax,0x8(%esp)
087a58a0 +0x3c0:  call   0807dcc0 <_init+0x5b8>
087a58a5 +0x3c5:  movb   $0x0,0x4(%esp)
087a58aa +0x3ca:  mov    %edi,(%esp)
087a58ad +0x3cd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a58b2 +0x3d2:  mov    -0x194(%ebx),%eax
087a58b8 +0x3d8:  add    $0x8,%eax
087a58bb +0x3db:  mov    %eax,0x4(%esi)
087a58be +0x3de:  mov    %eax,(%esi)
087a58c0 +0x3e0:  lea    -0x65cc78(%ebx),%eax
087a58c6 +0x3e6:  mov    %eax,0xc(%esp)
087a58ca +0x3ea:  lea    -0x65ce70(%ebx),%eax
087a58d0 +0x3f0:  mov    %eax,0x4(%esp)
087a58d4 +0x3f4:  lea    -0x66862b(%ebx),%eax
087a58da +0x3fa:  movl   $0x58,0x8(%esp)
087a58e2 +0x402:  mov    %eax,(%esp)
087a58e5 +0x405:  call   0807dc50 <_init+0x548>
087a58ea +0x40a:  nop
087a58eb +0x40b:  nop
087a58ec +0x40c:  nop
087a58ed +0x40d:  nop
087a58ee +0x40e:  nop
087a58ef +0x40f:  nop
```

## 反编译 C

```c
// TaoCrypt::AbstractEuclideanDomain::Gcd @ 0x87a54e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractEuclideanDomain::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

undefined4 __thiscall
TaoCrypt::AbstractEuclideanDomain::Gcd
          (AbstractEuclideanDomain *this,Integer *param_1,Integer *param_2)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  Integer *this_00;
  Integer *pIVar6;
  undefined4 uVar7;
  uint in_stack_ffffffa8;
  uint uVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  void *local_28;
  
  this_00 = operator_new__(0x30,in_stack_ffffffa8 & 0xffffff00);
  Integer::Integer((Integer *)&local_2c);
  Integer::Integer(this_00,(Integer *)&local_2c);
  Integer::Integer(this_00 + 0x10,(Integer *)&local_2c);
  Integer::Integer(this_00 + 0x20,(Integer *)&local_2c);
  uVar8 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar8 & 0xffffff00);
  Integer::operator=(this_00,param_2);
  Integer::operator=(this_00 + 0x10,param_1);
  local_3c = 2;
  local_34 = 1;
  local_38 = 0;
  while( true ) {
    iVar4 = local_34;
    iVar3 = local_38;
    pcVar1 = *(code **)(*(int *)this + 8);
    uVar7 = (**(code **)(*(int *)this + 0xc))(this);
    cVar5 = (*pcVar1)(this,this_00 + local_34 * 0x10,uVar7);
    if (cVar5 != '\0') break;
    pIVar6 = (Integer *)
             (**(code **)(*(int *)this + 100))
                       (this,this_00 + local_38 * 0x10,this_00 + local_34 * 0x10);
    Integer::operator=(this_00 + local_3c * 0x10,pIVar6);
    local_34 = local_3c;
    local_38 = iVar4;
    local_3c = iVar3;
  }
  uVar7 = Integer::operator=((Integer *)(this + 0xc),this_00 + local_38 * 0x10);
  pvVar2 = *(void **)(this_00 + 4);
  uVar8 = 0;
  memset(pvVar2,0,*(int *)this_00 << 2);
  operator_delete__(pvVar2,uVar8 & 0xffffff00);
  pvVar2 = *(void **)(this_00 + 0x14);
  uVar8 = 0;
  memset(pvVar2,0,*(int *)(this_00 + 0x10) << 2);
  operator_delete__(pvVar2,uVar8 & 0xffffff00);
  pvVar2 = *(void **)(this_00 + 0x24);
  uVar8 = 0;
  memset(pvVar2,0,*(int *)(this_00 + 0x20) << 2);
  uVar8 = uVar8 & 0xffffff00;
  operator_delete__(pvVar2,uVar8);
  operator_delete__(this_00,uVar8 & 0xffffff00);
  return uVar7;
}
```
