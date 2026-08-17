# yaSSL__Parameters

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Parameters

```asm
// === 0874a820 yaSSL::Parameters::Parameters  [0x0874a820-0x874a8df] ===
 874a820:	55                   	push   %ebp
 874a821:	89 e5                	mov    %esp,%ebp
 874a823:	56                   	push   %esi
 874a824:	53                   	push   %ebx
 874a825:	83 ec 20             	sub    $0x20,%esp
 874a828:	0f b6 45 18          	movzbl 0x18(%ebp),%eax
 874a82c:	8b 75 08             	mov    0x8(%ebp),%esi
 874a82f:	8b 55 10             	mov    0x10(%ebp),%edx
 874a832:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 874a835:	83 f0 01             	xor    $0x1,%eax
 874a838:	e8 bb 85 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a83d:	81 c3 5b 23 c2 00    	add    $0xc2235b,%ebx
 874a843:	c6 46 28 01          	movb   $0x1,0x28(%esi)
 874a847:	c7 86 af 00 00 00 4e 	movl   $0x454e4f4e,0xaf(%esi)
 874a84e:	4f 4e 45 
 874a851:	c6 86 b3 00 00 00 00 	movb   $0x0,0xb3(%esi)
 874a858:	88 86 df 06 00 00    	mov    %al,0x6df(%esi)
 874a85e:	80 3a 00             	cmpb   $0x0,(%edx)
 874a861:	89 0e                	mov    %ecx,(%esi)
 874a863:	75 3b                	jne    874a8a0 <_ZN5yaSSL10ParametersC1ENS_13ConnectionEndERKNS_7CiphersENS_15ProtocolVersionEb+0x80>
 874a865:	0f b6 c0             	movzbl %al,%eax
 874a868:	31 d2                	xor    %edx,%edx
 874a86a:	85 c9                	test   %ecx,%ecx
 874a86c:	0f 44 d0             	cmove  %eax,%edx
 874a86f:	0f b7 45 14          	movzwl 0x14(%ebp),%eax
 874a873:	89 34 24             	mov    %esi,(%esp)
 874a876:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 874a87d:	00 
 874a87e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874a885:	00 
 874a886:	89 54 24 08          	mov    %edx,0x8(%esp)
 874a88a:	66 89 44 24 04       	mov    %ax,0x4(%esp)
 874a88f:	e8 9c f9 ff ff       	call   874a230 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb>
 874a894:	83 c4 20             	add    $0x20,%esp
 874a897:	5b                   	pop    %ebx
 874a898:	5e                   	pop    %esi
 874a899:	5d                   	pop    %ebp
 874a89a:	c3                   	ret
 874a89b:	90                   	nop
 874a89c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874a8a0:	8b 82 84 00 00 00    	mov    0x84(%edx),%eax
 874a8a6:	8d 4a 01             	lea    0x1(%edx),%ecx
 874a8a9:	88 46 2e             	mov    %al,0x2e(%esi)
 874a8ac:	8b 92 84 00 00 00    	mov    0x84(%edx),%edx
 874a8b2:	8d 46 2f             	lea    0x2f(%esi),%eax
 874a8b5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874a8b9:	89 04 24             	mov    %eax,(%esp)
 874a8bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 874a8c0:	e8 db 2f 93 ff       	call   807d8a0 <memcpy@plt>
 874a8c5:	89 34 24             	mov    %esi,(%esp)
 874a8c8:	e8 d3 f8 ff ff       	call   874a1a0 <_ZN5yaSSL10Parameters14SetCipherNamesEv>
 874a8cd:	83 c4 20             	add    $0x20,%esp
 874a8d0:	5b                   	pop    %ebx
 874a8d1:	5e                   	pop    %esi
 874a8d2:	5d                   	pop    %ebp
 874a8d3:	c3                   	ret
 874a8d4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874a8da:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::Parameters::Parameters @ 0x874a820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Parameters::Parameters(yaSSL::ConnectionEnd, yaSSL::Ciphers const&,
   yaSSL::ProtocolVersion, bool) */

void __thiscall
yaSSL::Parameters::Parameters
          (Parameters *this,int param_2,char *param_3,undefined2 param_4,byte param_5)

{
  char cVar1;
  Parameters PVar2;
  
  this[0x28] = (Parameters)0x1;
  *(undefined4 *)(this + 0xaf) = 0x454e4f4e;
  this[0xb3] = (Parameters)0x0;
  this[0x6df] = (Parameters)(param_5 ^ 1);
  cVar1 = *param_3;
  *(int *)this = param_2;
  if (cVar1 == '\0') {
    PVar2 = (Parameters)0x0;
    if (param_2 == 0) {
      PVar2 = (Parameters)(param_5 ^ 1);
    }
    SetSuites(this,param_4,PVar2,0,0);
    return;
  }
  this[0x2e] = SUB41(*(undefined4 *)(param_3 + 0x84),0);
  memcpy(this + 0x2f,param_3 + 1,*(size_t *)(param_3 + 0x84));
  SetCipherNames(this);
  return;
}

```

---

## SetCipherNames

```asm
// === 0874a1a0 yaSSL::Parameters::SetCipherNames  [0x0874a1a0-0x874a22f] ===
 874a1a0:	55                   	push   %ebp
 874a1a1:	89 e5                	mov    %esp,%ebp
 874a1a3:	57                   	push   %edi
 874a1a4:	56                   	push   %esi
 874a1a5:	53                   	push   %ebx
 874a1a6:	83 ec 2c             	sub    $0x2c,%esp
 874a1a9:	8b 55 08             	mov    0x8(%ebp),%edx
 874a1ac:	e8 47 8c fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a1b1:	81 c3 e7 29 c2 00    	add    $0xc229e7,%ebx
 874a1b7:	0f b6 42 2e          	movzbl 0x2e(%edx),%eax
 874a1bb:	d0 e8                	shr    $1,%al
 874a1bd:	0f b6 c0             	movzbl %al,%eax
 874a1c0:	85 c0                	test   %eax,%eax
 874a1c2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 874a1c5:	74 4e                	je     874a215 <_ZN5yaSSL10Parameters14SetCipherNamesEv+0x75>
 874a1c7:	31 f6                	xor    %esi,%esi
 874a1c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874a1d0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874a1d3:	0f b6 44 71 30       	movzbl 0x30(%ecx,%esi,2),%eax
 874a1d8:	8b bc 83 68 d3 ff ff 	mov    -0x2c98(%ebx,%eax,4),%edi
 874a1df:	89 3c 24             	mov    %edi,(%esp)
 874a1e2:	e8 c9 41 93 ff       	call   807e3b0 <strlen@plt>
 874a1e7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874a1ea:	8d 14 76             	lea    (%esi,%esi,2),%edx
 874a1ed:	c1 e2 04             	shl    $0x4,%edx
 874a1f0:	83 c6 01             	add    $0x1,%esi
 874a1f3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874a1f7:	8d 94 11 df 00 00 00 	lea    0xdf(%ecx,%edx,1),%edx
 874a1fe:	89 14 24             	mov    %edx,(%esp)
 874a201:	83 c0 01             	add    $0x1,%eax
 874a204:	89 44 24 08          	mov    %eax,0x8(%esp)
 874a208:	e8 c3 36 93 ff       	call   807d8d0 <strncpy@plt>
 874a20d:	39 75 e4             	cmp    %esi,-0x1c(%ebp)
 874a210:	7f be                	jg     874a1d0 <_ZN5yaSSL10Parameters14SetCipherNamesEv+0x30>
 874a212:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 874a215:	8b 55 08             	mov    0x8(%ebp),%edx
 874a218:	8d 04 40             	lea    (%eax,%eax,2),%eax
 874a21b:	c1 e0 04             	shl    $0x4,%eax
 874a21e:	c6 84 02 df 00 00 00 	movb   $0x0,0xdf(%edx,%eax,1)
 874a225:	00 
 874a226:	83 c4 2c             	add    $0x2c,%esp
 874a229:	5b                   	pop    %ebx
 874a22a:	5e                   	pop    %esi
 874a22b:	5f                   	pop    %edi
 874a22c:	5d                   	pop    %ebp
 874a22d:	c3                   	ret
 874a22e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Parameters::SetCipherNames @ 0x874a1a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Parameters::SetCipherNames() */

void __thiscall yaSSL::Parameters::SetCipherNames(Parameters *this)

{
  char *__s;
  uint uVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)((byte)this[0x2e] >> 1);
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      __s = *(char **)(cipher_names + (uint)(byte)this[iVar4 * 2 + 0x30] * 4);
      sVar2 = strlen(__s);
      iVar3 = iVar4 * 0x30;
      iVar4 = iVar4 + 1;
      strncpy((char *)(this + iVar3 + 0xdf),__s,sVar2 + 1);
    } while (iVar4 < (int)uVar1);
  }
  this[uVar1 * 0x30 + 0xdf] = (Parameters)0x0;
  return;
}

```

---

## SetSuites

```asm
// === 0874a230 yaSSL::Parameters::SetSuites  [0x0874a230-0x874a44f] ===
 874a230:	55                   	push   %ebp
 874a231:	89 e5                	mov    %esp,%ebp
 874a233:	57                   	push   %edi
 874a234:	56                   	push   %esi
 874a235:	53                   	push   %ebx
 874a236:	83 ec 3c             	sub    $0x3c,%esp
 874a239:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 874a23d:	0f b7 4d 0c          	movzwl 0xc(%ebp),%ecx
 874a241:	e8 b2 8b fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a246:	81 c3 52 29 c2 00    	add    $0xc22952,%ebx
 874a24c:	8b 55 08             	mov    0x8(%ebp),%edx
 874a24f:	0f b6 75 10          	movzbl 0x10(%ebp),%esi
 874a253:	88 45 d7             	mov    %al,-0x29(%ebp)
 874a256:	0f b6 45 18          	movzbl 0x18(%ebp),%eax
 874a25a:	80 f9 02             	cmp    $0x2,%cl
 874a25d:	88 45 e7             	mov    %al,-0x19(%ebp)
 874a260:	76 0e                	jbe    874a270 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x40>
 874a262:	89 c8                	mov    %ecx,%eax
 874a264:	66 c1 e8 08          	shr    $0x8,%ax
 874a268:	84 c0                	test   %al,%al
 874a26a:	0f 85 98 00 00 00    	jne    874a308 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xd8>
 874a270:	31 c0                	xor    %eax,%eax
 874a272:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a276:	75 2b                	jne    874a2a3 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x73>
 874a278:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a27d:	c6 44 02 30 05       	movb   $0x5,0x30(%edx,%eax,1)
 874a282:	c6 44 02 31 00       	movb   $0x0,0x31(%edx,%eax,1)
 874a287:	c6 44 02 32 04       	movb   $0x4,0x32(%edx,%eax,1)
 874a28c:	c6 44 02 33 00       	movb   $0x0,0x33(%edx,%eax,1)
 874a291:	c6 44 02 34 0a       	movb   $0xa,0x34(%edx,%eax,1)
 874a296:	c6 44 02 35 00       	movb   $0x0,0x35(%edx,%eax,1)
 874a29b:	c6 44 02 36 09       	movb   $0x9,0x36(%edx,%eax,1)
 874a2a0:	83 c0 08             	add    $0x8,%eax
 874a2a3:	89 f1                	mov    %esi,%ecx
 874a2a5:	84 c9                	test   %cl,%cl
 874a2a7:	75 4c                	jne    874a2f5 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xc5>
 874a2a9:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a2ad:	75 0d                	jne    874a2bc <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x8c>
 874a2af:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a2b4:	c6 44 02 30 16       	movb   $0x16,0x30(%edx,%eax,1)
 874a2b9:	83 c0 02             	add    $0x2,%eax
 874a2bc:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 874a2c0:	75 0d                	jne    874a2cf <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x9f>
 874a2c2:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a2c7:	c6 44 02 30 13       	movb   $0x13,0x30(%edx,%eax,1)
 874a2cc:	83 c0 02             	add    $0x2,%eax
 874a2cf:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a2d3:	75 0d                	jne    874a2e2 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xb2>
 874a2d5:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a2da:	c6 44 02 30 15       	movb   $0x15,0x30(%edx,%eax,1)
 874a2df:	83 c0 02             	add    $0x2,%eax
 874a2e2:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 874a2e6:	75 0d                	jne    874a2f5 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xc5>
 874a2e8:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a2ed:	c6 44 02 30 12       	movb   $0x12,0x30(%edx,%eax,1)
 874a2f2:	83 c0 02             	add    $0x2,%eax
 874a2f5:	88 42 2e             	mov    %al,0x2e(%edx)
 874a2f8:	89 14 24             	mov    %edx,(%esp)
 874a2fb:	e8 a0 fe ff ff       	call   874a1a0 <_ZN5yaSSL10Parameters14SetCipherNamesEv>
 874a300:	83 c4 3c             	add    $0x3c,%esp
 874a303:	5b                   	pop    %ebx
 874a304:	5e                   	pop    %esi
 874a305:	5f                   	pop    %edi
 874a306:	5d                   	pop    %ebp
 874a307:	c3                   	ret
 874a308:	89 f1                	mov    %esi,%ecx
 874a30a:	31 c0                	xor    %eax,%eax
 874a30c:	84 c9                	test   %cl,%cl
 874a30e:	0f 84 cc 00 00 00    	je     874a3e0 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x1b0>
 874a314:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a318:	75 0d                	jne    874a327 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xf7>
 874a31a:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a31f:	c6 44 02 30 35       	movb   $0x35,0x30(%edx,%eax,1)
 874a324:	83 c0 02             	add    $0x2,%eax
 874a327:	89 f1                	mov    %esi,%ecx
 874a329:	84 c9                	test   %cl,%cl
 874a32b:	75 1d                	jne    874a34a <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x11a>
 874a32d:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a331:	75 0d                	jne    874a340 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x110>
 874a333:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a338:	c6 44 02 30 33       	movb   $0x33,0x30(%edx,%eax,1)
 874a33d:	83 c0 02             	add    $0x2,%eax
 874a340:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 874a344:	0f 84 ee 00 00 00    	je     874a438 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x208>
 874a34a:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a34e:	75 2b                	jne    874a37b <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x14b>
 874a350:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a355:	c6 44 02 30 2f       	movb   $0x2f,0x30(%edx,%eax,1)
 874a35a:	c6 44 02 31 00       	movb   $0x0,0x31(%edx,%eax,1)
 874a35f:	c6 44 02 32 7e       	movb   $0x7e,0x32(%edx,%eax,1)
 874a364:	c6 44 02 33 00       	movb   $0x0,0x33(%edx,%eax,1)
 874a369:	c6 44 02 34 7d       	movb   $0x7d,0x34(%edx,%eax,1)
 874a36e:	c6 44 02 35 00       	movb   $0x0,0x35(%edx,%eax,1)
 874a373:	c6 44 02 36 7c       	movb   $0x7c,0x36(%edx,%eax,1)
 874a378:	83 c0 08             	add    $0x8,%eax
 874a37b:	89 f1                	mov    %esi,%ecx
 874a37d:	84 c9                	test   %cl,%cl
 874a37f:	0f 85 ed fe ff ff    	jne    874a272 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x42>
 874a385:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a389:	75 21                	jne    874a3ac <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x17c>
 874a38b:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a390:	c6 44 02 30 79       	movb   $0x79,0x30(%edx,%eax,1)
 874a395:	c6 44 02 31 00       	movb   $0x0,0x31(%edx,%eax,1)
 874a39a:	c6 44 02 32 78       	movb   $0x78,0x32(%edx,%eax,1)
 874a39f:	c6 44 02 33 00       	movb   $0x0,0x33(%edx,%eax,1)
 874a3a4:	c6 44 02 34 77       	movb   $0x77,0x34(%edx,%eax,1)
 874a3a9:	83 c0 06             	add    $0x6,%eax
 874a3ac:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 874a3b0:	0f 85 bc fe ff ff    	jne    874a272 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x42>
 874a3b6:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a3bb:	c6 44 02 30 74       	movb   $0x74,0x30(%edx,%eax,1)
 874a3c0:	c6 44 02 31 00       	movb   $0x0,0x31(%edx,%eax,1)
 874a3c5:	c6 44 02 32 73       	movb   $0x73,0x32(%edx,%eax,1)
 874a3ca:	c6 44 02 33 00       	movb   $0x0,0x33(%edx,%eax,1)
 874a3cf:	c6 44 02 34 72       	movb   $0x72,0x34(%edx,%eax,1)
 874a3d4:	83 c0 06             	add    $0x6,%eax
 874a3d7:	e9 96 fe ff ff       	jmp    874a272 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x42>
 874a3dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874a3e0:	80 7d d7 00          	cmpb   $0x0,-0x29(%ebp)
 874a3e4:	74 1a                	je     874a400 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x1d0>
 874a3e6:	31 ff                	xor    %edi,%edi
 874a3e8:	b0 02                	mov    $0x2,%al
 874a3ea:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 874a3ee:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 874a3f5:	74 28                	je     874a41f <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x1ef>
 874a3f7:	89 f8                	mov    %edi,%eax
 874a3f9:	e9 16 ff ff ff       	jmp    874a314 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xe4>
 874a3fe:	66 90                	xchg   %ax,%ax
 874a400:	c6 42 2f 00          	movb   $0x0,0x2f(%edx)
 874a404:	b8 04 00 00 00       	mov    $0x4,%eax
 874a409:	bf 02 00 00 00       	mov    $0x2,%edi
 874a40e:	c6 42 30 39          	movb   $0x39,0x30(%edx)
 874a412:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 874a416:	c7 45 e0 03 00 00 00 	movl   $0x3,-0x20(%ebp)
 874a41d:	75 d8                	jne    874a3f7 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x1c7>
 874a41f:	c6 44 3a 2f 00       	movb   $0x0,0x2f(%edx,%edi,1)
 874a424:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 874a427:	c6 44 0a 2f 38       	movb   $0x38,0x2f(%edx,%ecx,1)
 874a42c:	e9 e3 fe ff ff       	jmp    874a314 <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0xe4>
 874a431:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874a438:	c6 44 02 2f 00       	movb   $0x0,0x2f(%edx,%eax,1)
 874a43d:	c6 44 02 30 32       	movb   $0x32,0x30(%edx,%eax,1)
 874a442:	83 c0 02             	add    $0x2,%eax
 874a445:	e9 00 ff ff ff       	jmp    874a34a <_ZN5yaSSL10Parameters9SetSuitesENS_15ProtocolVersionEbbb+0x11a>
 874a44a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Parameters::SetSuites @ 0x874a230

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Parameters::SetSuites(yaSSL::ProtocolVersion, bool, bool, bool) */

void __thiscall
yaSSL::Parameters::SetSuites
          (Parameters *this,undefined2 param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int local_24;
  
  if (((byte)param_2 < 3) || ((char)((ushort)param_2 >> 8) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        this[0x2f] = (Parameters)0x0;
        iVar2 = 4;
        iVar1 = 2;
        this[0x30] = (Parameters)0x39;
        local_24 = 3;
      }
      else {
        iVar1 = 0;
        iVar2 = 2;
        local_24 = 1;
      }
      if (param_5 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[local_24 + 0x2f] = (Parameters)0x38;
        iVar1 = iVar2;
      }
    }
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x35;
      iVar1 = iVar1 + 2;
    }
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x33;
        iVar1 = iVar1 + 2;
      }
      if (param_5 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x32;
        iVar1 = iVar1 + 2;
      }
    }
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x2f;
      this[iVar1 + 0x31] = (Parameters)0x0;
      this[iVar1 + 0x32] = (Parameters)0x7e;
      this[iVar1 + 0x33] = (Parameters)0x0;
      this[iVar1 + 0x34] = (Parameters)0x7d;
      this[iVar1 + 0x35] = (Parameters)0x0;
      this[iVar1 + 0x36] = (Parameters)0x7c;
      iVar1 = iVar1 + 8;
    }
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x79;
        this[iVar1 + 0x31] = (Parameters)0x0;
        this[iVar1 + 0x32] = (Parameters)0x78;
        this[iVar1 + 0x33] = (Parameters)0x0;
        this[iVar1 + 0x34] = (Parameters)0x77;
        iVar1 = iVar1 + 6;
      }
      if (param_5 == '\0') {
        this[iVar1 + 0x2f] = (Parameters)0x0;
        this[iVar1 + 0x30] = (Parameters)0x74;
        this[iVar1 + 0x31] = (Parameters)0x0;
        this[iVar1 + 0x32] = (Parameters)0x73;
        this[iVar1 + 0x33] = (Parameters)0x0;
        this[iVar1 + 0x34] = (Parameters)0x72;
        iVar1 = iVar1 + 6;
      }
    }
  }
  if (param_4 == '\0') {
    this[iVar1 + 0x2f] = (Parameters)0x0;
    this[iVar1 + 0x30] = (Parameters)0x5;
    this[iVar1 + 0x31] = (Parameters)0x0;
    this[iVar1 + 0x32] = (Parameters)0x4;
    this[iVar1 + 0x33] = (Parameters)0x0;
    this[iVar1 + 0x34] = (Parameters)0xa;
    this[iVar1 + 0x35] = (Parameters)0x0;
    this[iVar1 + 0x36] = (Parameters)0x9;
    iVar1 = iVar1 + 8;
  }
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x16;
      iVar1 = iVar1 + 2;
    }
    if (param_5 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x13;
      iVar1 = iVar1 + 2;
    }
    if (param_4 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x15;
      iVar1 = iVar1 + 2;
    }
    if (param_5 == '\0') {
      this[iVar1 + 0x2f] = (Parameters)0x0;
      this[iVar1 + 0x30] = (Parameters)0x12;
      iVar1 = iVar1 + 2;
    }
  }
  this[0x2e] = SUB41(iVar1,0);
  SetCipherNames(this);
  return;
}

```

