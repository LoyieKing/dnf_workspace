# yaSSL__DSS

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DSS

```asm
// === 0879b560 yaSSL::DSS::DSS  [0x0879b560-0x879b66f] ===
 879b560:	55                   	push   %ebp
 879b561:	89 e5                	mov    %esp,%ebp
 879b563:	57                   	push   %edi
 879b564:	56                   	push   %esi
 879b565:	53                   	push   %ebx
 879b566:	e8 8d 78 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879b56b:	81 c3 2d 16 bd 00    	add    $0xbd162d,%ebx
 879b571:	83 ec 2c             	sub    $0x2c,%esp
 879b574:	8b 75 08             	mov    0x8(%ebp),%esi
 879b577:	8b 7d 10             	mov    0x10(%ebp),%edi
 879b57a:	0f b6 55 14          	movzbl 0x14(%ebp),%edx
 879b57e:	8b 83 18 fd ff ff    	mov    -0x2e8(%ebx),%eax
 879b584:	83 c0 08             	add    $0x8,%eax
 879b587:	89 06                	mov    %eax,(%esi)
 879b589:	88 55 e0             	mov    %dl,-0x20(%ebp)
 879b58c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879b591:	c7 04 24 90 00 00 00 	movl   $0x90,(%esp)
 879b598:	e8 03 57 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 879b59d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 879b5a0:	89 04 24             	mov    %eax,(%esp)
 879b5a3:	e8 e8 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5ab:	83 c0 10             	add    $0x10,%eax
 879b5ae:	89 04 24             	mov    %eax,(%esp)
 879b5b1:	e8 da 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5b9:	83 c0 20             	add    $0x20,%eax
 879b5bc:	89 04 24             	mov    %eax,(%esp)
 879b5bf:	e8 cc 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5c7:	83 c0 30             	add    $0x30,%eax
 879b5ca:	89 04 24             	mov    %eax,(%esp)
 879b5cd:	e8 be 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5d5:	83 c0 40             	add    $0x40,%eax
 879b5d8:	89 04 24             	mov    %eax,(%esp)
 879b5db:	e8 b0 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5e3:	83 c0 50             	add    $0x50,%eax
 879b5e6:	89 04 24             	mov    %eax,(%esp)
 879b5e9:	e8 a2 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5f1:	83 c0 60             	add    $0x60,%eax
 879b5f4:	89 04 24             	mov    %eax,(%esp)
 879b5f7:	e8 94 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b5fc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b5ff:	83 c0 70             	add    $0x70,%eax
 879b602:	89 04 24             	mov    %eax,(%esp)
 879b605:	e8 86 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b60a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b60d:	83 e8 80             	sub    $0xffffff80,%eax
 879b610:	89 04 24             	mov    %eax,(%esp)
 879b613:	e8 78 3f fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 879b618:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 879b61c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b61f:	84 d2                	test   %dl,%dl
 879b621:	89 46 04             	mov    %eax,0x4(%esi)
 879b624:	75 22                	jne    879b648 <_ZN5yaSSL3DSSC1EPKhjb+0xe8>
 879b626:	8b 45 0c             	mov    0xc(%ebp),%eax
 879b629:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879b62d:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b631:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b634:	89 04 24             	mov    %eax,(%esp)
 879b637:	e8 c4 fd ff ff       	call   879b400 <_ZN5yaSSL3DSS7DSSImpl10SetPrivateEPKhj>
 879b63c:	83 c4 2c             	add    $0x2c,%esp
 879b63f:	5b                   	pop    %ebx
 879b640:	5e                   	pop    %esi
 879b641:	5f                   	pop    %edi
 879b642:	5d                   	pop    %ebp
 879b643:	c3                   	ret
 879b644:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 879b648:	8b 45 0c             	mov    0xc(%ebp),%eax
 879b64b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879b64f:	89 44 24 04          	mov    %eax,0x4(%esp)
 879b653:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 879b656:	89 04 24             	mov    %eax,(%esp)
 879b659:	e8 52 ee ff ff       	call   879a4b0 <_ZN5yaSSL3DSS7DSSImpl9SetPublicEPKhj>
 879b65e:	83 c4 2c             	add    $0x2c,%esp
 879b661:	5b                   	pop    %ebx
 879b662:	5e                   	pop    %esi
 879b663:	5f                   	pop    %edi
 879b664:	5d                   	pop    %ebp
 879b665:	c3                   	ret
 879b666:	8d 76 00             	lea    0x0(%esi),%esi
 879b669:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DSS::DSS @ 0x879b560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool) */

void __thiscall yaSSL::DSS::DSS(DSS *this,uchar *param_1,uint param_2,bool param_3)

{
  Integer *this_00;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c8b0 + 8;
  this_00 = operator_new(0x90,in_stack_ffffffc8 & 0xffffff00);
  TaoCrypt::Integer::Integer(this_00);
  TaoCrypt::Integer::Integer(this_00 + 0x10);
  TaoCrypt::Integer::Integer(this_00 + 0x20);
  TaoCrypt::Integer::Integer(this_00 + 0x30);
  TaoCrypt::Integer::Integer(this_00 + 0x40);
  TaoCrypt::Integer::Integer(this_00 + 0x50);
  TaoCrypt::Integer::Integer(this_00 + 0x60);
  TaoCrypt::Integer::Integer(this_00 + 0x70);
  TaoCrypt::Integer::Integer(this_00 + 0x80);
  *(Integer **)(this + 4) = this_00;
  if (!param_3) {
    DSSImpl::SetPrivate((DSSImpl *)this_00,param_1,param_2);
    return;
  }
  DSSImpl::SetPublic((DSSImpl *)this_00,param_1,param_2);
  return;
}

```

---

## get_signatureLength

```asm
// === 08798f90 yaSSL::DSS::get_signatureLength  [0x08798f90-0x8798fbf] ===
 8798f90:	55                   	push   %ebp
 8798f91:	89 e5                	mov    %esp,%ebp
 8798f93:	53                   	push   %ebx
 8798f94:	83 ec 14             	sub    $0x14,%esp
 8798f97:	8b 45 08             	mov    0x8(%ebp),%eax
 8798f9a:	e8 59 9e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798f9f:	81 c3 f9 3b bd 00    	add    $0xbd3bf9,%ebx
 8798fa5:	8b 40 04             	mov    0x4(%eax),%eax
 8798fa8:	89 04 24             	mov    %eax,(%esp)
 8798fab:	e8 b0 e4 fb ff       	call   8757460 <_ZNK8TaoCrypt13DSA_PublicKey15SignatureLengthEv>
 8798fb0:	83 c4 14             	add    $0x14,%esp
 8798fb3:	5b                   	pop    %ebx
 8798fb4:	5d                   	pop    %ebp
 8798fb5:	c3                   	ret
 8798fb6:	8d 76 00             	lea    0x0(%esi),%esi
 8798fb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DSS::get_signatureLength @ 0x8798f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::get_signatureLength() const */

void __thiscall yaSSL::DSS::get_signatureLength(DSS *this)

{
  TaoCrypt::DSA_PublicKey::SignatureLength(*(DSA_PublicKey **)(this + 4));
  return;
}

```

---

## sign

```asm
// === 0879a820 yaSSL::DSS::sign  [0x0879a820-0x879a8cf] ===
 879a820:	55                   	push   %ebp
 879a821:	89 e5                	mov    %esp,%ebp
 879a823:	56                   	push   %esi
 879a824:	53                   	push   %ebx
 879a825:	83 ec 40             	sub    $0x40,%esp
 879a828:	8b 45 08             	mov    0x8(%ebp),%eax
 879a82b:	e8 c8 85 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a830:	81 c3 68 23 bd 00    	add    $0xbd2368,%ebx
 879a836:	8d 75 d4             	lea    -0x2c(%ebp),%esi
 879a839:	8b 40 04             	mov    0x4(%eax),%eax
 879a83c:	89 34 24             	mov    %esi,(%esp)
 879a83f:	83 c0 40             	add    $0x40,%eax
 879a842:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a846:	e8 f5 cc fb ff       	call   8757540 <_ZN8TaoCrypt10DSA_SignerC1ERKNS_14DSA_PrivateKeyE>
 879a84b:	8b 45 18             	mov    0x18(%ebp),%eax
 879a84e:	8b 00                	mov    (%eax),%eax
 879a850:	89 34 24             	mov    %esi,(%esp)
 879a853:	89 44 24 0c          	mov    %eax,0xc(%esp)
 879a857:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a85a:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a85e:	8b 45 10             	mov    0x10(%ebp),%eax
 879a861:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a865:	e8 86 d1 fb ff       	call   87579f0 <_ZN8TaoCrypt10DSA_Signer4SignEPKhPhRNS_21RandomNumberGeneratorE>
 879a86a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 879a86d:	8b 75 ec             	mov    -0x14(%ebp),%esi
 879a870:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879a877:	00 
 879a878:	c1 e0 02             	shl    $0x2,%eax
 879a87b:	89 34 24             	mov    %esi,(%esp)
 879a87e:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a882:	e8 39 34 8e ff       	call   807dcc0 <memset@plt>
 879a887:	89 34 24             	mov    %esi,(%esp)
 879a88a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a88f:	e8 8c ce fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879a894:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879a897:	8b 75 dc             	mov    -0x24(%ebp),%esi
 879a89a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879a8a1:	00 
 879a8a2:	c1 e0 02             	shl    $0x2,%eax
 879a8a5:	89 34 24             	mov    %esi,(%esp)
 879a8a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a8ac:	e8 0f 34 8e ff       	call   807dcc0 <memset@plt>
 879a8b1:	89 34 24             	mov    %esi,(%esp)
 879a8b4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a8b9:	e8 62 ce fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879a8be:	83 c4 40             	add    $0x40,%esp
 879a8c1:	5b                   	pop    %ebx
 879a8c2:	5e                   	pop    %esi
 879a8c3:	5d                   	pop    %ebp
 879a8c4:	c3                   	ret
 879a8c5:	90                   	nop
 879a8c6:	8d 76 00             	lea    0x0(%esi),%esi
 879a8c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DSS::sign @ 0x879a820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::sign(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&) */

void __thiscall
yaSSL::DSS::sign(DSS *this,uchar *param_1,uchar *param_2,uint param_3,RandomPool *param_4)

{
  uint uVar1;
  DSA_Signer local_30 [4];
  int local_2c;
  void *local_28;
  int local_1c;
  void *local_18;
  
  TaoCrypt::DSA_Signer::DSA_Signer(local_30,(DSA_PrivateKey *)(*(int *)(this + 4) + 0x40));
  TaoCrypt::DSA_Signer::Sign(local_30,param_2,param_1,*(RandomNumberGenerator **)param_4);
  uVar1 = 0;
  memset(local_18,0,local_1c << 2);
  operator_delete__(local_18,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return;
}

```

---

## verify

```asm
// === 0879a8d0 yaSSL::DSS::verify  [0x0879a8d0-0x879a97f] ===
 879a8d0:	55                   	push   %ebp
 879a8d1:	89 e5                	mov    %esp,%ebp
 879a8d3:	83 ec 58             	sub    $0x58,%esp
 879a8d6:	8b 45 08             	mov    0x8(%ebp),%eax
 879a8d9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a8dc:	e8 17 85 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a8e1:	81 c3 b7 22 bd 00    	add    $0xbd22b7,%ebx
 879a8e7:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a8ea:	8d 75 c4             	lea    -0x3c(%ebp),%esi
 879a8ed:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a8f0:	8b 40 04             	mov    0x4(%eax),%eax
 879a8f3:	89 34 24             	mov    %esi,(%esp)
 879a8f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a8fa:	e8 01 cc fb ff       	call   8757500 <_ZN8TaoCrypt12DSA_VerifierC1ERKNS_13DSA_PublicKeyE>
 879a8ff:	8b 45 14             	mov    0x14(%ebp),%eax
 879a902:	89 34 24             	mov    %esi,(%esp)
 879a905:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a909:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a90c:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a910:	e8 3b d6 fb ff       	call   8757f50 <_ZN8TaoCrypt12DSA_Verifier6VerifyEPKhS2_>
 879a915:	8b 75 dc             	mov    -0x24(%ebp),%esi
 879a918:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879a91f:	00 
 879a920:	89 34 24             	mov    %esi,(%esp)
 879a923:	89 c7                	mov    %eax,%edi
 879a925:	8b 45 d8             	mov    -0x28(%ebp),%eax
 879a928:	c1 e0 02             	shl    $0x2,%eax
 879a92b:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a92f:	e8 8c 33 8e ff       	call   807dcc0 <memset@plt>
 879a934:	89 34 24             	mov    %esi,(%esp)
 879a937:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a93c:	e8 df cd fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879a941:	8b 45 c8             	mov    -0x38(%ebp),%eax
 879a944:	8b 75 cc             	mov    -0x34(%ebp),%esi
 879a947:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879a94e:	00 
 879a94f:	c1 e0 02             	shl    $0x2,%eax
 879a952:	89 34 24             	mov    %esi,(%esp)
 879a955:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a959:	e8 62 33 8e ff       	call   807dcc0 <memset@plt>
 879a95e:	89 34 24             	mov    %esi,(%esp)
 879a961:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879a966:	e8 b5 cd fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879a96b:	89 f8                	mov    %edi,%eax
 879a96d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a970:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a973:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a976:	89 ec                	mov    %ebp,%esp
 879a978:	5d                   	pop    %ebp
 879a979:	c3                   	ret
 879a97a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::DSS::verify @ 0x879a8d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int) */

undefined4 yaSSL::DSS::verify(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  DSA_Verifier local_40 [4];
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  TaoCrypt::DSA_Verifier::DSA_Verifier(local_40,*(DSA_PublicKey **)(param_1 + 4));
  uVar1 = TaoCrypt::DSA_Verifier::Verify(local_40,(uchar *)param_2,(uchar *)param_4);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  return uVar1;
}

```

---

## ~DSS

```asm
// === 0879ba40 yaSSL::DSS::~DSS  [0x0879ba40-0x879bc2f] ===
 879ba40:	55                   	push   %ebp
 879ba41:	89 e5                	mov    %esp,%ebp
 879ba43:	57                   	push   %edi
 879ba44:	56                   	push   %esi
 879ba45:	53                   	push   %ebx
 879ba46:	e8 ad 73 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ba4b:	81 c3 4d 11 bd 00    	add    $0xbd114d,%ebx
 879ba51:	83 ec 2c             	sub    $0x2c,%esp
 879ba54:	8b 55 08             	mov    0x8(%ebp),%edx
 879ba57:	8b 72 04             	mov    0x4(%edx),%esi
 879ba5a:	8b 83 18 fd ff ff    	mov    -0x2e8(%ebx),%eax
 879ba60:	83 c0 08             	add    $0x8,%eax
 879ba63:	85 f6                	test   %esi,%esi
 879ba65:	89 02                	mov    %eax,(%edx)
 879ba67:	0f 84 94 01 00 00    	je     879bc01 <_ZN5yaSSL3DSSD1Ev+0x1c1>
 879ba6d:	8b 86 80 00 00 00    	mov    0x80(%esi),%eax
 879ba73:	8b be 84 00 00 00    	mov    0x84(%esi),%edi
 879ba79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ba80:	00 
 879ba81:	c1 e0 02             	shl    $0x2,%eax
 879ba84:	89 3c 24             	mov    %edi,(%esp)
 879ba87:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ba8b:	e8 30 22 8e ff       	call   807dcc0 <memset@plt>
 879ba90:	89 3c 24             	mov    %edi,(%esp)
 879ba93:	8d 7e 40             	lea    0x40(%esi),%edi
 879ba96:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ba9b:	e8 80 bc fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879baa0:	8b 47 30             	mov    0x30(%edi),%eax
 879baa3:	8b 57 34             	mov    0x34(%edi),%edx
 879baa6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879baad:	00 
 879baae:	c1 e0 02             	shl    $0x2,%eax
 879bab1:	89 14 24             	mov    %edx,(%esp)
 879bab4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879bab7:	89 44 24 08          	mov    %eax,0x8(%esp)
 879babb:	e8 00 22 8e ff       	call   807dcc0 <memset@plt>
 879bac0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879bac3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bac8:	89 14 24             	mov    %edx,(%esp)
 879bacb:	e8 50 bc fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bad0:	8b 47 20             	mov    0x20(%edi),%eax
 879bad3:	8b 57 24             	mov    0x24(%edi),%edx
 879bad6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879badd:	00 
 879bade:	c1 e0 02             	shl    $0x2,%eax
 879bae1:	89 14 24             	mov    %edx,(%esp)
 879bae4:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879bae7:	89 44 24 08          	mov    %eax,0x8(%esp)
 879baeb:	e8 d0 21 8e ff       	call   807dcc0 <memset@plt>
 879baf0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879baf3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879baf8:	89 14 24             	mov    %edx,(%esp)
 879bafb:	e8 20 bc fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bb00:	8b 47 10             	mov    0x10(%edi),%eax
 879bb03:	8b 57 14             	mov    0x14(%edi),%edx
 879bb06:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879bb0d:	00 
 879bb0e:	c1 e0 02             	shl    $0x2,%eax
 879bb11:	89 14 24             	mov    %edx,(%esp)
 879bb14:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 879bb17:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bb1b:	e8 a0 21 8e ff       	call   807dcc0 <memset@plt>
 879bb20:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 879bb23:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bb28:	89 14 24             	mov    %edx,(%esp)
 879bb2b:	e8 f0 bb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bb30:	8b 46 40             	mov    0x40(%esi),%eax
 879bb33:	8b 7f 04             	mov    0x4(%edi),%edi
 879bb36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879bb3d:	00 
 879bb3e:	c1 e0 02             	shl    $0x2,%eax
 879bb41:	89 3c 24             	mov    %edi,(%esp)
 879bb44:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bb48:	e8 73 21 8e ff       	call   807dcc0 <memset@plt>
 879bb4d:	89 3c 24             	mov    %edi,(%esp)
 879bb50:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bb55:	e8 c6 bb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bb5a:	8b 46 30             	mov    0x30(%esi),%eax
 879bb5d:	8b 7e 34             	mov    0x34(%esi),%edi
 879bb60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879bb67:	00 
 879bb68:	c1 e0 02             	shl    $0x2,%eax
 879bb6b:	89 3c 24             	mov    %edi,(%esp)
 879bb6e:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bb72:	e8 49 21 8e ff       	call   807dcc0 <memset@plt>
 879bb77:	89 3c 24             	mov    %edi,(%esp)
 879bb7a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bb7f:	e8 9c bb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bb84:	8b 46 20             	mov    0x20(%esi),%eax
 879bb87:	8b 7e 24             	mov    0x24(%esi),%edi
 879bb8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879bb91:	00 
 879bb92:	c1 e0 02             	shl    $0x2,%eax
 879bb95:	89 3c 24             	mov    %edi,(%esp)
 879bb98:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bb9c:	e8 1f 21 8e ff       	call   807dcc0 <memset@plt>
 879bba1:	89 3c 24             	mov    %edi,(%esp)
 879bba4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bba9:	e8 72 bb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bbae:	8b 46 10             	mov    0x10(%esi),%eax
 879bbb1:	8b 7e 14             	mov    0x14(%esi),%edi
 879bbb4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879bbbb:	00 
 879bbbc:	c1 e0 02             	shl    $0x2,%eax
 879bbbf:	89 3c 24             	mov    %edi,(%esp)
 879bbc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bbc6:	e8 f5 20 8e ff       	call   807dcc0 <memset@plt>
 879bbcb:	89 3c 24             	mov    %edi,(%esp)
 879bbce:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bbd3:	e8 48 bb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bbd8:	8b 06                	mov    (%esi),%eax
 879bbda:	8b 7e 04             	mov    0x4(%esi),%edi
 879bbdd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879bbe4:	00 
 879bbe5:	c1 e0 02             	shl    $0x2,%eax
 879bbe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 879bbec:	89 3c 24             	mov    %edi,(%esp)
 879bbef:	e8 cc 20 8e ff       	call   807dcc0 <memset@plt>
 879bbf4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bbf9:	89 3c 24             	mov    %edi,(%esp)
 879bbfc:	e8 1f bb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879bc01:	89 34 24             	mov    %esi,(%esp)
 879bc04:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879bc09:	e8 12 4c fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879bc0e:	8b 83 24 fd ff ff    	mov    -0x2dc(%ebx),%eax
 879bc14:	8b 55 08             	mov    0x8(%ebp),%edx
 879bc17:	83 c0 08             	add    $0x8,%eax
 879bc1a:	89 02                	mov    %eax,(%edx)
 879bc1c:	83 c4 2c             	add    $0x2c,%esp
 879bc1f:	5b                   	pop    %ebx
 879bc20:	5e                   	pop    %esi
 879bc21:	5f                   	pop    %edi
 879bc22:	5d                   	pop    %ebp
 879bc23:	c3                   	ret
 879bc24:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879bc2a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DSS::~DSS @ 0x879ba40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::~DSS() */

void __thiscall yaSSL::DSS::~DSS(DSS *this)

{
  int *piVar1;
  void *pvVar2;
  uint in_stack_ffffffc8;
  uint uVar3;
  
  piVar1 = *(int **)(this + 4);
  *(undefined **)this = PTR_vtable_0936c8b0 + 8;
  if (piVar1 != (int *)0x0) {
    pvVar2 = (void *)piVar1[0x21];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x20] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x1d];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x1c] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x19];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x18] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x15];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x14] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x11];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x10] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0xd];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0xc] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[9];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[8] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[5];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[4] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[1];
    uVar3 = 0;
    memset(pvVar2,0,*piVar1 << 2);
    in_stack_ffffffc8 = uVar3 & 0xffffff00;
    operator_delete__(pvVar2,in_stack_ffffffc8);
  }
  operator_delete(piVar1,in_stack_ffffffc8 & 0xffffff00);
  *(undefined **)this = PTR_vtable_0936c8bc + 8;
  return;
}

```

---

## ~DSS_0879bc30

```asm
// === 0879bc30 yaSSL::DSS::~DSS  [0x0879bc30-0x879bc5f] ===
 879bc30:	55                   	push   %ebp
 879bc31:	89 e5                	mov    %esp,%ebp
 879bc33:	53                   	push   %ebx
 879bc34:	e8 bf 71 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879bc39:	81 c3 5f 0f bd 00    	add    $0xbd0f5f,%ebx
 879bc3f:	83 ec 14             	sub    $0x14,%esp
 879bc42:	8b 45 08             	mov    0x8(%ebp),%eax
 879bc45:	89 04 24             	mov    %eax,(%esp)
 879bc48:	e8 f3 fd ff ff       	call   879ba40 <_ZN5yaSSL3DSSD1Ev>
 879bc4d:	83 c4 14             	add    $0x14,%esp
 879bc50:	5b                   	pop    %ebx
 879bc51:	5d                   	pop    %ebp
 879bc52:	c3                   	ret
 879bc53:	90                   	nop
 879bc54:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879bc5a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DSS::~DSS @ 0x879bc30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::~DSS() */

void __thiscall yaSSL::DSS::~DSS(DSS *this)

{
  ~DSS(this);
  return;
}

```

