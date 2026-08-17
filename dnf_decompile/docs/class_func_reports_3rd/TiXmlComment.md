# TiXmlComment

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Accept

```asm
// === 087e0080 TiXmlComment::Accept  [0x087e0080-0x87e009f] ===
 87e0080:	55                   	push   %ebp
 87e0081:	89 e5                	mov    %esp,%ebp
 87e0083:	83 ec 08             	sub    $0x8,%esp
 87e0086:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e0089:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e008c:	8b 10                	mov    (%eax),%edx
 87e008e:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87e0091:	89 45 08             	mov    %eax,0x8(%ebp)
 87e0094:	8b 42 20             	mov    0x20(%edx),%eax
 87e0097:	c9                   	leave
 87e0098:	ff e0                	jmp    *%eax
 87e009a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlComment::Accept @ 0x87e0080

/* TiXmlComment::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlComment::Accept(TiXmlComment *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e0098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x20))();
  return;
}

```

---

## Clone

```asm
// === 087e28b0 TiXmlComment::Clone  [0x087e28b0-0x87e295f] ===
 87e28b0:	55                   	push   %ebp
 87e28b1:	89 e5                	mov    %esp,%ebp
 87e28b3:	83 ec 28             	sub    $0x28,%esp
 87e28b6:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87e28bd:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e28c0:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e28c3:	8b 75 08             	mov    0x8(%ebp),%esi
 87e28c6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e28c9:	e8 82 1b f4 ff       	call   8724450 <_Znwj>
 87e28ce:	c7 40 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%eax)
 87e28d5:	8b 7e 20             	mov    0x20(%esi),%edi
 87e28d8:	89 c3                	mov    %eax,%ebx
 87e28da:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e28e1:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e28e8:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e28ef:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e28f6:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
 87e28fd:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 87e2904:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e290b:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87e2912:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 87e2919:	c7 00 c8 11 de 08    	movl   $0x8de11c8,(%eax)
 87e291f:	89 3c 24             	mov    %edi,(%esp)
 87e2922:	e8 89 ba 89 ff       	call   807e3b0 <strlen@plt>
 87e2927:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e292b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e292f:	8d 43 20             	lea    0x20(%ebx),%eax
 87e2932:	89 04 24             	mov    %eax,(%esp)
 87e2935:	e8 66 5c f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e293a:	8b 46 0c             	mov    0xc(%esi),%eax
 87e293d:	8b 56 08             	mov    0x8(%esi),%edx
 87e2940:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e2943:	8b 46 04             	mov    0x4(%esi),%eax
 87e2946:	89 53 08             	mov    %edx,0x8(%ebx)
 87e2949:	89 43 04             	mov    %eax,0x4(%ebx)
 87e294c:	89 d8                	mov    %ebx,%eax
 87e294e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e2951:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e2954:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e2957:	89 ec                	mov    %ebp,%esp
 87e2959:	5d                   	pop    %ebp
 87e295a:	c3                   	ret
 87e295b:	90                   	nop
 87e295c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlComment::Clone @ 0x87e28b0

/* TiXmlComment::Clone() const */

undefined4 * __thiscall TiXmlComment::Clone(TiXmlComment *this)

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
  puVar3[5] = 2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlComment_08de11c8;
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
// === 087e25a0 TiXmlComment::CopyTo  [0x087e25a0-0x87e25ff] ===
 87e25a0:	55                   	push   %ebp
 87e25a1:	89 e5                	mov    %esp,%ebp
 87e25a3:	83 ec 28             	sub    $0x28,%esp
 87e25a6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e25a9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e25ac:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e25af:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e25b2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e25b5:	8b 7e 20             	mov    0x20(%esi),%edi
 87e25b8:	89 3c 24             	mov    %edi,(%esp)
 87e25bb:	e8 f0 bd 89 ff       	call   807e3b0 <strlen@plt>
 87e25c0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e25c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e25c8:	8d 43 20             	lea    0x20(%ebx),%eax
 87e25cb:	89 04 24             	mov    %eax,(%esp)
 87e25ce:	e8 cd 5f f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e25d3:	8b 46 0c             	mov    0xc(%esi),%eax
 87e25d6:	8b 56 08             	mov    0x8(%esi),%edx
 87e25d9:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e25dc:	8b 46 04             	mov    0x4(%esi),%eax
 87e25df:	89 53 08             	mov    %edx,0x8(%ebx)
 87e25e2:	89 43 04             	mov    %eax,0x4(%ebx)
 87e25e5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e25e8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e25eb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e25ee:	89 ec                	mov    %ebp,%esp
 87e25f0:	5d                   	pop    %ebp
 87e25f1:	c3                   	ret
 87e25f2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e25f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlComment::CopyTo @ 0x87e25a0

/* TiXmlComment::CopyTo(TiXmlComment*) const */

void __thiscall TiXmlComment::CopyTo(TiXmlComment *this,TiXmlComment *param_1)

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
// === 087e7b20 TiXmlComment::Parse  [0x087e7b20-0x87e7d4f] ===
 87e7b20:	55                   	push   %ebp
 87e7b21:	89 e5                	mov    %esp,%ebp
 87e7b23:	57                   	push   %edi
 87e7b24:	56                   	push   %esi
 87e7b25:	53                   	push   %ebx
 87e7b26:	83 ec 3c             	sub    $0x3c,%esp
 87e7b29:	8b 45 08             	mov    0x8(%ebp),%eax
 87e7b2c:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e7b2f:	8b 7d 14             	mov    0x14(%ebp),%edi
 87e7b32:	89 04 24             	mov    %eax,(%esp)
 87e7b35:	e8 96 83 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e7b3a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e7b3d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e7b44:	00 
 87e7b45:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e7b4c:	08 
 87e7b4d:	83 c1 20             	add    $0x20,%ecx
 87e7b50:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87e7b53:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e7b56:	89 0c 24             	mov    %ecx,(%esp)
 87e7b59:	e8 42 0a f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e7b5e:	85 f6                	test   %esi,%esi
 87e7b60:	0f 85 8a 00 00 00    	jne    87e7bf0 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xd0>
 87e7b66:	8b 5d 10             	mov    0x10(%ebp),%ebx
 87e7b69:	85 db                	test   %ebx,%ebx
 87e7b6b:	74 24                	je     87e7b91 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x71>
 87e7b6d:	8b 45 10             	mov    0x10(%ebp),%eax
 87e7b70:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e7b74:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e7b78:	89 04 24             	mov    %eax,(%esp)
 87e7b7b:	e8 a0 e4 ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e7b80:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e7b83:	8b 51 04             	mov    0x4(%ecx),%edx
 87e7b86:	8b 01                	mov    (%ecx),%eax
 87e7b88:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e7b8b:	89 41 04             	mov    %eax,0x4(%ecx)
 87e7b8e:	89 51 08             	mov    %edx,0x8(%ecx)
 87e7b91:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e7b95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e7b9c:	00 
 87e7b9d:	c7 44 24 04 d6 cf d0 	movl   $0x8d0cfd6,0x4(%esp)
 87e7ba4:	08 
 87e7ba5:	89 34 24             	mov    %esi,(%esp)
 87e7ba8:	e8 43 e7 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e7bad:	84 c0                	test   %al,%al
 87e7baf:	0f 84 b3 00 00 00    	je     87e7c68 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x148>
 87e7bb5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e7bb8:	8d 5e 04             	lea    0x4(%esi),%ebx
 87e7bbb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e7bc2:	00 
 87e7bc3:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e7bca:	08 
 87e7bcb:	89 04 24             	mov    %eax,(%esp)
 87e7bce:	e8 cd 09 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e7bd3:	85 db                	test   %ebx,%ebx
 87e7bd5:	74 0a                	je     87e7be1 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc1>
 87e7bd7:	80 7e 04 00          	cmpb   $0x0,0x4(%esi)
 87e7bdb:	0f 85 e7 00 00 00    	jne    87e7cc8 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a8>
 87e7be1:	83 c4 3c             	add    $0x3c,%esp
 87e7be4:	89 d8                	mov    %ebx,%eax
 87e7be6:	5b                   	pop    %ebx
 87e7be7:	5e                   	pop    %esi
 87e7be8:	5f                   	pop    %edi
 87e7be9:	5d                   	pop    %ebp
 87e7bea:	c3                   	ret
 87e7beb:	90                   	nop
 87e7bec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7bf0:	0f b6 1e             	movzbl (%esi),%ebx
 87e7bf3:	84 db                	test   %bl,%bl
 87e7bf5:	0f 84 45 01 00 00    	je     87e7d40 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x220>
 87e7bfb:	83 ff 01             	cmp    $0x1,%edi
 87e7bfe:	74 3e                	je     87e7c3e <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x11e>
 87e7c00:	0f b6 c3             	movzbl %bl,%eax
 87e7c03:	89 04 24             	mov    %eax,(%esp)
 87e7c06:	e8 75 66 89 ff       	call   807e280 <isspace@plt>
 87e7c0b:	80 fb 0a             	cmp    $0xa,%bl
 87e7c0e:	74 10                	je     87e7c20 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x100>
 87e7c10:	85 c0                	test   %eax,%eax
 87e7c12:	75 0c                	jne    87e7c20 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x100>
 87e7c14:	80 fb 0d             	cmp    $0xd,%bl
 87e7c17:	0f 85 49 ff ff ff    	jne    87e7b66 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x46>
 87e7c1d:	8d 76 00             	lea    0x0(%esi),%esi
 87e7c20:	83 c6 01             	add    $0x1,%esi
 87e7c23:	0f b6 1e             	movzbl (%esi),%ebx
 87e7c26:	84 db                	test   %bl,%bl
 87e7c28:	0f 84 38 ff ff ff    	je     87e7b66 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x46>
 87e7c2e:	eb d0                	jmp    87e7c00 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xe0>
 87e7c30:	83 c6 01             	add    $0x1,%esi
 87e7c33:	0f b6 1e             	movzbl (%esi),%ebx
 87e7c36:	84 db                	test   %bl,%bl
 87e7c38:	0f 84 28 ff ff ff    	je     87e7b66 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x46>
 87e7c3e:	80 3e ef             	cmpb   $0xef,(%esi)
 87e7c41:	74 5d                	je     87e7ca0 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x180>
 87e7c43:	0f b6 c3             	movzbl %bl,%eax
 87e7c46:	89 04 24             	mov    %eax,(%esp)
 87e7c49:	e8 32 66 89 ff       	call   807e280 <isspace@plt>
 87e7c4e:	85 c0                	test   %eax,%eax
 87e7c50:	75 de                	jne    87e7c30 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x110>
 87e7c52:	80 fb 0a             	cmp    $0xa,%bl
 87e7c55:	74 d9                	je     87e7c30 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x110>
 87e7c57:	80 fb 0d             	cmp    $0xd,%bl
 87e7c5a:	0f 85 06 ff ff ff    	jne    87e7b66 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x46>
 87e7c60:	eb ce                	jmp    87e7c30 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x110>
 87e7c62:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e7c68:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e7c6b:	31 db                	xor    %ebx,%ebx
 87e7c6d:	85 c9                	test   %ecx,%ecx
 87e7c6f:	0f 84 6c ff ff ff    	je     87e7be1 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc1>
 87e7c75:	8b 45 10             	mov    0x10(%ebp),%eax
 87e7c78:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e7c7b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 87e7c7f:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e7c83:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e7c87:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 87e7c8e:	00 
 87e7c8f:	89 0c 24             	mov    %ecx,(%esp)
 87e7c92:	e8 99 f0 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e7c97:	e9 45 ff ff ff       	jmp    87e7be1 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc1>
 87e7c9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7ca0:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e7ca4:	3c bb                	cmp    $0xbb,%al
 87e7ca6:	0f 84 85 00 00 00    	je     87e7d31 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x211>
 87e7cac:	3c bf                	cmp    $0xbf,%al
 87e7cae:	66 90                	xchg   %ax,%ax
 87e7cb0:	75 91                	jne    87e7c43 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x123>
 87e7cb2:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e7cb6:	3c be                	cmp    $0xbe,%al
 87e7cb8:	74 04                	je     87e7cbe <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x19e>
 87e7cba:	3c bf                	cmp    $0xbf,%al
 87e7cbc:	75 85                	jne    87e7c43 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x123>
 87e7cbe:	83 c6 03             	add    $0x3,%esi
 87e7cc1:	e9 6d ff ff ff       	jmp    87e7c33 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x113>
 87e7cc6:	66 90                	xchg   %ax,%ax
 87e7cc8:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 87e7ccb:	90                   	nop
 87e7ccc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7cd0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e7cd4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e7cdb:	00 
 87e7cdc:	c7 44 24 04 87 0e de 	movl   $0x8de0e87,0x4(%esp)
 87e7ce3:	08 
 87e7ce4:	89 1c 24             	mov    %ebx,(%esp)
 87e7ce7:	e8 04 e6 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e7cec:	84 c0                	test   %al,%al
 87e7cee:	75 30                	jne    87e7d20 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x200>
 87e7cf0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e7cf4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e7cfb:	00 
 87e7cfc:	89 34 24             	mov    %esi,(%esp)
 87e7cff:	e8 0c 02 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e7d04:	83 c3 01             	add    $0x1,%ebx
 87e7d07:	0f 84 d4 fe ff ff    	je     87e7be1 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc1>
 87e7d0d:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e7d10:	75 be                	jne    87e7cd0 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b0>
 87e7d12:	83 c4 3c             	add    $0x3c,%esp
 87e7d15:	89 d8                	mov    %ebx,%eax
 87e7d17:	5b                   	pop    %ebx
 87e7d18:	5e                   	pop    %esi
 87e7d19:	5f                   	pop    %edi
 87e7d1a:	5d                   	pop    %ebp
 87e7d1b:	c3                   	ret
 87e7d1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7d20:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e7d23:	0f 84 b8 fe ff ff    	je     87e7be1 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc1>
 87e7d29:	83 c3 03             	add    $0x3,%ebx
 87e7d2c:	e9 b0 fe ff ff       	jmp    87e7be1 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc1>
 87e7d31:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87e7d35:	0f 85 08 ff ff ff    	jne    87e7c43 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x123>
 87e7d3b:	eb 81                	jmp    87e7cbe <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x19e>
 87e7d3d:	8d 76 00             	lea    0x0(%esi),%esi
 87e7d40:	31 f6                	xor    %esi,%esi
 87e7d42:	e9 1f fe ff ff       	jmp    87e7b66 <_ZN12TiXmlComment5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x46>
 87e7d47:	90                   	nop
 87e7d48:	90                   	nop
 87e7d49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlComment::Parse @ 0x87e7b20

/* TiXmlComment::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlComment::Parse(TiXmlComment *this,byte *param_1,TiXmlParsingData *param_2,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  TiXmlDocument *pTVar3;
  int iVar4;
  string *this_00;
  byte bVar5;
  byte *pbVar6;
  
  pTVar3 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  this_00 = (string *)(this + 0x20);
  std::string::assign(this_00,"",0);
  if (param_1 != (byte *)0x0) {
    bVar5 = *param_1;
    if (bVar5 == 0) {
      param_1 = (byte *)0x0;
    }
    else if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e7cbe;
            goto LAB_087e7c43;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e7c43;
LAB_087e7cbe:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e7c43:
          iVar4 = isspace((uint)bVar5);
          if (((iVar4 == 0) && (bVar5 != 10)) && (bVar5 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
    else {
      do {
        iVar4 = isspace((uint)bVar5);
        if (((bVar5 != 10) && (iVar4 == 0)) && (bVar5 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
  }
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar1;
  }
  cVar2 = TiXmlBase::StringEqual(param_1,&DAT_08d0cfd6,0,param_4);
  if (cVar2 == '\0') {
    pbVar6 = (byte *)0x0;
    if (pTVar3 != (TiXmlDocument *)0x0) {
      TiXmlDocument::SetError(pTVar3,10,param_1,param_2,param_4);
    }
  }
  else {
    pbVar6 = param_1 + 4;
    std::string::assign(this_00,"",0);
    if ((pbVar6 != (byte *)0x0) && (param_1[4] != 0)) {
      while (cVar2 = TiXmlBase::StringEqual(pbVar6,&DAT_08de0e87,0,param_4), cVar2 == '\0') {
        std::string::append(this_00,(char *)pbVar6,1);
        pbVar6 = pbVar6 + 1;
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (*pbVar6 == 0) {
          return pbVar6;
        }
      }
      if (*pbVar6 != 0) {
        pbVar6 = pbVar6 + 3;
      }
    }
  }
  return pbVar6;
}

```

---

## Print

```asm
// === 087e0580 TiXmlComment::Print  [0x087e0580-0x87e060f] ===
 87e0580:	55                   	push   %ebp
 87e0581:	89 e5                	mov    %esp,%ebp
 87e0583:	57                   	push   %edi
 87e0584:	56                   	push   %esi
 87e0585:	53                   	push   %ebx
 87e0586:	83 ec 2c             	sub    $0x2c,%esp
 87e0589:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e058c:	8b 45 08             	mov    0x8(%ebp),%eax
 87e058f:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e0592:	85 f6                	test   %esi,%esi
 87e0594:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e0597:	74 4d                	je     87e05e6 <_ZNK12TiXmlComment5PrintEP8_IO_FILEi+0x66>
 87e0599:	31 db                	xor    %ebx,%ebx
 87e059b:	85 ff                	test   %edi,%edi
 87e059d:	7e 28                	jle    87e05c7 <_ZNK12TiXmlComment5PrintEP8_IO_FILEi+0x47>
 87e059f:	90                   	nop
 87e05a0:	83 c3 01             	add    $0x1,%ebx
 87e05a3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e05a7:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 87e05ae:	00 
 87e05af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e05b6:	00 
 87e05b7:	c7 04 24 71 0e de 08 	movl   $0x8de0e71,(%esp)
 87e05be:	e8 5d dd 89 ff       	call   807e320 <fwrite@plt>
 87e05c3:	39 df                	cmp    %ebx,%edi
 87e05c5:	7f d9                	jg     87e05a0 <_ZNK12TiXmlComment5PrintEP8_IO_FILEi+0x20>
 87e05c7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e05ca:	8b 42 20             	mov    0x20(%edx),%eax
 87e05cd:	89 75 08             	mov    %esi,0x8(%ebp)
 87e05d0:	c7 45 0c 81 0e de 08 	movl   $0x8de0e81,0xc(%ebp)
 87e05d7:	89 45 10             	mov    %eax,0x10(%ebp)
 87e05da:	83 c4 2c             	add    $0x2c,%esp
 87e05dd:	5b                   	pop    %ebx
 87e05de:	5e                   	pop    %esi
 87e05df:	5f                   	pop    %edi
 87e05e0:	5d                   	pop    %ebp
 87e05e1:	e9 aa d4 89 ff       	jmp    807da90 <fprintf@plt>
 87e05e6:	c7 44 24 0c 20 15 de 	movl   $0x8de1520,0xc(%esp)
 87e05ed:	08 
 87e05ee:	c7 44 24 08 13 05 00 	movl   $0x513,0x8(%esp)
 87e05f5:	00 
 87e05f6:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e05fd:	08 
 87e05fe:	c7 04 24 7b 0e de 08 	movl   $0x8de0e7b,(%esp)
 87e0605:	e8 46 d6 89 ff       	call   807dc50 <__assert_fail@plt>
 87e060a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlComment::Print @ 0x87e0580

/* TiXmlComment::Print(_IO_FILE*, int) const */

void __thiscall TiXmlComment::Print(TiXmlComment *this,_IO_FILE *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (_IO_FILE *)0x0) {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        iVar1 = iVar1 + 1;
        fwrite(&DAT_08de0e71,1,4,param_1);
      } while (iVar1 < param_2);
    }
    fprintf(param_1,"<!--%s-->");
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cfile","tinyxml.cpp",0x513,"virtual void TiXmlComment::Print(FILE*, int) const");
}

```

---

## StreamIn

```asm
// === 087e9200 TiXmlComment::StreamIn  [0x087e9200-0x87e935f] ===
 87e9200:	55                   	push   %ebp
 87e9201:	89 e5                	mov    %esp,%ebp
 87e9203:	57                   	push   %edi
 87e9204:	56                   	push   %esi
 87e9205:	53                   	push   %ebx
 87e9206:	83 ec 4c             	sub    $0x4c,%esp
 87e9209:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e920c:	8b 5d 10             	mov    0x10(%ebp),%ebx
 87e920f:	90                   	nop
 87e9210:	8b 06                	mov    (%esi),%eax
 87e9212:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e9215:	8b 44 06 14          	mov    0x14(%esi,%eax,1),%eax
 87e9219:	85 c0                	test   %eax,%eax
 87e921b:	0f 85 b7 00 00 00    	jne    87e92d8 <_ZN12TiXmlComment8StreamInEPSiPSs+0xd8>
 87e9221:	89 34 24             	mov    %esi,(%esp)
 87e9224:	e8 c7 ca ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e9229:	85 c0                	test   %eax,%eax
 87e922b:	0f 8e af 00 00 00    	jle    87e92e0 <_ZN12TiXmlComment8StreamInEPSiPSs+0xe0>
 87e9231:	8b 13                	mov    (%ebx),%edx
 87e9233:	8b 7a f4             	mov    -0xc(%edx),%edi
 87e9236:	8d 4a f4             	lea    -0xc(%edx),%ecx
 87e9239:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87e923c:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87e923f:	83 c7 01             	add    $0x1,%edi
 87e9242:	3b 79 04             	cmp    0x4(%ecx),%edi
 87e9245:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e9248:	77 07                	ja     87e9251 <_ZN12TiXmlComment8StreamInEPSiPSs+0x51>
 87e924a:	8b 49 08             	mov    0x8(%ecx),%ecx
 87e924d:	85 c9                	test   %ecx,%ecx
 87e924f:	7e 1d                	jle    87e926e <_ZN12TiXmlComment8StreamInEPSiPSs+0x6e>
 87e9251:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e9254:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87e9257:	89 1c 24             	mov    %ebx,(%esp)
 87e925a:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e925e:	e8 ad ea f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e9263:	8b 13                	mov    (%ebx),%edx
 87e9265:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e9268:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e926b:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87e926e:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e9271:	88 04 3a             	mov    %al,(%edx,%edi,1)
 87e9274:	8b 0b                	mov    (%ebx),%ecx
 87e9276:	8d 51 f4             	lea    -0xc(%ecx),%edx
 87e9279:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87e927f:	0f 85 ae 00 00 00    	jne    87e9333 <_ZN12TiXmlComment8StreamInEPSiPSs+0x133>
 87e9285:	83 f8 3e             	cmp    $0x3e,%eax
 87e9288:	75 86                	jne    87e9210 <_ZN12TiXmlComment8StreamInEPSiPSs+0x10>
 87e928a:	8b 03                	mov    (%ebx),%eax
 87e928c:	8b 78 f4             	mov    -0xc(%eax),%edi
 87e928f:	8d 50 f4             	lea    -0xc(%eax),%edx
 87e9292:	89 f9                	mov    %edi,%ecx
 87e9294:	83 c1 fe             	add    $0xfffffffe,%ecx
 87e9297:	0f 83 ad 00 00 00    	jae    87e934a <_ZN12TiXmlComment8StreamInEPSiPSs+0x14a>
 87e929d:	8b 52 08             	mov    0x8(%edx),%edx
 87e92a0:	85 d2                	test   %edx,%edx
 87e92a2:	78 0a                	js     87e92ae <_ZN12TiXmlComment8StreamInEPSiPSs+0xae>
 87e92a4:	89 1c 24             	mov    %ebx,(%esp)
 87e92a7:	e8 54 fb f1 ff       	call   8708e00 <_ZNSs12_M_leak_hardEv>
 87e92ac:	8b 03                	mov    (%ebx),%eax
 87e92ae:	80 7c 38 fe 2d       	cmpb   $0x2d,-0x2(%eax,%edi,1)
 87e92b3:	0f 85 57 ff ff ff    	jne    87e9210 <_ZN12TiXmlComment8StreamInEPSiPSs+0x10>
 87e92b9:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e92bc:	89 1c 24             	mov    %ebx,(%esp)
 87e92bf:	83 e8 03             	sub    $0x3,%eax
 87e92c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e92c6:	e8 a5 fb f1 ff       	call   8708e70 <_ZNSs2atEj>
 87e92cb:	80 38 2d             	cmpb   $0x2d,(%eax)
 87e92ce:	0f 85 3c ff ff ff    	jne    87e9210 <_ZN12TiXmlComment8StreamInEPSiPSs+0x10>
 87e92d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e92d8:	83 c4 4c             	add    $0x4c,%esp
 87e92db:	5b                   	pop    %ebx
 87e92dc:	5e                   	pop    %esi
 87e92dd:	5f                   	pop    %edi
 87e92de:	5d                   	pop    %ebp
 87e92df:	c3                   	ret
 87e92e0:	8b 45 08             	mov    0x8(%ebp),%eax
 87e92e3:	89 04 24             	mov    %eax,(%esp)
 87e92e6:	e8 e5 6b ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e92eb:	85 c0                	test   %eax,%eax
 87e92ed:	89 c3                	mov    %eax,%ebx
 87e92ef:	74 e7                	je     87e92d8 <_ZN12TiXmlComment8StreamInEPSiPSs+0xd8>
 87e92f1:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e92f5:	75 e1                	jne    87e92d8 <_ZN12TiXmlComment8StreamInEPSiPSs+0xd8>
 87e92f7:	8b 35 f4 37 3f 09    	mov    0x93f37f4,%esi
 87e92fd:	c6 40 2c 01          	movb   $0x1,0x2c(%eax)
 87e9301:	c7 40 30 0d 00 00 00 	movl   $0xd,0x30(%eax)
 87e9308:	89 34 24             	mov    %esi,(%esp)
 87e930b:	e8 a0 50 89 ff       	call   807e3b0 <strlen@plt>
 87e9310:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e9314:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e9318:	8d 43 34             	lea    0x34(%ebx),%eax
 87e931b:	89 04 24             	mov    %eax,(%esp)
 87e931e:	e8 7d f2 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e9323:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e932a:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e9331:	eb a5                	jmp    87e92d8 <_ZN12TiXmlComment8StreamInEPSiPSs+0xd8>
 87e9333:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e9336:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 87e933d:	89 79 f4             	mov    %edi,-0xc(%ecx)
 87e9340:	c6 44 3a 0c 00       	movb   $0x0,0xc(%edx,%edi,1)
 87e9345:	e9 3b ff ff ff       	jmp    87e9285 <_ZN12TiXmlComment8StreamInEPSiPSs+0x85>
 87e934a:	c7 04 24 2c 04 d0 08 	movl   $0x8d0042c,(%esp)
 87e9351:	e8 1a 08 ef ff       	call   86d9b70 <_ZSt20__throw_out_of_rangePKc>
 87e9356:	8d 76 00             	lea    0x0(%esi),%esi
 87e9359:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlComment::StreamIn @ 0x87e9200

/* TiXmlComment::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlComment::StreamIn(TiXmlComment *this,istream *param_1,string *param_2)

{
  undefined1 *puVar1;
  undefined4 __s;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int local_40;
  
  do {
    do {
      if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
        return;
      }
      iVar2 = std::istream::get(param_1);
      if (iVar2 < 1) {
        iVar2 = TiXmlNode::GetDocument((TiXmlNode *)this);
        __s = TiXmlBase::errorString._52_4_;
        if (iVar2 == 0) {
          return;
        }
        if (*(char *)(iVar2 + 0x2c) != '\0') {
          return;
        }
        *(undefined1 *)(iVar2 + 0x2c) = 1;
        *(undefined4 *)(iVar2 + 0x30) = 0xd;
        sVar4 = strlen((char *)__s);
        std::string::assign((string *)(iVar2 + 0x34),(char *)__s,sVar4);
        *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
        return;
      }
      iVar5 = *(int *)param_2;
      local_40 = *(int *)(iVar5 + -0xc);
      uVar6 = local_40 + 1;
      if ((*(uint *)(iVar5 + -8) < uVar6) || (0 < *(int *)(iVar5 + -4))) {
        std::string::reserve(param_2,uVar6);
        iVar5 = *(int *)param_2;
        local_40 = *(int *)(iVar5 + -0xc);
      }
      *(char *)(iVar5 + local_40) = (char)iVar2;
      puVar1 = *(undefined1 **)param_2;
      if (puVar1 != &DAT_0948ccfc) {
        *(undefined4 *)(puVar1 + -4) = 0;
        *(uint *)(puVar1 + -0xc) = uVar6;
        puVar1[uVar6] = 0;
      }
    } while (iVar2 != 0x3e);
    iVar2 = *(int *)param_2;
    uVar6 = *(uint *)(iVar2 + -0xc);
    if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range("basic_string::at");
    }
    if (-1 < *(int *)(iVar2 + -4)) {
      std::string::_M_leak_hard(param_2);
      iVar2 = *(int *)param_2;
    }
  } while ((*(char *)(iVar2 + -2 + uVar6) != '-') ||
          (pcVar3 = (char *)std::string::at(param_2,*(int *)(iVar2 + -0xc) - 3), *pcVar3 != '-'));
  return;
}

```

---

## TiXmlComment

```asm
// === 087e2d40 TiXmlComment::TiXmlComment  [0x087e2d40-0x87e2def] ===
 87e2d40:	55                   	push   %ebp
 87e2d41:	89 e5                	mov    %esp,%ebp
 87e2d43:	83 ec 28             	sub    $0x28,%esp
 87e2d46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e2d49:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e2d4c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e2d4f:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e2d52:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e2d55:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e2d5c:	8b 7e 20             	mov    0x20(%esi),%edi
 87e2d5f:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e2d66:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e2d6d:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e2d74:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e2d7b:	c7 43 14 02 00 00 00 	movl   $0x2,0x14(%ebx)
 87e2d82:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e2d89:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e2d90:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e2d97:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e2d9e:	c7 03 c8 11 de 08    	movl   $0x8de11c8,(%ebx)
 87e2da4:	89 3c 24             	mov    %edi,(%esp)
 87e2da7:	e8 04 b6 89 ff       	call   807e3b0 <strlen@plt>
 87e2dac:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e2db0:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2db4:	8d 43 20             	lea    0x20(%ebx),%eax
 87e2db7:	89 04 24             	mov    %eax,(%esp)
 87e2dba:	e8 e1 57 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2dbf:	8b 46 0c             	mov    0xc(%esi),%eax
 87e2dc2:	8b 56 08             	mov    0x8(%esi),%edx
 87e2dc5:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e2dc8:	8b 46 04             	mov    0x4(%esi),%eax
 87e2dcb:	89 53 08             	mov    %edx,0x8(%ebx)
 87e2dce:	89 43 04             	mov    %eax,0x4(%ebx)
 87e2dd1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e2dd4:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e2dd7:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e2dda:	89 ec                	mov    %ebp,%esp
 87e2ddc:	5d                   	pop    %ebp
 87e2ddd:	c3                   	ret
 87e2dde:	89 c6                	mov    %eax,%esi
 87e2de0:	89 1c 24             	mov    %ebx,(%esp)
 87e2de3:	e8 88 fd ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e2de8:	89 34 24             	mov    %esi,(%esp)
 87e2deb:	e8 60 09 30 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// TiXmlComment::TiXmlComment @ 0x87e2d40

/* TiXmlComment::TiXmlComment(TiXmlComment const&) */

void __thiscall TiXmlComment::TiXmlComment(TiXmlComment *this,TiXmlComment *param_1)

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
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlComment_08de11c8;
  sVar3 = strlen(__s);
                    /* try { // try from 087e2dba to 087e2dbe has its CatchHandler @ 087e2dde */
  std::string::assign((string *)(this + 0x20),__s,sVar3);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  return;
}

```

---

## operator=

```asm
// === 087e2600 TiXmlComment::operator=  [0x087e2600-0x87e267f] ===
 87e2600:	55                   	push   %ebp
 87e2601:	89 e5                	mov    %esp,%ebp
 87e2603:	57                   	push   %edi
 87e2604:	56                   	push   %esi
 87e2605:	53                   	push   %ebx
 87e2606:	83 ec 1c             	sub    $0x1c,%esp
 87e2609:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e260c:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e260f:	8b 43 18             	mov    0x18(%ebx),%eax
 87e2612:	85 c0                	test   %eax,%eax
 87e2614:	75 04                	jne    87e261a <_ZN12TiXmlCommentaSERKS_+0x1a>
 87e2616:	eb 11                	jmp    87e2629 <_ZN12TiXmlCommentaSERKS_+0x29>
 87e2618:	89 f8                	mov    %edi,%eax
 87e261a:	8b 78 28             	mov    0x28(%eax),%edi
 87e261d:	8b 10                	mov    (%eax),%edx
 87e261f:	89 04 24             	mov    %eax,(%esp)
 87e2622:	ff 52 04             	call   *0x4(%edx)
 87e2625:	85 ff                	test   %edi,%edi
 87e2627:	75 ef                	jne    87e2618 <_ZN12TiXmlCommentaSERKS_+0x18>
 87e2629:	8b 7e 20             	mov    0x20(%esi),%edi
 87e262c:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e2633:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e263a:	89 3c 24             	mov    %edi,(%esp)
 87e263d:	e8 6e bd 89 ff       	call   807e3b0 <strlen@plt>
 87e2642:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e2646:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e264a:	8d 43 20             	lea    0x20(%ebx),%eax
 87e264d:	89 04 24             	mov    %eax,(%esp)
 87e2650:	e8 4b 5f f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2655:	8b 46 0c             	mov    0xc(%esi),%eax
 87e2658:	8b 56 08             	mov    0x8(%esi),%edx
 87e265b:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e265e:	8b 46 04             	mov    0x4(%esi),%eax
 87e2661:	89 53 08             	mov    %edx,0x8(%ebx)
 87e2664:	89 43 04             	mov    %eax,0x4(%ebx)
 87e2667:	83 c4 1c             	add    $0x1c,%esp
 87e266a:	89 d8                	mov    %ebx,%eax
 87e266c:	5b                   	pop    %ebx
 87e266d:	5e                   	pop    %esi
 87e266e:	5f                   	pop    %edi
 87e266f:	5d                   	pop    %ebp
 87e2670:	c3                   	ret
 87e2671:	90                   	nop
 87e2672:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e2679:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlComment::operator= @ 0x87e2600

/* TiXmlComment::TEMPNAMEPLACEHOLDERVALUE(TiXmlComment const&) */

TiXmlComment * __thiscall TiXmlComment::operator=(TiXmlComment *this,TiXmlComment *param_1)

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
  return this;
}

```

