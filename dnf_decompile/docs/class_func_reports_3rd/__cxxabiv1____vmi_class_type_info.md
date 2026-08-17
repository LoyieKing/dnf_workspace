# __cxxabiv1____vmi_class_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## __do_dyncast

```asm
// === 08723200 __cxxabiv1::__vmi_class_type_info::__do_dyncast  [0x08723200-0x87237df] ===
 8723200:	55                   	push   %ebp
 8723201:	89 e5                	mov    %esp,%ebp
 8723203:	57                   	push   %edi
 8723204:	56                   	push   %esi
 8723205:	53                   	push   %ebx
 8723206:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 872320c:	8b 75 24             	mov    0x24(%ebp),%esi
 872320f:	e8 e4 fb ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8723214:	81 c3 84 99 c4 00    	add    $0xc49984,%ebx
 872321a:	f6 46 10 10          	testb  $0x10,0x10(%esi)
 872321e:	74 09                	je     8723229 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x29>
 8723220:	8b 55 08             	mov    0x8(%ebp),%edx
 8723223:	8b 42 08             	mov    0x8(%edx),%eax
 8723226:	89 46 10             	mov    %eax,0x10(%esi)
 8723229:	8b 4d 20             	mov    0x20(%ebp),%ecx
 872322c:	39 4d 18             	cmp    %ecx,0x18(%ebp)
 872322f:	0f 84 43 04 00 00    	je     8723678 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x478>
 8723235:	8b 45 08             	mov    0x8(%ebp),%eax
 8723238:	8b 78 04             	mov    0x4(%eax),%edi
 872323b:	8b 55 14             	mov    0x14(%ebp),%edx
 872323e:	8b 42 04             	mov    0x4(%edx),%eax
 8723241:	39 f8                	cmp    %edi,%eax
 8723243:	0f 84 8f 04 00 00    	je     87236d8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x4d8>
 8723249:	80 3f 2a             	cmpb   $0x2a,(%edi)
 872324c:	74 14                	je     8723262 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x62>
 872324e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8723252:	89 3c 24             	mov    %edi,(%esp)
 8723255:	e8 86 b2 95 ff       	call   807e4e0 <strcmp@plt>
 872325a:	85 c0                	test   %eax,%eax
 872325c:	0f 84 76 04 00 00    	je     87236d8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x4d8>
 8723262:	8b 45 0c             	mov    0xc(%ebp),%eax
 8723265:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8723268:	2b 4d 0c             	sub    0xc(%ebp),%ecx
 872326b:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 872326f:	c1 f8 1f             	sar    $0x1f,%eax
 8723272:	f7 d0                	not    %eax
 8723274:	21 c1                	and    %eax,%ecx
 8723276:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 8723279:	8b 4d 10             	mov    0x10(%ebp),%ecx
 872327c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 872327f:	c6 45 a3 00          	movb   $0x0,-0x5d(%ebp)
 8723283:	c6 45 af 01          	movb   $0x1,-0x51(%ebp)
 8723287:	89 45 a8             	mov    %eax,-0x58(%ebp)
 872328a:	83 c9 01             	or     $0x1,%ecx
 872328d:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 8723290:	8b 55 08             	mov    0x8(%ebp),%edx
 8723293:	8b 7a 0c             	mov    0xc(%edx),%edi
 8723296:	66 90                	xchg   %ax,%ax
 8723298:	85 ff                	test   %edi,%edi
 872329a:	0f 84 b8 03 00 00    	je     8723658 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x458>
 87232a0:	8b 55 08             	mov    0x8(%ebp),%edx
 87232a3:	83 ef 01             	sub    $0x1,%edi
 87232a6:	8b 4e 10             	mov    0x10(%esi),%ecx
 87232a9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 87232b0:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 87232b7:	8b 44 fa 14          	mov    0x14(%edx,%edi,8),%eax
 87232bb:	8b 55 10             	mov    0x10(%ebp),%edx
 87232be:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 87232c1:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87232c4:	89 c1                	mov    %eax,%ecx
 87232c6:	c1 f9 08             	sar    $0x8,%ecx
 87232c9:	a8 01                	test   $0x1,%al
 87232cb:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 87232d2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 87232d9:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87232dc:	89 55 bc             	mov    %edx,-0x44(%ebp)
 87232df:	74 13                	je     87232f4 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0xf4>
 87232e1:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87232e4:	8b 55 18             	mov    0x18(%ebp),%edx
 87232e7:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 87232ea:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87232ed:	03 0a                	add    (%edx),%ecx
 87232ef:	8b 11                	mov    (%ecx),%edx
 87232f1:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 87232f4:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87232f7:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87232fa:	03 4d 18             	add    0x18(%ebp),%ecx
 87232fd:	85 d2                	test   %edx,%edx
 87232ff:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 8723302:	74 0f                	je     8723313 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x113>
 8723304:	39 4d b8             	cmp    %ecx,-0x48(%ebp)
 8723307:	0f 92 c1             	setb   %cl
 872330a:	3a 4d af             	cmp    -0x51(%ebp),%cl
 872330d:	0f 84 05 02 00 00    	je     8723518 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x318>
 8723313:	a8 02                	test   $0x2,%al
 8723315:	75 0e                	jne    8723325 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x125>
 8723317:	83 7d 0c fe          	cmpl   $0xfffffffe,0xc(%ebp)
 872331b:	0f 84 17 02 00 00    	je     8723538 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x338>
 8723321:	83 65 bc fd          	andl   $0xfffffffd,-0x44(%ebp)
 8723325:	8b 55 08             	mov    0x8(%ebp),%edx
 8723328:	8b 44 fa 10          	mov    0x10(%edx,%edi,8),%eax
 872332c:	8b 55 a8             	mov    -0x58(%ebp),%edx
 872332f:	8b 08                	mov    (%eax),%ecx
 8723331:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8723335:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8723338:	89 04 24             	mov    %eax,(%esp)
 872333b:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 872333e:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8723341:	89 54 24 14          	mov    %edx,0x14(%esp)
 8723345:	8b 55 14             	mov    0x14(%ebp),%edx
 8723348:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 872334c:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 872334f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8723353:	8b 55 0c             	mov    0xc(%ebp),%edx
 8723356:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 872335a:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 872335d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8723361:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8723365:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8723368:	ff 51 1c             	call   *0x1c(%ecx)
 872336b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 872336e:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8723371:	88 45 bc             	mov    %al,-0x44(%ebp)
 8723374:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8723377:	0b 46 08             	or     0x8(%esi),%eax
 872337a:	83 fa 02             	cmp    $0x2,%edx
 872337d:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8723380:	89 46 08             	mov    %eax,0x8(%esi)
 8723383:	0f 84 2f 03 00 00    	je     87236b8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x4b8>
 8723389:	83 fa 06             	cmp    $0x6,%edx
 872338c:	0f 84 26 03 00 00    	je     87236b8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x4b8>
 8723392:	80 7d b7 00          	cmpb   $0x0,-0x49(%ebp)
 8723396:	0f 85 bc 00 00 00    	jne    8723458 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x258>
 872339c:	8b 0e                	mov    (%esi),%ecx
 872339e:	85 c9                	test   %ecx,%ecx
 87233a0:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 87233a3:	0f 84 4f 02 00 00    	je     87235f8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3f8>
 87233a9:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87233ac:	39 4d c0             	cmp    %ecx,-0x40(%ebp)
 87233af:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87233b2:	0f 84 d8 01 00 00    	je     8723590 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x390>
 87233b8:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87233bb:	85 c9                	test   %ecx,%ecx
 87233bd:	0f 84 dd 01 00 00    	je     87235a0 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3a0>
 87233c3:	8b 4e 0c             	mov    0xc(%esi),%ecx
 87233c6:	83 f8 03             	cmp    $0x3,%eax
 87233c9:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87233cc:	0f 8e ae 00 00 00    	jle    8723480 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x280>
 87233d2:	a8 01                	test   $0x1,%al
 87233d4:	0f 85 8e 01 00 00    	jne    8723568 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x368>
 87233da:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87233dd:	85 c0                	test   %eax,%eax
 87233df:	0f 84 98 01 00 00    	je     872357d <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x37d>
 87233e5:	8d 76 00             	lea    0x0(%esi),%esi
 87233e8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87233eb:	85 d2                	test   %edx,%edx
 87233ed:	89 55 94             	mov    %edx,-0x6c(%ebp)
 87233f0:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87233f3:	75 0e                	jne    8723403 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x203>
 87233f5:	c7 45 94 01 00 00 00 	movl   $0x1,-0x6c(%ebp)
 87233fc:	c7 45 b0 01 00 00 00 	movl   $0x1,-0x50(%ebp)
 8723403:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8723406:	33 45 94             	xor    -0x6c(%ebp),%eax
 8723409:	83 f8 03             	cmp    $0x3,%eax
 872340c:	0f 8e d6 00 00 00    	jle    87234e8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x2e8>
 8723412:	83 7d 94 03          	cmpl   $0x3,-0x6c(%ebp)
 8723416:	0f 8f 2c 01 00 00    	jg     8723548 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x348>
 872341c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 872341f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8723422:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8723425:	f6 45 94 02          	testb  $0x2,-0x6c(%ebp)
 8723429:	89 4e 0c             	mov    %ecx,0xc(%esi)
 872342c:	0f 85 f6 00 00 00    	jne    8723528 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x328>
 8723432:	f6 45 94 01          	testb  $0x1,-0x6c(%ebp)
 8723436:	0f 84 ec 00 00 00    	je     8723528 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x328>
 872343c:	8b 46 08             	mov    0x8(%esi),%eax
 872343f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8723442:	83 7d 94 04          	cmpl   $0x4,-0x6c(%ebp)
 8723446:	0f 85 4c fe ff ff    	jne    8723298 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x98>
 872344c:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 8723450:	e9 d5 00 00 00       	jmp    872352a <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x32a>
 8723455:	8d 76 00             	lea    0x0(%esi),%esi
 8723458:	8b 0e                	mov    (%esi),%ecx
 872345a:	85 c9                	test   %ecx,%ecx
 872345c:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 872345f:	0f 85 44 ff ff ff    	jne    87233a9 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1a9>
 8723465:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8723468:	85 c9                	test   %ecx,%ecx
 872346a:	74 d6                	je     8723442 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x242>
 872346c:	8b 4e 0c             	mov    0xc(%esi),%ecx
 872346f:	83 f8 03             	cmp    $0x3,%eax
 8723472:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 8723475:	0f 8f 57 ff ff ff    	jg     87233d2 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1d2>
 872347b:	90                   	nop
 872347c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8723480:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8723483:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8723486:	85 c0                	test   %eax,%eax
 8723488:	89 45 bc             	mov    %eax,-0x44(%ebp)
 872348b:	0f 8e 1f 01 00 00    	jle    87235b0 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3b0>
 8723491:	85 d2                	test   %edx,%edx
 8723493:	0f 8f 6a ff ff ff    	jg     8723403 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x203>
 8723499:	83 7d bc 03          	cmpl   $0x3,-0x44(%ebp)
 872349d:	7e 17                	jle    87234b6 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x2b6>
 872349f:	f6 45 bc 01          	testb  $0x1,-0x44(%ebp)
 87234a3:	0f 84 4c ff ff ff    	je     87233f5 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1f5>
 87234a9:	8b 45 08             	mov    0x8(%ebp),%eax
 87234ac:	f6 40 08 02          	testb  $0x2,0x8(%eax)
 87234b0:	0f 84 3f ff ff ff    	je     87233f5 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1f5>
 87234b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87234b9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87234bc:	85 c0                	test   %eax,%eax
 87234be:	0f 88 6c 02 00 00    	js     8723730 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x530>
 87234c4:	03 55 0c             	add    0xc(%ebp),%edx
 87234c7:	39 55 20             	cmp    %edx,0x20(%ebp)
 87234ca:	c7 45 94 06 00 00 00 	movl   $0x6,-0x6c(%ebp)
 87234d1:	c7 45 b0 06 00 00 00 	movl   $0x6,-0x50(%ebp)
 87234d8:	0f 85 17 ff ff ff    	jne    87233f5 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1f5>
 87234de:	e9 20 ff ff ff       	jmp    8723403 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x203>
 87234e3:	90                   	nop
 87234e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87234e8:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87234eb:	23 4d bc             	and    -0x44(%ebp),%ecx
 87234ee:	83 f9 03             	cmp    $0x3,%ecx
 87234f1:	0f 8f c4 02 00 00    	jg     87237bb <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x5bb>
 87234f7:	8b 56 08             	mov    0x8(%esi),%edx
 87234fa:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8723500:	c7 46 0c 01 00 00 00 	movl   $0x1,0xc(%esi)
 8723507:	c6 45 b7 01          	movb   $0x1,-0x49(%ebp)
 872350b:	89 55 94             	mov    %edx,-0x6c(%ebp)
 872350e:	e9 2f ff ff ff       	jmp    8723442 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x242>
 8723513:	90                   	nop
 8723514:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8723518:	c6 45 a3 01          	movb   $0x1,-0x5d(%ebp)
 872351c:	e9 77 fd ff ff       	jmp    8723298 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x98>
 8723521:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8723528:	31 c0                	xor    %eax,%eax
 872352a:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8723530:	5b                   	pop    %ebx
 8723531:	5e                   	pop    %esi
 8723532:	5f                   	pop    %edi
 8723533:	5d                   	pop    %ebp
 8723534:	c3                   	ret
 8723535:	8d 76 00             	lea    0x0(%esi),%esi
 8723538:	f6 45 c0 03          	testb  $0x3,-0x40(%ebp)
 872353c:	0f 84 56 fd ff ff    	je     8723298 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x98>
 8723542:	e9 da fd ff ff       	jmp    8723321 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x121>
 8723547:	90                   	nop
 8723548:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 872354b:	8b 55 b0             	mov    -0x50(%ebp),%edx
 872354e:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 8723552:	89 06                	mov    %eax,(%esi)
 8723554:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8723557:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 872355a:	89 46 04             	mov    %eax,0x4(%esi)
 872355d:	e9 c0 fe ff ff       	jmp    8723422 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x222>
 8723562:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8723568:	f6 46 10 02          	testb  $0x2,0x10(%esi)
 872356c:	0f 85 0e ff ff ff    	jne    8723480 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x280>
 8723572:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8723575:	85 c0                	test   %eax,%eax
 8723577:	0f 85 6b fe ff ff    	jne    87233e8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1e8>
 872357d:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 8723584:	e9 5f fe ff ff       	jmp    87233e8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1e8>
 8723589:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8723590:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8723593:	09 46 04             	or     %eax,0x4(%esi)
 8723596:	e9 a7 fe ff ff       	jmp    8723442 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x242>
 872359b:	90                   	nop
 872359c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87235a0:	80 7d bc 00          	cmpb   $0x0,-0x44(%ebp)
 87235a4:	0f 85 19 fe ff ff    	jne    87233c3 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1c3>
 87235aa:	e9 93 fe ff ff       	jmp    8723442 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x242>
 87235af:	90                   	nop
 87235b0:	83 fa 03             	cmp    $0x3,%edx
 87235b3:	89 55 94             	mov    %edx,-0x6c(%ebp)
 87235b6:	7f 78                	jg     8723630 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x430>
 87235b8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87235bb:	85 c9                	test   %ecx,%ecx
 87235bd:	0f 88 ad 01 00 00    	js     8723770 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x570>
 87235c3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87235c6:	03 45 0c             	add    0xc(%ebp),%eax
 87235c9:	39 45 20             	cmp    %eax,0x20(%ebp)
 87235cc:	c7 45 bc 06 00 00 00 	movl   $0x6,-0x44(%ebp)
 87235d3:	c7 45 c4 06 00 00 00 	movl   $0x6,-0x3c(%ebp)
 87235da:	0f 84 b1 fe ff ff    	je     8723491 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x291>
 87235e0:	c7 45 bc 01 00 00 00 	movl   $0x1,-0x44(%ebp)
 87235e7:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 87235ee:	e9 9e fe ff ff       	jmp    8723491 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x291>
 87235f3:	90                   	nop
 87235f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87235f8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87235fb:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 87235fe:	85 d2                	test   %edx,%edx
 8723600:	89 16                	mov    %edx,(%esi)
 8723602:	89 4e 04             	mov    %ecx,0x4(%esi)
 8723605:	74 1c                	je     8723623 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x423>
 8723607:	0f b6 55 bc          	movzbl -0x44(%ebp),%edx
 872360b:	85 c0                	test   %eax,%eax
 872360d:	88 55 b7             	mov    %dl,-0x49(%ebp)
 8723610:	0f 84 82 fc ff ff    	je     8723298 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x98>
 8723616:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8723619:	f6 41 08 01          	testb  $0x1,0x8(%ecx)
 872361d:	0f 84 ea 00 00 00    	je     872370d <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x50d>
 8723623:	0f b6 4d bc          	movzbl -0x44(%ebp),%ecx
 8723627:	88 4d b7             	mov    %cl,-0x49(%ebp)
 872362a:	e9 13 fe ff ff       	jmp    8723442 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x242>
 872362f:	90                   	nop
 8723630:	f6 c2 01             	test   $0x1,%dl
 8723633:	74 0d                	je     8723642 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x442>
 8723635:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8723638:	f6 41 08 02          	testb  $0x2,0x8(%ecx)
 872363c:	0f 85 76 ff ff ff    	jne    87235b8 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3b8>
 8723642:	c7 45 bc 01 00 00 00 	movl   $0x1,-0x44(%ebp)
 8723649:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 8723650:	e9 ae fd ff ff       	jmp    8723403 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x203>
 8723655:	8d 76 00             	lea    0x0(%esi),%esi
 8723658:	80 7d a3 00          	cmpb   $0x0,-0x5d(%ebp)
 872365c:	0f 84 ea fd ff ff    	je     872344c <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x24c>
 8723662:	80 7d af 00          	cmpb   $0x0,-0x51(%ebp)
 8723666:	0f 84 e0 fd ff ff    	je     872344c <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x24c>
 872366c:	c6 45 af 00          	movb   $0x0,-0x51(%ebp)
 8723670:	e9 1b fc ff ff       	jmp    8723290 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x90>
 8723675:	8d 76 00             	lea    0x0(%esi),%esi
 8723678:	8b 45 08             	mov    0x8(%ebp),%eax
 872367b:	8b 55 1c             	mov    0x1c(%ebp),%edx
 872367e:	8b 78 04             	mov    0x4(%eax),%edi
 8723681:	8b 42 04             	mov    0x4(%edx),%eax
 8723684:	39 c7                	cmp    %eax,%edi
 8723686:	74 1d                	je     87236a5 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x4a5>
 8723688:	80 3f 2a             	cmpb   $0x2a,(%edi)
 872368b:	0f 84 aa fb ff ff    	je     872323b <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3b>
 8723691:	89 44 24 04          	mov    %eax,0x4(%esp)
 8723695:	89 3c 24             	mov    %edi,(%esp)
 8723698:	e8 43 ae 95 ff       	call   807e4e0 <strcmp@plt>
 872369d:	85 c0                	test   %eax,%eax
 872369f:	0f 85 96 fb ff ff    	jne    872323b <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3b>
 87236a5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87236a8:	31 c0                	xor    %eax,%eax
 87236aa:	89 4e 08             	mov    %ecx,0x8(%esi)
 87236ad:	e9 78 fe ff ff       	jmp    872352a <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x32a>
 87236b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87236b8:	89 d7                	mov    %edx,%edi
 87236ba:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87236bd:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
 87236c1:	89 7e 0c             	mov    %edi,0xc(%esi)
 87236c4:	89 16                	mov    %edx,(%esi)
 87236c6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87236c9:	89 56 04             	mov    %edx,0x4(%esi)
 87236cc:	e9 59 fe ff ff       	jmp    872352a <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x32a>
 87236d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87236d8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87236db:	8b 45 18             	mov    0x18(%ebp),%eax
 87236de:	8b 55 10             	mov    0x10(%ebp),%edx
 87236e1:	85 c9                	test   %ecx,%ecx
 87236e3:	89 06                	mov    %eax,(%esi)
 87236e5:	89 56 04             	mov    %edx,0x4(%esi)
 87236e8:	78 2e                	js     8723718 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x518>
 87236ea:	8b 45 18             	mov    0x18(%ebp),%eax
 87236ed:	03 45 0c             	add    0xc(%ebp),%eax
 87236f0:	39 45 20             	cmp    %eax,0x20(%ebp)
 87236f3:	0f 94 c0             	sete   %al
 87236f6:	0f b6 c0             	movzbl %al,%eax
 87236f9:	8d 44 80 01          	lea    0x1(%eax,%eax,4),%eax
 87236fd:	89 46 0c             	mov    %eax,0xc(%esi)
 8723700:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8723706:	31 c0                	xor    %eax,%eax
 8723708:	5b                   	pop    %ebx
 8723709:	5e                   	pop    %esi
 872370a:	5f                   	pop    %edi
 872370b:	5d                   	pop    %ebp
 872370c:	c3                   	ret
 872370d:	89 d0                	mov    %edx,%eax
 872370f:	e9 16 fe ff ff       	jmp    872352a <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x32a>
 8723714:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8723718:	83 7d 0c fe          	cmpl   $0xfffffffe,0xc(%ebp)
 872371c:	0f 85 06 fe ff ff    	jne    8723528 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x328>
 8723722:	c7 46 0c 01 00 00 00 	movl   $0x1,0xc(%esi)
 8723729:	31 c0                	xor    %eax,%eax
 872372b:	e9 fa fd ff ff       	jmp    872352a <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x32a>
 8723730:	83 7d 0c fe          	cmpl   $0xfffffffe,0xc(%ebp)
 8723734:	0f 84 bb fc ff ff    	je     87233f5 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x1f5>
 872373a:	8b 4d 14             	mov    0x14(%ebp),%ecx
 872373d:	8b 01                	mov    (%ecx),%eax
 872373f:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8723742:	89 54 24 08          	mov    %edx,0x8(%esp)
 8723746:	8b 55 0c             	mov    0xc(%ebp),%edx
 8723749:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 872374d:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8723750:	89 54 24 04          	mov    %edx,0x4(%esp)
 8723754:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8723758:	8b 4d 14             	mov    0x14(%ebp),%ecx
 872375b:	89 0c 24             	mov    %ecx,(%esp)
 872375e:	ff 50 20             	call   *0x20(%eax)
 8723761:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8723764:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8723767:	e9 97 fc ff ff       	jmp    8723403 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x203>
 872376c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8723770:	83 7d 0c fe          	cmpl   $0xfffffffe,0xc(%ebp)
 8723774:	0f 84 66 fe ff ff    	je     87235e0 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x3e0>
 872377a:	8b 4d 20             	mov    0x20(%ebp),%ecx
 872377d:	8b 45 14             	mov    0x14(%ebp),%eax
 8723780:	89 55 9c             	mov    %edx,-0x64(%ebp)
 8723783:	8b 00                	mov    (%eax),%eax
 8723785:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8723789:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 872378c:	89 45 90             	mov    %eax,-0x70(%ebp)
 872378f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8723792:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8723796:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8723799:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872379d:	8b 45 0c             	mov    0xc(%ebp),%eax
 87237a0:	89 0c 24             	mov    %ecx,(%esp)
 87237a3:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 87237a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87237aa:	ff 51 20             	call   *0x20(%ecx)
 87237ad:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87237b0:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87237b3:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87237b6:	e9 d6 fc ff ff       	jmp    8723491 <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x291>
 87237bb:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87237c1:	b8 01 00 00 00       	mov    $0x1,%eax
 87237c6:	c7 46 0c 02 00 00 00 	movl   $0x2,0xc(%esi)
 87237cd:	e9 58 fd ff ff       	jmp    872352a <_ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastEiNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE+0x32a>
 87237d2:	90                   	nop
 87237d3:	90                   	nop
 87237d4:	90                   	nop
 87237d5:	90                   	nop
 87237d6:	90                   	nop
 87237d7:	90                   	nop
 87237d8:	90                   	nop
 87237d9:	90                   	nop
 87237da:	90                   	nop
 87237db:	90                   	nop
 87237dc:	90                   	nop
 87237dd:	90                   	nop
 87237de:	90                   	nop
 87237df:	90                   	nop

```

```c
// __cxxabiv1::__vmi_class_type_info::__do_dyncast @ 0x8723200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_dyncast
          (__vmi_class_type_info *this,int param_1,uint param_3,int *param_4,int *param_5,
          int param_6,int *param_7,int *param_8)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *__s1;
  uint local_70;
  bool local_55;
  uint local_54;
  char local_4d;
  uint local_48;
  int local_44;
  uint local_40;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((*(byte *)(param_8 + 4) & 0x10) != 0) {
    param_8[4] = *(int *)(this + 8);
  }
  if (param_5 == param_7) {
    __s1 = *(char **)(this + 4);
    if ((__s1 == *(char **)(param_6 + 4)) ||
       ((*__s1 != '*' && (iVar4 = strcmp(__s1,*(char **)(param_6 + 4)), iVar4 == 0)))) {
      param_8[2] = param_3;
      return '\0';
    }
  }
  else {
    __s1 = *(char **)(this + 4);
  }
  if (((char *)param_4[1] == __s1) ||
     ((*__s1 != '*' && (iVar4 = strcmp(__s1,(char *)param_4[1]), iVar4 == 0)))) {
    *param_8 = (int)param_5;
    param_8[1] = param_3;
    if (param_1 < 0) {
      if (param_1 == -2) {
        param_8[3] = 1;
      }
      return '\0';
    }
    param_8[3] = (uint)(param_7 == (int *)((int)param_5 + param_1)) * 5 + 1;
    return '\0';
  }
  local_4d = '\0';
  uVar5 = (int)param_7 - param_1 & ~(param_1 >> 0x1f);
  bVar2 = false;
  local_55 = true;
  do {
    iVar4 = *(int *)(this + 0xc);
LAB_08723298:
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      local_20 = param_8[4];
      local_30 = 0;
      local_2c = 0;
      uVar1 = *(uint *)(this + iVar4 * 8 + 0x14);
      local_40 = (int)uVar1 >> 8;
      local_28 = 0;
      local_24 = 0;
      local_48 = param_3;
      if ((uVar1 & 1) != 0) {
        local_40 = *(int *)(local_40 + *param_5);
        local_48 = param_3 | 1;
      }
      if ((uVar5 == 0) || (uVar5 < local_40 + (int)param_5 != local_55)) {
        if ((uVar1 & 2) == 0) goto code_r0x08723317;
        goto LAB_08723325;
      }
      bVar2 = true;
    }
    if (!bVar2) {
      return local_4d;
    }
    if (local_55 == false) {
      return local_4d;
    }
    local_55 = false;
  } while( true );
code_r0x08723317:
  if ((param_1 == -2) && ((local_20 & 3) == 0)) goto LAB_08723298;
  local_48 = local_48 & 0xfffffffd;
LAB_08723325:
  cVar3 = (**(code **)(**(int **)(this + iVar4 * 8 + 0x10) + 0x1c))
                    (*(int **)(this + iVar4 * 8 + 0x10),param_1,local_48,param_4,
                     local_40 + (int)param_5,param_6,param_7,&local_30);
  uVar1 = local_24;
  local_54 = local_24;
  local_70 = local_28 | param_8[2];
  param_8[2] = local_70;
  if ((local_24 == 2) || (local_24 == 6)) {
    param_8[3] = local_24;
    *param_8 = local_30;
    param_8[1] = local_2c;
    return cVar3;
  }
  if (local_4d == '\0') {
    local_44 = *param_8;
    if (local_44 == 0) {
      *param_8 = local_30;
      param_8[1] = local_2c;
      local_4d = cVar3;
      if (local_30 != 0) {
        if (local_70 == 0) goto LAB_08723298;
        if (((byte)this[8] & 1) == 0) {
          return cVar3;
        }
      }
      goto LAB_08723442;
    }
LAB_087233a9:
    if (local_44 == local_30) {
      param_8[1] = param_8[1] | local_2c;
      goto LAB_08723442;
    }
    if ((local_30 == 0) && (cVar3 == '\0')) goto LAB_08723442;
    local_40 = param_8[3];
  }
  else {
    local_44 = *param_8;
    if (local_44 != 0) goto LAB_087233a9;
    if (local_30 == 0) goto LAB_08723442;
    local_40 = param_8[3];
  }
  if ((3 < (int)local_70) && (((local_70 & 1) == 0 || ((*(byte *)(param_8 + 4) & 2) == 0)))) {
    if (local_40 == 0) {
      local_40 = 1;
    }
    if (local_24 == 0) goto LAB_087233f5;
    goto LAB_08723403;
  }
  if (0 < (int)local_40) goto LAB_08723491;
  if ((3 < (int)local_24) && (((local_24 & 1) == 0 || (((byte)this[8] & 2) == 0)))) {
    local_40 = 1;
    goto LAB_08723403;
  }
  if (param_1 < 0) {
    if (param_1 == -2) goto LAB_087235e0;
    local_40 = (**(code **)(*param_4 + 0x20))(param_4,param_1,local_44,param_6,param_7);
  }
  else {
    local_40 = 6;
    if (param_7 != (int *)(local_44 + param_1)) {
LAB_087235e0:
      local_40 = 1;
    }
  }
LAB_08723491:
  if (0 < (int)uVar1) goto LAB_08723403;
  if (((int)local_40 < 4) || (((local_40 & 1) != 0 && (((byte)this[8] & 2) != 0)))) {
    if (param_1 < 0) {
      if (param_1 == -2) goto LAB_087233f5;
      local_54 = (**(code **)(*param_4 + 0x20))(param_4,param_1,local_30,param_6,param_7);
    }
    else {
      local_54 = 6;
      if (param_7 != (int *)(local_30 + param_1)) goto LAB_087233f5;
    }
  }
  else {
LAB_087233f5:
    local_54 = 1;
  }
LAB_08723403:
  if ((int)(local_40 ^ local_54) < 4) {
    if (3 < (int)(local_54 & local_40)) {
      *param_8 = 0;
      param_8[3] = 2;
      return '\x01';
    }
    local_70 = param_8[2];
    *param_8 = 0;
    param_8[3] = 1;
    local_4d = '\x01';
  }
  else {
    if (3 < (int)local_54) {
      local_40 = local_54;
      local_4d = '\0';
      *param_8 = local_30;
      param_8[1] = local_2c;
    }
    param_8[3] = local_40;
    if ((local_40 & 2) != 0) {
      return '\0';
    }
    if ((local_40 & 1) == 0) {
      return '\0';
    }
    local_70 = param_8[2];
  }
LAB_08723442:
  if (local_70 == 4) {
    return local_4d;
  }
  goto LAB_08723298;
}

```

---

## __do_find_public_src

```asm
// === 08722e70 __cxxabiv1::__vmi_class_type_info::__do_find_public_src  [0x08722e70-0x8722f5f] ===
 8722e70:	55                   	push   %ebp
 8722e71:	89 e5                	mov    %esp,%ebp
 8722e73:	57                   	push   %edi
 8722e74:	56                   	push   %esi
 8722e75:	53                   	push   %ebx
 8722e76:	83 ec 4c             	sub    $0x4c,%esp
 8722e79:	8b 45 18             	mov    0x18(%ebp),%eax
 8722e7c:	e8 77 ff ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8722e81:	81 c3 17 9d c4 00    	add    $0xc49d17,%ebx
 8722e87:	8b 75 08             	mov    0x8(%ebp),%esi
 8722e8a:	39 45 10             	cmp    %eax,0x10(%ebp)
 8722e8d:	0f 84 8e 00 00 00    	je     8722f21 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0xb1>
 8722e93:	8b 7e 0c             	mov    0xc(%esi),%edi
 8722e96:	8d 74 fe 0c          	lea    0xc(%esi,%edi,8),%esi
 8722e9a:	eb 5f                	jmp    8722efb <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x8b>
 8722e9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8722ea0:	8b 16                	mov    (%esi),%edx
 8722ea2:	83 ef 01             	sub    $0x1,%edi
 8722ea5:	f6 c2 02             	test   $0x2,%dl
 8722ea8:	74 4e                	je     8722ef8 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x88>
 8722eaa:	89 d0                	mov    %edx,%eax
 8722eac:	89 d1                	mov    %edx,%ecx
 8722eae:	c1 f8 08             	sar    $0x8,%eax
 8722eb1:	83 e1 01             	and    $0x1,%ecx
 8722eb4:	88 4d e7             	mov    %cl,-0x19(%ebp)
 8722eb7:	74 0d                	je     8722ec6 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x56>
 8722eb9:	83 7d 0c fd          	cmpl   $0xfffffffd,0xc(%ebp)
 8722ebd:	74 39                	je     8722ef8 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x88>
 8722ebf:	8b 55 10             	mov    0x10(%ebp),%edx
 8722ec2:	03 02                	add    (%edx),%eax
 8722ec4:	8b 00                	mov    (%eax),%eax
 8722ec6:	8b 56 fc             	mov    -0x4(%esi),%edx
 8722ec9:	03 45 10             	add    0x10(%ebp),%eax
 8722ecc:	8b 0a                	mov    (%edx),%ecx
 8722ece:	89 44 24 08          	mov    %eax,0x8(%esp)
 8722ed2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722ed5:	89 14 24             	mov    %edx,(%esp)
 8722ed8:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8722edb:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8722ede:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8722ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722ee5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8722ee9:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8722eec:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8722ef0:	ff 52 20             	call   *0x20(%edx)
 8722ef3:	83 f8 03             	cmp    $0x3,%eax
 8722ef6:	7f 18                	jg     8722f10 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0xa0>
 8722ef8:	83 ee 08             	sub    $0x8,%esi
 8722efb:	85 ff                	test   %edi,%edi
 8722efd:	75 a1                	jne    8722ea0 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x30>
 8722eff:	b8 01 00 00 00       	mov    $0x1,%eax
 8722f04:	83 c4 4c             	add    $0x4c,%esp
 8722f07:	5b                   	pop    %ebx
 8722f08:	5e                   	pop    %esi
 8722f09:	5f                   	pop    %edi
 8722f0a:	5d                   	pop    %ebp
 8722f0b:	c3                   	ret
 8722f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8722f10:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8722f14:	74 ee                	je     8722f04 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x94>
 8722f16:	83 c4 4c             	add    $0x4c,%esp
 8722f19:	83 c8 01             	or     $0x1,%eax
 8722f1c:	5b                   	pop    %ebx
 8722f1d:	5e                   	pop    %esi
 8722f1e:	5f                   	pop    %edi
 8722f1f:	5d                   	pop    %ebp
 8722f20:	c3                   	ret
 8722f21:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8722f24:	8b 46 04             	mov    0x4(%esi),%eax
 8722f27:	8b 51 04             	mov    0x4(%ecx),%edx
 8722f2a:	39 d0                	cmp    %edx,%eax
 8722f2c:	74 1d                	je     8722f4b <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0xdb>
 8722f2e:	80 38 2a             	cmpb   $0x2a,(%eax)
 8722f31:	0f 84 5c ff ff ff    	je     8722e93 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x23>
 8722f37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8722f3b:	89 04 24             	mov    %eax,(%esp)
 8722f3e:	e8 9d b5 95 ff       	call   807e4e0 <strcmp@plt>
 8722f43:	85 c0                	test   %eax,%eax
 8722f45:	0f 85 48 ff ff ff    	jne    8722e93 <_ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcEiPKvPKNS_17__class_type_infoES2_+0x23>
 8722f4b:	83 c4 4c             	add    $0x4c,%esp
 8722f4e:	b8 06 00 00 00       	mov    $0x6,%eax
 8722f53:	5b                   	pop    %ebx
 8722f54:	5e                   	pop    %esi
 8722f55:	5f                   	pop    %edi
 8722f56:	5d                   	pop    %ebp
 8722f57:	c3                   	ret
 8722f58:	90                   	nop
 8722f59:	90                   	nop
 8722f5a:	90                   	nop
 8722f5b:	90                   	nop
 8722f5c:	90                   	nop
 8722f5d:	90                   	nop
 8722f5e:	90                   	nop
 8722f5f:	90                   	nop

```

```c
// __cxxabiv1::__vmi_class_type_info::__do_find_public_src @ 0x8722e70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

uint __thiscall
__cxxabiv1::__vmi_class_type_info::__do_find_public_src
          (__vmi_class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  uint uVar3;
  __vmi_class_type_info *p_Var4;
  int iVar5;
  
  if (param_2 == param_4) {
    __s1 = *(char **)(this + 4);
    if (__s1 == *(char **)(param_3 + 4)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar5 = strcmp(__s1,*(char **)(param_3 + 4)), iVar5 == 0)) {
      return 6;
    }
  }
  iVar5 = *(int *)(this + 0xc);
  p_Var4 = this + iVar5 * 8 + 0xc;
  do {
    if (iVar5 == 0) {
      return 1;
    }
    uVar1 = *(uint *)p_Var4;
    iVar5 = iVar5 + -1;
    if ((uVar1 & 2) != 0) {
      iVar2 = (int)uVar1 >> 8;
      if ((uVar1 & 1) != 0) {
        if (param_1 == -3) goto LAB_08722ef8;
        iVar2 = *(int *)(iVar2 + *(int *)param_2);
      }
      uVar3 = (**(code **)(**(int **)(p_Var4 + -4) + 0x20))
                        (*(int **)(p_Var4 + -4),param_1,iVar2 + (int)param_2,param_3,param_4);
      if (3 < (int)uVar3) {
        if ((char)(uVar1 & 1) == '\0') {
          return uVar3;
        }
        return uVar3 | 1;
      }
    }
LAB_08722ef8:
    p_Var4 = p_Var4 + -8;
  } while( true );
}

```

---

## __do_upcast

```asm
// === 08722fd0 __cxxabiv1::__vmi_class_type_info::__do_upcast  [0x08722fd0-0x87231ff] ===
 8722fd0:	55                   	push   %ebp
 8722fd1:	89 e5                	mov    %esp,%ebp
 8722fd3:	57                   	push   %edi
 8722fd4:	56                   	push   %esi
 8722fd5:	53                   	push   %ebx
 8722fd6:	e8 1d fe ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8722fdb:	81 c3 bd 9b c4 00    	add    $0xc49bbd,%ebx
 8722fe1:	83 ec 4c             	sub    $0x4c,%esp
 8722fe4:	8b 7d 08             	mov    0x8(%ebp),%edi
 8722fe7:	8b 45 14             	mov    0x14(%ebp),%eax
 8722fea:	8b 55 10             	mov    0x10(%ebp),%edx
 8722fed:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8722ff0:	89 3c 24             	mov    %edi,(%esp)
 8722ff3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8722ff7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8722ffb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8722fff:	e8 8c 1a 00 00       	call   8724a90 <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE>
 8723004:	84 c0                	test   %al,%al
 8723006:	0f 85 54 01 00 00    	jne    8723160 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x190>
 872300c:	8b 45 14             	mov    0x14(%ebp),%eax
 872300f:	8b 40 08             	mov    0x8(%eax),%eax
 8723012:	a8 10                	test   $0x10,%al
 8723014:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8723017:	0f 85 bb 01 00 00    	jne    87231d8 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x208>
 872301d:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 8723021:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8723024:	8b 77 0c             	mov    0xc(%edi),%esi
 8723027:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 872302a:	83 e0 01             	and    $0x1,%eax
 872302d:	88 45 cb             	mov    %al,-0x35(%ebp)
 8723030:	85 f6                	test   %esi,%esi
 8723032:	0f 84 cf 00 00 00    	je     8723107 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x137>
 8723038:	83 ee 01             	sub    $0x1,%esi
 872303b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 872303e:	8b 44 f7 14          	mov    0x14(%edi,%esi,8),%eax
 8723042:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8723049:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8723050:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8723053:	89 c2                	mov    %eax,%edx
 8723055:	d1 ea                	shr    $1,%edx
 8723057:	89 d1                	mov    %edx,%ecx
 8723059:	83 e1 01             	and    $0x1,%ecx
 872305c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8723063:	88 4d d6             	mov    %cl,-0x2a(%ebp)
 8723066:	75 06                	jne    872306e <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x9e>
 8723068:	80 7d cb 00          	cmpb   $0x0,-0x35(%ebp)
 872306c:	74 c2                	je     8723030 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x60>
 872306e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8723071:	89 c2                	mov    %eax,%edx
 8723073:	83 e2 01             	and    $0x1,%edx
 8723076:	88 55 d7             	mov    %dl,-0x29(%ebp)
 8723079:	31 d2                	xor    %edx,%edx
 872307b:	85 c9                	test   %ecx,%ecx
 872307d:	74 15                	je     8723094 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0xc4>
 872307f:	c1 f8 08             	sar    $0x8,%eax
 8723082:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 8723086:	74 07                	je     872308f <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0xbf>
 8723088:	8b 4d 10             	mov    0x10(%ebp),%ecx
 872308b:	03 01                	add    (%ecx),%eax
 872308d:	8b 00                	mov    (%eax),%eax
 872308f:	8b 55 10             	mov    0x10(%ebp),%edx
 8723092:	01 c2                	add    %eax,%edx
 8723094:	8b 44 f7 10          	mov    0x10(%edi,%esi,8),%eax
 8723098:	8b 08                	mov    (%eax),%ecx
 872309a:	89 54 24 08          	mov    %edx,0x8(%esp)
 872309e:	8b 55 0c             	mov    0xc(%ebp),%edx
 87230a1:	89 04 24             	mov    %eax,(%esp)
 87230a4:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87230a7:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 87230aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 87230ae:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87230b2:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87230b5:	ff 51 18             	call   *0x18(%ecx)
 87230b8:	84 c0                	test   %al,%al
 87230ba:	0f 84 70 ff ff ff    	je     8723030 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x60>
 87230c0:	83 7d e4 08          	cmpl   $0x8,-0x1c(%ebp)
 87230c4:	74 5a                	je     8723120 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x150>
 87230c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87230c9:	83 f8 03             	cmp    $0x3,%eax
 87230cc:	7e 0c                	jle    87230da <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x10a>
 87230ce:	80 7d d6 00          	cmpb   $0x0,-0x2a(%ebp)
 87230d2:	75 06                	jne    87230da <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x10a>
 87230d4:	83 e0 fd             	and    $0xfffffffd,%eax
 87230d7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87230da:	8b 45 14             	mov    0x14(%ebp),%eax
 87230dd:	8b 50 0c             	mov    0xc(%eax),%edx
 87230e0:	85 d2                	test   %edx,%edx
 87230e2:	74 4c                	je     8723130 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x160>
 87230e4:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87230e7:	8b 01                	mov    (%ecx),%eax
 87230e9:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 87230ec:	0f 85 f1 00 00 00    	jne    87231e3 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x213>
 87230f2:	85 c0                	test   %eax,%eax
 87230f4:	74 7a                	je     8723170 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x1a0>
 87230f6:	8b 55 14             	mov    0x14(%ebp),%edx
 87230f9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87230fc:	09 42 04             	or     %eax,0x4(%edx)
 87230ff:	85 f6                	test   %esi,%esi
 8723101:	0f 85 31 ff ff ff    	jne    8723038 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x68>
 8723107:	8b 45 14             	mov    0x14(%ebp),%eax
 872310a:	8b 40 04             	mov    0x4(%eax),%eax
 872310d:	85 c0                	test   %eax,%eax
 872310f:	0f 95 c0             	setne  %al
 8723112:	83 c4 4c             	add    $0x4c,%esp
 8723115:	5b                   	pop    %ebx
 8723116:	5e                   	pop    %esi
 8723117:	5f                   	pop    %edi
 8723118:	5d                   	pop    %ebp
 8723119:	c3                   	ret
 872311a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8723120:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 8723124:	74 a0                	je     87230c6 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0xf6>
 8723126:	8b 44 f7 10          	mov    0x10(%edi,%esi,8),%eax
 872312a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 872312d:	eb 97                	jmp    87230c6 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0xf6>
 872312f:	90                   	nop
 8723130:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8723133:	8b 55 14             	mov    0x14(%ebp),%edx
 8723136:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8723139:	89 02                	mov    %eax,(%edx)
 872313b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 872313e:	89 42 04             	mov    %eax,0x4(%edx)
 8723141:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8723144:	83 f8 03             	cmp    $0x3,%eax
 8723147:	89 51 08             	mov    %edx,0x8(%ecx)
 872314a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 872314d:	89 51 0c             	mov    %edx,0xc(%ecx)
 8723150:	7e 0e                	jle    8723160 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x190>
 8723152:	a8 02                	test   $0x2,%al
 8723154:	74 6a                	je     87231c0 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x1f0>
 8723156:	f6 47 08 01          	testb  $0x1,0x8(%edi)
 872315a:	0f 85 d0 fe ff ff    	jne    8723030 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x60>
 8723160:	83 c4 4c             	add    $0x4c,%esp
 8723163:	b8 01 00 00 00       	mov    $0x1,%eax
 8723168:	5b                   	pop    %ebx
 8723169:	5e                   	pop    %esi
 872316a:	5f                   	pop    %edi
 872316b:	5d                   	pop    %ebp
 872316c:	c3                   	ret
 872316d:	8d 76 00             	lea    0x0(%esi),%esi
 8723170:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8723173:	83 f8 08             	cmp    $0x8,%eax
 8723176:	74 2c                	je     87231a4 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x1d4>
 8723178:	83 fa 08             	cmp    $0x8,%edx
 872317b:	74 27                	je     87231a4 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x1d4>
 872317d:	8b 40 04             	mov    0x4(%eax),%eax
 8723180:	8b 52 04             	mov    0x4(%edx),%edx
 8723183:	39 d0                	cmp    %edx,%eax
 8723185:	0f 84 6b ff ff ff    	je     87230f6 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x126>
 872318b:	80 38 2a             	cmpb   $0x2a,(%eax)
 872318e:	74 14                	je     87231a4 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x1d4>
 8723190:	89 54 24 04          	mov    %edx,0x4(%esp)
 8723194:	89 04 24             	mov    %eax,(%esp)
 8723197:	e8 44 b3 95 ff       	call   807e4e0 <strcmp@plt>
 872319c:	85 c0                	test   %eax,%eax
 872319e:	0f 84 52 ff ff ff    	je     87230f6 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x126>
 87231a4:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87231a7:	b8 01 00 00 00       	mov    $0x1,%eax
 87231ac:	c7 41 04 02 00 00 00 	movl   $0x2,0x4(%ecx)
 87231b3:	83 c4 4c             	add    $0x4c,%esp
 87231b6:	5b                   	pop    %ebx
 87231b7:	5e                   	pop    %esi
 87231b8:	5f                   	pop    %edi
 87231b9:	5d                   	pop    %ebp
 87231ba:	c3                   	ret
 87231bb:	90                   	nop
 87231bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87231c0:	a8 01                	test   $0x1,%al
 87231c2:	74 9c                	je     8723160 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x190>
 87231c4:	f6 47 08 02          	testb  $0x2,0x8(%edi)
 87231c8:	0f 85 62 fe ff ff    	jne    8723030 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x60>
 87231ce:	66 90                	xchg   %ax,%ax
 87231d0:	eb 8e                	jmp    8723160 <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x190>
 87231d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87231d8:	8b 57 08             	mov    0x8(%edi),%edx
 87231db:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87231de:	e9 3a fe ff ff       	jmp    872301d <_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE+0x4d>
 87231e3:	c7 01 00 00 00 00    	movl   $0x0,(%ecx)
 87231e9:	b8 01 00 00 00       	mov    $0x1,%eax
 87231ee:	c7 41 04 02 00 00 00 	movl   $0x2,0x4(%ecx)
 87231f5:	83 c4 4c             	add    $0x4c,%esp
 87231f8:	5b                   	pop    %ebx
 87231f9:	5e                   	pop    %esi
 87231fa:	5f                   	pop    %edi
 87231fb:	5d                   	pop    %ebp
 87231fc:	c3                   	ret
 87231fd:	90                   	nop
 87231fe:	90                   	nop
 87231ff:	90                   	nop

```

```c
// __cxxabiv1::__vmi_class_type_info::__do_upcast @ 0x8722fd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__vmi_class_type_info::__do_upcast
          (__vmi_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  uint uVar1;
  char *__s1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_34;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8722fdb;
  cVar3 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar3 == '\0') {
    local_34 = *(uint *)(param_3 + 8);
    if ((local_34 & 0x10) != 0) {
      local_34 = *(uint *)(this + 8);
    }
    iVar6 = *(int *)(this + 0xc);
    do {
      while( true ) {
        do {
          do {
            if (iVar6 == 0) {
              return CONCAT31((int3)((uint)*(int *)(param_3 + 4) >> 8),*(int *)(param_3 + 4) != 0);
            }
            iVar6 = iVar6 + -1;
            uVar1 = *(uint *)(this + iVar6 * 8 + 0x14);
            local_2c = 0;
            local_28 = 0;
            local_24 = local_34;
            uVar4 = uVar1 >> 1 & 1;
            local_20 = 0;
          } while ((uVar4 == 0) && ((local_34 & 1) == 0));
          iVar5 = 0;
          if (param_2 != (void *)0x0) {
            iVar5 = (int)uVar1 >> 8;
            if ((uVar1 & 1) != 0) {
              iVar5 = *(int *)(iVar5 + *(int *)param_2);
            }
            iVar5 = (int)param_2 + iVar5;
          }
          cVar3 = (**(code **)(**(int **)(this + iVar6 * 8 + 0x10) + 0x18))
                            (*(int **)(this + iVar6 * 8 + 0x10),param_1,iVar5,&local_2c);
        } while (cVar3 == '\0');
        if ((local_20 == 8) && ((uVar1 & 1) != 0)) {
          local_20 = *(int *)(this + iVar6 * 8 + 0x10);
        }
        if ((3 < (int)local_28) && ((char)uVar4 == '\0')) {
          local_28 = local_28 & 0xfffffffd;
        }
        iVar5 = *(int *)(param_3 + 0xc);
        if (iVar5 == 0) break;
        if (*(int *)param_3 != local_2c) {
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)(param_3 + 4) = 2;
          return 1;
        }
        if (*(int *)param_3 == 0) {
          if ((local_20 == 8) || (iVar5 == 8)) {
LAB_087231a4:
            *(undefined4 *)(param_3 + 4) = 2;
            return 1;
          }
          __s1 = *(char **)(local_20 + 4);
          if ((__s1 != *(char **)(iVar5 + 4)) &&
             ((*__s1 == '*' || (iVar5 = strcmp(__s1,*(char **)(iVar5 + 4)), iVar5 != 0))))
          goto LAB_087231a4;
        }
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | local_28;
      }
      *(int *)param_3 = local_2c;
      *(uint *)(param_3 + 4) = local_28;
      *(uint *)(param_3 + 8) = local_24;
      *(int *)(param_3 + 0xc) = local_20;
      if ((int)local_28 < 4) {
        return 1;
      }
      if ((local_28 & 2) == 0) {
        if ((local_28 & 1) == 0) {
          return 1;
        }
        bVar2 = (byte)this[8] & 2;
      }
      else {
        bVar2 = (byte)this[8] & 1;
      }
    } while (bVar2 != 0);
  }
  return 1;
}

```

---

## ~__vmi_class_type_info

```asm
// === 08722f60 __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info  [0x08722f60-0x8722f8f] ===
 8722f60:	55                   	push   %ebp
 8722f61:	89 e5                	mov    %esp,%ebp
 8722f63:	53                   	push   %ebx
 8722f64:	e8 8f fe ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8722f69:	81 c3 2f 9c c4 00    	add    $0xc49c2f,%ebx
 8722f6f:	83 ec 14             	sub    $0x14,%esp
 8722f72:	8b 45 08             	mov    0x8(%ebp),%eax
 8722f75:	8b 93 5c fc ff ff    	mov    -0x3a4(%ebx),%edx
 8722f7b:	83 c2 08             	add    $0x8,%edx
 8722f7e:	89 10                	mov    %edx,(%eax)
 8722f80:	89 04 24             	mov    %eax,(%esp)
 8722f83:	e8 08 1a 00 00       	call   8724990 <_ZN10__cxxabiv117__class_type_infoD1Ev>
 8722f88:	83 c4 14             	add    $0x14,%esp
 8722f8b:	5b                   	pop    %ebx
 8722f8c:	5d                   	pop    %ebp
 8722f8d:	c3                   	ret
 8722f8e:	90                   	nop
 8722f8f:	90                   	nop

```

```c
// __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info @ 0x8722f60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c7f4 + 8;
  __class_type_info::~__class_type_info((__class_type_info *)this);
  return;
}

```

---

## ~__vmi_class_type_info_08722f90

```asm
// === 08722f90 __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info  [0x08722f90-0x8722fcf] ===
 8722f90:	55                   	push   %ebp
 8722f91:	89 e5                	mov    %esp,%ebp
 8722f93:	83 ec 18             	sub    $0x18,%esp
 8722f96:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8722f99:	e8 5a fe ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8722f9e:	81 c3 fa 9b c4 00    	add    $0xc49bfa,%ebx
 8722fa4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8722fa7:	8b 75 08             	mov    0x8(%ebp),%esi
 8722faa:	89 34 24             	mov    %esi,(%esp)
 8722fad:	e8 ae ff ff ff       	call   8722f60 <_ZN10__cxxabiv121__vmi_class_type_infoD1Ev>
 8722fb2:	89 34 24             	mov    %esi,(%esp)
 8722fb5:	e8 36 15 00 00       	call   87244f0 <_ZdlPv>
 8722fba:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8722fbd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8722fc0:	89 ec                	mov    %ebp,%esp
 8722fc2:	5d                   	pop    %ebp
 8722fc3:	c3                   	ret
 8722fc4:	90                   	nop
 8722fc5:	90                   	nop
 8722fc6:	90                   	nop
 8722fc7:	90                   	nop
 8722fc8:	90                   	nop
 8722fc9:	90                   	nop
 8722fca:	90                   	nop
 8722fcb:	90                   	nop
 8722fcc:	90                   	nop
 8722fcd:	90                   	nop
 8722fce:	90                   	nop
 8722fcf:	90                   	nop

```

```c
// __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info @ 0x8722f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info() */

void __thiscall
__cxxabiv1::__vmi_class_type_info::~__vmi_class_type_info(__vmi_class_type_info *this)

{
  ~__vmi_class_type_info(this);
  operator_delete(this);
  return;
}

```

