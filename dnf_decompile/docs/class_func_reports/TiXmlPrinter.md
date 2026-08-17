# TiXmlPrinter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Visit

```asm
// === 087e0ed0 TiXmlPrinter::Visit  [0x087e0ed0-0x87e0f4f] ===
 87e0ed0:	55                   	push   %ebp
 87e0ed1:	89 e5                	mov    %esp,%ebp
 87e0ed3:	57                   	push   %edi
 87e0ed4:	56                   	push   %esi
 87e0ed5:	53                   	push   %ebx
 87e0ed6:	83 ec 2c             	sub    $0x2c,%esp
 87e0ed9:	8b 75 08             	mov    0x8(%ebp),%esi
 87e0edc:	8b 5e 04             	mov    0x4(%esi),%ebx
 87e0edf:	8d 7e 0c             	lea    0xc(%esi),%edi
 87e0ee2:	85 db                	test   %ebx,%ebx
 87e0ee4:	7e 21                	jle    87e0f07 <_ZN12TiXmlPrinter5VisitERK16TiXmlDeclaration+0x37>
 87e0ee6:	8d 46 10             	lea    0x10(%esi),%eax
 87e0ee9:	31 db                	xor    %ebx,%ebx
 87e0eeb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e0eee:	66 90                	xchg   %ax,%ax
 87e0ef0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e0ef3:	83 c3 01             	add    $0x1,%ebx
 87e0ef6:	89 3c 24             	mov    %edi,(%esp)
 87e0ef9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e0efd:	e8 3e 72 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e0f02:	3b 5e 04             	cmp    0x4(%esi),%ebx
 87e0f05:	7c e9                	jl     87e0ef0 <_ZN12TiXmlPrinter5VisitERK16TiXmlDeclaration+0x20>
 87e0f07:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e0f0a:	83 c6 14             	add    $0x14,%esi
 87e0f0d:	8b 02                	mov    (%edx),%eax
 87e0f0f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e0f13:	89 14 24             	mov    %edx,(%esp)
 87e0f16:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e0f1d:	00 
 87e0f1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87e0f25:	00 
 87e0f26:	ff 50 4c             	call   *0x4c(%eax)
 87e0f29:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e0f2d:	89 3c 24             	mov    %edi,(%esp)
 87e0f30:	e8 0b 72 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e0f35:	83 c4 2c             	add    $0x2c,%esp
 87e0f38:	b8 01 00 00 00       	mov    $0x1,%eax
 87e0f3d:	5b                   	pop    %ebx
 87e0f3e:	5e                   	pop    %esi
 87e0f3f:	5f                   	pop    %edi
 87e0f40:	5d                   	pop    %ebp
 87e0f41:	c3                   	ret
 87e0f42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e0f49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlPrinter::Visit @ 0x87e0ed0

/* TiXmlPrinter::Visit(TiXmlDeclaration const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlDeclaration *param_1)

{
  string *this_00;
  int iVar1;
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar1 < *(int *)(this + 4));
  }
  (**(code **)(*(int *)param_1 + 0x4c))(param_1,0,0,this_00);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}

```

---

## VisitEnter

```asm
// === 087e01d0 TiXmlPrinter::VisitEnter  [0x087e01d0-0x87e01df] ===
 87e01d0:	55                   	push   %ebp
 87e01d1:	b8 01 00 00 00       	mov    $0x1,%eax
 87e01d6:	89 e5                	mov    %esp,%ebp
 87e01d8:	5d                   	pop    %ebp
 87e01d9:	c3                   	ret
 87e01da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlPrinter::VisitEnter @ 0x87e01d0

/* TiXmlPrinter::VisitEnter(TiXmlDocument const&) */

undefined4 TiXmlPrinter::VisitEnter(TiXmlDocument *param_1)

{
  return 1;
}

```

---

## VisitEnter_087e4a60

```asm
// === 087e4a60 TiXmlPrinter::VisitEnter  [0x087e4a60-0x87e4d5f] ===
 87e4a60:	55                   	push   %ebp
 87e4a61:	89 e5                	mov    %esp,%ebp
 87e4a63:	57                   	push   %edi
 87e4a64:	56                   	push   %esi
 87e4a65:	53                   	push   %ebx
 87e4a66:	83 ec 3c             	sub    $0x3c,%esp
 87e4a69:	8b 45 08             	mov    0x8(%ebp),%eax
 87e4a6c:	8b 48 04             	mov    0x4(%eax),%ecx
 87e4a6f:	8d 70 0c             	lea    0xc(%eax),%esi
 87e4a72:	85 c9                	test   %ecx,%ecx
 87e4a74:	7e 2c                	jle    87e4aa2 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x42>
 87e4a76:	89 c7                	mov    %eax,%edi
 87e4a78:	31 db                	xor    %ebx,%ebx
 87e4a7a:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 87e4a7d:	83 c7 10             	add    $0x10,%edi
 87e4a80:	89 c6                	mov    %eax,%esi
 87e4a82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e4a88:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e4a8b:	83 c3 01             	add    $0x1,%ebx
 87e4a8e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e4a92:	89 14 24             	mov    %edx,(%esp)
 87e4a95:	e8 a6 36 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4a9a:	3b 5e 04             	cmp    0x4(%esi),%ebx
 87e4a9d:	7c e9                	jl     87e4a88 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x28>
 87e4a9f:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 87e4aa2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e4aa9:	00 
 87e4aaa:	c7 44 24 04 b8 c9 d0 	movl   $0x8d0c9b8,0x4(%esp)
 87e4ab1:	08 
 87e4ab2:	89 34 24             	mov    %esi,(%esp)
 87e4ab5:	e8 56 34 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4aba:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4abd:	8b 58 20             	mov    0x20(%eax),%ebx
 87e4ac0:	89 1c 24             	mov    %ebx,(%esp)
 87e4ac3:	e8 e8 98 89 ff       	call   807e3b0 <strlen@plt>
 87e4ac8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e4acc:	89 34 24             	mov    %esi,(%esp)
 87e4acf:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4ad3:	e8 38 34 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4ad8:	8b 55 10             	mov    0x10(%ebp),%edx
 87e4adb:	85 d2                	test   %edx,%edx
 87e4add:	0f 84 01 01 00 00    	je     87e4be4 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x184>
 87e4ae3:	8b 5d 10             	mov    0x10(%ebp),%ebx
 87e4ae6:	66 90                	xchg   %ax,%ax
 87e4ae8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e4aef:	00 
 87e4af0:	c7 44 24 04 de cd d3 	movl   $0x8d3cdde,0x4(%esp)
 87e4af7:	08 
 87e4af8:	89 34 24             	mov    %esi,(%esp)
 87e4afb:	e8 10 34 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4b00:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87e4b03:	8d 43 14             	lea    0x14(%ebx),%eax
 87e4b06:	c7 45 dc fc cc 48 09 	movl   $0x948ccfc,-0x24(%ebp)
 87e4b0d:	c7 45 e0 fc cc 48 09 	movl   $0x948ccfc,-0x20(%ebp)
 87e4b14:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4b18:	89 04 24             	mov    %eax,(%esp)
 87e4b1b:	e8 40 c1 ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4b20:	8d 7b 18             	lea    0x18(%ebx),%edi
 87e4b23:	8d 45 dc             	lea    -0x24(%ebp),%eax
 87e4b26:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4b2a:	89 3c 24             	mov    %edi,(%esp)
 87e4b2d:	e8 2e c1 ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4b32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e4b39:	00 
 87e4b3a:	c7 44 24 04 22 00 00 	movl   $0x22,0x4(%esp)
 87e4b41:	00 
 87e4b42:	89 3c 24             	mov    %edi,(%esp)
 87e4b45:	e8 b6 24 f2 ff       	call   8707000 <_ZNKSs4findEcj>
 87e4b4a:	83 f8 ff             	cmp    $0xffffffff,%eax
 87e4b4d:	0f 84 fd 00 00 00    	je     87e4c50 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x1f0>
 87e4b53:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87e4b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4b5a:	89 34 24             	mov    %esi,(%esp)
 87e4b5d:	e8 de 35 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4b62:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e4b69:	00 
 87e4b6a:	c7 44 24 04 b1 cf d0 	movl   $0x8d0cfb1,0x4(%esp)
 87e4b71:	08 
 87e4b72:	89 34 24             	mov    %esi,(%esp)
 87e4b75:	e8 96 33 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4b7a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 87e4b7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4b81:	89 34 24             	mov    %esi,(%esp)
 87e4b84:	e8 b7 35 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4b89:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e4b90:	00 
 87e4b91:	c7 44 24 04 c6 cf d0 	movl   $0x8d0cfc6,0x4(%esp)
 87e4b98:	08 
 87e4b99:	89 34 24             	mov    %esi,(%esp)
 87e4b9c:	e8 6f 33 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4ba1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87e4ba4:	83 e8 0c             	sub    $0xc,%eax
 87e4ba7:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e4bac:	0f 85 13 01 00 00    	jne    87e4cc5 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x265>
 87e4bb2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e4bb5:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 87e4bba:	83 e8 0c             	sub    $0xc,%eax
 87e4bbd:	39 c2                	cmp    %eax,%edx
 87e4bbf:	0f 85 2d 01 00 00    	jne    87e4cf2 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x292>
 87e4bc5:	8b 5b 20             	mov    0x20(%ebx),%ebx
 87e4bc8:	8b 43 18             	mov    0x18(%ebx),%eax
 87e4bcb:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e4bce:	85 c0                	test   %eax,%eax
 87e4bd0:	0f 85 12 ff ff ff    	jne    87e4ae8 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x88>
 87e4bd6:	8b 43 14             	mov    0x14(%ebx),%eax
 87e4bd9:	8b 78 f4             	mov    -0xc(%eax),%edi
 87e4bdc:	85 ff                	test   %edi,%edi
 87e4bde:	0f 85 04 ff ff ff    	jne    87e4ae8 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x88>
 87e4be4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4be7:	8b 48 18             	mov    0x18(%eax),%ecx
 87e4bea:	85 c9                	test   %ecx,%ecx
 87e4bec:	0f 84 a1 00 00 00    	je     87e4c93 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x233>
 87e4bf2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e4bf9:	00 
 87e4bfa:	c7 44 24 04 89 0e de 	movl   $0x8de0e89,0x4(%esp)
 87e4c01:	08 
 87e4c02:	89 34 24             	mov    %esi,(%esp)
 87e4c05:	e8 06 33 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4c0a:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e4c0d:	8b 42 18             	mov    0x18(%edx),%eax
 87e4c10:	8b 10                	mov    (%eax),%edx
 87e4c12:	89 04 24             	mov    %eax,(%esp)
 87e4c15:	ff 52 20             	call   *0x20(%edx)
 87e4c18:	85 c0                	test   %eax,%eax
 87e4c1a:	74 0b                	je     87e4c27 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x1c7>
 87e4c1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e4c1f:	8b 42 1c             	mov    0x1c(%edx),%eax
 87e4c22:	3b 42 18             	cmp    0x18(%edx),%eax
 87e4c25:	74 7e                	je     87e4ca5 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x245>
 87e4c27:	8b 45 08             	mov    0x8(%ebp),%eax
 87e4c2a:	89 34 24             	mov    %esi,(%esp)
 87e4c2d:	83 c0 14             	add    $0x14,%eax
 87e4c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4c34:	e8 07 35 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4c39:	8b 55 08             	mov    0x8(%ebp),%edx
 87e4c3c:	83 42 04 01          	addl   $0x1,0x4(%edx)
 87e4c40:	b8 01 00 00 00       	mov    $0x1,%eax
 87e4c45:	83 c4 3c             	add    $0x3c,%esp
 87e4c48:	5b                   	pop    %ebx
 87e4c49:	5e                   	pop    %esi
 87e4c4a:	5f                   	pop    %edi
 87e4c4b:	5d                   	pop    %ebp
 87e4c4c:	c3                   	ret
 87e4c4d:	8d 76 00             	lea    0x0(%esi),%esi
 87e4c50:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87e4c53:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4c57:	89 34 24             	mov    %esi,(%esp)
 87e4c5a:	e8 e1 34 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4c5f:	c7 44 24 04 a7 0f de 	movl   $0x8de0fa7,0x4(%esp)
 87e4c66:	08 
 87e4c67:	89 34 24             	mov    %esi,(%esp)
 87e4c6a:	e8 91 33 f2 ff       	call   8708000 <_ZNSs6appendEPKc>
 87e4c6f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 87e4c72:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4c76:	89 34 24             	mov    %esi,(%esp)
 87e4c79:	e8 c2 34 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4c7e:	c7 44 24 04 a8 0f de 	movl   $0x8de0fa8,0x4(%esp)
 87e4c85:	08 
 87e4c86:	89 34 24             	mov    %esi,(%esp)
 87e4c89:	e8 72 33 f2 ff       	call   8708000 <_ZNSs6appendEPKc>
 87e4c8e:	e9 0e ff ff ff       	jmp    87e4ba1 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x141>
 87e4c93:	c7 44 24 04 8f 0e de 	movl   $0x8de0e8f,0x4(%esp)
 87e4c9a:	08 
 87e4c9b:	89 34 24             	mov    %esi,(%esp)
 87e4c9e:	e8 5d 33 f2 ff       	call   8708000 <_ZNSs6appendEPKc>
 87e4ca3:	eb 82                	jmp    87e4c27 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x1c7>
 87e4ca5:	8b 10                	mov    (%eax),%edx
 87e4ca7:	89 04 24             	mov    %eax,(%esp)
 87e4caa:	ff 52 20             	call   *0x20(%edx)
 87e4cad:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e4cb1:	0f 85 70 ff ff ff    	jne    87e4c27 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x1c7>
 87e4cb7:	8b 45 08             	mov    0x8(%ebp),%eax
 87e4cba:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 87e4cbe:	89 c2                	mov    %eax,%edx
 87e4cc0:	e9 77 ff ff ff       	jmp    87e4c3c <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x1dc>
 87e4cc5:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e4cca:	85 d2                	test   %edx,%edx
 87e4ccc:	74 71                	je     87e4d3f <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x2df>
 87e4cce:	83 ca ff             	or     $0xffffffff,%edx
 87e4cd1:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e4cd6:	85 d2                	test   %edx,%edx
 87e4cd8:	0f 8f d4 fe ff ff    	jg     87e4bb2 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x152>
 87e4cde:	8d 55 e7             	lea    -0x19(%ebp),%edx
 87e4ce1:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4ce5:	89 04 24             	mov    %eax,(%esp)
 87e4ce8:	e8 33 1c f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e4ced:	e9 c0 fe ff ff       	jmp    87e4bb2 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x152>
 87e4cf2:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e4cf7:	85 d2                	test   %edx,%edx
 87e4cf9:	74 4f                	je     87e4d4a <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x2ea>
 87e4cfb:	83 ca ff             	or     $0xffffffff,%edx
 87e4cfe:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e4d03:	85 d2                	test   %edx,%edx
 87e4d05:	0f 8f ba fe ff ff    	jg     87e4bc5 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x165>
 87e4d0b:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 87e4d0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4d12:	89 04 24             	mov    %eax,(%esp)
 87e4d15:	e8 06 1c f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e4d1a:	e9 a6 fe ff ff       	jmp    87e4bc5 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x165>
 87e4d1f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 87e4d22:	89 c3                	mov    %eax,%ebx
 87e4d24:	89 14 24             	mov    %edx,(%esp)
 87e4d27:	e8 b4 2e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e4d2c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e4d2f:	89 04 24             	mov    %eax,(%esp)
 87e4d32:	e8 a9 2e f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e4d37:	89 1c 24             	mov    %ebx,(%esp)
 87e4d3a:	e8 11 ea 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e4d3f:	8b 50 08             	mov    0x8(%eax),%edx
 87e4d42:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e4d45:	89 48 08             	mov    %ecx,0x8(%eax)
 87e4d48:	eb 8c                	jmp    87e4cd6 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x276>
 87e4d4a:	8b 50 08             	mov    0x8(%eax),%edx
 87e4d4d:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e4d50:	89 48 08             	mov    %ecx,0x8(%eax)
 87e4d53:	eb ae                	jmp    87e4d03 <_ZN12TiXmlPrinter10VisitEnterERK12TiXmlElementPK14TiXmlAttribute+0x2a3>
 87e4d55:	90                   	nop
 87e4d56:	8d 76 00             	lea    0x0(%esi),%esi
 87e4d59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlPrinter::VisitEnter @ 0x87e4a60

/* WARNING: Removing unreachable block (ram,0x087e4d3f) */
/* WARNING: Removing unreachable block (ram,0x087e4d4a) */
/* TiXmlPrinter::VisitEnter(TiXmlElement const&, TiXmlAttribute const*) */

undefined4 __thiscall
TiXmlPrinter::VisitEnter(TiXmlPrinter *this,TiXmlElement *param_1,TiXmlAttribute *param_2)

{
  string *this_00;
  char *__s;
  TiXmlAttribute *pTVar1;
  int *piVar2;
  size_t sVar3;
  int iVar4;
  undefined1 *local_28;
  undefined1 *local_24 [5];
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar4 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<",1);
  __s = *(char **)(param_1 + 0x20);
  sVar3 = strlen(__s);
  std::string::append(this_00,__s,sVar3);
  pTVar1 = param_2;
  while (pTVar1 != (TiXmlAttribute *)0x0) {
    do {
      std::string::append(this_00," ",1);
      local_28 = &DAT_0948ccfc;
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4b1b to 087e4ba0 has its CatchHandler @ 087e4d1f */
      TiXmlBase::EncodeString((string *)(param_2 + 0x14),(string *)local_24);
      TiXmlBase::EncodeString((string *)(param_2 + 0x18),(string *)&local_28);
      iVar4 = std::string::find((string *)(param_2 + 0x18),'\"',0);
      if (iVar4 == -1) {
                    /* try { // try from 087e4c5a to 087e4c8d has its CatchHandler @ 087e4d1f */
        std::string::append(this_00,(string *)local_24);
        std::string::append(this_00,"=\"");
        std::string::append(this_00,(string *)&local_28);
        std::string::append(this_00,"\"");
      }
      else {
        std::string::append(this_00,(string *)local_24);
        std::string::append(this_00,"=\'",2);
        std::string::append(this_00,(string *)&local_28);
        std::string::append(this_00,"\'",1);
      }
      if ((allocator *)(local_28 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar2 = (int *)(local_28 + -4);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_28 + -0xc));
        }
      }
      if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        LOCK();
        piVar2 = (int *)(local_24[0] + -4);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
        }
      }
      param_2 = *(TiXmlAttribute **)(param_2 + 0x20);
    } while (*(int *)(*(int *)(param_2 + 0x18) + -0xc) != 0);
    pTVar1 = *(TiXmlAttribute **)(*(int *)(param_2 + 0x14) + -0xc);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    std::string::append(this_00," />");
  }
  else {
    std::string::append(this_00,">",1);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(*(int **)(param_1 + 0x18));
    if (((iVar4 != 0) && (piVar2 = *(int **)(param_1 + 0x1c), piVar2 == *(int **)(param_1 + 0x18)))
       && (iVar4 = (**(code **)(*piVar2 + 0x20))(piVar2), *(char *)(iVar4 + 0x2c) == '\0')) {
      this[8] = (TiXmlPrinter)0x1;
      goto LAB_087e4c3c;
    }
  }
  std::string::append(this_00,(string *)(this + 0x14));
LAB_087e4c3c:
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return 1;
}

```

---

## VisitExit

```asm
// === 087e01e0 TiXmlPrinter::VisitExit  [0x087e01e0-0x87e01ef] ===
 87e01e0:	55                   	push   %ebp
 87e01e1:	b8 01 00 00 00       	mov    $0x1,%eax
 87e01e6:	89 e5                	mov    %esp,%ebp
 87e01e8:	5d                   	pop    %ebp
 87e01e9:	c3                   	ret
 87e01ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlPrinter::VisitExit @ 0x87e01e0

/* TiXmlPrinter::VisitExit(TiXmlDocument const&) */

undefined4 TiXmlPrinter::VisitExit(TiXmlDocument *param_1)

{
  return 1;
}

```

---

## VisitExit_087e4700

```asm
// === 087e4700 TiXmlPrinter::VisitExit  [0x087e4700-0x87e47cf] ===
 87e4700:	55                   	push   %ebp
 87e4701:	89 e5                	mov    %esp,%ebp
 87e4703:	57                   	push   %edi
 87e4704:	56                   	push   %esi
 87e4705:	53                   	push   %ebx
 87e4706:	83 ec 2c             	sub    $0x2c,%esp
 87e4709:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e470c:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e470f:	8b 43 04             	mov    0x4(%ebx),%eax
 87e4712:	8b 4a 18             	mov    0x18(%edx),%ecx
 87e4715:	83 e8 01             	sub    $0x1,%eax
 87e4718:	85 c9                	test   %ecx,%ecx
 87e471a:	89 43 04             	mov    %eax,0x4(%ebx)
 87e471d:	74 6a                	je     87e4789 <_ZN12TiXmlPrinter9VisitExitERK12TiXmlElement+0x89>
 87e471f:	80 7b 08 00          	cmpb   $0x0,0x8(%ebx)
 87e4723:	74 73                	je     87e4798 <_ZN12TiXmlPrinter9VisitExitERK12TiXmlElement+0x98>
 87e4725:	c6 43 08 00          	movb   $0x0,0x8(%ebx)
 87e4729:	8d 7b 0c             	lea    0xc(%ebx),%edi
 87e472c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 87e4733:	00 
 87e4734:	83 c3 14             	add    $0x14,%ebx
 87e4737:	c7 44 24 04 50 0f de 	movl   $0x8de0f50,0x4(%esp)
 87e473e:	08 
 87e473f:	89 3c 24             	mov    %edi,(%esp)
 87e4742:	e8 c9 37 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4747:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e474a:	8b 70 20             	mov    0x20(%eax),%esi
 87e474d:	89 34 24             	mov    %esi,(%esp)
 87e4750:	e8 5b 9c 89 ff       	call   807e3b0 <strlen@plt>
 87e4755:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4759:	89 3c 24             	mov    %edi,(%esp)
 87e475c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4760:	e8 ab 37 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4765:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e476c:	00 
 87e476d:	c7 44 24 04 89 0e de 	movl   $0x8de0e89,0x4(%esp)
 87e4774:	08 
 87e4775:	89 3c 24             	mov    %edi,(%esp)
 87e4778:	e8 93 37 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e477d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e4781:	89 3c 24             	mov    %edi,(%esp)
 87e4784:	e8 b7 39 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4789:	83 c4 2c             	add    $0x2c,%esp
 87e478c:	b8 01 00 00 00       	mov    $0x1,%eax
 87e4791:	5b                   	pop    %ebx
 87e4792:	5e                   	pop    %esi
 87e4793:	5f                   	pop    %edi
 87e4794:	5d                   	pop    %ebp
 87e4795:	c3                   	ret
 87e4796:	66 90                	xchg   %ax,%ax
 87e4798:	85 c0                	test   %eax,%eax
 87e479a:	8d 7b 0c             	lea    0xc(%ebx),%edi
 87e479d:	7e 8d                	jle    87e472c <_ZN12TiXmlPrinter9VisitExitERK12TiXmlElement+0x2c>
 87e479f:	8d 43 10             	lea    0x10(%ebx),%eax
 87e47a2:	31 f6                	xor    %esi,%esi
 87e47a4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e47a7:	8d 7b 0c             	lea    0xc(%ebx),%edi
 87e47aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e47b0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e47b3:	83 c6 01             	add    $0x1,%esi
 87e47b6:	89 3c 24             	mov    %edi,(%esp)
 87e47b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e47bd:	e8 7e 39 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e47c2:	3b 73 04             	cmp    0x4(%ebx),%esi
 87e47c5:	7c e9                	jl     87e47b0 <_ZN12TiXmlPrinter9VisitExitERK12TiXmlElement+0xb0>
 87e47c7:	e9 60 ff ff ff       	jmp    87e472c <_ZN12TiXmlPrinter9VisitExitERK12TiXmlElement+0x2c>
 87e47cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlPrinter::VisitExit @ 0x87e4700

/* TiXmlPrinter::VisitExit(TiXmlElement const&) */

undefined4 __thiscall TiXmlPrinter::VisitExit(TiXmlPrinter *this,TiXmlElement *param_1)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  string *this_00;
  
  iVar3 = *(int *)(this + 4);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(this + 4) = iVar3 + -1;
  if (iVar1 != 0) {
    if (this[8] == (TiXmlPrinter)0x0) {
      if (0 < iVar3 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          std::string::append((string *)(this + 0xc),(string *)(this + 0x10));
        } while (iVar3 < *(int *)(this + 4));
      }
    }
    else {
      this[8] = (TiXmlPrinter)0x0;
    }
    this_00 = (string *)(this + 0xc);
    std::string::append(this_00,"</",2);
    __s = *(char **)(param_1 + 0x20);
    sVar2 = strlen(__s);
    std::string::append(this_00,__s,sVar2);
    std::string::append(this_00,">",1);
    std::string::append(this_00,(string *)(this + 0x14));
  }
  return 1;
}

```

---

## Visit_087e45a0

```asm
// === 087e45a0 TiXmlPrinter::Visit  [0x087e45a0-0x87e464f] ===
 87e45a0:	55                   	push   %ebp
 87e45a1:	89 e5                	mov    %esp,%ebp
 87e45a3:	57                   	push   %edi
 87e45a4:	56                   	push   %esi
 87e45a5:	53                   	push   %ebx
 87e45a6:	83 ec 2c             	sub    $0x2c,%esp
 87e45a9:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e45ac:	8b 47 04             	mov    0x4(%edi),%eax
 87e45af:	8d 77 0c             	lea    0xc(%edi),%esi
 87e45b2:	85 c0                	test   %eax,%eax
 87e45b4:	7e 21                	jle    87e45d7 <_ZN12TiXmlPrinter5VisitERK12TiXmlUnknown+0x37>
 87e45b6:	8d 47 10             	lea    0x10(%edi),%eax
 87e45b9:	31 db                	xor    %ebx,%ebx
 87e45bb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e45be:	66 90                	xchg   %ax,%ax
 87e45c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e45c3:	83 c3 01             	add    $0x1,%ebx
 87e45c6:	89 34 24             	mov    %esi,(%esp)
 87e45c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e45cd:	e8 6e 3b f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e45d2:	3b 5f 04             	cmp    0x4(%edi),%ebx
 87e45d5:	7c e9                	jl     87e45c0 <_ZN12TiXmlPrinter5VisitERK12TiXmlUnknown+0x20>
 87e45d7:	89 34 24             	mov    %esi,(%esp)
 87e45da:	83 c7 14             	add    $0x14,%edi
 87e45dd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e45e4:	00 
 87e45e5:	c7 44 24 04 b8 c9 d0 	movl   $0x8d0c9b8,0x4(%esp)
 87e45ec:	08 
 87e45ed:	e8 1e 39 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e45f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e45f5:	8b 58 20             	mov    0x20(%eax),%ebx
 87e45f8:	89 1c 24             	mov    %ebx,(%esp)
 87e45fb:	e8 b0 9d 89 ff       	call   807e3b0 <strlen@plt>
 87e4600:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e4604:	89 34 24             	mov    %esi,(%esp)
 87e4607:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e460b:	e8 00 39 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4610:	89 34 24             	mov    %esi,(%esp)
 87e4613:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e461a:	00 
 87e461b:	c7 44 24 04 89 0e de 	movl   $0x8de0e89,0x4(%esp)
 87e4622:	08 
 87e4623:	e8 e8 38 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4628:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e462c:	89 34 24             	mov    %esi,(%esp)
 87e462f:	e8 0c 3b f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4634:	83 c4 2c             	add    $0x2c,%esp
 87e4637:	b8 01 00 00 00       	mov    $0x1,%eax
 87e463c:	5b                   	pop    %ebx
 87e463d:	5e                   	pop    %esi
 87e463e:	5f                   	pop    %edi
 87e463f:	5d                   	pop    %ebp
 87e4640:	c3                   	ret
 87e4641:	90                   	nop
 87e4642:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e4649:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlPrinter::Visit @ 0x87e45a0

/* TiXmlPrinter::Visit(TiXmlUnknown const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlUnknown *param_1)

{
  string *this_00;
  char *__s;
  size_t sVar1;
  int iVar2;
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar2 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<",1);
  __s = *(char **)(param_1 + 0x20);
  sVar1 = strlen(__s);
  std::string::append(this_00,__s,sVar1);
  std::string::append(this_00,">",1);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}

```

---

## Visit_087e4650

```asm
// === 087e4650 TiXmlPrinter::Visit  [0x087e4650-0x87e46ff] ===
 87e4650:	55                   	push   %ebp
 87e4651:	89 e5                	mov    %esp,%ebp
 87e4653:	57                   	push   %edi
 87e4654:	56                   	push   %esi
 87e4655:	53                   	push   %ebx
 87e4656:	83 ec 2c             	sub    $0x2c,%esp
 87e4659:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e465c:	8b 57 04             	mov    0x4(%edi),%edx
 87e465f:	8d 77 0c             	lea    0xc(%edi),%esi
 87e4662:	85 d2                	test   %edx,%edx
 87e4664:	7e 21                	jle    87e4687 <_ZN12TiXmlPrinter5VisitERK12TiXmlComment+0x37>
 87e4666:	8d 47 10             	lea    0x10(%edi),%eax
 87e4669:	31 db                	xor    %ebx,%ebx
 87e466b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e466e:	66 90                	xchg   %ax,%ax
 87e4670:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e4673:	83 c3 01             	add    $0x1,%ebx
 87e4676:	89 34 24             	mov    %esi,(%esp)
 87e4679:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e467d:	e8 be 3a f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4682:	3b 5f 04             	cmp    0x4(%edi),%ebx
 87e4685:	7c e9                	jl     87e4670 <_ZN12TiXmlPrinter5VisitERK12TiXmlComment+0x20>
 87e4687:	89 34 24             	mov    %esi,(%esp)
 87e468a:	83 c7 14             	add    $0x14,%edi
 87e468d:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 87e4694:	00 
 87e4695:	c7 44 24 04 d6 cf d0 	movl   $0x8d0cfd6,0x4(%esp)
 87e469c:	08 
 87e469d:	e8 6e 38 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e46a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e46a5:	8b 58 20             	mov    0x20(%eax),%ebx
 87e46a8:	89 1c 24             	mov    %ebx,(%esp)
 87e46ab:	e8 00 9d 89 ff       	call   807e3b0 <strlen@plt>
 87e46b0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e46b4:	89 34 24             	mov    %esi,(%esp)
 87e46b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e46bb:	e8 50 38 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e46c0:	89 34 24             	mov    %esi,(%esp)
 87e46c3:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 87e46ca:	00 
 87e46cb:	c7 44 24 04 87 0e de 	movl   $0x8de0e87,0x4(%esp)
 87e46d2:	08 
 87e46d3:	e8 38 38 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e46d8:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e46dc:	89 34 24             	mov    %esi,(%esp)
 87e46df:	e8 5c 3a f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e46e4:	83 c4 2c             	add    $0x2c,%esp
 87e46e7:	b8 01 00 00 00       	mov    $0x1,%eax
 87e46ec:	5b                   	pop    %ebx
 87e46ed:	5e                   	pop    %esi
 87e46ee:	5f                   	pop    %edi
 87e46ef:	5d                   	pop    %ebp
 87e46f0:	c3                   	ret
 87e46f1:	90                   	nop
 87e46f2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e46f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlPrinter::Visit @ 0x87e4650

/* TiXmlPrinter::Visit(TiXmlComment const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlComment *param_1)

{
  string *this_00;
  char *__s;
  size_t sVar1;
  int iVar2;
  
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar2 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<!--",4);
  __s = *(char **)(param_1 + 0x20);
  sVar1 = strlen(__s);
  std::string::append(this_00,__s,sVar1);
  std::string::append(this_00,"-->",3);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}

```

---

## Visit_087e4d60

```asm
// === 087e4d60 TiXmlPrinter::Visit  [0x087e4d60-0x87e4f6f] ===
 87e4d60:	55                   	push   %ebp
 87e4d61:	89 e5                	mov    %esp,%ebp
 87e4d63:	57                   	push   %edi
 87e4d64:	56                   	push   %esi
 87e4d65:	53                   	push   %ebx
 87e4d66:	83 ec 3c             	sub    $0x3c,%esp
 87e4d69:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4d6c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e4d6f:	80 78 2c 00          	cmpb   $0x0,0x2c(%eax)
 87e4d73:	0f 85 ff 00 00 00    	jne    87e4e78 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x118>
 87e4d79:	80 7b 08 00          	cmpb   $0x0,0x8(%ebx)
 87e4d7d:	74 49                	je     87e4dc8 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x68>
 87e4d7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4d82:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87e4d85:	c7 45 e0 fc cc 48 09 	movl   $0x948ccfc,-0x20(%ebp)
 87e4d8c:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4d90:	83 c0 20             	add    $0x20,%eax
 87e4d93:	89 04 24             	mov    %eax,(%esp)
 87e4d96:	e8 c5 be ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4d9b:	83 c3 0c             	add    $0xc,%ebx
 87e4d9e:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4da2:	89 1c 24             	mov    %ebx,(%esp)
 87e4da5:	e8 96 33 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4daa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e4dad:	83 e8 0c             	sub    $0xc,%eax
 87e4db0:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e4db5:	0f 85 56 01 00 00    	jne    87e4f11 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x1b1>
 87e4dbb:	83 c4 3c             	add    $0x3c,%esp
 87e4dbe:	b8 01 00 00 00       	mov    $0x1,%eax
 87e4dc3:	5b                   	pop    %ebx
 87e4dc4:	5e                   	pop    %esi
 87e4dc5:	5f                   	pop    %edi
 87e4dc6:	5d                   	pop    %ebp
 87e4dc7:	c3                   	ret
 87e4dc8:	8b 73 04             	mov    0x4(%ebx),%esi
 87e4dcb:	85 f6                	test   %esi,%esi
 87e4dcd:	7e 28                	jle    87e4df7 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x97>
 87e4dcf:	8d 43 10             	lea    0x10(%ebx),%eax
 87e4dd2:	31 f6                	xor    %esi,%esi
 87e4dd4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e4dd7:	8d 7b 0c             	lea    0xc(%ebx),%edi
 87e4dda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e4de0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e4de3:	83 c6 01             	add    $0x1,%esi
 87e4de6:	89 3c 24             	mov    %edi,(%esp)
 87e4de9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4ded:	e8 4e 33 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4df2:	3b 73 04             	cmp    0x4(%ebx),%esi
 87e4df5:	7c e9                	jl     87e4de0 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x80>
 87e4df7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4dfa:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87e4dfd:	c7 45 e0 fc cc 48 09 	movl   $0x948ccfc,-0x20(%ebp)
 87e4e04:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4e08:	83 c0 20             	add    $0x20,%eax
 87e4e0b:	89 04 24             	mov    %eax,(%esp)
 87e4e0e:	e8 4d be ff ff       	call   87e0c60 <_ZN9TiXmlBase12EncodeStringERKSsPSs>
 87e4e13:	8d 7b 0c             	lea    0xc(%ebx),%edi
 87e4e16:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4e1a:	89 3c 24             	mov    %edi,(%esp)
 87e4e1d:	e8 1e 33 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4e22:	83 c3 14             	add    $0x14,%ebx
 87e4e25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e4e29:	89 3c 24             	mov    %edi,(%esp)
 87e4e2c:	e8 0f 33 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4e31:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87e4e34:	83 e8 0c             	sub    $0xc,%eax
 87e4e37:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e4e3c:	0f 84 79 ff ff ff    	je     87e4dbb <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x5b>
 87e4e42:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e4e47:	85 d2                	test   %edx,%edx
 87e4e49:	0f 84 0e 01 00 00    	je     87e4f5d <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x1fd>
 87e4e4f:	83 ca ff             	or     $0xffffffff,%edx
 87e4e52:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e4e57:	85 d2                	test   %edx,%edx
 87e4e59:	0f 8f 5c ff ff ff    	jg     87e4dbb <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x5b>
 87e4e5f:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 87e4e62:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4e66:	89 04 24             	mov    %eax,(%esp)
 87e4e69:	e8 b2 1a f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e4e6e:	e9 48 ff ff ff       	jmp    87e4dbb <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x5b>
 87e4e73:	90                   	nop
 87e4e74:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e4e78:	8b 43 04             	mov    0x4(%ebx),%eax
 87e4e7b:	8d 7b 0c             	lea    0xc(%ebx),%edi
 87e4e7e:	85 c0                	test   %eax,%eax
 87e4e80:	7e 25                	jle    87e4ea7 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x147>
 87e4e82:	8d 43 10             	lea    0x10(%ebx),%eax
 87e4e85:	31 f6                	xor    %esi,%esi
 87e4e87:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e4e8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e4e90:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e4e93:	83 c6 01             	add    $0x1,%esi
 87e4e96:	89 3c 24             	mov    %edi,(%esp)
 87e4e99:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e4e9d:	e8 9e 32 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4ea2:	3b 73 04             	cmp    0x4(%ebx),%esi
 87e4ea5:	7c e9                	jl     87e4e90 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x130>
 87e4ea7:	89 3c 24             	mov    %edi,(%esp)
 87e4eaa:	83 c3 14             	add    $0x14,%ebx
 87e4ead:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 87e4eb4:	00 
 87e4eb5:	c7 44 24 04 db cf d0 	movl   $0x8d0cfdb,0x4(%esp)
 87e4ebc:	08 
 87e4ebd:	e8 4e 30 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4ec2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e4ec5:	8b 70 20             	mov    0x20(%eax),%esi
 87e4ec8:	89 34 24             	mov    %esi,(%esp)
 87e4ecb:	e8 e0 94 89 ff       	call   807e3b0 <strlen@plt>
 87e4ed0:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e4ed4:	89 3c 24             	mov    %edi,(%esp)
 87e4ed7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e4edb:	e8 30 30 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4ee0:	89 3c 24             	mov    %edi,(%esp)
 87e4ee3:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 87e4eea:	00 
 87e4eeb:	c7 44 24 04 ad 0f de 	movl   $0x8de0fad,0x4(%esp)
 87e4ef2:	08 
 87e4ef3:	e8 18 30 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e4ef8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e4efc:	89 3c 24             	mov    %edi,(%esp)
 87e4eff:	e8 3c 32 f2 ff       	call   8708140 <_ZNSs6appendERKSs>
 87e4f04:	83 c4 3c             	add    $0x3c,%esp
 87e4f07:	b8 01 00 00 00       	mov    $0x1,%eax
 87e4f0c:	5b                   	pop    %ebx
 87e4f0d:	5e                   	pop    %esi
 87e4f0e:	5f                   	pop    %edi
 87e4f0f:	5d                   	pop    %ebp
 87e4f10:	c3                   	ret
 87e4f11:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 87e4f16:	85 d2                	test   %edx,%edx
 87e4f18:	74 36                	je     87e4f50 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x1f0>
 87e4f1a:	83 ca ff             	or     $0xffffffff,%edx
 87e4f1d:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 87e4f22:	85 d2                	test   %edx,%edx
 87e4f24:	0f 8f 91 fe ff ff    	jg     87e4dbb <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x5b>
 87e4f2a:	8d 55 e7             	lea    -0x19(%ebp),%edx
 87e4f2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e4f31:	89 04 24             	mov    %eax,(%esp)
 87e4f34:	e8 e7 19 f2 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 87e4f39:	e9 7d fe ff ff       	jmp    87e4dbb <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x5b>
 87e4f3e:	89 c3                	mov    %eax,%ebx
 87e4f40:	89 34 24             	mov    %esi,(%esp)
 87e4f43:	e8 98 2c f2 ff       	call   8707be0 <_ZNSsD1Ev>
 87e4f48:	89 1c 24             	mov    %ebx,(%esp)
 87e4f4b:	e8 00 e8 2f 00       	call   8ae3750 <_Unwind_Resume>
 87e4f50:	8b 50 08             	mov    0x8(%eax),%edx
 87e4f53:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e4f56:	89 48 08             	mov    %ecx,0x8(%eax)
 87e4f59:	eb c7                	jmp    87e4f22 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x1c2>
 87e4f5b:	eb e1                	jmp    87e4f3e <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0x1de>
 87e4f5d:	8b 50 08             	mov    0x8(%eax),%edx
 87e4f60:	8d 4a ff             	lea    -0x1(%edx),%ecx
 87e4f63:	89 48 08             	mov    %ecx,0x8(%eax)
 87e4f66:	e9 ec fe ff ff       	jmp    87e4e57 <_ZN12TiXmlPrinter5VisitERK9TiXmlText+0xf7>
 87e4f6b:	90                   	nop
 87e4f6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlPrinter::Visit @ 0x87e4d60

/* WARNING: Removing unreachable block (ram,0x087e4f5d) */
/* WARNING: Removing unreachable block (ram,0x087e4f50) */
/* TiXmlPrinter::Visit(TiXmlText const&) */

undefined4 __thiscall TiXmlPrinter::Visit(TiXmlPrinter *this,TiXmlText *param_1)

{
  string *this_00;
  int *piVar1;
  char *__s;
  size_t sVar2;
  int iVar3;
  undefined1 *local_24 [5];
  
  if (param_1[0x2c] == (TiXmlText)0x0) {
    if (this[8] == (TiXmlPrinter)0x0) {
      if (0 < *(int *)(this + 4)) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          std::string::append((string *)(this + 0xc),(string *)(this + 0x10));
        } while (iVar3 < *(int *)(this + 4));
      }
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4e0e to 087e4e30 has its CatchHandler @ 087e4f3e */
      TiXmlBase::EncodeString((string *)(param_1 + 0x20),(string *)local_24);
      std::string::append((string *)(this + 0xc),(string *)local_24);
      std::string::append((string *)(this + 0xc),(string *)(this + 0x14));
      if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        LOCK();
        piVar1 = (int *)(local_24[0] + -4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
        }
      }
    }
    else {
      local_24[0] = &DAT_0948ccfc;
                    /* try { // try from 087e4d96 to 087e4da9 has its CatchHandler @ 087e4f5b */
      TiXmlBase::EncodeString((string *)(param_1 + 0x20),(string *)local_24);
      std::string::append((string *)(this + 0xc),(string *)local_24);
      if ((allocator *)(local_24[0] + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage
         ) {
        LOCK();
        piVar1 = (int *)(local_24[0] + -4);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 < 1) {
          std::string::_Rep::_M_destroy((allocator *)(local_24[0] + -0xc));
        }
      }
    }
    return 1;
  }
  this_00 = (string *)(this + 0xc);
  if (0 < *(int *)(this + 4)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      std::string::append(this_00,(string *)(this + 0x10));
    } while (iVar3 < *(int *)(this + 4));
  }
  std::string::append(this_00,"<![CDATA[",9);
  __s = *(char **)(param_1 + 0x20);
  sVar2 = strlen(__s);
  std::string::append(this_00,__s,sVar2);
  std::string::append(this_00,"]]>",3);
  std::string::append(this_00,(string *)(this + 0x14));
  return 1;
}

```

