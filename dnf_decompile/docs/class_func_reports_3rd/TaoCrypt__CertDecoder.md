# TaoCrypt__CertDecoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## AddDSA

```asm
// === 08754310 TaoCrypt::CertDecoder::AddDSA  [0x08754310-0x87543cf] ===
 8754310:	55                   	push   %ebp
 8754311:	89 e5                	mov    %esp,%ebp
 8754313:	83 ec 28             	sub    $0x28,%esp
 8754316:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8754319:	8b 75 08             	mov    0x8(%ebp),%esi
 875431c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875431f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8754322:	e8 d1 ea fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8754327:	81 c3 71 88 c1 00    	add    $0xc18871,%ebx
 875432d:	8b 46 04             	mov    0x4(%esi),%eax
 8754330:	8b 50 10             	mov    0x10(%eax),%edx
 8754333:	85 d2                	test   %edx,%edx
 8754335:	75 19                	jne    8754350 <_ZN8TaoCrypt11CertDecoder6AddDSAEv+0x40>
 8754337:	8b 50 0c             	mov    0xc(%eax),%edx
 875433a:	8b 78 04             	mov    0x4(%eax),%edi
 875433d:	8d 4a 01             	lea    0x1(%edx),%ecx
 8754340:	89 48 0c             	mov    %ecx,0xc(%eax)
 8754343:	80 3c 17 03          	cmpb   $0x3,(%edi,%edx,1)
 8754347:	74 17                	je     8754360 <_ZN8TaoCrypt11CertDecoder6AddDSAEv+0x50>
 8754349:	c7 40 10 00 04 00 00 	movl   $0x400,0x10(%eax)
 8754350:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8754353:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8754356:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8754359:	89 ec                	mov    %ebp,%esp
 875435b:	5d                   	pop    %ebp
 875435c:	c3                   	ret
 875435d:	8d 76 00             	lea    0x0(%esi),%esi
 8754360:	83 40 0c 01          	addl   $0x1,0xc(%eax)
 8754364:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8754368:	8b 50 0c             	mov    0xc(%eax),%edx
 875436b:	8d 4a 01             	lea    0x1(%edx),%ecx
 875436e:	89 48 0c             	mov    %ecx,0xc(%eax)
 8754371:	80 3c 17 00          	cmpb   $0x0,(%edi,%edx,1)
 8754375:	75 f1                	jne    8754368 <_ZN8TaoCrypt11CertDecoder6AddDSAEv+0x58>
 8754377:	8b 78 0c             	mov    0xc(%eax),%edi
 875437a:	8d 57 01             	lea    0x1(%edi),%edx
 875437d:	89 50 0c             	mov    %edx,0xc(%eax)
 8754380:	8b 50 04             	mov    0x4(%eax),%edx
 8754383:	80 3c 3a 02          	cmpb   $0x2,(%edx,%edi,1)
 8754387:	74 17                	je     87543a0 <_ZN8TaoCrypt11CertDecoder6AddDSAEv+0x90>
 8754389:	c7 40 10 f2 03 00 00 	movl   $0x3f2,0x10(%eax)
 8754390:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8754393:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8754396:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8754399:	89 ec                	mov    %ebp,%esp
 875439b:	5d                   	pop    %ebp
 875439c:	c3                   	ret
 875439d:	8d 76 00             	lea    0x0(%esi),%esi
 87543a0:	89 04 24             	mov    %eax,(%esp)
 87543a3:	e8 58 f3 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 87543a8:	8b 56 04             	mov    0x4(%esi),%edx
 87543ab:	83 c6 08             	add    $0x8,%esi
 87543ae:	29 f8                	sub    %edi,%eax
 87543b0:	03 42 0c             	add    0xc(%edx),%eax
 87543b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87543b7:	03 7a 04             	add    0x4(%edx),%edi
 87543ba:	89 34 24             	mov    %esi,(%esp)
 87543bd:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87543c1:	e8 9a fe ff ff       	call   8754260 <_ZN8TaoCrypt9PublicKey8AddToEndEPKhj>
 87543c6:	eb 88                	jmp    8754350 <_ZN8TaoCrypt11CertDecoder6AddDSAEv+0x40>
 87543c8:	90                   	nop
 87543c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::CertDecoder::AddDSA @ 0x8754310

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::AddDSA() */

void __thiscall TaoCrypt::CertDecoder::AddDSA(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  int iVar3;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '\x03') {
      *(int *)(pSVar1 + 0xc) = *(int *)(pSVar1 + 0xc) + 1;
      do {
        iVar2 = *(int *)(pSVar1 + 0xc);
        *(int *)(pSVar1 + 0xc) = iVar2 + 1;
      } while (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\0');
      iVar2 = *(int *)(pSVar1 + 0xc);
      *(int *)(pSVar1 + 0xc) = iVar2 + 1;
      if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\x02') {
        *(undefined4 *)(pSVar1 + 0x10) = 0x3f2;
        return;
      }
      iVar3 = GetLength(pSVar1);
      PublicKey::AddToEnd((PublicKey *)(this + 8),
                          (uchar *)(iVar2 + *(int *)(*(int *)(this + 4) + 4)),
                          (iVar3 - iVar2) + *(int *)(*(int *)(this + 4) + 0xc));
    }
    else {
      *(undefined4 *)(pSVar1 + 0x10) = 0x400;
    }
  }
  return;
}

```

---

## CertDecoder

```asm
// === 087565a0 TaoCrypt::CertDecoder::CertDecoder  [0x087565a0-0x875665f] ===
 87565a0:	55                   	push   %ebp
 87565a1:	89 e5                	mov    %esp,%ebp
 87565a3:	83 ec 38             	sub    $0x38,%esp
 87565a6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87565a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 87565ac:	e8 47 c8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87565b1:	81 c3 e7 65 c1 00    	add    $0xc165e7,%ebx
 87565b7:	0f b6 45 18          	movzbl 0x18(%ebp),%eax
 87565bb:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87565be:	8b 75 08             	mov    0x8(%ebp),%esi
 87565c1:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87565c4:	0f b6 7d 10          	movzbl 0x10(%ebp),%edi
 87565c8:	88 45 e4             	mov    %al,-0x1c(%ebp)
 87565cb:	89 56 04             	mov    %edx,0x4(%esi)
 87565ce:	8b 93 f8 fa ff ff    	mov    -0x508(%ebx),%edx
 87565d4:	83 c2 08             	add    $0x8,%edx
 87565d7:	89 16                	mov    %edx,(%esi)
 87565d9:	8d 56 08             	lea    0x8(%esi),%edx
 87565dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87565e3:	00 
 87565e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87565eb:	00 
 87565ec:	89 14 24             	mov    %edx,(%esp)
 87565ef:	e8 4c d9 ff ff       	call   8753f40 <_ZN8TaoCrypt9PublicKeyC1EPKhj>
 87565f4:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 87565f8:	c7 46 10 00 00 00 00 	movl   $0x0,0x10(%esi)
 87565ff:	c7 46 14 00 00 00 00 	movl   $0x0,0x14(%esi)
 8756606:	c7 46 18 00 00 00 00 	movl   $0x0,0x18(%esi)
 875660d:	83 f0 01             	xor    $0x1,%eax
 8756610:	88 86 70 04 00 00    	mov    %al,0x470(%esi)
 8756616:	89 f8                	mov    %edi,%eax
 8756618:	84 c0                	test   %al,%al
 875661a:	c7 46 4c 00 00 00 00 	movl   $0x0,0x4c(%esi)
 8756621:	c6 46 50 00          	movb   $0x0,0x50(%esi)
 8756625:	c6 86 50 02 00 00 00 	movb   $0x0,0x250(%esi)
 875662c:	74 16                	je     8756644 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE+0xa4>
 875662e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8756631:	89 34 24             	mov    %esi,(%esp)
 8756634:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756638:	8b 45 14             	mov    0x14(%ebp),%eax
 875663b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875663f:	e8 9c fe ff ff       	call   87564e0 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE>
 8756644:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8756647:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875664a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875664d:	89 ec                	mov    %ebp,%esp
 875664f:	5d                   	pop    %ebp
 8756650:	c3                   	ret
 8756651:	90                   	nop
 8756652:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8756659:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::CertDecoder @ 0x87565a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*,
   bool, TaoCrypt::CertDecoder::CertType) */

void __thiscall
TaoCrypt::CertDecoder::CertDecoder
          (CertDecoder *this,undefined4 param_1,char param_2,undefined4 param_3,byte param_4,
          undefined4 param_6)

{
  *(undefined4 *)(this + 4) = param_1;
  *(undefined **)this = PTR_vtable_0936c690 + 8;
  PublicKey::PublicKey((PublicKey *)(this + 8),(uchar *)0x0,0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x470] = (CertDecoder)(param_4 ^ 1);
  *(undefined4 *)(this + 0x4c) = 0;
  this[0x50] = (CertDecoder)0x0;
  this[0x250] = (CertDecoder)0x0;
  if (param_2 != '\0') {
    Decode(this,param_3,param_6);
  }
  return;
}

```

---

## ConfirmSignature

```asm
// === 08755f50 TaoCrypt::CertDecoder::ConfirmSignature  [0x08755f50-0x87563ef] ===
 8755f50:	55                   	push   %ebp
 8755f51:	89 e5                	mov    %esp,%ebp
 8755f53:	57                   	push   %edi
 8755f54:	56                   	push   %esi
 8755f55:	53                   	push   %ebx
 8755f56:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
 8755f5c:	8b 75 08             	mov    0x8(%ebp),%esi
 8755f5f:	e8 94 ce fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8755f64:	81 c3 34 6c c1 00    	add    $0xc16c34,%ebx
 8755f6a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8755f71:	8b 46 1c             	mov    0x1c(%esi),%eax
 8755f74:	3d 88 02 00 00       	cmp    $0x288,%eax
 8755f79:	0f 84 b1 02 00 00    	je     8756230 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x2e0>
 8755f7f:	3d 86 02 00 00       	cmp    $0x286,%eax
 8755f84:	0f 84 0e 04 00 00    	je     8756398 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x448>
 8755f8a:	3d 05 02 00 00       	cmp    $0x205,%eax
 8755f8f:	74 2f                	je     8755fc0 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x70>
 8755f91:	3d 89 02 00 00       	cmp    $0x289,%eax
 8755f96:	74 28                	je     8755fc0 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x70>
 8755f98:	8b 46 04             	mov    0x4(%esi),%eax
 8755f9b:	31 ff                	xor    %edi,%edi
 8755f9d:	31 f6                	xor    %esi,%esi
 8755f9f:	c7 40 10 09 04 00 00 	movl   $0x409,0x10(%eax)
 8755fa6:	89 3c 24             	mov    %edi,(%esp)
 8755fa9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755fae:	e8 3d 17 01 00       	call   87676f0 <_ZdlPvN8TaoCrypt5new_tE>
 8755fb3:	81 c4 1c 01 00 00    	add    $0x11c,%esp
 8755fb9:	89 f0                	mov    %esi,%eax
 8755fbb:	5b                   	pop    %ebx
 8755fbc:	5e                   	pop    %esi
 8755fbd:	5f                   	pop    %edi
 8755fbe:	5d                   	pop    %ebp
 8755fbf:	c3                   	ret
 8755fc0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755fc5:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 8755fcc:	e8 7f 17 01 00       	call   8767750 <_ZnwjN8TaoCrypt5new_tE>
 8755fd1:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8755fd8:	00 
 8755fd9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8755fe0:	00 
 8755fe1:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8755fe7:	89 04 24             	mov    %eax,(%esp)
 8755fea:	e8 e1 2b 00 00       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8755fef:	8b 83 f4 ff ff ff    	mov    -0xc(%ebx),%eax
 8755ff5:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 8755ffb:	83 c0 08             	add    $0x8,%eax
 8755ffe:	89 02                	mov    %eax,(%edx)
 8756000:	89 14 24             	mov    %edx,(%esp)
 8756003:	e8 a8 23 01 00       	call   87683b0 <_ZN8TaoCrypt3SHA4InitEv>
 8756008:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 875600e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8756011:	c7 85 00 ff ff ff 58 	movl   $0x58,-0x100(%ebp)
 8756018:	00 00 00 
 875601b:	39 c7                	cmp    %eax,%edi
 875601d:	74 37                	je     8756056 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x106>
 875601f:	85 c0                	test   %eax,%eax
 8756021:	74 13                	je     8756036 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0xe6>
 8756023:	8b 10                	mov    (%eax),%edx
 8756025:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 875602b:	89 04 24             	mov    %eax,(%esp)
 875602e:	ff 12                	call   *(%edx)
 8756030:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 8756036:	89 04 24             	mov    %eax,(%esp)
 8756039:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875603e:	e8 ad 16 01 00       	call   87676f0 <_ZdlPvN8TaoCrypt5new_tE>
 8756043:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 8756049:	c7 85 00 ff ff ff 58 	movl   $0x58,-0x100(%ebp)
 8756050:	00 00 00 
 8756053:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8756056:	8b 56 10             	mov    0x10(%esi),%edx
 8756059:	8b 46 14             	mov    0x14(%esi),%eax
 875605c:	8b 0f                	mov    (%edi),%ecx
 875605e:	29 d0                	sub    %edx,%eax
 8756060:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756064:	8b 46 04             	mov    0x4(%esi),%eax
 8756067:	03 50 04             	add    0x4(%eax),%edx
 875606a:	89 3c 24             	mov    %edi,(%esp)
 875606d:	8d 7d c8             	lea    -0x38(%ebp),%edi
 8756070:	89 54 24 04          	mov    %edx,0x4(%esp)
 8756074:	ff 51 08             	call   *0x8(%ecx)
 8756077:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875607a:	8b 10                	mov    (%eax),%edx
 875607c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8756080:	89 04 24             	mov    %eax,(%esp)
 8756083:	ff 52 0c             	call   *0xc(%edx)
 8756086:	81 7e 20 85 02 00 00 	cmpl   $0x285,0x20(%esi)
 875608d:	0f 84 05 02 00 00    	je     8756298 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x348>
 8756093:	8b 46 18             	mov    0x18(%esi),%eax
 8756096:	89 44 24 08          	mov    %eax,0x8(%esp)
 875609a:	8b 46 4c             	mov    0x4c(%esi),%eax
 875609d:	8d b5 54 ff ff ff    	lea    -0xac(%ebp),%esi
 87560a3:	89 34 24             	mov    %esi,(%esp)
 87560a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87560aa:	e8 71 f0 ff ff       	call   8755120 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj>
 87560af:	8b 55 0c             	mov    0xc(%ebp),%edx
 87560b2:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 87560b8:	89 04 24             	mov    %eax,(%esp)
 87560bb:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 87560c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 87560c5:	e8 66 17 00 00       	call   8757830 <_ZN8TaoCrypt13DSA_PublicKeyC1ERNS_6SourceE>
 87560ca:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 87560d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87560d4:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 87560da:	89 04 24             	mov    %eax,(%esp)
 87560dd:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 87560e3:	e8 18 14 00 00       	call   8757500 <_ZN8TaoCrypt12DSA_VerifierC1ERKNS_13DSA_PublicKeyE>
 87560e8:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 87560ee:	89 74 24 08          	mov    %esi,0x8(%esp)
 87560f2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87560f6:	89 04 24             	mov    %eax,(%esp)
 87560f9:	e8 52 1e 00 00       	call   8757f50 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_>
 87560fe:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 8756101:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756108:	00 
 8756109:	89 3c 24             	mov    %edi,(%esp)
 875610c:	89 c6                	mov    %eax,%esi
 875610e:	8b 45 90             	mov    -0x70(%ebp),%eax
 8756111:	c1 e0 02             	shl    $0x2,%eax
 8756114:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756118:	e8 a3 7b 92 ff       	call   807dcc0 <memset@plt>
 875611d:	89 3c 24             	mov    %edi,(%esp)
 8756120:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756125:	e8 f6 15 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875612a:	8b 45 80             	mov    -0x80(%ebp),%eax
 875612d:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 8756130:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756137:	00 
 8756138:	c1 e0 02             	shl    $0x2,%eax
 875613b:	89 3c 24             	mov    %edi,(%esp)
 875613e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756142:	e8 79 7b 92 ff       	call   807dcc0 <memset@plt>
 8756147:	89 3c 24             	mov    %edi,(%esp)
 875614a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875614f:	e8 cc 15 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756154:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 875615a:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
 8756160:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756167:	00 
 8756168:	c1 e0 02             	shl    $0x2,%eax
 875616b:	89 3c 24             	mov    %edi,(%esp)
 875616e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756172:	e8 49 7b 92 ff       	call   807dcc0 <memset@plt>
 8756177:	89 3c 24             	mov    %edi,(%esp)
 875617a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875617f:	e8 9c 15 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756184:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 875618a:	8b bd 38 ff ff ff    	mov    -0xc8(%ebp),%edi
 8756190:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756197:	00 
 8756198:	c1 e0 02             	shl    $0x2,%eax
 875619b:	89 3c 24             	mov    %edi,(%esp)
 875619e:	89 44 24 08          	mov    %eax,0x8(%esp)
 87561a2:	e8 19 7b 92 ff       	call   807dcc0 <memset@plt>
 87561a7:	89 3c 24             	mov    %edi,(%esp)
 87561aa:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87561af:	e8 6c 15 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87561b4:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 87561ba:	8b bd 28 ff ff ff    	mov    -0xd8(%ebp),%edi
 87561c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87561c7:	00 
 87561c8:	c1 e0 02             	shl    $0x2,%eax
 87561cb:	89 3c 24             	mov    %edi,(%esp)
 87561ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 87561d2:	e8 e9 7a 92 ff       	call   807dcc0 <memset@plt>
 87561d7:	89 3c 24             	mov    %edi,(%esp)
 87561da:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87561df:	e8 3c 15 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87561e4:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 87561ea:	8b bd 18 ff ff ff    	mov    -0xe8(%ebp),%edi
 87561f0:	c1 e0 02             	shl    $0x2,%eax
 87561f3:	89 3c 24             	mov    %edi,(%esp)
 87561f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87561fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756201:	00 
 8756202:	e8 b9 7a 92 ff       	call   807dcc0 <memset@plt>
 8756207:	89 3c 24             	mov    %edi,(%esp)
 875620a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875620f:	e8 0c 15 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756214:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8756217:	85 ff                	test   %edi,%edi
 8756219:	0f 84 87 fd ff ff    	je     8755fa6 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x56>
 875621f:	8b 07                	mov    (%edi),%eax
 8756221:	89 3c 24             	mov    %edi,(%esp)
 8756224:	ff 10                	call   *(%eax)
 8756226:	e9 7b fd ff ff       	jmp    8755fa6 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x56>
 875622b:	90                   	nop
 875622c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756230:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756235:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 875623c:	e8 0f 15 01 00       	call   8767750 <_ZnwjN8TaoCrypt5new_tE>
 8756241:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8756248:	00 
 8756249:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8756250:	00 
 8756251:	89 c7                	mov    %eax,%edi
 8756253:	89 04 24             	mov    %eax,(%esp)
 8756256:	e8 75 29 00 00       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 875625b:	8b 83 c0 fc ff ff    	mov    -0x340(%ebx),%eax
 8756261:	83 c0 08             	add    $0x8,%eax
 8756264:	89 07                	mov    %eax,(%edi)
 8756266:	89 3c 24             	mov    %edi,(%esp)
 8756269:	e8 62 ff 00 00       	call   87661d0 <_ZN8TaoCrypt3MD54InitEv>
 875626e:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
 8756271:	c7 85 00 ff ff ff 89 	movl   $0x289,-0x100(%ebp)
 8756278:	02 00 00 
 875627b:	0f 84 d5 fd ff ff    	je     8756056 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x106>
 8756281:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8756284:	89 04 24             	mov    %eax,(%esp)
 8756287:	e8 44 08 00 00       	call   8756ad0 <_ZN5mySTL8auto_ptrIN8TaoCrypt4HASHEE7DestroyEv>
 875628c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875628f:	e9 c2 fd ff ff       	jmp    8756056 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x106>
 8756294:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756298:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875629b:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 87562a2:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 87562a9:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 87562b0:	8b 10                	mov    (%eax),%edx
 87562b2:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 87562b9:	89 04 24             	mov    %eax,(%esp)
 87562bc:	ff 52 18             	call   *0x18(%edx)
 87562bf:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 87562c2:	89 54 24 10          	mov    %edx,0x10(%esp)
 87562c6:	8b 95 00 ff ff ff    	mov    -0x100(%ebp),%edx
 87562cc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87562d0:	8d bd 54 ff ff ff    	lea    -0xac(%ebp),%edi
 87562d6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87562da:	89 44 24 08          	mov    %eax,0x8(%esp)
 87562de:	8d 45 a0             	lea    -0x60(%ebp),%eax
 87562e1:	89 04 24             	mov    %eax,(%esp)
 87562e4:	e8 f7 ef ff ff       	call   87552e0 <_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE>
 87562e9:	8b 83 48 fd ff ff    	mov    -0x2b8(%ebx),%eax
 87562ef:	89 3c 24             	mov    %edi,(%esp)
 87562f2:	83 c0 08             	add    $0x8,%eax
 87562f5:	89 45 a0             	mov    %eax,-0x60(%ebp)
 87562f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 87562fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87562ff:	e8 ac 1a 01 00       	call   8767db0 <_ZN8TaoCrypt13RSA_PublicKeyC1ERNS_6SourceE>
 8756304:	8b 46 4c             	mov    0x4c(%esi),%eax
 8756307:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875630a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875630e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8756311:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756315:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8756318:	89 44 24 04          	mov    %eax,0x4(%esp)
 875631c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 875631f:	89 04 24             	mov    %eax,(%esp)
 8756322:	e8 e9 07 00 00       	call   8756b10 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_>
 8756327:	8b bd 68 ff ff ff    	mov    -0x98(%ebp),%edi
 875632d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756334:	00 
 8756335:	89 3c 24             	mov    %edi,(%esp)
 8756338:	89 c6                	mov    %eax,%esi
 875633a:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8756340:	c1 e0 02             	shl    $0x2,%eax
 8756343:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756347:	e8 74 79 92 ff       	call   807dcc0 <memset@plt>
 875634c:	89 3c 24             	mov    %edi,(%esp)
 875634f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756354:	e8 c7 13 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756359:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 875635f:	8b bd 58 ff ff ff    	mov    -0xa8(%ebp),%edi
 8756365:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875636c:	00 
 875636d:	c1 e0 02             	shl    $0x2,%eax
 8756370:	89 3c 24             	mov    %edi,(%esp)
 8756373:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756377:	e8 44 79 92 ff       	call   807dcc0 <memset@plt>
 875637c:	89 3c 24             	mov    %edi,(%esp)
 875637f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756384:	e8 97 13 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756389:	8b 7d b8             	mov    -0x48(%ebp),%edi
 875638c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 875638f:	e9 5f fe ff ff       	jmp    87561f3 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x2a3>
 8756394:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756398:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875639d:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 87563a4:	e8 a7 13 01 00       	call   8767750 <_ZnwjN8TaoCrypt5new_tE>
 87563a9:	89 c7                	mov    %eax,%edi
 87563ab:	89 04 24             	mov    %eax,(%esp)
 87563ae:	e8 5d f3 00 00       	call   8765710 <_ZN8TaoCrypt3MD2C1Ev>
 87563b3:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
 87563b6:	c7 85 00 ff ff ff 86 	movl   $0x286,-0x100(%ebp)
 87563bd:	02 00 00 
 87563c0:	0f 84 90 fc ff ff    	je     8756056 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x106>
 87563c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87563c9:	89 04 24             	mov    %eax,(%esp)
 87563cc:	e8 ff 06 00 00       	call   8756ad0 <_ZN5mySTL8auto_ptrIN8TaoCrypt4HASHEE7DestroyEv>
 87563d1:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 87563d4:	c7 85 00 ff ff ff 86 	movl   $0x286,-0x100(%ebp)
 87563db:	02 00 00 
 87563de:	e9 73 fc ff ff       	jmp    8756056 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE+0x106>
 87563e3:	90                   	nop
 87563e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87563ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::CertDecoder::ConfirmSignature @ 0x8755f50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ConfirmSignature(TaoCrypt::Source&) */

undefined4 __thiscall TaoCrypt::CertDecoder::ConfirmSignature(CertDecoder *this,Source *param_1)

{
  int iVar1;
  HASHwithTransform *pHVar2;
  size_t __n;
  undefined4 uVar3;
  HASHwithTransform *pHVar4;
  uchar *__s;
  uint in_stack_fffffed8;
  uint3 uVar6;
  uint uVar5;
  undefined4 local_104;
  int local_f0;
  uchar *local_ec;
  int local_e0;
  void *local_dc;
  int local_d0;
  void *local_cc;
  int local_c0;
  void *local_bc;
  int local_b0;
  void *local_ac;
  int local_a0;
  void *local_9c;
  DSA_Verifier local_88 [4];
  int local_84;
  void *local_80;
  int local_74;
  void *local_70;
  undefined *local_64 [5];
  uint local_50;
  uchar *local_4c;
  undefined4 local_44;
  undefined4 local_40;
  uchar local_3c [20];
  RSA_PublicKey *local_28 [2];
  HASHwithTransform *local_20 [4];
  
  local_20[0] = (HASHwithTransform *)0x0;
  iVar1 = *(int *)(this + 0x1c);
  uVar6 = (uint3)(in_stack_fffffed8 >> 8);
  if (iVar1 == 0x288) {
    pHVar4 = operator_new(0x70,(uint)uVar6 << 8);
    HASHwithTransform::HASHwithTransform(pHVar4,4,0x40);
    *(undefined **)pHVar4 = PTR_vtable_0936c858 + 8;
    MD5::Init((MD5 *)pHVar4);
    local_104 = 0x289;
    if (pHVar4 != local_20[0]) {
      mySTL::auto_ptr<TaoCrypt::HASH>::Destroy((auto_ptr<TaoCrypt::HASH> *)local_20);
      local_20[0] = pHVar4;
    }
  }
  else if (iVar1 == 0x286) {
    pHVar4 = operator_new(0x2c,(uint)uVar6 << 8);
    MD2::MD2((MD2 *)pHVar4);
    local_104 = 0x286;
    if (pHVar4 != local_20[0]) {
      mySTL::auto_ptr<TaoCrypt::HASH>::Destroy((auto_ptr<TaoCrypt::HASH> *)local_20);
      local_104 = 0x286;
      local_20[0] = pHVar4;
    }
  }
  else {
    if ((iVar1 != 0x205) && (iVar1 != 0x289)) {
      pHVar4 = (HASHwithTransform *)0x0;
      uVar3 = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x409;
      goto LAB_08755fa6;
    }
    pHVar4 = operator_new(0x70,in_stack_fffffed8 & 0xffffff00);
    uVar5 = 0;
    HASHwithTransform::HASHwithTransform(pHVar4,5,0x40);
    *(undefined **)pHVar4 = PTR_vtable_0936cb8c + 8;
    SHA::Init((SHA *)pHVar4);
    pHVar2 = local_20[0];
    local_104 = 0x58;
    if (pHVar4 != local_20[0]) {
      if (local_20[0] != (HASHwithTransform *)0x0) {
        (*(code *)**(undefined4 **)local_20[0])(local_20[0]);
      }
      operator_delete(pHVar2,uVar5 & 0xffffff00);
      local_104 = 0x58;
      local_20[0] = pHVar4;
    }
  }
  (**(code **)(*(int *)pHVar4 + 8))
            (pHVar4,*(int *)(this + 0x10) + *(int *)(*(int *)(this + 4) + 4),
             *(int *)(this + 0x14) - *(int *)(this + 0x10));
  (**(code **)(*(int *)local_20[0] + 0xc))(local_20[0],local_3c);
  if (*(int *)(this + 0x20) == 0x285) {
    local_4c = (uchar *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_40 = 0;
    uVar3 = (**(code **)(*(int *)local_20[0] + 0x18))(local_20[0]);
    Signature_Encoder::Signature_Encoder
              ((Signature_Encoder *)local_64,local_3c,uVar3,local_104,&local_50);
    local_64[0] = PTR_vtable_0936c8e0 + 8;
    RSA_PublicKey::RSA_PublicKey((RSA_PublicKey *)&local_b0,param_1);
    local_28[0] = (RSA_PublicKey *)&local_b0;
    uVar3 = RSA_Encryptor<TaoCrypt::RSA_BlockType2>::SSL_Verify
                      ((RSA_Encryptor<TaoCrypt::RSA_BlockType2> *)local_28,local_4c,local_50,
                       *(uchar **)(this + 0x4c));
    uVar5 = 0;
    memset(local_9c,0,local_a0 << 2);
    operator_delete__(local_9c,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_ac,0,local_b0 << 2);
    operator_delete__(local_ac,uVar5 & 0xffffff00);
    __n = local_50;
    __s = local_4c;
  }
  else {
    DecodeDSA_Signature((uchar *)&local_b0,*(uchar **)(this + 0x4c),*(uint *)(this + 0x18));
    DSA_PublicKey::DSA_PublicKey((DSA_PublicKey *)&local_f0,param_1);
    DSA_Verifier::DSA_Verifier(local_88,(DSA_PublicKey *)&local_f0);
    uVar3 = DSA_Verifier::Verify(local_88,local_3c,(uchar *)&local_b0);
    uVar5 = 0;
    memset(local_70,0,local_74 << 2);
    operator_delete__(local_70,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_80,0,local_84 << 2);
    operator_delete__(local_80,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_bc,0,local_c0 << 2);
    operator_delete__(local_bc,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_cc,0,local_d0 << 2);
    operator_delete__(local_cc,uVar5 & 0xffffff00);
    uVar5 = 0;
    memset(local_dc,0,local_e0 << 2);
    operator_delete__(local_dc,uVar5 & 0xffffff00);
    __n = local_f0 << 2;
    __s = local_ec;
  }
  uVar5 = 0;
  memset(__s,0,__n);
  in_stack_fffffed8 = uVar5 & 0xffffff00;
  operator_delete__(__s,in_stack_fffffed8);
  pHVar4 = local_20[0];
  if (local_20[0] != (HASHwithTransform *)0x0) {
    (*(code *)**(undefined4 **)local_20[0])(local_20[0]);
  }
LAB_08755fa6:
  operator_delete(pHVar4,in_stack_fffffed8 & 0xffffff00);
  return uVar3;
}

```

---

## Decode

```asm
// === 087564e0 TaoCrypt::CertDecoder::Decode  [0x087564e0-0x875659f] ===
 87564e0:	55                   	push   %ebp
 87564e1:	89 e5                	mov    %esp,%ebp
 87564e3:	83 ec 28             	sub    $0x28,%esp
 87564e6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87564e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87564ec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87564ef:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87564f2:	e8 01 c9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87564f7:	81 c3 a1 66 c1 00    	add    $0xc166a1,%ebx
 87564fd:	8b 46 04             	mov    0x4(%esi),%eax
 8756500:	8b 40 10             	mov    0x10(%eax),%eax
 8756503:	85 c0                	test   %eax,%eax
 8756505:	74 11                	je     8756518 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x38>
 8756507:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875650a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875650d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8756510:	89 ec                	mov    %ebp,%esp
 8756512:	5d                   	pop    %ebp
 8756513:	c3                   	ret
 8756514:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756518:	89 34 24             	mov    %esi,(%esp)
 875651b:	e8 90 eb ff ff       	call   87550b0 <_ZN8TaoCrypt11CertDecoder11DecodeToKeyEv>
 8756520:	8b 46 04             	mov    0x4(%esi),%eax
 8756523:	8b 78 10             	mov    0x10(%eax),%edi
 8756526:	85 ff                	test   %edi,%edi
 8756528:	75 dd                	jne    8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 875652a:	8b 56 14             	mov    0x14(%esi),%edx
 875652d:	3b 50 0c             	cmp    0xc(%eax),%edx
 8756530:	74 03                	je     8756535 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x55>
 8756532:	89 50 0c             	mov    %edx,0xc(%eax)
 8756535:	89 34 24             	mov    %esi,(%esp)
 8756538:	e8 f3 d4 ff ff       	call   8753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>
 875653d:	89 34 24             	mov    %esi,(%esp)
 8756540:	89 c7                	mov    %eax,%edi
 8756542:	e8 39 d8 ff ff       	call   8753d80 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv>
 8756547:	8b 46 04             	mov    0x4(%esi),%eax
 875654a:	8b 48 10             	mov    0x10(%eax),%ecx
 875654d:	85 c9                	test   %ecx,%ecx
 875654f:	75 b6                	jne    8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 8756551:	3b 7e 1c             	cmp    0x1c(%esi),%edi
 8756554:	74 0a                	je     8756560 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x80>
 8756556:	c7 40 10 ff 03 00 00 	movl   $0x3ff,0x10(%eax)
 875655d:	eb a8                	jmp    8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 875655f:	90                   	nop
 8756560:	8b 55 10             	mov    0x10(%ebp),%edx
 8756563:	85 d2                	test   %edx,%edx
 8756565:	74 a0                	je     8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 8756567:	80 be 70 04 00 00 00 	cmpb   $0x0,0x470(%esi)
 875656e:	74 97                	je     8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 8756570:	8b 45 0c             	mov    0xc(%ebp),%eax
 8756573:	89 34 24             	mov    %esi,(%esp)
 8756576:	89 44 24 04          	mov    %eax,0x4(%esp)
 875657a:	e8 71 fe ff ff       	call   87563f0 <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE>
 875657f:	84 c0                	test   %al,%al
 8756581:	75 84                	jne    8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 8756583:	8b 46 04             	mov    0x4(%esi),%eax
 8756586:	c7 40 10 0f 04 00 00 	movl   $0x40f,0x10(%eax)
 875658d:	e9 75 ff ff ff       	jmp    8756507 <_ZN8TaoCrypt11CertDecoder6DecodeEPN5mySTL4listIPNS_6SignerEEENS0_8CertTypeE+0x27>
 8756592:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8756599:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::Decode @ 0x87564e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::Decode(mySTL::list<TaoCrypt::Signer*>*, TaoCrypt::CertDecoder::CertType)
    */

void __thiscall TaoCrypt::CertDecoder::Decode(CertDecoder *this,list *param_1,int param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    DecodeToKey(this);
    iVar2 = *(int *)(this + 4);
    if (*(int *)(iVar2 + 0x10) == 0) {
      if (*(int *)(this + 0x14) != *(int *)(iVar2 + 0xc)) {
        *(int *)(iVar2 + 0xc) = *(int *)(this + 0x14);
      }
      iVar2 = GetAlgoId(this);
      GetSignature(this);
      if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
        if (iVar2 == *(int *)(this + 0x1c)) {
          if ((param_3 != 0) && (this[0x470] != (CertDecoder)0x0)) {
            cVar1 = ValidateSignature(this,param_1);
            if (cVar1 == '\0') {
              *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x40f;
            }
          }
        }
        else {
          *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x3ff;
        }
      }
    }
  }
  return;
}

```

---

## DecodeToKey

```asm
// === 087550b0 TaoCrypt::CertDecoder::DecodeToKey  [0x087550b0-0x875511f] ===
 87550b0:	55                   	push   %ebp
 87550b1:	89 e5                	mov    %esp,%ebp
 87550b3:	83 ec 18             	sub    $0x18,%esp
 87550b6:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87550b9:	8b 75 08             	mov    0x8(%ebp),%esi
 87550bc:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87550bf:	e8 34 dd fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87550c4:	81 c3 d4 7a c1 00    	add    $0xc17ad4,%ebx
 87550ca:	8b 06                	mov    (%esi),%eax
 87550cc:	89 34 24             	mov    %esi,(%esp)
 87550cf:	ff 50 08             	call   *0x8(%eax)
 87550d2:	89 34 24             	mov    %esi,(%esp)
 87550d5:	e8 56 e9 ff ff       	call   8753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>
 87550da:	89 46 1c             	mov    %eax,0x1c(%esi)
 87550dd:	89 34 24             	mov    %esi,(%esp)
 87550e0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87550e7:	00 
 87550e8:	e8 b3 fb ff ff       	call   8754ca0 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE>
 87550ed:	89 34 24             	mov    %esi,(%esp)
 87550f0:	e8 4b fb ff ff       	call   8754c40 <_ZN8TaoCrypt11CertDecoder11GetValidityEv>
 87550f5:	89 34 24             	mov    %esi,(%esp)
 87550f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87550ff:	00 
 8755100:	e8 9b fb ff ff       	call   8754ca0 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE>
 8755105:	89 34 24             	mov    %esi,(%esp)
 8755108:	e8 c3 f2 ff ff       	call   87543d0 <_ZN8TaoCrypt11CertDecoder6GetKeyEv>
 875510d:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8755110:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8755113:	89 ec                	mov    %ebp,%esp
 8755115:	5d                   	pop    %ebp
 8755116:	c3                   	ret
 8755117:	89 f6                	mov    %esi,%esi
 8755119:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::DecodeToKey @ 0x87550b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::DecodeToKey() */

void __thiscall TaoCrypt::CertDecoder::DecodeToKey(CertDecoder *this)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)this + 8))(this);
  uVar1 = GetAlgoId(this);
  *(undefined4 *)(this + 0x1c) = uVar1;
  GetName(this,0);
  GetValidity(this);
  GetName(this,1);
  GetKey(this);
  return;
}

```

---

## GetAlgoId

```asm
// === 08753a30 TaoCrypt::CertDecoder::GetAlgoId  [0x08753a30-0x8753b4f] ===
 8753a30:	55                   	push   %ebp
 8753a31:	31 c0                	xor    %eax,%eax
 8753a33:	89 e5                	mov    %esp,%ebp
 8753a35:	83 ec 48             	sub    $0x48,%esp
 8753a38:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8753a3b:	8b 75 08             	mov    0x8(%ebp),%esi
 8753a3e:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8753a41:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8753a44:	e8 af f3 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753a49:	81 c3 4f 91 c1 00    	add    $0xc1914f,%ebx
 8753a4f:	8b 56 04             	mov    0x4(%esi),%edx
 8753a52:	8b 7a 10             	mov    0x10(%edx),%edi
 8753a55:	85 ff                	test   %edi,%edi
 8753a57:	74 0f                	je     8753a68 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x38>
 8753a59:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8753a5c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8753a5f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8753a62:	89 ec                	mov    %ebp,%esp
 8753a64:	5d                   	pop    %ebp
 8753a65:	c3                   	ret
 8753a66:	66 90                	xchg   %ax,%ax
 8753a68:	89 34 24             	mov    %esi,(%esp)
 8753a6b:	e8 20 fd ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753a70:	8b 46 04             	mov    0x4(%esi),%eax
 8753a73:	8b 50 0c             	mov    0xc(%eax),%edx
 8753a76:	8d 4a 01             	lea    0x1(%edx),%ecx
 8753a79:	89 48 0c             	mov    %ecx,0xc(%eax)
 8753a7c:	8b 48 04             	mov    0x4(%eax),%ecx
 8753a7f:	80 3c 11 06          	cmpb   $0x6,(%ecx,%edx,1)
 8753a83:	74 1b                	je     8753aa0 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x70>
 8753a85:	c7 40 10 02 04 00 00 	movl   $0x402,0x10(%eax)
 8753a8c:	31 c0                	xor    %eax,%eax
 8753a8e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8753a91:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8753a94:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8753a97:	89 ec                	mov    %ebp,%esp
 8753a99:	5d                   	pop    %ebp
 8753a9a:	c3                   	ret
 8753a9b:	90                   	nop
 8753a9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753aa0:	89 04 24             	mov    %eax,(%esp)
 8753aa3:	e8 58 fc ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8753aa8:	85 c0                	test   %eax,%eax
 8753aaa:	89 c1                	mov    %eax,%ecx
 8753aac:	0f 84 8d 00 00 00    	je     8753b3f <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x10f>
 8753ab2:	8b 7e 04             	mov    0x4(%esi),%edi
 8753ab5:	8b 47 04             	mov    0x4(%edi),%eax
 8753ab8:	8b 57 0c             	mov    0xc(%edi),%edx
 8753abb:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8753abe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8753ac1:	31 c0                	xor    %eax,%eax
 8753ac3:	90                   	nop
 8753ac4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753ac8:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8753acb:	89 d6                	mov    %edx,%esi
 8753acd:	83 c2 01             	add    $0x1,%edx
 8753ad0:	89 57 0c             	mov    %edx,0xc(%edi)
 8753ad3:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8753ad6:	0f b6 34 37          	movzbl (%edi,%esi,1),%esi
 8753ada:	01 f0                	add    %esi,%eax
 8753adc:	83 e9 01             	sub    $0x1,%ecx
 8753adf:	75 e7                	jne    8753ac8 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x98>
 8753ae1:	3d 03 02 00 00       	cmp    $0x203,%eax
 8753ae6:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8753ae9:	0f 84 6a ff ff ff    	je     8753a59 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x29>
 8753aef:	3d 05 02 00 00       	cmp    $0x205,%eax
 8753af4:	0f 84 5f ff ff ff    	je     8753a59 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x29>
 8753afa:	8b 57 0c             	mov    0xc(%edi),%edx
 8753afd:	8d 4a 01             	lea    0x1(%edx),%ecx
 8753b00:	89 4f 0c             	mov    %ecx,0xc(%edi)
 8753b03:	8b 4f 04             	mov    0x4(%edi),%ecx
 8753b06:	80 3c 11 05          	cmpb   $0x5,(%ecx,%edx,1)
 8753b0a:	74 14                	je     8753b20 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0xf0>
 8753b0c:	c7 47 10 03 04 00 00 	movl   $0x403,0x10(%edi)
 8753b13:	31 c0                	xor    %eax,%eax
 8753b15:	e9 3f ff ff ff       	jmp    8753a59 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x29>
 8753b1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753b20:	8d 72 02             	lea    0x2(%edx),%esi
 8753b23:	89 77 0c             	mov    %esi,0xc(%edi)
 8753b26:	80 7c 11 01 00       	cmpb   $0x0,0x1(%ecx,%edx,1)
 8753b2b:	0f 84 28 ff ff ff    	je     8753a59 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x29>
 8753b31:	c7 47 10 04 04 00 00 	movl   $0x404,0x10(%edi)
 8753b38:	31 c0                	xor    %eax,%eax
 8753b3a:	e9 1a ff ff ff       	jmp    8753a59 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0x29>
 8753b3f:	31 c0                	xor    %eax,%eax
 8753b41:	8b 7e 04             	mov    0x4(%esi),%edi
 8753b44:	eb b4                	jmp    8753afa <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv+0xca>
 8753b46:	8d 76 00             	lea    0x0(%esi),%esi
 8753b49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::GetAlgoId @ 0x8753a30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetAlgoId() */

int __thiscall TaoCrypt::CertDecoder::GetAlgoId(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    pSVar1 = *(Source **)(this + 4);
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\x06') {
      *(undefined4 *)(pSVar1 + 0x10) = 0x402;
      return 0;
    }
    iVar3 = GetLength(pSVar1);
    if (iVar3 == 0) {
      iVar2 = 0;
      iVar5 = *(int *)(this + 4);
    }
    else {
      iVar5 = *(int *)(this + 4);
      iVar2 = 0;
      iVar4 = *(int *)(iVar5 + 0xc);
      do {
        *(int *)(iVar5 + 0xc) = iVar4 + 1;
        iVar2 = iVar2 + (uint)*(byte *)(*(int *)(iVar5 + 4) + iVar4);
        iVar3 = iVar3 + -1;
        iVar4 = iVar4 + 1;
      } while (iVar3 != 0);
      if (iVar2 == 0x203) {
        return 0x203;
      }
      if (iVar2 == 0x205) {
        return 0x205;
      }
    }
    iVar3 = *(int *)(iVar5 + 0xc);
    *(int *)(iVar5 + 0xc) = iVar3 + 1;
    if (*(char *)(*(int *)(iVar5 + 4) + iVar3) == '\x05') {
      *(int *)(iVar5 + 0xc) = iVar3 + 2;
      if (*(char *)(*(int *)(iVar5 + 4) + 1 + iVar3) != '\0') {
        *(undefined4 *)(iVar5 + 0x10) = 0x404;
        iVar2 = 0;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x10) = 0x403;
      iVar2 = 0;
    }
  }
  return iVar2;
}

```

---

## GetCompareHash

```asm
// === 08756660 TaoCrypt::CertDecoder::GetCompareHash  [0x08756660-0x875679f] ===
 8756660:	55                   	push   %ebp
 8756661:	89 e5                	mov    %esp,%ebp
 8756663:	81 ec c8 04 00 00    	sub    $0x4c8,%esp
 8756669:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875666c:	8b 7d 08             	mov    0x8(%ebp),%edi
 875666f:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8756672:	8b 55 10             	mov    0x10(%ebp),%edx
 8756675:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8756678:	e8 7b c7 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875667d:	81 c3 1b 65 c1 00    	add    $0xc1651b,%ebx
 8756683:	8b 47 04             	mov    0x4(%edi),%eax
 8756686:	8b 48 10             	mov    0x10(%eax),%ecx
 8756689:	85 c9                	test   %ecx,%ecx
 875668b:	74 13                	je     87566a0 <_ZN8TaoCrypt11CertDecoder14GetCompareHashEPKhjPhj+0x40>
 875668d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8756690:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8756693:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8756696:	89 ec                	mov    %ebp,%esp
 8756698:	5d                   	pop    %ebp
 8756699:	c3                   	ret
 875669a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87566a0:	31 c0                	xor    %eax,%eax
 87566a2:	85 d2                	test   %edx,%edx
 87566a4:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87566a7:	74 10                	je     87566b9 <_ZN8TaoCrypt11CertDecoder14GetCompareHashEPKhjPhj+0x59>
 87566a9:	89 14 24             	mov    %edx,(%esp)
 87566ac:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87566b1:	e8 da 10 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87566b6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87566b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 87566bd:	8b 55 0c             	mov    0xc(%ebp),%edx
 87566c0:	8d b5 60 fb ff ff    	lea    -0x4a0(%ebp),%esi
 87566c6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87566c9:	89 04 24             	mov    %eax,(%esp)
 87566cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 87566d0:	e8 cb 71 92 ff       	call   807d8a0 <memcpy@plt>
 87566d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87566d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87566dc:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 87566e3:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 87566ea:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 87566f1:	00 
 87566f2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 87566f9:	00 
 87566fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8756701:	00 
 8756702:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8756709:	00 
 875670a:	89 34 24             	mov    %esi,(%esp)
 875670d:	e8 8e fe ff ff       	call   87565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>
 8756712:	89 34 24             	mov    %esi,(%esp)
 8756715:	e8 76 d0 ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 875671a:	89 34 24             	mov    %esi,(%esp)
 875671d:	e8 0e d3 ff ff       	call   8753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>
 8756722:	89 34 24             	mov    %esi,(%esp)
 8756725:	e8 b6 d5 ff ff       	call   8753ce0 <_ZN8TaoCrypt11CertDecoder9GetDigestEv>
 875672a:	8b 85 78 fb ff ff    	mov    -0x488(%ebp),%eax
 8756730:	3b 45 18             	cmp    0x18(%ebp),%eax
 8756733:	77 5b                	ja     8756790 <_ZN8TaoCrypt11CertDecoder14GetCompareHashEPKhjPhj+0x130>
 8756735:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756739:	8b 85 ac fb ff ff    	mov    -0x454(%ebp),%eax
 875673f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756743:	8b 45 14             	mov    0x14(%ebp),%eax
 8756746:	89 04 24             	mov    %eax,(%esp)
 8756749:	e8 52 71 92 ff       	call   807d8a0 <memcpy@plt>
 875674e:	89 34 24             	mov    %esi,(%esp)
 8756751:	e8 4a da ff ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 8756756:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8756759:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875675c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756763:	00 
 8756764:	89 34 24             	mov    %esi,(%esp)
 8756767:	89 44 24 08          	mov    %eax,0x8(%esp)
 875676b:	e8 50 75 92 ff       	call   807dcc0 <memset@plt>
 8756770:	89 34 24             	mov    %esi,(%esp)
 8756773:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756778:	e8 a3 0f 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875677d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8756780:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8756783:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8756786:	89 ec                	mov    %ebp,%esp
 8756788:	5d                   	pop    %ebp
 8756789:	c3                   	ret
 875678a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8756790:	8b 47 04             	mov    0x4(%edi),%eax
 8756793:	c7 40 10 08 04 00 00 	movl   $0x408,0x10(%eax)
 875679a:	eb b2                	jmp    875674e <_ZN8TaoCrypt11CertDecoder14GetCompareHashEPKhjPhj+0xee>
 875679c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::CertDecoder::GetCompareHash @ 0x8756660

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetCompareHash(unsigned char const*, unsigned int, unsigned char*,
   unsigned int) */

void __thiscall
TaoCrypt::CertDecoder::GetCompareHash
          (CertDecoder *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  void *pvVar1;
  uint in_stack_fffffb38;
  uint uVar2;
  CertDecoder local_4a4 [24];
  uint local_48c;
  void *local_458;
  uint local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) != 0) {
    return;
  }
  local_2c = (void *)0x0;
  local_30 = param_2;
  if (param_2 != 0) {
    local_2c = operator_new__(param_2,in_stack_fffffb38 & 0xffffff00);
  }
  memcpy(local_2c,param_1,local_30);
  local_24 = 0;
  local_20 = 0;
  CertDecoder(local_4a4,&local_30,0,0,0,1);
  BER_Decoder::GetSequence((BER_Decoder *)local_4a4);
  GetAlgoId(local_4a4);
  GetDigest(local_4a4);
  if (param_4 < local_48c) {
    *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x408;
  }
  else {
    memcpy(param_3,local_458,local_48c);
  }
  ~CertDecoder(local_4a4);
  pvVar1 = local_2c;
  uVar2 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}

```

---

## GetDate

```asm
// === 08754830 TaoCrypt::CertDecoder::GetDate  [0x08754830-0x8754c3f] ===
 8754830:	55                   	push   %ebp
 8754831:	89 e5                	mov    %esp,%ebp
 8754833:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8754839:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875483c:	8b 75 08             	mov    0x8(%ebp),%esi
 875483f:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8754842:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8754845:	e8 ae e5 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875484a:	81 c3 4e 83 c1 00    	add    $0xc1834e,%ebx
 8754850:	8b 46 04             	mov    0x4(%esi),%eax
 8754853:	8b 50 10             	mov    0x10(%eax),%edx
 8754856:	85 d2                	test   %edx,%edx
 8754858:	75 1f                	jne    8754879 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x49>
 875485a:	8b 50 0c             	mov    0xc(%eax),%edx
 875485d:	8d 4a 01             	lea    0x1(%edx),%ecx
 8754860:	89 48 0c             	mov    %ecx,0xc(%eax)
 8754863:	8b 48 04             	mov    0x4(%eax),%ecx
 8754866:	0f b6 14 11          	movzbl (%ecx,%edx,1),%edx
 875486a:	8d 4a e9             	lea    -0x17(%edx),%ecx
 875486d:	80 f9 01             	cmp    $0x1,%cl
 8754870:	76 16                	jbe    8754888 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x58>
 8754872:	c7 40 10 06 04 00 00 	movl   $0x406,0x10(%eax)
 8754879:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875487c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875487f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8754882:	89 ec                	mov    %ebp,%esp
 8754884:	5d                   	pop    %ebp
 8754885:	c3                   	ret
 8754886:	66 90                	xchg   %ax,%ax
 8754888:	88 95 78 ff ff ff    	mov    %dl,-0x88(%ebp)
 875488e:	89 04 24             	mov    %eax,(%esp)
 8754891:	e8 6a ee ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8754896:	0f b6 95 78 ff ff ff 	movzbl -0x88(%ebp),%edx
 875489d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87548a0:	83 e8 0d             	sub    $0xd,%eax
 87548a3:	83 f8 03             	cmp    $0x3,%eax
 87548a6:	76 10                	jbe    87548b8 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x88>
 87548a8:	8b 46 04             	mov    0x4(%esi),%eax
 87548ab:	c7 40 10 07 04 00 00 	movl   $0x407,0x10(%eax)
 87548b2:	eb c5                	jmp    8754879 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x49>
 87548b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87548b8:	8b 4e 04             	mov    0x4(%esi),%ecx
 87548bb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87548be:	89 45 9c             	mov    %eax,-0x64(%ebp)
 87548c1:	88 95 78 ff ff ff    	mov    %dl,-0x88(%ebp)
 87548c7:	8b 41 04             	mov    0x4(%ecx),%eax
 87548ca:	03 41 0c             	add    0xc(%ecx),%eax
 87548cd:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87548d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87548d4:	8b 45 9c             	mov    -0x64(%ebp),%eax
 87548d7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87548db:	89 04 24             	mov    %eax,(%esp)
 87548de:	e8 bd 8f 92 ff       	call   807d8a0 <memcpy@plt>
 87548e3:	8b 46 04             	mov    0x4(%esi),%eax
 87548e6:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87548e9:	01 48 0c             	add    %ecx,0xc(%eax)
 87548ec:	b9 0b 00 00 00       	mov    $0xb,%ecx
 87548f1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 87548f4:	89 45 a0             	mov    %eax,-0x60(%ebp)
 87548f7:	8b 7d a0             	mov    -0x60(%ebp),%edi
 87548fa:	31 c0                	xor    %eax,%eax
 87548fc:	f3 ab                	rep stos %eax,%es:(%edi)
 87548fe:	0f b6 95 78 ff ff ff 	movzbl -0x88(%ebp),%edx
 8754905:	80 fa 17             	cmp    $0x17,%dl
 8754908:	0f 84 12 02 00 00    	je     8754b20 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x2f0>
 875490e:	0f b6 4d d4          	movzbl -0x2c(%ebp),%ecx
 8754912:	8d 55 e1             	lea    -0x1f(%ebp),%edx
 8754915:	0f b6 45 d5          	movzbl -0x2b(%ebp),%eax
 8754919:	8d 7d d8             	lea    -0x28(%ebp),%edi
 875491c:	89 55 a0             	mov    %edx,-0x60(%ebp)
 875491f:	8d 55 df             	lea    -0x21(%ebp),%edx
 8754922:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8754925:	8d 55 dd             	lea    -0x23(%ebp),%edx
 8754928:	83 e9 30             	sub    $0x30,%ecx
 875492b:	83 e8 30             	sub    $0x30,%eax
 875492e:	6b c0 64             	imul   $0x64,%eax,%eax
 8754931:	69 c9 e8 03 00 00    	imul   $0x3e8,%ecx,%ecx
 8754937:	89 55 8c             	mov    %edx,-0x74(%ebp)
 875493a:	8d 55 db             	lea    -0x25(%ebp),%edx
 875493d:	89 55 84             	mov    %edx,-0x7c(%ebp)
 8754940:	8d 55 d9             	lea    -0x27(%ebp),%edx
 8754943:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8754949:	8d 55 d7             	lea    -0x29(%ebp),%edx
 875494c:	01 c1                	add    %eax,%ecx
 875494e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8754951:	03 4d bc             	add    -0x44(%ebp),%ecx
 8754954:	89 45 98             	mov    %eax,-0x68(%ebp)
 8754957:	8d 45 de             	lea    -0x22(%ebp),%eax
 875495a:	89 45 90             	mov    %eax,-0x70(%ebp)
 875495d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8754960:	89 45 88             	mov    %eax,-0x78(%ebp)
 8754963:	8d 45 da             	lea    -0x26(%ebp),%eax
 8754966:	89 45 80             	mov    %eax,-0x80(%ebp)
 8754969:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 875496c:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 875496f:	0f b6 00             	movzbl (%eax),%eax
 8754972:	0f b6 12             	movzbl (%edx),%edx
 8754975:	8d 84 80 10 ff ff ff 	lea    -0xf0(%eax,%eax,4),%eax
 875497c:	8d 04 41             	lea    (%ecx,%eax,2),%eax
 875497f:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 8754985:	8d 84 10 64 f8 ff ff 	lea    -0x79c(%eax,%edx,1),%eax
 875498c:	89 45 bc             	mov    %eax,-0x44(%ebp)
 875498f:	0f b6 07             	movzbl (%edi),%eax
 8754992:	0f b6 11             	movzbl (%ecx),%edx
 8754995:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 8754998:	8d 84 80 10 ff ff ff 	lea    -0xf0(%eax,%eax,4),%eax
 875499f:	01 c0                	add    %eax,%eax
 87549a1:	03 45 b8             	add    -0x48(%ebp),%eax
 87549a4:	8d 44 10 cf          	lea    -0x31(%eax,%edx,1),%eax
 87549a8:	8b 55 80             	mov    -0x80(%ebp),%edx
 87549ab:	89 45 b8             	mov    %eax,-0x48(%ebp)
 87549ae:	0f b6 02             	movzbl (%edx),%eax
 87549b1:	0f b6 11             	movzbl (%ecx),%edx
 87549b4:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 87549b7:	8d 84 80 10 ff ff ff 	lea    -0xf0(%eax,%eax,4),%eax
 87549be:	01 c0                	add    %eax,%eax
 87549c0:	03 45 b4             	add    -0x4c(%ebp),%eax
 87549c3:	8d 44 10 d0          	lea    -0x30(%eax,%edx,1),%eax
 87549c7:	8b 55 88             	mov    -0x78(%ebp),%edx
 87549ca:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87549cd:	0f b6 02             	movzbl (%edx),%eax
 87549d0:	0f b6 11             	movzbl (%ecx),%edx
 87549d3:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 87549d6:	8d 84 80 10 ff ff ff 	lea    -0xf0(%eax,%eax,4),%eax
 87549dd:	01 c0                	add    %eax,%eax
 87549df:	03 45 b0             	add    -0x50(%ebp),%eax
 87549e2:	8d 44 10 d0          	lea    -0x30(%eax,%edx,1),%eax
 87549e6:	8b 55 90             	mov    -0x70(%ebp),%edx
 87549e9:	89 45 b0             	mov    %eax,-0x50(%ebp)
 87549ec:	0f b6 02             	movzbl (%edx),%eax
 87549ef:	0f b6 11             	movzbl (%ecx),%edx
 87549f2:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 87549f5:	8d 84 80 10 ff ff ff 	lea    -0xf0(%eax,%eax,4),%eax
 87549fc:	01 c0                	add    %eax,%eax
 87549fe:	03 45 ac             	add    -0x54(%ebp),%eax
 8754a01:	8d 44 10 d0          	lea    -0x30(%eax,%edx,1),%eax
 8754a05:	8b 55 98             	mov    -0x68(%ebp),%edx
 8754a08:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8754a0b:	0f b6 02             	movzbl (%edx),%eax
 8754a0e:	0f b6 11             	movzbl (%ecx),%edx
 8754a11:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8754a18:	8d 84 80 10 ff ff ff 	lea    -0xf0(%eax,%eax,4),%eax
 8754a1f:	01 c0                	add    %eax,%eax
 8754a21:	03 45 a8             	add    -0x58(%ebp),%eax
 8754a24:	8d 44 10 d0          	lea    -0x30(%eax,%edx,1),%eax
 8754a28:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8754a2b:	e8 20 8d 92 ff       	call   807d750 <time@plt>
 8754a30:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8754a33:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8754a36:	89 04 24             	mov    %eax,(%esp)
 8754a39:	e8 52 9a 92 ff       	call   807e490 <gmtime@plt>
 8754a3e:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8754a41:	85 ff                	test   %edi,%edi
 8754a43:	0f 85 8f 00 00 00    	jne    8754ad8 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x2a8>
 8754a49:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8754a4c:	39 50 14             	cmp    %edx,0x14(%eax)
 8754a4f:	7f 1f                	jg     8754a70 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x240>
 8754a51:	0f 84 95 01 00 00    	je     8754bec <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x3bc>
 8754a57:	80 be 70 04 00 00 00 	cmpb   $0x0,0x470(%esi)
 8754a5e:	0f 85 1b 01 00 00    	jne    8754b7f <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x34f>
 8754a64:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8754a68:	75 3c                	jne    8754aa6 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x276>
 8754a6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754a70:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8754a73:	8d 86 50 04 00 00    	lea    0x450(%esi),%eax
 8754a79:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8754a7c:	89 04 24             	mov    %eax,(%esp)
 8754a7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8754a83:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8754a87:	e8 14 8e 92 ff       	call   807d8a0 <memcpy@plt>
 8754a8c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8754a8f:	c6 84 06 50 04 00 00 	movb   $0x0,0x450(%esi,%eax,1)
 8754a96:	00 
 8754a97:	e9 dd fd ff ff       	jmp    8754879 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x49>
 8754a9c:	8b 46 04             	mov    0x4(%esi),%eax
 8754a9f:	c7 40 10 0d 04 00 00 	movl   $0x40d,0x10(%eax)
 8754aa6:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8754aa9:	8d 86 60 04 00 00    	lea    0x460(%esi),%eax
 8754aaf:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 8754ab2:	89 04 24             	mov    %eax,(%esp)
 8754ab5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8754ab9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8754abd:	e8 de 8d 92 ff       	call   807d8a0 <memcpy@plt>
 8754ac2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8754ac5:	c6 84 06 60 04 00 00 	movb   $0x0,0x460(%esi,%eax,1)
 8754acc:	00 
 8754acd:	e9 a7 fd ff ff       	jmp    8754879 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x49>
 8754ad2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754ad8:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8754adb:	39 50 14             	cmp    %edx,0x14(%eax)
 8754ade:	0f 8f 73 ff ff ff    	jg     8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754ae4:	75 c0                	jne    8754aa6 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x276>
 8754ae6:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8754ae9:	39 50 10             	cmp    %edx,0x10(%eax)
 8754aec:	0f 8f 65 ff ff ff    	jg     8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754af2:	75 b2                	jne    8754aa6 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x276>
 8754af4:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8754af7:	39 50 0c             	cmp    %edx,0xc(%eax)
 8754afa:	0f 8f 57 ff ff ff    	jg     8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754b00:	75 a4                	jne    8754aa6 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x276>
 8754b02:	8b 50 08             	mov    0x8(%eax),%edx
 8754b05:	3b 55 b0             	cmp    -0x50(%ebp),%edx
 8754b08:	0f 8f 49 ff ff ff    	jg     8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754b0e:	66 90                	xchg   %ax,%ax
 8754b10:	75 94                	jne    8754aa6 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x276>
 8754b12:	8b 40 04             	mov    0x4(%eax),%eax
 8754b15:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 8754b18:	7e 8c                	jle    8754aa6 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x276>
 8754b1a:	e9 38 ff ff ff       	jmp    8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754b1f:	90                   	nop
 8754b20:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8754b24:	83 e8 30             	sub    $0x30,%eax
 8754b27:	83 f8 04             	cmp    $0x4,%eax
 8754b2a:	76 6d                	jbe    8754b99 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x369>
 8754b2c:	8d 55 df             	lea    -0x21(%ebp),%edx
 8754b2f:	8d 4d de             	lea    -0x22(%ebp),%ecx
 8754b32:	8d 45 dd             	lea    -0x23(%ebp),%eax
 8754b35:	89 55 a0             	mov    %edx,-0x60(%ebp)
 8754b38:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8754b3b:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 8754b3e:	8d 4d db             	lea    -0x25(%ebp),%ecx
 8754b41:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8754b44:	8d 45 da             	lea    -0x26(%ebp),%eax
 8754b47:	89 55 90             	mov    %edx,-0x70(%ebp)
 8754b4a:	8d 55 d9             	lea    -0x27(%ebp),%edx
 8754b4d:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 8754b50:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8754b53:	89 45 88             	mov    %eax,-0x78(%ebp)
 8754b56:	8d 45 d7             	lea    -0x29(%ebp),%eax
 8754b59:	89 55 84             	mov    %edx,-0x7c(%ebp)
 8754b5c:	8d 7d d6             	lea    -0x2a(%ebp),%edi
 8754b5f:	89 4d 80             	mov    %ecx,-0x80(%ebp)
 8754b62:	8d 55 d5             	lea    -0x2b(%ebp),%edx
 8754b65:	b9 6c 07 00 00       	mov    $0x76c,%ecx
 8754b6a:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8754b70:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8754b73:	c7 45 bc 6c 07 00 00 	movl   $0x76c,-0x44(%ebp)
 8754b7a:	e9 f0 fd ff ff       	jmp    875496f <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x13f>
 8754b7f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8754b82:	85 c9                	test   %ecx,%ecx
 8754b84:	0f 85 12 ff ff ff    	jne    8754a9c <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x26c>
 8754b8a:	8b 46 04             	mov    0x4(%esi),%eax
 8754b8d:	c7 40 10 0c 04 00 00 	movl   $0x40c,0x10(%eax)
 8754b94:	e9 d7 fe ff ff       	jmp    8754a70 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x240>
 8754b99:	8d 55 df             	lea    -0x21(%ebp),%edx
 8754b9c:	8d 4d de             	lea    -0x22(%ebp),%ecx
 8754b9f:	8d 45 dd             	lea    -0x23(%ebp),%eax
 8754ba2:	89 55 a0             	mov    %edx,-0x60(%ebp)
 8754ba5:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8754ba8:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 8754bab:	8d 4d db             	lea    -0x25(%ebp),%ecx
 8754bae:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8754bb1:	8d 45 da             	lea    -0x26(%ebp),%eax
 8754bb4:	89 55 90             	mov    %edx,-0x70(%ebp)
 8754bb7:	8d 55 d9             	lea    -0x27(%ebp),%edx
 8754bba:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 8754bbd:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8754bc0:	89 45 88             	mov    %eax,-0x78(%ebp)
 8754bc3:	8d 45 d7             	lea    -0x29(%ebp),%eax
 8754bc6:	89 55 84             	mov    %edx,-0x7c(%ebp)
 8754bc9:	8d 7d d6             	lea    -0x2a(%ebp),%edi
 8754bcc:	89 4d 80             	mov    %ecx,-0x80(%ebp)
 8754bcf:	8d 55 d5             	lea    -0x2b(%ebp),%edx
 8754bd2:	b9 d0 07 00 00       	mov    $0x7d0,%ecx
 8754bd7:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8754bdd:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8754be0:	c7 45 bc d0 07 00 00 	movl   $0x7d0,-0x44(%ebp)
 8754be7:	e9 83 fd ff ff       	jmp    875496f <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x13f>
 8754bec:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8754bef:	39 50 10             	cmp    %edx,0x10(%eax)
 8754bf2:	0f 8f 78 fe ff ff    	jg     8754a70 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x240>
 8754bf8:	0f 85 59 fe ff ff    	jne    8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754bfe:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8754c01:	39 50 0c             	cmp    %edx,0xc(%eax)
 8754c04:	0f 8f 66 fe ff ff    	jg     8754a70 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x240>
 8754c0a:	0f 85 47 fe ff ff    	jne    8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754c10:	8b 50 08             	mov    0x8(%eax),%edx
 8754c13:	3b 55 b0             	cmp    -0x50(%ebp),%edx
 8754c16:	0f 8f 54 fe ff ff    	jg     8754a70 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x240>
 8754c1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8754c20:	0f 85 31 fe ff ff    	jne    8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754c26:	8b 40 04             	mov    0x4(%eax),%eax
 8754c29:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 8754c2c:	0f 8e 25 fe ff ff    	jle    8754a57 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x227>
 8754c32:	e9 39 fe ff ff       	jmp    8754a70 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE+0x240>
 8754c37:	90                   	nop
 8754c38:	90                   	nop
 8754c39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::CertDecoder::GetDate @ 0x8754830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetDate(TaoCrypt::CertDecoder::DateType) */

void __thiscall TaoCrypt::CertDecoder::GetDate(CertDecoder *this,int param_2)

{
  char cVar1;
  Source *pSVar2;
  size_t __n;
  byte *pbVar3;
  tm *ptVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  byte bVar9;
  byte *local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  byte *local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_64;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23 [3];
  time_t local_20 [4];
  
  bVar9 = 0;
  pSVar2 = *(Source **)(this + 4);
  if (*(int *)(pSVar2 + 0x10) != 0) {
    return;
  }
  iVar5 = *(int *)(pSVar2 + 0xc);
  *(int *)(pSVar2 + 0xc) = iVar5 + 1;
  cVar1 = *(char *)(*(int *)(pSVar2 + 4) + iVar5);
  if (1 < (byte)(cVar1 - 0x17U)) {
    *(undefined4 *)(pSVar2 + 0x10) = 0x406;
    return;
  }
  __n = GetLength(pSVar2);
  if (3 < __n - 0xd) {
    *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x407;
    return;
  }
  memcpy(&local_30,(void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),
         __n);
  *(int *)(*(int *)(this + 4) + 0xc) = *(int *)(*(int *)(this + 4) + 0xc) + __n;
  piVar7 = &local_5c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
  }
  if (cVar1 == '\x17') {
    pbVar3 = &local_30;
    if (local_30 - 0x30 < 5) {
      local_64 = &local_25;
      local_6c = &local_26;
      local_70 = &local_27;
      local_74 = &local_28;
      local_78 = &local_29;
      local_7c = &local_2a;
      local_80 = &local_2b;
      local_84 = &local_2c;
      local_88 = &local_2d;
      pbVar8 = &local_2e;
      pbVar6 = &local_2f;
      local_48 = 2000;
    }
    else {
      local_64 = &local_25;
      local_6c = &local_26;
      local_70 = &local_27;
      local_74 = &local_28;
      local_78 = &local_29;
      local_7c = &local_2a;
      local_80 = &local_2b;
      local_84 = &local_2c;
      local_88 = &local_2d;
      pbVar8 = &local_2e;
      pbVar6 = &local_2f;
      local_48 = 0x76c;
    }
  }
  else {
    local_64 = local_23;
    pbVar8 = &local_2c;
    local_70 = &local_25;
    local_78 = &local_27;
    local_80 = &local_29;
    local_88 = &local_2b;
    pbVar6 = &local_2d;
    local_6c = &local_24;
    local_48 = (local_30 - 0x30) * 1000 + (local_2f - 0x30) * 100 + local_48;
    local_74 = &local_26;
    local_7c = &local_28;
    local_84 = &local_2a;
    pbVar3 = &local_2e;
  }
  local_48 = local_48 + ((uint)*pbVar3 * 5 + -0xf0) * 2 + -0x79c + (uint)*pbVar6;
  local_4c = ((uint)*pbVar8 * 5 + -0xf0) * 2 + local_4c + -0x31 + (uint)*local_88;
  local_50 = ((uint)*local_84 * 5 + -0xf0) * 2 + local_50 + -0x30 + (uint)*local_80;
  local_54 = ((uint)*local_7c * 5 + -0xf0) * 2 + local_54 + -0x30 + (uint)*local_78;
  local_58 = ((uint)*local_74 * 5 + -0xf0) * 2 + local_58 + -0x30 + (uint)*local_70;
  local_5c = ((uint)*local_6c * 5 + -0xf0) * 2 + local_5c + -0x30 + (uint)*local_64;
  local_20[0] = time((time_t *)0x0);
  ptVar4 = gmtime(local_20);
  if (param_2 == 0) {
    iVar5 = ptVar4->tm_year;
    if ((iVar5 != local_48 && local_48 <= iVar5) ||
       ((iVar5 == local_48 &&
        ((local_4c < ptVar4->tm_mon ||
         ((ptVar4->tm_mon == local_4c &&
          ((local_50 < ptVar4->tm_mday ||
           ((ptVar4->tm_mday == local_50 &&
            ((local_54 < ptVar4->tm_hour ||
             ((ptVar4->tm_hour == local_54 && (local_58 < ptVar4->tm_min))))))))))))))))
    goto LAB_08754a70;
  }
  else if ((ptVar4->tm_year <= local_48) &&
          ((ptVar4->tm_year != local_48 ||
           ((ptVar4->tm_mon <= local_4c &&
            ((ptVar4->tm_mon != local_4c ||
             ((ptVar4->tm_mday <= local_50 &&
              ((ptVar4->tm_mday != local_50 ||
               ((ptVar4->tm_hour <= local_54 &&
                ((ptVar4->tm_hour != local_54 || (ptVar4->tm_min <= local_58))))))))))))))))
  goto LAB_08754aa6;
  if (this[0x470] == (CertDecoder)0x0) {
    if (param_2 == 0) {
LAB_08754a70:
      memcpy(this + 0x450,&local_30,__n);
      this[__n + 0x450] = (CertDecoder)0x0;
      return;
    }
  }
  else {
    if (param_2 == 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x40c;
      goto LAB_08754a70;
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x40d;
  }
LAB_08754aa6:
  memcpy(this + 0x460,&local_30,__n);
  this[__n + 0x460] = (CertDecoder)0x0;
  return;
}

```

---

## GetDigest

```asm
// === 08753ce0 TaoCrypt::CertDecoder::GetDigest  [0x08753ce0-0x8753d7f] ===
 8753ce0:	55                   	push   %ebp
 8753ce1:	31 c0                	xor    %eax,%eax
 8753ce3:	89 e5                	mov    %esp,%ebp
 8753ce5:	83 ec 18             	sub    $0x18,%esp
 8753ce8:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753ceb:	8b 75 08             	mov    0x8(%ebp),%esi
 8753cee:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753cf1:	e8 02 f1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753cf6:	81 c3 a2 8e c1 00    	add    $0xc18ea2,%ebx
 8753cfc:	8b 56 04             	mov    0x4(%esi),%edx
 8753cff:	8b 4a 10             	mov    0x10(%edx),%ecx
 8753d02:	85 c9                	test   %ecx,%ecx
 8753d04:	75 1b                	jne    8753d21 <_ZN8TaoCrypt11CertDecoder9GetDigestEv+0x41>
 8753d06:	8b 42 0c             	mov    0xc(%edx),%eax
 8753d09:	8d 48 01             	lea    0x1(%eax),%ecx
 8753d0c:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8753d0f:	8b 4a 04             	mov    0x4(%edx),%ecx
 8753d12:	80 3c 01 04          	cmpb   $0x4,(%ecx,%eax,1)
 8753d16:	74 18                	je     8753d30 <_ZN8TaoCrypt11CertDecoder9GetDigestEv+0x50>
 8753d18:	c7 42 10 05 04 00 00 	movl   $0x405,0x10(%edx)
 8753d1f:	31 c0                	xor    %eax,%eax
 8753d21:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753d24:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753d27:	89 ec                	mov    %ebp,%esp
 8753d29:	5d                   	pop    %ebp
 8753d2a:	c3                   	ret
 8753d2b:	90                   	nop
 8753d2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753d30:	89 14 24             	mov    %edx,(%esp)
 8753d33:	e8 c8 f9 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8753d38:	89 46 18             	mov    %eax,0x18(%esi)
 8753d3b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753d40:	8b 46 18             	mov    0x18(%esi),%eax
 8753d43:	89 04 24             	mov    %eax,(%esp)
 8753d46:	e8 45 3a 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8753d4b:	8b 4e 04             	mov    0x4(%esi),%ecx
 8753d4e:	89 46 4c             	mov    %eax,0x4c(%esi)
 8753d51:	8b 51 04             	mov    0x4(%ecx),%edx
 8753d54:	03 51 0c             	add    0xc(%ecx),%edx
 8753d57:	8b 4e 18             	mov    0x18(%esi),%ecx
 8753d5a:	89 04 24             	mov    %eax,(%esp)
 8753d5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8753d61:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8753d65:	e8 36 9b 92 ff       	call   807d8a0 <memcpy@plt>
 8753d6a:	8b 46 04             	mov    0x4(%esi),%eax
 8753d6d:	8b 56 18             	mov    0x18(%esi),%edx
 8753d70:	01 50 0c             	add    %edx,0xc(%eax)
 8753d73:	8b 46 18             	mov    0x18(%esi),%eax
 8753d76:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753d79:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753d7c:	89 ec                	mov    %ebp,%esp
 8753d7e:	5d                   	pop    %ebp
 8753d7f:	c3                   	ret

```

```c
// TaoCrypt::CertDecoder::GetDigest @ 0x8753ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetDigest() */

undefined4 __thiscall TaoCrypt::CertDecoder::GetDigest(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  undefined4 uVar3;
  void *__dest;
  uint in_stack_ffffffe8;
  
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '\x04') {
      uVar3 = GetLength(pSVar1);
      *(undefined4 *)(this + 0x18) = uVar3;
      __dest = operator_new__(*(undefined4 *)(this + 0x18),in_stack_ffffffe8 & 0xffffff00);
      *(void **)(this + 0x4c) = __dest;
      memcpy(__dest,(void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),
             *(size_t *)(this + 0x18));
      *(int *)(*(int *)(this + 4) + 0xc) =
           *(int *)(*(int *)(this + 4) + 0xc) + *(int *)(this + 0x18);
      return *(undefined4 *)(this + 0x18);
    }
    *(undefined4 *)(pSVar1 + 0x10) = 0x405;
  }
  return 0;
}

```

---

## GetKey

```asm
// === 087543d0 TaoCrypt::CertDecoder::GetKey  [0x087543d0-0x875449f] ===
 87543d0:	55                   	push   %ebp
 87543d1:	89 e5                	mov    %esp,%ebp
 87543d3:	83 ec 28             	sub    $0x28,%esp
 87543d6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87543d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87543dc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87543df:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87543e2:	e8 11 ea fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87543e7:	81 c3 b1 87 c1 00    	add    $0xc187b1,%ebx
 87543ed:	8b 46 04             	mov    0x4(%esi),%eax
 87543f0:	8b 48 10             	mov    0x10(%eax),%ecx
 87543f3:	85 c9                	test   %ecx,%ecx
 87543f5:	74 11                	je     8754408 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x38>
 87543f7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87543fa:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87543fd:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8754400:	89 ec                	mov    %ebp,%esp
 8754402:	5d                   	pop    %ebp
 8754403:	c3                   	ret
 8754404:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8754408:	89 34 24             	mov    %esi,(%esp)
 875440b:	e8 80 f3 ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8754410:	89 34 24             	mov    %esi,(%esp)
 8754413:	e8 18 f6 ff ff       	call   8753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>
 8754418:	3d 85 02 00 00       	cmp    $0x285,%eax
 875441d:	89 46 20             	mov    %eax,0x20(%esi)
 8754420:	74 56                	je     8754478 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0xa8>
 8754422:	3d 03 02 00 00       	cmp    $0x203,%eax
 8754427:	74 2e                	je     8754457 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x87>
 8754429:	8b 46 04             	mov    0x4(%esi),%eax
 875442c:	c7 40 10 01 04 00 00 	movl   $0x401,0x10(%eax)
 8754433:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8754436:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8754439:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875443c:	89 ec                	mov    %ebp,%esp
 875443e:	5d                   	pop    %ebp
 875443f:	c3                   	ret
 8754440:	83 40 0c 01          	addl   $0x1,0xc(%eax)
 8754444:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8754448:	8b 50 0c             	mov    0xc(%eax),%edx
 875444b:	8d 4a 01             	lea    0x1(%edx),%ecx
 875444e:	89 48 0c             	mov    %ecx,0xc(%eax)
 8754451:	80 3c 17 00          	cmpb   $0x0,(%edi,%edx,1)
 8754455:	75 f1                	jne    8754448 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x78>
 8754457:	89 34 24             	mov    %esi,(%esp)
 875445a:	e8 31 fa ff ff       	call   8753e90 <_ZN8TaoCrypt11CertDecoder8StoreKeyEv>
 875445f:	81 7e 20 03 02 00 00 	cmpl   $0x203,0x20(%esi)
 8754466:	75 8f                	jne    87543f7 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x27>
 8754468:	89 34 24             	mov    %esi,(%esp)
 875446b:	e8 a0 fe ff ff       	call   8754310 <_ZN8TaoCrypt11CertDecoder6AddDSAEv>
 8754470:	eb 85                	jmp    87543f7 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x27>
 8754472:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754478:	8b 46 04             	mov    0x4(%esi),%eax
 875447b:	8b 50 0c             	mov    0xc(%eax),%edx
 875447e:	8b 78 04             	mov    0x4(%eax),%edi
 8754481:	8d 4a 01             	lea    0x1(%edx),%ecx
 8754484:	89 48 0c             	mov    %ecx,0xc(%eax)
 8754487:	80 3c 17 03          	cmpb   $0x3,(%edi,%edx,1)
 875448b:	74 b3                	je     8754440 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x70>
 875448d:	c7 40 10 00 04 00 00 	movl   $0x400,0x10(%eax)
 8754494:	e9 5e ff ff ff       	jmp    87543f7 <_ZN8TaoCrypt11CertDecoder6GetKeyEv+0x27>
 8754499:	90                   	nop
 875449a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::CertDecoder::GetKey @ 0x87543d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetKey() */

void __thiscall TaoCrypt::CertDecoder::GetKey(CertDecoder *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    iVar2 = GetAlgoId(this);
    *(int *)(this + 0x20) = iVar2;
    if (iVar2 == 0x285) {
      iVar2 = *(int *)(this + 4);
      iVar1 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar1 + 1;
      if (*(char *)(*(int *)(iVar2 + 4) + iVar1) != '\x03') {
        *(undefined4 *)(iVar2 + 0x10) = 0x400;
        return;
      }
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      do {
        iVar1 = *(int *)(iVar2 + 0xc);
        *(int *)(iVar2 + 0xc) = iVar1 + 1;
      } while (*(char *)(*(int *)(iVar2 + 4) + iVar1) != '\0');
    }
    else if (iVar2 != 0x203) {
      *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x401;
      return;
    }
    StoreKey(this);
    if (*(int *)(this + 0x20) == 0x203) {
      AddDSA(this);
    }
  }
  return;
}

```

---

## GetName

```asm
// === 08754ca0 TaoCrypt::CertDecoder::GetName  [0x08754ca0-0x87550af] ===
 8754ca0:	55                   	push   %ebp
 8754ca1:	89 e5                	mov    %esp,%ebp
 8754ca3:	57                   	push   %edi
 8754ca4:	56                   	push   %esi
 8754ca5:	53                   	push   %ebx
 8754ca6:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 8754cac:	8b 75 08             	mov    0x8(%ebp),%esi
 8754caf:	e8 44 e1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8754cb4:	81 c3 e4 7e c1 00    	add    $0xc17ee4,%ebx
 8754cba:	8b 46 04             	mov    0x4(%esi),%eax
 8754cbd:	8b 40 10             	mov    0x10(%eax),%eax
 8754cc0:	85 c0                	test   %eax,%eax
 8754cc2:	74 0c                	je     8754cd0 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30>
 8754cc4:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 8754cca:	5b                   	pop    %ebx
 8754ccb:	5e                   	pop    %esi
 8754ccc:	5f                   	pop    %edi
 8754ccd:	5d                   	pop    %ebp
 8754cce:	c3                   	ret
 8754ccf:	90                   	nop
 8754cd0:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8754cd6:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8754cdc:	89 04 24             	mov    %eax,(%esp)
 8754cdf:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8754ce6:	00 
 8754ce7:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8754cee:	00 
 8754cef:	e8 dc 3e 00 00       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8754cf4:	8b 83 f4 ff ff ff    	mov    -0xc(%ebx),%eax
 8754cfa:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8754d00:	83 c0 08             	add    $0x8,%eax
 8754d03:	89 14 24             	mov    %edx,(%esp)
 8754d06:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8754d0c:	e8 9f 36 01 00       	call   87683b0 <_ZN8TaoCrypt3SHA4InitEv>
 8754d11:	89 34 24             	mov    %esi,(%esp)
 8754d14:	e8 77 ea ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8754d19:	8b 56 04             	mov    0x4(%esi),%edx
 8754d1c:	8d 4e 50             	lea    0x50(%esi),%ecx
 8754d1f:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8754d22:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 8754d29:	00 00 00 
 8754d2c:	8b 52 0c             	mov    0xc(%edx),%edx
 8754d2f:	01 d0                	add    %edx,%eax
 8754d31:	85 ff                	test   %edi,%edi
 8754d33:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8754d39:	8d 86 50 02 00 00    	lea    0x250(%esi),%eax
 8754d3f:	0f 44 c1             	cmove  %ecx,%eax
 8754d42:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8754d48:	eb 2f                	jmp    8754d79 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0xd9>
 8754d4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754d50:	80 f9 2a             	cmp    $0x2a,%cl
 8754d53:	0f 84 27 01 00 00    	je     8754e80 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x1e0>
 8754d59:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 8754d5f:	8d 44 0f 01          	lea    0x1(%edi,%ecx,1),%eax
 8754d63:	89 42 0c             	mov    %eax,0xc(%edx)
 8754d66:	89 14 24             	mov    %edx,(%esp)
 8754d69:	e8 92 e9 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8754d6e:	89 c7                	mov    %eax,%edi
 8754d70:	8b 56 04             	mov    0x4(%esi),%edx
 8754d73:	01 7a 0c             	add    %edi,0xc(%edx)
 8754d76:	8b 52 0c             	mov    0xc(%edx),%edx
 8754d79:	39 95 70 ff ff ff    	cmp    %edx,-0x90(%ebp)
 8754d7f:	0f 86 9b 01 00 00    	jbe    8754f20 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x280>
 8754d85:	89 34 24             	mov    %esi,(%esp)
 8754d88:	e8 63 ea ff ff       	call   87537f0 <_ZN8TaoCrypt11BER_Decoder6GetSetEv>
 8754d8d:	89 34 24             	mov    %esi,(%esp)
 8754d90:	e8 fb e9 ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8754d95:	8b 46 04             	mov    0x4(%esi),%eax
 8754d98:	8b 50 0c             	mov    0xc(%eax),%edx
 8754d9b:	8d 4a 01             	lea    0x1(%edx),%ecx
 8754d9e:	89 48 0c             	mov    %ecx,0xc(%eax)
 8754da1:	8b 48 04             	mov    0x4(%eax),%ecx
 8754da4:	80 3c 11 06          	cmpb   $0x6,(%ecx,%edx,1)
 8754da8:	0f 85 aa 01 00 00    	jne    8754f58 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x2b8>
 8754dae:	89 04 24             	mov    %eax,(%esp)
 8754db1:	e8 4a e9 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8754db6:	8b 56 04             	mov    0x4(%esi),%edx
 8754db9:	8b 7a 0c             	mov    0xc(%edx),%edi
 8754dbc:	8b 4a 04             	mov    0x4(%edx),%ecx
 8754dbf:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8754dc5:	01 f9                	add    %edi,%ecx
 8754dc7:	0f b6 41 01          	movzbl 0x1(%ecx),%eax
 8754dcb:	88 85 74 ff ff ff    	mov    %al,-0x8c(%ebp)
 8754dd1:	0f b6 09             	movzbl (%ecx),%ecx
 8754dd4:	80 f9 55             	cmp    $0x55,%cl
 8754dd7:	0f 85 73 ff ff ff    	jne    8754d50 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0xb0>
 8754ddd:	3c 04                	cmp    $0x4,%al
 8754ddf:	0f 85 74 ff ff ff    	jne    8754d59 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0xb9>
 8754de5:	8d 47 03             	lea    0x3(%edi),%eax
 8754de8:	89 42 0c             	mov    %eax,0xc(%edx)
 8754deb:	8b 42 04             	mov    0x4(%edx),%eax
 8754dee:	0f b6 4c 38 02       	movzbl 0x2(%eax,%edi,1),%ecx
 8754df3:	83 42 0c 01          	addl   $0x1,0xc(%edx)
 8754df7:	89 14 24             	mov    %edx,(%esp)
 8754dfa:	88 8d 60 ff ff ff    	mov    %cl,-0xa0(%ebp)
 8754e00:	e8 fb e8 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8754e05:	0f b6 8d 60 ff ff ff 	movzbl -0xa0(%ebp),%ecx
 8754e0c:	80 f9 03             	cmp    $0x3,%cl
 8754e0f:	89 c7                	mov    %eax,%edi
 8754e11:	0f 84 79 01 00 00    	je     8754f90 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x2f0>
 8754e17:	80 f9 04             	cmp    $0x4,%cl
 8754e1a:	0f 84 d2 01 00 00    	je     8754ff2 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x352>
 8754e20:	80 f9 06             	cmp    $0x6,%cl
 8754e23:	0f 84 e3 01 00 00    	je     875500c <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x36c>
 8754e29:	80 f9 07             	cmp    $0x7,%cl
 8754e2c:	0f 84 fa 01 00 00    	je     875502c <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x38c>
 8754e32:	80 f9 08             	cmp    $0x8,%cl
 8754e35:	0f 84 14 02 00 00    	je     875504f <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x3af>
 8754e3b:	80 f9 0a             	cmp    $0xa,%cl
 8754e3e:	66 90                	xchg   %ax,%ax
 8754e40:	0f 84 26 02 00 00    	je     875506c <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x3cc>
 8754e46:	80 f9 0b             	cmp    $0xb,%cl
 8754e49:	0f 84 40 02 00 00    	je     875508f <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x3ef>
 8754e4f:	8b 56 04             	mov    0x4(%esi),%edx
 8754e52:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8754e56:	8b 42 04             	mov    0x4(%edx),%eax
 8754e59:	03 42 0c             	add    0xc(%edx),%eax
 8754e5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8754e60:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8754e66:	89 04 24             	mov    %eax,(%esp)
 8754e69:	e8 f2 ad 01 00       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 8754e6e:	8b 56 04             	mov    0x4(%esi),%edx
 8754e71:	01 7a 0c             	add    %edi,0xc(%edx)
 8754e74:	e9 fd fe ff ff       	jmp    8754d76 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0xd6>
 8754e79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8754e80:	80 bd 74 ff ff ff 86 	cmpb   $0x86,-0x8c(%ebp)
 8754e87:	0f 85 cc fe ff ff    	jne    8754d59 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0xb9>
 8754e8d:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 8754e93:	8d 44 0f 01          	lea    0x1(%edi,%ecx,1),%eax
 8754e97:	89 42 0c             	mov    %eax,0xc(%edx)
 8754e9a:	89 14 24             	mov    %edx,(%esp)
 8754e9d:	e8 5e e8 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8754ea2:	89 c7                	mov    %eax,%edi
 8754ea4:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8754eaa:	03 85 68 ff ff ff    	add    -0x98(%ebp),%eax
 8754eb0:	c7 00 2f 65 6d 61    	movl   $0x616d652f,(%eax)
 8754eb6:	c7 40 04 69 6c 41 64 	movl   $0x64416c69,0x4(%eax)
 8754ebd:	c7 40 08 64 72 65 73 	movl   $0x73657264,0x8(%eax)
 8754ec4:	66 c7 40 0c 73 3d    	movw   $0x3d73,0xc(%eax)
 8754eca:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8754ed0:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8754ed6:	8b 4e 04             	mov    0x4(%esi),%ecx
 8754ed9:	83 c2 0e             	add    $0xe,%edx
 8754edc:	01 d0                	add    %edx,%eax
 8754ede:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8754ee4:	8b 41 04             	mov    0x4(%ecx),%eax
 8754ee7:	03 41 0c             	add    0xc(%ecx),%eax
 8754eea:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 8754ef0:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 8754ef6:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8754efa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8754efe:	89 0c 24             	mov    %ecx,(%esp)
 8754f01:	e8 9a 89 92 ff       	call   807d8a0 <memcpy@plt>
 8754f06:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 8754f0c:	8d 14 17             	lea    (%edi,%edx,1),%edx
 8754f0f:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 8754f15:	e9 56 fe ff ff       	jmp    8754d70 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0xd0>
 8754f1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754f20:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8754f26:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8754f2c:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 8754f30:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8754f33:	85 ff                	test   %edi,%edi
 8754f35:	75 39                	jne    8754f70 <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x2d0>
 8754f37:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 8754f3d:	83 c6 38             	add    $0x38,%esi
 8754f40:	89 74 24 04          	mov    %esi,0x4(%esp)
 8754f44:	89 0c 24             	mov    %ecx,(%esp)
 8754f47:	e8 44 3e 00 00       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8754f4c:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 8754f52:	5b                   	pop    %ebx
 8754f53:	5e                   	pop    %esi
 8754f54:	5f                   	pop    %edi
 8754f55:	5d                   	pop    %ebp
 8754f56:	c3                   	ret
 8754f57:	90                   	nop
 8754f58:	c7 40 10 02 04 00 00 	movl   $0x402,0x10(%eax)
 8754f5f:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 8754f65:	5b                   	pop    %ebx
 8754f66:	5e                   	pop    %esi
 8754f67:	5f                   	pop    %edi
 8754f68:	5d                   	pop    %ebp
 8754f69:	c3                   	ret
 8754f6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8754f70:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8754f76:	83 c6 24             	add    $0x24,%esi
 8754f79:	89 74 24 04          	mov    %esi,0x4(%esp)
 8754f7d:	89 04 24             	mov    %eax,(%esp)
 8754f80:	e8 0b 3e 00 00       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8754f85:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 8754f8b:	5b                   	pop    %ebx
 8754f8c:	5e                   	pop    %esi
 8754f8d:	5f                   	pop    %edi
 8754f8e:	5d                   	pop    %ebp
 8754f8f:	c3                   	ret
 8754f90:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8754f96:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 8754f9c:	c7 04 11 2f 43 4e 3d 	movl   $0x3d4e432f,(%ecx,%edx,1)
 8754fa3:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8754fa9:	83 c2 04             	add    $0x4,%edx
 8754fac:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8754fb2:	8b 4e 04             	mov    0x4(%esi),%ecx
 8754fb5:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 8754fbb:	01 d0                	add    %edx,%eax
 8754fbd:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8754fc3:	8b 41 04             	mov    0x4(%ecx),%eax
 8754fc6:	03 41 0c             	add    0xc(%ecx),%eax
 8754fc9:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 8754fcf:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8754fd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8754fd7:	89 0c 24             	mov    %ecx,(%esp)
 8754fda:	e8 c1 88 92 ff       	call   807d8a0 <memcpy@plt>
 8754fdf:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 8754fe5:	01 fa                	add    %edi,%edx
 8754fe7:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 8754fed:	e9 5d fe ff ff       	jmp    8754e4f <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x1af>
 8754ff2:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8754ff8:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8754ffe:	c7 04 02 2f 53 4e 3d 	movl   $0x3d4e532f,(%edx,%eax,1)
 8755005:	89 c2                	mov    %eax,%edx
 8755007:	83 c2 04             	add    $0x4,%edx
 875500a:	eb a0                	jmp    8754fac <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30c>
 875500c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8755012:	03 85 68 ff ff ff    	add    -0x98(%ebp),%eax
 8755018:	66 c7 00 2f 43       	movw   $0x432f,(%eax)
 875501d:	c6 40 02 3d          	movb   $0x3d,0x2(%eax)
 8755021:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8755027:	83 c2 03             	add    $0x3,%edx
 875502a:	eb 80                	jmp    8754fac <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30c>
 875502c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8755032:	03 85 68 ff ff ff    	add    -0x98(%ebp),%eax
 8755038:	66 c7 00 2f 4c       	movw   $0x4c2f,(%eax)
 875503d:	c6 40 02 3d          	movb   $0x3d,0x2(%eax)
 8755041:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8755047:	83 c2 03             	add    $0x3,%edx
 875504a:	e9 5d ff ff ff       	jmp    8754fac <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30c>
 875504f:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 8755055:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 875505b:	89 ca                	mov    %ecx,%edx
 875505d:	c7 04 08 2f 53 54 3d 	movl   $0x3d54532f,(%eax,%ecx,1)
 8755064:	83 c2 04             	add    $0x4,%edx
 8755067:	e9 40 ff ff ff       	jmp    8754fac <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30c>
 875506c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8755072:	03 85 68 ff ff ff    	add    -0x98(%ebp),%eax
 8755078:	66 c7 00 2f 4f       	movw   $0x4f2f,(%eax)
 875507d:	c6 40 02 3d          	movb   $0x3d,0x2(%eax)
 8755081:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8755087:	83 c2 03             	add    $0x3,%edx
 875508a:	e9 1d ff ff ff       	jmp    8754fac <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30c>
 875508f:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8755095:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 875509b:	c7 04 11 2f 4f 55 3d 	movl   $0x3d554f2f,(%ecx,%edx,1)
 87550a2:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 87550a8:	83 c2 04             	add    $0x4,%edx
 87550ab:	e9 fc fe ff ff       	jmp    8754fac <_ZN8TaoCrypt11CertDecoder7GetNameENS0_8NameTypeE+0x30c>

```

```c
// TaoCrypt::CertDecoder::GetName @ 0x8754ca0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetName(TaoCrypt::CertDecoder::NameType) */

void __thiscall TaoCrypt::CertDecoder::GetName(CertDecoder *this,int param_2)

{
  char cVar1;
  char cVar2;
  Source *pSVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  CertDecoder *pCVar6;
  int iVar7;
  uint uVar8;
  CertDecoder *pCVar9;
  int local_9c;
  undefined *local_8c [31];
  
  if (*(int *)(*(int *)(this + 4) + 0x10) != 0) {
    return;
  }
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)local_8c,5,0x40);
  local_8c[0] = PTR_vtable_0936cb8c + 8;
  SHA::Init((SHA *)local_8c);
  iVar4 = BER_Decoder::GetSequence((BER_Decoder *)this);
  local_9c = 0;
  uVar8 = *(uint *)(*(int *)(this + 4) + 0xc);
  uVar5 = iVar4 + uVar8;
  pCVar6 = this + 0x250;
  if (param_2 == 0) {
    pCVar6 = this + 0x50;
  }
  do {
    if (uVar5 <= uVar8) {
      pCVar6[local_9c] = (CertDecoder)0x0;
      if (param_2 != 0) {
        HASHwithTransform::Final((HASHwithTransform *)local_8c,(uchar *)(this + 0x24));
        return;
      }
      HASHwithTransform::Final((HASHwithTransform *)local_8c,(uchar *)(this + 0x38));
      return;
    }
    BER_Decoder::GetSet((BER_Decoder *)this);
    BER_Decoder::GetSequence((BER_Decoder *)this);
    pSVar3 = *(Source **)(this + 4);
    iVar4 = *(int *)(pSVar3 + 0xc);
    *(int *)(pSVar3 + 0xc) = iVar4 + 1;
    if (*(char *)(*(int *)(pSVar3 + 4) + iVar4) != '\x06') {
      *(undefined4 *)(pSVar3 + 0x10) = 0x402;
      return;
    }
    iVar7 = GetLength(pSVar3);
    pSVar3 = *(Source **)(this + 4);
    iVar4 = *(int *)(pSVar3 + 0xc);
    cVar1 = ((char *)(*(int *)(pSVar3 + 4) + iVar4))[1];
    cVar2 = *(char *)(*(int *)(pSVar3 + 4) + iVar4);
    if (cVar2 == 'U') {
      if (cVar1 != '\x04') {
LAB_08754d59:
        *(int *)(pSVar3 + 0xc) = iVar4 + 1 + iVar7;
        __n = GetLength(pSVar3);
        goto LAB_08754d70;
      }
      *(int *)(pSVar3 + 0xc) = iVar4 + 3;
      cVar1 = *(char *)(*(int *)(pSVar3 + 4) + 2 + iVar4);
      *(int *)(pSVar3 + 0xc) = *(int *)(pSVar3 + 0xc) + 1;
      uVar8 = GetLength(pSVar3);
      if (cVar1 == '\x03') {
        *(undefined4 *)(pCVar6 + local_9c) = 0x3d4e432f;
        local_9c = local_9c + 4;
LAB_08754fac:
        memcpy(pCVar6 + local_9c,
               (void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),uVar8
              );
        local_9c = local_9c + uVar8;
      }
      else {
        if (cVar1 == '\x04') {
          *(undefined4 *)(pCVar6 + local_9c) = 0x3d4e532f;
          local_9c = local_9c + 4;
          goto LAB_08754fac;
        }
        if (cVar1 == '\x06') {
          *(undefined2 *)(pCVar6 + local_9c) = 0x432f;
          (pCVar6 + local_9c)[2] = (CertDecoder)0x3d;
          local_9c = local_9c + 3;
          goto LAB_08754fac;
        }
        if (cVar1 == '\a') {
          *(undefined2 *)(pCVar6 + local_9c) = 0x4c2f;
          (pCVar6 + local_9c)[2] = (CertDecoder)0x3d;
          local_9c = local_9c + 3;
          goto LAB_08754fac;
        }
        if (cVar1 == '\b') {
          *(undefined4 *)(pCVar6 + local_9c) = 0x3d54532f;
          local_9c = local_9c + 4;
          goto LAB_08754fac;
        }
        if (cVar1 == '\n') {
          *(undefined2 *)(pCVar6 + local_9c) = 0x4f2f;
          (pCVar6 + local_9c)[2] = (CertDecoder)0x3d;
          local_9c = local_9c + 3;
          goto LAB_08754fac;
        }
        if (cVar1 == '\v') {
          *(undefined4 *)(pCVar6 + local_9c) = 0x3d554f2f;
          local_9c = local_9c + 4;
          goto LAB_08754fac;
        }
      }
      SHA::Update((SHA *)local_8c,
                  (uchar *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),
                  uVar8);
      iVar4 = *(int *)(this + 4);
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + uVar8;
    }
    else {
      if ((cVar2 != '*') || (cVar1 != -0x7a)) goto LAB_08754d59;
      *(int *)(pSVar3 + 0xc) = iVar4 + 1 + iVar7;
      __n = GetLength(pSVar3);
      pCVar9 = pCVar6 + local_9c;
      *(undefined4 *)pCVar9 = 0x616d652f;
      *(undefined4 *)(pCVar9 + 4) = 0x64416c69;
      *(undefined4 *)(pCVar9 + 8) = 0x73657264;
      *(undefined2 *)(pCVar9 + 0xc) = 0x3d73;
      memcpy(pCVar6 + local_9c + 0xe,
             (void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)),__n);
      local_9c = __n + local_9c + 0xe;
LAB_08754d70:
      iVar4 = *(int *)(this + 4);
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + __n;
    }
    uVar8 = *(uint *)(iVar4 + 0xc);
  } while( true );
}

```

---

## GetSignature

```asm
// === 08753d80 TaoCrypt::CertDecoder::GetSignature  [0x08753d80-0x8753e4f] ===
 8753d80:	55                   	push   %ebp
 8753d81:	31 c0                	xor    %eax,%eax
 8753d83:	89 e5                	mov    %esp,%ebp
 8753d85:	83 ec 18             	sub    $0x18,%esp
 8753d88:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753d8b:	8b 75 08             	mov    0x8(%ebp),%esi
 8753d8e:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753d91:	e8 62 f0 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753d96:	81 c3 02 8e c1 00    	add    $0xc18e02,%ebx
 8753d9c:	8b 56 04             	mov    0x4(%esi),%edx
 8753d9f:	8b 4a 10             	mov    0x10(%edx),%ecx
 8753da2:	85 c9                	test   %ecx,%ecx
 8753da4:	75 1b                	jne    8753dc1 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv+0x41>
 8753da6:	8b 42 0c             	mov    0xc(%edx),%eax
 8753da9:	8d 48 01             	lea    0x1(%eax),%ecx
 8753dac:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8753daf:	8b 4a 04             	mov    0x4(%edx),%ecx
 8753db2:	80 3c 01 03          	cmpb   $0x3,(%ecx,%eax,1)
 8753db6:	74 18                	je     8753dd0 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv+0x50>
 8753db8:	c7 42 10 00 04 00 00 	movl   $0x400,0x10(%edx)
 8753dbf:	31 c0                	xor    %eax,%eax
 8753dc1:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753dc4:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753dc7:	89 ec                	mov    %ebp,%esp
 8753dc9:	5d                   	pop    %ebp
 8753dca:	c3                   	ret
 8753dcb:	90                   	nop
 8753dcc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753dd0:	89 14 24             	mov    %edx,(%esp)
 8753dd3:	e8 28 f9 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8753dd8:	89 46 18             	mov    %eax,0x18(%esi)
 8753ddb:	8b 46 04             	mov    0x4(%esi),%eax
 8753dde:	8b 50 0c             	mov    0xc(%eax),%edx
 8753de1:	8d 4a 01             	lea    0x1(%edx),%ecx
 8753de4:	89 48 0c             	mov    %ecx,0xc(%eax)
 8753de7:	8b 48 04             	mov    0x4(%eax),%ecx
 8753dea:	80 3c 11 00          	cmpb   $0x0,(%ecx,%edx,1)
 8753dee:	74 10                	je     8753e00 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv+0x80>
 8753df0:	c7 40 10 04 04 00 00 	movl   $0x404,0x10(%eax)
 8753df7:	31 c0                	xor    %eax,%eax
 8753df9:	eb c6                	jmp    8753dc1 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv+0x41>
 8753dfb:	90                   	nop
 8753dfc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753e00:	83 6e 18 01          	subl   $0x1,0x18(%esi)
 8753e04:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753e09:	8b 46 18             	mov    0x18(%esi),%eax
 8753e0c:	89 04 24             	mov    %eax,(%esp)
 8753e0f:	e8 7c 39 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8753e14:	8b 4e 04             	mov    0x4(%esi),%ecx
 8753e17:	89 46 4c             	mov    %eax,0x4c(%esi)
 8753e1a:	8b 51 04             	mov    0x4(%ecx),%edx
 8753e1d:	03 51 0c             	add    0xc(%ecx),%edx
 8753e20:	8b 4e 18             	mov    0x18(%esi),%ecx
 8753e23:	89 04 24             	mov    %eax,(%esp)
 8753e26:	89 54 24 04          	mov    %edx,0x4(%esp)
 8753e2a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8753e2e:	e8 6d 9a 92 ff       	call   807d8a0 <memcpy@plt>
 8753e33:	8b 46 04             	mov    0x4(%esi),%eax
 8753e36:	8b 56 18             	mov    0x18(%esi),%edx
 8753e39:	01 50 0c             	add    %edx,0xc(%eax)
 8753e3c:	8b 46 18             	mov    0x18(%esi),%eax
 8753e3f:	eb 80                	jmp    8753dc1 <_ZN8TaoCrypt11CertDecoder12GetSignatureEv+0x41>
 8753e41:	90                   	nop
 8753e42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8753e49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::GetSignature @ 0x8753d80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetSignature() */

undefined4 __thiscall TaoCrypt::CertDecoder::GetSignature(CertDecoder *this)

{
  Source *pSVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *__dest;
  uint in_stack_ffffffe8;
  
  uVar4 = 0;
  pSVar1 = *(Source **)(this + 4);
  if (*(int *)(pSVar1 + 0x10) == 0) {
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) == '\x03') {
      uVar4 = GetLength(pSVar1);
      *(undefined4 *)(this + 0x18) = uVar4;
      iVar2 = *(int *)(this + 4);
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar3 + 1;
      if (*(char *)(*(int *)(iVar2 + 4) + iVar3) == '\0') {
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
        __dest = operator_new__(*(undefined4 *)(this + 0x18),in_stack_ffffffe8 & 0xffffff00);
        *(void **)(this + 0x4c) = __dest;
        memcpy(__dest,(void *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc)
                              ),*(size_t *)(this + 0x18));
        *(int *)(*(int *)(this + 4) + 0xc) =
             *(int *)(*(int *)(this + 4) + 0xc) + *(int *)(this + 0x18);
        uVar4 = *(undefined4 *)(this + 0x18);
      }
      else {
        *(undefined4 *)(iVar2 + 0x10) = 0x404;
        uVar4 = 0;
      }
    }
    else {
      *(undefined4 *)(pSVar1 + 0x10) = 0x400;
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## GetValidity

```asm
// === 08754c40 TaoCrypt::CertDecoder::GetValidity  [0x08754c40-0x8754c9f] ===
 8754c40:	55                   	push   %ebp
 8754c41:	89 e5                	mov    %esp,%ebp
 8754c43:	83 ec 18             	sub    $0x18,%esp
 8754c46:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8754c49:	8b 75 08             	mov    0x8(%ebp),%esi
 8754c4c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8754c4f:	e8 a4 e1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8754c54:	81 c3 44 7f c1 00    	add    $0xc17f44,%ebx
 8754c5a:	8b 46 04             	mov    0x4(%esi),%eax
 8754c5d:	8b 48 10             	mov    0x10(%eax),%ecx
 8754c60:	85 c9                	test   %ecx,%ecx
 8754c62:	75 28                	jne    8754c8c <_ZN8TaoCrypt11CertDecoder11GetValidityEv+0x4c>
 8754c64:	89 34 24             	mov    %esi,(%esp)
 8754c67:	e8 24 eb ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8754c6c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8754c73:	00 
 8754c74:	89 34 24             	mov    %esi,(%esp)
 8754c77:	e8 b4 fb ff ff       	call   8754830 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE>
 8754c7c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8754c83:	00 
 8754c84:	89 34 24             	mov    %esi,(%esp)
 8754c87:	e8 a4 fb ff ff       	call   8754830 <_ZN8TaoCrypt11CertDecoder7GetDateENS0_8DateTypeE>
 8754c8c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8754c8f:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8754c92:	89 ec                	mov    %ebp,%esp
 8754c94:	5d                   	pop    %ebp
 8754c95:	c3                   	ret
 8754c96:	8d 76 00             	lea    0x0(%esi),%esi
 8754c99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::GetValidity @ 0x8754c40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetValidity() */

void __thiscall TaoCrypt::CertDecoder::GetValidity(CertDecoder *this)

{
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    GetDate(this,0);
    GetDate(this,1);
  }
  return;
}

```

---

## ReadHeader

```asm
// === 08755570 TaoCrypt::CertDecoder::ReadHeader  [0x08755570-0x875561f] ===
 8755570:	55                   	push   %ebp
 8755571:	89 e5                	mov    %esp,%ebp
 8755573:	83 ec 38             	sub    $0x38,%esp
 8755576:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8755579:	8b 75 08             	mov    0x8(%ebp),%esi
 875557c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875557f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8755582:	e8 71 d8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8755587:	81 c3 11 76 c1 00    	add    $0xc17611,%ebx
 875558d:	8b 46 04             	mov    0x4(%esi),%eax
 8755590:	8b 50 10             	mov    0x10(%eax),%edx
 8755593:	85 d2                	test   %edx,%edx
 8755595:	75 6e                	jne    8755605 <_ZN8TaoCrypt11CertDecoder10ReadHeaderEv+0x95>
 8755597:	89 34 24             	mov    %esi,(%esp)
 875559a:	8d 7d d8             	lea    -0x28(%ebp),%edi
 875559d:	e8 ee e1 ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 87555a2:	8b 46 04             	mov    0x4(%esi),%eax
 87555a5:	8b 40 0c             	mov    0xc(%eax),%eax
 87555a8:	89 46 10             	mov    %eax,0x10(%esi)
 87555ab:	89 34 24             	mov    %esi,(%esp)
 87555ae:	e8 dd e1 ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 87555b3:	8b 56 04             	mov    0x4(%esi),%edx
 87555b6:	89 46 14             	mov    %eax,0x14(%esi)
 87555b9:	03 42 0c             	add    0xc(%edx),%eax
 87555bc:	89 46 14             	mov    %eax,0x14(%esi)
 87555bf:	89 34 24             	mov    %esi,(%esp)
 87555c2:	e8 f9 e2 ff ff       	call   87538c0 <_ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv>
 87555c7:	89 3c 24             	mov    %edi,(%esp)
 87555ca:	e8 c1 9f 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87555cf:	89 34 24             	mov    %esi,(%esp)
 87555d2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87555d6:	e8 c5 ee ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 87555db:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87555de:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87555e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87555e8:	00 
 87555e9:	c1 e0 02             	shl    $0x2,%eax
 87555ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 87555f0:	89 34 24             	mov    %esi,(%esp)
 87555f3:	e8 c8 86 92 ff       	call   807dcc0 <memset@plt>
 87555f8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87555fd:	89 34 24             	mov    %esi,(%esp)
 8755600:	e8 1b 21 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755605:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8755608:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875560b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875560e:	89 ec                	mov    %ebp,%esp
 8755610:	5d                   	pop    %ebp
 8755611:	c3                   	ret
 8755612:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8755619:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CertDecoder::ReadHeader @ 0x8755570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ReadHeader() */

void __thiscall TaoCrypt::CertDecoder::ReadHeader(CertDecoder *this)

{
  int iVar1;
  uint uVar2;
  int local_2c;
  void *local_28;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)(this + 4) + 0xc);
    iVar1 = BER_Decoder::GetSequence((BER_Decoder *)this);
    *(int *)(this + 0x14) = iVar1;
    *(int *)(this + 0x14) = iVar1 + *(int *)(*(int *)(this + 4) + 0xc);
    BER_Decoder::GetExplicitVersion((BER_Decoder *)this);
    Integer::Integer((Integer *)&local_2c);
    BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
  }
  return;
}

```

---

## StoreKey

```asm
// === 08753e90 TaoCrypt::CertDecoder::StoreKey  [0x08753e90-0x8753f3f] ===
 8753e90:	55                   	push   %ebp
 8753e91:	89 e5                	mov    %esp,%ebp
 8753e93:	83 ec 48             	sub    $0x48,%esp
 8753e96:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8753e99:	8b 75 08             	mov    0x8(%ebp),%esi
 8753e9c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8753e9f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8753ea2:	e8 51 ef fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753ea7:	81 c3 f1 8c c1 00    	add    $0xc18cf1,%ebx
 8753ead:	8b 46 04             	mov    0x4(%esi),%eax
 8753eb0:	8b 78 10             	mov    0x10(%eax),%edi
 8753eb3:	85 ff                	test   %edi,%edi
 8753eb5:	74 11                	je     8753ec8 <_ZN8TaoCrypt11CertDecoder8StoreKeyEv+0x38>
 8753eb7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8753eba:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8753ebd:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8753ec0:	89 ec                	mov    %ebp,%esp
 8753ec2:	5d                   	pop    %ebp
 8753ec3:	c3                   	ret
 8753ec4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753ec8:	8b 78 0c             	mov    0xc(%eax),%edi
 8753ecb:	89 34 24             	mov    %esi,(%esp)
 8753ece:	e8 bd f8 ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753ed3:	8b 4e 04             	mov    0x4(%esi),%ecx
 8753ed6:	8b 51 0c             	mov    0xc(%ecx),%edx
 8753ed9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8753edc:	89 d0                	mov    %edx,%eax
 8753ede:	29 f8                	sub    %edi,%eax
 8753ee0:	89 c7                	mov    %eax,%edi
 8753ee2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8753ee5:	01 f8                	add    %edi,%eax
 8753ee7:	85 ff                	test   %edi,%edi
 8753ee9:	74 10                	je     8753efb <_ZN8TaoCrypt11CertDecoder8StoreKeyEv+0x6b>
 8753eeb:	90                   	nop
 8753eec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8753ef0:	83 ea 01             	sub    $0x1,%edx
 8753ef3:	83 ef 01             	sub    $0x1,%edi
 8753ef6:	89 51 0c             	mov    %edx,0xc(%ecx)
 8753ef9:	75 f5                	jne    8753ef0 <_ZN8TaoCrypt11CertDecoder8StoreKeyEv+0x60>
 8753efb:	8d 7e 08             	lea    0x8(%esi),%edi
 8753efe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8753f02:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8753f05:	89 3c 24             	mov    %edi,(%esp)
 8753f08:	e8 43 ff ff ff       	call   8753e50 <_ZN8TaoCrypt9PublicKey7SetSizeEj>
 8753f0d:	8b 4e 04             	mov    0x4(%esi),%ecx
 8753f10:	8b 51 04             	mov    0x4(%ecx),%edx
 8753f13:	03 51 0c             	add    0xc(%ecx),%edx
 8753f16:	89 3c 24             	mov    %edi,(%esp)
 8753f19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8753f1d:	e8 7e fd ff ff       	call   8753ca0 <_ZN8TaoCrypt9PublicKey6SetKeyEPKh>
 8753f22:	8b 56 04             	mov    0x4(%esi),%edx
 8753f25:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8753f28:	01 42 0c             	add    %eax,0xc(%edx)
 8753f2b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8753f2e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8753f31:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8753f34:	89 ec                	mov    %ebp,%esp
 8753f36:	5d                   	pop    %ebp
 8753f37:	c3                   	ret
 8753f38:	90                   	nop
 8753f39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::CertDecoder::StoreKey @ 0x8753e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::StoreKey() */

void __thiscall TaoCrypt::CertDecoder::StoreKey(CertDecoder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) != 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(this + 4) + 0xc);
  iVar2 = BER_Decoder::GetSequence((BER_Decoder *)this);
  iVar1 = *(int *)(this + 4);
  iVar5 = *(int *)(iVar1 + 0xc);
  iVar3 = iVar5 - iVar3;
  uVar4 = iVar2 + iVar3;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar5 = iVar5 + -1;
    *(int *)(iVar1 + 0xc) = iVar5;
  }
  PublicKey::SetSize((PublicKey *)(this + 8),uVar4);
  PublicKey::SetKey((PublicKey *)(this + 8),
                    (uchar *)(*(int *)(*(int *)(this + 4) + 4) + *(int *)(*(int *)(this + 4) + 0xc))
                   );
  *(int *)(*(int *)(this + 4) + 0xc) = *(int *)(*(int *)(this + 4) + 0xc) + uVar4;
  return;
}

```

---

## ValidateSelfSignature

```asm
// === 087567a0 TaoCrypt::CertDecoder::ValidateSelfSignature  [0x087567a0-0x8756bef] ===
 87567a0:	55                   	push   %ebp
 87567a1:	31 c0                	xor    %eax,%eax
 87567a3:	89 e5                	mov    %esp,%ebp
 87567a5:	83 ec 48             	sub    $0x48,%esp
 87567a8:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87567ab:	8b 75 08             	mov    0x8(%ebp),%esi
 87567ae:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87567b1:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87567b4:	e8 3f c6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87567b9:	81 c3 df 63 c1 00    	add    $0xc163df,%ebx
 87567bf:	8b 56 0c             	mov    0xc(%esi),%edx
 87567c2:	8b 7e 08             	mov    0x8(%esi),%edi
 87567c5:	85 d2                	test   %edx,%edx
 87567c7:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87567ca:	74 10                	je     87567dc <_ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv+0x3c>
 87567cc:	89 14 24             	mov    %edx,(%esp)
 87567cf:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87567d4:	e8 b7 0f 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87567d9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87567dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 87567e0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87567e4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87567e7:	89 04 24             	mov    %eax,(%esp)
 87567ea:	e8 b1 70 92 ff       	call   807d8a0 <memcpy@plt>
 87567ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 87567f2:	89 34 24             	mov    %esi,(%esp)
 87567f5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 87567fc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8756803:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756807:	e8 44 f7 ff ff       	call   8755f50 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE>
 875680c:	8b 75 d8             	mov    -0x28(%ebp),%esi
 875680f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756816:	00 
 8756817:	89 34 24             	mov    %esi,(%esp)
 875681a:	89 c7                	mov    %eax,%edi
 875681c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875681f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756823:	e8 98 74 92 ff       	call   807dcc0 <memset@plt>
 8756828:	89 34 24             	mov    %esi,(%esp)
 875682b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756830:	e8 eb 0e 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756835:	89 f8                	mov    %edi,%eax
 8756837:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875683a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875683d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8756840:	89 ec                	mov    %ebp,%esp
 8756842:	5d                   	pop    %ebp
 8756843:	c3                   	ret
 8756844:	90                   	nop
 8756845:	90                   	nop
 8756846:	90                   	nop
 8756847:	90                   	nop
 8756848:	90                   	nop
 8756849:	90                   	nop
 875684a:	90                   	nop
 875684b:	90                   	nop
 875684c:	90                   	nop
 875684d:	90                   	nop
 875684e:	90                   	nop
 875684f:	90                   	nop

08756850 <_ZN8TaoCrypt11BER_DecoderD1Ev>:
 8756850:	e8 6f dd fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756855:	81 c1 43 63 c1 00    	add    $0xc16343,%ecx
 875685b:	55                   	push   %ebp
 875685c:	89 e5                	mov    %esp,%ebp
 875685e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756864:	8d 50 08             	lea    0x8(%eax),%edx
 8756867:	8b 45 08             	mov    0x8(%ebp),%eax
 875686a:	89 10                	mov    %edx,(%eax)
 875686c:	5d                   	pop    %ebp
 875686d:	c3                   	ret
 875686e:	90                   	nop
 875686f:	90                   	nop

08756870 <_ZN8TaoCrypt11BER_DecoderD0Ev>:
 8756870:	e8 4f dd fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756875:	81 c1 23 63 c1 00    	add    $0xc16323,%ecx
 875687b:	55                   	push   %ebp
 875687c:	89 e5                	mov    %esp,%ebp
 875687e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756884:	8d 50 08             	lea    0x8(%eax),%edx
 8756887:	8b 45 08             	mov    0x8(%ebp),%eax
 875688a:	89 10                	mov    %edx,(%eax)
 875688c:	5d                   	pop    %ebp
 875688d:	c3                   	ret
 875688e:	90                   	nop
 875688f:	90                   	nop

08756890 <_ZN8TaoCrypt11DER_EncoderD1Ev>:
 8756890:	e8 2f dd fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756895:	81 c1 03 63 c1 00    	add    $0xc16303,%ecx
 875689b:	55                   	push   %ebp
 875689c:	89 e5                	mov    %esp,%ebp
 875689e:	8b 81 48 fd ff ff    	mov    -0x2b8(%ecx),%eax
 87568a4:	8d 50 08             	lea    0x8(%eax),%edx
 87568a7:	8b 45 08             	mov    0x8(%ebp),%eax
 87568aa:	89 10                	mov    %edx,(%eax)
 87568ac:	5d                   	pop    %ebp
 87568ad:	c3                   	ret
 87568ae:	90                   	nop
 87568af:	90                   	nop

087568b0 <_ZN8TaoCrypt11DER_EncoderD0Ev>:
 87568b0:	e8 0f dd fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87568b5:	81 c1 e3 62 c1 00    	add    $0xc162e3,%ecx
 87568bb:	55                   	push   %ebp
 87568bc:	89 e5                	mov    %esp,%ebp
 87568be:	8b 81 48 fd ff ff    	mov    -0x2b8(%ecx),%eax
 87568c4:	8d 50 08             	lea    0x8(%eax),%edx
 87568c7:	8b 45 08             	mov    0x8(%ebp),%eax
 87568ca:	89 10                	mov    %edx,(%eax)
 87568cc:	5d                   	pop    %ebp
 87568cd:	c3                   	ret
 87568ce:	90                   	nop
 87568cf:	90                   	nop

087568d0 <_ZN8TaoCrypt4HASHD1Ev>:
 87568d0:	e8 ef dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87568d5:	81 c1 c3 62 c1 00    	add    $0xc162c3,%ecx
 87568db:	55                   	push   %ebp
 87568dc:	89 e5                	mov    %esp,%ebp
 87568de:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87568e4:	8d 50 08             	lea    0x8(%eax),%edx
 87568e7:	8b 45 08             	mov    0x8(%ebp),%eax
 87568ea:	89 10                	mov    %edx,(%eax)
 87568ec:	5d                   	pop    %ebp
 87568ed:	c3                   	ret
 87568ee:	90                   	nop
 87568ef:	90                   	nop

087568f0 <_ZN8TaoCrypt4HASHD0Ev>:
 87568f0:	e8 cf dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87568f5:	81 c1 a3 62 c1 00    	add    $0xc162a3,%ecx
 87568fb:	55                   	push   %ebp
 87568fc:	89 e5                	mov    %esp,%ebp
 87568fe:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8756904:	8d 50 08             	lea    0x8(%eax),%edx
 8756907:	8b 45 08             	mov    0x8(%ebp),%eax
 875690a:	89 10                	mov    %edx,(%eax)
 875690c:	5d                   	pop    %ebp
 875690d:	c3                   	ret
 875690e:	90                   	nop
 875690f:	90                   	nop

08756910 <_ZN8TaoCrypt17Signature_EncoderD1Ev>:
 8756910:	e8 af dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756915:	81 c1 83 62 c1 00    	add    $0xc16283,%ecx
 875691b:	55                   	push   %ebp
 875691c:	89 e5                	mov    %esp,%ebp
 875691e:	8b 81 48 fd ff ff    	mov    -0x2b8(%ecx),%eax
 8756924:	8d 50 08             	lea    0x8(%eax),%edx
 8756927:	8b 45 08             	mov    0x8(%ebp),%eax
 875692a:	89 10                	mov    %edx,(%eax)
 875692c:	5d                   	pop    %ebp
 875692d:	c3                   	ret
 875692e:	90                   	nop
 875692f:	90                   	nop

08756930 <_ZN8TaoCrypt17Signature_EncoderD0Ev>:
 8756930:	e8 8f dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756935:	81 c1 63 62 c1 00    	add    $0xc16263,%ecx
 875693b:	55                   	push   %ebp
 875693c:	89 e5                	mov    %esp,%ebp
 875693e:	8b 81 48 fd ff ff    	mov    -0x2b8(%ecx),%eax
 8756944:	8d 50 08             	lea    0x8(%eax),%edx
 8756947:	8b 45 08             	mov    0x8(%ebp),%eax
 875694a:	89 10                	mov    %edx,(%eax)
 875694c:	5d                   	pop    %ebp
 875694d:	c3                   	ret
 875694e:	90                   	nop
 875694f:	90                   	nop

08756950 <_ZN8TaoCrypt14PKCS12_DecoderD1Ev>:
 8756950:	e8 6f dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756955:	81 c1 43 62 c1 00    	add    $0xc16243,%ecx
 875695b:	55                   	push   %ebp
 875695c:	89 e5                	mov    %esp,%ebp
 875695e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756964:	8d 50 08             	lea    0x8(%eax),%edx
 8756967:	8b 45 08             	mov    0x8(%ebp),%eax
 875696a:	89 10                	mov    %edx,(%eax)
 875696c:	5d                   	pop    %ebp
 875696d:	c3                   	ret
 875696e:	90                   	nop
 875696f:	90                   	nop

08756970 <_ZN8TaoCrypt14PKCS12_DecoderD0Ev>:
 8756970:	e8 4f dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756975:	81 c1 23 62 c1 00    	add    $0xc16223,%ecx
 875697b:	55                   	push   %ebp
 875697c:	89 e5                	mov    %esp,%ebp
 875697e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756984:	8d 50 08             	lea    0x8(%eax),%edx
 8756987:	8b 45 08             	mov    0x8(%ebp),%eax
 875698a:	89 10                	mov    %edx,(%eax)
 875698c:	5d                   	pop    %ebp
 875698d:	c3                   	ret
 875698e:	90                   	nop
 875698f:	90                   	nop

08756990 <_ZN8TaoCrypt10DH_DecoderD1Ev>:
 8756990:	e8 2f dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756995:	81 c1 03 62 c1 00    	add    $0xc16203,%ecx
 875699b:	55                   	push   %ebp
 875699c:	89 e5                	mov    %esp,%ebp
 875699e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 87569a4:	8d 50 08             	lea    0x8(%eax),%edx
 87569a7:	8b 45 08             	mov    0x8(%ebp),%eax
 87569aa:	89 10                	mov    %edx,(%eax)
 87569ac:	5d                   	pop    %ebp
 87569ad:	c3                   	ret
 87569ae:	90                   	nop
 87569af:	90                   	nop

087569b0 <_ZN8TaoCrypt10DH_DecoderD0Ev>:
 87569b0:	e8 0f dc fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87569b5:	81 c1 e3 61 c1 00    	add    $0xc161e3,%ecx
 87569bb:	55                   	push   %ebp
 87569bc:	89 e5                	mov    %esp,%ebp
 87569be:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 87569c4:	8d 50 08             	lea    0x8(%eax),%edx
 87569c7:	8b 45 08             	mov    0x8(%ebp),%eax
 87569ca:	89 10                	mov    %edx,(%eax)
 87569cc:	5d                   	pop    %ebp
 87569cd:	c3                   	ret
 87569ce:	90                   	nop
 87569cf:	90                   	nop

087569d0 <_ZN8TaoCrypt18DSA_Public_DecoderD1Ev>:
 87569d0:	e8 ef db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87569d5:	81 c1 c3 61 c1 00    	add    $0xc161c3,%ecx
 87569db:	55                   	push   %ebp
 87569dc:	89 e5                	mov    %esp,%ebp
 87569de:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 87569e4:	8d 50 08             	lea    0x8(%eax),%edx
 87569e7:	8b 45 08             	mov    0x8(%ebp),%eax
 87569ea:	89 10                	mov    %edx,(%eax)
 87569ec:	5d                   	pop    %ebp
 87569ed:	c3                   	ret
 87569ee:	90                   	nop
 87569ef:	90                   	nop

087569f0 <_ZN8TaoCrypt18DSA_Public_DecoderD0Ev>:
 87569f0:	e8 cf db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87569f5:	81 c1 a3 61 c1 00    	add    $0xc161a3,%ecx
 87569fb:	55                   	push   %ebp
 87569fc:	89 e5                	mov    %esp,%ebp
 87569fe:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756a04:	8d 50 08             	lea    0x8(%eax),%edx
 8756a07:	8b 45 08             	mov    0x8(%ebp),%eax
 8756a0a:	89 10                	mov    %edx,(%eax)
 8756a0c:	5d                   	pop    %ebp
 8756a0d:	c3                   	ret
 8756a0e:	90                   	nop
 8756a0f:	90                   	nop

08756a10 <_ZN8TaoCrypt18RSA_Public_DecoderD1Ev>:
 8756a10:	e8 af db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756a15:	81 c1 83 61 c1 00    	add    $0xc16183,%ecx
 8756a1b:	55                   	push   %ebp
 8756a1c:	89 e5                	mov    %esp,%ebp
 8756a1e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756a24:	8d 50 08             	lea    0x8(%eax),%edx
 8756a27:	8b 45 08             	mov    0x8(%ebp),%eax
 8756a2a:	89 10                	mov    %edx,(%eax)
 8756a2c:	5d                   	pop    %ebp
 8756a2d:	c3                   	ret
 8756a2e:	90                   	nop
 8756a2f:	90                   	nop

08756a30 <_ZN8TaoCrypt18RSA_Public_DecoderD0Ev>:
 8756a30:	e8 8f db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756a35:	81 c1 63 61 c1 00    	add    $0xc16163,%ecx
 8756a3b:	55                   	push   %ebp
 8756a3c:	89 e5                	mov    %esp,%ebp
 8756a3e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756a44:	8d 50 08             	lea    0x8(%eax),%edx
 8756a47:	8b 45 08             	mov    0x8(%ebp),%eax
 8756a4a:	89 10                	mov    %edx,(%eax)
 8756a4c:	5d                   	pop    %ebp
 8756a4d:	c3                   	ret
 8756a4e:	90                   	nop
 8756a4f:	90                   	nop

08756a50 <_ZN8TaoCrypt19DSA_Private_DecoderD1Ev>:
 8756a50:	e8 6f db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756a55:	81 c1 43 61 c1 00    	add    $0xc16143,%ecx
 8756a5b:	55                   	push   %ebp
 8756a5c:	89 e5                	mov    %esp,%ebp
 8756a5e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756a64:	8d 50 08             	lea    0x8(%eax),%edx
 8756a67:	8b 45 08             	mov    0x8(%ebp),%eax
 8756a6a:	89 10                	mov    %edx,(%eax)
 8756a6c:	5d                   	pop    %ebp
 8756a6d:	c3                   	ret
 8756a6e:	90                   	nop
 8756a6f:	90                   	nop

08756a70 <_ZN8TaoCrypt19DSA_Private_DecoderD0Ev>:
 8756a70:	e8 4f db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756a75:	81 c1 23 61 c1 00    	add    $0xc16123,%ecx
 8756a7b:	55                   	push   %ebp
 8756a7c:	89 e5                	mov    %esp,%ebp
 8756a7e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756a84:	8d 50 08             	lea    0x8(%eax),%edx
 8756a87:	8b 45 08             	mov    0x8(%ebp),%eax
 8756a8a:	89 10                	mov    %edx,(%eax)
 8756a8c:	5d                   	pop    %ebp
 8756a8d:	c3                   	ret
 8756a8e:	90                   	nop
 8756a8f:	90                   	nop

08756a90 <_ZN8TaoCrypt19RSA_Private_DecoderD1Ev>:
 8756a90:	e8 2f db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756a95:	81 c1 03 61 c1 00    	add    $0xc16103,%ecx
 8756a9b:	55                   	push   %ebp
 8756a9c:	89 e5                	mov    %esp,%ebp
 8756a9e:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756aa4:	8d 50 08             	lea    0x8(%eax),%edx
 8756aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8756aaa:	89 10                	mov    %edx,(%eax)
 8756aac:	5d                   	pop    %ebp
 8756aad:	c3                   	ret
 8756aae:	90                   	nop
 8756aaf:	90                   	nop

08756ab0 <_ZN8TaoCrypt19RSA_Private_DecoderD0Ev>:
 8756ab0:	e8 0f db fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8756ab5:	81 c1 e3 60 c1 00    	add    $0xc160e3,%ecx
 8756abb:	55                   	push   %ebp
 8756abc:	89 e5                	mov    %esp,%ebp
 8756abe:	8b 81 ac fc ff ff    	mov    -0x354(%ecx),%eax
 8756ac4:	8d 50 08             	lea    0x8(%eax),%edx
 8756ac7:	8b 45 08             	mov    0x8(%ebp),%eax
 8756aca:	89 10                	mov    %edx,(%eax)
 8756acc:	5d                   	pop    %ebp
 8756acd:	c3                   	ret
 8756ace:	90                   	nop
 8756acf:	90                   	nop

08756ad0 <_ZN5mySTL8auto_ptrIN8TaoCrypt4HASHEE7DestroyEv>:
 8756ad0:	55                   	push   %ebp
 8756ad1:	89 e5                	mov    %esp,%ebp
 8756ad3:	83 ec 18             	sub    $0x18,%esp
 8756ad6:	8b 45 08             	mov    0x8(%ebp),%eax
 8756ad9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8756adc:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8756adf:	e8 14 c3 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8756ae4:	81 c3 b4 60 c1 00    	add    $0xc160b4,%ebx
 8756aea:	8b 30                	mov    (%eax),%esi
 8756aec:	85 f6                	test   %esi,%esi
 8756aee:	74 07                	je     8756af7 <_ZN5mySTL8auto_ptrIN8TaoCrypt4HASHEE7DestroyEv+0x27>
 8756af0:	8b 06                	mov    (%esi),%eax
 8756af2:	89 34 24             	mov    %esi,(%esp)
 8756af5:	ff 10                	call   *(%eax)
 8756af7:	89 34 24             	mov    %esi,(%esp)
 8756afa:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756aff:	e8 ec 0b 01 00       	call   87676f0 <_ZdlPvN8TaoCrypt5new_tE>
 8756b04:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8756b07:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8756b0a:	89 ec                	mov    %ebp,%esp
 8756b0c:	5d                   	pop    %ebp
 8756b0d:	c3                   	ret
 8756b0e:	90                   	nop
 8756b0f:	90                   	nop

08756b10 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_>:
 8756b10:	55                   	push   %ebp
 8756b11:	89 e5                	mov    %esp,%ebp
 8756b13:	57                   	push   %edi
 8756b14:	56                   	push   %esi
 8756b15:	53                   	push   %ebx
 8756b16:	83 ec 3c             	sub    $0x3c,%esp
 8756b19:	8b 75 08             	mov    0x8(%ebp),%esi
 8756b1c:	e8 d7 c2 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8756b21:	81 c3 77 60 c1 00    	add    $0xc16077,%ebx
 8756b27:	8b 06                	mov    (%esi),%eax
 8756b29:	89 04 24             	mov    %eax,(%esp)
 8756b2c:	e8 af 80 00 00       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 8756b31:	83 e8 01             	sub    $0x1,%eax
 8756b34:	c1 e8 03             	shr    $0x3,%eax
 8756b37:	83 f8 0a             	cmp    $0xa,%eax
 8756b3a:	0f 86 88 00 00 00    	jbe    8756bc8 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_+0xb8>
 8756b40:	83 e8 0a             	sub    $0xa,%eax
 8756b43:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8756b46:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756b4b:	89 04 24             	mov    %eax,(%esp)
 8756b4e:	e8 3d 0c 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8756b53:	89 c7                	mov    %eax,%edi
 8756b55:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8756b58:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8756b5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756b62:	00 
 8756b63:	89 3c 24             	mov    %edi,(%esp)
 8756b66:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8756b69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756b6d:	e8 4e 71 92 ff       	call   807dcc0 <memset@plt>
 8756b72:	8b 45 14             	mov    0x14(%ebp),%eax
 8756b75:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8756b79:	89 7d d0             	mov    %edi,-0x30(%ebp)
 8756b7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756b80:	8b 06                	mov    (%esi),%eax
 8756b82:	31 f6                	xor    %esi,%esi
 8756b84:	89 04 24             	mov    %eax,(%esp)
 8756b87:	e8 c4 12 01 00       	call   8767e50 <_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh>
 8756b8c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8756b8f:	3b 45 10             	cmp    0x10(%ebp),%eax
 8756b92:	74 44                	je     8756bd8 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_+0xc8>
 8756b94:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8756b97:	89 14 24             	mov    %edx,(%esp)
 8756b9a:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8756b9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8756ba4:	00 
 8756ba5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8756ba9:	e8 12 71 92 ff       	call   807dcc0 <memset@plt>
 8756bae:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8756bb1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8756bb6:	89 14 24             	mov    %edx,(%esp)
 8756bb9:	e8 62 0b 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8756bbe:	83 c4 3c             	add    $0x3c,%esp
 8756bc1:	89 f0                	mov    %esi,%eax
 8756bc3:	5b                   	pop    %ebx
 8756bc4:	5e                   	pop    %esi
 8756bc5:	5f                   	pop    %edi
 8756bc6:	5d                   	pop    %ebp
 8756bc7:	c3                   	ret
 8756bc8:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8756bcf:	31 ff                	xor    %edi,%edi
 8756bd1:	eb 82                	jmp    8756b55 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_+0x45>
 8756bd3:	90                   	nop
 8756bd4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756bd8:	8b 45 10             	mov    0x10(%ebp),%eax
 8756bdb:	89 d6                	mov    %edx,%esi
 8756bdd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8756be0:	39 c0                	cmp    %eax,%eax
 8756be2:	89 c1                	mov    %eax,%ecx
 8756be4:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8756be6:	0f 94 c0             	sete   %al
 8756be9:	89 c6                	mov    %eax,%esi
 8756beb:	eb a7                	jmp    8756b94 <_ZN8TaoCrypt13RSA_EncryptorINS_14RSA_BlockType2EE10SSL_VerifyEPKhjS4_+0x84>
 8756bed:	90                   	nop
 8756bee:	90                   	nop
 8756bef:	90                   	nop

```

```c
// TaoCrypt::CertDecoder::ValidateSelfSignature @ 0x87567a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ValidateSelfSignature() */

undefined4 __thiscall TaoCrypt::CertDecoder::ValidateSelfSignature(CertDecoder *this)

{
  void *pvVar1;
  undefined4 uVar2;
  uint in_stack_ffffffb8;
  uint uVar3;
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_2c = (void *)0x0;
  local_30 = *(size_t *)(this + 0xc);
  pvVar1 = *(void **)(this + 8);
  if (local_30 != 0) {
    local_2c = operator_new__(local_30,in_stack_ffffffb8 & 0xffffff00);
  }
  memcpy(local_2c,pvVar1,local_30);
  local_24 = 0;
  local_20 = 0;
  uVar2 = ConfirmSignature(this,(Source *)&local_30);
  pvVar1 = local_2c;
  uVar3 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar3 & 0xffffff00);
  return uVar2;
}

```

---

## ValidateSignature

```asm
// === 087563f0 TaoCrypt::CertDecoder::ValidateSignature  [0x087563f0-0x87564df] ===
 87563f0:	55                   	push   %ebp
 87563f1:	89 e5                	mov    %esp,%ebp
 87563f3:	57                   	push   %edi
 87563f4:	56                   	push   %esi
 87563f5:	53                   	push   %ebx
 87563f6:	83 ec 5c             	sub    $0x5c,%esp
 87563f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87563fc:	e8 f7 c9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8756401:	81 c3 97 67 c1 00    	add    $0xc16797,%ebx
 8756407:	8b 00                	mov    (%eax),%eax
 8756409:	85 c0                	test   %eax,%eax
 875640b:	0f 84 bf 00 00 00    	je     87564d0 <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE+0xe0>
 8756411:	8b 55 08             	mov    0x8(%ebp),%edx
 8756414:	83 c2 38             	add    $0x38,%edx
 8756417:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 875641a:	eb 0f                	jmp    875642b <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE+0x3b>
 875641c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8756420:	8b 40 04             	mov    0x4(%eax),%eax
 8756423:	85 c0                	test   %eax,%eax
 8756425:	0f 84 a5 00 00 00    	je     87564d0 <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE+0xe0>
 875642b:	8b 48 08             	mov    0x8(%eax),%ecx
 875642e:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 8756431:	89 cf                	mov    %ecx,%edi
 8756433:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8756436:	81 c7 08 02 00 00    	add    $0x208,%edi
 875643c:	b9 14 00 00 00       	mov    $0x14,%ecx
 8756441:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8756443:	75 db                	jne    8756420 <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE+0x30>
 8756445:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8756448:	31 c0                	xor    %eax,%eax
 875644a:	8b 4a 04             	mov    0x4(%edx),%ecx
 875644d:	8b 32                	mov    (%edx),%esi
 875644f:	85 c9                	test   %ecx,%ecx
 8756451:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8756454:	74 0d                	je     8756463 <_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE+0x73>
 8756456:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875645b:	89 0c 24             	mov    %ecx,(%esp)
 875645e:	e8 2d 13 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8756463:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8756466:	89 74 24 04          	mov    %esi,0x4(%esp)
 875646a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875646d:	89 04 24             	mov    %eax,(%esp)
 8756470:	89 54 24 08          	mov    %edx,0x8(%esp)
 8756474:	e8 27 74 92 ff       	call   807d8a0 <memcpy@plt>
 8756479:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 875647c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8756480:	8b 45 08             	mov    0x8(%ebp),%eax
 8756483:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 875648a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8756491:	89 04 24             	mov    %eax,(%esp)
 8756494:	e8 b7 fa ff ff       	call   8755f50 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE>
 8756499:	8b 7d d8             	mov    -0x28(%ebp),%edi
 875649c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87564a3:	00 
 87564a4:	89 3c 24             	mov    %edi,(%esp)
 87564a7:	89 c6                	mov    %eax,%esi
 87564a9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87564ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 87564b0:	e8 0b 78 92 ff       	call   807dcc0 <memset@plt>
 87564b5:	89 3c 24             	mov    %edi,(%esp)
 87564b8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87564bd:	e8 5e 12 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87564c2:	83 c4 5c             	add    $0x5c,%esp
 87564c5:	89 f0                	mov    %esi,%eax
 87564c7:	5b                   	pop    %ebx
 87564c8:	5e                   	pop    %esi
 87564c9:	5f                   	pop    %edi
 87564ca:	5d                   	pop    %ebp
 87564cb:	c3                   	ret
 87564cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87564d0:	31 f6                	xor    %esi,%esi
 87564d2:	83 c4 5c             	add    $0x5c,%esp
 87564d5:	89 f0                	mov    %esi,%eax
 87564d7:	5b                   	pop    %ebx
 87564d8:	5e                   	pop    %esi
 87564d9:	5f                   	pop    %edi
 87564da:	5d                   	pop    %ebp
 87564db:	c3                   	ret
 87564dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::CertDecoder::ValidateSignature @ 0x87563f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ValidateSignature(mySTL::list<TaoCrypt::Signer*>*) */

undefined4 __thiscall TaoCrypt::CertDecoder::ValidateSignature(CertDecoder *this,list *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CertDecoder *pCVar6;
  CertDecoder *pCVar7;
  bool bVar8;
  uint in_stack_ffffff98;
  uint uVar9;
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar3 = *(int *)param_1;
  if (iVar3 != 0) {
    do {
      puVar1 = *(undefined4 **)(iVar3 + 8);
      bVar8 = (CertDecoder *)(puVar1 + 0x82) == (CertDecoder *)0x0;
      iVar5 = 0x14;
      pCVar6 = this + 0x38;
      pCVar7 = (CertDecoder *)(puVar1 + 0x82);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pCVar6 == *pCVar7;
        pCVar6 = pCVar6 + 1;
        pCVar7 = pCVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        local_2c = (void *)0x0;
        local_30 = puVar1[1];
        pvVar2 = (void *)*puVar1;
        if (local_30 != 0) {
          local_2c = operator_new__(local_30,in_stack_ffffff98 & 0xffffff00);
        }
        memcpy(local_2c,pvVar2,local_30);
        local_24 = 0;
        local_20 = 0;
        uVar4 = ConfirmSignature(this,(Source *)&local_30);
        pvVar2 = local_2c;
        uVar9 = 0;
        memset(local_2c,0,local_30);
        operator_delete__(pvVar2,uVar9 & 0xffffff00);
        return uVar4;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  return 0;
}

```

---

## ~CertDecoder

```asm
// === 087541a0 TaoCrypt::CertDecoder::~CertDecoder  [0x087541a0-0x87541ff] ===
 87541a0:	55                   	push   %ebp
 87541a1:	89 e5                	mov    %esp,%ebp
 87541a3:	83 ec 18             	sub    $0x18,%esp
 87541a6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87541a9:	e8 4a ec fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87541ae:	81 c3 ea 89 c1 00    	add    $0xc189ea,%ebx
 87541b4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87541b7:	8b 75 08             	mov    0x8(%ebp),%esi
 87541ba:	8b 83 f8 fa ff ff    	mov    -0x508(%ebx),%eax
 87541c0:	83 c0 08             	add    $0x8,%eax
 87541c3:	89 06                	mov    %eax,(%esi)
 87541c5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87541ca:	8b 46 4c             	mov    0x4c(%esi),%eax
 87541cd:	89 04 24             	mov    %eax,(%esp)
 87541d0:	e8 4b 35 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87541d5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87541da:	8b 46 08             	mov    0x8(%esi),%eax
 87541dd:	89 04 24             	mov    %eax,(%esp)
 87541e0:	e8 3b 35 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87541e5:	8b 83 ac fc ff ff    	mov    -0x354(%ebx),%eax
 87541eb:	83 c0 08             	add    $0x8,%eax
 87541ee:	89 06                	mov    %eax,(%esi)
 87541f0:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87541f3:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87541f6:	89 ec                	mov    %ebp,%esp
 87541f8:	5d                   	pop    %ebp
 87541f9:	c3                   	ret
 87541fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::CertDecoder::~CertDecoder @ 0x87541a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::~CertDecoder() */

void __thiscall TaoCrypt::CertDecoder::~CertDecoder(CertDecoder *this)

{
  *(undefined **)this = PTR_vtable_0936c690 + 8;
  operator_delete__(*(undefined4 *)(this + 0x4c),0);
  operator_delete__(*(undefined4 *)(this + 8),0);
  *(undefined **)this = PTR_vtable_0936c844 + 8;
  return;
}

```

---

## ~CertDecoder_08754200

```asm
// === 08754200 TaoCrypt::CertDecoder::~CertDecoder  [0x08754200-0x875422f] ===
 8754200:	55                   	push   %ebp
 8754201:	89 e5                	mov    %esp,%ebp
 8754203:	53                   	push   %ebx
 8754204:	e8 ef eb fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8754209:	81 c3 8f 89 c1 00    	add    $0xc1898f,%ebx
 875420f:	83 ec 14             	sub    $0x14,%esp
 8754212:	8b 45 08             	mov    0x8(%ebp),%eax
 8754215:	89 04 24             	mov    %eax,(%esp)
 8754218:	e8 83 ff ff ff       	call   87541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>
 875421d:	83 c4 14             	add    $0x14,%esp
 8754220:	5b                   	pop    %ebx
 8754221:	5d                   	pop    %ebp
 8754222:	c3                   	ret
 8754223:	90                   	nop
 8754224:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875422a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::CertDecoder::~CertDecoder @ 0x8754200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::~CertDecoder() */

void __thiscall TaoCrypt::CertDecoder::~CertDecoder(CertDecoder *this)

{
  ~CertDecoder(this);
  return;
}

```

