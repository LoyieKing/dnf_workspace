# TiXmlAttribute

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## DoubleValue

```asm
// === 087e08b0 TiXmlAttribute::DoubleValue  [0x087e08b0-0x87e08cf] ===
 87e08b0:	55                   	push   %ebp
 87e08b1:	89 e5                	mov    %esp,%ebp
 87e08b3:	83 ec 18             	sub    $0x18,%esp
 87e08b6:	8b 45 08             	mov    0x8(%ebp),%eax
 87e08b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87e08c0:	00 
 87e08c1:	8b 40 18             	mov    0x18(%eax),%eax
 87e08c4:	89 04 24             	mov    %eax,(%esp)
 87e08c7:	e8 a4 da 89 ff       	call   807e370 <strtod@plt>
 87e08cc:	c9                   	leave
 87e08cd:	c3                   	ret
 87e08ce:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlAttribute::DoubleValue @ 0x87e08b0

/* TiXmlAttribute::DoubleValue() const */

longdouble __thiscall TiXmlAttribute::DoubleValue(TiXmlAttribute *this)

{
  double dVar1;
  
  dVar1 = strtod(*(char **)(this + 0x18),(char **)0x0);
  return (longdouble)dVar1;
}

```

---

## IntValue

```asm
// === 087e08d0 TiXmlAttribute::IntValue  [0x087e08d0-0x87e08ff] ===
 87e08d0:	55                   	push   %ebp
 87e08d1:	89 e5                	mov    %esp,%ebp
 87e08d3:	83 ec 18             	sub    $0x18,%esp
 87e08d6:	8b 45 08             	mov    0x8(%ebp),%eax
 87e08d9:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 87e08e0:	00 
 87e08e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87e08e8:	00 
 87e08e9:	8b 40 18             	mov    0x18(%eax),%eax
 87e08ec:	89 04 24             	mov    %eax,(%esp)
 87e08ef:	e8 ec dc 89 ff       	call   807e5e0 <strtol@plt>
 87e08f4:	c9                   	leave
 87e08f5:	c3                   	ret
 87e08f6:	8d 76 00             	lea    0x0(%esi),%esi
 87e08f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlAttribute::IntValue @ 0x87e08d0

/* TiXmlAttribute::IntValue() const */

void __thiscall TiXmlAttribute::IntValue(TiXmlAttribute *this)

{
  strtol(*(char **)(this + 0x18),(char **)0x0,10);
  return;
}

```

---

## Next

```asm
// === 087e0020 TiXmlAttribute::Next  [0x087e0020-0x87e004f] ===
 87e0020:	55                   	push   %ebp
 87e0021:	89 e5                	mov    %esp,%ebp
 87e0023:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0026:	8b 40 20             	mov    0x20(%eax),%eax
 87e0029:	8b 50 18             	mov    0x18(%eax),%edx
 87e002c:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e002f:	85 c9                	test   %ecx,%ecx
 87e0031:	75 10                	jne    87e0043 <_ZNK14TiXmlAttribute4NextEv+0x23>
 87e0033:	8b 50 14             	mov    0x14(%eax),%edx
 87e0036:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e0039:	85 d2                	test   %edx,%edx
 87e003b:	ba 00 00 00 00       	mov    $0x0,%edx
 87e0040:	0f 44 c2             	cmove  %edx,%eax
 87e0043:	5d                   	pop    %ebp
 87e0044:	c3                   	ret
 87e0045:	90                   	nop
 87e0046:	8d 76 00             	lea    0x0(%esi),%esi
 87e0049:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlAttribute::Next @ 0x87e0020

/* TiXmlAttribute::Next() const */

int __thiscall TiXmlAttribute::Next(TiXmlAttribute *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x20);
  if ((*(int *)(*(int *)(iVar1 + 0x18) + -0xc) == 0) &&
     (*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## Parse

```asm
// === 087e8430 TiXmlAttribute::Parse  [0x087e8430-0x87e883f] ===
 87e8430:	55                   	push   %ebp
 87e8431:	89 e5                	mov    %esp,%ebp
 87e8433:	57                   	push   %edi
 87e8434:	56                   	push   %esi
 87e8435:	53                   	push   %ebx
 87e8436:	83 ec 4c             	sub    $0x4c,%esp
 87e8439:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e843c:	8b 45 10             	mov    0x10(%ebp),%eax
 87e843f:	8b 55 14             	mov    0x14(%ebp),%edx
 87e8442:	8b 75 08             	mov    0x8(%ebp),%esi
 87e8445:	85 db                	test   %ebx,%ebx
 87e8447:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e844a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e844d:	75 11                	jne    87e8460 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x30>
 87e844f:	83 c4 4c             	add    $0x4c,%esp
 87e8452:	89 d8                	mov    %ebx,%eax
 87e8454:	5b                   	pop    %ebx
 87e8455:	5e                   	pop    %esi
 87e8456:	5f                   	pop    %edi
 87e8457:	5d                   	pop    %ebp
 87e8458:	c3                   	ret
 87e8459:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e8460:	0f b6 13             	movzbl (%ebx),%edx
 87e8463:	84 d2                	test   %dl,%dl
 87e8465:	0f 84 08 02 00 00    	je     87e8673 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x243>
 87e846b:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 87e846f:	0f 84 0b 02 00 00    	je     87e8680 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x250>
 87e8475:	89 df                	mov    %ebx,%edi
 87e8477:	89 d3                	mov    %edx,%ebx
 87e8479:	0f b6 c3             	movzbl %bl,%eax
 87e847c:	89 04 24             	mov    %eax,(%esp)
 87e847f:	e8 fc 5d 89 ff       	call   807e280 <isspace@plt>
 87e8484:	80 fb 0a             	cmp    $0xa,%bl
 87e8487:	0f 84 4b 02 00 00    	je     87e86d8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2a8>
 87e848d:	85 c0                	test   %eax,%eax
 87e848f:	0f 85 43 02 00 00    	jne    87e86d8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2a8>
 87e8495:	80 fb 0d             	cmp    $0xd,%bl
 87e8498:	0f 84 3a 02 00 00    	je     87e86d8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2a8>
 87e849e:	85 ff                	test   %edi,%edi
 87e84a0:	89 da                	mov    %ebx,%edx
 87e84a2:	89 fb                	mov    %edi,%ebx
 87e84a4:	74 a9                	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e84a6:	84 d2                	test   %dl,%dl
 87e84a8:	0f 84 c5 01 00 00    	je     87e8673 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x243>
 87e84ae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e84b1:	85 c0                	test   %eax,%eax
 87e84b3:	74 24                	je     87e84d9 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa9>
 87e84b5:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87e84b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e84bb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e84bf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87e84c3:	89 04 24             	mov    %eax,(%esp)
 87e84c6:	e8 55 db ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e84cb:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e84ce:	8b 01                	mov    (%ecx),%eax
 87e84d0:	8b 51 04             	mov    0x4(%ecx),%edx
 87e84d3:	89 46 04             	mov    %eax,0x4(%esi)
 87e84d6:	89 56 08             	mov    %edx,0x8(%esi)
 87e84d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e84dc:	89 1c 24             	mov    %ebx,(%esp)
 87e84df:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e84e3:	8d 46 14             	lea    0x14(%esi),%eax
 87e84e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e84ea:	e8 41 e7 ff ff       	call   87e6c30 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding>
 87e84ef:	85 c0                	test   %eax,%eax
 87e84f1:	89 c7                	mov    %eax,%edi
 87e84f3:	0f 84 6f 01 00 00    	je     87e8668 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e84f9:	0f b6 10             	movzbl (%eax),%edx
 87e84fc:	84 d2                	test   %dl,%dl
 87e84fe:	0f 84 64 01 00 00    	je     87e8668 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e8504:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 87e8508:	89 d3                	mov    %edx,%ebx
 87e850a:	0f 84 30 02 00 00    	je     87e8740 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e8510:	0f b6 c3             	movzbl %bl,%eax
 87e8513:	89 04 24             	mov    %eax,(%esp)
 87e8516:	e8 65 5d 89 ff       	call   807e280 <isspace@plt>
 87e851b:	80 fb 0a             	cmp    $0xa,%bl
 87e851e:	0f 84 d4 01 00 00    	je     87e86f8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c8>
 87e8524:	85 c0                	test   %eax,%eax
 87e8526:	0f 85 cc 01 00 00    	jne    87e86f8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c8>
 87e852c:	80 fb 0d             	cmp    $0xd,%bl
 87e852f:	90                   	nop
 87e8530:	0f 84 c2 01 00 00    	je     87e86f8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c8>
 87e8536:	84 db                	test   %bl,%bl
 87e8538:	89 da                	mov    %ebx,%edx
 87e853a:	0f 84 c6 01 00 00    	je     87e8706 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2d6>
 87e8540:	80 fa 3d             	cmp    $0x3d,%dl
 87e8543:	0f 85 bd 01 00 00    	jne    87e8706 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2d6>
 87e8549:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e854c:	83 c7 01             	add    $0x1,%edi
 87e854f:	89 3c 24             	mov    %edi,(%esp)
 87e8552:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8556:	e8 25 df ff ff       	call   87e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>
 87e855b:	85 c0                	test   %eax,%eax
 87e855d:	89 c3                	mov    %eax,%ebx
 87e855f:	0f 84 03 01 00 00    	je     87e8668 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e8565:	0f b6 00             	movzbl (%eax),%eax
 87e8568:	84 c0                	test   %al,%al
 87e856a:	0f 84 f8 00 00 00    	je     87e8668 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e8570:	3c 27                	cmp    $0x27,%al
 87e8572:	0f 84 88 02 00 00    	je     87e8800 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3d0>
 87e8578:	3c 22                	cmp    $0x22,%al
 87e857a:	0f 84 28 02 00 00    	je     87e87a8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x378>
 87e8580:	8d 46 18             	lea    0x18(%esi),%eax
 87e8583:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87e8586:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e858d:	08 
 87e858e:	89 04 24             	mov    %eax,(%esp)
 87e8591:	e8 fa 00 f2 ff       	call   8708690 <_ZNSs6assignEPKc>
 87e8596:	0f b6 13             	movzbl (%ebx),%edx
 87e8599:	84 d2                	test   %dl,%dl
 87e859b:	0f 84 ae fe ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e85a1:	89 75 dc             	mov    %esi,-0x24(%ebp)
 87e85a4:	eb 70                	jmp    87e8616 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e6>
 87e85a6:	66 90                	xchg   %ax,%ax
 87e85a8:	80 fa 27             	cmp    $0x27,%dl
 87e85ab:	0f 84 ae 00 00 00    	je     87e865f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x22f>
 87e85b1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87e85b4:	8b 41 18             	mov    0x18(%ecx),%eax
 87e85b7:	8b 48 f4             	mov    -0xc(%eax),%ecx
 87e85ba:	8d 78 f4             	lea    -0xc(%eax),%edi
 87e85bd:	8d 71 01             	lea    0x1(%ecx),%esi
 87e85c0:	3b 77 04             	cmp    0x4(%edi),%esi
 87e85c3:	77 07                	ja     87e85cc <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x19c>
 87e85c5:	8b 7f 08             	mov    0x8(%edi),%edi
 87e85c8:	85 ff                	test   %edi,%edi
 87e85ca:	7e 1f                	jle    87e85eb <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1bb>
 87e85cc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87e85cf:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 87e85d2:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e85d6:	89 04 24             	mov    %eax,(%esp)
 87e85d9:	e8 32 f7 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e85de:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87e85e1:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 87e85e5:	8b 41 18             	mov    0x18(%ecx),%eax
 87e85e8:	8b 48 f4             	mov    -0xc(%eax),%ecx
 87e85eb:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 87e85ee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e85f1:	8b 50 18             	mov    0x18(%eax),%edx
 87e85f4:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e85f7:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e85fc:	0f 85 25 02 00 00    	jne    87e8827 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3f7>
 87e8602:	83 c3 01             	add    $0x1,%ebx
 87e8605:	0f 84 44 fe ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e860b:	0f b6 13             	movzbl (%ebx),%edx
 87e860e:	84 d2                	test   %dl,%dl
 87e8610:	0f 84 39 fe ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e8616:	0f b6 c2             	movzbl %dl,%eax
 87e8619:	89 04 24             	mov    %eax,(%esp)
 87e861c:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 87e861f:	e8 5c 5c 89 ff       	call   807e280 <isspace@plt>
 87e8624:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 87e8628:	80 fa 0a             	cmp    $0xa,%dl
 87e862b:	0f 84 1e fe ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e8631:	85 c0                	test   %eax,%eax
 87e8633:	0f 85 16 fe ff ff    	jne    87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e8639:	80 fa 0d             	cmp    $0xd,%dl
 87e863c:	0f 84 0d fe ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e8642:	80 fa 2f             	cmp    $0x2f,%dl
 87e8645:	0f 84 04 fe ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e864b:	80 fa 3e             	cmp    $0x3e,%dl
 87e864e:	66 90                	xchg   %ax,%ax
 87e8650:	0f 84 f9 fd ff ff    	je     87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e8656:	80 fa 22             	cmp    $0x22,%dl
 87e8659:	0f 85 49 ff ff ff    	jne    87e85a8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x178>
 87e865f:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87e8662:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e8668:	8b 46 10             	mov    0x10(%esi),%eax
 87e866b:	85 c0                	test   %eax,%eax
 87e866d:	0f 85 5d 01 00 00    	jne    87e87d0 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3a0>
 87e8673:	31 db                	xor    %ebx,%ebx
 87e8675:	e9 d5 fd ff ff       	jmp    87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e867a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e8680:	89 df                	mov    %ebx,%edi
 87e8682:	89 d3                	mov    %edx,%ebx
 87e8684:	eb 30                	jmp    87e86b6 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x286>
 87e8686:	66 90                	xchg   %ax,%ax
 87e8688:	0f b6 c3             	movzbl %bl,%eax
 87e868b:	89 04 24             	mov    %eax,(%esp)
 87e868e:	e8 ed 5b 89 ff       	call   807e280 <isspace@plt>
 87e8693:	85 c0                	test   %eax,%eax
 87e8695:	75 11                	jne    87e86a8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x278>
 87e8697:	80 fb 0a             	cmp    $0xa,%bl
 87e869a:	74 0c                	je     87e86a8 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x278>
 87e869c:	80 fb 0d             	cmp    $0xd,%bl
 87e869f:	90                   	nop
 87e86a0:	0f 85 f8 fd ff ff    	jne    87e849e <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6e>
 87e86a6:	66 90                	xchg   %ax,%ax
 87e86a8:	83 c7 01             	add    $0x1,%edi
 87e86ab:	0f b6 1f             	movzbl (%edi),%ebx
 87e86ae:	84 db                	test   %bl,%bl
 87e86b0:	0f 84 e8 fd ff ff    	je     87e849e <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6e>
 87e86b6:	80 3f ef             	cmpb   $0xef,(%edi)
 87e86b9:	75 cd                	jne    87e8688 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x258>
 87e86bb:	0f b6 47 01          	movzbl 0x1(%edi),%eax
 87e86bf:	3c bb                	cmp    $0xbb,%al
 87e86c1:	74 2d                	je     87e86f0 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c0>
 87e86c3:	3c bf                	cmp    $0xbf,%al
 87e86c5:	75 c1                	jne    87e8688 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x258>
 87e86c7:	0f b6 47 02          	movzbl 0x2(%edi),%eax
 87e86cb:	3c be                	cmp    $0xbe,%al
 87e86cd:	74 04                	je     87e86d3 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2a3>
 87e86cf:	3c bf                	cmp    $0xbf,%al
 87e86d1:	75 b5                	jne    87e8688 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x258>
 87e86d3:	83 c7 03             	add    $0x3,%edi
 87e86d6:	eb d3                	jmp    87e86ab <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x27b>
 87e86d8:	83 c7 01             	add    $0x1,%edi
 87e86db:	0f b6 1f             	movzbl (%edi),%ebx
 87e86de:	84 db                	test   %bl,%bl
 87e86e0:	0f 84 b8 fd ff ff    	je     87e849e <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6e>
 87e86e6:	e9 8e fd ff ff       	jmp    87e8479 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x49>
 87e86eb:	90                   	nop
 87e86ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e86f0:	80 7f 02 bf          	cmpb   $0xbf,0x2(%edi)
 87e86f4:	75 92                	jne    87e8688 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x258>
 87e86f6:	eb db                	jmp    87e86d3 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2a3>
 87e86f8:	83 c7 01             	add    $0x1,%edi
 87e86fb:	0f b6 1f             	movzbl (%edi),%ebx
 87e86fe:	84 db                	test   %bl,%bl
 87e8700:	0f 85 0a fe ff ff    	jne    87e8510 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xe0>
 87e8706:	8b 46 10             	mov    0x10(%esi),%eax
 87e8709:	85 c0                	test   %eax,%eax
 87e870b:	0f 84 62 ff ff ff    	je     87e8673 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x243>
 87e8711:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e8714:	31 db                	xor    %ebx,%ebx
 87e8716:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e8719:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e871d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 87e8724:	00 
 87e8725:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e8729:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e872d:	89 04 24             	mov    %eax,(%esp)
 87e8730:	e8 fb e5 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8735:	e9 15 fd ff ff       	jmp    87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e873a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e8740:	89 d3                	mov    %edx,%ebx
 87e8742:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e8748:	80 3f ef             	cmpb   $0xef,(%edi)
 87e874b:	74 33                	je     87e8780 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x350>
 87e874d:	0f b6 c3             	movzbl %bl,%eax
 87e8750:	89 04 24             	mov    %eax,(%esp)
 87e8753:	e8 28 5b 89 ff       	call   807e280 <isspace@plt>
 87e8758:	85 c0                	test   %eax,%eax
 87e875a:	75 14                	jne    87e8770 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x340>
 87e875c:	80 fb 0a             	cmp    $0xa,%bl
 87e875f:	74 0f                	je     87e8770 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x340>
 87e8761:	80 fb 0d             	cmp    $0xd,%bl
 87e8764:	74 0a                	je     87e8770 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x340>
 87e8766:	89 da                	mov    %ebx,%edx
 87e8768:	e9 d3 fd ff ff       	jmp    87e8540 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x110>
 87e876d:	8d 76 00             	lea    0x0(%esi),%esi
 87e8770:	83 c7 01             	add    $0x1,%edi
 87e8773:	0f b6 1f             	movzbl (%edi),%ebx
 87e8776:	84 db                	test   %bl,%bl
 87e8778:	75 ce                	jne    87e8748 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x318>
 87e877a:	eb 8a                	jmp    87e8706 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2d6>
 87e877c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8780:	0f b6 47 01          	movzbl 0x1(%edi),%eax
 87e8784:	3c bb                	cmp    $0xbb,%al
 87e8786:	0f 84 8c 00 00 00    	je     87e8818 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3e8>
 87e878c:	3c bf                	cmp    $0xbf,%al
 87e878e:	66 90                	xchg   %ax,%ax
 87e8790:	75 bb                	jne    87e874d <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x31d>
 87e8792:	0f b6 47 02          	movzbl 0x2(%edi),%eax
 87e8796:	3c be                	cmp    $0xbe,%al
 87e8798:	74 04                	je     87e879e <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x36e>
 87e879a:	3c bf                	cmp    $0xbf,%al
 87e879c:	75 af                	jne    87e874d <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x31d>
 87e879e:	83 c7 03             	add    $0x3,%edi
 87e87a1:	eb d0                	jmp    87e8773 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x343>
 87e87a3:	90                   	nop
 87e87a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e87a8:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87e87ab:	8d 43 01             	lea    0x1(%ebx),%eax
 87e87ae:	8d 56 18             	lea    0x18(%esi),%edx
 87e87b1:	c7 45 08 a8 0f de 08 	movl   $0x8de0fa8,0x8(%ebp)
 87e87b8:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87e87bb:	83 c4 4c             	add    $0x4c,%esp
 87e87be:	31 c9                	xor    %ecx,%ecx
 87e87c0:	5b                   	pop    %ebx
 87e87c1:	5e                   	pop    %esi
 87e87c2:	5f                   	pop    %edi
 87e87c3:	5d                   	pop    %ebp
 87e87c4:	e9 87 e0 ff ff       	jmp    87e6850 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2>
 87e87c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e87d0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e87d3:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e87d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 87e87da:	31 db                	xor    %ebx,%ebx
 87e87dc:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 87e87e3:	00 
 87e87e4:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e87e8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e87ec:	89 04 24             	mov    %eax,(%esp)
 87e87ef:	e8 3c e5 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e87f4:	e9 56 fc ff ff       	jmp    87e844f <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f>
 87e87f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e8800:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87e8803:	8d 43 01             	lea    0x1(%ebx),%eax
 87e8806:	8d 56 18             	lea    0x18(%esi),%edx
 87e8809:	c7 45 08 c6 cf d0 08 	movl   $0x8d0cfc6,0x8(%ebp)
 87e8810:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87e8813:	eb a6                	jmp    87e87bb <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x38b>
 87e8815:	8d 76 00             	lea    0x0(%esi),%esi
 87e8818:	80 7f 02 bf          	cmpb   $0xbf,0x2(%edi)
 87e881c:	0f 85 2b ff ff ff    	jne    87e874d <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x31d>
 87e8822:	e9 77 ff ff ff       	jmp    87e879e <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x36e>
 87e8827:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e882e:	89 72 f4             	mov    %esi,-0xc(%edx)
 87e8831:	c6 44 30 0c 00       	movb   $0x0,0xc(%eax,%esi,1)
 87e8836:	e9 c7 fd ff ff       	jmp    87e8602 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1d2>
 87e883b:	90                   	nop
 87e883c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlAttribute::Parse @ 0x87e8430

/* TiXmlAttribute::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlAttribute::Parse(TiXmlAttribute *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar8 = *param_1;
  if (bVar8 == 0) {
    return (byte *)0x0;
  }
  if (param_4 == 1) {
    do {
      if (*param_1 == 0xef) {
        if (param_1[1] == 0xbb) {
          bVar1 = param_1[2];
joined_r0x087e86f4:
          if (bVar1 != 0xbf) goto LAB_087e8688;
        }
        else {
          if (param_1[1] != 0xbf) goto LAB_087e8688;
          bVar1 = param_1[2];
          if (bVar1 != 0xbe) goto joined_r0x087e86f4;
        }
        param_1 = param_1 + 3;
      }
      else {
LAB_087e8688:
        iVar4 = isspace((uint)bVar8);
        if (((iVar4 == 0) && (bVar8 != 10)) && (bVar8 != 0xd)) break;
        param_1 = param_1 + 1;
      }
      bVar8 = *param_1;
    } while (bVar8 != 0);
  }
  else {
    do {
      iVar4 = isspace((uint)bVar8);
      if (((bVar8 != 10) && (iVar4 == 0)) && (bVar8 != 0xd)) break;
      param_1 = param_1 + 1;
      bVar8 = *param_1;
    } while (bVar8 != 0);
  }
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (bVar8 == 0) {
    return (byte *)0x0;
  }
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar2;
  }
  pbVar5 = (byte *)TiXmlBase::ReadName(param_1,this + 0x14,param_4);
  if ((pbVar5 != (byte *)0x0) && (uVar7 = (uint)*pbVar5, *pbVar5 != 0)) {
    if (param_4 == 1) {
      do {
        if (*pbVar5 == 0xef) {
          if (pbVar5[1] == 0xbb) {
            if (pbVar5[2] == 0xbf) goto LAB_087e879e;
            goto LAB_087e874d;
          }
          if ((pbVar5[1] != 0xbf) || ((pbVar5[2] != 0xbe && (pbVar5[2] != 0xbf))))
          goto LAB_087e874d;
LAB_087e879e:
          pbVar5 = pbVar5 + 3;
        }
        else {
LAB_087e874d:
          iVar4 = isspace(uVar7);
          if (((iVar4 == 0) && (cVar9 = (char)uVar7, cVar9 != '\n')) && (cVar9 != '\r'))
          goto LAB_087e8540;
          pbVar5 = pbVar5 + 1;
        }
        uVar7 = (uint)*pbVar5;
      } while (*pbVar5 != 0);
    }
    else {
      do {
        iVar4 = isspace(uVar7);
        cVar9 = (char)uVar7;
        if (((cVar9 != '\n') && (iVar4 == 0)) && (cVar9 != '\r')) {
          if (cVar9 != '\0') goto LAB_087e8540;
          break;
        }
        pbVar5 = pbVar5 + 1;
        uVar7 = (uint)*pbVar5;
      } while (*pbVar5 != 0);
    }
    goto LAB_087e8706;
  }
LAB_087e8668:
  if (*(TiXmlDocument **)(this + 0x10) == (TiXmlDocument *)0x0) {
    return (byte *)0x0;
  }
  TiXmlDocument::SetError(*(TiXmlDocument **)(this + 0x10),6,param_1,param_2,param_4);
  return (byte *)0x0;
LAB_087e8540:
  if (cVar9 != '=') {
LAB_087e8706:
    if (*(TiXmlDocument **)(this + 0x10) == (TiXmlDocument *)0x0) {
      return (byte *)0x0;
    }
    TiXmlDocument::SetError(*(TiXmlDocument **)(this + 0x10),6,pbVar5,param_2,param_4);
    return (byte *)0x0;
  }
  param_1 = (byte *)TiXmlBase::SkipWhiteSpace(pbVar5 + 1,param_4);
  if ((param_1 != (byte *)0x0) && (bVar8 = *param_1, bVar8 != 0)) {
    if ((bVar8 == 0x27) || (bVar8 == 0x22)) {
      pbVar5 = (byte *)TiXmlBase::ReadText(param_1 + 1,this + 0x18,0);
      return pbVar5;
    }
    std::string::assign((string *)(this + 0x18),"");
    bVar8 = *param_1;
    if (bVar8 == 0) {
      return param_1;
    }
    while( true ) {
      iVar4 = isspace((uint)bVar8);
      if (bVar8 == 10) {
        return param_1;
      }
      if (iVar4 != 0) {
        return param_1;
      }
      if (bVar8 == 0xd) {
        return param_1;
      }
      if (bVar8 == 0x2f) {
        return param_1;
      }
      if (bVar8 == 0x3e) {
        return param_1;
      }
      if ((bVar8 == 0x22) || (bVar8 == 0x27)) break;
      iVar4 = *(int *)(this + 0x18);
      iVar6 = *(int *)(iVar4 + -0xc);
      uVar7 = iVar6 + 1;
      if ((*(uint *)(iVar4 + -8) < uVar7) || (0 < *(int *)(iVar4 + -4))) {
        std::string::reserve((string *)(this + 0x18),uVar7);
        iVar4 = *(int *)(this + 0x18);
        iVar6 = *(int *)(iVar4 + -0xc);
      }
      *(byte *)(iVar4 + iVar6) = bVar8;
      puVar3 = *(undefined1 **)(this + 0x18);
      if (puVar3 != &DAT_0948ccfc) {
        *(undefined4 *)(puVar3 + -4) = 0;
        *(uint *)(puVar3 + -0xc) = uVar7;
        puVar3[uVar7] = 0;
      }
      param_1 = param_1 + 1;
      if (param_1 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar8 = *param_1;
      if (bVar8 == 0) {
        return param_1;
      }
    }
  }
  goto LAB_087e8668;
}

```

---

## Previous

```asm
// === 087e0050 TiXmlAttribute::Previous  [0x087e0050-0x87e007f] ===
 87e0050:	55                   	push   %ebp
 87e0051:	89 e5                	mov    %esp,%ebp
 87e0053:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0056:	8b 40 1c             	mov    0x1c(%eax),%eax
 87e0059:	8b 50 18             	mov    0x18(%eax),%edx
 87e005c:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e005f:	85 c9                	test   %ecx,%ecx
 87e0061:	75 10                	jne    87e0073 <_ZNK14TiXmlAttribute8PreviousEv+0x23>
 87e0063:	8b 50 14             	mov    0x14(%eax),%edx
 87e0066:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e0069:	85 d2                	test   %edx,%edx
 87e006b:	ba 00 00 00 00       	mov    $0x0,%edx
 87e0070:	0f 44 c2             	cmove  %edx,%eax
 87e0073:	5d                   	pop    %ebp
 87e0074:	c3                   	ret
 87e0075:	90                   	nop
 87e0076:	8d 76 00             	lea    0x0(%esi),%esi
 87e0079:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlAttribute::Previous @ 0x87e0050

/* TiXmlAttribute::Previous() const */

int __thiscall TiXmlAttribute::Previous(TiXmlAttribute *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c);
  if ((*(int *)(*(int *)(iVar1 + 0x18) + -0xc) == 0) &&
     (*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## Print

```asm
// === 087e4f70 TiXmlAttribute::Print  [0x087e4f70-0x87e518f] ===
 87e4f70:	55                   	push   %ebp
 87e4f71:	89 e5                	mov    %esp,%ebp
 87e4f73:	57                   	push   %edi
 87e4f74:	56                   	push   %esi
 87e4f75:	53                   	push   %ebx
 87e4f76:	83 ec 2c             	sub    $0x2c,%esp
 87e4f79:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e4f7c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e4f7f:	8b 5d 14             	mov    0x14(%ebp),%ebx
 87e4f82:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4f86:	8d 75 dc             	lea    -0x24(%ebp),%esi
 87e4f89:	c7 45 dc fc cc 48 09 	movl   $0x948ccfc,-0x24(%ebp)
 87e4f90:	8d 47 14             	lea    0x14(%edi),%eax
 87e4f93:	c7 45 e0 fc cc 48 09 	movl   $0x948ccfc,-0x20(%ebp)
 87e4f9a:	89 04 24             	mov    %eax,(%esp)
 87e4f9d:	e8 be bc ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4fa2:	83 c7 18             	add    $0x18,%edi
 87e4fa5:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4fa9:	89 3c 24             	mov    %edi,(%esp)
 87e4fac:	e8 af bc ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4fb1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e4fb8:	00 
 87e4fb9:	c7 44 24 04 22 00 00 	movl   $0x22,0x4(%esp)
 87e4fc0:	00 
 87e4fc1:	89 3c 24             	mov    %edi,(%esp)
 87e4fc4:	e8 37 20 f2 ff       	call   8707000 <_ZNKSs4findEcj>
 87e4fc9:	83 f8 ff             	cmp    $0xffffffff,%eax
 87e4fcc:	0f 84 a6 00 00 00    	je     87e5078 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x108>
 87e4fd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e4fd5:	85 d2                	test   %edx,%edx
 87e4fd7:	74 21                	je     87e4ffa <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x8a>
 87e4fd9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e4fdc:	c7 44 24 04 b9 0f de 	movl   $0x8de0fb9,0x4(%esp)
 87e4fe3:	08 
 87e4fe4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e4fe8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e4feb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4fef:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4ff2:	89 04 24             	mov    %eax,(%esp)
 87e4ff5:	e8 96 8a 89 ff       	call   807da90 <fprintf@plt>
 87e4ffa:	85 db                	test   %ebx,%ebx
 87e4ffc:	74 4b                	je     87e5049 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xd9>
 87e4ffe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e5001:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e5005:	89 1c 24             	mov    %ebx,(%esp)
 87e5008:	e8 33 31 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e500d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e5014:	00 
 87e5015:	c7 44 24 04 b1 cf d0 	movl   $0x8d0cfb1,0x4(%esp)
 87e501c:	08 
 87e501d:	89 1c 24             	mov    %ebx,(%esp)
 87e5020:	e8 eb 2e f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e5025:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e5029:	89 1c 24             	mov    %ebx,(%esp)
 87e502c:	e8 0f 31 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e5031:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e5038:	00 
 87e5039:	c7 44 24 04 c6 cf d0 	movl   $0x8d0cfc6,0x4(%esp)
 87e5040:	08 
 87e5041:	89 1c 24             	mov    %ebx,(%esp)
 87e5044:	e8 c7 2e f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e5049:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e504c:	83 e8 0c             	sub    $0xc,%eax
 87e504f:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e5054:	0f 85 9a 00 00 00    	jne    87e50f4 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x184>
 87e505a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e505d:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 87e5062:	83 e8 0c             	sub    $0xc,%eax
 87e5065:	39 c2                	cmp    %eax,%edx
 87e5067:	0f 85 b4 00 00 00    	jne    87e5121 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x1b1>
 87e506d:	83 c4 2c             	add    $0x2c,%esp
 87e5070:	5b                   	pop    %ebx
 87e5071:	5e                   	pop    %esi
 87e5072:	5f                   	pop    %edi
 87e5073:	5d                   	pop    %ebp
 87e5074:	c3                   	ret
 87e5075:	8d 76 00             	lea    0x0(%esi),%esi
 87e5078:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e507b:	85 c9                	test   %ecx,%ecx
 87e507d:	74 21                	je     87e50a0 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x130>
 87e507f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e5082:	c7 44 24 04 b1 0f de 	movl   $0x8de0fb1,0x4(%esp)
 87e5089:	08 
 87e508a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e508e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e5091:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e5095:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e5098:	89 04 24             	mov    %eax,(%esp)
 87e509b:	e8 f0 89 89 ff       	call   807da90 <fprintf@plt>
 87e50a0:	85 db                	test   %ebx,%ebx
 87e50a2:	74 a5                	je     87e5049 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xd9>
 87e50a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e50a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e50ab:	89 1c 24             	mov    %ebx,(%esp)
 87e50ae:	e8 8d 30 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e50b3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e50ba:	00 
 87e50bb:	c7 44 24 04 a7 0f de 	movl   $0x8de0fa7,0x4(%esp)
 87e50c2:	08 
 87e50c3:	89 1c 24             	mov    %ebx,(%esp)
 87e50c6:	e8 45 2e f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e50cb:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e50cf:	89 1c 24             	mov    %ebx,(%esp)
 87e50d2:	e8 69 30 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e50d7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e50de:	00 
 87e50df:	c7 44 24 04 a8 0f de 	movl   $0x8de0fa8,0x4(%esp)
 87e50e6:	08 
 87e50e7:	89 1c 24             	mov    %ebx,(%esp)
 87e50ea:	e8 21 2e f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e50ef:	e9 55 ff ff ff       	jmp    87e5049 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xd9>
 87e50f4:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e50f9:	85 d2                	test   %edx,%edx
 87e50fb:	74 6e                	je     87e516b <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x1fb>
 87e50fd:	83 ca ff             	or     $0xffffffff,%edx
 87e5100:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5105:	85 d2                	test   %edx,%edx
 87e5107:	0f 8f 4d ff ff ff    	jg     87e505a <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xea>
 87e510d:	8d 55 e7             	lea    -0x19(%ebp),%edx
 87e5110:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5114:	89 04 24             	mov    %eax,(%esp)
 87e5117:	e8 04 18 f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e511c:	e9 39 ff ff ff       	jmp    87e505a <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xea>
 87e5121:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5126:	85 d2                	test   %edx,%edx
 87e5128:	74 4c                	je     87e5176 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x206>
 87e512a:	83 ca ff             	or     $0xffffffff,%edx
 87e512d:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5132:	85 d2                	test   %edx,%edx
 87e5134:	0f 8f 33 ff ff ff    	jg     87e506d <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xfd>
 87e513a:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 87e513d:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5141:	89 04 24             	mov    %eax,(%esp)
 87e5144:	e8 d7 17 f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5149:	e9 1f ff ff ff       	jmp    87e506d <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0xfd>
 87e514e:	89 c3                	mov    %eax,%ebx
 87e5150:	89 34 24             	mov    %esi,(%esp)
 87e5153:	e8 88 2a f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e5158:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e515b:	89 04 24             	mov    %eax,(%esp)
 87e515e:	e8 7d 2a f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e5163:	89 1c 24             	mov    %ebx,(%esp)
 87e5166:	e8 e5 e5 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e516b:	8b 50 08             	mov    0x8(%eax),%edx
 87e516e:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5171:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5174:	eb 8f                	jmp    87e5105 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x195>
 87e5176:	8b 50 08             	mov    0x8(%eax),%edx
 87e5179:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e517c:	89 48 08             	mov    %ecx,0x8(%eax)
 87e517f:	eb b1                	jmp    87e5132 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs+0x1c2>
 87e5181:	eb 0d                	jmp    87e5190 <_ZlsRSsRK9TiXmlNode>
 87e5183:	90                   	nop
 87e5184:	90                   	nop
 87e5185:	90                   	nop
 87e5186:	90                   	nop
 87e5187:	90                   	nop
 87e5188:	90                   	nop
 87e5189:	90                   	nop
 87e518a:	90                   	nop
 87e518b:	90                   	nop
 87e518c:	90                   	nop
 87e518d:	90                   	nop
 87e518e:	90                   	nop
 87e518f:	90                   	nop

```

```c
// TiXmlAttribute::Print @ 0x87e4f70

/* WARNING: Removing unreachable block (ram,0x087e516b) */
/* WARNING: Removing unreachable block (ram,0x087e5176) */
/* TiXmlAttribute::Print(_IO_FILE*, int, std::string*) const */

void __thiscall
TiXmlAttribute::Print(TiXmlAttribute *this,_IO_FILE *param_1,int param_2,string *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *local_28;
  undefined1 *local_24 [5];
  
  local_28 = &DAT_0948ccfc;
  local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4f9d to 087e50ee has its CatchHandler @ 087e514e */
  TiXmlBase::EncodeString((string *)(this + 0x14),(string *)local_24);
  TiXmlBase::EncodeString((string *)(this + 0x18),(string *)&local_28);
  iVar2 = std::string::find((string *)(this + 0x18),'\"',0);
  if (iVar2 == -1) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"%s=\"%s\"",local_24[0],local_28);
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,(string *)local_24);
      std::string::append(param_3,"=\"",2);
      std::string::append(param_3,(string *)&local_28);
      std::string::append(param_3,"\"",1);
    }
  }
  else {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"%s=\'%s\'",local_24[0],local_28);
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,(string *)local_24);
      std::string::append(param_3,"=\'",2);
      std::string::append(param_3,(string *)&local_28);
      std::string::append(param_3,"\'",1);
    }
  }
  if ((allocator *)(local_28 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_28 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_28 + -0xc));
    }
  }
  if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24[0] + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
    }
  }
  return;
}

```

---

## QueryDoubleValue

```asm
// === 087e0900 TiXmlAttribute::QueryDoubleValue  [0x087e0900-0x87e092f] ===
 87e0900:	55                   	push   %ebp
 87e0901:	89 e5                	mov    %esp,%ebp
 87e0903:	83 ec 18             	sub    $0x18,%esp
 87e0906:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e0909:	c7 44 24 04 99 0e de 	movl   $0x8de0e99,0x4(%esp)
 87e0910:	08 
 87e0911:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0915:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0918:	8b 40 18             	mov    0x18(%eax),%eax
 87e091b:	89 04 24             	mov    %eax,(%esp)
 87e091e:	e8 bd d0 89 ff       	call   807d9e0 <sscanf@plt>
 87e0923:	c9                   	leave
 87e0924:	83 f8 01             	cmp    $0x1,%eax
 87e0927:	0f 95 c0             	setne  %al
 87e092a:	0f b6 c0             	movzbl %al,%eax
 87e092d:	01 c0                	add    %eax,%eax
 87e092f:	c3                   	ret

```

```c
// TiXmlAttribute::QueryDoubleValue @ 0x87e0900

/* TiXmlAttribute::QueryDoubleValue(double*) const */

char __thiscall TiXmlAttribute::QueryDoubleValue(TiXmlAttribute *this,double *param_1)

{
  int iVar1;
  
  iVar1 = sscanf(*(char **)(this + 0x18),"%lf",param_1);
  return (iVar1 != 1) * '\x02';
}

```

---

## QueryIntValue

```asm
// === 087e0930 TiXmlAttribute::QueryIntValue  [0x087e0930-0x87e095f] ===
 87e0930:	55                   	push   %ebp
 87e0931:	89 e5                	mov    %esp,%ebp
 87e0933:	83 ec 18             	sub    $0x18,%esp
 87e0936:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e0939:	c7 44 24 04 78 6e d0 	movl   $0x8d06e78,0x4(%esp)
 87e0940:	08 
 87e0941:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0945:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0948:	8b 40 18             	mov    0x18(%eax),%eax
 87e094b:	89 04 24             	mov    %eax,(%esp)
 87e094e:	e8 8d d0 89 ff       	call   807d9e0 <sscanf@plt>
 87e0953:	c9                   	leave
 87e0954:	83 f8 01             	cmp    $0x1,%eax
 87e0957:	0f 95 c0             	setne  %al
 87e095a:	0f b6 c0             	movzbl %al,%eax
 87e095d:	01 c0                	add    %eax,%eax
 87e095f:	c3                   	ret

```

```c
// TiXmlAttribute::QueryIntValue @ 0x87e0930

/* TiXmlAttribute::QueryIntValue(int*) const */

char __thiscall TiXmlAttribute::QueryIntValue(TiXmlAttribute *this,int *param_1)

{
  int iVar1;
  
  iVar1 = sscanf(*(char **)(this + 0x18),"%d",param_1);
  return (iVar1 != 1) * '\x02';
}

```

---

## SetDoubleValue

```asm
// === 087e1e90 TiXmlAttribute::SetDoubleValue  [0x087e1e90-0x87e1f0f] ===
 87e1e90:	55                   	push   %ebp
 87e1e91:	89 e5                	mov    %esp,%ebp
 87e1e93:	53                   	push   %ebx
 87e1e94:	81 ec 24 01 00 00    	sub    $0x124,%esp
 87e1e9a:	dd 45 0c             	fldl   0xc(%ebp)
 87e1e9d:	8d 9d f8 fe ff ff    	lea    -0x108(%ebp),%ebx
 87e1ea3:	dd 5c 24 0c          	fstpl  0xc(%esp)
 87e1ea7:	c7 44 24 08 3d 0f de 	movl   $0x8de0f3d,0x8(%esp)
 87e1eae:	08 
 87e1eaf:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 87e1eb6:	00 
 87e1eb7:	89 1c 24             	mov    %ebx,(%esp)
 87e1eba:	e8 21 bd 89 ff       	call   807dbe0 <snprintf@plt>
 87e1ebf:	89 da                	mov    %ebx,%edx
 87e1ec1:	8b 0a                	mov    (%edx),%ecx
 87e1ec3:	83 c2 04             	add    $0x4,%edx
 87e1ec6:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e1ecc:	f7 d1                	not    %ecx
 87e1ece:	21 c8                	and    %ecx,%eax
 87e1ed0:	25 80 80 80 80       	and    $0x80808080,%eax
 87e1ed5:	74 ea                	je     87e1ec1 <_ZN14TiXmlAttribute14SetDoubleValueEd+0x31>
 87e1ed7:	89 c1                	mov    %eax,%ecx
 87e1ed9:	c1 e9 10             	shr    $0x10,%ecx
 87e1edc:	a9 80 80 00 00       	test   $0x8080,%eax
 87e1ee1:	0f 44 c1             	cmove  %ecx,%eax
 87e1ee4:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e1ee7:	0f 44 d1             	cmove  %ecx,%edx
 87e1eea:	00 c0                	add    %al,%al
 87e1eec:	8b 45 08             	mov    0x8(%ebp),%eax
 87e1eef:	83 da 03             	sbb    $0x3,%edx
 87e1ef2:	29 da                	sub    %ebx,%edx
 87e1ef4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e1ef8:	83 c0 18             	add    $0x18,%eax
 87e1efb:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e1eff:	89 04 24             	mov    %eax,(%esp)
 87e1f02:	e8 99 66 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e1f07:	81 c4 24 01 00 00    	add    $0x124,%esp
 87e1f0d:	5b                   	pop    %ebx
 87e1f0e:	5d                   	pop    %ebp
 87e1f0f:	c3                   	ret

```

```c
// TiXmlAttribute::SetDoubleValue @ 0x87e1e90

/* TiXmlAttribute::SetDoubleValue(double) */

void __thiscall TiXmlAttribute::SetDoubleValue(TiXmlAttribute *this,double param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_10c [65];
  
  snprintf((char *)local_10c,0x100,"%g",param_1);
  puVar4 = local_10c;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((int)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  std::string::assign((string *)(this + 0x18),(char *)local_10c,
                      (uint)((int)puVar4 +
                            ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_10c)));
  return;
}

```

---

## SetIntValue

```asm
// === 087e1f10 TiXmlAttribute::SetIntValue  [0x087e1f10-0x87e1f8f] ===
 87e1f10:	55                   	push   %ebp
 87e1f11:	89 e5                	mov    %esp,%ebp
 87e1f13:	53                   	push   %ebx
 87e1f14:	83 ec 54             	sub    $0x54,%esp
 87e1f17:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e1f1a:	8d 5d b8             	lea    -0x48(%ebp),%ebx
 87e1f1d:	c7 44 24 08 78 6e d0 	movl   $0x8d06e78,0x8(%esp)
 87e1f24:	08 
 87e1f25:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 87e1f2c:	00 
 87e1f2d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e1f31:	89 1c 24             	mov    %ebx,(%esp)
 87e1f34:	e8 a7 bc 89 ff       	call   807dbe0 <snprintf@plt>
 87e1f39:	89 da                	mov    %ebx,%edx
 87e1f3b:	8b 0a                	mov    (%edx),%ecx
 87e1f3d:	83 c2 04             	add    $0x4,%edx
 87e1f40:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e1f46:	f7 d1                	not    %ecx
 87e1f48:	21 c8                	and    %ecx,%eax
 87e1f4a:	25 80 80 80 80       	and    $0x80808080,%eax
 87e1f4f:	74 ea                	je     87e1f3b <_ZN14TiXmlAttribute11SetIntValueEi+0x2b>
 87e1f51:	89 c1                	mov    %eax,%ecx
 87e1f53:	c1 e9 10             	shr    $0x10,%ecx
 87e1f56:	a9 80 80 00 00       	test   $0x8080,%eax
 87e1f5b:	0f 44 c1             	cmove  %ecx,%eax
 87e1f5e:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e1f61:	0f 44 d1             	cmove  %ecx,%edx
 87e1f64:	00 c0                	add    %al,%al
 87e1f66:	8b 45 08             	mov    0x8(%ebp),%eax
 87e1f69:	83 da 03             	sbb    $0x3,%edx
 87e1f6c:	29 da                	sub    %ebx,%edx
 87e1f6e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e1f72:	83 c0 18             	add    $0x18,%eax
 87e1f75:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e1f79:	89 04 24             	mov    %eax,(%esp)
 87e1f7c:	e8 1f 66 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e1f81:	83 c4 54             	add    $0x54,%esp
 87e1f84:	5b                   	pop    %ebx
 87e1f85:	5d                   	pop    %ebp
 87e1f86:	c3                   	ret
 87e1f87:	90                   	nop
 87e1f88:	90                   	nop
 87e1f89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlAttribute::SetIntValue @ 0x87e1f10

/* TiXmlAttribute::SetIntValue(int) */

void __thiscall TiXmlAttribute::SetIntValue(TiXmlAttribute *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_4c [17];
  
  snprintf((char *)local_4c,0x40,"%d",param_1);
  puVar4 = local_4c;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((int)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  std::string::assign((string *)(this + 0x18),(char *)local_4c,
                      (uint)((int)puVar4 +
                            ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_4c)));
  return;
}

```

