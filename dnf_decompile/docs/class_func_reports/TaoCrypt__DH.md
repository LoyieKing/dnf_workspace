# TaoCrypt__DH

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Agree

```asm
// === 087a8820 TaoCrypt::DH::Agree  [0x087a8820-0x87a898f] ===
 87a8820:	55                   	push   %ebp
 87a8821:	89 e5                	mov    %esp,%ebp
 87a8823:	57                   	push   %edi
 87a8824:	56                   	push   %esi
 87a8825:	53                   	push   %ebx
 87a8826:	e8 cd a5 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a882b:	81 c3 6d 43 bc 00    	add    $0xbc436d,%ebx
 87a8831:	83 ec 5c             	sub    $0x5c,%esp
 87a8834:	8b 75 08             	mov    0x8(%ebp),%esi
 87a8837:	8b 7d 18             	mov    0x18(%ebp),%edi
 87a883a:	89 34 24             	mov    %esi,(%esp)
 87a883d:	e8 ee 63 fb ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 87a8842:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a8849:	00 
 87a884a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87a884d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8851:	8b 45 10             	mov    0x10(%ebp),%eax
 87a8854:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8858:	8d 45 d8             	lea    -0x28(%ebp),%eax
 87a885b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 87a885e:	89 04 24             	mov    %eax,(%esp)
 87a8861:	e8 9a 8a fb ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 87a8866:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87a8869:	89 14 24             	mov    %edx,(%esp)
 87a886c:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87a886f:	e8 1c 6d fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a8874:	85 ff                	test   %edi,%edi
 87a8876:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a8879:	0f 85 e9 00 00 00    	jne    87a8968 <_ZN8TaoCrypt2DH5AgreeEPhPKhS3_j+0x148>
 87a887f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a8882:	89 14 24             	mov    %edx,(%esp)
 87a8885:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87a8888:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a888f:	00 
 87a8890:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8894:	8b 45 14             	mov    0x14(%ebp),%eax
 87a8897:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a889b:	e8 b0 87 fb ff       	call   8761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>
 87a88a0:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a88a3:	8b 45 b0             	mov    -0x50(%ebp),%eax
 87a88a6:	8d 7d b8             	lea    -0x48(%ebp),%edi
 87a88a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a88ad:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87a88b1:	89 3c 24             	mov    %edi,(%esp)
 87a88b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a88b8:	e8 73 6d fb ff       	call   875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>
 87a88bd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 87a88c0:	83 ec 04             	sub    $0x4,%esp
 87a88c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a88c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a88ca:	89 3c 24             	mov    %edi,(%esp)
 87a88cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a88d4:	00 
 87a88d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a88d9:	e8 32 86 fb ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 87a88de:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a88e1:	8b 75 bc             	mov    -0x44(%ebp),%esi
 87a88e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a88eb:	00 
 87a88ec:	c1 e0 02             	shl    $0x2,%eax
 87a88ef:	89 34 24             	mov    %esi,(%esp)
 87a88f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a88f6:	e8 c5 53 8d ff       	call   807dcc0 <memset@plt>
 87a88fb:	89 34 24             	mov    %esi,(%esp)
 87a88fe:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8903:	e8 18 ee fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8908:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a890b:	8b 75 cc             	mov    -0x34(%ebp),%esi
 87a890e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8915:	00 
 87a8916:	c1 e0 02             	shl    $0x2,%eax
 87a8919:	89 34 24             	mov    %esi,(%esp)
 87a891c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8920:	e8 9b 53 8d ff       	call   807dcc0 <memset@plt>
 87a8925:	89 34 24             	mov    %esi,(%esp)
 87a8928:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a892d:	e8 ee ed fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8932:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a8935:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a8938:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a893f:	00 
 87a8940:	c1 e0 02             	shl    $0x2,%eax
 87a8943:	89 34 24             	mov    %esi,(%esp)
 87a8946:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a894a:	e8 71 53 8d ff       	call   807dcc0 <memset@plt>
 87a894f:	89 34 24             	mov    %esi,(%esp)
 87a8952:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8957:	e8 c4 ed fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a895c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87a895f:	5b                   	pop    %ebx
 87a8960:	5e                   	pop    %esi
 87a8961:	5f                   	pop    %edi
 87a8962:	5d                   	pop    %ebp
 87a8963:	c3                   	ret
 87a8964:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a8968:	8b 45 14             	mov    0x14(%ebp),%eax
 87a896b:	89 14 24             	mov    %edx,(%esp)
 87a896e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a8975:	00 
 87a8976:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a897a:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a897e:	e8 cd 86 fb ff       	call   8761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>
 87a8983:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a8986:	e9 18 ff ff ff       	jmp    87a88a3 <_ZN8TaoCrypt2DH5AgreeEPhPKhS3_j+0x83>
 87a898b:	90                   	nop
 87a898c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DH::Agree @ 0x87a8820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::Agree(unsigned char*, unsigned char const*, unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::DH::Agree(DH *this,uchar *param_1,uchar *param_2,uchar *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a882b;
  uVar1 = Integer::ByteCount((Integer *)this);
  Integer::Integer((Integer *)&local_2c,param_2,uVar1,0);
  Integer::Integer((Integer *)&local_3c);
  if (param_4 == 0) {
    Integer::Decode((Integer *)&local_3c,param_3,uVar1,0);
  }
  else {
    Integer::Decode((Integer *)&local_3c,param_3,param_4,0);
  }
  a_exp_b_mod_c((TaoCrypt *)&local_4c,(Integer *)&local_3c,(Integer *)&local_2c,(Integer *)this);
  Integer::Encode((Integer *)&local_4c,param_1,uVar1,0);
  uVar2 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}

```

---

## DH

```asm
// === 087a87d0 TaoCrypt::DH::DH  [0x087a87d0-0x87a881f] ===
 87a87d0:	55                   	push   %ebp
 87a87d1:	89 e5                	mov    %esp,%ebp
 87a87d3:	83 ec 18             	sub    $0x18,%esp
 87a87d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87a87d9:	e8 1a a6 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a87de:	81 c3 ba 43 bc 00    	add    $0xbc43ba,%ebx
 87a87e4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87a87e7:	8b 75 08             	mov    0x8(%ebp),%esi
 87a87ea:	89 34 24             	mov    %esi,(%esp)
 87a87ed:	e8 9e 6d fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a87f2:	8d 46 10             	lea    0x10(%esi),%eax
 87a87f5:	89 04 24             	mov    %eax,(%esp)
 87a87f8:	e8 93 6d fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a87fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a8800:	89 34 24             	mov    %esi,(%esp)
 87a8803:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8807:	e8 84 ff ff ff       	call   87a8790 <_ZN8TaoCrypt2DH10InitializeERNS_6SourceE>
 87a880c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87a880f:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87a8812:	89 ec                	mov    %ebp,%esp
 87a8814:	5d                   	pop    %ebp
 87a8815:	c3                   	ret
 87a8816:	8d 76 00             	lea    0x0(%esi),%esi
 87a8819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::DH::DH @ 0x87a87d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::DH(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DH::DH(DH *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Initialize(this,param_1);
  return;
}

```

---

## GenerateKeyPair

```asm
// === 087a8c70 TaoCrypt::DH::GenerateKeyPair  [0x087a8c70-0x87a8ccf] ===
 87a8c70:	55                   	push   %ebp
 87a8c71:	89 e5                	mov    %esp,%ebp
 87a8c73:	83 ec 28             	sub    $0x28,%esp
 87a8c76:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a8c79:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a8c7c:	e8 77 a1 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a8c81:	81 c3 17 3f bc 00    	add    $0xbc3f17,%ebx
 87a8c87:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a8c8a:	8b 75 08             	mov    0x8(%ebp),%esi
 87a8c8d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a8c90:	8b 7d 10             	mov    0x10(%ebp),%edi
 87a8c93:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8c97:	89 34 24             	mov    %esi,(%esp)
 87a8c9a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a8c9e:	e8 cd fd ff ff       	call   87a8a70 <_ZN8TaoCrypt2DH15GeneratePrivateERNS_21RandomNumberGeneratorEPh>
 87a8ca3:	8b 45 14             	mov    0x14(%ebp),%eax
 87a8ca6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a8caa:	89 34 24             	mov    %esi,(%esp)
 87a8cad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8cb1:	e8 da fc ff ff       	call   87a8990 <_ZN8TaoCrypt2DH14GeneratePublicEPKhPh>
 87a8cb6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a8cb9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a8cbc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a8cbf:	89 ec                	mov    %ebp,%esp
 87a8cc1:	5d                   	pop    %ebp
 87a8cc2:	c3                   	ret
 87a8cc3:	90                   	nop
 87a8cc4:	90                   	nop
 87a8cc5:	90                   	nop
 87a8cc6:	90                   	nop
 87a8cc7:	90                   	nop
 87a8cc8:	90                   	nop
 87a8cc9:	90                   	nop
 87a8cca:	90                   	nop
 87a8ccb:	90                   	nop
 87a8ccc:	90                   	nop
 87a8ccd:	90                   	nop
 87a8cce:	90                   	nop
 87a8ccf:	90                   	nop

```

```c
// TaoCrypt::DH::GenerateKeyPair @ 0x87a8c70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)
    */

void __thiscall
TaoCrypt::DH::GenerateKeyPair(DH *this,RandomNumberGenerator *param_1,uchar *param_2,uchar *param_3)

{
  GeneratePrivate(this,param_1,param_2);
  GeneratePublic(this,param_2,param_3);
  return;
}

```

---

## GeneratePrivate

```asm
// === 087a8a70 TaoCrypt::DH::GeneratePrivate  [0x087a8a70-0x87a8c6f] ===
 87a8a70:	55                   	push   %ebp
 87a8a71:	89 e5                	mov    %esp,%ebp
 87a8a73:	57                   	push   %edi
 87a8a74:	56                   	push   %esi
 87a8a75:	53                   	push   %ebx
 87a8a76:	e8 7d a3 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a8a7b:	81 c3 1d 41 bc 00    	add    $0xbc411d,%ebx
 87a8a81:	83 ec 7c             	sub    $0x7c,%esp
 87a8a84:	8b 75 08             	mov    0x8(%ebp),%esi
 87a8a87:	89 34 24             	mov    %esi,(%esp)
 87a8a8a:	e8 51 61 fb ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 87a8a8f:	31 d2                	xor    %edx,%edx
 87a8a91:	83 f8 04             	cmp    $0x4,%eax
 87a8a94:	0f 87 5e 01 00 00    	ja     87a8bf8 <_ZN8TaoCrypt2DH15GeneratePrivateERNS_21RandomNumberGeneratorEPh+0x188>
 87a8a9a:	8d 7d a8             	lea    -0x58(%ebp),%edi
 87a8a9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a8aa1:	89 3c 24             	mov    %edi,(%esp)
 87a8aa4:	e8 c7 82 fb ff       	call   8760d70 <_ZN8TaoCrypt7Integer6Power2Ej>
 87a8aa9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 87a8aac:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87a8aaf:	83 ec 04             	sub    $0x4,%esp
 87a8ab2:	89 04 24             	mov    %eax,(%esp)
 87a8ab5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87a8abc:	00 
 87a8abd:	e8 0e 6a fb ff       	call   875f4d0 <_ZN8TaoCrypt7IntegerC1El>
 87a8ac2:	8b 45 94             	mov    -0x6c(%ebp),%eax
 87a8ac5:	8d 55 b8             	lea    -0x48(%ebp),%edx
 87a8ac8:	89 55 98             	mov    %edx,-0x68(%ebp)
 87a8acb:	89 14 24             	mov    %edx,(%esp)
 87a8ace:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a8ad2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8ad6:	e8 05 76 fb ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 87a8adb:	8b 45 98             	mov    -0x68(%ebp),%eax
 87a8ade:	83 ec 04             	sub    $0x4,%esp
 87a8ae1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a8ae5:	89 04 24             	mov    %eax,(%esp)
 87a8ae8:	e8 33 47 fb ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 87a8aed:	85 c0                	test   %eax,%eax
 87a8aef:	0f 48 7d 98          	cmovs  -0x68(%ebp),%edi
 87a8af3:	e8 08 67 fb ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 87a8af8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87a8afc:	8d 7d d8             	lea    -0x28(%ebp),%edi
 87a8aff:	89 3c 24             	mov    %edi,(%esp)
 87a8b02:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8b06:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a8b09:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8b0d:	e8 de 89 fb ff       	call   87614f0 <_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_>
 87a8b12:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87a8b15:	8b 55 bc             	mov    -0x44(%ebp),%edx
 87a8b18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8b1f:	00 
 87a8b20:	c1 e0 02             	shl    $0x2,%eax
 87a8b23:	89 14 24             	mov    %edx,(%esp)
 87a8b26:	89 55 94             	mov    %edx,-0x6c(%ebp)
 87a8b29:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8b2d:	e8 8e 51 8d ff       	call   807dcc0 <memset@plt>
 87a8b32:	8b 55 94             	mov    -0x6c(%ebp),%edx
 87a8b35:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8b3a:	89 14 24             	mov    %edx,(%esp)
 87a8b3d:	e8 de eb fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8b42:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a8b45:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a8b48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8b4f:	00 
 87a8b50:	c1 e0 02             	shl    $0x2,%eax
 87a8b53:	89 14 24             	mov    %edx,(%esp)
 87a8b56:	89 55 94             	mov    %edx,-0x6c(%ebp)
 87a8b59:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8b5d:	e8 5e 51 8d ff       	call   807dcc0 <memset@plt>
 87a8b62:	8b 55 94             	mov    -0x6c(%ebp),%edx
 87a8b65:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8b6a:	89 14 24             	mov    %edx,(%esp)
 87a8b6d:	e8 ae eb fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8b72:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87a8b75:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87a8b78:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8b7f:	00 
 87a8b80:	c1 e0 02             	shl    $0x2,%eax
 87a8b83:	89 14 24             	mov    %edx,(%esp)
 87a8b86:	89 55 94             	mov    %edx,-0x6c(%ebp)
 87a8b89:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8b8d:	e8 2e 51 8d ff       	call   807dcc0 <memset@plt>
 87a8b92:	8b 55 94             	mov    -0x6c(%ebp),%edx
 87a8b95:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8b9a:	89 14 24             	mov    %edx,(%esp)
 87a8b9d:	e8 7e eb fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8ba2:	89 34 24             	mov    %esi,(%esp)
 87a8ba5:	e8 86 60 fb ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 87a8baa:	89 3c 24             	mov    %edi,(%esp)
 87a8bad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a8bb4:	00 
 87a8bb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8bb9:	8b 45 10             	mov    0x10(%ebp),%eax
 87a8bbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8bc0:	e8 4b 83 fb ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 87a8bc5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a8bc8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a8bcb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8bd2:	00 
 87a8bd3:	c1 e0 02             	shl    $0x2,%eax
 87a8bd6:	89 34 24             	mov    %esi,(%esp)
 87a8bd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8bdd:	e8 de 50 8d ff       	call   807dcc0 <memset@plt>
 87a8be2:	89 34 24             	mov    %esi,(%esp)
 87a8be5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8bea:	e8 31 eb fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8bef:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87a8bf2:	5b                   	pop    %ebx
 87a8bf3:	5e                   	pop    %esi
 87a8bf4:	5f                   	pop    %edi
 87a8bf5:	5d                   	pop    %ebp
 87a8bf6:	c3                   	ret
 87a8bf7:	90                   	nop
 87a8bf8:	31 d2                	xor    %edx,%edx
 87a8bfa:	89 45 a0             	mov    %eax,-0x60(%ebp)
 87a8bfd:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87a8c00:	df 6d a0             	fildll -0x60(%ebp)
 87a8c03:	dd 83 f8 3d 9a ff    	fldl   -0x65c208(%ebx)
 87a8c09:	dd 5c 24 08          	fstpl  0x8(%esp)
 87a8c0d:	dd 14 24             	fstl   (%esp)
 87a8c10:	dd 5d 88             	fstpl  -0x78(%ebp)
 87a8c13:	e8 98 4d 8d ff       	call   807d9b0 <pow@plt>
 87a8c18:	dd 45 88             	fldl   -0x78(%ebp)
 87a8c1b:	dd 1c 24             	fstpl  (%esp)
 87a8c1e:	dd 5d 88             	fstpl  -0x78(%ebp)
 87a8c21:	e8 2a 5a 8d ff       	call   807e650 <log@plt>
 87a8c26:	dd 83 00 3e 9a ff    	fldl   -0x65c200(%ebx)
 87a8c2c:	dd 5c 24 08          	fstpl  0x8(%esp)
 87a8c30:	dd 1c 24             	fstpl  (%esp)
 87a8c33:	e8 78 4d 8d ff       	call   807d9b0 <pow@plt>
 87a8c38:	dd 45 88             	fldl   -0x78(%ebp)
 87a8c3b:	dc 8b 08 3e 9a ff    	fmull  -0x65c1f8(%ebx)
 87a8c41:	d9 7d 9e             	fnstcw -0x62(%ebp)
 87a8c44:	0f b7 45 9e          	movzwl -0x62(%ebp),%eax
 87a8c48:	de c9                	fmulp  %st,%st(1)
 87a8c4a:	b4 0c                	mov    $0xc,%ah
 87a8c4c:	66 89 45 9c          	mov    %ax,-0x64(%ebp)
 87a8c50:	d8 a3 94 03 9a ff    	fsubs  -0x65fc6c(%ebx)
 87a8c56:	d9 6d 9c             	fldcw  -0x64(%ebp)
 87a8c59:	df 7d a0             	fistpll -0x60(%ebp)
 87a8c5c:	d9 6d 9e             	fldcw  -0x62(%ebp)
 87a8c5f:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87a8c62:	01 d2                	add    %edx,%edx
 87a8c64:	e9 31 fe ff ff       	jmp    87a8a9a <_ZN8TaoCrypt2DH15GeneratePrivateERNS_21RandomNumberGeneratorEPh+0x2a>
 87a8c69:	90                   	nop
 87a8c6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::DH::GeneratePrivate @ 0x87a8a70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::GeneratePrivate(TaoCrypt::RandomNumberGenerator&, unsigned char*) */

void __thiscall
TaoCrypt::DH::GeneratePrivate(DH *this,RandomNumberGenerator *param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  Integer *pIVar3;
  undefined4 uVar4;
  uint uVar5;
  Integer *pIVar6;
  double dVar7;
  double dVar8;
  ulonglong local_64;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a8a7b;
  uVar1 = Integer::BitCount((Integer *)this);
  uVar5 = 0;
  if (4 < uVar1) {
    local_64 = (ulonglong)uVar1;
    dVar7 = pow((double)local_64,DAT_08d10990);
    dVar8 = log((double)local_64);
    dVar8 = pow(dVar8,DAT_08d10998);
    local_64._0_4_ = (int)(longlong)ROUND(dVar7 * DAT_08d109a0 * dVar8 - (double)DAT_08d0cf2c);
    uVar5 = (int)local_64 * 2;
  }
  Integer::Power2((Integer *)&local_5c,uVar5);
  Integer::Integer((Integer *)&local_3c,1);
  Integer::Minus((Integer *)&local_4c);
  iVar2 = Integer::Compare((Integer *)&local_4c,(Integer *)&local_5c);
  pIVar6 = (Integer *)&local_5c;
  if (iVar2 < 0) {
    pIVar6 = (Integer *)&local_4c;
  }
  pIVar3 = (Integer *)Integer::One();
  Integer::Integer((Integer *)&local_2c,param_1,pIVar3,pIVar6);
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48);
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38);
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58);
  uVar4 = Integer::ByteCount((Integer *)this);
  Integer::Encode((Integer *)&local_2c,param_2,uVar4);
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28);
  return;
}

```

---

## GeneratePublic

```asm
// === 087a8990 TaoCrypt::DH::GeneratePublic  [0x087a8990-0x87a8a6f] ===
 87a8990:	55                   	push   %ebp
 87a8991:	89 e5                	mov    %esp,%ebp
 87a8993:	57                   	push   %edi
 87a8994:	56                   	push   %esi
 87a8995:	53                   	push   %ebx
 87a8996:	e8 5d a4 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a899b:	81 c3 fd 41 bc 00    	add    $0xbc41fd,%ebx
 87a89a1:	83 ec 4c             	sub    $0x4c,%esp
 87a89a4:	8b 75 08             	mov    0x8(%ebp),%esi
 87a89a7:	8d 7d c8             	lea    -0x38(%ebp),%edi
 87a89aa:	89 34 24             	mov    %esi,(%esp)
 87a89ad:	e8 7e 62 fb ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 87a89b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 87a89b5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a89bc:	00 
 87a89bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a89c1:	8d 55 d8             	lea    -0x28(%ebp),%edx
 87a89c4:	89 14 24             	mov    %edx,(%esp)
 87a89c7:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87a89ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a89ce:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87a89d1:	e8 2a 89 fb ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 87a89d6:	8b 55 c0             	mov    -0x40(%ebp),%edx
 87a89d9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87a89dd:	83 c6 10             	add    $0x10,%esi
 87a89e0:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a89e4:	89 3c 24             	mov    %edi,(%esp)
 87a89e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 87a89eb:	e8 40 6c fb ff       	call   875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>
 87a89f0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87a89f3:	83 ec 04             	sub    $0x4,%esp
 87a89f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a89fa:	8b 45 10             	mov    0x10(%ebp),%eax
 87a89fd:	89 3c 24             	mov    %edi,(%esp)
 87a8a00:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87a8a07:	00 
 87a8a08:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a8a0c:	e8 ff 84 fb ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 87a8a11:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a8a14:	8b 75 cc             	mov    -0x34(%ebp),%esi
 87a8a17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8a1e:	00 
 87a8a1f:	c1 e0 02             	shl    $0x2,%eax
 87a8a22:	89 34 24             	mov    %esi,(%esp)
 87a8a25:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8a29:	e8 92 52 8d ff       	call   807dcc0 <memset@plt>
 87a8a2e:	89 34 24             	mov    %esi,(%esp)
 87a8a31:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8a36:	e8 e5 ec fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8a3b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a8a3e:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87a8a41:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a8a48:	00 
 87a8a49:	c1 e0 02             	shl    $0x2,%eax
 87a8a4c:	89 34 24             	mov    %esi,(%esp)
 87a8a4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a8a53:	e8 68 52 8d ff       	call   807dcc0 <memset@plt>
 87a8a58:	89 34 24             	mov    %esi,(%esp)
 87a8a5b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a8a60:	e8 bb ec fb ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a8a65:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87a8a68:	5b                   	pop    %ebx
 87a8a69:	5e                   	pop    %esi
 87a8a6a:	5f                   	pop    %edi
 87a8a6b:	5d                   	pop    %ebp
 87a8a6c:	c3                   	ret
 87a8a6d:	90                   	nop
 87a8a6e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::DH::GeneratePublic @ 0x87a8990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::GeneratePublic(unsigned char const*, unsigned char*) */

void __thiscall TaoCrypt::DH::GeneratePublic(DH *this,uchar *param_1,uchar *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a899b;
  uVar1 = Integer::ByteCount((Integer *)this);
  Integer::Integer((Integer *)&local_2c,param_1,uVar1,0);
  a_exp_b_mod_c((TaoCrypt *)&local_3c,(Integer *)(this + 0x10),(Integer *)&local_2c,(Integer *)this)
  ;
  Integer::Encode((Integer *)&local_3c,param_2,uVar1,0);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}

```

---

## Initialize

```asm
// === 087a8790 TaoCrypt::DH::Initialize  [0x087a8790-0x87a87cf] ===
 87a8790:	55                   	push   %ebp
 87a8791:	89 e5                	mov    %esp,%ebp
 87a8793:	53                   	push   %ebx
 87a8794:	e8 5f a6 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a8799:	81 c3 ff 43 bc 00    	add    $0xbc43ff,%ebx
 87a879f:	83 ec 24             	sub    $0x24,%esp
 87a87a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a87a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87a87a8:	8b 83 84 fd ff ff    	mov    -0x27c(%ebx),%eax
 87a87ae:	83 c0 08             	add    $0x8,%eax
 87a87b1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 87a87b4:	8b 45 08             	mov    0x8(%ebp),%eax
 87a87b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a87bb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 87a87be:	89 04 24             	mov    %eax,(%esp)
 87a87c1:	e8 5a ce fa ff       	call   8755620 <_ZN8TaoCrypt10DH_Decoder6DecodeERNS_2DHE>
 87a87c6:	83 c4 24             	add    $0x24,%esp
 87a87c9:	5b                   	pop    %ebx
 87a87ca:	5d                   	pop    %ebp
 87a87cb:	c3                   	ret
 87a87cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::DH::Initialize @ 0x87a8790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::DH::Initialize(DH *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x87a8799;
  local_10 = param_1;
  local_14 = PTR_vtable_0936c91c + 8;
  DH_Decoder::Decode((DH_Decoder *)&local_14,this);
  return;
}

```

