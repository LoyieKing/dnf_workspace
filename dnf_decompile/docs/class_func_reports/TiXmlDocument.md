# TiXmlDocument

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## Accept

```asm
// === 087dffc0 TiXmlDocument::Accept  [0x087dffc0-0x87e001f] ===
 87dffc0:	55                   	push   %ebp
 87dffc1:	89 e5                	mov    %esp,%ebp
 87dffc3:	57                   	push   %edi
 87dffc4:	56                   	push   %esi
 87dffc5:	53                   	push   %ebx
 87dffc6:	83 ec 1c             	sub    $0x1c,%esp
 87dffc9:	8b 75 0c             	mov    0xc(%ebp),%esi
 87dffcc:	8b 7d 08             	mov    0x8(%ebp),%edi
 87dffcf:	8b 06                	mov    (%esi),%eax
 87dffd1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87dffd5:	89 34 24             	mov    %esi,(%esp)
 87dffd8:	ff 50 08             	call   *0x8(%eax)
 87dffdb:	84 c0                	test   %al,%al
 87dffdd:	74 20                	je     87dffff <_ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor+0x3f>
 87dffdf:	8b 5f 18             	mov    0x18(%edi),%ebx
 87dffe2:	85 db                	test   %ebx,%ebx
 87dffe4:	75 09                	jne    87dffef <_ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor+0x2f>
 87dffe6:	eb 17                	jmp    87dffff <_ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor+0x3f>
 87dffe8:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87dffeb:	85 db                	test   %ebx,%ebx
 87dffed:	74 10                	je     87dffff <_ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor+0x3f>
 87dffef:	8b 03                	mov    (%ebx),%eax
 87dfff1:	89 74 24 04          	mov    %esi,0x4(%esp)
 87dfff5:	89 1c 24             	mov    %ebx,(%esp)
 87dfff8:	ff 50 44             	call   *0x44(%eax)
 87dfffb:	84 c0                	test   %al,%al
 87dfffd:	75 e9                	jne    87dffe8 <_ZNK13TiXmlDocument6AcceptEP12TiXmlVisitor+0x28>
 87dffff:	8b 06                	mov    (%esi),%eax
 87e0001:	89 7d 0c             	mov    %edi,0xc(%ebp)
 87e0004:	89 75 08             	mov    %esi,0x8(%ebp)
 87e0007:	8b 40 0c             	mov    0xc(%eax),%eax
 87e000a:	83 c4 1c             	add    $0x1c,%esp
 87e000d:	5b                   	pop    %ebx
 87e000e:	5e                   	pop    %esi
 87e000f:	5f                   	pop    %edi
 87e0010:	5d                   	pop    %ebp
 87e0011:	ff e0                	jmp    *%eax
 87e0013:	90                   	nop
 87e0014:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e001a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlDocument::Accept @ 0x87dffc0

/* TiXmlDocument::Accept(TiXmlVisitor*) const */

void __thiscall TiXmlDocument::Accept(TiXmlDocument *this,TiXmlVisitor *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(int *)param_1 + 8))(param_1,this);
  if (cVar2 != '\0') {
    piVar1 = *(int **)(this + 0x18);
    while ((piVar1 != (int *)0x0 &&
           (cVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1), cVar2 != '\0'))) {
      piVar1 = (int *)piVar1[10];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x087e0011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1 + 0xc))();
  return;
}

```

---

## Clone

```asm
// === 087e2ec0 TiXmlDocument::Clone  [0x087e2ec0-0x87e2f9f] ===
 87e2ec0:	55                   	push   %ebp
 87e2ec1:	89 e5                	mov    %esp,%ebp
 87e2ec3:	57                   	push   %edi
 87e2ec4:	56                   	push   %esi
 87e2ec5:	53                   	push   %ebx
 87e2ec6:	83 ec 2c             	sub    $0x2c,%esp
 87e2ec9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e2ecc:	c7 04 24 48 00 00 00 	movl   $0x48,(%esp)
 87e2ed3:	e8 78 15 f4 ff       	call   8724450 <_Znwj>
 87e2ed8:	89 c3                	mov    %eax,%ebx
 87e2eda:	89 04 24             	mov    %eax,(%esp)
 87e2edd:	e8 0e ff ff ff       	call   87e2df0 <_ZN13TiXmlDocumentC1Ev>
 87e2ee2:	31 ff                	xor    %edi,%edi
 87e2ee4:	85 db                	test   %ebx,%ebx
 87e2ee6:	0f 84 97 00 00 00    	je     87e2f83 <_ZNK13TiXmlDocument5CloneEv+0xc3>
 87e2eec:	8b 56 20             	mov    0x20(%esi),%edx
 87e2eef:	89 df                	mov    %ebx,%edi
 87e2ef1:	89 14 24             	mov    %edx,(%esp)
 87e2ef4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e2ef7:	e8 b4 b4 89 ff       	call   807e3b0 <strlen@plt>
 87e2efc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e2eff:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e2f03:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2f07:	8d 43 20             	lea    0x20(%ebx),%eax
 87e2f0a:	89 04 24             	mov    %eax,(%esp)
 87e2f0d:	e8 8e 56 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2f12:	8b 46 0c             	mov    0xc(%esi),%eax
 87e2f15:	8b 56 08             	mov    0x8(%esi),%edx
 87e2f18:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e2f1b:	8b 46 04             	mov    0x4(%esi),%eax
 87e2f1e:	89 53 08             	mov    %edx,0x8(%ebx)
 87e2f21:	89 43 04             	mov    %eax,0x4(%ebx)
 87e2f24:	0f b6 46 2c          	movzbl 0x2c(%esi),%eax
 87e2f28:	88 43 2c             	mov    %al,0x2c(%ebx)
 87e2f2b:	8b 46 30             	mov    0x30(%esi),%eax
 87e2f2e:	89 43 30             	mov    %eax,0x30(%ebx)
 87e2f31:	8d 46 34             	lea    0x34(%esi),%eax
 87e2f34:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2f38:	8d 43 34             	lea    0x34(%ebx),%eax
 87e2f3b:	89 04 24             	mov    %eax,(%esp)
 87e2f3e:	e8 ed 4c f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e2f43:	8b 46 38             	mov    0x38(%esi),%eax
 87e2f46:	8b 56 40             	mov    0x40(%esi),%edx
 87e2f49:	89 43 38             	mov    %eax,0x38(%ebx)
 87e2f4c:	8b 46 3c             	mov    0x3c(%esi),%eax
 87e2f4f:	89 53 40             	mov    %edx,0x40(%ebx)
 87e2f52:	89 43 3c             	mov    %eax,0x3c(%ebx)
 87e2f55:	0f b6 46 44          	movzbl 0x44(%esi),%eax
 87e2f59:	8b 76 18             	mov    0x18(%esi),%esi
 87e2f5c:	88 43 44             	mov    %al,0x44(%ebx)
 87e2f5f:	85 f6                	test   %esi,%esi
 87e2f61:	74 20                	je     87e2f83 <_ZNK13TiXmlDocument5CloneEv+0xc3>
 87e2f63:	90                   	nop
 87e2f64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e2f68:	8b 06                	mov    (%esi),%eax
 87e2f6a:	89 34 24             	mov    %esi,(%esp)
 87e2f6d:	ff 50 40             	call   *0x40(%eax)
 87e2f70:	89 1c 24             	mov    %ebx,(%esp)
 87e2f73:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2f77:	e8 d4 f1 ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e2f7c:	8b 76 28             	mov    0x28(%esi),%esi
 87e2f7f:	85 f6                	test   %esi,%esi
 87e2f81:	75 e5                	jne    87e2f68 <_ZNK13TiXmlDocument5CloneEv+0xa8>
 87e2f83:	83 c4 2c             	add    $0x2c,%esp
 87e2f86:	89 f8                	mov    %edi,%eax
 87e2f88:	5b                   	pop    %ebx
 87e2f89:	5e                   	pop    %esi
 87e2f8a:	5f                   	pop    %edi
 87e2f8b:	5d                   	pop    %ebp
 87e2f8c:	c3                   	ret
 87e2f8d:	89 c6                	mov    %eax,%esi
 87e2f8f:	89 1c 24             	mov    %ebx,(%esp)
 87e2f92:	e8 59 15 f4 ff       	call   87244f0 <_ZdlPv>
 87e2f97:	89 34 24             	mov    %esi,(%esp)
 87e2f9a:	e8 b1 07 30 00       	call   8ae3750 <_Unwind_Resume>
 87e2f9f:	90                   	nop

```

```c
// TiXmlDocument::Clone @ 0x87e2ec0

/* TiXmlDocument::Clone() const */

TiXmlDocument * __thiscall TiXmlDocument::Clone(TiXmlDocument *this)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  TiXmlDocument *this_00;
  size_t sVar4;
  TiXmlNode *pTVar5;
  TiXmlDocument *pTVar6;
  
  this_00 = operator_new(0x48);
                    /* try { // try from 087e2edd to 087e2ee1 has its CatchHandler @ 087e2f8d */
  TiXmlDocument(this_00);
  pTVar6 = (TiXmlDocument *)0x0;
  if (this_00 != (TiXmlDocument *)0x0) {
    __s = *(char **)(this + 0x20);
    sVar4 = strlen(__s);
    std::string::assign((string *)(this_00 + 0x20),__s,sVar4);
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
    uVar2 = *(undefined4 *)(this + 4);
    *(undefined4 *)(this_00 + 8) = uVar1;
    *(undefined4 *)(this_00 + 4) = uVar2;
    this_00[0x2c] = this[0x2c];
    *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this + 0x30);
    std::string::assign((string *)(this_00 + 0x34),(string *)(this + 0x34));
    uVar1 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(this + 0x38);
    uVar2 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this_00 + 0x40) = uVar1;
    *(undefined4 *)(this_00 + 0x3c) = uVar2;
    piVar3 = *(int **)(this + 0x18);
    this_00[0x44] = this[0x44];
    for (; pTVar6 = this_00, piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
      pTVar5 = (TiXmlNode *)(**(code **)(*piVar3 + 0x40))(piVar3);
      TiXmlNode::LinkEndChild((TiXmlNode *)this_00,pTVar5);
    }
  }
  return pTVar6;
}

```

---

## CopyTo

```asm
// === 087e22d0 TiXmlDocument::CopyTo  [0x087e22d0-0x87e237f] ===
 87e22d0:	55                   	push   %ebp
 87e22d1:	89 e5                	mov    %esp,%ebp
 87e22d3:	57                   	push   %edi
 87e22d4:	56                   	push   %esi
 87e22d5:	53                   	push   %ebx
 87e22d6:	83 ec 1c             	sub    $0x1c,%esp
 87e22d9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e22dc:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e22df:	8b 7b 20             	mov    0x20(%ebx),%edi
 87e22e2:	89 3c 24             	mov    %edi,(%esp)
 87e22e5:	e8 c6 c0 89 ff       	call   807e3b0 <strlen@plt>
 87e22ea:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e22ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e22f2:	8d 46 20             	lea    0x20(%esi),%eax
 87e22f5:	89 04 24             	mov    %eax,(%esp)
 87e22f8:	e8 a3 62 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e22fd:	8b 43 0c             	mov    0xc(%ebx),%eax
 87e2300:	8b 53 08             	mov    0x8(%ebx),%edx
 87e2303:	89 46 0c             	mov    %eax,0xc(%esi)
 87e2306:	8b 43 04             	mov    0x4(%ebx),%eax
 87e2309:	89 56 08             	mov    %edx,0x8(%esi)
 87e230c:	89 46 04             	mov    %eax,0x4(%esi)
 87e230f:	0f b6 43 2c          	movzbl 0x2c(%ebx),%eax
 87e2313:	88 46 2c             	mov    %al,0x2c(%esi)
 87e2316:	8b 43 30             	mov    0x30(%ebx),%eax
 87e2319:	89 46 30             	mov    %eax,0x30(%esi)
 87e231c:	8d 43 34             	lea    0x34(%ebx),%eax
 87e231f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2323:	8d 46 34             	lea    0x34(%esi),%eax
 87e2326:	89 04 24             	mov    %eax,(%esp)
 87e2329:	e8 02 59 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e232e:	8b 43 38             	mov    0x38(%ebx),%eax
 87e2331:	8b 53 40             	mov    0x40(%ebx),%edx
 87e2334:	89 46 38             	mov    %eax,0x38(%esi)
 87e2337:	8b 43 3c             	mov    0x3c(%ebx),%eax
 87e233a:	89 56 40             	mov    %edx,0x40(%esi)
 87e233d:	89 46 3c             	mov    %eax,0x3c(%esi)
 87e2340:	0f b6 43 44          	movzbl 0x44(%ebx),%eax
 87e2344:	8b 5b 18             	mov    0x18(%ebx),%ebx
 87e2347:	88 46 44             	mov    %al,0x44(%esi)
 87e234a:	85 db                	test   %ebx,%ebx
 87e234c:	74 1d                	je     87e236b <_ZNK13TiXmlDocument6CopyToEPS_+0x9b>
 87e234e:	66 90                	xchg   %ax,%ax
 87e2350:	8b 03                	mov    (%ebx),%eax
 87e2352:	89 1c 24             	mov    %ebx,(%esp)
 87e2355:	ff 50 40             	call   *0x40(%eax)
 87e2358:	89 34 24             	mov    %esi,(%esp)
 87e235b:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e235f:	e8 ec fd ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e2364:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e2367:	85 db                	test   %ebx,%ebx
 87e2369:	75 e5                	jne    87e2350 <_ZNK13TiXmlDocument6CopyToEPS_+0x80>
 87e236b:	83 c4 1c             	add    $0x1c,%esp
 87e236e:	5b                   	pop    %ebx
 87e236f:	5e                   	pop    %esi
 87e2370:	5f                   	pop    %edi
 87e2371:	5d                   	pop    %ebp
 87e2372:	c3                   	ret
 87e2373:	90                   	nop
 87e2374:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e237a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlDocument::CopyTo @ 0x87e22d0

/* TiXmlDocument::CopyTo(TiXmlDocument*) const */

void __thiscall TiXmlDocument::CopyTo(TiXmlDocument *this,TiXmlDocument *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  size_t sVar4;
  TiXmlNode *pTVar5;
  
  __s = *(char **)(this + 0x20);
  sVar4 = strlen(__s);
  std::string::assign((string *)(param_1 + 0x20),__s,sVar4);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  param_1[0x2c] = this[0x2c];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 0x30);
  std::string::assign((string *)(param_1 + 0x34),(string *)(this + 0x34));
  uVar1 = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x38);
  uVar2 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  piVar3 = *(int **)(this + 0x18);
  param_1[0x44] = this[0x44];
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
    pTVar5 = (TiXmlNode *)(**(code **)(*piVar3 + 0x40))(piVar3);
    TiXmlNode::LinkEndChild((TiXmlNode *)param_1,pTVar5);
  }
  return;
}

```

---

## LoadFile

```asm
// === 087e16c0 TiXmlDocument::LoadFile  [0x087e16c0-0x87e191f] ===
 87e16c0:	55                   	push   %ebp
 87e16c1:	89 e5                	mov    %esp,%ebp
 87e16c3:	57                   	push   %edi
 87e16c4:	56                   	push   %esi
 87e16c5:	53                   	push   %ebx
 87e16c6:	83 ec 3c             	sub    $0x3c,%esp
 87e16c9:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e16cc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e16cf:	85 f6                	test   %esi,%esi
 87e16d1:	0f 84 b7 00 00 00    	je     87e178e <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0xce>
 87e16d7:	8b 43 18             	mov    0x18(%ebx),%eax
 87e16da:	85 c0                	test   %eax,%eax
 87e16dc:	75 04                	jne    87e16e2 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x22>
 87e16de:	eb 11                	jmp    87e16f1 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x31>
 87e16e0:	89 f8                	mov    %edi,%eax
 87e16e2:	8b 78 28             	mov    0x28(%eax),%edi
 87e16e5:	8b 10                	mov    (%eax),%edx
 87e16e7:	89 04 24             	mov    %eax,(%esp)
 87e16ea:	ff 52 04             	call   *0x4(%edx)
 87e16ed:	85 ff                	test   %edi,%edi
 87e16ef:	75 ef                	jne    87e16e0 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x20>
 87e16f1:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e16f8:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e16ff:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e1706:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e170d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e1714:	00 
 87e1715:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87e171c:	00 
 87e171d:	89 34 24             	mov    %esi,(%esp)
 87e1720:	e8 8b c9 89 ff       	call   807e0b0 <fseek@plt>
 87e1725:	89 34 24             	mov    %esi,(%esp)
 87e1728:	e8 a3 c2 89 ff       	call   807d9d0 <ftell@plt>
 87e172d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e1734:	00 
 87e1735:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87e173c:	00 
 87e173d:	89 34 24             	mov    %esi,(%esp)
 87e1740:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e1743:	e8 68 c9 89 ff       	call   807e0b0 <fseek@plt>
 87e1748:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 87e174b:	85 c9                	test   %ecx,%ecx
 87e174d:	0f 8e 05 01 00 00    	jle    87e1858 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x198>
 87e1753:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e1756:	83 c0 01             	add    $0x1,%eax
 87e1759:	89 04 24             	mov    %eax,(%esp)
 87e175c:	e8 5f 16 f4 ff       	call   8722dc0 <_Znaj>
 87e1761:	c6 00 00             	movb   $0x0,(%eax)
 87e1764:	89 c7                	mov    %eax,%edi
 87e1766:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e1769:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e176d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e1774:	00 
 87e1775:	89 3c 24             	mov    %edi,(%esp)
 87e1778:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e177c:	e8 cf c5 89 ff       	call   807dd50 <fread@plt>
 87e1781:	83 f8 01             	cmp    $0x1,%eax
 87e1784:	74 3a                	je     87e17c0 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x100>
 87e1786:	89 3c 24             	mov    %edi,(%esp)
 87e1789:	e8 22 34 f4 ff       	call   8724bb0 <_ZdaPv>
 87e178e:	89 1c 24             	mov    %ebx,(%esp)
 87e1791:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e1798:	00 
 87e1799:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e17a0:	00 
 87e17a1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e17a8:	00 
 87e17a9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 87e17b0:	00 
 87e17b1:	e8 7a 55 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e17b6:	83 c4 3c             	add    $0x3c,%esp
 87e17b9:	31 c0                	xor    %eax,%eax
 87e17bb:	5b                   	pop    %ebx
 87e17bc:	5e                   	pop    %esi
 87e17bd:	5f                   	pop    %edi
 87e17be:	5d                   	pop    %ebp
 87e17bf:	c3                   	ret
 87e17c0:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 87e17c3:	89 fa                	mov    %edi,%edx
 87e17c5:	89 f8                	mov    %edi,%eax
 87e17c7:	8d 34 37             	lea    (%edi,%esi,1),%esi
 87e17ca:	c6 06 00             	movb   $0x0,(%esi)
 87e17cd:	0f b6 0f             	movzbl (%edi),%ecx
 87e17d0:	eb 11                	jmp    87e17e3 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x123>
 87e17d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e17d8:	88 0a                	mov    %cl,(%edx)
 87e17da:	83 c0 01             	add    $0x1,%eax
 87e17dd:	0f b6 08             	movzbl (%eax),%ecx
 87e17e0:	83 c2 01             	add    $0x1,%edx
 87e17e3:	84 c9                	test   %cl,%cl
 87e17e5:	74 31                	je     87e1818 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x158>
 87e17e7:	39 f0                	cmp    %esi,%eax
 87e17e9:	0f 83 bf 00 00 00    	jae    87e18ae <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x1ee>
 87e17ef:	39 d6                	cmp    %edx,%esi
 87e17f1:	0f 82 db 00 00 00    	jb     87e18d2 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x212>
 87e17f7:	39 d0                	cmp    %edx,%eax
 87e17f9:	0f 82 8b 00 00 00    	jb     87e188a <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x1ca>
 87e17ff:	80 f9 0d             	cmp    $0xd,%cl
 87e1802:	75 d4                	jne    87e17d8 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x118>
 87e1804:	83 c0 01             	add    $0x1,%eax
 87e1807:	c6 02 0a             	movb   $0xa,(%edx)
 87e180a:	0f b6 08             	movzbl (%eax),%ecx
 87e180d:	80 f9 0a             	cmp    $0xa,%cl
 87e1810:	75 ce                	jne    87e17e0 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x120>
 87e1812:	eb c6                	jmp    87e17da <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x11a>
 87e1814:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1818:	39 d6                	cmp    %edx,%esi
 87e181a:	0f 82 d6 00 00 00    	jb     87e18f6 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding+0x236>
 87e1820:	c6 02 00             	movb   $0x0,(%edx)
 87e1823:	8b 03                	mov    (%ebx),%eax
 87e1825:	8b 55 10             	mov    0x10(%ebp),%edx
 87e1828:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e182c:	89 1c 24             	mov    %ebx,(%esp)
 87e182f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e1836:	00 
 87e1837:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e183b:	ff 50 0c             	call   *0xc(%eax)
 87e183e:	89 3c 24             	mov    %edi,(%esp)
 87e1841:	e8 6a 33 f4 ff       	call   8724bb0 <_ZdaPv>
 87e1846:	0f b6 43 2c          	movzbl 0x2c(%ebx),%eax
 87e184a:	83 c4 3c             	add    $0x3c,%esp
 87e184d:	5b                   	pop    %ebx
 87e184e:	5e                   	pop    %esi
 87e184f:	5f                   	pop    %edi
 87e1850:	83 f0 01             	xor    $0x1,%eax
 87e1853:	5d                   	pop    %ebp
 87e1854:	c3                   	ret
 87e1855:	8d 76 00             	lea    0x0(%esi),%esi
 87e1858:	89 1c 24             	mov    %ebx,(%esp)
 87e185b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e1862:	00 
 87e1863:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e186a:	00 
 87e186b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e1872:	00 
 87e1873:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 87e187a:	00 
 87e187b:	e8 b0 54 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e1880:	83 c4 3c             	add    $0x3c,%esp
 87e1883:	31 c0                	xor    %eax,%eax
 87e1885:	5b                   	pop    %ebx
 87e1886:	5e                   	pop    %esi
 87e1887:	5f                   	pop    %edi
 87e1888:	5d                   	pop    %ebp
 87e1889:	c3                   	ret
 87e188a:	c7 44 24 0c a0 15 de 	movl   $0x8de15a0,0xc(%esp)
 87e1891:	08 
 87e1892:	c7 44 24 08 25 04 00 	movl   $0x425,0x8(%esp)
 87e1899:	00 
 87e189a:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e18a1:	08 
 87e18a2:	c7 04 24 00 0f de 08 	movl   $0x8de0f00,(%esp)
 87e18a9:	e8 a2 c3 89 ff       	call   807dc50 <__assert_fail@plt>
 87e18ae:	c7 44 24 0c a0 15 de 	movl   $0x8de15a0,0xc(%esp)
 87e18b5:	08 
 87e18b6:	c7 44 24 08 23 04 00 	movl   $0x423,0x8(%esp)
 87e18bd:	00 
 87e18be:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e18c5:	08 
 87e18c6:	c7 04 24 dd 0e de 08 	movl   $0x8de0edd,(%esp)
 87e18cd:	e8 7e c3 89 ff       	call   807dc50 <__assert_fail@plt>
 87e18d2:	c7 44 24 0c a0 15 de 	movl   $0x8de15a0,0xc(%esp)
 87e18d9:	08 
 87e18da:	c7 44 24 08 24 04 00 	movl   $0x424,0x8(%esp)
 87e18e1:	00 
 87e18e2:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e18e9:	08 
 87e18ea:	c7 04 24 ee 0e de 08 	movl   $0x8de0eee,(%esp)
 87e18f1:	e8 5a c3 89 ff       	call   807dc50 <__assert_fail@plt>
 87e18f6:	c7 44 24 0c a0 15 de 	movl   $0x8de15a0,0xc(%esp)
 87e18fd:	08 
 87e18fe:	c7 44 24 08 32 04 00 	movl   $0x432,0x8(%esp)
 87e1905:	00 
 87e1906:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e190d:	08 
 87e190e:	c7 04 24 ee 0e de 08 	movl   $0x8de0eee,(%esp)
 87e1915:	e8 36 c3 89 ff       	call   807dc50 <__assert_fail@plt>
 87e191a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlDocument::LoadFile @ 0x87e16c0

/* TiXmlDocument::LoadFile(_IO_FILE*, TiXmlEncoding) */

byte __thiscall TiXmlDocument::LoadFile(TiXmlDocument *this,FILE *param_1,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  size_t __size;
  char *__ptr;
  size_t sVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  
  if (param_1 != (FILE *)0x0) {
    piVar3 = *(int **)(this + 0x18);
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[10];
      (**(code **)(*piVar3 + 4))(piVar3);
      piVar3 = piVar2;
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 8) = 0xffffffff;
    *(undefined4 *)(this + 4) = 0xffffffff;
    fseek(param_1,0,2);
    __size = ftell(param_1);
    fseek(param_1,0,0);
    if ((int)__size < 1) {
      SetError(this,0xc,0,0,0);
      return 0;
    }
    __ptr = operator_new__(__size + 1);
    *__ptr = '\0';
    sVar4 = fread(__ptr,__size,1,param_1);
    if (sVar4 == 1) {
      pcVar1 = __ptr + __size;
      *pcVar1 = '\0';
      cVar6 = *__ptr;
      pcVar5 = __ptr;
      pcVar7 = __ptr;
      do {
        if (cVar6 == '\0') {
          if (pcVar7 <= pcVar1) {
            *pcVar7 = '\0';
            (**(code **)(*(int *)this + 0xc))(this,__ptr,0,param_3);
            operator_delete__(__ptr);
            return (byte)this[0x2c] ^ 1;
          }
                    /* WARNING: Subroutine does not return */
          __assert_fail("q <= (buf+length)","tinyxml.cpp",0x432,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (pcVar1 <= pcVar5) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("p < (buf+length)","tinyxml.cpp",0x423,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (pcVar1 < pcVar7) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("q <= (buf+length)","tinyxml.cpp",0x424,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (pcVar5 < pcVar7) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("q <= p","tinyxml.cpp",0x425,
                        "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)");
        }
        if (cVar6 == '\r') {
          pcVar5 = pcVar5 + 1;
          *pcVar7 = '\n';
          cVar6 = *pcVar5;
          if (cVar6 == '\n') goto LAB_087e17da;
        }
        else {
          *pcVar7 = cVar6;
LAB_087e17da:
          pcVar5 = pcVar5 + 1;
          cVar6 = *pcVar5;
        }
        pcVar7 = pcVar7 + 1;
      } while( true );
    }
    operator_delete__(__ptr);
  }
  SetError(this,2,0,0,0);
  return 0;
}

```

---

## LoadFile_087e2a30

```asm
// === 087e2a30 TiXmlDocument::LoadFile  [0x087e2a30-0x87e2b3f] ===
 87e2a30:	55                   	push   %ebp
 87e2a31:	89 e5                	mov    %esp,%ebp
 87e2a33:	83 ec 48             	sub    $0x48,%esp
 87e2a36:	8d 45 e7             	lea    -0x19(%ebp),%eax
 87e2a39:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2a3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e2a40:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e2a43:	8d 7d e0             	lea    -0x20(%ebp),%edi
 87e2a46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e2a49:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e2a4c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e2a4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2a53:	89 3c 24             	mov    %edi,(%esp)
 87e2a56:	e8 d5 4b f2 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 87e2a5b:	8d 43 20             	lea    0x20(%ebx),%eax
 87e2a5e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e2a62:	89 04 24             	mov    %eax,(%esp)
 87e2a65:	e8 c6 51 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e2a6a:	c7 44 24 04 54 16 d0 	movl   $0x8d01654,0x4(%esp)
 87e2a71:	08 
 87e2a72:	8b 43 20             	mov    0x20(%ebx),%eax
 87e2a75:	89 04 24             	mov    %eax,(%esp)
 87e2a78:	e8 f3 bc 89 ff       	call   807e770 <fopen@plt>
 87e2a7d:	85 c0                	test   %eax,%eax
 87e2a7f:	89 c6                	mov    %eax,%esi
 87e2a81:	74 3d                	je     87e2ac0 <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0x90>
 87e2a83:	8b 45 10             	mov    0x10(%ebp),%eax
 87e2a86:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e2a8a:	89 1c 24             	mov    %ebx,(%esp)
 87e2a8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e2a91:	e8 2a ec ff ff       	call   87e16c0 <_ZN13TiXmlDocument8LoadFileEP8_IO_FILE13TiXmlEncoding>
 87e2a96:	89 c3                	mov    %eax,%ebx
 87e2a98:	89 34 24             	mov    %esi,(%esp)
 87e2a9b:	e8 00 b4 89 ff       	call   807dea0 <fclose@plt>
 87e2aa0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e2aa3:	83 e8 0c             	sub    $0xc,%eax
 87e2aa6:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e2aab:	75 3f                	jne    87e2aec <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0xbc>
 87e2aad:	89 d8                	mov    %ebx,%eax
 87e2aaf:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e2ab2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e2ab5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e2ab8:	89 ec                	mov    %ebp,%esp
 87e2aba:	5d                   	pop    %ebp
 87e2abb:	c3                   	ret
 87e2abc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e2ac0:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e2ac7:	00 
 87e2ac8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e2acf:	00 
 87e2ad0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e2ad7:	00 
 87e2ad8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 87e2adf:	00 
 87e2ae0:	89 1c 24             	mov    %ebx,(%esp)
 87e2ae3:	e8 48 42 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e2ae8:	31 db                	xor    %ebx,%ebx
 87e2aea:	eb b4                	jmp    87e2aa0 <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0x70>
 87e2aec:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e2af1:	85 d2                	test   %edx,%edx
 87e2af3:	74 37                	je     87e2b2c <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0xfc>
 87e2af5:	83 ca ff             	or     $0xffffffff,%edx
 87e2af8:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e2afd:	85 d2                	test   %edx,%edx
 87e2aff:	7f ac                	jg     87e2aad <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0x7d>
 87e2b01:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 87e2b04:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e2b08:	89 04 24             	mov    %eax,(%esp)
 87e2b0b:	e8 10 3e f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e2b10:	eb 9b                	jmp    87e2aad <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0x7d>
 87e2b12:	89 c3                	mov    %eax,%ebx
 87e2b14:	89 3c 24             	mov    %edi,(%esp)
 87e2b17:	e8 c4 50 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e2b1c:	89 1c 24             	mov    %ebx,(%esp)
 87e2b1f:	e8 2c 0c 30 00       	call   8ae3750 <_Unwind_Resume>
 87e2b24:	89 04 24             	mov    %eax,(%esp)
 87e2b27:	e8 24 0c 30 00       	call   8ae3750 <_Unwind_Resume>
 87e2b2c:	8b 50 08             	mov    0x8(%eax),%edx
 87e2b2f:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e2b32:	89 48 08             	mov    %ecx,0x8(%eax)
 87e2b35:	eb c6                	jmp    87e2afd <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding+0xcd>
 87e2b37:	90                   	nop
 87e2b38:	90                   	nop
 87e2b39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlDocument::LoadFile @ 0x87e2a30

/* WARNING: Removing unreachable block (ram,0x087e2b2c) */
/* TiXmlDocument::LoadFile(char const*, TiXmlEncoding) */

undefined4 __thiscall TiXmlDocument::LoadFile(TiXmlDocument *this,char *param_1,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  undefined4 uVar3;
  int local_24;
  allocator local_1d [13];
  
                    /* try { // try from 087e2a56 to 087e2a5a has its CatchHandler @ 087e2b24 */
  std::string::string((string *)&local_24,param_1,local_1d);
                    /* try { // try from 087e2a65 to 087e2ae7 has its CatchHandler @ 087e2b12 */
  std::string::assign((string *)(this + 0x20),(string *)&local_24);
  __stream = fopen(*(char **)(this + 0x20),"rb");
  if (__stream == (FILE *)0x0) {
    SetError(this,2,0,0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = LoadFile(this,__stream,param_3);
    fclose(__stream);
  }
  if ((allocator *)(local_24 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
    }
  }
  return uVar3;
}

```

---

## LoadFile_087e2b40

```asm
// === 087e2b40 TiXmlDocument::LoadFile  [0x087e2b40-0x87e2b6f] ===
 87e2b40:	55                   	push   %ebp
 87e2b41:	89 e5                	mov    %esp,%ebp
 87e2b43:	83 ec 18             	sub    $0x18,%esp
 87e2b46:	8b 45 08             	mov    0x8(%ebp),%eax
 87e2b49:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e2b4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e2b50:	8b 50 20             	mov    0x20(%eax),%edx
 87e2b53:	89 04 24             	mov    %eax,(%esp)
 87e2b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e2b5a:	e8 d1 fe ff ff       	call   87e2a30 <_ZN13TiXmlDocument8LoadFileEPKc13TiXmlEncoding>
 87e2b5f:	c9                   	leave
 87e2b60:	c3                   	ret
 87e2b61:	90                   	nop
 87e2b62:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e2b69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDocument::LoadFile @ 0x87e2b40

/* TiXmlDocument::LoadFile(TiXmlEncoding) */

void __thiscall TiXmlDocument::LoadFile(TiXmlDocument *this,undefined4 param_2)

{
  LoadFile(this,*(undefined4 *)(this + 0x20),param_2);
  return;
}

```

---

## Parse

```asm
// === 087e9960 TiXmlDocument::Parse  [0x087e9960-0x87e9d9f] ===
 87e9960:	55                   	push   %ebp
 87e9961:	89 e5                	mov    %esp,%ebp
 87e9963:	57                   	push   %edi
 87e9964:	56                   	push   %esi
 87e9965:	53                   	push   %ebx
 87e9966:	83 ec 4c             	sub    $0x4c,%esp
 87e9969:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e996c:	8b 55 10             	mov    0x10(%ebp),%edx
 87e996f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e9972:	8b 75 14             	mov    0x14(%ebp),%esi
 87e9975:	c6 47 2c 00          	movb   $0x0,0x2c(%edi)
 87e9979:	8d 47 34             	lea    0x34(%edi),%eax
 87e997c:	c7 47 30 00 00 00 00 	movl   $0x0,0x30(%edi)
 87e9983:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87e9986:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e9989:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9990:	00 
 87e9991:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e9998:	08 
 87e9999:	89 04 24             	mov    %eax,(%esp)
 87e999c:	e8 ff eb f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e99a1:	85 db                	test   %ebx,%ebx
 87e99a3:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e99a6:	c7 47 40 00 00 00 00 	movl   $0x0,0x40(%edi)
 87e99ad:	c7 47 3c 00 00 00 00 	movl   $0x0,0x3c(%edi)
 87e99b4:	0f 84 3b 03 00 00    	je     87e9cf5 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x395>
 87e99ba:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e99bd:	0f 84 32 03 00 00    	je     87e9cf5 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x395>
 87e99c3:	85 d2                	test   %edx,%edx
 87e99c5:	c7 47 08 ff ff ff ff 	movl   $0xffffffff,0x8(%edi)
 87e99cc:	c7 47 04 ff ff ff ff 	movl   $0xffffffff,0x4(%edi)
 87e99d3:	0f 84 05 03 00 00    	je     87e9cde <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x37e>
 87e99d9:	8b 0a                	mov    (%edx),%ecx
 87e99db:	8b 42 04             	mov    0x4(%edx),%eax
 87e99de:	89 4f 04             	mov    %ecx,0x4(%edi)
 87e99e1:	89 47 08             	mov    %eax,0x8(%edi)
 87e99e4:	8b 57 38             	mov    0x38(%edi),%edx
 87e99e7:	85 f6                	test   %esi,%esi
 87e99e9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87e99ec:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 87e99ef:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87e99f2:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 87e99f5:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e99f8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e99fb:	89 47 04             	mov    %eax,0x4(%edi)
 87e99fe:	89 57 08             	mov    %edx,0x8(%edi)
 87e9a01:	0f 84 99 00 00 00    	je     87e9aa0 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x140>
 87e9a07:	0f b6 13             	movzbl (%ebx),%edx
 87e9a0a:	84 d2                	test   %dl,%dl
 87e9a0c:	0f 84 5b 03 00 00    	je     87e9d6d <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x40d>
 87e9a12:	83 fe 01             	cmp    $0x1,%esi
 87e9a15:	74 61                	je     87e9a78 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x118>
 87e9a17:	0f b6 c2             	movzbl %dl,%eax
 87e9a1a:	89 04 24             	mov    %eax,(%esp)
 87e9a1d:	88 55 d0             	mov    %dl,-0x30(%ebp)
 87e9a20:	e8 5b 48 89 ff       	call   807e280 <isspace@plt>
 87e9a25:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 87e9a29:	80 fa 0a             	cmp    $0xa,%dl
 87e9a2c:	74 12                	je     87e9a40 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xe0>
 87e9a2e:	85 c0                	test   %eax,%eax
 87e9a30:	75 0e                	jne    87e9a40 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xe0>
 87e9a32:	80 fa 0d             	cmp    $0xd,%dl
 87e9a35:	0f 85 af 00 00 00    	jne    87e9aea <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x18a>
 87e9a3b:	90                   	nop
 87e9a3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9a40:	83 c3 01             	add    $0x1,%ebx
 87e9a43:	0f b6 13             	movzbl (%ebx),%edx
 87e9a46:	84 d2                	test   %dl,%dl
 87e9a48:	0f 84 9c 00 00 00    	je     87e9aea <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x18a>
 87e9a4e:	eb c7                	jmp    87e9a17 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xb7>
 87e9a50:	80 7b 02 bf          	cmpb   $0xbf,0x2(%ebx)
 87e9a54:	74 3f                	je     87e9a95 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x135>
 87e9a56:	66 90                	xchg   %ax,%ax
 87e9a58:	0f b6 c2             	movzbl %dl,%eax
 87e9a5b:	89 04 24             	mov    %eax,(%esp)
 87e9a5e:	88 55 d0             	mov    %dl,-0x30(%ebp)
 87e9a61:	e8 1a 48 89 ff       	call   807e280 <isspace@plt>
 87e9a66:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 87e9a6a:	85 c0                	test   %eax,%eax
 87e9a6c:	74 72                	je     87e9ae0 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x180>
 87e9a6e:	83 c3 01             	add    $0x1,%ebx
 87e9a71:	0f b6 13             	movzbl (%ebx),%edx
 87e9a74:	84 d2                	test   %dl,%dl
 87e9a76:	74 72                	je     87e9aea <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x18a>
 87e9a78:	80 3b ef             	cmpb   $0xef,(%ebx)
 87e9a7b:	75 db                	jne    87e9a58 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xf8>
 87e9a7d:	0f b6 43 01          	movzbl 0x1(%ebx),%eax
 87e9a81:	3c bb                	cmp    $0xbb,%al
 87e9a83:	74 cb                	je     87e9a50 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xf0>
 87e9a85:	3c bf                	cmp    $0xbf,%al
 87e9a87:	75 cf                	jne    87e9a58 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xf8>
 87e9a89:	0f b6 43 02          	movzbl 0x2(%ebx),%eax
 87e9a8d:	3c be                	cmp    $0xbe,%al
 87e9a8f:	74 04                	je     87e9a95 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x135>
 87e9a91:	3c bf                	cmp    $0xbf,%al
 87e9a93:	75 c3                	jne    87e9a58 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xf8>
 87e9a95:	83 c3 03             	add    $0x3,%ebx
 87e9a98:	eb d7                	jmp    87e9a71 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x111>
 87e9a9a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e9aa0:	80 3b ef             	cmpb   $0xef,(%ebx)
 87e9aa3:	0f 85 5e ff ff ff    	jne    87e9a07 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa7>
 87e9aa9:	0f b6 43 01          	movzbl 0x1(%ebx),%eax
 87e9aad:	84 c0                	test   %al,%al
 87e9aaf:	0f 84 52 ff ff ff    	je     87e9a07 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa7>
 87e9ab5:	3c bb                	cmp    $0xbb,%al
 87e9ab7:	0f 85 4a ff ff ff    	jne    87e9a07 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa7>
 87e9abd:	0f b6 43 02          	movzbl 0x2(%ebx),%eax
 87e9ac1:	84 c0                	test   %al,%al
 87e9ac3:	0f 84 3e ff ff ff    	je     87e9a07 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa7>
 87e9ac9:	3c bf                	cmp    $0xbf,%al
 87e9acb:	0f 85 36 ff ff ff    	jne    87e9a07 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa7>
 87e9ad1:	c6 47 44 01          	movb   $0x1,0x44(%edi)
 87e9ad5:	66 be 01 00          	mov    $0x1,%si
 87e9ad9:	e9 29 ff ff ff       	jmp    87e9a07 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0xa7>
 87e9ade:	66 90                	xchg   %ax,%ax
 87e9ae0:	80 fa 0a             	cmp    $0xa,%dl
 87e9ae3:	74 89                	je     87e9a6e <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x10e>
 87e9ae5:	80 fa 0d             	cmp    $0xd,%dl
 87e9ae8:	74 84                	je     87e9a6e <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x10e>
 87e9aea:	85 db                	test   %ebx,%ebx
 87e9aec:	0f 84 7b 02 00 00    	je     87e9d6d <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x40d>
 87e9af2:	84 d2                	test   %dl,%dl
 87e9af4:	75 1a                	jne    87e9b10 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1b0>
 87e9af6:	8b 47 18             	mov    0x18(%edi),%eax
 87e9af9:	85 c0                	test   %eax,%eax
 87e9afb:	0f 84 41 02 00 00    	je     87e9d42 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3e2>
 87e9b01:	83 c4 4c             	add    $0x4c,%esp
 87e9b04:	89 d8                	mov    %ebx,%eax
 87e9b06:	5b                   	pop    %ebx
 87e9b07:	5e                   	pop    %esi
 87e9b08:	5f                   	pop    %edi
 87e9b09:	5d                   	pop    %ebp
 87e9b0a:	c3                   	ret
 87e9b0b:	90                   	nop
 87e9b0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9b10:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e9b14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e9b18:	89 3c 24             	mov    %edi,(%esp)
 87e9b1b:	e8 10 d7 ff ff       	call   87e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>
 87e9b20:	85 c0                	test   %eax,%eax
 87e9b22:	89 c2                	mov    %eax,%edx
 87e9b24:	74 d0                	je     87e9af6 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x196>
 87e9b26:	8b 02                	mov    (%edx),%eax
 87e9b28:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 87e9b2b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87e9b2f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e9b33:	89 14 24             	mov    %edx,(%esp)
 87e9b36:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87e9b39:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e9b3d:	ff 50 0c             	call   *0xc(%eax)
 87e9b40:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e9b43:	89 3c 24             	mov    %edi,(%esp)
 87e9b46:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e9b4a:	89 c3                	mov    %eax,%ebx
 87e9b4c:	e8 ff 85 ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e9b51:	85 f6                	test   %esi,%esi
 87e9b53:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e9b56:	0f 84 8c 00 00 00    	je     87e9be8 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x288>
 87e9b5c:	85 db                	test   %ebx,%ebx
 87e9b5e:	74 96                	je     87e9af6 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x196>
 87e9b60:	0f b6 13             	movzbl (%ebx),%edx
 87e9b63:	84 d2                	test   %dl,%dl
 87e9b65:	0f 84 fd 00 00 00    	je     87e9c68 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x308>
 87e9b6b:	83 fe 01             	cmp    $0x1,%esi
 87e9b6e:	74 4a                	je     87e9bba <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x25a>
 87e9b70:	0f b6 c2             	movzbl %dl,%eax
 87e9b73:	89 04 24             	mov    %eax,(%esp)
 87e9b76:	88 55 d0             	mov    %dl,-0x30(%ebp)
 87e9b79:	e8 02 47 89 ff       	call   807e280 <isspace@plt>
 87e9b7e:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 87e9b82:	80 fa 0a             	cmp    $0xa,%dl
 87e9b85:	0f 84 95 00 00 00    	je     87e9c20 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c0>
 87e9b8b:	85 c0                	test   %eax,%eax
 87e9b8d:	0f 85 8d 00 00 00    	jne    87e9c20 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c0>
 87e9b93:	80 fa 0d             	cmp    $0xd,%dl
 87e9b96:	0f 84 84 00 00 00    	je     87e9c20 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2c0>
 87e9b9c:	85 db                	test   %ebx,%ebx
 87e9b9e:	66 90                	xchg   %ax,%ax
 87e9ba0:	0f 85 4c ff ff ff    	jne    87e9af2 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x192>
 87e9ba6:	e9 4b ff ff ff       	jmp    87e9af6 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x196>
 87e9bab:	90                   	nop
 87e9bac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9bb0:	83 c3 01             	add    $0x1,%ebx
 87e9bb3:	0f b6 13             	movzbl (%ebx),%edx
 87e9bb6:	84 d2                	test   %dl,%dl
 87e9bb8:	74 e2                	je     87e9b9c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x23c>
 87e9bba:	80 3b ef             	cmpb   $0xef,(%ebx)
 87e9bbd:	74 79                	je     87e9c38 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2d8>
 87e9bbf:	0f b6 c2             	movzbl %dl,%eax
 87e9bc2:	89 04 24             	mov    %eax,(%esp)
 87e9bc5:	88 55 d0             	mov    %dl,-0x30(%ebp)
 87e9bc8:	e8 b3 46 89 ff       	call   807e280 <isspace@plt>
 87e9bcd:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 87e9bd1:	85 c0                	test   %eax,%eax
 87e9bd3:	75 db                	jne    87e9bb0 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x250>
 87e9bd5:	80 fa 0a             	cmp    $0xa,%dl
 87e9bd8:	74 d6                	je     87e9bb0 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x250>
 87e9bda:	80 fa 0d             	cmp    $0xd,%dl
 87e9bdd:	75 bd                	jne    87e9b9c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x23c>
 87e9bdf:	90                   	nop
 87e9be0:	eb ce                	jmp    87e9bb0 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x250>
 87e9be2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e9be8:	8b 02                	mov    (%edx),%eax
 87e9bea:	89 14 24             	mov    %edx,(%esp)
 87e9bed:	8d 76 00             	lea    0x0(%esi),%esi
 87e9bf0:	ff 50 3c             	call   *0x3c(%eax)
 87e9bf3:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e9bf6:	85 c0                	test   %eax,%eax
 87e9bf8:	0f 84 5e ff ff ff    	je     87e9b5c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1fc>
 87e9bfe:	8b 02                	mov    (%edx),%eax
 87e9c00:	89 14 24             	mov    %edx,(%esp)
 87e9c03:	ff 50 3c             	call   *0x3c(%eax)
 87e9c06:	8b 70 30             	mov    0x30(%eax),%esi
 87e9c09:	85 f6                	test   %esi,%esi
 87e9c0b:	0f 84 66 01 00 00    	je     87e9d77 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x417>
 87e9c11:	80 3e 00             	cmpb   $0x0,(%esi)
 87e9c14:	75 5a                	jne    87e9c70 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x310>
 87e9c16:	be 01 00 00 00       	mov    $0x1,%esi
 87e9c1b:	e9 3c ff ff ff       	jmp    87e9b5c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1fc>
 87e9c20:	83 c3 01             	add    $0x1,%ebx
 87e9c23:	0f b6 13             	movzbl (%ebx),%edx
 87e9c26:	84 d2                	test   %dl,%dl
 87e9c28:	0f 84 6e ff ff ff    	je     87e9b9c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x23c>
 87e9c2e:	e9 3d ff ff ff       	jmp    87e9b70 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x210>
 87e9c33:	90                   	nop
 87e9c34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9c38:	0f b6 43 01          	movzbl 0x1(%ebx),%eax
 87e9c3c:	3c bb                	cmp    $0xbb,%al
 87e9c3e:	0f 84 84 00 00 00    	je     87e9cc8 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x368>
 87e9c44:	3c bf                	cmp    $0xbf,%al
 87e9c46:	0f 85 73 ff ff ff    	jne    87e9bbf <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x25f>
 87e9c4c:	0f b6 43 02          	movzbl 0x2(%ebx),%eax
 87e9c50:	3c be                	cmp    $0xbe,%al
 87e9c52:	74 08                	je     87e9c5c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2fc>
 87e9c54:	3c bf                	cmp    $0xbf,%al
 87e9c56:	0f 85 63 ff ff ff    	jne    87e9bbf <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x25f>
 87e9c5c:	83 c3 03             	add    $0x3,%ebx
 87e9c5f:	e9 4f ff ff ff       	jmp    87e9bb3 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x253>
 87e9c64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9c68:	31 db                	xor    %ebx,%ebx
 87e9c6a:	e9 87 fe ff ff       	jmp    87e9af6 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x196>
 87e9c6f:	90                   	nop
 87e9c70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e9c77:	00 
 87e9c78:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e9c7f:	00 
 87e9c80:	c7 44 24 04 ab 18 de 	movl   $0x8de18ab,0x4(%esp)
 87e9c87:	08 
 87e9c88:	89 34 24             	mov    %esi,(%esp)
 87e9c8b:	e8 60 c6 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e9c90:	84 c0                	test   %al,%al
 87e9c92:	75 82                	jne    87e9c16 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2b6>
 87e9c94:	89 34 24             	mov    %esi,(%esp)
 87e9c97:	be 02 00 00 00       	mov    $0x2,%esi
 87e9c9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e9ca3:	00 
 87e9ca4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e9cab:	00 
 87e9cac:	c7 44 24 04 b1 18 de 	movl   $0x8de18b1,0x4(%esp)
 87e9cb3:	08 
 87e9cb4:	e8 37 c6 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e9cb9:	84 c0                	test   %al,%al
 87e9cbb:	0f 84 9b fe ff ff    	je     87e9b5c <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1fc>
 87e9cc1:	e9 50 ff ff ff       	jmp    87e9c16 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x2b6>
 87e9cc6:	66 90                	xchg   %ax,%ax
 87e9cc8:	80 7b 02 bf          	cmpb   $0xbf,0x2(%ebx)
 87e9ccc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9cd0:	0f 85 e9 fe ff ff    	jne    87e9bbf <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x25f>
 87e9cd6:	83 c3 03             	add    $0x3,%ebx
 87e9cd9:	e9 d5 fe ff ff       	jmp    87e9bb3 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x253>
 87e9cde:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%edi)
 87e9ce5:	31 c9                	xor    %ecx,%ecx
 87e9ce7:	31 c0                	xor    %eax,%eax
 87e9ce9:	c7 47 08 00 00 00 00 	movl   $0x0,0x8(%edi)
 87e9cf0:	e9 ef fc ff ff       	jmp    87e99e4 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x84>
 87e9cf5:	31 db                	xor    %ebx,%ebx
 87e9cf7:	80 7f 2c 00          	cmpb   $0x0,0x2c(%edi)
 87e9cfb:	0f 85 00 fe ff ff    	jne    87e9b01 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a1>
 87e9d01:	8b 1d f0 37 3f 09    	mov    0x93f37f0,%ebx
 87e9d07:	c6 47 2c 01          	movb   $0x1,0x2c(%edi)
 87e9d0b:	c7 47 30 0c 00 00 00 	movl   $0xc,0x30(%edi)
 87e9d12:	89 1c 24             	mov    %ebx,(%esp)
 87e9d15:	e8 96 46 89 ff       	call   807e3b0 <strlen@plt>
 87e9d1a:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87e9d1d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e9d21:	31 db                	xor    %ebx,%ebx
 87e9d23:	89 0c 24             	mov    %ecx,(%esp)
 87e9d26:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e9d2a:	e8 71 e8 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e9d2f:	c7 47 40 ff ff ff ff 	movl   $0xffffffff,0x40(%edi)
 87e9d36:	c7 47 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%edi)
 87e9d3d:	e9 bf fd ff ff       	jmp    87e9b01 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a1>
 87e9d42:	89 74 24 10          	mov    %esi,0x10(%esp)
 87e9d46:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e9d4d:	00 
 87e9d4e:	31 db                	xor    %ebx,%ebx
 87e9d50:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e9d57:	00 
 87e9d58:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 87e9d5f:	00 
 87e9d60:	89 3c 24             	mov    %edi,(%esp)
 87e9d63:	e8 c8 cf ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e9d68:	e9 94 fd ff ff       	jmp    87e9b01 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x1a1>
 87e9d6d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e9d74:	00 
 87e9d75:	eb cf                	jmp    87e9d46 <_ZN13TiXmlDocument5ParseEPKcP16TiXmlParsingData13TiXmlEncoding+0x3e6>
 87e9d77:	c7 44 24 0c 00 1e de 	movl   $0x8de1e00,0xc(%esp)
 87e9d7e:	08 
 87e9d7f:	c7 44 24 08 05 03 00 	movl   $0x305,0x8(%esp)
 87e9d86:	00 
 87e9d87:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e9d8e:	08 
 87e9d8f:	c7 04 24 a7 18 de 08 	movl   $0x8de18a7,(%esp)
 87e9d96:	e8 b5 3e 89 ff       	call   807dc50 <__assert_fail@plt>
 87e9d9b:	90                   	nop
 87e9d9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlDocument::Parse @ 0x87e9960

/* TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding) */

byte * __thiscall
TiXmlDocument::Parse(TiXmlDocument *this,byte *param_1,undefined4 *param_2,int param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined4 __s;
  char cVar3;
  int iVar4;
  TiXmlNode *pTVar5;
  size_t sVar6;
  byte bVar7;
  undefined4 local_2c;
  undefined4 local_28;
  byte *local_24;
  undefined4 local_20;
  
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  __s = TiXmlBase::errorString._48_4_;
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    if (this[0x2c] != (TiXmlDocument)0x0) {
      return (byte *)0x0;
    }
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 0xc;
    sVar6 = strlen((char *)__s);
    std::string::assign((string *)(this + 0x34),(char *)__s,sVar6);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    return (byte *)0x0;
  }
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(this + 4) = 0;
    local_2c = 0;
    local_28 = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    local_2c = *param_2;
    local_28 = param_2[1];
    *(undefined4 *)(this + 4) = local_2c;
    *(undefined4 *)(this + 8) = local_28;
  }
  local_20 = *(undefined4 *)(this + 0x38);
  local_24 = param_1;
  *(undefined4 *)(this + 4) = local_2c;
  *(undefined4 *)(this + 8) = local_28;
  if ((((param_4 == 0) && (*param_1 == 0xef)) && (param_1[1] != 0)) &&
     (((param_1[1] == 0xbb && (param_1[2] != 0)) && (param_1[2] == 0xbf)))) {
    this[0x44] = (TiXmlDocument)0x1;
    param_4 = 1;
  }
  bVar7 = *param_1;
  if (bVar7 != 0) {
    if (param_4 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            bVar1 = param_1[2];
joined_r0x087e9a54:
            if (bVar1 != 0xbf) goto LAB_087e9a58;
          }
          else {
            if (param_1[1] != 0xbf) goto LAB_087e9a58;
            bVar1 = param_1[2];
            if (bVar1 != 0xbe) goto joined_r0x087e9a54;
          }
          param_1 = param_1 + 3;
        }
        else {
LAB_087e9a58:
          iVar4 = isspace((uint)bVar7);
          if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar7 = *param_1;
      } while (bVar7 != 0);
    }
    else {
      do {
        iVar4 = isspace((uint)bVar7);
        if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar7 = *param_1;
      } while (bVar7 != 0);
    }
    if (param_1 != (byte *)0x0) {
      do {
        if ((bVar7 == 0) ||
           (pTVar5 = (TiXmlNode *)TiXmlNode::Identify((TiXmlNode *)this,param_1,param_4),
           pTVar5 == (TiXmlNode *)0x0)) break;
        param_1 = (byte *)(**(code **)(*(int *)pTVar5 + 0xc))(pTVar5,param_1,&local_2c,param_4);
        TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
        if ((param_4 == 0) && (iVar4 = (**(code **)(*(int *)pTVar5 + 0x3c))(pTVar5), iVar4 != 0)) {
          iVar4 = (**(code **)(*(int *)pTVar5 + 0x3c))(pTVar5);
          pcVar2 = *(char **)(iVar4 + 0x30);
          if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("enc","tinyxmlparser.cpp",0x305,
                          "virtual const char* TiXmlDocument::Parse(const char*, TiXmlParsingData*, TiXmlEncoding)"
                         );
          }
          if ((*pcVar2 != '\0') &&
             (cVar3 = TiXmlBase::StringEqual(pcVar2,"UTF-8",1,0), cVar3 == '\0')) {
            param_4 = 2;
            cVar3 = TiXmlBase::StringEqual(pcVar2,&DAT_08de18b1,1,0);
            if (cVar3 == '\0') goto LAB_087e9b5c;
          }
          param_4 = 1;
        }
LAB_087e9b5c:
        if (param_1 == (byte *)0x0) break;
        bVar7 = *param_1;
        if (bVar7 == 0) {
          param_1 = (byte *)0x0;
          break;
        }
        if (param_4 == 1) {
          do {
            if (*param_1 == 0xef) {
              if (param_1[1] == 0xbb) {
                if (param_1[2] != 0xbf) goto LAB_087e9bbf;
                param_1 = param_1 + 3;
              }
              else {
                if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
                goto LAB_087e9bbf;
                param_1 = param_1 + 3;
              }
            }
            else {
LAB_087e9bbf:
              iVar4 = isspace((uint)bVar7);
              if (((iVar4 == 0) && (bVar7 != 10)) && (bVar7 != 0xd)) break;
              param_1 = param_1 + 1;
            }
            bVar7 = *param_1;
          } while (bVar7 != 0);
        }
        else {
          do {
            iVar4 = isspace((uint)bVar7);
            if (((bVar7 != 10) && (iVar4 == 0)) && (bVar7 != 0xd)) break;
            param_1 = param_1 + 1;
            bVar7 = *param_1;
          } while (bVar7 != 0);
        }
      } while (param_1 != (byte *)0x0);
      if (*(int *)(this + 0x18) != 0) {
        return param_1;
      }
      goto LAB_087e9d46;
    }
  }
  param_4 = 0;
LAB_087e9d46:
  SetError(this,0xc,0,0,param_4);
  return (byte *)0x0;
}

```

---

## Print

```asm
// === 087e0610 TiXmlDocument::Print  [0x087e0610-0x87e068f] ===
 87e0610:	55                   	push   %ebp
 87e0611:	89 e5                	mov    %esp,%ebp
 87e0613:	57                   	push   %edi
 87e0614:	56                   	push   %esi
 87e0615:	53                   	push   %ebx
 87e0616:	83 ec 1c             	sub    $0x1c,%esp
 87e0619:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e061c:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e061f:	85 f6                	test   %esi,%esi
 87e0621:	74 3c                	je     87e065f <_ZNK13TiXmlDocument5PrintEP8_IO_FILEi+0x4f>
 87e0623:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0626:	8b 58 18             	mov    0x18(%eax),%ebx
 87e0629:	85 db                	test   %ebx,%ebx
 87e062b:	74 2a                	je     87e0657 <_ZNK13TiXmlDocument5PrintEP8_IO_FILEi+0x47>
 87e062d:	8d 76 00             	lea    0x0(%esi),%esi
 87e0630:	8b 03                	mov    (%ebx),%eax
 87e0632:	89 1c 24             	mov    %ebx,(%esp)
 87e0635:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87e0639:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e063d:	ff 50 08             	call   *0x8(%eax)
 87e0640:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0644:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 87e064b:	e8 70 de 89 ff       	call   807e4c0 <fputc@plt>
 87e0650:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e0653:	85 db                	test   %ebx,%ebx
 87e0655:	75 d9                	jne    87e0630 <_ZNK13TiXmlDocument5PrintEP8_IO_FILEi+0x20>
 87e0657:	83 c4 1c             	add    $0x1c,%esp
 87e065a:	5b                   	pop    %ebx
 87e065b:	5e                   	pop    %esi
 87e065c:	5f                   	pop    %edi
 87e065d:	5d                   	pop    %ebp
 87e065e:	c3                   	ret
 87e065f:	c7 44 24 0c 60 15 de 	movl   $0x8de1560,0xc(%esp)
 87e0666:	08 
 87e0667:	c7 44 24 08 7b 04 00 	movl   $0x47b,0x8(%esp)
 87e066e:	00 
 87e066f:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e0676:	08 
 87e0677:	c7 04 24 7b 0e de 08 	movl   $0x8de0e7b,(%esp)
 87e067e:	e8 cd d5 89 ff       	call   807dc50 <__assert_fail@plt>
 87e0683:	90                   	nop
 87e0684:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e068a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlDocument::Print @ 0x87e0610

/* TiXmlDocument::Print(_IO_FILE*, int) const */

void __thiscall TiXmlDocument::Print(TiXmlDocument *this,_IO_FILE *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (_IO_FILE *)0x0) {
    for (piVar1 = *(int **)(this + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
      (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2);
      fputc(10,param_1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cfile","tinyxml.cpp",0x47b,"virtual void TiXmlDocument::Print(FILE*, int) const");
}

```

---

## SaveFile

```asm
// === 087e0960 TiXmlDocument::SaveFile  [0x087e0960-0x87e09df] ===
 87e0960:	55                   	push   %ebp
 87e0961:	89 e5                	mov    %esp,%ebp
 87e0963:	83 ec 18             	sub    $0x18,%esp
 87e0966:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e0969:	8b 75 08             	mov    0x8(%ebp),%esi
 87e096c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e096f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e0972:	80 7e 44 00          	cmpb   $0x0,0x44(%esi)
 87e0976:	74 30                	je     87e09a8 <_ZNK13TiXmlDocument8SaveFileEP8_IO_FILE+0x48>
 87e0978:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e097c:	c7 04 24 ef 00 00 00 	movl   $0xef,(%esp)
 87e0983:	e8 38 db 89 ff       	call   807e4c0 <fputc@plt>
 87e0988:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e098c:	c7 04 24 bb 00 00 00 	movl   $0xbb,(%esp)
 87e0993:	e8 28 db 89 ff       	call   807e4c0 <fputc@plt>
 87e0998:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e099c:	c7 04 24 bf 00 00 00 	movl   $0xbf,(%esp)
 87e09a3:	e8 18 db 89 ff       	call   807e4c0 <fputc@plt>
 87e09a8:	8b 06                	mov    (%esi),%eax
 87e09aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e09ae:	89 34 24             	mov    %esi,(%esp)
 87e09b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e09b8:	00 
 87e09b9:	ff 50 08             	call   *0x8(%eax)
 87e09bc:	89 1c 24             	mov    %ebx,(%esp)
 87e09bf:	e8 fc dc 89 ff       	call   807e6c0 <ferror@plt>
 87e09c4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e09c7:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e09ca:	85 c0                	test   %eax,%eax
 87e09cc:	0f 94 c0             	sete   %al
 87e09cf:	89 ec                	mov    %ebp,%esp
 87e09d1:	5d                   	pop    %ebp
 87e09d2:	c3                   	ret
 87e09d3:	90                   	nop
 87e09d4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e09da:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlDocument::SaveFile @ 0x87e0960

/* TiXmlDocument::SaveFile(_IO_FILE*) const */

bool __thiscall TiXmlDocument::SaveFile(TiXmlDocument *this,_IO_FILE *param_1)

{
  int iVar1;
  
  if (this[0x44] != (TiXmlDocument)0x0) {
    fputc(0xef,param_1);
    fputc(0xbb,param_1);
    fputc(0xbf,param_1);
  }
  (**(code **)(*(int *)this + 8))(this,param_1,0);
  iVar1 = ferror(param_1);
  return iVar1 == 0;
}

```

---

## SaveFile_087e1d80

```asm
// === 087e1d80 TiXmlDocument::SaveFile  [0x087e1d80-0x87e1e2f] ===
 87e1d80:	55                   	push   %ebp
 87e1d81:	89 e5                	mov    %esp,%ebp
 87e1d83:	83 ec 28             	sub    $0x28,%esp
 87e1d86:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e1d89:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e1d8c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e1d8f:	8b 75 08             	mov    0x8(%ebp),%esi
 87e1d92:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e1d95:	31 ff                	xor    %edi,%edi
 87e1d97:	c7 44 24 04 c7 34 d0 	movl   $0x8d034c7,0x4(%esp)
 87e1d9e:	08 
 87e1d9f:	89 04 24             	mov    %eax,(%esp)
 87e1da2:	e8 c9 c9 89 ff       	call   807e770 <fopen@plt>
 87e1da7:	85 c0                	test   %eax,%eax
 87e1da9:	89 c3                	mov    %eax,%ebx
 87e1dab:	74 31                	je     87e1dde <_ZNK13TiXmlDocument8SaveFileEPKc+0x5e>
 87e1dad:	80 7e 44 00          	cmpb   $0x0,0x44(%esi)
 87e1db1:	75 3d                	jne    87e1df0 <_ZNK13TiXmlDocument8SaveFileEPKc+0x70>
 87e1db3:	8b 06                	mov    (%esi),%eax
 87e1db5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e1dbc:	00 
 87e1dbd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e1dc1:	89 34 24             	mov    %esi,(%esp)
 87e1dc4:	ff 50 08             	call   *0x8(%eax)
 87e1dc7:	89 1c 24             	mov    %ebx,(%esp)
 87e1dca:	e8 f1 c8 89 ff       	call   807e6c0 <ferror@plt>
 87e1dcf:	89 1c 24             	mov    %ebx,(%esp)
 87e1dd2:	85 c0                	test   %eax,%eax
 87e1dd4:	0f 94 c0             	sete   %al
 87e1dd7:	89 c7                	mov    %eax,%edi
 87e1dd9:	e8 c2 c0 89 ff       	call   807dea0 <fclose@plt>
 87e1dde:	89 f8                	mov    %edi,%eax
 87e1de0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e1de3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e1de6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e1de9:	89 ec                	mov    %ebp,%esp
 87e1deb:	5d                   	pop    %ebp
 87e1dec:	c3                   	ret
 87e1ded:	8d 76 00             	lea    0x0(%esi),%esi
 87e1df0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e1df4:	c7 04 24 ef 00 00 00 	movl   $0xef,(%esp)
 87e1dfb:	e8 c0 c6 89 ff       	call   807e4c0 <fputc@plt>
 87e1e00:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e1e04:	c7 04 24 bb 00 00 00 	movl   $0xbb,(%esp)
 87e1e0b:	e8 b0 c6 89 ff       	call   807e4c0 <fputc@plt>
 87e1e10:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e1e14:	c7 04 24 bf 00 00 00 	movl   $0xbf,(%esp)
 87e1e1b:	e8 a0 c6 89 ff       	call   807e4c0 <fputc@plt>
 87e1e20:	eb 91                	jmp    87e1db3 <_ZNK13TiXmlDocument8SaveFileEPKc+0x33>
 87e1e22:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1e29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDocument::SaveFile @ 0x87e1d80

/* TiXmlDocument::SaveFile(char const*) const */

bool __thiscall TiXmlDocument::SaveFile(TiXmlDocument *this,char *param_1)

{
  FILE *__stream;
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  __stream = fopen(param_1,"w");
  if (__stream != (FILE *)0x0) {
    if (this[0x44] != (TiXmlDocument)0x0) {
      fputc(0xef,__stream);
      fputc(0xbb,__stream);
      fputc(0xbf,__stream);
    }
    (**(code **)(*(int *)this + 8))(this,__stream,0);
    iVar1 = ferror(__stream);
    bVar2 = iVar1 == 0;
    fclose(__stream);
  }
  return bVar2;
}

```

---

## SaveFile_087e23e0

```asm
// === 087e23e0 TiXmlDocument::SaveFile  [0x087e23e0-0x87e248f] ===
 87e23e0:	55                   	push   %ebp
 87e23e1:	89 e5                	mov    %esp,%ebp
 87e23e3:	83 ec 28             	sub    $0x28,%esp
 87e23e6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e23e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e23ec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e23ef:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e23f2:	31 ff                	xor    %edi,%edi
 87e23f4:	c7 44 24 04 c7 34 d0 	movl   $0x8d034c7,0x4(%esp)
 87e23fb:	08 
 87e23fc:	8b 46 20             	mov    0x20(%esi),%eax
 87e23ff:	89 04 24             	mov    %eax,(%esp)
 87e2402:	e8 69 c3 89 ff       	call   807e770 <fopen@plt>
 87e2407:	85 c0                	test   %eax,%eax
 87e2409:	89 c3                	mov    %eax,%ebx
 87e240b:	74 31                	je     87e243e <_ZNK13TiXmlDocument8SaveFileEv+0x5e>
 87e240d:	80 7e 44 00          	cmpb   $0x0,0x44(%esi)
 87e2411:	75 3d                	jne    87e2450 <_ZNK13TiXmlDocument8SaveFileEv+0x70>
 87e2413:	8b 06                	mov    (%esi),%eax
 87e2415:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e241c:	00 
 87e241d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e2421:	89 34 24             	mov    %esi,(%esp)
 87e2424:	ff 50 08             	call   *0x8(%eax)
 87e2427:	89 1c 24             	mov    %ebx,(%esp)
 87e242a:	e8 91 c2 89 ff       	call   807e6c0 <ferror@plt>
 87e242f:	89 1c 24             	mov    %ebx,(%esp)
 87e2432:	85 c0                	test   %eax,%eax
 87e2434:	0f 94 c0             	sete   %al
 87e2437:	89 c7                	mov    %eax,%edi
 87e2439:	e8 62 ba 89 ff       	call   807dea0 <fclose@plt>
 87e243e:	89 f8                	mov    %edi,%eax
 87e2440:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e2443:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e2446:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e2449:	89 ec                	mov    %ebp,%esp
 87e244b:	5d                   	pop    %ebp
 87e244c:	c3                   	ret
 87e244d:	8d 76 00             	lea    0x0(%esi),%esi
 87e2450:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2454:	c7 04 24 ef 00 00 00 	movl   $0xef,(%esp)
 87e245b:	e8 60 c0 89 ff       	call   807e4c0 <fputc@plt>
 87e2460:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e2464:	c7 04 24 bb 00 00 00 	movl   $0xbb,(%esp)
 87e246b:	e8 50 c0 89 ff       	call   807e4c0 <fputc@plt>
 87e2470:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e2474:	c7 04 24 bf 00 00 00 	movl   $0xbf,(%esp)
 87e247b:	e8 40 c0 89 ff       	call   807e4c0 <fputc@plt>
 87e2480:	eb 91                	jmp    87e2413 <_ZNK13TiXmlDocument8SaveFileEv+0x33>
 87e2482:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e2489:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDocument::SaveFile @ 0x87e23e0

/* TiXmlDocument::SaveFile() const */

bool __thiscall TiXmlDocument::SaveFile(TiXmlDocument *this)

{
  FILE *__stream;
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  __stream = fopen(*(char **)(this + 0x20),"w");
  if (__stream != (FILE *)0x0) {
    if (this[0x44] != (TiXmlDocument)0x0) {
      fputc(0xef,__stream);
      fputc(0xbb,__stream);
      fputc(0xbf,__stream);
    }
    (**(code **)(*(int *)this + 8))(this,__stream,0);
    iVar1 = ferror(__stream);
    bVar2 = iVar1 == 0;
    fclose(__stream);
  }
  return bVar2;
}

```

---

## SetError

```asm
// === 087e6d30 TiXmlDocument::SetError  [0x087e6d30-0x87e6dff] ===
 87e6d30:	55                   	push   %ebp
 87e6d31:	89 e5                	mov    %esp,%ebp
 87e6d33:	83 ec 28             	sub    $0x28,%esp
 87e6d36:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e6d39:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e6d3c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e6d3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e6d42:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e6d45:	8b 75 14             	mov    0x14(%ebp),%esi
 87e6d48:	80 7b 2c 00          	cmpb   $0x0,0x2c(%ebx)
 87e6d4c:	75 43                	jne    87e6d91 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding+0x61>
 87e6d4e:	8d 50 ff             	lea    -0x1(%eax),%edx
 87e6d51:	83 fa 0e             	cmp    $0xe,%edx
 87e6d54:	77 7f                	ja     87e6dd5 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding+0xa5>
 87e6d56:	8b 3c 85 c0 37 3f 09 	mov    0x93f37c0(,%eax,4),%edi
 87e6d5d:	c6 43 2c 01          	movb   $0x1,0x2c(%ebx)
 87e6d61:	89 43 30             	mov    %eax,0x30(%ebx)
 87e6d64:	89 3c 24             	mov    %edi,(%esp)
 87e6d67:	e8 44 76 89 ff       	call   807e3b0 <strlen@plt>
 87e6d6c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e6d70:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e6d74:	8d 43 34             	lea    0x34(%ebx),%eax
 87e6d77:	89 04 24             	mov    %eax,(%esp)
 87e6d7a:	e8 21 18 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e6d7f:	85 f6                	test   %esi,%esi
 87e6d81:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e6d88:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e6d8f:	75 0f                	jne    87e6da0 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding+0x70>
 87e6d91:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e6d94:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e6d97:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e6d9a:	89 ec                	mov    %ebp,%esp
 87e6d9c:	5d                   	pop    %ebp
 87e6d9d:	c3                   	ret
 87e6d9e:	66 90                	xchg   %ax,%ax
 87e6da0:	8b 45 10             	mov    0x10(%ebp),%eax
 87e6da3:	85 c0                	test   %eax,%eax
 87e6da5:	74 ea                	je     87e6d91 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding+0x61>
 87e6da7:	8b 45 18             	mov    0x18(%ebp),%eax
 87e6daa:	89 34 24             	mov    %esi,(%esp)
 87e6dad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e6db1:	8b 45 10             	mov    0x10(%ebp),%eax
 87e6db4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6db8:	e8 63 f2 ff ff       	call   87e6020 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding>
 87e6dbd:	8b 06                	mov    (%esi),%eax
 87e6dbf:	8b 56 04             	mov    0x4(%esi),%edx
 87e6dc2:	89 43 3c             	mov    %eax,0x3c(%ebx)
 87e6dc5:	89 53 40             	mov    %edx,0x40(%ebx)
 87e6dc8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e6dcb:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e6dce:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e6dd1:	89 ec                	mov    %ebp,%esp
 87e6dd3:	5d                   	pop    %ebp
 87e6dd4:	c3                   	ret
 87e6dd5:	c7 44 24 0c a0 1d de 	movl   $0x8de1da0,0xc(%esp)
 87e6ddc:	08 
 87e6ddd:	c7 44 24 08 24 03 00 	movl   $0x324,0x8(%esp)
 87e6de4:	00 
 87e6de5:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e6dec:	08 
 87e6ded:	c7 04 24 10 19 de 08 	movl   $0x8de1910,(%esp)
 87e6df4:	e8 57 6e 89 ff       	call   807dc50 <__assert_fail@plt>
 87e6df9:	90                   	nop
 87e6dfa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlDocument::SetError @ 0x87e6d30

/* TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding) */

void __thiscall
TiXmlDocument::SetError
          (TiXmlDocument *this,int param_1,int param_2,TiXmlParsingData *param_3,undefined4 param_5)

{
  char *__s;
  undefined4 uVar1;
  size_t sVar2;
  
  if (this[0x2c] == (TiXmlDocument)0x0) {
    if (0xe < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("err > 0 && err < TIXML_ERROR_STRING_COUNT","tinyxmlparser.cpp",0x324,
                    "void TiXmlDocument::SetError(int, const char*, TiXmlParsingData*, TiXmlEncoding)"
                   );
    }
    __s = *(char **)(TiXmlBase::errorString + param_1 * 4);
    this[0x2c] = (TiXmlDocument)0x1;
    *(int *)(this + 0x30) = param_1;
    sVar2 = strlen(__s);
    std::string::assign((string *)(this + 0x34),__s,sVar2);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    if ((param_3 != (TiXmlParsingData *)0x0) && (param_2 != 0)) {
      TiXmlParsingData::Stamp(param_3,param_2,param_5);
      uVar1 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(this + 0x3c) = *(undefined4 *)param_3;
      *(undefined4 *)(this + 0x40) = uVar1;
      return;
    }
  }
  return;
}

```

---

## StreamIn

```asm
// === 087e8840 TiXmlDocument::StreamIn  [0x087e8840-0x87e8b3f] ===
 87e8840:	55                   	push   %ebp
 87e8841:	89 e5                	mov    %esp,%ebp
 87e8843:	57                   	push   %edi
 87e8844:	56                   	push   %esi
 87e8845:	53                   	push   %ebx
 87e8846:	83 ec 3c             	sub    $0x3c,%esp
 87e8849:	8b 5d 10             	mov    0x10(%ebp),%ebx
 87e884c:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e884f:	89 5d dc             	mov    %ebx,-0x24(%ebp)
 87e8852:	eb 75                	jmp    87e88c9 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x89>
 87e8854:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8858:	89 34 24             	mov    %esi,(%esp)
 87e885b:	e8 b0 d6 ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e8860:	83 f8 3c             	cmp    $0x3c,%eax
 87e8863:	89 c7                	mov    %eax,%edi
 87e8865:	0f 84 bc 00 00 00    	je     87e8927 <_ZN13TiXmlDocument8StreamInEPSiPSs+0xe7>
 87e886b:	85 c0                	test   %eax,%eax
 87e886d:	7e 67                	jle    87e88d6 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x96>
 87e886f:	89 34 24             	mov    %esi,(%esp)
 87e8872:	e8 79 d4 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e8877:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e887a:	8b 02                	mov    (%edx),%eax
 87e887c:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e887f:	8d 48 f4             	lea    -0xc(%eax),%ecx
 87e8882:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87e8885:	8d 5a 01             	lea    0x1(%edx),%ebx
 87e8888:	3b 59 04             	cmp    0x4(%ecx),%ebx
 87e888b:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 87e888e:	77 07                	ja     87e8897 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x57>
 87e8890:	8b 49 08             	mov    0x8(%ecx),%ecx
 87e8893:	85 c9                	test   %ecx,%ecx
 87e8895:	7e 1a                	jle    87e88b1 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x71>
 87e8897:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e889a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e889d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e88a1:	89 14 24             	mov    %edx,(%esp)
 87e88a4:	e8 67 f4 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e88a9:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87e88ac:	8b 01                	mov    (%ecx),%eax
 87e88ae:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e88b1:	89 fb                	mov    %edi,%ebx
 87e88b3:	88 1c 10             	mov    %bl,(%eax,%edx,1)
 87e88b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e88b9:	8b 10                	mov    (%eax),%edx
 87e88bb:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e88be:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e88c3:	0f 85 52 02 00 00    	jne    87e8b1b <_ZN13TiXmlDocument8StreamInEPSiPSs+0x2db>
 87e88c9:	8b 06                	mov    (%esi),%eax
 87e88cb:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e88ce:	8b 5c 06 14          	mov    0x14(%esi,%eax,1),%ebx
 87e88d2:	85 db                	test   %ebx,%ebx
 87e88d4:	74 82                	je     87e8858 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x18>
 87e88d6:	8b 55 08             	mov    0x8(%ebp),%edx
 87e88d9:	80 7a 2c 00          	cmpb   $0x0,0x2c(%edx)
 87e88dd:	75 40                	jne    87e891f <_ZN13TiXmlDocument8StreamInEPSiPSs+0xdf>
 87e88df:	8b 1d dc 37 3f 09    	mov    0x93f37dc,%ebx
 87e88e5:	c6 42 2c 01          	movb   $0x1,0x2c(%edx)
 87e88e9:	c7 42 30 07 00 00 00 	movl   $0x7,0x30(%edx)
 87e88f0:	89 1c 24             	mov    %ebx,(%esp)
 87e88f3:	e8 b8 5a 89 ff       	call   807e3b0 <strlen@plt>
 87e88f8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e88fc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8900:	8b 45 08             	mov    0x8(%ebp),%eax
 87e8903:	83 c0 34             	add    $0x34,%eax
 87e8906:	89 04 24             	mov    %eax,(%esp)
 87e8909:	e8 92 fc f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e890e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e8911:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e8918:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e891f:	83 c4 3c             	add    $0x3c,%esp
 87e8922:	5b                   	pop    %ebx
 87e8923:	5e                   	pop    %esi
 87e8924:	5f                   	pop    %edi
 87e8925:	5d                   	pop    %ebp
 87e8926:	c3                   	ret
 87e8927:	8b 06                	mov    (%esi),%eax
 87e8929:	8b 55 08             	mov    0x8(%ebp),%edx
 87e892c:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 87e892f:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e8932:	83 c2 34             	add    $0x34,%edx
 87e8935:	89 55 dc             	mov    %edx,-0x24(%ebp)
 87e8938:	8b 44 06 14          	mov    0x14(%esi,%eax,1),%eax
 87e893c:	85 c0                	test   %eax,%eax
 87e893e:	75 0c                	jne    87e894c <_ZN13TiXmlDocument8StreamInEPSiPSs+0x10c>
 87e8940:	8b 13                	mov    (%ebx),%edx
 87e8942:	8b 52 f4             	mov    -0xc(%edx),%edx
 87e8945:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87e8948:	85 c0                	test   %eax,%eax
 87e894a:	74 54                	je     87e89a0 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x160>
 87e894c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e894f:	80 79 2c 00          	cmpb   $0x0,0x2c(%ecx)
 87e8953:	75 ca                	jne    87e891f <_ZN13TiXmlDocument8StreamInEPSiPSs+0xdf>
 87e8955:	8b 1d c4 37 3f 09    	mov    0x93f37c4,%ebx
 87e895b:	c6 41 2c 01          	movb   $0x1,0x2c(%ecx)
 87e895f:	c7 41 30 01 00 00 00 	movl   $0x1,0x30(%ecx)
 87e8966:	89 1c 24             	mov    %ebx,(%esp)
 87e8969:	e8 42 5a 89 ff       	call   807e3b0 <strlen@plt>
 87e896e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e8972:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 87e8975:	89 1c 24             	mov    %ebx,(%esp)
 87e8978:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e897c:	e8 1f fc f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e8981:	8b 45 08             	mov    0x8(%ebp),%eax
 87e8984:	c7 40 40 ff ff ff ff 	movl   $0xffffffff,0x40(%eax)
 87e898b:	c7 40 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%eax)
 87e8992:	83 c4 3c             	add    $0x3c,%esp
 87e8995:	5b                   	pop    %ebx
 87e8996:	5e                   	pop    %esi
 87e8997:	5f                   	pop    %edi
 87e8998:	5d                   	pop    %ebp
 87e8999:	c3                   	ret
 87e899a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e89a0:	89 34 24             	mov    %esi,(%esp)
 87e89a3:	e8 68 d5 ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e89a8:	83 f8 3e             	cmp    $0x3e,%eax
 87e89ab:	74 63                	je     87e8a10 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x1d0>
 87e89ad:	89 34 24             	mov    %esi,(%esp)
 87e89b0:	e8 3b d3 ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e89b5:	85 c0                	test   %eax,%eax
 87e89b7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e89ba:	0f 8e c3 00 00 00    	jle    87e8a83 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x243>
 87e89c0:	8b 03                	mov    (%ebx),%eax
 87e89c2:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e89c5:	8d 48 f4             	lea    -0xc(%eax),%ecx
 87e89c8:	8d 7a 01             	lea    0x1(%edx),%edi
 87e89cb:	3b 79 04             	cmp    0x4(%ecx),%edi
 87e89ce:	77 07                	ja     87e89d7 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x197>
 87e89d0:	8b 49 08             	mov    0x8(%ecx),%ecx
 87e89d3:	85 c9                	test   %ecx,%ecx
 87e89d5:	7e 11                	jle    87e89e8 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x1a8>
 87e89d7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e89db:	89 1c 24             	mov    %ebx,(%esp)
 87e89de:	e8 2d f3 f1 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e89e3:	8b 03                	mov    (%ebx),%eax
 87e89e5:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e89e8:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 87e89ec:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 87e89ef:	8b 13                	mov    (%ebx),%edx
 87e89f1:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e89f4:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e89f9:	0f 85 08 01 00 00    	jne    87e8b07 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x2c7>
 87e89ff:	8b 06                	mov    (%esi),%eax
 87e8a01:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e8a04:	8b 44 06 14          	mov    0x14(%esi,%eax,1),%eax
 87e8a08:	e9 3b ff ff ff       	jmp    87e8948 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x108>
 87e8a0d:	8d 76 00             	lea    0x0(%esi),%esi
 87e8a10:	8b 06                	mov    (%esi),%eax
 87e8a12:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e8a15:	8b 44 06 14          	mov    0x14(%esi,%eax,1),%eax
 87e8a19:	85 c0                	test   %eax,%eax
 87e8a1b:	0f 85 2b ff ff ff    	jne    87e894c <_ZN13TiXmlDocument8StreamInEPSiPSs+0x10c>
 87e8a21:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e8a24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e8a2b:	00 
 87e8a2c:	03 03                	add    (%ebx),%eax
 87e8a2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8a32:	8b 45 08             	mov    0x8(%ebp),%eax
 87e8a35:	89 04 24             	mov    %eax,(%esp)
 87e8a38:	e8 f3 e7 ff ff       	call   87e7230 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding>
 87e8a3d:	85 c0                	test   %eax,%eax
 87e8a3f:	89 c7                	mov    %eax,%edi
 87e8a41:	0f 84 90 00 00 00    	je     87e8ad7 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x297>
 87e8a47:	8b 00                	mov    (%eax),%eax
 87e8a49:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 87e8a4d:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e8a51:	89 3c 24             	mov    %edi,(%esp)
 87e8a54:	ff 50 48             	call   *0x48(%eax)
 87e8a57:	8b 07                	mov    (%edi),%eax
 87e8a59:	89 3c 24             	mov    %edi,(%esp)
 87e8a5c:	ff 50 2c             	call   *0x2c(%eax)
 87e8a5f:	8b 17                	mov    (%edi),%edx
 87e8a61:	89 3c 24             	mov    %edi,(%esp)
 87e8a64:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87e8a67:	ff 52 04             	call   *0x4(%edx)
 87e8a6a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87e8a6d:	85 c0                	test   %eax,%eax
 87e8a6f:	0f 85 aa fe ff ff    	jne    87e891f <_ZN13TiXmlDocument8StreamInEPSiPSs+0xdf>
 87e8a75:	8b 06                	mov    (%esi),%eax
 87e8a77:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e8a7a:	8b 44 06 14          	mov    0x14(%esi,%eax,1),%eax
 87e8a7e:	e9 b9 fe ff ff       	jmp    87e893c <_ZN13TiXmlDocument8StreamInEPSiPSs+0xfc>
 87e8a83:	8b 45 08             	mov    0x8(%ebp),%eax
 87e8a86:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e8a8a:	75 84                	jne    87e8a10 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x1d0>
 87e8a8c:	8b 3d f4 37 3f 09    	mov    0x93f37f4,%edi
 87e8a92:	c6 40 2c 01          	movb   $0x1,0x2c(%eax)
 87e8a96:	c7 40 30 0d 00 00 00 	movl   $0xd,0x30(%eax)
 87e8a9d:	89 3c 24             	mov    %edi,(%esp)
 87e8aa0:	e8 0b 59 89 ff       	call   807e3b0 <strlen@plt>
 87e8aa5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87e8aa8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e8aac:	89 14 24             	mov    %edx,(%esp)
 87e8aaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8ab3:	e8 e8 fa f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e8ab8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87e8abb:	8b 06                	mov    (%esi),%eax
 87e8abd:	c7 41 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ecx)
 87e8ac4:	c7 41 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ecx)
 87e8acb:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e8ace:	8b 44 06 14          	mov    0x14(%esi,%eax,1),%eax
 87e8ad2:	e9 42 ff ff ff       	jmp    87e8a19 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x1d9>
 87e8ad7:	8b 55 08             	mov    0x8(%ebp),%edx
 87e8ada:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e8ae1:	00 
 87e8ae2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e8ae9:	00 
 87e8aea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e8af1:	00 
 87e8af2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87e8af9:	00 
 87e8afa:	89 14 24             	mov    %edx,(%esp)
 87e8afd:	e8 2e e2 ff ff       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e8b02:	e9 18 fe ff ff       	jmp    87e891f <_ZN13TiXmlDocument8StreamInEPSiPSs+0xdf>
 87e8b07:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e8b0e:	89 7a f4             	mov    %edi,-0xc(%edx)
 87e8b11:	c6 44 38 0c 00       	movb   $0x0,0xc(%eax,%edi,1)
 87e8b16:	e9 e4 fe ff ff       	jmp    87e89ff <_ZN13TiXmlDocument8StreamInEPSiPSs+0x1bf>
 87e8b1b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 87e8b1e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e8b25:	89 4a f4             	mov    %ecx,-0xc(%edx)
 87e8b28:	c6 44 08 0c 00       	movb   $0x0,0xc(%eax,%ecx,1)
 87e8b2d:	e9 97 fd ff ff       	jmp    87e88c9 <_ZN13TiXmlDocument8StreamInEPSiPSs+0x89>
 87e8b32:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e8b39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDocument::StreamIn @ 0x87e8840

/* TiXmlDocument::StreamIn(std::istream*, std::string*) */

void __thiscall TiXmlDocument::StreamIn(TiXmlDocument *this,istream *param_1,string *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_20;
  
  while (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) == 0) {
    iVar4 = std::istream::peek(param_1);
    if (iVar4 == 0x3c) {
      iVar4 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
      goto LAB_087e893c;
    }
    if (iVar4 < 1) break;
    std::istream::get(param_1);
    iVar6 = *(int *)param_2;
    iVar7 = *(int *)(iVar6 + -0xc);
    uVar1 = iVar7 + 1;
    if ((*(uint *)(iVar6 + -8) < uVar1) || (0 < *(int *)(iVar6 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar6 = *(int *)param_2;
      iVar7 = *(int *)(iVar6 + -0xc);
    }
    *(char *)(iVar6 + iVar7) = (char)iVar4;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
  }
  uVar3 = TiXmlBase::errorString._28_4_;
  if (this[0x2c] == (TiXmlDocument)0x0) {
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 7;
    sVar5 = strlen((char *)uVar3);
    std::string::assign((string *)(this + 0x34),(char *)uVar3,sVar5);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
  }
  return;
LAB_087e893c:
  if (iVar4 != 0) {
LAB_087e894c:
    uVar3 = TiXmlBase::errorString._4_4_;
    if (this[0x2c] != (TiXmlDocument)0x0) {
      return;
    }
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 1;
    sVar5 = strlen((char *)uVar3);
    std::string::assign((string *)(this + 0x34),(char *)uVar3,sVar5);
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    return;
  }
  iVar4 = *(int *)(*(int *)param_2 + -0xc);
  iVar6 = 0;
  while( true ) {
    if (iVar6 != 0) goto LAB_087e894c;
    iVar6 = std::istream::peek(param_1);
    if (iVar6 == 0x3e) goto LAB_087e8a10;
    iVar6 = std::istream::get(param_1);
    uVar3 = TiXmlBase::errorString._52_4_;
    if (iVar6 < 1) break;
    iVar7 = *(int *)param_2;
    iVar9 = *(int *)(iVar7 + -0xc);
    uVar1 = iVar9 + 1;
    if ((*(uint *)(iVar7 + -8) < uVar1) || (0 < *(int *)(iVar7 + -4))) {
      std::string::reserve(param_2,uVar1);
      iVar7 = *(int *)param_2;
      iVar9 = *(int *)(iVar7 + -0xc);
    }
    local_20 = (undefined1)iVar6;
    *(undefined1 *)(iVar7 + iVar9) = local_20;
    puVar2 = *(undefined1 **)param_2;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
    iVar6 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
  }
  if (this[0x2c] == (TiXmlDocument)0x0) {
    this[0x2c] = (TiXmlDocument)0x1;
    *(undefined4 *)(this + 0x30) = 0xd;
    sVar5 = strlen((char *)uVar3);
    std::string::assign((string *)(this + 0x34),(char *)uVar3,sVar5);
    iVar6 = *(int *)param_1;
    *(undefined4 *)(this + 0x40) = 0xffffffff;
    *(undefined4 *)(this + 0x3c) = 0xffffffff;
    iVar6 = *(int *)(param_1 + *(int *)(iVar6 + -0xc) + 0x14);
  }
  else {
LAB_087e8a10:
    iVar6 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
  }
  if (iVar6 != 0) goto LAB_087e894c;
  piVar8 = (int *)TiXmlNode::Identify((TiXmlNode *)this,iVar4 + *(int *)param_2,0);
  if (piVar8 == (int *)0x0) {
    SetError(this,1,0,0,0);
    return;
  }
  (**(code **)(*piVar8 + 0x48))(piVar8,param_1,param_2);
  iVar4 = (**(code **)(*piVar8 + 0x2c))(piVar8);
  (**(code **)(*piVar8 + 4))(piVar8);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14);
  goto LAB_087e893c;
}

```

---

## TiXmlDocument

```asm
// === 087e2df0 TiXmlDocument::TiXmlDocument  [0x087e2df0-0x87e2ebf] ===
 87e2df0:	55                   	push   %ebp
 87e2df1:	89 e5                	mov    %esp,%ebp
 87e2df3:	56                   	push   %esi
 87e2df4:	53                   	push   %ebx
 87e2df5:	83 ec 20             	sub    $0x20,%esp
 87e2df8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e2dfb:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e2e02:	8d 73 34             	lea    0x34(%ebx),%esi
 87e2e05:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e2e0c:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e2e13:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e2e1a:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e2e21:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 87e2e28:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e2e2f:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e2e36:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e2e3d:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e2e44:	c7 03 48 20 de 08    	movl   $0x8de2048,(%ebx)
 87e2e4a:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e2e51:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e2e58:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e2e5f:	c7 43 38 04 00 00 00 	movl   $0x4,0x38(%ebx)
 87e2e66:	c6 43 44 00          	movb   $0x0,0x44(%ebx)
 87e2e6a:	c6 43 2c 00          	movb   $0x0,0x2c(%ebx)
 87e2e6e:	c7 43 30 00 00 00 00 	movl   $0x0,0x30(%ebx)
 87e2e75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e2e7c:	00 
 87e2e7d:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e2e84:	08 
 87e2e85:	89 34 24             	mov    %esi,(%esp)
 87e2e88:	e8 13 57 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e2e8d:	c7 43 40 00 00 00 00 	movl   $0x0,0x40(%ebx)
 87e2e94:	c7 43 3c 00 00 00 00 	movl   $0x0,0x3c(%ebx)
 87e2e9b:	83 c4 20             	add    $0x20,%esp
 87e2e9e:	5b                   	pop    %ebx
 87e2e9f:	5e                   	pop    %esi
 87e2ea0:	5d                   	pop    %ebp
 87e2ea1:	c3                   	ret
 87e2ea2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e2ea5:	89 34 24             	mov    %esi,(%esp)
 87e2ea8:	e8 33 4d f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e2ead:	89 1c 24             	mov    %ebx,(%esp)
 87e2eb0:	e8 bb fc ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e2eb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e2eb8:	89 04 24             	mov    %eax,(%esp)
 87e2ebb:	e8 90 08 30 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// TiXmlDocument::TiXmlDocument @ 0x87e2df0

/* TiXmlDocument::TiXmlDocument() */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDocument_08de2048;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 4;
  this[0x44] = (TiXmlDocument)0x0;
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
                    /* try { // try from 087e2e88 to 087e2e8c has its CatchHandler @ 087e2ea2 */
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}

```

---

## TiXmlDocument_087e2fa0

```asm
// === 087e2fa0 TiXmlDocument::TiXmlDocument  [0x087e2fa0-0x87e308f] ===
 87e2fa0:	55                   	push   %ebp
 87e2fa1:	89 e5                	mov    %esp,%ebp
 87e2fa3:	56                   	push   %esi
 87e2fa4:	53                   	push   %ebx
 87e2fa5:	83 ec 20             	sub    $0x20,%esp
 87e2fa8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e2fab:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e2fae:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e2fb5:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e2fbc:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e2fc3:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e2fca:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e2fd1:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 87e2fd8:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e2fdf:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e2fe6:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e2fed:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e2ff4:	c7 03 48 20 de 08    	movl   $0x8de2048,(%ebx)
 87e2ffa:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e3001:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e3008:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e300f:	c7 43 38 04 00 00 00 	movl   $0x4,0x38(%ebx)
 87e3016:	c6 43 44 00          	movb   $0x0,0x44(%ebx)
 87e301a:	89 34 24             	mov    %esi,(%esp)
 87e301d:	e8 8e b3 89 ff       	call   807e3b0 <strlen@plt>
 87e3022:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e3026:	8d 73 34             	lea    0x34(%ebx),%esi
 87e3029:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e302d:	8d 43 20             	lea    0x20(%ebx),%eax
 87e3030:	89 04 24             	mov    %eax,(%esp)
 87e3033:	e8 68 55 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e3038:	c6 43 2c 00          	movb   $0x0,0x2c(%ebx)
 87e303c:	c7 43 30 00 00 00 00 	movl   $0x0,0x30(%ebx)
 87e3043:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e304a:	00 
 87e304b:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e3052:	08 
 87e3053:	89 34 24             	mov    %esi,(%esp)
 87e3056:	e8 45 55 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e305b:	c7 43 40 00 00 00 00 	movl   $0x0,0x40(%ebx)
 87e3062:	c7 43 3c 00 00 00 00 	movl   $0x0,0x3c(%ebx)
 87e3069:	83 c4 20             	add    $0x20,%esp
 87e306c:	5b                   	pop    %ebx
 87e306d:	5e                   	pop    %esi
 87e306e:	5d                   	pop    %ebp
 87e306f:	c3                   	ret
 87e3070:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e3073:	89 34 24             	mov    %esi,(%esp)
 87e3076:	e8 65 4b f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e307b:	89 1c 24             	mov    %ebx,(%esp)
 87e307e:	e8 ed fa ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e3083:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e3086:	89 04 24             	mov    %eax,(%esp)
 87e3089:	e8 c2 06 30 00       	call   8ae3750 <_Unwind_Resume>
 87e308e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlDocument::TiXmlDocument @ 0x87e2fa0

/* TiXmlDocument::TiXmlDocument(char const*) */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this,char *param_1)

{
  size_t sVar1;
  
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDocument_08de2048;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 4;
  this[0x44] = (TiXmlDocument)0x0;
  sVar1 = strlen(param_1);
                    /* try { // try from 087e3033 to 087e305a has its CatchHandler @ 087e3070 */
  std::string::assign((string *)(this + 0x20),param_1,sVar1);
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}

```

---

## TiXmlDocument_087e33a0

```asm
// === 087e33a0 TiXmlDocument::TiXmlDocument  [0x087e33a0-0x87e348f] ===
 87e33a0:	55                   	push   %ebp
 87e33a1:	89 e5                	mov    %esp,%ebp
 87e33a3:	56                   	push   %esi
 87e33a4:	53                   	push   %ebx
 87e33a5:	83 ec 20             	sub    $0x20,%esp
 87e33a8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e33ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e33ae:	c7 43 08 ff ff ff ff 	movl   $0xffffffff,0x8(%ebx)
 87e33b5:	8d 73 34             	lea    0x34(%ebx),%esi
 87e33b8:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 87e33bf:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87e33c6:	c7 43 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%ebx)
 87e33cd:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 87e33d4:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 87e33db:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 87e33e2:	c7 43 1c 00 00 00 00 	movl   $0x0,0x1c(%ebx)
 87e33e9:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 87e33f0:	c7 43 28 00 00 00 00 	movl   $0x0,0x28(%ebx)
 87e33f7:	c7 03 48 20 de 08    	movl   $0x8de2048,(%ebx)
 87e33fd:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e3404:	c7 43 40 ff ff ff ff 	movl   $0xffffffff,0x40(%ebx)
 87e340b:	c7 43 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%ebx)
 87e3412:	c7 43 38 04 00 00 00 	movl   $0x4,0x38(%ebx)
 87e3419:	c6 43 44 00          	movb   $0x0,0x44(%ebx)
 87e341d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e3421:	8d 43 20             	lea    0x20(%ebx),%eax
 87e3424:	89 04 24             	mov    %eax,(%esp)
 87e3427:	e8 04 48 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e342c:	c6 43 2c 00          	movb   $0x0,0x2c(%ebx)
 87e3430:	c7 43 30 00 00 00 00 	movl   $0x0,0x30(%ebx)
 87e3437:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e343e:	00 
 87e343f:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e3446:	08 
 87e3447:	89 34 24             	mov    %esi,(%esp)
 87e344a:	e8 51 51 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e344f:	c7 43 40 00 00 00 00 	movl   $0x0,0x40(%ebx)
 87e3456:	c7 43 3c 00 00 00 00 	movl   $0x0,0x3c(%ebx)
 87e345d:	83 c4 20             	add    $0x20,%esp
 87e3460:	5b                   	pop    %ebx
 87e3461:	5e                   	pop    %esi
 87e3462:	5d                   	pop    %ebp
 87e3463:	c3                   	ret
 87e3464:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87e3467:	89 34 24             	mov    %esi,(%esp)
 87e346a:	e8 71 47 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e346f:	89 1c 24             	mov    %ebx,(%esp)
 87e3472:	e8 f9 f6 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e3477:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87e347a:	89 04 24             	mov    %eax,(%esp)
 87e347d:	e8 ce 02 30 00       	call   8ae3750 <_Unwind_Resume>
 87e3482:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e3489:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlDocument::TiXmlDocument @ 0x87e33a0

/* TiXmlDocument::TiXmlDocument(std::string const&) */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this,string *param_1)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDocument_08de2048;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 4;
  this[0x44] = (TiXmlDocument)0x0;
                    /* try { // try from 087e3427 to 087e344e has its CatchHandler @ 087e3464 */
  std::string::assign((string *)(this + 0x20),param_1);
  this[0x2c] = (TiXmlDocument)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  std::string::assign((string *)(this + 0x34),"",0);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}

```

---

## TiXmlDocument_087e3720

```asm
// === 087e3720 TiXmlDocument::TiXmlDocument  [0x087e3720-0x87e383f] ===
 87e3720:	55                   	push   %ebp
 87e3721:	89 e5                	mov    %esp,%ebp
 87e3723:	57                   	push   %edi
 87e3724:	56                   	push   %esi
 87e3725:	53                   	push   %ebx
 87e3726:	83 ec 1c             	sub    $0x1c,%esp
 87e3729:	8b 75 08             	mov    0x8(%ebp),%esi
 87e372c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e372f:	c7 46 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%esi)
 87e3736:	8b 7b 20             	mov    0x20(%ebx),%edi
 87e3739:	c7 46 08 ff ff ff ff 	movl   $0xffffffff,0x8(%esi)
 87e3740:	c7 46 04 ff ff ff ff 	movl   $0xffffffff,0x4(%esi)
 87e3747:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 87e374e:	c7 46 10 00 00 00 00 	movl   $0x0,0x10(%esi)
 87e3755:	c7 46 14 00 00 00 00 	movl   $0x0,0x14(%esi)
 87e375c:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 87e3763:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 87e376a:	c7 46 24 00 00 00 00 	movl   $0x0,0x24(%esi)
 87e3771:	c7 46 28 00 00 00 00 	movl   $0x0,0x28(%esi)
 87e3778:	c7 06 48 20 de 08    	movl   $0x8de2048,(%esi)
 87e377e:	c7 46 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%esi)
 87e3785:	c7 46 40 ff ff ff ff 	movl   $0xffffffff,0x40(%esi)
 87e378c:	c7 46 3c ff ff ff ff 	movl   $0xffffffff,0x3c(%esi)
 87e3793:	89 3c 24             	mov    %edi,(%esp)
 87e3796:	e8 15 ac 89 ff       	call   807e3b0 <strlen@plt>
 87e379b:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e379f:	8d 7e 34             	lea    0x34(%esi),%edi
 87e37a2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e37a6:	8d 46 20             	lea    0x20(%esi),%eax
 87e37a9:	89 04 24             	mov    %eax,(%esp)
 87e37ac:	e8 ef 4d f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e37b1:	8b 43 0c             	mov    0xc(%ebx),%eax
 87e37b4:	8b 53 08             	mov    0x8(%ebx),%edx
 87e37b7:	89 46 0c             	mov    %eax,0xc(%esi)
 87e37ba:	8b 43 04             	mov    0x4(%ebx),%eax
 87e37bd:	89 56 08             	mov    %edx,0x8(%esi)
 87e37c0:	89 46 04             	mov    %eax,0x4(%esi)
 87e37c3:	0f b6 43 2c          	movzbl 0x2c(%ebx),%eax
 87e37c7:	88 46 2c             	mov    %al,0x2c(%esi)
 87e37ca:	8b 43 30             	mov    0x30(%ebx),%eax
 87e37cd:	89 46 30             	mov    %eax,0x30(%esi)
 87e37d0:	8d 43 34             	lea    0x34(%ebx),%eax
 87e37d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e37d7:	89 3c 24             	mov    %edi,(%esp)
 87e37da:	e8 51 44 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e37df:	8b 43 38             	mov    0x38(%ebx),%eax
 87e37e2:	8b 53 40             	mov    0x40(%ebx),%edx
 87e37e5:	89 46 38             	mov    %eax,0x38(%esi)
 87e37e8:	8b 43 3c             	mov    0x3c(%ebx),%eax
 87e37eb:	89 56 40             	mov    %edx,0x40(%esi)
 87e37ee:	89 46 3c             	mov    %eax,0x3c(%esi)
 87e37f1:	0f b6 43 44          	movzbl 0x44(%ebx),%eax
 87e37f5:	8b 5b 18             	mov    0x18(%ebx),%ebx
 87e37f8:	88 46 44             	mov    %al,0x44(%esi)
 87e37fb:	85 db                	test   %ebx,%ebx
 87e37fd:	74 1c                	je     87e381b <_ZN13TiXmlDocumentC1ERKS_+0xfb>
 87e37ff:	90                   	nop
 87e3800:	8b 03                	mov    (%ebx),%eax
 87e3802:	89 1c 24             	mov    %ebx,(%esp)
 87e3805:	ff 50 40             	call   *0x40(%eax)
 87e3808:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e380c:	89 34 24             	mov    %esi,(%esp)
 87e380f:	e8 3c e9 ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e3814:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e3817:	85 db                	test   %ebx,%ebx
 87e3819:	75 e5                	jne    87e3800 <_ZN13TiXmlDocumentC1ERKS_+0xe0>
 87e381b:	83 c4 1c             	add    $0x1c,%esp
 87e381e:	5b                   	pop    %ebx
 87e381f:	5e                   	pop    %esi
 87e3820:	5f                   	pop    %edi
 87e3821:	5d                   	pop    %ebp
 87e3822:	c3                   	ret
 87e3823:	89 c3                	mov    %eax,%ebx
 87e3825:	89 3c 24             	mov    %edi,(%esp)
 87e3828:	e8 b3 43 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e382d:	89 34 24             	mov    %esi,(%esp)
 87e3830:	e8 3b f3 ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e3835:	89 1c 24             	mov    %ebx,(%esp)
 87e3838:	e8 13 ff 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e383d:	8d 76 00             	lea    0x0(%esi),%esi

```

```c
// TiXmlDocument::TiXmlDocument @ 0x87e3720

/* TiXmlDocument::TiXmlDocument(TiXmlDocument const&) */

void __thiscall TiXmlDocument::TiXmlDocument(TiXmlDocument *this,TiXmlDocument *param_1)

{
  char *__s;
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  size_t sVar4;
  TiXmlNode *pTVar5;
  
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  __s = *(char **)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TiXmlDocument_08de2048;
  *(undefined1 **)(this + 0x34) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  sVar4 = strlen(__s);
                    /* try { // try from 087e37ac to 087e3813 has its CatchHandler @ 087e3823 */
  std::string::assign((string *)(this + 0x20),__s,sVar4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  piVar3 = *(int **)(param_1 + 0x18);
  this[0x44] = param_1[0x44];
  for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
    pTVar5 = (TiXmlNode *)(**(code **)(*piVar3 + 0x40))(piVar3);
    TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar5);
  }
  return;
}

```

---

## operator=

```asm
// === 087e2960 TiXmlDocument::operator=  [0x087e2960-0x87e2a2f] ===
 87e2960:	55                   	push   %ebp
 87e2961:	89 e5                	mov    %esp,%ebp
 87e2963:	57                   	push   %edi
 87e2964:	56                   	push   %esi
 87e2965:	53                   	push   %ebx
 87e2966:	83 ec 1c             	sub    $0x1c,%esp
 87e2969:	8b 75 08             	mov    0x8(%ebp),%esi
 87e296c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e296f:	8b 46 18             	mov    0x18(%esi),%eax
 87e2972:	85 c0                	test   %eax,%eax
 87e2974:	75 04                	jne    87e297a <_ZN13TiXmlDocumentaSERKS_+0x1a>
 87e2976:	eb 11                	jmp    87e2989 <_ZN13TiXmlDocumentaSERKS_+0x29>
 87e2978:	89 f8                	mov    %edi,%eax
 87e297a:	8b 78 28             	mov    0x28(%eax),%edi
 87e297d:	8b 10                	mov    (%eax),%edx
 87e297f:	89 04 24             	mov    %eax,(%esp)
 87e2982:	ff 52 04             	call   *0x4(%edx)
 87e2985:	85 ff                	test   %edi,%edi
 87e2987:	75 ef                	jne    87e2978 <_ZN13TiXmlDocumentaSERKS_+0x18>
 87e2989:	8b 7b 20             	mov    0x20(%ebx),%edi
 87e298c:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 87e2993:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 87e299a:	89 3c 24             	mov    %edi,(%esp)
 87e299d:	e8 0e ba 89 ff       	call   807e3b0 <strlen@plt>
 87e29a2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e29a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e29aa:	8d 46 20             	lea    0x20(%esi),%eax
 87e29ad:	89 04 24             	mov    %eax,(%esp)
 87e29b0:	e8 eb 5b f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e29b5:	8b 43 0c             	mov    0xc(%ebx),%eax
 87e29b8:	8b 53 08             	mov    0x8(%ebx),%edx
 87e29bb:	89 46 0c             	mov    %eax,0xc(%esi)
 87e29be:	8b 43 04             	mov    0x4(%ebx),%eax
 87e29c1:	89 56 08             	mov    %edx,0x8(%esi)
 87e29c4:	89 46 04             	mov    %eax,0x4(%esi)
 87e29c7:	0f b6 43 2c          	movzbl 0x2c(%ebx),%eax
 87e29cb:	88 46 2c             	mov    %al,0x2c(%esi)
 87e29ce:	8b 43 30             	mov    0x30(%ebx),%eax
 87e29d1:	89 46 30             	mov    %eax,0x30(%esi)
 87e29d4:	8d 43 34             	lea    0x34(%ebx),%eax
 87e29d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e29db:	8d 46 34             	lea    0x34(%esi),%eax
 87e29de:	89 04 24             	mov    %eax,(%esp)
 87e29e1:	e8 4a 52 f2 ff       	call   8707c30 <_ZNSs6assignERKSs>
 87e29e6:	8b 43 38             	mov    0x38(%ebx),%eax
 87e29e9:	8b 53 40             	mov    0x40(%ebx),%edx
 87e29ec:	89 46 38             	mov    %eax,0x38(%esi)
 87e29ef:	8b 43 3c             	mov    0x3c(%ebx),%eax
 87e29f2:	89 56 40             	mov    %edx,0x40(%esi)
 87e29f5:	89 46 3c             	mov    %eax,0x3c(%esi)
 87e29f8:	0f b6 43 44          	movzbl 0x44(%ebx),%eax
 87e29fc:	8b 5b 18             	mov    0x18(%ebx),%ebx
 87e29ff:	88 46 44             	mov    %al,0x44(%esi)
 87e2a02:	85 db                	test   %ebx,%ebx
 87e2a04:	74 1d                	je     87e2a23 <_ZN13TiXmlDocumentaSERKS_+0xc3>
 87e2a06:	66 90                	xchg   %ax,%ax
 87e2a08:	8b 03                	mov    (%ebx),%eax
 87e2a0a:	89 1c 24             	mov    %ebx,(%esp)
 87e2a0d:	ff 50 40             	call   *0x40(%eax)
 87e2a10:	89 34 24             	mov    %esi,(%esp)
 87e2a13:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e2a17:	e8 34 f7 ff ff       	call   87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e2a1c:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e2a1f:	85 db                	test   %ebx,%ebx
 87e2a21:	75 e5                	jne    87e2a08 <_ZN13TiXmlDocumentaSERKS_+0xa8>
 87e2a23:	83 c4 1c             	add    $0x1c,%esp
 87e2a26:	89 f0                	mov    %esi,%eax
 87e2a28:	5b                   	pop    %ebx
 87e2a29:	5e                   	pop    %esi
 87e2a2a:	5f                   	pop    %edi
 87e2a2b:	5d                   	pop    %ebp
 87e2a2c:	c3                   	ret
 87e2a2d:	90                   	nop
 87e2a2e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlDocument::operator= @ 0x87e2960

/* TiXmlDocument::TEMPNAMEPLACEHOLDERVALUE(TiXmlDocument const&) */

TiXmlDocument * __thiscall TiXmlDocument::operator=(TiXmlDocument *this,TiXmlDocument *param_1)

{
  int *piVar1;
  char *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  size_t sVar5;
  TiXmlNode *pTVar6;
  
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
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::string::assign((string *)(this + 0x34),(string *)(param_1 + 0x34));
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x3c) = uVar3;
  piVar4 = *(int **)(param_1 + 0x18);
  this[0x44] = param_1[0x44];
  for (; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[10]) {
    pTVar6 = (TiXmlNode *)(**(code **)(*piVar4 + 0x40))(piVar4);
    TiXmlNode::LinkEndChild((TiXmlNode *)this,pTVar6);
  }
  return this;
}

```

