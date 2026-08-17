# yaSSL__HMAC_SHA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## HMAC_SHA

```asm
// === 08799a10 yaSSL::HMAC_SHA::HMAC_SHA  [0x08799a10-0x8799b5f] ===
 8799a10:	55                   	push   %ebp
 8799a11:	89 e5                	mov    %esp,%ebp
 8799a13:	57                   	push   %edi
 8799a14:	56                   	push   %esi
 8799a15:	53                   	push   %ebx
 8799a16:	e8 dd 93 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8799a1b:	81 c3 7d 31 bd 00    	add    $0xbd317d,%ebx
 8799a21:	83 ec 2c             	sub    $0x2c,%esp
 8799a24:	8b 55 08             	mov    0x8(%ebp),%edx
 8799a27:	8b 7d 10             	mov    0x10(%ebp),%edi
 8799a2a:	8b 83 74 fd ff ff    	mov    -0x28c(%ebx),%eax
 8799a30:	83 c0 08             	add    $0x8,%eax
 8799a33:	89 02                	mov    %eax,(%edx)
 8799a35:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8799a38:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8799a3d:	c7 04 24 14 01 00 00 	movl   $0x114,(%esp)
 8799a44:	e8 57 72 fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8799a49:	89 c6                	mov    %eax,%esi
 8799a4b:	8d 80 80 00 00 00    	lea    0x80(%eax),%eax
 8799a51:	89 06                	mov    %eax,(%esi)
 8799a53:	8d 86 c0 00 00 00    	lea    0xc0(%esi),%eax
 8799a59:	89 46 04             	mov    %eax,0x4(%esi)
 8799a5c:	8d 86 00 01 00 00    	lea    0x100(%esi),%eax
 8799a62:	89 46 08             	mov    %eax,0x8(%esi)
 8799a65:	8d 46 10             	lea    0x10(%esi),%eax
 8799a68:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8799a6b:	89 04 24             	mov    %eax,(%esp)
 8799a6e:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8799a75:	00 
 8799a76:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8799a7d:	00 
 8799a7e:	e8 4d f1 fb ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8799a83:	8b 83 f4 ff ff ff    	mov    -0xc(%ebx),%eax
 8799a89:	83 c0 08             	add    $0x8,%eax
 8799a8c:	89 46 10             	mov    %eax,0x10(%esi)
 8799a8f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799a92:	89 04 24             	mov    %eax,(%esp)
 8799a95:	e8 16 e9 fc ff       	call   87683b0 <_ZN8TaoCrypt3SHA4InitEv>
 8799a9a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799a9d:	89 04 24             	mov    %eax,(%esp)
 8799aa0:	e8 0b e9 fc ff       	call   87683b0 <_ZN8TaoCrypt3SHA4InitEv>
 8799aa5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8799aa8:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799aac:	89 72 04             	mov    %esi,0x4(%edx)
 8799aaf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8799ab2:	89 14 24             	mov    %edx,(%esp)
 8799ab5:	e8 f6 e8 fc ff       	call   87683b0 <_ZN8TaoCrypt3SHA4InitEv>
 8799aba:	83 ff 40             	cmp    $0x40,%edi
 8799abd:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799ac1:	77 5b                	ja     8799b1e <_ZN5yaSSL8HMAC_SHAC1EPKhj+0x10e>
 8799ac3:	8b 06                	mov    (%esi),%eax
 8799ac5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8799ac8:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8799acc:	89 04 24             	mov    %eax,(%esp)
 8799acf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8799ad3:	e8 c8 3d 8e ff       	call   807d8a0 <memcpy@plt>
 8799ad8:	b8 40 00 00 00       	mov    $0x40,%eax
 8799add:	29 f8                	sub    %edi,%eax
 8799adf:	03 3e                	add    (%esi),%edi
 8799ae1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8799ae5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8799aec:	00 
 8799aed:	89 3c 24             	mov    %edi,(%esp)
 8799af0:	e8 cb 41 8e ff       	call   807dcc0 <memset@plt>
 8799af5:	31 c0                	xor    %eax,%eax
 8799af7:	90                   	nop
 8799af8:	8b 16                	mov    (%esi),%edx
 8799afa:	8b 4e 04             	mov    0x4(%esi),%ecx
 8799afd:	0f b6 14 02          	movzbl (%edx,%eax,1),%edx
 8799b01:	83 f2 5c             	xor    $0x5c,%edx
 8799b04:	88 14 01             	mov    %dl,(%ecx,%eax,1)
 8799b07:	8b 16                	mov    (%esi),%edx
 8799b09:	01 c2                	add    %eax,%edx
 8799b0b:	83 c0 01             	add    $0x1,%eax
 8799b0e:	80 32 36             	xorb   $0x36,(%edx)
 8799b11:	83 f8 40             	cmp    $0x40,%eax
 8799b14:	75 e2                	jne    8799af8 <_ZN5yaSSL8HMAC_SHAC1EPKhj+0xe8>
 8799b16:	83 c4 2c             	add    $0x2c,%esp
 8799b19:	5b                   	pop    %ebx
 8799b1a:	5e                   	pop    %esi
 8799b1b:	5f                   	pop    %edi
 8799b1c:	5d                   	pop    %ebp
 8799b1d:	c3                   	ret
 8799b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799b21:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8799b24:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8799b28:	bf 14 00 00 00       	mov    $0x14,%edi
 8799b2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799b31:	89 14 24             	mov    %edx,(%esp)
 8799b34:	e8 27 61 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 8799b39:	8b 06                	mov    (%esi),%eax
 8799b3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799b3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8799b42:	89 04 24             	mov    %eax,(%esp)
 8799b45:	e8 46 f2 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799b4a:	b8 2c 00 00 00       	mov    $0x2c,%eax
 8799b4f:	eb 8e                	jmp    8799adf <_ZN5yaSSL8HMAC_SHAC1EPKhj+0xcf>
 8799b51:	90                   	nop
 8799b52:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799b59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_SHA::HMAC_SHA @ 0x8799a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::HMAC_SHA(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_SHA::HMAC_SHA(HMAC_SHA *this,uchar *param_1,uint param_2)

{
  HASHwithTransform *this_00;
  int *piVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c90c + 8;
  piVar1 = operator_new(0x114,in_stack_ffffffc8 & 0xffffff00);
  *piVar1 = (int)(piVar1 + 0x20);
  piVar1[1] = (int)(piVar1 + 0x30);
  piVar1[2] = (int)(piVar1 + 0x40);
  this_00 = (HASHwithTransform *)(piVar1 + 4);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,5,0x40);
  piVar1[4] = (int)(PTR_vtable_0936cb8c + 8);
  TaoCrypt::SHA::Init((SHA *)this_00);
  TaoCrypt::SHA::Init((SHA *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  *(int **)(this + 4) = piVar1;
  TaoCrypt::SHA::Init((SHA *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  if (param_2 < 0x41) {
    memcpy((void *)*piVar1,param_1,param_2);
    __n = 0x40 - param_2;
    uVar4 = param_2;
  }
  else {
    uVar4 = 0x14;
    TaoCrypt::SHA::Update((SHA *)this_00,param_1,param_2);
    TaoCrypt::HASHwithTransform::Final(this_00,(uchar *)*piVar1);
    __n = 0x2c;
  }
  memset((void *)(uVar4 + *piVar1),0,__n);
  iVar2 = 0;
  do {
    *(byte *)(piVar1[1] + iVar2) = *(byte *)(*piVar1 + iVar2) ^ 0x5c;
    pbVar3 = (byte *)(*piVar1 + iVar2);
    iVar2 = iVar2 + 1;
    *pbVar3 = *pbVar3 ^ 0x36;
  } while (iVar2 != 0x40);
  return;
}

```

---

## get_digest

```asm
// === 08799890 yaSSL::HMAC_SHA::get_digest  [0x08799890-0x879997f] ===
 8799890:	55                   	push   %ebp
 8799891:	89 e5                	mov    %esp,%ebp
 8799893:	83 ec 38             	sub    $0x38,%esp
 8799896:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8799899:	8b 7d 08             	mov    0x8(%ebp),%edi
 879989c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879989f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87998a2:	e8 51 95 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87998a7:	81 c3 f1 32 bd 00    	add    $0xbd32f1,%ebx
 87998ad:	8b 77 04             	mov    0x4(%edi),%esi
 87998b0:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 87998b4:	8d 46 10             	lea    0x10(%esi),%eax
 87998b7:	75 20                	jne    87998d9 <_ZN5yaSSL8HMAC_SHA10get_digestEPhPKhj+0x49>
 87998b9:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 87998c0:	00 
 87998c1:	8b 16                	mov    (%esi),%edx
 87998c3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87998c6:	89 04 24             	mov    %eax,(%esp)
 87998c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87998cd:	e8 8e 63 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 87998d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87998d5:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 87998d9:	8b 55 14             	mov    0x14(%ebp),%edx
 87998dc:	89 04 24             	mov    %eax,(%esp)
 87998df:	89 54 24 08          	mov    %edx,0x8(%esp)
 87998e3:	8b 55 10             	mov    0x10(%ebp),%edx
 87998e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87998ea:	e8 71 63 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 87998ef:	8b 77 04             	mov    0x4(%edi),%esi
 87998f2:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 87998f6:	8d 7e 10             	lea    0x10(%esi),%edi
 87998f9:	75 1a                	jne    8799915 <_ZN5yaSSL8HMAC_SHA10get_digestEPhPKhj+0x85>
 87998fb:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8799902:	00 
 8799903:	8b 06                	mov    (%esi),%eax
 8799905:	89 3c 24             	mov    %edi,(%esp)
 8799908:	89 44 24 04          	mov    %eax,0x4(%esp)
 879990c:	e8 4f 63 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 8799911:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 8799915:	8b 46 08             	mov    0x8(%esi),%eax
 8799918:	89 3c 24             	mov    %edi,(%esp)
 879991b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879991f:	e8 6c f4 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799924:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879992b:	00 
 879992c:	8b 46 04             	mov    0x4(%esi),%eax
 879992f:	89 3c 24             	mov    %edi,(%esp)
 8799932:	89 44 24 04          	mov    %eax,0x4(%esp)
 8799936:	e8 25 63 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 879993b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8799942:	00 
 8799943:	8b 46 08             	mov    0x8(%esi),%eax
 8799946:	89 3c 24             	mov    %edi,(%esp)
 8799949:	89 44 24 04          	mov    %eax,0x4(%esp)
 879994d:	e8 0e 63 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 8799952:	8b 45 0c             	mov    0xc(%ebp),%eax
 8799955:	89 3c 24             	mov    %edi,(%esp)
 8799958:	89 44 24 04          	mov    %eax,0x4(%esp)
 879995c:	e8 2f f4 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 8799961:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 8799965:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8799968:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879996b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879996e:	89 ec                	mov    %ebp,%esp
 8799970:	5d                   	pop    %ebp
 8799971:	c3                   	ret
 8799972:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8799979:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_SHA::get_digest @ 0x8799890

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::get_digest(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::HMAC_SHA::get_digest(HMAC_SHA *this,uchar *param_1,uchar *param_2,uint param_3)

{
  SHA *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),param_2,param_3);
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (SHA *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::SHA::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::SHA::Update(this_00,(uchar *)puVar1[2],0x14);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

```

---

## get_digestSize

```asm
// === 08798550 yaSSL::HMAC_SHA::get_digestSize  [0x08798550-0x879855f] ===
 8798550:	55                   	push   %ebp
 8798551:	b8 14 00 00 00       	mov    $0x14,%eax
 8798556:	89 e5                	mov    %esp,%ebp
 8798558:	5d                   	pop    %ebp
 8798559:	c3                   	ret
 879855a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_SHA::get_digestSize @ 0x8798550

/* yaSSL::HMAC_SHA::get_digestSize() const */

undefined4 yaSSL::HMAC_SHA::get_digestSize(void)

{
  return 0x14;
}

```

---

## get_digest_0879a730

```asm
// === 0879a730 yaSSL::HMAC_SHA::get_digest  [0x0879a730-0x879a7cf] ===
 879a730:	55                   	push   %ebp
 879a731:	89 e5                	mov    %esp,%ebp
 879a733:	83 ec 28             	sub    $0x28,%esp
 879a736:	8b 45 08             	mov    0x8(%ebp),%eax
 879a739:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a73c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a73f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a742:	8b 70 04             	mov    0x4(%eax),%esi
 879a745:	e8 ae 86 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a74a:	81 c3 4e 24 bd 00    	add    $0xbd244e,%ebx
 879a750:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 879a754:	8d 7e 10             	lea    0x10(%esi),%edi
 879a757:	75 1a                	jne    879a773 <_ZN5yaSSL8HMAC_SHA10get_digestEPh+0x43>
 879a759:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a760:	00 
 879a761:	8b 06                	mov    (%esi),%eax
 879a763:	89 3c 24             	mov    %edi,(%esp)
 879a766:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a76a:	e8 f1 54 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 879a76f:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 879a773:	8b 46 08             	mov    0x8(%esi),%eax
 879a776:	89 3c 24             	mov    %edi,(%esp)
 879a779:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a77d:	e8 0e e6 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879a782:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a789:	00 
 879a78a:	8b 46 04             	mov    0x4(%esi),%eax
 879a78d:	89 3c 24             	mov    %edi,(%esp)
 879a790:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a794:	e8 c7 54 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 879a799:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 879a7a0:	00 
 879a7a1:	8b 46 08             	mov    0x8(%esi),%eax
 879a7a4:	89 3c 24             	mov    %edi,(%esp)
 879a7a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a7ab:	e8 b0 54 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 879a7b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a7b3:	89 3c 24             	mov    %edi,(%esp)
 879a7b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a7ba:	e8 d1 e5 fb ff       	call   8758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>
 879a7bf:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
 879a7c3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a7c6:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a7c9:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a7cc:	89 ec                	mov    %ebp,%esp
 879a7ce:	5d                   	pop    %ebp
 879a7cf:	c3                   	ret

```

```c
// yaSSL::HMAC_SHA::get_digest @ 0x879a730

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::get_digest(unsigned char*) */

void __thiscall yaSSL::HMAC_SHA::get_digest(HMAC_SHA *this,uchar *param_1)

{
  SHA *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  this_00 = (SHA *)(puVar1 + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update(this_00,(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,(uchar *)puVar1[2]);
  TaoCrypt::SHA::Update(this_00,(uchar *)puVar1[1],0x40);
  TaoCrypt::SHA::Update(this_00,(uchar *)puVar1[2],0x14);
  TaoCrypt::HASHwithTransform::Final((HASHwithTransform *)this_00,param_1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}

```

---

## get_padSize

```asm
// === 08798560 yaSSL::HMAC_SHA::get_padSize  [0x08798560-0x879856f] ===
 8798560:	55                   	push   %ebp
 8798561:	b8 28 00 00 00       	mov    $0x28,%eax
 8798566:	89 e5                	mov    %esp,%ebp
 8798568:	5d                   	pop    %ebp
 8798569:	c3                   	ret
 879856a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_SHA::get_padSize @ 0x8798560

/* yaSSL::HMAC_SHA::get_padSize() const */

undefined4 yaSSL::HMAC_SHA::get_padSize(void)

{
  return 0x28;
}

```

---

## update

```asm
// === 0879a300 yaSSL::HMAC_SHA::update  [0x0879a300-0x879a36f] ===
 879a300:	55                   	push   %ebp
 879a301:	89 e5                	mov    %esp,%ebp
 879a303:	83 ec 28             	sub    $0x28,%esp
 879a306:	8b 45 08             	mov    0x8(%ebp),%eax
 879a309:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879a30c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879a30f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879a312:	8b 70 04             	mov    0x4(%eax),%esi
 879a315:	e8 de 8a f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879a31a:	81 c3 7e 28 bd 00    	add    $0xbd287e,%ebx
 879a320:	80 7e 0c 00          	cmpb   $0x0,0xc(%esi)
 879a324:	8d 7e 10             	lea    0x10(%esi),%edi
 879a327:	75 1a                	jne    879a343 <_ZN5yaSSL8HMAC_SHA6updateEPKhj+0x43>
 879a329:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 879a330:	00 
 879a331:	8b 06                	mov    (%esi),%eax
 879a333:	89 3c 24             	mov    %edi,(%esp)
 879a336:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a33a:	e8 21 59 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 879a33f:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
 879a343:	8b 45 10             	mov    0x10(%ebp),%eax
 879a346:	89 3c 24             	mov    %edi,(%esp)
 879a349:	89 44 24 08          	mov    %eax,0x8(%esp)
 879a34d:	8b 45 0c             	mov    0xc(%ebp),%eax
 879a350:	89 44 24 04          	mov    %eax,0x4(%esp)
 879a354:	e8 07 59 fd ff       	call   876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>
 879a359:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879a35c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879a35f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879a362:	89 ec                	mov    %ebp,%esp
 879a364:	5d                   	pop    %ebp
 879a365:	c3                   	ret
 879a366:	8d 76 00             	lea    0x0(%esi),%esi
 879a369:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::HMAC_SHA::update @ 0x879a300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_SHA::update(HMAC_SHA *this,uchar *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (*(char *)(puVar1 + 3) == '\0') {
    TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),(uchar *)*puVar1,0x40);
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  TaoCrypt::SHA::Update((SHA *)(puVar1 + 4),param_1,param_2);
  return;
}

```

---

## ~HMAC_SHA

```asm
// === 08798b00 yaSSL::HMAC_SHA::~HMAC_SHA  [0x08798b00-0x8798b5f] ===
 8798b00:	55                   	push   %ebp
 8798b01:	89 e5                	mov    %esp,%ebp
 8798b03:	83 ec 18             	sub    $0x18,%esp
 8798b06:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798b09:	e8 ea a2 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798b0e:	81 c3 8a 40 bd 00    	add    $0xbd408a,%ebx
 8798b14:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798b17:	8b 75 08             	mov    0x8(%ebp),%esi
 8798b1a:	8b 83 74 fd ff ff    	mov    -0x28c(%ebx),%eax
 8798b20:	83 c0 08             	add    $0x8,%eax
 8798b23:	89 06                	mov    %eax,(%esi)
 8798b25:	8b 46 04             	mov    0x4(%esi),%eax
 8798b28:	85 c0                	test   %eax,%eax
 8798b2a:	74 0c                	je     8798b38 <_ZN5yaSSL8HMAC_SHAD1Ev+0x38>
 8798b2c:	8b 93 c4 ff ff ff    	mov    -0x3c(%ebx),%edx
 8798b32:	83 c2 08             	add    $0x8,%edx
 8798b35:	89 50 10             	mov    %edx,0x10(%eax)
 8798b38:	89 04 24             	mov    %eax,(%esp)
 8798b3b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798b40:	e8 db 7c fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8798b45:	8b 83 28 fb ff ff    	mov    -0x4d8(%ebx),%eax
 8798b4b:	83 c0 08             	add    $0x8,%eax
 8798b4e:	89 06                	mov    %eax,(%esi)
 8798b50:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798b53:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798b56:	89 ec                	mov    %ebp,%esp
 8798b58:	5d                   	pop    %ebp
 8798b59:	c3                   	ret
 8798b5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::HMAC_SHA::~HMAC_SHA @ 0x8798b00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::~HMAC_SHA() */

void __thiscall yaSSL::HMAC_SHA::~HMAC_SHA(HMAC_SHA *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0936c90c + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x10) = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(iVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}

```

---

## ~HMAC_SHA_08798b60

```asm
// === 08798b60 yaSSL::HMAC_SHA::~HMAC_SHA  [0x08798b60-0x8798b8f] ===
 8798b60:	55                   	push   %ebp
 8798b61:	89 e5                	mov    %esp,%ebp
 8798b63:	53                   	push   %ebx
 8798b64:	e8 8f a2 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798b69:	81 c3 2f 40 bd 00    	add    $0xbd402f,%ebx
 8798b6f:	83 ec 14             	sub    $0x14,%esp
 8798b72:	8b 45 08             	mov    0x8(%ebp),%eax
 8798b75:	89 04 24             	mov    %eax,(%esp)
 8798b78:	e8 83 ff ff ff       	call   8798b00 <_ZN5yaSSL8HMAC_SHAD1Ev>
 8798b7d:	83 c4 14             	add    $0x14,%esp
 8798b80:	5b                   	pop    %ebx
 8798b81:	5d                   	pop    %ebp
 8798b82:	c3                   	ret
 8798b83:	90                   	nop
 8798b84:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8798b8a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::HMAC_SHA::~HMAC_SHA @ 0x8798b60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::~HMAC_SHA() */

void __thiscall yaSSL::HMAC_SHA::~HMAC_SHA(HMAC_SHA *this)

{
  ~HMAC_SHA(this);
  return;
}

```

