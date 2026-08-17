# TaoCrypt__DSA_Signer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## DSA_Signer

```asm
// === 08757540 TaoCrypt::DSA_Signer::DSA_Signer  [0x08757540-0x875757f] ===
 8757540:	55                   	push   %ebp
 8757541:	89 e5                	mov    %esp,%ebp
 8757543:	83 ec 18             	sub    $0x18,%esp
 8757546:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8757549:	8b 45 0c             	mov    0xc(%ebp),%eax
 875754c:	e8 a7 b8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757551:	81 c3 47 56 c1 00    	add    $0xc15647,%ebx
 8757557:	89 75 fc             	mov    %esi,-0x4(%ebp)
 875755a:	8b 75 08             	mov    0x8(%ebp),%esi
 875755d:	89 06                	mov    %eax,(%esi)
 875755f:	8d 46 04             	lea    0x4(%esi),%eax
 8757562:	83 c6 14             	add    $0x14,%esi
 8757565:	89 04 24             	mov    %eax,(%esp)
 8757568:	e8 23 80 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875756d:	89 34 24             	mov    %esi,(%esp)
 8757570:	e8 1b 80 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8757575:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8757578:	8b 75 fc             	mov    -0x4(%ebp),%esi
 875757b:	89 ec                	mov    %ebp,%esp
 875757d:	5d                   	pop    %ebp
 875757e:	c3                   	ret
 875757f:	90                   	nop

```

```c
// TaoCrypt::DSA_Signer::DSA_Signer @ 0x8757540

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Signer::DSA_Signer(TaoCrypt::DSA_PrivateKey const&) */

void __thiscall TaoCrypt::DSA_Signer::DSA_Signer(DSA_Signer *this,DSA_PrivateKey *param_1)

{
  *(DSA_PrivateKey **)this = param_1;
  Integer::Integer((Integer *)(this + 4));
  Integer::Integer((Integer *)(this + 0x14));
  return;
}

```

---

## GetR

```asm
// === 08757420 TaoCrypt::DSA_Signer::GetR  [0x08757420-0x875742f] ===
 8757420:	55                   	push   %ebp
 8757421:	89 e5                	mov    %esp,%ebp
 8757423:	8b 45 08             	mov    0x8(%ebp),%eax
 8757426:	5d                   	pop    %ebp
 8757427:	83 c0 04             	add    $0x4,%eax
 875742a:	c3                   	ret
 875742b:	90                   	nop
 875742c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_Signer::GetR @ 0x8757420

/* TaoCrypt::DSA_Signer::GetR() const */

DSA_Signer * __thiscall TaoCrypt::DSA_Signer::GetR(DSA_Signer *this)

{
  return this + 4;
}

```

---

## GetS

```asm
// === 08757430 TaoCrypt::DSA_Signer::GetS  [0x08757430-0x875743f] ===
 8757430:	55                   	push   %ebp
 8757431:	89 e5                	mov    %esp,%ebp
 8757433:	8b 45 08             	mov    0x8(%ebp),%eax
 8757436:	5d                   	pop    %ebp
 8757437:	83 c0 14             	add    $0x14,%eax
 875743a:	c3                   	ret
 875743b:	90                   	nop
 875743c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DSA_Signer::GetS @ 0x8757430

/* TaoCrypt::DSA_Signer::GetS() const */

DSA_Signer * __thiscall TaoCrypt::DSA_Signer::GetS(DSA_Signer *this)

{
  return this + 0x14;
}

```

---

## Sign

```asm
// === 087579f0 TaoCrypt::DSA_Signer::Sign  [0x087579f0-0x8757f4f] ===
 87579f0:	55                   	push   %ebp
 87579f1:	89 e5                	mov    %esp,%ebp
 87579f3:	57                   	push   %edi
 87579f4:	56                   	push   %esi
 87579f5:	53                   	push   %ebx
 87579f6:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 87579fc:	8b 7d 08             	mov    0x8(%ebp),%edi
 87579ff:	e8 f4 b3 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757a04:	81 c3 94 51 c1 00    	add    $0xc15194,%ebx
 8757a0a:	8d 75 c8             	lea    -0x38(%ebp),%esi
 8757a0d:	8b 07                	mov    (%edi),%eax
 8757a0f:	89 04 24             	mov    %eax,(%esp)
 8757a12:	e8 b9 f9 ff ff       	call   87573d0 <_ZNK8TaoCrypt13DSA_PublicKey10GetModulusEv>
 8757a17:	89 c2                	mov    %eax,%edx
 8757a19:	8b 07                	mov    (%edi),%eax
 8757a1b:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757a21:	89 04 24             	mov    %eax,(%esp)
 8757a24:	e8 b7 f9 ff ff       	call   87573e0 <_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv>
 8757a29:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8757a2f:	8b 07                	mov    (%edi),%eax
 8757a31:	89 04 24             	mov    %eax,(%esp)
 8757a34:	e8 b7 f9 ff ff       	call   87573f0 <_ZNK8TaoCrypt13DSA_PublicKey20GetSubGroupGeneratorEv>
 8757a39:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 8757a3f:	8b 07                	mov    (%edi),%eax
 8757a41:	89 04 24             	mov    %eax,(%esp)
 8757a44:	e8 c7 f9 ff ff       	call   8757410 <_ZNK8TaoCrypt14DSA_PrivateKey14GetPrivatePartEv>
 8757a49:	89 34 24             	mov    %esi,(%esp)
 8757a4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8757a53:	00 
 8757a54:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8757a5a:	e8 71 7a 00 00       	call   875f4d0 <_ZN8TaoCrypt7IntegerC1El>
 8757a5f:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 8757a65:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8757a68:	89 04 24             	mov    %eax,(%esp)
 8757a6b:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8757a71:	89 74 24 08          	mov    %esi,0x8(%esp)
 8757a75:	8d 75 a8             	lea    -0x58(%ebp),%esi
 8757a78:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8757a7c:	e8 5f 86 00 00       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 8757a81:	83 ec 04             	sub    $0x4,%esp
 8757a84:	89 34 24             	mov    %esi,(%esp)
 8757a87:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8757a8e:	00 
 8757a8f:	e8 3c 7a 00 00       	call   875f4d0 <_ZN8TaoCrypt7IntegerC1El>
 8757a94:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8757a9a:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8757a9d:	89 0c 24             	mov    %ecx,(%esp)
 8757aa0:	89 8d 14 ff ff ff    	mov    %ecx,-0xec(%ebp)
 8757aa6:	89 74 24 08          	mov    %esi,0x8(%esp)
 8757aaa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8757aae:	8b 45 14             	mov    0x14(%ebp),%eax
 8757ab1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757ab5:	e8 36 9a 00 00       	call   87614f0 <_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_>
 8757aba:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8757abd:	8b 75 ac             	mov    -0x54(%ebp),%esi
 8757ac0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757ac7:	00 
 8757ac8:	c1 e0 02             	shl    $0x2,%eax
 8757acb:	89 34 24             	mov    %esi,(%esp)
 8757ace:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757ad2:	e8 e9 61 92 ff       	call   807dcc0 <memset@plt>
 8757ad7:	89 34 24             	mov    %esi,(%esp)
 8757ada:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757adf:	e8 3c fc 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757ae4:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8757ae7:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8757aea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757af1:	00 
 8757af2:	c1 e0 02             	shl    $0x2,%eax
 8757af5:	89 34 24             	mov    %esi,(%esp)
 8757af8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757afc:	e8 bf 61 92 ff       	call   807dcc0 <memset@plt>
 8757b01:	89 34 24             	mov    %esi,(%esp)
 8757b04:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757b09:	e8 12 fc 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757b0e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8757b11:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8757b14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757b1b:	00 
 8757b1c:	c1 e0 02             	shl    $0x2,%eax
 8757b1f:	89 34 24             	mov    %esi,(%esp)
 8757b22:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757b26:	e8 95 61 92 ff       	call   807dcc0 <memset@plt>
 8757b2b:	89 34 24             	mov    %esi,(%esp)
 8757b2e:	8d 77 04             	lea    0x4(%edi),%esi
 8757b31:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757b36:	e8 e5 fb 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757b3b:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757b41:	8d 45 98             	lea    -0x68(%ebp),%eax
 8757b44:	8b 8d 14 ff ff ff    	mov    -0xec(%ebp),%ecx
 8757b4a:	89 04 24             	mov    %eax,(%esp)
 8757b4d:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8757b53:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8757b57:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8757b5d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8757b61:	89 54 24 04          	mov    %edx,0x4(%esp)
 8757b65:	e8 c6 7a 00 00       	call   875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>
 8757b6a:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8757b70:	83 ec 04             	sub    $0x4,%esp
 8757b73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757b77:	89 34 24             	mov    %esi,(%esp)
 8757b7a:	e8 e1 88 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757b7f:	8b 45 98             	mov    -0x68(%ebp),%eax
 8757b82:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8757b85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757b8c:	00 
 8757b8d:	c1 e0 02             	shl    $0x2,%eax
 8757b90:	89 14 24             	mov    %edx,(%esp)
 8757b93:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757b97:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757b9d:	e8 1e 61 92 ff       	call   807dcc0 <memset@plt>
 8757ba2:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757ba8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757bad:	89 14 24             	mov    %edx,(%esp)
 8757bb0:	e8 6b fb 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757bb5:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8757bbb:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8757bc1:	89 04 24             	mov    %eax,(%esp)
 8757bc4:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8757bca:	89 74 24 04          	mov    %esi,0x4(%esp)
 8757bce:	89 54 24 08          	mov    %edx,0x8(%esp)
 8757bd2:	e8 49 aa 00 00       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8757bd7:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8757bdd:	83 ec 04             	sub    $0x4,%esp
 8757be0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757be4:	89 34 24             	mov    %esi,(%esp)
 8757be7:	e8 74 88 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757bec:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8757bf2:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 8757bf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757bff:	00 
 8757c00:	c1 e0 02             	shl    $0x2,%eax
 8757c03:	89 14 24             	mov    %edx,(%esp)
 8757c06:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757c0a:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757c10:	e8 ab 60 92 ff       	call   807dcc0 <memset@plt>
 8757c15:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757c1b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757c20:	89 14 24             	mov    %edx,(%esp)
 8757c23:	e8 f8 fa 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757c28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8757c2b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8757c32:	00 
 8757c33:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8757c3a:	00 
 8757c3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757c3f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8757c42:	89 04 24             	mov    %eax,(%esp)
 8757c45:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8757c4b:	e8 b0 96 00 00       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 8757c50:	8b 8d 14 ff ff ff    	mov    -0xec(%ebp),%ecx
 8757c56:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8757c5c:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 8757c62:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8757c68:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8757c6c:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8757c72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8757c76:	89 0c 24             	mov    %ecx,(%esp)
 8757c79:	e8 62 b5 00 00       	call   87631e0 <_ZNK8TaoCrypt7Integer10InverseModERKS0_>
 8757c7e:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 8757c84:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 8757c8a:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757c90:	83 c7 14             	add    $0x14,%edi
 8757c93:	83 ec 04             	sub    $0x4,%esp
 8757c96:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8757c9a:	89 14 24             	mov    %edx,(%esp)
 8757c9d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8757ca1:	e8 ba a4 00 00       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8757ca6:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757cac:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 8757cb2:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8757cb8:	89 8d 14 ff ff ff    	mov    %ecx,-0xec(%ebp)
 8757cbe:	83 ec 04             	sub    $0x4,%esp
 8757cc1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8757cc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757cc9:	89 0c 24             	mov    %ecx,(%esp)
 8757ccc:	e8 df 84 00 00       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 8757cd1:	8b 8d 14 ff ff ff    	mov    -0xec(%ebp),%ecx
 8757cd7:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8757cdd:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8757ce3:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8757ce9:	83 ec 04             	sub    $0x4,%esp
 8757cec:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8757cf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8757cf4:	89 04 24             	mov    %eax,(%esp)
 8757cf7:	e8 64 a4 00 00       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8757cfc:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 8757d02:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 8757d08:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8757d0e:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757d14:	83 ec 04             	sub    $0x4,%esp
 8757d17:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8757d1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8757d1f:	89 14 24             	mov    %edx,(%esp)
 8757d22:	e8 f9 a8 00 00       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8757d27:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757d2d:	83 ec 04             	sub    $0x4,%esp
 8757d30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8757d34:	89 3c 24             	mov    %edi,(%esp)
 8757d37:	e8 24 87 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8757d3c:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8757d42:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 8757d48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757d4f:	00 
 8757d50:	c1 e0 02             	shl    $0x2,%eax
 8757d53:	89 14 24             	mov    %edx,(%esp)
 8757d56:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757d5c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757d60:	e8 5b 5f 92 ff       	call   807dcc0 <memset@plt>
 8757d65:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757d6b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757d70:	89 14 24             	mov    %edx,(%esp)
 8757d73:	e8 a8 f9 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757d78:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8757d7e:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8757d84:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757d8b:	00 
 8757d8c:	c1 e0 02             	shl    $0x2,%eax
 8757d8f:	89 14 24             	mov    %edx,(%esp)
 8757d92:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757d98:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757d9c:	e8 1f 5f 92 ff       	call   807dcc0 <memset@plt>
 8757da1:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757da7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757dac:	89 14 24             	mov    %edx,(%esp)
 8757daf:	e8 6c f9 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757db4:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8757dba:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 8757dc0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757dc7:	00 
 8757dc8:	c1 e0 02             	shl    $0x2,%eax
 8757dcb:	89 14 24             	mov    %edx,(%esp)
 8757dce:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757dd4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757dd8:	e8 e3 5e 92 ff       	call   807dcc0 <memset@plt>
 8757ddd:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757de3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757de8:	89 14 24             	mov    %edx,(%esp)
 8757deb:	e8 30 f9 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757df0:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8757df6:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8757dfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757e03:	00 
 8757e04:	c1 e0 02             	shl    $0x2,%eax
 8757e07:	89 14 24             	mov    %edx,(%esp)
 8757e0a:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757e10:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757e14:	e8 a7 5e 92 ff       	call   807dcc0 <memset@plt>
 8757e19:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757e1f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757e24:	89 14 24             	mov    %edx,(%esp)
 8757e27:	e8 f4 f8 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757e2c:	89 34 24             	mov    %esi,(%esp)
 8757e2f:	e8 fc 6d 00 00       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8757e34:	83 f8 13             	cmp    $0x13,%eax
 8757e37:	89 c2                	mov    %eax,%edx
 8757e39:	0f 84 f1 00 00 00    	je     8757f30 <_ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE+0x540>
 8757e3f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8757e42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8757e46:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8757e4c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8757e53:	00 
 8757e54:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8757e58:	89 34 24             	mov    %esi,(%esp)
 8757e5b:	e8 b0 90 00 00       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 8757e60:	89 3c 24             	mov    %edi,(%esp)
 8757e63:	e8 c8 6d 00 00       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8757e68:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8757e6e:	83 f8 13             	cmp    $0x13,%eax
 8757e71:	75 0d                	jne    8757e80 <_ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE+0x490>
 8757e73:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8757e76:	c6 04 11 00          	movb   $0x0,(%ecx,%edx,1)
 8757e7a:	83 c1 01             	add    $0x1,%ecx
 8757e7d:	89 4d 10             	mov    %ecx,0x10(%ebp)
 8757e80:	03 55 10             	add    0x10(%ebp),%edx
 8757e83:	89 3c 24             	mov    %edi,(%esp)
 8757e86:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8757e8d:	00 
 8757e8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8757e92:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757e96:	e8 75 90 00 00       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 8757e9b:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8757ea1:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 8757ea7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757eae:	00 
 8757eaf:	c1 e0 02             	shl    $0x2,%eax
 8757eb2:	89 34 24             	mov    %esi,(%esp)
 8757eb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757eb9:	e8 02 5e 92 ff       	call   807dcc0 <memset@plt>
 8757ebe:	89 34 24             	mov    %esi,(%esp)
 8757ec1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757ec6:	e8 55 f8 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757ecb:	8b 45 88             	mov    -0x78(%ebp),%eax
 8757ece:	8b 75 8c             	mov    -0x74(%ebp),%esi
 8757ed1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757ed8:	00 
 8757ed9:	c1 e0 02             	shl    $0x2,%eax
 8757edc:	89 34 24             	mov    %esi,(%esp)
 8757edf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757ee3:	e8 d8 5d 92 ff       	call   807dcc0 <memset@plt>
 8757ee8:	89 34 24             	mov    %esi,(%esp)
 8757eeb:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757ef0:	e8 2b f8 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757ef5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8757ef8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8757efb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757f02:	00 
 8757f03:	c1 e0 02             	shl    $0x2,%eax
 8757f06:	89 34 24             	mov    %esi,(%esp)
 8757f09:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757f0d:	e8 ae 5d 92 ff       	call   807dcc0 <memset@plt>
 8757f12:	89 34 24             	mov    %esi,(%esp)
 8757f15:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757f1a:	e8 01 f8 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757f1f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8757f22:	b8 28 00 00 00       	mov    $0x28,%eax
 8757f27:	5b                   	pop    %ebx
 8757f28:	5e                   	pop    %esi
 8757f29:	5f                   	pop    %edi
 8757f2a:	5d                   	pop    %ebp
 8757f2b:	c3                   	ret
 8757f2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8757f30:	8b 45 10             	mov    0x10(%ebp),%eax
 8757f33:	c6 00 00             	movb   $0x0,(%eax)
 8757f36:	83 c0 01             	add    $0x1,%eax
 8757f39:	89 45 10             	mov    %eax,0x10(%ebp)
 8757f3c:	e9 fe fe ff ff       	jmp    8757e3f <_ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE+0x44f>
 8757f41:	90                   	nop
 8757f42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8757f49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::DSA_Signer::Sign @ 0x87579f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Signer::Sign(unsigned char const*, unsigned char*,
   TaoCrypt::RandomNumberGenerator&) */

undefined4 __thiscall
TaoCrypt::DSA_Signer::Sign
          (DSA_Signer *this,uchar *param_1,uchar *param_2,RandomNumberGenerator *param_3)

{
  Integer *this_00;
  Integer *pIVar1;
  Integer *pIVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
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
  DSA_PublicKey::GetSubGroupOrder(*(DSA_PublicKey **)this);
  pIVar2 = (Integer *)DSA_PublicKey::GetSubGroupGenerator(*(DSA_PublicKey **)this);
  DSA_PrivateKey::GetPrivatePart(*(DSA_PrivateKey **)this);
  Integer::Integer((Integer *)&local_3c,1);
  Integer::Minus((Integer *)&local_4c);
  Integer::Integer((Integer *)&local_5c,1);
  Integer::Integer((Integer *)&local_2c,param_3,(Integer *)&local_5c,(Integer *)&local_4c);
  uVar5 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_38,0,local_3c << 2);
  this_00 = (Integer *)(this + 4);
  operator_delete__(local_38,uVar5 & 0xffffff00);
  a_exp_b_mod_c((TaoCrypt *)&local_6c,pIVar2,(Integer *)&local_2c,pIVar1);
  Integer::operator=(this_00,(Integer *)&local_6c);
  uVar5 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar5 & 0xffffff00);
  Integer::Modulo((Integer *)&local_dc);
  Integer::operator=(this_00,(Integer *)&local_dc);
  uVar5 = 0;
  memset(local_d8,0,local_dc << 2);
  operator_delete__(local_d8,uVar5 & 0xffffff00);
  Integer::Integer((Integer *)&local_7c,param_1,0x14,0);
  Integer::InverseMod((Integer *)&local_8c);
  pIVar1 = (Integer *)(this + 0x14);
  Integer::Times((Integer *)&local_9c);
  Integer::Plus((Integer *)&local_ac);
  Integer::Times((Integer *)&local_bc);
  Integer::Modulo((Integer *)&local_cc);
  Integer::operator=(pIVar1,(Integer *)&local_cc);
  uVar5 = 0;
  memset(local_c8,0,local_cc << 2);
  operator_delete__(local_c8,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_b8,0,local_bc << 2);
  operator_delete__(local_b8,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_a8,0,local_ac << 2);
  operator_delete__(local_a8,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_98,0,local_9c << 2);
  operator_delete__(local_98,uVar5 & 0xffffff00);
  iVar3 = Integer::ByteCount(this_00);
  if (iVar3 == 0x13) {
    *param_2 = '\0';
    param_2 = param_2 + 1;
  }
  Integer::Encode(this_00,param_2,iVar3,0);
  iVar4 = Integer::ByteCount(pIVar1);
  if (iVar4 == 0x13) {
    param_2[iVar3] = '\0';
    param_2 = param_2 + 1;
  }
  Integer::Encode(pIVar1,param_2 + iVar3,iVar4,0);
  uVar5 = 0;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar5 & 0xffffff00);
  return 0x28;
}

```

