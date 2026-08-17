# TaoCrypt__DSA_Verifier

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## DSA_Verifier

```asm
// === 08757500 TaoCrypt::DSA_Verifier::DSA_Verifier  [0x08757500-0x875753f] ===
 8757500:	55                   	push   %ebp
 8757501:	89 e5                	mov    %esp,%ebp
 8757503:	83 ec 18             	sub    $0x18,%esp
 8757506:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8757509:	8b 45 0c             	mov    0xc(%ebp),%eax
 875750c:	e8 e7 b8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757511:	81 c3 87 56 c1 00    	add    $0xc15687,%ebx
 8757517:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875751a:	8b 75 08             	mov    0x8(%ebp),%esi
 875751d:	89 06                	mov    %eax,(%esi)
 875751f:	8d 46 04             	lea    0x4(%esi),%eax
 8757522:	83 c6 14             	add    $0x14,%esi
 8757525:	89 04 24             	mov    %eax,(%esp)
 8757528:	e8 63 80 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875752d:	89 34 24             	mov    %esi,(%esp)
 8757530:	e8 5b 80 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8757535:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8757538:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875753b:	89 ec                	mov    %ebp,%esp
 875753d:	5d                   	pop    %ebp
 875753e:	c3                   	ret
 875753f:	90                   	nop

```

```c
// TaoCrypt::DSA_Verifier::DSA_Verifier @ 0x8757500

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Verifier::DSA_Verifier(TaoCrypt::DSA_PublicKey const&) */

void __thiscall TaoCrypt::DSA_Verifier::DSA_Verifier(DSA_Verifier *this,DSA_PublicKey *param_1)

{
  *(DSA_PublicKey **)this = param_1;
  Integer::Integer((Integer *)(this + 4));
  Integer::Integer((Integer *)(this + 0x14));
  return;
}

```

---

## GetR

```asm
// === 08757440 TaoCrypt::DSA_Verifier::GetR  [0x08757440-0x875744f] ===
 8757440:	55                   	push   %ebp
 8757441:	89 e5                	mov    %esp,%ebp
 8757443:	8b 45 08             	mov    0x8(%ebp),%eax
 8757446:	5d                   	pop    %ebp
 8757447:	83 c0 04             	add    $0x4,%eax
 875744a:	c3                   	ret
 875744b:	90                   	nop
 875744c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_Verifier::GetR @ 0x8757440

/* TaoCrypt::DSA_Verifier::GetR() const */

DSA_Verifier * __thiscall TaoCrypt::DSA_Verifier::GetR(DSA_Verifier *this)

{
  return this + 4;
}

```

---

## GetS

```asm
// === 08757450 TaoCrypt::DSA_Verifier::GetS  [0x08757450-0x875745f] ===
 8757450:	55                   	push   %ebp
 8757451:	89 e5                	mov    %esp,%ebp
 8757453:	8b 45 08             	mov    0x8(%ebp),%eax
 8757456:	5d                   	pop    %ebp
 8757457:	83 c0 14             	add    $0x14,%eax
 875745a:	c3                   	ret
 875745b:	90                   	nop
 875745c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_Verifier::GetS @ 0x8757450

/* TaoCrypt::DSA_Verifier::GetS() const */

DSA_Verifier * __thiscall TaoCrypt::DSA_Verifier::GetS(DSA_Verifier *this)

{
  return this + 0x14;
}

```

---

## Verify

```asm
// === 08757f50 TaoCrypt::DSA_Verifier::Verify  [0x08757f50-0x875881f] ===
 8757f50:	55                   	push   %ebp
 8757f51:	89 e5                	mov    %esp,%ebp
 8757f53:	57                   	push   %edi
 8757f54:	56                   	push   %esi
 8757f55:	53                   	push   %ebx
 8757f56:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 8757f5c:	8b 55 08             	mov    0x8(%ebp),%edx
 8757f5f:	e8 94 ae fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757f64:	81 c3 34 4c c1 00    	add    $0xc14c34,%ebx
 8757f6a:	8b 02                	mov    (%edx),%eax
 8757f6c:	89 04 24             	mov    %eax,(%esp)
 8757f6f:	e8 5c f4 ff ff       	call   87573d0 <_ZNK8TaoCrypt13DSA_PublicKey10GetModulusEv>
 8757f74:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8757f77:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 8757f7d:	8b 01                	mov    (%ecx),%eax
 8757f7f:	89 04 24             	mov    %eax,(%esp)
 8757f82:	e8 59 f4 ff ff       	call   87573e0 <_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv>
 8757f87:	8b 55 08             	mov    0x8(%ebp),%edx
 8757f8a:	89 c6                	mov    %eax,%esi
 8757f8c:	8b 02                	mov    (%edx),%eax
 8757f8e:	89 04 24             	mov    %eax,(%esp)
 8757f91:	e8 5a f4 ff ff       	call   87573f0 <_ZNK8TaoCrypt13DSA_PublicKey20GetSubGroupGeneratorEv>
 8757f96:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8757f99:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 8757f9f:	8b 01                	mov    (%ecx),%eax
 8757fa1:	89 04 24             	mov    %eax,(%esp)
 8757fa4:	e8 57 f4 ff ff       	call   8757400 <_ZNK8TaoCrypt13DSA_PublicKey13GetPublicPartEv>
 8757fa9:	89 34 24             	mov    %esi,(%esp)
 8757fac:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8757fb2:	e8 79 6c 00 00       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8757fb7:	8b 7d 08             	mov    0x8(%ebp),%edi
 8757fba:	8b 55 10             	mov    0x10(%ebp),%edx
 8757fbd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8757fc4:	00 
 8757fc5:	83 c7 04             	add    $0x4,%edi
 8757fc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8757fcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757fd0:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8757fd6:	89 3c 24             	mov    %edi,(%esp)
 8757fd9:	e8 72 90 00 00       	call   8761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>
 8757fde:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8757fe4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8757fe7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8757fee:	00 
 8757fef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757ff3:	03 45 10             	add    0x10(%ebp),%eax
 8757ff6:	83 c1 14             	add    $0x14,%ecx
 8757ff9:	89 8d 04 ff ff ff    	mov    %ecx,-0xfc(%ebp)
 8757fff:	89 0c 24             	mov    %ecx,(%esp)
 8758002:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758006:	e8 45 90 00 00       	call   8761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>
 875800b:	89 74 24 04          	mov    %esi,0x4(%esp)
 875800f:	89 3c 24             	mov    %edi,(%esp)
 8758012:	e8 09 52 00 00       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8758017:	85 c0                	test   %eax,%eax
 8758019:	78 0d                	js     8758028 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_+0xd8>
 875801b:	31 f6                	xor    %esi,%esi
 875801d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8758020:	89 f0                	mov    %esi,%eax
 8758022:	5b                   	pop    %ebx
 8758023:	5e                   	pop    %esi
 8758024:	5f                   	pop    %edi
 8758025:	5d                   	pop    %ebp
 8758026:	c3                   	ret
 8758027:	90                   	nop
 8758028:	8d 45 d8             	lea    -0x28(%ebp),%eax
 875802b:	89 04 24             	mov    %eax,(%esp)
 875802e:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8758034:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 875803b:	00 
 875803c:	e8 8f 74 00 00       	call   875f4d0 <_ZN8TaoCrypt7IntegerC1El>
 8758041:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8758047:	89 3c 24             	mov    %edi,(%esp)
 875804a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875804e:	e8 cd 51 00 00       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8758053:	85 c0                	test   %eax,%eax
 8758055:	78 1a                	js     8758071 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_+0x121>
 8758057:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 875805d:	89 74 24 04          	mov    %esi,0x4(%esp)
 8758061:	89 04 24             	mov    %eax,(%esp)
 8758064:	e8 b7 51 00 00       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8758069:	85 c0                	test   %eax,%eax
 875806b:	0f 88 88 04 00 00    	js     87584f9 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_+0x5a9>
 8758071:	c6 85 e8 fe ff ff 01 	movb   $0x1,-0x118(%ebp)
 8758078:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875807b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875807e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758085:	00 
 8758086:	c1 e0 02             	shl    $0x2,%eax
 8758089:	89 14 24             	mov    %edx,(%esp)
 875808c:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 8758092:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758096:	e8 25 5c 92 ff       	call   807dcc0 <memset@plt>
 875809b:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 87580a1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87580a6:	89 14 24             	mov    %edx,(%esp)
 87580a9:	e8 72 f6 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87580ae:	80 bd e8 fe ff ff 00 	cmpb   $0x0,-0x118(%ebp)
 87580b5:	0f 85 60 ff ff ff    	jne    875801b <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_+0xcb>
 87580bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 87580be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87580c5:	00 
 87580c6:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 87580cd:	00 
 87580ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 87580d2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 87580d5:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 87580db:	89 04 24             	mov    %eax,(%esp)
 87580de:	e8 1d 92 00 00       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 87580e3:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 87580e9:	8d 55 a8             	lea    -0x58(%ebp),%edx
 87580ec:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 87580f2:	89 74 24 08          	mov    %esi,0x8(%esp)
 87580f6:	89 14 24             	mov    %edx,(%esp)
 87580f9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87580fd:	e8 de b0 00 00       	call   87631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>
 8758102:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 8758108:	8d 4d 88             	lea    -0x78(%ebp),%ecx
 875810b:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8758111:	89 8d d0 fe ff ff    	mov    %ecx,-0x130(%ebp)
 8758117:	83 ec 04             	sub    $0x4,%esp
 875811a:	89 54 24 08          	mov    %edx,0x8(%esp)
 875811e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758122:	89 0c 24             	mov    %ecx,(%esp)
 8758125:	e8 36 a0 00 00       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 875812a:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 8758130:	8d 45 98             	lea    -0x68(%ebp),%eax
 8758133:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 8758139:	83 ec 04             	sub    $0x4,%esp
 875813c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8758140:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8758144:	89 04 24             	mov    %eax,(%esp)
 8758147:	e8 d4 a4 00 00       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 875814c:	8b 45 88             	mov    -0x78(%ebp),%eax
 875814f:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 8758152:	c1 e0 02             	shl    $0x2,%eax
 8758155:	89 8d d0 fe ff ff    	mov    %ecx,-0x130(%ebp)
 875815b:	83 ec 04             	sub    $0x4,%esp
 875815e:	89 0c 24             	mov    %ecx,(%esp)
 8758161:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758165:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875816c:	00 
 875816d:	e8 4e 5b 92 ff       	call   807dcc0 <memset@plt>
 8758172:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 8758178:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875817d:	89 0c 24             	mov    %ecx,(%esp)
 8758180:	e8 9b f5 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758185:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 875818b:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8758191:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8758197:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875819b:	89 04 24             	mov    %eax,(%esp)
 875819e:	89 54 24 08          	mov    %edx,0x8(%esp)
 87581a2:	e8 b9 9f 00 00       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 87581a7:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 87581ad:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 87581b3:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 87581b9:	83 ec 04             	sub    $0x4,%esp
 87581bc:	89 74 24 08          	mov    %esi,0x8(%esp)
 87581c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87581c4:	89 14 24             	mov    %edx,(%esp)
 87581c7:	e8 54 a4 00 00       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 87581cc:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 87581d2:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 87581d8:	c1 e0 02             	shl    $0x2,%eax
 87581db:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 87581e1:	83 ec 04             	sub    $0x4,%esp
 87581e4:	89 14 24             	mov    %edx,(%esp)
 87581e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87581eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87581f2:	00 
 87581f3:	e8 c8 5a 92 ff       	call   807dcc0 <memset@plt>
 87581f8:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 87581fe:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758203:	89 14 24             	mov    %edx,(%esp)
 8758206:	e8 15 f5 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875820b:	8b 83 c0 ff ff ff    	mov    -0x40(%ebx),%eax
 8758211:	8b 8d e4 fe ff ff    	mov    -0x11c(%ebp),%ecx
 8758217:	8b 93 50 fd ff ff    	mov    -0x2b0(%ebx),%edx
 875821d:	83 c0 08             	add    $0x8,%eax
 8758220:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8758226:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 875822c:	83 c2 08             	add    $0x8,%edx
 875822f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8758233:	8d 8d 18 ff ff ff    	lea    -0xe8(%ebp),%ecx
 8758239:	89 95 0c ff ff ff    	mov    %edx,-0xf4(%ebp)
 875823f:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 8758245:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 875824b:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8758251:	89 0c 24             	mov    %ecx,(%esp)
 8758254:	e8 17 70 00 00       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8758259:	8b 8d e4 fe ff ff    	mov    -0x11c(%ebp),%ecx
 875825f:	8b 09                	mov    (%ecx),%ecx
 8758261:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758268:	00 
 8758269:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875826d:	8d 8d 28 ff ff ff    	lea    -0xd8(%ebp),%ecx
 8758273:	89 0c 24             	mov    %ecx,(%esp)
 8758276:	e8 75 6e 00 00       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 875827b:	8d 8d 38 ff ff ff    	lea    -0xc8(%ebp),%ecx
 8758281:	89 0c 24             	mov    %ecx,(%esp)
 8758284:	e8 07 73 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8758289:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 875828f:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8758295:	89 8d 04 ff ff ff    	mov    %ecx,-0xfc(%ebp)
 875829b:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 87582a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87582a5:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 87582ab:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 87582af:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 87582b5:	89 04 24             	mov    %eax,(%esp)
 87582b8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 87582bc:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 87582c2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87582c6:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 87582cc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87582d0:	e8 6b aa 00 00       	call   8762d40 <_ZNK8TaoCrypt17ModularArithmetic19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>
 87582d5:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 87582db:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 87582e1:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 87582e7:	83 ec 04             	sub    $0x4,%esp
 87582ea:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87582ee:	89 74 24 08          	mov    %esi,0x8(%esp)
 87582f2:	89 04 24             	mov    %eax,(%esp)
 87582f5:	e8 26 a3 00 00       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 87582fa:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8758300:	83 ec 04             	sub    $0x4,%esp
 8758303:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758307:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 875830d:	89 04 24             	mov    %eax,(%esp)
 8758310:	e8 4b 81 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8758315:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 875831b:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
 8758321:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758328:	00 
 8758329:	c1 e0 02             	shl    $0x2,%eax
 875832c:	89 34 24             	mov    %esi,(%esp)
 875832f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758333:	e8 88 59 92 ff       	call   807dcc0 <memset@plt>
 8758338:	89 34 24             	mov    %esi,(%esp)
 875833b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758340:	e8 db f3 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758345:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 875834b:	89 3c 24             	mov    %edi,(%esp)
 875834e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8758352:	e8 c9 4e 00 00       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8758357:	8b b5 5c ff ff ff    	mov    -0xa4(%ebp),%esi
 875835d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758364:	00 
 8758365:	89 34 24             	mov    %esi,(%esp)
 8758368:	89 c7                	mov    %eax,%edi
 875836a:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8758370:	c1 e0 02             	shl    $0x2,%eax
 8758373:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758377:	e8 44 59 92 ff       	call   807dcc0 <memset@plt>
 875837c:	89 34 24             	mov    %esi,(%esp)
 875837f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758384:	e8 97 f3 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758389:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 875838f:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 8758395:	8b b5 3c ff ff ff    	mov    -0xc4(%ebp),%esi
 875839b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87583a2:	00 
 87583a3:	c1 e0 02             	shl    $0x2,%eax
 87583a6:	89 95 0c ff ff ff    	mov    %edx,-0xf4(%ebp)
 87583ac:	89 34 24             	mov    %esi,(%esp)
 87583af:	89 44 24 08          	mov    %eax,0x8(%esp)
 87583b3:	e8 08 59 92 ff       	call   807dcc0 <memset@plt>
 87583b8:	89 34 24             	mov    %esi,(%esp)
 87583bb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87583c0:	e8 5b f3 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87583c5:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 87583cb:	8b b5 2c ff ff ff    	mov    -0xd4(%ebp),%esi
 87583d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87583d8:	00 
 87583d9:	c1 e0 02             	shl    $0x2,%eax
 87583dc:	89 34 24             	mov    %esi,(%esp)
 87583df:	89 44 24 08          	mov    %eax,0x8(%esp)
 87583e3:	e8 d8 58 92 ff       	call   807dcc0 <memset@plt>
 87583e8:	89 34 24             	mov    %esi,(%esp)
 87583eb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87583f0:	e8 2b f3 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87583f5:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 87583fb:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
 8758401:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758408:	00 
 8758409:	c1 e0 02             	shl    $0x2,%eax
 875840c:	89 34 24             	mov    %esi,(%esp)
 875840f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758413:	e8 a8 58 92 ff       	call   807dcc0 <memset@plt>
 8758418:	89 34 24             	mov    %esi,(%esp)
 875841b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758420:	e8 fb f2 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758425:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 875842b:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 8758431:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 8758437:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875843e:	00 
 875843f:	c1 e2 02             	shl    $0x2,%edx
 8758442:	83 c0 08             	add    $0x8,%eax
 8758445:	89 54 24 08          	mov    %edx,0x8(%esp)
 8758449:	89 34 24             	mov    %esi,(%esp)
 875844c:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8758452:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8758458:	e8 63 58 92 ff       	call   807dcc0 <memset@plt>
 875845d:	89 34 24             	mov    %esi,(%esp)
 8758460:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758465:	e8 b6 f2 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875846a:	8b 45 98             	mov    -0x68(%ebp),%eax
 875846d:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8758470:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758477:	00 
 8758478:	c1 e0 02             	shl    $0x2,%eax
 875847b:	89 34 24             	mov    %esi,(%esp)
 875847e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758482:	e8 39 58 92 ff       	call   807dcc0 <memset@plt>
 8758487:	89 34 24             	mov    %esi,(%esp)
 875848a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875848f:	e8 8c f2 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758494:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8758497:	8b 75 ac             	mov    -0x54(%ebp),%esi
 875849a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87584a1:	00 
 87584a2:	c1 e0 02             	shl    $0x2,%eax
 87584a5:	89 34 24             	mov    %esi,(%esp)
 87584a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87584ac:	e8 0f 58 92 ff       	call   807dcc0 <memset@plt>
 87584b1:	89 34 24             	mov    %esi,(%esp)
 87584b4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87584b9:	e8 62 f2 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87584be:	85 ff                	test   %edi,%edi
 87584c0:	8b 7d bc             	mov    -0x44(%ebp),%edi
 87584c3:	0f 94 c0             	sete   %al
 87584c6:	89 c6                	mov    %eax,%esi
 87584c8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87584cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87584d2:	00 
 87584d3:	89 3c 24             	mov    %edi,(%esp)
 87584d6:	c1 e0 02             	shl    $0x2,%eax
 87584d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 87584dd:	e8 de 57 92 ff       	call   807dcc0 <memset@plt>
 87584e2:	89 3c 24             	mov    %edi,(%esp)
 87584e5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87584ea:	e8 31 f2 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87584ef:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87584f2:	89 f0                	mov    %esi,%eax
 87584f4:	5b                   	pop    %ebx
 87584f5:	5e                   	pop    %esi
 87584f6:	5f                   	pop    %edi
 87584f7:	5d                   	pop    %ebp
 87584f8:	c3                   	ret
 87584f9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 87584fc:	89 04 24             	mov    %eax,(%esp)
 87584ff:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8758505:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 875850c:	00 
 875850d:	e8 be 6f 00 00       	call   875f4d0 <_ZN8TaoCrypt7IntegerC1El>
 8758512:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 8758518:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 875851e:	89 14 24             	mov    %edx,(%esp)
 8758521:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758525:	e8 f6 4c 00 00       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 875852a:	8b 55 cc             	mov    -0x34(%ebp),%edx
 875852d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8758534:	00 
 8758535:	89 14 24             	mov    %edx,(%esp)
 8758538:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 875853e:	c1 e8 1f             	shr    $0x1f,%eax
 8758541:	88 85 e8 fe ff ff    	mov    %al,-0x118(%ebp)
 8758547:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875854a:	c1 e0 02             	shl    $0x2,%eax
 875854d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8758551:	e8 6a 57 92 ff       	call   807dcc0 <memset@plt>
 8758556:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 875855c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8758561:	89 14 24             	mov    %edx,(%esp)
 8758564:	e8 b7 f1 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8758569:	e9 0a fb ff ff       	jmp    8758078 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_+0x128>
 875856e:	90                   	nop
 875856f:	90                   	nop

08758570 <_ZNK8TaoCrypt13AbstractGroup15InversionIsFastEv>:
 8758570:	55                   	push   %ebp
 8758571:	31 c0                	xor    %eax,%eax
 8758573:	89 e5                	mov    %esp,%ebp
 8758575:	5d                   	pop    %ebp
 8758576:	c3                   	ret
 8758577:	90                   	nop
 8758578:	90                   	nop
 8758579:	90                   	nop
 875857a:	90                   	nop
 875857b:	90                   	nop
 875857c:	90                   	nop
 875857d:	90                   	nop
 875857e:	90                   	nop
 875857f:	90                   	nop

08758580 <_ZN8TaoCrypt12AbstractRing20MultiplicativeGroupTD1Ev>:
 8758580:	e8 3f c0 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8758585:	81 c1 13 46 c1 00    	add    $0xc14613,%ecx
 875858b:	55                   	push   %ebp
 875858c:	89 e5                	mov    %esp,%ebp
 875858e:	8b 81 6c fe ff ff    	mov    -0x194(%ecx),%eax
 8758594:	8d 50 08             	lea    0x8(%eax),%edx
 8758597:	8b 45 08             	mov    0x8(%ebp),%eax
 875859a:	89 10                	mov    %edx,(%eax)
 875859c:	5d                   	pop    %ebp
 875859d:	c3                   	ret
 875859e:	90                   	nop
 875859f:	90                   	nop

087585a0 <_ZN8TaoCrypt12AbstractRing20MultiplicativeGroupTD0Ev>:
 87585a0:	e8 1f c0 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87585a5:	81 c1 f3 45 c1 00    	add    $0xc145f3,%ecx
 87585ab:	55                   	push   %ebp
 87585ac:	89 e5                	mov    %esp,%ebp
 87585ae:	8b 81 6c fe ff ff    	mov    -0x194(%ecx),%eax
 87585b4:	8d 50 08             	lea    0x8(%eax),%edx
 87585b7:	8b 45 08             	mov    0x8(%ebp),%eax
 87585ba:	89 10                	mov    %edx,(%eax)
 87585bc:	5d                   	pop    %ebp
 87585bd:	c3                   	ret
 87585be:	90                   	nop
 87585bf:	90                   	nop

087585c0 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT5EqualERKNS_7IntegerES4_>:
 87585c0:	55                   	push   %ebp
 87585c1:	89 e5                	mov    %esp,%ebp
 87585c3:	83 ec 18             	sub    $0x18,%esp
 87585c6:	8b 45 08             	mov    0x8(%ebp),%eax
 87585c9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87585cc:	8b 40 04             	mov    0x4(%eax),%eax
 87585cf:	8b 10                	mov    (%eax),%edx
 87585d1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87585d5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87585d8:	89 04 24             	mov    %eax,(%esp)
 87585db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87585df:	ff 52 08             	call   *0x8(%edx)
 87585e2:	c9                   	leave
 87585e3:	c3                   	ret
 87585e4:	90                   	nop
 87585e5:	90                   	nop
 87585e6:	90                   	nop
 87585e7:	90                   	nop
 87585e8:	90                   	nop
 87585e9:	90                   	nop
 87585ea:	90                   	nop
 87585eb:	90                   	nop
 87585ec:	90                   	nop
 87585ed:	90                   	nop
 87585ee:	90                   	nop
 87585ef:	90                   	nop

087585f0 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT8IdentityEv>:
 87585f0:	55                   	push   %ebp
 87585f1:	89 e5                	mov    %esp,%ebp
 87585f3:	83 ec 18             	sub    $0x18,%esp
 87585f6:	8b 45 08             	mov    0x8(%ebp),%eax
 87585f9:	8b 40 04             	mov    0x4(%eax),%eax
 87585fc:	8b 10                	mov    (%eax),%edx
 87585fe:	89 04 24             	mov    %eax,(%esp)
 8758601:	ff 52 3c             	call   *0x3c(%edx)
 8758604:	c9                   	leave
 8758605:	c3                   	ret
 8758606:	90                   	nop
 8758607:	90                   	nop
 8758608:	90                   	nop
 8758609:	90                   	nop
 875860a:	90                   	nop
 875860b:	90                   	nop
 875860c:	90                   	nop
 875860d:	90                   	nop
 875860e:	90                   	nop
 875860f:	90                   	nop

08758610 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT3AddERKNS_7IntegerES4_>:
 8758610:	55                   	push   %ebp
 8758611:	89 e5                	mov    %esp,%ebp
 8758613:	83 ec 18             	sub    $0x18,%esp
 8758616:	8b 45 08             	mov    0x8(%ebp),%eax
 8758619:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875861c:	8b 40 04             	mov    0x4(%eax),%eax
 875861f:	8b 10                	mov    (%eax),%edx
 8758621:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8758625:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8758628:	89 04 24             	mov    %eax,(%esp)
 875862b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875862f:	ff 52 40             	call   *0x40(%edx)
 8758632:	c9                   	leave
 8758633:	c3                   	ret
 8758634:	90                   	nop
 8758635:	90                   	nop
 8758636:	90                   	nop
 8758637:	90                   	nop
 8758638:	90                   	nop
 8758639:	90                   	nop
 875863a:	90                   	nop
 875863b:	90                   	nop
 875863c:	90                   	nop
 875863d:	90                   	nop
 875863e:	90                   	nop
 875863f:	90                   	nop

08758640 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT7InverseERKNS_7IntegerE>:
 8758640:	55                   	push   %ebp
 8758641:	89 e5                	mov    %esp,%ebp
 8758643:	83 ec 18             	sub    $0x18,%esp
 8758646:	8b 45 08             	mov    0x8(%ebp),%eax
 8758649:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875864c:	8b 40 04             	mov    0x4(%eax),%eax
 875864f:	8b 10                	mov    (%eax),%edx
 8758651:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8758655:	89 04 24             	mov    %eax,(%esp)
 8758658:	ff 52 44             	call   *0x44(%edx)
 875865b:	c9                   	leave
 875865c:	c3                   	ret
 875865d:	90                   	nop
 875865e:	90                   	nop
 875865f:	90                   	nop

08758660 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT8SubtractERKNS_7IntegerES4_>:
 8758660:	55                   	push   %ebp
 8758661:	89 e5                	mov    %esp,%ebp
 8758663:	83 ec 18             	sub    $0x18,%esp
 8758666:	8b 45 08             	mov    0x8(%ebp),%eax
 8758669:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875866c:	8b 40 04             	mov    0x4(%eax),%eax
 875866f:	8b 10                	mov    (%eax),%edx
 8758671:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8758675:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8758678:	89 04 24             	mov    %eax,(%esp)
 875867b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875867f:	ff 52 4c             	call   *0x4c(%edx)
 8758682:	c9                   	leave
 8758683:	c3                   	ret
 8758684:	90                   	nop
 8758685:	90                   	nop
 8758686:	90                   	nop
 8758687:	90                   	nop
 8758688:	90                   	nop
 8758689:	90                   	nop
 875868a:	90                   	nop
 875868b:	90                   	nop
 875868c:	90                   	nop
 875868d:	90                   	nop
 875868e:	90                   	nop
 875868f:	90                   	nop

08758690 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT6DoubleERKNS_7IntegerE>:
 8758690:	55                   	push   %ebp
 8758691:	89 e5                	mov    %esp,%ebp
 8758693:	83 ec 18             	sub    $0x18,%esp
 8758696:	8b 45 08             	mov    0x8(%ebp),%eax
 8758699:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875869c:	8b 40 04             	mov    0x4(%eax),%eax
 875869f:	8b 10                	mov    (%eax),%edx
 87586a1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87586a5:	89 04 24             	mov    %eax,(%esp)
 87586a8:	ff 52 48             	call   *0x48(%edx)
 87586ab:	c9                   	leave
 87586ac:	c3                   	ret
 87586ad:	90                   	nop
 87586ae:	90                   	nop
 87586af:	90                   	nop

087586b0 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT14ScalarMultiplyERKNS_7IntegerES4_>:
 87586b0:	55                   	push   %ebp
 87586b1:	89 e5                	mov    %esp,%ebp
 87586b3:	56                   	push   %esi
 87586b4:	83 ec 14             	sub    $0x14,%esp
 87586b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87586ba:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87586bd:	8b 75 08             	mov    0x8(%ebp),%esi
 87586c0:	8b 40 04             	mov    0x4(%eax),%eax
 87586c3:	8b 10                	mov    (%eax),%edx
 87586c5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87586c9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87586cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 87586d0:	89 34 24             	mov    %esi,(%esp)
 87586d3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87586d7:	ff 52 50             	call   *0x50(%edx)
 87586da:	89 f0                	mov    %esi,%eax
 87586dc:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87586df:	83 ec 04             	sub    $0x4,%esp
 87586e2:	c9                   	leave
 87586e3:	c2 04 00             	ret    $0x4
 87586e6:	90                   	nop
 87586e7:	90                   	nop
 87586e8:	90                   	nop
 87586e9:	90                   	nop
 87586ea:	90                   	nop
 87586eb:	90                   	nop
 87586ec:	90                   	nop
 87586ed:	90                   	nop
 87586ee:	90                   	nop
 87586ef:	90                   	nop

087586f0 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT21CascadeScalarMultiplyERKNS_7IntegerES4_S4_S4_>:
 87586f0:	55                   	push   %ebp
 87586f1:	89 e5                	mov    %esp,%ebp
 87586f3:	56                   	push   %esi
 87586f4:	83 ec 24             	sub    $0x24,%esp
 87586f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87586fa:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 87586fd:	8b 75 08             	mov    0x8(%ebp),%esi
 8758700:	8b 40 04             	mov    0x4(%eax),%eax
 8758703:	8b 10                	mov    (%eax),%edx
 8758705:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8758709:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875870c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8758710:	89 34 24             	mov    %esi,(%esp)
 8758713:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8758717:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875871a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875871e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8758721:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8758725:	ff 52 54             	call   *0x54(%edx)
 8758728:	89 f0                	mov    %esi,%eax
 875872a:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875872d:	83 ec 04             	sub    $0x4,%esp
 8758730:	c9                   	leave
 8758731:	c2 04 00             	ret    $0x4
 8758734:	90                   	nop
 8758735:	90                   	nop
 8758736:	90                   	nop
 8758737:	90                   	nop
 8758738:	90                   	nop
 8758739:	90                   	nop
 875873a:	90                   	nop
 875873b:	90                   	nop
 875873c:	90                   	nop
 875873d:	90                   	nop
 875873e:	90                   	nop
 875873f:	90                   	nop

08758740 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT20SimultaneousMultiplyEPNS_7IntegerERKS2_PS4_j>:
 8758740:	55                   	push   %ebp
 8758741:	89 e5                	mov    %esp,%ebp
 8758743:	83 ec 28             	sub    $0x28,%esp
 8758746:	8b 45 08             	mov    0x8(%ebp),%eax
 8758749:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875874c:	8b 40 04             	mov    0x4(%eax),%eax
 875874f:	8b 10                	mov    (%eax),%edx
 8758751:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8758755:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8758758:	89 04 24             	mov    %eax,(%esp)
 875875b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875875f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8758762:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8758766:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8758769:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875876d:	ff 52 58             	call   *0x58(%edx)
 8758770:	c9                   	leave
 8758771:	c3                   	ret
 8758772:	90                   	nop
 8758773:	90                   	nop
 8758774:	90                   	nop
 8758775:	90                   	nop
 8758776:	90                   	nop
 8758777:	90                   	nop
 8758778:	90                   	nop
 8758779:	90                   	nop
 875877a:	90                   	nop
 875877b:	90                   	nop
 875877c:	90                   	nop
 875877d:	90                   	nop
 875877e:	90                   	nop
 875877f:	90                   	nop

08758780 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT6ReduceERNS_7IntegerERKS2_>:
 8758780:	55                   	push   %ebp
 8758781:	89 e5                	mov    %esp,%ebp
 8758783:	83 ec 18             	sub    $0x18,%esp
 8758786:	8b 45 08             	mov    0x8(%ebp),%eax
 8758789:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 875878c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875878f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8758792:	8b 75 0c             	mov    0xc(%ebp),%esi
 8758795:	e8 5e a6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875879a:	81 c3 fe 43 c1 00    	add    $0xc143fe,%ebx
 87587a0:	8b 40 04             	mov    0x4(%eax),%eax
 87587a3:	8b 10                	mov    (%eax),%edx
 87587a5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87587a9:	89 74 24 04          	mov    %esi,0x4(%esp)
 87587ad:	89 04 24             	mov    %eax,(%esp)
 87587b0:	ff 52 4c             	call   *0x4c(%edx)
 87587b3:	89 34 24             	mov    %esi,(%esp)
 87587b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87587ba:	e8 a1 7c 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87587bf:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87587c2:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87587c5:	89 ec                	mov    %ebp,%esp
 87587c7:	5d                   	pop    %ebp
 87587c8:	c3                   	ret
 87587c9:	90                   	nop
 87587ca:	90                   	nop
 87587cb:	90                   	nop
 87587cc:	90                   	nop
 87587cd:	90                   	nop
 87587ce:	90                   	nop
 87587cf:	90                   	nop

087587d0 <_ZNK8TaoCrypt12AbstractRing20MultiplicativeGroupT10AccumulateERNS_7IntegerERKS2_>:
 87587d0:	55                   	push   %ebp
 87587d1:	89 e5                	mov    %esp,%ebp
 87587d3:	83 ec 18             	sub    $0x18,%esp
 87587d6:	8b 45 08             	mov    0x8(%ebp),%eax
 87587d9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87587dc:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87587df:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87587e2:	8b 75 0c             	mov    0xc(%ebp),%esi
 87587e5:	e8 0e a6 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87587ea:	81 c3 ae 43 c1 00    	add    $0xc143ae,%ebx
 87587f0:	8b 40 04             	mov    0x4(%eax),%eax
 87587f3:	8b 10                	mov    (%eax),%edx
 87587f5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87587f9:	89 74 24 04          	mov    %esi,0x4(%esp)
 87587fd:	89 04 24             	mov    %eax,(%esp)
 8758800:	ff 52 40             	call   *0x40(%edx)
 8758803:	89 34 24             	mov    %esi,(%esp)
 8758806:	89 44 24 04          	mov    %eax,0x4(%esp)
 875880a:	e8 51 7c 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 875880f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8758812:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8758815:	89 ec                	mov    %ebp,%esp
 8758817:	5d                   	pop    %ebp
 8758818:	c3                   	ret
 8758819:	90                   	nop
 875881a:	90                   	nop
 875881b:	90                   	nop
 875881c:	90                   	nop
 875881d:	90                   	nop
 875881e:	90                   	nop
 875881f:	90                   	nop

```

```c
// TaoCrypt::DSA_Verifier::Verify @ 0x8757f50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Verifier::Verify(unsigned char const*, unsigned char const*) */

bool __thiscall TaoCrypt::DSA_Verifier::Verify(DSA_Verifier *this,uchar *param_1,uchar *param_2)

{
  Integer *pIVar1;
  Integer *pIVar2;
  Integer *pIVar3;
  undefined4 uVar4;
  int iVar5;
  size_t __n;
  byte extraout_var;
  Integer *pIVar6;
  undefined *puVar7;
  Integer *this_00;
  uint uVar8;
  byte local_11c;
  undefined *local_f8;
  undefined *local_f4;
  Integer *local_f0;
  int local_ec;
  void *local_e8;
  int local_dc;
  void *local_d8;
  int local_cc;
  void *local_c8;
  int local_bc;
  void *local_b8;
  int local_ac;
  void *local_a8;
  int local_9c;
  void *local_98;
  int local_8c;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  pIVar1 = (Integer *)DSA_PublicKey::GetModulus(*(DSA_PublicKey **)this);
  pIVar2 = (Integer *)DSA_PublicKey::GetSubGroupOrder(*(DSA_PublicKey **)this);
  pIVar3 = (Integer *)DSA_PublicKey::GetSubGroupGenerator(*(DSA_PublicKey **)this);
  uVar4 = DSA_PublicKey::GetPublicPart(*(DSA_PublicKey **)this);
  iVar5 = Integer::ByteCount(pIVar2);
  this_00 = (Integer *)(this + 4);
  Integer::Decode(this_00,param_2,iVar5,0);
  pIVar6 = (Integer *)(this + 0x14);
  Integer::Decode(pIVar6,param_2 + iVar5,iVar5,0);
  iVar5 = Integer::Compare(this_00,pIVar2);
  if (-1 < iVar5) {
    return false;
  }
  Integer::Integer((Integer *)&local_2c,1);
  iVar5 = Integer::Compare(this_00,(Integer *)&local_2c);
  if ((iVar5 < 0) || (iVar5 = Integer::Compare(pIVar6,pIVar2), -1 < iVar5)) {
    local_11c = 1;
  }
  else {
    Integer::Integer((Integer *)&local_3c,1);
    Integer::Compare(pIVar6,(Integer *)&local_3c);
    uVar8 = 0;
    local_11c = extraout_var >> 7;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar8 & 0xffffff00);
  }
  uVar8 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar8 & 0xffffff00);
  if (local_11c != 0) {
    return false;
  }
  Integer::Integer((Integer *)&local_4c,param_1,0x14,0);
  Integer::InverseMod((Integer *)&local_5c);
  Integer::Times((Integer *)&local_7c);
  pIVar2 = (Integer *)&local_6c;
  Integer::Modulo(pIVar2);
  uVar8 = 0;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar8 & 0xffffff00);
  Integer::Times((Integer *)&local_9c);
  pIVar6 = (Integer *)&local_8c;
  Integer::Modulo(pIVar6);
  uVar8 = 0;
  memset(local_98,0,local_9c << 2);
  operator_delete__(local_98,uVar8 & 0xffffff00);
  local_f4 = PTR_vtable_0936cb58 + 8;
  puVar7 = PTR_vtable_0936c8e8 + 8;
  local_f8 = puVar7;
  local_f0 = (Integer *)&local_f8;
  Integer::Integer((Integer *)&local_ec,pIVar1);
  Integer::Integer((Integer *)&local_dc,0,*(uint *)pIVar1);
  Integer::Integer((Integer *)&local_cc);
  ModularArithmetic::CascadeExponentiate((Integer *)&local_ac,(Integer *)&local_f8,pIVar3,pIVar2);
  Integer::Modulo((Integer *)&local_bc);
  Integer::operator=((Integer *)&local_ac,(Integer *)&local_bc);
  uVar8 = 0;
  __n = local_bc << 2;
  memset(local_b8,0,__n);
  operator_delete__(local_b8,uVar8 & 0xffffff00,__n,pIVar2,uVar4,pIVar6);
  iVar5 = Integer::Compare(this_00,(Integer *)&local_ac);
  uVar8 = 0;
  memset(local_a8,0,local_ac << 2);
  operator_delete__(local_a8,uVar8 & 0xffffff00);
  uVar8 = 0;
  local_f8 = puVar7;
  memset(local_c8,0,local_cc << 2);
  operator_delete__(local_c8,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_d8,0,local_dc << 2);
  operator_delete__(local_d8,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_e8,0,local_ec << 2);
  operator_delete__(local_e8,uVar8 & 0xffffff00);
  uVar8 = 0;
  local_f8 = PTR_vtable_0936ca04 + 8;
  local_f4 = local_f8;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar8 & 0xffffff00);
  uVar8 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar8 & 0xffffff00);
  return iVar5 == 0;
}

```

