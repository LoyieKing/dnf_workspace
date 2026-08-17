# TiXmlUnknown

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Accept

```asm
// === 087e00e0 TiXmlUnknown::Accept  [0x087e00e0-0x87e00ff] ===
 87e00e0:	55                   	push   %ebp
 87e00e1:	89 e5                	mov    %esp,%ebp
 87e00e3:	83 ec 08             	sub    $0x8,%esp
 87e00e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e00e9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e00ec:	8b 10                	mov    (%eax),%edx
 87e00ee:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87e00f1:	89 45 08             	mov    %eax,0x8(%ebp)
 87e00f4:	8b 42 24             	mov    0x24(%edx),%eax
 87e00f7:	c9                   	leave
 87e00f8:	ff e0                	jmp    *%eax
 87e00fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlUnknown::Accept @ 0x87e00e0

/* TiXmlUnknown::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlUnknown::Accept(TiXmlUnknown *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e00f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x24))();
  return;
}

```

---

## Clone

```asm
// === 087e2710 TiXmlUnknown::Clone  [0x087e2710-0x87e27bf] ===
 87e2710:	55                   	push   %ebp
 87e2711:	89 e5                	mov    %esp,%ebp
 87e2713:	83 ec 28             	sub    $0x28,%esp
 87e2716:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87e271d:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e2720:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e2723:	8b 75 08             	mov    0x8(%ebp),%esi
 87e2726:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e2729:	e8 22 1d f4 ff       	call   8724450 <_Znwj>
 87e272e:	c7 40 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%eax)
 87e2735:	8b 7e 20             	mov    0x20(%esi),%edi
 87e2738:	89 c3                	mov    %eax,%ebx
 87e273a:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e2741:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e2748:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e274f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e2756:	c7 40 14 03 00 00 00 	movl   $0x3,0x14(%eax)
 87e275d:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 87e2764:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e276b:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87e2772:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 87e2779:	c7 00 a8 10 de 08    	movl   $0x8de10a8,(%eax)
 87e277f:	89 3c 24             	mov    %edi,(%esp)
 87e2782:	e8 29 bc 89 ff       	call   807e3b0 <strlen@plt>
 87e2787:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e278b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e278f:	8d 43 20             	lea    0x20(%ebx),%eax
 87e2792:	89 04 24             	mov    %eax,(%esp)
 87e2795:	e8 06 5e f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e279a:	8b 46 0c             	mov    0xc(%esi),%eax
 87e279d:	8b 56 08             	mov    0x8(%esi),%edx
 87e27a0:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e27a3:	8b 46 04             	mov    0x4(%esi),%eax
 87e27a6:	89 53 08             	mov    %edx,0x8(%ebx)
 87e27a9:	89 43 04             	mov    %eax,0x4(%ebx)
 87e27ac:	89 d8                	mov    %ebx,%eax
 87e27ae:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e27b1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e27b4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e27b7:	89 ec                	mov    %ebp,%esp
 87e27b9:	5d                   	pop    %ebp
 87e27ba:	c3                   	ret
 87e27bb:	90                   	nop
 87e27bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlUnknown::Clone @ 0x87e2710

/* TiXmlUnknown::Clone() const */

undefined4 * __thiscall TiXmlUnknown::Clone(TiXmlUnknown *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  
  puVar3 = operator_new(0x2c);
  puVar3[8] = &DAT_0948ccfc;
  __s = *(char **)(this + 0x20);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 3;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlUnknown_08de10a8;
  sVar4 = strlen(__s);
  std::string::assign((string *)(puVar3 + 8),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  puVar3[3] = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  return puVar3;
}

```

---

## CopyTo

```asm
// === 087e2380 TiXmlUnknown::CopyTo  [0x087e2380-0x87e23df] ===
 87e2380:	55                   	push   %ebp
 87e2381:	89 e5                	mov    %esp,%ebp
 87e2383:	83 ec 28             	sub    $0x28,%esp
 87e2386:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e2389:	8b 75 08             	mov    0x8(%ebp),%esi
 87e238c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e238f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e2392:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e2395:	8b 7e 20             	mov    0x20(%esi),%edi
 87e2398:	89 3c 24             	mov    %edi,(%esp)
 87e239b:	e8 10 c0 89 ff       	call   807e3b0 <strlen@plt>
 87e23a0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e23a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e23a8:	8d 43 20             	lea    0x20(%ebx),%eax
 87e23ab:	89 04 24             	mov    %eax,(%esp)
 87e23ae:	e8 ed 61 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e23b3:	8b 46 0c             	mov    0xc(%esi),%eax
 87e23b6:	8b 56 08             	mov    0x8(%esi),%edx
 87e23b9:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e23bc:	8b 46 04             	mov    0x4(%esi),%eax
 87e23bf:	89 53 08             	mov    %edx,0x8(%ebx)
 87e23c2:	89 43 04             	mov    %eax,0x4(%ebx)
 87e23c5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e23c8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e23cb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e23ce:	89 ec                	mov    %ebp,%esp
 87e23d0:	5d                   	pop    %ebp
 87e23d1:	c3                   	ret
 87e23d2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e23d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlUnknown::CopyTo @ 0x87e2380

/* TiXmlUnknown::CopyTo(TiXmlUnknown*) const */

void __thiscall TiXmlUnknown::CopyTo(TiXmlUnknown *this,TiXmlUnknown *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  __s = *(char **)(this + 0x20);
  sVar3 = strlen(__s);
  std::string::assign((string *)(param_1 + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}

```

---

## Parse

```asm
// === 087e78b0 TiXmlUnknown::Parse  [0x087e78b0-0x87e7b1f] ===
 87e78b0:	55                   	push   %ebp
 87e78b1:	89 e5                	mov    %esp,%ebp
 87e78b3:	57                   	push   %edi
 87e78b4:	56                   	push   %esi
 87e78b5:	53                   	push   %ebx
 87e78b6:	83 ec 5c             	sub    $0x5c,%esp
 87e78b9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e78bc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e78bf:	89 34 24             	mov    %esi,(%esp)
 87e78c2:	e8 09 86 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e78c7:	85 ff                	test   %edi,%edi
 87e78c9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87e78cc:	0f 85 4e 01 00 00    	jne    87e7a20 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x170>
 87e78d2:	8b 55 10             	mov    0x10(%ebp),%edx
 87e78d5:	85 d2                	test   %edx,%edx
 87e78d7:	74 24                	je     87e78fd <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x4d>
 87e78d9:	8b 45 14             	mov    0x14(%ebp),%eax
 87e78dc:	8b 55 10             	mov    0x10(%ebp),%edx
 87e78df:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e78e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e78e7:	89 14 24             	mov    %edx,(%esp)
 87e78ea:	e8 31 e7 ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e78ef:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e78f2:	8b 01                	mov    (%ecx),%eax
 87e78f4:	8b 51 04             	mov    0x4(%ecx),%edx
 87e78f7:	89 46 04             	mov    %eax,0x4(%esi)
 87e78fa:	89 56 08             	mov    %edx,0x8(%esi)
 87e78fd:	85 ff                	test   %edi,%edi
 87e78ff:	0f 84 0b 01 00 00    	je     87e7a10 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x160>
 87e7905:	0f b6 07             	movzbl (%edi),%eax
 87e7908:	84 c0                	test   %al,%al
 87e790a:	0f 84 00 01 00 00    	je     87e7a10 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x160>
 87e7910:	3c 3c                	cmp    $0x3c,%al
 87e7912:	0f 85 f8 00 00 00    	jne    87e7a10 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x160>
 87e7918:	8d 4e 20             	lea    0x20(%esi),%ecx
 87e791b:	8d 5f 01             	lea    0x1(%edi),%ebx
 87e791e:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 87e7921:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e7928:	00 
 87e7929:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e7930:	08 
 87e7931:	89 0c 24             	mov    %ecx,(%esp)
 87e7934:	e8 67 0c f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e7939:	85 db                	test   %ebx,%ebx
 87e793b:	0f 84 8f 00 00 00    	je     87e79d0 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x120>
 87e7941:	0f b6 47 01          	movzbl 0x1(%edi),%eax
 87e7945:	84 c0                	test   %al,%al
 87e7947:	74 7a                	je     87e79c3 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x113>
 87e7949:	3c 3e                	cmp    $0x3e,%al
 87e794b:	0f 84 67 01 00 00    	je     87e7ab8 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x208>
 87e7951:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 87e7954:	89 f1                	mov    %esi,%ecx
 87e7956:	eb 0b                	jmp    87e7963 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xb3>
 87e7958:	3c 3e                	cmp    $0x3e,%al
 87e795a:	0f 84 58 01 00 00    	je     87e7ab8 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x208>
 87e7960:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e7963:	8b 51 20             	mov    0x20(%ecx),%edx
 87e7966:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e7969:	8d 72 f4             	lea    -0xc(%edx),%esi
 87e796c:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 87e796f:	8d 79 01             	lea    0x1(%ecx),%edi
 87e7972:	3b 7e 04             	cmp    0x4(%esi),%edi
 87e7975:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e7978:	0f 86 4a 01 00 00    	jbe    87e7ac8 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x218>
 87e797e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87e7981:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e7984:	88 45 d8             	mov    %al,-0x28(%ebp)
 87e7987:	89 14 24             	mov    %edx,(%esp)
 87e798a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e798e:	e8 7d 03 f2 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e7993:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e7996:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 87e799a:	8b 51 20             	mov    0x20(%ecx),%edx
 87e799d:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e79a0:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 87e79a3:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 87e79a6:	8b 56 20             	mov    0x20(%esi),%edx
 87e79a9:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e79ac:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e79b1:	0f 85 48 01 00 00    	jne    87e7aff <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x24f>
 87e79b7:	83 c3 01             	add    $0x1,%ebx
 87e79ba:	74 14                	je     87e79d0 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x120>
 87e79bc:	0f b6 03             	movzbl (%ebx),%eax
 87e79bf:	84 c0                	test   %al,%al
 87e79c1:	75 95                	jne    87e7958 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa8>
 87e79c3:	83 c4 5c             	add    $0x5c,%esp
 87e79c6:	89 d8                	mov    %ebx,%eax
 87e79c8:	5b                   	pop    %ebx
 87e79c9:	5e                   	pop    %esi
 87e79ca:	5f                   	pop    %edi
 87e79cb:	5d                   	pop    %ebp
 87e79cc:	c3                   	ret
 87e79cd:	8d 76 00             	lea    0x0(%esi),%esi
 87e79d0:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87e79d3:	85 c9                	test   %ecx,%ecx
 87e79d5:	74 44                	je     87e7a1b <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16b>
 87e79d7:	8b 45 14             	mov    0x14(%ebp),%eax
 87e79da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e79e1:	00 
 87e79e2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e79e9:	00 
 87e79ea:	89 44 24 10          	mov    %eax,0x10(%esp)
 87e79ee:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e79f1:	31 db                	xor    %ebx,%ebx
 87e79f3:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 87e79fa:	00 
 87e79fb:	89 14 24             	mov    %edx,(%esp)
 87e79fe:	e8 2d f3 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e7a03:	83 c4 5c             	add    $0x5c,%esp
 87e7a06:	89 d8                	mov    %ebx,%eax
 87e7a08:	5b                   	pop    %ebx
 87e7a09:	5e                   	pop    %esi
 87e7a0a:	5f                   	pop    %edi
 87e7a0b:	5d                   	pop    %ebp
 87e7a0c:	c3                   	ret
 87e7a0d:	8d 76 00             	lea    0x0(%esi),%esi
 87e7a10:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e7a13:	85 c0                	test   %eax,%eax
 87e7a15:	0f 85 cd 00 00 00    	jne    87e7ae8 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e7a1b:	31 db                	xor    %ebx,%ebx
 87e7a1d:	eb a4                	jmp    87e79c3 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x113>
 87e7a1f:	90                   	nop
 87e7a20:	0f b6 1f             	movzbl (%edi),%ebx
 87e7a23:	84 db                	test   %bl,%bl
 87e7a25:	0f 84 b5 00 00 00    	je     87e7ae0 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x230>
 87e7a2b:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e7a2f:	74 3d                	je     87e7a6e <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1be>
 87e7a31:	0f b6 c3             	movzbl %bl,%eax
 87e7a34:	89 04 24             	mov    %eax,(%esp)
 87e7a37:	e8 44 68 89 ff       	call   807e280 <isspace@plt>
 87e7a3c:	80 fb 0a             	cmp    $0xa,%bl
 87e7a3f:	74 0f                	je     87e7a50 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a0>
 87e7a41:	85 c0                	test   %eax,%eax
 87e7a43:	75 0b                	jne    87e7a50 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a0>
 87e7a45:	80 fb 0d             	cmp    $0xd,%bl
 87e7a48:	0f 85 84 fe ff ff    	jne    87e78d2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x22>
 87e7a4e:	66 90                	xchg   %ax,%ax
 87e7a50:	83 c7 01             	add    $0x1,%edi
 87e7a53:	0f b6 1f             	movzbl (%edi),%ebx
 87e7a56:	84 db                	test   %bl,%bl
 87e7a58:	0f 84 74 fe ff ff    	je     87e78d2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x22>
 87e7a5e:	eb d1                	jmp    87e7a31 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x181>
 87e7a60:	83 c7 01             	add    $0x1,%edi
 87e7a63:	0f b6 1f             	movzbl (%edi),%ebx
 87e7a66:	84 db                	test   %bl,%bl
 87e7a68:	0f 84 64 fe ff ff    	je     87e78d2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x22>
 87e7a6e:	80 3f ef             	cmpb   $0xef,(%edi)
 87e7a71:	74 25                	je     87e7a98 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e8>
 87e7a73:	0f b6 c3             	movzbl %bl,%eax
 87e7a76:	89 04 24             	mov    %eax,(%esp)
 87e7a79:	e8 02 68 89 ff       	call   807e280 <isspace@plt>
 87e7a7e:	85 c0                	test   %eax,%eax
 87e7a80:	75 de                	jne    87e7a60 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b0>
 87e7a82:	80 fb 0a             	cmp    $0xa,%bl
 87e7a85:	74 d9                	je     87e7a60 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b0>
 87e7a87:	80 fb 0d             	cmp    $0xd,%bl
 87e7a8a:	0f 85 42 fe ff ff    	jne    87e78d2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x22>
 87e7a90:	eb ce                	jmp    87e7a60 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b0>
 87e7a92:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e7a98:	0f b6 47 01          	movzbl 0x1(%edi),%eax
 87e7a9c:	3c bb                	cmp    $0xbb,%al
 87e7a9e:	66 90                	xchg   %ax,%ax
 87e7aa0:	74 1e                	je     87e7ac0 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x210>
 87e7aa2:	3c bf                	cmp    $0xbf,%al
 87e7aa4:	75 cd                	jne    87e7a73 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1c3>
 87e7aa6:	0f b6 47 02          	movzbl 0x2(%edi),%eax
 87e7aaa:	3c be                	cmp    $0xbe,%al
 87e7aac:	74 04                	je     87e7ab2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x202>
 87e7aae:	3c bf                	cmp    $0xbf,%al
 87e7ab0:	75 c1                	jne    87e7a73 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1c3>
 87e7ab2:	83 c7 03             	add    $0x3,%edi
 87e7ab5:	eb ac                	jmp    87e7a63 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b3>
 87e7ab7:	90                   	nop
 87e7ab8:	83 c3 01             	add    $0x1,%ebx
 87e7abb:	e9 03 ff ff ff       	jmp    87e79c3 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x113>
 87e7ac0:	80 7f 02 bf          	cmpb   $0xbf,0x2(%edi)
 87e7ac4:	75 ad                	jne    87e7a73 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1c3>
 87e7ac6:	eb ea                	jmp    87e7ab2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x202>
 87e7ac8:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 87e7acb:	8b 76 08             	mov    0x8(%esi),%esi
 87e7ace:	85 f6                	test   %esi,%esi
 87e7ad0:	0f 8f a8 fe ff ff    	jg     87e797e <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xce>
 87e7ad6:	e9 c5 fe ff ff       	jmp    87e79a0 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xf0>
 87e7adb:	90                   	nop
 87e7adc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7ae0:	31 ff                	xor    %edi,%edi
 87e7ae2:	e9 eb fd ff ff       	jmp    87e78d2 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x22>
 87e7ae7:	90                   	nop
 87e7ae8:	8b 75 14             	mov    0x14(%ebp),%esi
 87e7aeb:	8b 45 10             	mov    0x10(%ebp),%eax
 87e7aee:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e7af2:	89 74 24 10          	mov    %esi,0x10(%esp)
 87e7af6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e7afa:	e9 ef fe ff ff       	jmp    87e79ee <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x13e>
 87e7aff:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e7b02:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e7b09:	89 7a f4             	mov    %edi,-0xc(%edx)
 87e7b0c:	c6 44 38 0c 00       	movb   $0x0,0xc(%eax,%edi,1)
 87e7b11:	e9 a1 fe ff ff       	jmp    87e79b7 <_ZN12TiXmlUnknown5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x107>
 87e7b16:	8d 76 00             	lea    0x0(%esi),%esi
 87e7b19:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlUnknown::Parse @ 0x87e78b0

/* TiXmlUnknown::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlUnknown::Parse(TiXmlUnknown *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  TiXmlDocument *pTVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  pTVar4 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  if (param_1 != (byte *)0x0) {
    uVar8 = (uint)*param_1;
    if (*param_1 == 0) {
      param_1 = (byte *)0x0;
    }
    else if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e7ab2;
            goto LAB_087e7a73;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e7a73;
LAB_087e7ab2:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e7a73:
          iVar5 = isspace(uVar8);
          if (((iVar5 == 0) && ((char)uVar8 != '\n')) && ((char)uVar8 != '\r')) break;
          param_1 = param_1 + 1;
        }
        uVar8 = (uint)*param_1;
      } while (*param_1 != 0);
    }
    else {
      do {
        iVar5 = isspace(uVar8);
        if ((((char)uVar8 != '\n') && (iVar5 == 0)) && ((char)uVar8 != '\r')) break;
        param_1 = param_1 + 1;
        uVar8 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar2;
  }
  if (((param_1 == (byte *)0x0) || (*param_1 == 0)) || (*param_1 != 0x3c)) {
    if (pTVar4 != (TiXmlDocument *)0x0) goto LAB_087e79ee;
  }
  else {
    pbVar7 = param_1 + 1;
    std::string::assign((string *)(this + 0x20),"",0);
    if (pbVar7 != (byte *)0x0) {
      bVar1 = param_1[1];
      while( true ) {
        if (bVar1 == 0) {
          return pbVar7;
        }
        if (bVar1 == 0x3e) {
          return pbVar7 + 1;
        }
        iVar5 = *(int *)(this + 0x20);
        iVar6 = *(int *)(iVar5 + -0xc);
        uVar8 = iVar6 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar8) || (0 < *(int *)(iVar5 + -4))) {
          std::string::reserve((string *)(this + 0x20),uVar8);
          iVar5 = *(int *)(this + 0x20);
          iVar6 = *(int *)(iVar5 + -0xc);
        }
        *(byte *)(iVar5 + iVar6) = bVar1;
        puVar3 = *(undefined1 **)(this + 0x20);
        if (puVar3 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar3 + -4) = 0;
          *(uint *)(puVar3 + -0xc) = uVar8;
          puVar3[uVar8] = 0;
        }
        pbVar7 = pbVar7 + 1;
        if (pbVar7 == (byte *)0x0) break;
        bVar1 = *pbVar7;
      }
    }
    if (pTVar4 != (TiXmlDocument *)0x0) {
      param_2 = (TiXmlParsingData *)0x0;
      param_1 = (byte *)0x0;
LAB_087e79ee:
      TiXmlDocument::SetError(pTVar4,9,param_1,param_2,param_4);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}

```

---

## Print

```asm
// === 087e0510 TiXmlUnknown::Print  [0x087e0510-0x87e057f] ===
 87e0510:	55                   	push   %ebp
 87e0511:	89 e5                	mov    %esp,%ebp
 87e0513:	57                   	push   %edi
 87e0514:	56                   	push   %esi
 87e0515:	53                   	push   %ebx
 87e0516:	83 ec 2c             	sub    $0x2c,%esp
 87e0519:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e051c:	8b 45 08             	mov    0x8(%ebp),%eax
 87e051f:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e0522:	85 ff                	test   %edi,%edi
 87e0524:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e0527:	7e 2e                	jle    87e0557 <_ZNK12TiXmlUnknown5PrintEP8_IO_FILEi+0x47>
 87e0529:	31 db                	xor    %ebx,%ebx
 87e052b:	90                   	nop
 87e052c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0530:	83 c3 01             	add    $0x1,%ebx
 87e0533:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e0537:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 87e053e:	00 
 87e053f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e0546:	00 
 87e0547:	c7 04 24 71 0e de 08 	movl   $0x8de0e71,(%esp)
 87e054e:	e8 cd dd 89 ff       	call   807e320 <fwrite@plt>
 87e0553:	39 df                	cmp    %ebx,%edi
 87e0555:	7f d9                	jg     87e0530 <_ZNK12TiXmlUnknown5PrintEP8_IO_FILEi+0x20>
 87e0557:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e055a:	8b 42 20             	mov    0x20(%edx),%eax
 87e055d:	89 75 08             	mov    %esi,0x8(%ebp)
 87e0560:	c7 45 0c 76 0e de 08 	movl   $0x8de0e76,0xc(%ebp)
 87e0567:	89 45 10             	mov    %eax,0x10(%ebp)
 87e056a:	83 c4 2c             	add    $0x2c,%esp
 87e056d:	5b                   	pop    %ebx
 87e056e:	5e                   	pop    %esi
 87e056f:	5f                   	pop    %edi
 87e0570:	5d                   	pop    %ebp
 87e0571:	e9 1a d5 89 ff       	jmp    807da90 <fprintf@plt>
 87e0576:	8d 76 00             	lea    0x0(%esi),%esi
 87e0579:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlUnknown::Print @ 0x87e0510

/* TiXmlUnknown::Print(_IO_FILE*, int) const */

void __thiscall TiXmlUnknown::Print(TiXmlUnknown *this,_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      fwrite(&DAT_08de0e71,1,4,param_1);
    } while (iVar1 < param_2);
  }
  fprintf(param_1,"<%s>");
  return;
}

```

---

## StreamIn

```asm
// === 087e9360 TiXmlUnknown::StreamIn  [0x087e9360-0x87e945f] ===
 87e9360:	55                   	push   %ebp
 87e9361:	89 e5                	mov    %esp,%ebp
 87e9363:	57                   	push   %edi
 87e9364:	56                   	push   %esi
 87e9365:	53                   	push   %ebx
 87e9366:	83 ec 4c             	sub    $0x4c,%esp
 87e9369:	8b 75 10             	mov    0x10(%ebp),%esi
 87e936c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e936f:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 87e9372:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e9378:	8b 03                	mov    (%ebx),%eax
 87e937a:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e937d:	8b 74 03 14          	mov    0x14(%ebx,%eax,1),%esi
 87e9381:	85 f6                	test   %esi,%esi
 87e9383:	75 64                	jne    87e93e9 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x89>
 87e9385:	89 1c 24             	mov    %ebx,(%esp)
 87e9388:	e8 63 c9 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e938d:	85 c0                	test   %eax,%eax
 87e938f:	7e 67                	jle    87e93f8 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x98>
 87e9391:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e9394:	8b 11                	mov    (%ecx),%edx
 87e9396:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e9399:	8d 72 f4             	lea    -0xc(%edx),%esi
 87e939c:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 87e939f:	8d 79 01             	lea    0x1(%ecx),%edi
 87e93a2:	3b 7e 04             	cmp    0x4(%esi),%edi
 87e93a5:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e93a8:	77 07                	ja     87e93b1 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x51>
 87e93aa:	8b 7e 08             	mov    0x8(%esi),%edi
 87e93ad:	85 ff                	test   %edi,%edi
 87e93af:	7e 20                	jle    87e93d1 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x71>
 87e93b1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e93b4:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e93b7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e93ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e93be:	89 0c 24             	mov    %ecx,(%esp)
 87e93c1:	e8 4a e9 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e93c6:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 87e93c9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e93cc:	8b 16                	mov    (%esi),%edx
 87e93ce:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e93d1:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 87e93d4:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e93d7:	8b 0f                	mov    (%edi),%ecx
 87e93d9:	8d 51 f4             	lea    -0xc(%ecx),%edx
 87e93dc:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87e93e2:	75 67                	jne    87e944b <_ZN12TiXmlUnknown8StreamInEPSiPSs+0xeb>
 87e93e4:	83 f8 3e             	cmp    $0x3e,%eax
 87e93e7:	75 8f                	jne    87e9378 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x18>
 87e93e9:	83 c4 4c             	add    $0x4c,%esp
 87e93ec:	5b                   	pop    %ebx
 87e93ed:	5e                   	pop    %esi
 87e93ee:	5f                   	pop    %edi
 87e93ef:	5d                   	pop    %ebp
 87e93f0:	c3                   	ret
 87e93f1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e93f8:	8b 45 08             	mov    0x8(%ebp),%eax
 87e93fb:	89 04 24             	mov    %eax,(%esp)
 87e93fe:	e8 cd 6a ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e9403:	85 c0                	test   %eax,%eax
 87e9405:	89 c3                	mov    %eax,%ebx
 87e9407:	74 e0                	je     87e93e9 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x89>
 87e9409:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e940d:	75 da                	jne    87e93e9 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x89>
 87e940f:	8b 35 f4 37 3f 09    	mov    0x93f37f4,%esi
 87e9415:	c6 40 2c 01          	movb   $0x1,0x2c(%eax)
 87e9419:	c7 40 30 0d 00 00 00 	movl   $0xd,0x30(%eax)
 87e9420:	89 34 24             	mov    %esi,(%esp)
 87e9423:	e8 88 4f 89 ff       	call   807e3b0 <strlen@plt>
 87e9428:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e942c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e9430:	8d 43 34             	lea    0x34(%ebx),%eax
 87e9433:	89 04 24             	mov    %eax,(%esp)
 87e9436:	e8 65 f1 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e943b:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e9442:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e9449:	eb 9e                	jmp    87e93e9 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x89>
 87e944b:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87e944e:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 87e9455:	89 71 f4             	mov    %esi,-0xc(%ecx)
 87e9458:	c6 44 32 0c 00       	movb   $0x0,0xc(%edx,%esi,1)
 87e945d:	eb 85                	jmp    87e93e4 <_ZN12TiXmlUnknown8StreamInEPSiPSs+0x84>
 87e945f:	90                   	nop

```

```c
// TiXmlUnknown::StreamIn @ 0x87e9360

/* TiXmlUnknown::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlUnknown::StreamIn(TiXmlUnknown *this,istream *param_1,string *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 __s;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return;
    }
    iVar3 = std::istream::get(param_1);
    if (iVar3 < 1) break;
    iVar6 = *(int *)param_2;
    iVar5 = *(int *)(iVar6 + -0xc);
    uVar1 = iVar5 + 1;
    if ((*(uint *)(iVar6 + -8) < uVar1) || (0 < *(int *)(iVar6 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar6 = *(int *)param_2;
      iVar5 = *(int *)(iVar6 + -0xc);
    }
    *(char *)(iVar6 + iVar5) = (char)iVar3;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
    if (iVar3 == 0x3e) {
      return;
    }
  }
  iVar3 = TiXmlNode::GetDocument((TiXmlNode *)this);
  __s = TiXmlBase::errorString._52_4_;
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(iVar3 + 0x2c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar3 + 0x2c) = 1;
  *(undefined4 *)(iVar3 + 0x30) = 0xd;
  sVar4 = strlen((char *)__s);
  std::string::assign((string *)(iVar3 + 0x34),(char *)__s,sVar4);
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
  return;
}

```

