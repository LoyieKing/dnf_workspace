# TiXmlNode

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 23

---

## Clear

```asm
// === 087dfdf0 TiXmlNode::Clear  [0x087dfdf0-0x87dfe2f] ===
 87dfdf0:	55                   	push   %ebp
 87dfdf1:	89 e5                	mov    %esp,%ebp
 87dfdf3:	56                   	push   %esi
 87dfdf4:	53                   	push   %ebx
 87dfdf5:	83 ec 10             	sub    $0x10,%esp
 87dfdf8:	8b 75 08             	mov    0x8(%ebp),%esi
 87dfdfb:	8b 46 18             	mov    0x18(%esi),%eax
 87dfdfe:	85 c0                	test   %eax,%eax
 87dfe00:	75 08                	jne    87dfe0a <_ZN9TiXmlNode5ClearEv+0x1a>
 87dfe02:	eb 15                	jmp    87dfe19 <_ZN9TiXmlNode5ClearEv+0x29>
 87dfe04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87dfe08:	89 d8                	mov    %ebx,%eax
 87dfe0a:	8b 58 28             	mov    0x28(%eax),%ebx
 87dfe0d:	8b 10                	mov    (%eax),%edx
 87dfe0f:	89 04 24             	mov    %eax,(%esp)
 87dfe12:	ff 52 04             	call   *0x4(%edx)
 87dfe15:	85 db                	test   %ebx,%ebx
 87dfe17:	75 ef                	jne    87dfe08 <_ZN9TiXmlNode5ClearEv+0x18>
 87dfe19:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 87dfe20:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 87dfe27:	83 c4 10             	add    $0x10,%esp
 87dfe2a:	5b                   	pop    %ebx
 87dfe2b:	5e                   	pop    %esi
 87dfe2c:	5d                   	pop    %ebp
 87dfe2d:	c3                   	ret
 87dfe2e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlNode::Clear @ 0x87dfdf0

/* TiXmlNode::Clear() */

void __thiscall TiXmlNode::Clear(TiXmlNode *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(this + 0x18);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[10];
    (**(code **)(*piVar2 + 4))(piVar2);
    piVar2 = piVar1;
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}

```

---

## CopyTo

```asm
// === 087e1e30 TiXmlNode::CopyTo  [0x087e1e30-0x87e1e8f] ===
 87e1e30:	55                   	push   %ebp
 87e1e31:	89 e5                	mov    %esp,%ebp
 87e1e33:	83 ec 28             	sub    $0x28,%esp
 87e1e36:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e1e39:	8b 75 08             	mov    0x8(%ebp),%esi
 87e1e3c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e1e3f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e1e42:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e1e45:	8b 7e 20             	mov    0x20(%esi),%edi
 87e1e48:	89 3c 24             	mov    %edi,(%esp)
 87e1e4b:	e8 60 c5 89 ff       	call   807e3b0 <strlen@plt>
 87e1e50:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e1e54:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e1e58:	8d 43 20             	lea    0x20(%ebx),%eax
 87e1e5b:	89 04 24             	mov    %eax,(%esp)
 87e1e5e:	e8 3d 67 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e1e63:	8b 46 0c             	mov    0xc(%esi),%eax
 87e1e66:	8b 56 08             	mov    0x8(%esi),%edx
 87e1e69:	89 43 0c             	mov    %eax,0xc(%ebx)
 87e1e6c:	8b 46 04             	mov    0x4(%esi),%eax
 87e1e6f:	89 53 08             	mov    %edx,0x8(%ebx)
 87e1e72:	89 43 04             	mov    %eax,0x4(%ebx)
 87e1e75:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e1e78:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e1e7b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e1e7e:	89 ec                	mov    %ebp,%esp
 87e1e80:	5d                   	pop    %ebp
 87e1e81:	c3                   	ret
 87e1e82:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1e89:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlNode::CopyTo @ 0x87e1e30

/* TiXmlNode::CopyTo(TiXmlNode*) const */

void __thiscall TiXmlNode::CopyTo(TiXmlNode *this,TiXmlNode *param_1)

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

## FirstChild

```asm
// === 087e0330 TiXmlNode::FirstChild  [0x087e0330-0x87e036f] ===
 87e0330:	55                   	push   %ebp
 87e0331:	89 e5                	mov    %esp,%ebp
 87e0333:	56                   	push   %esi
 87e0334:	53                   	push   %ebx
 87e0335:	83 ec 10             	sub    $0x10,%esp
 87e0338:	8b 45 08             	mov    0x8(%ebp),%eax
 87e033b:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e033e:	8b 58 18             	mov    0x18(%eax),%ebx
 87e0341:	85 db                	test   %ebx,%ebx
 87e0343:	75 0a                	jne    87e034f <_ZNK9TiXmlNode10FirstChildEPKc+0x1f>
 87e0345:	eb 1b                	jmp    87e0362 <_ZNK9TiXmlNode10FirstChildEPKc+0x32>
 87e0347:	90                   	nop
 87e0348:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e034b:	85 db                	test   %ebx,%ebx
 87e034d:	74 13                	je     87e0362 <_ZNK9TiXmlNode10FirstChildEPKc+0x32>
 87e034f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e0352:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0356:	89 04 24             	mov    %eax,(%esp)
 87e0359:	e8 82 e1 89 ff       	call   807e4e0 <strcmp@plt>
 87e035e:	85 c0                	test   %eax,%eax
 87e0360:	75 e6                	jne    87e0348 <_ZNK9TiXmlNode10FirstChildEPKc+0x18>
 87e0362:	83 c4 10             	add    $0x10,%esp
 87e0365:	89 d8                	mov    %ebx,%eax
 87e0367:	5b                   	pop    %ebx
 87e0368:	5e                   	pop    %esi
 87e0369:	5d                   	pop    %ebp
 87e036a:	c3                   	ret
 87e036b:	90                   	nop
 87e036c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::FirstChild @ 0x87e0330

/* TiXmlNode::FirstChild(char const*) const */

int __thiscall TiXmlNode::FirstChild(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x18);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  return iVar1;
}

```

---

## FirstChildElement

```asm
// === 087dfe30 TiXmlNode::FirstChildElement  [0x087dfe30-0x87dfe7f] ===
 87dfe30:	55                   	push   %ebp
 87dfe31:	89 e5                	mov    %esp,%ebp
 87dfe33:	53                   	push   %ebx
 87dfe34:	83 ec 14             	sub    $0x14,%esp
 87dfe37:	8b 45 08             	mov    0x8(%ebp),%eax
 87dfe3a:	8b 58 18             	mov    0x18(%eax),%ebx
 87dfe3d:	85 db                	test   %ebx,%ebx
 87dfe3f:	75 0e                	jne    87dfe4f <_ZNK9TiXmlNode17FirstChildElementEv+0x1f>
 87dfe41:	eb 2d                	jmp    87dfe70 <_ZNK9TiXmlNode17FirstChildElementEv+0x40>
 87dfe43:	90                   	nop
 87dfe44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87dfe48:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87dfe4b:	85 db                	test   %ebx,%ebx
 87dfe4d:	74 21                	je     87dfe70 <_ZNK9TiXmlNode17FirstChildElementEv+0x40>
 87dfe4f:	8b 03                	mov    (%ebx),%eax
 87dfe51:	89 1c 24             	mov    %ebx,(%esp)
 87dfe54:	ff 50 14             	call   *0x14(%eax)
 87dfe57:	85 c0                	test   %eax,%eax
 87dfe59:	74 ed                	je     87dfe48 <_ZNK9TiXmlNode17FirstChildElementEv+0x18>
 87dfe5b:	8b 03                	mov    (%ebx),%eax
 87dfe5d:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87dfe60:	8b 40 14             	mov    0x14(%eax),%eax
 87dfe63:	83 c4 14             	add    $0x14,%esp
 87dfe66:	5b                   	pop    %ebx
 87dfe67:	5d                   	pop    %ebp
 87dfe68:	ff e0                	jmp    *%eax
 87dfe6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87dfe70:	83 c4 14             	add    $0x14,%esp
 87dfe73:	31 c0                	xor    %eax,%eax
 87dfe75:	5b                   	pop    %ebx
 87dfe76:	5d                   	pop    %ebp
 87dfe77:	c3                   	ret
 87dfe78:	90                   	nop
 87dfe79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::FirstChildElement @ 0x87dfe30

/* TiXmlNode::FirstChildElement() const */

undefined4 __thiscall TiXmlNode::FirstChildElement(TiXmlNode *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x18);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar2 != 0) break;
    piVar1 = (int *)piVar1[10];
  }
                    /* WARNING: Could not recover jumptable at 0x087dfe68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*piVar1 + 0x14))();
  return uVar3;
}

```

---

## FirstChildElement_087e0f50

```asm
// === 087e0f50 TiXmlNode::FirstChildElement  [0x087e0f50-0x87e0fcf] ===
 87e0f50:	55                   	push   %ebp
 87e0f51:	89 e5                	mov    %esp,%ebp
 87e0f53:	56                   	push   %esi
 87e0f54:	53                   	push   %ebx
 87e0f55:	83 ec 10             	sub    $0x10,%esp
 87e0f58:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0f5b:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e0f5e:	8b 58 18             	mov    0x18(%eax),%ebx
 87e0f61:	85 db                	test   %ebx,%ebx
 87e0f63:	75 0a                	jne    87e0f6f <_ZNK9TiXmlNode17FirstChildElementEPKc+0x1f>
 87e0f65:	eb 4b                	jmp    87e0fb2 <_ZNK9TiXmlNode17FirstChildElementEPKc+0x62>
 87e0f67:	90                   	nop
 87e0f68:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e0f6b:	85 db                	test   %ebx,%ebx
 87e0f6d:	74 43                	je     87e0fb2 <_ZNK9TiXmlNode17FirstChildElementEPKc+0x62>
 87e0f6f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e0f72:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0f76:	89 04 24             	mov    %eax,(%esp)
 87e0f79:	e8 62 d5 89 ff       	call   807e4e0 <strcmp@plt>
 87e0f7e:	85 c0                	test   %eax,%eax
 87e0f80:	75 e6                	jne    87e0f68 <_ZNK9TiXmlNode17FirstChildElementEPKc+0x18>
 87e0f82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e0f88:	8b 03                	mov    (%ebx),%eax
 87e0f8a:	89 1c 24             	mov    %ebx,(%esp)
 87e0f8d:	ff 50 14             	call   *0x14(%eax)
 87e0f90:	85 c0                	test   %eax,%eax
 87e0f92:	74 17                	je     87e0fab <_ZNK9TiXmlNode17FirstChildElementEPKc+0x5b>
 87e0f94:	eb 25                	jmp    87e0fbb <_ZNK9TiXmlNode17FirstChildElementEPKc+0x6b>
 87e0f96:	66 90                	xchg   %ax,%ax
 87e0f98:	8b 43 20             	mov    0x20(%ebx),%eax
 87e0f9b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0f9f:	89 04 24             	mov    %eax,(%esp)
 87e0fa2:	e8 39 d5 89 ff       	call   807e4e0 <strcmp@plt>
 87e0fa7:	85 c0                	test   %eax,%eax
 87e0fa9:	74 dd                	je     87e0f88 <_ZNK9TiXmlNode17FirstChildElementEPKc+0x38>
 87e0fab:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e0fae:	85 db                	test   %ebx,%ebx
 87e0fb0:	75 e6                	jne    87e0f98 <_ZNK9TiXmlNode17FirstChildElementEPKc+0x48>
 87e0fb2:	83 c4 10             	add    $0x10,%esp
 87e0fb5:	31 c0                	xor    %eax,%eax
 87e0fb7:	5b                   	pop    %ebx
 87e0fb8:	5e                   	pop    %esi
 87e0fb9:	5d                   	pop    %ebp
 87e0fba:	c3                   	ret
 87e0fbb:	8b 03                	mov    (%ebx),%eax
 87e0fbd:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e0fc0:	8b 40 14             	mov    0x14(%eax),%eax
 87e0fc3:	83 c4 10             	add    $0x10,%esp
 87e0fc6:	5b                   	pop    %ebx
 87e0fc7:	5e                   	pop    %esi
 87e0fc8:	5d                   	pop    %ebp
 87e0fc9:	ff e0                	jmp    *%eax
 87e0fcb:	90                   	nop
 87e0fcc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::FirstChildElement @ 0x87e0f50

/* TiXmlNode::FirstChildElement(char const*) const */

undefined4 __thiscall TiXmlNode::FirstChildElement(TiXmlNode *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this + 0x18);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)piVar3[8],param_1);
    if (iVar1 == 0) break;
    piVar3 = (int *)piVar3[10];
  }
  do {
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x087e0fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar3 + 0x14))();
      return uVar2;
    }
    do {
      piVar3 = (int *)piVar3[10];
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      iVar1 = strcmp((char *)piVar3[8],param_1);
    } while (iVar1 != 0);
  } while( true );
}

```

---

## GetDocument

```asm
// === 087dfed0 TiXmlNode::GetDocument  [0x087dfed0-0x87dff0f] ===
 87dfed0:	55                   	push   %ebp
 87dfed1:	89 e5                	mov    %esp,%ebp
 87dfed3:	53                   	push   %ebx
 87dfed4:	83 ec 14             	sub    $0x14,%esp
 87dfed7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87dfeda:	85 db                	test   %ebx,%ebx
 87dfedc:	75 09                	jne    87dfee7 <_ZNK9TiXmlNode11GetDocumentEv+0x17>
 87dfede:	eb 28                	jmp    87dff08 <_ZNK9TiXmlNode11GetDocumentEv+0x38>
 87dfee0:	8b 5b 10             	mov    0x10(%ebx),%ebx
 87dfee3:	85 db                	test   %ebx,%ebx
 87dfee5:	74 21                	je     87dff08 <_ZNK9TiXmlNode11GetDocumentEv+0x38>
 87dfee7:	8b 03                	mov    (%ebx),%eax
 87dfee9:	89 1c 24             	mov    %ebx,(%esp)
 87dfeec:	ff 50 10             	call   *0x10(%eax)
 87dfeef:	85 c0                	test   %eax,%eax
 87dfef1:	74 ed                	je     87dfee0 <_ZNK9TiXmlNode11GetDocumentEv+0x10>
 87dfef3:	8b 03                	mov    (%ebx),%eax
 87dfef5:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87dfef8:	8b 40 10             	mov    0x10(%eax),%eax
 87dfefb:	83 c4 14             	add    $0x14,%esp
 87dfefe:	5b                   	pop    %ebx
 87dfeff:	5d                   	pop    %ebp
 87dff00:	ff e0                	jmp    *%eax
 87dff02:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87dff08:	83 c4 14             	add    $0x14,%esp
 87dff0b:	31 c0                	xor    %eax,%eax
 87dff0d:	5b                   	pop    %ebx
 87dff0e:	5d                   	pop    %ebp
 87dff0f:	c3                   	ret

```

```c
// TiXmlNode::GetDocument @ 0x87dfed0

/* TiXmlNode::GetDocument() const */

undefined4 __thiscall TiXmlNode::GetDocument(TiXmlNode *this)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (this == (TiXmlNode *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)this + 0x10))(this);
    if (iVar1 != 0) break;
    this = *(TiXmlNode **)(this + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x087dff00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(int *)this + 0x10))();
  return uVar2;
}

```

---

## Identify

```asm
// === 087e7230 TiXmlNode::Identify  [0x087e7230-0x87e74ff] ===
 87e7230:	55                   	push   %ebp
 87e7231:	89 e5                	mov    %esp,%ebp
 87e7233:	83 ec 28             	sub    $0x28,%esp
 87e7236:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e7239:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e723c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e723f:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e7242:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e7245:	85 f6                	test   %esi,%esi
 87e7247:	75 0f                	jne    87e7258 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x28>
 87e7249:	31 c0                	xor    %eax,%eax
 87e724b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e724e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e7251:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e7254:	89 ec                	mov    %ebp,%esp
 87e7256:	5d                   	pop    %ebp
 87e7257:	c3                   	ret
 87e7258:	0f b6 1e             	movzbl (%esi),%ebx
 87e725b:	84 db                	test   %bl,%bl
 87e725d:	74 ea                	je     87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e725f:	83 ff 01             	cmp    $0x1,%edi
 87e7262:	0f 84 d2 00 00 00    	je     87e733a <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x10a>
 87e7268:	0f b6 c3             	movzbl %bl,%eax
 87e726b:	89 04 24             	mov    %eax,(%esp)
 87e726e:	e8 0d 70 89 ff       	call   807e280 <isspace@plt>
 87e7273:	80 fb 0a             	cmp    $0xa,%bl
 87e7276:	74 10                	je     87e7288 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x58>
 87e7278:	85 c0                	test   %eax,%eax
 87e727a:	75 0c                	jne    87e7288 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x58>
 87e727c:	80 fb 0d             	cmp    $0xd,%bl
 87e727f:	90                   	nop
 87e7280:	0f 85 d2 00 00 00    	jne    87e7358 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x128>
 87e7286:	66 90                	xchg   %ax,%ax
 87e7288:	83 c6 01             	add    $0x1,%esi
 87e728b:	0f b6 1e             	movzbl (%esi),%ebx
 87e728e:	84 db                	test   %bl,%bl
 87e7290:	75 d6                	jne    87e7268 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x38>
 87e7292:	85 f6                	test   %esi,%esi
 87e7294:	74 b3                	je     87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e7296:	84 db                	test   %bl,%bl
 87e7298:	74 af                	je     87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e729a:	80 fb 3c             	cmp    $0x3c,%bl
 87e729d:	8d 76 00             	lea    0x0(%esi),%esi
 87e72a0:	75 a7                	jne    87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e72a2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e72a6:	89 34 24             	mov    %esi,(%esp)
 87e72a9:	e8 d2 f1 ff ff       	call   87e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>
 87e72ae:	85 c0                	test   %eax,%eax
 87e72b0:	89 c3                	mov    %eax,%ebx
 87e72b2:	74 95                	je     87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e72b4:	80 38 00             	cmpb   $0x0,(%eax)
 87e72b7:	74 90                	je     87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e72b9:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e72bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e72c4:	00 
 87e72c5:	c7 44 24 04 77 18 de 	movl   $0x8de1877,0x4(%esp)
 87e72cc:	08 
 87e72cd:	89 04 24             	mov    %eax,(%esp)
 87e72d0:	e8 1b f0 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e72d5:	84 c0                	test   %al,%al
 87e72d7:	0f 84 b5 00 00 00    	je     87e7392 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x162>
 87e72dd:	c7 04 24 38 00 00 00 	movl   $0x38,(%esp)
 87e72e4:	e8 67 d1 f3 ff       	call   8724450 <_Znwj>
 87e72e9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 87e72f0:	00 
 87e72f1:	89 c3                	mov    %eax,%ebx
 87e72f3:	89 04 24             	mov    %eax,(%esp)
 87e72f6:	e8 95 8a ff ff       	call   87dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>
 87e72fb:	c7 03 08 11 de 08    	movl   $0x8de1108,(%ebx)
 87e7301:	89 d8                	mov    %ebx,%eax
 87e7303:	c7 43 2c fc cc 48 09 	movl   $0x948ccfc,0x2c(%ebx)
 87e730a:	c7 43 30 fc cc 48 09 	movl   $0x948ccfc,0x30(%ebx)
 87e7311:	c7 43 34 fc cc 48 09 	movl   $0x948ccfc,0x34(%ebx)
 87e7318:	85 c0                	test   %eax,%eax
 87e731a:	0f 84 2b ff ff ff    	je     87e724b <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1b>
 87e7320:	8b 55 08             	mov    0x8(%ebp),%edx
 87e7323:	89 50 10             	mov    %edx,0x10(%eax)
 87e7326:	e9 20 ff ff ff       	jmp    87e724b <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1b>
 87e732b:	90                   	nop
 87e732c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7330:	83 c6 01             	add    $0x1,%esi
 87e7333:	0f b6 1e             	movzbl (%esi),%ebx
 87e7336:	84 db                	test   %bl,%bl
 87e7338:	74 1e                	je     87e7358 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x128>
 87e733a:	80 3e ef             	cmpb   $0xef,(%esi)
 87e733d:	74 29                	je     87e7368 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x138>
 87e733f:	0f b6 c3             	movzbl %bl,%eax
 87e7342:	89 04 24             	mov    %eax,(%esp)
 87e7345:	e8 36 6f 89 ff       	call   807e280 <isspace@plt>
 87e734a:	85 c0                	test   %eax,%eax
 87e734c:	75 e2                	jne    87e7330 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x100>
 87e734e:	80 fb 0a             	cmp    $0xa,%bl
 87e7351:	74 dd                	je     87e7330 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x100>
 87e7353:	80 fb 0d             	cmp    $0xd,%bl
 87e7356:	74 d8                	je     87e7330 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x100>
 87e7358:	85 f6                	test   %esi,%esi
 87e735a:	0f 85 36 ff ff ff    	jne    87e7296 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x66>
 87e7360:	e9 e4 fe ff ff       	jmp    87e7249 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x19>
 87e7365:	8d 76 00             	lea    0x0(%esi),%esi
 87e7368:	0f b6 46 01          	movzbl 0x1(%esi),%eax
 87e736c:	3c bb                	cmp    $0xbb,%al
 87e736e:	66 90                	xchg   %ax,%ax
 87e7370:	74 16                	je     87e7388 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x158>
 87e7372:	3c bf                	cmp    $0xbf,%al
 87e7374:	75 c9                	jne    87e733f <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x10f>
 87e7376:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 87e737a:	3c be                	cmp    $0xbe,%al
 87e737c:	74 04                	je     87e7382 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x152>
 87e737e:	3c bf                	cmp    $0xbf,%al
 87e7380:	75 bd                	jne    87e733f <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x10f>
 87e7382:	83 c6 03             	add    $0x3,%esi
 87e7385:	eb ac                	jmp    87e7333 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x103>
 87e7387:	90                   	nop
 87e7388:	80 7e 02 bf          	cmpb   $0xbf,0x2(%esi)
 87e738c:	75 b1                	jne    87e733f <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x10f>
 87e738e:	66 90                	xchg   %ax,%ax
 87e7390:	eb f0                	jmp    87e7382 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x152>
 87e7392:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e7396:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e739d:	00 
 87e739e:	c7 44 24 04 d6 cf d0 	movl   $0x8d0cfd6,0x4(%esp)
 87e73a5:	08 
 87e73a6:	89 1c 24             	mov    %ebx,(%esp)
 87e73a9:	e8 42 ef ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e73ae:	84 c0                	test   %al,%al
 87e73b0:	74 3f                	je     87e73f1 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1c1>
 87e73b2:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87e73b9:	e8 92 d0 f3 ff       	call   8724450 <_Znwj>
 87e73be:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 87e73c5:	00 
 87e73c6:	89 c3                	mov    %eax,%ebx
 87e73c8:	89 04 24             	mov    %eax,(%esp)
 87e73cb:	e8 c0 89 ff ff       	call   87dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>
 87e73d0:	c7 03 c8 11 de 08    	movl   $0x8de11c8,(%ebx)
 87e73d6:	89 d8                	mov    %ebx,%eax
 87e73d8:	e9 3b ff ff ff       	jmp    87e7318 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0xe8>
 87e73dd:	89 c6                	mov    %eax,%esi
 87e73df:	89 1c 24             	mov    %ebx,(%esp)
 87e73e2:	e8 09 d1 f3 ff       	call   87244f0 <_ZdlPv>
 87e73e7:	89 34 24             	mov    %esi,(%esp)
 87e73ea:	e8 61 c3 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e73ef:	eb ec                	jmp    87e73dd <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1ad>
 87e73f1:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e73f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e73fc:	00 
 87e73fd:	c7 44 24 04 db cf d0 	movl   $0x8d0cfdb,0x4(%esp)
 87e7404:	08 
 87e7405:	89 1c 24             	mov    %ebx,(%esp)
 87e7408:	e8 e3 ee ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e740d:	84 c0                	test   %al,%al
 87e740f:	74 1e                	je     87e742f <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1ff>
 87e7411:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 87e7418:	e8 33 d0 f3 ff       	call   8724450 <_Znwj>
 87e741d:	89 c3                	mov    %eax,%ebx
 87e741f:	e8 ac f7 ff ff       	call   87e6bd0 <_ZN9TiXmlTextC2EPKc.clone.0>
 87e7424:	c6 43 2c 01          	movb   $0x1,0x2c(%ebx)
 87e7428:	89 d8                	mov    %ebx,%eax
 87e742a:	e9 e9 fe ff ff       	jmp    87e7318 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0xe8>
 87e742f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e7433:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e743a:	00 
 87e743b:	c7 44 24 04 7d 18 de 	movl   $0x8de187d,0x4(%esp)
 87e7442:	08 
 87e7443:	89 1c 24             	mov    %ebx,(%esp)
 87e7446:	e8 a5 ee ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e744b:	84 c0                	test   %al,%al
 87e744d:	74 36                	je     87e7485 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x255>
 87e744f:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87e7456:	e8 f5 cf f3 ff       	call   8724450 <_Znwj>
 87e745b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87e7462:	00 
 87e7463:	89 c3                	mov    %eax,%ebx
 87e7465:	89 04 24             	mov    %eax,(%esp)
 87e7468:	e8 23 89 ff ff       	call   87dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>
 87e746d:	c7 03 a8 10 de 08    	movl   $0x8de10a8,(%ebx)
 87e7473:	89 d8                	mov    %ebx,%eax
 87e7475:	e9 9e fe ff ff       	jmp    87e7318 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0xe8>
 87e747a:	e9 5e ff ff ff       	jmp    87e73dd <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1ad>
 87e747f:	90                   	nop
 87e7480:	e9 58 ff ff ff       	jmp    87e73dd <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1ad>
 87e7485:	0f b6 5b 01          	movzbl 0x1(%ebx),%ebx
 87e7489:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e748d:	0f b6 c3             	movzbl %bl,%eax
 87e7490:	89 04 24             	mov    %eax,(%esp)
 87e7493:	e8 c8 ed ff ff       	call   87e6260 <_ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding>
 87e7498:	85 c0                	test   %eax,%eax
 87e749a:	75 30                	jne    87e74cc <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x29c>
 87e749c:	80 fb 5f             	cmp    $0x5f,%bl
 87e749f:	74 2b                	je     87e74cc <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x29c>
 87e74a1:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87e74a8:	e8 a3 cf f3 ff       	call   8724450 <_Znwj>
 87e74ad:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87e74b4:	00 
 87e74b5:	89 c3                	mov    %eax,%ebx
 87e74b7:	89 04 24             	mov    %eax,(%esp)
 87e74ba:	e8 d1 88 ff ff       	call   87dfd90 <_ZN9TiXmlNodeC1ENS_8NodeTypeE>
 87e74bf:	c7 03 a8 10 de 08    	movl   $0x8de10a8,(%ebx)
 87e74c5:	89 d8                	mov    %ebx,%eax
 87e74c7:	e9 4c fe ff ff       	jmp    87e7318 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0xe8>
 87e74cc:	c7 04 24 50 00 00 00 	movl   $0x50,(%esp)
 87e74d3:	e8 78 cf f3 ff       	call   8724450 <_Znwj>
 87e74d8:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e74df:	08 
 87e74e0:	89 c3                	mov    %eax,%ebx
 87e74e2:	89 04 24             	mov    %eax,(%esp)
 87e74e5:	e8 56 c1 ff ff       	call   87e3640 <_ZN12TiXmlElementC1EPKc>
 87e74ea:	eb d9                	jmp    87e74c5 <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x295>
 87e74ec:	e9 ec fe ff ff       	jmp    87e73dd <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1ad>
 87e74f1:	e9 e7 fe ff ff       	jmp    87e73dd <_ZN9TiXmlNode8IdentifyEPKc13TiXmlEncoding+0x1ad>
 87e74f6:	8d 76 00             	lea    0x0(%esi),%esi
 87e74f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlNode::Identify @ 0x87e7230

/* TiXmlNode::Identify(char const*, TiXmlEncoding) */

TiXmlNode * __thiscall TiXmlNode::Identify(TiXmlNode *this,byte *param_1,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  TiXmlNode *this_00;
  byte bVar4;
  TiXmlText *this_01;
  char *pcVar5;
  
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    if (param_3 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e7382;
            goto LAB_087e733f;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e733f;
LAB_087e7382:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e733f:
          iVar2 = isspace((uint)bVar4);
          if (((iVar2 == 0) && (bVar4 != 10)) && (bVar4 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar4 = *param_1;
      } while (bVar4 != 0);
    }
    else {
      do {
        iVar2 = isspace((uint)bVar4);
        if (((bVar4 != 10) && (iVar2 == 0)) && (bVar4 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar4 = *param_1;
      } while (bVar4 != 0);
    }
    if (((param_1 != (byte *)0x0) && (bVar4 != 0)) &&
       ((bVar4 == 0x3c &&
        ((pcVar3 = (char *)TiXmlBase::SkipWhiteSpace(param_1,param_3), pcVar3 != (char *)0x0 &&
         (*pcVar3 != '\0')))))) {
      cVar1 = TiXmlBase::StringEqual(pcVar3,"<?xml",1,param_3);
      if (cVar1 == '\0') {
        cVar1 = TiXmlBase::StringEqual(pcVar3,&DAT_08d0cfd6,0,param_3);
        if (cVar1 == '\0') {
          pcVar5 = "<![CDATA[";
          cVar1 = TiXmlBase::StringEqual(pcVar3,&DAT_08d0cfdb,0,param_3);
          if (cVar1 == '\0') {
            cVar1 = TiXmlBase::StringEqual(pcVar3,&DAT_08de187d,0,param_3);
            if (cVar1 == '\0') {
              cVar1 = pcVar3[1];
              iVar2 = TiXmlBase::IsAlpha(cVar1,param_3);
              if ((iVar2 == 0) && (cVar1 != '_')) {
                this_00 = operator_new(0x2c);
                    /* try { // try from 087e74ba to 087e74be has its CatchHandler @ 087e74ec */
                TiXmlNode(this_00,3);
                *(undefined ***)this_00 = &PTR__TiXmlUnknown_08de10a8;
              }
              else {
                this_00 = operator_new(0x50);
                    /* try { // try from 087e74e5 to 087e74e9 has its CatchHandler @ 087e74f1 */
                TiXmlElement::TiXmlElement((TiXmlElement *)this_00,"");
              }
            }
            else {
              this_00 = operator_new(0x2c);
                    /* try { // try from 087e7468 to 087e746c has its CatchHandler @ 087e747f */
              TiXmlNode(this_00,3);
              *(undefined ***)this_00 = &PTR__TiXmlUnknown_08de10a8;
            }
          }
          else {
            this_01 = (TiXmlText *)0x30;
            this_00 = operator_new(0x30);
                    /* try { // try from 087e741f to 087e7423 has its CatchHandler @ 087e747a */
            TiXmlText::TiXmlText(this_01,pcVar5);
            this_00[0x2c] = (TiXmlNode)0x1;
          }
        }
        else {
          this_00 = operator_new(0x2c);
                    /* try { // try from 087e73cb to 087e73cf has its CatchHandler @ 087e73ef */
          TiXmlNode(this_00,2);
          *(undefined ***)this_00 = &PTR__TiXmlComment_08de11c8;
        }
      }
      else {
        this_00 = operator_new(0x38);
                    /* try { // try from 087e72f6 to 087e72fa has its CatchHandler @ 087e73dd */
        TiXmlNode(this_00,5);
        *(undefined ***)this_00 = &PTR__TiXmlDeclaration_08de1108;
        *(undefined1 **)(this_00 + 0x2c) = &DAT_0948ccfc;
        *(undefined1 **)(this_00 + 0x30) = &DAT_0948ccfc;
        *(undefined1 **)(this_00 + 0x34) = &DAT_0948ccfc;
      }
      if (this_00 == (TiXmlNode *)0x0) {
        return (TiXmlNode *)0x0;
      }
      *(TiXmlNode **)(this_00 + 0x10) = this;
      return this_00;
    }
  }
  return (TiXmlNode *)0x0;
}

```

---

## InsertAfterChild

```asm
// === 087e0aa0 TiXmlNode::InsertAfterChild  [0x087e0aa0-0x87e0b7f] ===
 87e0aa0:	55                   	push   %ebp
 87e0aa1:	89 e5                	mov    %esp,%ebp
 87e0aa3:	83 ec 28             	sub    $0x28,%esp
 87e0aa6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e0aa9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e0aac:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e0aaf:	8b 45 10             	mov    0x10(%ebp),%eax
 87e0ab2:	85 db                	test   %ebx,%ebx
 87e0ab4:	75 12                	jne    87e0ac8 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x28>
 87e0ab6:	31 c0                	xor    %eax,%eax
 87e0ab8:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e0abb:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e0abe:	89 ec                	mov    %ebp,%esp
 87e0ac0:	5d                   	pop    %ebp
 87e0ac1:	c3                   	ret
 87e0ac2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e0ac8:	8b 73 10             	mov    0x10(%ebx),%esi
 87e0acb:	3b 75 08             	cmp    0x8(%ebp),%esi
 87e0ace:	75 e6                	jne    87e0ab6 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x16>
 87e0ad0:	8b 48 14             	mov    0x14(%eax),%ecx
 87e0ad3:	85 c9                	test   %ecx,%ecx
 87e0ad5:	74 29                	je     87e0b00 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x60>
 87e0ad7:	8b 10                	mov    (%eax),%edx
 87e0ad9:	89 04 24             	mov    %eax,(%esp)
 87e0adc:	ff 52 40             	call   *0x40(%edx)
 87e0adf:	85 c0                	test   %eax,%eax
 87e0ae1:	74 d5                	je     87e0ab8 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x18>
 87e0ae3:	8b 53 28             	mov    0x28(%ebx),%edx
 87e0ae6:	89 70 10             	mov    %esi,0x10(%eax)
 87e0ae9:	89 58 24             	mov    %ebx,0x24(%eax)
 87e0aec:	89 50 28             	mov    %edx,0x28(%eax)
 87e0aef:	8b 53 28             	mov    0x28(%ebx),%edx
 87e0af2:	85 d2                	test   %edx,%edx
 87e0af4:	74 4d                	je     87e0b43 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0xa3>
 87e0af6:	89 42 24             	mov    %eax,0x24(%edx)
 87e0af9:	89 43 28             	mov    %eax,0x28(%ebx)
 87e0afc:	eb ba                	jmp    87e0ab8 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x18>
 87e0afe:	66 90                	xchg   %ax,%ax
 87e0b00:	89 34 24             	mov    %esi,(%esp)
 87e0b03:	e8 c8 f3 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e0b08:	85 c0                	test   %eax,%eax
 87e0b0a:	74 aa                	je     87e0ab6 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x16>
 87e0b0c:	89 34 24             	mov    %esi,(%esp)
 87e0b0f:	e8 bc f3 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e0b14:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e0b1b:	00 
 87e0b1c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e0b23:	00 
 87e0b24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e0b2b:	00 
 87e0b2c:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 87e0b33:	00 
 87e0b34:	89 04 24             	mov    %eax,(%esp)
 87e0b37:	e8 f4 61 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e0b3c:	31 c0                	xor    %eax,%eax
 87e0b3e:	e9 75 ff ff ff       	jmp    87e0ab8 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x18>
 87e0b43:	39 5e 1c             	cmp    %ebx,0x1c(%esi)
 87e0b46:	75 05                	jne    87e0b4d <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0xad>
 87e0b48:	89 46 1c             	mov    %eax,0x1c(%esi)
 87e0b4b:	eb ac                	jmp    87e0af9 <_ZN9TiXmlNode16InsertAfterChildEPS_RKS_+0x59>
 87e0b4d:	c7 44 24 0c 20 17 de 	movl   $0x8de1720,0xc(%esp)
 87e0b54:	08 
 87e0b55:	c7 44 24 08 20 01 00 	movl   $0x120,0x8(%esp)
 87e0b5c:	00 
 87e0b5d:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e0b64:	08 
 87e0b65:	c7 04 24 9d 0e de 08 	movl   $0x8de0e9d,(%esp)
 87e0b6c:	e8 df d0 89 ff       	call   807dc50 <__assert_fail@plt>
 87e0b71:	90                   	nop
 87e0b72:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e0b79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlNode::InsertAfterChild @ 0x87e0aa0

/* TiXmlNode::InsertAfterChild(TiXmlNode*, TiXmlNode const&) */

int __thiscall TiXmlNode::InsertAfterChild(TiXmlNode *this,TiXmlNode *param_1,TiXmlNode *param_2)

{
  TiXmlNode *this_00;
  undefined4 uVar1;
  int iVar2;
  TiXmlDocument *pTVar3;
  
  if ((param_1 != (TiXmlNode *)0x0) && (this_00 = *(TiXmlNode **)(param_1 + 0x10), this_00 == this))
  {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar2 = (**(code **)(*(int *)param_2 + 0x40))(param_2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      *(TiXmlNode **)(iVar2 + 0x10) = this_00;
      *(TiXmlNode **)(iVar2 + 0x24) = param_1;
      *(undefined4 *)(iVar2 + 0x28) = uVar1;
      if (*(int *)(param_1 + 0x28) == 0) {
        if (*(TiXmlNode **)(this_00 + 0x1c) != param_1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("lastChild == afterThis","tinyxml.cpp",0x120,
                        "TiXmlNode* TiXmlNode::InsertAfterChild(TiXmlNode*, const TiXmlNode&)");
        }
        *(int *)(this_00 + 0x1c) = iVar2;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x28) + 0x24) = iVar2;
      }
      *(int *)(param_1 + 0x28) = iVar2;
      return iVar2;
    }
    iVar2 = GetDocument(this_00);
    if (iVar2 != 0) {
      pTVar3 = (TiXmlDocument *)GetDocument(this_00);
      TiXmlDocument::SetError(pTVar3,0xf,0,0,0);
      return 0;
    }
  }
  return 0;
}

```

---

## InsertBeforeChild

```asm
// === 087e0b80 TiXmlNode::InsertBeforeChild  [0x087e0b80-0x87e0c5f] ===
 87e0b80:	55                   	push   %ebp
 87e0b81:	89 e5                	mov    %esp,%ebp
 87e0b83:	83 ec 28             	sub    $0x28,%esp
 87e0b86:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e0b89:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e0b8c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e0b8f:	8b 45 10             	mov    0x10(%ebp),%eax
 87e0b92:	85 db                	test   %ebx,%ebx
 87e0b94:	75 12                	jne    87e0ba8 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x28>
 87e0b96:	31 c0                	xor    %eax,%eax
 87e0b98:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e0b9b:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e0b9e:	89 ec                	mov    %ebp,%esp
 87e0ba0:	5d                   	pop    %ebp
 87e0ba1:	c3                   	ret
 87e0ba2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e0ba8:	8b 73 10             	mov    0x10(%ebx),%esi
 87e0bab:	3b 75 08             	cmp    0x8(%ebp),%esi
 87e0bae:	75 e6                	jne    87e0b96 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x16>
 87e0bb0:	8b 50 14             	mov    0x14(%eax),%edx
 87e0bb3:	85 d2                	test   %edx,%edx
 87e0bb5:	74 29                	je     87e0be0 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x60>
 87e0bb7:	8b 10                	mov    (%eax),%edx
 87e0bb9:	89 04 24             	mov    %eax,(%esp)
 87e0bbc:	ff 52 40             	call   *0x40(%edx)
 87e0bbf:	85 c0                	test   %eax,%eax
 87e0bc1:	74 d5                	je     87e0b98 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x18>
 87e0bc3:	8b 53 24             	mov    0x24(%ebx),%edx
 87e0bc6:	89 70 10             	mov    %esi,0x10(%eax)
 87e0bc9:	89 58 28             	mov    %ebx,0x28(%eax)
 87e0bcc:	89 50 24             	mov    %edx,0x24(%eax)
 87e0bcf:	8b 53 24             	mov    0x24(%ebx),%edx
 87e0bd2:	85 d2                	test   %edx,%edx
 87e0bd4:	74 4d                	je     87e0c23 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0xa3>
 87e0bd6:	89 42 28             	mov    %eax,0x28(%edx)
 87e0bd9:	89 43 24             	mov    %eax,0x24(%ebx)
 87e0bdc:	eb ba                	jmp    87e0b98 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x18>
 87e0bde:	66 90                	xchg   %ax,%ax
 87e0be0:	89 34 24             	mov    %esi,(%esp)
 87e0be3:	e8 e8 f2 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e0be8:	85 c0                	test   %eax,%eax
 87e0bea:	74 aa                	je     87e0b96 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x16>
 87e0bec:	89 34 24             	mov    %esi,(%esp)
 87e0bef:	e8 dc f2 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e0bf4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e0bfb:	00 
 87e0bfc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e0c03:	00 
 87e0c04:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e0c0b:	00 
 87e0c0c:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 87e0c13:	00 
 87e0c14:	89 04 24             	mov    %eax,(%esp)
 87e0c17:	e8 14 61 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e0c1c:	31 c0                	xor    %eax,%eax
 87e0c1e:	e9 75 ff ff ff       	jmp    87e0b98 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x18>
 87e0c23:	39 5e 18             	cmp    %ebx,0x18(%esi)
 87e0c26:	75 05                	jne    87e0c2d <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0xad>
 87e0c28:	89 46 18             	mov    %eax,0x18(%esi)
 87e0c2b:	eb ac                	jmp    87e0bd9 <_ZN9TiXmlNode17InsertBeforeChildEPS_RKS_+0x59>
 87e0c2d:	c7 44 24 0c 80 17 de 	movl   $0x8de1780,0xc(%esp)
 87e0c34:	08 
 87e0c35:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 87e0c3c:	00 
 87e0c3d:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e0c44:	08 
 87e0c45:	c7 04 24 b4 0e de 08 	movl   $0x8de0eb4,(%esp)
 87e0c4c:	e8 ff cf 89 ff       	call   807dc50 <__assert_fail@plt>
 87e0c51:	90                   	nop
 87e0c52:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e0c59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlNode::InsertBeforeChild @ 0x87e0b80

/* TiXmlNode::InsertBeforeChild(TiXmlNode*, TiXmlNode const&) */

int __thiscall TiXmlNode::InsertBeforeChild(TiXmlNode *this,TiXmlNode *param_1,TiXmlNode *param_2)

{
  TiXmlNode *this_00;
  undefined4 uVar1;
  int iVar2;
  TiXmlDocument *pTVar3;
  
  if ((param_1 != (TiXmlNode *)0x0) && (this_00 = *(TiXmlNode **)(param_1 + 0x10), this_00 == this))
  {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar2 = (**(code **)(*(int *)param_2 + 0x40))(param_2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      *(TiXmlNode **)(iVar2 + 0x10) = this_00;
      *(TiXmlNode **)(iVar2 + 0x28) = param_1;
      *(undefined4 *)(iVar2 + 0x24) = uVar1;
      if (*(int *)(param_1 + 0x24) == 0) {
        if (*(TiXmlNode **)(this_00 + 0x18) != param_1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("firstChild == beforeThis","tinyxml.cpp",0xff,
                        "TiXmlNode* TiXmlNode::InsertBeforeChild(TiXmlNode*, const TiXmlNode&)");
        }
        *(int *)(this_00 + 0x18) = iVar2;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x24) + 0x28) = iVar2;
      }
      *(int *)(param_1 + 0x24) = iVar2;
      return iVar2;
    }
    iVar2 = GetDocument(this_00);
    if (iVar2 != 0) {
      pTVar3 = (TiXmlDocument *)GetDocument(this_00);
      TiXmlDocument::SetError(pTVar3,0xf,0,0,0);
      return 0;
    }
  }
  return 0;
}

```

---

## InsertEndChild

```asm
// === 087e5730 TiXmlNode::InsertEndChild  [0x087e5730-0x87e5eef] ===
 87e5730:	55                   	push   %ebp
 87e5731:	89 e5                	mov    %esp,%ebp
 87e5733:	56                   	push   %esi
 87e5734:	53                   	push   %ebx
 87e5735:	83 ec 20             	sub    $0x20,%esp
 87e5738:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e573b:	8b 75 08             	mov    0x8(%ebp),%esi
 87e573e:	8b 58 14             	mov    0x14(%eax),%ebx
 87e5741:	85 db                	test   %ebx,%ebx
 87e5743:	75 33                	jne    87e5778 <_ZN9TiXmlNode14InsertEndChildERKS_+0x48>
 87e5745:	85 f6                	test   %esi,%esi
 87e5747:	74 26                	je     87e576f <_ZN9TiXmlNode14InsertEndChildERKS_+0x3f>
 87e5749:	89 f3                	mov    %esi,%ebx
 87e574b:	eb 0a                	jmp    87e5757 <_ZN9TiXmlNode14InsertEndChildERKS_+0x27>
 87e574d:	8d 76 00             	lea    0x0(%esi),%esi
 87e5750:	8b 5b 10             	mov    0x10(%ebx),%ebx
 87e5753:	85 db                	test   %ebx,%ebx
 87e5755:	74 18                	je     87e576f <_ZN9TiXmlNode14InsertEndChildERKS_+0x3f>
 87e5757:	8b 03                	mov    (%ebx),%eax
 87e5759:	89 1c 24             	mov    %ebx,(%esp)
 87e575c:	ff 50 10             	call   *0x10(%eax)
 87e575f:	85 c0                	test   %eax,%eax
 87e5761:	74 ed                	je     87e5750 <_ZN9TiXmlNode14InsertEndChildERKS_+0x20>
 87e5763:	8b 03                	mov    (%ebx),%eax
 87e5765:	89 1c 24             	mov    %ebx,(%esp)
 87e5768:	ff 50 10             	call   *0x10(%eax)
 87e576b:	85 c0                	test   %eax,%eax
 87e576d:	75 30                	jne    87e579f <_ZN9TiXmlNode14InsertEndChildERKS_+0x6f>
 87e576f:	83 c4 20             	add    $0x20,%esp
 87e5772:	31 c0                	xor    %eax,%eax
 87e5774:	5b                   	pop    %ebx
 87e5775:	5e                   	pop    %esi
 87e5776:	5d                   	pop    %ebp
 87e5777:	c3                   	ret
 87e5778:	8b 10                	mov    (%eax),%edx
 87e577a:	89 04 24             	mov    %eax,(%esp)
 87e577d:	ff 52 40             	call   *0x40(%edx)
 87e5780:	85 c0                	test   %eax,%eax
 87e5782:	74 eb                	je     87e576f <_ZN9TiXmlNode14InsertEndChildERKS_+0x3f>
 87e5784:	89 75 08             	mov    %esi,0x8(%ebp)
 87e5787:	89 45 0c             	mov    %eax,0xc(%ebp)
 87e578a:	83 c4 20             	add    $0x20,%esp
 87e578d:	5b                   	pop    %ebx
 87e578e:	5e                   	pop    %esi
 87e578f:	5d                   	pop    %ebp
 87e5790:	e9 bb c9 ff ff       	jmp    87e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>
 87e5795:	8d 76 00             	lea    0x0(%esi),%esi
 87e5798:	8b 76 10             	mov    0x10(%esi),%esi
 87e579b:	85 f6                	test   %esi,%esi
 87e579d:	74 45                	je     87e57e4 <_ZN9TiXmlNode14InsertEndChildERKS_+0xb4>
 87e579f:	8b 06                	mov    (%esi),%eax
 87e57a1:	89 34 24             	mov    %esi,(%esp)
 87e57a4:	ff 50 10             	call   *0x10(%eax)
 87e57a7:	85 c0                	test   %eax,%eax
 87e57a9:	74 ed                	je     87e5798 <_ZN9TiXmlNode14InsertEndChildERKS_+0x68>
 87e57ab:	8b 06                	mov    (%esi),%eax
 87e57ad:	89 34 24             	mov    %esi,(%esp)
 87e57b0:	ff 50 10             	call   *0x10(%eax)
 87e57b3:	89 04 24             	mov    %eax,(%esp)
 87e57b6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e57bd:	00 
 87e57be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e57c5:	00 
 87e57c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e57cd:	00 
 87e57ce:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 87e57d5:	00 
 87e57d6:	e8 55 15 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e57db:	83 c4 20             	add    $0x20,%esp
 87e57de:	31 c0                	xor    %eax,%eax
 87e57e0:	5b                   	pop    %ebx
 87e57e1:	5e                   	pop    %esi
 87e57e2:	5d                   	pop    %ebp
 87e57e3:	c3                   	ret
 87e57e4:	31 c0                	xor    %eax,%eax
 87e57e6:	eb cb                	jmp    87e57b3 <_ZN9TiXmlNode14InsertEndChildERKS_+0x83>
 87e57e8:	90                   	nop
 87e57e9:	90                   	nop
 87e57ea:	90                   	nop
 87e57eb:	90                   	nop
 87e57ec:	90                   	nop
 87e57ed:	90                   	nop
 87e57ee:	90                   	nop
 87e57ef:	90                   	nop

087e57f0 <_ZN12TiXmlVisitorD1Ev>:
 87e57f0:	55                   	push   %ebp
 87e57f1:	89 e5                	mov    %esp,%ebp
 87e57f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87e57f6:	c7 00 c8 13 de 08    	movl   $0x8de13c8,(%eax)
 87e57fc:	5d                   	pop    %ebp
 87e57fd:	c3                   	ret
 87e57fe:	90                   	nop
 87e57ff:	90                   	nop

087e5800 <_ZN12TiXmlVisitor10VisitEnterERK13TiXmlDocument>:
 87e5800:	55                   	push   %ebp
 87e5801:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5806:	89 e5                	mov    %esp,%ebp
 87e5808:	5d                   	pop    %ebp
 87e5809:	c3                   	ret
 87e580a:	90                   	nop
 87e580b:	90                   	nop
 87e580c:	90                   	nop
 87e580d:	90                   	nop
 87e580e:	90                   	nop
 87e580f:	90                   	nop

087e5810 <_ZN12TiXmlVisitor9VisitExitERK13TiXmlDocument>:
 87e5810:	55                   	push   %ebp
 87e5811:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5816:	89 e5                	mov    %esp,%ebp
 87e5818:	5d                   	pop    %ebp
 87e5819:	c3                   	ret
 87e581a:	90                   	nop
 87e581b:	90                   	nop
 87e581c:	90                   	nop
 87e581d:	90                   	nop
 87e581e:	90                   	nop
 87e581f:	90                   	nop

087e5820 <_ZN12TiXmlVisitor10VisitEnterERK12TiXmlElementPK14TiXmlAttribute>:
 87e5820:	55                   	push   %ebp
 87e5821:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5826:	89 e5                	mov    %esp,%ebp
 87e5828:	5d                   	pop    %ebp
 87e5829:	c3                   	ret
 87e582a:	90                   	nop
 87e582b:	90                   	nop
 87e582c:	90                   	nop
 87e582d:	90                   	nop
 87e582e:	90                   	nop
 87e582f:	90                   	nop

087e5830 <_ZN12TiXmlVisitor9VisitExitERK12TiXmlElement>:
 87e5830:	55                   	push   %ebp
 87e5831:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5836:	89 e5                	mov    %esp,%ebp
 87e5838:	5d                   	pop    %ebp
 87e5839:	c3                   	ret
 87e583a:	90                   	nop
 87e583b:	90                   	nop
 87e583c:	90                   	nop
 87e583d:	90                   	nop
 87e583e:	90                   	nop
 87e583f:	90                   	nop

087e5840 <_ZN12TiXmlVisitor5VisitERK16TiXmlDeclaration>:
 87e5840:	55                   	push   %ebp
 87e5841:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5846:	89 e5                	mov    %esp,%ebp
 87e5848:	5d                   	pop    %ebp
 87e5849:	c3                   	ret
 87e584a:	90                   	nop
 87e584b:	90                   	nop
 87e584c:	90                   	nop
 87e584d:	90                   	nop
 87e584e:	90                   	nop
 87e584f:	90                   	nop

087e5850 <_ZN12TiXmlVisitor5VisitERK9TiXmlText>:
 87e5850:	55                   	push   %ebp
 87e5851:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5856:	89 e5                	mov    %esp,%ebp
 87e5858:	5d                   	pop    %ebp
 87e5859:	c3                   	ret
 87e585a:	90                   	nop
 87e585b:	90                   	nop
 87e585c:	90                   	nop
 87e585d:	90                   	nop
 87e585e:	90                   	nop
 87e585f:	90                   	nop

087e5860 <_ZN12TiXmlVisitor5VisitERK12TiXmlComment>:
 87e5860:	55                   	push   %ebp
 87e5861:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5866:	89 e5                	mov    %esp,%ebp
 87e5868:	5d                   	pop    %ebp
 87e5869:	c3                   	ret
 87e586a:	90                   	nop
 87e586b:	90                   	nop
 87e586c:	90                   	nop
 87e586d:	90                   	nop
 87e586e:	90                   	nop
 87e586f:	90                   	nop

087e5870 <_ZN12TiXmlVisitor5VisitERK12TiXmlUnknown>:
 87e5870:	55                   	push   %ebp
 87e5871:	b8 01 00 00 00       	mov    $0x1,%eax
 87e5876:	89 e5                	mov    %esp,%ebp
 87e5878:	5d                   	pop    %ebp
 87e5879:	c3                   	ret
 87e587a:	90                   	nop
 87e587b:	90                   	nop
 87e587c:	90                   	nop
 87e587d:	90                   	nop
 87e587e:	90                   	nop
 87e587f:	90                   	nop

087e5880 <_ZN9TiXmlBaseD1Ev>:
 87e5880:	55                   	push   %ebp
 87e5881:	89 e5                	mov    %esp,%ebp
 87e5883:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5886:	c7 00 f8 13 de 08    	movl   $0x8de13f8,(%eax)
 87e588c:	5d                   	pop    %ebp
 87e588d:	c3                   	ret
 87e588e:	90                   	nop
 87e588f:	90                   	nop

087e5890 <_ZNK9TiXmlNode10ToDocumentEv>:
 87e5890:	55                   	push   %ebp
 87e5891:	31 c0                	xor    %eax,%eax
 87e5893:	89 e5                	mov    %esp,%ebp
 87e5895:	5d                   	pop    %ebp
 87e5896:	c3                   	ret
 87e5897:	90                   	nop
 87e5898:	90                   	nop
 87e5899:	90                   	nop
 87e589a:	90                   	nop
 87e589b:	90                   	nop
 87e589c:	90                   	nop
 87e589d:	90                   	nop
 87e589e:	90                   	nop
 87e589f:	90                   	nop

087e58a0 <_ZNK9TiXmlNode9ToElementEv>:
 87e58a0:	55                   	push   %ebp
 87e58a1:	31 c0                	xor    %eax,%eax
 87e58a3:	89 e5                	mov    %esp,%ebp
 87e58a5:	5d                   	pop    %ebp
 87e58a6:	c3                   	ret
 87e58a7:	90                   	nop
 87e58a8:	90                   	nop
 87e58a9:	90                   	nop
 87e58aa:	90                   	nop
 87e58ab:	90                   	nop
 87e58ac:	90                   	nop
 87e58ad:	90                   	nop
 87e58ae:	90                   	nop
 87e58af:	90                   	nop

087e58b0 <_ZNK9TiXmlNode9ToCommentEv>:
 87e58b0:	55                   	push   %ebp
 87e58b1:	31 c0                	xor    %eax,%eax
 87e58b3:	89 e5                	mov    %esp,%ebp
 87e58b5:	5d                   	pop    %ebp
 87e58b6:	c3                   	ret
 87e58b7:	90                   	nop
 87e58b8:	90                   	nop
 87e58b9:	90                   	nop
 87e58ba:	90                   	nop
 87e58bb:	90                   	nop
 87e58bc:	90                   	nop
 87e58bd:	90                   	nop
 87e58be:	90                   	nop
 87e58bf:	90                   	nop

087e58c0 <_ZNK9TiXmlNode9ToUnknownEv>:
 87e58c0:	55                   	push   %ebp
 87e58c1:	31 c0                	xor    %eax,%eax
 87e58c3:	89 e5                	mov    %esp,%ebp
 87e58c5:	5d                   	pop    %ebp
 87e58c6:	c3                   	ret
 87e58c7:	90                   	nop
 87e58c8:	90                   	nop
 87e58c9:	90                   	nop
 87e58ca:	90                   	nop
 87e58cb:	90                   	nop
 87e58cc:	90                   	nop
 87e58cd:	90                   	nop
 87e58ce:	90                   	nop
 87e58cf:	90                   	nop

087e58d0 <_ZNK9TiXmlNode6ToTextEv>:
 87e58d0:	55                   	push   %ebp
 87e58d1:	31 c0                	xor    %eax,%eax
 87e58d3:	89 e5                	mov    %esp,%ebp
 87e58d5:	5d                   	pop    %ebp
 87e58d6:	c3                   	ret
 87e58d7:	90                   	nop
 87e58d8:	90                   	nop
 87e58d9:	90                   	nop
 87e58da:	90                   	nop
 87e58db:	90                   	nop
 87e58dc:	90                   	nop
 87e58dd:	90                   	nop
 87e58de:	90                   	nop
 87e58df:	90                   	nop

087e58e0 <_ZNK9TiXmlNode13ToDeclarationEv>:
 87e58e0:	55                   	push   %ebp
 87e58e1:	31 c0                	xor    %eax,%eax
 87e58e3:	89 e5                	mov    %esp,%ebp
 87e58e5:	5d                   	pop    %ebp
 87e58e6:	c3                   	ret
 87e58e7:	90                   	nop
 87e58e8:	90                   	nop
 87e58e9:	90                   	nop
 87e58ea:	90                   	nop
 87e58eb:	90                   	nop
 87e58ec:	90                   	nop
 87e58ed:	90                   	nop
 87e58ee:	90                   	nop
 87e58ef:	90                   	nop

087e58f0 <_ZN9TiXmlNode10ToDocumentEv>:
 87e58f0:	55                   	push   %ebp
 87e58f1:	31 c0                	xor    %eax,%eax
 87e58f3:	89 e5                	mov    %esp,%ebp
 87e58f5:	5d                   	pop    %ebp
 87e58f6:	c3                   	ret
 87e58f7:	90                   	nop
 87e58f8:	90                   	nop
 87e58f9:	90                   	nop
 87e58fa:	90                   	nop
 87e58fb:	90                   	nop
 87e58fc:	90                   	nop
 87e58fd:	90                   	nop
 87e58fe:	90                   	nop
 87e58ff:	90                   	nop

087e5900 <_ZN9TiXmlNode9ToElementEv>:
 87e5900:	55                   	push   %ebp
 87e5901:	31 c0                	xor    %eax,%eax
 87e5903:	89 e5                	mov    %esp,%ebp
 87e5905:	5d                   	pop    %ebp
 87e5906:	c3                   	ret
 87e5907:	90                   	nop
 87e5908:	90                   	nop
 87e5909:	90                   	nop
 87e590a:	90                   	nop
 87e590b:	90                   	nop
 87e590c:	90                   	nop
 87e590d:	90                   	nop
 87e590e:	90                   	nop
 87e590f:	90                   	nop

087e5910 <_ZN9TiXmlNode9ToCommentEv>:
 87e5910:	55                   	push   %ebp
 87e5911:	31 c0                	xor    %eax,%eax
 87e5913:	89 e5                	mov    %esp,%ebp
 87e5915:	5d                   	pop    %ebp
 87e5916:	c3                   	ret
 87e5917:	90                   	nop
 87e5918:	90                   	nop
 87e5919:	90                   	nop
 87e591a:	90                   	nop
 87e591b:	90                   	nop
 87e591c:	90                   	nop
 87e591d:	90                   	nop
 87e591e:	90                   	nop
 87e591f:	90                   	nop

087e5920 <_ZN9TiXmlNode9ToUnknownEv>:
 87e5920:	55                   	push   %ebp
 87e5921:	31 c0                	xor    %eax,%eax
 87e5923:	89 e5                	mov    %esp,%ebp
 87e5925:	5d                   	pop    %ebp
 87e5926:	c3                   	ret
 87e5927:	90                   	nop
 87e5928:	90                   	nop
 87e5929:	90                   	nop
 87e592a:	90                   	nop
 87e592b:	90                   	nop
 87e592c:	90                   	nop
 87e592d:	90                   	nop
 87e592e:	90                   	nop
 87e592f:	90                   	nop

087e5930 <_ZN9TiXmlNode6ToTextEv>:
 87e5930:	55                   	push   %ebp
 87e5931:	31 c0                	xor    %eax,%eax
 87e5933:	89 e5                	mov    %esp,%ebp
 87e5935:	5d                   	pop    %ebp
 87e5936:	c3                   	ret
 87e5937:	90                   	nop
 87e5938:	90                   	nop
 87e5939:	90                   	nop
 87e593a:	90                   	nop
 87e593b:	90                   	nop
 87e593c:	90                   	nop
 87e593d:	90                   	nop
 87e593e:	90                   	nop
 87e593f:	90                   	nop

087e5940 <_ZN9TiXmlNode13ToDeclarationEv>:
 87e5940:	55                   	push   %ebp
 87e5941:	31 c0                	xor    %eax,%eax
 87e5943:	89 e5                	mov    %esp,%ebp
 87e5945:	5d                   	pop    %ebp
 87e5946:	c3                   	ret
 87e5947:	90                   	nop
 87e5948:	90                   	nop
 87e5949:	90                   	nop
 87e594a:	90                   	nop
 87e594b:	90                   	nop
 87e594c:	90                   	nop
 87e594d:	90                   	nop
 87e594e:	90                   	nop
 87e594f:	90                   	nop

087e5950 <_ZNK12TiXmlElement9ToElementEv>:
 87e5950:	55                   	push   %ebp
 87e5951:	89 e5                	mov    %esp,%ebp
 87e5953:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5956:	5d                   	pop    %ebp
 87e5957:	c3                   	ret
 87e5958:	90                   	nop
 87e5959:	90                   	nop
 87e595a:	90                   	nop
 87e595b:	90                   	nop
 87e595c:	90                   	nop
 87e595d:	90                   	nop
 87e595e:	90                   	nop
 87e595f:	90                   	nop

087e5960 <_ZN12TiXmlElement9ToElementEv>:
 87e5960:	55                   	push   %ebp
 87e5961:	89 e5                	mov    %esp,%ebp
 87e5963:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5966:	5d                   	pop    %ebp
 87e5967:	c3                   	ret
 87e5968:	90                   	nop
 87e5969:	90                   	nop
 87e596a:	90                   	nop
 87e596b:	90                   	nop
 87e596c:	90                   	nop
 87e596d:	90                   	nop
 87e596e:	90                   	nop
 87e596f:	90                   	nop

087e5970 <_ZNK12TiXmlComment9ToCommentEv>:
 87e5970:	55                   	push   %ebp
 87e5971:	89 e5                	mov    %esp,%ebp
 87e5973:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5976:	5d                   	pop    %ebp
 87e5977:	c3                   	ret
 87e5978:	90                   	nop
 87e5979:	90                   	nop
 87e597a:	90                   	nop
 87e597b:	90                   	nop
 87e597c:	90                   	nop
 87e597d:	90                   	nop
 87e597e:	90                   	nop
 87e597f:	90                   	nop

087e5980 <_ZN12TiXmlComment9ToCommentEv>:
 87e5980:	55                   	push   %ebp
 87e5981:	89 e5                	mov    %esp,%ebp
 87e5983:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5986:	5d                   	pop    %ebp
 87e5987:	c3                   	ret
 87e5988:	90                   	nop
 87e5989:	90                   	nop
 87e598a:	90                   	nop
 87e598b:	90                   	nop
 87e598c:	90                   	nop
 87e598d:	90                   	nop
 87e598e:	90                   	nop
 87e598f:	90                   	nop

087e5990 <_ZNK9TiXmlText6ToTextEv>:
 87e5990:	55                   	push   %ebp
 87e5991:	89 e5                	mov    %esp,%ebp
 87e5993:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5996:	5d                   	pop    %ebp
 87e5997:	c3                   	ret
 87e5998:	90                   	nop
 87e5999:	90                   	nop
 87e599a:	90                   	nop
 87e599b:	90                   	nop
 87e599c:	90                   	nop
 87e599d:	90                   	nop
 87e599e:	90                   	nop
 87e599f:	90                   	nop

087e59a0 <_ZN9TiXmlText6ToTextEv>:
 87e59a0:	55                   	push   %ebp
 87e59a1:	89 e5                	mov    %esp,%ebp
 87e59a3:	8b 45 08             	mov    0x8(%ebp),%eax
 87e59a6:	5d                   	pop    %ebp
 87e59a7:	c3                   	ret
 87e59a8:	90                   	nop
 87e59a9:	90                   	nop
 87e59aa:	90                   	nop
 87e59ab:	90                   	nop
 87e59ac:	90                   	nop
 87e59ad:	90                   	nop
 87e59ae:	90                   	nop
 87e59af:	90                   	nop

087e59b0 <_ZNK16TiXmlDeclaration5PrintEP8_IO_FILEi>:
 87e59b0:	55                   	push   %ebp
 87e59b1:	89 e5                	mov    %esp,%ebp
 87e59b3:	83 ec 18             	sub    $0x18,%esp
 87e59b6:	8b 45 08             	mov    0x8(%ebp),%eax
 87e59b9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e59bc:	8b 10                	mov    (%eax),%edx
 87e59be:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87e59c2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e59c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e59cc:	00 
 87e59cd:	89 04 24             	mov    %eax,(%esp)
 87e59d0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87e59d4:	ff 52 4c             	call   *0x4c(%edx)
 87e59d7:	c9                   	leave
 87e59d8:	c3                   	ret
 87e59d9:	90                   	nop
 87e59da:	90                   	nop
 87e59db:	90                   	nop
 87e59dc:	90                   	nop
 87e59dd:	90                   	nop
 87e59de:	90                   	nop
 87e59df:	90                   	nop

087e59e0 <_ZNK16TiXmlDeclaration13ToDeclarationEv>:
 87e59e0:	55                   	push   %ebp
 87e59e1:	89 e5                	mov    %esp,%ebp
 87e59e3:	8b 45 08             	mov    0x8(%ebp),%eax
 87e59e6:	5d                   	pop    %ebp
 87e59e7:	c3                   	ret
 87e59e8:	90                   	nop
 87e59e9:	90                   	nop
 87e59ea:	90                   	nop
 87e59eb:	90                   	nop
 87e59ec:	90                   	nop
 87e59ed:	90                   	nop
 87e59ee:	90                   	nop
 87e59ef:	90                   	nop

087e59f0 <_ZN16TiXmlDeclaration13ToDeclarationEv>:
 87e59f0:	55                   	push   %ebp
 87e59f1:	89 e5                	mov    %esp,%ebp
 87e59f3:	8b 45 08             	mov    0x8(%ebp),%eax
 87e59f6:	5d                   	pop    %ebp
 87e59f7:	c3                   	ret
 87e59f8:	90                   	nop
 87e59f9:	90                   	nop
 87e59fa:	90                   	nop
 87e59fb:	90                   	nop
 87e59fc:	90                   	nop
 87e59fd:	90                   	nop
 87e59fe:	90                   	nop
 87e59ff:	90                   	nop

087e5a00 <_ZNK12TiXmlUnknown9ToUnknownEv>:
 87e5a00:	55                   	push   %ebp
 87e5a01:	89 e5                	mov    %esp,%ebp
 87e5a03:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5a06:	5d                   	pop    %ebp
 87e5a07:	c3                   	ret
 87e5a08:	90                   	nop
 87e5a09:	90                   	nop
 87e5a0a:	90                   	nop
 87e5a0b:	90                   	nop
 87e5a0c:	90                   	nop
 87e5a0d:	90                   	nop
 87e5a0e:	90                   	nop
 87e5a0f:	90                   	nop

087e5a10 <_ZN12TiXmlUnknown9ToUnknownEv>:
 87e5a10:	55                   	push   %ebp
 87e5a11:	89 e5                	mov    %esp,%ebp
 87e5a13:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5a16:	5d                   	pop    %ebp
 87e5a17:	c3                   	ret
 87e5a18:	90                   	nop
 87e5a19:	90                   	nop
 87e5a1a:	90                   	nop
 87e5a1b:	90                   	nop
 87e5a1c:	90                   	nop
 87e5a1d:	90                   	nop
 87e5a1e:	90                   	nop
 87e5a1f:	90                   	nop

087e5a20 <_ZN12TiXmlVisitorD0Ev>:
 87e5a20:	55                   	push   %ebp
 87e5a21:	89 e5                	mov    %esp,%ebp
 87e5a23:	83 ec 08             	sub    $0x8,%esp
 87e5a26:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5a29:	c7 00 c8 13 de 08    	movl   $0x8de13c8,(%eax)
 87e5a2f:	c9                   	leave
 87e5a30:	e9 bb ea f3 ff       	jmp    87244f0 <_ZdlPv>
 87e5a35:	90                   	nop
 87e5a36:	90                   	nop
 87e5a37:	90                   	nop
 87e5a38:	90                   	nop
 87e5a39:	90                   	nop
 87e5a3a:	90                   	nop
 87e5a3b:	90                   	nop
 87e5a3c:	90                   	nop
 87e5a3d:	90                   	nop
 87e5a3e:	90                   	nop
 87e5a3f:	90                   	nop

087e5a40 <_ZN9TiXmlBaseD0Ev>:
 87e5a40:	55                   	push   %ebp
 87e5a41:	89 e5                	mov    %esp,%ebp
 87e5a43:	83 ec 08             	sub    $0x8,%esp
 87e5a46:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5a49:	c7 00 f8 13 de 08    	movl   $0x8de13f8,(%eax)
 87e5a4f:	c9                   	leave
 87e5a50:	e9 9b ea f3 ff       	jmp    87244f0 <_ZdlPv>
 87e5a55:	90                   	nop
 87e5a56:	90                   	nop
 87e5a57:	90                   	nop
 87e5a58:	90                   	nop
 87e5a59:	90                   	nop
 87e5a5a:	90                   	nop
 87e5a5b:	90                   	nop
 87e5a5c:	90                   	nop
 87e5a5d:	90                   	nop
 87e5a5e:	90                   	nop
 87e5a5f:	90                   	nop

087e5a60 <_ZN12TiXmlPrinterD1Ev>:
 87e5a60:	55                   	push   %ebp
 87e5a61:	89 e5                	mov    %esp,%ebp
 87e5a63:	83 ec 28             	sub    $0x28,%esp
 87e5a66:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e5a69:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5a6c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e5a6f:	be f0 cc 48 09       	mov    $0x948ccf0,%esi
 87e5a74:	8b 43 14             	mov    0x14(%ebx),%eax
 87e5a77:	c7 03 68 10 de 08    	movl   $0x8de1068,(%ebx)
 87e5a7d:	83 e8 0c             	sub    $0xc,%eax
 87e5a80:	39 f0                	cmp    %esi,%eax
 87e5a82:	75 24                	jne    87e5aa8 <_ZN12TiXmlPrinterD1Ev+0x48>
 87e5a84:	8b 43 10             	mov    0x10(%ebx),%eax
 87e5a87:	83 e8 0c             	sub    $0xc,%eax
 87e5a8a:	39 c6                	cmp    %eax,%esi
 87e5a8c:	75 66                	jne    87e5af4 <_ZN12TiXmlPrinterD1Ev+0x94>
 87e5a8e:	8b 43 0c             	mov    0xc(%ebx),%eax
 87e5a91:	83 e8 0c             	sub    $0xc,%eax
 87e5a94:	39 c6                	cmp    %eax,%esi
 87e5a96:	75 36                	jne    87e5ace <_ZN12TiXmlPrinterD1Ev+0x6e>
 87e5a98:	c7 03 c8 13 de 08    	movl   $0x8de13c8,(%ebx)
 87e5a9e:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e5aa1:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e5aa4:	89 ec                	mov    %ebp,%esp
 87e5aa6:	5d                   	pop    %ebp
 87e5aa7:	c3                   	ret
 87e5aa8:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5aad:	85 d2                	test   %edx,%edx
 87e5aaf:	74 6c                	je     87e5b1d <_ZN12TiXmlPrinterD1Ev+0xbd>
 87e5ab1:	83 ca ff             	or     $0xffffffff,%edx
 87e5ab4:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5ab9:	85 d2                	test   %edx,%edx
 87e5abb:	7f c7                	jg     87e5a84 <_ZN12TiXmlPrinterD1Ev+0x24>
 87e5abd:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87e5ac0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5ac4:	89 04 24             	mov    %eax,(%esp)
 87e5ac7:	e8 54 0e f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5acc:	eb b6                	jmp    87e5a84 <_ZN12TiXmlPrinterD1Ev+0x24>
 87e5ace:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5ad3:	85 d2                	test   %edx,%edx
 87e5ad5:	74 51                	je     87e5b28 <_ZN12TiXmlPrinterD1Ev+0xc8>
 87e5ad7:	83 ca ff             	or     $0xffffffff,%edx
 87e5ada:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5adf:	85 d2                	test   %edx,%edx
 87e5ae1:	7f b5                	jg     87e5a98 <_ZN12TiXmlPrinterD1Ev+0x38>
 87e5ae3:	8d 55 f5             	lea    -0xb(%ebp),%edx
 87e5ae6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5aea:	89 04 24             	mov    %eax,(%esp)
 87e5aed:	e8 2e 0e f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5af2:	eb a4                	jmp    87e5a98 <_ZN12TiXmlPrinterD1Ev+0x38>
 87e5af4:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5af9:	85 d2                	test   %edx,%edx
 87e5afb:	74 36                	je     87e5b33 <_ZN12TiXmlPrinterD1Ev+0xd3>
 87e5afd:	83 ca ff             	or     $0xffffffff,%edx
 87e5b00:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5b05:	85 d2                	test   %edx,%edx
 87e5b07:	7f 85                	jg     87e5a8e <_ZN12TiXmlPrinterD1Ev+0x2e>
 87e5b09:	8d 55 f6             	lea    -0xa(%ebp),%edx
 87e5b0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5b10:	89 04 24             	mov    %eax,(%esp)
 87e5b13:	e8 08 0e f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5b18:	e9 71 ff ff ff       	jmp    87e5a8e <_ZN12TiXmlPrinterD1Ev+0x2e>
 87e5b1d:	8b 50 08             	mov    0x8(%eax),%edx
 87e5b20:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5b23:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5b26:	eb 91                	jmp    87e5ab9 <_ZN12TiXmlPrinterD1Ev+0x59>
 87e5b28:	8b 50 08             	mov    0x8(%eax),%edx
 87e5b2b:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5b2e:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5b31:	eb ac                	jmp    87e5adf <_ZN12TiXmlPrinterD1Ev+0x7f>
 87e5b33:	8b 50 08             	mov    0x8(%eax),%edx
 87e5b36:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5b39:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5b3c:	eb c7                	jmp    87e5b05 <_ZN12TiXmlPrinterD1Ev+0xa5>
 87e5b3e:	90                   	nop
 87e5b3f:	90                   	nop

087e5b40 <_ZN12TiXmlCommentD1Ev>:
 87e5b40:	55                   	push   %ebp
 87e5b41:	89 e5                	mov    %esp,%ebp
 87e5b43:	83 ec 08             	sub    $0x8,%esp
 87e5b46:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5b49:	c7 00 c8 11 de 08    	movl   $0x8de11c8,(%eax)
 87e5b4f:	c9                   	leave
 87e5b50:	e9 1b d0 ff ff       	jmp    87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5b55:	90                   	nop
 87e5b56:	90                   	nop
 87e5b57:	90                   	nop
 87e5b58:	90                   	nop
 87e5b59:	90                   	nop
 87e5b5a:	90                   	nop
 87e5b5b:	90                   	nop
 87e5b5c:	90                   	nop
 87e5b5d:	90                   	nop
 87e5b5e:	90                   	nop
 87e5b5f:	90                   	nop

087e5b60 <_ZN9TiXmlTextD1Ev>:
 87e5b60:	55                   	push   %ebp
 87e5b61:	89 e5                	mov    %esp,%ebp
 87e5b63:	83 ec 08             	sub    $0x8,%esp
 87e5b66:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5b69:	c7 00 68 11 de 08    	movl   $0x8de1168,(%eax)
 87e5b6f:	c9                   	leave
 87e5b70:	e9 fb cf ff ff       	jmp    87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5b75:	90                   	nop
 87e5b76:	90                   	nop
 87e5b77:	90                   	nop
 87e5b78:	90                   	nop
 87e5b79:	90                   	nop
 87e5b7a:	90                   	nop
 87e5b7b:	90                   	nop
 87e5b7c:	90                   	nop
 87e5b7d:	90                   	nop
 87e5b7e:	90                   	nop
 87e5b7f:	90                   	nop

087e5b80 <_ZN12TiXmlUnknownD1Ev>:
 87e5b80:	55                   	push   %ebp
 87e5b81:	89 e5                	mov    %esp,%ebp
 87e5b83:	83 ec 08             	sub    $0x8,%esp
 87e5b86:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5b89:	c7 00 a8 10 de 08    	movl   $0x8de10a8,(%eax)
 87e5b8f:	c9                   	leave
 87e5b90:	e9 db cf ff ff       	jmp    87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5b95:	90                   	nop
 87e5b96:	90                   	nop
 87e5b97:	90                   	nop
 87e5b98:	90                   	nop
 87e5b99:	90                   	nop
 87e5b9a:	90                   	nop
 87e5b9b:	90                   	nop
 87e5b9c:	90                   	nop
 87e5b9d:	90                   	nop
 87e5b9e:	90                   	nop
 87e5b9f:	90                   	nop

087e5ba0 <_ZN12TiXmlUnknownD0Ev>:
 87e5ba0:	55                   	push   %ebp
 87e5ba1:	89 e5                	mov    %esp,%ebp
 87e5ba3:	53                   	push   %ebx
 87e5ba4:	83 ec 14             	sub    $0x14,%esp
 87e5ba7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5baa:	c7 03 a8 10 de 08    	movl   $0x8de10a8,(%ebx)
 87e5bb0:	89 1c 24             	mov    %ebx,(%esp)
 87e5bb3:	e8 b8 cf ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5bb8:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e5bbb:	83 c4 14             	add    $0x14,%esp
 87e5bbe:	5b                   	pop    %ebx
 87e5bbf:	5d                   	pop    %ebp
 87e5bc0:	e9 2b e9 f3 ff       	jmp    87244f0 <_ZdlPv>
 87e5bc5:	90                   	nop
 87e5bc6:	90                   	nop
 87e5bc7:	90                   	nop
 87e5bc8:	90                   	nop
 87e5bc9:	90                   	nop
 87e5bca:	90                   	nop
 87e5bcb:	90                   	nop
 87e5bcc:	90                   	nop
 87e5bcd:	90                   	nop
 87e5bce:	90                   	nop
 87e5bcf:	90                   	nop

087e5bd0 <_ZN12TiXmlCommentD0Ev>:
 87e5bd0:	55                   	push   %ebp
 87e5bd1:	89 e5                	mov    %esp,%ebp
 87e5bd3:	53                   	push   %ebx
 87e5bd4:	83 ec 14             	sub    $0x14,%esp
 87e5bd7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5bda:	c7 03 c8 11 de 08    	movl   $0x8de11c8,(%ebx)
 87e5be0:	89 1c 24             	mov    %ebx,(%esp)
 87e5be3:	e8 88 cf ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5be8:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e5beb:	83 c4 14             	add    $0x14,%esp
 87e5bee:	5b                   	pop    %ebx
 87e5bef:	5d                   	pop    %ebp
 87e5bf0:	e9 fb e8 f3 ff       	jmp    87244f0 <_ZdlPv>
 87e5bf5:	90                   	nop
 87e5bf6:	90                   	nop
 87e5bf7:	90                   	nop
 87e5bf8:	90                   	nop
 87e5bf9:	90                   	nop
 87e5bfa:	90                   	nop
 87e5bfb:	90                   	nop
 87e5bfc:	90                   	nop
 87e5bfd:	90                   	nop
 87e5bfe:	90                   	nop
 87e5bff:	90                   	nop

087e5c00 <_ZN9TiXmlTextD0Ev>:
 87e5c00:	55                   	push   %ebp
 87e5c01:	89 e5                	mov    %esp,%ebp
 87e5c03:	53                   	push   %ebx
 87e5c04:	83 ec 14             	sub    $0x14,%esp
 87e5c07:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5c0a:	c7 03 68 11 de 08    	movl   $0x8de1168,(%ebx)
 87e5c10:	89 1c 24             	mov    %ebx,(%esp)
 87e5c13:	e8 58 cf ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5c18:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e5c1b:	83 c4 14             	add    $0x14,%esp
 87e5c1e:	5b                   	pop    %ebx
 87e5c1f:	5d                   	pop    %ebp
 87e5c20:	e9 cb e8 f3 ff       	jmp    87244f0 <_ZdlPv>
 87e5c25:	90                   	nop
 87e5c26:	90                   	nop
 87e5c27:	90                   	nop
 87e5c28:	90                   	nop
 87e5c29:	90                   	nop
 87e5c2a:	90                   	nop
 87e5c2b:	90                   	nop
 87e5c2c:	90                   	nop
 87e5c2d:	90                   	nop
 87e5c2e:	90                   	nop
 87e5c2f:	90                   	nop

087e5c30 <_ZN16TiXmlDeclarationD1Ev>:
 87e5c30:	55                   	push   %ebp
 87e5c31:	89 e5                	mov    %esp,%ebp
 87e5c33:	83 ec 28             	sub    $0x28,%esp
 87e5c36:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e5c39:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5c3c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e5c3f:	be f0 cc 48 09       	mov    $0x948ccf0,%esi
 87e5c44:	8b 43 34             	mov    0x34(%ebx),%eax
 87e5c47:	c7 03 08 11 de 08    	movl   $0x8de1108,(%ebx)
 87e5c4d:	83 e8 0c             	sub    $0xc,%eax
 87e5c50:	39 f0                	cmp    %esi,%eax
 87e5c52:	75 26                	jne    87e5c7a <_ZN16TiXmlDeclarationD1Ev+0x4a>
 87e5c54:	8b 43 30             	mov    0x30(%ebx),%eax
 87e5c57:	83 e8 0c             	sub    $0xc,%eax
 87e5c5a:	39 c6                	cmp    %eax,%esi
 87e5c5c:	75 68                	jne    87e5cc6 <_ZN16TiXmlDeclarationD1Ev+0x96>
 87e5c5e:	8b 43 2c             	mov    0x2c(%ebx),%eax
 87e5c61:	83 e8 0c             	sub    $0xc,%eax
 87e5c64:	39 c6                	cmp    %eax,%esi
 87e5c66:	75 38                	jne    87e5ca0 <_ZN16TiXmlDeclarationD1Ev+0x70>
 87e5c68:	89 1c 24             	mov    %ebx,(%esp)
 87e5c6b:	e8 00 cf ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5c70:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e5c73:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e5c76:	89 ec                	mov    %ebp,%esp
 87e5c78:	5d                   	pop    %ebp
 87e5c79:	c3                   	ret
 87e5c7a:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5c7f:	85 d2                	test   %edx,%edx
 87e5c81:	74 6c                	je     87e5cef <_ZN16TiXmlDeclarationD1Ev+0xbf>
 87e5c83:	83 ca ff             	or     $0xffffffff,%edx
 87e5c86:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5c8b:	85 d2                	test   %edx,%edx
 87e5c8d:	7f c5                	jg     87e5c54 <_ZN16TiXmlDeclarationD1Ev+0x24>
 87e5c8f:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87e5c92:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5c96:	89 04 24             	mov    %eax,(%esp)
 87e5c99:	e8 82 0c f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5c9e:	eb b4                	jmp    87e5c54 <_ZN16TiXmlDeclarationD1Ev+0x24>
 87e5ca0:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5ca5:	85 d2                	test   %edx,%edx
 87e5ca7:	74 51                	je     87e5cfa <_ZN16TiXmlDeclarationD1Ev+0xca>
 87e5ca9:	83 ca ff             	or     $0xffffffff,%edx
 87e5cac:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5cb1:	85 d2                	test   %edx,%edx
 87e5cb3:	7f b3                	jg     87e5c68 <_ZN16TiXmlDeclarationD1Ev+0x38>
 87e5cb5:	8d 55 f5             	lea    -0xb(%ebp),%edx
 87e5cb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5cbc:	89 04 24             	mov    %eax,(%esp)
 87e5cbf:	e8 5c 0c f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5cc4:	eb a2                	jmp    87e5c68 <_ZN16TiXmlDeclarationD1Ev+0x38>
 87e5cc6:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5ccb:	85 d2                	test   %edx,%edx
 87e5ccd:	74 36                	je     87e5d05 <_ZN16TiXmlDeclarationD1Ev+0xd5>
 87e5ccf:	83 ca ff             	or     $0xffffffff,%edx
 87e5cd2:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5cd7:	85 d2                	test   %edx,%edx
 87e5cd9:	7f 83                	jg     87e5c5e <_ZN16TiXmlDeclarationD1Ev+0x2e>
 87e5cdb:	8d 55 f6             	lea    -0xa(%ebp),%edx
 87e5cde:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5ce2:	89 04 24             	mov    %eax,(%esp)
 87e5ce5:	e8 36 0c f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5cea:	e9 6f ff ff ff       	jmp    87e5c5e <_ZN16TiXmlDeclarationD1Ev+0x2e>
 87e5cef:	8b 50 08             	mov    0x8(%eax),%edx
 87e5cf2:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5cf5:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5cf8:	eb 91                	jmp    87e5c8b <_ZN16TiXmlDeclarationD1Ev+0x5b>
 87e5cfa:	8b 50 08             	mov    0x8(%eax),%edx
 87e5cfd:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5d00:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5d03:	eb ac                	jmp    87e5cb1 <_ZN16TiXmlDeclarationD1Ev+0x81>
 87e5d05:	8b 50 08             	mov    0x8(%eax),%edx
 87e5d08:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5d0b:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5d0e:	eb c7                	jmp    87e5cd7 <_ZN16TiXmlDeclarationD1Ev+0xa7>

087e5d10 <_ZN16TiXmlDeclarationD0Ev>:
 87e5d10:	55                   	push   %ebp
 87e5d11:	89 e5                	mov    %esp,%ebp
 87e5d13:	83 ec 28             	sub    $0x28,%esp
 87e5d16:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e5d19:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5d1c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e5d1f:	be f0 cc 48 09       	mov    $0x948ccf0,%esi
 87e5d24:	8b 43 34             	mov    0x34(%ebx),%eax
 87e5d27:	c7 03 08 11 de 08    	movl   $0x8de1108,(%ebx)
 87e5d2d:	83 e8 0c             	sub    $0xc,%eax
 87e5d30:	39 f0                	cmp    %esi,%eax
 87e5d32:	75 2e                	jne    87e5d62 <_ZN16TiXmlDeclarationD0Ev+0x52>
 87e5d34:	8b 43 30             	mov    0x30(%ebx),%eax
 87e5d37:	83 e8 0c             	sub    $0xc,%eax
 87e5d3a:	39 c6                	cmp    %eax,%esi
 87e5d3c:	75 70                	jne    87e5dae <_ZN16TiXmlDeclarationD0Ev+0x9e>
 87e5d3e:	8b 43 2c             	mov    0x2c(%ebx),%eax
 87e5d41:	83 e8 0c             	sub    $0xc,%eax
 87e5d44:	39 c6                	cmp    %eax,%esi
 87e5d46:	75 40                	jne    87e5d88 <_ZN16TiXmlDeclarationD0Ev+0x78>
 87e5d48:	89 1c 24             	mov    %ebx,(%esp)
 87e5d4b:	e8 20 ce ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e5d50:	89 1c 24             	mov    %ebx,(%esp)
 87e5d53:	e8 98 e7 f3 ff       	call   87244f0 <_ZdlPv>
 87e5d58:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e5d5b:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e5d5e:	89 ec                	mov    %ebp,%esp
 87e5d60:	5d                   	pop    %ebp
 87e5d61:	c3                   	ret
 87e5d62:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5d67:	85 d2                	test   %edx,%edx
 87e5d69:	74 70                	je     87e5ddb <_ZN16TiXmlDeclarationD0Ev+0xcb>
 87e5d6b:	83 ca ff             	or     $0xffffffff,%edx
 87e5d6e:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5d73:	85 d2                	test   %edx,%edx
 87e5d75:	7f bd                	jg     87e5d34 <_ZN16TiXmlDeclarationD0Ev+0x24>
 87e5d77:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87e5d7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5d7e:	89 04 24             	mov    %eax,(%esp)
 87e5d81:	e8 9a 0b f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5d86:	eb ac                	jmp    87e5d34 <_ZN16TiXmlDeclarationD0Ev+0x24>
 87e5d88:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5d8d:	85 d2                	test   %edx,%edx
 87e5d8f:	74 55                	je     87e5de6 <_ZN16TiXmlDeclarationD0Ev+0xd6>
 87e5d91:	83 ca ff             	or     $0xffffffff,%edx
 87e5d94:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5d99:	85 d2                	test   %edx,%edx
 87e5d9b:	7f ab                	jg     87e5d48 <_ZN16TiXmlDeclarationD0Ev+0x38>
 87e5d9d:	8d 55 f5             	lea    -0xb(%ebp),%edx
 87e5da0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5da4:	89 04 24             	mov    %eax,(%esp)
 87e5da7:	e8 74 0b f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5dac:	eb 9a                	jmp    87e5d48 <_ZN16TiXmlDeclarationD0Ev+0x38>
 87e5dae:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5db3:	85 d2                	test   %edx,%edx
 87e5db5:	74 3a                	je     87e5df1 <_ZN16TiXmlDeclarationD0Ev+0xe1>
 87e5db7:	83 ca ff             	or     $0xffffffff,%edx
 87e5dba:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5dbf:	85 d2                	test   %edx,%edx
 87e5dc1:	0f 8f 77 ff ff ff    	jg     87e5d3e <_ZN16TiXmlDeclarationD0Ev+0x2e>
 87e5dc7:	8d 55 f6             	lea    -0xa(%ebp),%edx
 87e5dca:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5dce:	89 04 24             	mov    %eax,(%esp)
 87e5dd1:	e8 4a 0b f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5dd6:	e9 63 ff ff ff       	jmp    87e5d3e <_ZN16TiXmlDeclarationD0Ev+0x2e>
 87e5ddb:	8b 50 08             	mov    0x8(%eax),%edx
 87e5dde:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5de1:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5de4:	eb 8d                	jmp    87e5d73 <_ZN16TiXmlDeclarationD0Ev+0x63>
 87e5de6:	8b 50 08             	mov    0x8(%eax),%edx
 87e5de9:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5dec:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5def:	eb a8                	jmp    87e5d99 <_ZN16TiXmlDeclarationD0Ev+0x89>
 87e5df1:	8b 50 08             	mov    0x8(%eax),%edx
 87e5df4:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5df7:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5dfa:	eb c3                	jmp    87e5dbf <_ZN16TiXmlDeclarationD0Ev+0xaf>
 87e5dfc:	90                   	nop
 87e5dfd:	90                   	nop
 87e5dfe:	90                   	nop
 87e5dff:	90                   	nop

087e5e00 <_ZN12TiXmlPrinterD0Ev>:
 87e5e00:	55                   	push   %ebp
 87e5e01:	89 e5                	mov    %esp,%ebp
 87e5e03:	83 ec 28             	sub    $0x28,%esp
 87e5e06:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87e5e09:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e5e0c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87e5e0f:	be f0 cc 48 09       	mov    $0x948ccf0,%esi
 87e5e14:	8b 43 14             	mov    0x14(%ebx),%eax
 87e5e17:	c7 03 68 10 de 08    	movl   $0x8de1068,(%ebx)
 87e5e1d:	83 e8 0c             	sub    $0xc,%eax
 87e5e20:	39 f0                	cmp    %esi,%eax
 87e5e22:	75 2c                	jne    87e5e50 <_ZN12TiXmlPrinterD0Ev+0x50>
 87e5e24:	8b 43 10             	mov    0x10(%ebx),%eax
 87e5e27:	83 e8 0c             	sub    $0xc,%eax
 87e5e2a:	39 c6                	cmp    %eax,%esi
 87e5e2c:	75 6e                	jne    87e5e9c <_ZN12TiXmlPrinterD0Ev+0x9c>
 87e5e2e:	8b 43 0c             	mov    0xc(%ebx),%eax
 87e5e31:	83 e8 0c             	sub    $0xc,%eax
 87e5e34:	39 c6                	cmp    %eax,%esi
 87e5e36:	75 3e                	jne    87e5e76 <_ZN12TiXmlPrinterD0Ev+0x76>
 87e5e38:	c7 03 c8 13 de 08    	movl   $0x8de13c8,(%ebx)
 87e5e3e:	89 1c 24             	mov    %ebx,(%esp)
 87e5e41:	e8 aa e6 f3 ff       	call   87244f0 <_ZdlPv>
 87e5e46:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87e5e49:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87e5e4c:	89 ec                	mov    %ebp,%esp
 87e5e4e:	5d                   	pop    %ebp
 87e5e4f:	c3                   	ret
 87e5e50:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5e55:	85 d2                	test   %edx,%edx
 87e5e57:	74 70                	je     87e5ec9 <_ZN12TiXmlPrinterD0Ev+0xc9>
 87e5e59:	83 ca ff             	or     $0xffffffff,%edx
 87e5e5c:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5e61:	85 d2                	test   %edx,%edx
 87e5e63:	7f bf                	jg     87e5e24 <_ZN12TiXmlPrinterD0Ev+0x24>
 87e5e65:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87e5e68:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5e6c:	89 04 24             	mov    %eax,(%esp)
 87e5e6f:	e8 ac 0a f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5e74:	eb ae                	jmp    87e5e24 <_ZN12TiXmlPrinterD0Ev+0x24>
 87e5e76:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5e7b:	85 d2                	test   %edx,%edx
 87e5e7d:	74 55                	je     87e5ed4 <_ZN12TiXmlPrinterD0Ev+0xd4>
 87e5e7f:	83 ca ff             	or     $0xffffffff,%edx
 87e5e82:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5e87:	85 d2                	test   %edx,%edx
 87e5e89:	7f ad                	jg     87e5e38 <_ZN12TiXmlPrinterD0Ev+0x38>
 87e5e8b:	8d 55 f5             	lea    -0xb(%ebp),%edx
 87e5e8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5e92:	89 04 24             	mov    %eax,(%esp)
 87e5e95:	e8 86 0a f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5e9a:	eb 9c                	jmp    87e5e38 <_ZN12TiXmlPrinterD0Ev+0x38>
 87e5e9c:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e5ea1:	85 d2                	test   %edx,%edx
 87e5ea3:	74 3a                	je     87e5edf <_ZN12TiXmlPrinterD0Ev+0xdf>
 87e5ea5:	83 ca ff             	or     $0xffffffff,%edx
 87e5ea8:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e5ead:	85 d2                	test   %edx,%edx
 87e5eaf:	0f 8f 79 ff ff ff    	jg     87e5e2e <_ZN12TiXmlPrinterD0Ev+0x2e>
 87e5eb5:	8d 55 f6             	lea    -0xa(%ebp),%edx
 87e5eb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e5ebc:	89 04 24             	mov    %eax,(%esp)
 87e5ebf:	e8 5c 0a f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e5ec4:	e9 65 ff ff ff       	jmp    87e5e2e <_ZN12TiXmlPrinterD0Ev+0x2e>
 87e5ec9:	8b 50 08             	mov    0x8(%eax),%edx
 87e5ecc:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5ecf:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5ed2:	eb 8d                	jmp    87e5e61 <_ZN12TiXmlPrinterD0Ev+0x61>
 87e5ed4:	8b 50 08             	mov    0x8(%eax),%edx
 87e5ed7:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5eda:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5edd:	eb a8                	jmp    87e5e87 <_ZN12TiXmlPrinterD0Ev+0x87>
 87e5edf:	8b 50 08             	mov    0x8(%eax),%edx
 87e5ee2:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e5ee5:	89 48 08             	mov    %ecx,0x8(%eax)
 87e5ee8:	eb c3                	jmp    87e5ead <_ZN12TiXmlPrinterD0Ev+0xad>
 87e5eea:	90                   	nop
 87e5eeb:	90                   	nop
 87e5eec:	90                   	nop
 87e5eed:	90                   	nop
 87e5eee:	90                   	nop
 87e5eef:	90                   	nop

```

```c
// TiXmlNode::InsertEndChild @ 0x87e5730

/* TiXmlNode::InsertEndChild(TiXmlNode const&) */

undefined4 __thiscall TiXmlNode::InsertEndChild(TiXmlNode *this,TiXmlNode *param_1)

{
  int iVar1;
  TiXmlNode *pTVar2;
  undefined4 uVar3;
  TiXmlDocument *pTVar4;
  
  pTVar2 = this;
  if (*(int *)(param_1 + 0x14) == 0) {
    for (; pTVar2 != (TiXmlNode *)0x0; pTVar2 = *(TiXmlNode **)(pTVar2 + 0x10)) {
      iVar1 = (**(code **)(*(int *)pTVar2 + 0x10))(pTVar2);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*(int *)pTVar2 + 0x10))(pTVar2);
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_087e579f;
      }
    }
  }
  else {
    pTVar2 = (TiXmlNode *)(**(code **)(*(int *)param_1 + 0x40))(param_1);
    if (pTVar2 != (TiXmlNode *)0x0) {
      uVar3 = LinkEndChild(this,pTVar2);
      return uVar3;
    }
  }
  return 0;
  while (this = *(TiXmlNode **)(this + 0x10), this != (TiXmlNode *)0x0) {
LAB_087e579f:
    iVar1 = (**(code **)(*(int *)this + 0x10))(this);
    if (iVar1 != 0) {
      pTVar4 = (TiXmlDocument *)(**(code **)(*(int *)this + 0x10))(this);
      goto LAB_087e57b3;
    }
  }
  pTVar4 = (TiXmlDocument *)0x0;
LAB_087e57b3:
  TiXmlDocument::SetError(pTVar4,0xf,0,0,0);
  return 0;
}

```

---

## IterateChildren

```asm
// === 087e0430 TiXmlNode::IterateChildren  [0x087e0430-0x87e047f] ===
 87e0430:	55                   	push   %ebp
 87e0431:	89 e5                	mov    %esp,%ebp
 87e0433:	83 ec 18             	sub    $0x18,%esp
 87e0436:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e0439:	8b 55 08             	mov    0x8(%ebp),%edx
 87e043c:	85 c0                	test   %eax,%eax
 87e043e:	74 10                	je     87e0450 <_ZNK9TiXmlNode15IterateChildrenEPKS_+0x20>
 87e0440:	39 50 10             	cmp    %edx,0x10(%eax)
 87e0443:	75 10                	jne    87e0455 <_ZNK9TiXmlNode15IterateChildrenEPKS_+0x25>
 87e0445:	8b 40 28             	mov    0x28(%eax),%eax
 87e0448:	c9                   	leave
 87e0449:	c3                   	ret
 87e044a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e0450:	8b 42 18             	mov    0x18(%edx),%eax
 87e0453:	c9                   	leave
 87e0454:	c3                   	ret
 87e0455:	c7 44 24 0c 80 16 de 	movl   $0x8de1680,0xc(%esp)
 87e045c:	08 
 87e045d:	c7 44 24 08 89 01 00 	movl   $0x189,0x8(%esp)
 87e0464:	00 
 87e0465:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e046c:	08 
 87e046d:	c7 04 24 58 0e de 08 	movl   $0x8de0e58,(%esp)
 87e0474:	e8 d7 d7 89 ff       	call   807dc50 <__assert_fail@plt>
 87e0479:	90                   	nop
 87e047a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlNode::IterateChildren @ 0x87e0430

/* TiXmlNode::IterateChildren(TiXmlNode const*) const */

undefined4 __thiscall TiXmlNode::IterateChildren(TiXmlNode *this,TiXmlNode *param_1)

{
  if (param_1 == (TiXmlNode *)0x0) {
    return *(undefined4 *)(this + 0x18);
  }
  if (*(TiXmlNode **)(param_1 + 0x10) == this) {
    return *(undefined4 *)(param_1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("previous->parent == this","tinyxml.cpp",0x189,
                "const TiXmlNode* TiXmlNode::IterateChildren(const TiXmlNode*) const");
}

```

---

## IterateChildren_087e0fd0

```asm
// === 087e0fd0 TiXmlNode::IterateChildren  [0x087e0fd0-0x87e104f] ===
 87e0fd0:	55                   	push   %ebp
 87e0fd1:	89 e5                	mov    %esp,%ebp
 87e0fd3:	56                   	push   %esi
 87e0fd4:	53                   	push   %ebx
 87e0fd5:	83 ec 10             	sub    $0x10,%esp
 87e0fd8:	8b 45 10             	mov    0x10(%ebp),%eax
 87e0fdb:	8b 55 08             	mov    0x8(%ebp),%edx
 87e0fde:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e0fe1:	85 c0                	test   %eax,%eax
 87e0fe3:	74 36                	je     87e101b <_ZNK9TiXmlNode15IterateChildrenEPKcPKS_+0x4b>
 87e0fe5:	39 50 10             	cmp    %edx,0x10(%eax)
 87e0fe8:	75 3c                	jne    87e1026 <_ZNK9TiXmlNode15IterateChildrenEPKcPKS_+0x56>
 87e0fea:	8b 58 28             	mov    0x28(%eax),%ebx
 87e0fed:	85 db                	test   %ebx,%ebx
 87e0fef:	75 0e                	jne    87e0fff <_ZNK9TiXmlNode15IterateChildrenEPKcPKS_+0x2f>
 87e0ff1:	eb 1f                	jmp    87e1012 <_ZNK9TiXmlNode15IterateChildrenEPKcPKS_+0x42>
 87e0ff3:	90                   	nop
 87e0ff4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0ff8:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e0ffb:	85 db                	test   %ebx,%ebx
 87e0ffd:	74 13                	je     87e1012 <_ZNK9TiXmlNode15IterateChildrenEPKcPKS_+0x42>
 87e0fff:	8b 43 20             	mov    0x20(%ebx),%eax
 87e1002:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e1006:	89 04 24             	mov    %eax,(%esp)
 87e1009:	e8 d2 d4 89 ff       	call   807e4e0 <strcmp@plt>
 87e100e:	85 c0                	test   %eax,%eax
 87e1010:	75 e6                	jne    87e0ff8 <_ZNK9TiXmlNode15IterateChildrenEPKcPKS_+0x28>
 87e1012:	83 c4 10             	add    $0x10,%esp
 87e1015:	89 d8                	mov    %ebx,%eax
 87e1017:	5b                   	pop    %ebx
 87e1018:	5e                   	pop    %esi
 87e1019:	5d                   	pop    %ebp
 87e101a:	c3                   	ret
 87e101b:	83 c4 10             	add    $0x10,%esp
 87e101e:	5b                   	pop    %ebx
 87e101f:	5e                   	pop    %esi
 87e1020:	5d                   	pop    %ebp
 87e1021:	e9 0a f3 ff ff       	jmp    87e0330 <_ZNK9TiXmlNode10FirstChildEPKc>
 87e1026:	c7 44 24 0c 20 16 de 	movl   $0x8de1620,0xc(%esp)
 87e102d:	08 
 87e102e:	c7 44 24 08 97 01 00 	movl   $0x197,0x8(%esp)
 87e1035:	00 
 87e1036:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e103d:	08 
 87e103e:	c7 04 24 58 0e de 08 	movl   $0x8de0e58,(%esp)
 87e1045:	e8 06 cc 89 ff       	call   807dc50 <__assert_fail@plt>
 87e104a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlNode::IterateChildren @ 0x87e0fd0

/* TiXmlNode::IterateChildren(char const*, TiXmlNode const*) const */

int __thiscall TiXmlNode::IterateChildren(TiXmlNode *this,char *param_1,TiXmlNode *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (TiXmlNode *)0x0) {
    iVar2 = FirstChild(this,param_1);
    return iVar2;
  }
  if (*(TiXmlNode **)(param_2 + 0x10) == this) {
    iVar2 = *(int *)(param_2 + 0x28);
    while ((iVar2 != 0 && (iVar1 = strcmp(*(char **)(iVar2 + 0x20),param_1), iVar1 != 0))) {
      iVar2 = *(int *)(iVar2 + 0x28);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("previous->parent == this","tinyxml.cpp",0x197,
                "const TiXmlNode* TiXmlNode::IterateChildren(const char*, const TiXmlNode*) const");
}

```

---

## LastChild

```asm
// === 087e02f0 TiXmlNode::LastChild  [0x087e02f0-0x87e032f] ===
 87e02f0:	55                   	push   %ebp
 87e02f1:	89 e5                	mov    %esp,%ebp
 87e02f3:	56                   	push   %esi
 87e02f4:	53                   	push   %ebx
 87e02f5:	83 ec 10             	sub    $0x10,%esp
 87e02f8:	8b 45 08             	mov    0x8(%ebp),%eax
 87e02fb:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e02fe:	8b 58 1c             	mov    0x1c(%eax),%ebx
 87e0301:	85 db                	test   %ebx,%ebx
 87e0303:	75 0a                	jne    87e030f <_ZNK9TiXmlNode9LastChildEPKc+0x1f>
 87e0305:	eb 1b                	jmp    87e0322 <_ZNK9TiXmlNode9LastChildEPKc+0x32>
 87e0307:	90                   	nop
 87e0308:	8b 5b 24             	mov    0x24(%ebx),%ebx
 87e030b:	85 db                	test   %ebx,%ebx
 87e030d:	74 13                	je     87e0322 <_ZNK9TiXmlNode9LastChildEPKc+0x32>
 87e030f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e0312:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0316:	89 04 24             	mov    %eax,(%esp)
 87e0319:	e8 c2 e1 89 ff       	call   807e4e0 <strcmp@plt>
 87e031e:	85 c0                	test   %eax,%eax
 87e0320:	75 e6                	jne    87e0308 <_ZNK9TiXmlNode9LastChildEPKc+0x18>
 87e0322:	83 c4 10             	add    $0x10,%esp
 87e0325:	89 d8                	mov    %ebx,%eax
 87e0327:	5b                   	pop    %ebx
 87e0328:	5e                   	pop    %esi
 87e0329:	5d                   	pop    %ebp
 87e032a:	c3                   	ret
 87e032b:	90                   	nop
 87e032c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::LastChild @ 0x87e02f0

/* TiXmlNode::LastChild(char const*) const */

int __thiscall TiXmlNode::LastChild(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x1c);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x24);
  }
  return iVar1;
}

```

---

## LinkEndChild

```asm
// === 087e2150 TiXmlNode::LinkEndChild  [0x087e2150-0x87e22cf] ===
 87e2150:	55                   	push   %ebp
 87e2151:	89 e5                	mov    %esp,%ebp
 87e2153:	57                   	push   %edi
 87e2154:	56                   	push   %esi
 87e2155:	53                   	push   %ebx
 87e2156:	83 ec 3c             	sub    $0x3c,%esp
 87e2159:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e215c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e215f:	8b 46 10             	mov    0x10(%esi),%eax
 87e2162:	85 c0                	test   %eax,%eax
 87e2164:	74 08                	je     87e216e <_ZN9TiXmlNode12LinkEndChildEPS_+0x1e>
 87e2166:	39 f8                	cmp    %edi,%eax
 87e2168:	0f 85 0f 01 00 00    	jne    87e227d <_ZN9TiXmlNode12LinkEndChildEPS_+0x12d>
 87e216e:	89 f3                	mov    %esi,%ebx
 87e2170:	eb 0d                	jmp    87e217f <_ZN9TiXmlNode12LinkEndChildEPS_+0x2f>
 87e2172:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e2178:	8b 5b 10             	mov    0x10(%ebx),%ebx
 87e217b:	85 db                	test   %ebx,%ebx
 87e217d:	74 6d                	je     87e21ec <_ZN9TiXmlNode12LinkEndChildEPS_+0x9c>
 87e217f:	8b 03                	mov    (%ebx),%eax
 87e2181:	89 1c 24             	mov    %ebx,(%esp)
 87e2184:	ff 50 10             	call   *0x10(%eax)
 87e2187:	85 c0                	test   %eax,%eax
 87e2189:	74 ed                	je     87e2178 <_ZN9TiXmlNode12LinkEndChildEPS_+0x28>
 87e218b:	8b 03                	mov    (%ebx),%eax
 87e218d:	89 1c 24             	mov    %ebx,(%esp)
 87e2190:	ff 50 10             	call   *0x10(%eax)
 87e2193:	85 c0                	test   %eax,%eax
 87e2195:	74 55                	je     87e21ec <_ZN9TiXmlNode12LinkEndChildEPS_+0x9c>
 87e2197:	89 f3                	mov    %esi,%ebx
 87e2199:	eb 0c                	jmp    87e21a7 <_ZN9TiXmlNode12LinkEndChildEPS_+0x57>
 87e219b:	90                   	nop
 87e219c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e21a0:	8b 5b 10             	mov    0x10(%ebx),%ebx
 87e21a3:	85 db                	test   %ebx,%ebx
 87e21a5:	74 79                	je     87e2220 <_ZN9TiXmlNode12LinkEndChildEPS_+0xd0>
 87e21a7:	8b 03                	mov    (%ebx),%eax
 87e21a9:	89 1c 24             	mov    %ebx,(%esp)
 87e21ac:	ff 50 10             	call   *0x10(%eax)
 87e21af:	85 c0                	test   %eax,%eax
 87e21b1:	74 ed                	je     87e21a0 <_ZN9TiXmlNode12LinkEndChildEPS_+0x50>
 87e21b3:	8b 03                	mov    (%ebx),%eax
 87e21b5:	89 1c 24             	mov    %ebx,(%esp)
 87e21b8:	ff 50 10             	call   *0x10(%eax)
 87e21bb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e21be:	85 ff                	test   %edi,%edi
 87e21c0:	74 56                	je     87e2218 <_ZN9TiXmlNode12LinkEndChildEPS_+0xc8>
 87e21c2:	89 fb                	mov    %edi,%ebx
 87e21c4:	eb 09                	jmp    87e21cf <_ZN9TiXmlNode12LinkEndChildEPS_+0x7f>
 87e21c6:	66 90                	xchg   %ax,%ax
 87e21c8:	8b 5b 10             	mov    0x10(%ebx),%ebx
 87e21cb:	85 db                	test   %ebx,%ebx
 87e21cd:	74 49                	je     87e2218 <_ZN9TiXmlNode12LinkEndChildEPS_+0xc8>
 87e21cf:	8b 03                	mov    (%ebx),%eax
 87e21d1:	89 1c 24             	mov    %ebx,(%esp)
 87e21d4:	ff 50 10             	call   *0x10(%eax)
 87e21d7:	85 c0                	test   %eax,%eax
 87e21d9:	74 ed                	je     87e21c8 <_ZN9TiXmlNode12LinkEndChildEPS_+0x78>
 87e21db:	8b 03                	mov    (%ebx),%eax
 87e21dd:	89 1c 24             	mov    %ebx,(%esp)
 87e21e0:	ff 50 10             	call   *0x10(%eax)
 87e21e3:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 87e21e6:	0f 85 b5 00 00 00    	jne    87e22a1 <_ZN9TiXmlNode12LinkEndChildEPS_+0x151>
 87e21ec:	8b 46 14             	mov    0x14(%esi),%eax
 87e21ef:	85 c0                	test   %eax,%eax
 87e21f1:	74 42                	je     87e2235 <_ZN9TiXmlNode12LinkEndChildEPS_+0xe5>
 87e21f3:	8b 47 1c             	mov    0x1c(%edi),%eax
 87e21f6:	89 7e 10             	mov    %edi,0x10(%esi)
 87e21f9:	c7 46 28 00 00 00 00 	movl   $0x0,0x28(%esi)
 87e2200:	85 c0                	test   %eax,%eax
 87e2202:	89 46 24             	mov    %eax,0x24(%esi)
 87e2205:	74 29                	je     87e2230 <_ZN9TiXmlNode12LinkEndChildEPS_+0xe0>
 87e2207:	89 70 28             	mov    %esi,0x28(%eax)
 87e220a:	89 77 1c             	mov    %esi,0x1c(%edi)
 87e220d:	83 c4 3c             	add    $0x3c,%esp
 87e2210:	89 f0                	mov    %esi,%eax
 87e2212:	5b                   	pop    %ebx
 87e2213:	5e                   	pop    %esi
 87e2214:	5f                   	pop    %edi
 87e2215:	5d                   	pop    %ebp
 87e2216:	c3                   	ret
 87e2217:	90                   	nop
 87e2218:	31 c0                	xor    %eax,%eax
 87e221a:	eb c7                	jmp    87e21e3 <_ZN9TiXmlNode12LinkEndChildEPS_+0x93>
 87e221c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e2220:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 87e2227:	eb 95                	jmp    87e21be <_ZN9TiXmlNode12LinkEndChildEPS_+0x6e>
 87e2229:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e2230:	89 77 18             	mov    %esi,0x18(%edi)
 87e2233:	eb d5                	jmp    87e220a <_ZN9TiXmlNode12LinkEndChildEPS_+0xba>
 87e2235:	8b 06                	mov    (%esi),%eax
 87e2237:	89 34 24             	mov    %esi,(%esp)
 87e223a:	31 f6                	xor    %esi,%esi
 87e223c:	ff 50 04             	call   *0x4(%eax)
 87e223f:	89 3c 24             	mov    %edi,(%esp)
 87e2242:	e8 89 dc ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e2247:	85 c0                	test   %eax,%eax
 87e2249:	74 c2                	je     87e220d <_ZN9TiXmlNode12LinkEndChildEPS_+0xbd>
 87e224b:	89 3c 24             	mov    %edi,(%esp)
 87e224e:	e8 7d dc ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e2253:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e225a:	00 
 87e225b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e2262:	00 
 87e2263:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e226a:	00 
 87e226b:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 87e2272:	00 
 87e2273:	89 04 24             	mov    %eax,(%esp)
 87e2276:	e8 b5 4a 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e227b:	eb 90                	jmp    87e220d <_ZN9TiXmlNode12LinkEndChildEPS_+0xbd>
 87e227d:	c7 44 24 0c e0 17 de 	movl   $0x8de17e0,0xc(%esp)
 87e2284:	08 
 87e2285:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 87e228c:	00 
 87e228d:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e2294:	08 
 87e2295:	c7 04 24 c4 0f de 08 	movl   $0x8de0fc4,(%esp)
 87e229c:	e8 af b9 89 ff       	call   807dc50 <__assert_fail@plt>
 87e22a1:	c7 44 24 0c e0 17 de 	movl   $0x8de17e0,0xc(%esp)
 87e22a8:	08 
 87e22a9:	c7 44 24 08 bd 00 00 	movl   $0xbd,0x8(%esp)
 87e22b0:	00 
 87e22b1:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e22b8:	08 
 87e22b9:	c7 04 24 f0 0f de 08 	movl   $0x8de0ff0,(%esp)
 87e22c0:	e8 8b b9 89 ff       	call   807dc50 <__assert_fail@plt>
 87e22c5:	90                   	nop
 87e22c6:	8d 76 00             	lea    0x0(%esi),%esi
 87e22c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlNode::LinkEndChild @ 0x87e2150

/* TiXmlNode::LinkEndChild(TiXmlNode*) */

TiXmlNode * __thiscall TiXmlNode::LinkEndChild(TiXmlNode *this,TiXmlNode *param_1)

{
  TiXmlNode *pTVar1;
  TiXmlNode *pTVar2;
  int iVar3;
  TiXmlDocument *pTVar4;
  TiXmlNode *pTVar5;
  int local_20;
  
  pTVar5 = param_1;
  if ((*(TiXmlNode **)(param_1 + 0x10) != (TiXmlNode *)0x0) &&
     (*(TiXmlNode **)(param_1 + 0x10) != this)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("node->parent == 0 || node->parent == this","tinyxml.cpp",0xbc,
                  "TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)");
  }
  do {
    iVar3 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
      pTVar5 = param_1;
      if (iVar3 != 0) goto LAB_087e21a7;
      break;
    }
    pTVar1 = pTVar5 + 0x10;
    pTVar5 = *(TiXmlNode **)pTVar1;
  } while (*(TiXmlNode **)pTVar1 != (TiXmlNode *)0x0);
  goto LAB_087e21ec;
  while (pTVar2 = pTVar5 + 0x10, pTVar5 = *(TiXmlNode **)pTVar2,
        *(TiXmlNode **)pTVar2 != (TiXmlNode *)0x0) {
LAB_087e21a7:
    iVar3 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
    pTVar1 = this;
    if (iVar3 != 0) {
      local_20 = (**(code **)(*(int *)pTVar5 + 0x10))(pTVar5);
      goto joined_r0x087e21c0;
    }
  }
  local_20 = 0;
joined_r0x087e21c0:
  do {
    if (pTVar1 == (TiXmlNode *)0x0) break;
    iVar3 = (**(code **)(*(int *)pTVar1 + 0x10))(pTVar1);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)pTVar1 + 0x10))(pTVar1);
      goto LAB_087e21e3;
    }
    pTVar1 = *(TiXmlNode **)(pTVar1 + 0x10);
  } while( true );
  iVar3 = 0;
LAB_087e21e3:
  if (local_20 != iVar3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("node->GetDocument() == 0 || node->GetDocument() == this->GetDocument()",
                  "tinyxml.cpp",0xbd,"TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)");
  }
LAB_087e21ec:
  if (*(int *)(param_1 + 0x14) == 0) {
    pTVar5 = (TiXmlNode *)0x0;
    (**(code **)(*(int *)param_1 + 4))(param_1);
    iVar3 = GetDocument(this);
    if (iVar3 != 0) {
      pTVar4 = (TiXmlDocument *)GetDocument(this);
      TiXmlDocument::SetError(pTVar4,0xf,0,0,0);
    }
  }
  else {
    iVar3 = *(int *)(this + 0x1c);
    *(TiXmlNode **)(param_1 + 0x10) = this;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      *(TiXmlNode **)(this + 0x18) = param_1;
    }
    else {
      *(TiXmlNode **)(iVar3 + 0x28) = param_1;
    }
    *(TiXmlNode **)(this + 0x1c) = param_1;
    pTVar5 = param_1;
  }
  return pTVar5;
}

```

---

## NextSibling

```asm
// === 087e02b0 TiXmlNode::NextSibling  [0x087e02b0-0x87e02ef] ===
 87e02b0:	55                   	push   %ebp
 87e02b1:	89 e5                	mov    %esp,%ebp
 87e02b3:	56                   	push   %esi
 87e02b4:	53                   	push   %ebx
 87e02b5:	83 ec 10             	sub    $0x10,%esp
 87e02b8:	8b 45 08             	mov    0x8(%ebp),%eax
 87e02bb:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e02be:	8b 58 28             	mov    0x28(%eax),%ebx
 87e02c1:	85 db                	test   %ebx,%ebx
 87e02c3:	75 0a                	jne    87e02cf <_ZNK9TiXmlNode11NextSiblingEPKc+0x1f>
 87e02c5:	eb 1b                	jmp    87e02e2 <_ZNK9TiXmlNode11NextSiblingEPKc+0x32>
 87e02c7:	90                   	nop
 87e02c8:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e02cb:	85 db                	test   %ebx,%ebx
 87e02cd:	74 13                	je     87e02e2 <_ZNK9TiXmlNode11NextSiblingEPKc+0x32>
 87e02cf:	8b 43 20             	mov    0x20(%ebx),%eax
 87e02d2:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e02d6:	89 04 24             	mov    %eax,(%esp)
 87e02d9:	e8 02 e2 89 ff       	call   807e4e0 <strcmp@plt>
 87e02de:	85 c0                	test   %eax,%eax
 87e02e0:	75 e6                	jne    87e02c8 <_ZNK9TiXmlNode11NextSiblingEPKc+0x18>
 87e02e2:	83 c4 10             	add    $0x10,%esp
 87e02e5:	89 d8                	mov    %ebx,%eax
 87e02e7:	5b                   	pop    %ebx
 87e02e8:	5e                   	pop    %esi
 87e02e9:	5d                   	pop    %ebp
 87e02ea:	c3                   	ret
 87e02eb:	90                   	nop
 87e02ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::NextSibling @ 0x87e02b0

/* TiXmlNode::NextSibling(char const*) const */

int __thiscall TiXmlNode::NextSibling(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x28);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  return iVar1;
}

```

---

## NextSiblingElement

```asm
// === 087dfe80 TiXmlNode::NextSiblingElement  [0x087dfe80-0x87dfecf] ===
 87dfe80:	55                   	push   %ebp
 87dfe81:	89 e5                	mov    %esp,%ebp
 87dfe83:	53                   	push   %ebx
 87dfe84:	83 ec 14             	sub    $0x14,%esp
 87dfe87:	8b 45 08             	mov    0x8(%ebp),%eax
 87dfe8a:	8b 58 28             	mov    0x28(%eax),%ebx
 87dfe8d:	85 db                	test   %ebx,%ebx
 87dfe8f:	75 0e                	jne    87dfe9f <_ZNK9TiXmlNode18NextSiblingElementEv+0x1f>
 87dfe91:	eb 2d                	jmp    87dfec0 <_ZNK9TiXmlNode18NextSiblingElementEv+0x40>
 87dfe93:	90                   	nop
 87dfe94:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87dfe98:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87dfe9b:	85 db                	test   %ebx,%ebx
 87dfe9d:	74 21                	je     87dfec0 <_ZNK9TiXmlNode18NextSiblingElementEv+0x40>
 87dfe9f:	8b 03                	mov    (%ebx),%eax
 87dfea1:	89 1c 24             	mov    %ebx,(%esp)
 87dfea4:	ff 50 14             	call   *0x14(%eax)
 87dfea7:	85 c0                	test   %eax,%eax
 87dfea9:	74 ed                	je     87dfe98 <_ZNK9TiXmlNode18NextSiblingElementEv+0x18>
 87dfeab:	8b 03                	mov    (%ebx),%eax
 87dfead:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87dfeb0:	8b 40 14             	mov    0x14(%eax),%eax
 87dfeb3:	83 c4 14             	add    $0x14,%esp
 87dfeb6:	5b                   	pop    %ebx
 87dfeb7:	5d                   	pop    %ebp
 87dfeb8:	ff e0                	jmp    *%eax
 87dfeba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87dfec0:	83 c4 14             	add    $0x14,%esp
 87dfec3:	31 c0                	xor    %eax,%eax
 87dfec5:	5b                   	pop    %ebx
 87dfec6:	5d                   	pop    %ebp
 87dfec7:	c3                   	ret
 87dfec8:	90                   	nop
 87dfec9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::NextSiblingElement @ 0x87dfe80

/* TiXmlNode::NextSiblingElement() const */

undefined4 __thiscall TiXmlNode::NextSiblingElement(TiXmlNode *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x28);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if (iVar2 != 0) break;
    piVar1 = (int *)piVar1[10];
  }
                    /* WARNING: Could not recover jumptable at 0x087dfeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*piVar1 + 0x14))();
  return uVar3;
}

```

---

## NextSiblingElement_087e10f0

```asm
// === 087e10f0 TiXmlNode::NextSiblingElement  [0x087e10f0-0x87e116f] ===
 87e10f0:	55                   	push   %ebp
 87e10f1:	89 e5                	mov    %esp,%ebp
 87e10f3:	56                   	push   %esi
 87e10f4:	53                   	push   %ebx
 87e10f5:	83 ec 10             	sub    $0x10,%esp
 87e10f8:	8b 45 08             	mov    0x8(%ebp),%eax
 87e10fb:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e10fe:	8b 58 28             	mov    0x28(%eax),%ebx
 87e1101:	85 db                	test   %ebx,%ebx
 87e1103:	75 0a                	jne    87e110f <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x1f>
 87e1105:	eb 4b                	jmp    87e1152 <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x62>
 87e1107:	90                   	nop
 87e1108:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e110b:	85 db                	test   %ebx,%ebx
 87e110d:	74 43                	je     87e1152 <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x62>
 87e110f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e1112:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e1116:	89 04 24             	mov    %eax,(%esp)
 87e1119:	e8 c2 d3 89 ff       	call   807e4e0 <strcmp@plt>
 87e111e:	85 c0                	test   %eax,%eax
 87e1120:	75 e6                	jne    87e1108 <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x18>
 87e1122:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e1128:	8b 03                	mov    (%ebx),%eax
 87e112a:	89 1c 24             	mov    %ebx,(%esp)
 87e112d:	ff 50 14             	call   *0x14(%eax)
 87e1130:	85 c0                	test   %eax,%eax
 87e1132:	74 17                	je     87e114b <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x5b>
 87e1134:	eb 25                	jmp    87e115b <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x6b>
 87e1136:	66 90                	xchg   %ax,%ax
 87e1138:	8b 43 20             	mov    0x20(%ebx),%eax
 87e113b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e113f:	89 04 24             	mov    %eax,(%esp)
 87e1142:	e8 99 d3 89 ff       	call   807e4e0 <strcmp@plt>
 87e1147:	85 c0                	test   %eax,%eax
 87e1149:	74 dd                	je     87e1128 <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x38>
 87e114b:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e114e:	85 db                	test   %ebx,%ebx
 87e1150:	75 e6                	jne    87e1138 <_ZNK9TiXmlNode18NextSiblingElementEPKc+0x48>
 87e1152:	83 c4 10             	add    $0x10,%esp
 87e1155:	31 c0                	xor    %eax,%eax
 87e1157:	5b                   	pop    %ebx
 87e1158:	5e                   	pop    %esi
 87e1159:	5d                   	pop    %ebp
 87e115a:	c3                   	ret
 87e115b:	8b 03                	mov    (%ebx),%eax
 87e115d:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e1160:	8b 40 14             	mov    0x14(%eax),%eax
 87e1163:	83 c4 10             	add    $0x10,%esp
 87e1166:	5b                   	pop    %ebx
 87e1167:	5e                   	pop    %esi
 87e1168:	5d                   	pop    %ebp
 87e1169:	ff e0                	jmp    *%eax
 87e116b:	90                   	nop
 87e116c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::NextSiblingElement @ 0x87e10f0

/* TiXmlNode::NextSiblingElement(char const*) const */

undefined4 __thiscall TiXmlNode::NextSiblingElement(TiXmlNode *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this + 0x28);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)piVar3[8],param_1);
    if (iVar1 == 0) break;
    piVar3 = (int *)piVar3[10];
  }
  do {
    iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x087e1169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar3 + 0x14))();
      return uVar2;
    }
    do {
      piVar3 = (int *)piVar3[10];
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      iVar1 = strcmp((char *)piVar3[8],param_1);
    } while (iVar1 != 0);
  } while( true );
}

```

---

## PreviousSibling

```asm
// === 087e0270 TiXmlNode::PreviousSibling  [0x087e0270-0x87e02af] ===
 87e0270:	55                   	push   %ebp
 87e0271:	89 e5                	mov    %esp,%ebp
 87e0273:	56                   	push   %esi
 87e0274:	53                   	push   %ebx
 87e0275:	83 ec 10             	sub    $0x10,%esp
 87e0278:	8b 45 08             	mov    0x8(%ebp),%eax
 87e027b:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e027e:	8b 58 24             	mov    0x24(%eax),%ebx
 87e0281:	85 db                	test   %ebx,%ebx
 87e0283:	75 0a                	jne    87e028f <_ZNK9TiXmlNode15PreviousSiblingEPKc+0x1f>
 87e0285:	eb 1b                	jmp    87e02a2 <_ZNK9TiXmlNode15PreviousSiblingEPKc+0x32>
 87e0287:	90                   	nop
 87e0288:	8b 5b 24             	mov    0x24(%ebx),%ebx
 87e028b:	85 db                	test   %ebx,%ebx
 87e028d:	74 13                	je     87e02a2 <_ZNK9TiXmlNode15PreviousSiblingEPKc+0x32>
 87e028f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e0292:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0296:	89 04 24             	mov    %eax,(%esp)
 87e0299:	e8 42 e2 89 ff       	call   807e4e0 <strcmp@plt>
 87e029e:	85 c0                	test   %eax,%eax
 87e02a0:	75 e6                	jne    87e0288 <_ZNK9TiXmlNode15PreviousSiblingEPKc+0x18>
 87e02a2:	83 c4 10             	add    $0x10,%esp
 87e02a5:	89 d8                	mov    %ebx,%eax
 87e02a7:	5b                   	pop    %ebx
 87e02a8:	5e                   	pop    %esi
 87e02a9:	5d                   	pop    %ebp
 87e02aa:	c3                   	ret
 87e02ab:	90                   	nop
 87e02ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::PreviousSibling @ 0x87e0270

/* TiXmlNode::PreviousSibling(char const*) const */

int __thiscall TiXmlNode::PreviousSibling(TiXmlNode *this,char *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  while ((iVar1 != 0 && (iVar2 = strcmp(*(char **)(iVar1 + 0x20),param_1), iVar2 != 0))) {
    iVar1 = *(int *)(iVar1 + 0x24);
  }
  return iVar1;
}

```

---

## RemoveChild

```asm
// === 087e0480 TiXmlNode::RemoveChild  [0x087e0480-0x87e050f] ===
 87e0480:	55                   	push   %ebp
 87e0481:	31 c0                	xor    %eax,%eax
 87e0483:	89 e5                	mov    %esp,%ebp
 87e0485:	53                   	push   %ebx
 87e0486:	83 ec 14             	sub    $0x14,%esp
 87e0489:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e048c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e048f:	85 d2                	test   %edx,%edx
 87e0491:	74 29                	je     87e04bc <_ZN9TiXmlNode11RemoveChildEPS_+0x3c>
 87e0493:	39 5a 10             	cmp    %ebx,0x10(%edx)
 87e0496:	75 45                	jne    87e04dd <_ZN9TiXmlNode11RemoveChildEPS_+0x5d>
 87e0498:	8b 42 28             	mov    0x28(%edx),%eax
 87e049b:	85 c0                	test   %eax,%eax
 87e049d:	74 29                	je     87e04c8 <_ZN9TiXmlNode11RemoveChildEPS_+0x48>
 87e049f:	8b 4a 24             	mov    0x24(%edx),%ecx
 87e04a2:	89 48 24             	mov    %ecx,0x24(%eax)
 87e04a5:	8b 4a 24             	mov    0x24(%edx),%ecx
 87e04a8:	85 c9                	test   %ecx,%ecx
 87e04aa:	74 2c                	je     87e04d8 <_ZN9TiXmlNode11RemoveChildEPS_+0x58>
 87e04ac:	89 41 28             	mov    %eax,0x28(%ecx)
 87e04af:	8b 02                	mov    (%edx),%eax
 87e04b1:	89 14 24             	mov    %edx,(%esp)
 87e04b4:	ff 50 04             	call   *0x4(%eax)
 87e04b7:	b8 01 00 00 00       	mov    $0x1,%eax
 87e04bc:	83 c4 14             	add    $0x14,%esp
 87e04bf:	5b                   	pop    %ebx
 87e04c0:	5d                   	pop    %ebp
 87e04c1:	c3                   	ret
 87e04c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e04c8:	8b 4a 24             	mov    0x24(%edx),%ecx
 87e04cb:	85 c9                	test   %ecx,%ecx
 87e04cd:	89 4b 1c             	mov    %ecx,0x1c(%ebx)
 87e04d0:	75 da                	jne    87e04ac <_ZN9TiXmlNode11RemoveChildEPS_+0x2c>
 87e04d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e04d8:	89 43 18             	mov    %eax,0x18(%ebx)
 87e04db:	eb d2                	jmp    87e04af <_ZN9TiXmlNode11RemoveChildEPS_+0x2f>
 87e04dd:	c7 44 24 0c e0 16 de 	movl   $0x8de16e0,0xc(%esp)
 87e04e4:	08 
 87e04e5:	c7 44 24 08 57 01 00 	movl   $0x157,0x8(%esp)
 87e04ec:	00 
 87e04ed:	c7 44 24 04 4c 0e de 	movl   $0x8de0e4c,0x4(%esp)
 87e04f4:	08 
 87e04f5:	c7 04 24 6d 45 d0 08 	movl   $0x8d0456d,(%esp)
 87e04fc:	e8 4f d7 89 ff       	call   807dc50 <__assert_fail@plt>
 87e0501:	90                   	nop
 87e0502:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e0509:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlNode::RemoveChild @ 0x87e0480

/* TiXmlNode::RemoveChild(TiXmlNode*) */

undefined4 __thiscall TiXmlNode::RemoveChild(TiXmlNode *this,TiXmlNode *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (TiXmlNode *)0x0) {
    return 0;
  }
  if (*(TiXmlNode **)(param_1 + 0x10) == this) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x24);
      *(int *)(this + 0x1c) = iVar2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      iVar2 = *(int *)(param_1 + 0x24);
    }
    if (iVar2 == 0) {
      *(int *)(this + 0x18) = iVar1;
    }
    else {
      *(int *)(iVar2 + 0x28) = iVar1;
    }
    (**(code **)(*(int *)param_1 + 4))(param_1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","tinyxml.cpp",0x157,"bool TiXmlNode::RemoveChild(TiXmlNode*)");
}

```

---

## ReplaceChild

```asm
// === 087e09e0 TiXmlNode::ReplaceChild  [0x087e09e0-0x87e0a9f] ===
 87e09e0:	55                   	push   %ebp
 87e09e1:	89 e5                	mov    %esp,%ebp
 87e09e3:	83 ec 48             	sub    $0x48,%esp
 87e09e6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e09e9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e09ec:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e09ef:	8b 75 10             	mov    0x10(%ebp),%esi
 87e09f2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e09f5:	85 db                	test   %ebx,%ebx
 87e09f7:	75 0f                	jne    87e0a08 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x28>
 87e09f9:	31 c0                	xor    %eax,%eax
 87e09fb:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e09fe:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e0a01:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e0a04:	89 ec                	mov    %ebp,%esp
 87e0a06:	5d                   	pop    %ebp
 87e0a07:	c3                   	ret
 87e0a08:	8b 7b 10             	mov    0x10(%ebx),%edi
 87e0a0b:	3b 7d 08             	cmp    0x8(%ebp),%edi
 87e0a0e:	75 e9                	jne    87e09f9 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x19>
 87e0a10:	8b 06                	mov    (%esi),%eax
 87e0a12:	89 34 24             	mov    %esi,(%esp)
 87e0a15:	ff 50 10             	call   *0x10(%eax)
 87e0a18:	85 c0                	test   %eax,%eax
 87e0a1a:	74 38                	je     87e0a54 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x74>
 87e0a1c:	89 3c 24             	mov    %edi,(%esp)
 87e0a1f:	e8 ac f4 ff ff       	call   87dfed0 <_ZNK9TiXmlNode11GetDocumentEv>
 87e0a24:	85 c0                	test   %eax,%eax
 87e0a26:	74 d1                	je     87e09f9 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x19>
 87e0a28:	89 04 24             	mov    %eax,(%esp)
 87e0a2b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87e0a32:	00 
 87e0a33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87e0a3a:	00 
 87e0a3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e0a42:	00 
 87e0a43:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 87e0a4a:	00 
 87e0a4b:	e8 e0 62 00 00       	call   87e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>
 87e0a50:	31 c0                	xor    %eax,%eax
 87e0a52:	eb a7                	jmp    87e09fb <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x1b>
 87e0a54:	8b 06                	mov    (%esi),%eax
 87e0a56:	89 34 24             	mov    %esi,(%esp)
 87e0a59:	ff 50 40             	call   *0x40(%eax)
 87e0a5c:	85 c0                	test   %eax,%eax
 87e0a5e:	74 9b                	je     87e09fb <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x1b>
 87e0a60:	8b 53 28             	mov    0x28(%ebx),%edx
 87e0a63:	89 50 28             	mov    %edx,0x28(%eax)
 87e0a66:	8b 53 24             	mov    0x24(%ebx),%edx
 87e0a69:	89 50 24             	mov    %edx,0x24(%eax)
 87e0a6c:	8b 53 28             	mov    0x28(%ebx),%edx
 87e0a6f:	85 d2                	test   %edx,%edx
 87e0a71:	74 23                	je     87e0a96 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0xb6>
 87e0a73:	89 42 24             	mov    %eax,0x24(%edx)
 87e0a76:	8b 53 24             	mov    0x24(%ebx),%edx
 87e0a79:	85 d2                	test   %edx,%edx
 87e0a7b:	74 1e                	je     87e0a9b <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0xbb>
 87e0a7d:	89 42 28             	mov    %eax,0x28(%edx)
 87e0a80:	8b 13                	mov    (%ebx),%edx
 87e0a82:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e0a85:	89 1c 24             	mov    %ebx,(%esp)
 87e0a88:	ff 52 04             	call   *0x4(%edx)
 87e0a8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e0a8e:	89 78 10             	mov    %edi,0x10(%eax)
 87e0a91:	e9 65 ff ff ff       	jmp    87e09fb <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x1b>
 87e0a96:	89 47 1c             	mov    %eax,0x1c(%edi)
 87e0a99:	eb db                	jmp    87e0a76 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0x96>
 87e0a9b:	89 47 18             	mov    %eax,0x18(%edi)
 87e0a9e:	eb e0                	jmp    87e0a80 <_ZN9TiXmlNode12ReplaceChildEPS_RKS_+0xa0>

```

```c
// TiXmlNode::ReplaceChild @ 0x87e09e0

/* TiXmlNode::ReplaceChild(TiXmlNode*, TiXmlNode const&) */

int __thiscall TiXmlNode::ReplaceChild(TiXmlNode *this,TiXmlNode *param_1,TiXmlNode *param_2)

{
  TiXmlNode *this_00;
  int iVar1;
  TiXmlDocument *pTVar2;
  
  if ((param_1 != (TiXmlNode *)0x0) && (this_00 = *(TiXmlNode **)(param_1 + 0x10), this_00 == this))
  {
    iVar1 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)param_2 + 0x40))(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x28) == 0) {
        *(int *)(this_00 + 0x1c) = iVar1;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x28) + 0x24) = iVar1;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        *(int *)(this_00 + 0x18) = iVar1;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x24) + 0x28) = iVar1;
      }
      (**(code **)(*(int *)param_1 + 4))(param_1);
      *(TiXmlNode **)(iVar1 + 0x10) = this_00;
      return iVar1;
    }
    pTVar2 = (TiXmlDocument *)GetDocument(this_00);
    if (pTVar2 != (TiXmlDocument *)0x0) {
      TiXmlDocument::SetError(pTVar2,0xf,0,0,0);
      return 0;
    }
  }
  return 0;
}

```

---

## TiXmlNode

```asm
// === 087dfd90 TiXmlNode::TiXmlNode  [0x087dfd90-0x87dfdef] ===
 87dfd90:	55                   	push   %ebp
 87dfd91:	89 e5                	mov    %esp,%ebp
 87dfd93:	8b 45 08             	mov    0x8(%ebp),%eax
 87dfd96:	8b 55 0c             	mov    0xc(%ebp),%edx
 87dfd99:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 87dfda0:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 87dfda7:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87dfdae:	c7 00 88 12 de 08    	movl   $0x8de1288,(%eax)
 87dfdb4:	c7 40 20 fc cc 48 09 	movl   $0x948ccfc,0x20(%eax)
 87dfdbb:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 87dfdc2:	89 50 14             	mov    %edx,0x14(%eax)
 87dfdc5:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 87dfdcc:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87dfdd3:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87dfdda:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 87dfde1:	5d                   	pop    %ebp
 87dfde2:	c3                   	ret
 87dfde3:	90                   	nop
 87dfde4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87dfdea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlNode::TiXmlNode @ 0x87dfd90

/* TiXmlNode::TiXmlNode(TiXmlNode::NodeType) */

void __thiscall TiXmlNode::TiXmlNode(TiXmlNode *this,undefined4 param_2)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__TiXmlNode_08de1288;
  *(undefined1 **)(this + 0x20) = &DAT_0948ccfc;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

```

---

## ~TiXmlNode

```asm
// === 087e2b70 TiXmlNode::~TiXmlNode  [0x087e2b70-0x87e2c0f] ===
 87e2b70:	55                   	push   %ebp
 87e2b71:	89 e5                	mov    %esp,%ebp
 87e2b73:	56                   	push   %esi
 87e2b74:	53                   	push   %ebx
 87e2b75:	83 ec 20             	sub    $0x20,%esp
 87e2b78:	8b 75 08             	mov    0x8(%ebp),%esi
 87e2b7b:	8b 46 18             	mov    0x18(%esi),%eax
 87e2b7e:	c7 06 88 12 de 08    	movl   $0x8de1288,(%esi)
 87e2b84:	85 c0                	test   %eax,%eax
 87e2b86:	75 0a                	jne    87e2b92 <_ZN9TiXmlNodeD1Ev+0x22>
 87e2b88:	eb 17                	jmp    87e2ba1 <_ZN9TiXmlNodeD1Ev+0x31>
 87e2b8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e2b90:	89 d8                	mov    %ebx,%eax
 87e2b92:	8b 10                	mov    (%eax),%edx
 87e2b94:	8b 58 28             	mov    0x28(%eax),%ebx
 87e2b97:	89 04 24             	mov    %eax,(%esp)
 87e2b9a:	ff 52 04             	call   *0x4(%edx)
 87e2b9d:	85 db                	test   %ebx,%ebx
 87e2b9f:	75 ef                	jne    87e2b90 <_ZN9TiXmlNodeD1Ev+0x20>
 87e2ba1:	8b 46 20             	mov    0x20(%esi),%eax
 87e2ba4:	83 e8 0c             	sub    $0xc,%eax
 87e2ba7:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e2bac:	75 28                	jne    87e2bd6 <_ZN9TiXmlNodeD1Ev+0x66>
 87e2bae:	c7 06 f8 13 de 08    	movl   $0x8de13f8,(%esi)
 87e2bb4:	83 c4 20             	add    $0x20,%esp
 87e2bb7:	5b                   	pop    %ebx
 87e2bb8:	5e                   	pop    %esi
 87e2bb9:	5d                   	pop    %ebp
 87e2bba:	c3                   	ret
 87e2bbb:	89 c3                	mov    %eax,%ebx
 87e2bbd:	8d 46 20             	lea    0x20(%esi),%eax
 87e2bc0:	89 04 24             	mov    %eax,(%esp)
 87e2bc3:	e8 18 50 f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e2bc8:	c7 06 f8 13 de 08    	movl   $0x8de13f8,(%esi)
 87e2bce:	89 1c 24             	mov    %ebx,(%esp)
 87e2bd1:	e8 7a 0b 30 00       	call   8ae3750 <_Unwind_Resume>
 87e2bd6:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e2bdb:	85 d2                	test   %edx,%edx
 87e2bdd:	74 1d                	je     87e2bfc <_ZN9TiXmlNodeD1Ev+0x8c>
 87e2bdf:	83 ca ff             	or     $0xffffffff,%edx
 87e2be2:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e2be7:	85 d2                	test   %edx,%edx
 87e2be9:	7f c3                	jg     87e2bae <_ZN9TiXmlNodeD1Ev+0x3e>
 87e2beb:	8d 55 f7             	lea    -0x9(%ebp),%edx
 87e2bee:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e2bf2:	89 04 24             	mov    %eax,(%esp)
 87e2bf5:	e8 26 3d f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e2bfa:	eb b2                	jmp    87e2bae <_ZN9TiXmlNodeD1Ev+0x3e>
 87e2bfc:	8b 50 08             	mov    0x8(%eax),%edx
 87e2bff:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e2c02:	89 48 08             	mov    %ecx,0x8(%eax)
 87e2c05:	eb e0                	jmp    87e2be7 <_ZN9TiXmlNodeD1Ev+0x77>
 87e2c07:	90                   	nop
 87e2c08:	90                   	nop
 87e2c09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlNode::~TiXmlNode @ 0x87e2b70

/* WARNING: Removing unreachable block (ram,0x087e2bfc) */
/* TiXmlNode::~TiXmlNode() */

void __thiscall TiXmlNode::~TiXmlNode(TiXmlNode *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  allocator *paVar4;
  
  *(undefined ***)this = &PTR__TiXmlNode_08de1288;
  piVar1 = *(int **)(this + 0x18);
  while (piVar1 != (int *)0x0) {
    piVar3 = (int *)piVar1[10];
                    /* try { // try from 087e2b9a to 087e2b9c has its CatchHandler @ 087e2bbb */
    (**(code **)(*piVar1 + 4))(piVar1);
    piVar1 = piVar3;
  }
  paVar4 = (allocator *)(*(int *)(this + 0x20) + -0xc);
  if (paVar4 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(*(int *)(this + 0x20) + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy(paVar4);
    }
  }
  *(undefined ***)this = &PTR__TiXmlBase_08de13f8;
  return;
}

```

---

## ~TiXmlNode_087e2c10

```asm
// === 087e2c10 TiXmlNode::~TiXmlNode  [0x087e2c10-0x87e2c2f] ===
 87e2c10:	55                   	push   %ebp
 87e2c11:	89 e5                	mov    %esp,%ebp
 87e2c13:	53                   	push   %ebx
 87e2c14:	83 ec 14             	sub    $0x14,%esp
 87e2c17:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e2c1a:	89 1c 24             	mov    %ebx,(%esp)
 87e2c1d:	e8 4e ff ff ff       	call   87e2b70 <_ZN9TiXmlNodeD1Ev>
 87e2c22:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87e2c25:	83 c4 14             	add    $0x14,%esp
 87e2c28:	5b                   	pop    %ebx
 87e2c29:	5d                   	pop    %ebp
 87e2c2a:	e9 c1 18 f4 ff       	jmp    87244f0 <_ZdlPv>
 87e2c2f:	90                   	nop

```

```c
// TiXmlNode::~TiXmlNode @ 0x87e2c10

/* TiXmlNode::~TiXmlNode() */

void __thiscall TiXmlNode::~TiXmlNode(TiXmlNode *this)

{
  ~TiXmlNode(this);
  operator_delete(this);
  return;
}

```

