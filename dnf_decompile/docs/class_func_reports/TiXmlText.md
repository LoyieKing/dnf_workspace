# TiXmlText

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Accept

```asm
// === 087e00a0 TiXmlText::Accept  [0x087e00a0-0x87e00bf] ===
 87e00a0:	55                   	push   %ebp
 87e00a1:	89 e5                	mov    %esp,%ebp
 87e00a3:	83 ec 08             	sub    $0x8,%esp
 87e00a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e00a9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e00ac:	8b 10                	mov    (%eax),%edx
 87e00ae:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 87e00b1:	89 45 08             	mov    %eax,0x8(%ebp)
 87e00b4:	8b 42 1c             	mov    0x1c(%edx),%eax
 87e00b7:	c9                   	leave
 87e00b8:	ff e0                	jmp    *%eax
 87e00ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlText::Accept @ 0x87e00a0

/* TiXmlText::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlText::Accept(TiXmlText *this,TiXmlVisitor *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x087e00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0x1c))();
  return;
}

```

---

## Blank

```asm
// === 087e6290 TiXmlText::Blank  [0x087e6290-0x87e62ef] ===
 87e6290:	55                   	push   %ebp
 87e6291:	89 e5                	mov    %esp,%ebp
 87e6293:	57                   	push   %edi
 87e6294:	56                   	push   %esi
 87e6295:	53                   	push   %ebx
 87e6296:	83 ec 2c             	sub    $0x2c,%esp
 87e6299:	8b 45 08             	mov    0x8(%ebp),%eax
 87e629c:	8b 78 20             	mov    0x20(%eax),%edi
 87e629f:	8b 47 f4             	mov    -0xc(%edi),%eax
 87e62a2:	85 c0                	test   %eax,%eax
 87e62a4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e62a7:	74 37                	je     87e62e0 <_ZNK9TiXmlText5BlankEv+0x50>
 87e62a9:	31 f6                	xor    %esi,%esi
 87e62ab:	90                   	nop
 87e62ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e62b0:	0f b6 1c 37          	movzbl (%edi,%esi,1),%ebx
 87e62b4:	0f b6 c3             	movzbl %bl,%eax
 87e62b7:	89 04 24             	mov    %eax,(%esp)
 87e62ba:	e8 c1 7f 89 ff       	call   807e280 <isspace@plt>
 87e62bf:	80 fb 0a             	cmp    $0xa,%bl
 87e62c2:	74 14                	je     87e62d8 <_ZNK9TiXmlText5BlankEv+0x48>
 87e62c4:	85 c0                	test   %eax,%eax
 87e62c6:	75 10                	jne    87e62d8 <_ZNK9TiXmlText5BlankEv+0x48>
 87e62c8:	80 fb 0d             	cmp    $0xd,%bl
 87e62cb:	74 0b                	je     87e62d8 <_ZNK9TiXmlText5BlankEv+0x48>
 87e62cd:	83 c4 2c             	add    $0x2c,%esp
 87e62d0:	5b                   	pop    %ebx
 87e62d1:	5e                   	pop    %esi
 87e62d2:	5f                   	pop    %edi
 87e62d3:	5d                   	pop    %ebp
 87e62d4:	c3                   	ret
 87e62d5:	8d 76 00             	lea    0x0(%esi),%esi
 87e62d8:	83 c6 01             	add    $0x1,%esi
 87e62db:	3b 75 e4             	cmp    -0x1c(%ebp),%esi
 87e62de:	72 d0                	jb     87e62b0 <_ZNK9TiXmlText5BlankEv+0x20>
 87e62e0:	b8 01 00 00 00       	mov    $0x1,%eax
 87e62e5:	eb e6                	jmp    87e62cd <_ZNK9TiXmlText5BlankEv+0x3d>
 87e62e7:	90                   	nop
 87e62e8:	90                   	nop
 87e62e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlText::Blank @ 0x87e6290

/* TiXmlText::Blank() const */

undefined4 __thiscall TiXmlText::Blank(TiXmlText *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(this + 0x20);
  uVar3 = *(uint *)(iVar2 + -0xc);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      bVar1 = *(byte *)(iVar2 + uVar5);
      iVar4 = isspace((uint)bVar1);
      if (((bVar1 != 10) && (iVar4 == 0)) && (bVar1 != 0xd)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return 1;
}

```

---

## Clone

```asm
// === 087e3090 TiXmlText::Clone  [0x087e3090-0x87e317f] ===
 87e3090:	55                   	push   %ebp
 87e3091:	89 e5                	mov    %esp,%ebp
 87e3093:	83 ec 38             	sub    $0x38,%esp
 87e3096:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 87e309d:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e30a0:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e30a3:	8b 75 08             	mov    0x8(%ebp),%esi
 87e30a6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e30a9:	e8 a2 13 f4 ff       	call   8724450 <_Znwj>
 87e30ae:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87e30b5:	8d 78 20             	lea    0x20(%eax),%edi
 87e30b8:	89 c3                	mov    %eax,%ebx
 87e30ba:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87e30c1:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87e30c8:	c7 40 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%eax)
 87e30cf:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87e30d6:	c7 40 14 04 00 00 00 	movl   $0x4,0x14(%eax)
 87e30dd:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 87e30e4:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87e30eb:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87e30f2:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 87e30f9:	c7 00 68 11 de 08    	movl   $0x8de1168,(%eax)
 87e30ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e3106:	00 
 87e3107:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e310e:	08 
 87e310f:	89 3c 24             	mov    %edi,(%esp)
 87e3112:	e8 89 54 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e3117:	8b 56 20             	mov    0x20(%esi),%edx
 87e311a:	c6 43 2c 00          	movb   $0x0,0x2c(%ebx)
 87e311e:	89 14 24             	mov    %edx,(%esp)
 87e3121:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e3124:	e8 87 b2 89 ff       	call   807e3b0 <strlen@plt>
 87e3129:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e312c:	89 3c 24             	mov    %edi,(%esp)
 87e312f:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e3133:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e3137:	e8 64 54 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e313c:	8b 46 0c             	mov    0xc(%esi),%eax
 87e313f:	8b 56 08             	mov    0x8(%esi),%edx
 87e3142:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e3145:	8b 46 04             	mov    0x4(%esi),%eax
 87e3148:	89 53 08             	mov    %edx,0x8(%ebx)
 87e314b:	89 43 04             	mov    %eax,0x4(%ebx)
 87e314e:	0f b6 46 2c          	movzbl 0x2c(%esi),%eax
 87e3152:	88 43 2c             	mov    %al,0x2c(%ebx)
 87e3155:	89 d8                	mov    %ebx,%eax
 87e3157:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e315a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e315d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e3160:	89 ec                	mov    %ebp,%esp
 87e3162:	5d                   	pop    %ebp
 87e3163:	c3                   	ret
 87e3164:	89 c6                	mov    %eax,%esi
 87e3166:	89 1c 24             	mov    %ebx,(%esp)
 87e3169:	e8 02 fa ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e316e:	89 1c 24             	mov    %ebx,(%esp)
 87e3171:	e8 7a 13 f4 ff       	call   87244f0 <_ZdlPv>
 87e3176:	89 34 24             	mov    %esi,(%esp)
 87e3179:	e8 d2 05 30 00       	call   8ae3750 <_Unwind_Resume>
 87e317e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlText::Clone @ 0x87e3090

/* TiXmlText::Clone() const */

undefined4 * __thiscall TiXmlText::Clone(TiXmlText *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  
  puVar3 = operator_new(0x30);
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0xffffffff;
  puVar3[3] = 0;
  puVar3[8] = &DAT_0948ccfc;
  puVar3[4] = 0;
  puVar3[5] = 4;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR__TiXmlText_08de1168;
                    /* try { // try from 087e3112 to 087e3116 has its CatchHandler @ 087e3164 */
  std::string::assign((string *)(puVar3 + 8),"",0);
  __s = *(char **)(this + 0x20);
  *(undefined1 *)(puVar3 + 0xb) = 0;
  sVar4 = strlen(__s);
  std::string::assign((string *)(puVar3 + 8),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  puVar3[3] = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  *(TiXmlText *)(puVar3 + 0xb) = this[0x2c];
  return puVar3;
}

```

---

## CopyTo

```asm
// === 087e2490 TiXmlText::CopyTo  [0x087e2490-0x87e24ef] ===
 87e2490:	55                   	push   %ebp
 87e2491:	89 e5                	mov    %esp,%ebp
 87e2493:	83 ec 28             	sub    $0x28,%esp
 87e2496:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e2499:	8b 75 08             	mov    0x8(%ebp),%esi
 87e249c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e249f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e24a2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e24a5:	8b 7e 20             	mov    0x20(%esi),%edi
 87e24a8:	89 3c 24             	mov    %edi,(%esp)
 87e24ab:	e8 00 bf 89 ff       	call   807e3b0 <strlen@plt>
 87e24b0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e24b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e24b8:	8d 43 20             	lea    0x20(%ebx),%eax
 87e24bb:	89 04 24             	mov    %eax,(%esp)
 87e24be:	e8 dd 60 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e24c3:	8b 46 0c             	mov    0xc(%esi),%eax
 87e24c6:	8b 56 08             	mov    0x8(%esi),%edx
 87e24c9:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e24cc:	8b 46 04             	mov    0x4(%esi),%eax
 87e24cf:	89 53 08             	mov    %edx,0x8(%ebx)
 87e24d2:	89 43 04             	mov    %eax,0x4(%ebx)
 87e24d5:	0f b6 46 2c          	movzbl 0x2c(%esi),%eax
 87e24d9:	88 43 2c             	mov    %al,0x2c(%ebx)
 87e24dc:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e24df:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e24e2:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e24e5:	89 ec                	mov    %ebp,%esp
 87e24e7:	5d                   	pop    %ebp
 87e24e8:	c3                   	ret
 87e24e9:	90                   	nop
 87e24ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlText::CopyTo @ 0x87e2490

/* TiXmlText::CopyTo(TiXmlText*) const */

void __thiscall TiXmlText::CopyTo(TiXmlText *this,TiXmlText *param_1)

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
  param_1[0x2c] = this[0x2c];
  return;
}

```

---

## Parse

```asm
// === 087e6e00 TiXmlText::Parse  [0x087e6e00-0x87e707f] ===
 87e6e00:	55                   	push   %ebp
 87e6e01:	89 e5                	mov    %esp,%ebp
 87e6e03:	57                   	push   %edi
 87e6e04:	56                   	push   %esi
 87e6e05:	53                   	push   %ebx
 87e6e06:	83 ec 6c             	sub    $0x6c,%esp
 87e6e09:	8b 75 08             	mov    0x8(%ebp),%esi
 87e6e0c:	8b 5d 10             	mov    0x10(%ebp),%ebx
 87e6e0f:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e6e12:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6e19:	00 
 87e6e1a:	8d 46 20             	lea    0x20(%esi),%eax
 87e6e1d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87e6e20:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e6e27:	08 
 87e6e28:	89 04 24             	mov    %eax,(%esp)
 87e6e2b:	e8 70 17 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e6e30:	89 34 24             	mov    %esi,(%esp)
 87e6e33:	e8 98 90 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e6e38:	85 db                	test   %ebx,%ebx
 87e6e3a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e6e3d:	74 1e                	je     87e6e5d <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x5d>
 87e6e3f:	8b 55 14             	mov    0x14(%ebp),%edx
 87e6e42:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e6e46:	89 1c 24             	mov    %ebx,(%esp)
 87e6e49:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e6e4d:	e8 ce f1 ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e6e52:	8b 03                	mov    (%ebx),%eax
 87e6e54:	8b 53 04             	mov    0x4(%ebx),%edx
 87e6e57:	89 46 04             	mov    %eax,0x4(%esi)
 87e6e5a:	89 56 08             	mov    %edx,0x8(%esi)
 87e6e5d:	80 7e 2c 00          	cmpb   $0x0,0x2c(%esi)
 87e6e61:	0f 84 19 01 00 00    	je     87e6f80 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x180>
 87e6e67:	8b 45 14             	mov    0x14(%ebp),%eax
 87e6e6a:	c6 46 2c 01          	movb   $0x1,0x2c(%esi)
 87e6e6e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6e75:	00 
 87e6e76:	c7 44 24 04 db cf d0 	movl   $0x8d0cfdb,0x4(%esp)
 87e6e7d:	08 
 87e6e7e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e6e82:	89 3c 24             	mov    %edi,(%esp)
 87e6e85:	e8 66 f4 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e6e8a:	84 c0                	test   %al,%al
 87e6e8c:	0f 84 47 01 00 00    	je     87e6fd9 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1d9>
 87e6e92:	89 fb                	mov    %edi,%ebx
 87e6e94:	83 c3 09             	add    $0x9,%ebx
 87e6e97:	74 2f                	je     87e6ec8 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc8>
 87e6e99:	80 7f 09 00          	cmpb   $0x0,0x9(%edi)
 87e6e9d:	74 29                	je     87e6ec8 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc8>
 87e6e9f:	90                   	nop
 87e6ea0:	8b 45 14             	mov    0x14(%ebp),%eax
 87e6ea3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6eaa:	00 
 87e6eab:	c7 44 24 04 ad 0f de 	movl   $0x8de0fad,0x4(%esp)
 87e6eb2:	08 
 87e6eb3:	89 1c 24             	mov    %ebx,(%esp)
 87e6eb6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e6eba:	e8 31 f4 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e6ebf:	84 c0                	test   %al,%al
 87e6ec1:	74 45                	je     87e6f08 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x108>
 87e6ec3:	90                   	nop
 87e6ec4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e6ec8:	8b 45 14             	mov    0x14(%ebp),%eax
 87e6ecb:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87e6ece:	31 c9                	xor    %ecx,%ecx
 87e6ed0:	89 f2                	mov    %esi,%edx
 87e6ed2:	c7 45 e0 fc cc 48 09 	movl   $0x948ccfc,-0x20(%ebp)
 87e6ed9:	c7 04 24 ad 0f de 08 	movl   $0x8de0fad,(%esp)
 87e6ee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6ee4:	89 d8                	mov    %ebx,%eax
 87e6ee6:	e8 65 f9 ff ff       	call   87e6850 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2>
 87e6eeb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87e6eee:	83 ea 0c             	sub    $0xc,%edx
 87e6ef1:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87e6ef7:	0f 85 2a 01 00 00    	jne    87e7027 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x227>
 87e6efd:	83 c4 6c             	add    $0x6c,%esp
 87e6f00:	5b                   	pop    %ebx
 87e6f01:	5e                   	pop    %esi
 87e6f02:	5f                   	pop    %edi
 87e6f03:	5d                   	pop    %ebp
 87e6f04:	c3                   	ret
 87e6f05:	8d 76 00             	lea    0x0(%esi),%esi
 87e6f08:	0f b6 13             	movzbl (%ebx),%edx
 87e6f0b:	8b 46 20             	mov    0x20(%esi),%eax
 87e6f0e:	88 55 b7             	mov    %dl,-0x49(%ebp)
 87e6f11:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e6f14:	8d 48 f4             	lea    -0xc(%eax),%ecx
 87e6f17:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87e6f1a:	8d 7a 01             	lea    0x1(%edx),%edi
 87e6f1d:	3b 79 04             	cmp    0x4(%ecx),%edi
 87e6f20:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e6f23:	76 4b                	jbe    87e6f70 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x170>
 87e6f25:	8d 76 00             	lea    0x0(%esi),%esi
 87e6f28:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e6f2b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e6f2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6f32:	89 14 24             	mov    %edx,(%esp)
 87e6f35:	e8 d6 0d f2 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e6f3a:	8b 46 20             	mov    0x20(%esi),%eax
 87e6f3d:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e6f40:	0f b6 4d b7          	movzbl -0x49(%ebp),%ecx
 87e6f44:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 87e6f47:	8b 56 20             	mov    0x20(%esi),%edx
 87e6f4a:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e6f4d:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e6f52:	0f 85 b8 00 00 00    	jne    87e7010 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x210>
 87e6f58:	83 c3 01             	add    $0x1,%ebx
 87e6f5b:	0f 84 67 ff ff ff    	je     87e6ec8 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc8>
 87e6f61:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e6f64:	0f 84 5e ff ff ff    	je     87e6ec8 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xc8>
 87e6f6a:	e9 31 ff ff ff       	jmp    87e6ea0 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa0>
 87e6f6f:	90                   	nop
 87e6f70:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e6f73:	8b 4f 08             	mov    0x8(%edi),%ecx
 87e6f76:	85 c9                	test   %ecx,%ecx
 87e6f78:	7f ae                	jg     87e6f28 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x128>
 87e6f7a:	eb c4                	jmp    87e6f40 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x140>
 87e6f7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e6f80:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87e6f83:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6f8a:	00 
 87e6f8b:	c7 44 24 04 db cf d0 	movl   $0x8d0cfdb,0x4(%esp)
 87e6f92:	08 
 87e6f93:	89 3c 24             	mov    %edi,(%esp)
 87e6f96:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87e6f9a:	e8 51 f3 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e6f9f:	84 c0                	test   %al,%al
 87e6fa1:	0f 85 c0 fe ff ff    	jne    87e6e67 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x67>
 87e6fa7:	8b 55 14             	mov    0x14(%ebp),%edx
 87e6faa:	b9 01 00 00 00       	mov    $0x1,%ecx
 87e6faf:	89 f8                	mov    %edi,%eax
 87e6fb1:	c7 04 24 b8 c9 d0 08 	movl   $0x8d0c9b8,(%esp)
 87e6fb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e6fbc:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e6fbf:	e8 8c f8 ff ff       	call   87e6850 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2>
 87e6fc4:	85 c0                	test   %eax,%eax
 87e6fc6:	0f 84 31 ff ff ff    	je     87e6efd <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xfd>
 87e6fcc:	80 38 00             	cmpb   $0x0,(%eax)
 87e6fcf:	74 0f                	je     87e6fe0 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e0>
 87e6fd1:	83 e8 01             	sub    $0x1,%eax
 87e6fd4:	e9 24 ff ff ff       	jmp    87e6efd <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xfd>
 87e6fd9:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87e6fdc:	85 f6                	test   %esi,%esi
 87e6fde:	75 07                	jne    87e6fe7 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1e7>
 87e6fe0:	31 c0                	xor    %eax,%eax
 87e6fe2:	e9 16 ff ff ff       	jmp    87e6efd <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xfd>
 87e6fe7:	8b 55 14             	mov    0x14(%ebp),%edx
 87e6fea:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87e6fed:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 87e6ff1:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e6ff5:	89 54 24 10          	mov    %edx,0x10(%esp)
 87e6ff9:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 87e7000:	00 
 87e7001:	89 0c 24             	mov    %ecx,(%esp)
 87e7004:	e8 27 fd ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e7009:	31 c0                	xor    %eax,%eax
 87e700b:	e9 ed fe ff ff       	jmp    87e6efd <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xfd>
 87e7010:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e7013:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e701a:	89 7a f4             	mov    %edi,-0xc(%edx)
 87e701d:	c6 44 38 0c 00       	movb   $0x0,0xc(%eax,%edi,1)
 87e7022:	e9 31 ff ff ff       	jmp    87e6f58 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x158>
 87e7027:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 87e702c:	85 c9                	test   %ecx,%ecx
 87e702e:	74 3c                	je     87e706c <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x26c>
 87e7030:	83 c9 ff             	or     $0xffffffff,%ecx
 87e7033:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 87e7038:	85 c9                	test   %ecx,%ecx
 87e703a:	0f 8f bd fe ff ff    	jg     87e6efd <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xfd>
 87e7040:	8d 4d e7             	lea    -0x19(%ebp),%ecx
 87e7043:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87e7046:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87e704a:	89 14 24             	mov    %edx,(%esp)
 87e704d:	e8 ce f8 f1 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e7052:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87e7055:	e9 a3 fe ff ff       	jmp    87e6efd <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xfd>
 87e705a:	89 c3                	mov    %eax,%ebx
 87e705c:	89 34 24             	mov    %esi,(%esp)
 87e705f:	e8 7c 0b f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e7064:	89 1c 24             	mov    %ebx,(%esp)
 87e7067:	e8 e4 c6 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e706c:	8b 4a 08             	mov    0x8(%edx),%ecx
 87e706f:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 87e7072:	89 5a 08             	mov    %ebx,0x8(%edx)
 87e7075:	eb c1                	jmp    87e7038 <_ZN9TiXmlText5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x238>
 87e7077:	90                   	nop
 87e7078:	90                   	nop
 87e7079:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlText::Parse @ 0x87e6e00

/* WARNING: Removing unreachable block (ram,0x087e706c) */
/* TiXmlText::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

char * __thiscall
TiXmlText::Parse(TiXmlText *this,int param_1,TiXmlParsingData *param_2,undefined4 param_4)

{
  string *this_00;
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char cVar5;
  TiXmlDocument *pTVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *local_24 [5];
  
  this_00 = (string *)(this + 0x20);
  std::string::assign(this_00,"",0);
  pTVar6 = (TiXmlDocument *)TiXmlNode::GetDocument((TiXmlNode *)this);
  if (param_2 != (TiXmlParsingData *)0x0) {
    TiXmlParsingData::Stamp(param_2,param_1,param_4);
    uVar3 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + 8) = uVar3;
  }
  if ((this[0x2c] == (TiXmlText)0x0) &&
     (cVar5 = TiXmlBase::StringEqual(param_1,&DAT_08d0cfdb,0,param_4), cVar5 == '\0')) {
    pcVar9 = (char *)TiXmlBase::ReadText(param_1,this_00,1,&DAT_08d0c9b8,param_4);
    if (pcVar9 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar9 != '\0') {
      return pcVar9 + -1;
    }
  }
  else {
    this[0x2c] = (TiXmlText)0x1;
    cVar5 = TiXmlBase::StringEqual(param_1,&DAT_08d0cfdb,0,param_4);
    if (cVar5 != '\0') {
      pcVar9 = (char *)(param_1 + 9);
      if ((pcVar9 != (char *)0x0) && (*(char *)(param_1 + 9) != '\0')) {
        while (cVar5 = TiXmlBase::StringEqual(pcVar9,&DAT_08de0fad,0,param_4), cVar5 == '\0') {
          cVar5 = *pcVar9;
          iVar7 = *(int *)(this + 0x20);
          iVar8 = *(int *)(iVar7 + -0xc);
          uVar1 = iVar8 + 1;
          if ((*(uint *)(iVar7 + -8) < uVar1) || (0 < *(int *)(iVar7 + -4))) {
            std::string::reserve(this_00,uVar1);
            iVar7 = *(int *)(this + 0x20);
            iVar8 = *(int *)(iVar7 + -0xc);
          }
          *(char *)(iVar7 + iVar8) = cVar5;
          puVar4 = *(undefined1 **)(this + 0x20);
          if (puVar4 != &DAT_0948ccfc) {
            *(undefined4 *)(puVar4 + -4) = 0;
            *(uint *)(puVar4 + -0xc) = uVar1;
            puVar4[uVar1] = 0;
          }
          pcVar9 = pcVar9 + 1;
          if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) break;
        }
      }
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e6ee6 to 087e6eea has its CatchHandler @ 087e705a */
      pcVar9 = (char *)TiXmlBase::ReadText(pcVar9,local_24,0,&DAT_08de0fad,param_4);
      if ((allocator *)(local_24[0] + -0xc) == (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        return pcVar9;
      }
      LOCK();
      piVar2 = (int *)(local_24[0] + -4);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (0 < iVar7) {
        return pcVar9;
      }
      std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
      return pcVar9;
    }
    if (pTVar6 != (TiXmlDocument *)0x0) {
      TiXmlDocument::SetError(pTVar6,0xe,param_1,param_2,param_4);
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}

```

---

## Print

```asm
// === 087e4460 TiXmlText::Print  [0x087e4460-0x87e459f] ===
 87e4460:	55                   	push   %ebp
 87e4461:	89 e5                	mov    %esp,%ebp
 87e4463:	57                   	push   %edi
 87e4464:	56                   	push   %esi
 87e4465:	53                   	push   %ebx
 87e4466:	83 ec 2c             	sub    $0x2c,%esp
 87e4469:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e446c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e446f:	85 db                	test   %ebx,%ebx
 87e4471:	0f 84 b0 00 00 00    	je     87e4527 <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0xc7>
 87e4477:	80 7f 2c 00          	cmpb   $0x0,0x2c(%edi)
 87e447b:	75 43                	jne    87e44c0 <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0x60>
 87e447d:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87e4480:	83 c7 20             	add    $0x20,%edi
 87e4483:	c7 45 e0 fc cc 48 09 	movl   $0x948ccfc,-0x20(%ebp)
 87e448a:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e448e:	89 3c 24             	mov    %edi,(%esp)
 87e4491:	e8 ca c7 ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4496:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e4499:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e449d:	89 04 24             	mov    %eax,(%esp)
 87e44a0:	e8 7b a2 89 ff       	call   807e720 <fputs@plt>
 87e44a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e44a8:	83 e8 0c             	sub    $0xc,%eax
 87e44ab:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e44b0:	0f 85 95 00 00 00    	jne    87e454b <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0xeb>
 87e44b6:	83 c4 2c             	add    $0x2c,%esp
 87e44b9:	5b                   	pop    %ebx
 87e44ba:	5e                   	pop    %esi
 87e44bb:	5f                   	pop    %edi
 87e44bc:	5d                   	pop    %ebp
 87e44bd:	c3                   	ret
 87e44be:	66 90                	xchg   %ax,%ax
 87e44c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e44c4:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 87e44cb:	e8 f0 9f 89 ff       	call   807e4c0 <fputc@plt>
 87e44d0:	8b 75 10             	mov    0x10(%ebp),%esi
 87e44d3:	85 f6                	test   %esi,%esi
 87e44d5:	7e 31                	jle    87e4508 <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0xa8>
 87e44d7:	31 f6                	xor    %esi,%esi
 87e44d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e44e0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 87e44e4:	83 c6 01             	add    $0x1,%esi
 87e44e7:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 87e44ee:	00 
 87e44ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e44f6:	00 
 87e44f7:	c7 04 24 71 0e de 08 	movl   $0x8de0e71,(%esp)
 87e44fe:	e8 1d 9e 89 ff       	call   807e320 <fwrite@plt>
 87e4503:	39 75 10             	cmp    %esi,0x10(%ebp)
 87e4506:	7f d8                	jg     87e44e0 <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0x80>
 87e4508:	8b 47 20             	mov    0x20(%edi),%eax
 87e450b:	89 1c 24             	mov    %ebx,(%esp)
 87e450e:	c7 44 24 04 40 0f de 	movl   $0x8de0f40,0x4(%esp)
 87e4515:	08 
 87e4516:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e451a:	e8 71 95 89 ff       	call   807da90 <fprintf@plt>
 87e451f:	83 c4 2c             	add    $0x2c,%esp
 87e4522:	5b                   	pop    %ebx
 87e4523:	5e                   	pop    %esi
 87e4524:	5f                   	pop    %edi
 87e4525:	5d                   	pop    %ebp
 87e4526:	c3                   	ret
 87e4527:	c7 44 24 0c e0 14 de 	movl   $0x8de14e0,0xc(%esp)
 87e452e:	08 
 87e452f:	c7 44 24 08 36 05 00 	movl   $0x536,0x8(%esp)
 87e4536:	00 
 87e4537:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e453e:	08 
 87e453f:	c7 04 24 7b 0e de 08 	movl   $0x8de0e7b,(%esp)
 87e4546:	e8 05 97 89 ff       	call   807dc50 <__assert_fail@plt>
 87e454b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e4550:	85 d2                	test   %edx,%edx
 87e4552:	74 36                	je     87e458a <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0x12a>
 87e4554:	83 ca ff             	or     $0xffffffff,%edx
 87e4557:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e455c:	85 d2                	test   %edx,%edx
 87e455e:	0f 8f 52 ff ff ff    	jg     87e44b6 <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0x56>
 87e4564:	8d 55 e7             	lea    -0x19(%ebp),%edx
 87e4567:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e456b:	89 04 24             	mov    %eax,(%esp)
 87e456e:	e8 ad 23 f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e4573:	e9 3e ff ff ff       	jmp    87e44b6 <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0x56>
 87e4578:	89 c3                	mov    %eax,%ebx
 87e457a:	89 34 24             	mov    %esi,(%esp)
 87e457d:	e8 5e 36 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e4582:	89 1c 24             	mov    %ebx,(%esp)
 87e4585:	e8 c6 f1 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e458a:	8b 50 08             	mov    0x8(%eax),%edx
 87e458d:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e4590:	89 48 08             	mov    %ecx,0x8(%eax)
 87e4593:	eb c7                	jmp    87e455c <_ZNK9TiXmlText5PrintEP8_IO_FILEi+0xfc>
 87e4595:	90                   	nop
 87e4596:	8d 76 00             	lea    0x0(%esi),%esi
 87e4599:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlText::Print @ 0x87e4460

/* WARNING: Removing unreachable block (ram,0x087e458a) */
/* TiXmlText::Print(_IO_FILE*, int) const */

void __thiscall TiXmlText::Print(TiXmlText *this,_IO_FILE *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *local_24 [5];
  
  if (param_1 == (_IO_FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cfile","tinyxml.cpp",0x536,"virtual void TiXmlText::Print(FILE*, int) const");
  }
  if (this[0x2c] != (TiXmlText)0x0) {
    fputc(10,param_1);
    if (0 < param_2) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        fwrite(&DAT_08de0e71,1,4,param_1);
      } while (iVar2 < param_2);
    }
    fprintf(param_1,"<![CDATA[%s]]>\n",*(undefined4 *)(this + 0x20));
    return;
  }
  local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4491 to 087e44a4 has its CatchHandler @ 087e4578 */
  TiXmlBase::EncodeString((string *)(this + 0x20),(string *)local_24);
  fputs(local_24[0],param_1);
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

## StreamIn

```asm
// === 087e8b40 TiXmlText::StreamIn  [0x087e8b40-0x87e8ccf] ===
 87e8b40:	55                   	push   %ebp
 87e8b41:	89 e5                	mov    %esp,%ebp
 87e8b43:	57                   	push   %edi
 87e8b44:	56                   	push   %esi
 87e8b45:	53                   	push   %ebx
 87e8b46:	83 ec 4c             	sub    $0x4c,%esp
 87e8b49:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e8b4c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e8b4f:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87e8b52:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e8b58:	8b 03                	mov    (%ebx),%eax
 87e8b5a:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e8b5d:	8b 74 03 14          	mov    0x14(%ebx,%eax,1),%esi
 87e8b61:	85 f6                	test   %esi,%esi
 87e8b63:	0f 85 ef 00 00 00    	jne    87e8c58 <_ZN9TiXmlText8StreamInEPSiPSs+0x118>
 87e8b69:	89 1c 24             	mov    %ebx,(%esp)
 87e8b6c:	e8 9f d3 ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e8b71:	89 c6                	mov    %eax,%esi
 87e8b73:	8b 45 08             	mov    0x8(%ebp),%eax
 87e8b76:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e8b7a:	75 09                	jne    87e8b85 <_ZN9TiXmlText8StreamInEPSiPSs+0x45>
 87e8b7c:	83 fe 3c             	cmp    $0x3c,%esi
 87e8b7f:	0f 84 d3 00 00 00    	je     87e8c58 <_ZN9TiXmlText8StreamInEPSiPSs+0x118>
 87e8b85:	85 f6                	test   %esi,%esi
 87e8b87:	0f 8e d3 00 00 00    	jle    87e8c60 <_ZN9TiXmlText8StreamInEPSiPSs+0x120>
 87e8b8d:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e8b90:	8b 01                	mov    (%ecx),%eax
 87e8b92:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e8b95:	8d 78 f4             	lea    -0xc(%eax),%edi
 87e8b98:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 87e8b9b:	8d 4a 01             	lea    0x1(%edx),%ecx
 87e8b9e:	3b 4f 04             	cmp    0x4(%edi),%ecx
 87e8ba1:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87e8ba4:	77 07                	ja     87e8bad <_ZN9TiXmlText8StreamInEPSiPSs+0x6d>
 87e8ba6:	8b 4f 08             	mov    0x8(%edi),%ecx
 87e8ba9:	85 c9                	test   %ecx,%ecx
 87e8bab:	7e 1a                	jle    87e8bc7 <_ZN9TiXmlText8StreamInEPSiPSs+0x87>
 87e8bad:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87e8bb0:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e8bb3:	89 04 24             	mov    %eax,(%esp)
 87e8bb6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e8bba:	e8 51 f1 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e8bbf:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87e8bc2:	8b 02                	mov    (%edx),%eax
 87e8bc4:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e8bc7:	89 f1                	mov    %esi,%ecx
 87e8bc9:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 87e8bcc:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e8bcf:	8b 17                	mov    (%edi),%edx
 87e8bd1:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e8bd4:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e8bd9:	0f 85 da 00 00 00    	jne    87e8cb9 <_ZN9TiXmlText8StreamInEPSiPSs+0x179>
 87e8bdf:	89 1c 24             	mov    %ebx,(%esp)
 87e8be2:	e8 09 d1 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e8be7:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e8bea:	80 7f 2c 00          	cmpb   $0x0,0x2c(%edi)
 87e8bee:	0f 84 64 ff ff ff    	je     87e8b58 <_ZN9TiXmlText8StreamInEPSiPSs+0x18>
 87e8bf4:	83 fe 3e             	cmp    $0x3e,%esi
 87e8bf7:	0f 85 5b ff ff ff    	jne    87e8b58 <_ZN9TiXmlText8StreamInEPSiPSs+0x18>
 87e8bfd:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87e8c00:	8b 02                	mov    (%edx),%eax
 87e8c02:	8b 70 f4             	mov    -0xc(%eax),%esi
 87e8c05:	8d 50 f4             	lea    -0xc(%eax),%edx
 87e8c08:	83 fe 02             	cmp    $0x2,%esi
 87e8c0b:	0f 86 47 ff ff ff    	jbe    87e8b58 <_ZN9TiXmlText8StreamInEPSiPSs+0x18>
 87e8c11:	8b 52 08             	mov    0x8(%edx),%edx
 87e8c14:	85 d2                	test   %edx,%edx
 87e8c16:	78 10                	js     87e8c28 <_ZN9TiXmlText8StreamInEPSiPSs+0xe8>
 87e8c18:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e8c1b:	89 0c 24             	mov    %ecx,(%esp)
 87e8c1e:	e8 dd 01 f2 ff       	call   8708e00 <_ZNSs12_M_leak_hardEv>
 87e8c23:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e8c26:	8b 07                	mov    (%edi),%eax
 87e8c28:	80 7c 30 fe 5d       	cmpb   $0x5d,-0x2(%eax,%esi,1)
 87e8c2d:	0f 85 25 ff ff ff    	jne    87e8b58 <_ZN9TiXmlText8StreamInEPSiPSs+0x18>
 87e8c33:	8b 78 fc             	mov    -0x4(%eax),%edi
 87e8c36:	85 ff                	test   %edi,%edi
 87e8c38:	78 10                	js     87e8c4a <_ZN9TiXmlText8StreamInEPSiPSs+0x10a>
 87e8c3a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87e8c3d:	89 04 24             	mov    %eax,(%esp)
 87e8c40:	e8 bb 01 f2 ff       	call   8708e00 <_ZNSs12_M_leak_hardEv>
 87e8c45:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87e8c48:	8b 02                	mov    (%edx),%eax
 87e8c4a:	80 7c 30 fd 5d       	cmpb   $0x5d,-0x3(%eax,%esi,1)
 87e8c4f:	0f 85 03 ff ff ff    	jne    87e8b58 <_ZN9TiXmlText8StreamInEPSiPSs+0x18>
 87e8c55:	8d 76 00             	lea    0x0(%esi),%esi
 87e8c58:	83 c4 4c             	add    $0x4c,%esp
 87e8c5b:	5b                   	pop    %ebx
 87e8c5c:	5e                   	pop    %esi
 87e8c5d:	5f                   	pop    %edi
 87e8c5e:	5d                   	pop    %ebp
 87e8c5f:	c3                   	ret
 87e8c60:	8b 55 08             	mov    0x8(%ebp),%edx
 87e8c63:	89 14 24             	mov    %edx,(%esp)
 87e8c66:	e8 65 72 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e8c6b:	85 c0                	test   %eax,%eax
 87e8c6d:	89 c3                	mov    %eax,%ebx
 87e8c6f:	74 e7                	je     87e8c58 <_ZN9TiXmlText8StreamInEPSiPSs+0x118>
 87e8c71:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e8c75:	75 e1                	jne    87e8c58 <_ZN9TiXmlText8StreamInEPSiPSs+0x118>
 87e8c77:	8b 35 f4 37 3f 09    	mov    0x93f37f4,%esi
 87e8c7d:	c6 40 2c 01          	movb   $0x1,0x2c(%eax)
 87e8c81:	c7 40 30 0d 00 00 00 	movl   $0xd,0x30(%eax)
 87e8c88:	89 34 24             	mov    %esi,(%esp)
 87e8c8b:	e8 20 57 89 ff       	call   807e3b0 <strlen@plt>
 87e8c90:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e8c94:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8c98:	8d 43 34             	lea    0x34(%ebx),%eax
 87e8c9b:	89 04 24             	mov    %eax,(%esp)
 87e8c9e:	e8 fd f8 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e8ca3:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e8caa:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e8cb1:	83 c4 4c             	add    $0x4c,%esp
 87e8cb4:	5b                   	pop    %ebx
 87e8cb5:	5e                   	pop    %esi
 87e8cb6:	5f                   	pop    %edi
 87e8cb7:	5d                   	pop    %ebp
 87e8cb8:	c3                   	ret
 87e8cb9:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87e8cbc:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e8cc3:	89 4a f4             	mov    %ecx,-0xc(%edx)
 87e8cc6:	c6 44 08 0c 00       	movb   $0x0,0xc(%eax,%ecx,1)
 87e8ccb:	e9 0f ff ff ff       	jmp    87e8bdf <_ZN9TiXmlText8StreamInEPSiPSs+0x9f>

```

```c
// TiXmlText::StreamIn @ 0x87e8b40

/* TiXmlText::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlText::StreamIn(TiXmlText *this,istream *param_1,string *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 __s;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return;
    }
    iVar3 = std::istream::peek(param_1);
    if ((this[0x2c] == (TiXmlText)0x0) && (iVar3 == 0x3c)) {
      return;
    }
    if (iVar3 < 1) break;
    iVar4 = *(int *)param_2;
    iVar6 = *(int *)(iVar4 + -0xc);
    uVar1 = iVar6 + 1;
    if ((*(uint *)(iVar4 + -8) < uVar1) || (0 < *(int *)(iVar4 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar4 = *(int *)param_2;
      iVar6 = *(int *)(iVar4 + -0xc);
    }
    *(char *)(iVar4 + iVar6) = (char)iVar3;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
    std::istream::get(param_1);
    if ((this[0x2c] != (TiXmlText)0x0) && (iVar3 == 0x3e)) {
      iVar3 = *(int *)param_2;
      uVar1 = *(uint *)(iVar3 + -0xc);
      if (2 < uVar1) {
        if (-1 < *(int *)(iVar3 + -4)) {
          std::string::_M_leak_hard(param_2);
          iVar3 = *(int *)param_2;
        }
        if (*(char *)(iVar3 + -2 + uVar1) == ']') {
          if (-1 < *(int *)(iVar3 + -4)) {
            std::string::_M_leak_hard(param_2);
            iVar3 = *(int *)param_2;
          }
          if (*(char *)(iVar3 + -3 + uVar1) == ']') {
            return;
          }
        }
      }
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
  sVar5 = strlen((char *)__s);
  std::string::assign((string *)(iVar3 + 0x34),(char *)__s,sVar5);
  *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
  return;
}

```

---

## TiXmlText

```asm
// === 087e6bd0 TiXmlText::TiXmlText  [0x087e6bd0-0x87e6c2f] ===
 87e6bd0:	55                   	push   %ebp
 87e6bd1:	89 e5                	mov    %esp,%ebp
 87e6bd3:	53                   	push   %ebx
 87e6bd4:	89 c3                	mov    %eax,%ebx
 87e6bd6:	83 ec 24             	sub    $0x24,%esp
 87e6bd9:	89 04 24             	mov    %eax,(%esp)
 87e6bdc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 87e6be3:	00 
 87e6be4:	e8 a7 91 ff ff       	call   87dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>
 87e6be9:	8d 43 20             	lea    0x20(%ebx),%eax
 87e6bec:	c7 03 68 11 de 08    	movl   $0x8de1168,(%ebx)
 87e6bf2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6bf9:	00 
 87e6bfa:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e6c01:	08 
 87e6c02:	89 04 24             	mov    %eax,(%esp)
 87e6c05:	e8 96 19 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e6c0a:	c6 43 2c 00          	movb   $0x0,0x2c(%ebx)
 87e6c0e:	83 c4 24             	add    $0x24,%esp
 87e6c11:	5b                   	pop    %ebx
 87e6c12:	5d                   	pop    %ebp
 87e6c13:	c3                   	ret
 87e6c14:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e6c17:	89 1c 24             	mov    %ebx,(%esp)
 87e6c1a:	e8 51 bf ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e6c1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e6c22:	89 04 24             	mov    %eax,(%esp)
 87e6c25:	e8 26 cb 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e6c2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlText::TiXmlText @ 0x87e6bd0

/* TiXmlText::TiXmlText(char const*) [clone .clone.0] */

void __thiscall TiXmlText::TiXmlText(TiXmlText *this,char *param_1)

{
  undefined4 *in_EAX;
  
  TiXmlNode::TiXmlNode();
  *in_EAX = &PTR__TiXmlText_08de1168;
                    /* try { // try from 087e6c05 to 087e6c09 has its CatchHandler @ 087e6c14 */
  std::string::assign((string *)(in_EAX + 8),"",0);
  *(undefined1 *)(in_EAX + 0xb) = 0;
  return;
}

```

