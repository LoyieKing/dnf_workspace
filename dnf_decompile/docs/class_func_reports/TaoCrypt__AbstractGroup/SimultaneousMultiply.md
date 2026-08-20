# SimultaneousMultiply

`_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j`

`TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractGroup` | `0x087a48a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a48a0  _ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j
#           TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
# range [0x087a48a0, 0x087a548c]
087a48a0 +0x000:  push   %ebp
087a48a1 +0x001:  mov    %esp,%ebp
087a48a3 +0x003:  push   %edi
087a48a4 +0x004:  push   %esi
087a48a5 +0x005:  push   %ebx
087a48a6 +0x006:  sub    $0xac,%esp
087a48ac +0x00c:  mov    0x8(%ebp),%edi
087a48af +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a48b4 +0x014:  add    $0xbc82e4,%ebx
087a48ba +0x01a:  mov    0x18(%ebp),%edx
087a48bd +0x01d:  movb   $0x0,0x4(%esp)
087a48c2 +0x022:  lea    (%edx,%edx,2),%eax
087a48c5 +0x025:  shl    $0x2,%eax
087a48c8 +0x028:  mov    %eax,-0x5c(%ebp)
087a48cb +0x02b:  mov    %eax,(%esp)
087a48ce +0x02e:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a48d3 +0x033:  mov    %eax,-0x90(%ebp)
087a48d9 +0x039:  mov    0x18(%ebp),%eax
087a48dc +0x03c:  mov    -0x90(%ebp),%esi
087a48e2 +0x042:  test   %eax,%eax
087a48e4 +0x044:  mov    %esi,-0xa4(%ebp)
087a48ea +0x04a:  je     087a492b <+0x8b>
087a48ec +0x04c:  mov    %edi,-0x6c(%ebp)
087a48ef +0x04f:  mov    %eax,%edi
087a48f1 +0x051:  lea    0x0(%esi,%eiz,1),%esi
087a48f8 +0x058:  movb   $0x0,0x4(%esp)
087a48fd +0x05d:  movl   $0x0,(%esp)
087a4904 +0x064:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a4909 +0x069:  mov    %eax,(%esi)
087a490b +0x06b:  mov    %eax,0x8(%esi)
087a490e +0x06e:  mov    %eax,0x4(%esi)
087a4911 +0x071:  add    $0xc,%esi
087a4914 +0x074:  sub    $0x1,%edi
087a4917 +0x077:  jne    087a48f8 <+0x58>
087a4919 +0x079:  mov    -0x90(%ebp),%ecx
087a491f +0x07f:  add    -0x5c(%ebp),%ecx
087a4922 +0x082:  mov    -0x6c(%ebp),%edi
087a4925 +0x085:  mov    %ecx,-0xa4(%ebp)
087a492b +0x08b:  movb   $0x0,0x4(%esp)
087a4930 +0x090:  movl   $0x0,(%esp)
087a4937 +0x097:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a493c +0x09c:  mov    0x18(%ebp),%esi
087a493f +0x09f:  test   %esi,%esi
087a4941 +0x0a1:  jne    087a4dbd <+0x51d>
087a4947 +0x0a7:  movl   $0x0,-0x80(%ebp)
087a494e +0x0ae:  movl   $0x0,-0x78(%ebp)
087a4955 +0x0b5:  movl   $0x0,-0x6c(%ebp)
087a495c +0x0bc:  mov    0x10(%ebp),%eax
087a495f +0x0bf:  lea    -0x28(%ebp),%ecx
087a4962 +0x0c2:  mov    %ecx,-0x74(%ebp)
087a4965 +0x0c5:  mov    %ecx,(%esp)
087a4968 +0x0c8:  mov    %eax,0x4(%esp)
087a496c +0x0cc:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4971 +0x0d1:  mov    0x18(%ebp),%ecx
087a4974 +0x0d4:  test   %ecx,%ecx
087a4976 +0x0d6:  je     087a4c7b <+0x3db>
087a497c +0x0dc:  movl   $0x0,-0x7c(%ebp)
087a4983 +0x0e3:  mov    %edi,-0x70(%ebp)
087a4986 +0x0e6:  movl   $0x0,-0x60(%ebp)
087a498d +0x0ed:  movb   $0x0,-0x68(%ebp)
087a4991 +0x0f1:  movl   $0x0,-0x64(%ebp)
087a4998 +0x0f8:  jmp    087a49c5 <+0x125>
087a499a +0x0fa:  lea    0x0(%esi),%esi
087a49a0 +0x100:  cmpb   $0x0,-0x68(%ebp)
087a49a4 +0x104:  jne    087a49b1 <+0x111>
087a49a6 +0x106:  movzbl 0x2f(%esi),%ecx
087a49aa +0x10a:  mov    %cl,-0x68(%ebp)
087a49ad +0x10d:  xorb   $0x1,-0x68(%ebp)
087a49b1 +0x111:  addl   $0x1,-0x64(%ebp)
087a49b5 +0x115:  mov    -0x64(%ebp),%eax
087a49b8 +0x118:  addl   $0xc,-0x60(%ebp)
087a49bc +0x11c:  cmp    %eax,0x18(%ebp)
087a49bf +0x11f:  jbe    087a4ad0 <+0x230>
087a49c5 +0x125:  mov    -0x60(%ebp),%eax
087a49c8 +0x128:  mov    -0x78(%ebp),%edx
087a49cb +0x12b:  lea    (%edx,%eax,4),%esi
087a49ce +0x12e:  cmpb   $0x0,0x2f(%esi)
087a49d2 +0x132:  jne    087a49a0 <+0x100>
087a49d4 +0x134:  mov    -0x7c(%ebp),%ecx
087a49d7 +0x137:  cmp    %ecx,0x24(%esi)
087a49da +0x13a:  jne    087a49a0 <+0x100>
087a49dc +0x13c:  mov    0x28(%esi),%edi
087a49df +0x13f:  mov    -0x90(%ebp),%edx
087a49e5 +0x145:  shr    %edi
087a49e7 +0x147:  shl    $0x4,%edi
087a49ea +0x14a:  add    (%edx,%eax,1),%edi
087a49ed +0x14d:  cmpb   $0x0,0x2d(%esi)
087a49f1 +0x151:  je     087a4aa0 <+0x200>
087a49f7 +0x157:  mov    -0x70(%ebp),%ecx
087a49fa +0x15a:  mov    (%ecx),%eax
087a49fc +0x15c:  mov    -0x74(%ebp),%ecx
087a49ff +0x15f:  mov    0x24(%eax),%edx
087a4a02 +0x162:  mov    %ecx,0x4(%esp)
087a4a06 +0x166:  mov    %edx,-0x5c(%ebp)
087a4a09 +0x169:  mov    -0x70(%ebp),%edx
087a4a0c +0x16c:  mov    %edx,(%esp)
087a4a0f +0x16f:  call   *0x14(%eax)
087a4a12 +0x172:  mov    -0x70(%ebp),%ecx
087a4a15 +0x175:  mov    %edi,0x4(%esp)
087a4a19 +0x179:  mov    %ecx,(%esp)
087a4a1c +0x17c:  mov    %eax,0x8(%esp)
087a4a20 +0x180:  call   *-0x5c(%ebp)
087a4a23 +0x183:  mov    %esi,(%esp)
087a4a26 +0x186:  xor    %edi,%edi
087a4a28 +0x188:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
087a4a2d +0x18d:  shl    $0x5,%eax
087a4a30 +0x190:  mov    %eax,-0x5c(%ebp)
087a4a33 +0x193:  cmpb   $0x0,0x2e(%esi)
087a4a37 +0x197:  jne    087a4a3c <+0x19c>
087a4a39 +0x199:  mov    0x20(%esi),%edi
087a4a3c +0x19c:  movb   $0x0,0x2e(%esi)
087a4a40 +0x1a0:  jmp    087a4a50 <+0x1b0>
087a4a42 +0x1a2:  lea    0x0(%esi),%esi
087a4a48 +0x1a8:  cmp    %edi,-0x5c(%ebp)
087a4a4b +0x1ab:  jbe    087a4ac0 <+0x220>
087a4a4d +0x1ad:  add    $0x1,%edi
087a4a50 +0x1b0:  mov    %edi,0x4(%esp)
087a4a54 +0x1b4:  mov    %esi,(%esp)
087a4a57 +0x1b7:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
087a4a5c +0x1bc:  test   %al,%al
087a4a5e +0x1be:  je     087a4a48 <+0x1a8>
087a4a60 +0x1c0:  mov    %edi,0x4(%esp)
087a4a64 +0x1c4:  mov    %esi,(%esp)
087a4a67 +0x1c7:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
087a4a6c +0x1cc:  mov    0x20(%esi),%ecx
087a4a6f +0x1cf:  mov    $0x1,%eax
087a4a74 +0x1d4:  add    %edi,0x24(%esi)
087a4a77 +0x1d7:  mov    %esi,(%esp)
087a4a7a +0x1da:  shl    %cl,%eax
087a4a7c +0x1dc:  mov    %eax,0x4(%esp)
087a4a80 +0x1e0:  call   0875d5c0 <_ZNK8TaoCrypt7Integer6ModuloEj>  ; TaoCrypt::Integer::Modulo(unsigned int) const
087a4a85 +0x1e5:  cmpb   $0x0,0x2c(%esi)
087a4a89 +0x1e9:  mov    %eax,0x28(%esi)
087a4a8c +0x1ec:  jne    087a4c10 <+0x370>
087a4a92 +0x1f2:  movb   $0x0,0x2d(%esi)
087a4a96 +0x1f6:  jmp    087a49a0 <+0x100>
087a4a9b +0x1fb:  nop
087a4a9c +0x1fc:  lea    0x0(%esi,%eiz,1),%esi
087a4aa0 +0x200:  mov    -0x70(%ebp),%edx
087a4aa3 +0x203:  mov    -0x74(%ebp),%ecx
087a4aa6 +0x206:  mov    (%edx),%eax
087a4aa8 +0x208:  mov    %ecx,0x8(%esp)
087a4aac +0x20c:  mov    %edi,0x4(%esp)
087a4ab0 +0x210:  mov    %edx,(%esp)
087a4ab3 +0x213:  call   *0x24(%eax)
087a4ab6 +0x216:  jmp    087a4a23 <+0x183>
087a4abb +0x21b:  nop
087a4abc +0x21c:  lea    0x0(%esi,%eiz,1),%esi
087a4ac0 +0x220:  movb   $0x1,0x2f(%esi)
087a4ac4 +0x224:  jmp    087a49a0 <+0x100>
087a4ac9 +0x229:  lea    0x0(%esi,%eiz,1),%esi
087a4ad0 +0x230:  cmpb   $0x0,-0x68(%ebp)
087a4ad4 +0x234:  jne    087a4c51 <+0x3b1>
087a4ada +0x23a:  mov    0xc(%ebp),%edx
087a4add +0x23d:  mov    -0x70(%ebp),%edi
087a4ae0 +0x240:  movl   $0x0,-0x68(%ebp)
087a4ae7 +0x247:  movl   $0x0,-0x70(%ebp)
087a4aee +0x24e:  mov    -0x90(%ebp),%ecx
087a4af4 +0x254:  add    $0x10,%edx
087a4af7 +0x257:  add    -0x70(%ebp),%ecx
087a4afa +0x25a:  mov    %edx,-0x74(%ebp)
087a4afd +0x25d:  mov    %ecx,-0x60(%ebp)
087a4b00 +0x260:  mov    (%ecx),%edx
087a4b02 +0x262:  mov    0x4(%ecx),%eax
087a4b05 +0x265:  sub    %edx,%eax
087a4b07 +0x267:  and    $0xfffffff0,%eax
087a4b0a +0x26a:  lea    -0x10(%edx,%eax,1),%eax
087a4b0e +0x26e:  mov    %eax,0x4(%esp)
087a4b12 +0x272:  mov    0xc(%ebp),%eax
087a4b15 +0x275:  mov    %eax,(%esp)
087a4b18 +0x278:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4b1d +0x27d:  mov    -0x60(%ebp),%edx
087a4b20 +0x280:  mov    (%edx),%ecx
087a4b22 +0x282:  mov    0x4(%edx),%esi
087a4b25 +0x285:  sub    %ecx,%esi
087a4b27 +0x287:  sar    $0x4,%esi
087a4b2a +0x28a:  cmp    $0x1,%esi
087a4b2d +0x28d:  jbe    087a4bf0 <+0x350>
087a4b33 +0x293:  lea    -0x2(%esi),%eax
087a4b36 +0x296:  mov    %eax,-0x5c(%ebp)
087a4b39 +0x299:  mov    -0x5c(%ebp),%edx
087a4b3c +0x29c:  mov    %ecx,%eax
087a4b3e +0x29e:  test   %edx,%edx
087a4b40 +0x2a0:  jle    087a4ba6 <+0x306>
087a4b42 +0x2a2:  lea    -0x1(%esi),%edx
087a4b45 +0x2a5:  shl    $0x4,%esi
087a4b48 +0x2a8:  shl    $0x4,%edx
087a4b4b +0x2ab:  sub    $0x20,%esi
087a4b4e +0x2ae:  jmp    087a4b55 <+0x2b5>
087a4b50 +0x2b0:  mov    -0x60(%ebp),%ecx
087a4b53 +0x2b3:  mov    (%ecx),%eax
087a4b55 +0x2b5:  lea    (%eax,%edx,1),%ecx
087a4b58 +0x2b8:  add    %esi,%eax
087a4b5a +0x2ba:  mov    %edx,-0xa8(%ebp)
087a4b60 +0x2c0:  mov    %ecx,0x8(%esp)
087a4b64 +0x2c4:  mov    %eax,0x4(%esp)
087a4b68 +0x2c8:  mov    %edi,(%esp)
087a4b6b +0x2cb:  mov    (%edi),%ecx
087a4b6d +0x2cd:  call   *0x24(%ecx)
087a4b70 +0x2d0:  mov    -0x60(%ebp),%ecx
087a4b73 +0x2d3:  mov    %esi,%eax
087a4b75 +0x2d5:  sub    $0x10,%esi
087a4b78 +0x2d8:  add    (%ecx),%eax
087a4b7a +0x2da:  mov    %edi,(%esp)
087a4b7d +0x2dd:  mov    %eax,0x8(%esp)
087a4b81 +0x2e1:  mov    0xc(%ebp),%eax
087a4b84 +0x2e4:  mov    %eax,0x4(%esp)
087a4b88 +0x2e8:  mov    (%edi),%ecx
087a4b8a +0x2ea:  call   *0x24(%ecx)
087a4b8d +0x2ed:  mov    -0xa8(%ebp),%edx
087a4b93 +0x2f3:  subl   $0x1,-0x5c(%ebp)
087a4b97 +0x2f7:  mov    -0x5c(%ebp),%ecx
087a4b9a +0x2fa:  sub    $0x10,%edx
087a4b9d +0x2fd:  test   %ecx,%ecx
087a4b9f +0x2ff:  jg     087a4b50 <+0x2b0>
087a4ba1 +0x301:  mov    -0x60(%ebp),%edx
087a4ba4 +0x304:  mov    (%edx),%eax
087a4ba6 +0x306:  mov    (%edi),%ecx
087a4ba8 +0x308:  lea    0x10(%eax),%edx
087a4bab +0x30b:  mov    %edx,0x8(%esp)
087a4baf +0x30f:  mov    %eax,0x4(%esp)
087a4bb3 +0x313:  mov    %edi,(%esp)
087a4bb6 +0x316:  call   *0x24(%ecx)
087a4bb9 +0x319:  mov    (%edi),%eax
087a4bbb +0x31b:  mov    -0x60(%ebp),%edx
087a4bbe +0x31e:  mov    0x10(%eax),%ecx
087a4bc1 +0x321:  mov    %ecx,-0x5c(%ebp)
087a4bc4 +0x324:  mov    0xc(%ebp),%ecx
087a4bc7 +0x327:  mov    (%edx),%esi
087a4bc9 +0x329:  mov    %edi,(%esp)
087a4bcc +0x32c:  mov    %ecx,0x4(%esp)
087a4bd0 +0x330:  call   *0x1c(%eax)
087a4bd3 +0x333:  mov    %esi,0x8(%esp)
087a4bd7 +0x337:  mov    %edi,(%esp)
087a4bda +0x33a:  mov    %eax,0x4(%esp)
087a4bde +0x33e:  call   *-0x5c(%ebp)
087a4be1 +0x341:  mov    %eax,0x4(%esp)
087a4be5 +0x345:  mov    0xc(%ebp),%eax
087a4be8 +0x348:  mov    %eax,(%esp)
087a4beb +0x34b:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4bf0 +0x350:  addl   $0x1,-0x68(%ebp)
087a4bf4 +0x354:  mov    -0x68(%ebp),%edx
087a4bf7 +0x357:  addl   $0xc,-0x70(%ebp)
087a4bfb +0x35b:  cmp    %edx,0x18(%ebp)
087a4bfe +0x35e:  jbe    087a4c7b <+0x3db>
087a4c00 +0x360:  mov    -0x74(%ebp),%ecx
087a4c03 +0x363:  mov    %ecx,0xc(%ebp)
087a4c06 +0x366:  mov    %ecx,%edx
087a4c08 +0x368:  jmp    087a4aee <+0x24e>
087a4c0d +0x36d:  lea    0x0(%esi),%esi
087a4c10 +0x370:  mov    0x20(%esi),%eax
087a4c13 +0x373:  mov    %esi,(%esp)
087a4c16 +0x376:  mov    %eax,0x4(%esp)
087a4c1a +0x37a:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
087a4c1f +0x37f:  test   %al,%al
087a4c21 +0x381:  je     087a4a92 <+0x1f2>
087a4c27 +0x387:  mov    0x20(%esi),%ecx
087a4c2a +0x38a:  mov    $0x1,%edx
087a4c2f +0x38f:  movb   $0x1,0x2d(%esi)
087a4c33 +0x393:  lea    0x10(%esi),%eax
087a4c36 +0x396:  shl    %cl,%edx
087a4c38 +0x398:  mov    %edx,%ecx
087a4c3a +0x39a:  sub    0x28(%esi),%ecx
087a4c3d +0x39d:  mov    %ecx,0x28(%esi)
087a4c40 +0x3a0:  mov    %eax,0x4(%esp)
087a4c44 +0x3a4:  mov    %esi,(%esp)
087a4c47 +0x3a7:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
087a4c4c +0x3ac:  jmp    087a49a0 <+0x100>
087a4c51 +0x3b1:  mov    -0x70(%ebp),%edx
087a4c54 +0x3b4:  mov    -0x74(%ebp),%ecx
087a4c57 +0x3b7:  mov    (%edx),%eax
087a4c59 +0x3b9:  mov    %ecx,0x4(%esp)
087a4c5d +0x3bd:  mov    %edx,(%esp)
087a4c60 +0x3c0:  call   *0x1c(%eax)
087a4c63 +0x3c3:  mov    %eax,0x4(%esp)
087a4c67 +0x3c7:  mov    -0x74(%ebp),%eax
087a4c6a +0x3ca:  mov    %eax,(%esp)
087a4c6d +0x3cd:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a4c72 +0x3d2:  addl   $0x1,-0x7c(%ebp)
087a4c76 +0x3d6:  jmp    087a4986 <+0xe6>
087a4c7b +0x3db:  mov    -0x28(%ebp),%eax
087a4c7e +0x3de:  mov    -0x24(%ebp),%esi
087a4c81 +0x3e1:  movl   $0x0,0x4(%esp)
087a4c89 +0x3e9:  shl    $0x2,%eax
087a4c8c +0x3ec:  mov    %eax,0x8(%esp)
087a4c90 +0x3f0:  mov    %esi,(%esp)
087a4c93 +0x3f3:  call   0807dcc0 <_init+0x5b8>
087a4c98 +0x3f8:  movb   $0x0,0x4(%esp)
087a4c9d +0x3fd:  mov    %esi,(%esp)
087a4ca0 +0x400:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4ca5 +0x405:  mov    -0x6c(%ebp),%eax
087a4ca8 +0x408:  cmp    %eax,-0x78(%ebp)
087a4cab +0x40b:  je     087a4d0b <+0x46b>
087a4cad +0x40d:  mov    -0x78(%ebp),%esi
087a4cb0 +0x410:  mov    0x10(%esi),%eax
087a4cb3 +0x413:  mov    0x14(%esi),%edi
087a4cb6 +0x416:  movl   $0x0,0x4(%esp)
087a4cbe +0x41e:  shl    $0x2,%eax
087a4cc1 +0x421:  mov    %edi,(%esp)
087a4cc4 +0x424:  mov    %eax,0x8(%esp)
087a4cc8 +0x428:  call   0807dcc0 <_init+0x5b8>
087a4ccd +0x42d:  mov    %edi,(%esp)
087a4cd0 +0x430:  movb   $0x0,0x4(%esp)
087a4cd5 +0x435:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4cda +0x43a:  mov    (%esi),%eax
087a4cdc +0x43c:  mov    0x4(%esi),%edi
087a4cdf +0x43f:  add    $0x30,%esi
087a4ce2 +0x442:  movl   $0x0,0x4(%esp)
087a4cea +0x44a:  shl    $0x2,%eax
087a4ced +0x44d:  mov    %eax,0x8(%esp)
087a4cf1 +0x451:  mov    %edi,(%esp)
087a4cf4 +0x454:  call   0807dcc0 <_init+0x5b8>
087a4cf9 +0x459:  movb   $0x0,0x4(%esp)
087a4cfe +0x45e:  mov    %edi,(%esp)
087a4d01 +0x461:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4d06 +0x466:  cmp    %esi,-0x6c(%ebp)
087a4d09 +0x469:  jne    087a4cb0 <+0x410>
087a4d0b +0x46b:  mov    -0x80(%ebp),%edx
087a4d0e +0x46e:  movb   $0x0,0x4(%esp)
087a4d13 +0x473:  mov    %edx,(%esp)
087a4d16 +0x476:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4d1b +0x47b:  mov    -0xa4(%ebp),%ecx
087a4d21 +0x481:  cmp    %ecx,-0x90(%ebp)
087a4d27 +0x487:  je     087a4d9f <+0x4ff>
087a4d29 +0x489:  mov    -0x90(%ebp),%eax
087a4d2f +0x48f:  mov    %eax,-0x6c(%ebp)
087a4d32 +0x492:  mov    %eax,%ecx
087a4d34 +0x494:  lea    0x0(%esi,%eiz,1),%esi
087a4d38 +0x498:  mov    -0x6c(%ebp),%edx
087a4d3b +0x49b:  mov    0x4(%edx),%edx
087a4d3e +0x49e:  mov    %edx,-0x5c(%ebp)
087a4d41 +0x4a1:  mov    (%ecx),%esi
087a4d43 +0x4a3:  cmp    %esi,%edx
087a4d45 +0x4a5:  je     087a4d83 <+0x4e3>
087a4d47 +0x4a7:  nop
087a4d48 +0x4a8:  mov    (%esi),%eax
087a4d4a +0x4aa:  mov    0x4(%esi),%edi
087a4d4d +0x4ad:  add    $0x10,%esi
087a4d50 +0x4b0:  movl   $0x0,0x4(%esp)
087a4d58 +0x4b8:  shl    $0x2,%eax
087a4d5b +0x4bb:  mov    %eax,0x8(%esp)
087a4d5f +0x4bf:  mov    %edi,(%esp)
087a4d62 +0x4c2:  call   0807dcc0 <_init+0x5b8>
087a4d67 +0x4c7:  movb   $0x0,0x4(%esp)
087a4d6c +0x4cc:  mov    %edi,(%esp)
087a4d6f +0x4cf:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4d74 +0x4d4:  cmp    %esi,-0x5c(%ebp)
087a4d77 +0x4d7:  jne    087a4d48 <+0x4a8>
087a4d79 +0x4d9:  mov    -0x6c(%ebp),%eax
087a4d7c +0x4dc:  mov    (%eax),%eax
087a4d7e +0x4de:  mov    %eax,-0x5c(%ebp)
087a4d81 +0x4e1:  mov    %eax,%edx
087a4d83 +0x4e3:  movb   $0x0,0x4(%esp)
087a4d88 +0x4e8:  mov    %edx,(%esp)
087a4d8b +0x4eb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4d90 +0x4f0:  addl   $0xc,-0x6c(%ebp)
087a4d94 +0x4f4:  mov    -0x6c(%ebp),%ecx
087a4d97 +0x4f7:  cmp    %ecx,-0xa4(%ebp)
087a4d9d +0x4fd:  jne    087a4d38 <+0x498>
087a4d9f +0x4ff:  mov    -0x90(%ebp),%eax
087a4da5 +0x505:  movb   $0x0,0x4(%esp)
087a4daa +0x50a:  mov    %eax,(%esp)
087a4dad +0x50d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4db2 +0x512:  add    $0xac,%esp
087a4db8 +0x518:  pop    %ebx
087a4db9 +0x519:  pop    %esi
087a4dba +0x51a:  pop    %edi
087a4dbb +0x51b:  pop    %ebp
087a4dbc +0x51c:  ret
087a4dbd +0x51d:  imul   $0x30,0x18(%ebp),%esi
087a4dc1 +0x521:  movb   $0x0,0x4(%esp)
087a4dc6 +0x526:  mov    %esi,(%esp)
087a4dc9 +0x529:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a4dce +0x52e:  movb   $0x0,0x4(%esp)
087a4dd3 +0x533:  movl   $0x0,(%esp)
087a4dda +0x53a:  mov    %eax,-0xa8(%ebp)
087a4de0 +0x540:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4de5 +0x545:  mov    0x14(%ebp),%edx
087a4de8 +0x548:  mov    -0xa8(%ebp),%eax
087a4dee +0x54e:  cmpl   $0x1,0xc(%edx)
087a4df2 +0x552:  je     087a5430 <+0xb90>
087a4df8 +0x558:  lea    -0x58(%ebp),%edx
087a4dfb +0x55b:  add    %eax,%esi
087a4dfd +0x55d:  lea    -0x48(%ebp),%ecx
087a4e00 +0x560:  mov    %edx,-0x8c(%ebp)
087a4e06 +0x566:  mov    %edi,%edx
087a4e08 +0x568:  mov    %eax,-0x5c(%ebp)
087a4e0b +0x56b:  mov    %esi,-0x7c(%ebp)
087a4e0e +0x56e:  mov    %eax,-0x6c(%ebp)
087a4e11 +0x571:  movl   $0x0,-0x74(%ebp)
087a4e18 +0x578:  movl   $0x0,-0x84(%ebp)
087a4e22 +0x582:  mov    %ecx,-0x88(%ebp)
087a4e28 +0x588:  mov    %edi,-0x70(%ebp)
087a4e2b +0x58b:  nop
087a4e2c +0x58c:  lea    0x0(%esi,%eiz,1),%esi
087a4e30 +0x590:  mov    (%edx),%eax
087a4e32 +0x592:  mov    %edx,(%esp)
087a4e35 +0x595:  call   *0x18(%eax)
087a4e38 +0x598:  mov    0x14(%ebp),%ecx
087a4e3b +0x59b:  mov    %ecx,0x4(%esp)
087a4e3f +0x59f:  mov    %eax,%esi
087a4e41 +0x5a1:  mov    -0x8c(%ebp),%eax
087a4e47 +0x5a7:  mov    %eax,(%esp)
087a4e4a +0x5aa:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4e4f +0x5af:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
087a4e54 +0x5b4:  mov    -0x88(%ebp),%edx
087a4e5a +0x5ba:  mov    %edx,(%esp)
087a4e5d +0x5bd:  mov    %eax,0x4(%esp)
087a4e61 +0x5c1:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4e66 +0x5c6:  mov    0x14(%ebp),%eax
087a4e69 +0x5c9:  mov    %esi,%ecx
087a4e6b +0x5cb:  movl   $0x0,-0x38(%ebp)
087a4e72 +0x5d2:  movl   $0x0,-0x34(%ebp)
087a4e79 +0x5d9:  mov    %cl,-0x2c(%ebp)
087a4e7c +0x5dc:  movb   $0x1,-0x2a(%ebp)
087a4e80 +0x5e0:  movb   $0x0,-0x29(%ebp)
087a4e84 +0x5e4:  mov    %eax,(%esp)
087a4e87 +0x5e7:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
087a4e8c +0x5ec:  mov    $0x1,%edx
087a4e91 +0x5f1:  cmp    $0x11,%eax
087a4e94 +0x5f4:  jbe    087a4ec0 <+0x620>
087a4e96 +0x5f6:  cmp    $0x18,%eax
087a4e99 +0x5f9:  mov    $0x2,%dl
087a4e9b +0x5fb:  jbe    087a4ec0 <+0x620>
087a4e9d +0x5fd:  cmp    $0x46,%eax
087a4ea0 +0x600:  mov    $0x3,%dl
087a4ea2 +0x602:  jbe    087a4ec0 <+0x620>
087a4ea4 +0x604:  cmp    $0xc5,%eax
087a4ea9 +0x609:  mov    $0x4,%dl
087a4eab +0x60b:  jbe    087a4ec0 <+0x620>
087a4ead +0x60d:  cmp    $0x21b,%eax
087a4eb2 +0x612:  mov    $0x5,%dl
087a4eb4 +0x614:  jbe    087a4ec0 <+0x620>
087a4eb6 +0x616:  cmp    $0x59b,%eax
087a4ebb +0x61b:  sbb    %edx,%edx
087a4ebd +0x61d:  add    $0x7,%edx
087a4ec0 +0x620:  mov    %edx,-0x38(%ebp)
087a4ec3 +0x623:  mov    %edx,0x4(%esp)
087a4ec7 +0x627:  mov    -0x88(%ebp),%edx
087a4ecd +0x62d:  mov    %edx,(%esp)
087a4ed0 +0x630:  call   0875eda0 <_ZN8TaoCrypt7IntegerlSEj>  ; TaoCrypt::Integer::operator<<=(unsigned int)
087a4ed5 +0x635:  mov    -0x6c(%ebp),%ecx
087a4ed8 +0x638:  cmp    %ecx,-0x7c(%ebp)
087a4edb +0x63b:  je     087a529d <+0x9fd>
087a4ee1 +0x641:  mov    -0x8c(%ebp),%eax
087a4ee7 +0x647:  mov    %ecx,(%esp)
087a4eea +0x64a:  mov    %eax,0x4(%esp)
087a4eee +0x64e:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4ef3 +0x653:  mov    -0x6c(%ebp),%eax
087a4ef6 +0x656:  mov    -0x88(%ebp),%edx
087a4efc +0x65c:  add    $0x10,%eax
087a4eff +0x65f:  mov    %eax,(%esp)
087a4f02 +0x662:  mov    %edx,0x4(%esp)
087a4f06 +0x666:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a4f0b +0x66b:  mov    -0x6c(%ebp),%ecx
087a4f0e +0x66e:  mov    -0x38(%ebp),%eax
087a4f11 +0x671:  mov    %eax,0x20(%ecx)
087a4f14 +0x674:  mov    -0x34(%ebp),%eax
087a4f17 +0x677:  mov    %eax,0x24(%ecx)
087a4f1a +0x67a:  mov    -0x30(%ebp),%eax
087a4f1d +0x67d:  mov    %eax,0x28(%ecx)
087a4f20 +0x680:  movzbl -0x2c(%ebp),%eax
087a4f24 +0x684:  mov    %al,0x2c(%ecx)
087a4f27 +0x687:  movzbl -0x2b(%ebp),%eax
087a4f2b +0x68b:  mov    %al,0x2d(%ecx)
087a4f2e +0x68e:  movzbl -0x2a(%ebp),%eax
087a4f32 +0x692:  mov    %al,0x2e(%ecx)
087a4f35 +0x695:  movzbl -0x29(%ebp),%eax
087a4f39 +0x699:  mov    %al,0x2f(%ecx)
087a4f3c +0x69c:  mov    -0x5c(%ebp),%eax
087a4f3f +0x69f:  add    $0x30,%ecx
087a4f42 +0x6a2:  mov    %ecx,-0x6c(%ebp)
087a4f45 +0x6a5:  mov    %eax,-0x78(%ebp)
087a4f48 +0x6a8:  mov    -0x48(%ebp),%eax
087a4f4b +0x6ab:  xor    %edi,%edi
087a4f4d +0x6ad:  mov    -0x44(%ebp),%esi
087a4f50 +0x6b0:  movl   $0x0,0x4(%esp)
087a4f58 +0x6b8:  shl    $0x2,%eax
087a4f5b +0x6bb:  mov    %esi,(%esp)
087a4f5e +0x6be:  mov    %eax,0x8(%esp)
087a4f62 +0x6c2:  call   0807dcc0 <_init+0x5b8>
087a4f67 +0x6c7:  mov    %esi,(%esp)
087a4f6a +0x6ca:  movb   $0x0,0x4(%esp)
087a4f6f +0x6cf:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4f74 +0x6d4:  mov    -0x58(%ebp),%eax
087a4f77 +0x6d7:  mov    -0x54(%ebp),%esi
087a4f7a +0x6da:  movl   $0x0,0x4(%esp)
087a4f82 +0x6e2:  shl    $0x2,%eax
087a4f85 +0x6e5:  mov    %esi,(%esp)
087a4f88 +0x6e8:  mov    %eax,0x8(%esp)
087a4f8c +0x6ec:  call   0807dcc0 <_init+0x5b8>
087a4f91 +0x6f1:  mov    %esi,(%esp)
087a4f94 +0x6f4:  movb   $0x0,0x4(%esp)
087a4f99 +0x6f9:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a4f9e +0x6fe:  mov    -0x74(%ebp),%eax
087a4fa1 +0x701:  mov    -0x78(%ebp),%edx
087a4fa4 +0x704:  lea    (%edx,%eax,4),%esi
087a4fa7 +0x707:  mov    %esi,(%esp)
087a4faa +0x70a:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
087a4faf +0x70f:  shl    $0x5,%eax
087a4fb2 +0x712:  mov    %eax,-0x5c(%ebp)
087a4fb5 +0x715:  cmpb   $0x0,0x2e(%esi)
087a4fb9 +0x719:  jne    087a4fbe <+0x71e>
087a4fbb +0x71b:  mov    0x20(%esi),%edi
087a4fbe +0x71e:  movb   $0x0,0x2e(%esi)
087a4fc2 +0x722:  jmp    087a4fd4 <+0x734>
087a4fc4 +0x724:  lea    0x0(%esi,%eiz,1),%esi
087a4fc8 +0x728:  cmp    %edi,-0x5c(%ebp)
087a4fcb +0x72b:  jbe    087a5100 <+0x860>
087a4fd1 +0x731:  add    $0x1,%edi
087a4fd4 +0x734:  mov    %edi,0x4(%esp)
087a4fd8 +0x738:  mov    %esi,(%esp)
087a4fdb +0x73b:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
087a4fe0 +0x740:  test   %al,%al
087a4fe2 +0x742:  je     087a4fc8 <+0x728>
087a4fe4 +0x744:  mov    %edi,0x4(%esp)
087a4fe8 +0x748:  mov    %esi,(%esp)
087a4feb +0x74b:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
087a4ff0 +0x750:  mov    0x20(%esi),%ecx
087a4ff3 +0x753:  add    %edi,0x24(%esi)
087a4ff6 +0x756:  mov    $0x1,%edi
087a4ffb +0x75b:  mov    %edi,%eax
087a4ffd +0x75d:  mov    %esi,(%esp)
087a5000 +0x760:  shl    %cl,%eax
087a5002 +0x762:  mov    %eax,0x4(%esp)
087a5006 +0x766:  call   0875d5c0 <_ZNK8TaoCrypt7Integer6ModuloEj>  ; TaoCrypt::Integer::Modulo(unsigned int) const
087a500b +0x76b:  cmpb   $0x0,0x2c(%esi)
087a500f +0x76f:  mov    %eax,0x28(%esi)
087a5012 +0x772:  jne    087a5261 <+0x9c1>
087a5018 +0x778:  movb   $0x0,0x2d(%esi)
087a501c +0x77c:  mov    -0x70(%ebp),%ecx
087a501f +0x77f:  mov    (%ecx),%eax
087a5021 +0x781:  mov    %ecx,(%esp)
087a5024 +0x784:  call   *0xc(%eax)
087a5027 +0x787:  mov    %eax,-0x80(%ebp)
087a502a +0x78a:  mov    0x20(%esi),%ecx
087a502d +0x78d:  mov    -0x90(%ebp),%eax
087a5033 +0x793:  add    -0x74(%ebp),%eax
087a5036 +0x796:  movl   $0x1,-0x60(%ebp)
087a503d +0x79d:  sub    $0x1,%ecx
087a5040 +0x7a0:  shll   %cl,-0x60(%ebp)
087a5043 +0x7a3:  mov    %eax,-0x64(%ebp)
087a5046 +0x7a6:  mov    0x4(%eax),%edx
087a5049 +0x7a9:  mov    %edx,-0x5c(%ebp)
087a504c +0x7ac:  mov    (%eax),%edx
087a504e +0x7ae:  mov    -0x5c(%ebp),%eax
087a5051 +0x7b1:  sub    %edx,%eax
087a5053 +0x7b3:  sar    $0x4,%eax
087a5056 +0x7b6:  cmp    %eax,-0x60(%ebp)
087a5059 +0x7b9:  je     087a50c3 <+0x823>
087a505b +0x7bb:  jae    087a5110 <+0x870>
087a5061 +0x7c1:  mov    -0x60(%ebp),%eax
087a5064 +0x7c4:  mov    -0x5c(%ebp),%ecx
087a5067 +0x7c7:  shl    $0x4,%eax
087a506a +0x7ca:  lea    (%edx,%eax,1),%eax
087a506d +0x7cd:  cmp    %eax,%ecx
087a506f +0x7cf:  mov    %eax,%esi
087a5071 +0x7d1:  mov    %eax,-0x60(%ebp)
087a5074 +0x7d4:  je     087a50b2 <+0x812>
087a5076 +0x7d6:  xchg   %ax,%ax
087a5078 +0x7d8:  mov    (%esi),%eax
087a507a +0x7da:  mov    0x4(%esi),%edi
087a507d +0x7dd:  add    $0x10,%esi
087a5080 +0x7e0:  movl   $0x0,0x4(%esp)
087a5088 +0x7e8:  shl    $0x2,%eax
087a508b +0x7eb:  mov    %eax,0x8(%esp)
087a508f +0x7ef:  mov    %edi,(%esp)
087a5092 +0x7f2:  call   0807dcc0 <_init+0x5b8>
087a5097 +0x7f7:  movb   $0x0,0x4(%esp)
087a509c +0x7fc:  mov    %edi,(%esp)
087a509f +0x7ff:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a50a4 +0x804:  cmp    %esi,-0x5c(%ebp)
087a50a7 +0x807:  jne    087a5078 <+0x7d8>
087a50a9 +0x809:  mov    -0x64(%ebp),%ecx
087a50ac +0x80c:  mov    0x4(%ecx),%ecx
087a50af +0x80f:  mov    %ecx,-0x5c(%ebp)
087a50b2 +0x812:  mov    -0x5c(%ebp),%eax
087a50b5 +0x815:  sub    -0x60(%ebp),%eax
087a50b8 +0x818:  and    $0xfffffff0,%eax
087a50bb +0x81b:  sub    %eax,%ecx
087a50bd +0x81d:  mov    -0x64(%ebp),%eax
087a50c0 +0x820:  mov    %ecx,0x4(%eax)
087a50c3 +0x823:  addl   $0x1,-0x84(%ebp)
087a50ca +0x82a:  mov    -0x84(%ebp),%eax
087a50d0 +0x830:  cmp    %eax,0x18(%ebp)
087a50d3 +0x833:  jbe    087a5422 <+0xb82>
087a50d9 +0x839:  addl   $0x10,0x14(%ebp)
087a50dd +0x83d:  mov    0x14(%ebp),%ecx
087a50e0 +0x840:  addl   $0xc,-0x74(%ebp)
087a50e4 +0x844:  cmpl   $0x1,0xc(%ecx)
087a50e8 +0x848:  je     087a5430 <+0xb90>
087a50ee +0x84e:  mov    -0x78(%ebp),%eax
087a50f1 +0x851:  mov    -0x70(%ebp),%edx
087a50f4 +0x854:  mov    %eax,-0x5c(%ebp)
087a50f7 +0x857:  jmp    087a4e30 <+0x590>
087a50fc +0x85c:  lea    0x0(%esi,%eiz,1),%esi
087a5100 +0x860:  movb   $0x1,0x2f(%esi)
087a5104 +0x864:  jmp    087a501c <+0x77c>
087a5109 +0x869:  lea    0x0(%esi,%eiz,1),%esi
087a5110 +0x870:  mov    -0x60(%ebp),%edx
087a5113 +0x873:  movb   $0x0,0x4(%esp)
087a5118 +0x878:  shl    $0x4,%edx
087a511b +0x87b:  mov    %edx,-0xa0(%ebp)
087a5121 +0x881:  mov    %edx,(%esp)
087a5124 +0x884:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a5129 +0x889:  mov    -0x64(%ebp),%ecx
087a512c +0x88c:  mov    %eax,-0x9c(%ebp)
087a5132 +0x892:  mov    0x4(%ecx),%edi
087a5135 +0x895:  mov    %edi,-0x98(%ebp)
087a513b +0x89b:  mov    (%ecx),%esi
087a513d +0x89d:  mov    %edi,%eax
087a513f +0x89f:  sub    %esi,%eax
087a5141 +0x8a1:  sar    $0x4,%eax
087a5144 +0x8a4:  cmp    %eax,-0x60(%ebp)
087a5147 +0x8a7:  jbe    087a5484 <+0xbe4>
087a514d +0x8ad:  mov    -0x9c(%ebp),%edx
087a5153 +0x8b3:  cmp    %esi,%edi
087a5155 +0x8b5:  mov    %edx,-0x94(%ebp)
087a515b +0x8bb:  je     087a519d <+0x8fd>
087a515d +0x8bd:  mov    %edi,-0x5c(%ebp)
087a5160 +0x8c0:  mov    -0x94(%ebp),%edi
087a5166 +0x8c6:  xchg   %ax,%ax
087a5168 +0x8c8:  mov    %esi,0x4(%esp)
087a516c +0x8cc:  add    $0x10,%esi
087a516f +0x8cf:  mov    %edi,(%esp)
087a5172 +0x8d2:  add    $0x10,%edi
087a5175 +0x8d5:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a517a +0x8da:  cmp    %esi,-0x5c(%ebp)
087a517d +0x8dd:  jne    087a5168 <+0x8c8>
087a517f +0x8df:  mov    -0x64(%ebp),%ecx
087a5182 +0x8e2:  mov    %edi,-0x94(%ebp)
087a5188 +0x8e8:  mov    -0x64(%ebp),%eax
087a518b +0x8eb:  mov    (%ecx),%ecx
087a518d +0x8ed:  mov    %ecx,-0x98(%ebp)
087a5193 +0x8f3:  mov    0x4(%eax),%edi
087a5196 +0x8f6:  mov    %edi,%eax
087a5198 +0x8f8:  sub    %ecx,%eax
087a519a +0x8fa:  sar    $0x4,%eax
087a519d +0x8fd:  mov    -0x60(%ebp),%edx
087a51a0 +0x900:  sub    %eax,%edx
087a51a2 +0x902:  mov    %edx,-0x60(%ebp)
087a51a5 +0x905:  je     087a51e4 <+0x944>
087a51a7 +0x907:  mov    -0x94(%ebp),%esi
087a51ad +0x90d:  mov    %edx,%edi
087a51af +0x90f:  nop
087a51b0 +0x910:  mov    -0x80(%ebp),%ecx
087a51b3 +0x913:  mov    %esi,(%esp)
087a51b6 +0x916:  add    $0x10,%esi
087a51b9 +0x919:  mov    %ecx,0x4(%esp)
087a51bd +0x91d:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a51c2 +0x922:  sub    $0x1,%edi
087a51c5 +0x925:  jne    087a51b0 <+0x910>
087a51c7 +0x927:  mov    -0x60(%ebp),%eax
087a51ca +0x92a:  mov    -0x64(%ebp),%edx
087a51cd +0x92d:  shl    $0x4,%eax
087a51d0 +0x930:  add    %eax,-0x94(%ebp)
087a51d6 +0x936:  mov    -0x64(%ebp),%eax
087a51d9 +0x939:  mov    (%eax),%eax
087a51db +0x93b:  mov    %eax,-0x98(%ebp)
087a51e1 +0x941:  mov    0x4(%edx),%edi
087a51e4 +0x944:  mov    -0x9c(%ebp),%eax
087a51ea +0x94a:  mov    -0x64(%ebp),%ecx
087a51ed +0x94d:  mov    %eax,(%ecx)
087a51ef +0x94f:  mov    -0x94(%ebp),%edx
087a51f5 +0x955:  mov    %edx,0x4(%ecx)
087a51f8 +0x958:  mov    -0x9c(%ebp),%eax
087a51fe +0x95e:  add    -0xa0(%ebp),%eax
087a5204 +0x964:  mov    %eax,0x8(%ecx)
087a5207 +0x967:  cmp    -0x98(%ebp),%edi
087a520d +0x96d:  je     087a5249 <+0x9a9>
087a520f +0x96f:  mov    -0x98(%ebp),%esi
087a5215 +0x975:  mov    %edi,-0x5c(%ebp)
087a5218 +0x978:  mov    (%esi),%eax
087a521a +0x97a:  mov    0x4(%esi),%edi
087a521d +0x97d:  add    $0x10,%esi
087a5220 +0x980:  movl   $0x0,0x4(%esp)
087a5228 +0x988:  shl    $0x2,%eax
087a522b +0x98b:  mov    %eax,0x8(%esp)
087a522f +0x98f:  mov    %edi,(%esp)
087a5232 +0x992:  call   0807dcc0 <_init+0x5b8>
087a5237 +0x997:  movb   $0x0,0x4(%esp)
087a523c +0x99c:  mov    %edi,(%esp)
087a523f +0x99f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a5244 +0x9a4:  cmp    %esi,-0x5c(%ebp)
087a5247 +0x9a7:  jne    087a5218 <+0x978>
087a5249 +0x9a9:  mov    -0x98(%ebp),%ecx
087a524f +0x9af:  movb   $0x0,0x4(%esp)
087a5254 +0x9b4:  mov    %ecx,(%esp)
087a5257 +0x9b7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a525c +0x9bc:  jmp    087a50c3 <+0x823>
087a5261 +0x9c1:  mov    0x20(%esi),%eax
087a5264 +0x9c4:  mov    %esi,(%esp)
087a5267 +0x9c7:  mov    %eax,0x4(%esp)
087a526b +0x9cb:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
087a5270 +0x9d0:  test   %al,%al
087a5272 +0x9d2:  je     087a5018 <+0x778>
087a5278 +0x9d8:  mov    0x20(%esi),%ecx
087a527b +0x9db:  lea    0x10(%esi),%eax
087a527e +0x9de:  movb   $0x1,0x2d(%esi)
087a5282 +0x9e2:  shl    %cl,%edi
087a5284 +0x9e4:  mov    %edi,%ecx
087a5286 +0x9e6:  sub    0x28(%esi),%ecx
087a5289 +0x9e9:  mov    %ecx,0x28(%esi)
087a528c +0x9ec:  mov    %eax,0x4(%esp)
087a5290 +0x9f0:  mov    %esi,(%esp)
087a5293 +0x9f3:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
087a5298 +0x9f8:  jmp    087a501c <+0x77c>
087a529d +0x9fd:  mov    -0x7c(%ebp),%edi
087a52a0 +0xa00:  sub    -0x5c(%ebp),%edi
087a52a3 +0xa03:  sar    $0x4,%edi
087a52a6 +0xa06:  imul   $0xaaaaaaab,%edi,%edi
087a52ac +0xa0c:  lea    0x1(%edi,%edi,1),%esi
087a52b0 +0xa10:  lea    (%esi,%esi,2),%edx
087a52b3 +0xa13:  shl    $0x4,%edx
087a52b6 +0xa16:  mov    %edx,-0x60(%ebp)
087a52b9 +0xa19:  movb   $0x0,0x4(%esp)
087a52be +0xa1e:  mov    %edx,(%esp)
087a52c1 +0xa21:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087a52c6 +0xa26:  cmp    %esi,%edi
087a52c8 +0xa28:  mov    %eax,-0x64(%ebp)
087a52cb +0xa2b:  jae    087a545a <+0xbba>
087a52d1 +0xa31:  mov    %eax,-0x78(%ebp)
087a52d4 +0xa34:  mov    -0x5c(%ebp),%edi
087a52d7 +0xa37:  mov    %eax,%esi
087a52d9 +0xa39:  mov    -0x7c(%ebp),%eax
087a52dc +0xa3c:  cmp    %eax,%edi
087a52de +0xa3e:  je     087a5337 <+0xa97>
087a52e0 +0xa40:  mov    %edi,0x4(%esp)
087a52e4 +0xa44:  mov    %esi,(%esp)
087a52e7 +0xa47:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a52ec +0xa4c:  lea    0x10(%edi),%eax
087a52ef +0xa4f:  mov    %eax,0x4(%esp)
087a52f3 +0xa53:  lea    0x10(%esi),%eax
087a52f6 +0xa56:  mov    %eax,(%esp)
087a52f9 +0xa59:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a52fe +0xa5e:  mov    0x20(%edi),%eax
087a5301 +0xa61:  mov    %eax,0x20(%esi)
087a5304 +0xa64:  mov    0x24(%edi),%eax
087a5307 +0xa67:  mov    %eax,0x24(%esi)
087a530a +0xa6a:  mov    0x28(%edi),%eax
087a530d +0xa6d:  mov    %eax,0x28(%esi)
087a5310 +0xa70:  movzbl 0x2c(%edi),%eax
087a5314 +0xa74:  mov    %al,0x2c(%esi)
087a5317 +0xa77:  movzbl 0x2d(%edi),%eax
087a531b +0xa7b:  mov    %al,0x2d(%esi)
087a531e +0xa7e:  movzbl 0x2e(%edi),%eax
087a5322 +0xa82:  mov    %al,0x2e(%esi)
087a5325 +0xa85:  movzbl 0x2f(%edi),%eax
087a5329 +0xa89:  add    $0x30,%edi
087a532c +0xa8c:  mov    %al,0x2f(%esi)
087a532f +0xa8f:  add    $0x30,%esi
087a5332 +0xa92:  cmp    %edi,-0x7c(%ebp)
087a5335 +0xa95:  jne    087a52e0 <+0xa40>
087a5337 +0xa97:  mov    -0x8c(%ebp),%edx
087a533d +0xa9d:  mov    %esi,(%esp)
087a5340 +0xaa0:  mov    %edx,0x4(%esp)
087a5344 +0xaa4:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a5349 +0xaa9:  mov    -0x88(%ebp),%ecx
087a534f +0xaaf:  lea    0x10(%esi),%eax
087a5352 +0xab2:  mov    %eax,(%esp)
087a5355 +0xab5:  mov    %ecx,0x4(%esp)
087a5359 +0xab9:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a535e +0xabe:  mov    -0x38(%ebp),%eax
087a5361 +0xac1:  mov    %eax,0x20(%esi)
087a5364 +0xac4:  mov    -0x34(%ebp),%eax
087a5367 +0xac7:  mov    %eax,0x24(%esi)
087a536a +0xaca:  mov    -0x30(%ebp),%eax
087a536d +0xacd:  mov    %eax,0x28(%esi)
087a5370 +0xad0:  movzbl -0x2c(%ebp),%eax
087a5374 +0xad4:  mov    %al,0x2c(%esi)
087a5377 +0xad7:  movzbl -0x2b(%ebp),%eax
087a537b +0xadb:  mov    %al,0x2d(%esi)
087a537e +0xade:  movzbl -0x2a(%ebp),%eax
087a5382 +0xae2:  mov    %al,0x2e(%esi)
087a5385 +0xae5:  movzbl -0x29(%ebp),%eax
087a5389 +0xae9:  mov    %al,0x2f(%esi)
087a538c +0xaec:  mov    -0x6c(%ebp),%eax
087a538f +0xaef:  cmp    %eax,-0x5c(%ebp)
087a5392 +0xaf2:  je     087a53fe <+0xb5e>
087a5394 +0xaf4:  mov    -0x5c(%ebp),%edi
087a5397 +0xaf7:  mov    %esi,-0x6c(%ebp)
087a539a +0xafa:  lea    0x0(%esi),%esi
087a53a0 +0xb00:  mov    0x10(%edi),%eax
087a53a3 +0xb03:  mov    0x14(%edi),%esi
087a53a6 +0xb06:  movl   $0x0,0x4(%esp)
087a53ae +0xb0e:  shl    $0x2,%eax
087a53b1 +0xb11:  mov    %esi,(%esp)
087a53b4 +0xb14:  mov    %eax,0x8(%esp)
087a53b8 +0xb18:  call   0807dcc0 <_init+0x5b8>
087a53bd +0xb1d:  mov    %esi,(%esp)
087a53c0 +0xb20:  movb   $0x0,0x4(%esp)
087a53c5 +0xb25:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a53ca +0xb2a:  mov    (%edi),%eax
087a53cc +0xb2c:  mov    0x4(%edi),%esi
087a53cf +0xb2f:  add    $0x30,%edi
087a53d2 +0xb32:  movl   $0x0,0x4(%esp)
087a53da +0xb3a:  shl    $0x2,%eax
087a53dd +0xb3d:  mov    %eax,0x8(%esp)
087a53e1 +0xb41:  mov    %esi,(%esp)
087a53e4 +0xb44:  call   0807dcc0 <_init+0x5b8>
087a53e9 +0xb49:  movb   $0x0,0x4(%esp)
087a53ee +0xb4e:  mov    %esi,(%esp)
087a53f1 +0xb51:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a53f6 +0xb56:  cmp    %edi,-0x7c(%ebp)
087a53f9 +0xb59:  jne    087a53a0 <+0xb00>
087a53fb +0xb5b:  mov    -0x6c(%ebp),%esi
087a53fe +0xb5e:  mov    -0x64(%ebp),%edx
087a5401 +0xb61:  add    $0x30,%esi
087a5404 +0xb64:  mov    -0x5c(%ebp),%ecx
087a5407 +0xb67:  add    -0x60(%ebp),%edx
087a540a +0xb6a:  mov    %esi,-0x6c(%ebp)
087a540d +0xb6d:  movb   $0x0,0x4(%esp)
087a5412 +0xb72:  mov    %edx,-0x7c(%ebp)
087a5415 +0xb75:  mov    %ecx,(%esp)
087a5418 +0xb78:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a541d +0xb7d:  jmp    087a4f48 <+0x6a8>
087a5422 +0xb82:  mov    -0x78(%ebp),%edx
087a5425 +0xb85:  mov    -0x70(%ebp),%edi
087a5428 +0xb88:  mov    %edx,-0x80(%ebp)
087a542b +0xb8b:  jmp    087a495c <+0xbc>
087a5430 +0xb90:  lea    -0x65cc18(%ebx),%eax
087a5436 +0xb96:  mov    %eax,0xc(%esp)
087a543a +0xb9a:  lea    -0x65cd70(%ebx),%eax
087a5440 +0xba0:  mov    %eax,0x4(%esp)
087a5444 +0xba4:  lea    -0x65cca2(%ebx),%eax
087a544a +0xbaa:  movl   $0xfa,0x8(%esp)
087a5452 +0xbb2:  mov    %eax,(%esp)
087a5455 +0xbb5:  call   0807dc50 <_init+0x548>
087a545a +0xbba:  lea    -0x65cb78(%ebx),%eax
087a5460 +0xbc0:  mov    %eax,0xc(%esp)
087a5464 +0xbc4:  lea    -0x65cd08(%ebx),%eax
087a546a +0xbca:  mov    %eax,0x4(%esp)
087a546e +0xbce:  lea    -0x65cc8a(%ebx),%eax
087a5474 +0xbd4:  movl   $0x90,0x8(%esp)
087a547c +0xbdc:  mov    %eax,(%esp)
087a547f +0xbdf:  call   0807dc50 <_init+0x548>
087a5484 +0xbe4:  lea    -0x65cb18(%ebx),%eax
087a548a +0xbea:  jmp    087a5460 <+0xbc0>
087a548c +0xbec:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::AbstractGroup::SimultaneousMultiply @ 0x87a48a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, TaoCrypt::Integer const&,
   TaoCrypt::Integer const*, unsigned int) const */

void __thiscall
TaoCrypt::AbstractGroup::SimultaneousMultiply
          (AbstractGroup *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  Integer IVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  Integer *pIVar8;
  Integer *pIVar9;
  int *piVar10;
  Integer *pIVar11;
  char *__function;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  Integer *pIVar18;
  uint uVar19;
  int iVar20;
  Integer *pIVar21;
  Integer *this_00;
  Integer *pIVar22;
  uint in_stack_ffffff48;
  int *local_a8;
  Integer *local_9c;
  Integer *local_98;
  uint local_88;
  Integer *local_80;
  Integer *local_7c;
  int local_78;
  int local_74;
  Integer *local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  Integer *local_60;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  Integer local_30;
  Integer local_2f;
  Integer local_2e;
  Integer local_2d;
  int local_2c;
  void *local_28;
  
  uVar14 = in_stack_ffffff48 & 0xffffff00;
  piVar5 = operator_new__(param_4 * 0xc,uVar14);
  piVar12 = piVar5;
  uVar19 = param_4;
  local_a8 = piVar5;
  if (param_4 != 0) {
    do {
      uVar14 = uVar14 & 0xffffff00;
      pvVar6 = operator_new__(0,uVar14);
      *piVar12 = (int)pvVar6;
      piVar12[2] = (int)pvVar6;
      piVar12[1] = (int)pvVar6;
      uVar19 = uVar19 - 1;
      piVar12 = piVar12 + 3;
    } while (uVar19 != 0);
    local_a8 = piVar5 + param_4 * 3;
  }
  uVar14 = uVar14 & 0xffffff00;
  operator_delete__(0,uVar14);
  if (param_4 != 0) {
    uVar14 = uVar14 & 0xffffff00;
    local_70 = operator_new__(param_4 * 0x30,uVar14);
    operator_delete__(0,uVar14 & 0xffffff00);
    if (*(int *)(param_3 + 0xc) == 1) {
LAB_087a5430:
                    /* WARNING: Subroutine does not return */
      __assert_fail("expBegin->NotNegative()",
                    "/media/sf_First/Library3rd/MySQL/Build/mysql-connector-c-6.0.2/extlib/yassl/taocrypt/src/algebra.cpp"
                    ,0xfa,
                    "virtual void TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, const TaoCrypt::Integer&, const TaoCrypt::Integer*, unsigned int) const"
                   );
    }
    local_80 = local_70 + param_4 * 0x30;
    local_78 = 0;
    local_88 = 0;
    local_60 = local_70;
    do {
      IVar4 = (Integer)(**(code **)(*(int *)this + 0x18))(this);
      Integer::Integer((Integer *)&local_5c,param_3);
      pIVar8 = (Integer *)Integer::One();
      Integer::Integer((Integer *)&local_4c,pIVar8);
      local_3c = 0;
      local_38 = 0;
      local_2e = (Integer)0x1;
      local_2d = (Integer)0x0;
      local_30 = IVar4;
      uVar19 = Integer::BitCount(param_3);
      uVar14 = 1;
      if ((((0x11 < uVar19) && (uVar14 = 2, 0x18 < uVar19)) && (uVar14 = 3, 0x46 < uVar19)) &&
         ((uVar14 = 4, 0xc5 < uVar19 && (uVar14 = 5, 0x21b < uVar19)))) {
        uVar14 = 7 - (uVar19 < 0x59b);
      }
      local_3c = uVar14;
      Integer::operator<<=((Integer *)&local_4c,uVar14);
      if (local_80 == local_70) {
        iVar15 = (int)local_80 - (int)local_60 >> 4;
        uVar19 = iVar15 * 0x55555556 + 1;
        iVar20 = uVar19 * 0x30;
        local_7c = operator_new__(iVar20,uVar14 & 0xffffff00);
        pIVar8 = local_7c;
        pIVar21 = local_60;
        if (uVar19 <= (uint)(iVar15 * -0x55555555)) {
          __function = 
          "mySTL::vector<T>::vector(size_t, const mySTL::vector<T>&) [with T = TaoCrypt::WindowSlider]"
          ;
          goto LAB_087a5460;
        }
        for (; pIVar21 != local_80; pIVar21 = pIVar21 + 0x30) {
          Integer::Integer(pIVar8,pIVar21);
          Integer::Integer(pIVar8 + 0x10,pIVar21 + 0x10);
          *(undefined4 *)(pIVar8 + 0x20) = *(undefined4 *)(pIVar21 + 0x20);
          *(undefined4 *)(pIVar8 + 0x24) = *(undefined4 *)(pIVar21 + 0x24);
          *(undefined4 *)(pIVar8 + 0x28) = *(undefined4 *)(pIVar21 + 0x28);
          pIVar8[0x2c] = pIVar21[0x2c];
          pIVar8[0x2d] = pIVar21[0x2d];
          pIVar8[0x2e] = pIVar21[0x2e];
          pIVar8[0x2f] = pIVar21[0x2f];
          pIVar8 = pIVar8 + 0x30;
        }
        Integer::Integer(pIVar8,(Integer *)&local_5c);
        pIVar9 = (Integer *)&local_4c;
        Integer::Integer(pIVar8 + 0x10,(Integer *)&local_4c);
        *(uint *)(pIVar8 + 0x20) = local_3c;
        *(undefined4 *)(pIVar8 + 0x24) = local_38;
        *(undefined4 *)(pIVar8 + 0x28) = local_34;
        pIVar8[0x2c] = local_30;
        pIVar8[0x2d] = local_2f;
        pIVar8[0x2e] = local_2e;
        pIVar8[0x2f] = local_2d;
        pIVar21 = local_60;
        if (local_60 != local_70) {
          do {
            pvVar6 = *(void **)(pIVar21 + 0x14);
            uVar19 = 0;
            memset(pvVar6,0,*(int *)(pIVar21 + 0x10) << 2);
            operator_delete__(pvVar6,uVar19 & 0xffffff00);
            pvVar6 = *(void **)(pIVar21 + 4);
            pIVar22 = pIVar21 + 0x30;
            uVar19 = 0;
            memset(pvVar6,0,*(int *)pIVar21 << 2);
            pIVar9 = (Integer *)(uVar19 & 0xffffff00);
            operator_delete__(pvVar6,pIVar9);
            pIVar21 = pIVar22;
          } while (local_80 != pIVar22);
        }
        local_80 = local_7c + iVar20;
        operator_delete__(local_60,(uint)pIVar9 & 0xffffff00);
      }
      else {
        Integer::Integer(local_70,(Integer *)&local_5c);
        Integer::Integer(local_70 + 0x10,(Integer *)&local_4c);
        *(uint *)(local_70 + 0x20) = local_3c;
        *(undefined4 *)(local_70 + 0x24) = local_38;
        *(undefined4 *)(local_70 + 0x28) = local_34;
        local_70[0x2c] = local_30;
        local_70[0x2d] = local_2f;
        local_70[0x2e] = local_2e;
        local_70[0x2f] = local_2d;
        local_7c = local_60;
        pIVar8 = local_70;
      }
      pvVar6 = local_48;
      local_70 = pIVar8 + 0x30;
      pIVar21 = (Integer *)0x0;
      uVar19 = 0;
      memset(local_48,0,local_4c << 2);
      operator_delete__(pvVar6,uVar19 & 0xffffff00);
      pvVar6 = local_58;
      uVar19 = 0;
      memset(local_58,0,local_5c << 2);
      operator_delete__(pvVar6,uVar19 & 0xffffff00);
      pIVar8 = local_7c + local_78 * 4;
      iVar20 = Integer::WordCount(pIVar8);
      if (pIVar8[0x2e] == (Integer)0x0) {
        pIVar21 = *(Integer **)(pIVar8 + 0x20);
      }
      pIVar8[0x2e] = (Integer)0x0;
      while (pIVar9 = pIVar21, cVar3 = Integer::GetBit(pIVar8,(uint)pIVar21), cVar3 == '\0') {
        if ((Integer *)(iVar20 << 5) <= pIVar21) {
          pIVar8[0x2f] = (Integer)0x1;
          goto LAB_087a501c;
        }
        pIVar21 = pIVar21 + 1;
      }
      Integer::operator>>=(pIVar8,(uint)pIVar21);
      *(Integer **)(pIVar8 + 0x24) = pIVar21 + *(int *)(pIVar8 + 0x24);
      pIVar9 = (Integer *)(1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f));
      uVar7 = Integer::Modulo(pIVar8,(uint)pIVar9);
      *(undefined4 *)(pIVar8 + 0x28) = uVar7;
      if (pIVar8[0x2c] == (Integer)0x0) {
LAB_087a5018:
        pIVar8[0x2d] = (Integer)0x0;
      }
      else {
        pIVar9 = *(Integer **)(pIVar8 + 0x20);
        cVar3 = Integer::GetBit(pIVar8,(uint)pIVar9);
        if (cVar3 == '\0') goto LAB_087a5018;
        pIVar9 = pIVar8 + 0x10;
        pIVar8[0x2d] = (Integer)0x1;
        *(int *)(pIVar8 + 0x28) =
             (1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f)) - *(int *)(pIVar8 + 0x28);
        Integer::operator+=(pIVar8,pIVar9);
      }
LAB_087a501c:
      pIVar21 = (Integer *)(**(code **)(*(int *)this + 0xc))(this);
      piVar10 = (int *)((int)piVar5 + local_78);
      uVar19 = 1 << ((char)*(undefined4 *)(pIVar8 + 0x20) - 1U & 0x1f);
      piVar12 = (int *)piVar10[1];
      uVar14 = (int)piVar12 - *piVar10 >> 4;
      if (uVar19 != uVar14) {
        if (uVar19 < uVar14) {
          piVar16 = (int *)(*piVar10 + uVar19 * 0x10);
          piVar17 = piVar16;
          if (piVar12 != piVar16) {
            do {
              iVar20 = *piVar17;
              pvVar6 = (void *)piVar17[1];
              piVar17 = piVar17 + 4;
              uVar19 = 0;
              memset(pvVar6,0,iVar20 << 2);
              operator_delete__(pvVar6,uVar19 & 0xffffff00);
            } while (piVar12 != piVar17);
            piVar12 = (int *)piVar10[1];
          }
          piVar10[1] = (int)piVar12 - ((int)piVar12 - (int)piVar16 & 0xfffffff0U);
        }
        else {
          pIVar9 = (Integer *)((uint)pIVar9 & 0xffffff00);
          pIVar11 = operator_new__(uVar19 * 0x10,pIVar9);
          pIVar22 = (Integer *)piVar10[1];
          pIVar8 = (Integer *)*piVar10;
          uVar14 = (int)pIVar22 - (int)pIVar8 >> 4;
          if (uVar19 <= uVar14) {
            __function = 
            "mySTL::vector<T>::vector(size_t, const mySTL::vector<T>&) [with T = TaoCrypt::Integer]"
            ;
LAB_087a5460:
                    /* WARNING: Subroutine does not return */
            __assert_fail("n > other.size()",
                          "/media/sf_First/Library3rd/MySQL/Build/mysql-connector-c-6.0.2/extlib/yassl/taocrypt/mySTL/vector.hpp"
                          ,0x90,__function);
          }
          this_00 = pIVar11;
          local_9c = pIVar22;
          local_98 = pIVar11;
          if (pIVar22 != pIVar8) {
            do {
              pIVar18 = pIVar8 + 0x10;
              local_98 = this_00 + 0x10;
              pIVar9 = pIVar8;
              Integer::Integer(this_00,pIVar8);
              pIVar8 = pIVar18;
              this_00 = local_98;
            } while (pIVar22 != pIVar18);
            local_9c = (Integer *)*piVar10;
            pIVar22 = (Integer *)piVar10[1];
            uVar14 = (int)pIVar22 - (int)local_9c >> 4;
          }
          iVar15 = uVar19 - uVar14;
          pIVar8 = local_98;
          iVar20 = iVar15;
          if (iVar15 != 0) {
            do {
              pIVar9 = pIVar21;
              Integer::Integer(pIVar8,pIVar21);
              iVar20 = iVar20 + -1;
              pIVar8 = pIVar8 + 0x10;
            } while (iVar20 != 0);
            local_98 = local_98 + iVar15 * 0x10;
            local_9c = (Integer *)*piVar10;
            pIVar22 = (Integer *)piVar10[1];
          }
          *piVar10 = (int)pIVar11;
          piVar10[1] = (int)local_98;
          piVar10[2] = (int)(pIVar11 + uVar19 * 0x10);
          for (pIVar8 = local_9c; pIVar22 != pIVar8; pIVar8 = pIVar8 + 0x10) {
            pvVar6 = *(void **)(pIVar8 + 4);
            uVar19 = 0;
            memset(pvVar6,0,*(int *)pIVar8 << 2);
            pIVar9 = (Integer *)(uVar19 & 0xffffff00);
            operator_delete__(pvVar6,pIVar9);
          }
          operator_delete__(local_9c,(uint)pIVar9 & 0xffffff00);
        }
      }
      local_88 = local_88 + 1;
      if (param_4 <= local_88) goto LAB_087a495c;
      local_78 = local_78 + 0xc;
      if (*(int *)(param_3 + 0x1c) == 1) goto LAB_087a5430;
      local_60 = local_7c;
      param_3 = param_3 + 0x10;
    } while( true );
  }
  local_7c = (Integer *)0x0;
  local_70 = (Integer *)0x0;
LAB_087a495c:
  Integer::Integer((Integer *)&local_2c,param_2);
  if (param_4 != 0) {
    local_80 = (Integer *)0x0;
    do {
      local_64 = 0;
      bVar2 = 0;
      local_68 = 0;
      do {
        pIVar8 = local_7c + local_64 * 4;
        if ((pIVar8[0x2f] == (Integer)0x0) && ((Integer *)*(int *)(pIVar8 + 0x24) == local_80)) {
          iVar20 = (*(uint *)(pIVar8 + 0x28) >> 1) * 0x10 + *(int *)((int)piVar5 + local_64);
          if (pIVar8[0x2d] == (Integer)0x0) {
            (**(code **)(*(int *)this + 0x24))(this,iVar20,(Integer *)&local_2c);
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x24);
            uVar7 = (**(code **)(*(int *)this + 0x14))(this,(Integer *)&local_2c);
            (*pcVar1)(this,iVar20,uVar7);
          }
          uVar19 = 0;
          iVar20 = Integer::WordCount(pIVar8);
          if (pIVar8[0x2e] == (Integer)0x0) {
            uVar19 = *(uint *)(pIVar8 + 0x20);
          }
          pIVar8[0x2e] = (Integer)0x0;
          while (cVar3 = Integer::GetBit(pIVar8,uVar19), cVar3 == '\0') {
            if ((uint)(iVar20 << 5) <= uVar19) {
              pIVar8[0x2f] = (Integer)0x1;
              goto LAB_087a49a0;
            }
            uVar19 = uVar19 + 1;
          }
          Integer::operator>>=(pIVar8,uVar19);
          *(uint *)(pIVar8 + 0x24) = *(int *)(pIVar8 + 0x24) + uVar19;
          uVar7 = Integer::Modulo(pIVar8,1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f));
          *(undefined4 *)(pIVar8 + 0x28) = uVar7;
          if ((pIVar8[0x2c] == (Integer)0x0) ||
             (cVar3 = Integer::GetBit(pIVar8,*(uint *)(pIVar8 + 0x20)), cVar3 == '\0')) {
            pIVar8[0x2d] = (Integer)0x0;
          }
          else {
            pIVar8[0x2d] = (Integer)0x1;
            *(int *)(pIVar8 + 0x28) =
                 (1 << ((byte)*(undefined4 *)(pIVar8 + 0x20) & 0x1f)) - *(int *)(pIVar8 + 0x28);
            Integer::operator+=(pIVar8,pIVar8 + 0x10);
          }
        }
LAB_087a49a0:
        if (bVar2 == 0) {
          bVar2 = (byte)pIVar8[0x2f] ^ 1;
        }
        local_68 = local_68 + 1;
        local_64 = local_64 + 0xc;
      } while (local_68 < param_4);
      if (bVar2 == 0) goto code_r0x087a4ada;
      pIVar8 = (Integer *)(**(code **)(*(int *)this + 0x1c))(this,(Integer *)&local_2c);
      Integer::operator=((Integer *)&local_2c,pIVar8);
      local_80 = (Integer *)((int)local_80 + 1);
    } while( true );
  }
LAB_087a4c7b:
  uVar19 = 0;
  memset(local_28,0,local_2c << 2);
  uVar19 = uVar19 & 0xffffff00;
  operator_delete__(local_28,uVar19);
  for (pIVar8 = local_7c; pIVar8 != local_70; pIVar8 = pIVar8 + 0x30) {
    pvVar6 = *(void **)(pIVar8 + 0x14);
    uVar19 = 0;
    memset(pvVar6,0,*(int *)(pIVar8 + 0x10) << 2);
    operator_delete__(pvVar6,uVar19 & 0xffffff00);
    pvVar6 = *(void **)(pIVar8 + 4);
    uVar19 = 0;
    memset(pvVar6,0,*(int *)pIVar8 << 2);
    uVar19 = uVar19 & 0xffffff00;
    operator_delete__(pvVar6,uVar19);
  }
  uVar19 = uVar19 & 0xffffff00;
  operator_delete__(local_7c,uVar19);
  for (piVar12 = piVar5; piVar12 != local_a8; piVar12 = piVar12 + 3) {
    piVar10 = (int *)piVar12[1];
    piVar16 = (int *)*piVar12;
    if (piVar10 != piVar16) {
      do {
        iVar20 = *piVar16;
        pvVar6 = (void *)piVar16[1];
        piVar16 = piVar16 + 4;
        uVar19 = 0;
        memset(pvVar6,0,iVar20 << 2);
        uVar19 = uVar19 & 0xffffff00;
        operator_delete__(pvVar6,uVar19);
      } while (piVar10 != piVar16);
      piVar10 = (int *)*piVar12;
    }
    uVar19 = uVar19 & 0xffffff00;
    operator_delete__(piVar10,uVar19);
  }
  operator_delete__(piVar5,uVar19 & 0xffffff00);
  return;
code_r0x087a4ada:
  local_6c = 0;
  local_74 = 0;
  do {
    piVar12 = (int *)((int)piVar5 + local_74);
    Integer::operator=(param_1,(Integer *)(*piVar12 + -0x10 + (piVar12[1] - *piVar12 & 0xfffffff0U))
                      );
    iVar20 = *piVar12;
    uVar19 = piVar12[1] - iVar20 >> 4;
    if (1 < uVar19) {
      local_60 = (Integer *)(uVar19 - 2);
      if (0 < (int)local_60) {
        iVar13 = (uVar19 - 1) * 0x10;
        iVar15 = uVar19 * 0x10 + -0x20;
        while( true ) {
          (**(code **)(*(int *)this + 0x24))(this,iVar20 + iVar15,iVar20 + iVar13);
          (**(code **)(*(int *)this + 0x24))(this,param_1,iVar15 + *piVar12);
          local_60 = (Integer *)((int)local_60 + -1);
          iVar13 = iVar13 + -0x10;
          if ((int)local_60 < 1) break;
          iVar20 = *piVar12;
          iVar15 = iVar15 + -0x10;
        }
        iVar20 = *piVar12;
      }
      (**(code **)(*(int *)this + 0x24))(this,iVar20,iVar20 + 0x10);
      pcVar1 = *(code **)(*(int *)this + 0x10);
      iVar20 = *piVar12;
      uVar7 = (**(code **)(*(int *)this + 0x1c))(this,param_1);
      pIVar8 = (Integer *)(*pcVar1)(this,uVar7,iVar20);
      Integer::operator=(param_1,pIVar8);
    }
    local_6c = local_6c + 1;
    local_74 = local_74 + 0xc;
    param_1 = param_1 + 0x10;
  } while (local_6c < param_4);
  goto LAB_087a4c7b;
}
```
