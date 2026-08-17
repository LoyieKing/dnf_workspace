# TiXmlDeclaration

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## Accept

```asm
// === 087e00c0 TiXmlDeclaration::Accept  [0x087e00c0-0x87e00df] ===
 87e00c0:	55                   	push   %ebp
 87e00c1:	89 e5                	mov    %esp,%ebp
 87e00c3:	83 ec 08             	sub    $0x8,%esp
 87e00c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e00c9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e00cc:	8b 10                	mov    (%eax),%edx
 87e00ce:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87e00d1:	89 45 08             	mov    %eax,0x8(%ebp)
 87e00d4:	8b 42 18             	mov    0x18(%edx),%eax
 87e00d7:	c9                   	leave
 87e00d8:	ff e0                	jmp    *%eax
 87e00da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlDeclaration::Accept @ 0x87e00c0

/* TiXmlDeclaration::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlDeclaration::Accept(TiXmlDeclaration *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e00d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x18))();
  return;
}

```

---

## Clone

```asm
// === 087e27c0 TiXmlDeclaration::Clone  [0x087e27c0-0x87e28af] ===
 87e27c0:	55                   	push   %ebp
 87e27c1:	89 e5                	mov    %esp,%ebp
 87e27c3:	57                   	push   %edi
 87e27c4:	56                   	push   %esi
 87e27c5:	53                   	push   %ebx
 87e27c6:	83 ec 1c             	sub    $0x1c,%esp
 87e27c9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e27cc:	c7 04 24 38 00 00 00 	movl   $0x38,(%esp)
 87e27d3:	e8 78 1c f4 ff       	call   8724450 <_Znwj>
 87e27d8:	c7 40 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%eax)
 87e27df:	8b 7e 20             	mov    0x20(%esi),%edi
 87e27e2:	89 c3                	mov    %eax,%ebx
 87e27e4:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e27eb:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e27f2:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e27f9:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e2800:	c7 40 14 05 00 00 00 	movl   $0x5,0x14(%eax)
 87e2807:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 87e280e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e2815:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87e281c:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 87e2823:	c7 00 08 11 de 08    	movl   $0x8de1108,(%eax)
 87e2829:	c7 40 2c fc cc 48 09 	movl   $0x948ccfc,0x2c(%eax)
 87e2830:	c7 40 30 fc cc 48 09 	movl   $0x948ccfc,0x30(%eax)
 87e2837:	c7 40 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%eax)
 87e283e:	89 3c 24             	mov    %edi,(%esp)
 87e2841:	e8 6a bb 89 ff       	call   807e3b0 <strlen@plt>
 87e2846:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e284a:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e284e:	8d 43 20             	lea    0x20(%ebx),%eax
 87e2851:	89 04 24             	mov    %eax,(%esp)
 87e2854:	e8 47 5d f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2859:	8b 46 0c             	mov    0xc(%esi),%eax
 87e285c:	8b 56 08             	mov    0x8(%esi),%edx
 87e285f:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e2862:	8b 46 04             	mov    0x4(%esi),%eax
 87e2865:	89 53 08             	mov    %edx,0x8(%ebx)
 87e2868:	89 43 04             	mov    %eax,0x4(%ebx)
 87e286b:	8d 46 2c             	lea    0x2c(%esi),%eax
 87e286e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2872:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e2875:	89 04 24             	mov    %eax,(%esp)
 87e2878:	e8 b3 53 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e287d:	8d 46 30             	lea    0x30(%esi),%eax
 87e2880:	83 c6 34             	add    $0x34,%esi
 87e2883:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2887:	8d 43 30             	lea    0x30(%ebx),%eax
 87e288a:	89 04 24             	mov    %eax,(%esp)
 87e288d:	e8 9e 53 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e2892:	8d 43 34             	lea    0x34(%ebx),%eax
 87e2895:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e2899:	89 04 24             	mov    %eax,(%esp)
 87e289c:	e8 8f 53 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e28a1:	83 c4 1c             	add    $0x1c,%esp
 87e28a4:	89 d8                	mov    %ebx,%eax
 87e28a6:	5b                   	pop    %ebx
 87e28a7:	5e                   	pop    %esi
 87e28a8:	5f                   	pop    %edi
 87e28a9:	5d                   	pop    %ebp
 87e28aa:	c3                   	ret
 87e28ab:	90                   	nop
 87e28ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlDeclaration::Clone @ 0x87e27c0

/* TiXmlDeclaration::Clone() const */

undefined4 * __thiscall TiXmlDeclaration::Clone(TiXmlDeclaration *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  
  puVar3 = operator_new(0x38);
  puVar3[8] = &DAT_0948ccfc;
  __s = *(char **)(this + 0x20);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 5;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlDeclaration_08de1108;
  puVar3[0xb] = &DAT_0948ccfc;
  puVar3[0xc] = &DAT_0948ccfc;
  puVar3[0xd] = &DAT_0948ccfc;
  sVar4 = strlen(__s);
  std::string::assign((string *)(puVar3 + 8),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  puVar3[3] = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  std::string::assign((string *)(puVar3 + 0xb),(string *)(this + 0x2c));
  std::string::assign((string *)(puVar3 + 0xc),(string *)(this + 0x30));
  std::string::assign((string *)(puVar3 + 0xd),(string *)(this + 0x34));
  return puVar3;
}

```

---

## CopyTo

```asm
// === 087e2680 TiXmlDeclaration::CopyTo  [0x087e2680-0x87e270f] ===
 87e2680:	55                   	push   %ebp
 87e2681:	89 e5                	mov    %esp,%ebp
 87e2683:	83 ec 28             	sub    $0x28,%esp
 87e2686:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e2689:	8b 75 08             	mov    0x8(%ebp),%esi
 87e268c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e268f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e2692:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e2695:	8b 7e 20             	mov    0x20(%esi),%edi
 87e2698:	89 3c 24             	mov    %edi,(%esp)
 87e269b:	e8 10 bd 89 ff       	call   807e3b0 <strlen@plt>
 87e26a0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e26a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e26a8:	8d 43 20             	lea    0x20(%ebx),%eax
 87e26ab:	89 04 24             	mov    %eax,(%esp)
 87e26ae:	e8 ed 5e f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e26b3:	8b 46 0c             	mov    0xc(%esi),%eax
 87e26b6:	8b 56 08             	mov    0x8(%esi),%edx
 87e26b9:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e26bc:	8b 46 04             	mov    0x4(%esi),%eax
 87e26bf:	89 53 08             	mov    %edx,0x8(%ebx)
 87e26c2:	89 43 04             	mov    %eax,0x4(%ebx)
 87e26c5:	8d 46 2c             	lea    0x2c(%esi),%eax
 87e26c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e26cc:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e26cf:	89 04 24             	mov    %eax,(%esp)
 87e26d2:	e8 59 55 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e26d7:	8d 46 30             	lea    0x30(%esi),%eax
 87e26da:	83 c6 34             	add    $0x34,%esi
 87e26dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e26e1:	8d 43 30             	lea    0x30(%ebx),%eax
 87e26e4:	83 c3 34             	add    $0x34,%ebx
 87e26e7:	89 04 24             	mov    %eax,(%esp)
 87e26ea:	e8 41 55 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e26ef:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e26f2:	89 75 0c             	mov    %esi,0xc(%ebp)
 87e26f5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e26f8:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e26fb:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e26fe:	89 ec                	mov    %ebp,%esp
 87e2700:	5d                   	pop    %ebp
 87e2701:	e9 2a 55 f2 ff       	jmp    8707c30 <_ZNSs6assignERKSs>
 87e2706:	8d 76 00             	lea    0x0(%esi),%esi
 87e2709:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDeclaration::CopyTo @ 0x87e2680

/* TiXmlDeclaration::CopyTo(TiXmlDeclaration*) const */

void __thiscall TiXmlDeclaration::CopyTo(TiXmlDeclaration *this,TiXmlDeclaration *param_1)

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
  std::string::assign((string *)(param_1 + 0x2c),(string *)(this + 0x2c));
  std::string::assign((string *)(param_1 + 0x30),(string *)(this + 0x30));
  std::string::assign((string *)(param_1 + 0x34),(string *)(this + 0x34));
  return;
}

```

---

## Parse

```asm
// === 087e9da0 TiXmlDeclaration::Parse  [0x087e9da0-0x87ea70f] ===
 87e9da0:	55                   	push   %ebp
 87e9da1:	89 e5                	mov    %esp,%ebp
 87e9da3:	57                   	push   %edi
 87e9da4:	56                   	push   %esi
 87e9da5:	53                   	push   %ebx
 87e9da6:	83 ec 6c             	sub    $0x6c,%esp
 87e9da9:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e9dac:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e9daf:	8b 75 14             	mov    0x14(%ebp),%esi
 87e9db2:	85 d2                	test   %edx,%edx
 87e9db4:	75 72                	jne    87e9e28 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x88>
 87e9db6:	8b 45 08             	mov    0x8(%ebp),%eax
 87e9db9:	89 04 24             	mov    %eax,(%esp)
 87e9dbc:	e8 0f 61 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e9dc1:	89 c3                	mov    %eax,%ebx
 87e9dc3:	85 db                	test   %ebx,%ebx
 87e9dc5:	0f 84 91 01 00 00    	je     87e9f5c <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1bc>
 87e9dcb:	80 7b 2c 00          	cmpb   $0x0,0x2c(%ebx)
 87e9dcf:	0f 85 87 01 00 00    	jne    87e9f5c <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1bc>
 87e9dd5:	8b 35 ec 37 3f 09    	mov    0x93f37ec,%esi
 87e9ddb:	c6 43 2c 01          	movb   $0x1,0x2c(%ebx)
 87e9ddf:	c7 43 30 0b 00 00 00 	movl   $0xb,0x30(%ebx)
 87e9de6:	89 34 24             	mov    %esi,(%esp)
 87e9de9:	e8 c2 45 89 ff       	call   807e3b0 <strlen@plt>
 87e9dee:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e9df2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e9df6:	8d 43 34             	lea    0x34(%ebx),%eax
 87e9df9:	89 04 24             	mov    %eax,(%esp)
 87e9dfc:	e8 9f e7 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e9e01:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e9e08:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e9e0f:	31 db                	xor    %ebx,%ebx
 87e9e11:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e9e18:	83 c4 6c             	add    $0x6c,%esp
 87e9e1b:	89 d8                	mov    %ebx,%eax
 87e9e1d:	5b                   	pop    %ebx
 87e9e1e:	5e                   	pop    %esi
 87e9e1f:	5f                   	pop    %edi
 87e9e20:	5d                   	pop    %ebp
 87e9e21:	c3                   	ret
 87e9e22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e9e28:	0f b6 1a             	movzbl (%edx),%ebx
 87e9e2b:	84 db                	test   %bl,%bl
 87e9e2d:	74 87                	je     87e9db6 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x16>
 87e9e2f:	83 fe 01             	cmp    $0x1,%esi
 87e9e32:	0f 84 30 01 00 00    	je     87e9f68 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1c8>
 87e9e38:	89 75 b0             	mov    %esi,-0x50(%ebp)
 87e9e3b:	89 d6                	mov    %edx,%esi
 87e9e3d:	0f b6 c3             	movzbl %bl,%eax
 87e9e40:	89 04 24             	mov    %eax,(%esp)
 87e9e43:	e8 38 44 89 ff       	call   807e280 <isspace@plt>
 87e9e48:	80 fb 0a             	cmp    $0xa,%bl
 87e9e4b:	0f 84 3f 05 00 00    	je     87ea390 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5f0>
 87e9e51:	85 c0                	test   %eax,%eax
 87e9e53:	0f 85 37 05 00 00    	jne    87ea390 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5f0>
 87e9e59:	80 fb 0d             	cmp    $0xd,%bl
 87e9e5c:	0f 84 2e 05 00 00    	je     87ea390 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5f0>
 87e9e62:	8b 45 08             	mov    0x8(%ebp),%eax
 87e9e65:	89 f2                	mov    %esi,%edx
 87e9e67:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87e9e6a:	8b 75 b0             	mov    -0x50(%ebp),%esi
 87e9e6d:	89 04 24             	mov    %eax,(%esp)
 87e9e70:	e8 5b 60 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e9e75:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87e9e78:	85 d2                	test   %edx,%edx
 87e9e7a:	89 c3                	mov    %eax,%ebx
 87e9e7c:	0f 84 41 ff ff ff    	je     87e9dc3 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x23>
 87e9e82:	80 3a 00             	cmpb   $0x0,(%edx)
 87e9e85:	0f 84 38 ff ff ff    	je     87e9dc3 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x23>
 87e9e8b:	89 14 24             	mov    %edx,(%esp)
 87e9e8e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e9e92:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e9e99:	00 
 87e9e9a:	c7 44 24 04 77 18 de 	movl   $0x8de1877,0x4(%esp)
 87e9ea1:	08 
 87e9ea2:	e8 49 c4 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e9ea7:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87e9eaa:	84 c0                	test   %al,%al
 87e9eac:	0f 84 11 ff ff ff    	je     87e9dc3 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x23>
 87e9eb2:	85 ff                	test   %edi,%edi
 87e9eb4:	0f 84 68 05 00 00    	je     87ea422 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x682>
 87e9eba:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e9ebe:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87e9ec1:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e9ec5:	89 3c 24             	mov    %edi,(%esp)
 87e9ec8:	e8 53 c1 ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e9ecd:	8b 0f                	mov    (%edi),%ecx
 87e9ecf:	8b 5f 04             	mov    0x4(%edi),%ebx
 87e9ed2:	8b 45 08             	mov    0x8(%ebp),%eax
 87e9ed5:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87e9ed8:	89 48 04             	mov    %ecx,0x4(%eax)
 87e9edb:	89 58 08             	mov    %ebx,0x8(%eax)
 87e9ede:	83 c0 2c             	add    $0x2c,%eax
 87e9ee1:	8d 5a 05             	lea    0x5(%edx),%ebx
 87e9ee4:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87e9ee7:	89 45 b0             	mov    %eax,-0x50(%ebp)
 87e9eea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9ef1:	00 
 87e9ef2:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e9ef9:	08 
 87e9efa:	89 04 24             	mov    %eax,(%esp)
 87e9efd:	e8 9e e6 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e9f02:	8b 45 08             	mov    0x8(%ebp),%eax
 87e9f05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9f0c:	00 
 87e9f0d:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e9f14:	08 
 87e9f15:	83 c0 30             	add    $0x30,%eax
 87e9f18:	89 45 ac             	mov    %eax,-0x54(%ebp)
 87e9f1b:	89 04 24             	mov    %eax,(%esp)
 87e9f1e:	e8 7d e6 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e9f23:	8b 45 08             	mov    0x8(%ebp),%eax
 87e9f26:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9f2d:	00 
 87e9f2e:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e9f35:	08 
 87e9f36:	83 c0 34             	add    $0x34,%eax
 87e9f39:	89 45 a8             	mov    %eax,-0x58(%ebp)
 87e9f3c:	89 04 24             	mov    %eax,(%esp)
 87e9f3f:	e8 5c e6 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e9f44:	85 db                	test   %ebx,%ebx
 87e9f46:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87e9f49:	0f 84 c9 fe ff ff    	je     87e9e18 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87e9f4f:	0f b6 52 05          	movzbl 0x5(%edx),%edx
 87e9f53:	90                   	nop
 87e9f54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9f58:	84 d2                	test   %dl,%dl
 87e9f5a:	75 6c                	jne    87e9fc8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x228>
 87e9f5c:	31 db                	xor    %ebx,%ebx
 87e9f5e:	e9 b5 fe ff ff       	jmp    87e9e18 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87e9f63:	90                   	nop
 87e9f64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9f68:	89 75 b0             	mov    %esi,-0x50(%ebp)
 87e9f6b:	89 d6                	mov    %edx,%esi
 87e9f6d:	eb 2f                	jmp    87e9f9e <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1fe>
 87e9f6f:	90                   	nop
 87e9f70:	0f b6 c3             	movzbl %bl,%eax
 87e9f73:	89 04 24             	mov    %eax,(%esp)
 87e9f76:	e8 05 43 89 ff       	call   807e280 <isspace@plt>
 87e9f7b:	85 c0                	test   %eax,%eax
 87e9f7d:	75 11                	jne    87e9f90 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f0>
 87e9f7f:	80 fb 0a             	cmp    $0xa,%bl
 87e9f82:	74 0c                	je     87e9f90 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f0>
 87e9f84:	80 fb 0d             	cmp    $0xd,%bl
 87e9f87:	0f 85 d5 fe ff ff    	jne    87e9e62 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc2>
 87e9f8d:	8d 76 00             	lea    0x0(%esi),%esi
 87e9f90:	83 c6 01             	add    $0x1,%esi
 87e9f93:	0f b6 1e             	movzbl (%esi),%ebx
 87e9f96:	84 db                	test   %bl,%bl
 87e9f98:	0f 84 c4 fe ff ff    	je     87e9e62 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc2>
 87e9f9e:	80 3e ef             	cmpb   $0xef,(%esi)
 87e9fa1:	75 cd                	jne    87e9f70 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1d0>
 87e9fa3:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e9fa7:	3c bb                	cmp    $0xbb,%al
 87e9fa9:	0f 84 54 04 00 00    	je     87ea403 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x663>
 87e9faf:	3c bf                	cmp    $0xbf,%al
 87e9fb1:	75 bd                	jne    87e9f70 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1d0>
 87e9fb3:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e9fb7:	3c be                	cmp    $0xbe,%al
 87e9fb9:	74 04                	je     87e9fbf <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x21f>
 87e9fbb:	3c bf                	cmp    $0xbf,%al
 87e9fbd:	75 b1                	jne    87e9f70 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1d0>
 87e9fbf:	83 c6 03             	add    $0x3,%esi
 87e9fc2:	eb cf                	jmp    87e9f93 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1f3>
 87e9fc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9fc8:	80 fa 3e             	cmp    $0x3e,%dl
 87e9fcb:	0f 84 b1 03 00 00    	je     87ea382 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5e2>
 87e9fd1:	84 d2                	test   %dl,%dl
 87e9fd3:	0f 84 37 02 00 00    	je     87ea210 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x470>
 87e9fd9:	83 fe 01             	cmp    $0x1,%esi
 87e9fdc:	0f 84 36 03 00 00    	je     87ea318 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x578>
 87e9fe2:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 87e9fe5:	89 de                	mov    %ebx,%esi
 87e9fe7:	89 d3                	mov    %edx,%ebx
 87e9fe9:	0f b6 c3             	movzbl %bl,%eax
 87e9fec:	89 04 24             	mov    %eax,(%esp)
 87e9fef:	e8 8c 42 89 ff       	call   807e280 <isspace@plt>
 87e9ff4:	80 fb 0a             	cmp    $0xa,%bl
 87e9ff7:	0f 84 fb 01 00 00    	je     87ea1f8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x458>
 87e9ffd:	85 c0                	test   %eax,%eax
 87e9fff:	0f 85 f3 01 00 00    	jne    87ea1f8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x458>
 87ea005:	80 fb 0d             	cmp    $0xd,%bl
 87ea008:	0f 84 ea 01 00 00    	je     87ea1f8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x458>
 87ea00e:	89 f3                	mov    %esi,%ebx
 87ea010:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 87ea013:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87ea017:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87ea01e:	00 
 87ea01f:	c7 44 24 04 18 63 d0 	movl   $0x8d06318,0x4(%esp)
 87ea026:	08 
 87ea027:	89 1c 24             	mov    %ebx,(%esp)
 87ea02a:	e8 c1 c2 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87ea02f:	84 c0                	test   %al,%al
 87ea031:	0f 84 c1 00 00 00    	je     87ea0f8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x358>
 87ea037:	8d 55 bc             	lea    -0x44(%ebp),%edx
 87ea03a:	c7 45 c4 ff ff ff ff 	movl   $0xffffffff,-0x3c(%ebp)
 87ea041:	c7 45 c0 ff ff ff ff 	movl   $0xffffffff,-0x40(%ebp)
 87ea048:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 87ea04f:	c7 45 bc 28 20 de 08 	movl   $0x8de2028,-0x44(%ebp)
 87ea056:	c7 45 d0 fc cc 48 09 	movl   $0x948ccfc,-0x30(%ebp)
 87ea05d:	c7 45 d4 fc cc 48 09 	movl   $0x948ccfc,-0x2c(%ebp)
 87ea064:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 87ea06b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 87ea072:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 87ea079:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87ea07d:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87ea081:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87ea085:	89 14 24             	mov    %edx,(%esp)
 87ea088:	e8 a3 e3 ff ff       	call   87e8430 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding>
 87ea08d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87ea090:	89 c3                	mov    %eax,%ebx
 87ea092:	89 14 24             	mov    %edx,(%esp)
 87ea095:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87ea098:	e8 13 43 89 ff       	call   807e3b0 <strlen@plt>
 87ea09d:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87ea0a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea0a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87ea0a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 87ea0ab:	89 04 24             	mov    %eax,(%esp)
 87ea0ae:	e8 ed e4 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87ea0b3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87ea0b6:	c7 45 bc 28 20 de 08 	movl   $0x8de2028,-0x44(%ebp)
 87ea0bd:	83 e8 0c             	sub    $0xc,%eax
 87ea0c0:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87ea0c5:	0f 85 66 03 00 00    	jne    87ea431 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x691>
 87ea0cb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87ea0ce:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 87ea0d3:	83 e8 0c             	sub    $0xc,%eax
 87ea0d6:	39 c2                	cmp    %eax,%edx
 87ea0d8:	0f 85 84 03 00 00    	jne    87ea462 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6c2>
 87ea0de:	c7 45 bc f8 13 de 08 	movl   $0x8de13f8,-0x44(%ebp)
 87ea0e5:	85 db                	test   %ebx,%ebx
 87ea0e7:	0f 84 2b fd ff ff    	je     87e9e18 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87ea0ed:	0f b6 13             	movzbl (%ebx),%edx
 87ea0f0:	e9 63 fe ff ff       	jmp    87e9f58 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b8>
 87ea0f5:	8d 76 00             	lea    0x0(%esi),%esi
 87ea0f8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87ea0fc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87ea103:	00 
 87ea104:	c7 44 24 04 71 37 e0 	movl   $0x8e03771,0x4(%esp)
 87ea10b:	08 
 87ea10c:	89 1c 24             	mov    %ebx,(%esp)
 87ea10f:	e8 dc c1 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87ea114:	84 c0                	test   %al,%al
 87ea116:	0f 84 fc 00 00 00    	je     87ea218 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x478>
 87ea11c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 87ea11f:	c7 45 c4 ff ff ff ff 	movl   $0xffffffff,-0x3c(%ebp)
 87ea126:	c7 45 c0 ff ff ff ff 	movl   $0xffffffff,-0x40(%ebp)
 87ea12d:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 87ea134:	c7 45 bc 28 20 de 08 	movl   $0x8de2028,-0x44(%ebp)
 87ea13b:	c7 45 d0 fc cc 48 09 	movl   $0x948ccfc,-0x30(%ebp)
 87ea142:	c7 45 d4 fc cc 48 09 	movl   $0x948ccfc,-0x2c(%ebp)
 87ea149:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 87ea150:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 87ea157:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 87ea15e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87ea162:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87ea166:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87ea16a:	89 04 24             	mov    %eax,(%esp)
 87ea16d:	e8 be e2 ff ff       	call   87e8430 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding>
 87ea172:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87ea175:	89 c3                	mov    %eax,%ebx
 87ea177:	89 14 24             	mov    %edx,(%esp)
 87ea17a:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87ea17d:	e8 2e 42 89 ff       	call   807e3b0 <strlen@plt>
 87ea182:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87ea185:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea189:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87ea18c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87ea190:	89 14 24             	mov    %edx,(%esp)
 87ea193:	e8 08 e4 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87ea198:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87ea19b:	c7 45 bc 28 20 de 08 	movl   $0x8de2028,-0x44(%ebp)
 87ea1a2:	83 e8 0c             	sub    $0xc,%eax
 87ea1a5:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87ea1aa:	0f 85 58 03 00 00    	jne    87ea508 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x768>
 87ea1b0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87ea1b3:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 87ea1b8:	83 e8 0c             	sub    $0xc,%eax
 87ea1bb:	39 c2                	cmp    %eax,%edx
 87ea1bd:	0f 84 1b ff ff ff    	je     87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea1c3:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea1c8:	85 d2                	test   %edx,%edx
 87ea1ca:	0f 84 2a 03 00 00    	je     87ea4fa <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x75a>
 87ea1d0:	83 ca ff             	or     $0xffffffff,%edx
 87ea1d3:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea1d8:	85 d2                	test   %edx,%edx
 87ea1da:	0f 8f fe fe ff ff    	jg     87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea1e0:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 87ea1e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea1e7:	89 04 24             	mov    %eax,(%esp)
 87ea1ea:	e8 31 c7 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea1ef:	e9 ea fe ff ff       	jmp    87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea1f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87ea1f8:	83 c6 01             	add    $0x1,%esi
 87ea1fb:	0f b6 1e             	movzbl (%esi),%ebx
 87ea1fe:	84 db                	test   %bl,%bl
 87ea200:	0f 84 08 fe ff ff    	je     87ea00e <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x26e>
 87ea206:	e9 de fd ff ff       	jmp    87e9fe9 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x249>
 87ea20b:	90                   	nop
 87ea20c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87ea210:	31 db                	xor    %ebx,%ebx
 87ea212:	e9 fc fd ff ff       	jmp    87ea013 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x273>
 87ea217:	90                   	nop
 87ea218:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87ea21c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87ea223:	00 
 87ea224:	c7 44 24 04 b6 18 de 	movl   $0x8de18b6,0x4(%esp)
 87ea22b:	08 
 87ea22c:	89 1c 24             	mov    %ebx,(%esp)
 87ea22f:	e8 bc c0 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87ea234:	84 c0                	test   %al,%al
 87ea236:	0f 84 67 01 00 00    	je     87ea3a3 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x603>
 87ea23c:	8d 55 bc             	lea    -0x44(%ebp),%edx
 87ea23f:	c7 45 c4 ff ff ff ff 	movl   $0xffffffff,-0x3c(%ebp)
 87ea246:	c7 45 c0 ff ff ff ff 	movl   $0xffffffff,-0x40(%ebp)
 87ea24d:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 87ea254:	c7 45 bc 28 20 de 08 	movl   $0x8de2028,-0x44(%ebp)
 87ea25b:	c7 45 d0 fc cc 48 09 	movl   $0x948ccfc,-0x30(%ebp)
 87ea262:	c7 45 d4 fc cc 48 09 	movl   $0x948ccfc,-0x2c(%ebp)
 87ea269:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 87ea270:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 87ea277:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 87ea27e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87ea282:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87ea286:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87ea28a:	89 14 24             	mov    %edx,(%esp)
 87ea28d:	e8 9e e1 ff ff       	call   87e8430 <_ZN14TiXmlAttribute5ParseEPKcP16TiXmlParsingData13TiXmlEncoding>
 87ea292:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87ea295:	89 c3                	mov    %eax,%ebx
 87ea297:	89 14 24             	mov    %edx,(%esp)
 87ea29a:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87ea29d:	e8 0e 41 89 ff       	call   807e3b0 <strlen@plt>
 87ea2a2:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87ea2a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea2a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 87ea2ad:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87ea2b0:	89 04 24             	mov    %eax,(%esp)
 87ea2b3:	e8 e8 e2 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87ea2b8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87ea2bb:	c7 45 bc 28 20 de 08 	movl   $0x8de2028,-0x44(%ebp)
 87ea2c2:	83 ea 0c             	sub    $0xc,%edx
 87ea2c5:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87ea2cb:	0f 85 be 01 00 00    	jne    87ea48f <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6ef>
 87ea2d1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87ea2d4:	b8 f0 cc 48 09       	mov    $0x948ccf0,%eax
 87ea2d9:	83 ea 0c             	sub    $0xc,%edx
 87ea2dc:	39 d0                	cmp    %edx,%eax
 87ea2de:	0f 84 fa fd ff ff    	je     87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea2e4:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 87ea2e9:	85 c0                	test   %eax,%eax
 87ea2eb:	0f 84 44 02 00 00    	je     87ea535 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x795>
 87ea2f1:	83 c8 ff             	or     $0xffffffff,%eax
 87ea2f4:	f0 0f c1 42 08       	lock xadd %eax,0x8(%edx)
 87ea2f9:	85 c0                	test   %eax,%eax
 87ea2fb:	0f 8f dd fd ff ff    	jg     87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea301:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 87ea304:	89 44 24 04          	mov    %eax,0x4(%esp)
 87ea308:	89 14 24             	mov    %edx,(%esp)
 87ea30b:	e8 10 c6 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea310:	e9 c9 fd ff ff       	jmp    87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea315:	8d 76 00             	lea    0x0(%esi),%esi
 87ea318:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 87ea31b:	89 de                	mov    %ebx,%esi
 87ea31d:	89 d3                	mov    %edx,%ebx
 87ea31f:	eb 2d                	jmp    87ea34e <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5ae>
 87ea321:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87ea328:	0f b6 c3             	movzbl %bl,%eax
 87ea32b:	89 04 24             	mov    %eax,(%esp)
 87ea32e:	e8 4d 3f 89 ff       	call   807e280 <isspace@plt>
 87ea333:	85 c0                	test   %eax,%eax
 87ea335:	75 11                	jne    87ea348 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5a8>
 87ea337:	80 fb 0a             	cmp    $0xa,%bl
 87ea33a:	74 0c                	je     87ea348 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5a8>
 87ea33c:	80 fb 0d             	cmp    $0xd,%bl
 87ea33f:	90                   	nop
 87ea340:	0f 85 c8 fc ff ff    	jne    87ea00e <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x26e>
 87ea346:	66 90                	xchg   %ax,%ax
 87ea348:	83 c6 01             	add    $0x1,%esi
 87ea34b:	0f b6 1e             	movzbl (%esi),%ebx
 87ea34e:	84 db                	test   %bl,%bl
 87ea350:	0f 84 b8 fc ff ff    	je     87ea00e <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x26e>
 87ea356:	80 3e ef             	cmpb   $0xef,(%esi)
 87ea359:	75 cd                	jne    87ea328 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x588>
 87ea35b:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87ea35f:	3c bb                	cmp    $0xbb,%al
 87ea361:	74 15                	je     87ea378 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d8>
 87ea363:	3c bf                	cmp    $0xbf,%al
 87ea365:	75 c1                	jne    87ea328 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x588>
 87ea367:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87ea36b:	3c be                	cmp    $0xbe,%al
 87ea36d:	74 04                	je     87ea373 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d3>
 87ea36f:	3c bf                	cmp    $0xbf,%al
 87ea371:	75 b5                	jne    87ea328 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x588>
 87ea373:	83 c6 03             	add    $0x3,%esi
 87ea376:	eb d3                	jmp    87ea34b <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5ab>
 87ea378:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87ea37c:	75 aa                	jne    87ea328 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x588>
 87ea37e:	66 90                	xchg   %ax,%ax
 87ea380:	eb f1                	jmp    87ea373 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d3>
 87ea382:	83 c3 01             	add    $0x1,%ebx
 87ea385:	83 c4 6c             	add    $0x6c,%esp
 87ea388:	89 d8                	mov    %ebx,%eax
 87ea38a:	5b                   	pop    %ebx
 87ea38b:	5e                   	pop    %esi
 87ea38c:	5f                   	pop    %edi
 87ea38d:	5d                   	pop    %ebp
 87ea38e:	c3                   	ret
 87ea38f:	90                   	nop
 87ea390:	83 c6 01             	add    $0x1,%esi
 87ea393:	0f b6 1e             	movzbl (%esi),%ebx
 87ea396:	84 db                	test   %bl,%bl
 87ea398:	0f 84 c4 fa ff ff    	je     87e9e62 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc2>
 87ea39e:	e9 9a fa ff ff       	jmp    87e9e3d <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x9d>
 87ea3a3:	85 db                	test   %ebx,%ebx
 87ea3a5:	0f 84 6d fa ff ff    	je     87e9e18 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87ea3ab:	0f b6 13             	movzbl (%ebx),%edx
 87ea3ae:	84 d2                	test   %dl,%dl
 87ea3b0:	0f 84 a6 fb ff ff    	je     87e9f5c <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1bc>
 87ea3b6:	80 fa 3e             	cmp    $0x3e,%dl
 87ea3b9:	0f 84 99 fb ff ff    	je     87e9f58 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b8>
 87ea3bf:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 87ea3c2:	89 de                	mov    %ebx,%esi
 87ea3c4:	89 d3                	mov    %edx,%ebx
 87ea3c6:	66 90                	xchg   %ax,%ax
 87ea3c8:	0f b6 c3             	movzbl %bl,%eax
 87ea3cb:	89 04 24             	mov    %eax,(%esp)
 87ea3ce:	e8 ad 3e 89 ff       	call   807e280 <isspace@plt>
 87ea3d3:	80 fb 0a             	cmp    $0xa,%bl
 87ea3d6:	74 40                	je     87ea418 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x678>
 87ea3d8:	85 c0                	test   %eax,%eax
 87ea3da:	75 3c                	jne    87ea418 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x678>
 87ea3dc:	80 fb 0d             	cmp    $0xd,%bl
 87ea3df:	90                   	nop
 87ea3e0:	74 36                	je     87ea418 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x678>
 87ea3e2:	83 c6 01             	add    $0x1,%esi
 87ea3e5:	74 43                	je     87ea42a <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x68a>
 87ea3e7:	0f b6 1e             	movzbl (%esi),%ebx
 87ea3ea:	84 db                	test   %bl,%bl
 87ea3ec:	0f 84 6a fb ff ff    	je     87e9f5c <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1bc>
 87ea3f2:	80 fb 3e             	cmp    $0x3e,%bl
 87ea3f5:	75 d1                	jne    87ea3c8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x628>
 87ea3f7:	89 da                	mov    %ebx,%edx
 87ea3f9:	89 f3                	mov    %esi,%ebx
 87ea3fb:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 87ea3fe:	e9 55 fb ff ff       	jmp    87e9f58 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b8>
 87ea403:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87ea407:	0f 85 63 fb ff ff    	jne    87e9f70 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1d0>
 87ea40d:	e9 ad fb ff ff       	jmp    87e9fbf <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x21f>
 87ea412:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87ea418:	89 f3                	mov    %esi,%ebx
 87ea41a:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 87ea41d:	e9 c3 fc ff ff       	jmp    87ea0e5 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x345>
 87ea422:	8b 45 08             	mov    0x8(%ebp),%eax
 87ea425:	e9 b4 fa ff ff       	jmp    87e9ede <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x13e>
 87ea42a:	89 f3                	mov    %esi,%ebx
 87ea42c:	e9 e7 f9 ff ff       	jmp    87e9e18 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x78>
 87ea431:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea436:	85 d2                	test   %edx,%edx
 87ea438:	0f 84 10 01 00 00    	je     87ea54e <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x7ae>
 87ea43e:	83 ca ff             	or     $0xffffffff,%edx
 87ea441:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea446:	85 d2                	test   %edx,%edx
 87ea448:	0f 8f 7d fc ff ff    	jg     87ea0cb <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32b>
 87ea44e:	8d 55 e7             	lea    -0x19(%ebp),%edx
 87ea451:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea455:	89 04 24             	mov    %eax,(%esp)
 87ea458:	e8 c3 c4 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea45d:	e9 69 fc ff ff       	jmp    87ea0cb <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x32b>
 87ea462:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea467:	85 d2                	test   %edx,%edx
 87ea469:	74 7f                	je     87ea4ea <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x74a>
 87ea46b:	83 ca ff             	or     $0xffffffff,%edx
 87ea46e:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea473:	85 d2                	test   %edx,%edx
 87ea475:	0f 8f 63 fc ff ff    	jg     87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea47b:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 87ea47e:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea482:	89 04 24             	mov    %eax,(%esp)
 87ea485:	e8 96 c4 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea48a:	e9 4f fc ff ff       	jmp    87ea0de <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x33e>
 87ea48f:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 87ea494:	85 c0                	test   %eax,%eax
 87ea496:	0f 84 c0 00 00 00    	je     87ea55c <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x7bc>
 87ea49c:	83 c8 ff             	or     $0xffffffff,%eax
 87ea49f:	f0 0f c1 42 08       	lock xadd %eax,0x8(%edx)
 87ea4a4:	85 c0                	test   %eax,%eax
 87ea4a6:	0f 8f 25 fe ff ff    	jg     87ea2d1 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x531>
 87ea4ac:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 87ea4af:	89 44 24 04          	mov    %eax,0x4(%esp)
 87ea4b3:	89 14 24             	mov    %edx,(%esp)
 87ea4b6:	e8 65 c4 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea4bb:	e9 11 fe ff ff       	jmp    87ea2d1 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x531>
 87ea4c0:	89 c3                	mov    %eax,%ebx
 87ea4c2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 87ea4c5:	89 04 24             	mov    %eax,(%esp)
 87ea4c8:	e8 f3 00 00 00       	call   87ea5c0 <_ZN14TiXmlAttributeD1Ev>
 87ea4cd:	89 1c 24             	mov    %ebx,(%esp)
 87ea4d0:	e8 7b 92 2f 00       	call   8ae3750 <_Unwind_Resume>
 87ea4d5:	89 c3                	mov    %eax,%ebx
 87ea4d7:	8d 55 bc             	lea    -0x44(%ebp),%edx
 87ea4da:	89 14 24             	mov    %edx,(%esp)
 87ea4dd:	e8 de 00 00 00       	call   87ea5c0 <_ZN14TiXmlAttributeD1Ev>
 87ea4e2:	89 1c 24             	mov    %ebx,(%esp)
 87ea4e5:	e8 66 92 2f 00       	call   8ae3750 <_Unwind_Resume>
 87ea4ea:	8b 50 08             	mov    0x8(%eax),%edx
 87ea4ed:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea4f0:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea4f3:	e9 7b ff ff ff       	jmp    87ea473 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6d3>
 87ea4f8:	eb db                	jmp    87ea4d5 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x735>
 87ea4fa:	8b 50 08             	mov    0x8(%eax),%edx
 87ea4fd:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea500:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea503:	e9 d0 fc ff ff       	jmp    87ea1d8 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x438>
 87ea508:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea50d:	85 d2                	test   %edx,%edx
 87ea50f:	74 32                	je     87ea543 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x7a3>
 87ea511:	83 ca ff             	or     $0xffffffff,%edx
 87ea514:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea519:	85 d2                	test   %edx,%edx
 87ea51b:	0f 8f 8f fc ff ff    	jg     87ea1b0 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x410>
 87ea521:	8d 55 e5             	lea    -0x1b(%ebp),%edx
 87ea524:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea528:	89 04 24             	mov    %eax,(%esp)
 87ea52b:	e8 f0 c3 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea530:	e9 7b fc ff ff       	jmp    87ea1b0 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x410>
 87ea535:	8b 42 08             	mov    0x8(%edx),%eax
 87ea538:	8d 48 ff             	lea    -0x1(%eax),%ecx
 87ea53b:	89 4a 08             	mov    %ecx,0x8(%edx)
 87ea53e:	e9 b6 fd ff ff       	jmp    87ea2f9 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x559>
 87ea543:	8b 50 08             	mov    0x8(%eax),%edx
 87ea546:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea549:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea54c:	eb cb                	jmp    87ea519 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x779>
 87ea54e:	8b 50 08             	mov    0x8(%eax),%edx
 87ea551:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea554:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea557:	e9 ea fe ff ff       	jmp    87ea446 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x6a6>
 87ea55c:	8b 42 08             	mov    0x8(%edx),%eax
 87ea55f:	8d 48 ff             	lea    -0x1(%eax),%ecx
 87ea562:	89 4a 08             	mov    %ecx,0x8(%edx)
 87ea565:	e9 3a ff ff ff       	jmp    87ea4a4 <_ZN16TiXmlDeclaration5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x704>
 87ea56a:	90                   	nop
 87ea56b:	90                   	nop
 87ea56c:	90                   	nop
 87ea56d:	90                   	nop
 87ea56e:	90                   	nop
 87ea56f:	90                   	nop

087ea570 <_ZNK13TiXmlDocument10ToDocumentEv>:
 87ea570:	55                   	push   %ebp
 87ea571:	89 e5                	mov    %esp,%ebp
 87ea573:	8b 45 08             	mov    0x8(%ebp),%eax
 87ea576:	5d                   	pop    %ebp
 87ea577:	c3                   	ret
 87ea578:	90                   	nop
 87ea579:	90                   	nop
 87ea57a:	90                   	nop
 87ea57b:	90                   	nop
 87ea57c:	90                   	nop
 87ea57d:	90                   	nop
 87ea57e:	90                   	nop
 87ea57f:	90                   	nop

087ea580 <_ZN13TiXmlDocument10ToDocumentEv>:
 87ea580:	55                   	push   %ebp
 87ea581:	89 e5                	mov    %esp,%ebp
 87ea583:	8b 45 08             	mov    0x8(%ebp),%eax
 87ea586:	5d                   	pop    %ebp
 87ea587:	c3                   	ret
 87ea588:	90                   	nop
 87ea589:	90                   	nop
 87ea58a:	90                   	nop
 87ea58b:	90                   	nop
 87ea58c:	90                   	nop
 87ea58d:	90                   	nop
 87ea58e:	90                   	nop
 87ea58f:	90                   	nop

087ea590 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEi>:
 87ea590:	55                   	push   %ebp
 87ea591:	89 e5                	mov    %esp,%ebp
 87ea593:	83 ec 18             	sub    $0x18,%esp
 87ea596:	8b 45 10             	mov    0x10(%ebp),%eax
 87ea599:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87ea5a0:	00 
 87ea5a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 87ea5a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 87ea5a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87ea5ac:	8b 45 08             	mov    0x8(%ebp),%eax
 87ea5af:	89 04 24             	mov    %eax,(%esp)
 87ea5b2:	e8 b9 a9 ff ff       	call   87e4f70 <_ZNK14TiXmlAttribute5PrintEP8_IO_FILEiPSs>
 87ea5b7:	c9                   	leave
 87ea5b8:	c3                   	ret
 87ea5b9:	90                   	nop
 87ea5ba:	90                   	nop
 87ea5bb:	90                   	nop
 87ea5bc:	90                   	nop
 87ea5bd:	90                   	nop
 87ea5be:	90                   	nop
 87ea5bf:	90                   	nop

087ea5c0 <_ZN14TiXmlAttributeD1Ev>:
 87ea5c0:	55                   	push   %ebp
 87ea5c1:	89 e5                	mov    %esp,%ebp
 87ea5c3:	53                   	push   %ebx
 87ea5c4:	83 ec 24             	sub    $0x24,%esp
 87ea5c7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87ea5ca:	8b 43 18             	mov    0x18(%ebx),%eax
 87ea5cd:	c7 03 28 20 de 08    	movl   $0x8de2028,(%ebx)
 87ea5d3:	83 e8 0c             	sub    $0xc,%eax
 87ea5d6:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87ea5db:	75 1b                	jne    87ea5f8 <_ZN14TiXmlAttributeD1Ev+0x38>
 87ea5dd:	8b 43 14             	mov    0x14(%ebx),%eax
 87ea5e0:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 87ea5e5:	83 e8 0c             	sub    $0xc,%eax
 87ea5e8:	39 c2                	cmp    %eax,%edx
 87ea5ea:	75 32                	jne    87ea61e <_ZN14TiXmlAttributeD1Ev+0x5e>
 87ea5ec:	c7 03 f8 13 de 08    	movl   $0x8de13f8,(%ebx)
 87ea5f2:	83 c4 24             	add    $0x24,%esp
 87ea5f5:	5b                   	pop    %ebx
 87ea5f6:	5d                   	pop    %ebp
 87ea5f7:	c3                   	ret
 87ea5f8:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea5fd:	85 d2                	test   %edx,%edx
 87ea5ff:	74 43                	je     87ea644 <_ZN14TiXmlAttributeD1Ev+0x84>
 87ea601:	83 ca ff             	or     $0xffffffff,%edx
 87ea604:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea609:	85 d2                	test   %edx,%edx
 87ea60b:	7f d0                	jg     87ea5dd <_ZN14TiXmlAttributeD1Ev+0x1d>
 87ea60d:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87ea610:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea614:	89 04 24             	mov    %eax,(%esp)
 87ea617:	e8 04 c3 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea61c:	eb bf                	jmp    87ea5dd <_ZN14TiXmlAttributeD1Ev+0x1d>
 87ea61e:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea623:	85 d2                	test   %edx,%edx
 87ea625:	74 28                	je     87ea64f <_ZN14TiXmlAttributeD1Ev+0x8f>
 87ea627:	83 ca ff             	or     $0xffffffff,%edx
 87ea62a:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea62f:	85 d2                	test   %edx,%edx
 87ea631:	7f b9                	jg     87ea5ec <_ZN14TiXmlAttributeD1Ev+0x2c>
 87ea633:	8d 55 f6             	lea    -0xa(%ebp),%edx
 87ea636:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea63a:	89 04 24             	mov    %eax,(%esp)
 87ea63d:	e8 de c2 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea642:	eb a8                	jmp    87ea5ec <_ZN14TiXmlAttributeD1Ev+0x2c>
 87ea644:	8b 50 08             	mov    0x8(%eax),%edx
 87ea647:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea64a:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea64d:	eb ba                	jmp    87ea609 <_ZN14TiXmlAttributeD1Ev+0x49>
 87ea64f:	8b 50 08             	mov    0x8(%eax),%edx
 87ea652:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea655:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea658:	eb d5                	jmp    87ea62f <_ZN14TiXmlAttributeD1Ev+0x6f>
 87ea65a:	90                   	nop
 87ea65b:	90                   	nop
 87ea65c:	90                   	nop
 87ea65d:	90                   	nop
 87ea65e:	90                   	nop
 87ea65f:	90                   	nop

087ea660 <_ZN14TiXmlAttributeD0Ev>:
 87ea660:	55                   	push   %ebp
 87ea661:	89 e5                	mov    %esp,%ebp
 87ea663:	53                   	push   %ebx
 87ea664:	83 ec 24             	sub    $0x24,%esp
 87ea667:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87ea66a:	8b 43 18             	mov    0x18(%ebx),%eax
 87ea66d:	c7 03 28 20 de 08    	movl   $0x8de2028,(%ebx)
 87ea673:	83 e8 0c             	sub    $0xc,%eax
 87ea676:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87ea67b:	75 23                	jne    87ea6a0 <_ZN14TiXmlAttributeD0Ev+0x40>
 87ea67d:	8b 43 14             	mov    0x14(%ebx),%eax
 87ea680:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 87ea685:	83 e8 0c             	sub    $0xc,%eax
 87ea688:	39 c2                	cmp    %eax,%edx
 87ea68a:	75 3a                	jne    87ea6c6 <_ZN14TiXmlAttributeD0Ev+0x66>
 87ea68c:	c7 03 f8 13 de 08    	movl   $0x8de13f8,(%ebx)
 87ea692:	89 1c 24             	mov    %ebx,(%esp)
 87ea695:	e8 56 9e f3 ff       	call   87244f0 <_ZdlPv>
 87ea69a:	83 c4 24             	add    $0x24,%esp
 87ea69d:	5b                   	pop    %ebx
 87ea69e:	5d                   	pop    %ebp
 87ea69f:	c3                   	ret
 87ea6a0:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea6a5:	85 d2                	test   %edx,%edx
 87ea6a7:	74 43                	je     87ea6ec <_ZN14TiXmlAttributeD0Ev+0x8c>
 87ea6a9:	83 ca ff             	or     $0xffffffff,%edx
 87ea6ac:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea6b1:	85 d2                	test   %edx,%edx
 87ea6b3:	7f c8                	jg     87ea67d <_ZN14TiXmlAttributeD0Ev+0x1d>
 87ea6b5:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87ea6b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea6bc:	89 04 24             	mov    %eax,(%esp)
 87ea6bf:	e8 5c c2 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea6c4:	eb b7                	jmp    87ea67d <_ZN14TiXmlAttributeD0Ev+0x1d>
 87ea6c6:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87ea6cb:	85 d2                	test   %edx,%edx
 87ea6cd:	74 28                	je     87ea6f7 <_ZN14TiXmlAttributeD0Ev+0x97>
 87ea6cf:	83 ca ff             	or     $0xffffffff,%edx
 87ea6d2:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87ea6d7:	85 d2                	test   %edx,%edx
 87ea6d9:	7f b1                	jg     87ea68c <_ZN14TiXmlAttributeD0Ev+0x2c>
 87ea6db:	8d 55 f6             	lea    -0xa(%ebp),%edx
 87ea6de:	89 54 24 04          	mov    %edx,0x4(%esp)
 87ea6e2:	89 04 24             	mov    %eax,(%esp)
 87ea6e5:	e8 36 c2 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87ea6ea:	eb a0                	jmp    87ea68c <_ZN14TiXmlAttributeD0Ev+0x2c>
 87ea6ec:	8b 50 08             	mov    0x8(%eax),%edx
 87ea6ef:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea6f2:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea6f5:	eb ba                	jmp    87ea6b1 <_ZN14TiXmlAttributeD0Ev+0x51>
 87ea6f7:	8b 50 08             	mov    0x8(%eax),%edx
 87ea6fa:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87ea6fd:	89 48 08             	mov    %ecx,0x8(%eax)
 87ea700:	eb d5                	jmp    87ea6d7 <_ZN14TiXmlAttributeD0Ev+0x77>
 87ea702:	90                   	nop
 87ea703:	90                   	nop
 87ea704:	90                   	nop
 87ea705:	90                   	nop
 87ea706:	90                   	nop
 87ea707:	90                   	nop
 87ea708:	90                   	nop
 87ea709:	90                   	nop
 87ea70a:	90                   	nop
 87ea70b:	90                   	nop
 87ea70c:	90                   	nop
 87ea70d:	90                   	nop
 87ea70e:	90                   	nop
 87ea70f:	90                   	nop

```

```c
// TiXmlDeclaration::Parse @ 0x87e9da0

/* WARNING: Removing unreachable block (ram,0x087ea535) */
/* WARNING: Removing unreachable block (ram,0x087ea55c) */
/* WARNING: Removing unreachable block (ram,0x087ea543) */
/* WARNING: Removing unreachable block (ram,0x087ea54e) */
/* WARNING: Removing unreachable block (ram,0x087ea4fa) */
/* WARNING: Removing unreachable block (ram,0x087ea4ea) */
/* TiXmlDeclaration::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlDeclaration::Parse(TiXmlDeclaration *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((param_1 == (byte *)0x0) || (bVar10 = *param_1, bVar10 == 0)) {
    iVar6 = TiXmlNode::GetDocument((TiXmlNode *)this);
  }
  else {
    if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            bVar2 = param_1[2];
joined_r0x087ea407:
            if (bVar2 != 0xbf) goto LAB_087e9f70;
          }
          else {
            if (param_1[1] != 0xbf) goto LAB_087e9f70;
            bVar2 = param_1[2];
            if (bVar2 != 0xbe) goto joined_r0x087ea407;
          }
          param_1 = param_1 + 3;
        }
        else {
LAB_087e9f70:
          iVar6 = isspace((uint)bVar10);
          if (((iVar6 == 0) && (bVar10 != 10)) && (bVar10 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar10 = *param_1;
      } while (bVar10 != 0);
    }
    else {
      do {
        iVar6 = isspace((uint)bVar10);
        if (((bVar10 != 10) && (iVar6 == 0)) && (bVar10 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar10 = *param_1;
      } while (bVar10 != 0);
    }
    iVar6 = TiXmlNode::GetDocument((TiXmlNode *)this);
    if (((param_1 != (byte *)0x0) && (*param_1 != 0)) &&
       (cVar5 = TiXmlBase::StringEqual(param_1,"<?xml",1,param_4), cVar5 != '\0')) {
      if (param_2 != (TiXmlParsingData *)0x0) {
        TiXmlParsingData::Stamp(param_2,param_1,param_4);
        uVar3 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
        *(undefined4 *)(this + 8) = uVar3;
      }
      pbVar8 = param_1 + 5;
      std::string::assign((string *)(this + 0x2c),"",0);
      std::string::assign((string *)(this + 0x30),"",0);
      std::string::assign((string *)(this + 0x34),"",0);
      if (pbVar8 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar9 = (uint)param_1[5];
LAB_087e9f58:
      do {
        cVar5 = (char)uVar9;
        if (cVar5 == '\0') {
          return (byte *)0x0;
        }
        if (cVar5 == '>') {
          return pbVar8 + 1;
        }
        if (cVar5 == '\0') {
          pbVar8 = (byte *)0x0;
        }
        else if (param_4 == 1) {
          while (cVar5 = (char)uVar9, cVar5 != '\0') {
            if (*pbVar8 == 0xef) {
              if (pbVar8[1] == 0xbb) {
                bVar10 = pbVar8[2];
joined_r0x087ea37c:
                if (bVar10 != 0xbf) goto LAB_087ea328;
              }
              else {
                if (pbVar8[1] != 0xbf) goto LAB_087ea328;
                bVar10 = pbVar8[2];
                if (bVar10 != 0xbe) goto joined_r0x087ea37c;
              }
              pbVar8 = pbVar8 + 3;
            }
            else {
LAB_087ea328:
              iVar6 = isspace(uVar9);
              if (((iVar6 == 0) && (cVar5 != '\n')) && (cVar5 != '\r')) break;
              pbVar8 = pbVar8 + 1;
            }
            uVar9 = (uint)*pbVar8;
          }
        }
        else {
          do {
            iVar6 = isspace(uVar9);
            if ((((char)uVar9 != '\n') && (iVar6 == 0)) && ((char)uVar9 != '\r')) break;
            pbVar8 = pbVar8 + 1;
            uVar9 = (uint)*pbVar8;
          } while (*pbVar8 != 0);
        }
        cVar5 = TiXmlBase::StringEqual(pbVar8,"version",1,param_4);
        if (cVar5 != '\0') {
          local_40 = 0xffffffff;
          local_44 = 0xffffffff;
          local_3c = 0;
          local_48 = &PTR__TiXmlAttribute_08de2028;
          local_34 = &DAT_0948ccfc;
          local_30 = &DAT_0948ccfc;
          local_38 = 0;
          local_28 = 0;
          local_2c = 0;
                    /* try { // try from 087ea088 to 087ea0b2 has its CatchHandler @ 087ea4d5 */
          pbVar8 = (byte *)TiXmlAttribute::Parse((TiXmlAttribute *)&local_48,pbVar8,param_2,param_4)
          ;
          pcVar4 = local_30;
          sVar7 = strlen(local_30);
          std::string::assign((string *)(this + 0x2c),pcVar4,sVar7);
          local_48 = &PTR__TiXmlAttribute_08de2028;
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_30 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_34 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
LAB_087ea0de:
          local_48 = &PTR__TiXmlBase_08de13f8;
LAB_087ea0e5:
          if (pbVar8 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar9 = (uint)*pbVar8;
          goto LAB_087e9f58;
        }
        cVar5 = TiXmlBase::StringEqual(pbVar8,"encoding",1,param_4);
        if (cVar5 != '\0') {
          local_40 = 0xffffffff;
          local_44 = 0xffffffff;
          local_3c = 0;
          local_48 = &PTR__TiXmlAttribute_08de2028;
          local_34 = &DAT_0948ccfc;
          local_30 = &DAT_0948ccfc;
          local_38 = 0;
          local_28 = 0;
          local_2c = 0;
                    /* try { // try from 087ea16d to 087ea197 has its CatchHandler @ 087ea4c0 */
          pbVar8 = (byte *)TiXmlAttribute::Parse((TiXmlAttribute *)&local_48,pbVar8,param_2,param_4)
          ;
          pcVar4 = local_30;
          sVar7 = strlen(local_30);
          std::string::assign((string *)(this + 0x30),pcVar4,sVar7);
          local_48 = &PTR__TiXmlAttribute_08de2028;
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_30 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_34 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
          goto LAB_087ea0de;
        }
        cVar5 = TiXmlBase::StringEqual(pbVar8,"standalone",1,param_4);
        if (cVar5 != '\0') {
          local_40 = 0xffffffff;
          local_44 = 0xffffffff;
          local_3c = 0;
          local_48 = &PTR__TiXmlAttribute_08de2028;
          local_34 = &DAT_0948ccfc;
          local_30 = &DAT_0948ccfc;
          local_38 = 0;
          local_28 = 0;
          local_2c = 0;
                    /* try { // try from 087ea28d to 087ea2b7 has its CatchHandler @ 087ea4f8 */
          pbVar8 = (byte *)TiXmlAttribute::Parse((TiXmlAttribute *)&local_48,pbVar8,param_2,param_4)
          ;
          pcVar4 = local_30;
          sVar7 = strlen(local_30);
          std::string::assign((string *)(this + 0x34),pcVar4,sVar7);
          local_48 = &PTR__TiXmlAttribute_08de2028;
          if ((allocator *)(local_30 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_30 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_30 + -0xc));
            }
          }
          if ((allocator *)(local_34 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_34 + -4);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_34 + -0xc));
            }
          }
          goto LAB_087ea0de;
        }
        if (pbVar8 == (byte *)0x0) {
          return (byte *)0x0;
        }
        bVar10 = *pbVar8;
        uVar9 = (uint)bVar10;
        if (bVar10 == 0) {
          return (byte *)0x0;
        }
        if (bVar10 != 0x3e) {
          do {
            iVar6 = isspace(uVar9);
            if ((((char)uVar9 == '\n') || (iVar6 != 0)) || ((char)uVar9 == '\r')) goto LAB_087ea0e5;
            pbVar8 = pbVar8 + 1;
            if (pbVar8 == (byte *)0x0) {
              return (byte *)0x0;
            }
            bVar10 = *pbVar8;
            uVar9 = (uint)bVar10;
            if (bVar10 == 0) {
              return (byte *)0x0;
            }
          } while (bVar10 != 0x3e);
          uVar9 = 0x3e;
        }
      } while( true );
    }
  }
  uVar3 = TiXmlBase::errorString._44_4_;
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x2c) == '\0')) {
    *(undefined1 *)(iVar6 + 0x2c) = 1;
    *(undefined4 *)(iVar6 + 0x30) = 0xb;
    sVar7 = strlen((char *)uVar3);
    std::string::assign((string *)(iVar6 + 0x34),(char *)uVar3,sVar7);
    *(undefined4 *)(iVar6 + 0x40) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x3c) = 0xffffffff;
    return (byte *)0x0;
  }
  return (byte *)0x0;
}

```

---

## Print

```asm
// === 087e47d0 TiXmlDeclaration::Print  [0x087e47d0-0x87e499f] ===
 87e47d0:	55                   	push   %ebp
 87e47d1:	89 e5                	mov    %esp,%ebp
 87e47d3:	57                   	push   %edi
 87e47d4:	56                   	push   %esi
 87e47d5:	53                   	push   %ebx
 87e47d6:	83 ec 1c             	sub    $0x1c,%esp
 87e47d9:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e47dc:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e47df:	8b 5d 14             	mov    0x14(%ebp),%ebx
 87e47e2:	85 f6                	test   %esi,%esi
 87e47e4:	74 20                	je     87e4806 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x36>
 87e47e6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e47ea:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 87e47f1:	00 
 87e47f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e47f9:	00 
 87e47fa:	c7 04 24 53 0f de 08 	movl   $0x8de0f53,(%esp)
 87e4801:	e8 1a 9b 89 ff       	call   807e320 <fwrite@plt>
 87e4806:	85 db                	test   %ebx,%ebx
 87e4808:	74 18                	je     87e4822 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x52>
 87e480a:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 87e4811:	00 
 87e4812:	c7 44 24 04 53 0f de 	movl   $0x8de0f53,0x4(%esp)
 87e4819:	08 
 87e481a:	89 1c 24             	mov    %ebx,(%esp)
 87e481d:	e8 ee 36 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4822:	8b 47 2c             	mov    0x2c(%edi),%eax
 87e4825:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e4828:	85 d2                	test   %edx,%edx
 87e482a:	74 5b                	je     87e4887 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0xb7>
 87e482c:	85 f6                	test   %esi,%esi
 87e482e:	74 14                	je     87e4844 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x74>
 87e4830:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4834:	c7 44 24 04 5a 0f de 	movl   $0x8de0f5a,0x4(%esp)
 87e483b:	08 
 87e483c:	89 34 24             	mov    %esi,(%esp)
 87e483f:	e8 4c 92 89 ff       	call   807da90 <fprintf@plt>
 87e4844:	85 db                	test   %ebx,%ebx
 87e4846:	74 3f                	je     87e4887 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0xb7>
 87e4848:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 87e484f:	00 
 87e4850:	c7 44 24 04 68 0f de 	movl   $0x8de0f68,0x4(%esp)
 87e4857:	08 
 87e4858:	89 1c 24             	mov    %ebx,(%esp)
 87e485b:	e8 b0 36 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4860:	8d 47 2c             	lea    0x2c(%edi),%eax
 87e4863:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4867:	89 1c 24             	mov    %ebx,(%esp)
 87e486a:	e8 d1 38 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e486f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e4876:	00 
 87e4877:	c7 44 24 04 9a 0f de 	movl   $0x8de0f9a,0x4(%esp)
 87e487e:	08 
 87e487f:	89 1c 24             	mov    %ebx,(%esp)
 87e4882:	e8 89 36 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4887:	8b 47 30             	mov    0x30(%edi),%eax
 87e488a:	8b 48 f4             	mov    -0xc(%eax),%ecx
 87e488d:	85 c9                	test   %ecx,%ecx
 87e488f:	74 5b                	je     87e48ec <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x11c>
 87e4891:	85 f6                	test   %esi,%esi
 87e4893:	74 14                	je     87e48a9 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0xd9>
 87e4895:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4899:	c7 44 24 04 72 0f de 	movl   $0x8de0f72,0x4(%esp)
 87e48a0:	08 
 87e48a1:	89 34 24             	mov    %esi,(%esp)
 87e48a4:	e8 e7 91 89 ff       	call   807da90 <fprintf@plt>
 87e48a9:	85 db                	test   %ebx,%ebx
 87e48ab:	74 3f                	je     87e48ec <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x11c>
 87e48ad:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 87e48b4:	00 
 87e48b5:	c7 44 24 04 81 0f de 	movl   $0x8de0f81,0x4(%esp)
 87e48bc:	08 
 87e48bd:	89 1c 24             	mov    %ebx,(%esp)
 87e48c0:	e8 4b 36 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e48c5:	8d 47 30             	lea    0x30(%edi),%eax
 87e48c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e48cc:	89 1c 24             	mov    %ebx,(%esp)
 87e48cf:	e8 6c 38 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e48d4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e48db:	00 
 87e48dc:	c7 44 24 04 9a 0f de 	movl   $0x8de0f9a,0x4(%esp)
 87e48e3:	08 
 87e48e4:	89 1c 24             	mov    %ebx,(%esp)
 87e48e7:	e8 24 36 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e48ec:	8b 47 34             	mov    0x34(%edi),%eax
 87e48ef:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e48f2:	85 d2                	test   %edx,%edx
 87e48f4:	74 5b                	je     87e4951 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x181>
 87e48f6:	85 f6                	test   %esi,%esi
 87e48f8:	74 14                	je     87e490e <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x13e>
 87e48fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e48fe:	c7 44 24 04 8c 0f de 	movl   $0x8de0f8c,0x4(%esp)
 87e4905:	08 
 87e4906:	89 34 24             	mov    %esi,(%esp)
 87e4909:	e8 82 91 89 ff       	call   807da90 <fprintf@plt>
 87e490e:	85 db                	test   %ebx,%ebx
 87e4910:	74 3f                	je     87e4951 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x181>
 87e4912:	83 c7 34             	add    $0x34,%edi
 87e4915:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 87e491c:	00 
 87e491d:	c7 44 24 04 9d 0f de 	movl   $0x8de0f9d,0x4(%esp)
 87e4924:	08 
 87e4925:	89 1c 24             	mov    %ebx,(%esp)
 87e4928:	e8 e3 35 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e492d:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e4931:	89 1c 24             	mov    %ebx,(%esp)
 87e4934:	e8 07 38 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4939:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e4940:	00 
 87e4941:	c7 44 24 04 9a 0f de 	movl   $0x8de0f9a,0x4(%esp)
 87e4948:	08 
 87e4949:	89 1c 24             	mov    %ebx,(%esp)
 87e494c:	e8 bf 35 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4951:	85 f6                	test   %esi,%esi
 87e4953:	74 20                	je     87e4975 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x1a5>
 87e4955:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e4959:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e4960:	00 
 87e4961:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e4968:	00 
 87e4969:	c7 04 24 aa 0f de 08 	movl   $0x8de0faa,(%esp)
 87e4970:	e8 ab 99 89 ff       	call   807e320 <fwrite@plt>
 87e4975:	85 db                	test   %ebx,%ebx
 87e4977:	74 1f                	je     87e4998 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEiPSs+0x1c8>
 87e4979:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e497c:	c7 45 10 02 00 00 00 	movl   $0x2,0x10(%ebp)
 87e4983:	c7 45 0c aa 0f de 08 	movl   $0x8de0faa,0xc(%ebp)
 87e498a:	83 c4 1c             	add    $0x1c,%esp
 87e498d:	5b                   	pop    %ebx
 87e498e:	5e                   	pop    %esi
 87e498f:	5f                   	pop    %edi
 87e4990:	5d                   	pop    %ebp
 87e4991:	e9 7a 35 f2 ff       	jmp    8707f10 <_ZNSs6appendEPKcj>
 87e4996:	66 90                	xchg   %ax,%ax
 87e4998:	83 c4 1c             	add    $0x1c,%esp
 87e499b:	5b                   	pop    %ebx
 87e499c:	5e                   	pop    %esi
 87e499d:	5f                   	pop    %edi
 87e499e:	5d                   	pop    %ebp
 87e499f:	c3                   	ret

```

```c
// TiXmlDeclaration::Print @ 0x87e47d0

/* TiXmlDeclaration::Print(_IO_FILE*, int, std::string*) const */

void __thiscall
TiXmlDeclaration::Print(TiXmlDeclaration *this,_IO_FILE *param_1,int param_2,string *param_3)

{
  if (param_1 != (_IO_FILE *)0x0) {
    fwrite("<?xml ",1,6,param_1);
  }
  if (param_3 != (string *)0x0) {
    std::string::append(param_3,"<?xml ",6);
  }
  if (*(int *)(*(int *)(this + 0x2c) + -0xc) != 0) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"version=\"%s\" ",*(int *)(this + 0x2c));
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,"version=\"",9);
      std::string::append(param_3,(string *)(this + 0x2c));
      std::string::append(param_3,"\" ",2);
    }
  }
  if (*(int *)(*(int *)(this + 0x30) + -0xc) != 0) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"encoding=\"%s\" ",*(int *)(this + 0x30));
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,"encoding=\"",10);
      std::string::append(param_3,(string *)(this + 0x30));
      std::string::append(param_3,"\" ",2);
    }
  }
  if (*(int *)(*(int *)(this + 0x34) + -0xc) != 0) {
    if (param_1 != (_IO_FILE *)0x0) {
      fprintf(param_1,"standalone=\"%s\" ",*(int *)(this + 0x34));
    }
    if (param_3 != (string *)0x0) {
      std::string::append(param_3,"standalone=\"",0xc);
      std::string::append(param_3,(string *)(this + 0x34));
      std::string::append(param_3,"\" ",2);
    }
  }
  if (param_1 != (_IO_FILE *)0x0) {
    fwrite(&DAT_08de0faa,1,2,param_1);
  }
  if (param_3 != (string *)0x0) {
    std::string::append(param_3,"?>",2);
    return;
  }
  return;
}

```

---

## StreamIn

```asm
// === 087e9100 TiXmlDeclaration::StreamIn  [0x087e9100-0x87e91ff] ===
 87e9100:	55                   	push   %ebp
 87e9101:	89 e5                	mov    %esp,%ebp
 87e9103:	57                   	push   %edi
 87e9104:	56                   	push   %esi
 87e9105:	53                   	push   %ebx
 87e9106:	83 ec 4c             	sub    $0x4c,%esp
 87e9109:	8b 75 10             	mov    0x10(%ebp),%esi
 87e910c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e910f:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 87e9112:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e9118:	8b 03                	mov    (%ebx),%eax
 87e911a:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e911d:	8b 74 03 14          	mov    0x14(%ebx,%eax,1),%esi
 87e9121:	85 f6                	test   %esi,%esi
 87e9123:	75 64                	jne    87e9189 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x89>
 87e9125:	89 1c 24             	mov    %ebx,(%esp)
 87e9128:	e8 c3 cb ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e912d:	85 c0                	test   %eax,%eax
 87e912f:	7e 67                	jle    87e9198 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x98>
 87e9131:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e9134:	8b 11                	mov    (%ecx),%edx
 87e9136:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e9139:	8d 72 f4             	lea    -0xc(%edx),%esi
 87e913c:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 87e913f:	8d 79 01             	lea    0x1(%ecx),%edi
 87e9142:	3b 7e 04             	cmp    0x4(%esi),%edi
 87e9145:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e9148:	77 07                	ja     87e9151 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x51>
 87e914a:	8b 7e 08             	mov    0x8(%esi),%edi
 87e914d:	85 ff                	test   %edi,%edi
 87e914f:	7e 20                	jle    87e9171 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x71>
 87e9151:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e9154:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e9157:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e915a:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e915e:	89 0c 24             	mov    %ecx,(%esp)
 87e9161:	e8 aa eb f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e9166:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 87e9169:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e916c:	8b 16                	mov    (%esi),%edx
 87e916e:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e9171:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 87e9174:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e9177:	8b 0f                	mov    (%edi),%ecx
 87e9179:	8d 51 f4             	lea    -0xc(%ecx),%edx
 87e917c:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87e9182:	75 67                	jne    87e91eb <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0xeb>
 87e9184:	83 f8 3e             	cmp    $0x3e,%eax
 87e9187:	75 8f                	jne    87e9118 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x18>
 87e9189:	83 c4 4c             	add    $0x4c,%esp
 87e918c:	5b                   	pop    %ebx
 87e918d:	5e                   	pop    %esi
 87e918e:	5f                   	pop    %edi
 87e918f:	5d                   	pop    %ebp
 87e9190:	c3                   	ret
 87e9191:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e9198:	8b 45 08             	mov    0x8(%ebp),%eax
 87e919b:	89 04 24             	mov    %eax,(%esp)
 87e919e:	e8 2d 6d ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e91a3:	85 c0                	test   %eax,%eax
 87e91a5:	89 c3                	mov    %eax,%ebx
 87e91a7:	74 e0                	je     87e9189 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x89>
 87e91a9:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e91ad:	75 da                	jne    87e9189 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x89>
 87e91af:	8b 35 f4 37 3f 09    	mov    0x93f37f4,%esi
 87e91b5:	c6 40 2c 01          	movb   $0x1,0x2c(%eax)
 87e91b9:	c7 40 30 0d 00 00 00 	movl   $0xd,0x30(%eax)
 87e91c0:	89 34 24             	mov    %esi,(%esp)
 87e91c3:	e8 e8 51 89 ff       	call   807e3b0 <strlen@plt>
 87e91c8:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e91cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e91d0:	8d 43 34             	lea    0x34(%ebx),%eax
 87e91d3:	89 04 24             	mov    %eax,(%esp)
 87e91d6:	e8 c5 f3 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e91db:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e91e2:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e91e9:	eb 9e                	jmp    87e9189 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x89>
 87e91eb:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87e91ee:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 87e91f5:	89 71 f4             	mov    %esi,-0xc(%ecx)
 87e91f8:	c6 44 32 0c 00       	movb   $0x0,0xc(%edx,%esi,1)
 87e91fd:	eb 85                	jmp    87e9184 <_ZN16TiXmlDeclaration8StreamInEPSiPSs+0x84>
 87e91ff:	90                   	nop

```

```c
// TiXmlDeclaration::StreamIn @ 0x87e9100

/* TiXmlDeclaration::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlDeclaration::StreamIn(TiXmlDeclaration *this,istream *param_1,string *param_2)

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

---

## TiXmlDeclaration

```asm
// === 087e2c30 TiXmlDeclaration::TiXmlDeclaration  [0x087e2c30-0x87e2d3f] ===
 87e2c30:	55                   	push   %ebp
 87e2c31:	89 e5                	mov    %esp,%ebp
 87e2c33:	57                   	push   %edi
 87e2c34:	56                   	push   %esi
 87e2c35:	53                   	push   %ebx
 87e2c36:	83 ec 2c             	sub    $0x2c,%esp
 87e2c39:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e2c3c:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e2c3f:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e2c46:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e2c49:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e2c50:	8d 7b 30             	lea    0x30(%ebx),%edi
 87e2c53:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e2c5a:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e2c61:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e2c68:	c7 43 14 05 00 00 00 	movl   $0x5,0x14(%ebx)
 87e2c6f:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e2c76:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e2c7d:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e2c84:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e2c8b:	c7 03 08 11 de 08    	movl   $0x8de1108,(%ebx)
 87e2c91:	c7 43 2c fc cc 48 09 	movl   $0x948ccfc,0x2c(%ebx)
 87e2c98:	c7 43 30 fc cc 48 09 	movl   $0x948ccfc,0x30(%ebx)
 87e2c9f:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e2ca6:	89 34 24             	mov    %esi,(%esp)
 87e2ca9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e2cac:	e8 ff b6 89 ff       	call   807e3b0 <strlen@plt>
 87e2cb1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e2cb4:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e2cb8:	8d 73 34             	lea    0x34(%ebx),%esi
 87e2cbb:	89 14 24             	mov    %edx,(%esp)
 87e2cbe:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2cc2:	e8 d9 58 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2cc7:	8b 45 10             	mov    0x10(%ebp),%eax
 87e2cca:	89 04 24             	mov    %eax,(%esp)
 87e2ccd:	e8 de b6 89 ff       	call   807e3b0 <strlen@plt>
 87e2cd2:	8b 55 10             	mov    0x10(%ebp),%edx
 87e2cd5:	89 3c 24             	mov    %edi,(%esp)
 87e2cd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e2cdc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2ce0:	e8 bb 58 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2ce5:	8b 45 14             	mov    0x14(%ebp),%eax
 87e2ce8:	89 04 24             	mov    %eax,(%esp)
 87e2ceb:	e8 c0 b6 89 ff       	call   807e3b0 <strlen@plt>
 87e2cf0:	8b 55 14             	mov    0x14(%ebp),%edx
 87e2cf3:	89 34 24             	mov    %esi,(%esp)
 87e2cf6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e2cfa:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2cfe:	e8 9d 58 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2d03:	83 c4 2c             	add    $0x2c,%esp
 87e2d06:	5b                   	pop    %ebx
 87e2d07:	5e                   	pop    %esi
 87e2d08:	5f                   	pop    %edi
 87e2d09:	5d                   	pop    %ebp
 87e2d0a:	c3                   	ret
 87e2d0b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e2d0e:	89 34 24             	mov    %esi,(%esp)
 87e2d11:	e8 ca 4e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e2d16:	89 3c 24             	mov    %edi,(%esp)
 87e2d19:	e8 c2 4e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e2d1e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e2d21:	89 14 24             	mov    %edx,(%esp)
 87e2d24:	e8 b7 4e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e2d29:	89 1c 24             	mov    %ebx,(%esp)
 87e2d2c:	e8 3f fe ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e2d31:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e2d34:	89 04 24             	mov    %eax,(%esp)
 87e2d37:	e8 14 0a 30 00       	call   8ae3750 <_Unwind_Resume>
 87e2d3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlDeclaration::TiXmlDeclaration @ 0x87e2c30

/* TiXmlDeclaration::TiXmlDeclaration(char const*, char const*, char const*) */

void __thiscall
TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this,char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDeclaration_08de1108;
  *(undefined1 **)(this + 0x2c) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x30) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  sVar1 = strlen(param_1);
                    /* try { // try from 087e2cc2 to 087e2d02 has its CatchHandler @ 087e2d0b */
  std::string::assign((string *)(this + 0x2c),param_1,sVar1);
  sVar1 = strlen(param_2);
  std::string::assign((string *)(this + 0x30),param_2,sVar1);
  sVar1 = strlen(param_3);
  std::string::assign((string *)(this + 0x34),param_3,sVar1);
  return;
}

```

---

## TiXmlDeclaration_087e3180

```asm
// === 087e3180 TiXmlDeclaration::TiXmlDeclaration  [0x087e3180-0x87e32af] ===
 87e3180:	55                   	push   %ebp
 87e3181:	89 e5                	mov    %esp,%ebp
 87e3183:	57                   	push   %edi
 87e3184:	56                   	push   %esi
 87e3185:	53                   	push   %ebx
 87e3186:	83 ec 2c             	sub    $0x2c,%esp
 87e3189:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e318c:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e318f:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e3196:	8b 7e 20             	mov    0x20(%esi),%edi
 87e3199:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e31a0:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e31a7:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e31ae:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e31b5:	c7 43 14 05 00 00 00 	movl   $0x5,0x14(%ebx)
 87e31bc:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e31c3:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e31ca:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e31d1:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e31d8:	c7 03 08 11 de 08    	movl   $0x8de1108,(%ebx)
 87e31de:	c7 43 2c fc cc 48 09 	movl   $0x948ccfc,0x2c(%ebx)
 87e31e5:	c7 43 30 fc cc 48 09 	movl   $0x948ccfc,0x30(%ebx)
 87e31ec:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e31f3:	89 3c 24             	mov    %edi,(%esp)
 87e31f6:	e8 b5 b1 89 ff       	call   807e3b0 <strlen@plt>
 87e31fb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e31ff:	8d 7b 34             	lea    0x34(%ebx),%edi
 87e3202:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3206:	8d 43 20             	lea    0x20(%ebx),%eax
 87e3209:	89 04 24             	mov    %eax,(%esp)
 87e320c:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e320f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e3212:	8d 43 30             	lea    0x30(%ebx),%eax
 87e3215:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e3218:	e8 83 53 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e321d:	8b 46 0c             	mov    0xc(%esi),%eax
 87e3220:	8b 56 08             	mov    0x8(%esi),%edx
 87e3223:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e3226:	8b 46 04             	mov    0x4(%esi),%eax
 87e3229:	89 53 08             	mov    %edx,0x8(%ebx)
 87e322c:	89 43 04             	mov    %eax,0x4(%ebx)
 87e322f:	8d 46 2c             	lea    0x2c(%esi),%eax
 87e3232:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3236:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e3239:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e323c:	89 04 24             	mov    %eax,(%esp)
 87e323f:	8d 43 30             	lea    0x30(%ebx),%eax
 87e3242:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e3245:	e8 e6 49 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e324a:	8d 46 30             	lea    0x30(%esi),%eax
 87e324d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3251:	8d 43 30             	lea    0x30(%ebx),%eax
 87e3254:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e3257:	89 04 24             	mov    %eax,(%esp)
 87e325a:	e8 d1 49 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e325f:	83 c6 34             	add    $0x34,%esi
 87e3262:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e3266:	89 3c 24             	mov    %edi,(%esp)
 87e3269:	e8 c2 49 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e326e:	83 c4 2c             	add    $0x2c,%esp
 87e3271:	5b                   	pop    %ebx
 87e3272:	5e                   	pop    %esi
 87e3273:	5f                   	pop    %edi
 87e3274:	5d                   	pop    %ebp
 87e3275:	c3                   	ret
 87e3276:	89 c6                	mov    %eax,%esi
 87e3278:	89 3c 24             	mov    %edi,(%esp)
 87e327b:	e8 60 49 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e3280:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e3283:	89 04 24             	mov    %eax,(%esp)
 87e3286:	e8 55 49 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e328b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e328e:	89 04 24             	mov    %eax,(%esp)
 87e3291:	e8 4a 49 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e3296:	89 1c 24             	mov    %ebx,(%esp)
 87e3299:	e8 d2 f8 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e329e:	89 34 24             	mov    %esi,(%esp)
 87e32a1:	e8 aa 04 30 00       	call   8ae3750 <_Unwind_Resume>
 87e32a6:	8d 76 00             	lea    0x0(%esi),%esi
 87e32a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDeclaration::TiXmlDeclaration @ 0x87e3180

/* TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration const&) */

void __thiscall TiXmlDeclaration::TiXmlDeclaration(TiXmlDeclaration *this,TiXmlDeclaration *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDeclaration_08de1108;
  *(undefined1 **)(this + 0x2c) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x30) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  sVar3 = strlen(__s);
                    /* try { // try from 087e3218 to 087e326d has its CatchHandler @ 087e3276 */
  std::string::assign((string *)(this + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::string::assign((string *)(this + 0x2c),(string *)(param_1 + 0x2c));
  std::string::assign((string *)(this + 0x30),(string *)(param_1 + 0x30));
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  return;
}

```

---

## TiXmlDeclaration_087e32b0

```asm
// === 087e32b0 TiXmlDeclaration::TiXmlDeclaration  [0x087e32b0-0x87e339f] ===
 87e32b0:	55                   	push   %ebp
 87e32b1:	89 e5                	mov    %esp,%ebp
 87e32b3:	83 ec 38             	sub    $0x38,%esp
 87e32b6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e32b9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e32bc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e32bf:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e32c2:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e32c5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e32c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e32cb:	8d 7b 30             	lea    0x30(%ebx),%edi
 87e32ce:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e32d1:	8d 73 34             	lea    0x34(%ebx),%esi
 87e32d4:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e32db:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e32e2:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e32e9:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e32f0:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e32f7:	c7 43 14 05 00 00 00 	movl   $0x5,0x14(%ebx)
 87e32fe:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e3305:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e330c:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e3313:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e331a:	c7 03 08 11 de 08    	movl   $0x8de1108,(%ebx)
 87e3320:	c7 43 2c fc cc 48 09 	movl   $0x948ccfc,0x2c(%ebx)
 87e3327:	c7 43 30 fc cc 48 09 	movl   $0x948ccfc,0x30(%ebx)
 87e332e:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e3335:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3339:	89 14 24             	mov    %edx,(%esp)
 87e333c:	e8 ef 48 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e3341:	8b 45 10             	mov    0x10(%ebp),%eax
 87e3344:	89 3c 24             	mov    %edi,(%esp)
 87e3347:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e334b:	e8 e0 48 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e3350:	8b 45 14             	mov    0x14(%ebp),%eax
 87e3353:	89 34 24             	mov    %esi,(%esp)
 87e3356:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e335a:	e8 d1 48 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e335f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e3362:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e3365:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e3368:	89 ec                	mov    %ebp,%esp
 87e336a:	5d                   	pop    %ebp
 87e336b:	c3                   	ret
 87e336c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e336f:	89 34 24             	mov    %esi,(%esp)
 87e3372:	e8 69 48 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e3377:	89 3c 24             	mov    %edi,(%esp)
 87e337a:	e8 61 48 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e337f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e3382:	89 14 24             	mov    %edx,(%esp)
 87e3385:	e8 56 48 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e338a:	89 1c 24             	mov    %ebx,(%esp)
 87e338d:	e8 de f7 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e3392:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e3395:	89 04 24             	mov    %eax,(%esp)
 87e3398:	e8 b3 03 30 00       	call   8ae3750 <_Unwind_Resume>
 87e339d:	90                   	nop
 87e339e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlDeclaration::TiXmlDeclaration @ 0x87e32b0

/* TiXmlDeclaration::TiXmlDeclaration(std::string const&, std::string const&, std::string const&) */

void __thiscall
TiXmlDeclaration::TiXmlDeclaration
          (TiXmlDeclaration *this,string *param_1,string *param_2,string *param_3)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDeclaration_08de1108;
  *(undefined1 **)(this + 0x2c) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x30) = &DAT_0948ccfc;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
                    /* try { // try from 087e333c to 087e335e has its CatchHandler @ 087e336c */
  std::string::assign((string *)(this + 0x2c),param_1);
  std::string::assign((string *)(this + 0x30),param_2);
  std::string::assign((string *)(this + 0x34),param_3);
  return;
}

```

---

## operator=

```asm
// === 087e24f0 TiXmlDeclaration::operator=  [0x087e24f0-0x87e259f] ===
 87e24f0:	55                   	push   %ebp
 87e24f1:	89 e5                	mov    %esp,%ebp
 87e24f3:	57                   	push   %edi
 87e24f4:	56                   	push   %esi
 87e24f5:	53                   	push   %ebx
 87e24f6:	83 ec 1c             	sub    $0x1c,%esp
 87e24f9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e24fc:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e24ff:	8b 43 18             	mov    0x18(%ebx),%eax
 87e2502:	85 c0                	test   %eax,%eax
 87e2504:	75 04                	jne    87e250a <_ZN16TiXmlDeclarationaSERKS_+0x1a>
 87e2506:	eb 11                	jmp    87e2519 <_ZN16TiXmlDeclarationaSERKS_+0x29>
 87e2508:	89 f8                	mov    %edi,%eax
 87e250a:	8b 78 28             	mov    0x28(%eax),%edi
 87e250d:	8b 10                	mov    (%eax),%edx
 87e250f:	89 04 24             	mov    %eax,(%esp)
 87e2512:	ff 52 04             	call   *0x4(%edx)
 87e2515:	85 ff                	test   %edi,%edi
 87e2517:	75 ef                	jne    87e2508 <_ZN16TiXmlDeclarationaSERKS_+0x18>
 87e2519:	8b 7e 20             	mov    0x20(%esi),%edi
 87e251c:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e2523:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e252a:	89 3c 24             	mov    %edi,(%esp)
 87e252d:	e8 7e be 89 ff       	call   807e3b0 <strlen@plt>
 87e2532:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e2536:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e253a:	8d 43 20             	lea    0x20(%ebx),%eax
 87e253d:	89 04 24             	mov    %eax,(%esp)
 87e2540:	e8 5b 60 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2545:	8b 46 0c             	mov    0xc(%esi),%eax
 87e2548:	8b 56 08             	mov    0x8(%esi),%edx
 87e254b:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e254e:	8b 46 04             	mov    0x4(%esi),%eax
 87e2551:	89 53 08             	mov    %edx,0x8(%ebx)
 87e2554:	89 43 04             	mov    %eax,0x4(%ebx)
 87e2557:	8d 46 2c             	lea    0x2c(%esi),%eax
 87e255a:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e255e:	8d 43 2c             	lea    0x2c(%ebx),%eax
 87e2561:	89 04 24             	mov    %eax,(%esp)
 87e2564:	e8 c7 56 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e2569:	8d 46 30             	lea    0x30(%esi),%eax
 87e256c:	83 c6 34             	add    $0x34,%esi
 87e256f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2573:	8d 43 30             	lea    0x30(%ebx),%eax
 87e2576:	89 04 24             	mov    %eax,(%esp)
 87e2579:	e8 b2 56 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e257e:	8d 43 34             	lea    0x34(%ebx),%eax
 87e2581:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e2585:	89 04 24             	mov    %eax,(%esp)
 87e2588:	e8 a3 56 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e258d:	83 c4 1c             	add    $0x1c,%esp
 87e2590:	89 d8                	mov    %ebx,%eax
 87e2592:	5b                   	pop    %ebx
 87e2593:	5e                   	pop    %esi
 87e2594:	5f                   	pop    %edi
 87e2595:	5d                   	pop    %ebp
 87e2596:	c3                   	ret
 87e2597:	90                   	nop
 87e2598:	90                   	nop
 87e2599:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlDeclaration::operator= @ 0x87e24f0

/* TiXmlDeclaration::TEMPNAMEPLACEHOLDERVALUE(TiXmlDeclaration const&) */

TiXmlDeclaration * __thiscall
TiXmlDeclaration::operator=(TiXmlDeclaration *this,TiXmlDeclaration *param_1)

{
  int *piVar1;
  char *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  size_t sVar5;
  
  piVar4 = *(int **)(this + 0x18);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[10];
    (**(code **)(*piVar4 + 4))(piVar4);
    piVar4 = piVar1;
  }
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  sVar5 = strlen(__s);
  std::string::assign((string *)(this + 0x20),__s,sVar5);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  std::string::assign((string *)(this + 0x2c),(string *)(param_1 + 0x2c));
  std::string::assign((string *)(this + 0x30),(string *)(param_1 + 0x30));
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  return this;
}

```

